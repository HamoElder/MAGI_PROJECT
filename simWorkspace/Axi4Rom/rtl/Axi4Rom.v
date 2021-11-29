// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Axi4Rom
// Git hash  : 3af1add6119f78f1368f916d771a3e67b4945d16


`define Axi4RomStates_binary_sequential_type [0:0]
`define Axi4RomStates_binary_sequential_IDLE 1'b0
`define Axi4RomStates_binary_sequential_BURST 1'b1


module Axi4Rom (
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
  wire       [31:0]   r_fifo_io_push_payload_data;
  reg        [31:0]   _zz_rom_port0;
  wire                ar_fifo_io_push_ready;
  wire                ar_fifo_io_pop_valid;
  wire       [12:0]   ar_fifo_io_pop_payload_addr;
  wire       [7:0]    ar_fifo_io_pop_payload_id;
  wire       [7:0]    ar_fifo_io_pop_payload_len;
  wire       [2:0]    ar_fifo_io_pop_payload_size;
  wire       [1:0]    ar_fifo_io_pop_payload_burst;
  wire       [2:0]    ar_fifo_io_occupancy;
  wire       [2:0]    ar_fifo_io_availability;
  wire                r_fifo_io_push_ready;
  wire                r_fifo_io_pop_valid;
  wire       [31:0]   r_fifo_io_pop_payload_data;
  wire       [7:0]    r_fifo_io_pop_payload_id;
  wire       [1:0]    r_fifo_io_pop_payload_resp;
  wire                r_fifo_io_pop_payload_last;
  wire       [2:0]    r_fifo_io_occupancy;
  wire       [2:0]    r_fifo_io_availability;
  wire                _zz_rom_port;
  wire                _zz_io_push_payload_data_1;
  wire       [12:0]   _zz_rd_addr;
  wire       [12:0]   _zz_rd_addr_1;
  wire       [7:0]    _zz_rd_addr_2;
  reg        `Axi4RomStates_binary_sequential_type axi4_r_state;
  reg        [7:0]    rd_cnt;
  reg        [12:0]   rd_addr;
  reg        [7:0]    rd_id;
  reg        [2:0]    rd_size;
  reg        [1:0]    rd_burst;
  wire       [10:0]   _zz_io_push_payload_data;
  wire                when_Axi4Rom_l89;
  reg                 _zz_io_push_payload_last;
  reg                 _zz_io_push_valid;
  `ifndef SYNTHESIS
  reg [39:0] axi4_r_state_string;
  `endif

  reg [31:0] rom [0:2047];

  assign _zz_rd_addr = (rd_addr + _zz_rd_addr_1);
  assign _zz_rd_addr_2 = ({7'd0,1'b1} <<< rd_size);
  assign _zz_rd_addr_1 = {5'd0, _zz_rd_addr_2};
  assign _zz_io_push_payload_data_1 = 1'b1;
  initial begin
    $readmemb("Axi4Rom.v_toplevel_rom.bin",rom);
  end
  always @(posedge clk) begin
    if(_zz_io_push_payload_data_1) begin
      _zz_rom_port0 <= rom[_zz_io_push_payload_data];
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
  StreamFifo_1 r_fifo (
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
      `Axi4RomStates_binary_sequential_IDLE : axi4_r_state_string = "IDLE ";
      `Axi4RomStates_binary_sequential_BURST : axi4_r_state_string = "BURST";
      default : axi4_r_state_string = "?????";
    endcase
  end
  `endif

  assign axi4_arready = ar_fifo_io_push_ready;
  assign axi4_rvalid = r_fifo_io_pop_valid;
  assign axi4_rdata = r_fifo_io_pop_payload_data;
  assign axi4_rid = r_fifo_io_pop_payload_id;
  assign axi4_rresp = r_fifo_io_pop_payload_resp;
  assign axi4_rlast = r_fifo_io_pop_payload_last;
  assign _zz_io_push_payload_data = rd_addr[12 : 2];
  assign r_fifo_io_push_payload_data = _zz_rom_port0;
  assign when_Axi4Rom_l89 = (rd_cnt == 8'h0);
  assign ar_fifo_io_pop_ready = (axi4_r_state == `Axi4RomStates_binary_sequential_IDLE);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      axi4_r_state <= `Axi4RomStates_binary_sequential_IDLE;
    end else begin
      case(axi4_r_state)
        `Axi4RomStates_binary_sequential_IDLE : begin
          if(ar_fifo_io_pop_valid) begin
            axi4_r_state <= `Axi4RomStates_binary_sequential_BURST;
          end
        end
        default : begin
          if(r_fifo_io_push_ready) begin
            if(when_Axi4Rom_l89) begin
              axi4_r_state <= `Axi4RomStates_binary_sequential_IDLE;
            end
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(axi4_r_state)
      `Axi4RomStates_binary_sequential_IDLE : begin
        if(ar_fifo_io_pop_valid) begin
          rd_id <= ar_fifo_io_pop_payload_id;
          rd_cnt <= ar_fifo_io_pop_payload_len;
          rd_addr <= ar_fifo_io_pop_payload_addr;
          rd_burst <= ar_fifo_io_pop_payload_burst;
          rd_size <= ((ar_fifo_io_pop_payload_size < 3'b010) ? ar_fifo_io_pop_payload_size : 3'b010);
        end
      end
      default : begin
        if(r_fifo_io_push_ready) begin
          rd_addr <= ((rd_burst == 2'b00) ? rd_addr : _zz_rd_addr);
          rd_cnt <= (rd_cnt - 8'h01);
        end
      end
    endcase
    _zz_io_push_payload_last <= (rd_cnt == 8'h0);
    _zz_io_push_valid <= (axi4_r_state == `Axi4RomStates_binary_sequential_BURST);
  end


endmodule

module StreamFifo_1 (
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
  output     [2:0]    io_occupancy,
  output     [2:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [42:0]   _zz_logic_ram_port0;
  wire       [1:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [1:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_data;
  wire       [42:0]   _zz_logic_ram_port_1;
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
  wire       [42:0]   _zz_io_pop_payload_data;
  wire                when_Stream_l933;
  wire       [1:0]    logic_ptrDif;
  reg [42:0] logic_ram [0:3];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {1'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {1'd0, _zz_logic_popPtr_valueNext_1};
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
