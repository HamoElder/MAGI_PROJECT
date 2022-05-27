// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : BDMAm2s
// Git hash  : 5d7ff74cd2cfb579fca78f32093b885428898498

`timescale 1ns/1ps

module BDMAm2s (
  output              dma_ar_valid,
  input               dma_ar_ready,
  output     [31:0]   dma_ar_payload_addr,
  output     [3:0]    dma_ar_payload_id,
  output     [7:0]    dma_ar_payload_len,
  output     [2:0]    dma_ar_payload_size,
  output     [1:0]    dma_ar_payload_burst,
  input               dma_r_valid,
  output              dma_r_ready,
  input      [31:0]   dma_r_payload_data,
  input      [3:0]    dma_r_payload_id,
  input      [1:0]    dma_r_payload_resp,
  input               dma_r_payload_last,
  output              m2s_data_stream_valid,
  input               m2s_data_stream_ready,
  output     [31:0]   m2s_data_stream_payload_data,
  output     [3:0]    m2s_data_stream_payload_id,
  output     [3:0]    m2s_data_stream_payload_strb,
  output     [3:0]    m2s_data_stream_payload_keep_,
  output              m2s_data_stream_payload_last,
  output     [1:0]    m2s_state,
  input               m2s_cch_valid,
  output              m2s_cch_ready,
  input      [31:0]   m2s_cch_payload_desc_start_addr,
  input      [29:0]   m2s_cch_payload_desc_total_bytes,
  input      [1:0]    m2s_cch_payload_desc_burst,
  input      [3:0]    m2s_cch_payload_desc_id,
  input               m2s_cch_payload_desc_reset,
  output              m2s_intr,
  input               clk,
  input               reset
);
  localparam BDMAm2sStates_IDLE = 2'd0;
  localparam BDMAm2sStates_BURST = 2'd1;
  localparam BDMAm2sStates_FINAL_1 = 2'd2;
  localparam BDMAcchStates_IDLE = 2'd0;
  localparam BDMAcchStates_FIXED_REQ = 2'd1;
  localparam BDMAcchStates_INCR_REQ = 2'd2;
  localparam BDMAcchStates_HALT = 2'd3;

  wire                m2s_ar_fifo_io_pop_ready;
  wire                m2s_ar_fifo_io_push_ready;
  wire                m2s_ar_fifo_io_pop_valid;
  wire       [31:0]   m2s_ar_fifo_io_pop_payload_addr;
  wire       [3:0]    m2s_ar_fifo_io_pop_payload_id;
  wire       [7:0]    m2s_ar_fifo_io_pop_payload_len;
  wire       [2:0]    m2s_ar_fifo_io_pop_payload_size;
  wire       [1:0]    m2s_ar_fifo_io_pop_payload_burst;
  wire       [3:0]    m2s_ar_fifo_io_occupancy;
  wire       [3:0]    m2s_ar_fifo_io_availability;
  wire                m2s_trans_bytes_fifo_io_push_ready;
  wire                m2s_trans_bytes_fifo_io_pop_valid;
  wire       [29:0]   m2s_trans_bytes_fifo_io_pop_payload;
  wire       [3:0]    m2s_trans_bytes_fifo_io_occupancy;
  wire       [3:0]    m2s_trans_bytes_fifo_io_availability;
  wire                m2s_data_fifo_io_push_ready;
  wire                m2s_data_fifo_io_pop_valid;
  wire       [31:0]   m2s_data_fifo_io_pop_payload_data;
  wire       [3:0]    m2s_data_fifo_io_pop_payload_id;
  wire       [3:0]    m2s_data_fifo_io_pop_payload_strb;
  wire       [3:0]    m2s_data_fifo_io_pop_payload_keep_;
  wire                m2s_data_fifo_io_pop_payload_last;
  wire       [3:0]    m2s_data_fifo_io_occupancy;
  wire       [3:0]    m2s_data_fifo_io_availability;
  wire                len_pending_fifo_io_push_ready;
  wire                len_pending_fifo_io_pop_valid;
  wire       [7:0]    len_pending_fifo_io_pop_payload;
  wire       [2:0]    len_pending_fifo_io_occupancy;
  wire       [2:0]    len_pending_fifo_io_availability;
  wire                id_pending_fifo_io_push_ready;
  wire                id_pending_fifo_io_pop_valid;
  wire       [3:0]    id_pending_fifo_io_pop_payload;
  wire       [2:0]    id_pending_fifo_io_occupancy;
  wire       [2:0]    id_pending_fifo_io_availability;
  wire                trans_pending_fifo_io_push_ready;
  wire                trans_pending_fifo_io_pop_valid;
  wire       [29:0]   trans_pending_fifo_io_pop_payload;
  wire       [2:0]    trans_pending_fifo_io_occupancy;
  wire       [2:0]    trans_pending_fifo_io_availability;
  wire       [29:0]   _zz_aligned_address;
  wire       [31:0]   _zz_when_BDMAm2s_l97;
  wire       [31:0]   _zz_when_BDMAm2s_l97_1;
  wire       [31:0]   _zz_trans_bytes_cnt;
  wire       [29:0]   _zz_m2s_ar_len;
  wire       [31:0]   _zz_m2s_ar_len_1;
  wire       [31:0]   _zz_m2s_ar_len_2;
  wire       [31:0]   _zz_m2s_ar_len_3;
  wire       [31:0]   _zz_cch_address;
  wire       [31:0]   _zz_when_BDMAm2s_l128;
  wire       [31:0]   _zz_when_BDMAm2s_l128_1;
  wire       [19:0]   _zz_when_BDMAm2s_l132;
  wire       [31:0]   _zz_when_BDMAm2s_l132_1;
  wire       [31:0]   _zz_when_BDMAm2s_l132_2;
  wire       [29:0]   _zz_when_BDMAm2s_l132_3;
  wire       [17:0]   _zz_when_BDMAm2s_l132_4;
  wire       [31:0]   _zz_trans_bytes_cnt_1;
  wire       [19:0]   _zz_when_BDMAm2s_l144;
  wire       [31:0]   _zz_when_BDMAm2s_l144_1;
  wire       [31:0]   _zz_trans_bytes_cnt_2;
  wire       [31:0]   _zz_trans_bytes_cnt_3;
  wire       [31:0]   _zz_trans_bytes_cnt_4;
  wire       [29:0]   _zz_m2s_ar_len_4;
  wire       [31:0]   _zz_m2s_ar_len_5;
  wire       [31:0]   _zz_m2s_ar_len_6;
  wire       [31:0]   _zz_m2s_ar_len_7;
  wire       [2:0]    _zz_m2s_axis_strb_keep;
  wire       [2:0]    _zz_m2s_axis_strb_keep_1;
  wire       [1:0]    _zz_m2s_axis_strb_keep_2;
  wire       [5:0]    _zz_m2s_r_payload;
  wire       [63:0]   _zz_m2s_r_payload_1;
  wire       [5:0]    _zz_m2s_r_payload_2;
  wire       [2:0]    _zz_m2s_axis_strb_keep_3;
  wire       [2:0]    _zz_m2s_axis_strb_keep_4;
  wire       [1:0]    _zz_m2s_axis_strb_keep_5;
  wire       [63:0]   _zz_m2s_axis_payload;
  wire       [5:0]    _zz_m2s_axis_payload_1;
  reg        [1:0]    m2s_cch_state;
  reg        [1:0]    m2s_r_state;
  reg                 cch_ready;
  reg        [29:0]   cch_total_bytes;
  reg        [31:0]   cch_address;
  reg        [1:0]    cch_burst_type;
  reg        [3:0]    cch_id;
  reg        [29:0]   trans_bytes_cnt;
  reg        [7:0]    m2s_ar_len;
  reg                 m2s_ar_valid;
  reg                 m2s_ar_halt_exec;
  wire       [31:0]   aligned_address;
  reg                 cycle_finished;
  reg        [1:0]    m2s_bytes_shift;
  wire                m2s_cch_fire;
  wire                when_BDMAm2s_l81;
  wire                m2s_ar_fifo_io_push_fire;
  wire                m2s_ar_fifo_io_push_fire_1;
  wire                when_BDMAm2s_l97;
  wire                when_BDMAm2s_l111;
  wire                m2s_ar_fifo_io_push_fire_2;
  wire                m2s_ar_fifo_io_push_fire_3;
  wire                when_BDMAm2s_l128;
  wire                when_BDMAm2s_l132;
  wire                when_BDMAm2s_l144;
  wire                when_BDMAm2s_l156;
  wire                dma_ar_fire;
  wire       [3:0]    keep_strb_full;
  reg                 pending_valid;
  reg        [7:0]    len_pending;
  reg        [29:0]   trans_pending;
  reg        [3:0]    id_pending;
  wire                dma_ar_fire_1;
  wire                _zz_dma_ar_valid;
  wire                ar_finish;
  reg                 pending_fifo_pop_ready;
  reg                 m2s_r_valve;
  reg        [31:0]   m2s_r_payload;
  reg        [31:0]   m2s_r_residual_payload;
  reg                 m2s_r_req;
  reg                 m2s_r_first;
  reg        [7:0]    m2s_r_len;
  reg                 m2s_r_last_cycle;
  reg        [31:0]   m2s_axis_payload;
  reg        [3:0]    m2s_axis_strb_keep;
  reg                 m2s_axis_valid;
  reg                 m2s_axis_last;
  reg        [1:0]    m2s_axis_low_bytes;
  reg        [3:0]    m2s_axis_id;
  reg        [29:0]   m2s_axis_trans_bytes;
  wire                len_pending_fifo_io_pop_fire;
  wire                when_BDMAm2s_l264;
  wire                dma_r_fire;
  wire                when_BDMAm2s_l287;
  wire                when_BDMAm2s_l293;
  wire                when_BDMAm2s_l307;
  wire                when_BDMAm2s_l342;
  wire                m2s_data_fifo_io_pop_fire;
  wire                when_BDMAm2s_l344;
  `ifndef SYNTHESIS
  reg [55:0] m2s_state_string;
  reg [71:0] m2s_cch_state_string;
  reg [55:0] m2s_r_state_string;
  `endif


  assign _zz_aligned_address = (cch_address >>> 2);
  assign _zz_when_BDMAm2s_l97 = (_zz_when_BDMAm2s_l97_1 + (cch_address & 32'h00000003));
  assign _zz_when_BDMAm2s_l97_1 = {2'd0, cch_total_bytes};
  assign _zz_trans_bytes_cnt = (32'h00000040 - (cch_address & 32'h00000003));
  assign _zz_m2s_ar_len = (_zz_m2s_ar_len_1 >>> 2);
  assign _zz_m2s_ar_len_1 = (_zz_m2s_ar_len_2 - 32'h00000001);
  assign _zz_m2s_ar_len_2 = (_zz_m2s_ar_len_3 + (cch_address & 32'h00000003));
  assign _zz_m2s_ar_len_3 = {2'd0, trans_bytes_cnt};
  assign _zz_cch_address = {2'd0, trans_bytes_cnt};
  assign _zz_when_BDMAm2s_l128 = (_zz_when_BDMAm2s_l128_1 + (cch_address & 32'h00000003));
  assign _zz_when_BDMAm2s_l128_1 = {2'd0, cch_total_bytes};
  assign _zz_when_BDMAm2s_l132 = (_zz_when_BDMAm2s_l132_1 >>> 12);
  assign _zz_when_BDMAm2s_l132_1 = ((cch_address & 32'h00000fff) + _zz_when_BDMAm2s_l132_2);
  assign _zz_when_BDMAm2s_l132_3 = (cch_total_bytes & 30'h00000fff);
  assign _zz_when_BDMAm2s_l132_2 = {2'd0, _zz_when_BDMAm2s_l132_3};
  assign _zz_when_BDMAm2s_l132_4 = ((cch_total_bytes & 30'h00000fff) >>> 12);
  assign _zz_trans_bytes_cnt_1 = (32'h00001000 - (cch_address & 32'h00000fff));
  assign _zz_when_BDMAm2s_l144 = (_zz_when_BDMAm2s_l144_1 >>> 12);
  assign _zz_when_BDMAm2s_l144_1 = ((cch_address & 32'h00000fff) + 32'h00000040);
  assign _zz_trans_bytes_cnt_2 = (_zz_trans_bytes_cnt_3 & 32'h00000fff);
  assign _zz_trans_bytes_cnt_3 = (32'h00001000 - cch_address);
  assign _zz_trans_bytes_cnt_4 = (32'h00000040 - (cch_address & 32'h00000003));
  assign _zz_m2s_ar_len_4 = (_zz_m2s_ar_len_5 >>> 2);
  assign _zz_m2s_ar_len_5 = (_zz_m2s_ar_len_6 - 32'h00000001);
  assign _zz_m2s_ar_len_6 = (_zz_m2s_ar_len_7 + (cch_address & 32'h00000003));
  assign _zz_m2s_ar_len_7 = {2'd0, trans_bytes_cnt};
  assign _zz_m2s_axis_strb_keep = (3'b100 - _zz_m2s_axis_strb_keep_1);
  assign _zz_m2s_axis_strb_keep_2 = m2s_axis_trans_bytes[1 : 0];
  assign _zz_m2s_axis_strb_keep_1 = {1'd0, _zz_m2s_axis_strb_keep_2};
  assign _zz_m2s_r_payload = (4'b1000 * m2s_bytes_shift);
  assign _zz_m2s_r_payload_1 = ({dma_r_payload_data,m2s_r_residual_payload} >>> _zz_m2s_r_payload_2);
  assign _zz_m2s_r_payload_2 = (4'b1000 * m2s_bytes_shift);
  assign _zz_m2s_axis_strb_keep_3 = (3'b100 - _zz_m2s_axis_strb_keep_4);
  assign _zz_m2s_axis_strb_keep_5 = m2s_axis_trans_bytes[1 : 0];
  assign _zz_m2s_axis_strb_keep_4 = {1'd0, _zz_m2s_axis_strb_keep_5};
  assign _zz_m2s_axis_payload = ({32'h0,m2s_r_residual_payload} >>> _zz_m2s_axis_payload_1);
  assign _zz_m2s_axis_payload_1 = (4'b1000 * m2s_bytes_shift);
  StreamFifo m2s_ar_fifo (
    .io_push_valid         (m2s_ar_valid                         ), //i
    .io_push_ready         (m2s_ar_fifo_io_push_ready            ), //o
    .io_push_payload_addr  (aligned_address[31:0]                ), //i
    .io_push_payload_id    (cch_id[3:0]                          ), //i
    .io_push_payload_len   (m2s_ar_len[7:0]                      ), //i
    .io_push_payload_size  (3'b010                               ), //i
    .io_push_payload_burst (cch_burst_type[1:0]                  ), //i
    .io_pop_valid          (m2s_ar_fifo_io_pop_valid             ), //o
    .io_pop_ready          (m2s_ar_fifo_io_pop_ready             ), //i
    .io_pop_payload_addr   (m2s_ar_fifo_io_pop_payload_addr[31:0]), //o
    .io_pop_payload_id     (m2s_ar_fifo_io_pop_payload_id[3:0]   ), //o
    .io_pop_payload_len    (m2s_ar_fifo_io_pop_payload_len[7:0]  ), //o
    .io_pop_payload_size   (m2s_ar_fifo_io_pop_payload_size[2:0] ), //o
    .io_pop_payload_burst  (m2s_ar_fifo_io_pop_payload_burst[1:0]), //o
    .io_flush              (1'b0                                 ), //i
    .io_occupancy          (m2s_ar_fifo_io_occupancy[3:0]        ), //o
    .io_availability       (m2s_ar_fifo_io_availability[3:0]     ), //o
    .clk                   (clk                                  ), //i
    .reset                 (reset                                )  //i
  );
  StreamFifo_1 m2s_trans_bytes_fifo (
    .io_push_valid   (m2s_ar_valid                             ), //i
    .io_push_ready   (m2s_trans_bytes_fifo_io_push_ready       ), //o
    .io_push_payload (trans_bytes_cnt[29:0]                    ), //i
    .io_pop_valid    (m2s_trans_bytes_fifo_io_pop_valid        ), //o
    .io_pop_ready    (dma_ar_fire                              ), //i
    .io_pop_payload  (m2s_trans_bytes_fifo_io_pop_payload[29:0]), //o
    .io_flush        (1'b0                                     ), //i
    .io_occupancy    (m2s_trans_bytes_fifo_io_occupancy[3:0]   ), //o
    .io_availability (m2s_trans_bytes_fifo_io_availability[3:0]), //o
    .clk             (clk                                      ), //i
    .reset           (reset                                    )  //i
  );
  StreamFifo_2 m2s_data_fifo (
    .io_push_valid         (m2s_axis_valid                         ), //i
    .io_push_ready         (m2s_data_fifo_io_push_ready            ), //o
    .io_push_payload_data  (m2s_axis_payload[31:0]                 ), //i
    .io_push_payload_id    (m2s_axis_id[3:0]                       ), //i
    .io_push_payload_strb  (m2s_axis_strb_keep[3:0]                ), //i
    .io_push_payload_keep_ (m2s_axis_strb_keep[3:0]                ), //i
    .io_push_payload_last  (m2s_axis_last                          ), //i
    .io_pop_valid          (m2s_data_fifo_io_pop_valid             ), //o
    .io_pop_ready          (m2s_data_stream_ready                  ), //i
    .io_pop_payload_data   (m2s_data_fifo_io_pop_payload_data[31:0]), //o
    .io_pop_payload_id     (m2s_data_fifo_io_pop_payload_id[3:0]   ), //o
    .io_pop_payload_strb   (m2s_data_fifo_io_pop_payload_strb[3:0] ), //o
    .io_pop_payload_keep_  (m2s_data_fifo_io_pop_payload_keep_[3:0]), //o
    .io_pop_payload_last   (m2s_data_fifo_io_pop_payload_last      ), //o
    .io_flush              (1'b0                                   ), //i
    .io_occupancy          (m2s_data_fifo_io_occupancy[3:0]        ), //o
    .io_availability       (m2s_data_fifo_io_availability[3:0]     ), //o
    .clk                   (clk                                    ), //i
    .reset                 (reset                                  )  //i
  );
  StreamFifo_3 len_pending_fifo (
    .io_push_valid   (pending_valid                        ), //i
    .io_push_ready   (len_pending_fifo_io_push_ready       ), //o
    .io_push_payload (len_pending[7:0]                     ), //i
    .io_pop_valid    (len_pending_fifo_io_pop_valid        ), //o
    .io_pop_ready    (pending_fifo_pop_ready               ), //i
    .io_pop_payload  (len_pending_fifo_io_pop_payload[7:0] ), //o
    .io_flush        (1'b0                                 ), //i
    .io_occupancy    (len_pending_fifo_io_occupancy[2:0]   ), //o
    .io_availability (len_pending_fifo_io_availability[2:0]), //o
    .clk             (clk                                  ), //i
    .reset           (reset                                )  //i
  );
  StreamFifo_4 id_pending_fifo (
    .io_push_valid   (pending_valid                       ), //i
    .io_push_ready   (id_pending_fifo_io_push_ready       ), //o
    .io_push_payload (id_pending[3:0]                     ), //i
    .io_pop_valid    (id_pending_fifo_io_pop_valid        ), //o
    .io_pop_ready    (pending_fifo_pop_ready              ), //i
    .io_pop_payload  (id_pending_fifo_io_pop_payload[3:0] ), //o
    .io_flush        (1'b0                                ), //i
    .io_occupancy    (id_pending_fifo_io_occupancy[2:0]   ), //o
    .io_availability (id_pending_fifo_io_availability[2:0]), //o
    .clk             (clk                                 ), //i
    .reset           (reset                               )  //i
  );
  StreamFifo_5 trans_pending_fifo (
    .io_push_valid   (pending_valid                          ), //i
    .io_push_ready   (trans_pending_fifo_io_push_ready       ), //o
    .io_push_payload (trans_pending[29:0]                    ), //i
    .io_pop_valid    (trans_pending_fifo_io_pop_valid        ), //o
    .io_pop_ready    (pending_fifo_pop_ready                 ), //i
    .io_pop_payload  (trans_pending_fifo_io_pop_payload[29:0]), //o
    .io_flush        (1'b0                                   ), //i
    .io_occupancy    (trans_pending_fifo_io_occupancy[2:0]   ), //o
    .io_availability (trans_pending_fifo_io_availability[2:0]), //o
    .clk             (clk                                    ), //i
    .reset           (reset                                  )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(m2s_state)
      BDMAm2sStates_IDLE : m2s_state_string = "IDLE   ";
      BDMAm2sStates_BURST : m2s_state_string = "BURST  ";
      BDMAm2sStates_FINAL_1 : m2s_state_string = "FINAL_1";
      default : m2s_state_string = "???????";
    endcase
  end
  always @(*) begin
    case(m2s_cch_state)
      BDMAcchStates_IDLE : m2s_cch_state_string = "IDLE     ";
      BDMAcchStates_FIXED_REQ : m2s_cch_state_string = "FIXED_REQ";
      BDMAcchStates_INCR_REQ : m2s_cch_state_string = "INCR_REQ ";
      BDMAcchStates_HALT : m2s_cch_state_string = "HALT     ";
      default : m2s_cch_state_string = "?????????";
    endcase
  end
  always @(*) begin
    case(m2s_r_state)
      BDMAm2sStates_IDLE : m2s_r_state_string = "IDLE   ";
      BDMAm2sStates_BURST : m2s_r_state_string = "BURST  ";
      BDMAm2sStates_FINAL_1 : m2s_r_state_string = "FINAL_1";
      default : m2s_r_state_string = "???????";
    endcase
  end
  `endif

  assign aligned_address = {_zz_aligned_address,2'b00};
  assign m2s_cch_fire = (m2s_cch_valid && m2s_cch_ready);
  assign when_BDMAm2s_l81 = (cch_total_bytes == 30'h0);
  assign m2s_ar_fifo_io_push_fire = (m2s_ar_valid && m2s_ar_fifo_io_push_ready);
  assign m2s_ar_fifo_io_push_fire_1 = (m2s_ar_valid && m2s_ar_fifo_io_push_ready);
  assign when_BDMAm2s_l97 = ((_zz_when_BDMAm2s_l97 <= 32'h00000040) || 1'b0);
  assign when_BDMAm2s_l111 = (cch_total_bytes == 30'h0);
  assign m2s_ar_fifo_io_push_fire_2 = (m2s_ar_valid && m2s_ar_fifo_io_push_ready);
  assign m2s_ar_fifo_io_push_fire_3 = (m2s_ar_valid && m2s_ar_fifo_io_push_ready);
  assign when_BDMAm2s_l128 = ((_zz_when_BDMAm2s_l128 <= 32'h00000040) || 1'b0);
  assign when_BDMAm2s_l132 = ((_zz_when_BDMAm2s_l132 != 20'h0) || (_zz_when_BDMAm2s_l132_4 != 18'h0));
  assign when_BDMAm2s_l144 = (_zz_when_BDMAm2s_l144 != 20'h0);
  assign when_BDMAm2s_l156 = (m2s_cch_payload_desc_reset && cycle_finished);
  assign m2s_cch_ready = cch_ready;
  assign dma_ar_fire = (dma_ar_valid && dma_ar_ready);
  assign keep_strb_full = 4'b1111;
  assign dma_ar_fire_1 = (dma_ar_valid && dma_ar_ready);
  assign _zz_dma_ar_valid = (! (3'b011 <= len_pending_fifo_io_occupancy));
  assign m2s_ar_fifo_io_pop_ready = (dma_ar_ready && _zz_dma_ar_valid);
  assign dma_ar_valid = (m2s_ar_fifo_io_pop_valid && _zz_dma_ar_valid);
  assign dma_ar_payload_addr = m2s_ar_fifo_io_pop_payload_addr;
  assign dma_ar_payload_id = m2s_ar_fifo_io_pop_payload_id;
  assign dma_ar_payload_len = m2s_ar_fifo_io_pop_payload_len;
  assign dma_ar_payload_size = m2s_ar_fifo_io_pop_payload_size;
  assign dma_ar_payload_burst = m2s_ar_fifo_io_pop_payload_burst;
  assign ar_finish = (((! len_pending_fifo_io_pop_valid) && (m2s_cch_state == BDMAcchStates_HALT)) && (! m2s_ar_fifo_io_pop_valid));
  assign len_pending_fifo_io_pop_fire = (len_pending_fifo_io_pop_valid && pending_fifo_pop_ready);
  assign when_BDMAm2s_l264 = (m2s_axis_trans_bytes < 30'h00000004);
  assign dma_r_fire = (dma_r_valid && dma_r_ready);
  assign when_BDMAm2s_l287 = ((! m2s_r_first) && (m2s_r_len == 8'h0));
  assign when_BDMAm2s_l293 = (m2s_r_len == 8'h0);
  assign when_BDMAm2s_l307 = (m2s_axis_trans_bytes != 30'h0);
  assign dma_r_ready = ((4'b0010 < m2s_data_fifo_io_availability) && m2s_r_valve);
  assign m2s_data_stream_valid = m2s_data_fifo_io_pop_valid;
  assign m2s_data_stream_payload_data = m2s_data_fifo_io_pop_payload_data;
  assign m2s_data_stream_payload_id = m2s_data_fifo_io_pop_payload_id;
  assign m2s_data_stream_payload_strb = m2s_data_fifo_io_pop_payload_strb;
  assign m2s_data_stream_payload_keep_ = m2s_data_fifo_io_pop_payload_keep_;
  assign m2s_data_stream_payload_last = m2s_data_fifo_io_pop_payload_last;
  assign when_BDMAm2s_l342 = (m2s_cch_state == BDMAcchStates_IDLE);
  assign m2s_data_fifo_io_pop_fire = (m2s_data_fifo_io_pop_valid && m2s_data_stream_ready);
  assign when_BDMAm2s_l344 = (m2s_data_fifo_io_pop_payload_last && m2s_data_fifo_io_pop_fire);
  assign m2s_intr = cycle_finished;
  assign m2s_state = m2s_r_state;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      m2s_cch_state <= BDMAcchStates_IDLE;
      m2s_r_state <= BDMAm2sStates_IDLE;
      cch_ready <= 1'b0;
      m2s_ar_valid <= 1'b0;
      m2s_ar_halt_exec <= 1'b0;
      cycle_finished <= 1'b0;
      m2s_bytes_shift <= 2'b00;
      pending_valid <= 1'b0;
      pending_fifo_pop_ready <= 1'b0;
      m2s_r_valve <= 1'b0;
      m2s_r_req <= 1'b0;
      m2s_r_first <= 1'b0;
      m2s_r_last_cycle <= 1'b0;
      m2s_axis_valid <= 1'b0;
      m2s_axis_last <= 1'b0;
      m2s_axis_trans_bytes <= 30'h0;
    end else begin
      case(m2s_cch_state)
        BDMAcchStates_IDLE : begin
          if(m2s_cch_fire) begin
            cch_ready <= 1'b0;
            m2s_bytes_shift <= m2s_cch_payload_desc_start_addr[1 : 0];
            case(m2s_cch_payload_desc_burst)
              2'b00 : begin
                m2s_cch_state <= BDMAcchStates_FIXED_REQ;
              end
              default : begin
                m2s_cch_state <= BDMAcchStates_INCR_REQ;
              end
            endcase
          end else begin
            cch_ready <= 1'b1;
          end
        end
        BDMAcchStates_FIXED_REQ : begin
          if(when_BDMAm2s_l81) begin
            m2s_cch_state <= BDMAcchStates_HALT;
          end else begin
            if(m2s_ar_fifo_io_push_fire) begin
              m2s_ar_halt_exec <= 1'b0;
            end else begin
              m2s_ar_halt_exec <= 1'b1;
            end
          end
          if(m2s_ar_fifo_io_push_fire_1) begin
            m2s_ar_valid <= 1'b0;
          end else begin
            if(m2s_ar_halt_exec) begin
              m2s_ar_valid <= 1'b1;
            end
          end
        end
        BDMAcchStates_INCR_REQ : begin
          if(when_BDMAm2s_l111) begin
            m2s_cch_state <= BDMAcchStates_HALT;
          end else begin
            if(m2s_ar_fifo_io_push_fire_2) begin
              m2s_ar_halt_exec <= 1'b0;
            end else begin
              m2s_ar_halt_exec <= 1'b1;
            end
          end
          if(m2s_ar_fifo_io_push_fire_3) begin
            m2s_ar_valid <= 1'b0;
          end else begin
            if(m2s_ar_halt_exec) begin
              m2s_ar_valid <= 1'b1;
            end
          end
        end
        default : begin
          if(when_BDMAm2s_l156) begin
            m2s_cch_state <= BDMAcchStates_IDLE;
            m2s_bytes_shift <= 2'b00;
          end
        end
      endcase
      if(dma_ar_fire_1) begin
        pending_valid <= 1'b1;
      end else begin
        pending_valid <= 1'b0;
      end
      case(m2s_r_state)
        BDMAm2sStates_IDLE : begin
          if(len_pending_fifo_io_pop_fire) begin
            m2s_r_valve <= 1'b1;
            pending_fifo_pop_ready <= 1'b0;
            m2s_axis_trans_bytes <= (m2s_axis_trans_bytes + trans_pending_fifo_io_pop_payload);
            m2s_r_state <= BDMAm2sStates_BURST;
          end else begin
            m2s_r_valve <= 1'b0;
            pending_fifo_pop_ready <= 1'b1;
          end
          m2s_axis_valid <= 1'b0;
          m2s_axis_last <= 1'b0;
          m2s_r_req <= 1'b0;
          m2s_r_last_cycle <= 1'b0;
        end
        BDMAm2sStates_BURST : begin
          if(m2s_r_req) begin
            if(when_BDMAm2s_l264) begin
              m2s_axis_trans_bytes <= 30'h0;
            end else begin
              m2s_axis_trans_bytes <= (m2s_axis_trans_bytes - 30'h00000004);
            end
            m2s_axis_valid <= 1'b1;
            if(m2s_r_last_cycle) begin
              pending_fifo_pop_ready <= (! ar_finish);
              m2s_r_state <= (ar_finish ? BDMAm2sStates_FINAL_1 : BDMAm2sStates_IDLE);
              m2s_axis_last <= (ar_finish && (m2s_axis_trans_bytes <= 30'h00000004));
            end
          end else begin
            m2s_axis_valid <= 1'b0;
          end
          if(dma_r_fire) begin
            m2s_r_first <= 1'b1;
            if(when_BDMAm2s_l293) begin
              m2s_r_last_cycle <= 1'b1;
              m2s_r_valve <= 1'b0;
              m2s_r_req <= 1'b1;
            end else begin
              m2s_r_req <= m2s_r_first;
            end
          end else begin
            m2s_r_req <= 1'b0;
          end
        end
        default : begin
          m2s_r_first <= 1'b0;
          if(when_BDMAm2s_l307) begin
            m2s_axis_trans_bytes <= 30'h0;
            m2s_axis_last <= 1'b1;
            m2s_axis_valid <= 1'b1;
          end else begin
            m2s_axis_valid <= 1'b0;
            m2s_axis_last <= 1'b0;
          end
          pending_fifo_pop_ready <= 1'b1;
          m2s_r_state <= BDMAm2sStates_IDLE;
        end
      endcase
      if(when_BDMAm2s_l342) begin
        cycle_finished <= 1'b0;
      end else begin
        if(when_BDMAm2s_l344) begin
          cycle_finished <= 1'b1;
        end
      end
    end
  end

  always @(posedge clk) begin
    case(m2s_cch_state)
      BDMAcchStates_IDLE : begin
        if(m2s_cch_fire) begin
          cch_address <= m2s_cch_payload_desc_start_addr;
          cch_total_bytes <= m2s_cch_payload_desc_total_bytes;
          cch_burst_type <= m2s_cch_payload_desc_burst;
          cch_id <= m2s_cch_payload_desc_id;
        end
      end
      BDMAcchStates_FIXED_REQ : begin
        if(!when_BDMAm2s_l81) begin
          if(m2s_ar_fifo_io_push_fire) begin
            cch_total_bytes <= (cch_total_bytes - trans_bytes_cnt);
          end
        end
        if(when_BDMAm2s_l97) begin
          trans_bytes_cnt <= cch_total_bytes;
        end else begin
          trans_bytes_cnt <= _zz_trans_bytes_cnt[29:0];
        end
        m2s_ar_len <= _zz_m2s_ar_len[7:0];
      end
      BDMAcchStates_INCR_REQ : begin
        if(!when_BDMAm2s_l111) begin
          if(m2s_ar_fifo_io_push_fire_2) begin
            cch_address <= (cch_address + _zz_cch_address);
            cch_total_bytes <= (cch_total_bytes - trans_bytes_cnt);
          end
        end
        if(when_BDMAm2s_l128) begin
          if(when_BDMAm2s_l132) begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_1[29:0];
          end else begin
            trans_bytes_cnt <= cch_total_bytes;
          end
        end else begin
          if(when_BDMAm2s_l144) begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_2[29:0];
          end else begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_4[29:0];
          end
        end
        m2s_ar_len <= _zz_m2s_ar_len_4[7:0];
      end
      default : begin
      end
    endcase
    if(dma_ar_fire_1) begin
      len_pending <= dma_ar_payload_len;
      trans_pending <= m2s_trans_bytes_fifo_io_pop_payload;
      id_pending <= m2s_ar_fifo_io_pop_payload_id;
    end
    case(m2s_r_state)
      BDMAm2sStates_IDLE : begin
        if(len_pending_fifo_io_pop_fire) begin
          m2s_r_len <= len_pending_fifo_io_pop_payload;
          m2s_axis_id <= id_pending_fifo_io_pop_payload;
        end
      end
      BDMAm2sStates_BURST : begin
        if(m2s_r_req) begin
          if(when_BDMAm2s_l264) begin
            m2s_axis_strb_keep <= (keep_strb_full >>> _zz_m2s_axis_strb_keep);
          end else begin
            m2s_axis_strb_keep <= keep_strb_full;
          end
          m2s_axis_payload <= m2s_r_payload;
        end
        if(dma_r_fire) begin
          m2s_r_len <= (m2s_r_len - 8'h01);
          m2s_r_residual_payload <= dma_r_payload_data;
          if(when_BDMAm2s_l287) begin
            m2s_r_payload <= (dma_r_payload_data >>> _zz_m2s_r_payload);
          end else begin
            m2s_r_payload <= _zz_m2s_r_payload_1[31:0];
          end
        end
      end
      default : begin
        if(when_BDMAm2s_l307) begin
          m2s_axis_strb_keep <= (keep_strb_full >>> _zz_m2s_axis_strb_keep_3[1 : 0]);
          m2s_axis_payload <= _zz_m2s_axis_payload[31:0];
        end
      end
    endcase
  end


endmodule

module StreamFifo_5 (
  input               io_push_valid,
  output              io_push_ready,
  input      [29:0]   io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [29:0]   io_pop_payload,
  input               io_flush,
  output reg [2:0]    io_occupancy,
  output reg [2:0]    io_availability,
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
  wire       [2:0]    _zz_io_occupancy;
  wire       [2:0]    _zz_io_availability;
  wire       [2:0]    _zz_io_availability_1;
  wire       [2:0]    _zz_io_availability_2;
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
  wire                when_Stream_l1021;
  wire       [2:0]    logic_ptrDif;
  reg [29:0] logic_ram [0:4];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {2'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {2'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (3'b101 + logic_ptrDif);
  assign _zz_io_availability = (3'b101 + _zz_io_availability_1);
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 3'b100);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 3'b000;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 3'b100);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 3'b000;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
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
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 3'b101 : 3'b000);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 3'b000 : 3'b101);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

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
      if(when_Stream_l1021) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module StreamFifo_4 (
  input               io_push_valid,
  output              io_push_ready,
  input      [3:0]    io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [3:0]    io_pop_payload,
  input               io_flush,
  output reg [2:0]    io_occupancy,
  output reg [2:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [3:0]    _zz_logic_ram_port0;
  wire       [2:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [2:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [3:0]    _zz_logic_ram_port_1;
  wire       [2:0]    _zz_io_occupancy;
  wire       [2:0]    _zz_io_availability;
  wire       [2:0]    _zz_io_availability_1;
  wire       [2:0]    _zz_io_availability_2;
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
  wire                when_Stream_l1021;
  wire       [2:0]    logic_ptrDif;
  reg [3:0] logic_ram [0:4];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {2'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {2'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (3'b101 + logic_ptrDif);
  assign _zz_io_availability = (3'b101 + _zz_io_availability_1);
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 3'b100);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 3'b000;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 3'b100);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 3'b000;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
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
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 3'b101 : 3'b000);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 3'b000 : 3'b101);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

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
      if(when_Stream_l1021) begin
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
  output reg [2:0]    io_occupancy,
  output reg [2:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [7:0]    _zz_logic_ram_port0;
  wire       [2:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [2:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [7:0]    _zz_logic_ram_port_1;
  wire       [2:0]    _zz_io_occupancy;
  wire       [2:0]    _zz_io_availability;
  wire       [2:0]    _zz_io_availability_1;
  wire       [2:0]    _zz_io_availability_2;
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
  wire                when_Stream_l1021;
  wire       [2:0]    logic_ptrDif;
  reg [7:0] logic_ram [0:4];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {2'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {2'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (3'b101 + logic_ptrDif);
  assign _zz_io_availability = (3'b101 + _zz_io_availability_1);
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 3'b100);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 3'b000;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 3'b100);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 3'b000;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
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
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 3'b101 : 3'b000);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 3'b000 : 3'b101);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

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
      if(when_Stream_l1021) begin
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
  output     [3:0]    io_occupancy,
  output     [3:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [44:0]   _zz_logic_ram_port0;
  wire       [2:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [2:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_data;
  wire       [44:0]   _zz_logic_ram_port_1;
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
  wire       [44:0]   _zz_io_pop_payload_data;
  wire                when_Stream_l1021;
  wire       [2:0]    logic_ptrDif;
  reg [44:0] logic_ram [0:7];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {2'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {2'd0, _zz_logic_popPtr_valueNext_1};
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
  assign _zz_io_pop_payload_data = _zz_logic_ram_port0;
  assign io_pop_payload_data = _zz_io_pop_payload_data[31 : 0];
  assign io_pop_payload_id = _zz_io_pop_payload_data[35 : 32];
  assign io_pop_payload_strb = _zz_io_pop_payload_data[39 : 36];
  assign io_pop_payload_keep_ = _zz_io_pop_payload_data[43 : 40];
  assign io_pop_payload_last = _zz_io_pop_payload_data[44];
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
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
      if(when_Stream_l1021) begin
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
  wire                when_Stream_l1021;
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
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
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
      if(when_Stream_l1021) begin
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
  wire                when_Stream_l1021;
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
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
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
      if(when_Stream_l1021) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule
