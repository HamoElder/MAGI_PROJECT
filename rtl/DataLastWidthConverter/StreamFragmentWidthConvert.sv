// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : StreamFragmentWidthConvert
// Git hash  : 8f3c532b10de88268de60b069cff9cfa96273852



module StreamFragmentWidthConvert (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output              adapted_data_valid,
  input               adapted_data_ready,
  output              adapted_data_payload_last,
  output     [7:0]    adapted_data_payload_fragment,
  input               clk,
  input               resetn
);
  wire                raw_data_fifo_io_pop_ready;
  wire                raw_data_fifo_io_push_ready;
  wire                raw_data_fifo_io_pop_valid;
  wire                raw_data_fifo_io_pop_payload_last;
  wire       [0:0]    raw_data_fifo_io_pop_payload_fragment;
  wire       [8:0]    raw_data_fifo_io_occupancy;
  wire       [8:0]    raw_data_fifo_io_availability;
  wire       [2:0]    _zz__zz_adapted_data_valid_1;
  wire       [0:0]    _zz__zz_adapted_data_valid_1_1;
  wire       [5:0]    _zz__zz_adapted_data_payload_fragment;
  wire                raw_data_fifo_io_pop_fire;
  reg                 _zz_adapted_data_valid;
  reg        [2:0]    _zz_adapted_data_valid_1;
  reg        [2:0]    _zz_adapted_data_valid_2;
  wire                _zz_adapted_data_valid_3;
  reg        [6:0]    _zz_adapted_data_payload_fragment;
  wire                raw_data_fifo_io_pop_fire_1;

  assign _zz__zz_adapted_data_valid_1_1 = _zz_adapted_data_valid;
  assign _zz__zz_adapted_data_valid_1 = {2'd0, _zz__zz_adapted_data_valid_1_1};
  assign _zz__zz_adapted_data_payload_fragment = (_zz_adapted_data_payload_fragment >>> 1);
  StreamFifo raw_data_fifo (
    .io_push_valid               (raw_data_valid                         ), //i
    .io_push_ready               (raw_data_fifo_io_push_ready            ), //o
    .io_push_payload_last        (raw_data_payload_last                  ), //i
    .io_push_payload_fragment    (raw_data_payload_fragment              ), //i
    .io_pop_valid                (raw_data_fifo_io_pop_valid             ), //o
    .io_pop_ready                (raw_data_fifo_io_pop_ready             ), //i
    .io_pop_payload_last         (raw_data_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (raw_data_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                   ), //i
    .io_occupancy                (raw_data_fifo_io_occupancy             ), //o
    .io_availability             (raw_data_fifo_io_availability          ), //o
    .clk                         (clk                                    ), //i
    .resetn                      (resetn                                 )  //i
  );
  assign raw_data_ready = raw_data_fifo_io_push_ready;
  assign raw_data_fifo_io_pop_fire = (raw_data_fifo_io_pop_valid && raw_data_fifo_io_pop_ready);
  always @(*) begin
    _zz_adapted_data_valid = 1'b0;
    if(raw_data_fifo_io_pop_fire) begin
      _zz_adapted_data_valid = 1'b1;
    end
  end

  assign _zz_adapted_data_valid_3 = (_zz_adapted_data_valid_2 == 3'b111);
  always @(*) begin
    _zz_adapted_data_valid_1 = (_zz_adapted_data_valid_2 + _zz__zz_adapted_data_valid_1);
    if(1'b0) begin
      _zz_adapted_data_valid_1 = 3'b000;
    end
  end

  assign raw_data_fifo_io_pop_fire_1 = (raw_data_fifo_io_pop_valid && raw_data_fifo_io_pop_ready);
  assign raw_data_fifo_io_pop_ready = (! ((! adapted_data_ready) && _zz_adapted_data_valid_3));
  assign adapted_data_valid = (raw_data_fifo_io_pop_valid && _zz_adapted_data_valid_3);
  assign adapted_data_payload_last = raw_data_fifo_io_pop_payload_last;
  assign adapted_data_payload_fragment = {raw_data_fifo_io_pop_payload_fragment,_zz_adapted_data_payload_fragment};
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_adapted_data_valid_2 <= 3'b000;
    end else begin
      _zz_adapted_data_valid_2 <= _zz_adapted_data_valid_1;
    end
  end

  always @(posedge clk) begin
    if(raw_data_fifo_io_pop_fire_1) begin
      _zz_adapted_data_payload_fragment <= {raw_data_fifo_io_pop_payload_fragment,_zz__zz_adapted_data_payload_fragment};
    end
  end


endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [0:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [0:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [8:0]    io_occupancy,
  output     [8:0]    io_availability,
  input               clk,
  input               resetn
);
  reg        [1:0]    _zz_logic_ram_port0;
  wire       [7:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [7:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [1:0]    _zz_logic_ram_port_1;
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
  wire       [1:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l933;
  wire       [7:0]    logic_ptrDif;
  reg [1:0] logic_ram [0:255];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {7'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {7'd0, _zz_logic_popPtr_valueNext_1};
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
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[1 : 1];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk) begin
    if(!resetn) begin
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
