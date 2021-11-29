// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Axi4Ram
// Git hash  : 3af1add6119f78f1368f916d771a3e67b4945d16


`define Axi4RamStates_binary_sequential_type [1:0]
`define Axi4RamStates_binary_sequential_IDLE 2'b00
`define Axi4RamStates_binary_sequential_BURST 2'b01
`define Axi4RamStates_binary_sequential_RESP 2'b10


module Axi4Ram (
  input               axi4_awvalid,
  output              axi4_awready,
  input      [12:0]   axi4_awaddr,
  input      [7:0]    axi4_awid,
  input      [7:0]    axi4_awlen,
  input      [2:0]    axi4_awsize,
  input      [1:0]    axi4_awburst,
  input               axi4_wvalid,
  output              axi4_wready,
  input      [31:0]   axi4_wdata,
  input      [3:0]    axi4_wstrb,
  input               axi4_wlast,
  output              axi4_bvalid,
  input               axi4_bready,
  output     [7:0]    axi4_bid,
  output     [1:0]    axi4_bresp,
  input               axi4_arvalid,
  output              axi4_arready,
  input      [12:0]   axi4_araddr,
  input      [7:0]    axi4_arid,
  input      [7:0]    axi4_arlen,
  input      [2:0]    axi4_arsize,
  input      [1:0]    axi4_arburst,
  output              axi4_rvalid,
  input               axi4_rready,
  output     [31:0]   axi4_rdata,
  output     [7:0]    axi4_rid,
  output     [1:0]    axi4_rresp,
  output              axi4_rlast,
  input               clk,
  input               reset
);
  wire                ar_fifo_io_pop_ready;
  wire                aw_fifo_io_pop_ready;
  wire       [31:0]   r_fifo_io_push_payload_data;
  reg        [31:0]   _zz_ram_port0;
  wire                ar_fifo_io_push_ready;
  wire                ar_fifo_io_pop_valid;
  wire       [12:0]   ar_fifo_io_pop_payload_addr;
  wire       [7:0]    ar_fifo_io_pop_payload_id;
  wire       [7:0]    ar_fifo_io_pop_payload_len;
  wire       [2:0]    ar_fifo_io_pop_payload_size;
  wire       [1:0]    ar_fifo_io_pop_payload_burst;
  wire       [2:0]    ar_fifo_io_occupancy;
  wire       [2:0]    ar_fifo_io_availability;
  wire                aw_fifo_io_push_ready;
  wire                aw_fifo_io_pop_valid;
  wire       [12:0]   aw_fifo_io_pop_payload_addr;
  wire       [7:0]    aw_fifo_io_pop_payload_id;
  wire       [7:0]    aw_fifo_io_pop_payload_len;
  wire       [2:0]    aw_fifo_io_pop_payload_size;
  wire       [1:0]    aw_fifo_io_pop_payload_burst;
  wire       [2:0]    aw_fifo_io_occupancy;
  wire       [2:0]    aw_fifo_io_availability;
  wire                b_fifo_io_push_ready;
  wire                b_fifo_io_pop_valid;
  wire       [7:0]    b_fifo_io_pop_payload_id;
  wire       [1:0]    b_fifo_io_pop_payload_resp;
  wire       [2:0]    b_fifo_io_occupancy;
  wire       [2:0]    b_fifo_io_availability;
  wire                r_fifo_io_push_ready;
  wire                r_fifo_io_pop_valid;
  wire       [31:0]   r_fifo_io_pop_payload_data;
  wire       [7:0]    r_fifo_io_pop_payload_id;
  wire       [1:0]    r_fifo_io_pop_payload_resp;
  wire                r_fifo_io_pop_payload_last;
  wire       [8:0]    r_fifo_io_occupancy;
  wire       [8:0]    r_fifo_io_availability;
  wire                _zz_ram_port;
  wire                _zz_io_push_payload_data_1;
  wire       [12:0]   _zz_rd_addr;
  wire       [12:0]   _zz_rd_addr_1;
  wire       [7:0]    _zz_rd_addr_2;
  wire       [10:0]   _zz_ram_port_1;
  wire       [12:0]   _zz_wr_addr;
  wire       [12:0]   _zz_wr_addr_1;
  wire       [7:0]    _zz_wr_addr_2;
  reg        `Axi4RamStates_binary_sequential_type axi4_r_state;
  reg        [7:0]    rd_cnt;
  reg        [12:0]   rd_addr;
  reg        [7:0]    rd_id;
  reg        [2:0]    rd_size;
  reg        [1:0]    rd_burst;
  wire       [10:0]   _zz_io_push_payload_data;
  wire                when_Axi4Ram_l111;
  reg                 _zz_io_push_payload_last;
  reg                 _zz_io_push_valid;
  reg        `Axi4RamStates_binary_sequential_type axi4_w_state;
  reg        [12:0]   wr_addr;
  wire                axi4_w_fire;
  reg        [7:0]    wr_cnt;
  wire                axi4_w_fire_1;
  wire                when_Axi4Ram_l148;
  reg        [2:0]    wr_size;
  reg        [1:0]    wr_burst;
  reg                 b_valid;
  reg        [7:0]    b_id;
  wire                axi4_w_fire_2;
  `ifndef SYNTHESIS
  reg [39:0] axi4_r_state_string;
  reg [39:0] axi4_w_state_string;
  `endif

  reg [7:0] ram_symbol0 [0:2047];
  reg [7:0] ram_symbol1 [0:2047];
  reg [7:0] ram_symbol2 [0:2047];
  reg [7:0] ram_symbol3 [0:2047];
  reg [7:0] _zz_ramsymbol_read;
  reg [7:0] _zz_ramsymbol_read_1;
  reg [7:0] _zz_ramsymbol_read_2;
  reg [7:0] _zz_ramsymbol_read_3;

  assign _zz_rd_addr = (rd_addr + _zz_rd_addr_1);
  assign _zz_rd_addr_2 = ({7'd0,1'b1} <<< rd_size);
  assign _zz_rd_addr_1 = {5'd0, _zz_rd_addr_2};
  assign _zz_wr_addr = (wr_addr + _zz_wr_addr_1);
  assign _zz_wr_addr_2 = ({7'd0,1'b1} <<< wr_size);
  assign _zz_wr_addr_1 = {5'd0, _zz_wr_addr_2};
  assign _zz_io_push_payload_data_1 = 1'b1;
  assign _zz_ram_port_1 = wr_addr[12 : 2];
  initial begin
    $readmemb("Axi4Ram.v_toplevel_ram_symbol0.bin",ram_symbol0);
    $readmemb("Axi4Ram.v_toplevel_ram_symbol1.bin",ram_symbol1);
    $readmemb("Axi4Ram.v_toplevel_ram_symbol2.bin",ram_symbol2);
    $readmemb("Axi4Ram.v_toplevel_ram_symbol3.bin",ram_symbol3);
  end
  always @(*) begin
    _zz_ram_port0 = {_zz_ramsymbol_read_3, _zz_ramsymbol_read_2, _zz_ramsymbol_read_1, _zz_ramsymbol_read};
  end
  always @(posedge clk) begin
    if(_zz_io_push_payload_data_1) begin
      _zz_ramsymbol_read <= ram_symbol0[_zz_io_push_payload_data];
      _zz_ramsymbol_read_1 <= ram_symbol1[_zz_io_push_payload_data];
      _zz_ramsymbol_read_2 <= ram_symbol2[_zz_io_push_payload_data];
      _zz_ramsymbol_read_3 <= ram_symbol3[_zz_io_push_payload_data];
    end
  end

  always @(posedge clk) begin
    if(axi4_wstrb[0] && axi4_w_fire) begin
      ram_symbol0[_zz_ram_port_1] <= axi4_wdata[7 : 0];
    end
    if(axi4_wstrb[1] && axi4_w_fire) begin
      ram_symbol1[_zz_ram_port_1] <= axi4_wdata[15 : 8];
    end
    if(axi4_wstrb[2] && axi4_w_fire) begin
      ram_symbol2[_zz_ram_port_1] <= axi4_wdata[23 : 16];
    end
    if(axi4_wstrb[3] && axi4_w_fire) begin
      ram_symbol3[_zz_ram_port_1] <= axi4_wdata[31 : 24];
    end
  end

  StreamFifo ar_fifo (
    .io_push_valid            (axi4_arvalid                  ), //i
    .io_push_ready            (ar_fifo_io_push_ready         ), //o
    .io_push_payload_addr     (axi4_araddr                   ), //i
    .io_push_payload_id       (axi4_arid                     ), //i
    .io_push_payload_len      (axi4_arlen                    ), //i
    .io_push_payload_size     (axi4_arsize                   ), //i
    .io_push_payload_burst    (axi4_arburst                  ), //i
    .io_pop_valid             (ar_fifo_io_pop_valid          ), //o
    .io_pop_ready             (ar_fifo_io_pop_ready          ), //i
    .io_pop_payload_addr      (ar_fifo_io_pop_payload_addr   ), //o
    .io_pop_payload_id        (ar_fifo_io_pop_payload_id     ), //o
    .io_pop_payload_len       (ar_fifo_io_pop_payload_len    ), //o
    .io_pop_payload_size      (ar_fifo_io_pop_payload_size   ), //o
    .io_pop_payload_burst     (ar_fifo_io_pop_payload_burst  ), //o
    .io_flush                 (1'b0                          ), //i
    .io_occupancy             (ar_fifo_io_occupancy          ), //o
    .io_availability          (ar_fifo_io_availability       ), //o
    .clk                      (clk                           ), //i
    .reset                    (reset                         )  //i
  );
  StreamFifo aw_fifo (
    .io_push_valid            (axi4_awvalid                  ), //i
    .io_push_ready            (aw_fifo_io_push_ready         ), //o
    .io_push_payload_addr     (axi4_awaddr                   ), //i
    .io_push_payload_id       (axi4_awid                     ), //i
    .io_push_payload_len      (axi4_awlen                    ), //i
    .io_push_payload_size     (axi4_awsize                   ), //i
    .io_push_payload_burst    (axi4_awburst                  ), //i
    .io_pop_valid             (aw_fifo_io_pop_valid          ), //o
    .io_pop_ready             (aw_fifo_io_pop_ready          ), //i
    .io_pop_payload_addr      (aw_fifo_io_pop_payload_addr   ), //o
    .io_pop_payload_id        (aw_fifo_io_pop_payload_id     ), //o
    .io_pop_payload_len       (aw_fifo_io_pop_payload_len    ), //o
    .io_pop_payload_size      (aw_fifo_io_pop_payload_size   ), //o
    .io_pop_payload_burst     (aw_fifo_io_pop_payload_burst  ), //o
    .io_flush                 (1'b0                          ), //i
    .io_occupancy             (aw_fifo_io_occupancy          ), //o
    .io_availability          (aw_fifo_io_availability       ), //o
    .clk                      (clk                           ), //i
    .reset                    (reset                         )  //i
  );
  StreamFifo_2 b_fifo (
    .io_push_valid           (b_valid                     ), //i
    .io_push_ready           (b_fifo_io_push_ready        ), //o
    .io_push_payload_id      (b_id                        ), //i
    .io_push_payload_resp    (2'b00                       ), //i
    .io_pop_valid            (b_fifo_io_pop_valid         ), //o
    .io_pop_ready            (axi4_bready                 ), //i
    .io_pop_payload_id       (b_fifo_io_pop_payload_id    ), //o
    .io_pop_payload_resp     (b_fifo_io_pop_payload_resp  ), //o
    .io_flush                (1'b0                        ), //i
    .io_occupancy            (b_fifo_io_occupancy         ), //o
    .io_availability         (b_fifo_io_availability      ), //o
    .clk                     (clk                         ), //i
    .reset                   (reset                       )  //i
  );
  StreamFifo_3 r_fifo (
    .io_push_valid           (_zz_io_push_valid            ), //i
    .io_push_ready           (r_fifo_io_push_ready         ), //o
    .io_push_payload_data    (r_fifo_io_push_payload_data  ), //i
    .io_push_payload_id      (rd_id                        ), //i
    .io_push_payload_resp    (2'b00                        ), //i
    .io_push_payload_last    (_zz_io_push_payload_last     ), //i
    .io_pop_valid            (r_fifo_io_pop_valid          ), //o
    .io_pop_ready            (axi4_rready                  ), //i
    .io_pop_payload_data     (r_fifo_io_pop_payload_data   ), //o
    .io_pop_payload_id       (r_fifo_io_pop_payload_id     ), //o
    .io_pop_payload_resp     (r_fifo_io_pop_payload_resp   ), //o
    .io_pop_payload_last     (r_fifo_io_pop_payload_last   ), //o
    .io_flush                (1'b0                         ), //i
    .io_occupancy            (r_fifo_io_occupancy          ), //o
    .io_availability         (r_fifo_io_availability       ), //o
    .clk                     (clk                          ), //i
    .reset                   (reset                        )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(axi4_r_state)
      `Axi4RamStates_binary_sequential_IDLE : axi4_r_state_string = "IDLE ";
      `Axi4RamStates_binary_sequential_BURST : axi4_r_state_string = "BURST";
      `Axi4RamStates_binary_sequential_RESP : axi4_r_state_string = "RESP ";
      default : axi4_r_state_string = "?????";
    endcase
  end
  always @(*) begin
    case(axi4_w_state)
      `Axi4RamStates_binary_sequential_IDLE : axi4_w_state_string = "IDLE ";
      `Axi4RamStates_binary_sequential_BURST : axi4_w_state_string = "BURST";
      `Axi4RamStates_binary_sequential_RESP : axi4_w_state_string = "RESP ";
      default : axi4_w_state_string = "?????";
    endcase
  end
  `endif

  assign axi4_arready = ar_fifo_io_push_ready;
  assign axi4_awready = aw_fifo_io_push_ready;
  assign axi4_bvalid = b_fifo_io_pop_valid;
  assign axi4_bid = b_fifo_io_pop_payload_id;
  assign axi4_bresp = b_fifo_io_pop_payload_resp;
  assign axi4_rvalid = r_fifo_io_pop_valid;
  assign axi4_rdata = r_fifo_io_pop_payload_data;
  assign axi4_rid = r_fifo_io_pop_payload_id;
  assign axi4_rresp = r_fifo_io_pop_payload_resp;
  assign axi4_rlast = r_fifo_io_pop_payload_last;
  assign _zz_io_push_payload_data = rd_addr[12 : 2];
  assign r_fifo_io_push_payload_data = _zz_ram_port0;
  assign when_Axi4Ram_l111 = (rd_cnt == 8'h0);
  assign ar_fifo_io_pop_ready = (axi4_r_state == `Axi4RamStates_binary_sequential_IDLE);
  assign axi4_w_fire = (axi4_wvalid && axi4_wready);
  assign axi4_w_fire_1 = (axi4_wvalid && axi4_wready);
  assign when_Axi4Ram_l148 = ((wr_cnt == 8'h0) && axi4_w_fire_1);
  assign axi4_w_fire_2 = (axi4_wvalid && axi4_wready);
  assign aw_fifo_io_pop_ready = (axi4_w_state == `Axi4RamStates_binary_sequential_IDLE);
  assign axi4_wready = (axi4_w_state == `Axi4RamStates_binary_sequential_BURST);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      axi4_r_state <= `Axi4RamStates_binary_sequential_IDLE;
      axi4_w_state <= `Axi4RamStates_binary_sequential_IDLE;
      b_valid <= 1'b0;
    end else begin
      case(axi4_r_state)
        `Axi4RamStates_binary_sequential_IDLE : begin
          if(ar_fifo_io_pop_valid) begin
            axi4_r_state <= `Axi4RamStates_binary_sequential_BURST;
          end
        end
        `Axi4RamStates_binary_sequential_BURST : begin
          if(r_fifo_io_push_ready) begin
            if(when_Axi4Ram_l111) begin
              axi4_r_state <= `Axi4RamStates_binary_sequential_IDLE;
            end
          end
        end
        default : begin
        end
      endcase
      case(axi4_w_state)
        `Axi4RamStates_binary_sequential_IDLE : begin
          if(aw_fifo_io_pop_valid) begin
            axi4_w_state <= `Axi4RamStates_binary_sequential_BURST;
          end
        end
        `Axi4RamStates_binary_sequential_BURST : begin
          if(when_Axi4Ram_l148) begin
            axi4_w_state <= `Axi4RamStates_binary_sequential_RESP;
          end
        end
        default : begin
          if(b_fifo_io_push_ready) begin
            axi4_w_state <= `Axi4RamStates_binary_sequential_IDLE;
          end
        end
      endcase
      case(axi4_w_state)
        `Axi4RamStates_binary_sequential_IDLE : begin
          b_valid <= 1'b0;
        end
        `Axi4RamStates_binary_sequential_BURST : begin
        end
        default : begin
          b_valid <= 1'b1;
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(axi4_r_state)
      `Axi4RamStates_binary_sequential_IDLE : begin
        if(ar_fifo_io_pop_valid) begin
          rd_id <= ar_fifo_io_pop_payload_id;
          rd_cnt <= ar_fifo_io_pop_payload_len;
          rd_addr <= ar_fifo_io_pop_payload_addr;
          rd_burst <= ar_fifo_io_pop_payload_burst;
          rd_size <= ((ar_fifo_io_pop_payload_size < 3'b010) ? ar_fifo_io_pop_payload_size : 3'b010);
        end
      end
      `Axi4RamStates_binary_sequential_BURST : begin
        if(r_fifo_io_push_ready) begin
          rd_addr <= ((rd_burst == 2'b00) ? rd_addr : _zz_rd_addr);
          rd_cnt <= (rd_cnt - 8'h01);
        end
      end
      default : begin
      end
    endcase
    _zz_io_push_payload_last <= (rd_cnt == 8'h0);
    _zz_io_push_valid <= (axi4_r_state == `Axi4RamStates_binary_sequential_BURST);
    case(axi4_w_state)
      `Axi4RamStates_binary_sequential_IDLE : begin
        b_id <= aw_fifo_io_pop_payload_id;
        wr_cnt <= aw_fifo_io_pop_payload_len;
        wr_addr <= aw_fifo_io_pop_payload_addr;
        wr_burst <= aw_fifo_io_pop_payload_burst;
        wr_size <= ((aw_fifo_io_pop_payload_size < 3'b010) ? aw_fifo_io_pop_payload_size : 3'b010);
      end
      `Axi4RamStates_binary_sequential_BURST : begin
        if(axi4_w_fire_2) begin
          wr_addr <= ((wr_burst == 2'b00) ? wr_addr : _zz_wr_addr);
          wr_cnt <= (wr_cnt - 8'h01);
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
  input      [31:0]   io_push_payload_data,
  input      [7:0]    io_push_payload_id,
  input      [1:0]    io_push_payload_resp,
  input               io_push_payload_last,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload_data,
  output     [7:0]    io_pop_payload_id,
  output     [1:0]    io_pop_payload_resp,
  output              io_pop_payload_last,
  input               io_flush,
  output     [8:0]    io_occupancy,
  output     [8:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [42:0]   _zz_logic_ram_port0;
  wire       [7:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [7:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_data;
  wire       [42:0]   _zz_logic_ram_port_1;
  wire       [7:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [7:0]    logic_pushPtr_valueNext;
  reg        [7:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [7:0]    logic_popPtr_valueNext;
  reg        [7:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [42:0]   _zz_io_pop_payload_data;
  wire                when_Stream_l933;
  wire       [7:0]    logic_ptrDif;
  reg [42:0] logic_ram [0:255];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {7'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {7'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_data = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_last,{io_push_payload_resp,{io_push_payload_id,io_push_payload_data}}};
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 8'hff);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 8'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 8'hff);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 8'h0;
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
  assign io_pop_payload_id = _zz_io_pop_payload_data[39 : 32];
  assign io_pop_payload_resp = _zz_io_pop_payload_data[41 : 40];
  assign io_pop_payload_last = _zz_io_pop_payload_data[42];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 8'h0;
      logic_popPtr_value <= 8'h0;
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
  input      [7:0]    io_push_payload_id,
  input      [1:0]    io_push_payload_resp,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [7:0]    io_pop_payload_id,
  output     [1:0]    io_pop_payload_resp,
  input               io_flush,
  output     [2:0]    io_occupancy,
  output     [2:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [9:0]    _zz_logic_ram_port0;
  wire       [1:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [1:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_id;
  wire       [9:0]    _zz_logic_ram_port_1;
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
  wire       [9:0]    _zz_io_pop_payload_id;
  wire                when_Stream_l933;
  wire       [1:0]    logic_ptrDif;
  reg [9:0] logic_ram [0:3];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {1'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {1'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_id = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_resp,io_push_payload_id};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_id) begin
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
  assign _zz_io_pop_payload_id = _zz_logic_ram_port0;
  assign io_pop_payload_id = _zz_io_pop_payload_id[7 : 0];
  assign io_pop_payload_resp = _zz_io_pop_payload_id[9 : 8];
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

//StreamFifo replaced by StreamFifo

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input      [12:0]   io_push_payload_addr,
  input      [7:0]    io_push_payload_id,
  input      [7:0]    io_push_payload_len,
  input      [2:0]    io_push_payload_size,
  input      [1:0]    io_push_payload_burst,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [12:0]   io_pop_payload_addr,
  output     [7:0]    io_pop_payload_id,
  output     [7:0]    io_pop_payload_len,
  output     [2:0]    io_pop_payload_size,
  output     [1:0]    io_pop_payload_burst,
  input               io_flush,
  output     [2:0]    io_occupancy,
  output     [2:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [33:0]   _zz_logic_ram_port0;
  wire       [1:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [1:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_addr;
  wire       [33:0]   _zz_logic_ram_port_1;
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
  wire       [33:0]   _zz_io_pop_payload_addr;
  wire                when_Stream_l933;
  wire       [1:0]    logic_ptrDif;
  reg [33:0] logic_ram [0:3];

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
  assign io_pop_payload_addr = _zz_io_pop_payload_addr[12 : 0];
  assign io_pop_payload_id = _zz_io_pop_payload_addr[20 : 13];
  assign io_pop_payload_len = _zz_io_pop_payload_addr[28 : 21];
  assign io_pop_payload_size = _zz_io_pop_payload_addr[31 : 29];
  assign io_pop_payload_burst = _zz_io_pop_payload_addr[33 : 32];
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
