// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : BlockDMACore
// Git hash  : 67f129201e20f87ae1cc1df1af41955d77102f75


`define BDMAReadStates_binary_sequential_type [1:0]
`define BDMAReadStates_binary_sequential_IDLE 2'b00
`define BDMAReadStates_binary_sequential_REQ 2'b01
`define BDMAReadStates_binary_sequential_BURST 2'b10
`define BDMAReadStates_binary_sequential_FINISH 2'b11


module BlockDMACore (
  output              axi4Data_ar_valid,
  input               axi4Data_ar_ready,
  output     [15:0]   axi4Data_ar_payload_addr,
  output     [3:0]    axi4Data_ar_payload_id,
  output     [7:0]    axi4Data_ar_payload_len,
  output     [2:0]    axi4Data_ar_payload_size,
  output     [1:0]    axi4Data_ar_payload_burst,
  input               axi4Data_r_valid,
  output              axi4Data_r_ready,
  input      [31:0]   axi4Data_r_payload_data,
  input      [3:0]    axi4Data_r_payload_id,
  input      [1:0]    axi4Data_r_payload_resp,
  input               axi4Data_r_payload_last,
  output              m2s_channel_stream_valid,
  input               m2s_channel_stream_ready,
  output              m2s_channel_stream_payload_last,
  output     [31:0]   m2s_channel_stream_payload_fragment_data,
  output     [3:0]    m2s_channel_stream_payload_fragment_id,
  output     [3:0]    m2s_channel_stream_payload_fragment_strb,
  output     [3:0]    m2s_channel_stream_payload_fragment_keep_,
  input               m2s_desc_valid,
  output              m2s_desc_ready,
  input      [15:0]   m2s_desc_addr,
  input      [29:0]   m2s_desc_total_bytes,
  input      [1:0]    m2s_desc_burst,
  input      [3:0]    m2s_desc_id,
  input               m2s_intr_en,
  output              intr_m2s,
  input               clk,
  input               resetn
);
  wire                m2s_inst_dma_ar_valid;
  wire       [15:0]   m2s_inst_dma_ar_payload_addr;
  wire       [3:0]    m2s_inst_dma_ar_payload_id;
  wire       [7:0]    m2s_inst_dma_ar_payload_len;
  wire       [2:0]    m2s_inst_dma_ar_payload_size;
  wire       [1:0]    m2s_inst_dma_ar_payload_burst;
  wire                m2s_inst_dma_r_ready;
  wire                m2s_inst_data_m2s_stream_valid;
  wire                m2s_inst_data_m2s_stream_payload_last;
  wire       [31:0]   m2s_inst_data_m2s_stream_payload_fragment_data;
  wire       [3:0]    m2s_inst_data_m2s_stream_payload_fragment_id;
  wire       [3:0]    m2s_inst_data_m2s_stream_payload_fragment_strb;
  wire       [3:0]    m2s_inst_data_m2s_stream_payload_fragment_keep_;
  wire                m2s_inst_dma_cch_ready;
  wire                m2s_inst_intr_m2s;

  BlockDMARead m2s_inst (
    .dma_ar_valid                              (m2s_inst_dma_ar_valid                            ), //o
    .dma_ar_ready                              (axi4Data_ar_ready                                ), //i
    .dma_ar_payload_addr                       (m2s_inst_dma_ar_payload_addr                     ), //o
    .dma_ar_payload_id                         (m2s_inst_dma_ar_payload_id                       ), //o
    .dma_ar_payload_len                        (m2s_inst_dma_ar_payload_len                      ), //o
    .dma_ar_payload_size                       (m2s_inst_dma_ar_payload_size                     ), //o
    .dma_ar_payload_burst                      (m2s_inst_dma_ar_payload_burst                    ), //o
    .dma_r_valid                               (axi4Data_r_valid                                 ), //i
    .dma_r_ready                               (m2s_inst_dma_r_ready                             ), //o
    .dma_r_payload_data                        (axi4Data_r_payload_data                          ), //i
    .dma_r_payload_id                          (axi4Data_r_payload_id                            ), //i
    .dma_r_payload_resp                        (axi4Data_r_payload_resp                          ), //i
    .dma_r_payload_last                        (axi4Data_r_payload_last                          ), //i
    .data_m2s_stream_valid                     (m2s_inst_data_m2s_stream_valid                   ), //o
    .data_m2s_stream_ready                     (m2s_channel_stream_ready                         ), //i
    .data_m2s_stream_payload_last              (m2s_inst_data_m2s_stream_payload_last            ), //o
    .data_m2s_stream_payload_fragment_data     (m2s_inst_data_m2s_stream_payload_fragment_data   ), //o
    .data_m2s_stream_payload_fragment_id       (m2s_inst_data_m2s_stream_payload_fragment_id     ), //o
    .data_m2s_stream_payload_fragment_strb     (m2s_inst_data_m2s_stream_payload_fragment_strb   ), //o
    .data_m2s_stream_payload_fragment_keep_    (m2s_inst_data_m2s_stream_payload_fragment_keep_  ), //o
    .dma_cch_valid                             (m2s_desc_valid                                   ), //i
    .dma_cch_ready                             (m2s_inst_dma_cch_ready                           ), //o
    .dma_cch_payload_desc_addr                 (m2s_desc_addr                                    ), //i
    .dma_cch_payload_desc_total_bytes          (m2s_desc_total_bytes                             ), //i
    .dma_cch_payload_desc_burst                (m2s_desc_burst                                   ), //i
    .dma_cch_payload_desc_id                   (m2s_desc_id                                      ), //i
    .dma_cch_payload_intr_en                   (m2s_intr_en                                      ), //i
    .intr_m2s                                  (m2s_inst_intr_m2s                                ), //o
    .clk                                       (clk                                              ), //i
    .resetn                                    (resetn                                           )  //i
  );
  assign m2s_desc_ready = m2s_inst_dma_cch_ready;
  assign intr_m2s = (m2s_intr_en ? m2s_inst_intr_m2s : 1'b0);
  assign axi4Data_ar_valid = m2s_inst_dma_ar_valid;
  assign axi4Data_ar_payload_addr = m2s_inst_dma_ar_payload_addr;
  assign axi4Data_ar_payload_id = m2s_inst_dma_ar_payload_id;
  assign axi4Data_ar_payload_len = m2s_inst_dma_ar_payload_len;
  assign axi4Data_ar_payload_size = m2s_inst_dma_ar_payload_size;
  assign axi4Data_ar_payload_burst = m2s_inst_dma_ar_payload_burst;
  assign axi4Data_r_ready = m2s_inst_dma_r_ready;
  assign m2s_channel_stream_valid = m2s_inst_data_m2s_stream_valid;
  assign m2s_channel_stream_payload_last = m2s_inst_data_m2s_stream_payload_last;
  assign m2s_channel_stream_payload_fragment_data = m2s_inst_data_m2s_stream_payload_fragment_data;
  assign m2s_channel_stream_payload_fragment_id = m2s_inst_data_m2s_stream_payload_fragment_id;
  assign m2s_channel_stream_payload_fragment_strb = m2s_inst_data_m2s_stream_payload_fragment_strb;
  assign m2s_channel_stream_payload_fragment_keep_ = m2s_inst_data_m2s_stream_payload_fragment_keep_;

endmodule

module BlockDMARead (
  output              dma_ar_valid,
  input               dma_ar_ready,
  output     [15:0]   dma_ar_payload_addr,
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
  output              data_m2s_stream_valid,
  input               data_m2s_stream_ready,
  output              data_m2s_stream_payload_last,
  output     [31:0]   data_m2s_stream_payload_fragment_data,
  output     [3:0]    data_m2s_stream_payload_fragment_id,
  output     [3:0]    data_m2s_stream_payload_fragment_strb,
  output     [3:0]    data_m2s_stream_payload_fragment_keep_,
  input               dma_cch_valid,
  output              dma_cch_ready,
  input      [15:0]   dma_cch_payload_desc_addr,
  input      [29:0]   dma_cch_payload_desc_total_bytes,
  input      [1:0]    dma_cch_payload_desc_burst,
  input      [3:0]    dma_cch_payload_desc_id,
  input               dma_cch_payload_intr_en,
  output              intr_m2s,
  input               clk,
  input               resetn
);
  wire       [15:0]   _zz_ar_addr;
  reg        [3:0]    _zz_m2s_strb;
  wire       [1:0]    _zz_m2s_strb_1;
  wire       [15:0]   _zz_m2s_strb_2;
  wire       [29:0]   _zz_when_BlockDMARead_l83;
  wire       [29:0]   _zz_when_BlockDMARead_l83_1;
  wire       [29:0]   _zz_when_BlockDMARead_l83_2;
  wire       [15:0]   _zz_when_BlockDMARead_l83_3;
  wire       [13:0]   _zz_ar_len;
  wire       [15:0]   _zz_ar_len_1;
  wire       [29:0]   _zz_ar_len_2;
  wire       [15:0]   _zz_when_BlockDMARead_l93;
  wire       [15:0]   _zz_when_BlockDMARead_l93_1;
  wire       [15:0]   _zz_when_BlockDMARead_l93_2;
  wire       [13:0]   _zz_ar_len_3;
  wire       [15:0]   _zz_ar_len_4;
  reg        `BDMAReadStates_binary_sequential_type dma_rd_state;
  reg        [3:0]    ar_id;
  reg        [15:0]   ar_addr;
  reg        [7:0]    ar_len;
  wire       [2:0]    ar_size;
  reg        [1:0]    ar_burst;
  reg                 ar_valid;
  reg                 cch_ready;
  reg        [29:0]   cch_total_bytes;
  reg                 cch_intr_en;
  reg                 r_valve;
  wire       [3:0]    addr_to_strb_0;
  wire       [3:0]    addr_to_strb_1;
  wire       [3:0]    addr_to_strb_2;
  wire       [3:0]    addr_to_strb_3;
  reg        [3:0]    m2s_strb;
  reg        [2:0]    probe;
  wire                dma_cch_fire;
  wire                when_BlockDMARead_l81;
  wire                when_BlockDMARead_l83;
  wire                when_BlockDMARead_l93;
  wire                dma_ar_fire;
  wire                dma_r_fire;
  wire                dma_r_fire_1;
  wire                when_BlockDMARead_l116;
  `ifndef SYNTHESIS
  reg [47:0] dma_rd_state_string;
  `endif


  assign _zz_ar_addr = dma_cch_payload_desc_addr;
  assign _zz_m2s_strb_2 = dma_cch_payload_desc_addr;
  assign _zz_when_BlockDMARead_l83 = _zz_when_BlockDMARead_l83_1;
  assign _zz_when_BlockDMARead_l83_1 = (_zz_when_BlockDMARead_l83_2 + cch_total_bytes);
  assign _zz_when_BlockDMARead_l83_2 = {14'd0, ar_addr};
  assign _zz_when_BlockDMARead_l83_3 = ar_addr;
  assign _zz_ar_len = (_zz_ar_len_1 >>> 2);
  assign _zz_ar_len_1 = (16'h1000 - (ar_addr & 16'h0fff));
  assign _zz_ar_len_2 = (cch_total_bytes >>> 2);
  assign _zz_when_BlockDMARead_l93 = _zz_when_BlockDMARead_l93_1;
  assign _zz_when_BlockDMARead_l93_1 = (ar_addr + 16'h0040);
  assign _zz_when_BlockDMARead_l93_2 = ar_addr;
  assign _zz_ar_len_3 = (_zz_ar_len_4 >>> 2);
  assign _zz_ar_len_4 = (16'h1000 - (ar_addr & 16'h0fff));
  assign _zz_m2s_strb_1 = _zz_m2s_strb_2[1 : 0];
  always @(*) begin
    case(_zz_m2s_strb_1)
      2'b00 : begin
        _zz_m2s_strb = addr_to_strb_0;
      end
      2'b01 : begin
        _zz_m2s_strb = addr_to_strb_1;
      end
      2'b10 : begin
        _zz_m2s_strb = addr_to_strb_2;
      end
      default : begin
        _zz_m2s_strb = addr_to_strb_3;
      end
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(dma_rd_state)
      `BDMAReadStates_binary_sequential_IDLE : dma_rd_state_string = "IDLE  ";
      `BDMAReadStates_binary_sequential_REQ : dma_rd_state_string = "REQ   ";
      `BDMAReadStates_binary_sequential_BURST : dma_rd_state_string = "BURST ";
      `BDMAReadStates_binary_sequential_FINISH : dma_rd_state_string = "FINISH";
      default : dma_rd_state_string = "??????";
    endcase
  end
  `endif

  assign ar_size = 3'b010;
  assign addr_to_strb_0 = 4'b1111;
  assign addr_to_strb_1 = 4'b1110;
  assign addr_to_strb_2 = 4'b1100;
  assign addr_to_strb_3 = 4'b1000;
  assign dma_cch_fire = (dma_cch_valid && dma_cch_ready);
  assign when_BlockDMARead_l81 = (cch_total_bytes <= 30'h00000040);
  assign when_BlockDMARead_l83 = (_zz_when_BlockDMARead_l83[12] != _zz_when_BlockDMARead_l83_3[12]);
  assign when_BlockDMARead_l93 = (_zz_when_BlockDMARead_l93[12] != _zz_when_BlockDMARead_l93_2[12]);
  assign dma_ar_fire = (dma_ar_valid && dma_ar_ready);
  assign dma_r_fire = (dma_r_valid && dma_r_ready);
  assign dma_r_fire_1 = (dma_r_valid && dma_r_ready);
  assign when_BlockDMARead_l116 = ((ar_len == 8'h01) && dma_r_fire_1);
  assign dma_cch_ready = cch_ready;
  assign intr_m2s = 1'b1;
  assign dma_ar_valid = ar_valid;
  assign dma_ar_payload_id = ar_id;
  assign dma_ar_payload_addr = ar_addr;
  assign dma_ar_payload_len = ar_len;
  assign dma_ar_payload_size = ar_size;
  assign dma_ar_payload_burst = ar_burst;
  assign dma_r_ready = (data_m2s_stream_ready && r_valve);
  assign data_m2s_stream_valid = (dma_r_valid && r_valve);
  assign data_m2s_stream_payload_fragment_data = dma_r_payload_data;
  assign data_m2s_stream_payload_last = (cch_total_bytes == 30'h0);
  assign data_m2s_stream_payload_fragment_id = dma_r_payload_id;
  assign data_m2s_stream_payload_fragment_strb = m2s_strb;
  assign data_m2s_stream_payload_fragment_keep_ = m2s_strb;
  always @(posedge clk) begin
    if(!resetn) begin
      dma_rd_state <= `BDMAReadStates_binary_sequential_IDLE;
      ar_burst <= 2'b01;
      ar_valid <= 1'b0;
      cch_ready <= 1'b0;
      cch_total_bytes <= 30'h0;
      cch_intr_en <= 1'b0;
      r_valve <= 1'b0;
      probe <= 3'b101;
    end else begin
      case(dma_rd_state)
        `BDMAReadStates_binary_sequential_IDLE : begin
          ar_burst <= dma_cch_payload_desc_burst;
          ar_valid <= 1'b0;
          cch_total_bytes <= dma_cch_payload_desc_total_bytes;
          cch_intr_en <= dma_cch_payload_intr_en;
          if(dma_cch_fire) begin
            dma_rd_state <= `BDMAReadStates_binary_sequential_REQ;
            cch_ready <= 1'b0;
          end else begin
            cch_ready <= 1'b1;
          end
        end
        `BDMAReadStates_binary_sequential_REQ : begin
          if(when_BlockDMARead_l81) begin
            if(when_BlockDMARead_l83) begin
              probe <= 3'b000;
            end else begin
              probe <= 3'b001;
            end
          end else begin
            if(when_BlockDMARead_l93) begin
              probe <= 3'b010;
            end else begin
              probe <= 3'b011;
            end
          end
          if(dma_ar_fire) begin
            ar_valid <= 1'b0;
            r_valve <= 1'b1;
            dma_rd_state <= `BDMAReadStates_binary_sequential_BURST;
          end else begin
            ar_valid <= 1'b1;
          end
        end
        `BDMAReadStates_binary_sequential_BURST : begin
          if(dma_r_fire) begin
            cch_total_bytes <= (cch_total_bytes - 30'h00000001);
          end
          if(when_BlockDMARead_l116) begin
            r_valve <= 1'b0;
            dma_rd_state <= ((cch_total_bytes == 30'h0) ? `BDMAReadStates_binary_sequential_FINISH : `BDMAReadStates_binary_sequential_REQ);
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(dma_rd_state)
      `BDMAReadStates_binary_sequential_IDLE : begin
        ar_id <= dma_cch_payload_desc_id;
        ar_addr <= {_zz_ar_addr[15 : 2],2'b00};
        m2s_strb <= _zz_m2s_strb;
      end
      `BDMAReadStates_binary_sequential_REQ : begin
        if(when_BlockDMARead_l81) begin
          if(when_BlockDMARead_l83) begin
            ar_len <= _zz_ar_len[7:0];
          end else begin
            ar_len <= _zz_ar_len_2[7:0];
          end
        end else begin
          if(when_BlockDMARead_l93) begin
            ar_len <= _zz_ar_len_3[7:0];
          end else begin
            ar_len <= 8'h10;
          end
        end
      end
      `BDMAReadStates_binary_sequential_BURST : begin
        if(dma_r_fire) begin
          ar_len <= (ar_len - 8'h01);
        end
      end
      default : begin
      end
    endcase
  end


endmodule
