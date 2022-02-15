// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : BDMAm2s
// Git hash  : 15584b1e2cb13eebcfd6eb36c7575145e9f8b46e


`define BDMAcchStates_binary_sequential_type [1:0]
`define BDMAcchStates_binary_sequential_IDLE 2'b00
`define BDMAcchStates_binary_sequential_FIXED_REQ 2'b01
`define BDMAcchStates_binary_sequential_INCR_REQ 2'b10
`define BDMAcchStates_binary_sequential_HALT 2'b11

`define BDMm2sStates_binary_sequential_type [1:0]
`define BDMm2sStates_binary_sequential_IDLE 2'b00
`define BDMm2sStates_binary_sequential_BURST 2'b01
`define BDMm2sStates_binary_sequential_HALT 2'b10
`define BDMm2sStates_binary_sequential_ERROR 2'b11


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
  output              m2s_data_stream_payload_last,
  output     [31:0]   m2s_data_stream_payload_fragment_data,
  output     [3:0]    m2s_data_stream_payload_fragment_id,
  output     [3:0]    m2s_data_stream_payload_fragment_strb,
  output     [3:0]    m2s_data_stream_payload_fragment_keep_,
  input               soft_reset,
  input               m2s_cch_valid,
  output              m2s_cch_ready,
  input      [31:0]   m2s_cch_payload_desc_start_addr,
  input      [29:0]   m2s_cch_payload_desc_total_bytes,
  input      [1:0]    m2s_cch_payload_desc_burst,
  input      [3:0]    m2s_cch_payload_desc_id,
  input               clk,
  input               resetn
);
  wire                m2s_ar_fifo_io_pop_ready;
  wire       [1:0]    low_addr_fifo_io_push_payload;
  wire                m2s_data_fifo_io_push_valid;
  wire                m2s_ar_fifo_io_push_ready;
  wire                m2s_ar_fifo_io_pop_valid;
  wire       [31:0]   m2s_ar_fifo_io_pop_payload_addr;
  wire       [3:0]    m2s_ar_fifo_io_pop_payload_id;
  wire       [7:0]    m2s_ar_fifo_io_pop_payload_len;
  wire       [2:0]    m2s_ar_fifo_io_pop_payload_size;
  wire       [1:0]    m2s_ar_fifo_io_pop_payload_burst;
  wire       [3:0]    m2s_ar_fifo_io_occupancy;
  wire       [3:0]    m2s_ar_fifo_io_availability;
  wire                low_addr_fifo_io_push_ready;
  wire                low_addr_fifo_io_pop_valid;
  wire       [1:0]    low_addr_fifo_io_pop_payload;
  wire       [3:0]    low_addr_fifo_io_occupancy;
  wire       [3:0]    low_addr_fifo_io_availability;
  wire                trans_bytes_fifo_io_push_ready;
  wire                trans_bytes_fifo_io_pop_valid;
  wire       [29:0]   trans_bytes_fifo_io_pop_payload;
  wire       [3:0]    trans_bytes_fifo_io_occupancy;
  wire       [3:0]    trans_bytes_fifo_io_availability;
  wire                m2s_data_fifo_io_push_ready;
  wire                m2s_data_fifo_io_pop_valid;
  wire                m2s_data_fifo_io_pop_payload_last;
  wire       [31:0]   m2s_data_fifo_io_pop_payload_fragment_data;
  wire       [3:0]    m2s_data_fifo_io_pop_payload_fragment_id;
  wire       [3:0]    m2s_data_fifo_io_pop_payload_fragment_strb;
  wire       [3:0]    m2s_data_fifo_io_pop_payload_fragment_keep_;
  wire       [5:0]    m2s_data_fifo_io_occupancy;
  wire       [5:0]    m2s_data_fifo_io_availability;
  wire       [29:0]   _zz_aligned_address;
  wire       [31:0]   _zz_when_BDMAm2s_l100;
  wire       [31:0]   _zz_when_BDMAm2s_l100_1;
  wire       [31:0]   _zz_trans_bytes_cnt;
  wire       [29:0]   _zz_m2s_ar_len;
  wire       [31:0]   _zz_m2s_ar_len_1;
  wire       [31:0]   _zz_m2s_ar_len_2;
  wire       [31:0]   _zz_m2s_ar_len_3;
  wire       [31:0]   _zz_cch_address;
  wire       [31:0]   _zz_when_BDMAm2s_l131;
  wire       [31:0]   _zz_when_BDMAm2s_l131_1;
  wire       [19:0]   _zz_when_BDMAm2s_l135;
  wire       [31:0]   _zz_when_BDMAm2s_l135_1;
  wire       [31:0]   _zz_when_BDMAm2s_l135_2;
  wire       [29:0]   _zz_when_BDMAm2s_l135_3;
  wire       [17:0]   _zz_when_BDMAm2s_l135_4;
  wire       [31:0]   _zz_trans_bytes_cnt_1;
  wire       [19:0]   _zz_when_BDMAm2s_l147;
  wire       [31:0]   _zz_when_BDMAm2s_l147_1;
  wire       [31:0]   _zz_trans_bytes_cnt_2;
  wire       [31:0]   _zz_trans_bytes_cnt_3;
  wire       [31:0]   _zz_trans_bytes_cnt_4;
  wire       [29:0]   _zz_m2s_ar_len_4;
  wire       [31:0]   _zz_m2s_ar_len_5;
  wire       [31:0]   _zz_m2s_ar_len_6;
  wire       [31:0]   _zz_m2s_ar_len_7;
  wire       [1:0]    _zz_m2s_axis_keep;
  wire       [1:0]    _zz_m2s_axis_strb;
  wire       [29:0]   _zz_trans_bytes;
  reg        `BDMAcchStates_binary_sequential_type m2s_cch_state;
  reg        `BDMm2sStates_binary_sequential_type m2s_axis_state;
  reg                 m2s_ar_valve;
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
  wire                m2s_cch_fire;
  wire                when_BDMAm2s_l84;
  wire                m2s_ar_fifo_io_push_fire;
  wire                m2s_ar_fifo_io_push_fire_1;
  wire                when_BDMAm2s_l100;
  wire                when_BDMAm2s_l114;
  wire                m2s_ar_fifo_io_push_fire_2;
  wire                m2s_ar_fifo_io_push_fire_3;
  wire                when_BDMAm2s_l131;
  wire                when_BDMAm2s_l135;
  wire                when_BDMAm2s_l147;
  wire                _zz_dma_ar_valid;
  reg                 m2s_r_valve;
  reg        [7:0]    m2s_axis_len;
  reg        [3:0]    m2s_axis_id;
  reg        [3:0]    m2s_axis_strb;
  reg        [3:0]    m2s_axis_keep;
  reg        [29:0]   trans_bytes;
  reg        [1:0]    low_addr;
  wire       [1:0]    keep_strb_full;
  wire                dma_ar_fire;
  wire                dma_r_fire;
  wire                when_BDMAm2s_l234;
  `ifndef SYNTHESIS
  reg [71:0] m2s_cch_state_string;
  reg [39:0] m2s_axis_state_string;
  `endif


  assign _zz_aligned_address = (cch_address >>> 2);
  assign _zz_when_BDMAm2s_l100 = (_zz_when_BDMAm2s_l100_1 + (cch_address & 32'h00000003));
  assign _zz_when_BDMAm2s_l100_1 = {2'd0, cch_total_bytes};
  assign _zz_trans_bytes_cnt = (32'h00000040 - (cch_address & 32'h00000003));
  assign _zz_m2s_ar_len = (_zz_m2s_ar_len_1 >>> 2);
  assign _zz_m2s_ar_len_1 = (_zz_m2s_ar_len_2 - 32'h00000001);
  assign _zz_m2s_ar_len_2 = (_zz_m2s_ar_len_3 + (cch_address & 32'h00000003));
  assign _zz_m2s_ar_len_3 = {2'd0, trans_bytes_cnt};
  assign _zz_cch_address = {2'd0, trans_bytes_cnt};
  assign _zz_when_BDMAm2s_l131 = (_zz_when_BDMAm2s_l131_1 + (cch_address & 32'h00000003));
  assign _zz_when_BDMAm2s_l131_1 = {2'd0, cch_total_bytes};
  assign _zz_when_BDMAm2s_l135 = (_zz_when_BDMAm2s_l135_1 >>> 12);
  assign _zz_when_BDMAm2s_l135_1 = ((cch_address & 32'h00000fff) + _zz_when_BDMAm2s_l135_2);
  assign _zz_when_BDMAm2s_l135_3 = (cch_total_bytes & 30'h00000fff);
  assign _zz_when_BDMAm2s_l135_2 = {2'd0, _zz_when_BDMAm2s_l135_3};
  assign _zz_when_BDMAm2s_l135_4 = ((cch_total_bytes & 30'h00000fff) >>> 12);
  assign _zz_trans_bytes_cnt_1 = (32'h00001000 - (cch_address & 32'h00000fff));
  assign _zz_when_BDMAm2s_l147 = (_zz_when_BDMAm2s_l147_1 >>> 12);
  assign _zz_when_BDMAm2s_l147_1 = ((cch_address & 32'h00000fff) + 32'h00000040);
  assign _zz_trans_bytes_cnt_2 = (_zz_trans_bytes_cnt_3 & 32'h00000fff);
  assign _zz_trans_bytes_cnt_3 = (32'h00001000 - cch_address);
  assign _zz_trans_bytes_cnt_4 = (32'h00000040 - (cch_address & 32'h00000003));
  assign _zz_m2s_ar_len_4 = (_zz_m2s_ar_len_5 >>> 2);
  assign _zz_m2s_ar_len_5 = (_zz_m2s_ar_len_6 - 32'h00000001);
  assign _zz_m2s_ar_len_6 = (_zz_m2s_ar_len_7 + (cch_address & 32'h00000003));
  assign _zz_m2s_ar_len_7 = {2'd0, trans_bytes_cnt};
  assign _zz_m2s_axis_keep = (keep_strb_full >>> low_addr_fifo_io_pop_payload);
  assign _zz_m2s_axis_strb = (keep_strb_full >>> low_addr_fifo_io_pop_payload);
  assign _zz_trans_bytes = {28'd0, low_addr};
  StreamFifo m2s_ar_fifo (
    .io_push_valid            (m2s_ar_valid                      ), //i
    .io_push_ready            (m2s_ar_fifo_io_push_ready         ), //o
    .io_push_payload_addr     (aligned_address                   ), //i
    .io_push_payload_id       (cch_id                            ), //i
    .io_push_payload_len      (m2s_ar_len                        ), //i
    .io_push_payload_size     (3'b010                            ), //i
    .io_push_payload_burst    (cch_burst_type                    ), //i
    .io_pop_valid             (m2s_ar_fifo_io_pop_valid          ), //o
    .io_pop_ready             (m2s_ar_fifo_io_pop_ready          ), //i
    .io_pop_payload_addr      (m2s_ar_fifo_io_pop_payload_addr   ), //o
    .io_pop_payload_id        (m2s_ar_fifo_io_pop_payload_id     ), //o
    .io_pop_payload_len       (m2s_ar_fifo_io_pop_payload_len    ), //o
    .io_pop_payload_size      (m2s_ar_fifo_io_pop_payload_size   ), //o
    .io_pop_payload_burst     (m2s_ar_fifo_io_pop_payload_burst  ), //o
    .io_flush                 (1'b0                              ), //i
    .io_occupancy             (m2s_ar_fifo_io_occupancy          ), //o
    .io_availability          (m2s_ar_fifo_io_availability       ), //o
    .clk                      (clk                               ), //i
    .resetn                   (resetn                            )  //i
  );
  StreamFifo_1 low_addr_fifo (
    .io_push_valid      (m2s_ar_valid                   ), //i
    .io_push_ready      (low_addr_fifo_io_push_ready    ), //o
    .io_push_payload    (low_addr_fifo_io_push_payload  ), //i
    .io_pop_valid       (low_addr_fifo_io_pop_valid     ), //o
    .io_pop_ready       (dma_ar_ready                   ), //i
    .io_pop_payload     (low_addr_fifo_io_pop_payload   ), //o
    .io_flush           (1'b0                           ), //i
    .io_occupancy       (low_addr_fifo_io_occupancy     ), //o
    .io_availability    (low_addr_fifo_io_availability  ), //o
    .clk                (clk                            ), //i
    .resetn             (resetn                         )  //i
  );
  StreamFifo_2 trans_bytes_fifo (
    .io_push_valid      (m2s_ar_valid                      ), //i
    .io_push_ready      (trans_bytes_fifo_io_push_ready    ), //o
    .io_push_payload    (trans_bytes_cnt                   ), //i
    .io_pop_valid       (trans_bytes_fifo_io_pop_valid     ), //o
    .io_pop_ready       (dma_ar_ready                      ), //i
    .io_pop_payload     (trans_bytes_fifo_io_pop_payload   ), //o
    .io_flush           (1'b0                              ), //i
    .io_occupancy       (trans_bytes_fifo_io_occupancy     ), //o
    .io_availability    (trans_bytes_fifo_io_availability  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  StreamFifo_3 m2s_data_fifo (
    .io_push_valid                     (m2s_data_fifo_io_push_valid                  ), //i
    .io_push_ready                     (m2s_data_fifo_io_push_ready                  ), //o
    .io_push_payload_last              (1'b1                                         ), //i
    .io_push_payload_fragment_data     (dma_r_payload_data                           ), //i
    .io_push_payload_fragment_id       (m2s_axis_id                                  ), //i
    .io_push_payload_fragment_strb     (m2s_axis_strb                                ), //i
    .io_push_payload_fragment_keep_    (m2s_axis_keep                                ), //i
    .io_pop_valid                      (m2s_data_fifo_io_pop_valid                   ), //o
    .io_pop_ready                      (m2s_data_stream_ready                        ), //i
    .io_pop_payload_last               (m2s_data_fifo_io_pop_payload_last            ), //o
    .io_pop_payload_fragment_data      (m2s_data_fifo_io_pop_payload_fragment_data   ), //o
    .io_pop_payload_fragment_id        (m2s_data_fifo_io_pop_payload_fragment_id     ), //o
    .io_pop_payload_fragment_strb      (m2s_data_fifo_io_pop_payload_fragment_strb   ), //o
    .io_pop_payload_fragment_keep_     (m2s_data_fifo_io_pop_payload_fragment_keep_  ), //o
    .io_flush                          (1'b0                                         ), //i
    .io_occupancy                      (m2s_data_fifo_io_occupancy                   ), //o
    .io_availability                   (m2s_data_fifo_io_availability                ), //o
    .clk                               (clk                                          ), //i
    .resetn                            (resetn                                       )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(m2s_cch_state)
      `BDMAcchStates_binary_sequential_IDLE : m2s_cch_state_string = "IDLE     ";
      `BDMAcchStates_binary_sequential_FIXED_REQ : m2s_cch_state_string = "FIXED_REQ";
      `BDMAcchStates_binary_sequential_INCR_REQ : m2s_cch_state_string = "INCR_REQ ";
      `BDMAcchStates_binary_sequential_HALT : m2s_cch_state_string = "HALT     ";
      default : m2s_cch_state_string = "?????????";
    endcase
  end
  always @(*) begin
    case(m2s_axis_state)
      `BDMm2sStates_binary_sequential_IDLE : m2s_axis_state_string = "IDLE ";
      `BDMm2sStates_binary_sequential_BURST : m2s_axis_state_string = "BURST";
      `BDMm2sStates_binary_sequential_HALT : m2s_axis_state_string = "HALT ";
      `BDMm2sStates_binary_sequential_ERROR : m2s_axis_state_string = "ERROR";
      default : m2s_axis_state_string = "?????";
    endcase
  end
  `endif

  assign aligned_address = {_zz_aligned_address,2'b00};
  assign m2s_cch_fire = (m2s_cch_valid && m2s_cch_ready);
  assign when_BDMAm2s_l84 = (cch_total_bytes == 30'h0);
  assign m2s_ar_fifo_io_push_fire = (m2s_ar_valid && m2s_ar_fifo_io_push_ready);
  assign m2s_ar_fifo_io_push_fire_1 = (m2s_ar_valid && m2s_ar_fifo_io_push_ready);
  assign when_BDMAm2s_l100 = ((_zz_when_BDMAm2s_l100 <= 32'h00000040) || 1'b0);
  assign when_BDMAm2s_l114 = (cch_total_bytes == 30'h0);
  assign m2s_ar_fifo_io_push_fire_2 = (m2s_ar_valid && m2s_ar_fifo_io_push_ready);
  assign m2s_ar_fifo_io_push_fire_3 = (m2s_ar_valid && m2s_ar_fifo_io_push_ready);
  assign when_BDMAm2s_l131 = ((_zz_when_BDMAm2s_l131 <= 32'h00000040) || 1'b0);
  assign when_BDMAm2s_l135 = ((_zz_when_BDMAm2s_l135 != 20'h0) || (_zz_when_BDMAm2s_l135_4 != 18'h0));
  assign when_BDMAm2s_l147 = (_zz_when_BDMAm2s_l147 != 20'h0);
  assign m2s_cch_ready = cch_ready;
  assign _zz_dma_ar_valid = (! (! m2s_ar_valve));
  assign m2s_ar_fifo_io_pop_ready = (dma_ar_ready && _zz_dma_ar_valid);
  assign dma_ar_valid = (m2s_ar_fifo_io_pop_valid && _zz_dma_ar_valid);
  assign dma_ar_payload_addr = m2s_ar_fifo_io_pop_payload_addr;
  assign dma_ar_payload_id = m2s_ar_fifo_io_pop_payload_id;
  assign dma_ar_payload_len = m2s_ar_fifo_io_pop_payload_len;
  assign dma_ar_payload_size = m2s_ar_fifo_io_pop_payload_size;
  assign dma_ar_payload_burst = m2s_ar_fifo_io_pop_payload_burst;
  assign low_addr_fifo_io_push_payload = cch_address[1 : 0];
  assign keep_strb_full = 2'b11;
  assign dma_ar_fire = (dma_ar_valid && dma_ar_ready);
  assign dma_r_fire = (dma_r_valid && dma_r_ready);
  assign when_BDMAm2s_l234 = (m2s_axis_len == 8'h0);
  assign m2s_data_fifo_io_push_valid = (dma_r_valid && m2s_r_valve);
  assign dma_r_ready = (m2s_data_fifo_io_push_ready && m2s_r_valve);
  assign m2s_data_stream_valid = m2s_data_fifo_io_pop_valid;
  assign m2s_data_stream_payload_last = m2s_data_fifo_io_pop_payload_last;
  assign m2s_data_stream_payload_fragment_data = m2s_data_fifo_io_pop_payload_fragment_data;
  assign m2s_data_stream_payload_fragment_id = m2s_data_fifo_io_pop_payload_fragment_id;
  assign m2s_data_stream_payload_fragment_strb = m2s_data_fifo_io_pop_payload_fragment_strb;
  assign m2s_data_stream_payload_fragment_keep_ = m2s_data_fifo_io_pop_payload_fragment_keep_;
  always @(posedge clk) begin
    if(!resetn) begin
      m2s_cch_state <= `BDMAcchStates_binary_sequential_IDLE;
      m2s_axis_state <= `BDMm2sStates_binary_sequential_IDLE;
      m2s_ar_valve <= 1'b0;
      cch_ready <= 1'b0;
      m2s_ar_valid <= 1'b0;
      m2s_ar_halt_exec <= 1'b0;
      m2s_r_valve <= 1'b0;
    end else begin
      case(m2s_cch_state)
        `BDMAcchStates_binary_sequential_IDLE : begin
          if(m2s_cch_fire) begin
            cch_ready <= 1'b0;
            case(m2s_cch_payload_desc_burst)
              2'b00 : begin
                m2s_cch_state <= `BDMAcchStates_binary_sequential_FIXED_REQ;
              end
              default : begin
                m2s_cch_state <= `BDMAcchStates_binary_sequential_INCR_REQ;
              end
            endcase
          end else begin
            cch_ready <= 1'b1;
          end
        end
        `BDMAcchStates_binary_sequential_FIXED_REQ : begin
          if(when_BDMAm2s_l84) begin
            m2s_cch_state <= `BDMAcchStates_binary_sequential_HALT;
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
        `BDMAcchStates_binary_sequential_INCR_REQ : begin
          if(when_BDMAm2s_l114) begin
            m2s_cch_state <= `BDMAcchStates_binary_sequential_HALT;
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
          if(soft_reset) begin
            m2s_cch_state <= `BDMAcchStates_binary_sequential_IDLE;
          end
        end
      endcase
      case(m2s_axis_state)
        `BDMm2sStates_binary_sequential_IDLE : begin
          if(dma_ar_fire) begin
            m2s_ar_valve <= 1'b0;
            m2s_r_valve <= 1'b1;
            m2s_axis_state <= `BDMm2sStates_binary_sequential_BURST;
          end else begin
            m2s_ar_valve <= 1'b1;
            m2s_r_valve <= 1'b0;
          end
        end
        `BDMm2sStates_binary_sequential_BURST : begin
          if(dma_r_fire) begin
            if(when_BDMAm2s_l234) begin
              m2s_axis_state <= `BDMm2sStates_binary_sequential_IDLE;
            end
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(m2s_cch_state)
      `BDMAcchStates_binary_sequential_IDLE : begin
        if(m2s_cch_fire) begin
          cch_address <= m2s_cch_payload_desc_start_addr;
          cch_total_bytes <= m2s_cch_payload_desc_total_bytes;
          cch_burst_type <= m2s_cch_payload_desc_burst;
          cch_id <= m2s_cch_payload_desc_id;
        end
      end
      `BDMAcchStates_binary_sequential_FIXED_REQ : begin
        if(!when_BDMAm2s_l84) begin
          if(m2s_ar_fifo_io_push_fire) begin
            cch_total_bytes <= (cch_total_bytes - trans_bytes_cnt);
          end
        end
        if(when_BDMAm2s_l100) begin
          trans_bytes_cnt <= cch_total_bytes;
        end else begin
          trans_bytes_cnt <= _zz_trans_bytes_cnt[29:0];
        end
        m2s_ar_len <= _zz_m2s_ar_len[7:0];
      end
      `BDMAcchStates_binary_sequential_INCR_REQ : begin
        if(!when_BDMAm2s_l114) begin
          if(m2s_ar_fifo_io_push_fire_2) begin
            cch_address <= (cch_address + _zz_cch_address);
            cch_total_bytes <= (cch_total_bytes - trans_bytes_cnt);
          end
        end
        if(when_BDMAm2s_l131) begin
          if(when_BDMAm2s_l135) begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_1[29:0];
          end else begin
            trans_bytes_cnt <= cch_total_bytes;
          end
        end else begin
          if(when_BDMAm2s_l147) begin
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
    case(m2s_axis_state)
      `BDMm2sStates_binary_sequential_IDLE : begin
        if(dma_ar_fire) begin
          m2s_axis_len <= m2s_ar_fifo_io_pop_payload_len;
          low_addr <= low_addr_fifo_io_pop_payload;
          m2s_axis_keep <= {2'd0, _zz_m2s_axis_keep};
          m2s_axis_strb <= {2'd0, _zz_m2s_axis_strb};
          trans_bytes <= trans_bytes_fifo_io_pop_payload;
          m2s_axis_id <= m2s_ar_fifo_io_pop_payload_id;
        end
      end
      `BDMm2sStates_binary_sequential_BURST : begin
        if(dma_r_fire) begin
          m2s_axis_len <= (m2s_axis_len - 8'h01);
          trans_bytes <= (trans_bytes - _zz_trans_bytes);
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module StreamFifo_3 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [31:0]   io_push_payload_fragment_data,
  input      [3:0]    io_push_payload_fragment_id,
  input      [3:0]    io_push_payload_fragment_strb,
  input      [3:0]    io_push_payload_fragment_keep_,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [31:0]   io_pop_payload_fragment_data,
  output     [3:0]    io_pop_payload_fragment_id,
  output     [3:0]    io_pop_payload_fragment_strb,
  output     [3:0]    io_pop_payload_fragment_keep_,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               resetn
);
  reg        [44:0]   _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [44:0]   _zz_logic_ram_port_1;
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
  wire       [44:0]   _zz_io_pop_payload_last;
  wire       [43:0]   _zz_io_pop_payload_fragment_data;
  wire                when_Stream_l933;
  wire       [4:0]    logic_ptrDif;
  reg [44:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {{io_push_payload_fragment_keep_,{io_push_payload_fragment_strb,{io_push_payload_fragment_id,io_push_payload_fragment_data}}},io_push_payload_last};
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
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign _zz_io_pop_payload_fragment_data = _zz_io_pop_payload_last[44 : 1];
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment_data = _zz_io_pop_payload_fragment_data[31 : 0];
  assign io_pop_payload_fragment_id = _zz_io_pop_payload_fragment_data[35 : 32];
  assign io_pop_payload_fragment_strb = _zz_io_pop_payload_fragment_data[39 : 36];
  assign io_pop_payload_fragment_keep_ = _zz_io_pop_payload_fragment_data[43 : 40];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk) begin
    if(!resetn) begin
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

module StreamFifo_2 (
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
  input               resetn
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
  always @(posedge clk) begin
    if(!resetn) begin
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
  input               resetn
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
  always @(posedge clk) begin
    if(!resetn) begin
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
  input               resetn
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
  always @(posedge clk) begin
    if(!resetn) begin
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
