// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Axi4Player
// Git hash  : daf6a79bd21f50cd9773aa04337a274421f9c54e


`define Axi4States_binary_sequential_type [1:0]
`define Axi4States_binary_sequential_IDLE 2'b00
`define Axi4States_binary_sequential_BURST 2'b01
`define Axi4States_binary_sequential_RESP 2'b10


module Axi4Player (
  input               axi4_awvalid,
  output              axi4_awready,
  input      [31:0]   axi4_awaddr,
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
  output              data_out_valid,
  input               data_out_ready,
  output     [31:0]   data_out_payload,
  input               clk,
  input               resetn
);
  wire                aw_fifo_io_pop_ready;
  wire                aw_fifo_io_push_ready;
  wire                aw_fifo_io_pop_valid;
  wire       [31:0]   aw_fifo_io_pop_payload_addr;
  wire       [7:0]    aw_fifo_io_pop_payload_id;
  wire       [7:0]    aw_fifo_io_pop_payload_len;
  wire       [2:0]    aw_fifo_io_pop_payload_size;
  wire       [1:0]    aw_fifo_io_pop_payload_burst;
  wire       [1:0]    aw_fifo_io_occupancy;
  wire       [1:0]    aw_fifo_io_availability;
  wire                b_fifo_io_push_ready;
  wire                b_fifo_io_pop_valid;
  wire       [7:0]    b_fifo_io_pop_payload_id;
  wire       [1:0]    b_fifo_io_pop_payload_resp;
  wire       [1:0]    b_fifo_io_occupancy;
  wire       [1:0]    b_fifo_io_availability;
  reg        `Axi4States_binary_sequential_type axi4_w_state;
  reg        [7:0]    wr_cnt;
  wire                axi4_w_fire;
  wire                when_Axi4Player_l69;
  reg                 b_valid;
  reg        [7:0]    b_id;
  wire                axi4_w_fire_1;
  `ifndef SYNTHESIS
  reg [39:0] axi4_w_state_string;
  `endif


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
    .resetn                   (resetn                        )  //i
  );
  StreamFifo_1 b_fifo (
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
    .resetn                  (resetn                      )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(axi4_w_state)
      `Axi4States_binary_sequential_IDLE : axi4_w_state_string = "IDLE ";
      `Axi4States_binary_sequential_BURST : axi4_w_state_string = "BURST";
      `Axi4States_binary_sequential_RESP : axi4_w_state_string = "RESP ";
      default : axi4_w_state_string = "?????";
    endcase
  end
  `endif

  assign axi4_awready = aw_fifo_io_push_ready;
  assign axi4_bvalid = b_fifo_io_pop_valid;
  assign axi4_bid = b_fifo_io_pop_payload_id;
  assign axi4_bresp = b_fifo_io_pop_payload_resp;
  assign axi4_w_fire = (axi4_wvalid && axi4_wready);
  assign when_Axi4Player_l69 = ((wr_cnt == 8'h0) && axi4_w_fire);
  assign axi4_w_fire_1 = (axi4_wvalid && axi4_wready);
  assign aw_fifo_io_pop_ready = (axi4_w_state == `Axi4States_binary_sequential_IDLE);
  assign data_out_valid = axi4_wvalid;
  assign data_out_payload = axi4_wdata;
  assign axi4_wready = data_out_ready;
  always @(posedge clk) begin
    if(!resetn) begin
      axi4_w_state <= `Axi4States_binary_sequential_IDLE;
      b_valid <= 1'b0;
    end else begin
      case(axi4_w_state)
        `Axi4States_binary_sequential_IDLE : begin
          if(aw_fifo_io_pop_valid) begin
            axi4_w_state <= `Axi4States_binary_sequential_BURST;
          end
        end
        `Axi4States_binary_sequential_BURST : begin
          if(when_Axi4Player_l69) begin
            axi4_w_state <= `Axi4States_binary_sequential_RESP;
          end
        end
        default : begin
          if(b_fifo_io_push_ready) begin
            axi4_w_state <= `Axi4States_binary_sequential_IDLE;
          end
        end
      endcase
      case(axi4_w_state)
        `Axi4States_binary_sequential_IDLE : begin
          b_valid <= 1'b0;
        end
        `Axi4States_binary_sequential_BURST : begin
        end
        default : begin
          b_valid <= 1'b1;
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(axi4_w_state)
      `Axi4States_binary_sequential_IDLE : begin
        b_id <= aw_fifo_io_pop_payload_id;
        wr_cnt <= aw_fifo_io_pop_payload_len;
      end
      `Axi4States_binary_sequential_BURST : begin
        if(axi4_w_fire_1) begin
          wr_cnt <= (wr_cnt - 8'h01);
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module StreamFifo_1 (
  input               io_push_valid,
  output              io_push_ready,
  input      [7:0]    io_push_payload_id,
  input      [1:0]    io_push_payload_resp,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [7:0]    io_pop_payload_id,
  output     [1:0]    io_pop_payload_resp,
  input               io_flush,
  output reg [1:0]    io_occupancy,
  output reg [1:0]    io_availability,
  input               clk,
  input               resetn
);
  reg        [9:0]    _zz_logic_ram_port0;
  wire       [1:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [1:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_id;
  wire       [9:0]    _zz_logic_ram_port_1;
  wire       [1:0]    _zz_io_occupancy;
  wire       [1:0]    _zz_io_availability;
  wire       [1:0]    _zz_io_availability_1;
  wire       [1:0]    _zz_io_availability_2;
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
  reg [9:0] logic_ram [0:2];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {1'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {1'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (2'b11 + logic_ptrDif);
  assign _zz_io_availability = (2'b11 + _zz_io_availability_1);
  assign _zz_io_availability_1 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_availability_2 = (logic_popPtr_value - logic_pushPtr_value);
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 2'b10);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 2'b00;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 2'b10);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 2'b00;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
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
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 2'b11 : 2'b00);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 2'b00 : 2'b11);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

  always @(posedge clk) begin
    if(!resetn) begin
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

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload_addr,
  input      [7:0]    io_push_payload_id,
  input      [7:0]    io_push_payload_len,
  input      [2:0]    io_push_payload_size,
  input      [1:0]    io_push_payload_burst,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload_addr,
  output     [7:0]    io_pop_payload_id,
  output     [7:0]    io_pop_payload_len,
  output     [2:0]    io_pop_payload_size,
  output     [1:0]    io_pop_payload_burst,
  input               io_flush,
  output reg [1:0]    io_occupancy,
  output reg [1:0]    io_availability,
  input               clk,
  input               resetn
);
  reg        [52:0]   _zz_logic_ram_port0;
  wire       [1:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [1:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_addr;
  wire       [52:0]   _zz_logic_ram_port_1;
  wire       [1:0]    _zz_io_occupancy;
  wire       [1:0]    _zz_io_availability;
  wire       [1:0]    _zz_io_availability_1;
  wire       [1:0]    _zz_io_availability_2;
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
  wire       [52:0]   _zz_io_pop_payload_addr;
  wire                when_Stream_l933;
  wire       [1:0]    logic_ptrDif;
  reg [52:0] logic_ram [0:2];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {1'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {1'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (2'b11 + logic_ptrDif);
  assign _zz_io_availability = (2'b11 + _zz_io_availability_1);
  assign _zz_io_availability_1 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_availability_2 = (logic_popPtr_value - logic_pushPtr_value);
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 2'b10);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 2'b00;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 2'b10);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 2'b00;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
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
  assign io_pop_payload_addr = _zz_io_pop_payload_addr[31 : 0];
  assign io_pop_payload_id = _zz_io_pop_payload_addr[39 : 32];
  assign io_pop_payload_len = _zz_io_pop_payload_addr[47 : 40];
  assign io_pop_payload_size = _zz_io_pop_payload_addr[50 : 48];
  assign io_pop_payload_burst = _zz_io_pop_payload_addr[52 : 51];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 2'b11 : 2'b00);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 2'b00 : 2'b11);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

  always @(posedge clk) begin
    if(!resetn) begin
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
