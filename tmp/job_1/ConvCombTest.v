// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : ConvCombTest
// Git hash  : f551716d88446d93e1dd170a856757e67c11b4e4


`define TracebackStates_binary_sequential_type [2:0]
`define TracebackStates_binary_sequential_IDLE 3'b000
`define TracebackStates_binary_sequential_TB 3'b001
`define TracebackStates_binary_sequential_DECODE 3'b010
`define TracebackStates_binary_sequential_HALT 3'b011
`define TracebackStates_binary_sequential_TAIL_DECODE 3'b100
`define TracebackStates_binary_sequential_FINISH 3'b101

`define ReorderLifoStates_binary_sequential_type [0:0]
`define ReorderLifoStates_binary_sequential_PUSH0POP1 1'b0
`define ReorderLifoStates_binary_sequential_POP0PUSH1 1'b1


module ConvCombTest (
  input               tail_bits_valid,
  input      [6:0]    tail_bits_payload,
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              decoded_data_valid,
  input               decoded_data_ready,
  output              decoded_data_payload_last,
  output     [7:0]    decoded_data_payload_fragment,
  input      [0:0]    sel,
  input               clk,
  input               reset
);
  wire                streamFifo_5_io_pop_ready;
  wire                encoder_raw_data_ready;
  wire                encoder_coded_data_valid;
  wire                encoder_coded_data_payload_last;
  wire       [15:0]   encoder_coded_data_payload_fragment;
  wire                puncture_core_raw_data_ready;
  wire                puncture_core_punched_data_valid;
  wire                puncture_core_punched_data_payload_last;
  wire       [15:0]   puncture_core_punched_data_payload_fragment;
  wire                de_puncture_core_raw_data_ready;
  wire                de_puncture_core_de_punched_data_valid;
  wire                de_puncture_core_de_punched_data_payload_last;
  wire       [1:0]    de_puncture_core_de_punched_data_payload_fragment_data;
  wire       [1:0]    de_puncture_core_de_punched_data_payload_fragment_indicate;
  wire                streamFifo_4_io_push_ready;
  wire                streamFifo_4_io_pop_valid;
  wire                streamFifo_4_io_pop_payload_last;
  wire       [15:0]   streamFifo_4_io_pop_payload_fragment;
  wire       [11:0]   streamFifo_4_io_occupancy;
  wire       [11:0]   streamFifo_4_io_availability;
  wire                decoder_raw_data_ready;
  wire                decoder_decoded_data_valid;
  wire                decoder_decoded_data_payload_last;
  wire       [0:0]    decoder_decoded_data_payload_fragment;
  wire                de_puncture_core_de_punched_data_fifo_io_push_ready;
  wire                de_puncture_core_de_punched_data_fifo_io_pop_valid;
  wire                de_puncture_core_de_punched_data_fifo_io_pop_payload_last;
  wire       [1:0]    de_puncture_core_de_punched_data_fifo_io_pop_payload_fragment_data;
  wire       [1:0]    de_puncture_core_de_punched_data_fifo_io_pop_payload_fragment_indicate;
  wire       [3:0]    de_puncture_core_de_punched_data_fifo_io_occupancy;
  wire       [3:0]    de_puncture_core_de_punched_data_fifo_io_availability;
  wire                streamFifo_5_io_push_ready;
  wire                streamFifo_5_io_pop_valid;
  wire                streamFifo_5_io_pop_payload_last;
  wire       [0:0]    streamFifo_5_io_pop_payload_fragment;
  wire       [11:0]   streamFifo_5_io_occupancy;
  wire       [11:0]   streamFifo_5_io_availability;
  wire       [2:0]    _zz__zz_decoded_data_valid_1;
  wire       [0:0]    _zz__zz_decoded_data_valid_1_1;
  wire       [5:0]    _zz__zz_decoded_data_payload_fragment;
  wire                streamFifo_5_io_pop_fire;
  reg                 _zz_decoded_data_valid;
  reg        [2:0]    _zz_decoded_data_valid_1;
  reg        [2:0]    _zz_decoded_data_valid_2;
  wire                _zz_decoded_data_valid_3;
  reg        [6:0]    _zz_decoded_data_payload_fragment;
  wire                streamFifo_5_io_pop_fire_1;

  assign _zz__zz_decoded_data_valid_1_1 = _zz_decoded_data_valid;
  assign _zz__zz_decoded_data_valid_1 = {2'd0, _zz__zz_decoded_data_valid_1_1};
  assign _zz__zz_decoded_data_payload_fragment = (_zz_decoded_data_payload_fragment >>> 1);
  ConvEncoder encoder (
    .tail_bits_valid                (tail_bits_valid                      ), //i
    .tail_bits_payload              (tail_bits_payload                    ), //i
    .raw_data_valid                 (raw_data_valid                       ), //i
    .raw_data_ready                 (encoder_raw_data_ready               ), //o
    .raw_data_payload_last          (raw_data_payload_last                ), //i
    .raw_data_payload_fragment      (raw_data_payload_fragment            ), //i
    .coded_data_valid               (encoder_coded_data_valid             ), //o
    .coded_data_payload_last        (encoder_coded_data_payload_last      ), //o
    .coded_data_payload_fragment    (encoder_coded_data_payload_fragment  ), //o
    .clk                            (clk                                  ), //i
    .reset                          (reset                                )  //i
  );
  MultiPuncturing puncture_core (
    .raw_data_valid                   (encoder_coded_data_valid                     ), //i
    .raw_data_ready                   (puncture_core_raw_data_ready                 ), //o
    .raw_data_payload_last            (encoder_coded_data_payload_last              ), //i
    .raw_data_payload_fragment        (encoder_coded_data_payload_fragment          ), //i
    .punched_data_valid               (puncture_core_punched_data_valid             ), //o
    .punched_data_payload_last        (puncture_core_punched_data_payload_last      ), //o
    .punched_data_payload_fragment    (puncture_core_punched_data_payload_fragment  ), //o
    .sel                              (sel                                          ), //i
    .clk                              (clk                                          ), //i
    .reset                            (reset                                        )  //i
  );
  MultiDePuncturing de_puncture_core (
    .raw_data_valid                               (streamFifo_4_io_pop_valid                                   ), //i
    .raw_data_ready                               (de_puncture_core_raw_data_ready                             ), //o
    .raw_data_payload_last                        (streamFifo_4_io_pop_payload_last                            ), //i
    .raw_data_payload_fragment                    (streamFifo_4_io_pop_payload_fragment                        ), //i
    .de_punched_data_valid                        (de_puncture_core_de_punched_data_valid                      ), //o
    .de_punched_data_ready                        (de_puncture_core_de_punched_data_fifo_io_push_ready         ), //i
    .de_punched_data_payload_last                 (de_puncture_core_de_punched_data_payload_last               ), //o
    .de_punched_data_payload_fragment_data        (de_puncture_core_de_punched_data_payload_fragment_data      ), //o
    .de_punched_data_payload_fragment_indicate    (de_puncture_core_de_punched_data_payload_fragment_indicate  ), //o
    .sel                                          (sel                                                         ), //i
    .clk                                          (clk                                                         ), //i
    .reset                                        (reset                                                       )  //i
  );
  StreamFifo_1 streamFifo_4 (
    .io_push_valid               (puncture_core_punched_data_valid             ), //i
    .io_push_ready               (streamFifo_4_io_push_ready                   ), //o
    .io_push_payload_last        (puncture_core_punched_data_payload_last      ), //i
    .io_push_payload_fragment    (puncture_core_punched_data_payload_fragment  ), //i
    .io_pop_valid                (streamFifo_4_io_pop_valid                    ), //o
    .io_pop_ready                (de_puncture_core_raw_data_ready              ), //i
    .io_pop_payload_last         (streamFifo_4_io_pop_payload_last             ), //o
    .io_pop_payload_fragment     (streamFifo_4_io_pop_payload_fragment         ), //o
    .io_flush                    (1'b0                                         ), //i
    .io_occupancy                (streamFifo_4_io_occupancy                    ), //o
    .io_availability             (streamFifo_4_io_availability                 ), //o
    .clk                         (clk                                          ), //i
    .reset                       (reset                                        )  //i
  );
  ViterbiDecoder decoder (
    .raw_data_valid                        (de_puncture_core_de_punched_data_fifo_io_pop_valid                      ), //i
    .raw_data_ready                        (decoder_raw_data_ready                                                  ), //o
    .raw_data_payload_last                 (de_puncture_core_de_punched_data_fifo_io_pop_payload_last               ), //i
    .raw_data_payload_fragment_data        (de_puncture_core_de_punched_data_fifo_io_pop_payload_fragment_data      ), //i
    .raw_data_payload_fragment_indicate    (de_puncture_core_de_punched_data_fifo_io_pop_payload_fragment_indicate  ), //i
    .decoded_data_valid                    (decoder_decoded_data_valid                                              ), //o
    .decoded_data_payload_last             (decoder_decoded_data_payload_last                                       ), //o
    .decoded_data_payload_fragment         (decoder_decoded_data_payload_fragment                                   ), //o
    .clk                                   (clk                                                                     ), //i
    .reset                                 (reset                                                                   )  //i
  );
  StreamFifo_2 de_puncture_core_de_punched_data_fifo (
    .io_push_valid                        (de_puncture_core_de_punched_data_valid                                  ), //i
    .io_push_ready                        (de_puncture_core_de_punched_data_fifo_io_push_ready                     ), //o
    .io_push_payload_last                 (de_puncture_core_de_punched_data_payload_last                           ), //i
    .io_push_payload_fragment_data        (de_puncture_core_de_punched_data_payload_fragment_data                  ), //i
    .io_push_payload_fragment_indicate    (de_puncture_core_de_punched_data_payload_fragment_indicate              ), //i
    .io_pop_valid                         (de_puncture_core_de_punched_data_fifo_io_pop_valid                      ), //o
    .io_pop_ready                         (decoder_raw_data_ready                                                  ), //i
    .io_pop_payload_last                  (de_puncture_core_de_punched_data_fifo_io_pop_payload_last               ), //o
    .io_pop_payload_fragment_data         (de_puncture_core_de_punched_data_fifo_io_pop_payload_fragment_data      ), //o
    .io_pop_payload_fragment_indicate     (de_puncture_core_de_punched_data_fifo_io_pop_payload_fragment_indicate  ), //o
    .io_flush                             (1'b0                                                                    ), //i
    .io_occupancy                         (de_puncture_core_de_punched_data_fifo_io_occupancy                      ), //o
    .io_availability                      (de_puncture_core_de_punched_data_fifo_io_availability                   ), //o
    .clk                                  (clk                                                                     ), //i
    .reset                                (reset                                                                   )  //i
  );
  StreamFifo_3 streamFifo_5 (
    .io_push_valid               (decoder_decoded_data_valid             ), //i
    .io_push_ready               (streamFifo_5_io_push_ready             ), //o
    .io_push_payload_last        (decoder_decoded_data_payload_last      ), //i
    .io_push_payload_fragment    (decoder_decoded_data_payload_fragment  ), //i
    .io_pop_valid                (streamFifo_5_io_pop_valid              ), //o
    .io_pop_ready                (streamFifo_5_io_pop_ready              ), //i
    .io_pop_payload_last         (streamFifo_5_io_pop_payload_last       ), //o
    .io_pop_payload_fragment     (streamFifo_5_io_pop_payload_fragment   ), //o
    .io_flush                    (1'b0                                   ), //i
    .io_occupancy                (streamFifo_5_io_occupancy              ), //o
    .io_availability             (streamFifo_5_io_availability           ), //o
    .clk                         (clk                                    ), //i
    .reset                       (reset                                  )  //i
  );
  assign raw_data_ready = encoder_raw_data_ready;
  assign streamFifo_5_io_pop_fire = (streamFifo_5_io_pop_valid && streamFifo_5_io_pop_ready);
  always @(*) begin
    _zz_decoded_data_valid = 1'b0;
    if(streamFifo_5_io_pop_fire) begin
      _zz_decoded_data_valid = 1'b1;
    end
  end

  assign _zz_decoded_data_valid_3 = (_zz_decoded_data_valid_2 == 3'b111);
  always @(*) begin
    _zz_decoded_data_valid_1 = (_zz_decoded_data_valid_2 + _zz__zz_decoded_data_valid_1);
    if(1'b0) begin
      _zz_decoded_data_valid_1 = 3'b000;
    end
  end

  assign streamFifo_5_io_pop_fire_1 = (streamFifo_5_io_pop_valid && streamFifo_5_io_pop_ready);
  assign streamFifo_5_io_pop_ready = (! ((! decoded_data_ready) && _zz_decoded_data_valid_3));
  assign decoded_data_valid = (streamFifo_5_io_pop_valid && _zz_decoded_data_valid_3);
  assign decoded_data_payload_last = streamFifo_5_io_pop_payload_last;
  assign decoded_data_payload_fragment = {streamFifo_5_io_pop_payload_fragment,_zz_decoded_data_payload_fragment};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_decoded_data_valid_2 <= 3'b000;
    end else begin
      _zz_decoded_data_valid_2 <= _zz_decoded_data_valid_1;
    end
  end

  always @(posedge clk) begin
    if(streamFifo_5_io_pop_fire_1) begin
      _zz_decoded_data_payload_fragment <= {streamFifo_5_io_pop_payload_fragment,_zz__zz_decoded_data_payload_fragment};
    end
  end


endmodule

module StreamFifo_3 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [0:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [0:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [11:0]   io_occupancy,
  output     [11:0]   io_availability,
  input               clk,
  input               reset
);
  reg        [1:0]    _zz_logic_ram_port0;
  wire       [10:0]   _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [10:0]   _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [1:0]    _zz_logic_ram_port_1;
  wire       [10:0]   _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [10:0]   logic_pushPtr_valueNext;
  reg        [10:0]   logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [10:0]   logic_popPtr_valueNext;
  reg        [10:0]   logic_popPtr_value;
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
  wire       [10:0]   logic_ptrDif;
  reg [1:0] logic_ram [0:2047];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {10'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {10'd0, _zz_logic_popPtr_valueNext_1};
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 11'h7ff);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 11'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 11'h7ff);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 11'h0;
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
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 11'h0;
      logic_popPtr_value <= 11'h0;
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
  input               io_push_payload_last,
  input      [1:0]    io_push_payload_fragment_data,
  input      [1:0]    io_push_payload_fragment_indicate,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [1:0]    io_pop_payload_fragment_data,
  output     [1:0]    io_pop_payload_fragment_indicate,
  input               io_flush,
  output     [3:0]    io_occupancy,
  output     [3:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [4:0]    _zz_logic_ram_port0;
  wire       [2:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [2:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [4:0]    _zz_logic_ram_port_1;
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
  wire       [4:0]    _zz_io_pop_payload_last;
  wire       [3:0]    _zz_io_pop_payload_fragment_data;
  wire                when_Stream_l933;
  wire       [2:0]    logic_ptrDif;
  reg [4:0] logic_ram [0:7];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {2'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {2'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {{io_push_payload_fragment_indicate,io_push_payload_fragment_data},io_push_payload_last};
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
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign _zz_io_pop_payload_fragment_data = _zz_io_pop_payload_last[4 : 1];
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment_data = _zz_io_pop_payload_fragment_data[1 : 0];
  assign io_pop_payload_fragment_indicate = _zz_io_pop_payload_fragment_data[3 : 2];
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

module ViterbiDecoder (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [1:0]    raw_data_payload_fragment_data,
  input      [1:0]    raw_data_payload_fragment_indicate,
  output              decoded_data_valid,
  output              decoded_data_payload_last,
  output     [0:0]    decoded_data_payload_fragment,
  input               clk,
  input               reset
);
  wire                pmu_core_raw_data_ready;
  wire       [5:0]    pmu_core_min_idx;
  wire                pmu_core_s_path_valid;
  wire                pmu_core_s_path_payload_last;
  wire       [63:0]   pmu_core_s_path_payload_fragment;
  wire                tbu_core_tb_node_valid;
  wire                tbu_core_tb_node_payload_last;
  wire       [1:0]    tbu_core_tb_node_payload_fragment;
  wire                tbu_core_halt;
  wire                tbu_core_finished;
  wire                lifo_core_decoded_data_valid;
  wire                lifo_core_decoded_data_payload_last;
  wire       [0:0]    lifo_core_decoded_data_payload_fragment;
  wire                raw_data_fire;

  PathMetric pmu_core (
    .raw_data_valid                        (raw_data_fire                       ), //i
    .raw_data_ready                        (pmu_core_raw_data_ready             ), //o
    .raw_data_payload_last                 (raw_data_payload_last               ), //i
    .raw_data_payload_fragment_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_payload_fragment_indicate    (raw_data_payload_fragment_indicate  ), //i
    .tbu_finished                          (tbu_core_finished                   ), //i
    .min_idx                               (pmu_core_min_idx                    ), //o
    .s_path_valid                          (pmu_core_s_path_valid               ), //o
    .s_path_payload_last                   (pmu_core_s_path_payload_last        ), //o
    .s_path_payload_fragment               (pmu_core_s_path_payload_fragment    ), //o
    .clk                                   (clk                                 ), //i
    .reset                                 (reset                               )  //i
  );
  Traceback tbu_core (
    .min_idx                     (pmu_core_min_idx                   ), //i
    .s_path_valid                (pmu_core_s_path_valid              ), //i
    .s_path_payload_last         (pmu_core_s_path_payload_last       ), //i
    .s_path_payload_fragment     (pmu_core_s_path_payload_fragment   ), //i
    .tb_node_valid               (tbu_core_tb_node_valid             ), //o
    .tb_node_payload_last        (tbu_core_tb_node_payload_last      ), //o
    .tb_node_payload_fragment    (tbu_core_tb_node_payload_fragment  ), //o
    .halt                        (tbu_core_halt                      ), //o
    .finished                    (tbu_core_finished                  ), //o
    .clk                         (clk                                ), //i
    .reset                       (reset                              )  //i
  );
  ReorderLifo lifo_core (
    .inverted_order_valid               (tbu_core_tb_node_valid                   ), //i
    .inverted_order_payload_last        (tbu_core_tb_node_payload_last            ), //i
    .inverted_order_payload_fragment    (tbu_core_tb_node_payload_fragment        ), //i
    .decoded_data_valid                 (lifo_core_decoded_data_valid             ), //o
    .decoded_data_payload_last          (lifo_core_decoded_data_payload_last      ), //o
    .decoded_data_payload_fragment      (lifo_core_decoded_data_payload_fragment  ), //o
    .clk                                (clk                                      ), //i
    .reset                              (reset                                    )  //i
  );
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign raw_data_ready = ((! tbu_core_halt) && pmu_core_raw_data_ready);
  assign decoded_data_valid = lifo_core_decoded_data_valid;
  assign decoded_data_payload_last = lifo_core_decoded_data_payload_last;
  assign decoded_data_payload_fragment = lifo_core_decoded_data_payload_fragment;

endmodule

module StreamFifo_1 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [15:0]   io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [15:0]   io_pop_payload_fragment,
  input               io_flush,
  output     [11:0]   io_occupancy,
  output     [11:0]   io_availability,
  input               clk,
  input               reset
);
  reg        [16:0]   _zz_logic_ram_port0;
  wire       [10:0]   _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [10:0]   _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [16:0]   _zz_logic_ram_port_1;
  wire       [10:0]   _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [10:0]   logic_pushPtr_valueNext;
  reg        [10:0]   logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [10:0]   logic_popPtr_valueNext;
  reg        [10:0]   logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [16:0]   _zz_io_pop_payload_last;
  wire                when_Stream_l933;
  wire       [10:0]   logic_ptrDif;
  reg [16:0] logic_ram [0:2047];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {10'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {10'd0, _zz_logic_popPtr_valueNext_1};
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 11'h7ff);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 11'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 11'h7ff);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 11'h0;
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
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[16 : 1];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 11'h0;
      logic_popPtr_value <= 11'h0;
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

module MultiDePuncturing (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output              de_punched_data_valid,
  input               de_punched_data_ready,
  output              de_punched_data_payload_last,
  output     [1:0]    de_punched_data_payload_fragment_data,
  output     [1:0]    de_punched_data_payload_fragment_indicate,
  input      [0:0]    sel,
  input               clk,
  input               reset
);
  wire       [11:0]   dePuncturing_3_raw_data_payload_fragment;
  wire                streamDemux_2_io_input_ready;
  wire                streamDemux_2_io_outputs_0_valid;
  wire                streamDemux_2_io_outputs_0_payload_last;
  wire       [15:0]   streamDemux_2_io_outputs_0_payload_fragment;
  wire                streamDemux_2_io_outputs_1_valid;
  wire                streamDemux_2_io_outputs_1_payload_last;
  wire       [15:0]   streamDemux_2_io_outputs_1_payload_fragment;
  wire                dePuncturing_2_raw_data_ready;
  wire                dePuncturing_2_de_punched_data_valid;
  wire                dePuncturing_2_de_punched_data_payload_last;
  wire       [1:0]    dePuncturing_2_de_punched_data_payload_fragment_data;
  wire       [1:0]    dePuncturing_2_de_punched_data_payload_fragment_indicate;
  wire                dePuncturing_3_raw_data_ready;
  wire                dePuncturing_3_de_punched_data_valid;
  wire                dePuncturing_3_de_punched_data_payload_last;
  wire       [1:0]    dePuncturing_3_de_punched_data_payload_fragment_data;
  wire       [1:0]    dePuncturing_3_de_punched_data_payload_fragment_indicate;
  wire                streamMux_1_io_inputs_0_ready;
  wire                streamMux_1_io_inputs_1_ready;
  wire                streamMux_1_io_output_valid;
  wire                streamMux_1_io_output_payload_last;
  wire       [1:0]    streamMux_1_io_output_payload_fragment_data;
  wire       [1:0]    streamMux_1_io_output_payload_fragment_indicate;

  StreamDemux streamDemux_2 (
    .io_select                        (sel                                          ), //i
    .io_input_valid                   (raw_data_valid                               ), //i
    .io_input_ready                   (streamDemux_2_io_input_ready                 ), //o
    .io_input_payload_last            (raw_data_payload_last                        ), //i
    .io_input_payload_fragment        (raw_data_payload_fragment                    ), //i
    .io_outputs_0_valid               (streamDemux_2_io_outputs_0_valid             ), //o
    .io_outputs_0_ready               (dePuncturing_2_raw_data_ready                ), //i
    .io_outputs_0_payload_last        (streamDemux_2_io_outputs_0_payload_last      ), //o
    .io_outputs_0_payload_fragment    (streamDemux_2_io_outputs_0_payload_fragment  ), //o
    .io_outputs_1_valid               (streamDemux_2_io_outputs_1_valid             ), //o
    .io_outputs_1_ready               (dePuncturing_3_raw_data_ready                ), //i
    .io_outputs_1_payload_last        (streamDemux_2_io_outputs_1_payload_last      ), //o
    .io_outputs_1_payload_fragment    (streamDemux_2_io_outputs_1_payload_fragment  )  //o
  );
  DePuncturing dePuncturing_2 (
    .raw_data_valid                               (streamDemux_2_io_outputs_0_valid                          ), //i
    .raw_data_ready                               (dePuncturing_2_raw_data_ready                             ), //o
    .raw_data_payload_last                        (streamDemux_2_io_outputs_0_payload_last                   ), //i
    .raw_data_payload_fragment                    (streamDemux_2_io_outputs_0_payload_fragment               ), //i
    .de_punched_data_valid                        (dePuncturing_2_de_punched_data_valid                      ), //o
    .de_punched_data_ready                        (streamMux_1_io_inputs_0_ready                             ), //i
    .de_punched_data_payload_last                 (dePuncturing_2_de_punched_data_payload_last               ), //o
    .de_punched_data_payload_fragment_data        (dePuncturing_2_de_punched_data_payload_fragment_data      ), //o
    .de_punched_data_payload_fragment_indicate    (dePuncturing_2_de_punched_data_payload_fragment_indicate  ), //o
    .clk                                          (clk                                                       ), //i
    .reset                                        (reset                                                     )  //i
  );
  DePuncturing_1 dePuncturing_3 (
    .raw_data_valid                               (streamDemux_2_io_outputs_1_valid                          ), //i
    .raw_data_ready                               (dePuncturing_3_raw_data_ready                             ), //o
    .raw_data_payload_last                        (streamDemux_2_io_outputs_1_payload_last                   ), //i
    .raw_data_payload_fragment                    (dePuncturing_3_raw_data_payload_fragment                  ), //i
    .de_punched_data_valid                        (dePuncturing_3_de_punched_data_valid                      ), //o
    .de_punched_data_ready                        (streamMux_1_io_inputs_1_ready                             ), //i
    .de_punched_data_payload_last                 (dePuncturing_3_de_punched_data_payload_last               ), //o
    .de_punched_data_payload_fragment_data        (dePuncturing_3_de_punched_data_payload_fragment_data      ), //o
    .de_punched_data_payload_fragment_indicate    (dePuncturing_3_de_punched_data_payload_fragment_indicate  ), //o
    .clk                                          (clk                                                       ), //i
    .reset                                        (reset                                                     )  //i
  );
  StreamMux streamMux_1 (
    .io_select                                (sel                                                       ), //i
    .io_inputs_0_valid                        (dePuncturing_2_de_punched_data_valid                      ), //i
    .io_inputs_0_ready                        (streamMux_1_io_inputs_0_ready                             ), //o
    .io_inputs_0_payload_last                 (dePuncturing_2_de_punched_data_payload_last               ), //i
    .io_inputs_0_payload_fragment_data        (dePuncturing_2_de_punched_data_payload_fragment_data      ), //i
    .io_inputs_0_payload_fragment_indicate    (dePuncturing_2_de_punched_data_payload_fragment_indicate  ), //i
    .io_inputs_1_valid                        (dePuncturing_3_de_punched_data_valid                      ), //i
    .io_inputs_1_ready                        (streamMux_1_io_inputs_1_ready                             ), //o
    .io_inputs_1_payload_last                 (dePuncturing_3_de_punched_data_payload_last               ), //i
    .io_inputs_1_payload_fragment_data        (dePuncturing_3_de_punched_data_payload_fragment_data      ), //i
    .io_inputs_1_payload_fragment_indicate    (dePuncturing_3_de_punched_data_payload_fragment_indicate  ), //i
    .io_output_valid                          (streamMux_1_io_output_valid                               ), //o
    .io_output_ready                          (de_punched_data_ready                                     ), //i
    .io_output_payload_last                   (streamMux_1_io_output_payload_last                        ), //o
    .io_output_payload_fragment_data          (streamMux_1_io_output_payload_fragment_data               ), //o
    .io_output_payload_fragment_indicate      (streamMux_1_io_output_payload_fragment_indicate           )  //o
  );
  assign raw_data_ready = streamDemux_2_io_input_ready;
  assign dePuncturing_3_raw_data_payload_fragment = streamDemux_2_io_outputs_1_payload_fragment[11:0];
  assign de_punched_data_valid = streamMux_1_io_output_valid;
  assign de_punched_data_payload_last = streamMux_1_io_output_payload_last;
  assign de_punched_data_payload_fragment_data = streamMux_1_io_output_payload_fragment_data;
  assign de_punched_data_payload_fragment_indicate = streamMux_1_io_output_payload_fragment_indicate;

endmodule

module MultiPuncturing (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output              punched_data_valid,
  output              punched_data_payload_last,
  output     [15:0]   punched_data_payload_fragment,
  input      [0:0]    sel,
  input               clk,
  input               reset
);
  wire       [15:0]   flowMux_1_inputs_1_payload_fragment;
  wire                streamDemux_2_io_input_ready;
  wire                streamDemux_2_io_outputs_0_valid;
  wire                streamDemux_2_io_outputs_0_payload_last;
  wire       [15:0]   streamDemux_2_io_outputs_0_payload_fragment;
  wire                streamDemux_2_io_outputs_1_valid;
  wire                streamDemux_2_io_outputs_1_payload_last;
  wire       [15:0]   streamDemux_2_io_outputs_1_payload_fragment;
  wire                puncturing_2_raw_data_ready;
  wire                puncturing_2_punched_data_valid;
  wire                puncturing_2_punched_data_payload_last;
  wire       [15:0]   puncturing_2_punched_data_payload_fragment;
  wire                puncturing_3_raw_data_ready;
  wire                puncturing_3_punched_data_valid;
  wire                puncturing_3_punched_data_payload_last;
  wire       [11:0]   puncturing_3_punched_data_payload_fragment;
  wire                flowMux_1_output_valid;
  wire                flowMux_1_output_payload_last;
  wire       [15:0]   flowMux_1_output_payload_fragment;
  wire                _zz_inputs_0_valid;
  wire                _zz_inputs_0_payload_last;
  wire                _zz_inputs_1_valid;
  wire                _zz_inputs_1_payload_last;

  StreamDemux streamDemux_2 (
    .io_select                        (sel                                          ), //i
    .io_input_valid                   (raw_data_valid                               ), //i
    .io_input_ready                   (streamDemux_2_io_input_ready                 ), //o
    .io_input_payload_last            (raw_data_payload_last                        ), //i
    .io_input_payload_fragment        (raw_data_payload_fragment                    ), //i
    .io_outputs_0_valid               (streamDemux_2_io_outputs_0_valid             ), //o
    .io_outputs_0_ready               (puncturing_2_raw_data_ready                  ), //i
    .io_outputs_0_payload_last        (streamDemux_2_io_outputs_0_payload_last      ), //o
    .io_outputs_0_payload_fragment    (streamDemux_2_io_outputs_0_payload_fragment  ), //o
    .io_outputs_1_valid               (streamDemux_2_io_outputs_1_valid             ), //o
    .io_outputs_1_ready               (puncturing_3_raw_data_ready                  ), //i
    .io_outputs_1_payload_last        (streamDemux_2_io_outputs_1_payload_last      ), //o
    .io_outputs_1_payload_fragment    (streamDemux_2_io_outputs_1_payload_fragment  )  //o
  );
  Puncturing puncturing_2 (
    .raw_data_valid                   (streamDemux_2_io_outputs_0_valid             ), //i
    .raw_data_ready                   (puncturing_2_raw_data_ready                  ), //o
    .raw_data_payload_last            (streamDemux_2_io_outputs_0_payload_last      ), //i
    .raw_data_payload_fragment        (streamDemux_2_io_outputs_0_payload_fragment  ), //i
    .punched_data_valid               (puncturing_2_punched_data_valid              ), //o
    .punched_data_payload_last        (puncturing_2_punched_data_payload_last       ), //o
    .punched_data_payload_fragment    (puncturing_2_punched_data_payload_fragment   ), //o
    .clk                              (clk                                          ), //i
    .reset                            (reset                                        )  //i
  );
  Puncturing_1 puncturing_3 (
    .raw_data_valid                   (streamDemux_2_io_outputs_1_valid             ), //i
    .raw_data_ready                   (puncturing_3_raw_data_ready                  ), //o
    .raw_data_payload_last            (streamDemux_2_io_outputs_1_payload_last      ), //i
    .raw_data_payload_fragment        (streamDemux_2_io_outputs_1_payload_fragment  ), //i
    .punched_data_valid               (puncturing_3_punched_data_valid              ), //o
    .punched_data_payload_last        (puncturing_3_punched_data_payload_last       ), //o
    .punched_data_payload_fragment    (puncturing_3_punched_data_payload_fragment   ), //o
    .clk                              (clk                                          ), //i
    .reset                            (reset                                        )  //i
  );
  FlowMux flowMux_1 (
    .inputs_0_valid               (_zz_inputs_0_valid                          ), //i
    .inputs_0_payload_last        (_zz_inputs_0_payload_last                   ), //i
    .inputs_0_payload_fragment    (puncturing_2_punched_data_payload_fragment  ), //i
    .inputs_1_valid               (_zz_inputs_1_valid                          ), //i
    .inputs_1_payload_last        (_zz_inputs_1_payload_last                   ), //i
    .inputs_1_payload_fragment    (flowMux_1_inputs_1_payload_fragment         ), //i
    .select_1                     (sel                                         ), //i
    .output_valid                 (flowMux_1_output_valid                      ), //o
    .output_payload_last          (flowMux_1_output_payload_last               ), //o
    .output_payload_fragment      (flowMux_1_output_payload_fragment           )  //o
  );
  assign raw_data_ready = streamDemux_2_io_input_ready;
  assign _zz_inputs_0_valid = puncturing_2_punched_data_valid;
  assign _zz_inputs_0_payload_last = puncturing_2_punched_data_payload_last;
  assign _zz_inputs_1_valid = puncturing_3_punched_data_valid;
  assign _zz_inputs_1_payload_last = puncturing_3_punched_data_payload_last;
  assign flowMux_1_inputs_1_payload_fragment = {4'd0, puncturing_3_punched_data_payload_fragment};
  assign punched_data_valid = flowMux_1_output_valid;
  assign punched_data_payload_last = flowMux_1_output_payload_last;
  assign punched_data_payload_fragment = flowMux_1_output_payload_fragment;

endmodule

module ConvEncoder (
  input               tail_bits_valid,
  input      [6:0]    tail_bits_payload,
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              coded_data_valid,
  output              coded_data_payload_last,
  output     [15:0]   coded_data_payload_fragment,
  input               clk,
  input               reset
);
  wire       [7:0]    _zz_r_enc_0;
  wire       [7:0]    _zz_r_enc_1;
  wire       [7:0]    _zz_r_enc_2;
  wire       [7:0]    _zz_r_enc_3;
  wire       [7:0]    _zz_r_enc_4;
  wire       [7:0]    _zz_r_enc_5;
  wire       [7:0]    _zz_r_enc_6;
  wire       [7:0]    _zz_r_enc_7;
  reg        [15:0]   coded_data;
  reg                 coded_data_valid_1;
  reg        [6:0]    r_enc_buf;
  wire       [6:0]    r_enc_0;
  wire       [6:0]    r_enc_1;
  wire       [6:0]    r_enc_2;
  wire       [6:0]    r_enc_3;
  wire       [6:0]    r_enc_4;
  wire       [6:0]    r_enc_5;
  wire       [6:0]    r_enc_6;
  wire       [6:0]    r_enc_7;
  reg        [7:0]    code_vec_0;
  reg        [7:0]    code_vec_1;
  wire                raw_data_fire;
  reg                 raw_data_payload_last_regNext;

  assign _zz_r_enc_0 = {raw_data_payload_fragment[0],r_enc_buf};
  assign _zz_r_enc_1 = {raw_data_payload_fragment[1],r_enc_0};
  assign _zz_r_enc_2 = {raw_data_payload_fragment[2],r_enc_1};
  assign _zz_r_enc_3 = {raw_data_payload_fragment[3],r_enc_2};
  assign _zz_r_enc_4 = {raw_data_payload_fragment[4],r_enc_3};
  assign _zz_r_enc_5 = {raw_data_payload_fragment[5],r_enc_4};
  assign _zz_r_enc_6 = {raw_data_payload_fragment[6],r_enc_5};
  assign _zz_r_enc_7 = {raw_data_payload_fragment[7],r_enc_6};
  assign r_enc_0 = _zz_r_enc_0[7 : 1];
  assign r_enc_1 = _zz_r_enc_1[7 : 1];
  assign r_enc_2 = _zz_r_enc_2[7 : 1];
  assign r_enc_3 = _zz_r_enc_3[7 : 1];
  assign r_enc_4 = _zz_r_enc_4[7 : 1];
  assign r_enc_5 = _zz_r_enc_5[7 : 1];
  assign r_enc_6 = _zz_r_enc_6[7 : 1];
  assign r_enc_7 = _zz_r_enc_7[7 : 1];
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign raw_data_ready = (! tail_bits_valid);
  always @(*) begin
    code_vec_0[0] = ((((r_enc_0[0] ^ r_enc_0[1]) ^ r_enc_0[3]) ^ r_enc_0[4]) ^ r_enc_0[6]);
    code_vec_0[1] = ((((r_enc_1[0] ^ r_enc_1[1]) ^ r_enc_1[3]) ^ r_enc_1[4]) ^ r_enc_1[6]);
    code_vec_0[2] = ((((r_enc_2[0] ^ r_enc_2[1]) ^ r_enc_2[3]) ^ r_enc_2[4]) ^ r_enc_2[6]);
    code_vec_0[3] = ((((r_enc_3[0] ^ r_enc_3[1]) ^ r_enc_3[3]) ^ r_enc_3[4]) ^ r_enc_3[6]);
    code_vec_0[4] = ((((r_enc_4[0] ^ r_enc_4[1]) ^ r_enc_4[3]) ^ r_enc_4[4]) ^ r_enc_4[6]);
    code_vec_0[5] = ((((r_enc_5[0] ^ r_enc_5[1]) ^ r_enc_5[3]) ^ r_enc_5[4]) ^ r_enc_5[6]);
    code_vec_0[6] = ((((r_enc_6[0] ^ r_enc_6[1]) ^ r_enc_6[3]) ^ r_enc_6[4]) ^ r_enc_6[6]);
    code_vec_0[7] = ((((r_enc_7[0] ^ r_enc_7[1]) ^ r_enc_7[3]) ^ r_enc_7[4]) ^ r_enc_7[6]);
  end

  always @(*) begin
    code_vec_1[0] = ((((r_enc_0[0] ^ r_enc_0[3]) ^ r_enc_0[4]) ^ r_enc_0[5]) ^ r_enc_0[6]);
    code_vec_1[1] = ((((r_enc_1[0] ^ r_enc_1[3]) ^ r_enc_1[4]) ^ r_enc_1[5]) ^ r_enc_1[6]);
    code_vec_1[2] = ((((r_enc_2[0] ^ r_enc_2[3]) ^ r_enc_2[4]) ^ r_enc_2[5]) ^ r_enc_2[6]);
    code_vec_1[3] = ((((r_enc_3[0] ^ r_enc_3[3]) ^ r_enc_3[4]) ^ r_enc_3[5]) ^ r_enc_3[6]);
    code_vec_1[4] = ((((r_enc_4[0] ^ r_enc_4[3]) ^ r_enc_4[4]) ^ r_enc_4[5]) ^ r_enc_4[6]);
    code_vec_1[5] = ((((r_enc_5[0] ^ r_enc_5[3]) ^ r_enc_5[4]) ^ r_enc_5[5]) ^ r_enc_5[6]);
    code_vec_1[6] = ((((r_enc_6[0] ^ r_enc_6[3]) ^ r_enc_6[4]) ^ r_enc_6[5]) ^ r_enc_6[6]);
    code_vec_1[7] = ((((r_enc_7[0] ^ r_enc_7[3]) ^ r_enc_7[4]) ^ r_enc_7[5]) ^ r_enc_7[6]);
  end

  assign coded_data_payload_fragment = coded_data;
  assign coded_data_valid = coded_data_valid_1;
  assign coded_data_payload_last = raw_data_payload_last_regNext;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      coded_data_valid_1 <= 1'b0;
      raw_data_payload_last_regNext <= 1'b0;
    end else begin
      if(!tail_bits_valid) begin
        if(raw_data_fire) begin
          coded_data_valid_1 <= 1'b1;
        end else begin
          coded_data_valid_1 <= 1'b0;
        end
      end
      raw_data_payload_last_regNext <= raw_data_payload_last;
    end
  end

  always @(posedge clk) begin
    if(tail_bits_valid) begin
      r_enc_buf <= tail_bits_payload;
    end else begin
      if(raw_data_fire) begin
        r_enc_buf <= r_enc_7;
        coded_data <= {code_vec_0,code_vec_1};
      end
    end
  end


endmodule

module ReorderLifo (
  input               inverted_order_valid,
  input               inverted_order_payload_last,
  input      [1:0]    inverted_order_payload_fragment,
  output              decoded_data_valid,
  output              decoded_data_payload_last,
  output     [0:0]    decoded_data_payload_fragment,
  input               clk,
  input               reset
);
  wire                inverted_order_fifo_io_pop_ready;
  wire                decoded_lifo_0_push_method;
  wire                decoded_lifo_1_push_method;
  wire                lifo_demux_input_valid;
  wire                lifo_demux_input_payload_last;
  wire       [0:0]    lifo_demux_input_payload_fragment;
  wire       [0:0]    lifo_mux_io_select;
  wire                inverted_order_fifo_io_push_ready;
  wire                inverted_order_fifo_io_pop_valid;
  wire                inverted_order_fifo_io_pop_payload_last;
  wire       [1:0]    inverted_order_fifo_io_pop_payload_fragment;
  wire       [4:0]    inverted_order_fifo_io_occupancy;
  wire       [4:0]    inverted_order_fifo_io_availability;
  wire                decoded_lifo_0_push_ready;
  wire                decoded_lifo_0_pop_valid;
  wire                decoded_lifo_0_pop_payload_last;
  wire       [0:0]    decoded_lifo_0_pop_payload_fragment;
  wire                decoded_lifo_0_empty;
  wire                decoded_lifo_0_full;
  wire                decoded_lifo_1_push_ready;
  wire                decoded_lifo_1_pop_valid;
  wire                decoded_lifo_1_pop_payload_last;
  wire       [0:0]    decoded_lifo_1_pop_payload_fragment;
  wire                decoded_lifo_1_empty;
  wire                decoded_lifo_1_full;
  wire                lifo_demux_input_ready;
  wire                lifo_demux_outputs_0_valid;
  wire                lifo_demux_outputs_0_payload_last;
  wire       [0:0]    lifo_demux_outputs_0_payload_fragment;
  wire                lifo_demux_outputs_1_valid;
  wire                lifo_demux_outputs_1_payload_last;
  wire       [0:0]    lifo_demux_outputs_1_payload_fragment;
  wire                lifo_mux_io_inputs_0_ready;
  wire                lifo_mux_io_inputs_1_ready;
  wire                lifo_mux_io_output_valid;
  wire                lifo_mux_io_output_payload_last;
  wire       [0:0]    lifo_mux_io_output_payload_fragment;
  reg        `ReorderLifoStates_binary_sequential_type reorder_state;
  wire       [0:0]    lifo_push_sel;
  reg                 fifo_pop_valve;
  wire                when_ReorderLifo_l40;
  wire                inverted_order_fifo_io_pop_fire;
  wire                when_ReorderLifo_l52;
  wire                inverted_order_fifo_io_pop_fire_1;
  reg                 lifo_mux_io_output_valid_regNext;
  reg                 lifo_mux_io_output_payload_last_regNext;
  reg        [0:0]    lifo_mux_io_output_payload_fragment_regNext;
  `ifndef SYNTHESIS
  reg [71:0] reorder_state_string;
  `endif


  StreamFifo inverted_order_fifo (
    .io_push_valid               (inverted_order_valid                         ), //i
    .io_push_ready               (inverted_order_fifo_io_push_ready            ), //o
    .io_push_payload_last        (inverted_order_payload_last                  ), //i
    .io_push_payload_fragment    (inverted_order_payload_fragment              ), //i
    .io_pop_valid                (inverted_order_fifo_io_pop_valid             ), //o
    .io_pop_ready                (inverted_order_fifo_io_pop_ready             ), //i
    .io_pop_payload_last         (inverted_order_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (inverted_order_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                         ), //i
    .io_occupancy                (inverted_order_fifo_io_occupancy             ), //o
    .io_availability             (inverted_order_fifo_io_availability          ), //o
    .clk                         (clk                                          ), //i
    .reset                       (reset                                        )  //i
  );
  SISOLifo decoded_lifo_0 (
    .push_valid               (lifo_demux_outputs_0_valid             ), //i
    .push_ready               (decoded_lifo_0_push_ready              ), //o
    .push_payload_last        (lifo_demux_outputs_0_payload_last      ), //i
    .push_payload_fragment    (lifo_demux_outputs_0_payload_fragment  ), //i
    .pop_valid                (decoded_lifo_0_pop_valid               ), //o
    .pop_ready                (lifo_mux_io_inputs_0_ready             ), //i
    .pop_payload_last         (decoded_lifo_0_pop_payload_last        ), //o
    .pop_payload_fragment     (decoded_lifo_0_pop_payload_fragment    ), //o
    .push_method              (decoded_lifo_0_push_method             ), //i
    .empty                    (decoded_lifo_0_empty                   ), //o
    .full                     (decoded_lifo_0_full                    ), //o
    .clk                      (clk                                    ), //i
    .reset                    (reset                                  )  //i
  );
  SISOLifo decoded_lifo_1 (
    .push_valid               (lifo_demux_outputs_1_valid             ), //i
    .push_ready               (decoded_lifo_1_push_ready              ), //o
    .push_payload_last        (lifo_demux_outputs_1_payload_last      ), //i
    .push_payload_fragment    (lifo_demux_outputs_1_payload_fragment  ), //i
    .pop_valid                (decoded_lifo_1_pop_valid               ), //o
    .pop_ready                (lifo_mux_io_inputs_1_ready             ), //i
    .pop_payload_last         (decoded_lifo_1_pop_payload_last        ), //o
    .pop_payload_fragment     (decoded_lifo_1_pop_payload_fragment    ), //o
    .push_method              (decoded_lifo_1_push_method             ), //i
    .empty                    (decoded_lifo_1_empty                   ), //o
    .full                     (decoded_lifo_1_full                    ), //o
    .clk                      (clk                                    ), //i
    .reset                    (reset                                  )  //i
  );
  LifoDemux lifo_demux (
    .select_1                      (lifo_push_sel                          ), //i
    .input_valid                   (lifo_demux_input_valid                 ), //i
    .input_ready                   (lifo_demux_input_ready                 ), //o
    .input_payload_last            (lifo_demux_input_payload_last          ), //i
    .input_payload_fragment        (lifo_demux_input_payload_fragment      ), //i
    .outputs_0_valid               (lifo_demux_outputs_0_valid             ), //o
    .outputs_0_ready               (decoded_lifo_0_push_ready              ), //i
    .outputs_0_payload_last        (lifo_demux_outputs_0_payload_last      ), //o
    .outputs_0_payload_fragment    (lifo_demux_outputs_0_payload_fragment  ), //o
    .outputs_1_valid               (lifo_demux_outputs_1_valid             ), //o
    .outputs_1_ready               (decoded_lifo_1_push_ready              ), //i
    .outputs_1_payload_last        (lifo_demux_outputs_1_payload_last      ), //o
    .outputs_1_payload_fragment    (lifo_demux_outputs_1_payload_fragment  )  //o
  );
  LifoMux lifo_mux (
    .io_select                       (lifo_mux_io_select                   ), //i
    .io_inputs_0_valid               (decoded_lifo_0_pop_valid             ), //i
    .io_inputs_0_ready               (lifo_mux_io_inputs_0_ready           ), //o
    .io_inputs_0_payload_last        (decoded_lifo_0_pop_payload_last      ), //i
    .io_inputs_0_payload_fragment    (decoded_lifo_0_pop_payload_fragment  ), //i
    .io_inputs_1_valid               (decoded_lifo_1_pop_valid             ), //i
    .io_inputs_1_ready               (lifo_mux_io_inputs_1_ready           ), //o
    .io_inputs_1_payload_last        (decoded_lifo_1_pop_payload_last      ), //i
    .io_inputs_1_payload_fragment    (decoded_lifo_1_pop_payload_fragment  ), //i
    .io_output_valid                 (lifo_mux_io_output_valid             ), //o
    .io_output_ready                 (1'b1                                 ), //i
    .io_output_payload_last          (lifo_mux_io_output_payload_last      ), //o
    .io_output_payload_fragment      (lifo_mux_io_output_payload_fragment  )  //o
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(reorder_state)
      `ReorderLifoStates_binary_sequential_PUSH0POP1 : reorder_state_string = "PUSH0POP1";
      `ReorderLifoStates_binary_sequential_POP0PUSH1 : reorder_state_string = "POP0PUSH1";
      default : reorder_state_string = "?????????";
    endcase
  end
  `endif

  assign lifo_push_sel = reorder_state;
  assign decoded_lifo_0_push_method = (lifo_push_sel == 1'b0);
  assign decoded_lifo_1_push_method = (lifo_push_sel == 1'b1);
  assign lifo_demux_input_payload_fragment = inverted_order_fifo_io_pop_payload_fragment[0];
  assign lifo_demux_input_payload_last = inverted_order_fifo_io_pop_payload_fragment[1];
  assign lifo_demux_input_valid = (inverted_order_fifo_io_pop_valid && fifo_pop_valve);
  assign inverted_order_fifo_io_pop_ready = (lifo_demux_input_ready && fifo_pop_valve);
  assign when_ReorderLifo_l40 = (fifo_pop_valve == 1'b0);
  assign inverted_order_fifo_io_pop_fire = (inverted_order_fifo_io_pop_valid && inverted_order_fifo_io_pop_ready);
  assign when_ReorderLifo_l52 = (fifo_pop_valve == 1'b0);
  assign inverted_order_fifo_io_pop_fire_1 = (inverted_order_fifo_io_pop_valid && inverted_order_fifo_io_pop_ready);
  assign lifo_mux_io_select = (~ lifo_push_sel);
  assign decoded_data_valid = lifo_mux_io_output_valid_regNext;
  assign decoded_data_payload_last = lifo_mux_io_output_payload_last_regNext;
  assign decoded_data_payload_fragment = lifo_mux_io_output_payload_fragment_regNext;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      reorder_state <= `ReorderLifoStates_binary_sequential_PUSH0POP1;
      fifo_pop_valve <= 1'b1;
      lifo_mux_io_output_valid_regNext <= 1'b0;
      lifo_mux_io_output_payload_last_regNext <= 1'b0;
    end else begin
      case(reorder_state)
        `ReorderLifoStates_binary_sequential_PUSH0POP1 : begin
          if(when_ReorderLifo_l40) begin
            if(decoded_lifo_1_empty) begin
              reorder_state <= `ReorderLifoStates_binary_sequential_POP0PUSH1;
              fifo_pop_valve <= 1'b1;
            end
          end else begin
            if(inverted_order_fifo_io_pop_fire) begin
              if(inverted_order_fifo_io_pop_payload_last) begin
                fifo_pop_valve <= 1'b0;
              end
            end
          end
        end
        default : begin
          if(when_ReorderLifo_l52) begin
            if(decoded_lifo_0_empty) begin
              reorder_state <= `ReorderLifoStates_binary_sequential_PUSH0POP1;
              fifo_pop_valve <= 1'b1;
            end
          end else begin
            if(inverted_order_fifo_io_pop_fire_1) begin
              if(inverted_order_fifo_io_pop_payload_last) begin
                fifo_pop_valve <= 1'b0;
              end
            end
          end
        end
      endcase
      lifo_mux_io_output_valid_regNext <= lifo_mux_io_output_valid;
      lifo_mux_io_output_payload_last_regNext <= lifo_mux_io_output_payload_last;
    end
  end

  always @(posedge clk) begin
    lifo_mux_io_output_payload_fragment_regNext <= lifo_mux_io_output_payload_fragment;
  end


endmodule

module Traceback (
  input      [5:0]    min_idx,
  input               s_path_valid,
  input               s_path_payload_last,
  input      [63:0]   s_path_payload_fragment,
  output              tb_node_valid,
  output              tb_node_payload_last,
  output     [1:0]    tb_node_payload_fragment,
  output              halt,
  output              finished,
  input               clk,
  input               reset
);
  wire       [5:0]    _zz_states_shift_rom_port0;
  wire       [0:0]    _zz_in_data_rom_port0;
  reg        [63:0]   _zz_survival_path_ram_0_port1;
  reg        [63:0]   _zz_survival_path_ram_1_port1;
  reg        [63:0]   _zz_survival_path_ram_2_port1;
  wire       [63:0]   _zz_survival_path_ram_0_port;
  wire                _zz_survival_path_ram_0_port_1;
  wire       [63:0]   _zz_survival_path_ram_1_port;
  wire                _zz_survival_path_ram_1_port_1;
  wire       [63:0]   _zz_survival_path_ram_2_port;
  wire                _zz_survival_path_ram_2_port_1;
  wire       [1:0]    _zz_ram_select;
  wire                _zz_survival_path_ram_0_port_2;
  wire                _zz_ram_0_value;
  wire                _zz_survival_path_ram_1_port_2;
  wire                _zz_ram_1_value;
  wire                _zz_survival_path_ram_2_port_2;
  wire                _zz_ram_2_value;
  wire       [6:0]    _zz_cursor;
  wire       [6:0]    _zz_cursor_1;
  wire       [0:0]    _zz_cursor_2;
  wire       [6:0]    _zz_cursor_3;
  wire       [6:0]    _zz_cursor_4;
  wire       [0:0]    _zz_cursor_5;
  wire       [6:0]    _zz_cursor_6;
  wire       [6:0]    _zz_cursor_7;
  wire       [0:0]    _zz_cursor_8;
  wire       [1:0]    _zz_decoded_ram_select;
  wire       [7:0]    _zz_ram_addr_read;
  wire       [1:0]    _zz_decoded_ram_select_1;
  wire       [7:0]    _zz_ram_addr_read_1;
  wire       [1:0]    _zz_decoded_ram_select_2;
  wire       [7:0]    _zz_ram_addr_read_2;
  reg        [1:0]    ram_select;
  reg        [7:0]    ram_addr_write;
  reg                 pkg_tail;
  reg                 tb_finish;
  wire                when_Traceback_l48;
  reg        [1:0]    decoded_ram_select;
  reg        [7:0]    ram_addr_read;
  reg                 pipe_halt;
  wire       [63:0]   ram_0_value;
  wire       [63:0]   ram_1_value;
  wire       [63:0]   ram_2_value;
  reg        [5:0]    min_cursor;
  reg        [6:0]    cursor;
  wire       [5:0]    min_cursor_next;
  wire       [0:0]    tb_node_data_next;
  reg        [0:0]    tb_node_data;
  reg                 tb_node_valid_1;
  reg                 tb_node_last;
  reg                 tail_repeat;
  reg                 goto_tail;
  reg        [2:0]    halt_cnt;
  reg        `TracebackStates_binary_sequential_type traceback_state;
  wire                when_Traceback_l104;
  wire                when_Traceback_l113;
  wire                when_Traceback_l126;
  wire                when_Traceback_l144;
  wire                when_Traceback_l153;
  `ifndef SYNTHESIS
  reg [87:0] traceback_state_string;
  `endif

  (* ram_style = "distributed" *) reg [5:0] states_shift_rom [0:127];
  (* ram_style = "distributed" *) reg [0:0] in_data_rom [0:127];
  reg [63:0] survival_path_ram_0 [0:167];
  reg [63:0] survival_path_ram_1 [0:167];
  reg [63:0] survival_path_ram_2 [0:167];

  assign _zz_ram_select = (ram_select + 2'b01);
  assign _zz_cursor = ({1'd0,min_cursor} <<< 1);
  assign _zz_cursor_2 = ram_0_value[min_cursor];
  assign _zz_cursor_1 = {6'd0, _zz_cursor_2};
  assign _zz_cursor_3 = ({1'd0,min_cursor} <<< 1);
  assign _zz_cursor_5 = ram_1_value[min_cursor];
  assign _zz_cursor_4 = {6'd0, _zz_cursor_5};
  assign _zz_cursor_6 = ({1'd0,min_cursor} <<< 1);
  assign _zz_cursor_8 = ram_2_value[min_cursor];
  assign _zz_cursor_7 = {6'd0, _zz_cursor_8};
  assign _zz_decoded_ram_select = (decoded_ram_select - 2'b01);
  assign _zz_ram_addr_read = (ram_addr_read - 8'h01);
  assign _zz_decoded_ram_select_1 = (decoded_ram_select - 2'b01);
  assign _zz_ram_addr_read_1 = (ram_addr_read - 8'h01);
  assign _zz_decoded_ram_select_2 = (decoded_ram_select - 2'b01);
  assign _zz_ram_addr_read_2 = (ram_addr_read - 8'h01);
  assign _zz_survival_path_ram_0_port = s_path_payload_fragment;
  assign _zz_survival_path_ram_0_port_1 = ((ram_select == 2'b00) && s_path_valid);
  assign _zz_ram_0_value = 1'b1;
  assign _zz_survival_path_ram_1_port = s_path_payload_fragment;
  assign _zz_survival_path_ram_1_port_1 = ((ram_select == 2'b01) && s_path_valid);
  assign _zz_ram_1_value = 1'b1;
  assign _zz_survival_path_ram_2_port = s_path_payload_fragment;
  assign _zz_survival_path_ram_2_port_1 = ((ram_select == 2'b10) && s_path_valid);
  assign _zz_ram_2_value = 1'b1;
  initial begin
    $readmemb("ConvCombTest.v_toplevel_decoder_tbu_core_states_shift_rom.bin",states_shift_rom);
  end
  assign _zz_states_shift_rom_port0 = states_shift_rom[cursor];
  initial begin
    $readmemb("ConvCombTest.v_toplevel_decoder_tbu_core_in_data_rom.bin",in_data_rom);
  end
  assign _zz_in_data_rom_port0 = in_data_rom[cursor];
  always @(posedge clk) begin
    if(_zz_survival_path_ram_0_port_1) begin
      survival_path_ram_0[ram_addr_write] <= _zz_survival_path_ram_0_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_ram_0_value) begin
      _zz_survival_path_ram_0_port1 <= survival_path_ram_0[ram_addr_read];
    end
  end

  always @(posedge clk) begin
    if(_zz_survival_path_ram_1_port_1) begin
      survival_path_ram_1[ram_addr_write] <= _zz_survival_path_ram_1_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_ram_1_value) begin
      _zz_survival_path_ram_1_port1 <= survival_path_ram_1[ram_addr_read];
    end
  end

  always @(posedge clk) begin
    if(_zz_survival_path_ram_2_port_1) begin
      survival_path_ram_2[ram_addr_write] <= _zz_survival_path_ram_2_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_ram_2_value) begin
      _zz_survival_path_ram_2_port1 <= survival_path_ram_2[ram_addr_read];
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(traceback_state)
      `TracebackStates_binary_sequential_IDLE : traceback_state_string = "IDLE       ";
      `TracebackStates_binary_sequential_TB : traceback_state_string = "TB         ";
      `TracebackStates_binary_sequential_DECODE : traceback_state_string = "DECODE     ";
      `TracebackStates_binary_sequential_HALT : traceback_state_string = "HALT       ";
      `TracebackStates_binary_sequential_TAIL_DECODE : traceback_state_string = "TAIL_DECODE";
      `TracebackStates_binary_sequential_FINISH : traceback_state_string = "FINISH     ";
      default : traceback_state_string = "???????????";
    endcase
  end
  `endif

  assign when_Traceback_l48 = (8'ha7 <= ram_addr_write);
  assign ram_0_value = _zz_survival_path_ram_0_port1;
  assign ram_1_value = _zz_survival_path_ram_1_port1;
  assign ram_2_value = _zz_survival_path_ram_2_port1;
  always @(*) begin
    case(decoded_ram_select)
      2'b00 : begin
        cursor = (_zz_cursor + _zz_cursor_1);
      end
      2'b01 : begin
        cursor = (_zz_cursor_3 + _zz_cursor_4);
      end
      2'b10 : begin
        cursor = (_zz_cursor_6 + _zz_cursor_7);
      end
      default : begin
        cursor = 7'h0;
      end
    endcase
  end

  assign min_cursor_next = _zz_states_shift_rom_port0;
  assign tb_node_data_next = _zz_in_data_rom_port0;
  assign when_Traceback_l104 = (((ram_addr_write == 8'h53) && (decoded_ram_select == ram_select)) || pkg_tail);
  assign when_Traceback_l113 = (halt_cnt == 3'b111);
  assign when_Traceback_l126 = (ram_addr_read == 8'ha7);
  assign when_Traceback_l144 = (ram_addr_read == 8'ha7);
  assign when_Traceback_l153 = (ram_addr_read == 8'ha7);
  assign finished = tb_finish;
  assign halt = pipe_halt;
  assign tb_node_valid = tb_node_valid_1;
  assign tb_node_payload_fragment = {tb_finish,tb_node_data};
  assign tb_node_payload_last = tb_node_last;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      ram_select <= 2'b00;
      ram_addr_write <= 8'h0;
      pkg_tail <= 1'b0;
      ram_addr_read <= 8'h0;
      tb_node_valid_1 <= 1'b0;
      tb_node_last <= 1'b0;
      tail_repeat <= 1'b0;
      goto_tail <= 1'b0;
      traceback_state <= `TracebackStates_binary_sequential_FINISH;
    end else begin
      if(tb_finish) begin
        ram_addr_write <= 8'h0;
        ram_select <= 2'b00;
        pkg_tail <= 1'b0;
      end else begin
        if(s_path_valid) begin
          if(when_Traceback_l48) begin
            ram_addr_write <= 8'h0;
            ram_select <= ((ram_select == 2'b10) ? 2'b00 : _zz_ram_select);
          end else begin
            ram_addr_write <= (ram_addr_write + 8'h01);
          end
          pkg_tail <= s_path_payload_last;
        end
      end
      case(traceback_state)
        `TracebackStates_binary_sequential_FINISH : begin
          tb_node_valid_1 <= 1'b0;
          tb_node_last <= 1'b0;
          tail_repeat <= 1'b0;
          goto_tail <= 1'b0;
          traceback_state <= `TracebackStates_binary_sequential_IDLE;
        end
        `TracebackStates_binary_sequential_IDLE : begin
          tb_node_valid_1 <= 1'b0;
          tb_node_last <= 1'b0;
          if(when_Traceback_l104) begin
            traceback_state <= `TracebackStates_binary_sequential_HALT;
            ram_addr_read <= (ram_addr_write - 8'h01);
            goto_tail <= pkg_tail;
          end
        end
        `TracebackStates_binary_sequential_HALT : begin
          if(when_Traceback_l113) begin
            ram_addr_read <= (ram_addr_read - 8'h01);
            if(goto_tail) begin
              tail_repeat <= ((ram_addr_write < 8'h54) && (decoded_ram_select == ram_select));
              traceback_state <= `TracebackStates_binary_sequential_TAIL_DECODE;
            end else begin
              traceback_state <= `TracebackStates_binary_sequential_TB;
            end
          end
        end
        `TracebackStates_binary_sequential_TAIL_DECODE : begin
          if(when_Traceback_l126) begin
            if(tail_repeat) begin
              traceback_state <= `TracebackStates_binary_sequential_TAIL_DECODE;
              tail_repeat <= 1'b0;
              tb_node_last <= 1'b0;
            end else begin
              traceback_state <= `TracebackStates_binary_sequential_FINISH;
              tb_node_last <= 1'b1;
            end
          end
          ram_addr_read <= ((ram_addr_read == 8'h0) ? 8'ha7 : _zz_ram_addr_read);
          tb_node_valid_1 <= 1'b1;
        end
        `TracebackStates_binary_sequential_TB : begin
          if(when_Traceback_l144) begin
            traceback_state <= `TracebackStates_binary_sequential_DECODE;
          end
          ram_addr_read <= ((ram_addr_read == 8'h0) ? 8'ha7 : _zz_ram_addr_read_1);
        end
        default : begin
          if(when_Traceback_l153) begin
            traceback_state <= `TracebackStates_binary_sequential_IDLE;
            tb_node_last <= 1'b1;
          end
          ram_addr_read <= ((ram_addr_read == 8'h0) ? 8'ha7 : _zz_ram_addr_read_2);
          tb_node_valid_1 <= 1'b1;
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(traceback_state)
      `TracebackStates_binary_sequential_FINISH : begin
        tb_finish <= 1'b1;
        pipe_halt <= 1'b1;
        decoded_ram_select <= 2'b01;
      end
      `TracebackStates_binary_sequential_IDLE : begin
        tb_finish <= 1'b0;
        pipe_halt <= 1'b0;
        halt_cnt <= 3'b000;
        if(when_Traceback_l104) begin
          pipe_halt <= 1'b1;
        end
      end
      `TracebackStates_binary_sequential_HALT : begin
        halt_cnt <= (halt_cnt + 3'b001);
        if(when_Traceback_l113) begin
          if(goto_tail) begin
            decoded_ram_select <= ram_select;
            min_cursor <= min_idx;
          end
        end
      end
      `TracebackStates_binary_sequential_TAIL_DECODE : begin
        if(when_Traceback_l126) begin
          if(tail_repeat) begin
            decoded_ram_select <= ((decoded_ram_select == 2'b00) ? 2'b10 : _zz_decoded_ram_select);
          end else begin
            tb_finish <= 1'b1;
          end
        end
        min_cursor <= min_cursor_next;
        tb_node_data <= tb_node_data_next;
      end
      `TracebackStates_binary_sequential_TB : begin
        if(when_Traceback_l144) begin
          decoded_ram_select <= ((decoded_ram_select == 2'b00) ? 2'b10 : _zz_decoded_ram_select_1);
        end
        min_cursor <= min_cursor_next;
      end
      default : begin
        pipe_halt <= 1'b0;
        if(when_Traceback_l153) begin
          decoded_ram_select <= ((decoded_ram_select == 2'b00) ? 2'b10 : _zz_decoded_ram_select_2);
        end
        min_cursor <= min_cursor_next;
        tb_node_data <= tb_node_data_next;
      end
    endcase
  end


endmodule

module PathMetric (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [1:0]    raw_data_payload_fragment_data,
  input      [1:0]    raw_data_payload_fragment_indicate,
  input               tbu_finished,
  output     [5:0]    min_idx,
  output              s_path_valid,
  output              s_path_payload_last,
  output     [63:0]   s_path_payload_fragment,
  input               clk,
  input               reset
);
  wire       [15:0]   addCompareSelect_64_dist_0;
  wire       [15:0]   addCompareSelect_64_dist_1;
  wire       [15:0]   addCompareSelect_65_dist_0;
  wire       [15:0]   addCompareSelect_65_dist_1;
  wire       [15:0]   addCompareSelect_66_dist_0;
  wire       [15:0]   addCompareSelect_66_dist_1;
  wire       [15:0]   addCompareSelect_67_dist_0;
  wire       [15:0]   addCompareSelect_67_dist_1;
  wire       [15:0]   addCompareSelect_68_dist_0;
  wire       [15:0]   addCompareSelect_68_dist_1;
  wire       [15:0]   addCompareSelect_69_dist_0;
  wire       [15:0]   addCompareSelect_69_dist_1;
  wire       [15:0]   addCompareSelect_70_dist_0;
  wire       [15:0]   addCompareSelect_70_dist_1;
  wire       [15:0]   addCompareSelect_71_dist_0;
  wire       [15:0]   addCompareSelect_71_dist_1;
  wire       [15:0]   addCompareSelect_72_dist_0;
  wire       [15:0]   addCompareSelect_72_dist_1;
  wire       [15:0]   addCompareSelect_73_dist_0;
  wire       [15:0]   addCompareSelect_73_dist_1;
  wire       [15:0]   addCompareSelect_74_dist_0;
  wire       [15:0]   addCompareSelect_74_dist_1;
  wire       [15:0]   addCompareSelect_75_dist_0;
  wire       [15:0]   addCompareSelect_75_dist_1;
  wire       [15:0]   addCompareSelect_76_dist_0;
  wire       [15:0]   addCompareSelect_76_dist_1;
  wire       [15:0]   addCompareSelect_77_dist_0;
  wire       [15:0]   addCompareSelect_77_dist_1;
  wire       [15:0]   addCompareSelect_78_dist_0;
  wire       [15:0]   addCompareSelect_78_dist_1;
  wire       [15:0]   addCompareSelect_79_dist_0;
  wire       [15:0]   addCompareSelect_79_dist_1;
  wire       [15:0]   addCompareSelect_80_dist_0;
  wire       [15:0]   addCompareSelect_80_dist_1;
  wire       [15:0]   addCompareSelect_81_dist_0;
  wire       [15:0]   addCompareSelect_81_dist_1;
  wire       [15:0]   addCompareSelect_82_dist_0;
  wire       [15:0]   addCompareSelect_82_dist_1;
  wire       [15:0]   addCompareSelect_83_dist_0;
  wire       [15:0]   addCompareSelect_83_dist_1;
  wire       [15:0]   addCompareSelect_84_dist_0;
  wire       [15:0]   addCompareSelect_84_dist_1;
  wire       [15:0]   addCompareSelect_85_dist_0;
  wire       [15:0]   addCompareSelect_85_dist_1;
  wire       [15:0]   addCompareSelect_86_dist_0;
  wire       [15:0]   addCompareSelect_86_dist_1;
  wire       [15:0]   addCompareSelect_87_dist_0;
  wire       [15:0]   addCompareSelect_87_dist_1;
  wire       [15:0]   addCompareSelect_88_dist_0;
  wire       [15:0]   addCompareSelect_88_dist_1;
  wire       [15:0]   addCompareSelect_89_dist_0;
  wire       [15:0]   addCompareSelect_89_dist_1;
  wire       [15:0]   addCompareSelect_90_dist_0;
  wire       [15:0]   addCompareSelect_90_dist_1;
  wire       [15:0]   addCompareSelect_91_dist_0;
  wire       [15:0]   addCompareSelect_91_dist_1;
  wire       [15:0]   addCompareSelect_92_dist_0;
  wire       [15:0]   addCompareSelect_92_dist_1;
  wire       [15:0]   addCompareSelect_93_dist_0;
  wire       [15:0]   addCompareSelect_93_dist_1;
  wire       [15:0]   addCompareSelect_94_dist_0;
  wire       [15:0]   addCompareSelect_94_dist_1;
  wire       [15:0]   addCompareSelect_95_dist_0;
  wire       [15:0]   addCompareSelect_95_dist_1;
  wire       [15:0]   addCompareSelect_96_dist_0;
  wire       [15:0]   addCompareSelect_96_dist_1;
  wire       [15:0]   addCompareSelect_97_dist_0;
  wire       [15:0]   addCompareSelect_97_dist_1;
  wire       [15:0]   addCompareSelect_98_dist_0;
  wire       [15:0]   addCompareSelect_98_dist_1;
  wire       [15:0]   addCompareSelect_99_dist_0;
  wire       [15:0]   addCompareSelect_99_dist_1;
  wire       [15:0]   addCompareSelect_100_dist_0;
  wire       [15:0]   addCompareSelect_100_dist_1;
  wire       [15:0]   addCompareSelect_101_dist_0;
  wire       [15:0]   addCompareSelect_101_dist_1;
  wire       [15:0]   addCompareSelect_102_dist_0;
  wire       [15:0]   addCompareSelect_102_dist_1;
  wire       [15:0]   addCompareSelect_103_dist_0;
  wire       [15:0]   addCompareSelect_103_dist_1;
  wire       [15:0]   addCompareSelect_104_dist_0;
  wire       [15:0]   addCompareSelect_104_dist_1;
  wire       [15:0]   addCompareSelect_105_dist_0;
  wire       [15:0]   addCompareSelect_105_dist_1;
  wire       [15:0]   addCompareSelect_106_dist_0;
  wire       [15:0]   addCompareSelect_106_dist_1;
  wire       [15:0]   addCompareSelect_107_dist_0;
  wire       [15:0]   addCompareSelect_107_dist_1;
  wire       [15:0]   addCompareSelect_108_dist_0;
  wire       [15:0]   addCompareSelect_108_dist_1;
  wire       [15:0]   addCompareSelect_109_dist_0;
  wire       [15:0]   addCompareSelect_109_dist_1;
  wire       [15:0]   addCompareSelect_110_dist_0;
  wire       [15:0]   addCompareSelect_110_dist_1;
  wire       [15:0]   addCompareSelect_111_dist_0;
  wire       [15:0]   addCompareSelect_111_dist_1;
  wire       [15:0]   addCompareSelect_112_dist_0;
  wire       [15:0]   addCompareSelect_112_dist_1;
  wire       [15:0]   addCompareSelect_113_dist_0;
  wire       [15:0]   addCompareSelect_113_dist_1;
  wire       [15:0]   addCompareSelect_114_dist_0;
  wire       [15:0]   addCompareSelect_114_dist_1;
  wire       [15:0]   addCompareSelect_115_dist_0;
  wire       [15:0]   addCompareSelect_115_dist_1;
  wire       [15:0]   addCompareSelect_116_dist_0;
  wire       [15:0]   addCompareSelect_116_dist_1;
  wire       [15:0]   addCompareSelect_117_dist_0;
  wire       [15:0]   addCompareSelect_117_dist_1;
  wire       [15:0]   addCompareSelect_118_dist_0;
  wire       [15:0]   addCompareSelect_118_dist_1;
  wire       [15:0]   addCompareSelect_119_dist_0;
  wire       [15:0]   addCompareSelect_119_dist_1;
  wire       [15:0]   addCompareSelect_120_dist_0;
  wire       [15:0]   addCompareSelect_120_dist_1;
  wire       [15:0]   addCompareSelect_121_dist_0;
  wire       [15:0]   addCompareSelect_121_dist_1;
  wire       [15:0]   addCompareSelect_122_dist_0;
  wire       [15:0]   addCompareSelect_122_dist_1;
  wire       [15:0]   addCompareSelect_123_dist_0;
  wire       [15:0]   addCompareSelect_123_dist_1;
  wire       [15:0]   addCompareSelect_124_dist_0;
  wire       [15:0]   addCompareSelect_124_dist_1;
  wire       [15:0]   addCompareSelect_125_dist_0;
  wire       [15:0]   addCompareSelect_125_dist_1;
  wire       [15:0]   addCompareSelect_126_dist_0;
  wire       [15:0]   addCompareSelect_126_dist_1;
  wire       [15:0]   addCompareSelect_127_dist_0;
  wire       [15:0]   addCompareSelect_127_dist_1;
  wire       [2:0]    branchMetric_64_dist_0;
  wire       [2:0]    branchMetric_64_dist_1;
  wire       [15:0]   addCompareSelect_64_state_weight;
  wire                addCompareSelect_64_decision;
  wire       [2:0]    branchMetric_65_dist_0;
  wire       [2:0]    branchMetric_65_dist_1;
  wire       [15:0]   addCompareSelect_65_state_weight;
  wire                addCompareSelect_65_decision;
  wire       [2:0]    branchMetric_66_dist_0;
  wire       [2:0]    branchMetric_66_dist_1;
  wire       [15:0]   addCompareSelect_66_state_weight;
  wire                addCompareSelect_66_decision;
  wire       [2:0]    branchMetric_67_dist_0;
  wire       [2:0]    branchMetric_67_dist_1;
  wire       [15:0]   addCompareSelect_67_state_weight;
  wire                addCompareSelect_67_decision;
  wire       [2:0]    branchMetric_68_dist_0;
  wire       [2:0]    branchMetric_68_dist_1;
  wire       [15:0]   addCompareSelect_68_state_weight;
  wire                addCompareSelect_68_decision;
  wire       [2:0]    branchMetric_69_dist_0;
  wire       [2:0]    branchMetric_69_dist_1;
  wire       [15:0]   addCompareSelect_69_state_weight;
  wire                addCompareSelect_69_decision;
  wire       [2:0]    branchMetric_70_dist_0;
  wire       [2:0]    branchMetric_70_dist_1;
  wire       [15:0]   addCompareSelect_70_state_weight;
  wire                addCompareSelect_70_decision;
  wire       [2:0]    branchMetric_71_dist_0;
  wire       [2:0]    branchMetric_71_dist_1;
  wire       [15:0]   addCompareSelect_71_state_weight;
  wire                addCompareSelect_71_decision;
  wire       [2:0]    branchMetric_72_dist_0;
  wire       [2:0]    branchMetric_72_dist_1;
  wire       [15:0]   addCompareSelect_72_state_weight;
  wire                addCompareSelect_72_decision;
  wire       [2:0]    branchMetric_73_dist_0;
  wire       [2:0]    branchMetric_73_dist_1;
  wire       [15:0]   addCompareSelect_73_state_weight;
  wire                addCompareSelect_73_decision;
  wire       [2:0]    branchMetric_74_dist_0;
  wire       [2:0]    branchMetric_74_dist_1;
  wire       [15:0]   addCompareSelect_74_state_weight;
  wire                addCompareSelect_74_decision;
  wire       [2:0]    branchMetric_75_dist_0;
  wire       [2:0]    branchMetric_75_dist_1;
  wire       [15:0]   addCompareSelect_75_state_weight;
  wire                addCompareSelect_75_decision;
  wire       [2:0]    branchMetric_76_dist_0;
  wire       [2:0]    branchMetric_76_dist_1;
  wire       [15:0]   addCompareSelect_76_state_weight;
  wire                addCompareSelect_76_decision;
  wire       [2:0]    branchMetric_77_dist_0;
  wire       [2:0]    branchMetric_77_dist_1;
  wire       [15:0]   addCompareSelect_77_state_weight;
  wire                addCompareSelect_77_decision;
  wire       [2:0]    branchMetric_78_dist_0;
  wire       [2:0]    branchMetric_78_dist_1;
  wire       [15:0]   addCompareSelect_78_state_weight;
  wire                addCompareSelect_78_decision;
  wire       [2:0]    branchMetric_79_dist_0;
  wire       [2:0]    branchMetric_79_dist_1;
  wire       [15:0]   addCompareSelect_79_state_weight;
  wire                addCompareSelect_79_decision;
  wire       [2:0]    branchMetric_80_dist_0;
  wire       [2:0]    branchMetric_80_dist_1;
  wire       [15:0]   addCompareSelect_80_state_weight;
  wire                addCompareSelect_80_decision;
  wire       [2:0]    branchMetric_81_dist_0;
  wire       [2:0]    branchMetric_81_dist_1;
  wire       [15:0]   addCompareSelect_81_state_weight;
  wire                addCompareSelect_81_decision;
  wire       [2:0]    branchMetric_82_dist_0;
  wire       [2:0]    branchMetric_82_dist_1;
  wire       [15:0]   addCompareSelect_82_state_weight;
  wire                addCompareSelect_82_decision;
  wire       [2:0]    branchMetric_83_dist_0;
  wire       [2:0]    branchMetric_83_dist_1;
  wire       [15:0]   addCompareSelect_83_state_weight;
  wire                addCompareSelect_83_decision;
  wire       [2:0]    branchMetric_84_dist_0;
  wire       [2:0]    branchMetric_84_dist_1;
  wire       [15:0]   addCompareSelect_84_state_weight;
  wire                addCompareSelect_84_decision;
  wire       [2:0]    branchMetric_85_dist_0;
  wire       [2:0]    branchMetric_85_dist_1;
  wire       [15:0]   addCompareSelect_85_state_weight;
  wire                addCompareSelect_85_decision;
  wire       [2:0]    branchMetric_86_dist_0;
  wire       [2:0]    branchMetric_86_dist_1;
  wire       [15:0]   addCompareSelect_86_state_weight;
  wire                addCompareSelect_86_decision;
  wire       [2:0]    branchMetric_87_dist_0;
  wire       [2:0]    branchMetric_87_dist_1;
  wire       [15:0]   addCompareSelect_87_state_weight;
  wire                addCompareSelect_87_decision;
  wire       [2:0]    branchMetric_88_dist_0;
  wire       [2:0]    branchMetric_88_dist_1;
  wire       [15:0]   addCompareSelect_88_state_weight;
  wire                addCompareSelect_88_decision;
  wire       [2:0]    branchMetric_89_dist_0;
  wire       [2:0]    branchMetric_89_dist_1;
  wire       [15:0]   addCompareSelect_89_state_weight;
  wire                addCompareSelect_89_decision;
  wire       [2:0]    branchMetric_90_dist_0;
  wire       [2:0]    branchMetric_90_dist_1;
  wire       [15:0]   addCompareSelect_90_state_weight;
  wire                addCompareSelect_90_decision;
  wire       [2:0]    branchMetric_91_dist_0;
  wire       [2:0]    branchMetric_91_dist_1;
  wire       [15:0]   addCompareSelect_91_state_weight;
  wire                addCompareSelect_91_decision;
  wire       [2:0]    branchMetric_92_dist_0;
  wire       [2:0]    branchMetric_92_dist_1;
  wire       [15:0]   addCompareSelect_92_state_weight;
  wire                addCompareSelect_92_decision;
  wire       [2:0]    branchMetric_93_dist_0;
  wire       [2:0]    branchMetric_93_dist_1;
  wire       [15:0]   addCompareSelect_93_state_weight;
  wire                addCompareSelect_93_decision;
  wire       [2:0]    branchMetric_94_dist_0;
  wire       [2:0]    branchMetric_94_dist_1;
  wire       [15:0]   addCompareSelect_94_state_weight;
  wire                addCompareSelect_94_decision;
  wire       [2:0]    branchMetric_95_dist_0;
  wire       [2:0]    branchMetric_95_dist_1;
  wire       [15:0]   addCompareSelect_95_state_weight;
  wire                addCompareSelect_95_decision;
  wire       [2:0]    branchMetric_96_dist_0;
  wire       [2:0]    branchMetric_96_dist_1;
  wire       [15:0]   addCompareSelect_96_state_weight;
  wire                addCompareSelect_96_decision;
  wire       [2:0]    branchMetric_97_dist_0;
  wire       [2:0]    branchMetric_97_dist_1;
  wire       [15:0]   addCompareSelect_97_state_weight;
  wire                addCompareSelect_97_decision;
  wire       [2:0]    branchMetric_98_dist_0;
  wire       [2:0]    branchMetric_98_dist_1;
  wire       [15:0]   addCompareSelect_98_state_weight;
  wire                addCompareSelect_98_decision;
  wire       [2:0]    branchMetric_99_dist_0;
  wire       [2:0]    branchMetric_99_dist_1;
  wire       [15:0]   addCompareSelect_99_state_weight;
  wire                addCompareSelect_99_decision;
  wire       [2:0]    branchMetric_100_dist_0;
  wire       [2:0]    branchMetric_100_dist_1;
  wire       [15:0]   addCompareSelect_100_state_weight;
  wire                addCompareSelect_100_decision;
  wire       [2:0]    branchMetric_101_dist_0;
  wire       [2:0]    branchMetric_101_dist_1;
  wire       [15:0]   addCompareSelect_101_state_weight;
  wire                addCompareSelect_101_decision;
  wire       [2:0]    branchMetric_102_dist_0;
  wire       [2:0]    branchMetric_102_dist_1;
  wire       [15:0]   addCompareSelect_102_state_weight;
  wire                addCompareSelect_102_decision;
  wire       [2:0]    branchMetric_103_dist_0;
  wire       [2:0]    branchMetric_103_dist_1;
  wire       [15:0]   addCompareSelect_103_state_weight;
  wire                addCompareSelect_103_decision;
  wire       [2:0]    branchMetric_104_dist_0;
  wire       [2:0]    branchMetric_104_dist_1;
  wire       [15:0]   addCompareSelect_104_state_weight;
  wire                addCompareSelect_104_decision;
  wire       [2:0]    branchMetric_105_dist_0;
  wire       [2:0]    branchMetric_105_dist_1;
  wire       [15:0]   addCompareSelect_105_state_weight;
  wire                addCompareSelect_105_decision;
  wire       [2:0]    branchMetric_106_dist_0;
  wire       [2:0]    branchMetric_106_dist_1;
  wire       [15:0]   addCompareSelect_106_state_weight;
  wire                addCompareSelect_106_decision;
  wire       [2:0]    branchMetric_107_dist_0;
  wire       [2:0]    branchMetric_107_dist_1;
  wire       [15:0]   addCompareSelect_107_state_weight;
  wire                addCompareSelect_107_decision;
  wire       [2:0]    branchMetric_108_dist_0;
  wire       [2:0]    branchMetric_108_dist_1;
  wire       [15:0]   addCompareSelect_108_state_weight;
  wire                addCompareSelect_108_decision;
  wire       [2:0]    branchMetric_109_dist_0;
  wire       [2:0]    branchMetric_109_dist_1;
  wire       [15:0]   addCompareSelect_109_state_weight;
  wire                addCompareSelect_109_decision;
  wire       [2:0]    branchMetric_110_dist_0;
  wire       [2:0]    branchMetric_110_dist_1;
  wire       [15:0]   addCompareSelect_110_state_weight;
  wire                addCompareSelect_110_decision;
  wire       [2:0]    branchMetric_111_dist_0;
  wire       [2:0]    branchMetric_111_dist_1;
  wire       [15:0]   addCompareSelect_111_state_weight;
  wire                addCompareSelect_111_decision;
  wire       [2:0]    branchMetric_112_dist_0;
  wire       [2:0]    branchMetric_112_dist_1;
  wire       [15:0]   addCompareSelect_112_state_weight;
  wire                addCompareSelect_112_decision;
  wire       [2:0]    branchMetric_113_dist_0;
  wire       [2:0]    branchMetric_113_dist_1;
  wire       [15:0]   addCompareSelect_113_state_weight;
  wire                addCompareSelect_113_decision;
  wire       [2:0]    branchMetric_114_dist_0;
  wire       [2:0]    branchMetric_114_dist_1;
  wire       [15:0]   addCompareSelect_114_state_weight;
  wire                addCompareSelect_114_decision;
  wire       [2:0]    branchMetric_115_dist_0;
  wire       [2:0]    branchMetric_115_dist_1;
  wire       [15:0]   addCompareSelect_115_state_weight;
  wire                addCompareSelect_115_decision;
  wire       [2:0]    branchMetric_116_dist_0;
  wire       [2:0]    branchMetric_116_dist_1;
  wire       [15:0]   addCompareSelect_116_state_weight;
  wire                addCompareSelect_116_decision;
  wire       [2:0]    branchMetric_117_dist_0;
  wire       [2:0]    branchMetric_117_dist_1;
  wire       [15:0]   addCompareSelect_117_state_weight;
  wire                addCompareSelect_117_decision;
  wire       [2:0]    branchMetric_118_dist_0;
  wire       [2:0]    branchMetric_118_dist_1;
  wire       [15:0]   addCompareSelect_118_state_weight;
  wire                addCompareSelect_118_decision;
  wire       [2:0]    branchMetric_119_dist_0;
  wire       [2:0]    branchMetric_119_dist_1;
  wire       [15:0]   addCompareSelect_119_state_weight;
  wire                addCompareSelect_119_decision;
  wire       [2:0]    branchMetric_120_dist_0;
  wire       [2:0]    branchMetric_120_dist_1;
  wire       [15:0]   addCompareSelect_120_state_weight;
  wire                addCompareSelect_120_decision;
  wire       [2:0]    branchMetric_121_dist_0;
  wire       [2:0]    branchMetric_121_dist_1;
  wire       [15:0]   addCompareSelect_121_state_weight;
  wire                addCompareSelect_121_decision;
  wire       [2:0]    branchMetric_122_dist_0;
  wire       [2:0]    branchMetric_122_dist_1;
  wire       [15:0]   addCompareSelect_122_state_weight;
  wire                addCompareSelect_122_decision;
  wire       [2:0]    branchMetric_123_dist_0;
  wire       [2:0]    branchMetric_123_dist_1;
  wire       [15:0]   addCompareSelect_123_state_weight;
  wire                addCompareSelect_123_decision;
  wire       [2:0]    branchMetric_124_dist_0;
  wire       [2:0]    branchMetric_124_dist_1;
  wire       [15:0]   addCompareSelect_124_state_weight;
  wire                addCompareSelect_124_decision;
  wire       [2:0]    branchMetric_125_dist_0;
  wire       [2:0]    branchMetric_125_dist_1;
  wire       [15:0]   addCompareSelect_125_state_weight;
  wire                addCompareSelect_125_decision;
  wire       [2:0]    branchMetric_126_dist_0;
  wire       [2:0]    branchMetric_126_dist_1;
  wire       [15:0]   addCompareSelect_126_state_weight;
  wire                addCompareSelect_126_decision;
  wire       [2:0]    branchMetric_127_dist_0;
  wire       [2:0]    branchMetric_127_dist_1;
  wire       [15:0]   addCompareSelect_127_state_weight;
  wire                addCompareSelect_127_decision;
  wire       [15:0]   minVal_1_min_val;
  wire       [5:0]    minVal_1_min_idx;
  reg        [15:0]   node_weight_0;
  reg        [15:0]   node_weight_1;
  reg        [15:0]   node_weight_2;
  reg        [15:0]   node_weight_3;
  reg        [15:0]   node_weight_4;
  reg        [15:0]   node_weight_5;
  reg        [15:0]   node_weight_6;
  reg        [15:0]   node_weight_7;
  reg        [15:0]   node_weight_8;
  reg        [15:0]   node_weight_9;
  reg        [15:0]   node_weight_10;
  reg        [15:0]   node_weight_11;
  reg        [15:0]   node_weight_12;
  reg        [15:0]   node_weight_13;
  reg        [15:0]   node_weight_14;
  reg        [15:0]   node_weight_15;
  reg        [15:0]   node_weight_16;
  reg        [15:0]   node_weight_17;
  reg        [15:0]   node_weight_18;
  reg        [15:0]   node_weight_19;
  reg        [15:0]   node_weight_20;
  reg        [15:0]   node_weight_21;
  reg        [15:0]   node_weight_22;
  reg        [15:0]   node_weight_23;
  reg        [15:0]   node_weight_24;
  reg        [15:0]   node_weight_25;
  reg        [15:0]   node_weight_26;
  reg        [15:0]   node_weight_27;
  reg        [15:0]   node_weight_28;
  reg        [15:0]   node_weight_29;
  reg        [15:0]   node_weight_30;
  reg        [15:0]   node_weight_31;
  reg        [15:0]   node_weight_32;
  reg        [15:0]   node_weight_33;
  reg        [15:0]   node_weight_34;
  reg        [15:0]   node_weight_35;
  reg        [15:0]   node_weight_36;
  reg        [15:0]   node_weight_37;
  reg        [15:0]   node_weight_38;
  reg        [15:0]   node_weight_39;
  reg        [15:0]   node_weight_40;
  reg        [15:0]   node_weight_41;
  reg        [15:0]   node_weight_42;
  reg        [15:0]   node_weight_43;
  reg        [15:0]   node_weight_44;
  reg        [15:0]   node_weight_45;
  reg        [15:0]   node_weight_46;
  reg        [15:0]   node_weight_47;
  reg        [15:0]   node_weight_48;
  reg        [15:0]   node_weight_49;
  reg        [15:0]   node_weight_50;
  reg        [15:0]   node_weight_51;
  reg        [15:0]   node_weight_52;
  reg        [15:0]   node_weight_53;
  reg        [15:0]   node_weight_54;
  reg        [15:0]   node_weight_55;
  reg        [15:0]   node_weight_56;
  reg        [15:0]   node_weight_57;
  reg        [15:0]   node_weight_58;
  reg        [15:0]   node_weight_59;
  reg        [15:0]   node_weight_60;
  reg        [15:0]   node_weight_61;
  reg        [15:0]   node_weight_62;
  reg        [15:0]   node_weight_63;
  reg        [2:0]    candidate_branches_0;
  reg        [2:0]    candidate_branches_1;
  reg        [2:0]    candidate_branches_2;
  reg        [2:0]    candidate_branches_3;
  reg        [2:0]    candidate_branches_4;
  reg        [2:0]    candidate_branches_5;
  reg        [2:0]    candidate_branches_6;
  reg        [2:0]    candidate_branches_7;
  reg        [2:0]    candidate_branches_8;
  reg        [2:0]    candidate_branches_9;
  reg        [2:0]    candidate_branches_10;
  reg        [2:0]    candidate_branches_11;
  reg        [2:0]    candidate_branches_12;
  reg        [2:0]    candidate_branches_13;
  reg        [2:0]    candidate_branches_14;
  reg        [2:0]    candidate_branches_15;
  reg        [2:0]    candidate_branches_16;
  reg        [2:0]    candidate_branches_17;
  reg        [2:0]    candidate_branches_18;
  reg        [2:0]    candidate_branches_19;
  reg        [2:0]    candidate_branches_20;
  reg        [2:0]    candidate_branches_21;
  reg        [2:0]    candidate_branches_22;
  reg        [2:0]    candidate_branches_23;
  reg        [2:0]    candidate_branches_24;
  reg        [2:0]    candidate_branches_25;
  reg        [2:0]    candidate_branches_26;
  reg        [2:0]    candidate_branches_27;
  reg        [2:0]    candidate_branches_28;
  reg        [2:0]    candidate_branches_29;
  reg        [2:0]    candidate_branches_30;
  reg        [2:0]    candidate_branches_31;
  reg        [2:0]    candidate_branches_32;
  reg        [2:0]    candidate_branches_33;
  reg        [2:0]    candidate_branches_34;
  reg        [2:0]    candidate_branches_35;
  reg        [2:0]    candidate_branches_36;
  reg        [2:0]    candidate_branches_37;
  reg        [2:0]    candidate_branches_38;
  reg        [2:0]    candidate_branches_39;
  reg        [2:0]    candidate_branches_40;
  reg        [2:0]    candidate_branches_41;
  reg        [2:0]    candidate_branches_42;
  reg        [2:0]    candidate_branches_43;
  reg        [2:0]    candidate_branches_44;
  reg        [2:0]    candidate_branches_45;
  reg        [2:0]    candidate_branches_46;
  reg        [2:0]    candidate_branches_47;
  reg        [2:0]    candidate_branches_48;
  reg        [2:0]    candidate_branches_49;
  reg        [2:0]    candidate_branches_50;
  reg        [2:0]    candidate_branches_51;
  reg        [2:0]    candidate_branches_52;
  reg        [2:0]    candidate_branches_53;
  reg        [2:0]    candidate_branches_54;
  reg        [2:0]    candidate_branches_55;
  reg        [2:0]    candidate_branches_56;
  reg        [2:0]    candidate_branches_57;
  reg        [2:0]    candidate_branches_58;
  reg        [2:0]    candidate_branches_59;
  reg        [2:0]    candidate_branches_60;
  reg        [2:0]    candidate_branches_61;
  reg        [2:0]    candidate_branches_62;
  reg        [2:0]    candidate_branches_63;
  reg        [2:0]    candidate_branches_64;
  reg        [2:0]    candidate_branches_65;
  reg        [2:0]    candidate_branches_66;
  reg        [2:0]    candidate_branches_67;
  reg        [2:0]    candidate_branches_68;
  reg        [2:0]    candidate_branches_69;
  reg        [2:0]    candidate_branches_70;
  reg        [2:0]    candidate_branches_71;
  reg        [2:0]    candidate_branches_72;
  reg        [2:0]    candidate_branches_73;
  reg        [2:0]    candidate_branches_74;
  reg        [2:0]    candidate_branches_75;
  reg        [2:0]    candidate_branches_76;
  reg        [2:0]    candidate_branches_77;
  reg        [2:0]    candidate_branches_78;
  reg        [2:0]    candidate_branches_79;
  reg        [2:0]    candidate_branches_80;
  reg        [2:0]    candidate_branches_81;
  reg        [2:0]    candidate_branches_82;
  reg        [2:0]    candidate_branches_83;
  reg        [2:0]    candidate_branches_84;
  reg        [2:0]    candidate_branches_85;
  reg        [2:0]    candidate_branches_86;
  reg        [2:0]    candidate_branches_87;
  reg        [2:0]    candidate_branches_88;
  reg        [2:0]    candidate_branches_89;
  reg        [2:0]    candidate_branches_90;
  reg        [2:0]    candidate_branches_91;
  reg        [2:0]    candidate_branches_92;
  reg        [2:0]    candidate_branches_93;
  reg        [2:0]    candidate_branches_94;
  reg        [2:0]    candidate_branches_95;
  reg        [2:0]    candidate_branches_96;
  reg        [2:0]    candidate_branches_97;
  reg        [2:0]    candidate_branches_98;
  reg        [2:0]    candidate_branches_99;
  reg        [2:0]    candidate_branches_100;
  reg        [2:0]    candidate_branches_101;
  reg        [2:0]    candidate_branches_102;
  reg        [2:0]    candidate_branches_103;
  reg        [2:0]    candidate_branches_104;
  reg        [2:0]    candidate_branches_105;
  reg        [2:0]    candidate_branches_106;
  reg        [2:0]    candidate_branches_107;
  reg        [2:0]    candidate_branches_108;
  reg        [2:0]    candidate_branches_109;
  reg        [2:0]    candidate_branches_110;
  reg        [2:0]    candidate_branches_111;
  reg        [2:0]    candidate_branches_112;
  reg        [2:0]    candidate_branches_113;
  reg        [2:0]    candidate_branches_114;
  reg        [2:0]    candidate_branches_115;
  reg        [2:0]    candidate_branches_116;
  reg        [2:0]    candidate_branches_117;
  reg        [2:0]    candidate_branches_118;
  reg        [2:0]    candidate_branches_119;
  reg        [2:0]    candidate_branches_120;
  reg        [2:0]    candidate_branches_121;
  reg        [2:0]    candidate_branches_122;
  reg        [2:0]    candidate_branches_123;
  reg        [2:0]    candidate_branches_124;
  reg        [2:0]    candidate_branches_125;
  reg        [2:0]    candidate_branches_126;
  reg        [2:0]    candidate_branches_127;
  reg        [63:0]   survival_path;
  reg                 raw_data_next;
  reg                 raw_data_last_next;
  reg                 survival_path_valid;
  reg                 survival_path_last;
  reg                 raw_data_ready_1;
  wire                when_PathMetric_l29;

  BranchMetric branchMetric_64 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_64_dist_0              ), //o
    .dist_1               (branchMetric_64_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_64 (
    .last_state_weight_0    (node_weight_0                     ), //i
    .last_state_weight_1    (node_weight_1                     ), //i
    .dist_0                 (addCompareSelect_64_dist_0        ), //i
    .dist_1                 (addCompareSelect_64_dist_1        ), //i
    .state_weight           (addCompareSelect_64_state_weight  ), //o
    .decision               (addCompareSelect_64_decision      )  //o
  );
  BranchMetric branchMetric_65 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_65_dist_0              ), //o
    .dist_1               (branchMetric_65_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_65 (
    .last_state_weight_0    (node_weight_2                     ), //i
    .last_state_weight_1    (node_weight_3                     ), //i
    .dist_0                 (addCompareSelect_65_dist_0        ), //i
    .dist_1                 (addCompareSelect_65_dist_1        ), //i
    .state_weight           (addCompareSelect_65_state_weight  ), //o
    .decision               (addCompareSelect_65_decision      )  //o
  );
  BranchMetric branchMetric_66 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_66_dist_0              ), //o
    .dist_1               (branchMetric_66_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_66 (
    .last_state_weight_0    (node_weight_4                     ), //i
    .last_state_weight_1    (node_weight_5                     ), //i
    .dist_0                 (addCompareSelect_66_dist_0        ), //i
    .dist_1                 (addCompareSelect_66_dist_1        ), //i
    .state_weight           (addCompareSelect_66_state_weight  ), //o
    .decision               (addCompareSelect_66_decision      )  //o
  );
  BranchMetric branchMetric_67 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_67_dist_0              ), //o
    .dist_1               (branchMetric_67_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_67 (
    .last_state_weight_0    (node_weight_6                     ), //i
    .last_state_weight_1    (node_weight_7                     ), //i
    .dist_0                 (addCompareSelect_67_dist_0        ), //i
    .dist_1                 (addCompareSelect_67_dist_1        ), //i
    .state_weight           (addCompareSelect_67_state_weight  ), //o
    .decision               (addCompareSelect_67_decision      )  //o
  );
  BranchMetric branchMetric_68 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_68_dist_0              ), //o
    .dist_1               (branchMetric_68_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_68 (
    .last_state_weight_0    (node_weight_8                     ), //i
    .last_state_weight_1    (node_weight_9                     ), //i
    .dist_0                 (addCompareSelect_68_dist_0        ), //i
    .dist_1                 (addCompareSelect_68_dist_1        ), //i
    .state_weight           (addCompareSelect_68_state_weight  ), //o
    .decision               (addCompareSelect_68_decision      )  //o
  );
  BranchMetric branchMetric_69 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_69_dist_0              ), //o
    .dist_1               (branchMetric_69_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_69 (
    .last_state_weight_0    (node_weight_10                    ), //i
    .last_state_weight_1    (node_weight_11                    ), //i
    .dist_0                 (addCompareSelect_69_dist_0        ), //i
    .dist_1                 (addCompareSelect_69_dist_1        ), //i
    .state_weight           (addCompareSelect_69_state_weight  ), //o
    .decision               (addCompareSelect_69_decision      )  //o
  );
  BranchMetric branchMetric_70 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_70_dist_0              ), //o
    .dist_1               (branchMetric_70_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_70 (
    .last_state_weight_0    (node_weight_12                    ), //i
    .last_state_weight_1    (node_weight_13                    ), //i
    .dist_0                 (addCompareSelect_70_dist_0        ), //i
    .dist_1                 (addCompareSelect_70_dist_1        ), //i
    .state_weight           (addCompareSelect_70_state_weight  ), //o
    .decision               (addCompareSelect_70_decision      )  //o
  );
  BranchMetric branchMetric_71 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_71_dist_0              ), //o
    .dist_1               (branchMetric_71_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_71 (
    .last_state_weight_0    (node_weight_14                    ), //i
    .last_state_weight_1    (node_weight_15                    ), //i
    .dist_0                 (addCompareSelect_71_dist_0        ), //i
    .dist_1                 (addCompareSelect_71_dist_1        ), //i
    .state_weight           (addCompareSelect_71_state_weight  ), //o
    .decision               (addCompareSelect_71_decision      )  //o
  );
  BranchMetric branchMetric_72 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_72_dist_0              ), //o
    .dist_1               (branchMetric_72_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_72 (
    .last_state_weight_0    (node_weight_16                    ), //i
    .last_state_weight_1    (node_weight_17                    ), //i
    .dist_0                 (addCompareSelect_72_dist_0        ), //i
    .dist_1                 (addCompareSelect_72_dist_1        ), //i
    .state_weight           (addCompareSelect_72_state_weight  ), //o
    .decision               (addCompareSelect_72_decision      )  //o
  );
  BranchMetric branchMetric_73 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_73_dist_0              ), //o
    .dist_1               (branchMetric_73_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_73 (
    .last_state_weight_0    (node_weight_18                    ), //i
    .last_state_weight_1    (node_weight_19                    ), //i
    .dist_0                 (addCompareSelect_73_dist_0        ), //i
    .dist_1                 (addCompareSelect_73_dist_1        ), //i
    .state_weight           (addCompareSelect_73_state_weight  ), //o
    .decision               (addCompareSelect_73_decision      )  //o
  );
  BranchMetric branchMetric_74 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_74_dist_0              ), //o
    .dist_1               (branchMetric_74_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_74 (
    .last_state_weight_0    (node_weight_20                    ), //i
    .last_state_weight_1    (node_weight_21                    ), //i
    .dist_0                 (addCompareSelect_74_dist_0        ), //i
    .dist_1                 (addCompareSelect_74_dist_1        ), //i
    .state_weight           (addCompareSelect_74_state_weight  ), //o
    .decision               (addCompareSelect_74_decision      )  //o
  );
  BranchMetric branchMetric_75 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_75_dist_0              ), //o
    .dist_1               (branchMetric_75_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_75 (
    .last_state_weight_0    (node_weight_22                    ), //i
    .last_state_weight_1    (node_weight_23                    ), //i
    .dist_0                 (addCompareSelect_75_dist_0        ), //i
    .dist_1                 (addCompareSelect_75_dist_1        ), //i
    .state_weight           (addCompareSelect_75_state_weight  ), //o
    .decision               (addCompareSelect_75_decision      )  //o
  );
  BranchMetric branchMetric_76 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_76_dist_0              ), //o
    .dist_1               (branchMetric_76_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_76 (
    .last_state_weight_0    (node_weight_24                    ), //i
    .last_state_weight_1    (node_weight_25                    ), //i
    .dist_0                 (addCompareSelect_76_dist_0        ), //i
    .dist_1                 (addCompareSelect_76_dist_1        ), //i
    .state_weight           (addCompareSelect_76_state_weight  ), //o
    .decision               (addCompareSelect_76_decision      )  //o
  );
  BranchMetric branchMetric_77 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_77_dist_0              ), //o
    .dist_1               (branchMetric_77_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_77 (
    .last_state_weight_0    (node_weight_26                    ), //i
    .last_state_weight_1    (node_weight_27                    ), //i
    .dist_0                 (addCompareSelect_77_dist_0        ), //i
    .dist_1                 (addCompareSelect_77_dist_1        ), //i
    .state_weight           (addCompareSelect_77_state_weight  ), //o
    .decision               (addCompareSelect_77_decision      )  //o
  );
  BranchMetric branchMetric_78 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_78_dist_0              ), //o
    .dist_1               (branchMetric_78_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_78 (
    .last_state_weight_0    (node_weight_28                    ), //i
    .last_state_weight_1    (node_weight_29                    ), //i
    .dist_0                 (addCompareSelect_78_dist_0        ), //i
    .dist_1                 (addCompareSelect_78_dist_1        ), //i
    .state_weight           (addCompareSelect_78_state_weight  ), //o
    .decision               (addCompareSelect_78_decision      )  //o
  );
  BranchMetric branchMetric_79 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_79_dist_0              ), //o
    .dist_1               (branchMetric_79_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_79 (
    .last_state_weight_0    (node_weight_30                    ), //i
    .last_state_weight_1    (node_weight_31                    ), //i
    .dist_0                 (addCompareSelect_79_dist_0        ), //i
    .dist_1                 (addCompareSelect_79_dist_1        ), //i
    .state_weight           (addCompareSelect_79_state_weight  ), //o
    .decision               (addCompareSelect_79_decision      )  //o
  );
  BranchMetric branchMetric_80 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_80_dist_0              ), //o
    .dist_1               (branchMetric_80_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_80 (
    .last_state_weight_0    (node_weight_32                    ), //i
    .last_state_weight_1    (node_weight_33                    ), //i
    .dist_0                 (addCompareSelect_80_dist_0        ), //i
    .dist_1                 (addCompareSelect_80_dist_1        ), //i
    .state_weight           (addCompareSelect_80_state_weight  ), //o
    .decision               (addCompareSelect_80_decision      )  //o
  );
  BranchMetric branchMetric_81 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_81_dist_0              ), //o
    .dist_1               (branchMetric_81_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_81 (
    .last_state_weight_0    (node_weight_34                    ), //i
    .last_state_weight_1    (node_weight_35                    ), //i
    .dist_0                 (addCompareSelect_81_dist_0        ), //i
    .dist_1                 (addCompareSelect_81_dist_1        ), //i
    .state_weight           (addCompareSelect_81_state_weight  ), //o
    .decision               (addCompareSelect_81_decision      )  //o
  );
  BranchMetric branchMetric_82 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_82_dist_0              ), //o
    .dist_1               (branchMetric_82_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_82 (
    .last_state_weight_0    (node_weight_36                    ), //i
    .last_state_weight_1    (node_weight_37                    ), //i
    .dist_0                 (addCompareSelect_82_dist_0        ), //i
    .dist_1                 (addCompareSelect_82_dist_1        ), //i
    .state_weight           (addCompareSelect_82_state_weight  ), //o
    .decision               (addCompareSelect_82_decision      )  //o
  );
  BranchMetric branchMetric_83 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_83_dist_0              ), //o
    .dist_1               (branchMetric_83_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_83 (
    .last_state_weight_0    (node_weight_38                    ), //i
    .last_state_weight_1    (node_weight_39                    ), //i
    .dist_0                 (addCompareSelect_83_dist_0        ), //i
    .dist_1                 (addCompareSelect_83_dist_1        ), //i
    .state_weight           (addCompareSelect_83_state_weight  ), //o
    .decision               (addCompareSelect_83_decision      )  //o
  );
  BranchMetric branchMetric_84 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_84_dist_0              ), //o
    .dist_1               (branchMetric_84_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_84 (
    .last_state_weight_0    (node_weight_40                    ), //i
    .last_state_weight_1    (node_weight_41                    ), //i
    .dist_0                 (addCompareSelect_84_dist_0        ), //i
    .dist_1                 (addCompareSelect_84_dist_1        ), //i
    .state_weight           (addCompareSelect_84_state_weight  ), //o
    .decision               (addCompareSelect_84_decision      )  //o
  );
  BranchMetric branchMetric_85 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_85_dist_0              ), //o
    .dist_1               (branchMetric_85_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_85 (
    .last_state_weight_0    (node_weight_42                    ), //i
    .last_state_weight_1    (node_weight_43                    ), //i
    .dist_0                 (addCompareSelect_85_dist_0        ), //i
    .dist_1                 (addCompareSelect_85_dist_1        ), //i
    .state_weight           (addCompareSelect_85_state_weight  ), //o
    .decision               (addCompareSelect_85_decision      )  //o
  );
  BranchMetric branchMetric_86 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_86_dist_0              ), //o
    .dist_1               (branchMetric_86_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_86 (
    .last_state_weight_0    (node_weight_44                    ), //i
    .last_state_weight_1    (node_weight_45                    ), //i
    .dist_0                 (addCompareSelect_86_dist_0        ), //i
    .dist_1                 (addCompareSelect_86_dist_1        ), //i
    .state_weight           (addCompareSelect_86_state_weight  ), //o
    .decision               (addCompareSelect_86_decision      )  //o
  );
  BranchMetric branchMetric_87 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_87_dist_0              ), //o
    .dist_1               (branchMetric_87_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_87 (
    .last_state_weight_0    (node_weight_46                    ), //i
    .last_state_weight_1    (node_weight_47                    ), //i
    .dist_0                 (addCompareSelect_87_dist_0        ), //i
    .dist_1                 (addCompareSelect_87_dist_1        ), //i
    .state_weight           (addCompareSelect_87_state_weight  ), //o
    .decision               (addCompareSelect_87_decision      )  //o
  );
  BranchMetric branchMetric_88 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_88_dist_0              ), //o
    .dist_1               (branchMetric_88_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_88 (
    .last_state_weight_0    (node_weight_48                    ), //i
    .last_state_weight_1    (node_weight_49                    ), //i
    .dist_0                 (addCompareSelect_88_dist_0        ), //i
    .dist_1                 (addCompareSelect_88_dist_1        ), //i
    .state_weight           (addCompareSelect_88_state_weight  ), //o
    .decision               (addCompareSelect_88_decision      )  //o
  );
  BranchMetric branchMetric_89 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_89_dist_0              ), //o
    .dist_1               (branchMetric_89_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_89 (
    .last_state_weight_0    (node_weight_50                    ), //i
    .last_state_weight_1    (node_weight_51                    ), //i
    .dist_0                 (addCompareSelect_89_dist_0        ), //i
    .dist_1                 (addCompareSelect_89_dist_1        ), //i
    .state_weight           (addCompareSelect_89_state_weight  ), //o
    .decision               (addCompareSelect_89_decision      )  //o
  );
  BranchMetric branchMetric_90 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_90_dist_0              ), //o
    .dist_1               (branchMetric_90_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_90 (
    .last_state_weight_0    (node_weight_52                    ), //i
    .last_state_weight_1    (node_weight_53                    ), //i
    .dist_0                 (addCompareSelect_90_dist_0        ), //i
    .dist_1                 (addCompareSelect_90_dist_1        ), //i
    .state_weight           (addCompareSelect_90_state_weight  ), //o
    .decision               (addCompareSelect_90_decision      )  //o
  );
  BranchMetric branchMetric_91 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_91_dist_0              ), //o
    .dist_1               (branchMetric_91_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_91 (
    .last_state_weight_0    (node_weight_54                    ), //i
    .last_state_weight_1    (node_weight_55                    ), //i
    .dist_0                 (addCompareSelect_91_dist_0        ), //i
    .dist_1                 (addCompareSelect_91_dist_1        ), //i
    .state_weight           (addCompareSelect_91_state_weight  ), //o
    .decision               (addCompareSelect_91_decision      )  //o
  );
  BranchMetric branchMetric_92 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_92_dist_0              ), //o
    .dist_1               (branchMetric_92_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_92 (
    .last_state_weight_0    (node_weight_56                    ), //i
    .last_state_weight_1    (node_weight_57                    ), //i
    .dist_0                 (addCompareSelect_92_dist_0        ), //i
    .dist_1                 (addCompareSelect_92_dist_1        ), //i
    .state_weight           (addCompareSelect_92_state_weight  ), //o
    .decision               (addCompareSelect_92_decision      )  //o
  );
  BranchMetric branchMetric_93 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_93_dist_0              ), //o
    .dist_1               (branchMetric_93_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_93 (
    .last_state_weight_0    (node_weight_58                    ), //i
    .last_state_weight_1    (node_weight_59                    ), //i
    .dist_0                 (addCompareSelect_93_dist_0        ), //i
    .dist_1                 (addCompareSelect_93_dist_1        ), //i
    .state_weight           (addCompareSelect_93_state_weight  ), //o
    .decision               (addCompareSelect_93_decision      )  //o
  );
  BranchMetric branchMetric_94 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_94_dist_0              ), //o
    .dist_1               (branchMetric_94_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_94 (
    .last_state_weight_0    (node_weight_60                    ), //i
    .last_state_weight_1    (node_weight_61                    ), //i
    .dist_0                 (addCompareSelect_94_dist_0        ), //i
    .dist_1                 (addCompareSelect_94_dist_1        ), //i
    .state_weight           (addCompareSelect_94_state_weight  ), //o
    .decision               (addCompareSelect_94_decision      )  //o
  );
  BranchMetric branchMetric_95 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_95_dist_0              ), //o
    .dist_1               (branchMetric_95_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_95 (
    .last_state_weight_0    (node_weight_62                    ), //i
    .last_state_weight_1    (node_weight_63                    ), //i
    .dist_0                 (addCompareSelect_95_dist_0        ), //i
    .dist_1                 (addCompareSelect_95_dist_1        ), //i
    .state_weight           (addCompareSelect_95_state_weight  ), //o
    .decision               (addCompareSelect_95_decision      )  //o
  );
  BranchMetric branchMetric_96 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_96_dist_0              ), //o
    .dist_1               (branchMetric_96_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_96 (
    .last_state_weight_0    (node_weight_0                     ), //i
    .last_state_weight_1    (node_weight_1                     ), //i
    .dist_0                 (addCompareSelect_96_dist_0        ), //i
    .dist_1                 (addCompareSelect_96_dist_1        ), //i
    .state_weight           (addCompareSelect_96_state_weight  ), //o
    .decision               (addCompareSelect_96_decision      )  //o
  );
  BranchMetric branchMetric_97 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_97_dist_0              ), //o
    .dist_1               (branchMetric_97_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_97 (
    .last_state_weight_0    (node_weight_2                     ), //i
    .last_state_weight_1    (node_weight_3                     ), //i
    .dist_0                 (addCompareSelect_97_dist_0        ), //i
    .dist_1                 (addCompareSelect_97_dist_1        ), //i
    .state_weight           (addCompareSelect_97_state_weight  ), //o
    .decision               (addCompareSelect_97_decision      )  //o
  );
  BranchMetric branchMetric_98 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_98_dist_0              ), //o
    .dist_1               (branchMetric_98_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_98 (
    .last_state_weight_0    (node_weight_4                     ), //i
    .last_state_weight_1    (node_weight_5                     ), //i
    .dist_0                 (addCompareSelect_98_dist_0        ), //i
    .dist_1                 (addCompareSelect_98_dist_1        ), //i
    .state_weight           (addCompareSelect_98_state_weight  ), //o
    .decision               (addCompareSelect_98_decision      )  //o
  );
  BranchMetric branchMetric_99 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_99_dist_0              ), //o
    .dist_1               (branchMetric_99_dist_1              )  //o
  );
  AddCompareSelect addCompareSelect_99 (
    .last_state_weight_0    (node_weight_6                     ), //i
    .last_state_weight_1    (node_weight_7                     ), //i
    .dist_0                 (addCompareSelect_99_dist_0        ), //i
    .dist_1                 (addCompareSelect_99_dist_1        ), //i
    .state_weight           (addCompareSelect_99_state_weight  ), //o
    .decision               (addCompareSelect_99_decision      )  //o
  );
  BranchMetric branchMetric_100 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_100_dist_0             ), //o
    .dist_1               (branchMetric_100_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_100 (
    .last_state_weight_0    (node_weight_8                      ), //i
    .last_state_weight_1    (node_weight_9                      ), //i
    .dist_0                 (addCompareSelect_100_dist_0        ), //i
    .dist_1                 (addCompareSelect_100_dist_1        ), //i
    .state_weight           (addCompareSelect_100_state_weight  ), //o
    .decision               (addCompareSelect_100_decision      )  //o
  );
  BranchMetric branchMetric_101 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_101_dist_0             ), //o
    .dist_1               (branchMetric_101_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_101 (
    .last_state_weight_0    (node_weight_10                     ), //i
    .last_state_weight_1    (node_weight_11                     ), //i
    .dist_0                 (addCompareSelect_101_dist_0        ), //i
    .dist_1                 (addCompareSelect_101_dist_1        ), //i
    .state_weight           (addCompareSelect_101_state_weight  ), //o
    .decision               (addCompareSelect_101_decision      )  //o
  );
  BranchMetric branchMetric_102 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_102_dist_0             ), //o
    .dist_1               (branchMetric_102_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_102 (
    .last_state_weight_0    (node_weight_12                     ), //i
    .last_state_weight_1    (node_weight_13                     ), //i
    .dist_0                 (addCompareSelect_102_dist_0        ), //i
    .dist_1                 (addCompareSelect_102_dist_1        ), //i
    .state_weight           (addCompareSelect_102_state_weight  ), //o
    .decision               (addCompareSelect_102_decision      )  //o
  );
  BranchMetric branchMetric_103 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_103_dist_0             ), //o
    .dist_1               (branchMetric_103_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_103 (
    .last_state_weight_0    (node_weight_14                     ), //i
    .last_state_weight_1    (node_weight_15                     ), //i
    .dist_0                 (addCompareSelect_103_dist_0        ), //i
    .dist_1                 (addCompareSelect_103_dist_1        ), //i
    .state_weight           (addCompareSelect_103_state_weight  ), //o
    .decision               (addCompareSelect_103_decision      )  //o
  );
  BranchMetric branchMetric_104 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_104_dist_0             ), //o
    .dist_1               (branchMetric_104_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_104 (
    .last_state_weight_0    (node_weight_16                     ), //i
    .last_state_weight_1    (node_weight_17                     ), //i
    .dist_0                 (addCompareSelect_104_dist_0        ), //i
    .dist_1                 (addCompareSelect_104_dist_1        ), //i
    .state_weight           (addCompareSelect_104_state_weight  ), //o
    .decision               (addCompareSelect_104_decision      )  //o
  );
  BranchMetric branchMetric_105 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_105_dist_0             ), //o
    .dist_1               (branchMetric_105_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_105 (
    .last_state_weight_0    (node_weight_18                     ), //i
    .last_state_weight_1    (node_weight_19                     ), //i
    .dist_0                 (addCompareSelect_105_dist_0        ), //i
    .dist_1                 (addCompareSelect_105_dist_1        ), //i
    .state_weight           (addCompareSelect_105_state_weight  ), //o
    .decision               (addCompareSelect_105_decision      )  //o
  );
  BranchMetric branchMetric_106 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_106_dist_0             ), //o
    .dist_1               (branchMetric_106_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_106 (
    .last_state_weight_0    (node_weight_20                     ), //i
    .last_state_weight_1    (node_weight_21                     ), //i
    .dist_0                 (addCompareSelect_106_dist_0        ), //i
    .dist_1                 (addCompareSelect_106_dist_1        ), //i
    .state_weight           (addCompareSelect_106_state_weight  ), //o
    .decision               (addCompareSelect_106_decision      )  //o
  );
  BranchMetric branchMetric_107 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_107_dist_0             ), //o
    .dist_1               (branchMetric_107_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_107 (
    .last_state_weight_0    (node_weight_22                     ), //i
    .last_state_weight_1    (node_weight_23                     ), //i
    .dist_0                 (addCompareSelect_107_dist_0        ), //i
    .dist_1                 (addCompareSelect_107_dist_1        ), //i
    .state_weight           (addCompareSelect_107_state_weight  ), //o
    .decision               (addCompareSelect_107_decision      )  //o
  );
  BranchMetric branchMetric_108 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_108_dist_0             ), //o
    .dist_1               (branchMetric_108_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_108 (
    .last_state_weight_0    (node_weight_24                     ), //i
    .last_state_weight_1    (node_weight_25                     ), //i
    .dist_0                 (addCompareSelect_108_dist_0        ), //i
    .dist_1                 (addCompareSelect_108_dist_1        ), //i
    .state_weight           (addCompareSelect_108_state_weight  ), //o
    .decision               (addCompareSelect_108_decision      )  //o
  );
  BranchMetric branchMetric_109 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_109_dist_0             ), //o
    .dist_1               (branchMetric_109_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_109 (
    .last_state_weight_0    (node_weight_26                     ), //i
    .last_state_weight_1    (node_weight_27                     ), //i
    .dist_0                 (addCompareSelect_109_dist_0        ), //i
    .dist_1                 (addCompareSelect_109_dist_1        ), //i
    .state_weight           (addCompareSelect_109_state_weight  ), //o
    .decision               (addCompareSelect_109_decision      )  //o
  );
  BranchMetric branchMetric_110 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_110_dist_0             ), //o
    .dist_1               (branchMetric_110_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_110 (
    .last_state_weight_0    (node_weight_28                     ), //i
    .last_state_weight_1    (node_weight_29                     ), //i
    .dist_0                 (addCompareSelect_110_dist_0        ), //i
    .dist_1                 (addCompareSelect_110_dist_1        ), //i
    .state_weight           (addCompareSelect_110_state_weight  ), //o
    .decision               (addCompareSelect_110_decision      )  //o
  );
  BranchMetric branchMetric_111 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_111_dist_0             ), //o
    .dist_1               (branchMetric_111_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_111 (
    .last_state_weight_0    (node_weight_30                     ), //i
    .last_state_weight_1    (node_weight_31                     ), //i
    .dist_0                 (addCompareSelect_111_dist_0        ), //i
    .dist_1                 (addCompareSelect_111_dist_1        ), //i
    .state_weight           (addCompareSelect_111_state_weight  ), //o
    .decision               (addCompareSelect_111_decision      )  //o
  );
  BranchMetric branchMetric_112 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_112_dist_0             ), //o
    .dist_1               (branchMetric_112_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_112 (
    .last_state_weight_0    (node_weight_32                     ), //i
    .last_state_weight_1    (node_weight_33                     ), //i
    .dist_0                 (addCompareSelect_112_dist_0        ), //i
    .dist_1                 (addCompareSelect_112_dist_1        ), //i
    .state_weight           (addCompareSelect_112_state_weight  ), //o
    .decision               (addCompareSelect_112_decision      )  //o
  );
  BranchMetric branchMetric_113 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_113_dist_0             ), //o
    .dist_1               (branchMetric_113_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_113 (
    .last_state_weight_0    (node_weight_34                     ), //i
    .last_state_weight_1    (node_weight_35                     ), //i
    .dist_0                 (addCompareSelect_113_dist_0        ), //i
    .dist_1                 (addCompareSelect_113_dist_1        ), //i
    .state_weight           (addCompareSelect_113_state_weight  ), //o
    .decision               (addCompareSelect_113_decision      )  //o
  );
  BranchMetric branchMetric_114 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_114_dist_0             ), //o
    .dist_1               (branchMetric_114_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_114 (
    .last_state_weight_0    (node_weight_36                     ), //i
    .last_state_weight_1    (node_weight_37                     ), //i
    .dist_0                 (addCompareSelect_114_dist_0        ), //i
    .dist_1                 (addCompareSelect_114_dist_1        ), //i
    .state_weight           (addCompareSelect_114_state_weight  ), //o
    .decision               (addCompareSelect_114_decision      )  //o
  );
  BranchMetric branchMetric_115 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_115_dist_0             ), //o
    .dist_1               (branchMetric_115_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_115 (
    .last_state_weight_0    (node_weight_38                     ), //i
    .last_state_weight_1    (node_weight_39                     ), //i
    .dist_0                 (addCompareSelect_115_dist_0        ), //i
    .dist_1                 (addCompareSelect_115_dist_1        ), //i
    .state_weight           (addCompareSelect_115_state_weight  ), //o
    .decision               (addCompareSelect_115_decision      )  //o
  );
  BranchMetric branchMetric_116 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_116_dist_0             ), //o
    .dist_1               (branchMetric_116_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_116 (
    .last_state_weight_0    (node_weight_40                     ), //i
    .last_state_weight_1    (node_weight_41                     ), //i
    .dist_0                 (addCompareSelect_116_dist_0        ), //i
    .dist_1                 (addCompareSelect_116_dist_1        ), //i
    .state_weight           (addCompareSelect_116_state_weight  ), //o
    .decision               (addCompareSelect_116_decision      )  //o
  );
  BranchMetric branchMetric_117 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_117_dist_0             ), //o
    .dist_1               (branchMetric_117_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_117 (
    .last_state_weight_0    (node_weight_42                     ), //i
    .last_state_weight_1    (node_weight_43                     ), //i
    .dist_0                 (addCompareSelect_117_dist_0        ), //i
    .dist_1                 (addCompareSelect_117_dist_1        ), //i
    .state_weight           (addCompareSelect_117_state_weight  ), //o
    .decision               (addCompareSelect_117_decision      )  //o
  );
  BranchMetric branchMetric_118 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_118_dist_0             ), //o
    .dist_1               (branchMetric_118_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_118 (
    .last_state_weight_0    (node_weight_44                     ), //i
    .last_state_weight_1    (node_weight_45                     ), //i
    .dist_0                 (addCompareSelect_118_dist_0        ), //i
    .dist_1                 (addCompareSelect_118_dist_1        ), //i
    .state_weight           (addCompareSelect_118_state_weight  ), //o
    .decision               (addCompareSelect_118_decision      )  //o
  );
  BranchMetric branchMetric_119 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_119_dist_0             ), //o
    .dist_1               (branchMetric_119_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_119 (
    .last_state_weight_0    (node_weight_46                     ), //i
    .last_state_weight_1    (node_weight_47                     ), //i
    .dist_0                 (addCompareSelect_119_dist_0        ), //i
    .dist_1                 (addCompareSelect_119_dist_1        ), //i
    .state_weight           (addCompareSelect_119_state_weight  ), //o
    .decision               (addCompareSelect_119_decision      )  //o
  );
  BranchMetric branchMetric_120 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_120_dist_0             ), //o
    .dist_1               (branchMetric_120_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_120 (
    .last_state_weight_0    (node_weight_48                     ), //i
    .last_state_weight_1    (node_weight_49                     ), //i
    .dist_0                 (addCompareSelect_120_dist_0        ), //i
    .dist_1                 (addCompareSelect_120_dist_1        ), //i
    .state_weight           (addCompareSelect_120_state_weight  ), //o
    .decision               (addCompareSelect_120_decision      )  //o
  );
  BranchMetric branchMetric_121 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_121_dist_0             ), //o
    .dist_1               (branchMetric_121_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_121 (
    .last_state_weight_0    (node_weight_50                     ), //i
    .last_state_weight_1    (node_weight_51                     ), //i
    .dist_0                 (addCompareSelect_121_dist_0        ), //i
    .dist_1                 (addCompareSelect_121_dist_1        ), //i
    .state_weight           (addCompareSelect_121_state_weight  ), //o
    .decision               (addCompareSelect_121_decision      )  //o
  );
  BranchMetric branchMetric_122 (
    .trellis_unit_0       (2'b01                               ), //i
    .trellis_unit_1       (2'b10                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_122_dist_0             ), //o
    .dist_1               (branchMetric_122_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_122 (
    .last_state_weight_0    (node_weight_52                     ), //i
    .last_state_weight_1    (node_weight_53                     ), //i
    .dist_0                 (addCompareSelect_122_dist_0        ), //i
    .dist_1                 (addCompareSelect_122_dist_1        ), //i
    .state_weight           (addCompareSelect_122_state_weight  ), //o
    .decision               (addCompareSelect_122_decision      )  //o
  );
  BranchMetric branchMetric_123 (
    .trellis_unit_0       (2'b11                               ), //i
    .trellis_unit_1       (2'b00                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_123_dist_0             ), //o
    .dist_1               (branchMetric_123_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_123 (
    .last_state_weight_0    (node_weight_54                     ), //i
    .last_state_weight_1    (node_weight_55                     ), //i
    .dist_0                 (addCompareSelect_123_dist_0        ), //i
    .dist_1                 (addCompareSelect_123_dist_1        ), //i
    .state_weight           (addCompareSelect_123_state_weight  ), //o
    .decision               (addCompareSelect_123_decision      )  //o
  );
  BranchMetric branchMetric_124 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_124_dist_0             ), //o
    .dist_1               (branchMetric_124_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_124 (
    .last_state_weight_0    (node_weight_56                     ), //i
    .last_state_weight_1    (node_weight_57                     ), //i
    .dist_0                 (addCompareSelect_124_dist_0        ), //i
    .dist_1                 (addCompareSelect_124_dist_1        ), //i
    .state_weight           (addCompareSelect_124_state_weight  ), //o
    .decision               (addCompareSelect_124_decision      )  //o
  );
  BranchMetric branchMetric_125 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_125_dist_0             ), //o
    .dist_1               (branchMetric_125_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_125 (
    .last_state_weight_0    (node_weight_58                     ), //i
    .last_state_weight_1    (node_weight_59                     ), //i
    .dist_0                 (addCompareSelect_125_dist_0        ), //i
    .dist_1                 (addCompareSelect_125_dist_1        ), //i
    .state_weight           (addCompareSelect_125_state_weight  ), //o
    .decision               (addCompareSelect_125_decision      )  //o
  );
  BranchMetric branchMetric_126 (
    .trellis_unit_0       (2'b10                               ), //i
    .trellis_unit_1       (2'b01                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_126_dist_0             ), //o
    .dist_1               (branchMetric_126_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_126 (
    .last_state_weight_0    (node_weight_60                     ), //i
    .last_state_weight_1    (node_weight_61                     ), //i
    .dist_0                 (addCompareSelect_126_dist_0        ), //i
    .dist_1                 (addCompareSelect_126_dist_1        ), //i
    .state_weight           (addCompareSelect_126_state_weight  ), //o
    .decision               (addCompareSelect_126_decision      )  //o
  );
  BranchMetric branchMetric_127 (
    .trellis_unit_0       (2'b00                               ), //i
    .trellis_unit_1       (2'b11                               ), //i
    .raw_data_data        (raw_data_payload_fragment_data      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate  ), //i
    .dist_0               (branchMetric_127_dist_0             ), //o
    .dist_1               (branchMetric_127_dist_1             )  //o
  );
  AddCompareSelect addCompareSelect_127 (
    .last_state_weight_0    (node_weight_62                     ), //i
    .last_state_weight_1    (node_weight_63                     ), //i
    .dist_0                 (addCompareSelect_127_dist_0        ), //i
    .dist_1                 (addCompareSelect_127_dist_1        ), //i
    .state_weight           (addCompareSelect_127_state_weight  ), //o
    .decision               (addCompareSelect_127_decision      )  //o
  );
  MinVal minVal_1 (
    .data_0     (node_weight_0     ), //i
    .data_1     (node_weight_1     ), //i
    .data_2     (node_weight_2     ), //i
    .data_3     (node_weight_3     ), //i
    .data_4     (node_weight_4     ), //i
    .data_5     (node_weight_5     ), //i
    .data_6     (node_weight_6     ), //i
    .data_7     (node_weight_7     ), //i
    .data_8     (node_weight_8     ), //i
    .data_9     (node_weight_9     ), //i
    .data_10    (node_weight_10    ), //i
    .data_11    (node_weight_11    ), //i
    .data_12    (node_weight_12    ), //i
    .data_13    (node_weight_13    ), //i
    .data_14    (node_weight_14    ), //i
    .data_15    (node_weight_15    ), //i
    .data_16    (node_weight_16    ), //i
    .data_17    (node_weight_17    ), //i
    .data_18    (node_weight_18    ), //i
    .data_19    (node_weight_19    ), //i
    .data_20    (node_weight_20    ), //i
    .data_21    (node_weight_21    ), //i
    .data_22    (node_weight_22    ), //i
    .data_23    (node_weight_23    ), //i
    .data_24    (node_weight_24    ), //i
    .data_25    (node_weight_25    ), //i
    .data_26    (node_weight_26    ), //i
    .data_27    (node_weight_27    ), //i
    .data_28    (node_weight_28    ), //i
    .data_29    (node_weight_29    ), //i
    .data_30    (node_weight_30    ), //i
    .data_31    (node_weight_31    ), //i
    .data_32    (node_weight_32    ), //i
    .data_33    (node_weight_33    ), //i
    .data_34    (node_weight_34    ), //i
    .data_35    (node_weight_35    ), //i
    .data_36    (node_weight_36    ), //i
    .data_37    (node_weight_37    ), //i
    .data_38    (node_weight_38    ), //i
    .data_39    (node_weight_39    ), //i
    .data_40    (node_weight_40    ), //i
    .data_41    (node_weight_41    ), //i
    .data_42    (node_weight_42    ), //i
    .data_43    (node_weight_43    ), //i
    .data_44    (node_weight_44    ), //i
    .data_45    (node_weight_45    ), //i
    .data_46    (node_weight_46    ), //i
    .data_47    (node_weight_47    ), //i
    .data_48    (node_weight_48    ), //i
    .data_49    (node_weight_49    ), //i
    .data_50    (node_weight_50    ), //i
    .data_51    (node_weight_51    ), //i
    .data_52    (node_weight_52    ), //i
    .data_53    (node_weight_53    ), //i
    .data_54    (node_weight_54    ), //i
    .data_55    (node_weight_55    ), //i
    .data_56    (node_weight_56    ), //i
    .data_57    (node_weight_57    ), //i
    .data_58    (node_weight_58    ), //i
    .data_59    (node_weight_59    ), //i
    .data_60    (node_weight_60    ), //i
    .data_61    (node_weight_61    ), //i
    .data_62    (node_weight_62    ), //i
    .data_63    (node_weight_63    ), //i
    .min_val    (minVal_1_min_val  ), //o
    .min_idx    (minVal_1_min_idx  ), //o
    .clk        (clk               ), //i
    .reset      (reset             )  //i
  );
  assign when_PathMetric_l29 = (raw_data_payload_last && raw_data_valid);
  assign addCompareSelect_64_dist_0 = {13'd0, candidate_branches_0};
  assign addCompareSelect_64_dist_1 = {13'd0, candidate_branches_1};
  assign addCompareSelect_65_dist_0 = {13'd0, candidate_branches_2};
  assign addCompareSelect_65_dist_1 = {13'd0, candidate_branches_3};
  assign addCompareSelect_66_dist_0 = {13'd0, candidate_branches_4};
  assign addCompareSelect_66_dist_1 = {13'd0, candidate_branches_5};
  assign addCompareSelect_67_dist_0 = {13'd0, candidate_branches_6};
  assign addCompareSelect_67_dist_1 = {13'd0, candidate_branches_7};
  assign addCompareSelect_68_dist_0 = {13'd0, candidate_branches_8};
  assign addCompareSelect_68_dist_1 = {13'd0, candidate_branches_9};
  assign addCompareSelect_69_dist_0 = {13'd0, candidate_branches_10};
  assign addCompareSelect_69_dist_1 = {13'd0, candidate_branches_11};
  assign addCompareSelect_70_dist_0 = {13'd0, candidate_branches_12};
  assign addCompareSelect_70_dist_1 = {13'd0, candidate_branches_13};
  assign addCompareSelect_71_dist_0 = {13'd0, candidate_branches_14};
  assign addCompareSelect_71_dist_1 = {13'd0, candidate_branches_15};
  assign addCompareSelect_72_dist_0 = {13'd0, candidate_branches_16};
  assign addCompareSelect_72_dist_1 = {13'd0, candidate_branches_17};
  assign addCompareSelect_73_dist_0 = {13'd0, candidate_branches_18};
  assign addCompareSelect_73_dist_1 = {13'd0, candidate_branches_19};
  assign addCompareSelect_74_dist_0 = {13'd0, candidate_branches_20};
  assign addCompareSelect_74_dist_1 = {13'd0, candidate_branches_21};
  assign addCompareSelect_75_dist_0 = {13'd0, candidate_branches_22};
  assign addCompareSelect_75_dist_1 = {13'd0, candidate_branches_23};
  assign addCompareSelect_76_dist_0 = {13'd0, candidate_branches_24};
  assign addCompareSelect_76_dist_1 = {13'd0, candidate_branches_25};
  assign addCompareSelect_77_dist_0 = {13'd0, candidate_branches_26};
  assign addCompareSelect_77_dist_1 = {13'd0, candidate_branches_27};
  assign addCompareSelect_78_dist_0 = {13'd0, candidate_branches_28};
  assign addCompareSelect_78_dist_1 = {13'd0, candidate_branches_29};
  assign addCompareSelect_79_dist_0 = {13'd0, candidate_branches_30};
  assign addCompareSelect_79_dist_1 = {13'd0, candidate_branches_31};
  assign addCompareSelect_80_dist_0 = {13'd0, candidate_branches_32};
  assign addCompareSelect_80_dist_1 = {13'd0, candidate_branches_33};
  assign addCompareSelect_81_dist_0 = {13'd0, candidate_branches_34};
  assign addCompareSelect_81_dist_1 = {13'd0, candidate_branches_35};
  assign addCompareSelect_82_dist_0 = {13'd0, candidate_branches_36};
  assign addCompareSelect_82_dist_1 = {13'd0, candidate_branches_37};
  assign addCompareSelect_83_dist_0 = {13'd0, candidate_branches_38};
  assign addCompareSelect_83_dist_1 = {13'd0, candidate_branches_39};
  assign addCompareSelect_84_dist_0 = {13'd0, candidate_branches_40};
  assign addCompareSelect_84_dist_1 = {13'd0, candidate_branches_41};
  assign addCompareSelect_85_dist_0 = {13'd0, candidate_branches_42};
  assign addCompareSelect_85_dist_1 = {13'd0, candidate_branches_43};
  assign addCompareSelect_86_dist_0 = {13'd0, candidate_branches_44};
  assign addCompareSelect_86_dist_1 = {13'd0, candidate_branches_45};
  assign addCompareSelect_87_dist_0 = {13'd0, candidate_branches_46};
  assign addCompareSelect_87_dist_1 = {13'd0, candidate_branches_47};
  assign addCompareSelect_88_dist_0 = {13'd0, candidate_branches_48};
  assign addCompareSelect_88_dist_1 = {13'd0, candidate_branches_49};
  assign addCompareSelect_89_dist_0 = {13'd0, candidate_branches_50};
  assign addCompareSelect_89_dist_1 = {13'd0, candidate_branches_51};
  assign addCompareSelect_90_dist_0 = {13'd0, candidate_branches_52};
  assign addCompareSelect_90_dist_1 = {13'd0, candidate_branches_53};
  assign addCompareSelect_91_dist_0 = {13'd0, candidate_branches_54};
  assign addCompareSelect_91_dist_1 = {13'd0, candidate_branches_55};
  assign addCompareSelect_92_dist_0 = {13'd0, candidate_branches_56};
  assign addCompareSelect_92_dist_1 = {13'd0, candidate_branches_57};
  assign addCompareSelect_93_dist_0 = {13'd0, candidate_branches_58};
  assign addCompareSelect_93_dist_1 = {13'd0, candidate_branches_59};
  assign addCompareSelect_94_dist_0 = {13'd0, candidate_branches_60};
  assign addCompareSelect_94_dist_1 = {13'd0, candidate_branches_61};
  assign addCompareSelect_95_dist_0 = {13'd0, candidate_branches_62};
  assign addCompareSelect_95_dist_1 = {13'd0, candidate_branches_63};
  assign addCompareSelect_96_dist_0 = {13'd0, candidate_branches_64};
  assign addCompareSelect_96_dist_1 = {13'd0, candidate_branches_65};
  assign addCompareSelect_97_dist_0 = {13'd0, candidate_branches_66};
  assign addCompareSelect_97_dist_1 = {13'd0, candidate_branches_67};
  assign addCompareSelect_98_dist_0 = {13'd0, candidate_branches_68};
  assign addCompareSelect_98_dist_1 = {13'd0, candidate_branches_69};
  assign addCompareSelect_99_dist_0 = {13'd0, candidate_branches_70};
  assign addCompareSelect_99_dist_1 = {13'd0, candidate_branches_71};
  assign addCompareSelect_100_dist_0 = {13'd0, candidate_branches_72};
  assign addCompareSelect_100_dist_1 = {13'd0, candidate_branches_73};
  assign addCompareSelect_101_dist_0 = {13'd0, candidate_branches_74};
  assign addCompareSelect_101_dist_1 = {13'd0, candidate_branches_75};
  assign addCompareSelect_102_dist_0 = {13'd0, candidate_branches_76};
  assign addCompareSelect_102_dist_1 = {13'd0, candidate_branches_77};
  assign addCompareSelect_103_dist_0 = {13'd0, candidate_branches_78};
  assign addCompareSelect_103_dist_1 = {13'd0, candidate_branches_79};
  assign addCompareSelect_104_dist_0 = {13'd0, candidate_branches_80};
  assign addCompareSelect_104_dist_1 = {13'd0, candidate_branches_81};
  assign addCompareSelect_105_dist_0 = {13'd0, candidate_branches_82};
  assign addCompareSelect_105_dist_1 = {13'd0, candidate_branches_83};
  assign addCompareSelect_106_dist_0 = {13'd0, candidate_branches_84};
  assign addCompareSelect_106_dist_1 = {13'd0, candidate_branches_85};
  assign addCompareSelect_107_dist_0 = {13'd0, candidate_branches_86};
  assign addCompareSelect_107_dist_1 = {13'd0, candidate_branches_87};
  assign addCompareSelect_108_dist_0 = {13'd0, candidate_branches_88};
  assign addCompareSelect_108_dist_1 = {13'd0, candidate_branches_89};
  assign addCompareSelect_109_dist_0 = {13'd0, candidate_branches_90};
  assign addCompareSelect_109_dist_1 = {13'd0, candidate_branches_91};
  assign addCompareSelect_110_dist_0 = {13'd0, candidate_branches_92};
  assign addCompareSelect_110_dist_1 = {13'd0, candidate_branches_93};
  assign addCompareSelect_111_dist_0 = {13'd0, candidate_branches_94};
  assign addCompareSelect_111_dist_1 = {13'd0, candidate_branches_95};
  assign addCompareSelect_112_dist_0 = {13'd0, candidate_branches_96};
  assign addCompareSelect_112_dist_1 = {13'd0, candidate_branches_97};
  assign addCompareSelect_113_dist_0 = {13'd0, candidate_branches_98};
  assign addCompareSelect_113_dist_1 = {13'd0, candidate_branches_99};
  assign addCompareSelect_114_dist_0 = {13'd0, candidate_branches_100};
  assign addCompareSelect_114_dist_1 = {13'd0, candidate_branches_101};
  assign addCompareSelect_115_dist_0 = {13'd0, candidate_branches_102};
  assign addCompareSelect_115_dist_1 = {13'd0, candidate_branches_103};
  assign addCompareSelect_116_dist_0 = {13'd0, candidate_branches_104};
  assign addCompareSelect_116_dist_1 = {13'd0, candidate_branches_105};
  assign addCompareSelect_117_dist_0 = {13'd0, candidate_branches_106};
  assign addCompareSelect_117_dist_1 = {13'd0, candidate_branches_107};
  assign addCompareSelect_118_dist_0 = {13'd0, candidate_branches_108};
  assign addCompareSelect_118_dist_1 = {13'd0, candidate_branches_109};
  assign addCompareSelect_119_dist_0 = {13'd0, candidate_branches_110};
  assign addCompareSelect_119_dist_1 = {13'd0, candidate_branches_111};
  assign addCompareSelect_120_dist_0 = {13'd0, candidate_branches_112};
  assign addCompareSelect_120_dist_1 = {13'd0, candidate_branches_113};
  assign addCompareSelect_121_dist_0 = {13'd0, candidate_branches_114};
  assign addCompareSelect_121_dist_1 = {13'd0, candidate_branches_115};
  assign addCompareSelect_122_dist_0 = {13'd0, candidate_branches_116};
  assign addCompareSelect_122_dist_1 = {13'd0, candidate_branches_117};
  assign addCompareSelect_123_dist_0 = {13'd0, candidate_branches_118};
  assign addCompareSelect_123_dist_1 = {13'd0, candidate_branches_119};
  assign addCompareSelect_124_dist_0 = {13'd0, candidate_branches_120};
  assign addCompareSelect_124_dist_1 = {13'd0, candidate_branches_121};
  assign addCompareSelect_125_dist_0 = {13'd0, candidate_branches_122};
  assign addCompareSelect_125_dist_1 = {13'd0, candidate_branches_123};
  assign addCompareSelect_126_dist_0 = {13'd0, candidate_branches_124};
  assign addCompareSelect_126_dist_1 = {13'd0, candidate_branches_125};
  assign addCompareSelect_127_dist_0 = {13'd0, candidate_branches_126};
  assign addCompareSelect_127_dist_1 = {13'd0, candidate_branches_127};
  assign raw_data_ready = raw_data_ready_1;
  assign s_path_payload_fragment = survival_path;
  assign s_path_valid = survival_path_valid;
  assign s_path_payload_last = survival_path_last;
  assign min_idx = minVal_1_min_idx;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      raw_data_next <= 1'b0;
      raw_data_last_next <= 1'b0;
      survival_path_valid <= 1'b0;
      survival_path_last <= 1'b0;
      raw_data_ready_1 <= 1'b0;
    end else begin
      raw_data_next <= raw_data_valid;
      raw_data_last_next <= raw_data_payload_last;
      if(tbu_finished) begin
        raw_data_ready_1 <= 1'b1;
      end else begin
        if(when_PathMetric_l29) begin
          raw_data_ready_1 <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
    end
  end

  always @(posedge clk) begin
    candidate_branches_0 <= branchMetric_64_dist_0;
    candidate_branches_1 <= branchMetric_64_dist_1;
    if(tbu_finished) begin
      node_weight_0 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_0 <= addCompareSelect_64_state_weight;
        survival_path[0] <= addCompareSelect_64_decision;
      end
    end
    candidate_branches_2 <= branchMetric_65_dist_0;
    candidate_branches_3 <= branchMetric_65_dist_1;
    if(tbu_finished) begin
      node_weight_1 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_1 <= addCompareSelect_65_state_weight;
        survival_path[1] <= addCompareSelect_65_decision;
      end
    end
    candidate_branches_4 <= branchMetric_66_dist_0;
    candidate_branches_5 <= branchMetric_66_dist_1;
    if(tbu_finished) begin
      node_weight_2 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_2 <= addCompareSelect_66_state_weight;
        survival_path[2] <= addCompareSelect_66_decision;
      end
    end
    candidate_branches_6 <= branchMetric_67_dist_0;
    candidate_branches_7 <= branchMetric_67_dist_1;
    if(tbu_finished) begin
      node_weight_3 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_3 <= addCompareSelect_67_state_weight;
        survival_path[3] <= addCompareSelect_67_decision;
      end
    end
    candidate_branches_8 <= branchMetric_68_dist_0;
    candidate_branches_9 <= branchMetric_68_dist_1;
    if(tbu_finished) begin
      node_weight_4 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_4 <= addCompareSelect_68_state_weight;
        survival_path[4] <= addCompareSelect_68_decision;
      end
    end
    candidate_branches_10 <= branchMetric_69_dist_0;
    candidate_branches_11 <= branchMetric_69_dist_1;
    if(tbu_finished) begin
      node_weight_5 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_5 <= addCompareSelect_69_state_weight;
        survival_path[5] <= addCompareSelect_69_decision;
      end
    end
    candidate_branches_12 <= branchMetric_70_dist_0;
    candidate_branches_13 <= branchMetric_70_dist_1;
    if(tbu_finished) begin
      node_weight_6 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_6 <= addCompareSelect_70_state_weight;
        survival_path[6] <= addCompareSelect_70_decision;
      end
    end
    candidate_branches_14 <= branchMetric_71_dist_0;
    candidate_branches_15 <= branchMetric_71_dist_1;
    if(tbu_finished) begin
      node_weight_7 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_7 <= addCompareSelect_71_state_weight;
        survival_path[7] <= addCompareSelect_71_decision;
      end
    end
    candidate_branches_16 <= branchMetric_72_dist_0;
    candidate_branches_17 <= branchMetric_72_dist_1;
    if(tbu_finished) begin
      node_weight_8 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_8 <= addCompareSelect_72_state_weight;
        survival_path[8] <= addCompareSelect_72_decision;
      end
    end
    candidate_branches_18 <= branchMetric_73_dist_0;
    candidate_branches_19 <= branchMetric_73_dist_1;
    if(tbu_finished) begin
      node_weight_9 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_9 <= addCompareSelect_73_state_weight;
        survival_path[9] <= addCompareSelect_73_decision;
      end
    end
    candidate_branches_20 <= branchMetric_74_dist_0;
    candidate_branches_21 <= branchMetric_74_dist_1;
    if(tbu_finished) begin
      node_weight_10 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_10 <= addCompareSelect_74_state_weight;
        survival_path[10] <= addCompareSelect_74_decision;
      end
    end
    candidate_branches_22 <= branchMetric_75_dist_0;
    candidate_branches_23 <= branchMetric_75_dist_1;
    if(tbu_finished) begin
      node_weight_11 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_11 <= addCompareSelect_75_state_weight;
        survival_path[11] <= addCompareSelect_75_decision;
      end
    end
    candidate_branches_24 <= branchMetric_76_dist_0;
    candidate_branches_25 <= branchMetric_76_dist_1;
    if(tbu_finished) begin
      node_weight_12 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_12 <= addCompareSelect_76_state_weight;
        survival_path[12] <= addCompareSelect_76_decision;
      end
    end
    candidate_branches_26 <= branchMetric_77_dist_0;
    candidate_branches_27 <= branchMetric_77_dist_1;
    if(tbu_finished) begin
      node_weight_13 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_13 <= addCompareSelect_77_state_weight;
        survival_path[13] <= addCompareSelect_77_decision;
      end
    end
    candidate_branches_28 <= branchMetric_78_dist_0;
    candidate_branches_29 <= branchMetric_78_dist_1;
    if(tbu_finished) begin
      node_weight_14 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_14 <= addCompareSelect_78_state_weight;
        survival_path[14] <= addCompareSelect_78_decision;
      end
    end
    candidate_branches_30 <= branchMetric_79_dist_0;
    candidate_branches_31 <= branchMetric_79_dist_1;
    if(tbu_finished) begin
      node_weight_15 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_15 <= addCompareSelect_79_state_weight;
        survival_path[15] <= addCompareSelect_79_decision;
      end
    end
    candidate_branches_32 <= branchMetric_80_dist_0;
    candidate_branches_33 <= branchMetric_80_dist_1;
    if(tbu_finished) begin
      node_weight_16 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_16 <= addCompareSelect_80_state_weight;
        survival_path[16] <= addCompareSelect_80_decision;
      end
    end
    candidate_branches_34 <= branchMetric_81_dist_0;
    candidate_branches_35 <= branchMetric_81_dist_1;
    if(tbu_finished) begin
      node_weight_17 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_17 <= addCompareSelect_81_state_weight;
        survival_path[17] <= addCompareSelect_81_decision;
      end
    end
    candidate_branches_36 <= branchMetric_82_dist_0;
    candidate_branches_37 <= branchMetric_82_dist_1;
    if(tbu_finished) begin
      node_weight_18 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_18 <= addCompareSelect_82_state_weight;
        survival_path[18] <= addCompareSelect_82_decision;
      end
    end
    candidate_branches_38 <= branchMetric_83_dist_0;
    candidate_branches_39 <= branchMetric_83_dist_1;
    if(tbu_finished) begin
      node_weight_19 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_19 <= addCompareSelect_83_state_weight;
        survival_path[19] <= addCompareSelect_83_decision;
      end
    end
    candidate_branches_40 <= branchMetric_84_dist_0;
    candidate_branches_41 <= branchMetric_84_dist_1;
    if(tbu_finished) begin
      node_weight_20 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_20 <= addCompareSelect_84_state_weight;
        survival_path[20] <= addCompareSelect_84_decision;
      end
    end
    candidate_branches_42 <= branchMetric_85_dist_0;
    candidate_branches_43 <= branchMetric_85_dist_1;
    if(tbu_finished) begin
      node_weight_21 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_21 <= addCompareSelect_85_state_weight;
        survival_path[21] <= addCompareSelect_85_decision;
      end
    end
    candidate_branches_44 <= branchMetric_86_dist_0;
    candidate_branches_45 <= branchMetric_86_dist_1;
    if(tbu_finished) begin
      node_weight_22 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_22 <= addCompareSelect_86_state_weight;
        survival_path[22] <= addCompareSelect_86_decision;
      end
    end
    candidate_branches_46 <= branchMetric_87_dist_0;
    candidate_branches_47 <= branchMetric_87_dist_1;
    if(tbu_finished) begin
      node_weight_23 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_23 <= addCompareSelect_87_state_weight;
        survival_path[23] <= addCompareSelect_87_decision;
      end
    end
    candidate_branches_48 <= branchMetric_88_dist_0;
    candidate_branches_49 <= branchMetric_88_dist_1;
    if(tbu_finished) begin
      node_weight_24 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_24 <= addCompareSelect_88_state_weight;
        survival_path[24] <= addCompareSelect_88_decision;
      end
    end
    candidate_branches_50 <= branchMetric_89_dist_0;
    candidate_branches_51 <= branchMetric_89_dist_1;
    if(tbu_finished) begin
      node_weight_25 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_25 <= addCompareSelect_89_state_weight;
        survival_path[25] <= addCompareSelect_89_decision;
      end
    end
    candidate_branches_52 <= branchMetric_90_dist_0;
    candidate_branches_53 <= branchMetric_90_dist_1;
    if(tbu_finished) begin
      node_weight_26 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_26 <= addCompareSelect_90_state_weight;
        survival_path[26] <= addCompareSelect_90_decision;
      end
    end
    candidate_branches_54 <= branchMetric_91_dist_0;
    candidate_branches_55 <= branchMetric_91_dist_1;
    if(tbu_finished) begin
      node_weight_27 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_27 <= addCompareSelect_91_state_weight;
        survival_path[27] <= addCompareSelect_91_decision;
      end
    end
    candidate_branches_56 <= branchMetric_92_dist_0;
    candidate_branches_57 <= branchMetric_92_dist_1;
    if(tbu_finished) begin
      node_weight_28 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_28 <= addCompareSelect_92_state_weight;
        survival_path[28] <= addCompareSelect_92_decision;
      end
    end
    candidate_branches_58 <= branchMetric_93_dist_0;
    candidate_branches_59 <= branchMetric_93_dist_1;
    if(tbu_finished) begin
      node_weight_29 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_29 <= addCompareSelect_93_state_weight;
        survival_path[29] <= addCompareSelect_93_decision;
      end
    end
    candidate_branches_60 <= branchMetric_94_dist_0;
    candidate_branches_61 <= branchMetric_94_dist_1;
    if(tbu_finished) begin
      node_weight_30 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_30 <= addCompareSelect_94_state_weight;
        survival_path[30] <= addCompareSelect_94_decision;
      end
    end
    candidate_branches_62 <= branchMetric_95_dist_0;
    candidate_branches_63 <= branchMetric_95_dist_1;
    if(tbu_finished) begin
      node_weight_31 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_31 <= addCompareSelect_95_state_weight;
        survival_path[31] <= addCompareSelect_95_decision;
      end
    end
    candidate_branches_64 <= branchMetric_96_dist_0;
    candidate_branches_65 <= branchMetric_96_dist_1;
    if(tbu_finished) begin
      node_weight_32 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_32 <= addCompareSelect_96_state_weight;
        survival_path[32] <= addCompareSelect_96_decision;
      end
    end
    candidate_branches_66 <= branchMetric_97_dist_0;
    candidate_branches_67 <= branchMetric_97_dist_1;
    if(tbu_finished) begin
      node_weight_33 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_33 <= addCompareSelect_97_state_weight;
        survival_path[33] <= addCompareSelect_97_decision;
      end
    end
    candidate_branches_68 <= branchMetric_98_dist_0;
    candidate_branches_69 <= branchMetric_98_dist_1;
    if(tbu_finished) begin
      node_weight_34 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_34 <= addCompareSelect_98_state_weight;
        survival_path[34] <= addCompareSelect_98_decision;
      end
    end
    candidate_branches_70 <= branchMetric_99_dist_0;
    candidate_branches_71 <= branchMetric_99_dist_1;
    if(tbu_finished) begin
      node_weight_35 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_35 <= addCompareSelect_99_state_weight;
        survival_path[35] <= addCompareSelect_99_decision;
      end
    end
    candidate_branches_72 <= branchMetric_100_dist_0;
    candidate_branches_73 <= branchMetric_100_dist_1;
    if(tbu_finished) begin
      node_weight_36 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_36 <= addCompareSelect_100_state_weight;
        survival_path[36] <= addCompareSelect_100_decision;
      end
    end
    candidate_branches_74 <= branchMetric_101_dist_0;
    candidate_branches_75 <= branchMetric_101_dist_1;
    if(tbu_finished) begin
      node_weight_37 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_37 <= addCompareSelect_101_state_weight;
        survival_path[37] <= addCompareSelect_101_decision;
      end
    end
    candidate_branches_76 <= branchMetric_102_dist_0;
    candidate_branches_77 <= branchMetric_102_dist_1;
    if(tbu_finished) begin
      node_weight_38 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_38 <= addCompareSelect_102_state_weight;
        survival_path[38] <= addCompareSelect_102_decision;
      end
    end
    candidate_branches_78 <= branchMetric_103_dist_0;
    candidate_branches_79 <= branchMetric_103_dist_1;
    if(tbu_finished) begin
      node_weight_39 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_39 <= addCompareSelect_103_state_weight;
        survival_path[39] <= addCompareSelect_103_decision;
      end
    end
    candidate_branches_80 <= branchMetric_104_dist_0;
    candidate_branches_81 <= branchMetric_104_dist_1;
    if(tbu_finished) begin
      node_weight_40 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_40 <= addCompareSelect_104_state_weight;
        survival_path[40] <= addCompareSelect_104_decision;
      end
    end
    candidate_branches_82 <= branchMetric_105_dist_0;
    candidate_branches_83 <= branchMetric_105_dist_1;
    if(tbu_finished) begin
      node_weight_41 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_41 <= addCompareSelect_105_state_weight;
        survival_path[41] <= addCompareSelect_105_decision;
      end
    end
    candidate_branches_84 <= branchMetric_106_dist_0;
    candidate_branches_85 <= branchMetric_106_dist_1;
    if(tbu_finished) begin
      node_weight_42 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_42 <= addCompareSelect_106_state_weight;
        survival_path[42] <= addCompareSelect_106_decision;
      end
    end
    candidate_branches_86 <= branchMetric_107_dist_0;
    candidate_branches_87 <= branchMetric_107_dist_1;
    if(tbu_finished) begin
      node_weight_43 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_43 <= addCompareSelect_107_state_weight;
        survival_path[43] <= addCompareSelect_107_decision;
      end
    end
    candidate_branches_88 <= branchMetric_108_dist_0;
    candidate_branches_89 <= branchMetric_108_dist_1;
    if(tbu_finished) begin
      node_weight_44 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_44 <= addCompareSelect_108_state_weight;
        survival_path[44] <= addCompareSelect_108_decision;
      end
    end
    candidate_branches_90 <= branchMetric_109_dist_0;
    candidate_branches_91 <= branchMetric_109_dist_1;
    if(tbu_finished) begin
      node_weight_45 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_45 <= addCompareSelect_109_state_weight;
        survival_path[45] <= addCompareSelect_109_decision;
      end
    end
    candidate_branches_92 <= branchMetric_110_dist_0;
    candidate_branches_93 <= branchMetric_110_dist_1;
    if(tbu_finished) begin
      node_weight_46 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_46 <= addCompareSelect_110_state_weight;
        survival_path[46] <= addCompareSelect_110_decision;
      end
    end
    candidate_branches_94 <= branchMetric_111_dist_0;
    candidate_branches_95 <= branchMetric_111_dist_1;
    if(tbu_finished) begin
      node_weight_47 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_47 <= addCompareSelect_111_state_weight;
        survival_path[47] <= addCompareSelect_111_decision;
      end
    end
    candidate_branches_96 <= branchMetric_112_dist_0;
    candidate_branches_97 <= branchMetric_112_dist_1;
    if(tbu_finished) begin
      node_weight_48 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_48 <= addCompareSelect_112_state_weight;
        survival_path[48] <= addCompareSelect_112_decision;
      end
    end
    candidate_branches_98 <= branchMetric_113_dist_0;
    candidate_branches_99 <= branchMetric_113_dist_1;
    if(tbu_finished) begin
      node_weight_49 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_49 <= addCompareSelect_113_state_weight;
        survival_path[49] <= addCompareSelect_113_decision;
      end
    end
    candidate_branches_100 <= branchMetric_114_dist_0;
    candidate_branches_101 <= branchMetric_114_dist_1;
    if(tbu_finished) begin
      node_weight_50 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_50 <= addCompareSelect_114_state_weight;
        survival_path[50] <= addCompareSelect_114_decision;
      end
    end
    candidate_branches_102 <= branchMetric_115_dist_0;
    candidate_branches_103 <= branchMetric_115_dist_1;
    if(tbu_finished) begin
      node_weight_51 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_51 <= addCompareSelect_115_state_weight;
        survival_path[51] <= addCompareSelect_115_decision;
      end
    end
    candidate_branches_104 <= branchMetric_116_dist_0;
    candidate_branches_105 <= branchMetric_116_dist_1;
    if(tbu_finished) begin
      node_weight_52 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_52 <= addCompareSelect_116_state_weight;
        survival_path[52] <= addCompareSelect_116_decision;
      end
    end
    candidate_branches_106 <= branchMetric_117_dist_0;
    candidate_branches_107 <= branchMetric_117_dist_1;
    if(tbu_finished) begin
      node_weight_53 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_53 <= addCompareSelect_117_state_weight;
        survival_path[53] <= addCompareSelect_117_decision;
      end
    end
    candidate_branches_108 <= branchMetric_118_dist_0;
    candidate_branches_109 <= branchMetric_118_dist_1;
    if(tbu_finished) begin
      node_weight_54 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_54 <= addCompareSelect_118_state_weight;
        survival_path[54] <= addCompareSelect_118_decision;
      end
    end
    candidate_branches_110 <= branchMetric_119_dist_0;
    candidate_branches_111 <= branchMetric_119_dist_1;
    if(tbu_finished) begin
      node_weight_55 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_55 <= addCompareSelect_119_state_weight;
        survival_path[55] <= addCompareSelect_119_decision;
      end
    end
    candidate_branches_112 <= branchMetric_120_dist_0;
    candidate_branches_113 <= branchMetric_120_dist_1;
    if(tbu_finished) begin
      node_weight_56 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_56 <= addCompareSelect_120_state_weight;
        survival_path[56] <= addCompareSelect_120_decision;
      end
    end
    candidate_branches_114 <= branchMetric_121_dist_0;
    candidate_branches_115 <= branchMetric_121_dist_1;
    if(tbu_finished) begin
      node_weight_57 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_57 <= addCompareSelect_121_state_weight;
        survival_path[57] <= addCompareSelect_121_decision;
      end
    end
    candidate_branches_116 <= branchMetric_122_dist_0;
    candidate_branches_117 <= branchMetric_122_dist_1;
    if(tbu_finished) begin
      node_weight_58 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_58 <= addCompareSelect_122_state_weight;
        survival_path[58] <= addCompareSelect_122_decision;
      end
    end
    candidate_branches_118 <= branchMetric_123_dist_0;
    candidate_branches_119 <= branchMetric_123_dist_1;
    if(tbu_finished) begin
      node_weight_59 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_59 <= addCompareSelect_123_state_weight;
        survival_path[59] <= addCompareSelect_123_decision;
      end
    end
    candidate_branches_120 <= branchMetric_124_dist_0;
    candidate_branches_121 <= branchMetric_124_dist_1;
    if(tbu_finished) begin
      node_weight_60 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_60 <= addCompareSelect_124_state_weight;
        survival_path[60] <= addCompareSelect_124_decision;
      end
    end
    candidate_branches_122 <= branchMetric_125_dist_0;
    candidate_branches_123 <= branchMetric_125_dist_1;
    if(tbu_finished) begin
      node_weight_61 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_61 <= addCompareSelect_125_state_weight;
        survival_path[61] <= addCompareSelect_125_decision;
      end
    end
    candidate_branches_124 <= branchMetric_126_dist_0;
    candidate_branches_125 <= branchMetric_126_dist_1;
    if(tbu_finished) begin
      node_weight_62 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_62 <= addCompareSelect_126_state_weight;
        survival_path[62] <= addCompareSelect_126_decision;
      end
    end
    candidate_branches_126 <= branchMetric_127_dist_0;
    candidate_branches_127 <= branchMetric_127_dist_1;
    if(tbu_finished) begin
      node_weight_63 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_63 <= addCompareSelect_127_state_weight;
        survival_path[63] <= addCompareSelect_127_decision;
      end
    end
  end


endmodule

module StreamMux (
  input      [0:0]    io_select,
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input               io_inputs_0_payload_last,
  input      [1:0]    io_inputs_0_payload_fragment_data,
  input      [1:0]    io_inputs_0_payload_fragment_indicate,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input               io_inputs_1_payload_last,
  input      [1:0]    io_inputs_1_payload_fragment_data,
  input      [1:0]    io_inputs_1_payload_fragment_indicate,
  output              io_output_valid,
  input               io_output_ready,
  output              io_output_payload_last,
  output     [1:0]    io_output_payload_fragment_data,
  output     [1:0]    io_output_payload_fragment_indicate
);
  reg                 _zz_io_output_valid;
  reg                 _zz_io_output_payload_last;
  reg        [1:0]    _zz_io_output_payload_fragment_data;
  reg        [1:0]    _zz_io_output_payload_fragment_indicate;

  always @(*) begin
    case(io_select)
      1'b0 : begin
        _zz_io_output_valid = io_inputs_0_valid;
        _zz_io_output_payload_last = io_inputs_0_payload_last;
        _zz_io_output_payload_fragment_data = io_inputs_0_payload_fragment_data;
        _zz_io_output_payload_fragment_indicate = io_inputs_0_payload_fragment_indicate;
      end
      default : begin
        _zz_io_output_valid = io_inputs_1_valid;
        _zz_io_output_payload_last = io_inputs_1_payload_last;
        _zz_io_output_payload_fragment_data = io_inputs_1_payload_fragment_data;
        _zz_io_output_payload_fragment_indicate = io_inputs_1_payload_fragment_indicate;
      end
    endcase
  end

  assign io_inputs_0_ready = ((io_select == 1'b0) && io_output_ready);
  assign io_inputs_1_ready = ((io_select == 1'b1) && io_output_ready);
  assign io_output_valid = _zz_io_output_valid;
  assign io_output_payload_last = _zz_io_output_payload_last;
  assign io_output_payload_fragment_data = _zz_io_output_payload_fragment_data;
  assign io_output_payload_fragment_indicate = _zz_io_output_payload_fragment_indicate;

endmodule

module DePuncturing_1 (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [11:0]   raw_data_payload_fragment,
  output              de_punched_data_valid,
  input               de_punched_data_ready,
  output              de_punched_data_payload_last,
  output     [1:0]    de_punched_data_payload_fragment_data,
  output     [1:0]    de_punched_data_payload_fragment_indicate,
  input               clk,
  input               reset
);
  reg        [1:0]    _zz_switch_Misc_l200;
  wire       [2:0]    _zz_switch_Misc_l200_1;
  wire       [3:0]    _zz_mask_cnt;
  reg        [1:0]    _zz_switch_Misc_l200_1_1;
  wire       [2:0]    _zz_switch_Misc_l200_1_2;
  reg        [1:0]    _zz_de_punched_data_payload_fragment_indicate;
  wire       [2:0]    _zz_de_punched_data_payload_fragment_indicate_1;
  wire       [1:0]    mask_rom_0;
  wire       [1:0]    mask_rom_1;
  wire       [1:0]    mask_rom_2;
  wire       [1:0]    mask_rom_3;
  wire       [1:0]    mask_rom_4;
  wire       [1:0]    mask_rom_5;
  wire       [1:0]    mask_rom_6;
  wire       [1:0]    mask_rom_7;
  reg        [3:0]    mask_cnt;
  reg        [3:0]    cnt;
  reg        [11:0]   raw_data_fragment;
  reg                 raw_data_last;
  wire                when_DePuncturing_l52;
  wire       [1:0]    switch_Misc_l200;
  reg        [11:0]   _zz_raw_data_fragment;
  wire                raw_data_fire;
  wire                de_punched_data_fire;
  wire       [1:0]    switch_Misc_l200_1;
  wire       [0:0]    _zz_de_punched_data_payload_fragment_data;
  reg        [1:0]    _zz_de_punched_data_payload_fragment_data_1;

  assign _zz_switch_Misc_l200_1 = mask_cnt[2:0];
  assign _zz_mask_cnt = (mask_cnt + 4'b0001);
  assign _zz_switch_Misc_l200_1_2 = mask_cnt[2:0];
  assign _zz_de_punched_data_payload_fragment_indicate_1 = mask_cnt[2:0];
  always @(*) begin
    case(_zz_switch_Misc_l200_1)
      3'b000 : begin
        _zz_switch_Misc_l200 = mask_rom_0;
      end
      3'b001 : begin
        _zz_switch_Misc_l200 = mask_rom_1;
      end
      3'b010 : begin
        _zz_switch_Misc_l200 = mask_rom_2;
      end
      3'b011 : begin
        _zz_switch_Misc_l200 = mask_rom_3;
      end
      3'b100 : begin
        _zz_switch_Misc_l200 = mask_rom_4;
      end
      3'b101 : begin
        _zz_switch_Misc_l200 = mask_rom_5;
      end
      3'b110 : begin
        _zz_switch_Misc_l200 = mask_rom_6;
      end
      default : begin
        _zz_switch_Misc_l200 = mask_rom_7;
      end
    endcase
  end

  always @(*) begin
    case(_zz_switch_Misc_l200_1_2)
      3'b000 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_0;
      end
      3'b001 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_1;
      end
      3'b010 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_2;
      end
      3'b011 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_3;
      end
      3'b100 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_4;
      end
      3'b101 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_5;
      end
      3'b110 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_6;
      end
      default : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_7;
      end
    endcase
  end

  always @(*) begin
    case(_zz_de_punched_data_payload_fragment_indicate_1)
      3'b000 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_0;
      end
      3'b001 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_1;
      end
      3'b010 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_2;
      end
      3'b011 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_3;
      end
      3'b100 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_4;
      end
      3'b101 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_5;
      end
      3'b110 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_6;
      end
      default : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_7;
      end
    endcase
  end

  assign mask_rom_0 = 2'b11;
  assign mask_rom_1 = 2'b01;
  assign mask_rom_2 = 2'b11;
  assign mask_rom_3 = 2'b01;
  assign mask_rom_4 = 2'b11;
  assign mask_rom_5 = 2'b01;
  assign mask_rom_6 = 2'b11;
  assign mask_rom_7 = 2'b01;
  assign when_DePuncturing_l52 = (raw_data_last && (cnt == 4'b0000));
  assign switch_Misc_l200 = _zz_switch_Misc_l200;
  always @(*) begin
    case(switch_Misc_l200)
      2'b11 : begin
        _zz_raw_data_fragment = (raw_data_fragment >>> 2);
      end
      2'b01 : begin
        _zz_raw_data_fragment = (raw_data_fragment >>> 1);
      end
      default : begin
        _zz_raw_data_fragment = raw_data_fragment;
      end
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign de_punched_data_fire = (de_punched_data_valid && de_punched_data_ready);
  assign switch_Misc_l200_1 = _zz_switch_Misc_l200_1_1;
  assign _zz_de_punched_data_payload_fragment_data = raw_data_fragment[0 : 0];
  always @(*) begin
    case(switch_Misc_l200_1)
      2'b11 : begin
        _zz_de_punched_data_payload_fragment_data_1 = {raw_data_fragment[1 : 1],_zz_de_punched_data_payload_fragment_data};
      end
      2'b01 : begin
        _zz_de_punched_data_payload_fragment_data_1 = {1'b0,_zz_de_punched_data_payload_fragment_data};
      end
      default : begin
        _zz_de_punched_data_payload_fragment_data_1 = 2'b00;
      end
    endcase
  end

  assign de_punched_data_payload_fragment_data = _zz_de_punched_data_payload_fragment_data_1;
  assign de_punched_data_payload_fragment_indicate = _zz_de_punched_data_payload_fragment_indicate;
  assign de_punched_data_valid = (cnt != 4'b0000);
  assign de_punched_data_payload_last = ((cnt == 4'b0001) && raw_data_last);
  assign raw_data_ready = ((cnt == 4'b0000) && (! raw_data_last));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      mask_cnt <= 4'b0000;
      cnt <= 4'b0000;
      raw_data_last <= 1'b0;
    end else begin
      if(when_DePuncturing_l52) begin
        mask_cnt <= 4'b0000;
        cnt <= 4'b0000;
        raw_data_last <= 1'b0;
      end else begin
        if(raw_data_fire) begin
          raw_data_last <= raw_data_payload_last;
          cnt <= 4'b1000;
        end else begin
          if(de_punched_data_fire) begin
            cnt <= (cnt - 4'b0001);
            mask_cnt <= ((mask_cnt == 4'b0111) ? 4'b0000 : _zz_mask_cnt);
          end
        end
      end
    end
  end

  always @(posedge clk) begin
    if(!when_DePuncturing_l52) begin
      if(raw_data_fire) begin
        raw_data_fragment <= raw_data_payload_fragment;
      end else begin
        if(de_punched_data_fire) begin
          raw_data_fragment <= _zz_raw_data_fragment;
        end
      end
    end
  end


endmodule

module DePuncturing (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output              de_punched_data_valid,
  input               de_punched_data_ready,
  output              de_punched_data_payload_last,
  output     [1:0]    de_punched_data_payload_fragment_data,
  output     [1:0]    de_punched_data_payload_fragment_indicate,
  input               clk,
  input               reset
);
  reg        [1:0]    _zz_switch_Misc_l200;
  wire       [2:0]    _zz_switch_Misc_l200_1;
  wire       [3:0]    _zz_mask_cnt;
  reg        [1:0]    _zz_switch_Misc_l200_1_1;
  wire       [2:0]    _zz_switch_Misc_l200_1_2;
  reg        [1:0]    _zz_de_punched_data_payload_fragment_indicate;
  wire       [2:0]    _zz_de_punched_data_payload_fragment_indicate_1;
  wire       [1:0]    mask_rom_0;
  wire       [1:0]    mask_rom_1;
  wire       [1:0]    mask_rom_2;
  wire       [1:0]    mask_rom_3;
  wire       [1:0]    mask_rom_4;
  wire       [1:0]    mask_rom_5;
  wire       [1:0]    mask_rom_6;
  wire       [1:0]    mask_rom_7;
  reg        [3:0]    mask_cnt;
  reg        [3:0]    cnt;
  reg        [15:0]   raw_data_fragment;
  reg                 raw_data_last;
  wire                when_DePuncturing_l52;
  wire       [1:0]    switch_Misc_l200;
  reg        [15:0]   _zz_raw_data_fragment;
  wire                raw_data_fire;
  wire                de_punched_data_fire;
  wire       [1:0]    switch_Misc_l200_1;
  reg        [1:0]    _zz_de_punched_data_payload_fragment_data;

  assign _zz_switch_Misc_l200_1 = mask_cnt[2:0];
  assign _zz_mask_cnt = (mask_cnt + 4'b0001);
  assign _zz_switch_Misc_l200_1_2 = mask_cnt[2:0];
  assign _zz_de_punched_data_payload_fragment_indicate_1 = mask_cnt[2:0];
  always @(*) begin
    case(_zz_switch_Misc_l200_1)
      3'b000 : begin
        _zz_switch_Misc_l200 = mask_rom_0;
      end
      3'b001 : begin
        _zz_switch_Misc_l200 = mask_rom_1;
      end
      3'b010 : begin
        _zz_switch_Misc_l200 = mask_rom_2;
      end
      3'b011 : begin
        _zz_switch_Misc_l200 = mask_rom_3;
      end
      3'b100 : begin
        _zz_switch_Misc_l200 = mask_rom_4;
      end
      3'b101 : begin
        _zz_switch_Misc_l200 = mask_rom_5;
      end
      3'b110 : begin
        _zz_switch_Misc_l200 = mask_rom_6;
      end
      default : begin
        _zz_switch_Misc_l200 = mask_rom_7;
      end
    endcase
  end

  always @(*) begin
    case(_zz_switch_Misc_l200_1_2)
      3'b000 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_0;
      end
      3'b001 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_1;
      end
      3'b010 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_2;
      end
      3'b011 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_3;
      end
      3'b100 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_4;
      end
      3'b101 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_5;
      end
      3'b110 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_6;
      end
      default : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_7;
      end
    endcase
  end

  always @(*) begin
    case(_zz_de_punched_data_payload_fragment_indicate_1)
      3'b000 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_0;
      end
      3'b001 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_1;
      end
      3'b010 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_2;
      end
      3'b011 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_3;
      end
      3'b100 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_4;
      end
      3'b101 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_5;
      end
      3'b110 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_6;
      end
      default : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_7;
      end
    endcase
  end

  assign mask_rom_0 = 2'b11;
  assign mask_rom_1 = 2'b11;
  assign mask_rom_2 = 2'b11;
  assign mask_rom_3 = 2'b11;
  assign mask_rom_4 = 2'b11;
  assign mask_rom_5 = 2'b11;
  assign mask_rom_6 = 2'b11;
  assign mask_rom_7 = 2'b11;
  assign when_DePuncturing_l52 = (raw_data_last && (cnt == 4'b0000));
  assign switch_Misc_l200 = _zz_switch_Misc_l200;
  always @(*) begin
    case(switch_Misc_l200)
      2'b11 : begin
        _zz_raw_data_fragment = (raw_data_fragment >>> 2);
      end
      default : begin
        _zz_raw_data_fragment = raw_data_fragment;
      end
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign de_punched_data_fire = (de_punched_data_valid && de_punched_data_ready);
  assign switch_Misc_l200_1 = _zz_switch_Misc_l200_1_1;
  always @(*) begin
    case(switch_Misc_l200_1)
      2'b11 : begin
        _zz_de_punched_data_payload_fragment_data = {raw_data_fragment[1 : 1],raw_data_fragment[0 : 0]};
      end
      default : begin
        _zz_de_punched_data_payload_fragment_data = 2'b00;
      end
    endcase
  end

  assign de_punched_data_payload_fragment_data = _zz_de_punched_data_payload_fragment_data;
  assign de_punched_data_payload_fragment_indicate = _zz_de_punched_data_payload_fragment_indicate;
  assign de_punched_data_valid = (cnt != 4'b0000);
  assign de_punched_data_payload_last = ((cnt == 4'b0001) && raw_data_last);
  assign raw_data_ready = ((cnt == 4'b0000) && (! raw_data_last));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      mask_cnt <= 4'b0000;
      cnt <= 4'b0000;
      raw_data_last <= 1'b0;
    end else begin
      if(when_DePuncturing_l52) begin
        mask_cnt <= 4'b0000;
        cnt <= 4'b0000;
        raw_data_last <= 1'b0;
      end else begin
        if(raw_data_fire) begin
          raw_data_last <= raw_data_payload_last;
          cnt <= 4'b1000;
        end else begin
          if(de_punched_data_fire) begin
            cnt <= (cnt - 4'b0001);
            mask_cnt <= ((mask_cnt == 4'b0111) ? 4'b0000 : _zz_mask_cnt);
          end
        end
      end
    end
  end

  always @(posedge clk) begin
    if(!when_DePuncturing_l52) begin
      if(raw_data_fire) begin
        raw_data_fragment <= raw_data_payload_fragment;
      end else begin
        if(de_punched_data_fire) begin
          raw_data_fragment <= _zz_raw_data_fragment;
        end
      end
    end
  end


endmodule

//StreamDemux replaced by StreamDemux

module FlowMux (
  input               inputs_0_valid,
  input               inputs_0_payload_last,
  input      [15:0]   inputs_0_payload_fragment,
  input               inputs_1_valid,
  input               inputs_1_payload_last,
  input      [15:0]   inputs_1_payload_fragment,
  input      [0:0]    select_1,
  output              output_valid,
  output              output_payload_last,
  output     [15:0]   output_payload_fragment
);
  reg                 _zz_output_valid;
  reg                 _zz_output_payload_last;
  reg        [15:0]   _zz_output_payload_fragment;

  always @(*) begin
    case(select_1)
      1'b0 : begin
        _zz_output_valid = inputs_0_valid;
        _zz_output_payload_last = inputs_0_payload_last;
        _zz_output_payload_fragment = inputs_0_payload_fragment;
      end
      default : begin
        _zz_output_valid = inputs_1_valid;
        _zz_output_payload_last = inputs_1_payload_last;
        _zz_output_payload_fragment = inputs_1_payload_fragment;
      end
    endcase
  end

  assign output_valid = _zz_output_valid;
  assign output_payload_last = _zz_output_payload_last;
  assign output_payload_fragment = _zz_output_payload_fragment;

endmodule

module Puncturing_1 (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output              punched_data_valid,
  output              punched_data_payload_last,
  output     [11:0]   punched_data_payload_fragment,
  input               clk,
  input               reset
);
  wire       [0:0]    _zz_punched_data_payload_fragment;
  wire       [0:0]    _zz_punched_data_payload_fragment_1;
  wire                _zz_punched_data_payload_fragment_2;
  reg        [15:0]   raw_data_fragment;
  reg                 raw_data_valid_1;
  reg                 raw_data_last;

  assign _zz_punched_data_payload_fragment = raw_data_fragment[7];
  assign _zz_punched_data_payload_fragment_1 = raw_data_fragment[14];
  assign _zz_punched_data_payload_fragment_2 = raw_data_fragment[6];
  assign raw_data_ready = 1'b1;
  assign punched_data_valid = raw_data_valid_1;
  assign punched_data_payload_last = raw_data_last;
  assign punched_data_payload_fragment = {{{{{{{{{{{_zz_punched_data_payload_fragment,_zz_punched_data_payload_fragment_1},_zz_punched_data_payload_fragment_2},raw_data_fragment[5]},raw_data_fragment[12]},raw_data_fragment[4]},raw_data_fragment[3]},raw_data_fragment[10]},raw_data_fragment[2]},raw_data_fragment[1]},raw_data_fragment[8]},raw_data_fragment[0]};
  always @(posedge clk) begin
    raw_data_fragment <= raw_data_payload_fragment;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      raw_data_valid_1 <= 1'b0;
      raw_data_last <= 1'b0;
    end else begin
      raw_data_valid_1 <= raw_data_valid;
      raw_data_last <= raw_data_payload_last;
    end
  end


endmodule

module Puncturing (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output              punched_data_valid,
  output              punched_data_payload_last,
  output     [15:0]   punched_data_payload_fragment,
  input               clk,
  input               reset
);
  wire       [4:0]    _zz_punched_data_payload_fragment;
  wire       [0:0]    _zz_punched_data_payload_fragment_1;
  wire                _zz_punched_data_payload_fragment_2;
  reg        [15:0]   raw_data_fragment;
  reg                 raw_data_valid_1;
  reg                 raw_data_last;

  assign _zz_punched_data_payload_fragment = {{{{raw_data_fragment[15],raw_data_fragment[7]},raw_data_fragment[14]},raw_data_fragment[6]},raw_data_fragment[13]};
  assign _zz_punched_data_payload_fragment_1 = raw_data_fragment[5];
  assign _zz_punched_data_payload_fragment_2 = raw_data_fragment[12];
  assign raw_data_ready = 1'b1;
  assign punched_data_valid = raw_data_valid_1;
  assign punched_data_payload_last = raw_data_last;
  assign punched_data_payload_fragment = {{{{{{{{{{{_zz_punched_data_payload_fragment,_zz_punched_data_payload_fragment_1},_zz_punched_data_payload_fragment_2},raw_data_fragment[4]},raw_data_fragment[11]},raw_data_fragment[3]},raw_data_fragment[10]},raw_data_fragment[2]},raw_data_fragment[9]},raw_data_fragment[1]},raw_data_fragment[8]},raw_data_fragment[0]};
  always @(posedge clk) begin
    raw_data_fragment <= raw_data_payload_fragment;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      raw_data_valid_1 <= 1'b0;
      raw_data_last <= 1'b0;
    end else begin
      raw_data_valid_1 <= raw_data_valid;
      raw_data_last <= raw_data_payload_last;
    end
  end


endmodule

module StreamDemux (
  input      [0:0]    io_select,
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [15:0]   io_input_payload_fragment,
  output reg          io_outputs_0_valid,
  input               io_outputs_0_ready,
  output              io_outputs_0_payload_last,
  output     [15:0]   io_outputs_0_payload_fragment,
  output reg          io_outputs_1_valid,
  input               io_outputs_1_ready,
  output              io_outputs_1_payload_last,
  output     [15:0]   io_outputs_1_payload_fragment
);
  wire                when_Stream_l745;
  wire                when_Stream_l745_1;

  always @(*) begin
    io_input_ready = 1'b0;
    if(!when_Stream_l745) begin
      io_input_ready = io_outputs_0_ready;
    end
    if(!when_Stream_l745_1) begin
      io_input_ready = io_outputs_1_ready;
    end
  end

  assign io_outputs_0_payload_last = io_input_payload_last;
  assign io_outputs_0_payload_fragment = io_input_payload_fragment;
  assign when_Stream_l745 = (1'b0 != io_select);
  always @(*) begin
    if(when_Stream_l745) begin
      io_outputs_0_valid = 1'b0;
    end else begin
      io_outputs_0_valid = io_input_valid;
    end
  end

  assign io_outputs_1_payload_last = io_input_payload_last;
  assign io_outputs_1_payload_fragment = io_input_payload_fragment;
  assign when_Stream_l745_1 = (1'b1 != io_select);
  always @(*) begin
    if(when_Stream_l745_1) begin
      io_outputs_1_valid = 1'b0;
    end else begin
      io_outputs_1_valid = io_input_valid;
    end
  end


endmodule

module LifoMux (
  input      [0:0]    io_select,
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input               io_inputs_0_payload_last,
  input      [0:0]    io_inputs_0_payload_fragment,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input               io_inputs_1_payload_last,
  input      [0:0]    io_inputs_1_payload_fragment,
  output              io_output_valid,
  input               io_output_ready,
  output              io_output_payload_last,
  output     [0:0]    io_output_payload_fragment
);
  reg                 _zz_io_output_valid;
  reg                 _zz_io_output_payload_last;
  reg        [0:0]    _zz_io_output_payload_fragment;

  always @(*) begin
    case(io_select)
      1'b0 : begin
        _zz_io_output_valid = io_inputs_0_valid;
        _zz_io_output_payload_last = io_inputs_0_payload_last;
        _zz_io_output_payload_fragment = io_inputs_0_payload_fragment;
      end
      default : begin
        _zz_io_output_valid = io_inputs_1_valid;
        _zz_io_output_payload_last = io_inputs_1_payload_last;
        _zz_io_output_payload_fragment = io_inputs_1_payload_fragment;
      end
    endcase
  end

  assign io_inputs_0_ready = ((io_select == 1'b0) && io_output_ready);
  assign io_inputs_1_ready = ((io_select == 1'b1) && io_output_ready);
  assign io_output_valid = _zz_io_output_valid;
  assign io_output_payload_last = _zz_io_output_payload_last;
  assign io_output_payload_fragment = _zz_io_output_payload_fragment;

endmodule

module LifoDemux (
  input      [0:0]    select_1,
  input               input_valid,
  output reg          input_ready,
  input               input_payload_last,
  input      [0:0]    input_payload_fragment,
  output reg          outputs_0_valid,
  input               outputs_0_ready,
  output              outputs_0_payload_last,
  output     [0:0]    outputs_0_payload_fragment,
  output reg          outputs_1_valid,
  input               outputs_1_ready,
  output              outputs_1_payload_last,
  output     [0:0]    outputs_1_payload_fragment
);
  wire                when_SISOLifo_l57;
  wire                when_SISOLifo_l57_1;

  always @(*) begin
    input_ready = 1'b0;
    if(!when_SISOLifo_l57) begin
      input_ready = outputs_0_ready;
    end
    if(!when_SISOLifo_l57_1) begin
      input_ready = outputs_1_ready;
    end
  end

  assign outputs_0_payload_last = input_payload_last;
  assign outputs_0_payload_fragment = input_payload_fragment;
  assign when_SISOLifo_l57 = (1'b0 != select_1);
  always @(*) begin
    if(when_SISOLifo_l57) begin
      outputs_0_valid = 1'b0;
    end else begin
      outputs_0_valid = input_valid;
    end
  end

  assign outputs_1_payload_last = input_payload_last;
  assign outputs_1_payload_fragment = input_payload_fragment;
  assign when_SISOLifo_l57_1 = (1'b1 != select_1);
  always @(*) begin
    if(when_SISOLifo_l57_1) begin
      outputs_1_valid = 1'b0;
    end else begin
      outputs_1_valid = input_valid;
    end
  end


endmodule

//SISOLifo replaced by SISOLifo

module SISOLifo (
  input               push_valid,
  output              push_ready,
  input               push_payload_last,
  input      [0:0]    push_payload_fragment,
  output              pop_valid,
  input               pop_ready,
  output              pop_payload_last,
  output     [0:0]    pop_payload_fragment,
  input               push_method,
  output              empty,
  output              full,
  input               clk,
  input               reset
);
  reg                 _zz_lifo_last;
  wire       [8:0]    _zz_lifo_last_1;
  reg        [0:0]    _zz_pop_payload_fragment;
  wire       [8:0]    _zz_pop_payload_fragment_1;
  reg        [0:0]    lifo_data_0;
  reg        [0:0]    lifo_data_1;
  reg        [0:0]    lifo_data_2;
  reg        [0:0]    lifo_data_3;
  reg        [0:0]    lifo_data_4;
  reg        [0:0]    lifo_data_5;
  reg        [0:0]    lifo_data_6;
  reg        [0:0]    lifo_data_7;
  reg        [0:0]    lifo_data_8;
  reg        [0:0]    lifo_data_9;
  reg        [0:0]    lifo_data_10;
  reg        [0:0]    lifo_data_11;
  reg        [0:0]    lifo_data_12;
  reg        [0:0]    lifo_data_13;
  reg        [0:0]    lifo_data_14;
  reg        [0:0]    lifo_data_15;
  reg        [0:0]    lifo_data_16;
  reg        [0:0]    lifo_data_17;
  reg        [0:0]    lifo_data_18;
  reg        [0:0]    lifo_data_19;
  reg        [0:0]    lifo_data_20;
  reg        [0:0]    lifo_data_21;
  reg        [0:0]    lifo_data_22;
  reg        [0:0]    lifo_data_23;
  reg        [0:0]    lifo_data_24;
  reg        [0:0]    lifo_data_25;
  reg        [0:0]    lifo_data_26;
  reg        [0:0]    lifo_data_27;
  reg        [0:0]    lifo_data_28;
  reg        [0:0]    lifo_data_29;
  reg        [0:0]    lifo_data_30;
  reg        [0:0]    lifo_data_31;
  reg        [0:0]    lifo_data_32;
  reg        [0:0]    lifo_data_33;
  reg        [0:0]    lifo_data_34;
  reg        [0:0]    lifo_data_35;
  reg        [0:0]    lifo_data_36;
  reg        [0:0]    lifo_data_37;
  reg        [0:0]    lifo_data_38;
  reg        [0:0]    lifo_data_39;
  reg        [0:0]    lifo_data_40;
  reg        [0:0]    lifo_data_41;
  reg        [0:0]    lifo_data_42;
  reg        [0:0]    lifo_data_43;
  reg        [0:0]    lifo_data_44;
  reg        [0:0]    lifo_data_45;
  reg        [0:0]    lifo_data_46;
  reg        [0:0]    lifo_data_47;
  reg        [0:0]    lifo_data_48;
  reg        [0:0]    lifo_data_49;
  reg        [0:0]    lifo_data_50;
  reg        [0:0]    lifo_data_51;
  reg        [0:0]    lifo_data_52;
  reg        [0:0]    lifo_data_53;
  reg        [0:0]    lifo_data_54;
  reg        [0:0]    lifo_data_55;
  reg        [0:0]    lifo_data_56;
  reg        [0:0]    lifo_data_57;
  reg        [0:0]    lifo_data_58;
  reg        [0:0]    lifo_data_59;
  reg        [0:0]    lifo_data_60;
  reg        [0:0]    lifo_data_61;
  reg        [0:0]    lifo_data_62;
  reg        [0:0]    lifo_data_63;
  reg        [0:0]    lifo_data_64;
  reg        [0:0]    lifo_data_65;
  reg        [0:0]    lifo_data_66;
  reg        [0:0]    lifo_data_67;
  reg        [0:0]    lifo_data_68;
  reg        [0:0]    lifo_data_69;
  reg        [0:0]    lifo_data_70;
  reg        [0:0]    lifo_data_71;
  reg        [0:0]    lifo_data_72;
  reg        [0:0]    lifo_data_73;
  reg        [0:0]    lifo_data_74;
  reg        [0:0]    lifo_data_75;
  reg        [0:0]    lifo_data_76;
  reg        [0:0]    lifo_data_77;
  reg        [0:0]    lifo_data_78;
  reg        [0:0]    lifo_data_79;
  reg        [0:0]    lifo_data_80;
  reg        [0:0]    lifo_data_81;
  reg        [0:0]    lifo_data_82;
  reg        [0:0]    lifo_data_83;
  reg        [0:0]    lifo_data_84;
  reg        [0:0]    lifo_data_85;
  reg        [0:0]    lifo_data_86;
  reg        [0:0]    lifo_data_87;
  reg        [0:0]    lifo_data_88;
  reg        [0:0]    lifo_data_89;
  reg        [0:0]    lifo_data_90;
  reg        [0:0]    lifo_data_91;
  reg        [0:0]    lifo_data_92;
  reg        [0:0]    lifo_data_93;
  reg        [0:0]    lifo_data_94;
  reg        [0:0]    lifo_data_95;
  reg        [0:0]    lifo_data_96;
  reg        [0:0]    lifo_data_97;
  reg        [0:0]    lifo_data_98;
  reg        [0:0]    lifo_data_99;
  reg        [0:0]    lifo_data_100;
  reg        [0:0]    lifo_data_101;
  reg        [0:0]    lifo_data_102;
  reg        [0:0]    lifo_data_103;
  reg        [0:0]    lifo_data_104;
  reg        [0:0]    lifo_data_105;
  reg        [0:0]    lifo_data_106;
  reg        [0:0]    lifo_data_107;
  reg        [0:0]    lifo_data_108;
  reg        [0:0]    lifo_data_109;
  reg        [0:0]    lifo_data_110;
  reg        [0:0]    lifo_data_111;
  reg        [0:0]    lifo_data_112;
  reg        [0:0]    lifo_data_113;
  reg        [0:0]    lifo_data_114;
  reg        [0:0]    lifo_data_115;
  reg        [0:0]    lifo_data_116;
  reg        [0:0]    lifo_data_117;
  reg        [0:0]    lifo_data_118;
  reg        [0:0]    lifo_data_119;
  reg        [0:0]    lifo_data_120;
  reg        [0:0]    lifo_data_121;
  reg        [0:0]    lifo_data_122;
  reg        [0:0]    lifo_data_123;
  reg        [0:0]    lifo_data_124;
  reg        [0:0]    lifo_data_125;
  reg        [0:0]    lifo_data_126;
  reg        [0:0]    lifo_data_127;
  reg        [0:0]    lifo_data_128;
  reg        [0:0]    lifo_data_129;
  reg        [0:0]    lifo_data_130;
  reg        [0:0]    lifo_data_131;
  reg        [0:0]    lifo_data_132;
  reg        [0:0]    lifo_data_133;
  reg        [0:0]    lifo_data_134;
  reg        [0:0]    lifo_data_135;
  reg        [0:0]    lifo_data_136;
  reg        [0:0]    lifo_data_137;
  reg        [0:0]    lifo_data_138;
  reg        [0:0]    lifo_data_139;
  reg        [0:0]    lifo_data_140;
  reg        [0:0]    lifo_data_141;
  reg        [0:0]    lifo_data_142;
  reg        [0:0]    lifo_data_143;
  reg        [0:0]    lifo_data_144;
  reg        [0:0]    lifo_data_145;
  reg        [0:0]    lifo_data_146;
  reg        [0:0]    lifo_data_147;
  reg        [0:0]    lifo_data_148;
  reg        [0:0]    lifo_data_149;
  reg        [0:0]    lifo_data_150;
  reg        [0:0]    lifo_data_151;
  reg        [0:0]    lifo_data_152;
  reg        [0:0]    lifo_data_153;
  reg        [0:0]    lifo_data_154;
  reg        [0:0]    lifo_data_155;
  reg        [0:0]    lifo_data_156;
  reg        [0:0]    lifo_data_157;
  reg        [0:0]    lifo_data_158;
  reg        [0:0]    lifo_data_159;
  reg        [0:0]    lifo_data_160;
  reg        [0:0]    lifo_data_161;
  reg        [0:0]    lifo_data_162;
  reg        [0:0]    lifo_data_163;
  reg        [0:0]    lifo_data_164;
  reg        [0:0]    lifo_data_165;
  reg        [0:0]    lifo_data_166;
  reg        [0:0]    lifo_data_167;
  reg        [0:0]    lifo_data_168;
  reg        [0:0]    lifo_data_169;
  reg        [0:0]    lifo_data_170;
  reg        [0:0]    lifo_data_171;
  reg        [0:0]    lifo_data_172;
  reg        [0:0]    lifo_data_173;
  reg        [0:0]    lifo_data_174;
  reg        [0:0]    lifo_data_175;
  reg        [0:0]    lifo_data_176;
  reg        [0:0]    lifo_data_177;
  reg        [0:0]    lifo_data_178;
  reg        [0:0]    lifo_data_179;
  reg        [0:0]    lifo_data_180;
  reg        [0:0]    lifo_data_181;
  reg        [0:0]    lifo_data_182;
  reg        [0:0]    lifo_data_183;
  reg        [0:0]    lifo_data_184;
  reg        [0:0]    lifo_data_185;
  reg        [0:0]    lifo_data_186;
  reg        [0:0]    lifo_data_187;
  reg        [0:0]    lifo_data_188;
  reg        [0:0]    lifo_data_189;
  reg        [0:0]    lifo_data_190;
  reg        [0:0]    lifo_data_191;
  reg        [0:0]    lifo_data_192;
  reg        [0:0]    lifo_data_193;
  reg        [0:0]    lifo_data_194;
  reg        [0:0]    lifo_data_195;
  reg        [0:0]    lifo_data_196;
  reg        [0:0]    lifo_data_197;
  reg        [0:0]    lifo_data_198;
  reg        [0:0]    lifo_data_199;
  reg        [0:0]    lifo_data_200;
  reg        [0:0]    lifo_data_201;
  reg        [0:0]    lifo_data_202;
  reg        [0:0]    lifo_data_203;
  reg        [0:0]    lifo_data_204;
  reg        [0:0]    lifo_data_205;
  reg        [0:0]    lifo_data_206;
  reg        [0:0]    lifo_data_207;
  reg        [0:0]    lifo_data_208;
  reg        [0:0]    lifo_data_209;
  reg        [0:0]    lifo_data_210;
  reg        [0:0]    lifo_data_211;
  reg        [0:0]    lifo_data_212;
  reg        [0:0]    lifo_data_213;
  reg        [0:0]    lifo_data_214;
  reg        [0:0]    lifo_data_215;
  reg        [0:0]    lifo_data_216;
  reg        [0:0]    lifo_data_217;
  reg        [0:0]    lifo_data_218;
  reg        [0:0]    lifo_data_219;
  reg        [0:0]    lifo_data_220;
  reg        [0:0]    lifo_data_221;
  reg        [0:0]    lifo_data_222;
  reg        [0:0]    lifo_data_223;
  reg        [0:0]    lifo_data_224;
  reg        [0:0]    lifo_data_225;
  reg        [0:0]    lifo_data_226;
  reg        [0:0]    lifo_data_227;
  reg        [0:0]    lifo_data_228;
  reg        [0:0]    lifo_data_229;
  reg        [0:0]    lifo_data_230;
  reg        [0:0]    lifo_data_231;
  reg        [0:0]    lifo_data_232;
  reg        [0:0]    lifo_data_233;
  reg        [0:0]    lifo_data_234;
  reg        [0:0]    lifo_data_235;
  reg        [0:0]    lifo_data_236;
  reg        [0:0]    lifo_data_237;
  reg        [0:0]    lifo_data_238;
  reg        [0:0]    lifo_data_239;
  reg        [0:0]    lifo_data_240;
  reg        [0:0]    lifo_data_241;
  reg        [0:0]    lifo_data_242;
  reg        [0:0]    lifo_data_243;
  reg        [0:0]    lifo_data_244;
  reg        [0:0]    lifo_data_245;
  reg        [0:0]    lifo_data_246;
  reg        [0:0]    lifo_data_247;
  reg        [0:0]    lifo_data_248;
  reg        [0:0]    lifo_data_249;
  reg        [0:0]    lifo_data_250;
  reg        [0:0]    lifo_data_251;
  reg        [0:0]    lifo_data_252;
  reg        [0:0]    lifo_data_253;
  reg        [0:0]    lifo_data_254;
  reg        [0:0]    lifo_data_255;
  reg        [0:0]    lifo_data_256;
  reg        [0:0]    lifo_data_257;
  reg        [0:0]    lifo_data_258;
  reg        [0:0]    lifo_data_259;
  reg        [0:0]    lifo_data_260;
  reg        [0:0]    lifo_data_261;
  reg        [0:0]    lifo_data_262;
  reg        [0:0]    lifo_data_263;
  reg        [0:0]    lifo_data_264;
  reg        [0:0]    lifo_data_265;
  reg        [0:0]    lifo_data_266;
  reg        [0:0]    lifo_data_267;
  reg                 lifo_data_last_0;
  reg                 lifo_data_last_1;
  reg                 lifo_data_last_2;
  reg                 lifo_data_last_3;
  reg                 lifo_data_last_4;
  reg                 lifo_data_last_5;
  reg                 lifo_data_last_6;
  reg                 lifo_data_last_7;
  reg                 lifo_data_last_8;
  reg                 lifo_data_last_9;
  reg                 lifo_data_last_10;
  reg                 lifo_data_last_11;
  reg                 lifo_data_last_12;
  reg                 lifo_data_last_13;
  reg                 lifo_data_last_14;
  reg                 lifo_data_last_15;
  reg                 lifo_data_last_16;
  reg                 lifo_data_last_17;
  reg                 lifo_data_last_18;
  reg                 lifo_data_last_19;
  reg                 lifo_data_last_20;
  reg                 lifo_data_last_21;
  reg                 lifo_data_last_22;
  reg                 lifo_data_last_23;
  reg                 lifo_data_last_24;
  reg                 lifo_data_last_25;
  reg                 lifo_data_last_26;
  reg                 lifo_data_last_27;
  reg                 lifo_data_last_28;
  reg                 lifo_data_last_29;
  reg                 lifo_data_last_30;
  reg                 lifo_data_last_31;
  reg                 lifo_data_last_32;
  reg                 lifo_data_last_33;
  reg                 lifo_data_last_34;
  reg                 lifo_data_last_35;
  reg                 lifo_data_last_36;
  reg                 lifo_data_last_37;
  reg                 lifo_data_last_38;
  reg                 lifo_data_last_39;
  reg                 lifo_data_last_40;
  reg                 lifo_data_last_41;
  reg                 lifo_data_last_42;
  reg                 lifo_data_last_43;
  reg                 lifo_data_last_44;
  reg                 lifo_data_last_45;
  reg                 lifo_data_last_46;
  reg                 lifo_data_last_47;
  reg                 lifo_data_last_48;
  reg                 lifo_data_last_49;
  reg                 lifo_data_last_50;
  reg                 lifo_data_last_51;
  reg                 lifo_data_last_52;
  reg                 lifo_data_last_53;
  reg                 lifo_data_last_54;
  reg                 lifo_data_last_55;
  reg                 lifo_data_last_56;
  reg                 lifo_data_last_57;
  reg                 lifo_data_last_58;
  reg                 lifo_data_last_59;
  reg                 lifo_data_last_60;
  reg                 lifo_data_last_61;
  reg                 lifo_data_last_62;
  reg                 lifo_data_last_63;
  reg                 lifo_data_last_64;
  reg                 lifo_data_last_65;
  reg                 lifo_data_last_66;
  reg                 lifo_data_last_67;
  reg                 lifo_data_last_68;
  reg                 lifo_data_last_69;
  reg                 lifo_data_last_70;
  reg                 lifo_data_last_71;
  reg                 lifo_data_last_72;
  reg                 lifo_data_last_73;
  reg                 lifo_data_last_74;
  reg                 lifo_data_last_75;
  reg                 lifo_data_last_76;
  reg                 lifo_data_last_77;
  reg                 lifo_data_last_78;
  reg                 lifo_data_last_79;
  reg                 lifo_data_last_80;
  reg                 lifo_data_last_81;
  reg                 lifo_data_last_82;
  reg                 lifo_data_last_83;
  reg                 lifo_data_last_84;
  reg                 lifo_data_last_85;
  reg                 lifo_data_last_86;
  reg                 lifo_data_last_87;
  reg                 lifo_data_last_88;
  reg                 lifo_data_last_89;
  reg                 lifo_data_last_90;
  reg                 lifo_data_last_91;
  reg                 lifo_data_last_92;
  reg                 lifo_data_last_93;
  reg                 lifo_data_last_94;
  reg                 lifo_data_last_95;
  reg                 lifo_data_last_96;
  reg                 lifo_data_last_97;
  reg                 lifo_data_last_98;
  reg                 lifo_data_last_99;
  reg                 lifo_data_last_100;
  reg                 lifo_data_last_101;
  reg                 lifo_data_last_102;
  reg                 lifo_data_last_103;
  reg                 lifo_data_last_104;
  reg                 lifo_data_last_105;
  reg                 lifo_data_last_106;
  reg                 lifo_data_last_107;
  reg                 lifo_data_last_108;
  reg                 lifo_data_last_109;
  reg                 lifo_data_last_110;
  reg                 lifo_data_last_111;
  reg                 lifo_data_last_112;
  reg                 lifo_data_last_113;
  reg                 lifo_data_last_114;
  reg                 lifo_data_last_115;
  reg                 lifo_data_last_116;
  reg                 lifo_data_last_117;
  reg                 lifo_data_last_118;
  reg                 lifo_data_last_119;
  reg                 lifo_data_last_120;
  reg                 lifo_data_last_121;
  reg                 lifo_data_last_122;
  reg                 lifo_data_last_123;
  reg                 lifo_data_last_124;
  reg                 lifo_data_last_125;
  reg                 lifo_data_last_126;
  reg                 lifo_data_last_127;
  reg                 lifo_data_last_128;
  reg                 lifo_data_last_129;
  reg                 lifo_data_last_130;
  reg                 lifo_data_last_131;
  reg                 lifo_data_last_132;
  reg                 lifo_data_last_133;
  reg                 lifo_data_last_134;
  reg                 lifo_data_last_135;
  reg                 lifo_data_last_136;
  reg                 lifo_data_last_137;
  reg                 lifo_data_last_138;
  reg                 lifo_data_last_139;
  reg                 lifo_data_last_140;
  reg                 lifo_data_last_141;
  reg                 lifo_data_last_142;
  reg                 lifo_data_last_143;
  reg                 lifo_data_last_144;
  reg                 lifo_data_last_145;
  reg                 lifo_data_last_146;
  reg                 lifo_data_last_147;
  reg                 lifo_data_last_148;
  reg                 lifo_data_last_149;
  reg                 lifo_data_last_150;
  reg                 lifo_data_last_151;
  reg                 lifo_data_last_152;
  reg                 lifo_data_last_153;
  reg                 lifo_data_last_154;
  reg                 lifo_data_last_155;
  reg                 lifo_data_last_156;
  reg                 lifo_data_last_157;
  reg                 lifo_data_last_158;
  reg                 lifo_data_last_159;
  reg                 lifo_data_last_160;
  reg                 lifo_data_last_161;
  reg                 lifo_data_last_162;
  reg                 lifo_data_last_163;
  reg                 lifo_data_last_164;
  reg                 lifo_data_last_165;
  reg                 lifo_data_last_166;
  reg                 lifo_data_last_167;
  reg                 lifo_data_last_168;
  reg                 lifo_data_last_169;
  reg                 lifo_data_last_170;
  reg                 lifo_data_last_171;
  reg                 lifo_data_last_172;
  reg                 lifo_data_last_173;
  reg                 lifo_data_last_174;
  reg                 lifo_data_last_175;
  reg                 lifo_data_last_176;
  reg                 lifo_data_last_177;
  reg                 lifo_data_last_178;
  reg                 lifo_data_last_179;
  reg                 lifo_data_last_180;
  reg                 lifo_data_last_181;
  reg                 lifo_data_last_182;
  reg                 lifo_data_last_183;
  reg                 lifo_data_last_184;
  reg                 lifo_data_last_185;
  reg                 lifo_data_last_186;
  reg                 lifo_data_last_187;
  reg                 lifo_data_last_188;
  reg                 lifo_data_last_189;
  reg                 lifo_data_last_190;
  reg                 lifo_data_last_191;
  reg                 lifo_data_last_192;
  reg                 lifo_data_last_193;
  reg                 lifo_data_last_194;
  reg                 lifo_data_last_195;
  reg                 lifo_data_last_196;
  reg                 lifo_data_last_197;
  reg                 lifo_data_last_198;
  reg                 lifo_data_last_199;
  reg                 lifo_data_last_200;
  reg                 lifo_data_last_201;
  reg                 lifo_data_last_202;
  reg                 lifo_data_last_203;
  reg                 lifo_data_last_204;
  reg                 lifo_data_last_205;
  reg                 lifo_data_last_206;
  reg                 lifo_data_last_207;
  reg                 lifo_data_last_208;
  reg                 lifo_data_last_209;
  reg                 lifo_data_last_210;
  reg                 lifo_data_last_211;
  reg                 lifo_data_last_212;
  reg                 lifo_data_last_213;
  reg                 lifo_data_last_214;
  reg                 lifo_data_last_215;
  reg                 lifo_data_last_216;
  reg                 lifo_data_last_217;
  reg                 lifo_data_last_218;
  reg                 lifo_data_last_219;
  reg                 lifo_data_last_220;
  reg                 lifo_data_last_221;
  reg                 lifo_data_last_222;
  reg                 lifo_data_last_223;
  reg                 lifo_data_last_224;
  reg                 lifo_data_last_225;
  reg                 lifo_data_last_226;
  reg                 lifo_data_last_227;
  reg                 lifo_data_last_228;
  reg                 lifo_data_last_229;
  reg                 lifo_data_last_230;
  reg                 lifo_data_last_231;
  reg                 lifo_data_last_232;
  reg                 lifo_data_last_233;
  reg                 lifo_data_last_234;
  reg                 lifo_data_last_235;
  reg                 lifo_data_last_236;
  reg                 lifo_data_last_237;
  reg                 lifo_data_last_238;
  reg                 lifo_data_last_239;
  reg                 lifo_data_last_240;
  reg                 lifo_data_last_241;
  reg                 lifo_data_last_242;
  reg                 lifo_data_last_243;
  reg                 lifo_data_last_244;
  reg                 lifo_data_last_245;
  reg                 lifo_data_last_246;
  reg                 lifo_data_last_247;
  reg                 lifo_data_last_248;
  reg                 lifo_data_last_249;
  reg                 lifo_data_last_250;
  reg                 lifo_data_last_251;
  reg                 lifo_data_last_252;
  reg                 lifo_data_last_253;
  reg                 lifo_data_last_254;
  reg                 lifo_data_last_255;
  reg                 lifo_data_last_256;
  reg                 lifo_data_last_257;
  reg                 lifo_data_last_258;
  reg                 lifo_data_last_259;
  reg                 lifo_data_last_260;
  reg                 lifo_data_last_261;
  reg                 lifo_data_last_262;
  reg                 lifo_data_last_263;
  reg                 lifo_data_last_264;
  reg                 lifo_data_last_265;
  reg                 lifo_data_last_266;
  reg                 lifo_data_last_267;
  reg        [8:0]    lifo_head_cursor;
  reg                 lifo_last;
  wire                push_fire;
  wire                when_SISOLifo_l25;
  wire       [511:0]  _zz_1;
  wire       [511:0]  _zz_2;
  wire                pop_fire;
  wire                when_SISOLifo_l32;

  assign _zz_lifo_last_1 = (lifo_head_cursor - 9'h001);
  assign _zz_pop_payload_fragment_1 = (lifo_head_cursor - 9'h001);
  always @(*) begin
    case(_zz_lifo_last_1)
      9'b000000000 : begin
        _zz_lifo_last = lifo_data_last_0;
      end
      9'b000000001 : begin
        _zz_lifo_last = lifo_data_last_1;
      end
      9'b000000010 : begin
        _zz_lifo_last = lifo_data_last_2;
      end
      9'b000000011 : begin
        _zz_lifo_last = lifo_data_last_3;
      end
      9'b000000100 : begin
        _zz_lifo_last = lifo_data_last_4;
      end
      9'b000000101 : begin
        _zz_lifo_last = lifo_data_last_5;
      end
      9'b000000110 : begin
        _zz_lifo_last = lifo_data_last_6;
      end
      9'b000000111 : begin
        _zz_lifo_last = lifo_data_last_7;
      end
      9'b000001000 : begin
        _zz_lifo_last = lifo_data_last_8;
      end
      9'b000001001 : begin
        _zz_lifo_last = lifo_data_last_9;
      end
      9'b000001010 : begin
        _zz_lifo_last = lifo_data_last_10;
      end
      9'b000001011 : begin
        _zz_lifo_last = lifo_data_last_11;
      end
      9'b000001100 : begin
        _zz_lifo_last = lifo_data_last_12;
      end
      9'b000001101 : begin
        _zz_lifo_last = lifo_data_last_13;
      end
      9'b000001110 : begin
        _zz_lifo_last = lifo_data_last_14;
      end
      9'b000001111 : begin
        _zz_lifo_last = lifo_data_last_15;
      end
      9'b000010000 : begin
        _zz_lifo_last = lifo_data_last_16;
      end
      9'b000010001 : begin
        _zz_lifo_last = lifo_data_last_17;
      end
      9'b000010010 : begin
        _zz_lifo_last = lifo_data_last_18;
      end
      9'b000010011 : begin
        _zz_lifo_last = lifo_data_last_19;
      end
      9'b000010100 : begin
        _zz_lifo_last = lifo_data_last_20;
      end
      9'b000010101 : begin
        _zz_lifo_last = lifo_data_last_21;
      end
      9'b000010110 : begin
        _zz_lifo_last = lifo_data_last_22;
      end
      9'b000010111 : begin
        _zz_lifo_last = lifo_data_last_23;
      end
      9'b000011000 : begin
        _zz_lifo_last = lifo_data_last_24;
      end
      9'b000011001 : begin
        _zz_lifo_last = lifo_data_last_25;
      end
      9'b000011010 : begin
        _zz_lifo_last = lifo_data_last_26;
      end
      9'b000011011 : begin
        _zz_lifo_last = lifo_data_last_27;
      end
      9'b000011100 : begin
        _zz_lifo_last = lifo_data_last_28;
      end
      9'b000011101 : begin
        _zz_lifo_last = lifo_data_last_29;
      end
      9'b000011110 : begin
        _zz_lifo_last = lifo_data_last_30;
      end
      9'b000011111 : begin
        _zz_lifo_last = lifo_data_last_31;
      end
      9'b000100000 : begin
        _zz_lifo_last = lifo_data_last_32;
      end
      9'b000100001 : begin
        _zz_lifo_last = lifo_data_last_33;
      end
      9'b000100010 : begin
        _zz_lifo_last = lifo_data_last_34;
      end
      9'b000100011 : begin
        _zz_lifo_last = lifo_data_last_35;
      end
      9'b000100100 : begin
        _zz_lifo_last = lifo_data_last_36;
      end
      9'b000100101 : begin
        _zz_lifo_last = lifo_data_last_37;
      end
      9'b000100110 : begin
        _zz_lifo_last = lifo_data_last_38;
      end
      9'b000100111 : begin
        _zz_lifo_last = lifo_data_last_39;
      end
      9'b000101000 : begin
        _zz_lifo_last = lifo_data_last_40;
      end
      9'b000101001 : begin
        _zz_lifo_last = lifo_data_last_41;
      end
      9'b000101010 : begin
        _zz_lifo_last = lifo_data_last_42;
      end
      9'b000101011 : begin
        _zz_lifo_last = lifo_data_last_43;
      end
      9'b000101100 : begin
        _zz_lifo_last = lifo_data_last_44;
      end
      9'b000101101 : begin
        _zz_lifo_last = lifo_data_last_45;
      end
      9'b000101110 : begin
        _zz_lifo_last = lifo_data_last_46;
      end
      9'b000101111 : begin
        _zz_lifo_last = lifo_data_last_47;
      end
      9'b000110000 : begin
        _zz_lifo_last = lifo_data_last_48;
      end
      9'b000110001 : begin
        _zz_lifo_last = lifo_data_last_49;
      end
      9'b000110010 : begin
        _zz_lifo_last = lifo_data_last_50;
      end
      9'b000110011 : begin
        _zz_lifo_last = lifo_data_last_51;
      end
      9'b000110100 : begin
        _zz_lifo_last = lifo_data_last_52;
      end
      9'b000110101 : begin
        _zz_lifo_last = lifo_data_last_53;
      end
      9'b000110110 : begin
        _zz_lifo_last = lifo_data_last_54;
      end
      9'b000110111 : begin
        _zz_lifo_last = lifo_data_last_55;
      end
      9'b000111000 : begin
        _zz_lifo_last = lifo_data_last_56;
      end
      9'b000111001 : begin
        _zz_lifo_last = lifo_data_last_57;
      end
      9'b000111010 : begin
        _zz_lifo_last = lifo_data_last_58;
      end
      9'b000111011 : begin
        _zz_lifo_last = lifo_data_last_59;
      end
      9'b000111100 : begin
        _zz_lifo_last = lifo_data_last_60;
      end
      9'b000111101 : begin
        _zz_lifo_last = lifo_data_last_61;
      end
      9'b000111110 : begin
        _zz_lifo_last = lifo_data_last_62;
      end
      9'b000111111 : begin
        _zz_lifo_last = lifo_data_last_63;
      end
      9'b001000000 : begin
        _zz_lifo_last = lifo_data_last_64;
      end
      9'b001000001 : begin
        _zz_lifo_last = lifo_data_last_65;
      end
      9'b001000010 : begin
        _zz_lifo_last = lifo_data_last_66;
      end
      9'b001000011 : begin
        _zz_lifo_last = lifo_data_last_67;
      end
      9'b001000100 : begin
        _zz_lifo_last = lifo_data_last_68;
      end
      9'b001000101 : begin
        _zz_lifo_last = lifo_data_last_69;
      end
      9'b001000110 : begin
        _zz_lifo_last = lifo_data_last_70;
      end
      9'b001000111 : begin
        _zz_lifo_last = lifo_data_last_71;
      end
      9'b001001000 : begin
        _zz_lifo_last = lifo_data_last_72;
      end
      9'b001001001 : begin
        _zz_lifo_last = lifo_data_last_73;
      end
      9'b001001010 : begin
        _zz_lifo_last = lifo_data_last_74;
      end
      9'b001001011 : begin
        _zz_lifo_last = lifo_data_last_75;
      end
      9'b001001100 : begin
        _zz_lifo_last = lifo_data_last_76;
      end
      9'b001001101 : begin
        _zz_lifo_last = lifo_data_last_77;
      end
      9'b001001110 : begin
        _zz_lifo_last = lifo_data_last_78;
      end
      9'b001001111 : begin
        _zz_lifo_last = lifo_data_last_79;
      end
      9'b001010000 : begin
        _zz_lifo_last = lifo_data_last_80;
      end
      9'b001010001 : begin
        _zz_lifo_last = lifo_data_last_81;
      end
      9'b001010010 : begin
        _zz_lifo_last = lifo_data_last_82;
      end
      9'b001010011 : begin
        _zz_lifo_last = lifo_data_last_83;
      end
      9'b001010100 : begin
        _zz_lifo_last = lifo_data_last_84;
      end
      9'b001010101 : begin
        _zz_lifo_last = lifo_data_last_85;
      end
      9'b001010110 : begin
        _zz_lifo_last = lifo_data_last_86;
      end
      9'b001010111 : begin
        _zz_lifo_last = lifo_data_last_87;
      end
      9'b001011000 : begin
        _zz_lifo_last = lifo_data_last_88;
      end
      9'b001011001 : begin
        _zz_lifo_last = lifo_data_last_89;
      end
      9'b001011010 : begin
        _zz_lifo_last = lifo_data_last_90;
      end
      9'b001011011 : begin
        _zz_lifo_last = lifo_data_last_91;
      end
      9'b001011100 : begin
        _zz_lifo_last = lifo_data_last_92;
      end
      9'b001011101 : begin
        _zz_lifo_last = lifo_data_last_93;
      end
      9'b001011110 : begin
        _zz_lifo_last = lifo_data_last_94;
      end
      9'b001011111 : begin
        _zz_lifo_last = lifo_data_last_95;
      end
      9'b001100000 : begin
        _zz_lifo_last = lifo_data_last_96;
      end
      9'b001100001 : begin
        _zz_lifo_last = lifo_data_last_97;
      end
      9'b001100010 : begin
        _zz_lifo_last = lifo_data_last_98;
      end
      9'b001100011 : begin
        _zz_lifo_last = lifo_data_last_99;
      end
      9'b001100100 : begin
        _zz_lifo_last = lifo_data_last_100;
      end
      9'b001100101 : begin
        _zz_lifo_last = lifo_data_last_101;
      end
      9'b001100110 : begin
        _zz_lifo_last = lifo_data_last_102;
      end
      9'b001100111 : begin
        _zz_lifo_last = lifo_data_last_103;
      end
      9'b001101000 : begin
        _zz_lifo_last = lifo_data_last_104;
      end
      9'b001101001 : begin
        _zz_lifo_last = lifo_data_last_105;
      end
      9'b001101010 : begin
        _zz_lifo_last = lifo_data_last_106;
      end
      9'b001101011 : begin
        _zz_lifo_last = lifo_data_last_107;
      end
      9'b001101100 : begin
        _zz_lifo_last = lifo_data_last_108;
      end
      9'b001101101 : begin
        _zz_lifo_last = lifo_data_last_109;
      end
      9'b001101110 : begin
        _zz_lifo_last = lifo_data_last_110;
      end
      9'b001101111 : begin
        _zz_lifo_last = lifo_data_last_111;
      end
      9'b001110000 : begin
        _zz_lifo_last = lifo_data_last_112;
      end
      9'b001110001 : begin
        _zz_lifo_last = lifo_data_last_113;
      end
      9'b001110010 : begin
        _zz_lifo_last = lifo_data_last_114;
      end
      9'b001110011 : begin
        _zz_lifo_last = lifo_data_last_115;
      end
      9'b001110100 : begin
        _zz_lifo_last = lifo_data_last_116;
      end
      9'b001110101 : begin
        _zz_lifo_last = lifo_data_last_117;
      end
      9'b001110110 : begin
        _zz_lifo_last = lifo_data_last_118;
      end
      9'b001110111 : begin
        _zz_lifo_last = lifo_data_last_119;
      end
      9'b001111000 : begin
        _zz_lifo_last = lifo_data_last_120;
      end
      9'b001111001 : begin
        _zz_lifo_last = lifo_data_last_121;
      end
      9'b001111010 : begin
        _zz_lifo_last = lifo_data_last_122;
      end
      9'b001111011 : begin
        _zz_lifo_last = lifo_data_last_123;
      end
      9'b001111100 : begin
        _zz_lifo_last = lifo_data_last_124;
      end
      9'b001111101 : begin
        _zz_lifo_last = lifo_data_last_125;
      end
      9'b001111110 : begin
        _zz_lifo_last = lifo_data_last_126;
      end
      9'b001111111 : begin
        _zz_lifo_last = lifo_data_last_127;
      end
      9'b010000000 : begin
        _zz_lifo_last = lifo_data_last_128;
      end
      9'b010000001 : begin
        _zz_lifo_last = lifo_data_last_129;
      end
      9'b010000010 : begin
        _zz_lifo_last = lifo_data_last_130;
      end
      9'b010000011 : begin
        _zz_lifo_last = lifo_data_last_131;
      end
      9'b010000100 : begin
        _zz_lifo_last = lifo_data_last_132;
      end
      9'b010000101 : begin
        _zz_lifo_last = lifo_data_last_133;
      end
      9'b010000110 : begin
        _zz_lifo_last = lifo_data_last_134;
      end
      9'b010000111 : begin
        _zz_lifo_last = lifo_data_last_135;
      end
      9'b010001000 : begin
        _zz_lifo_last = lifo_data_last_136;
      end
      9'b010001001 : begin
        _zz_lifo_last = lifo_data_last_137;
      end
      9'b010001010 : begin
        _zz_lifo_last = lifo_data_last_138;
      end
      9'b010001011 : begin
        _zz_lifo_last = lifo_data_last_139;
      end
      9'b010001100 : begin
        _zz_lifo_last = lifo_data_last_140;
      end
      9'b010001101 : begin
        _zz_lifo_last = lifo_data_last_141;
      end
      9'b010001110 : begin
        _zz_lifo_last = lifo_data_last_142;
      end
      9'b010001111 : begin
        _zz_lifo_last = lifo_data_last_143;
      end
      9'b010010000 : begin
        _zz_lifo_last = lifo_data_last_144;
      end
      9'b010010001 : begin
        _zz_lifo_last = lifo_data_last_145;
      end
      9'b010010010 : begin
        _zz_lifo_last = lifo_data_last_146;
      end
      9'b010010011 : begin
        _zz_lifo_last = lifo_data_last_147;
      end
      9'b010010100 : begin
        _zz_lifo_last = lifo_data_last_148;
      end
      9'b010010101 : begin
        _zz_lifo_last = lifo_data_last_149;
      end
      9'b010010110 : begin
        _zz_lifo_last = lifo_data_last_150;
      end
      9'b010010111 : begin
        _zz_lifo_last = lifo_data_last_151;
      end
      9'b010011000 : begin
        _zz_lifo_last = lifo_data_last_152;
      end
      9'b010011001 : begin
        _zz_lifo_last = lifo_data_last_153;
      end
      9'b010011010 : begin
        _zz_lifo_last = lifo_data_last_154;
      end
      9'b010011011 : begin
        _zz_lifo_last = lifo_data_last_155;
      end
      9'b010011100 : begin
        _zz_lifo_last = lifo_data_last_156;
      end
      9'b010011101 : begin
        _zz_lifo_last = lifo_data_last_157;
      end
      9'b010011110 : begin
        _zz_lifo_last = lifo_data_last_158;
      end
      9'b010011111 : begin
        _zz_lifo_last = lifo_data_last_159;
      end
      9'b010100000 : begin
        _zz_lifo_last = lifo_data_last_160;
      end
      9'b010100001 : begin
        _zz_lifo_last = lifo_data_last_161;
      end
      9'b010100010 : begin
        _zz_lifo_last = lifo_data_last_162;
      end
      9'b010100011 : begin
        _zz_lifo_last = lifo_data_last_163;
      end
      9'b010100100 : begin
        _zz_lifo_last = lifo_data_last_164;
      end
      9'b010100101 : begin
        _zz_lifo_last = lifo_data_last_165;
      end
      9'b010100110 : begin
        _zz_lifo_last = lifo_data_last_166;
      end
      9'b010100111 : begin
        _zz_lifo_last = lifo_data_last_167;
      end
      9'b010101000 : begin
        _zz_lifo_last = lifo_data_last_168;
      end
      9'b010101001 : begin
        _zz_lifo_last = lifo_data_last_169;
      end
      9'b010101010 : begin
        _zz_lifo_last = lifo_data_last_170;
      end
      9'b010101011 : begin
        _zz_lifo_last = lifo_data_last_171;
      end
      9'b010101100 : begin
        _zz_lifo_last = lifo_data_last_172;
      end
      9'b010101101 : begin
        _zz_lifo_last = lifo_data_last_173;
      end
      9'b010101110 : begin
        _zz_lifo_last = lifo_data_last_174;
      end
      9'b010101111 : begin
        _zz_lifo_last = lifo_data_last_175;
      end
      9'b010110000 : begin
        _zz_lifo_last = lifo_data_last_176;
      end
      9'b010110001 : begin
        _zz_lifo_last = lifo_data_last_177;
      end
      9'b010110010 : begin
        _zz_lifo_last = lifo_data_last_178;
      end
      9'b010110011 : begin
        _zz_lifo_last = lifo_data_last_179;
      end
      9'b010110100 : begin
        _zz_lifo_last = lifo_data_last_180;
      end
      9'b010110101 : begin
        _zz_lifo_last = lifo_data_last_181;
      end
      9'b010110110 : begin
        _zz_lifo_last = lifo_data_last_182;
      end
      9'b010110111 : begin
        _zz_lifo_last = lifo_data_last_183;
      end
      9'b010111000 : begin
        _zz_lifo_last = lifo_data_last_184;
      end
      9'b010111001 : begin
        _zz_lifo_last = lifo_data_last_185;
      end
      9'b010111010 : begin
        _zz_lifo_last = lifo_data_last_186;
      end
      9'b010111011 : begin
        _zz_lifo_last = lifo_data_last_187;
      end
      9'b010111100 : begin
        _zz_lifo_last = lifo_data_last_188;
      end
      9'b010111101 : begin
        _zz_lifo_last = lifo_data_last_189;
      end
      9'b010111110 : begin
        _zz_lifo_last = lifo_data_last_190;
      end
      9'b010111111 : begin
        _zz_lifo_last = lifo_data_last_191;
      end
      9'b011000000 : begin
        _zz_lifo_last = lifo_data_last_192;
      end
      9'b011000001 : begin
        _zz_lifo_last = lifo_data_last_193;
      end
      9'b011000010 : begin
        _zz_lifo_last = lifo_data_last_194;
      end
      9'b011000011 : begin
        _zz_lifo_last = lifo_data_last_195;
      end
      9'b011000100 : begin
        _zz_lifo_last = lifo_data_last_196;
      end
      9'b011000101 : begin
        _zz_lifo_last = lifo_data_last_197;
      end
      9'b011000110 : begin
        _zz_lifo_last = lifo_data_last_198;
      end
      9'b011000111 : begin
        _zz_lifo_last = lifo_data_last_199;
      end
      9'b011001000 : begin
        _zz_lifo_last = lifo_data_last_200;
      end
      9'b011001001 : begin
        _zz_lifo_last = lifo_data_last_201;
      end
      9'b011001010 : begin
        _zz_lifo_last = lifo_data_last_202;
      end
      9'b011001011 : begin
        _zz_lifo_last = lifo_data_last_203;
      end
      9'b011001100 : begin
        _zz_lifo_last = lifo_data_last_204;
      end
      9'b011001101 : begin
        _zz_lifo_last = lifo_data_last_205;
      end
      9'b011001110 : begin
        _zz_lifo_last = lifo_data_last_206;
      end
      9'b011001111 : begin
        _zz_lifo_last = lifo_data_last_207;
      end
      9'b011010000 : begin
        _zz_lifo_last = lifo_data_last_208;
      end
      9'b011010001 : begin
        _zz_lifo_last = lifo_data_last_209;
      end
      9'b011010010 : begin
        _zz_lifo_last = lifo_data_last_210;
      end
      9'b011010011 : begin
        _zz_lifo_last = lifo_data_last_211;
      end
      9'b011010100 : begin
        _zz_lifo_last = lifo_data_last_212;
      end
      9'b011010101 : begin
        _zz_lifo_last = lifo_data_last_213;
      end
      9'b011010110 : begin
        _zz_lifo_last = lifo_data_last_214;
      end
      9'b011010111 : begin
        _zz_lifo_last = lifo_data_last_215;
      end
      9'b011011000 : begin
        _zz_lifo_last = lifo_data_last_216;
      end
      9'b011011001 : begin
        _zz_lifo_last = lifo_data_last_217;
      end
      9'b011011010 : begin
        _zz_lifo_last = lifo_data_last_218;
      end
      9'b011011011 : begin
        _zz_lifo_last = lifo_data_last_219;
      end
      9'b011011100 : begin
        _zz_lifo_last = lifo_data_last_220;
      end
      9'b011011101 : begin
        _zz_lifo_last = lifo_data_last_221;
      end
      9'b011011110 : begin
        _zz_lifo_last = lifo_data_last_222;
      end
      9'b011011111 : begin
        _zz_lifo_last = lifo_data_last_223;
      end
      9'b011100000 : begin
        _zz_lifo_last = lifo_data_last_224;
      end
      9'b011100001 : begin
        _zz_lifo_last = lifo_data_last_225;
      end
      9'b011100010 : begin
        _zz_lifo_last = lifo_data_last_226;
      end
      9'b011100011 : begin
        _zz_lifo_last = lifo_data_last_227;
      end
      9'b011100100 : begin
        _zz_lifo_last = lifo_data_last_228;
      end
      9'b011100101 : begin
        _zz_lifo_last = lifo_data_last_229;
      end
      9'b011100110 : begin
        _zz_lifo_last = lifo_data_last_230;
      end
      9'b011100111 : begin
        _zz_lifo_last = lifo_data_last_231;
      end
      9'b011101000 : begin
        _zz_lifo_last = lifo_data_last_232;
      end
      9'b011101001 : begin
        _zz_lifo_last = lifo_data_last_233;
      end
      9'b011101010 : begin
        _zz_lifo_last = lifo_data_last_234;
      end
      9'b011101011 : begin
        _zz_lifo_last = lifo_data_last_235;
      end
      9'b011101100 : begin
        _zz_lifo_last = lifo_data_last_236;
      end
      9'b011101101 : begin
        _zz_lifo_last = lifo_data_last_237;
      end
      9'b011101110 : begin
        _zz_lifo_last = lifo_data_last_238;
      end
      9'b011101111 : begin
        _zz_lifo_last = lifo_data_last_239;
      end
      9'b011110000 : begin
        _zz_lifo_last = lifo_data_last_240;
      end
      9'b011110001 : begin
        _zz_lifo_last = lifo_data_last_241;
      end
      9'b011110010 : begin
        _zz_lifo_last = lifo_data_last_242;
      end
      9'b011110011 : begin
        _zz_lifo_last = lifo_data_last_243;
      end
      9'b011110100 : begin
        _zz_lifo_last = lifo_data_last_244;
      end
      9'b011110101 : begin
        _zz_lifo_last = lifo_data_last_245;
      end
      9'b011110110 : begin
        _zz_lifo_last = lifo_data_last_246;
      end
      9'b011110111 : begin
        _zz_lifo_last = lifo_data_last_247;
      end
      9'b011111000 : begin
        _zz_lifo_last = lifo_data_last_248;
      end
      9'b011111001 : begin
        _zz_lifo_last = lifo_data_last_249;
      end
      9'b011111010 : begin
        _zz_lifo_last = lifo_data_last_250;
      end
      9'b011111011 : begin
        _zz_lifo_last = lifo_data_last_251;
      end
      9'b011111100 : begin
        _zz_lifo_last = lifo_data_last_252;
      end
      9'b011111101 : begin
        _zz_lifo_last = lifo_data_last_253;
      end
      9'b011111110 : begin
        _zz_lifo_last = lifo_data_last_254;
      end
      9'b011111111 : begin
        _zz_lifo_last = lifo_data_last_255;
      end
      9'b100000000 : begin
        _zz_lifo_last = lifo_data_last_256;
      end
      9'b100000001 : begin
        _zz_lifo_last = lifo_data_last_257;
      end
      9'b100000010 : begin
        _zz_lifo_last = lifo_data_last_258;
      end
      9'b100000011 : begin
        _zz_lifo_last = lifo_data_last_259;
      end
      9'b100000100 : begin
        _zz_lifo_last = lifo_data_last_260;
      end
      9'b100000101 : begin
        _zz_lifo_last = lifo_data_last_261;
      end
      9'b100000110 : begin
        _zz_lifo_last = lifo_data_last_262;
      end
      9'b100000111 : begin
        _zz_lifo_last = lifo_data_last_263;
      end
      9'b100001000 : begin
        _zz_lifo_last = lifo_data_last_264;
      end
      9'b100001001 : begin
        _zz_lifo_last = lifo_data_last_265;
      end
      9'b100001010 : begin
        _zz_lifo_last = lifo_data_last_266;
      end
      default : begin
        _zz_lifo_last = lifo_data_last_267;
      end
    endcase
  end

  always @(*) begin
    case(_zz_pop_payload_fragment_1)
      9'b000000000 : begin
        _zz_pop_payload_fragment = lifo_data_0;
      end
      9'b000000001 : begin
        _zz_pop_payload_fragment = lifo_data_1;
      end
      9'b000000010 : begin
        _zz_pop_payload_fragment = lifo_data_2;
      end
      9'b000000011 : begin
        _zz_pop_payload_fragment = lifo_data_3;
      end
      9'b000000100 : begin
        _zz_pop_payload_fragment = lifo_data_4;
      end
      9'b000000101 : begin
        _zz_pop_payload_fragment = lifo_data_5;
      end
      9'b000000110 : begin
        _zz_pop_payload_fragment = lifo_data_6;
      end
      9'b000000111 : begin
        _zz_pop_payload_fragment = lifo_data_7;
      end
      9'b000001000 : begin
        _zz_pop_payload_fragment = lifo_data_8;
      end
      9'b000001001 : begin
        _zz_pop_payload_fragment = lifo_data_9;
      end
      9'b000001010 : begin
        _zz_pop_payload_fragment = lifo_data_10;
      end
      9'b000001011 : begin
        _zz_pop_payload_fragment = lifo_data_11;
      end
      9'b000001100 : begin
        _zz_pop_payload_fragment = lifo_data_12;
      end
      9'b000001101 : begin
        _zz_pop_payload_fragment = lifo_data_13;
      end
      9'b000001110 : begin
        _zz_pop_payload_fragment = lifo_data_14;
      end
      9'b000001111 : begin
        _zz_pop_payload_fragment = lifo_data_15;
      end
      9'b000010000 : begin
        _zz_pop_payload_fragment = lifo_data_16;
      end
      9'b000010001 : begin
        _zz_pop_payload_fragment = lifo_data_17;
      end
      9'b000010010 : begin
        _zz_pop_payload_fragment = lifo_data_18;
      end
      9'b000010011 : begin
        _zz_pop_payload_fragment = lifo_data_19;
      end
      9'b000010100 : begin
        _zz_pop_payload_fragment = lifo_data_20;
      end
      9'b000010101 : begin
        _zz_pop_payload_fragment = lifo_data_21;
      end
      9'b000010110 : begin
        _zz_pop_payload_fragment = lifo_data_22;
      end
      9'b000010111 : begin
        _zz_pop_payload_fragment = lifo_data_23;
      end
      9'b000011000 : begin
        _zz_pop_payload_fragment = lifo_data_24;
      end
      9'b000011001 : begin
        _zz_pop_payload_fragment = lifo_data_25;
      end
      9'b000011010 : begin
        _zz_pop_payload_fragment = lifo_data_26;
      end
      9'b000011011 : begin
        _zz_pop_payload_fragment = lifo_data_27;
      end
      9'b000011100 : begin
        _zz_pop_payload_fragment = lifo_data_28;
      end
      9'b000011101 : begin
        _zz_pop_payload_fragment = lifo_data_29;
      end
      9'b000011110 : begin
        _zz_pop_payload_fragment = lifo_data_30;
      end
      9'b000011111 : begin
        _zz_pop_payload_fragment = lifo_data_31;
      end
      9'b000100000 : begin
        _zz_pop_payload_fragment = lifo_data_32;
      end
      9'b000100001 : begin
        _zz_pop_payload_fragment = lifo_data_33;
      end
      9'b000100010 : begin
        _zz_pop_payload_fragment = lifo_data_34;
      end
      9'b000100011 : begin
        _zz_pop_payload_fragment = lifo_data_35;
      end
      9'b000100100 : begin
        _zz_pop_payload_fragment = lifo_data_36;
      end
      9'b000100101 : begin
        _zz_pop_payload_fragment = lifo_data_37;
      end
      9'b000100110 : begin
        _zz_pop_payload_fragment = lifo_data_38;
      end
      9'b000100111 : begin
        _zz_pop_payload_fragment = lifo_data_39;
      end
      9'b000101000 : begin
        _zz_pop_payload_fragment = lifo_data_40;
      end
      9'b000101001 : begin
        _zz_pop_payload_fragment = lifo_data_41;
      end
      9'b000101010 : begin
        _zz_pop_payload_fragment = lifo_data_42;
      end
      9'b000101011 : begin
        _zz_pop_payload_fragment = lifo_data_43;
      end
      9'b000101100 : begin
        _zz_pop_payload_fragment = lifo_data_44;
      end
      9'b000101101 : begin
        _zz_pop_payload_fragment = lifo_data_45;
      end
      9'b000101110 : begin
        _zz_pop_payload_fragment = lifo_data_46;
      end
      9'b000101111 : begin
        _zz_pop_payload_fragment = lifo_data_47;
      end
      9'b000110000 : begin
        _zz_pop_payload_fragment = lifo_data_48;
      end
      9'b000110001 : begin
        _zz_pop_payload_fragment = lifo_data_49;
      end
      9'b000110010 : begin
        _zz_pop_payload_fragment = lifo_data_50;
      end
      9'b000110011 : begin
        _zz_pop_payload_fragment = lifo_data_51;
      end
      9'b000110100 : begin
        _zz_pop_payload_fragment = lifo_data_52;
      end
      9'b000110101 : begin
        _zz_pop_payload_fragment = lifo_data_53;
      end
      9'b000110110 : begin
        _zz_pop_payload_fragment = lifo_data_54;
      end
      9'b000110111 : begin
        _zz_pop_payload_fragment = lifo_data_55;
      end
      9'b000111000 : begin
        _zz_pop_payload_fragment = lifo_data_56;
      end
      9'b000111001 : begin
        _zz_pop_payload_fragment = lifo_data_57;
      end
      9'b000111010 : begin
        _zz_pop_payload_fragment = lifo_data_58;
      end
      9'b000111011 : begin
        _zz_pop_payload_fragment = lifo_data_59;
      end
      9'b000111100 : begin
        _zz_pop_payload_fragment = lifo_data_60;
      end
      9'b000111101 : begin
        _zz_pop_payload_fragment = lifo_data_61;
      end
      9'b000111110 : begin
        _zz_pop_payload_fragment = lifo_data_62;
      end
      9'b000111111 : begin
        _zz_pop_payload_fragment = lifo_data_63;
      end
      9'b001000000 : begin
        _zz_pop_payload_fragment = lifo_data_64;
      end
      9'b001000001 : begin
        _zz_pop_payload_fragment = lifo_data_65;
      end
      9'b001000010 : begin
        _zz_pop_payload_fragment = lifo_data_66;
      end
      9'b001000011 : begin
        _zz_pop_payload_fragment = lifo_data_67;
      end
      9'b001000100 : begin
        _zz_pop_payload_fragment = lifo_data_68;
      end
      9'b001000101 : begin
        _zz_pop_payload_fragment = lifo_data_69;
      end
      9'b001000110 : begin
        _zz_pop_payload_fragment = lifo_data_70;
      end
      9'b001000111 : begin
        _zz_pop_payload_fragment = lifo_data_71;
      end
      9'b001001000 : begin
        _zz_pop_payload_fragment = lifo_data_72;
      end
      9'b001001001 : begin
        _zz_pop_payload_fragment = lifo_data_73;
      end
      9'b001001010 : begin
        _zz_pop_payload_fragment = lifo_data_74;
      end
      9'b001001011 : begin
        _zz_pop_payload_fragment = lifo_data_75;
      end
      9'b001001100 : begin
        _zz_pop_payload_fragment = lifo_data_76;
      end
      9'b001001101 : begin
        _zz_pop_payload_fragment = lifo_data_77;
      end
      9'b001001110 : begin
        _zz_pop_payload_fragment = lifo_data_78;
      end
      9'b001001111 : begin
        _zz_pop_payload_fragment = lifo_data_79;
      end
      9'b001010000 : begin
        _zz_pop_payload_fragment = lifo_data_80;
      end
      9'b001010001 : begin
        _zz_pop_payload_fragment = lifo_data_81;
      end
      9'b001010010 : begin
        _zz_pop_payload_fragment = lifo_data_82;
      end
      9'b001010011 : begin
        _zz_pop_payload_fragment = lifo_data_83;
      end
      9'b001010100 : begin
        _zz_pop_payload_fragment = lifo_data_84;
      end
      9'b001010101 : begin
        _zz_pop_payload_fragment = lifo_data_85;
      end
      9'b001010110 : begin
        _zz_pop_payload_fragment = lifo_data_86;
      end
      9'b001010111 : begin
        _zz_pop_payload_fragment = lifo_data_87;
      end
      9'b001011000 : begin
        _zz_pop_payload_fragment = lifo_data_88;
      end
      9'b001011001 : begin
        _zz_pop_payload_fragment = lifo_data_89;
      end
      9'b001011010 : begin
        _zz_pop_payload_fragment = lifo_data_90;
      end
      9'b001011011 : begin
        _zz_pop_payload_fragment = lifo_data_91;
      end
      9'b001011100 : begin
        _zz_pop_payload_fragment = lifo_data_92;
      end
      9'b001011101 : begin
        _zz_pop_payload_fragment = lifo_data_93;
      end
      9'b001011110 : begin
        _zz_pop_payload_fragment = lifo_data_94;
      end
      9'b001011111 : begin
        _zz_pop_payload_fragment = lifo_data_95;
      end
      9'b001100000 : begin
        _zz_pop_payload_fragment = lifo_data_96;
      end
      9'b001100001 : begin
        _zz_pop_payload_fragment = lifo_data_97;
      end
      9'b001100010 : begin
        _zz_pop_payload_fragment = lifo_data_98;
      end
      9'b001100011 : begin
        _zz_pop_payload_fragment = lifo_data_99;
      end
      9'b001100100 : begin
        _zz_pop_payload_fragment = lifo_data_100;
      end
      9'b001100101 : begin
        _zz_pop_payload_fragment = lifo_data_101;
      end
      9'b001100110 : begin
        _zz_pop_payload_fragment = lifo_data_102;
      end
      9'b001100111 : begin
        _zz_pop_payload_fragment = lifo_data_103;
      end
      9'b001101000 : begin
        _zz_pop_payload_fragment = lifo_data_104;
      end
      9'b001101001 : begin
        _zz_pop_payload_fragment = lifo_data_105;
      end
      9'b001101010 : begin
        _zz_pop_payload_fragment = lifo_data_106;
      end
      9'b001101011 : begin
        _zz_pop_payload_fragment = lifo_data_107;
      end
      9'b001101100 : begin
        _zz_pop_payload_fragment = lifo_data_108;
      end
      9'b001101101 : begin
        _zz_pop_payload_fragment = lifo_data_109;
      end
      9'b001101110 : begin
        _zz_pop_payload_fragment = lifo_data_110;
      end
      9'b001101111 : begin
        _zz_pop_payload_fragment = lifo_data_111;
      end
      9'b001110000 : begin
        _zz_pop_payload_fragment = lifo_data_112;
      end
      9'b001110001 : begin
        _zz_pop_payload_fragment = lifo_data_113;
      end
      9'b001110010 : begin
        _zz_pop_payload_fragment = lifo_data_114;
      end
      9'b001110011 : begin
        _zz_pop_payload_fragment = lifo_data_115;
      end
      9'b001110100 : begin
        _zz_pop_payload_fragment = lifo_data_116;
      end
      9'b001110101 : begin
        _zz_pop_payload_fragment = lifo_data_117;
      end
      9'b001110110 : begin
        _zz_pop_payload_fragment = lifo_data_118;
      end
      9'b001110111 : begin
        _zz_pop_payload_fragment = lifo_data_119;
      end
      9'b001111000 : begin
        _zz_pop_payload_fragment = lifo_data_120;
      end
      9'b001111001 : begin
        _zz_pop_payload_fragment = lifo_data_121;
      end
      9'b001111010 : begin
        _zz_pop_payload_fragment = lifo_data_122;
      end
      9'b001111011 : begin
        _zz_pop_payload_fragment = lifo_data_123;
      end
      9'b001111100 : begin
        _zz_pop_payload_fragment = lifo_data_124;
      end
      9'b001111101 : begin
        _zz_pop_payload_fragment = lifo_data_125;
      end
      9'b001111110 : begin
        _zz_pop_payload_fragment = lifo_data_126;
      end
      9'b001111111 : begin
        _zz_pop_payload_fragment = lifo_data_127;
      end
      9'b010000000 : begin
        _zz_pop_payload_fragment = lifo_data_128;
      end
      9'b010000001 : begin
        _zz_pop_payload_fragment = lifo_data_129;
      end
      9'b010000010 : begin
        _zz_pop_payload_fragment = lifo_data_130;
      end
      9'b010000011 : begin
        _zz_pop_payload_fragment = lifo_data_131;
      end
      9'b010000100 : begin
        _zz_pop_payload_fragment = lifo_data_132;
      end
      9'b010000101 : begin
        _zz_pop_payload_fragment = lifo_data_133;
      end
      9'b010000110 : begin
        _zz_pop_payload_fragment = lifo_data_134;
      end
      9'b010000111 : begin
        _zz_pop_payload_fragment = lifo_data_135;
      end
      9'b010001000 : begin
        _zz_pop_payload_fragment = lifo_data_136;
      end
      9'b010001001 : begin
        _zz_pop_payload_fragment = lifo_data_137;
      end
      9'b010001010 : begin
        _zz_pop_payload_fragment = lifo_data_138;
      end
      9'b010001011 : begin
        _zz_pop_payload_fragment = lifo_data_139;
      end
      9'b010001100 : begin
        _zz_pop_payload_fragment = lifo_data_140;
      end
      9'b010001101 : begin
        _zz_pop_payload_fragment = lifo_data_141;
      end
      9'b010001110 : begin
        _zz_pop_payload_fragment = lifo_data_142;
      end
      9'b010001111 : begin
        _zz_pop_payload_fragment = lifo_data_143;
      end
      9'b010010000 : begin
        _zz_pop_payload_fragment = lifo_data_144;
      end
      9'b010010001 : begin
        _zz_pop_payload_fragment = lifo_data_145;
      end
      9'b010010010 : begin
        _zz_pop_payload_fragment = lifo_data_146;
      end
      9'b010010011 : begin
        _zz_pop_payload_fragment = lifo_data_147;
      end
      9'b010010100 : begin
        _zz_pop_payload_fragment = lifo_data_148;
      end
      9'b010010101 : begin
        _zz_pop_payload_fragment = lifo_data_149;
      end
      9'b010010110 : begin
        _zz_pop_payload_fragment = lifo_data_150;
      end
      9'b010010111 : begin
        _zz_pop_payload_fragment = lifo_data_151;
      end
      9'b010011000 : begin
        _zz_pop_payload_fragment = lifo_data_152;
      end
      9'b010011001 : begin
        _zz_pop_payload_fragment = lifo_data_153;
      end
      9'b010011010 : begin
        _zz_pop_payload_fragment = lifo_data_154;
      end
      9'b010011011 : begin
        _zz_pop_payload_fragment = lifo_data_155;
      end
      9'b010011100 : begin
        _zz_pop_payload_fragment = lifo_data_156;
      end
      9'b010011101 : begin
        _zz_pop_payload_fragment = lifo_data_157;
      end
      9'b010011110 : begin
        _zz_pop_payload_fragment = lifo_data_158;
      end
      9'b010011111 : begin
        _zz_pop_payload_fragment = lifo_data_159;
      end
      9'b010100000 : begin
        _zz_pop_payload_fragment = lifo_data_160;
      end
      9'b010100001 : begin
        _zz_pop_payload_fragment = lifo_data_161;
      end
      9'b010100010 : begin
        _zz_pop_payload_fragment = lifo_data_162;
      end
      9'b010100011 : begin
        _zz_pop_payload_fragment = lifo_data_163;
      end
      9'b010100100 : begin
        _zz_pop_payload_fragment = lifo_data_164;
      end
      9'b010100101 : begin
        _zz_pop_payload_fragment = lifo_data_165;
      end
      9'b010100110 : begin
        _zz_pop_payload_fragment = lifo_data_166;
      end
      9'b010100111 : begin
        _zz_pop_payload_fragment = lifo_data_167;
      end
      9'b010101000 : begin
        _zz_pop_payload_fragment = lifo_data_168;
      end
      9'b010101001 : begin
        _zz_pop_payload_fragment = lifo_data_169;
      end
      9'b010101010 : begin
        _zz_pop_payload_fragment = lifo_data_170;
      end
      9'b010101011 : begin
        _zz_pop_payload_fragment = lifo_data_171;
      end
      9'b010101100 : begin
        _zz_pop_payload_fragment = lifo_data_172;
      end
      9'b010101101 : begin
        _zz_pop_payload_fragment = lifo_data_173;
      end
      9'b010101110 : begin
        _zz_pop_payload_fragment = lifo_data_174;
      end
      9'b010101111 : begin
        _zz_pop_payload_fragment = lifo_data_175;
      end
      9'b010110000 : begin
        _zz_pop_payload_fragment = lifo_data_176;
      end
      9'b010110001 : begin
        _zz_pop_payload_fragment = lifo_data_177;
      end
      9'b010110010 : begin
        _zz_pop_payload_fragment = lifo_data_178;
      end
      9'b010110011 : begin
        _zz_pop_payload_fragment = lifo_data_179;
      end
      9'b010110100 : begin
        _zz_pop_payload_fragment = lifo_data_180;
      end
      9'b010110101 : begin
        _zz_pop_payload_fragment = lifo_data_181;
      end
      9'b010110110 : begin
        _zz_pop_payload_fragment = lifo_data_182;
      end
      9'b010110111 : begin
        _zz_pop_payload_fragment = lifo_data_183;
      end
      9'b010111000 : begin
        _zz_pop_payload_fragment = lifo_data_184;
      end
      9'b010111001 : begin
        _zz_pop_payload_fragment = lifo_data_185;
      end
      9'b010111010 : begin
        _zz_pop_payload_fragment = lifo_data_186;
      end
      9'b010111011 : begin
        _zz_pop_payload_fragment = lifo_data_187;
      end
      9'b010111100 : begin
        _zz_pop_payload_fragment = lifo_data_188;
      end
      9'b010111101 : begin
        _zz_pop_payload_fragment = lifo_data_189;
      end
      9'b010111110 : begin
        _zz_pop_payload_fragment = lifo_data_190;
      end
      9'b010111111 : begin
        _zz_pop_payload_fragment = lifo_data_191;
      end
      9'b011000000 : begin
        _zz_pop_payload_fragment = lifo_data_192;
      end
      9'b011000001 : begin
        _zz_pop_payload_fragment = lifo_data_193;
      end
      9'b011000010 : begin
        _zz_pop_payload_fragment = lifo_data_194;
      end
      9'b011000011 : begin
        _zz_pop_payload_fragment = lifo_data_195;
      end
      9'b011000100 : begin
        _zz_pop_payload_fragment = lifo_data_196;
      end
      9'b011000101 : begin
        _zz_pop_payload_fragment = lifo_data_197;
      end
      9'b011000110 : begin
        _zz_pop_payload_fragment = lifo_data_198;
      end
      9'b011000111 : begin
        _zz_pop_payload_fragment = lifo_data_199;
      end
      9'b011001000 : begin
        _zz_pop_payload_fragment = lifo_data_200;
      end
      9'b011001001 : begin
        _zz_pop_payload_fragment = lifo_data_201;
      end
      9'b011001010 : begin
        _zz_pop_payload_fragment = lifo_data_202;
      end
      9'b011001011 : begin
        _zz_pop_payload_fragment = lifo_data_203;
      end
      9'b011001100 : begin
        _zz_pop_payload_fragment = lifo_data_204;
      end
      9'b011001101 : begin
        _zz_pop_payload_fragment = lifo_data_205;
      end
      9'b011001110 : begin
        _zz_pop_payload_fragment = lifo_data_206;
      end
      9'b011001111 : begin
        _zz_pop_payload_fragment = lifo_data_207;
      end
      9'b011010000 : begin
        _zz_pop_payload_fragment = lifo_data_208;
      end
      9'b011010001 : begin
        _zz_pop_payload_fragment = lifo_data_209;
      end
      9'b011010010 : begin
        _zz_pop_payload_fragment = lifo_data_210;
      end
      9'b011010011 : begin
        _zz_pop_payload_fragment = lifo_data_211;
      end
      9'b011010100 : begin
        _zz_pop_payload_fragment = lifo_data_212;
      end
      9'b011010101 : begin
        _zz_pop_payload_fragment = lifo_data_213;
      end
      9'b011010110 : begin
        _zz_pop_payload_fragment = lifo_data_214;
      end
      9'b011010111 : begin
        _zz_pop_payload_fragment = lifo_data_215;
      end
      9'b011011000 : begin
        _zz_pop_payload_fragment = lifo_data_216;
      end
      9'b011011001 : begin
        _zz_pop_payload_fragment = lifo_data_217;
      end
      9'b011011010 : begin
        _zz_pop_payload_fragment = lifo_data_218;
      end
      9'b011011011 : begin
        _zz_pop_payload_fragment = lifo_data_219;
      end
      9'b011011100 : begin
        _zz_pop_payload_fragment = lifo_data_220;
      end
      9'b011011101 : begin
        _zz_pop_payload_fragment = lifo_data_221;
      end
      9'b011011110 : begin
        _zz_pop_payload_fragment = lifo_data_222;
      end
      9'b011011111 : begin
        _zz_pop_payload_fragment = lifo_data_223;
      end
      9'b011100000 : begin
        _zz_pop_payload_fragment = lifo_data_224;
      end
      9'b011100001 : begin
        _zz_pop_payload_fragment = lifo_data_225;
      end
      9'b011100010 : begin
        _zz_pop_payload_fragment = lifo_data_226;
      end
      9'b011100011 : begin
        _zz_pop_payload_fragment = lifo_data_227;
      end
      9'b011100100 : begin
        _zz_pop_payload_fragment = lifo_data_228;
      end
      9'b011100101 : begin
        _zz_pop_payload_fragment = lifo_data_229;
      end
      9'b011100110 : begin
        _zz_pop_payload_fragment = lifo_data_230;
      end
      9'b011100111 : begin
        _zz_pop_payload_fragment = lifo_data_231;
      end
      9'b011101000 : begin
        _zz_pop_payload_fragment = lifo_data_232;
      end
      9'b011101001 : begin
        _zz_pop_payload_fragment = lifo_data_233;
      end
      9'b011101010 : begin
        _zz_pop_payload_fragment = lifo_data_234;
      end
      9'b011101011 : begin
        _zz_pop_payload_fragment = lifo_data_235;
      end
      9'b011101100 : begin
        _zz_pop_payload_fragment = lifo_data_236;
      end
      9'b011101101 : begin
        _zz_pop_payload_fragment = lifo_data_237;
      end
      9'b011101110 : begin
        _zz_pop_payload_fragment = lifo_data_238;
      end
      9'b011101111 : begin
        _zz_pop_payload_fragment = lifo_data_239;
      end
      9'b011110000 : begin
        _zz_pop_payload_fragment = lifo_data_240;
      end
      9'b011110001 : begin
        _zz_pop_payload_fragment = lifo_data_241;
      end
      9'b011110010 : begin
        _zz_pop_payload_fragment = lifo_data_242;
      end
      9'b011110011 : begin
        _zz_pop_payload_fragment = lifo_data_243;
      end
      9'b011110100 : begin
        _zz_pop_payload_fragment = lifo_data_244;
      end
      9'b011110101 : begin
        _zz_pop_payload_fragment = lifo_data_245;
      end
      9'b011110110 : begin
        _zz_pop_payload_fragment = lifo_data_246;
      end
      9'b011110111 : begin
        _zz_pop_payload_fragment = lifo_data_247;
      end
      9'b011111000 : begin
        _zz_pop_payload_fragment = lifo_data_248;
      end
      9'b011111001 : begin
        _zz_pop_payload_fragment = lifo_data_249;
      end
      9'b011111010 : begin
        _zz_pop_payload_fragment = lifo_data_250;
      end
      9'b011111011 : begin
        _zz_pop_payload_fragment = lifo_data_251;
      end
      9'b011111100 : begin
        _zz_pop_payload_fragment = lifo_data_252;
      end
      9'b011111101 : begin
        _zz_pop_payload_fragment = lifo_data_253;
      end
      9'b011111110 : begin
        _zz_pop_payload_fragment = lifo_data_254;
      end
      9'b011111111 : begin
        _zz_pop_payload_fragment = lifo_data_255;
      end
      9'b100000000 : begin
        _zz_pop_payload_fragment = lifo_data_256;
      end
      9'b100000001 : begin
        _zz_pop_payload_fragment = lifo_data_257;
      end
      9'b100000010 : begin
        _zz_pop_payload_fragment = lifo_data_258;
      end
      9'b100000011 : begin
        _zz_pop_payload_fragment = lifo_data_259;
      end
      9'b100000100 : begin
        _zz_pop_payload_fragment = lifo_data_260;
      end
      9'b100000101 : begin
        _zz_pop_payload_fragment = lifo_data_261;
      end
      9'b100000110 : begin
        _zz_pop_payload_fragment = lifo_data_262;
      end
      9'b100000111 : begin
        _zz_pop_payload_fragment = lifo_data_263;
      end
      9'b100001000 : begin
        _zz_pop_payload_fragment = lifo_data_264;
      end
      9'b100001001 : begin
        _zz_pop_payload_fragment = lifo_data_265;
      end
      9'b100001010 : begin
        _zz_pop_payload_fragment = lifo_data_266;
      end
      default : begin
        _zz_pop_payload_fragment = lifo_data_267;
      end
    endcase
  end

  assign push_fire = (push_valid && push_ready);
  assign when_SISOLifo_l25 = (push_fire && (! full));
  assign _zz_1 = ({511'd0,1'b1} <<< lifo_head_cursor);
  assign _zz_2 = ({511'd0,1'b1} <<< lifo_head_cursor);
  assign pop_fire = (pop_valid && pop_ready);
  assign when_SISOLifo_l32 = (pop_fire && (! empty));
  assign push_ready = (push_method && (! full));
  assign pop_valid = (! (push_method || empty));
  assign pop_payload_fragment = (push_method ? 1'b0 : _zz_pop_payload_fragment);
  assign pop_payload_last = (lifo_last && (lifo_head_cursor == 9'h001));
  assign full = (lifo_head_cursor == 9'h10b);
  assign empty = (lifo_head_cursor == 9'h0);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      lifo_head_cursor <= 9'h0;
    end else begin
      if(push_method) begin
        if(when_SISOLifo_l25) begin
          lifo_head_cursor <= (lifo_head_cursor + 9'h001);
        end
      end else begin
        if(when_SISOLifo_l32) begin
          lifo_head_cursor <= (lifo_head_cursor - 9'h001);
        end
      end
    end
  end

  always @(posedge clk) begin
    if(push_method) begin
      if(when_SISOLifo_l25) begin
        if(_zz_1[0]) begin
          lifo_data_0 <= push_payload_fragment;
        end
        if(_zz_1[1]) begin
          lifo_data_1 <= push_payload_fragment;
        end
        if(_zz_1[2]) begin
          lifo_data_2 <= push_payload_fragment;
        end
        if(_zz_1[3]) begin
          lifo_data_3 <= push_payload_fragment;
        end
        if(_zz_1[4]) begin
          lifo_data_4 <= push_payload_fragment;
        end
        if(_zz_1[5]) begin
          lifo_data_5 <= push_payload_fragment;
        end
        if(_zz_1[6]) begin
          lifo_data_6 <= push_payload_fragment;
        end
        if(_zz_1[7]) begin
          lifo_data_7 <= push_payload_fragment;
        end
        if(_zz_1[8]) begin
          lifo_data_8 <= push_payload_fragment;
        end
        if(_zz_1[9]) begin
          lifo_data_9 <= push_payload_fragment;
        end
        if(_zz_1[10]) begin
          lifo_data_10 <= push_payload_fragment;
        end
        if(_zz_1[11]) begin
          lifo_data_11 <= push_payload_fragment;
        end
        if(_zz_1[12]) begin
          lifo_data_12 <= push_payload_fragment;
        end
        if(_zz_1[13]) begin
          lifo_data_13 <= push_payload_fragment;
        end
        if(_zz_1[14]) begin
          lifo_data_14 <= push_payload_fragment;
        end
        if(_zz_1[15]) begin
          lifo_data_15 <= push_payload_fragment;
        end
        if(_zz_1[16]) begin
          lifo_data_16 <= push_payload_fragment;
        end
        if(_zz_1[17]) begin
          lifo_data_17 <= push_payload_fragment;
        end
        if(_zz_1[18]) begin
          lifo_data_18 <= push_payload_fragment;
        end
        if(_zz_1[19]) begin
          lifo_data_19 <= push_payload_fragment;
        end
        if(_zz_1[20]) begin
          lifo_data_20 <= push_payload_fragment;
        end
        if(_zz_1[21]) begin
          lifo_data_21 <= push_payload_fragment;
        end
        if(_zz_1[22]) begin
          lifo_data_22 <= push_payload_fragment;
        end
        if(_zz_1[23]) begin
          lifo_data_23 <= push_payload_fragment;
        end
        if(_zz_1[24]) begin
          lifo_data_24 <= push_payload_fragment;
        end
        if(_zz_1[25]) begin
          lifo_data_25 <= push_payload_fragment;
        end
        if(_zz_1[26]) begin
          lifo_data_26 <= push_payload_fragment;
        end
        if(_zz_1[27]) begin
          lifo_data_27 <= push_payload_fragment;
        end
        if(_zz_1[28]) begin
          lifo_data_28 <= push_payload_fragment;
        end
        if(_zz_1[29]) begin
          lifo_data_29 <= push_payload_fragment;
        end
        if(_zz_1[30]) begin
          lifo_data_30 <= push_payload_fragment;
        end
        if(_zz_1[31]) begin
          lifo_data_31 <= push_payload_fragment;
        end
        if(_zz_1[32]) begin
          lifo_data_32 <= push_payload_fragment;
        end
        if(_zz_1[33]) begin
          lifo_data_33 <= push_payload_fragment;
        end
        if(_zz_1[34]) begin
          lifo_data_34 <= push_payload_fragment;
        end
        if(_zz_1[35]) begin
          lifo_data_35 <= push_payload_fragment;
        end
        if(_zz_1[36]) begin
          lifo_data_36 <= push_payload_fragment;
        end
        if(_zz_1[37]) begin
          lifo_data_37 <= push_payload_fragment;
        end
        if(_zz_1[38]) begin
          lifo_data_38 <= push_payload_fragment;
        end
        if(_zz_1[39]) begin
          lifo_data_39 <= push_payload_fragment;
        end
        if(_zz_1[40]) begin
          lifo_data_40 <= push_payload_fragment;
        end
        if(_zz_1[41]) begin
          lifo_data_41 <= push_payload_fragment;
        end
        if(_zz_1[42]) begin
          lifo_data_42 <= push_payload_fragment;
        end
        if(_zz_1[43]) begin
          lifo_data_43 <= push_payload_fragment;
        end
        if(_zz_1[44]) begin
          lifo_data_44 <= push_payload_fragment;
        end
        if(_zz_1[45]) begin
          lifo_data_45 <= push_payload_fragment;
        end
        if(_zz_1[46]) begin
          lifo_data_46 <= push_payload_fragment;
        end
        if(_zz_1[47]) begin
          lifo_data_47 <= push_payload_fragment;
        end
        if(_zz_1[48]) begin
          lifo_data_48 <= push_payload_fragment;
        end
        if(_zz_1[49]) begin
          lifo_data_49 <= push_payload_fragment;
        end
        if(_zz_1[50]) begin
          lifo_data_50 <= push_payload_fragment;
        end
        if(_zz_1[51]) begin
          lifo_data_51 <= push_payload_fragment;
        end
        if(_zz_1[52]) begin
          lifo_data_52 <= push_payload_fragment;
        end
        if(_zz_1[53]) begin
          lifo_data_53 <= push_payload_fragment;
        end
        if(_zz_1[54]) begin
          lifo_data_54 <= push_payload_fragment;
        end
        if(_zz_1[55]) begin
          lifo_data_55 <= push_payload_fragment;
        end
        if(_zz_1[56]) begin
          lifo_data_56 <= push_payload_fragment;
        end
        if(_zz_1[57]) begin
          lifo_data_57 <= push_payload_fragment;
        end
        if(_zz_1[58]) begin
          lifo_data_58 <= push_payload_fragment;
        end
        if(_zz_1[59]) begin
          lifo_data_59 <= push_payload_fragment;
        end
        if(_zz_1[60]) begin
          lifo_data_60 <= push_payload_fragment;
        end
        if(_zz_1[61]) begin
          lifo_data_61 <= push_payload_fragment;
        end
        if(_zz_1[62]) begin
          lifo_data_62 <= push_payload_fragment;
        end
        if(_zz_1[63]) begin
          lifo_data_63 <= push_payload_fragment;
        end
        if(_zz_1[64]) begin
          lifo_data_64 <= push_payload_fragment;
        end
        if(_zz_1[65]) begin
          lifo_data_65 <= push_payload_fragment;
        end
        if(_zz_1[66]) begin
          lifo_data_66 <= push_payload_fragment;
        end
        if(_zz_1[67]) begin
          lifo_data_67 <= push_payload_fragment;
        end
        if(_zz_1[68]) begin
          lifo_data_68 <= push_payload_fragment;
        end
        if(_zz_1[69]) begin
          lifo_data_69 <= push_payload_fragment;
        end
        if(_zz_1[70]) begin
          lifo_data_70 <= push_payload_fragment;
        end
        if(_zz_1[71]) begin
          lifo_data_71 <= push_payload_fragment;
        end
        if(_zz_1[72]) begin
          lifo_data_72 <= push_payload_fragment;
        end
        if(_zz_1[73]) begin
          lifo_data_73 <= push_payload_fragment;
        end
        if(_zz_1[74]) begin
          lifo_data_74 <= push_payload_fragment;
        end
        if(_zz_1[75]) begin
          lifo_data_75 <= push_payload_fragment;
        end
        if(_zz_1[76]) begin
          lifo_data_76 <= push_payload_fragment;
        end
        if(_zz_1[77]) begin
          lifo_data_77 <= push_payload_fragment;
        end
        if(_zz_1[78]) begin
          lifo_data_78 <= push_payload_fragment;
        end
        if(_zz_1[79]) begin
          lifo_data_79 <= push_payload_fragment;
        end
        if(_zz_1[80]) begin
          lifo_data_80 <= push_payload_fragment;
        end
        if(_zz_1[81]) begin
          lifo_data_81 <= push_payload_fragment;
        end
        if(_zz_1[82]) begin
          lifo_data_82 <= push_payload_fragment;
        end
        if(_zz_1[83]) begin
          lifo_data_83 <= push_payload_fragment;
        end
        if(_zz_1[84]) begin
          lifo_data_84 <= push_payload_fragment;
        end
        if(_zz_1[85]) begin
          lifo_data_85 <= push_payload_fragment;
        end
        if(_zz_1[86]) begin
          lifo_data_86 <= push_payload_fragment;
        end
        if(_zz_1[87]) begin
          lifo_data_87 <= push_payload_fragment;
        end
        if(_zz_1[88]) begin
          lifo_data_88 <= push_payload_fragment;
        end
        if(_zz_1[89]) begin
          lifo_data_89 <= push_payload_fragment;
        end
        if(_zz_1[90]) begin
          lifo_data_90 <= push_payload_fragment;
        end
        if(_zz_1[91]) begin
          lifo_data_91 <= push_payload_fragment;
        end
        if(_zz_1[92]) begin
          lifo_data_92 <= push_payload_fragment;
        end
        if(_zz_1[93]) begin
          lifo_data_93 <= push_payload_fragment;
        end
        if(_zz_1[94]) begin
          lifo_data_94 <= push_payload_fragment;
        end
        if(_zz_1[95]) begin
          lifo_data_95 <= push_payload_fragment;
        end
        if(_zz_1[96]) begin
          lifo_data_96 <= push_payload_fragment;
        end
        if(_zz_1[97]) begin
          lifo_data_97 <= push_payload_fragment;
        end
        if(_zz_1[98]) begin
          lifo_data_98 <= push_payload_fragment;
        end
        if(_zz_1[99]) begin
          lifo_data_99 <= push_payload_fragment;
        end
        if(_zz_1[100]) begin
          lifo_data_100 <= push_payload_fragment;
        end
        if(_zz_1[101]) begin
          lifo_data_101 <= push_payload_fragment;
        end
        if(_zz_1[102]) begin
          lifo_data_102 <= push_payload_fragment;
        end
        if(_zz_1[103]) begin
          lifo_data_103 <= push_payload_fragment;
        end
        if(_zz_1[104]) begin
          lifo_data_104 <= push_payload_fragment;
        end
        if(_zz_1[105]) begin
          lifo_data_105 <= push_payload_fragment;
        end
        if(_zz_1[106]) begin
          lifo_data_106 <= push_payload_fragment;
        end
        if(_zz_1[107]) begin
          lifo_data_107 <= push_payload_fragment;
        end
        if(_zz_1[108]) begin
          lifo_data_108 <= push_payload_fragment;
        end
        if(_zz_1[109]) begin
          lifo_data_109 <= push_payload_fragment;
        end
        if(_zz_1[110]) begin
          lifo_data_110 <= push_payload_fragment;
        end
        if(_zz_1[111]) begin
          lifo_data_111 <= push_payload_fragment;
        end
        if(_zz_1[112]) begin
          lifo_data_112 <= push_payload_fragment;
        end
        if(_zz_1[113]) begin
          lifo_data_113 <= push_payload_fragment;
        end
        if(_zz_1[114]) begin
          lifo_data_114 <= push_payload_fragment;
        end
        if(_zz_1[115]) begin
          lifo_data_115 <= push_payload_fragment;
        end
        if(_zz_1[116]) begin
          lifo_data_116 <= push_payload_fragment;
        end
        if(_zz_1[117]) begin
          lifo_data_117 <= push_payload_fragment;
        end
        if(_zz_1[118]) begin
          lifo_data_118 <= push_payload_fragment;
        end
        if(_zz_1[119]) begin
          lifo_data_119 <= push_payload_fragment;
        end
        if(_zz_1[120]) begin
          lifo_data_120 <= push_payload_fragment;
        end
        if(_zz_1[121]) begin
          lifo_data_121 <= push_payload_fragment;
        end
        if(_zz_1[122]) begin
          lifo_data_122 <= push_payload_fragment;
        end
        if(_zz_1[123]) begin
          lifo_data_123 <= push_payload_fragment;
        end
        if(_zz_1[124]) begin
          lifo_data_124 <= push_payload_fragment;
        end
        if(_zz_1[125]) begin
          lifo_data_125 <= push_payload_fragment;
        end
        if(_zz_1[126]) begin
          lifo_data_126 <= push_payload_fragment;
        end
        if(_zz_1[127]) begin
          lifo_data_127 <= push_payload_fragment;
        end
        if(_zz_1[128]) begin
          lifo_data_128 <= push_payload_fragment;
        end
        if(_zz_1[129]) begin
          lifo_data_129 <= push_payload_fragment;
        end
        if(_zz_1[130]) begin
          lifo_data_130 <= push_payload_fragment;
        end
        if(_zz_1[131]) begin
          lifo_data_131 <= push_payload_fragment;
        end
        if(_zz_1[132]) begin
          lifo_data_132 <= push_payload_fragment;
        end
        if(_zz_1[133]) begin
          lifo_data_133 <= push_payload_fragment;
        end
        if(_zz_1[134]) begin
          lifo_data_134 <= push_payload_fragment;
        end
        if(_zz_1[135]) begin
          lifo_data_135 <= push_payload_fragment;
        end
        if(_zz_1[136]) begin
          lifo_data_136 <= push_payload_fragment;
        end
        if(_zz_1[137]) begin
          lifo_data_137 <= push_payload_fragment;
        end
        if(_zz_1[138]) begin
          lifo_data_138 <= push_payload_fragment;
        end
        if(_zz_1[139]) begin
          lifo_data_139 <= push_payload_fragment;
        end
        if(_zz_1[140]) begin
          lifo_data_140 <= push_payload_fragment;
        end
        if(_zz_1[141]) begin
          lifo_data_141 <= push_payload_fragment;
        end
        if(_zz_1[142]) begin
          lifo_data_142 <= push_payload_fragment;
        end
        if(_zz_1[143]) begin
          lifo_data_143 <= push_payload_fragment;
        end
        if(_zz_1[144]) begin
          lifo_data_144 <= push_payload_fragment;
        end
        if(_zz_1[145]) begin
          lifo_data_145 <= push_payload_fragment;
        end
        if(_zz_1[146]) begin
          lifo_data_146 <= push_payload_fragment;
        end
        if(_zz_1[147]) begin
          lifo_data_147 <= push_payload_fragment;
        end
        if(_zz_1[148]) begin
          lifo_data_148 <= push_payload_fragment;
        end
        if(_zz_1[149]) begin
          lifo_data_149 <= push_payload_fragment;
        end
        if(_zz_1[150]) begin
          lifo_data_150 <= push_payload_fragment;
        end
        if(_zz_1[151]) begin
          lifo_data_151 <= push_payload_fragment;
        end
        if(_zz_1[152]) begin
          lifo_data_152 <= push_payload_fragment;
        end
        if(_zz_1[153]) begin
          lifo_data_153 <= push_payload_fragment;
        end
        if(_zz_1[154]) begin
          lifo_data_154 <= push_payload_fragment;
        end
        if(_zz_1[155]) begin
          lifo_data_155 <= push_payload_fragment;
        end
        if(_zz_1[156]) begin
          lifo_data_156 <= push_payload_fragment;
        end
        if(_zz_1[157]) begin
          lifo_data_157 <= push_payload_fragment;
        end
        if(_zz_1[158]) begin
          lifo_data_158 <= push_payload_fragment;
        end
        if(_zz_1[159]) begin
          lifo_data_159 <= push_payload_fragment;
        end
        if(_zz_1[160]) begin
          lifo_data_160 <= push_payload_fragment;
        end
        if(_zz_1[161]) begin
          lifo_data_161 <= push_payload_fragment;
        end
        if(_zz_1[162]) begin
          lifo_data_162 <= push_payload_fragment;
        end
        if(_zz_1[163]) begin
          lifo_data_163 <= push_payload_fragment;
        end
        if(_zz_1[164]) begin
          lifo_data_164 <= push_payload_fragment;
        end
        if(_zz_1[165]) begin
          lifo_data_165 <= push_payload_fragment;
        end
        if(_zz_1[166]) begin
          lifo_data_166 <= push_payload_fragment;
        end
        if(_zz_1[167]) begin
          lifo_data_167 <= push_payload_fragment;
        end
        if(_zz_1[168]) begin
          lifo_data_168 <= push_payload_fragment;
        end
        if(_zz_1[169]) begin
          lifo_data_169 <= push_payload_fragment;
        end
        if(_zz_1[170]) begin
          lifo_data_170 <= push_payload_fragment;
        end
        if(_zz_1[171]) begin
          lifo_data_171 <= push_payload_fragment;
        end
        if(_zz_1[172]) begin
          lifo_data_172 <= push_payload_fragment;
        end
        if(_zz_1[173]) begin
          lifo_data_173 <= push_payload_fragment;
        end
        if(_zz_1[174]) begin
          lifo_data_174 <= push_payload_fragment;
        end
        if(_zz_1[175]) begin
          lifo_data_175 <= push_payload_fragment;
        end
        if(_zz_1[176]) begin
          lifo_data_176 <= push_payload_fragment;
        end
        if(_zz_1[177]) begin
          lifo_data_177 <= push_payload_fragment;
        end
        if(_zz_1[178]) begin
          lifo_data_178 <= push_payload_fragment;
        end
        if(_zz_1[179]) begin
          lifo_data_179 <= push_payload_fragment;
        end
        if(_zz_1[180]) begin
          lifo_data_180 <= push_payload_fragment;
        end
        if(_zz_1[181]) begin
          lifo_data_181 <= push_payload_fragment;
        end
        if(_zz_1[182]) begin
          lifo_data_182 <= push_payload_fragment;
        end
        if(_zz_1[183]) begin
          lifo_data_183 <= push_payload_fragment;
        end
        if(_zz_1[184]) begin
          lifo_data_184 <= push_payload_fragment;
        end
        if(_zz_1[185]) begin
          lifo_data_185 <= push_payload_fragment;
        end
        if(_zz_1[186]) begin
          lifo_data_186 <= push_payload_fragment;
        end
        if(_zz_1[187]) begin
          lifo_data_187 <= push_payload_fragment;
        end
        if(_zz_1[188]) begin
          lifo_data_188 <= push_payload_fragment;
        end
        if(_zz_1[189]) begin
          lifo_data_189 <= push_payload_fragment;
        end
        if(_zz_1[190]) begin
          lifo_data_190 <= push_payload_fragment;
        end
        if(_zz_1[191]) begin
          lifo_data_191 <= push_payload_fragment;
        end
        if(_zz_1[192]) begin
          lifo_data_192 <= push_payload_fragment;
        end
        if(_zz_1[193]) begin
          lifo_data_193 <= push_payload_fragment;
        end
        if(_zz_1[194]) begin
          lifo_data_194 <= push_payload_fragment;
        end
        if(_zz_1[195]) begin
          lifo_data_195 <= push_payload_fragment;
        end
        if(_zz_1[196]) begin
          lifo_data_196 <= push_payload_fragment;
        end
        if(_zz_1[197]) begin
          lifo_data_197 <= push_payload_fragment;
        end
        if(_zz_1[198]) begin
          lifo_data_198 <= push_payload_fragment;
        end
        if(_zz_1[199]) begin
          lifo_data_199 <= push_payload_fragment;
        end
        if(_zz_1[200]) begin
          lifo_data_200 <= push_payload_fragment;
        end
        if(_zz_1[201]) begin
          lifo_data_201 <= push_payload_fragment;
        end
        if(_zz_1[202]) begin
          lifo_data_202 <= push_payload_fragment;
        end
        if(_zz_1[203]) begin
          lifo_data_203 <= push_payload_fragment;
        end
        if(_zz_1[204]) begin
          lifo_data_204 <= push_payload_fragment;
        end
        if(_zz_1[205]) begin
          lifo_data_205 <= push_payload_fragment;
        end
        if(_zz_1[206]) begin
          lifo_data_206 <= push_payload_fragment;
        end
        if(_zz_1[207]) begin
          lifo_data_207 <= push_payload_fragment;
        end
        if(_zz_1[208]) begin
          lifo_data_208 <= push_payload_fragment;
        end
        if(_zz_1[209]) begin
          lifo_data_209 <= push_payload_fragment;
        end
        if(_zz_1[210]) begin
          lifo_data_210 <= push_payload_fragment;
        end
        if(_zz_1[211]) begin
          lifo_data_211 <= push_payload_fragment;
        end
        if(_zz_1[212]) begin
          lifo_data_212 <= push_payload_fragment;
        end
        if(_zz_1[213]) begin
          lifo_data_213 <= push_payload_fragment;
        end
        if(_zz_1[214]) begin
          lifo_data_214 <= push_payload_fragment;
        end
        if(_zz_1[215]) begin
          lifo_data_215 <= push_payload_fragment;
        end
        if(_zz_1[216]) begin
          lifo_data_216 <= push_payload_fragment;
        end
        if(_zz_1[217]) begin
          lifo_data_217 <= push_payload_fragment;
        end
        if(_zz_1[218]) begin
          lifo_data_218 <= push_payload_fragment;
        end
        if(_zz_1[219]) begin
          lifo_data_219 <= push_payload_fragment;
        end
        if(_zz_1[220]) begin
          lifo_data_220 <= push_payload_fragment;
        end
        if(_zz_1[221]) begin
          lifo_data_221 <= push_payload_fragment;
        end
        if(_zz_1[222]) begin
          lifo_data_222 <= push_payload_fragment;
        end
        if(_zz_1[223]) begin
          lifo_data_223 <= push_payload_fragment;
        end
        if(_zz_1[224]) begin
          lifo_data_224 <= push_payload_fragment;
        end
        if(_zz_1[225]) begin
          lifo_data_225 <= push_payload_fragment;
        end
        if(_zz_1[226]) begin
          lifo_data_226 <= push_payload_fragment;
        end
        if(_zz_1[227]) begin
          lifo_data_227 <= push_payload_fragment;
        end
        if(_zz_1[228]) begin
          lifo_data_228 <= push_payload_fragment;
        end
        if(_zz_1[229]) begin
          lifo_data_229 <= push_payload_fragment;
        end
        if(_zz_1[230]) begin
          lifo_data_230 <= push_payload_fragment;
        end
        if(_zz_1[231]) begin
          lifo_data_231 <= push_payload_fragment;
        end
        if(_zz_1[232]) begin
          lifo_data_232 <= push_payload_fragment;
        end
        if(_zz_1[233]) begin
          lifo_data_233 <= push_payload_fragment;
        end
        if(_zz_1[234]) begin
          lifo_data_234 <= push_payload_fragment;
        end
        if(_zz_1[235]) begin
          lifo_data_235 <= push_payload_fragment;
        end
        if(_zz_1[236]) begin
          lifo_data_236 <= push_payload_fragment;
        end
        if(_zz_1[237]) begin
          lifo_data_237 <= push_payload_fragment;
        end
        if(_zz_1[238]) begin
          lifo_data_238 <= push_payload_fragment;
        end
        if(_zz_1[239]) begin
          lifo_data_239 <= push_payload_fragment;
        end
        if(_zz_1[240]) begin
          lifo_data_240 <= push_payload_fragment;
        end
        if(_zz_1[241]) begin
          lifo_data_241 <= push_payload_fragment;
        end
        if(_zz_1[242]) begin
          lifo_data_242 <= push_payload_fragment;
        end
        if(_zz_1[243]) begin
          lifo_data_243 <= push_payload_fragment;
        end
        if(_zz_1[244]) begin
          lifo_data_244 <= push_payload_fragment;
        end
        if(_zz_1[245]) begin
          lifo_data_245 <= push_payload_fragment;
        end
        if(_zz_1[246]) begin
          lifo_data_246 <= push_payload_fragment;
        end
        if(_zz_1[247]) begin
          lifo_data_247 <= push_payload_fragment;
        end
        if(_zz_1[248]) begin
          lifo_data_248 <= push_payload_fragment;
        end
        if(_zz_1[249]) begin
          lifo_data_249 <= push_payload_fragment;
        end
        if(_zz_1[250]) begin
          lifo_data_250 <= push_payload_fragment;
        end
        if(_zz_1[251]) begin
          lifo_data_251 <= push_payload_fragment;
        end
        if(_zz_1[252]) begin
          lifo_data_252 <= push_payload_fragment;
        end
        if(_zz_1[253]) begin
          lifo_data_253 <= push_payload_fragment;
        end
        if(_zz_1[254]) begin
          lifo_data_254 <= push_payload_fragment;
        end
        if(_zz_1[255]) begin
          lifo_data_255 <= push_payload_fragment;
        end
        if(_zz_1[256]) begin
          lifo_data_256 <= push_payload_fragment;
        end
        if(_zz_1[257]) begin
          lifo_data_257 <= push_payload_fragment;
        end
        if(_zz_1[258]) begin
          lifo_data_258 <= push_payload_fragment;
        end
        if(_zz_1[259]) begin
          lifo_data_259 <= push_payload_fragment;
        end
        if(_zz_1[260]) begin
          lifo_data_260 <= push_payload_fragment;
        end
        if(_zz_1[261]) begin
          lifo_data_261 <= push_payload_fragment;
        end
        if(_zz_1[262]) begin
          lifo_data_262 <= push_payload_fragment;
        end
        if(_zz_1[263]) begin
          lifo_data_263 <= push_payload_fragment;
        end
        if(_zz_1[264]) begin
          lifo_data_264 <= push_payload_fragment;
        end
        if(_zz_1[265]) begin
          lifo_data_265 <= push_payload_fragment;
        end
        if(_zz_1[266]) begin
          lifo_data_266 <= push_payload_fragment;
        end
        if(_zz_1[267]) begin
          lifo_data_267 <= push_payload_fragment;
        end
        if(_zz_2[0]) begin
          lifo_data_last_0 <= push_payload_last;
        end
        if(_zz_2[1]) begin
          lifo_data_last_1 <= push_payload_last;
        end
        if(_zz_2[2]) begin
          lifo_data_last_2 <= push_payload_last;
        end
        if(_zz_2[3]) begin
          lifo_data_last_3 <= push_payload_last;
        end
        if(_zz_2[4]) begin
          lifo_data_last_4 <= push_payload_last;
        end
        if(_zz_2[5]) begin
          lifo_data_last_5 <= push_payload_last;
        end
        if(_zz_2[6]) begin
          lifo_data_last_6 <= push_payload_last;
        end
        if(_zz_2[7]) begin
          lifo_data_last_7 <= push_payload_last;
        end
        if(_zz_2[8]) begin
          lifo_data_last_8 <= push_payload_last;
        end
        if(_zz_2[9]) begin
          lifo_data_last_9 <= push_payload_last;
        end
        if(_zz_2[10]) begin
          lifo_data_last_10 <= push_payload_last;
        end
        if(_zz_2[11]) begin
          lifo_data_last_11 <= push_payload_last;
        end
        if(_zz_2[12]) begin
          lifo_data_last_12 <= push_payload_last;
        end
        if(_zz_2[13]) begin
          lifo_data_last_13 <= push_payload_last;
        end
        if(_zz_2[14]) begin
          lifo_data_last_14 <= push_payload_last;
        end
        if(_zz_2[15]) begin
          lifo_data_last_15 <= push_payload_last;
        end
        if(_zz_2[16]) begin
          lifo_data_last_16 <= push_payload_last;
        end
        if(_zz_2[17]) begin
          lifo_data_last_17 <= push_payload_last;
        end
        if(_zz_2[18]) begin
          lifo_data_last_18 <= push_payload_last;
        end
        if(_zz_2[19]) begin
          lifo_data_last_19 <= push_payload_last;
        end
        if(_zz_2[20]) begin
          lifo_data_last_20 <= push_payload_last;
        end
        if(_zz_2[21]) begin
          lifo_data_last_21 <= push_payload_last;
        end
        if(_zz_2[22]) begin
          lifo_data_last_22 <= push_payload_last;
        end
        if(_zz_2[23]) begin
          lifo_data_last_23 <= push_payload_last;
        end
        if(_zz_2[24]) begin
          lifo_data_last_24 <= push_payload_last;
        end
        if(_zz_2[25]) begin
          lifo_data_last_25 <= push_payload_last;
        end
        if(_zz_2[26]) begin
          lifo_data_last_26 <= push_payload_last;
        end
        if(_zz_2[27]) begin
          lifo_data_last_27 <= push_payload_last;
        end
        if(_zz_2[28]) begin
          lifo_data_last_28 <= push_payload_last;
        end
        if(_zz_2[29]) begin
          lifo_data_last_29 <= push_payload_last;
        end
        if(_zz_2[30]) begin
          lifo_data_last_30 <= push_payload_last;
        end
        if(_zz_2[31]) begin
          lifo_data_last_31 <= push_payload_last;
        end
        if(_zz_2[32]) begin
          lifo_data_last_32 <= push_payload_last;
        end
        if(_zz_2[33]) begin
          lifo_data_last_33 <= push_payload_last;
        end
        if(_zz_2[34]) begin
          lifo_data_last_34 <= push_payload_last;
        end
        if(_zz_2[35]) begin
          lifo_data_last_35 <= push_payload_last;
        end
        if(_zz_2[36]) begin
          lifo_data_last_36 <= push_payload_last;
        end
        if(_zz_2[37]) begin
          lifo_data_last_37 <= push_payload_last;
        end
        if(_zz_2[38]) begin
          lifo_data_last_38 <= push_payload_last;
        end
        if(_zz_2[39]) begin
          lifo_data_last_39 <= push_payload_last;
        end
        if(_zz_2[40]) begin
          lifo_data_last_40 <= push_payload_last;
        end
        if(_zz_2[41]) begin
          lifo_data_last_41 <= push_payload_last;
        end
        if(_zz_2[42]) begin
          lifo_data_last_42 <= push_payload_last;
        end
        if(_zz_2[43]) begin
          lifo_data_last_43 <= push_payload_last;
        end
        if(_zz_2[44]) begin
          lifo_data_last_44 <= push_payload_last;
        end
        if(_zz_2[45]) begin
          lifo_data_last_45 <= push_payload_last;
        end
        if(_zz_2[46]) begin
          lifo_data_last_46 <= push_payload_last;
        end
        if(_zz_2[47]) begin
          lifo_data_last_47 <= push_payload_last;
        end
        if(_zz_2[48]) begin
          lifo_data_last_48 <= push_payload_last;
        end
        if(_zz_2[49]) begin
          lifo_data_last_49 <= push_payload_last;
        end
        if(_zz_2[50]) begin
          lifo_data_last_50 <= push_payload_last;
        end
        if(_zz_2[51]) begin
          lifo_data_last_51 <= push_payload_last;
        end
        if(_zz_2[52]) begin
          lifo_data_last_52 <= push_payload_last;
        end
        if(_zz_2[53]) begin
          lifo_data_last_53 <= push_payload_last;
        end
        if(_zz_2[54]) begin
          lifo_data_last_54 <= push_payload_last;
        end
        if(_zz_2[55]) begin
          lifo_data_last_55 <= push_payload_last;
        end
        if(_zz_2[56]) begin
          lifo_data_last_56 <= push_payload_last;
        end
        if(_zz_2[57]) begin
          lifo_data_last_57 <= push_payload_last;
        end
        if(_zz_2[58]) begin
          lifo_data_last_58 <= push_payload_last;
        end
        if(_zz_2[59]) begin
          lifo_data_last_59 <= push_payload_last;
        end
        if(_zz_2[60]) begin
          lifo_data_last_60 <= push_payload_last;
        end
        if(_zz_2[61]) begin
          lifo_data_last_61 <= push_payload_last;
        end
        if(_zz_2[62]) begin
          lifo_data_last_62 <= push_payload_last;
        end
        if(_zz_2[63]) begin
          lifo_data_last_63 <= push_payload_last;
        end
        if(_zz_2[64]) begin
          lifo_data_last_64 <= push_payload_last;
        end
        if(_zz_2[65]) begin
          lifo_data_last_65 <= push_payload_last;
        end
        if(_zz_2[66]) begin
          lifo_data_last_66 <= push_payload_last;
        end
        if(_zz_2[67]) begin
          lifo_data_last_67 <= push_payload_last;
        end
        if(_zz_2[68]) begin
          lifo_data_last_68 <= push_payload_last;
        end
        if(_zz_2[69]) begin
          lifo_data_last_69 <= push_payload_last;
        end
        if(_zz_2[70]) begin
          lifo_data_last_70 <= push_payload_last;
        end
        if(_zz_2[71]) begin
          lifo_data_last_71 <= push_payload_last;
        end
        if(_zz_2[72]) begin
          lifo_data_last_72 <= push_payload_last;
        end
        if(_zz_2[73]) begin
          lifo_data_last_73 <= push_payload_last;
        end
        if(_zz_2[74]) begin
          lifo_data_last_74 <= push_payload_last;
        end
        if(_zz_2[75]) begin
          lifo_data_last_75 <= push_payload_last;
        end
        if(_zz_2[76]) begin
          lifo_data_last_76 <= push_payload_last;
        end
        if(_zz_2[77]) begin
          lifo_data_last_77 <= push_payload_last;
        end
        if(_zz_2[78]) begin
          lifo_data_last_78 <= push_payload_last;
        end
        if(_zz_2[79]) begin
          lifo_data_last_79 <= push_payload_last;
        end
        if(_zz_2[80]) begin
          lifo_data_last_80 <= push_payload_last;
        end
        if(_zz_2[81]) begin
          lifo_data_last_81 <= push_payload_last;
        end
        if(_zz_2[82]) begin
          lifo_data_last_82 <= push_payload_last;
        end
        if(_zz_2[83]) begin
          lifo_data_last_83 <= push_payload_last;
        end
        if(_zz_2[84]) begin
          lifo_data_last_84 <= push_payload_last;
        end
        if(_zz_2[85]) begin
          lifo_data_last_85 <= push_payload_last;
        end
        if(_zz_2[86]) begin
          lifo_data_last_86 <= push_payload_last;
        end
        if(_zz_2[87]) begin
          lifo_data_last_87 <= push_payload_last;
        end
        if(_zz_2[88]) begin
          lifo_data_last_88 <= push_payload_last;
        end
        if(_zz_2[89]) begin
          lifo_data_last_89 <= push_payload_last;
        end
        if(_zz_2[90]) begin
          lifo_data_last_90 <= push_payload_last;
        end
        if(_zz_2[91]) begin
          lifo_data_last_91 <= push_payload_last;
        end
        if(_zz_2[92]) begin
          lifo_data_last_92 <= push_payload_last;
        end
        if(_zz_2[93]) begin
          lifo_data_last_93 <= push_payload_last;
        end
        if(_zz_2[94]) begin
          lifo_data_last_94 <= push_payload_last;
        end
        if(_zz_2[95]) begin
          lifo_data_last_95 <= push_payload_last;
        end
        if(_zz_2[96]) begin
          lifo_data_last_96 <= push_payload_last;
        end
        if(_zz_2[97]) begin
          lifo_data_last_97 <= push_payload_last;
        end
        if(_zz_2[98]) begin
          lifo_data_last_98 <= push_payload_last;
        end
        if(_zz_2[99]) begin
          lifo_data_last_99 <= push_payload_last;
        end
        if(_zz_2[100]) begin
          lifo_data_last_100 <= push_payload_last;
        end
        if(_zz_2[101]) begin
          lifo_data_last_101 <= push_payload_last;
        end
        if(_zz_2[102]) begin
          lifo_data_last_102 <= push_payload_last;
        end
        if(_zz_2[103]) begin
          lifo_data_last_103 <= push_payload_last;
        end
        if(_zz_2[104]) begin
          lifo_data_last_104 <= push_payload_last;
        end
        if(_zz_2[105]) begin
          lifo_data_last_105 <= push_payload_last;
        end
        if(_zz_2[106]) begin
          lifo_data_last_106 <= push_payload_last;
        end
        if(_zz_2[107]) begin
          lifo_data_last_107 <= push_payload_last;
        end
        if(_zz_2[108]) begin
          lifo_data_last_108 <= push_payload_last;
        end
        if(_zz_2[109]) begin
          lifo_data_last_109 <= push_payload_last;
        end
        if(_zz_2[110]) begin
          lifo_data_last_110 <= push_payload_last;
        end
        if(_zz_2[111]) begin
          lifo_data_last_111 <= push_payload_last;
        end
        if(_zz_2[112]) begin
          lifo_data_last_112 <= push_payload_last;
        end
        if(_zz_2[113]) begin
          lifo_data_last_113 <= push_payload_last;
        end
        if(_zz_2[114]) begin
          lifo_data_last_114 <= push_payload_last;
        end
        if(_zz_2[115]) begin
          lifo_data_last_115 <= push_payload_last;
        end
        if(_zz_2[116]) begin
          lifo_data_last_116 <= push_payload_last;
        end
        if(_zz_2[117]) begin
          lifo_data_last_117 <= push_payload_last;
        end
        if(_zz_2[118]) begin
          lifo_data_last_118 <= push_payload_last;
        end
        if(_zz_2[119]) begin
          lifo_data_last_119 <= push_payload_last;
        end
        if(_zz_2[120]) begin
          lifo_data_last_120 <= push_payload_last;
        end
        if(_zz_2[121]) begin
          lifo_data_last_121 <= push_payload_last;
        end
        if(_zz_2[122]) begin
          lifo_data_last_122 <= push_payload_last;
        end
        if(_zz_2[123]) begin
          lifo_data_last_123 <= push_payload_last;
        end
        if(_zz_2[124]) begin
          lifo_data_last_124 <= push_payload_last;
        end
        if(_zz_2[125]) begin
          lifo_data_last_125 <= push_payload_last;
        end
        if(_zz_2[126]) begin
          lifo_data_last_126 <= push_payload_last;
        end
        if(_zz_2[127]) begin
          lifo_data_last_127 <= push_payload_last;
        end
        if(_zz_2[128]) begin
          lifo_data_last_128 <= push_payload_last;
        end
        if(_zz_2[129]) begin
          lifo_data_last_129 <= push_payload_last;
        end
        if(_zz_2[130]) begin
          lifo_data_last_130 <= push_payload_last;
        end
        if(_zz_2[131]) begin
          lifo_data_last_131 <= push_payload_last;
        end
        if(_zz_2[132]) begin
          lifo_data_last_132 <= push_payload_last;
        end
        if(_zz_2[133]) begin
          lifo_data_last_133 <= push_payload_last;
        end
        if(_zz_2[134]) begin
          lifo_data_last_134 <= push_payload_last;
        end
        if(_zz_2[135]) begin
          lifo_data_last_135 <= push_payload_last;
        end
        if(_zz_2[136]) begin
          lifo_data_last_136 <= push_payload_last;
        end
        if(_zz_2[137]) begin
          lifo_data_last_137 <= push_payload_last;
        end
        if(_zz_2[138]) begin
          lifo_data_last_138 <= push_payload_last;
        end
        if(_zz_2[139]) begin
          lifo_data_last_139 <= push_payload_last;
        end
        if(_zz_2[140]) begin
          lifo_data_last_140 <= push_payload_last;
        end
        if(_zz_2[141]) begin
          lifo_data_last_141 <= push_payload_last;
        end
        if(_zz_2[142]) begin
          lifo_data_last_142 <= push_payload_last;
        end
        if(_zz_2[143]) begin
          lifo_data_last_143 <= push_payload_last;
        end
        if(_zz_2[144]) begin
          lifo_data_last_144 <= push_payload_last;
        end
        if(_zz_2[145]) begin
          lifo_data_last_145 <= push_payload_last;
        end
        if(_zz_2[146]) begin
          lifo_data_last_146 <= push_payload_last;
        end
        if(_zz_2[147]) begin
          lifo_data_last_147 <= push_payload_last;
        end
        if(_zz_2[148]) begin
          lifo_data_last_148 <= push_payload_last;
        end
        if(_zz_2[149]) begin
          lifo_data_last_149 <= push_payload_last;
        end
        if(_zz_2[150]) begin
          lifo_data_last_150 <= push_payload_last;
        end
        if(_zz_2[151]) begin
          lifo_data_last_151 <= push_payload_last;
        end
        if(_zz_2[152]) begin
          lifo_data_last_152 <= push_payload_last;
        end
        if(_zz_2[153]) begin
          lifo_data_last_153 <= push_payload_last;
        end
        if(_zz_2[154]) begin
          lifo_data_last_154 <= push_payload_last;
        end
        if(_zz_2[155]) begin
          lifo_data_last_155 <= push_payload_last;
        end
        if(_zz_2[156]) begin
          lifo_data_last_156 <= push_payload_last;
        end
        if(_zz_2[157]) begin
          lifo_data_last_157 <= push_payload_last;
        end
        if(_zz_2[158]) begin
          lifo_data_last_158 <= push_payload_last;
        end
        if(_zz_2[159]) begin
          lifo_data_last_159 <= push_payload_last;
        end
        if(_zz_2[160]) begin
          lifo_data_last_160 <= push_payload_last;
        end
        if(_zz_2[161]) begin
          lifo_data_last_161 <= push_payload_last;
        end
        if(_zz_2[162]) begin
          lifo_data_last_162 <= push_payload_last;
        end
        if(_zz_2[163]) begin
          lifo_data_last_163 <= push_payload_last;
        end
        if(_zz_2[164]) begin
          lifo_data_last_164 <= push_payload_last;
        end
        if(_zz_2[165]) begin
          lifo_data_last_165 <= push_payload_last;
        end
        if(_zz_2[166]) begin
          lifo_data_last_166 <= push_payload_last;
        end
        if(_zz_2[167]) begin
          lifo_data_last_167 <= push_payload_last;
        end
        if(_zz_2[168]) begin
          lifo_data_last_168 <= push_payload_last;
        end
        if(_zz_2[169]) begin
          lifo_data_last_169 <= push_payload_last;
        end
        if(_zz_2[170]) begin
          lifo_data_last_170 <= push_payload_last;
        end
        if(_zz_2[171]) begin
          lifo_data_last_171 <= push_payload_last;
        end
        if(_zz_2[172]) begin
          lifo_data_last_172 <= push_payload_last;
        end
        if(_zz_2[173]) begin
          lifo_data_last_173 <= push_payload_last;
        end
        if(_zz_2[174]) begin
          lifo_data_last_174 <= push_payload_last;
        end
        if(_zz_2[175]) begin
          lifo_data_last_175 <= push_payload_last;
        end
        if(_zz_2[176]) begin
          lifo_data_last_176 <= push_payload_last;
        end
        if(_zz_2[177]) begin
          lifo_data_last_177 <= push_payload_last;
        end
        if(_zz_2[178]) begin
          lifo_data_last_178 <= push_payload_last;
        end
        if(_zz_2[179]) begin
          lifo_data_last_179 <= push_payload_last;
        end
        if(_zz_2[180]) begin
          lifo_data_last_180 <= push_payload_last;
        end
        if(_zz_2[181]) begin
          lifo_data_last_181 <= push_payload_last;
        end
        if(_zz_2[182]) begin
          lifo_data_last_182 <= push_payload_last;
        end
        if(_zz_2[183]) begin
          lifo_data_last_183 <= push_payload_last;
        end
        if(_zz_2[184]) begin
          lifo_data_last_184 <= push_payload_last;
        end
        if(_zz_2[185]) begin
          lifo_data_last_185 <= push_payload_last;
        end
        if(_zz_2[186]) begin
          lifo_data_last_186 <= push_payload_last;
        end
        if(_zz_2[187]) begin
          lifo_data_last_187 <= push_payload_last;
        end
        if(_zz_2[188]) begin
          lifo_data_last_188 <= push_payload_last;
        end
        if(_zz_2[189]) begin
          lifo_data_last_189 <= push_payload_last;
        end
        if(_zz_2[190]) begin
          lifo_data_last_190 <= push_payload_last;
        end
        if(_zz_2[191]) begin
          lifo_data_last_191 <= push_payload_last;
        end
        if(_zz_2[192]) begin
          lifo_data_last_192 <= push_payload_last;
        end
        if(_zz_2[193]) begin
          lifo_data_last_193 <= push_payload_last;
        end
        if(_zz_2[194]) begin
          lifo_data_last_194 <= push_payload_last;
        end
        if(_zz_2[195]) begin
          lifo_data_last_195 <= push_payload_last;
        end
        if(_zz_2[196]) begin
          lifo_data_last_196 <= push_payload_last;
        end
        if(_zz_2[197]) begin
          lifo_data_last_197 <= push_payload_last;
        end
        if(_zz_2[198]) begin
          lifo_data_last_198 <= push_payload_last;
        end
        if(_zz_2[199]) begin
          lifo_data_last_199 <= push_payload_last;
        end
        if(_zz_2[200]) begin
          lifo_data_last_200 <= push_payload_last;
        end
        if(_zz_2[201]) begin
          lifo_data_last_201 <= push_payload_last;
        end
        if(_zz_2[202]) begin
          lifo_data_last_202 <= push_payload_last;
        end
        if(_zz_2[203]) begin
          lifo_data_last_203 <= push_payload_last;
        end
        if(_zz_2[204]) begin
          lifo_data_last_204 <= push_payload_last;
        end
        if(_zz_2[205]) begin
          lifo_data_last_205 <= push_payload_last;
        end
        if(_zz_2[206]) begin
          lifo_data_last_206 <= push_payload_last;
        end
        if(_zz_2[207]) begin
          lifo_data_last_207 <= push_payload_last;
        end
        if(_zz_2[208]) begin
          lifo_data_last_208 <= push_payload_last;
        end
        if(_zz_2[209]) begin
          lifo_data_last_209 <= push_payload_last;
        end
        if(_zz_2[210]) begin
          lifo_data_last_210 <= push_payload_last;
        end
        if(_zz_2[211]) begin
          lifo_data_last_211 <= push_payload_last;
        end
        if(_zz_2[212]) begin
          lifo_data_last_212 <= push_payload_last;
        end
        if(_zz_2[213]) begin
          lifo_data_last_213 <= push_payload_last;
        end
        if(_zz_2[214]) begin
          lifo_data_last_214 <= push_payload_last;
        end
        if(_zz_2[215]) begin
          lifo_data_last_215 <= push_payload_last;
        end
        if(_zz_2[216]) begin
          lifo_data_last_216 <= push_payload_last;
        end
        if(_zz_2[217]) begin
          lifo_data_last_217 <= push_payload_last;
        end
        if(_zz_2[218]) begin
          lifo_data_last_218 <= push_payload_last;
        end
        if(_zz_2[219]) begin
          lifo_data_last_219 <= push_payload_last;
        end
        if(_zz_2[220]) begin
          lifo_data_last_220 <= push_payload_last;
        end
        if(_zz_2[221]) begin
          lifo_data_last_221 <= push_payload_last;
        end
        if(_zz_2[222]) begin
          lifo_data_last_222 <= push_payload_last;
        end
        if(_zz_2[223]) begin
          lifo_data_last_223 <= push_payload_last;
        end
        if(_zz_2[224]) begin
          lifo_data_last_224 <= push_payload_last;
        end
        if(_zz_2[225]) begin
          lifo_data_last_225 <= push_payload_last;
        end
        if(_zz_2[226]) begin
          lifo_data_last_226 <= push_payload_last;
        end
        if(_zz_2[227]) begin
          lifo_data_last_227 <= push_payload_last;
        end
        if(_zz_2[228]) begin
          lifo_data_last_228 <= push_payload_last;
        end
        if(_zz_2[229]) begin
          lifo_data_last_229 <= push_payload_last;
        end
        if(_zz_2[230]) begin
          lifo_data_last_230 <= push_payload_last;
        end
        if(_zz_2[231]) begin
          lifo_data_last_231 <= push_payload_last;
        end
        if(_zz_2[232]) begin
          lifo_data_last_232 <= push_payload_last;
        end
        if(_zz_2[233]) begin
          lifo_data_last_233 <= push_payload_last;
        end
        if(_zz_2[234]) begin
          lifo_data_last_234 <= push_payload_last;
        end
        if(_zz_2[235]) begin
          lifo_data_last_235 <= push_payload_last;
        end
        if(_zz_2[236]) begin
          lifo_data_last_236 <= push_payload_last;
        end
        if(_zz_2[237]) begin
          lifo_data_last_237 <= push_payload_last;
        end
        if(_zz_2[238]) begin
          lifo_data_last_238 <= push_payload_last;
        end
        if(_zz_2[239]) begin
          lifo_data_last_239 <= push_payload_last;
        end
        if(_zz_2[240]) begin
          lifo_data_last_240 <= push_payload_last;
        end
        if(_zz_2[241]) begin
          lifo_data_last_241 <= push_payload_last;
        end
        if(_zz_2[242]) begin
          lifo_data_last_242 <= push_payload_last;
        end
        if(_zz_2[243]) begin
          lifo_data_last_243 <= push_payload_last;
        end
        if(_zz_2[244]) begin
          lifo_data_last_244 <= push_payload_last;
        end
        if(_zz_2[245]) begin
          lifo_data_last_245 <= push_payload_last;
        end
        if(_zz_2[246]) begin
          lifo_data_last_246 <= push_payload_last;
        end
        if(_zz_2[247]) begin
          lifo_data_last_247 <= push_payload_last;
        end
        if(_zz_2[248]) begin
          lifo_data_last_248 <= push_payload_last;
        end
        if(_zz_2[249]) begin
          lifo_data_last_249 <= push_payload_last;
        end
        if(_zz_2[250]) begin
          lifo_data_last_250 <= push_payload_last;
        end
        if(_zz_2[251]) begin
          lifo_data_last_251 <= push_payload_last;
        end
        if(_zz_2[252]) begin
          lifo_data_last_252 <= push_payload_last;
        end
        if(_zz_2[253]) begin
          lifo_data_last_253 <= push_payload_last;
        end
        if(_zz_2[254]) begin
          lifo_data_last_254 <= push_payload_last;
        end
        if(_zz_2[255]) begin
          lifo_data_last_255 <= push_payload_last;
        end
        if(_zz_2[256]) begin
          lifo_data_last_256 <= push_payload_last;
        end
        if(_zz_2[257]) begin
          lifo_data_last_257 <= push_payload_last;
        end
        if(_zz_2[258]) begin
          lifo_data_last_258 <= push_payload_last;
        end
        if(_zz_2[259]) begin
          lifo_data_last_259 <= push_payload_last;
        end
        if(_zz_2[260]) begin
          lifo_data_last_260 <= push_payload_last;
        end
        if(_zz_2[261]) begin
          lifo_data_last_261 <= push_payload_last;
        end
        if(_zz_2[262]) begin
          lifo_data_last_262 <= push_payload_last;
        end
        if(_zz_2[263]) begin
          lifo_data_last_263 <= push_payload_last;
        end
        if(_zz_2[264]) begin
          lifo_data_last_264 <= push_payload_last;
        end
        if(_zz_2[265]) begin
          lifo_data_last_265 <= push_payload_last;
        end
        if(_zz_2[266]) begin
          lifo_data_last_266 <= push_payload_last;
        end
        if(_zz_2[267]) begin
          lifo_data_last_267 <= push_payload_last;
        end
      end
      lifo_last <= 1'b0;
    end else begin
      lifo_last <= ((lifo_last == 1'b1) ? 1'b1 : _zz_lifo_last);
    end
  end


endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [1:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [1:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [4:0]    io_occupancy,
  output     [4:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [2:0]    _zz_logic_ram_port0;
  wire       [3:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [3:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [2:0]    _zz_logic_ram_port_1;
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
  wire       [2:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l933;
  wire       [3:0]    logic_ptrDif;
  reg [2:0] logic_ram [0:15];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {3'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {3'd0, _zz_logic_popPtr_valueNext_1};
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
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[2 : 1];
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

module MinVal (
  input      [15:0]   data_0,
  input      [15:0]   data_1,
  input      [15:0]   data_2,
  input      [15:0]   data_3,
  input      [15:0]   data_4,
  input      [15:0]   data_5,
  input      [15:0]   data_6,
  input      [15:0]   data_7,
  input      [15:0]   data_8,
  input      [15:0]   data_9,
  input      [15:0]   data_10,
  input      [15:0]   data_11,
  input      [15:0]   data_12,
  input      [15:0]   data_13,
  input      [15:0]   data_14,
  input      [15:0]   data_15,
  input      [15:0]   data_16,
  input      [15:0]   data_17,
  input      [15:0]   data_18,
  input      [15:0]   data_19,
  input      [15:0]   data_20,
  input      [15:0]   data_21,
  input      [15:0]   data_22,
  input      [15:0]   data_23,
  input      [15:0]   data_24,
  input      [15:0]   data_25,
  input      [15:0]   data_26,
  input      [15:0]   data_27,
  input      [15:0]   data_28,
  input      [15:0]   data_29,
  input      [15:0]   data_30,
  input      [15:0]   data_31,
  input      [15:0]   data_32,
  input      [15:0]   data_33,
  input      [15:0]   data_34,
  input      [15:0]   data_35,
  input      [15:0]   data_36,
  input      [15:0]   data_37,
  input      [15:0]   data_38,
  input      [15:0]   data_39,
  input      [15:0]   data_40,
  input      [15:0]   data_41,
  input      [15:0]   data_42,
  input      [15:0]   data_43,
  input      [15:0]   data_44,
  input      [15:0]   data_45,
  input      [15:0]   data_46,
  input      [15:0]   data_47,
  input      [15:0]   data_48,
  input      [15:0]   data_49,
  input      [15:0]   data_50,
  input      [15:0]   data_51,
  input      [15:0]   data_52,
  input      [15:0]   data_53,
  input      [15:0]   data_54,
  input      [15:0]   data_55,
  input      [15:0]   data_56,
  input      [15:0]   data_57,
  input      [15:0]   data_58,
  input      [15:0]   data_59,
  input      [15:0]   data_60,
  input      [15:0]   data_61,
  input      [15:0]   data_62,
  input      [15:0]   data_63,
  output     [15:0]   min_val,
  output     [5:0]    min_idx,
  input               clk,
  input               reset
);
  reg        [15:0]   _zz_min_val;
  reg        [15:0]   _zz_min_val_1;
  reg        [15:0]   _zz_min_val_2;
  reg        [15:0]   _zz_min_val_3;
  reg        [15:0]   _zz_min_val_4;
  reg        [15:0]   _zz_min_val_5;
  reg        [15:0]   _zz_min_val_6;
  reg        [15:0]   _zz_min_val_7;
  reg        [15:0]   _zz_min_val_8;
  reg        [15:0]   _zz_min_val_9;
  reg        [15:0]   _zz_min_val_10;
  reg        [15:0]   _zz_min_val_11;
  reg        [15:0]   _zz_min_val_12;
  reg        [15:0]   _zz_min_val_13;
  reg        [15:0]   _zz_min_val_14;
  reg        [15:0]   _zz_min_val_15;
  reg        [15:0]   _zz_min_val_16;
  reg        [15:0]   _zz_min_val_17;
  reg        [15:0]   _zz_min_val_18;
  reg        [15:0]   _zz_min_val_19;
  reg        [15:0]   _zz_min_val_20;
  reg        [15:0]   _zz_min_val_21;
  reg        [15:0]   _zz_min_val_22;
  reg        [15:0]   _zz_min_val_23;
  reg        [15:0]   _zz_min_val_24;
  reg        [15:0]   _zz_min_val_25;
  reg        [15:0]   _zz_min_val_26;
  reg        [15:0]   _zz_min_val_27;
  reg        [15:0]   _zz_min_val_28;
  reg        [15:0]   _zz_min_val_29;
  reg        [15:0]   _zz_min_val_30;
  reg        [15:0]   _zz_min_val_31;
  reg        [5:0]    _zz_min_idx;
  reg        [5:0]    _zz_min_idx_1;
  reg        [5:0]    _zz_min_idx_2;
  reg        [5:0]    _zz_min_idx_3;
  reg        [5:0]    _zz_min_idx_4;
  reg        [5:0]    _zz_min_idx_5;
  reg        [5:0]    _zz_min_idx_6;
  reg        [5:0]    _zz_min_idx_7;
  reg        [5:0]    _zz_min_idx_8;
  reg        [5:0]    _zz_min_idx_9;
  reg        [5:0]    _zz_min_idx_10;
  reg        [5:0]    _zz_min_idx_11;
  reg        [5:0]    _zz_min_idx_12;
  reg        [5:0]    _zz_min_idx_13;
  reg        [5:0]    _zz_min_idx_14;
  reg        [5:0]    _zz_min_idx_15;
  reg        [5:0]    _zz_min_idx_16;
  reg        [5:0]    _zz_min_idx_17;
  reg        [5:0]    _zz_min_idx_18;
  reg        [5:0]    _zz_min_idx_19;
  reg        [5:0]    _zz_min_idx_20;
  reg        [5:0]    _zz_min_idx_21;
  reg        [5:0]    _zz_min_idx_22;
  reg        [5:0]    _zz_min_idx_23;
  reg        [5:0]    _zz_min_idx_24;
  reg        [5:0]    _zz_min_idx_25;
  reg        [5:0]    _zz_min_idx_26;
  reg        [5:0]    _zz_min_idx_27;
  reg        [5:0]    _zz_min_idx_28;
  reg        [5:0]    _zz_min_idx_29;
  reg        [5:0]    _zz_min_idx_30;
  reg        [5:0]    _zz_min_idx_31;
  reg        [15:0]   _zz_min_val_32;
  reg        [15:0]   _zz_min_val_33;
  reg        [15:0]   _zz_min_val_34;
  reg        [15:0]   _zz_min_val_35;
  reg        [15:0]   _zz_min_val_36;
  reg        [15:0]   _zz_min_val_37;
  reg        [15:0]   _zz_min_val_38;
  reg        [15:0]   _zz_min_val_39;
  reg        [15:0]   _zz_min_val_40;
  reg        [15:0]   _zz_min_val_41;
  reg        [15:0]   _zz_min_val_42;
  reg        [15:0]   _zz_min_val_43;
  reg        [15:0]   _zz_min_val_44;
  reg        [15:0]   _zz_min_val_45;
  reg        [15:0]   _zz_min_val_46;
  reg        [15:0]   _zz_min_val_47;
  reg        [5:0]    _zz_min_idx_32;
  reg        [5:0]    _zz_min_idx_33;
  reg        [5:0]    _zz_min_idx_34;
  reg        [5:0]    _zz_min_idx_35;
  reg        [5:0]    _zz_min_idx_36;
  reg        [5:0]    _zz_min_idx_37;
  reg        [5:0]    _zz_min_idx_38;
  reg        [5:0]    _zz_min_idx_39;
  reg        [5:0]    _zz_min_idx_40;
  reg        [5:0]    _zz_min_idx_41;
  reg        [5:0]    _zz_min_idx_42;
  reg        [5:0]    _zz_min_idx_43;
  reg        [5:0]    _zz_min_idx_44;
  reg        [5:0]    _zz_min_idx_45;
  reg        [5:0]    _zz_min_idx_46;
  reg        [5:0]    _zz_min_idx_47;
  reg        [15:0]   _zz_min_val_48;
  reg        [15:0]   _zz_min_val_49;
  reg        [15:0]   _zz_min_val_50;
  reg        [15:0]   _zz_min_val_51;
  reg        [15:0]   _zz_min_val_52;
  reg        [15:0]   _zz_min_val_53;
  reg        [15:0]   _zz_min_val_54;
  reg        [15:0]   _zz_min_val_55;
  reg        [5:0]    _zz_min_idx_48;
  reg        [5:0]    _zz_min_idx_49;
  reg        [5:0]    _zz_min_idx_50;
  reg        [5:0]    _zz_min_idx_51;
  reg        [5:0]    _zz_min_idx_52;
  reg        [5:0]    _zz_min_idx_53;
  reg        [5:0]    _zz_min_idx_54;
  reg        [5:0]    _zz_min_idx_55;
  reg        [15:0]   _zz_min_val_56;
  reg        [15:0]   _zz_min_val_57;
  reg        [15:0]   _zz_min_val_58;
  reg        [15:0]   _zz_min_val_59;
  reg        [5:0]    _zz_min_idx_56;
  reg        [5:0]    _zz_min_idx_57;
  reg        [5:0]    _zz_min_idx_58;
  reg        [5:0]    _zz_min_idx_59;
  reg        [15:0]   _zz_min_val_60;
  reg        [15:0]   _zz_min_val_61;
  reg        [5:0]    _zz_min_idx_60;
  reg        [5:0]    _zz_min_idx_61;
  reg        [15:0]   _zz_min_val_62;
  reg        [5:0]    _zz_min_idx_62;

  assign min_idx = _zz_min_idx_62;
  assign min_val = _zz_min_val_62;
  always @(posedge clk) begin
    _zz_min_val <= ((data_0 <= data_1) ? data_0 : data_1);
    _zz_min_idx <= ((data_0 <= data_1) ? 6'h0 : 6'h01);
    _zz_min_val_1 <= ((data_2 <= data_3) ? data_2 : data_3);
    _zz_min_idx_1 <= ((data_2 <= data_3) ? 6'h02 : 6'h03);
    _zz_min_val_2 <= ((data_4 <= data_5) ? data_4 : data_5);
    _zz_min_idx_2 <= ((data_4 <= data_5) ? 6'h04 : 6'h05);
    _zz_min_val_3 <= ((data_6 <= data_7) ? data_6 : data_7);
    _zz_min_idx_3 <= ((data_6 <= data_7) ? 6'h06 : 6'h07);
    _zz_min_val_4 <= ((data_8 <= data_9) ? data_8 : data_9);
    _zz_min_idx_4 <= ((data_8 <= data_9) ? 6'h08 : 6'h09);
    _zz_min_val_5 <= ((data_10 <= data_11) ? data_10 : data_11);
    _zz_min_idx_5 <= ((data_10 <= data_11) ? 6'h0a : 6'h0b);
    _zz_min_val_6 <= ((data_12 <= data_13) ? data_12 : data_13);
    _zz_min_idx_6 <= ((data_12 <= data_13) ? 6'h0c : 6'h0d);
    _zz_min_val_7 <= ((data_14 <= data_15) ? data_14 : data_15);
    _zz_min_idx_7 <= ((data_14 <= data_15) ? 6'h0e : 6'h0f);
    _zz_min_val_8 <= ((data_16 <= data_17) ? data_16 : data_17);
    _zz_min_idx_8 <= ((data_16 <= data_17) ? 6'h10 : 6'h11);
    _zz_min_val_9 <= ((data_18 <= data_19) ? data_18 : data_19);
    _zz_min_idx_9 <= ((data_18 <= data_19) ? 6'h12 : 6'h13);
    _zz_min_val_10 <= ((data_20 <= data_21) ? data_20 : data_21);
    _zz_min_idx_10 <= ((data_20 <= data_21) ? 6'h14 : 6'h15);
    _zz_min_val_11 <= ((data_22 <= data_23) ? data_22 : data_23);
    _zz_min_idx_11 <= ((data_22 <= data_23) ? 6'h16 : 6'h17);
    _zz_min_val_12 <= ((data_24 <= data_25) ? data_24 : data_25);
    _zz_min_idx_12 <= ((data_24 <= data_25) ? 6'h18 : 6'h19);
    _zz_min_val_13 <= ((data_26 <= data_27) ? data_26 : data_27);
    _zz_min_idx_13 <= ((data_26 <= data_27) ? 6'h1a : 6'h1b);
    _zz_min_val_14 <= ((data_28 <= data_29) ? data_28 : data_29);
    _zz_min_idx_14 <= ((data_28 <= data_29) ? 6'h1c : 6'h1d);
    _zz_min_val_15 <= ((data_30 <= data_31) ? data_30 : data_31);
    _zz_min_idx_15 <= ((data_30 <= data_31) ? 6'h1e : 6'h1f);
    _zz_min_val_16 <= ((data_32 <= data_33) ? data_32 : data_33);
    _zz_min_idx_16 <= ((data_32 <= data_33) ? 6'h20 : 6'h21);
    _zz_min_val_17 <= ((data_34 <= data_35) ? data_34 : data_35);
    _zz_min_idx_17 <= ((data_34 <= data_35) ? 6'h22 : 6'h23);
    _zz_min_val_18 <= ((data_36 <= data_37) ? data_36 : data_37);
    _zz_min_idx_18 <= ((data_36 <= data_37) ? 6'h24 : 6'h25);
    _zz_min_val_19 <= ((data_38 <= data_39) ? data_38 : data_39);
    _zz_min_idx_19 <= ((data_38 <= data_39) ? 6'h26 : 6'h27);
    _zz_min_val_20 <= ((data_40 <= data_41) ? data_40 : data_41);
    _zz_min_idx_20 <= ((data_40 <= data_41) ? 6'h28 : 6'h29);
    _zz_min_val_21 <= ((data_42 <= data_43) ? data_42 : data_43);
    _zz_min_idx_21 <= ((data_42 <= data_43) ? 6'h2a : 6'h2b);
    _zz_min_val_22 <= ((data_44 <= data_45) ? data_44 : data_45);
    _zz_min_idx_22 <= ((data_44 <= data_45) ? 6'h2c : 6'h2d);
    _zz_min_val_23 <= ((data_46 <= data_47) ? data_46 : data_47);
    _zz_min_idx_23 <= ((data_46 <= data_47) ? 6'h2e : 6'h2f);
    _zz_min_val_24 <= ((data_48 <= data_49) ? data_48 : data_49);
    _zz_min_idx_24 <= ((data_48 <= data_49) ? 6'h30 : 6'h31);
    _zz_min_val_25 <= ((data_50 <= data_51) ? data_50 : data_51);
    _zz_min_idx_25 <= ((data_50 <= data_51) ? 6'h32 : 6'h33);
    _zz_min_val_26 <= ((data_52 <= data_53) ? data_52 : data_53);
    _zz_min_idx_26 <= ((data_52 <= data_53) ? 6'h34 : 6'h35);
    _zz_min_val_27 <= ((data_54 <= data_55) ? data_54 : data_55);
    _zz_min_idx_27 <= ((data_54 <= data_55) ? 6'h36 : 6'h37);
    _zz_min_val_28 <= ((data_56 <= data_57) ? data_56 : data_57);
    _zz_min_idx_28 <= ((data_56 <= data_57) ? 6'h38 : 6'h39);
    _zz_min_val_29 <= ((data_58 <= data_59) ? data_58 : data_59);
    _zz_min_idx_29 <= ((data_58 <= data_59) ? 6'h3a : 6'h3b);
    _zz_min_val_30 <= ((data_60 <= data_61) ? data_60 : data_61);
    _zz_min_idx_30 <= ((data_60 <= data_61) ? 6'h3c : 6'h3d);
    _zz_min_val_31 <= ((data_62 <= data_63) ? data_62 : data_63);
    _zz_min_idx_31 <= ((data_62 <= data_63) ? 6'h3e : 6'h3f);
    _zz_min_val_32 <= ((_zz_min_val <= _zz_min_val_1) ? _zz_min_val : _zz_min_val_1);
    _zz_min_idx_32 <= ((_zz_min_val <= _zz_min_val_1) ? _zz_min_idx : _zz_min_idx_1);
    _zz_min_val_33 <= ((_zz_min_val_2 <= _zz_min_val_3) ? _zz_min_val_2 : _zz_min_val_3);
    _zz_min_idx_33 <= ((_zz_min_val_2 <= _zz_min_val_3) ? _zz_min_idx_2 : _zz_min_idx_3);
    _zz_min_val_34 <= ((_zz_min_val_4 <= _zz_min_val_5) ? _zz_min_val_4 : _zz_min_val_5);
    _zz_min_idx_34 <= ((_zz_min_val_4 <= _zz_min_val_5) ? _zz_min_idx_4 : _zz_min_idx_5);
    _zz_min_val_35 <= ((_zz_min_val_6 <= _zz_min_val_7) ? _zz_min_val_6 : _zz_min_val_7);
    _zz_min_idx_35 <= ((_zz_min_val_6 <= _zz_min_val_7) ? _zz_min_idx_6 : _zz_min_idx_7);
    _zz_min_val_36 <= ((_zz_min_val_8 <= _zz_min_val_9) ? _zz_min_val_8 : _zz_min_val_9);
    _zz_min_idx_36 <= ((_zz_min_val_8 <= _zz_min_val_9) ? _zz_min_idx_8 : _zz_min_idx_9);
    _zz_min_val_37 <= ((_zz_min_val_10 <= _zz_min_val_11) ? _zz_min_val_10 : _zz_min_val_11);
    _zz_min_idx_37 <= ((_zz_min_val_10 <= _zz_min_val_11) ? _zz_min_idx_10 : _zz_min_idx_11);
    _zz_min_val_38 <= ((_zz_min_val_12 <= _zz_min_val_13) ? _zz_min_val_12 : _zz_min_val_13);
    _zz_min_idx_38 <= ((_zz_min_val_12 <= _zz_min_val_13) ? _zz_min_idx_12 : _zz_min_idx_13);
    _zz_min_val_39 <= ((_zz_min_val_14 <= _zz_min_val_15) ? _zz_min_val_14 : _zz_min_val_15);
    _zz_min_idx_39 <= ((_zz_min_val_14 <= _zz_min_val_15) ? _zz_min_idx_14 : _zz_min_idx_15);
    _zz_min_val_40 <= ((_zz_min_val_16 <= _zz_min_val_17) ? _zz_min_val_16 : _zz_min_val_17);
    _zz_min_idx_40 <= ((_zz_min_val_16 <= _zz_min_val_17) ? _zz_min_idx_16 : _zz_min_idx_17);
    _zz_min_val_41 <= ((_zz_min_val_18 <= _zz_min_val_19) ? _zz_min_val_18 : _zz_min_val_19);
    _zz_min_idx_41 <= ((_zz_min_val_18 <= _zz_min_val_19) ? _zz_min_idx_18 : _zz_min_idx_19);
    _zz_min_val_42 <= ((_zz_min_val_20 <= _zz_min_val_21) ? _zz_min_val_20 : _zz_min_val_21);
    _zz_min_idx_42 <= ((_zz_min_val_20 <= _zz_min_val_21) ? _zz_min_idx_20 : _zz_min_idx_21);
    _zz_min_val_43 <= ((_zz_min_val_22 <= _zz_min_val_23) ? _zz_min_val_22 : _zz_min_val_23);
    _zz_min_idx_43 <= ((_zz_min_val_22 <= _zz_min_val_23) ? _zz_min_idx_22 : _zz_min_idx_23);
    _zz_min_val_44 <= ((_zz_min_val_24 <= _zz_min_val_25) ? _zz_min_val_24 : _zz_min_val_25);
    _zz_min_idx_44 <= ((_zz_min_val_24 <= _zz_min_val_25) ? _zz_min_idx_24 : _zz_min_idx_25);
    _zz_min_val_45 <= ((_zz_min_val_26 <= _zz_min_val_27) ? _zz_min_val_26 : _zz_min_val_27);
    _zz_min_idx_45 <= ((_zz_min_val_26 <= _zz_min_val_27) ? _zz_min_idx_26 : _zz_min_idx_27);
    _zz_min_val_46 <= ((_zz_min_val_28 <= _zz_min_val_29) ? _zz_min_val_28 : _zz_min_val_29);
    _zz_min_idx_46 <= ((_zz_min_val_28 <= _zz_min_val_29) ? _zz_min_idx_28 : _zz_min_idx_29);
    _zz_min_val_47 <= ((_zz_min_val_30 <= _zz_min_val_31) ? _zz_min_val_30 : _zz_min_val_31);
    _zz_min_idx_47 <= ((_zz_min_val_30 <= _zz_min_val_31) ? _zz_min_idx_30 : _zz_min_idx_31);
    _zz_min_val_48 <= ((_zz_min_val_32 <= _zz_min_val_33) ? _zz_min_val_32 : _zz_min_val_33);
    _zz_min_idx_48 <= ((_zz_min_val_32 <= _zz_min_val_33) ? _zz_min_idx_32 : _zz_min_idx_33);
    _zz_min_val_49 <= ((_zz_min_val_34 <= _zz_min_val_35) ? _zz_min_val_34 : _zz_min_val_35);
    _zz_min_idx_49 <= ((_zz_min_val_34 <= _zz_min_val_35) ? _zz_min_idx_34 : _zz_min_idx_35);
    _zz_min_val_50 <= ((_zz_min_val_36 <= _zz_min_val_37) ? _zz_min_val_36 : _zz_min_val_37);
    _zz_min_idx_50 <= ((_zz_min_val_36 <= _zz_min_val_37) ? _zz_min_idx_36 : _zz_min_idx_37);
    _zz_min_val_51 <= ((_zz_min_val_38 <= _zz_min_val_39) ? _zz_min_val_38 : _zz_min_val_39);
    _zz_min_idx_51 <= ((_zz_min_val_38 <= _zz_min_val_39) ? _zz_min_idx_38 : _zz_min_idx_39);
    _zz_min_val_52 <= ((_zz_min_val_40 <= _zz_min_val_41) ? _zz_min_val_40 : _zz_min_val_41);
    _zz_min_idx_52 <= ((_zz_min_val_40 <= _zz_min_val_41) ? _zz_min_idx_40 : _zz_min_idx_41);
    _zz_min_val_53 <= ((_zz_min_val_42 <= _zz_min_val_43) ? _zz_min_val_42 : _zz_min_val_43);
    _zz_min_idx_53 <= ((_zz_min_val_42 <= _zz_min_val_43) ? _zz_min_idx_42 : _zz_min_idx_43);
    _zz_min_val_54 <= ((_zz_min_val_44 <= _zz_min_val_45) ? _zz_min_val_44 : _zz_min_val_45);
    _zz_min_idx_54 <= ((_zz_min_val_44 <= _zz_min_val_45) ? _zz_min_idx_44 : _zz_min_idx_45);
    _zz_min_val_55 <= ((_zz_min_val_46 <= _zz_min_val_47) ? _zz_min_val_46 : _zz_min_val_47);
    _zz_min_idx_55 <= ((_zz_min_val_46 <= _zz_min_val_47) ? _zz_min_idx_46 : _zz_min_idx_47);
    _zz_min_val_56 <= ((_zz_min_val_48 <= _zz_min_val_49) ? _zz_min_val_48 : _zz_min_val_49);
    _zz_min_idx_56 <= ((_zz_min_val_48 <= _zz_min_val_49) ? _zz_min_idx_48 : _zz_min_idx_49);
    _zz_min_val_57 <= ((_zz_min_val_50 <= _zz_min_val_51) ? _zz_min_val_50 : _zz_min_val_51);
    _zz_min_idx_57 <= ((_zz_min_val_50 <= _zz_min_val_51) ? _zz_min_idx_50 : _zz_min_idx_51);
    _zz_min_val_58 <= ((_zz_min_val_52 <= _zz_min_val_53) ? _zz_min_val_52 : _zz_min_val_53);
    _zz_min_idx_58 <= ((_zz_min_val_52 <= _zz_min_val_53) ? _zz_min_idx_52 : _zz_min_idx_53);
    _zz_min_val_59 <= ((_zz_min_val_54 <= _zz_min_val_55) ? _zz_min_val_54 : _zz_min_val_55);
    _zz_min_idx_59 <= ((_zz_min_val_54 <= _zz_min_val_55) ? _zz_min_idx_54 : _zz_min_idx_55);
    _zz_min_val_60 <= ((_zz_min_val_56 <= _zz_min_val_57) ? _zz_min_val_56 : _zz_min_val_57);
    _zz_min_idx_60 <= ((_zz_min_val_56 <= _zz_min_val_57) ? _zz_min_idx_56 : _zz_min_idx_57);
    _zz_min_val_61 <= ((_zz_min_val_58 <= _zz_min_val_59) ? _zz_min_val_58 : _zz_min_val_59);
    _zz_min_idx_61 <= ((_zz_min_val_58 <= _zz_min_val_59) ? _zz_min_idx_58 : _zz_min_idx_59);
    _zz_min_val_62 <= ((_zz_min_val_60 <= _zz_min_val_61) ? _zz_min_val_60 : _zz_min_val_61);
    _zz_min_idx_62 <= ((_zz_min_val_60 <= _zz_min_val_61) ? _zz_min_idx_60 : _zz_min_idx_61);
  end


endmodule

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

module AddCompareSelect (
  input      [15:0]   last_state_weight_0,
  input      [15:0]   last_state_weight_1,
  input      [15:0]   dist_0,
  input      [15:0]   dist_1,
  output reg [15:0]   state_weight,
  output reg          decision
);
  wire       [15:0]   branch_weight_0;
  wire       [15:0]   branch_weight_1;
  wire                when_AddCompareSelect_l17;

  assign branch_weight_0 = (last_state_weight_0 + dist_0);
  assign branch_weight_1 = (last_state_weight_1 + dist_1);
  assign when_AddCompareSelect_l17 = (branch_weight_0 <= branch_weight_1);
  always @(*) begin
    if(when_AddCompareSelect_l17) begin
      state_weight = branch_weight_0;
    end else begin
      state_weight = branch_weight_1;
    end
  end

  always @(*) begin
    if(when_AddCompareSelect_l17) begin
      decision = 1'b0;
    end else begin
      decision = 1'b1;
    end
  end


endmodule

module BranchMetric (
  input      [1:0]    trellis_unit_0,
  input      [1:0]    trellis_unit_1,
  input      [1:0]    raw_data_data,
  input      [1:0]    raw_data_indicate,
  output     [2:0]    dist_0,
  output     [2:0]    dist_1
);
  wire       [0:0]    hammingDistance_256_in_a;
  wire       [0:0]    hammingDistance_256_in_b;
  wire       [0:0]    hammingDistance_257_in_a;
  wire       [0:0]    hammingDistance_257_in_b;
  wire       [0:0]    hammingDistance_258_in_a;
  wire       [0:0]    hammingDistance_258_in_b;
  wire       [0:0]    hammingDistance_259_in_a;
  wire       [0:0]    hammingDistance_259_in_b;
  wire       [0:0]    hammingDistance_256_distance;
  wire       [0:0]    hammingDistance_257_distance;
  wire       [0:0]    hammingDistance_258_distance;
  wire       [0:0]    hammingDistance_259_distance;
  wire       [2:0]    _zz__zz_dist_0_1;
  wire       [2:0]    _zz_dist_0_2;
  wire       [2:0]    _zz__zz_dist_1_1;
  wire       [2:0]    _zz_dist_1_2;
  wire       [2:0]    _zz_dist_0;
  wire       [1:0]    _zz_in_a;
  wire       [1:0]    _zz_in_b;
  reg        [2:0]    _zz_dist_0_1;
  wire       [2:0]    _zz_dist_1;
  wire       [1:0]    _zz_in_a_1;
  wire       [1:0]    _zz_in_b_1;
  reg        [2:0]    _zz_dist_1_1;

  assign _zz__zz_dist_0_1 = {2'd0, hammingDistance_257_distance};
  assign _zz_dist_0_2 = _zz_dist_0_1;
  assign _zz__zz_dist_1_1 = {2'd0, hammingDistance_259_distance};
  assign _zz_dist_1_2 = _zz_dist_1_1;
  HammingDistance hammingDistance_256 (
    .in_a        (hammingDistance_256_in_a      ), //i
    .in_b        (hammingDistance_256_in_b      ), //i
    .distance    (hammingDistance_256_distance  )  //o
  );
  HammingDistance hammingDistance_257 (
    .in_a        (hammingDistance_257_in_a      ), //i
    .in_b        (hammingDistance_257_in_b      ), //i
    .distance    (hammingDistance_257_distance  )  //o
  );
  HammingDistance hammingDistance_258 (
    .in_a        (hammingDistance_258_in_a      ), //i
    .in_b        (hammingDistance_258_in_b      ), //i
    .distance    (hammingDistance_258_distance  )  //o
  );
  HammingDistance hammingDistance_259 (
    .in_a        (hammingDistance_259_in_a      ), //i
    .in_b        (hammingDistance_259_in_b      ), //i
    .distance    (hammingDistance_259_distance  )  //o
  );
  assign _zz_in_a = trellis_unit_0;
  assign _zz_in_b = raw_data_data;
  assign hammingDistance_256_in_a = _zz_in_a[0 : 0];
  assign hammingDistance_256_in_b = _zz_in_b[0 : 0];
  assign _zz_dist_0 = {2'd0, hammingDistance_256_distance};
  assign hammingDistance_257_in_a = _zz_in_a[1 : 1];
  assign hammingDistance_257_in_b = _zz_in_b[1 : 1];
  always @(*) begin
    case(raw_data_indicate)
      2'b11 : begin
        _zz_dist_0_1 = (_zz_dist_0 + _zz__zz_dist_0_1);
      end
      2'b01 : begin
        _zz_dist_0_1 = (_zz_dist_0 + 3'b000);
      end
      default : begin
        _zz_dist_0_1 = 3'b000;
      end
    endcase
  end

  assign dist_0 = _zz_dist_0_2;
  assign _zz_in_a_1 = trellis_unit_1;
  assign _zz_in_b_1 = raw_data_data;
  assign hammingDistance_258_in_a = _zz_in_a_1[0 : 0];
  assign hammingDistance_258_in_b = _zz_in_b_1[0 : 0];
  assign _zz_dist_1 = {2'd0, hammingDistance_258_distance};
  assign hammingDistance_259_in_a = _zz_in_a_1[1 : 1];
  assign hammingDistance_259_in_b = _zz_in_b_1[1 : 1];
  always @(*) begin
    case(raw_data_indicate)
      2'b11 : begin
        _zz_dist_1_1 = (_zz_dist_1 + _zz__zz_dist_1_1);
      end
      2'b01 : begin
        _zz_dist_1_1 = (_zz_dist_1 + 3'b000);
      end
      default : begin
        _zz_dist_1_1 = 3'b000;
      end
    endcase
  end

  assign dist_1 = _zz_dist_1_2;

endmodule

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

module HammingDistance (
  input      [0:0]    in_a,
  input      [0:0]    in_b,
  output     [0:0]    distance
);
  wire       [0:0]    _zz_distance;
  wire       [0:0]    xorResult;

  assign _zz_distance = xorResult[0];
  assign xorResult = (in_a ^ in_b);
  assign distance = _zz_distance;

endmodule
