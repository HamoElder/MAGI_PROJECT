// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : BlockDMACore
// Git hash  : 67f129201e20f87ae1cc1df1af41955d77102f75


`define BDMAReadCCHStates_binary_sequential_type [1:0]
`define BDMAReadCCHStates_binary_sequential_IDLE 2'b00
`define BDMAReadCCHStates_binary_sequential_REQ 2'b01
`define BDMAReadCCHStates_binary_sequential_HALT 2'b10

`define BDMAReadAxiStates_binary_sequential_type [1:0]
`define BDMAReadAxiStates_binary_sequential_IDLE 2'b00
`define BDMAReadAxiStates_binary_sequential_REQ 2'b01
`define BDMAReadAxiStates_binary_sequential_BURST 2'b10
`define BDMAReadAxiStates_binary_sequential_FINISH 2'b11


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
  input               m2s_desc_valid,
  output              m2s_desc_ready,
  input      [15:0]   m2s_desc_addr,
  input      [29:0]   m2s_desc_total_bytes,
  input      [1:0]    m2s_desc_burst,
  input      [3:0]    m2s_desc_id,
  input               m2s_intr_en,
  output              intr_m2s,
  input               clk,
  input               reset
);
  wire                m2s_inst_dma_ar_valid;
  wire       [15:0]   m2s_inst_dma_ar_payload_addr;
  wire       [3:0]    m2s_inst_dma_ar_payload_id;
  wire       [7:0]    m2s_inst_dma_ar_payload_len;
  wire       [2:0]    m2s_inst_dma_ar_payload_size;
  wire       [1:0]    m2s_inst_dma_ar_payload_burst;
  wire                m2s_inst_dma_r_ready;
  wire                m2s_inst_dma_cch_ready;
  wire                m2s_inst_intr_m2s;

  BlockDMARead m2s_inst (
    .dma_ar_valid                        (m2s_inst_dma_ar_valid          ), //o
    .dma_ar_ready                        (axi4Data_ar_ready              ), //i
    .dma_ar_payload_addr                 (m2s_inst_dma_ar_payload_addr   ), //o
    .dma_ar_payload_id                   (m2s_inst_dma_ar_payload_id     ), //o
    .dma_ar_payload_len                  (m2s_inst_dma_ar_payload_len    ), //o
    .dma_ar_payload_size                 (m2s_inst_dma_ar_payload_size   ), //o
    .dma_ar_payload_burst                (m2s_inst_dma_ar_payload_burst  ), //o
    .dma_r_valid                         (axi4Data_r_valid               ), //i
    .dma_r_ready                         (m2s_inst_dma_r_ready           ), //o
    .dma_r_payload_data                  (axi4Data_r_payload_data        ), //i
    .dma_r_payload_id                    (axi4Data_r_payload_id          ), //i
    .dma_r_payload_resp                  (axi4Data_r_payload_resp        ), //i
    .dma_r_payload_last                  (axi4Data_r_payload_last        ), //i
    .dma_cch_valid                       (m2s_desc_valid                 ), //i
    .dma_cch_ready                       (m2s_inst_dma_cch_ready         ), //o
    .dma_cch_payload_desc_addr           (m2s_desc_addr                  ), //i
    .dma_cch_payload_desc_total_bytes    (m2s_desc_total_bytes           ), //i
    .dma_cch_payload_desc_burst          (m2s_desc_burst                 ), //i
    .dma_cch_payload_desc_id             (m2s_desc_id                    ), //i
    .intr_m2s                            (m2s_inst_intr_m2s              ), //o
    .clk                                 (clk                            ), //i
    .reset                               (reset                          )  //i
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
  input               dma_cch_valid,
  output              dma_cch_ready,
  input      [15:0]   dma_cch_payload_desc_addr,
  input      [29:0]   dma_cch_payload_desc_total_bytes,
  input      [1:0]    dma_cch_payload_desc_burst,
  input      [3:0]    dma_cch_payload_desc_id,
  output              intr_m2s,
  input               clk,
  input               reset
);
  wire                dma_rd_req_fifo_io_pop_ready;
  wire                dma_rd_req_fifo_io_push_ready;
  wire                dma_rd_req_fifo_io_pop_valid;
  wire       [15:0]   dma_rd_req_fifo_io_pop_payload_addr;
  wire       [3:0]    dma_rd_req_fifo_io_pop_payload_id;
  wire       [7:0]    dma_rd_req_fifo_io_pop_payload_len;
  wire       [2:0]    dma_rd_req_fifo_io_pop_payload_size;
  wire       [1:0]    dma_rd_req_fifo_io_pop_payload_burst;
  wire       [2:0]    dma_rd_req_fifo_io_occupancy;
  wire       [2:0]    dma_rd_req_fifo_io_availability;
  wire       [15:0]   _zz_fifo_in_addr;
  wire       [29:0]   _zz_when_BlockDMARead_l67;
  wire       [29:0]   _zz_when_BlockDMARead_l67_1;
  wire       [29:0]   _zz_when_BlockDMARead_l67_2;
  wire       [15:0]   _zz_when_BlockDMARead_l67_3;
  wire       [13:0]   _zz_fifo_in_len;
  wire       [15:0]   _zz_fifo_in_len_1;
  wire       [29:0]   _zz_fifo_in_len_2;
  wire       [15:0]   _zz_when_BlockDMARead_l75;
  wire       [15:0]   _zz_when_BlockDMARead_l75_1;
  wire       [15:0]   _zz_when_BlockDMARead_l75_2;
  wire       [13:0]   _zz_fifo_in_len_3;
  wire       [15:0]   _zz_fifo_in_len_4;
  reg        [3:0]    _zz_m2s_strb;
  wire       [1:0]    _zz_m2s_strb_1;
  wire       [15:0]   _zz_m2s_strb_2;
  reg        `BDMAReadCCHStates_binary_sequential_type dma_rd_cch_state;
  reg                 cch_ready;
  reg        [29:0]   cch_total_bytes;
  reg        [3:0]    fifo_in_id;
  reg        [15:0]   fifo_in_addr;
  reg        [7:0]    fifo_in_len;
  wire       [2:0]    fifo_in_size;
  reg        [1:0]    fifo_in_burst;
  reg                 fifo_in_valid;
  wire                dma_cch_fire;
  wire                when_BlockDMARead_l65;
  wire                when_BlockDMARead_l67;
  wire                when_BlockDMARead_l75;
  wire                dma_rd_req_fifo_io_push_fire;
  wire                when_BlockDMARead_l92;
  reg        `BDMAReadAxiStates_binary_sequential_type dma_rd_axi_state;
  wire                fifo_pop_valve;
  wire                r_valve;
  wire       [3:0]    addr_to_strb_0;
  wire       [3:0]    addr_to_strb_1;
  wire       [3:0]    addr_to_strb_2;
  wire       [3:0]    addr_to_strb_3;
  reg        [3:0]    m2s_strb;
  wire                dma_rd_req_fifo_io_pop_fire;
  `ifndef SYNTHESIS
  reg [31:0] dma_rd_cch_state_string;
  reg [47:0] dma_rd_axi_state_string;
  `endif


  assign _zz_fifo_in_addr = dma_cch_payload_desc_addr;
  assign _zz_when_BlockDMARead_l67 = _zz_when_BlockDMARead_l67_1;
  assign _zz_when_BlockDMARead_l67_1 = (_zz_when_BlockDMARead_l67_2 + cch_total_bytes);
  assign _zz_when_BlockDMARead_l67_2 = {14'd0, fifo_in_addr};
  assign _zz_when_BlockDMARead_l67_3 = fifo_in_addr;
  assign _zz_fifo_in_len = (_zz_fifo_in_len_1 >>> 2);
  assign _zz_fifo_in_len_1 = (16'h1000 - (fifo_in_addr & 16'h0fff));
  assign _zz_fifo_in_len_2 = (cch_total_bytes >>> 2);
  assign _zz_when_BlockDMARead_l75 = _zz_when_BlockDMARead_l75_1;
  assign _zz_when_BlockDMARead_l75_1 = (fifo_in_addr + 16'h0040);
  assign _zz_when_BlockDMARead_l75_2 = fifo_in_addr;
  assign _zz_fifo_in_len_3 = (_zz_fifo_in_len_4 >>> 2);
  assign _zz_fifo_in_len_4 = (16'h1000 - (fifo_in_addr & 16'h0fff));
  assign _zz_m2s_strb_2 = dma_cch_payload_desc_addr;
  assign _zz_m2s_strb_1 = _zz_m2s_strb_2[1 : 0];
  StreamFifo dma_rd_req_fifo (
    .io_push_valid            (fifo_in_valid                         ), //i
    .io_push_ready            (dma_rd_req_fifo_io_push_ready         ), //o
    .io_push_payload_addr     (fifo_in_addr                          ), //i
    .io_push_payload_id       (fifo_in_id                            ), //i
    .io_push_payload_len      (fifo_in_len                           ), //i
    .io_push_payload_size     (fifo_in_size                          ), //i
    .io_push_payload_burst    (fifo_in_burst                         ), //i
    .io_pop_valid             (dma_rd_req_fifo_io_pop_valid          ), //o
    .io_pop_ready             (dma_rd_req_fifo_io_pop_ready          ), //i
    .io_pop_payload_addr      (dma_rd_req_fifo_io_pop_payload_addr   ), //o
    .io_pop_payload_id        (dma_rd_req_fifo_io_pop_payload_id     ), //o
    .io_pop_payload_len       (dma_rd_req_fifo_io_pop_payload_len    ), //o
    .io_pop_payload_size      (dma_rd_req_fifo_io_pop_payload_size   ), //o
    .io_pop_payload_burst     (dma_rd_req_fifo_io_pop_payload_burst  ), //o
    .io_flush                 (1'b0                                  ), //i
    .io_occupancy             (dma_rd_req_fifo_io_occupancy          ), //o
    .io_availability          (dma_rd_req_fifo_io_availability       ), //o
    .clk                      (clk                                   ), //i
    .reset                    (reset                                 )  //i
  );
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
    case(dma_rd_cch_state)
      `BDMAReadCCHStates_binary_sequential_IDLE : dma_rd_cch_state_string = "IDLE";
      `BDMAReadCCHStates_binary_sequential_REQ : dma_rd_cch_state_string = "REQ ";
      `BDMAReadCCHStates_binary_sequential_HALT : dma_rd_cch_state_string = "HALT";
      default : dma_rd_cch_state_string = "????";
    endcase
  end
  always @(*) begin
    case(dma_rd_axi_state)
      `BDMAReadAxiStates_binary_sequential_IDLE : dma_rd_axi_state_string = "IDLE  ";
      `BDMAReadAxiStates_binary_sequential_REQ : dma_rd_axi_state_string = "REQ   ";
      `BDMAReadAxiStates_binary_sequential_BURST : dma_rd_axi_state_string = "BURST ";
      `BDMAReadAxiStates_binary_sequential_FINISH : dma_rd_axi_state_string = "FINISH";
      default : dma_rd_axi_state_string = "??????";
    endcase
  end
  `endif

  assign fifo_in_size = 3'b010;
  assign dma_cch_fire = (dma_cch_valid && dma_cch_ready);
  assign when_BlockDMARead_l65 = (cch_total_bytes <= 30'h00000040);
  assign when_BlockDMARead_l67 = (_zz_when_BlockDMARead_l67[12] != _zz_when_BlockDMARead_l67_3[12]);
  assign when_BlockDMARead_l75 = (_zz_when_BlockDMARead_l75[12] != _zz_when_BlockDMARead_l75_2[12]);
  assign dma_rd_req_fifo_io_push_fire = (fifo_in_valid && dma_rd_req_fifo_io_push_ready);
  assign when_BlockDMARead_l92 = ((cch_total_bytes != 30'h0) && (dma_rd_req_fifo_io_availability != 3'b000));
  assign fifo_pop_valve = 1'b0;
  assign r_valve = 1'b0;
  assign addr_to_strb_0 = 4'b1111;
  assign addr_to_strb_1 = 4'b1110;
  assign addr_to_strb_2 = 4'b1100;
  assign addr_to_strb_3 = 4'b1000;
  assign dma_rd_req_fifo_io_pop_fire = (dma_rd_req_fifo_io_pop_valid && dma_rd_req_fifo_io_pop_ready);
  assign dma_cch_ready = cch_ready;
  assign intr_m2s = 1'b1;
  assign dma_ar_payload_addr = dma_rd_req_fifo_io_pop_payload_addr;
  assign dma_ar_payload_id = dma_rd_req_fifo_io_pop_payload_id;
  assign dma_ar_payload_len = dma_rd_req_fifo_io_pop_payload_len;
  assign dma_ar_payload_size = dma_rd_req_fifo_io_pop_payload_size;
  assign dma_ar_payload_burst = dma_rd_req_fifo_io_pop_payload_burst;
  assign dma_ar_valid = (dma_rd_req_fifo_io_pop_valid && fifo_pop_valve);
  assign dma_rd_req_fifo_io_pop_ready = (dma_ar_ready && fifo_pop_valve);
  assign dma_r_ready = 1'b1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      dma_rd_cch_state <= `BDMAReadCCHStates_binary_sequential_IDLE;
      cch_ready <= 1'b0;
      cch_total_bytes <= 30'h0;
      fifo_in_valid <= 1'b0;
      dma_rd_axi_state <= `BDMAReadAxiStates_binary_sequential_IDLE;
    end else begin
      case(dma_rd_cch_state)
        `BDMAReadCCHStates_binary_sequential_IDLE : begin
          cch_total_bytes <= dma_cch_payload_desc_total_bytes;
          fifo_in_valid <= 1'b0;
          if(dma_cch_fire) begin
            dma_rd_cch_state <= `BDMAReadCCHStates_binary_sequential_REQ;
            cch_ready <= 1'b0;
          end else begin
            cch_ready <= 1'b1;
          end
        end
        `BDMAReadCCHStates_binary_sequential_REQ : begin
          if(dma_rd_req_fifo_io_push_fire) begin
            fifo_in_valid <= 1'b0;
            cch_total_bytes <= (cch_total_bytes - 30'h00000040);
            dma_rd_cch_state <= `BDMAReadCCHStates_binary_sequential_HALT;
          end else begin
            fifo_in_valid <= 1'b1;
          end
        end
        default : begin
          if(when_BlockDMARead_l92) begin
            dma_rd_cch_state <= `BDMAReadCCHStates_binary_sequential_REQ;
          end
        end
      endcase
      case(dma_rd_axi_state)
        `BDMAReadAxiStates_binary_sequential_IDLE : begin
          if(dma_rd_req_fifo_io_pop_fire) begin
            dma_rd_axi_state <= `BDMAReadAxiStates_binary_sequential_BURST;
          end
        end
        `BDMAReadAxiStates_binary_sequential_REQ : begin
        end
        `BDMAReadAxiStates_binary_sequential_BURST : begin
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(dma_rd_cch_state)
      `BDMAReadCCHStates_binary_sequential_IDLE : begin
        fifo_in_id <= dma_cch_payload_desc_id;
        fifo_in_addr <= {_zz_fifo_in_addr[15 : 2],2'b00};
        fifo_in_burst <= dma_cch_payload_desc_burst;
      end
      `BDMAReadCCHStates_binary_sequential_REQ : begin
        if(when_BlockDMARead_l65) begin
          if(when_BlockDMARead_l67) begin
            fifo_in_len <= _zz_fifo_in_len[7:0];
          end else begin
            fifo_in_len <= _zz_fifo_in_len_2[7:0];
          end
        end else begin
          if(when_BlockDMARead_l75) begin
            fifo_in_len <= _zz_fifo_in_len_3[7:0];
          end else begin
            fifo_in_len <= 8'h10;
          end
        end
      end
      default : begin
      end
    endcase
    case(dma_rd_axi_state)
      `BDMAReadAxiStates_binary_sequential_IDLE : begin
        m2s_strb <= _zz_m2s_strb;
      end
      `BDMAReadAxiStates_binary_sequential_REQ : begin
      end
      `BDMAReadAxiStates_binary_sequential_BURST : begin
      end
      default : begin
      end
    endcase
  end


endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input      [15:0]   io_push_payload_addr,
  input      [3:0]    io_push_payload_id,
  input      [7:0]    io_push_payload_len,
  input      [2:0]    io_push_payload_size,
  input      [1:0]    io_push_payload_burst,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [15:0]   io_pop_payload_addr,
  output     [3:0]    io_pop_payload_id,
  output     [7:0]    io_pop_payload_len,
  output     [2:0]    io_pop_payload_size,
  output     [1:0]    io_pop_payload_burst,
  input               io_flush,
  output     [2:0]    io_occupancy,
  output     [2:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [32:0]   _zz_logic_ram_port0;
  wire       [1:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [1:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_addr;
  wire       [32:0]   _zz_logic_ram_port_1;
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
  wire       [32:0]   _zz_io_pop_payload_addr;
  wire                when_Stream_l933;
  wire       [1:0]    logic_ptrDif;
  reg [32:0] logic_ram [0:3];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {1'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {1'd0, _zz_logic_popPtr_valueNext_1};
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 2'b11);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 2'b00;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 2'b11);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 2'b00;
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
  assign io_pop_payload_addr = _zz_io_pop_payload_addr[15 : 0];
  assign io_pop_payload_id = _zz_io_pop_payload_addr[19 : 16];
  assign io_pop_payload_len = _zz_io_pop_payload_addr[27 : 20];
  assign io_pop_payload_size = _zz_io_pop_payload_addr[30 : 28];
  assign io_pop_payload_burst = _zz_io_pop_payload_addr[32 : 31];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 2'b00;
      logic_popPtr_value <= 2'b00;
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
