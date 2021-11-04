// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : ConvCombTest
// Git hash  : d56fca2d93dfc76f393b3b10236c69be445a29e8


`define TracebackStates_binary_sequential_type [2:0]
`define TracebackStates_binary_sequential_IDLE 3'b000
`define TracebackStates_binary_sequential_TB 3'b001
`define TracebackStates_binary_sequential_DECODE 3'b010
`define TracebackStates_binary_sequential_HALT 3'b011
`define TracebackStates_binary_sequential_TAIL_DECODE 3'b100
`define TracebackStates_binary_sequential_FINISH 3'b101

`define ReorderLifoStates_binary_sequential_type [0:0]
`define ReorderLifoStates_binary_sequential_PUSH 1'b0
`define ReorderLifoStates_binary_sequential_POP 1'b1


module ConvCombTest (
  input               tail_bits_valid,
  input      [6:0]    tail_bits_payload,
  input               raw_data_valid,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output              decoded_data_valid,
  output              decoded_data_payload_last,
  output     [0:0]    decoded_data_payload_fragment,
  input               clk,
  input               reset
);
  wire                encoder_coded_data_valid;
  wire                encoder_coded_data_payload_last;
  wire       [2:0]    encoder_coded_data_payload_fragment;
  wire                encoded_fifo_io_push_ready;
  wire                encoded_fifo_io_pop_valid;
  wire                encoded_fifo_io_pop_payload_last;
  wire       [2:0]    encoded_fifo_io_pop_payload_fragment;
  wire       [10:0]   encoded_fifo_io_occupancy;
  wire       [10:0]   encoded_fifo_io_availability;
  wire                decoder_raw_data_ready;
  wire                decoder_decoded_data_valid;
  wire                decoder_decoded_data_payload_last;
  wire       [0:0]    decoder_decoded_data_payload_fragment;

  ConvEncoder encoder (
    .tail_bits_valid                (tail_bits_valid                      ), //i
    .tail_bits_payload              (tail_bits_payload                    ), //i
    .raw_data_valid                 (raw_data_valid                       ), //i
    .raw_data_payload_last          (raw_data_payload_last                ), //i
    .raw_data_payload_fragment      (raw_data_payload_fragment            ), //i
    .coded_data_valid               (encoder_coded_data_valid             ), //o
    .coded_data_payload_last        (encoder_coded_data_payload_last      ), //o
    .coded_data_payload_fragment    (encoder_coded_data_payload_fragment  ), //o
    .clk                            (clk                                  ), //i
    .reset                          (reset                                )  //i
  );
  StreamFifo_1 encoded_fifo (
    .io_push_valid               (encoder_coded_data_valid              ), //i
    .io_push_ready               (encoded_fifo_io_push_ready            ), //o
    .io_push_payload_last        (encoder_coded_data_payload_last       ), //i
    .io_push_payload_fragment    (encoder_coded_data_payload_fragment   ), //i
    .io_pop_valid                (encoded_fifo_io_pop_valid             ), //o
    .io_pop_ready                (decoder_raw_data_ready                ), //i
    .io_pop_payload_last         (encoded_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (encoded_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                  ), //i
    .io_occupancy                (encoded_fifo_io_occupancy             ), //o
    .io_availability             (encoded_fifo_io_availability          ), //o
    .clk                         (clk                                   ), //i
    .reset                       (reset                                 )  //i
  );
  ViterbiDecoder decoder (
    .raw_data_valid                   (encoded_fifo_io_pop_valid              ), //i
    .raw_data_ready                   (decoder_raw_data_ready                 ), //o
    .raw_data_payload_last            (encoded_fifo_io_pop_payload_last       ), //i
    ._zz_in_b                         (encoded_fifo_io_pop_payload_fragment   ), //i
    .decoded_data_valid               (decoder_decoded_data_valid             ), //o
    .decoded_data_payload_last        (decoder_decoded_data_payload_last      ), //o
    .decoded_data_payload_fragment    (decoder_decoded_data_payload_fragment  ), //o
    .clk                              (clk                                    ), //i
    .reset                            (reset                                  )  //i
  );
  assign decoded_data_valid = decoder_decoded_data_valid;
  assign decoded_data_payload_last = decoder_decoded_data_payload_last;
  assign decoded_data_payload_fragment = decoder_decoded_data_payload_fragment;

endmodule

module ViterbiDecoder (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [2:0]    _zz_in_b,
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
    .raw_data_valid             (raw_data_fire                     ), //i
    .raw_data_ready             (pmu_core_raw_data_ready           ), //o
    .raw_data_payload_last      (raw_data_payload_last             ), //i
    ._zz_in_b                   (_zz_in_b                          ), //i
    .tbu_finished               (tbu_core_finished                 ), //i
    .min_idx                    (pmu_core_min_idx                  ), //o
    .s_path_valid               (pmu_core_s_path_valid             ), //o
    .s_path_payload_last        (pmu_core_s_path_payload_last      ), //o
    .s_path_payload_fragment    (pmu_core_s_path_payload_fragment  ), //o
    .clk                        (clk                               ), //i
    .reset                      (reset                             )  //i
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
  input      [2:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [2:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [10:0]   io_occupancy,
  output     [10:0]   io_availability,
  input               clk,
  input               reset
);
  reg        [3:0]    _zz_logic_ram_port0;
  wire       [9:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [9:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [3:0]    _zz_logic_ram_port_1;
  wire       [9:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [9:0]    logic_pushPtr_valueNext;
  reg        [9:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [9:0]    logic_popPtr_valueNext;
  reg        [9:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [3:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l933;
  wire       [9:0]    logic_ptrDif;
  reg [3:0] logic_ram [0:1023];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {9'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {9'd0, _zz_logic_popPtr_valueNext_1};
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 10'h3ff);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 10'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 10'h3ff);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 10'h0;
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
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[3 : 1];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 10'h0;
      logic_popPtr_value <= 10'h0;
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

module ConvEncoder (
  input               tail_bits_valid,
  input      [6:0]    tail_bits_payload,
  input               raw_data_valid,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output              coded_data_valid,
  output              coded_data_payload_last,
  output     [2:0]    coded_data_payload_fragment,
  input               clk,
  input               reset
);
  wire       [7:0]    _zz_r_enc_0;
  reg        [0:0]    raw_data_payload;
  reg                 raw_data_valid_1;
  reg                 raw_data_last;
  reg        [2:0]    coded_data;
  reg                 coded_data_valid_1;
  reg        [6:0]    r_enc_buf;
  wire       [6:0]    r_enc_0;
  wire       [0:0]    code_vec_0;
  wire       [0:0]    code_vec_1;
  wire       [0:0]    code_vec_2;
  wire       [6:0]    _zz_code_vec_0;
  wire       [6:0]    _zz_code_vec_1;
  wire       [6:0]    _zz_code_vec_2;
  reg                 raw_data_last_regNext;

  assign _zz_r_enc_0 = {raw_data_payload[0],r_enc_buf};
  assign r_enc_0 = _zz_r_enc_0[7 : 1];
  assign _zz_code_vec_0 = (r_enc_0 & 7'h5b);
  assign code_vec_0[0] = ((((((_zz_code_vec_0[0] ^ _zz_code_vec_0[1]) ^ _zz_code_vec_0[2]) ^ _zz_code_vec_0[3]) ^ _zz_code_vec_0[4]) ^ _zz_code_vec_0[5]) ^ _zz_code_vec_0[6]);
  assign _zz_code_vec_1 = (r_enc_0 & 7'h79);
  assign code_vec_1[0] = ((((((_zz_code_vec_1[0] ^ _zz_code_vec_1[1]) ^ _zz_code_vec_1[2]) ^ _zz_code_vec_1[3]) ^ _zz_code_vec_1[4]) ^ _zz_code_vec_1[5]) ^ _zz_code_vec_1[6]);
  assign _zz_code_vec_2 = (r_enc_0 & 7'h75);
  assign code_vec_2[0] = ((((((_zz_code_vec_2[0] ^ _zz_code_vec_2[1]) ^ _zz_code_vec_2[2]) ^ _zz_code_vec_2[3]) ^ _zz_code_vec_2[4]) ^ _zz_code_vec_2[5]) ^ _zz_code_vec_2[6]);
  assign coded_data_payload_fragment = coded_data;
  assign coded_data_valid = coded_data_valid_1;
  assign coded_data_payload_last = raw_data_last_regNext;
  always @(posedge clk) begin
    raw_data_payload <= raw_data_payload_fragment;
    if(tail_bits_valid) begin
      r_enc_buf <= tail_bits_payload;
    end else begin
      if(raw_data_valid_1) begin
        r_enc_buf <= r_enc_0;
        coded_data <= {code_vec_0,{code_vec_1,code_vec_2}};
      end
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      raw_data_valid_1 <= 1'b0;
      raw_data_last <= 1'b0;
      coded_data_valid_1 <= 1'b0;
      raw_data_last_regNext <= 1'b0;
    end else begin
      raw_data_valid_1 <= raw_data_valid;
      raw_data_last <= raw_data_payload_last;
      if(!tail_bits_valid) begin
        if(raw_data_valid_1) begin
          coded_data_valid_1 <= 1'b1;
        end else begin
          coded_data_valid_1 <= 1'b0;
        end
      end
      raw_data_last_regNext <= raw_data_last;
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
  wire                inverted_order_fifo_io_push_ready;
  wire                inverted_order_fifo_io_pop_valid;
  wire                inverted_order_fifo_io_pop_payload_last;
  wire       [1:0]    inverted_order_fifo_io_pop_payload_fragment;
  wire       [9:0]    inverted_order_fifo_io_occupancy;
  wire       [9:0]    inverted_order_fifo_io_availability;
  reg        [511:0]  decoded_lifo;
  reg        [511:0]  decoded_last_lifo;
  reg        [8:0]    lifo_head_cursor;
  reg                 fifo_pop_ready;
  reg                 decoded_data_valid_1;
  reg                 data_last;
  reg                 decoded_data_last;
  reg        [0:0]    decoded_data;
  reg        `ReorderLifoStates_binary_sequential_type reorder_state;
  wire                inverted_order_fifo_io_pop_fire;
  wire                when_ReorderLifo_l54;
  `ifndef SYNTHESIS
  reg [31:0] reorder_state_string;
  `endif


  StreamFifo inverted_order_fifo (
    .io_push_valid               (inverted_order_valid                         ), //i
    .io_push_ready               (inverted_order_fifo_io_push_ready            ), //o
    .io_push_payload_last        (inverted_order_payload_last                  ), //i
    .io_push_payload_fragment    (inverted_order_payload_fragment              ), //i
    .io_pop_valid                (inverted_order_fifo_io_pop_valid             ), //o
    .io_pop_ready                (fifo_pop_ready                               ), //i
    .io_pop_payload_last         (inverted_order_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (inverted_order_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                         ), //i
    .io_occupancy                (inverted_order_fifo_io_occupancy             ), //o
    .io_availability             (inverted_order_fifo_io_availability          ), //o
    .clk                         (clk                                          ), //i
    .reset                       (reset                                        )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(reorder_state)
      `ReorderLifoStates_binary_sequential_PUSH : reorder_state_string = "PUSH";
      `ReorderLifoStates_binary_sequential_POP : reorder_state_string = "POP ";
      default : reorder_state_string = "????";
    endcase
  end
  `endif

  assign inverted_order_fifo_io_pop_fire = (inverted_order_fifo_io_pop_valid && fifo_pop_ready);
  assign when_ReorderLifo_l54 = (lifo_head_cursor == 9'h0);
  assign decoded_data_payload_fragment = decoded_data;
  assign decoded_data_valid = decoded_data_valid_1;
  assign decoded_data_payload_last = decoded_data_last;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      lifo_head_cursor <= 9'h0;
      fifo_pop_ready <= 1'b0;
      decoded_data_valid_1 <= 1'b0;
      data_last <= 1'b0;
      decoded_data_last <= 1'b0;
      reorder_state <= `ReorderLifoStates_binary_sequential_PUSH;
    end else begin
      case(reorder_state)
        `ReorderLifoStates_binary_sequential_PUSH : begin
          if(inverted_order_fifo_io_pop_fire) begin
            if(inverted_order_fifo_io_pop_payload_last) begin
              fifo_pop_ready <= 1'b0;
              reorder_state <= `ReorderLifoStates_binary_sequential_POP;
            end else begin
              fifo_pop_ready <= 1'b1;
              lifo_head_cursor <= (lifo_head_cursor + 9'h001);
            end
          end else begin
            fifo_pop_ready <= 1'b1;
          end
          decoded_data_valid_1 <= 1'b0;
          decoded_data_last <= 1'b0;
          data_last <= 1'b0;
        end
        default : begin
          if(when_ReorderLifo_l54) begin
            reorder_state <= `ReorderLifoStates_binary_sequential_PUSH;
            decoded_data_last <= data_last;
          end else begin
            lifo_head_cursor <= (lifo_head_cursor - 9'h001);
          end
          decoded_data_valid_1 <= 1'b1;
          data_last <= ((data_last == 1'b1) ? 1'b1 : decoded_last_lifo[lifo_head_cursor]);
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(reorder_state)
      `ReorderLifoStates_binary_sequential_PUSH : begin
        if(inverted_order_fifo_io_pop_fire) begin
          decoded_lifo[lifo_head_cursor] <= inverted_order_fifo_io_pop_payload_fragment[0];
          decoded_last_lifo[lifo_head_cursor] <= inverted_order_fifo_io_pop_payload_fragment[1];
        end
      end
      default : begin
        decoded_data <= decoded_lifo[lifo_head_cursor];
      end
    endcase
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
  reg        [63:0]   _zz_survival_path_ram_1_port2;
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
  wire                _zz_survival_path_ram_1_port_3;
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
  assign _zz_ram_2_value = 1'b1;
  assign _zz_survival_path_ram_2_port = s_path_payload_fragment;
  assign _zz_survival_path_ram_2_port_1 = ((ram_select == 2'b10) && s_path_valid);
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
    if(_zz_ram_2_value) begin
      _zz_survival_path_ram_1_port2 <= survival_path_ram_1[ram_addr_read];
    end
  end

  always @(posedge clk) begin
    if(_zz_survival_path_ram_2_port_1) begin
      survival_path_ram_2[ram_addr_write] <= _zz_survival_path_ram_2_port;
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
  assign ram_2_value = _zz_survival_path_ram_1_port2;
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
  input      [2:0]    _zz_in_b,
  input               tbu_finished,
  output     [5:0]    min_idx,
  output              s_path_valid,
  output              s_path_payload_last,
  output     [63:0]   s_path_payload_fragment,
  input               clk,
  input               reset
);
  wire       [7:0]    addCompareSelect_64_dist_0;
  wire       [7:0]    addCompareSelect_64_dist_1;
  wire       [7:0]    addCompareSelect_65_dist_0;
  wire       [7:0]    addCompareSelect_65_dist_1;
  wire       [7:0]    addCompareSelect_66_dist_0;
  wire       [7:0]    addCompareSelect_66_dist_1;
  wire       [7:0]    addCompareSelect_67_dist_0;
  wire       [7:0]    addCompareSelect_67_dist_1;
  wire       [7:0]    addCompareSelect_68_dist_0;
  wire       [7:0]    addCompareSelect_68_dist_1;
  wire       [7:0]    addCompareSelect_69_dist_0;
  wire       [7:0]    addCompareSelect_69_dist_1;
  wire       [7:0]    addCompareSelect_70_dist_0;
  wire       [7:0]    addCompareSelect_70_dist_1;
  wire       [7:0]    addCompareSelect_71_dist_0;
  wire       [7:0]    addCompareSelect_71_dist_1;
  wire       [7:0]    addCompareSelect_72_dist_0;
  wire       [7:0]    addCompareSelect_72_dist_1;
  wire       [7:0]    addCompareSelect_73_dist_0;
  wire       [7:0]    addCompareSelect_73_dist_1;
  wire       [7:0]    addCompareSelect_74_dist_0;
  wire       [7:0]    addCompareSelect_74_dist_1;
  wire       [7:0]    addCompareSelect_75_dist_0;
  wire       [7:0]    addCompareSelect_75_dist_1;
  wire       [7:0]    addCompareSelect_76_dist_0;
  wire       [7:0]    addCompareSelect_76_dist_1;
  wire       [7:0]    addCompareSelect_77_dist_0;
  wire       [7:0]    addCompareSelect_77_dist_1;
  wire       [7:0]    addCompareSelect_78_dist_0;
  wire       [7:0]    addCompareSelect_78_dist_1;
  wire       [7:0]    addCompareSelect_79_dist_0;
  wire       [7:0]    addCompareSelect_79_dist_1;
  wire       [7:0]    addCompareSelect_80_dist_0;
  wire       [7:0]    addCompareSelect_80_dist_1;
  wire       [7:0]    addCompareSelect_81_dist_0;
  wire       [7:0]    addCompareSelect_81_dist_1;
  wire       [7:0]    addCompareSelect_82_dist_0;
  wire       [7:0]    addCompareSelect_82_dist_1;
  wire       [7:0]    addCompareSelect_83_dist_0;
  wire       [7:0]    addCompareSelect_83_dist_1;
  wire       [7:0]    addCompareSelect_84_dist_0;
  wire       [7:0]    addCompareSelect_84_dist_1;
  wire       [7:0]    addCompareSelect_85_dist_0;
  wire       [7:0]    addCompareSelect_85_dist_1;
  wire       [7:0]    addCompareSelect_86_dist_0;
  wire       [7:0]    addCompareSelect_86_dist_1;
  wire       [7:0]    addCompareSelect_87_dist_0;
  wire       [7:0]    addCompareSelect_87_dist_1;
  wire       [7:0]    addCompareSelect_88_dist_0;
  wire       [7:0]    addCompareSelect_88_dist_1;
  wire       [7:0]    addCompareSelect_89_dist_0;
  wire       [7:0]    addCompareSelect_89_dist_1;
  wire       [7:0]    addCompareSelect_90_dist_0;
  wire       [7:0]    addCompareSelect_90_dist_1;
  wire       [7:0]    addCompareSelect_91_dist_0;
  wire       [7:0]    addCompareSelect_91_dist_1;
  wire       [7:0]    addCompareSelect_92_dist_0;
  wire       [7:0]    addCompareSelect_92_dist_1;
  wire       [7:0]    addCompareSelect_93_dist_0;
  wire       [7:0]    addCompareSelect_93_dist_1;
  wire       [7:0]    addCompareSelect_94_dist_0;
  wire       [7:0]    addCompareSelect_94_dist_1;
  wire       [7:0]    addCompareSelect_95_dist_0;
  wire       [7:0]    addCompareSelect_95_dist_1;
  wire       [7:0]    addCompareSelect_96_dist_0;
  wire       [7:0]    addCompareSelect_96_dist_1;
  wire       [7:0]    addCompareSelect_97_dist_0;
  wire       [7:0]    addCompareSelect_97_dist_1;
  wire       [7:0]    addCompareSelect_98_dist_0;
  wire       [7:0]    addCompareSelect_98_dist_1;
  wire       [7:0]    addCompareSelect_99_dist_0;
  wire       [7:0]    addCompareSelect_99_dist_1;
  wire       [7:0]    addCompareSelect_100_dist_0;
  wire       [7:0]    addCompareSelect_100_dist_1;
  wire       [7:0]    addCompareSelect_101_dist_0;
  wire       [7:0]    addCompareSelect_101_dist_1;
  wire       [7:0]    addCompareSelect_102_dist_0;
  wire       [7:0]    addCompareSelect_102_dist_1;
  wire       [7:0]    addCompareSelect_103_dist_0;
  wire       [7:0]    addCompareSelect_103_dist_1;
  wire       [7:0]    addCompareSelect_104_dist_0;
  wire       [7:0]    addCompareSelect_104_dist_1;
  wire       [7:0]    addCompareSelect_105_dist_0;
  wire       [7:0]    addCompareSelect_105_dist_1;
  wire       [7:0]    addCompareSelect_106_dist_0;
  wire       [7:0]    addCompareSelect_106_dist_1;
  wire       [7:0]    addCompareSelect_107_dist_0;
  wire       [7:0]    addCompareSelect_107_dist_1;
  wire       [7:0]    addCompareSelect_108_dist_0;
  wire       [7:0]    addCompareSelect_108_dist_1;
  wire       [7:0]    addCompareSelect_109_dist_0;
  wire       [7:0]    addCompareSelect_109_dist_1;
  wire       [7:0]    addCompareSelect_110_dist_0;
  wire       [7:0]    addCompareSelect_110_dist_1;
  wire       [7:0]    addCompareSelect_111_dist_0;
  wire       [7:0]    addCompareSelect_111_dist_1;
  wire       [7:0]    addCompareSelect_112_dist_0;
  wire       [7:0]    addCompareSelect_112_dist_1;
  wire       [7:0]    addCompareSelect_113_dist_0;
  wire       [7:0]    addCompareSelect_113_dist_1;
  wire       [7:0]    addCompareSelect_114_dist_0;
  wire       [7:0]    addCompareSelect_114_dist_1;
  wire       [7:0]    addCompareSelect_115_dist_0;
  wire       [7:0]    addCompareSelect_115_dist_1;
  wire       [7:0]    addCompareSelect_116_dist_0;
  wire       [7:0]    addCompareSelect_116_dist_1;
  wire       [7:0]    addCompareSelect_117_dist_0;
  wire       [7:0]    addCompareSelect_117_dist_1;
  wire       [7:0]    addCompareSelect_118_dist_0;
  wire       [7:0]    addCompareSelect_118_dist_1;
  wire       [7:0]    addCompareSelect_119_dist_0;
  wire       [7:0]    addCompareSelect_119_dist_1;
  wire       [7:0]    addCompareSelect_120_dist_0;
  wire       [7:0]    addCompareSelect_120_dist_1;
  wire       [7:0]    addCompareSelect_121_dist_0;
  wire       [7:0]    addCompareSelect_121_dist_1;
  wire       [7:0]    addCompareSelect_122_dist_0;
  wire       [7:0]    addCompareSelect_122_dist_1;
  wire       [7:0]    addCompareSelect_123_dist_0;
  wire       [7:0]    addCompareSelect_123_dist_1;
  wire       [7:0]    addCompareSelect_124_dist_0;
  wire       [7:0]    addCompareSelect_124_dist_1;
  wire       [7:0]    addCompareSelect_125_dist_0;
  wire       [7:0]    addCompareSelect_125_dist_1;
  wire       [7:0]    addCompareSelect_126_dist_0;
  wire       [7:0]    addCompareSelect_126_dist_1;
  wire       [7:0]    addCompareSelect_127_dist_0;
  wire       [7:0]    addCompareSelect_127_dist_1;
  wire       [1:0]    branchMetric_64_dist_0;
  wire       [1:0]    branchMetric_64_dist_1;
  wire       [7:0]    addCompareSelect_64_state_weight;
  wire                addCompareSelect_64_decision;
  wire       [1:0]    branchMetric_65_dist_0;
  wire       [1:0]    branchMetric_65_dist_1;
  wire       [7:0]    addCompareSelect_65_state_weight;
  wire                addCompareSelect_65_decision;
  wire       [1:0]    branchMetric_66_dist_0;
  wire       [1:0]    branchMetric_66_dist_1;
  wire       [7:0]    addCompareSelect_66_state_weight;
  wire                addCompareSelect_66_decision;
  wire       [1:0]    branchMetric_67_dist_0;
  wire       [1:0]    branchMetric_67_dist_1;
  wire       [7:0]    addCompareSelect_67_state_weight;
  wire                addCompareSelect_67_decision;
  wire       [1:0]    branchMetric_68_dist_0;
  wire       [1:0]    branchMetric_68_dist_1;
  wire       [7:0]    addCompareSelect_68_state_weight;
  wire                addCompareSelect_68_decision;
  wire       [1:0]    branchMetric_69_dist_0;
  wire       [1:0]    branchMetric_69_dist_1;
  wire       [7:0]    addCompareSelect_69_state_weight;
  wire                addCompareSelect_69_decision;
  wire       [1:0]    branchMetric_70_dist_0;
  wire       [1:0]    branchMetric_70_dist_1;
  wire       [7:0]    addCompareSelect_70_state_weight;
  wire                addCompareSelect_70_decision;
  wire       [1:0]    branchMetric_71_dist_0;
  wire       [1:0]    branchMetric_71_dist_1;
  wire       [7:0]    addCompareSelect_71_state_weight;
  wire                addCompareSelect_71_decision;
  wire       [1:0]    branchMetric_72_dist_0;
  wire       [1:0]    branchMetric_72_dist_1;
  wire       [7:0]    addCompareSelect_72_state_weight;
  wire                addCompareSelect_72_decision;
  wire       [1:0]    branchMetric_73_dist_0;
  wire       [1:0]    branchMetric_73_dist_1;
  wire       [7:0]    addCompareSelect_73_state_weight;
  wire                addCompareSelect_73_decision;
  wire       [1:0]    branchMetric_74_dist_0;
  wire       [1:0]    branchMetric_74_dist_1;
  wire       [7:0]    addCompareSelect_74_state_weight;
  wire                addCompareSelect_74_decision;
  wire       [1:0]    branchMetric_75_dist_0;
  wire       [1:0]    branchMetric_75_dist_1;
  wire       [7:0]    addCompareSelect_75_state_weight;
  wire                addCompareSelect_75_decision;
  wire       [1:0]    branchMetric_76_dist_0;
  wire       [1:0]    branchMetric_76_dist_1;
  wire       [7:0]    addCompareSelect_76_state_weight;
  wire                addCompareSelect_76_decision;
  wire       [1:0]    branchMetric_77_dist_0;
  wire       [1:0]    branchMetric_77_dist_1;
  wire       [7:0]    addCompareSelect_77_state_weight;
  wire                addCompareSelect_77_decision;
  wire       [1:0]    branchMetric_78_dist_0;
  wire       [1:0]    branchMetric_78_dist_1;
  wire       [7:0]    addCompareSelect_78_state_weight;
  wire                addCompareSelect_78_decision;
  wire       [1:0]    branchMetric_79_dist_0;
  wire       [1:0]    branchMetric_79_dist_1;
  wire       [7:0]    addCompareSelect_79_state_weight;
  wire                addCompareSelect_79_decision;
  wire       [1:0]    branchMetric_80_dist_0;
  wire       [1:0]    branchMetric_80_dist_1;
  wire       [7:0]    addCompareSelect_80_state_weight;
  wire                addCompareSelect_80_decision;
  wire       [1:0]    branchMetric_81_dist_0;
  wire       [1:0]    branchMetric_81_dist_1;
  wire       [7:0]    addCompareSelect_81_state_weight;
  wire                addCompareSelect_81_decision;
  wire       [1:0]    branchMetric_82_dist_0;
  wire       [1:0]    branchMetric_82_dist_1;
  wire       [7:0]    addCompareSelect_82_state_weight;
  wire                addCompareSelect_82_decision;
  wire       [1:0]    branchMetric_83_dist_0;
  wire       [1:0]    branchMetric_83_dist_1;
  wire       [7:0]    addCompareSelect_83_state_weight;
  wire                addCompareSelect_83_decision;
  wire       [1:0]    branchMetric_84_dist_0;
  wire       [1:0]    branchMetric_84_dist_1;
  wire       [7:0]    addCompareSelect_84_state_weight;
  wire                addCompareSelect_84_decision;
  wire       [1:0]    branchMetric_85_dist_0;
  wire       [1:0]    branchMetric_85_dist_1;
  wire       [7:0]    addCompareSelect_85_state_weight;
  wire                addCompareSelect_85_decision;
  wire       [1:0]    branchMetric_86_dist_0;
  wire       [1:0]    branchMetric_86_dist_1;
  wire       [7:0]    addCompareSelect_86_state_weight;
  wire                addCompareSelect_86_decision;
  wire       [1:0]    branchMetric_87_dist_0;
  wire       [1:0]    branchMetric_87_dist_1;
  wire       [7:0]    addCompareSelect_87_state_weight;
  wire                addCompareSelect_87_decision;
  wire       [1:0]    branchMetric_88_dist_0;
  wire       [1:0]    branchMetric_88_dist_1;
  wire       [7:0]    addCompareSelect_88_state_weight;
  wire                addCompareSelect_88_decision;
  wire       [1:0]    branchMetric_89_dist_0;
  wire       [1:0]    branchMetric_89_dist_1;
  wire       [7:0]    addCompareSelect_89_state_weight;
  wire                addCompareSelect_89_decision;
  wire       [1:0]    branchMetric_90_dist_0;
  wire       [1:0]    branchMetric_90_dist_1;
  wire       [7:0]    addCompareSelect_90_state_weight;
  wire                addCompareSelect_90_decision;
  wire       [1:0]    branchMetric_91_dist_0;
  wire       [1:0]    branchMetric_91_dist_1;
  wire       [7:0]    addCompareSelect_91_state_weight;
  wire                addCompareSelect_91_decision;
  wire       [1:0]    branchMetric_92_dist_0;
  wire       [1:0]    branchMetric_92_dist_1;
  wire       [7:0]    addCompareSelect_92_state_weight;
  wire                addCompareSelect_92_decision;
  wire       [1:0]    branchMetric_93_dist_0;
  wire       [1:0]    branchMetric_93_dist_1;
  wire       [7:0]    addCompareSelect_93_state_weight;
  wire                addCompareSelect_93_decision;
  wire       [1:0]    branchMetric_94_dist_0;
  wire       [1:0]    branchMetric_94_dist_1;
  wire       [7:0]    addCompareSelect_94_state_weight;
  wire                addCompareSelect_94_decision;
  wire       [1:0]    branchMetric_95_dist_0;
  wire       [1:0]    branchMetric_95_dist_1;
  wire       [7:0]    addCompareSelect_95_state_weight;
  wire                addCompareSelect_95_decision;
  wire       [1:0]    branchMetric_96_dist_0;
  wire       [1:0]    branchMetric_96_dist_1;
  wire       [7:0]    addCompareSelect_96_state_weight;
  wire                addCompareSelect_96_decision;
  wire       [1:0]    branchMetric_97_dist_0;
  wire       [1:0]    branchMetric_97_dist_1;
  wire       [7:0]    addCompareSelect_97_state_weight;
  wire                addCompareSelect_97_decision;
  wire       [1:0]    branchMetric_98_dist_0;
  wire       [1:0]    branchMetric_98_dist_1;
  wire       [7:0]    addCompareSelect_98_state_weight;
  wire                addCompareSelect_98_decision;
  wire       [1:0]    branchMetric_99_dist_0;
  wire       [1:0]    branchMetric_99_dist_1;
  wire       [7:0]    addCompareSelect_99_state_weight;
  wire                addCompareSelect_99_decision;
  wire       [1:0]    branchMetric_100_dist_0;
  wire       [1:0]    branchMetric_100_dist_1;
  wire       [7:0]    addCompareSelect_100_state_weight;
  wire                addCompareSelect_100_decision;
  wire       [1:0]    branchMetric_101_dist_0;
  wire       [1:0]    branchMetric_101_dist_1;
  wire       [7:0]    addCompareSelect_101_state_weight;
  wire                addCompareSelect_101_decision;
  wire       [1:0]    branchMetric_102_dist_0;
  wire       [1:0]    branchMetric_102_dist_1;
  wire       [7:0]    addCompareSelect_102_state_weight;
  wire                addCompareSelect_102_decision;
  wire       [1:0]    branchMetric_103_dist_0;
  wire       [1:0]    branchMetric_103_dist_1;
  wire       [7:0]    addCompareSelect_103_state_weight;
  wire                addCompareSelect_103_decision;
  wire       [1:0]    branchMetric_104_dist_0;
  wire       [1:0]    branchMetric_104_dist_1;
  wire       [7:0]    addCompareSelect_104_state_weight;
  wire                addCompareSelect_104_decision;
  wire       [1:0]    branchMetric_105_dist_0;
  wire       [1:0]    branchMetric_105_dist_1;
  wire       [7:0]    addCompareSelect_105_state_weight;
  wire                addCompareSelect_105_decision;
  wire       [1:0]    branchMetric_106_dist_0;
  wire       [1:0]    branchMetric_106_dist_1;
  wire       [7:0]    addCompareSelect_106_state_weight;
  wire                addCompareSelect_106_decision;
  wire       [1:0]    branchMetric_107_dist_0;
  wire       [1:0]    branchMetric_107_dist_1;
  wire       [7:0]    addCompareSelect_107_state_weight;
  wire                addCompareSelect_107_decision;
  wire       [1:0]    branchMetric_108_dist_0;
  wire       [1:0]    branchMetric_108_dist_1;
  wire       [7:0]    addCompareSelect_108_state_weight;
  wire                addCompareSelect_108_decision;
  wire       [1:0]    branchMetric_109_dist_0;
  wire       [1:0]    branchMetric_109_dist_1;
  wire       [7:0]    addCompareSelect_109_state_weight;
  wire                addCompareSelect_109_decision;
  wire       [1:0]    branchMetric_110_dist_0;
  wire       [1:0]    branchMetric_110_dist_1;
  wire       [7:0]    addCompareSelect_110_state_weight;
  wire                addCompareSelect_110_decision;
  wire       [1:0]    branchMetric_111_dist_0;
  wire       [1:0]    branchMetric_111_dist_1;
  wire       [7:0]    addCompareSelect_111_state_weight;
  wire                addCompareSelect_111_decision;
  wire       [1:0]    branchMetric_112_dist_0;
  wire       [1:0]    branchMetric_112_dist_1;
  wire       [7:0]    addCompareSelect_112_state_weight;
  wire                addCompareSelect_112_decision;
  wire       [1:0]    branchMetric_113_dist_0;
  wire       [1:0]    branchMetric_113_dist_1;
  wire       [7:0]    addCompareSelect_113_state_weight;
  wire                addCompareSelect_113_decision;
  wire       [1:0]    branchMetric_114_dist_0;
  wire       [1:0]    branchMetric_114_dist_1;
  wire       [7:0]    addCompareSelect_114_state_weight;
  wire                addCompareSelect_114_decision;
  wire       [1:0]    branchMetric_115_dist_0;
  wire       [1:0]    branchMetric_115_dist_1;
  wire       [7:0]    addCompareSelect_115_state_weight;
  wire                addCompareSelect_115_decision;
  wire       [1:0]    branchMetric_116_dist_0;
  wire       [1:0]    branchMetric_116_dist_1;
  wire       [7:0]    addCompareSelect_116_state_weight;
  wire                addCompareSelect_116_decision;
  wire       [1:0]    branchMetric_117_dist_0;
  wire       [1:0]    branchMetric_117_dist_1;
  wire       [7:0]    addCompareSelect_117_state_weight;
  wire                addCompareSelect_117_decision;
  wire       [1:0]    branchMetric_118_dist_0;
  wire       [1:0]    branchMetric_118_dist_1;
  wire       [7:0]    addCompareSelect_118_state_weight;
  wire                addCompareSelect_118_decision;
  wire       [1:0]    branchMetric_119_dist_0;
  wire       [1:0]    branchMetric_119_dist_1;
  wire       [7:0]    addCompareSelect_119_state_weight;
  wire                addCompareSelect_119_decision;
  wire       [1:0]    branchMetric_120_dist_0;
  wire       [1:0]    branchMetric_120_dist_1;
  wire       [7:0]    addCompareSelect_120_state_weight;
  wire                addCompareSelect_120_decision;
  wire       [1:0]    branchMetric_121_dist_0;
  wire       [1:0]    branchMetric_121_dist_1;
  wire       [7:0]    addCompareSelect_121_state_weight;
  wire                addCompareSelect_121_decision;
  wire       [1:0]    branchMetric_122_dist_0;
  wire       [1:0]    branchMetric_122_dist_1;
  wire       [7:0]    addCompareSelect_122_state_weight;
  wire                addCompareSelect_122_decision;
  wire       [1:0]    branchMetric_123_dist_0;
  wire       [1:0]    branchMetric_123_dist_1;
  wire       [7:0]    addCompareSelect_123_state_weight;
  wire                addCompareSelect_123_decision;
  wire       [1:0]    branchMetric_124_dist_0;
  wire       [1:0]    branchMetric_124_dist_1;
  wire       [7:0]    addCompareSelect_124_state_weight;
  wire                addCompareSelect_124_decision;
  wire       [1:0]    branchMetric_125_dist_0;
  wire       [1:0]    branchMetric_125_dist_1;
  wire       [7:0]    addCompareSelect_125_state_weight;
  wire                addCompareSelect_125_decision;
  wire       [1:0]    branchMetric_126_dist_0;
  wire       [1:0]    branchMetric_126_dist_1;
  wire       [7:0]    addCompareSelect_126_state_weight;
  wire                addCompareSelect_126_decision;
  wire       [1:0]    branchMetric_127_dist_0;
  wire       [1:0]    branchMetric_127_dist_1;
  wire       [7:0]    addCompareSelect_127_state_weight;
  wire                addCompareSelect_127_decision;
  wire       [7:0]    minVal_1_min_val;
  wire       [5:0]    minVal_1_min_idx;
  reg        [7:0]    node_weight_0;
  reg        [7:0]    node_weight_1;
  reg        [7:0]    node_weight_2;
  reg        [7:0]    node_weight_3;
  reg        [7:0]    node_weight_4;
  reg        [7:0]    node_weight_5;
  reg        [7:0]    node_weight_6;
  reg        [7:0]    node_weight_7;
  reg        [7:0]    node_weight_8;
  reg        [7:0]    node_weight_9;
  reg        [7:0]    node_weight_10;
  reg        [7:0]    node_weight_11;
  reg        [7:0]    node_weight_12;
  reg        [7:0]    node_weight_13;
  reg        [7:0]    node_weight_14;
  reg        [7:0]    node_weight_15;
  reg        [7:0]    node_weight_16;
  reg        [7:0]    node_weight_17;
  reg        [7:0]    node_weight_18;
  reg        [7:0]    node_weight_19;
  reg        [7:0]    node_weight_20;
  reg        [7:0]    node_weight_21;
  reg        [7:0]    node_weight_22;
  reg        [7:0]    node_weight_23;
  reg        [7:0]    node_weight_24;
  reg        [7:0]    node_weight_25;
  reg        [7:0]    node_weight_26;
  reg        [7:0]    node_weight_27;
  reg        [7:0]    node_weight_28;
  reg        [7:0]    node_weight_29;
  reg        [7:0]    node_weight_30;
  reg        [7:0]    node_weight_31;
  reg        [7:0]    node_weight_32;
  reg        [7:0]    node_weight_33;
  reg        [7:0]    node_weight_34;
  reg        [7:0]    node_weight_35;
  reg        [7:0]    node_weight_36;
  reg        [7:0]    node_weight_37;
  reg        [7:0]    node_weight_38;
  reg        [7:0]    node_weight_39;
  reg        [7:0]    node_weight_40;
  reg        [7:0]    node_weight_41;
  reg        [7:0]    node_weight_42;
  reg        [7:0]    node_weight_43;
  reg        [7:0]    node_weight_44;
  reg        [7:0]    node_weight_45;
  reg        [7:0]    node_weight_46;
  reg        [7:0]    node_weight_47;
  reg        [7:0]    node_weight_48;
  reg        [7:0]    node_weight_49;
  reg        [7:0]    node_weight_50;
  reg        [7:0]    node_weight_51;
  reg        [7:0]    node_weight_52;
  reg        [7:0]    node_weight_53;
  reg        [7:0]    node_weight_54;
  reg        [7:0]    node_weight_55;
  reg        [7:0]    node_weight_56;
  reg        [7:0]    node_weight_57;
  reg        [7:0]    node_weight_58;
  reg        [7:0]    node_weight_59;
  reg        [7:0]    node_weight_60;
  reg        [7:0]    node_weight_61;
  reg        [7:0]    node_weight_62;
  reg        [7:0]    node_weight_63;
  reg        [1:0]    candidate_branches_0;
  reg        [1:0]    candidate_branches_1;
  reg        [1:0]    candidate_branches_2;
  reg        [1:0]    candidate_branches_3;
  reg        [1:0]    candidate_branches_4;
  reg        [1:0]    candidate_branches_5;
  reg        [1:0]    candidate_branches_6;
  reg        [1:0]    candidate_branches_7;
  reg        [1:0]    candidate_branches_8;
  reg        [1:0]    candidate_branches_9;
  reg        [1:0]    candidate_branches_10;
  reg        [1:0]    candidate_branches_11;
  reg        [1:0]    candidate_branches_12;
  reg        [1:0]    candidate_branches_13;
  reg        [1:0]    candidate_branches_14;
  reg        [1:0]    candidate_branches_15;
  reg        [1:0]    candidate_branches_16;
  reg        [1:0]    candidate_branches_17;
  reg        [1:0]    candidate_branches_18;
  reg        [1:0]    candidate_branches_19;
  reg        [1:0]    candidate_branches_20;
  reg        [1:0]    candidate_branches_21;
  reg        [1:0]    candidate_branches_22;
  reg        [1:0]    candidate_branches_23;
  reg        [1:0]    candidate_branches_24;
  reg        [1:0]    candidate_branches_25;
  reg        [1:0]    candidate_branches_26;
  reg        [1:0]    candidate_branches_27;
  reg        [1:0]    candidate_branches_28;
  reg        [1:0]    candidate_branches_29;
  reg        [1:0]    candidate_branches_30;
  reg        [1:0]    candidate_branches_31;
  reg        [1:0]    candidate_branches_32;
  reg        [1:0]    candidate_branches_33;
  reg        [1:0]    candidate_branches_34;
  reg        [1:0]    candidate_branches_35;
  reg        [1:0]    candidate_branches_36;
  reg        [1:0]    candidate_branches_37;
  reg        [1:0]    candidate_branches_38;
  reg        [1:0]    candidate_branches_39;
  reg        [1:0]    candidate_branches_40;
  reg        [1:0]    candidate_branches_41;
  reg        [1:0]    candidate_branches_42;
  reg        [1:0]    candidate_branches_43;
  reg        [1:0]    candidate_branches_44;
  reg        [1:0]    candidate_branches_45;
  reg        [1:0]    candidate_branches_46;
  reg        [1:0]    candidate_branches_47;
  reg        [1:0]    candidate_branches_48;
  reg        [1:0]    candidate_branches_49;
  reg        [1:0]    candidate_branches_50;
  reg        [1:0]    candidate_branches_51;
  reg        [1:0]    candidate_branches_52;
  reg        [1:0]    candidate_branches_53;
  reg        [1:0]    candidate_branches_54;
  reg        [1:0]    candidate_branches_55;
  reg        [1:0]    candidate_branches_56;
  reg        [1:0]    candidate_branches_57;
  reg        [1:0]    candidate_branches_58;
  reg        [1:0]    candidate_branches_59;
  reg        [1:0]    candidate_branches_60;
  reg        [1:0]    candidate_branches_61;
  reg        [1:0]    candidate_branches_62;
  reg        [1:0]    candidate_branches_63;
  reg        [1:0]    candidate_branches_64;
  reg        [1:0]    candidate_branches_65;
  reg        [1:0]    candidate_branches_66;
  reg        [1:0]    candidate_branches_67;
  reg        [1:0]    candidate_branches_68;
  reg        [1:0]    candidate_branches_69;
  reg        [1:0]    candidate_branches_70;
  reg        [1:0]    candidate_branches_71;
  reg        [1:0]    candidate_branches_72;
  reg        [1:0]    candidate_branches_73;
  reg        [1:0]    candidate_branches_74;
  reg        [1:0]    candidate_branches_75;
  reg        [1:0]    candidate_branches_76;
  reg        [1:0]    candidate_branches_77;
  reg        [1:0]    candidate_branches_78;
  reg        [1:0]    candidate_branches_79;
  reg        [1:0]    candidate_branches_80;
  reg        [1:0]    candidate_branches_81;
  reg        [1:0]    candidate_branches_82;
  reg        [1:0]    candidate_branches_83;
  reg        [1:0]    candidate_branches_84;
  reg        [1:0]    candidate_branches_85;
  reg        [1:0]    candidate_branches_86;
  reg        [1:0]    candidate_branches_87;
  reg        [1:0]    candidate_branches_88;
  reg        [1:0]    candidate_branches_89;
  reg        [1:0]    candidate_branches_90;
  reg        [1:0]    candidate_branches_91;
  reg        [1:0]    candidate_branches_92;
  reg        [1:0]    candidate_branches_93;
  reg        [1:0]    candidate_branches_94;
  reg        [1:0]    candidate_branches_95;
  reg        [1:0]    candidate_branches_96;
  reg        [1:0]    candidate_branches_97;
  reg        [1:0]    candidate_branches_98;
  reg        [1:0]    candidate_branches_99;
  reg        [1:0]    candidate_branches_100;
  reg        [1:0]    candidate_branches_101;
  reg        [1:0]    candidate_branches_102;
  reg        [1:0]    candidate_branches_103;
  reg        [1:0]    candidate_branches_104;
  reg        [1:0]    candidate_branches_105;
  reg        [1:0]    candidate_branches_106;
  reg        [1:0]    candidate_branches_107;
  reg        [1:0]    candidate_branches_108;
  reg        [1:0]    candidate_branches_109;
  reg        [1:0]    candidate_branches_110;
  reg        [1:0]    candidate_branches_111;
  reg        [1:0]    candidate_branches_112;
  reg        [1:0]    candidate_branches_113;
  reg        [1:0]    candidate_branches_114;
  reg        [1:0]    candidate_branches_115;
  reg        [1:0]    candidate_branches_116;
  reg        [1:0]    candidate_branches_117;
  reg        [1:0]    candidate_branches_118;
  reg        [1:0]    candidate_branches_119;
  reg        [1:0]    candidate_branches_120;
  reg        [1:0]    candidate_branches_121;
  reg        [1:0]    candidate_branches_122;
  reg        [1:0]    candidate_branches_123;
  reg        [1:0]    candidate_branches_124;
  reg        [1:0]    candidate_branches_125;
  reg        [1:0]    candidate_branches_126;
  reg        [1:0]    candidate_branches_127;
  reg        [63:0]   survival_path;
  reg                 raw_data_next;
  reg                 raw_data_last_next;
  reg                 survival_path_valid;
  reg                 survival_path_last;
  reg                 raw_data_ready_1;
  wire                when_PathMetric_l29;

  BranchMetric branchMetric_64 (
    ._zz_in_a      (3'b000                  ), //i
    ._zz_in_a_1    (3'b111                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_64_dist_0  ), //o
    .dist_1        (branchMetric_64_dist_1  )  //o
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
    ._zz_in_a      (3'b100                  ), //i
    ._zz_in_a_1    (3'b011                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_65_dist_0  ), //o
    .dist_1        (branchMetric_65_dist_1  )  //o
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
    ._zz_in_a      (3'b001                  ), //i
    ._zz_in_a_1    (3'b110                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_66_dist_0  ), //o
    .dist_1        (branchMetric_66_dist_1  )  //o
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
    ._zz_in_a      (3'b101                  ), //i
    ._zz_in_a_1    (3'b010                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_67_dist_0  ), //o
    .dist_1        (branchMetric_67_dist_1  )  //o
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
    ._zz_in_a      (3'b110                  ), //i
    ._zz_in_a_1    (3'b001                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_68_dist_0  ), //o
    .dist_1        (branchMetric_68_dist_1  )  //o
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
    ._zz_in_a      (3'b010                  ), //i
    ._zz_in_a_1    (3'b101                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_69_dist_0  ), //o
    .dist_1        (branchMetric_69_dist_1  )  //o
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
    ._zz_in_a      (3'b111                  ), //i
    ._zz_in_a_1    (3'b000                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_70_dist_0  ), //o
    .dist_1        (branchMetric_70_dist_1  )  //o
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
    ._zz_in_a      (3'b011                  ), //i
    ._zz_in_a_1    (3'b100                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_71_dist_0  ), //o
    .dist_1        (branchMetric_71_dist_1  )  //o
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
    ._zz_in_a      (3'b111                  ), //i
    ._zz_in_a_1    (3'b000                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_72_dist_0  ), //o
    .dist_1        (branchMetric_72_dist_1  )  //o
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
    ._zz_in_a      (3'b011                  ), //i
    ._zz_in_a_1    (3'b100                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_73_dist_0  ), //o
    .dist_1        (branchMetric_73_dist_1  )  //o
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
    ._zz_in_a      (3'b110                  ), //i
    ._zz_in_a_1    (3'b001                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_74_dist_0  ), //o
    .dist_1        (branchMetric_74_dist_1  )  //o
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
    ._zz_in_a      (3'b010                  ), //i
    ._zz_in_a_1    (3'b101                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_75_dist_0  ), //o
    .dist_1        (branchMetric_75_dist_1  )  //o
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
    ._zz_in_a      (3'b001                  ), //i
    ._zz_in_a_1    (3'b110                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_76_dist_0  ), //o
    .dist_1        (branchMetric_76_dist_1  )  //o
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
    ._zz_in_a      (3'b101                  ), //i
    ._zz_in_a_1    (3'b010                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_77_dist_0  ), //o
    .dist_1        (branchMetric_77_dist_1  )  //o
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
    ._zz_in_a      (3'b000                  ), //i
    ._zz_in_a_1    (3'b111                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_78_dist_0  ), //o
    .dist_1        (branchMetric_78_dist_1  )  //o
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
    ._zz_in_a      (3'b100                  ), //i
    ._zz_in_a_1    (3'b011                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_79_dist_0  ), //o
    .dist_1        (branchMetric_79_dist_1  )  //o
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
    ._zz_in_a      (3'b011                  ), //i
    ._zz_in_a_1    (3'b100                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_80_dist_0  ), //o
    .dist_1        (branchMetric_80_dist_1  )  //o
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
    ._zz_in_a      (3'b111                  ), //i
    ._zz_in_a_1    (3'b000                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_81_dist_0  ), //o
    .dist_1        (branchMetric_81_dist_1  )  //o
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
    ._zz_in_a      (3'b010                  ), //i
    ._zz_in_a_1    (3'b101                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_82_dist_0  ), //o
    .dist_1        (branchMetric_82_dist_1  )  //o
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
    ._zz_in_a      (3'b110                  ), //i
    ._zz_in_a_1    (3'b001                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_83_dist_0  ), //o
    .dist_1        (branchMetric_83_dist_1  )  //o
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
    ._zz_in_a      (3'b101                  ), //i
    ._zz_in_a_1    (3'b010                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_84_dist_0  ), //o
    .dist_1        (branchMetric_84_dist_1  )  //o
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
    ._zz_in_a      (3'b001                  ), //i
    ._zz_in_a_1    (3'b110                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_85_dist_0  ), //o
    .dist_1        (branchMetric_85_dist_1  )  //o
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
    ._zz_in_a      (3'b100                  ), //i
    ._zz_in_a_1    (3'b011                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_86_dist_0  ), //o
    .dist_1        (branchMetric_86_dist_1  )  //o
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
    ._zz_in_a      (3'b000                  ), //i
    ._zz_in_a_1    (3'b111                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_87_dist_0  ), //o
    .dist_1        (branchMetric_87_dist_1  )  //o
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
    ._zz_in_a      (3'b100                  ), //i
    ._zz_in_a_1    (3'b011                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_88_dist_0  ), //o
    .dist_1        (branchMetric_88_dist_1  )  //o
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
    ._zz_in_a      (3'b000                  ), //i
    ._zz_in_a_1    (3'b111                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_89_dist_0  ), //o
    .dist_1        (branchMetric_89_dist_1  )  //o
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
    ._zz_in_a      (3'b101                  ), //i
    ._zz_in_a_1    (3'b010                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_90_dist_0  ), //o
    .dist_1        (branchMetric_90_dist_1  )  //o
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
    ._zz_in_a      (3'b001                  ), //i
    ._zz_in_a_1    (3'b110                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_91_dist_0  ), //o
    .dist_1        (branchMetric_91_dist_1  )  //o
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
    ._zz_in_a      (3'b010                  ), //i
    ._zz_in_a_1    (3'b101                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_92_dist_0  ), //o
    .dist_1        (branchMetric_92_dist_1  )  //o
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
    ._zz_in_a      (3'b110                  ), //i
    ._zz_in_a_1    (3'b001                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_93_dist_0  ), //o
    .dist_1        (branchMetric_93_dist_1  )  //o
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
    ._zz_in_a      (3'b011                  ), //i
    ._zz_in_a_1    (3'b100                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_94_dist_0  ), //o
    .dist_1        (branchMetric_94_dist_1  )  //o
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
    ._zz_in_a      (3'b111                  ), //i
    ._zz_in_a_1    (3'b000                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_95_dist_0  ), //o
    .dist_1        (branchMetric_95_dist_1  )  //o
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
    ._zz_in_a      (3'b111                  ), //i
    ._zz_in_a_1    (3'b000                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_96_dist_0  ), //o
    .dist_1        (branchMetric_96_dist_1  )  //o
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
    ._zz_in_a      (3'b011                  ), //i
    ._zz_in_a_1    (3'b100                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_97_dist_0  ), //o
    .dist_1        (branchMetric_97_dist_1  )  //o
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
    ._zz_in_a      (3'b110                  ), //i
    ._zz_in_a_1    (3'b001                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_98_dist_0  ), //o
    .dist_1        (branchMetric_98_dist_1  )  //o
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
    ._zz_in_a      (3'b010                  ), //i
    ._zz_in_a_1    (3'b101                  ), //i
    ._zz_in_b      (_zz_in_b                ), //i
    .dist_0        (branchMetric_99_dist_0  ), //o
    .dist_1        (branchMetric_99_dist_1  )  //o
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
    ._zz_in_a      (3'b001                   ), //i
    ._zz_in_a_1    (3'b110                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_100_dist_0  ), //o
    .dist_1        (branchMetric_100_dist_1  )  //o
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
    ._zz_in_a      (3'b101                   ), //i
    ._zz_in_a_1    (3'b010                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_101_dist_0  ), //o
    .dist_1        (branchMetric_101_dist_1  )  //o
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
    ._zz_in_a      (3'b000                   ), //i
    ._zz_in_a_1    (3'b111                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_102_dist_0  ), //o
    .dist_1        (branchMetric_102_dist_1  )  //o
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
    ._zz_in_a      (3'b100                   ), //i
    ._zz_in_a_1    (3'b011                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_103_dist_0  ), //o
    .dist_1        (branchMetric_103_dist_1  )  //o
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
    ._zz_in_a      (3'b000                   ), //i
    ._zz_in_a_1    (3'b111                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_104_dist_0  ), //o
    .dist_1        (branchMetric_104_dist_1  )  //o
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
    ._zz_in_a      (3'b100                   ), //i
    ._zz_in_a_1    (3'b011                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_105_dist_0  ), //o
    .dist_1        (branchMetric_105_dist_1  )  //o
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
    ._zz_in_a      (3'b001                   ), //i
    ._zz_in_a_1    (3'b110                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_106_dist_0  ), //o
    .dist_1        (branchMetric_106_dist_1  )  //o
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
    ._zz_in_a      (3'b101                   ), //i
    ._zz_in_a_1    (3'b010                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_107_dist_0  ), //o
    .dist_1        (branchMetric_107_dist_1  )  //o
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
    ._zz_in_a      (3'b110                   ), //i
    ._zz_in_a_1    (3'b001                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_108_dist_0  ), //o
    .dist_1        (branchMetric_108_dist_1  )  //o
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
    ._zz_in_a      (3'b010                   ), //i
    ._zz_in_a_1    (3'b101                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_109_dist_0  ), //o
    .dist_1        (branchMetric_109_dist_1  )  //o
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
    ._zz_in_a      (3'b111                   ), //i
    ._zz_in_a_1    (3'b000                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_110_dist_0  ), //o
    .dist_1        (branchMetric_110_dist_1  )  //o
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
    ._zz_in_a      (3'b011                   ), //i
    ._zz_in_a_1    (3'b100                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_111_dist_0  ), //o
    .dist_1        (branchMetric_111_dist_1  )  //o
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
    ._zz_in_a      (3'b100                   ), //i
    ._zz_in_a_1    (3'b011                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_112_dist_0  ), //o
    .dist_1        (branchMetric_112_dist_1  )  //o
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
    ._zz_in_a      (3'b000                   ), //i
    ._zz_in_a_1    (3'b111                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_113_dist_0  ), //o
    .dist_1        (branchMetric_113_dist_1  )  //o
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
    ._zz_in_a      (3'b101                   ), //i
    ._zz_in_a_1    (3'b010                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_114_dist_0  ), //o
    .dist_1        (branchMetric_114_dist_1  )  //o
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
    ._zz_in_a      (3'b001                   ), //i
    ._zz_in_a_1    (3'b110                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_115_dist_0  ), //o
    .dist_1        (branchMetric_115_dist_1  )  //o
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
    ._zz_in_a      (3'b010                   ), //i
    ._zz_in_a_1    (3'b101                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_116_dist_0  ), //o
    .dist_1        (branchMetric_116_dist_1  )  //o
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
    ._zz_in_a      (3'b110                   ), //i
    ._zz_in_a_1    (3'b001                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_117_dist_0  ), //o
    .dist_1        (branchMetric_117_dist_1  )  //o
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
    ._zz_in_a      (3'b011                   ), //i
    ._zz_in_a_1    (3'b100                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_118_dist_0  ), //o
    .dist_1        (branchMetric_118_dist_1  )  //o
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
    ._zz_in_a      (3'b111                   ), //i
    ._zz_in_a_1    (3'b000                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_119_dist_0  ), //o
    .dist_1        (branchMetric_119_dist_1  )  //o
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
    ._zz_in_a      (3'b011                   ), //i
    ._zz_in_a_1    (3'b100                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_120_dist_0  ), //o
    .dist_1        (branchMetric_120_dist_1  )  //o
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
    ._zz_in_a      (3'b111                   ), //i
    ._zz_in_a_1    (3'b000                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_121_dist_0  ), //o
    .dist_1        (branchMetric_121_dist_1  )  //o
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
    ._zz_in_a      (3'b010                   ), //i
    ._zz_in_a_1    (3'b101                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_122_dist_0  ), //o
    .dist_1        (branchMetric_122_dist_1  )  //o
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
    ._zz_in_a      (3'b110                   ), //i
    ._zz_in_a_1    (3'b001                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_123_dist_0  ), //o
    .dist_1        (branchMetric_123_dist_1  )  //o
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
    ._zz_in_a      (3'b101                   ), //i
    ._zz_in_a_1    (3'b010                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_124_dist_0  ), //o
    .dist_1        (branchMetric_124_dist_1  )  //o
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
    ._zz_in_a      (3'b001                   ), //i
    ._zz_in_a_1    (3'b110                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_125_dist_0  ), //o
    .dist_1        (branchMetric_125_dist_1  )  //o
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
    ._zz_in_a      (3'b100                   ), //i
    ._zz_in_a_1    (3'b011                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_126_dist_0  ), //o
    .dist_1        (branchMetric_126_dist_1  )  //o
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
    ._zz_in_a      (3'b000                   ), //i
    ._zz_in_a_1    (3'b111                   ), //i
    ._zz_in_b      (_zz_in_b                 ), //i
    .dist_0        (branchMetric_127_dist_0  ), //o
    .dist_1        (branchMetric_127_dist_1  )  //o
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
  assign addCompareSelect_64_dist_0 = {6'd0, candidate_branches_0};
  assign addCompareSelect_64_dist_1 = {6'd0, candidate_branches_1};
  assign addCompareSelect_65_dist_0 = {6'd0, candidate_branches_2};
  assign addCompareSelect_65_dist_1 = {6'd0, candidate_branches_3};
  assign addCompareSelect_66_dist_0 = {6'd0, candidate_branches_4};
  assign addCompareSelect_66_dist_1 = {6'd0, candidate_branches_5};
  assign addCompareSelect_67_dist_0 = {6'd0, candidate_branches_6};
  assign addCompareSelect_67_dist_1 = {6'd0, candidate_branches_7};
  assign addCompareSelect_68_dist_0 = {6'd0, candidate_branches_8};
  assign addCompareSelect_68_dist_1 = {6'd0, candidate_branches_9};
  assign addCompareSelect_69_dist_0 = {6'd0, candidate_branches_10};
  assign addCompareSelect_69_dist_1 = {6'd0, candidate_branches_11};
  assign addCompareSelect_70_dist_0 = {6'd0, candidate_branches_12};
  assign addCompareSelect_70_dist_1 = {6'd0, candidate_branches_13};
  assign addCompareSelect_71_dist_0 = {6'd0, candidate_branches_14};
  assign addCompareSelect_71_dist_1 = {6'd0, candidate_branches_15};
  assign addCompareSelect_72_dist_0 = {6'd0, candidate_branches_16};
  assign addCompareSelect_72_dist_1 = {6'd0, candidate_branches_17};
  assign addCompareSelect_73_dist_0 = {6'd0, candidate_branches_18};
  assign addCompareSelect_73_dist_1 = {6'd0, candidate_branches_19};
  assign addCompareSelect_74_dist_0 = {6'd0, candidate_branches_20};
  assign addCompareSelect_74_dist_1 = {6'd0, candidate_branches_21};
  assign addCompareSelect_75_dist_0 = {6'd0, candidate_branches_22};
  assign addCompareSelect_75_dist_1 = {6'd0, candidate_branches_23};
  assign addCompareSelect_76_dist_0 = {6'd0, candidate_branches_24};
  assign addCompareSelect_76_dist_1 = {6'd0, candidate_branches_25};
  assign addCompareSelect_77_dist_0 = {6'd0, candidate_branches_26};
  assign addCompareSelect_77_dist_1 = {6'd0, candidate_branches_27};
  assign addCompareSelect_78_dist_0 = {6'd0, candidate_branches_28};
  assign addCompareSelect_78_dist_1 = {6'd0, candidate_branches_29};
  assign addCompareSelect_79_dist_0 = {6'd0, candidate_branches_30};
  assign addCompareSelect_79_dist_1 = {6'd0, candidate_branches_31};
  assign addCompareSelect_80_dist_0 = {6'd0, candidate_branches_32};
  assign addCompareSelect_80_dist_1 = {6'd0, candidate_branches_33};
  assign addCompareSelect_81_dist_0 = {6'd0, candidate_branches_34};
  assign addCompareSelect_81_dist_1 = {6'd0, candidate_branches_35};
  assign addCompareSelect_82_dist_0 = {6'd0, candidate_branches_36};
  assign addCompareSelect_82_dist_1 = {6'd0, candidate_branches_37};
  assign addCompareSelect_83_dist_0 = {6'd0, candidate_branches_38};
  assign addCompareSelect_83_dist_1 = {6'd0, candidate_branches_39};
  assign addCompareSelect_84_dist_0 = {6'd0, candidate_branches_40};
  assign addCompareSelect_84_dist_1 = {6'd0, candidate_branches_41};
  assign addCompareSelect_85_dist_0 = {6'd0, candidate_branches_42};
  assign addCompareSelect_85_dist_1 = {6'd0, candidate_branches_43};
  assign addCompareSelect_86_dist_0 = {6'd0, candidate_branches_44};
  assign addCompareSelect_86_dist_1 = {6'd0, candidate_branches_45};
  assign addCompareSelect_87_dist_0 = {6'd0, candidate_branches_46};
  assign addCompareSelect_87_dist_1 = {6'd0, candidate_branches_47};
  assign addCompareSelect_88_dist_0 = {6'd0, candidate_branches_48};
  assign addCompareSelect_88_dist_1 = {6'd0, candidate_branches_49};
  assign addCompareSelect_89_dist_0 = {6'd0, candidate_branches_50};
  assign addCompareSelect_89_dist_1 = {6'd0, candidate_branches_51};
  assign addCompareSelect_90_dist_0 = {6'd0, candidate_branches_52};
  assign addCompareSelect_90_dist_1 = {6'd0, candidate_branches_53};
  assign addCompareSelect_91_dist_0 = {6'd0, candidate_branches_54};
  assign addCompareSelect_91_dist_1 = {6'd0, candidate_branches_55};
  assign addCompareSelect_92_dist_0 = {6'd0, candidate_branches_56};
  assign addCompareSelect_92_dist_1 = {6'd0, candidate_branches_57};
  assign addCompareSelect_93_dist_0 = {6'd0, candidate_branches_58};
  assign addCompareSelect_93_dist_1 = {6'd0, candidate_branches_59};
  assign addCompareSelect_94_dist_0 = {6'd0, candidate_branches_60};
  assign addCompareSelect_94_dist_1 = {6'd0, candidate_branches_61};
  assign addCompareSelect_95_dist_0 = {6'd0, candidate_branches_62};
  assign addCompareSelect_95_dist_1 = {6'd0, candidate_branches_63};
  assign addCompareSelect_96_dist_0 = {6'd0, candidate_branches_64};
  assign addCompareSelect_96_dist_1 = {6'd0, candidate_branches_65};
  assign addCompareSelect_97_dist_0 = {6'd0, candidate_branches_66};
  assign addCompareSelect_97_dist_1 = {6'd0, candidate_branches_67};
  assign addCompareSelect_98_dist_0 = {6'd0, candidate_branches_68};
  assign addCompareSelect_98_dist_1 = {6'd0, candidate_branches_69};
  assign addCompareSelect_99_dist_0 = {6'd0, candidate_branches_70};
  assign addCompareSelect_99_dist_1 = {6'd0, candidate_branches_71};
  assign addCompareSelect_100_dist_0 = {6'd0, candidate_branches_72};
  assign addCompareSelect_100_dist_1 = {6'd0, candidate_branches_73};
  assign addCompareSelect_101_dist_0 = {6'd0, candidate_branches_74};
  assign addCompareSelect_101_dist_1 = {6'd0, candidate_branches_75};
  assign addCompareSelect_102_dist_0 = {6'd0, candidate_branches_76};
  assign addCompareSelect_102_dist_1 = {6'd0, candidate_branches_77};
  assign addCompareSelect_103_dist_0 = {6'd0, candidate_branches_78};
  assign addCompareSelect_103_dist_1 = {6'd0, candidate_branches_79};
  assign addCompareSelect_104_dist_0 = {6'd0, candidate_branches_80};
  assign addCompareSelect_104_dist_1 = {6'd0, candidate_branches_81};
  assign addCompareSelect_105_dist_0 = {6'd0, candidate_branches_82};
  assign addCompareSelect_105_dist_1 = {6'd0, candidate_branches_83};
  assign addCompareSelect_106_dist_0 = {6'd0, candidate_branches_84};
  assign addCompareSelect_106_dist_1 = {6'd0, candidate_branches_85};
  assign addCompareSelect_107_dist_0 = {6'd0, candidate_branches_86};
  assign addCompareSelect_107_dist_1 = {6'd0, candidate_branches_87};
  assign addCompareSelect_108_dist_0 = {6'd0, candidate_branches_88};
  assign addCompareSelect_108_dist_1 = {6'd0, candidate_branches_89};
  assign addCompareSelect_109_dist_0 = {6'd0, candidate_branches_90};
  assign addCompareSelect_109_dist_1 = {6'd0, candidate_branches_91};
  assign addCompareSelect_110_dist_0 = {6'd0, candidate_branches_92};
  assign addCompareSelect_110_dist_1 = {6'd0, candidate_branches_93};
  assign addCompareSelect_111_dist_0 = {6'd0, candidate_branches_94};
  assign addCompareSelect_111_dist_1 = {6'd0, candidate_branches_95};
  assign addCompareSelect_112_dist_0 = {6'd0, candidate_branches_96};
  assign addCompareSelect_112_dist_1 = {6'd0, candidate_branches_97};
  assign addCompareSelect_113_dist_0 = {6'd0, candidate_branches_98};
  assign addCompareSelect_113_dist_1 = {6'd0, candidate_branches_99};
  assign addCompareSelect_114_dist_0 = {6'd0, candidate_branches_100};
  assign addCompareSelect_114_dist_1 = {6'd0, candidate_branches_101};
  assign addCompareSelect_115_dist_0 = {6'd0, candidate_branches_102};
  assign addCompareSelect_115_dist_1 = {6'd0, candidate_branches_103};
  assign addCompareSelect_116_dist_0 = {6'd0, candidate_branches_104};
  assign addCompareSelect_116_dist_1 = {6'd0, candidate_branches_105};
  assign addCompareSelect_117_dist_0 = {6'd0, candidate_branches_106};
  assign addCompareSelect_117_dist_1 = {6'd0, candidate_branches_107};
  assign addCompareSelect_118_dist_0 = {6'd0, candidate_branches_108};
  assign addCompareSelect_118_dist_1 = {6'd0, candidate_branches_109};
  assign addCompareSelect_119_dist_0 = {6'd0, candidate_branches_110};
  assign addCompareSelect_119_dist_1 = {6'd0, candidate_branches_111};
  assign addCompareSelect_120_dist_0 = {6'd0, candidate_branches_112};
  assign addCompareSelect_120_dist_1 = {6'd0, candidate_branches_113};
  assign addCompareSelect_121_dist_0 = {6'd0, candidate_branches_114};
  assign addCompareSelect_121_dist_1 = {6'd0, candidate_branches_115};
  assign addCompareSelect_122_dist_0 = {6'd0, candidate_branches_116};
  assign addCompareSelect_122_dist_1 = {6'd0, candidate_branches_117};
  assign addCompareSelect_123_dist_0 = {6'd0, candidate_branches_118};
  assign addCompareSelect_123_dist_1 = {6'd0, candidate_branches_119};
  assign addCompareSelect_124_dist_0 = {6'd0, candidate_branches_120};
  assign addCompareSelect_124_dist_1 = {6'd0, candidate_branches_121};
  assign addCompareSelect_125_dist_0 = {6'd0, candidate_branches_122};
  assign addCompareSelect_125_dist_1 = {6'd0, candidate_branches_123};
  assign addCompareSelect_126_dist_0 = {6'd0, candidate_branches_124};
  assign addCompareSelect_126_dist_1 = {6'd0, candidate_branches_125};
  assign addCompareSelect_127_dist_0 = {6'd0, candidate_branches_126};
  assign addCompareSelect_127_dist_1 = {6'd0, candidate_branches_127};
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
      node_weight_0 <= 8'h0;
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
      node_weight_1 <= 8'h0;
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
      node_weight_2 <= 8'h0;
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
      node_weight_3 <= 8'h0;
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
      node_weight_4 <= 8'h0;
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
      node_weight_5 <= 8'h0;
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
      node_weight_6 <= 8'h0;
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
      node_weight_7 <= 8'h0;
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
      node_weight_8 <= 8'h0;
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
      node_weight_9 <= 8'h0;
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
      node_weight_10 <= 8'h0;
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
      node_weight_11 <= 8'h0;
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
      node_weight_12 <= 8'h0;
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
      node_weight_13 <= 8'h0;
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
      node_weight_14 <= 8'h0;
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
      node_weight_15 <= 8'h0;
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
      node_weight_16 <= 8'h0;
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
      node_weight_17 <= 8'h0;
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
      node_weight_18 <= 8'h0;
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
      node_weight_19 <= 8'h0;
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
      node_weight_20 <= 8'h0;
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
      node_weight_21 <= 8'h0;
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
      node_weight_22 <= 8'h0;
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
      node_weight_23 <= 8'h0;
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
      node_weight_24 <= 8'h0;
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
      node_weight_25 <= 8'h0;
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
      node_weight_26 <= 8'h0;
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
      node_weight_27 <= 8'h0;
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
      node_weight_28 <= 8'h0;
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
      node_weight_29 <= 8'h0;
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
      node_weight_30 <= 8'h0;
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
      node_weight_31 <= 8'h0;
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
      node_weight_32 <= 8'h0;
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
      node_weight_33 <= 8'h0;
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
      node_weight_34 <= 8'h0;
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
      node_weight_35 <= 8'h0;
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
      node_weight_36 <= 8'h0;
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
      node_weight_37 <= 8'h0;
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
      node_weight_38 <= 8'h0;
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
      node_weight_39 <= 8'h0;
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
      node_weight_40 <= 8'h0;
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
      node_weight_41 <= 8'h0;
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
      node_weight_42 <= 8'h0;
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
      node_weight_43 <= 8'h0;
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
      node_weight_44 <= 8'h0;
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
      node_weight_45 <= 8'h0;
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
      node_weight_46 <= 8'h0;
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
      node_weight_47 <= 8'h0;
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
      node_weight_48 <= 8'h0;
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
      node_weight_49 <= 8'h0;
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
      node_weight_50 <= 8'h0;
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
      node_weight_51 <= 8'h0;
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
      node_weight_52 <= 8'h0;
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
      node_weight_53 <= 8'h0;
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
      node_weight_54 <= 8'h0;
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
      node_weight_55 <= 8'h0;
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
      node_weight_56 <= 8'h0;
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
      node_weight_57 <= 8'h0;
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
      node_weight_58 <= 8'h0;
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
      node_weight_59 <= 8'h0;
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
      node_weight_60 <= 8'h0;
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
      node_weight_61 <= 8'h0;
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
      node_weight_62 <= 8'h0;
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
      node_weight_63 <= 8'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_63 <= addCompareSelect_127_state_weight;
        survival_path[63] <= addCompareSelect_127_decision;
      end
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
  output     [9:0]    io_occupancy,
  output     [9:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [2:0]    _zz_logic_ram_port0;
  wire       [8:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [8:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [2:0]    _zz_logic_ram_port_1;
  wire       [8:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [8:0]    logic_pushPtr_valueNext;
  reg        [8:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [8:0]    logic_popPtr_valueNext;
  reg        [8:0]    logic_popPtr_value;
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
  wire       [8:0]    logic_ptrDif;
  reg [2:0] logic_ram [0:511];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {8'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {8'd0, _zz_logic_popPtr_valueNext_1};
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 9'h1ff);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 9'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 9'h1ff);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 9'h0;
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
      logic_pushPtr_value <= 9'h0;
      logic_popPtr_value <= 9'h0;
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
  input      [7:0]    data_0,
  input      [7:0]    data_1,
  input      [7:0]    data_2,
  input      [7:0]    data_3,
  input      [7:0]    data_4,
  input      [7:0]    data_5,
  input      [7:0]    data_6,
  input      [7:0]    data_7,
  input      [7:0]    data_8,
  input      [7:0]    data_9,
  input      [7:0]    data_10,
  input      [7:0]    data_11,
  input      [7:0]    data_12,
  input      [7:0]    data_13,
  input      [7:0]    data_14,
  input      [7:0]    data_15,
  input      [7:0]    data_16,
  input      [7:0]    data_17,
  input      [7:0]    data_18,
  input      [7:0]    data_19,
  input      [7:0]    data_20,
  input      [7:0]    data_21,
  input      [7:0]    data_22,
  input      [7:0]    data_23,
  input      [7:0]    data_24,
  input      [7:0]    data_25,
  input      [7:0]    data_26,
  input      [7:0]    data_27,
  input      [7:0]    data_28,
  input      [7:0]    data_29,
  input      [7:0]    data_30,
  input      [7:0]    data_31,
  input      [7:0]    data_32,
  input      [7:0]    data_33,
  input      [7:0]    data_34,
  input      [7:0]    data_35,
  input      [7:0]    data_36,
  input      [7:0]    data_37,
  input      [7:0]    data_38,
  input      [7:0]    data_39,
  input      [7:0]    data_40,
  input      [7:0]    data_41,
  input      [7:0]    data_42,
  input      [7:0]    data_43,
  input      [7:0]    data_44,
  input      [7:0]    data_45,
  input      [7:0]    data_46,
  input      [7:0]    data_47,
  input      [7:0]    data_48,
  input      [7:0]    data_49,
  input      [7:0]    data_50,
  input      [7:0]    data_51,
  input      [7:0]    data_52,
  input      [7:0]    data_53,
  input      [7:0]    data_54,
  input      [7:0]    data_55,
  input      [7:0]    data_56,
  input      [7:0]    data_57,
  input      [7:0]    data_58,
  input      [7:0]    data_59,
  input      [7:0]    data_60,
  input      [7:0]    data_61,
  input      [7:0]    data_62,
  input      [7:0]    data_63,
  output     [7:0]    min_val,
  output     [5:0]    min_idx,
  input               clk,
  input               reset
);
  reg        [7:0]    _zz_min_val;
  reg        [7:0]    _zz_min_val_1;
  reg        [7:0]    _zz_min_val_2;
  reg        [7:0]    _zz_min_val_3;
  reg        [7:0]    _zz_min_val_4;
  reg        [7:0]    _zz_min_val_5;
  reg        [7:0]    _zz_min_val_6;
  reg        [7:0]    _zz_min_val_7;
  reg        [7:0]    _zz_min_val_8;
  reg        [7:0]    _zz_min_val_9;
  reg        [7:0]    _zz_min_val_10;
  reg        [7:0]    _zz_min_val_11;
  reg        [7:0]    _zz_min_val_12;
  reg        [7:0]    _zz_min_val_13;
  reg        [7:0]    _zz_min_val_14;
  reg        [7:0]    _zz_min_val_15;
  reg        [7:0]    _zz_min_val_16;
  reg        [7:0]    _zz_min_val_17;
  reg        [7:0]    _zz_min_val_18;
  reg        [7:0]    _zz_min_val_19;
  reg        [7:0]    _zz_min_val_20;
  reg        [7:0]    _zz_min_val_21;
  reg        [7:0]    _zz_min_val_22;
  reg        [7:0]    _zz_min_val_23;
  reg        [7:0]    _zz_min_val_24;
  reg        [7:0]    _zz_min_val_25;
  reg        [7:0]    _zz_min_val_26;
  reg        [7:0]    _zz_min_val_27;
  reg        [7:0]    _zz_min_val_28;
  reg        [7:0]    _zz_min_val_29;
  reg        [7:0]    _zz_min_val_30;
  reg        [7:0]    _zz_min_val_31;
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
  reg        [7:0]    _zz_min_val_32;
  reg        [7:0]    _zz_min_val_33;
  reg        [7:0]    _zz_min_val_34;
  reg        [7:0]    _zz_min_val_35;
  reg        [7:0]    _zz_min_val_36;
  reg        [7:0]    _zz_min_val_37;
  reg        [7:0]    _zz_min_val_38;
  reg        [7:0]    _zz_min_val_39;
  reg        [7:0]    _zz_min_val_40;
  reg        [7:0]    _zz_min_val_41;
  reg        [7:0]    _zz_min_val_42;
  reg        [7:0]    _zz_min_val_43;
  reg        [7:0]    _zz_min_val_44;
  reg        [7:0]    _zz_min_val_45;
  reg        [7:0]    _zz_min_val_46;
  reg        [7:0]    _zz_min_val_47;
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
  reg        [7:0]    _zz_min_val_48;
  reg        [7:0]    _zz_min_val_49;
  reg        [7:0]    _zz_min_val_50;
  reg        [7:0]    _zz_min_val_51;
  reg        [7:0]    _zz_min_val_52;
  reg        [7:0]    _zz_min_val_53;
  reg        [7:0]    _zz_min_val_54;
  reg        [7:0]    _zz_min_val_55;
  reg        [5:0]    _zz_min_idx_48;
  reg        [5:0]    _zz_min_idx_49;
  reg        [5:0]    _zz_min_idx_50;
  reg        [5:0]    _zz_min_idx_51;
  reg        [5:0]    _zz_min_idx_52;
  reg        [5:0]    _zz_min_idx_53;
  reg        [5:0]    _zz_min_idx_54;
  reg        [5:0]    _zz_min_idx_55;
  reg        [7:0]    _zz_min_val_56;
  reg        [7:0]    _zz_min_val_57;
  reg        [7:0]    _zz_min_val_58;
  reg        [7:0]    _zz_min_val_59;
  reg        [5:0]    _zz_min_idx_56;
  reg        [5:0]    _zz_min_idx_57;
  reg        [5:0]    _zz_min_idx_58;
  reg        [5:0]    _zz_min_idx_59;
  reg        [7:0]    _zz_min_val_60;
  reg        [7:0]    _zz_min_val_61;
  reg        [5:0]    _zz_min_idx_60;
  reg        [5:0]    _zz_min_idx_61;
  reg        [7:0]    _zz_min_val_62;
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
  input      [7:0]    last_state_weight_0,
  input      [7:0]    last_state_weight_1,
  input      [7:0]    dist_0,
  input      [7:0]    dist_1,
  output reg [7:0]    state_weight,
  output reg          decision
);
  wire       [7:0]    branch_weight_0;
  wire       [7:0]    branch_weight_1;
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
  input      [2:0]    _zz_in_a,
  input      [2:0]    _zz_in_a_1,
  input      [2:0]    _zz_in_b,
  output     [1:0]    dist_0,
  output     [1:0]    dist_1
);
  wire       [2:0]    hammingDistance_128_distance;
  wire       [2:0]    hammingDistance_129_distance;
  wire       [1:0]    _zz_dist_0;
  wire       [1:0]    _zz_dist_1;

  assign _zz_dist_0 = hammingDistance_128_distance[1:0];
  assign _zz_dist_1 = hammingDistance_129_distance[1:0];
  HammingDistance hammingDistance_128 (
    .in_a        (_zz_in_a                      ), //i
    .in_b        (_zz_in_b                      ), //i
    .distance    (hammingDistance_128_distance  )  //o
  );
  HammingDistance hammingDistance_129 (
    .in_a        (_zz_in_a_1                    ), //i
    .in_b        (_zz_in_b                      ), //i
    .distance    (hammingDistance_129_distance  )  //o
  );
  assign dist_0 = _zz_dist_0;
  assign dist_1 = _zz_dist_1;

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

module HammingDistance (
  input      [2:0]    in_a,
  input      [2:0]    in_b,
  output     [2:0]    distance
);
  wire       [2:0]    _zz_distance;
  wire       [2:0]    _zz_distance_1;
  wire       [0:0]    _zz_distance_2;
  wire       [2:0]    _zz_distance_3;
  wire       [2:0]    _zz_distance_4;
  wire       [2:0]    _zz_distance_5;
  wire       [0:0]    _zz_distance_6;
  wire       [2:0]    _zz_distance_7;
  wire       [0:0]    _zz_distance_8;
  wire       [2:0]    xorResult;

  assign _zz_distance = (_zz_distance_1 + _zz_distance_3);
  assign _zz_distance_2 = xorResult[2];
  assign _zz_distance_1 = {2'd0, _zz_distance_2};
  assign _zz_distance_4 = (_zz_distance_5 + _zz_distance_7);
  assign _zz_distance_3 = _zz_distance_4;
  assign _zz_distance_6 = xorResult[1];
  assign _zz_distance_5 = {2'd0, _zz_distance_6};
  assign _zz_distance_8 = xorResult[0];
  assign _zz_distance_7 = {2'd0, _zz_distance_8};
  assign xorResult = (in_a ^ in_b);
  assign distance = _zz_distance;

endmodule
