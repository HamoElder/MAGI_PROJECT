// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : AIS_TX
// Git hash  : 0727f9ff86b0428c52b898049d05b42f47380ee0

`timescale 1ns/1ps

module AIS_TX (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [0:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);

  wire                crc16_adder_raw_data_ready;
  wire                crc16_adder_result_data_valid;
  wire                crc16_adder_result_data_payload_last;
  wire       [7:0]    crc16_adder_result_data_payload_fragment;
  wire                end_flag_adder_raw_data_ready;
  wire                end_flag_adder_result_data_valid;
  wire                end_flag_adder_result_data_payload_last;
  wire       [7:0]    end_flag_adder_result_data_payload_fragment;
  wire                crc16_adder_result_data_fifo_io_push_ready;
  wire                crc16_adder_result_data_fifo_io_pop_valid;
  wire                crc16_adder_result_data_fifo_io_pop_payload_last;
  wire       [7:0]    crc16_adder_result_data_fifo_io_pop_payload_fragment;
  wire       [5:0]    crc16_adder_result_data_fifo_io_occupancy;
  wire       [5:0]    crc16_adder_result_data_fifo_io_availability;
  wire                buffer_adder_raw_data_ready;
  wire                buffer_adder_result_data_valid;
  wire                buffer_adder_result_data_payload_last;
  wire       [7:0]    buffer_adder_result_data_payload_fragment;
  wire                end_flag_adder_result_data_fifo_io_push_ready;
  wire                end_flag_adder_result_data_fifo_io_pop_valid;
  wire                end_flag_adder_result_data_fifo_io_pop_payload_last;
  wire       [7:0]    end_flag_adder_result_data_fifo_io_pop_payload_fragment;
  wire       [5:0]    end_flag_adder_result_data_fifo_io_occupancy;
  wire       [5:0]    end_flag_adder_result_data_fifo_io_availability;
  wire                preamble_adder_raw_data_ready;
  wire                preamble_adder_result_data_valid;
  wire                preamble_adder_result_data_payload_last;
  wire       [7:0]    preamble_adder_result_data_payload_fragment;
  wire                buffer_adder_result_data_fifo_io_push_ready;
  wire                buffer_adder_result_data_fifo_io_pop_valid;
  wire                buffer_adder_result_data_fifo_io_pop_payload_last;
  wire       [7:0]    buffer_adder_result_data_fifo_io_pop_payload_fragment;
  wire       [5:0]    buffer_adder_result_data_fifo_io_occupancy;
  wire       [5:0]    buffer_adder_result_data_fifo_io_availability;
  wire                nrzi_encoder_raw_data_ready;
  wire                nrzi_encoder_result_data_valid;
  wire                nrzi_encoder_result_data_payload_last;
  wire       [0:0]    nrzi_encoder_result_data_payload_fragment;
  wire                preamble_adder_result_data_fifo_io_push_ready;
  wire                preamble_adder_result_data_fifo_io_pop_valid;
  wire                preamble_adder_result_data_fifo_io_pop_payload_last;
  wire       [7:0]    preamble_adder_result_data_fifo_io_pop_payload_fragment;
  wire       [5:0]    preamble_adder_result_data_fifo_io_occupancy;
  wire       [5:0]    preamble_adder_result_data_fifo_io_availability;
  wire                nrzi_encoder_result_data_fifo_io_push_ready;
  wire                nrzi_encoder_result_data_fifo_io_pop_valid;
  wire                nrzi_encoder_result_data_fifo_io_pop_payload_last;
  wire       [0:0]    nrzi_encoder_result_data_fifo_io_pop_payload_fragment;
  wire       [5:0]    nrzi_encoder_result_data_fifo_io_occupancy;
  wire       [5:0]    nrzi_encoder_result_data_fifo_io_availability;
  wire                when_Stream_l434;
  reg                 raw_data_thrown_valid;
  wire                raw_data_thrown_ready;
  wire                raw_data_thrown_payload_last;
  wire       [7:0]    raw_data_thrown_payload_fragment;

  PhyTxCrc crc16_adder (
    .raw_data_valid               (raw_data_thrown_valid                        ), //i
    .raw_data_ready               (crc16_adder_raw_data_ready                   ), //o
    .raw_data_payload_last        (raw_data_thrown_payload_last                 ), //i
    .raw_data_payload_fragment    (raw_data_thrown_payload_fragment[7:0]        ), //i
    .result_data_valid            (crc16_adder_result_data_valid                ), //o
    .result_data_ready            (crc16_adder_result_data_fifo_io_push_ready   ), //i
    .result_data_payload_last     (crc16_adder_result_data_payload_last         ), //o
    .result_data_payload_fragment (crc16_adder_result_data_payload_fragment[7:0]), //o
    .clk                          (clk                                          ), //i
    .reset                        (reset                                        )  //i
  );
  PhyTxEndFlag end_flag_adder (
    .raw_data_valid               (crc16_adder_result_data_fifo_io_pop_valid                ), //i
    .raw_data_ready               (end_flag_adder_raw_data_ready                            ), //o
    .raw_data_payload_last        (crc16_adder_result_data_fifo_io_pop_payload_last         ), //i
    .raw_data_payload_fragment    (crc16_adder_result_data_fifo_io_pop_payload_fragment[7:0]), //i
    .result_data_valid            (end_flag_adder_result_data_valid                         ), //o
    .result_data_ready            (end_flag_adder_result_data_fifo_io_push_ready            ), //i
    .result_data_payload_last     (end_flag_adder_result_data_payload_last                  ), //o
    .result_data_payload_fragment (end_flag_adder_result_data_payload_fragment[7:0]         ), //o
    .clk                          (clk                                                      ), //i
    .reset                        (reset                                                    )  //i
  );
  StreamFifo_1 crc16_adder_result_data_fifo (
    .io_push_valid            (crc16_adder_result_data_valid                            ), //i
    .io_push_ready            (crc16_adder_result_data_fifo_io_push_ready               ), //o
    .io_push_payload_last     (crc16_adder_result_data_payload_last                     ), //i
    .io_push_payload_fragment (crc16_adder_result_data_payload_fragment[7:0]            ), //i
    .io_pop_valid             (crc16_adder_result_data_fifo_io_pop_valid                ), //o
    .io_pop_ready             (end_flag_adder_raw_data_ready                            ), //i
    .io_pop_payload_last      (crc16_adder_result_data_fifo_io_pop_payload_last         ), //o
    .io_pop_payload_fragment  (crc16_adder_result_data_fifo_io_pop_payload_fragment[7:0]), //o
    .io_flush                 (1'b0                                                     ), //i
    .io_occupancy             (crc16_adder_result_data_fifo_io_occupancy[5:0]           ), //o
    .io_availability          (crc16_adder_result_data_fifo_io_availability[5:0]        ), //o
    .clk                      (clk                                                      ), //i
    .reset                    (reset                                                    )  //i
  );
  PhyTxBufferPadding buffer_adder (
    .raw_data_valid               (end_flag_adder_result_data_fifo_io_pop_valid                ), //i
    .raw_data_ready               (buffer_adder_raw_data_ready                                 ), //o
    .raw_data_payload_last        (end_flag_adder_result_data_fifo_io_pop_payload_last         ), //i
    .raw_data_payload_fragment    (end_flag_adder_result_data_fifo_io_pop_payload_fragment[7:0]), //i
    .result_data_valid            (buffer_adder_result_data_valid                              ), //o
    .result_data_ready            (buffer_adder_result_data_fifo_io_push_ready                 ), //i
    .result_data_payload_last     (buffer_adder_result_data_payload_last                       ), //o
    .result_data_payload_fragment (buffer_adder_result_data_payload_fragment[7:0]              ), //o
    .clk                          (clk                                                         ), //i
    .reset                        (reset                                                       )  //i
  );
  StreamFifo_1 end_flag_adder_result_data_fifo (
    .io_push_valid            (end_flag_adder_result_data_valid                            ), //i
    .io_push_ready            (end_flag_adder_result_data_fifo_io_push_ready               ), //o
    .io_push_payload_last     (end_flag_adder_result_data_payload_last                     ), //i
    .io_push_payload_fragment (end_flag_adder_result_data_payload_fragment[7:0]            ), //i
    .io_pop_valid             (end_flag_adder_result_data_fifo_io_pop_valid                ), //o
    .io_pop_ready             (buffer_adder_raw_data_ready                                 ), //i
    .io_pop_payload_last      (end_flag_adder_result_data_fifo_io_pop_payload_last         ), //o
    .io_pop_payload_fragment  (end_flag_adder_result_data_fifo_io_pop_payload_fragment[7:0]), //o
    .io_flush                 (1'b0                                                        ), //i
    .io_occupancy             (end_flag_adder_result_data_fifo_io_occupancy[5:0]           ), //o
    .io_availability          (end_flag_adder_result_data_fifo_io_availability[5:0]        ), //o
    .clk                      (clk                                                         ), //i
    .reset                    (reset                                                       )  //i
  );
  PhyTxPreambleExtender preamble_adder (
    .raw_data_valid               (buffer_adder_result_data_fifo_io_pop_valid                ), //i
    .raw_data_ready               (preamble_adder_raw_data_ready                             ), //o
    .raw_data_payload_last        (buffer_adder_result_data_fifo_io_pop_payload_last         ), //i
    .raw_data_payload_fragment    (buffer_adder_result_data_fifo_io_pop_payload_fragment[7:0]), //i
    .result_data_valid            (preamble_adder_result_data_valid                          ), //o
    .result_data_ready            (preamble_adder_result_data_fifo_io_push_ready             ), //i
    .result_data_payload_last     (preamble_adder_result_data_payload_last                   ), //o
    .result_data_payload_fragment (preamble_adder_result_data_payload_fragment[7:0]          ), //o
    .clk                          (clk                                                       ), //i
    .reset                        (reset                                                     )  //i
  );
  StreamFifo_1 buffer_adder_result_data_fifo (
    .io_push_valid            (buffer_adder_result_data_valid                            ), //i
    .io_push_ready            (buffer_adder_result_data_fifo_io_push_ready               ), //o
    .io_push_payload_last     (buffer_adder_result_data_payload_last                     ), //i
    .io_push_payload_fragment (buffer_adder_result_data_payload_fragment[7:0]            ), //i
    .io_pop_valid             (buffer_adder_result_data_fifo_io_pop_valid                ), //o
    .io_pop_ready             (preamble_adder_raw_data_ready                             ), //i
    .io_pop_payload_last      (buffer_adder_result_data_fifo_io_pop_payload_last         ), //o
    .io_pop_payload_fragment  (buffer_adder_result_data_fifo_io_pop_payload_fragment[7:0]), //o
    .io_flush                 (1'b0                                                      ), //i
    .io_occupancy             (buffer_adder_result_data_fifo_io_occupancy[5:0]           ), //o
    .io_availability          (buffer_adder_result_data_fifo_io_availability[5:0]        ), //o
    .clk                      (clk                                                       ), //i
    .reset                    (reset                                                     )  //i
  );
  PhyTxNRZI nrzi_encoder (
    .raw_data_valid               (preamble_adder_result_data_fifo_io_pop_valid                ), //i
    .raw_data_ready               (nrzi_encoder_raw_data_ready                                 ), //o
    .raw_data_payload_last        (preamble_adder_result_data_fifo_io_pop_payload_last         ), //i
    .raw_data_payload_fragment    (preamble_adder_result_data_fifo_io_pop_payload_fragment[7:0]), //i
    .result_data_valid            (nrzi_encoder_result_data_valid                              ), //o
    .result_data_ready            (nrzi_encoder_result_data_fifo_io_push_ready                 ), //i
    .result_data_payload_last     (nrzi_encoder_result_data_payload_last                       ), //o
    .result_data_payload_fragment (nrzi_encoder_result_data_payload_fragment                   ), //o
    .clk                          (clk                                                         ), //i
    .reset                        (reset                                                       )  //i
  );
  StreamFifo_1 preamble_adder_result_data_fifo (
    .io_push_valid            (preamble_adder_result_data_valid                            ), //i
    .io_push_ready            (preamble_adder_result_data_fifo_io_push_ready               ), //o
    .io_push_payload_last     (preamble_adder_result_data_payload_last                     ), //i
    .io_push_payload_fragment (preamble_adder_result_data_payload_fragment[7:0]            ), //i
    .io_pop_valid             (preamble_adder_result_data_fifo_io_pop_valid                ), //o
    .io_pop_ready             (nrzi_encoder_raw_data_ready                                 ), //i
    .io_pop_payload_last      (preamble_adder_result_data_fifo_io_pop_payload_last         ), //o
    .io_pop_payload_fragment  (preamble_adder_result_data_fifo_io_pop_payload_fragment[7:0]), //o
    .io_flush                 (1'b0                                                        ), //i
    .io_occupancy             (preamble_adder_result_data_fifo_io_occupancy[5:0]           ), //o
    .io_availability          (preamble_adder_result_data_fifo_io_availability[5:0]        ), //o
    .clk                      (clk                                                         ), //i
    .reset                    (reset                                                       )  //i
  );
  StreamFifo_5 nrzi_encoder_result_data_fifo (
    .io_push_valid            (nrzi_encoder_result_data_valid                       ), //i
    .io_push_ready            (nrzi_encoder_result_data_fifo_io_push_ready          ), //o
    .io_push_payload_last     (nrzi_encoder_result_data_payload_last                ), //i
    .io_push_payload_fragment (nrzi_encoder_result_data_payload_fragment            ), //i
    .io_pop_valid             (nrzi_encoder_result_data_fifo_io_pop_valid           ), //o
    .io_pop_ready             (result_data_ready                                    ), //i
    .io_pop_payload_last      (nrzi_encoder_result_data_fifo_io_pop_payload_last    ), //o
    .io_pop_payload_fragment  (nrzi_encoder_result_data_fifo_io_pop_payload_fragment), //o
    .io_flush                 (1'b0                                                 ), //i
    .io_occupancy             (nrzi_encoder_result_data_fifo_io_occupancy[5:0]      ), //o
    .io_availability          (nrzi_encoder_result_data_fifo_io_availability[5:0]   ), //o
    .clk                      (clk                                                  ), //i
    .reset                    (reset                                                )  //i
  );
  assign when_Stream_l434 = (! result_data_ready);
  always @(*) begin
    raw_data_thrown_valid = raw_data_valid;
    if(when_Stream_l434) begin
      raw_data_thrown_valid = 1'b0;
    end
  end

  always @(*) begin
    raw_data_ready = raw_data_thrown_ready;
    if(when_Stream_l434) begin
      raw_data_ready = 1'b1;
    end
  end

  assign raw_data_thrown_payload_last = raw_data_payload_last;
  assign raw_data_thrown_payload_fragment = raw_data_payload_fragment;
  assign raw_data_thrown_ready = crc16_adder_raw_data_ready;
  assign result_data_valid = nrzi_encoder_result_data_fifo_io_pop_valid;
  assign result_data_payload_last = nrzi_encoder_result_data_fifo_io_pop_payload_last;
  assign result_data_payload_fragment = nrzi_encoder_result_data_fifo_io_pop_payload_fragment;

endmodule

module StreamFifo_5 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [0:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [0:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [1:0]    _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [1:0]    _zz_logic_ram_port_1;
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
  wire       [1:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l1021;
  wire       [4:0]    logic_ptrDif;
  reg [1:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
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
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[1 : 1];
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
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
      if(when_Stream_l1021) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

//StreamFifo_1 replaced by StreamFifo_1

module PhyTxNRZI (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [0:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);

  wire                bit_split_raw_data_ready;
  wire                bit_split_adapted_data_valid;
  wire                bit_split_adapted_data_payload_last;
  wire       [0:0]    bit_split_adapted_data_payload_fragment;
  wire                bit_cursor;
  reg                 bit_full_ones;

  StreamFragmentWidthConvert bit_split (
    .raw_data_valid                (raw_data_valid                         ), //i
    .raw_data_ready                (bit_split_raw_data_ready               ), //o
    .raw_data_payload_last         (raw_data_payload_last                  ), //i
    .raw_data_payload_fragment     (raw_data_payload_fragment[7:0]         ), //i
    .adapted_data_valid            (bit_split_adapted_data_valid           ), //o
    .adapted_data_ready            (result_data_ready                      ), //i
    .adapted_data_payload_last     (bit_split_adapted_data_payload_last    ), //o
    .adapted_data_payload_fragment (bit_split_adapted_data_payload_fragment), //o
    .clk                           (clk                                    ), //i
    .reset                         (reset                                  )  //i
  );
  assign bit_cursor = 1'b0;
  assign raw_data_ready = bit_split_raw_data_ready;
  assign result_data_valid = bit_split_adapted_data_valid;
  assign result_data_payload_last = bit_split_adapted_data_payload_last;
  assign result_data_payload_fragment = bit_split_adapted_data_payload_fragment;

endmodule

//StreamFifo_1 replaced by StreamFifo_1

module PhyTxPreambleExtender (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [7:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);
  localparam PhyTxPreambleStatus_IDLE = 2'd0;
  localparam PhyTxPreambleStatus_PREAMBLE = 2'd1;
  localparam PhyTxPreambleStatus_FLAG = 2'd2;
  localparam PhyTxPreambleStatus_DATA = 2'd3;

  reg        [1:0]    cnt;
  reg        [1:0]    preamble_status;
  wire                result_data_fire;
  wire                when_PhyTx_l36;
  wire                raw_data_fire;
  wire                when_PhyTx_l53;
  `ifndef SYNTHESIS
  reg [63:0] preamble_status_string;
  `endif


  `ifndef SYNTHESIS
  always @(*) begin
    case(preamble_status)
      PhyTxPreambleStatus_IDLE : preamble_status_string = "IDLE    ";
      PhyTxPreambleStatus_PREAMBLE : preamble_status_string = "PREAMBLE";
      PhyTxPreambleStatus_FLAG : preamble_status_string = "FLAG    ";
      PhyTxPreambleStatus_DATA : preamble_status_string = "DATA    ";
      default : preamble_status_string = "????????";
    endcase
  end
  `endif

  always @(*) begin
    case(preamble_status)
      PhyTxPreambleStatus_IDLE : begin
        result_data_valid = 1'b0;
      end
      PhyTxPreambleStatus_PREAMBLE : begin
        result_data_valid = 1'b1;
      end
      PhyTxPreambleStatus_FLAG : begin
        result_data_valid = 1'b1;
      end
      default : begin
        result_data_valid = raw_data_valid;
      end
    endcase
  end

  always @(*) begin
    case(preamble_status)
      PhyTxPreambleStatus_IDLE : begin
        result_data_payload_fragment = 8'h0;
      end
      PhyTxPreambleStatus_PREAMBLE : begin
        result_data_payload_fragment = 8'haa;
      end
      PhyTxPreambleStatus_FLAG : begin
        result_data_payload_fragment = 8'h7e;
      end
      default : begin
        result_data_payload_fragment = raw_data_payload_fragment;
      end
    endcase
  end

  always @(*) begin
    case(preamble_status)
      PhyTxPreambleStatus_IDLE : begin
        result_data_payload_last = 1'b0;
      end
      PhyTxPreambleStatus_PREAMBLE : begin
        result_data_payload_last = 1'b0;
      end
      PhyTxPreambleStatus_FLAG : begin
        result_data_payload_last = 1'b0;
      end
      default : begin
        result_data_payload_last = raw_data_payload_last;
      end
    endcase
  end

  always @(*) begin
    case(preamble_status)
      PhyTxPreambleStatus_IDLE : begin
        raw_data_ready = 1'b0;
      end
      PhyTxPreambleStatus_PREAMBLE : begin
        raw_data_ready = 1'b0;
      end
      PhyTxPreambleStatus_FLAG : begin
        raw_data_ready = 1'b0;
      end
      default : begin
        raw_data_ready = result_data_ready;
      end
    endcase
  end

  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l36 = (cnt == 2'b10);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l53 = (raw_data_fire && raw_data_payload_last);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 2'b00;
      preamble_status <= PhyTxPreambleStatus_IDLE;
    end else begin
      case(preamble_status)
        PhyTxPreambleStatus_IDLE : begin
          if(raw_data_valid) begin
            preamble_status <= PhyTxPreambleStatus_PREAMBLE;
          end
          cnt <= 2'b00;
        end
        PhyTxPreambleStatus_PREAMBLE : begin
          if(result_data_fire) begin
            cnt <= (cnt + 2'b01);
            if(when_PhyTx_l36) begin
              preamble_status <= PhyTxPreambleStatus_FLAG;
            end
          end
        end
        PhyTxPreambleStatus_FLAG : begin
          preamble_status <= PhyTxPreambleStatus_DATA;
        end
        default : begin
          if(when_PhyTx_l53) begin
            preamble_status <= PhyTxPreambleStatus_IDLE;
          end
        end
      endcase
    end
  end


endmodule

//StreamFifo_1 replaced by StreamFifo_1

module PhyTxBufferPadding (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [7:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);

  reg                 last_padding;
  wire                raw_data_fire;
  wire                when_PhyTx_l125;
  wire                result_data_fire;
  wire                when_PhyTx_l125_1;
  reg        [1:0]    cnt;
  wire                when_PhyTx_l127;
  wire                result_data_fire_1;
  wire                when_PhyTx_l140;

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l125 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l125_1 = (result_data_fire && result_data_payload_last);
  assign when_PhyTx_l127 = (! last_padding);
  always @(*) begin
    if(when_PhyTx_l127) begin
      result_data_valid = raw_data_valid;
    end else begin
      result_data_valid = 1'b1;
    end
  end

  always @(*) begin
    if(when_PhyTx_l127) begin
      result_data_payload_fragment = raw_data_payload_fragment;
    end else begin
      result_data_payload_fragment = 8'h0;
    end
  end

  always @(*) begin
    if(when_PhyTx_l127) begin
      result_data_payload_last = 1'b0;
    end else begin
      if(when_PhyTx_l140) begin
        result_data_payload_last = 1'b1;
      end else begin
        result_data_payload_last = 1'b0;
      end
    end
  end

  always @(*) begin
    if(when_PhyTx_l127) begin
      raw_data_ready = result_data_ready;
    end else begin
      raw_data_ready = 1'b0;
    end
  end

  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l140 = (cnt == 2'b10);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      last_padding <= 1'b0;
      cnt <= 2'b00;
    end else begin
      if(when_PhyTx_l125) begin
        last_padding <= 1'b1;
      end
      if(when_PhyTx_l125_1) begin
        last_padding <= 1'b0;
      end
      if(when_PhyTx_l127) begin
        cnt <= 2'b00;
      end else begin
        if(result_data_fire_1) begin
          cnt <= (cnt + 2'b01);
        end
      end
    end
  end


endmodule

module StreamFifo_1 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [7:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [7:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [8:0]    _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [8:0]    _zz_logic_ram_port_1;
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
  wire       [8:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l1021;
  wire       [4:0]    logic_ptrDif;
  reg [8:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
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
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[8 : 1];
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
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
      if(when_Stream_l1021) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module PhyTxEndFlag (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [7:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);

  reg                 last_flag;
  wire                raw_data_fire;
  wire                when_PhyTx_l105;
  wire                result_data_fire;
  wire                when_PhyTx_l105_1;
  wire                when_PhyTx_l106;

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l105 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l105_1 = (result_data_fire && result_data_payload_last);
  assign when_PhyTx_l106 = (! last_flag);
  always @(*) begin
    if(when_PhyTx_l106) begin
      result_data_valid = raw_data_valid;
    end else begin
      result_data_valid = 1'b1;
    end
  end

  always @(*) begin
    if(when_PhyTx_l106) begin
      result_data_payload_fragment = raw_data_payload_fragment;
    end else begin
      result_data_payload_fragment = 8'h7e;
    end
  end

  always @(*) begin
    if(when_PhyTx_l106) begin
      result_data_payload_last = 1'b0;
    end else begin
      result_data_payload_last = 1'b1;
    end
  end

  always @(*) begin
    if(when_PhyTx_l106) begin
      raw_data_ready = result_data_ready;
    end else begin
      raw_data_ready = 1'b0;
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      last_flag <= 1'b0;
    end else begin
      if(when_PhyTx_l105) begin
        last_flag <= 1'b1;
      end
      if(when_PhyTx_l105_1) begin
        last_flag <= 1'b0;
      end
    end
  end


endmodule

module PhyTxCrc (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [7:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);

  wire                crc_1_flush;
  wire       [15:0]   crc_1_result;
  wire       [15:0]   crc_1_resultNext;
  reg        [7:0]    _zz_result_data_payload_fragment;
  reg                 emitCrc;
  wire                raw_data_fire;
  wire                when_PhyTx_l72;
  wire                result_data_fire;
  wire                when_PhyTx_l72_1;
  reg        [0:0]    counter;
  wire                raw_data_fire_1;
  wire                result_data_fire_1;
  wire                when_PhyTx_l79;
  wire                when_PhyTx_l87;
  wire                result_data_fire_2;
  wire                result_data_fire_3;

  Crc crc_1 (
    .flush         (crc_1_flush                   ), //i
    .input_valid   (raw_data_fire_1               ), //i
    .input_payload (raw_data_payload_fragment[7:0]), //i
    .result        (crc_1_result[15:0]            ), //o
    .resultNext    (crc_1_resultNext[15:0]        ), //o
    .clk           (clk                           ), //i
    .reset         (reset                         )  //i
  );
  always @(*) begin
    case(counter)
      1'b0 : _zz_result_data_payload_fragment = crc_1_result[7 : 0];
      default : _zz_result_data_payload_fragment = crc_1_result[15 : 8];
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l72 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l72_1 = (result_data_fire && result_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign crc_1_flush = (result_data_fire_1 && result_data_payload_last);
  always @(*) begin
    result_data_payload_last = 1'b0;
    if(!when_PhyTx_l79) begin
      if(when_PhyTx_l87) begin
        result_data_payload_last = 1'b1;
      end
    end
  end

  assign when_PhyTx_l79 = (! emitCrc);
  always @(*) begin
    if(when_PhyTx_l79) begin
      result_data_valid = raw_data_valid;
    end else begin
      result_data_valid = 1'b1;
    end
  end

  always @(*) begin
    if(when_PhyTx_l79) begin
      result_data_payload_fragment = raw_data_payload_fragment;
    end else begin
      result_data_payload_fragment = _zz_result_data_payload_fragment;
    end
  end

  always @(*) begin
    if(when_PhyTx_l79) begin
      raw_data_ready = result_data_ready;
    end else begin
      raw_data_ready = 1'b0;
    end
  end

  assign when_PhyTx_l87 = (counter == 1'b1);
  assign result_data_fire_2 = (result_data_valid && result_data_ready);
  assign result_data_fire_3 = (result_data_valid && result_data_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      emitCrc <= 1'b0;
      counter <= 1'b0;
    end else begin
      if(when_PhyTx_l72) begin
        emitCrc <= 1'b1;
      end
      if(when_PhyTx_l72_1) begin
        emitCrc <= 1'b0;
      end
      if(!when_PhyTx_l79) begin
        if(when_PhyTx_l87) begin
          if(result_data_fire_2) begin
            emitCrc <= 1'b0;
          end
        end
        if(result_data_fire_3) begin
          counter <= (counter + 1'b1);
        end
      end
    end
  end


endmodule

module StreamFragmentWidthConvert (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              adapted_data_valid,
  input               adapted_data_ready,
  output              adapted_data_payload_last,
  output     [0:0]    adapted_data_payload_fragment,
  input               clk,
  input               reset
);

  wire                raw_data_fifo_io_pop_ready;
  wire                raw_data_fifo_io_push_ready;
  wire                raw_data_fifo_io_pop_valid;
  wire                raw_data_fifo_io_pop_payload_last;
  wire       [7:0]    raw_data_fifo_io_pop_payload_fragment;
  wire       [4:0]    raw_data_fifo_io_occupancy;
  wire       [4:0]    raw_data_fifo_io_availability;
  wire       [2:0]    _zz__zz_adapted_data_payload_last_1;
  wire       [0:0]    _zz__zz_adapted_data_payload_last_1_1;
  reg        [0:0]    _zz_adapted_data_payload_fragment_1;
  wire                _zz_adapted_data_valid;
  wire                _zz_io_pop_ready;
  reg                 _zz_adapted_data_payload_last;
  reg        [2:0]    _zz_adapted_data_payload_last_1;
  reg        [2:0]    _zz_adapted_data_payload_last_2;
  wire                _zz_adapted_data_payload_last_3;
  wire       [7:0]    _zz_adapted_data_payload_fragment;

  assign _zz__zz_adapted_data_payload_last_1_1 = _zz_adapted_data_payload_last;
  assign _zz__zz_adapted_data_payload_last_1 = {2'd0, _zz__zz_adapted_data_payload_last_1_1};
  StreamFifo raw_data_fifo (
    .io_push_valid            (raw_data_valid                            ), //i
    .io_push_ready            (raw_data_fifo_io_push_ready               ), //o
    .io_push_payload_last     (raw_data_payload_last                     ), //i
    .io_push_payload_fragment (raw_data_payload_fragment[7:0]            ), //i
    .io_pop_valid             (raw_data_fifo_io_pop_valid                ), //o
    .io_pop_ready             (raw_data_fifo_io_pop_ready                ), //i
    .io_pop_payload_last      (raw_data_fifo_io_pop_payload_last         ), //o
    .io_pop_payload_fragment  (raw_data_fifo_io_pop_payload_fragment[7:0]), //o
    .io_flush                 (1'b0                                      ), //i
    .io_occupancy             (raw_data_fifo_io_occupancy[4:0]           ), //o
    .io_availability          (raw_data_fifo_io_availability[4:0]        ), //o
    .clk                      (clk                                       ), //i
    .reset                    (reset                                     )  //i
  );
  always @(*) begin
    case(_zz_adapted_data_payload_last_2)
      3'b000 : _zz_adapted_data_payload_fragment_1 = _zz_adapted_data_payload_fragment[0 : 0];
      3'b001 : _zz_adapted_data_payload_fragment_1 = _zz_adapted_data_payload_fragment[1 : 1];
      3'b010 : _zz_adapted_data_payload_fragment_1 = _zz_adapted_data_payload_fragment[2 : 2];
      3'b011 : _zz_adapted_data_payload_fragment_1 = _zz_adapted_data_payload_fragment[3 : 3];
      3'b100 : _zz_adapted_data_payload_fragment_1 = _zz_adapted_data_payload_fragment[4 : 4];
      3'b101 : _zz_adapted_data_payload_fragment_1 = _zz_adapted_data_payload_fragment[5 : 5];
      3'b110 : _zz_adapted_data_payload_fragment_1 = _zz_adapted_data_payload_fragment[6 : 6];
      default : _zz_adapted_data_payload_fragment_1 = _zz_adapted_data_payload_fragment[7 : 7];
    endcase
  end

  assign raw_data_ready = raw_data_fifo_io_push_ready;
  always @(*) begin
    _zz_adapted_data_payload_last = 1'b0;
    if((_zz_adapted_data_valid && _zz_io_pop_ready)) begin
      _zz_adapted_data_payload_last = 1'b1;
    end
  end

  assign _zz_adapted_data_payload_last_3 = (_zz_adapted_data_payload_last_2 == 3'b111);
  always @(*) begin
    _zz_adapted_data_payload_last_1 = (_zz_adapted_data_payload_last_2 + _zz__zz_adapted_data_payload_last_1);
    if(1'b0) begin
      _zz_adapted_data_payload_last_1 = 3'b000;
    end
  end

  assign _zz_adapted_data_valid = raw_data_fifo_io_pop_valid;
  assign _zz_adapted_data_payload_fragment = raw_data_fifo_io_pop_payload_fragment;
  assign raw_data_fifo_io_pop_ready = (_zz_io_pop_ready && _zz_adapted_data_payload_last_3);
  assign adapted_data_valid = _zz_adapted_data_valid;
  assign _zz_io_pop_ready = adapted_data_ready;
  assign adapted_data_payload_last = (raw_data_fifo_io_pop_payload_last && _zz_adapted_data_payload_last_3);
  assign adapted_data_payload_fragment = _zz_adapted_data_payload_fragment_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_adapted_data_payload_last_2 <= 3'b000;
    end else begin
      _zz_adapted_data_payload_last_2 <= _zz_adapted_data_payload_last_1;
    end
  end


endmodule

module Crc (
  input               flush,
  input               input_valid,
  input      [7:0]    input_payload,
  output     [15:0]   result,
  output     [15:0]   resultNext,
  input               clk,
  input               reset
);

  wire       [15:0]   _zz_state_1;
  wire       [15:0]   _zz_state_2;
  wire       [15:0]   _zz_state_3;
  wire       [15:0]   _zz_state_4;
  wire       [15:0]   _zz_state_5;
  wire       [15:0]   _zz_state_6;
  wire       [15:0]   _zz_state_7;
  wire       [15:0]   _zz_state_8;
  wire                _zz_result;
  wire       [0:0]    _zz_result_1;
  wire       [4:0]    _zz_result_2;
  wire                _zz_resultNext;
  wire       [0:0]    _zz_resultNext_1;
  wire       [4:0]    _zz_resultNext_2;
  reg        [15:0]   state_8;
  reg        [15:0]   state_7;
  reg        [15:0]   state_6;
  reg        [15:0]   state_5;
  reg        [15:0]   state_4;
  reg        [15:0]   state_3;
  reg        [15:0]   state_2;
  reg        [15:0]   state_1;
  reg        [15:0]   state;
  wire       [15:0]   stateXor;
  wire       [15:0]   accXor;

  assign _zz_state_1 = (state <<< 1);
  assign _zz_state_2 = (state_1 <<< 1);
  assign _zz_state_3 = (state_2 <<< 1);
  assign _zz_state_4 = (state_3 <<< 1);
  assign _zz_state_5 = (state_4 <<< 1);
  assign _zz_state_6 = (state_5 <<< 1);
  assign _zz_state_7 = (state_6 <<< 1);
  assign _zz_state_8 = (state_7 <<< 1);
  assign _zz_result = stateXor[9];
  assign _zz_result_1 = stateXor[10];
  assign _zz_result_2 = {stateXor[11],{stateXor[12],{stateXor[13],{stateXor[14],stateXor[15]}}}};
  assign _zz_resultNext = accXor[9];
  assign _zz_resultNext_1 = accXor[10];
  assign _zz_resultNext_2 = {accXor[11],{accXor[12],{accXor[13],{accXor[14],accXor[15]}}}};
  always @(*) begin
    state_8 = state_7;
    state_8 = (_zz_state_8 ^ ((input_payload[7] ^ state_7[15]) ? 16'h1021 : 16'h0));
  end

  always @(*) begin
    state_7 = state_6;
    state_7 = (_zz_state_7 ^ ((input_payload[6] ^ state_6[15]) ? 16'h1021 : 16'h0));
  end

  always @(*) begin
    state_6 = state_5;
    state_6 = (_zz_state_6 ^ ((input_payload[5] ^ state_5[15]) ? 16'h1021 : 16'h0));
  end

  always @(*) begin
    state_5 = state_4;
    state_5 = (_zz_state_5 ^ ((input_payload[4] ^ state_4[15]) ? 16'h1021 : 16'h0));
  end

  always @(*) begin
    state_4 = state_3;
    state_4 = (_zz_state_4 ^ ((input_payload[3] ^ state_3[15]) ? 16'h1021 : 16'h0));
  end

  always @(*) begin
    state_3 = state_2;
    state_3 = (_zz_state_3 ^ ((input_payload[2] ^ state_2[15]) ? 16'h1021 : 16'h0));
  end

  always @(*) begin
    state_2 = state_1;
    state_2 = (_zz_state_2 ^ ((input_payload[1] ^ state_1[15]) ? 16'h1021 : 16'h0));
  end

  always @(*) begin
    state_1 = state;
    state_1 = (_zz_state_1 ^ ((input_payload[0] ^ state[15]) ? 16'h1021 : 16'h0));
  end

  assign stateXor = (state ^ 16'h0);
  assign accXor = (state_8 ^ 16'h0);
  assign result = {stateXor[0],{stateXor[1],{stateXor[2],{stateXor[3],{stateXor[4],{stateXor[5],{stateXor[6],{stateXor[7],{stateXor[8],{_zz_result,{_zz_result_1,_zz_result_2}}}}}}}}}}};
  assign resultNext = {accXor[0],{accXor[1],{accXor[2],{accXor[3],{accXor[4],{accXor[5],{accXor[6],{accXor[7],{accXor[8],{_zz_resultNext,{_zz_resultNext_1,_zz_resultNext_2}}}}}}}}}}};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      state <= 16'h0;
    end else begin
      if(flush) begin
        state <= 16'h0;
      end else begin
        if(input_valid) begin
          state <= state_8;
        end
      end
    end
  end


endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [7:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [7:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [4:0]    io_occupancy,
  output     [4:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [8:0]    _zz_logic_ram_port0;
  wire       [3:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [3:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [8:0]    _zz_logic_ram_port_1;
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
  wire       [8:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l1021;
  wire       [3:0]    logic_ptrDif;
  reg [8:0] logic_ram [0:15];

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
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[8 : 1];
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
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
      if(when_Stream_l1021) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule
