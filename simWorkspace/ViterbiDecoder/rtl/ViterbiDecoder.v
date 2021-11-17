// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : ViterbiDecoder
// Git hash  : 0b3d102b123e19b8186911f4a98533f63c818f48


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


module ViterbiDecoder (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [1:0]    _zz_in_b,
  output              decoded_data_valid,
  output              decoded_data_payload_last,
  output     [0:0]    decoded_data_payload_fragment,
  input               clk,
  input               reset
);
  wire                pmu_core_raw_data_ready;
  wire       [1:0]    pmu_core_min_idx;
  wire                pmu_core_s_path_valid;
  wire                pmu_core_s_path_payload_last;
  wire       [3:0]    pmu_core_s_path_payload_fragment;
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
  input      [1:0]    min_idx,
  input               s_path_valid,
  input               s_path_payload_last,
  input      [3:0]    s_path_payload_fragment,
  output              tb_node_valid,
  output              tb_node_payload_last,
  output     [1:0]    tb_node_payload_fragment,
  output              halt,
  output              finished,
  input               clk,
  input               reset
);
  wire       [1:0]    _zz_states_shift_rom_port0;
  wire       [0:0]    _zz_in_data_rom_port0;
  reg        [3:0]    _zz_survival_path_ram_0_port1;
  reg        [3:0]    _zz_survival_path_ram_1_port1;
  reg        [3:0]    _zz_survival_path_ram_1_port2;
  wire       [3:0]    _zz_survival_path_ram_0_port;
  wire                _zz_survival_path_ram_0_port_1;
  wire       [3:0]    _zz_survival_path_ram_1_port;
  wire                _zz_survival_path_ram_1_port_1;
  wire       [3:0]    _zz_survival_path_ram_2_port;
  wire                _zz_survival_path_ram_2_port_1;
  wire       [1:0]    _zz_ram_select;
  wire                _zz_survival_path_ram_0_port_2;
  wire                _zz_ram_0_value;
  wire                _zz_survival_path_ram_1_port_2;
  wire                _zz_ram_1_value;
  wire                _zz_survival_path_ram_1_port_3;
  wire                _zz_ram_2_value;
  wire       [2:0]    _zz_cursor;
  wire       [2:0]    _zz_cursor_1;
  wire       [0:0]    _zz_cursor_2;
  wire       [2:0]    _zz_cursor_3;
  wire       [2:0]    _zz_cursor_4;
  wire       [0:0]    _zz_cursor_5;
  wire       [2:0]    _zz_cursor_6;
  wire       [2:0]    _zz_cursor_7;
  wire       [0:0]    _zz_cursor_8;
  wire       [1:0]    _zz_decoded_ram_select;
  wire       [4:0]    _zz_ram_addr_read;
  wire       [1:0]    _zz_decoded_ram_select_1;
  wire       [4:0]    _zz_ram_addr_read_1;
  wire       [1:0]    _zz_decoded_ram_select_2;
  wire       [4:0]    _zz_ram_addr_read_2;
  reg        [1:0]    ram_select;
  reg        [4:0]    ram_addr_write;
  reg                 pkg_tail;
  reg                 tb_finish;
  wire                when_Traceback_l48;
  reg        [1:0]    decoded_ram_select;
  reg        [4:0]    ram_addr_read;
  reg                 pipe_halt;
  wire       [3:0]    ram_0_value;
  wire       [3:0]    ram_1_value;
  wire       [3:0]    ram_2_value;
  reg        [1:0]    min_cursor;
  reg        [2:0]    cursor;
  wire       [1:0]    min_cursor_next;
  wire       [0:0]    tb_node_data_next;
  reg        [0:0]    tb_node_data;
  reg                 tb_node_valid_1;
  reg                 tb_node_last;
  reg                 tail_repeat;
  reg                 goto_tail;
  reg        [1:0]    halt_cnt;
  reg        `TracebackStates_binary_sequential_type traceback_state;
  wire                when_Traceback_l104;
  wire                when_Traceback_l113;
  wire                when_Traceback_l126;
  wire                when_Traceback_l144;
  wire                when_Traceback_l153;
  `ifndef SYNTHESIS
  reg [87:0] traceback_state_string;
  `endif

  (* ram_style = "distributed" *) reg [1:0] states_shift_rom [0:7];
  (* ram_style = "distributed" *) reg [0:0] in_data_rom [0:7];
  reg [3:0] survival_path_ram_0 [0:31];
  reg [3:0] survival_path_ram_1 [0:31];
  reg [3:0] survival_path_ram_2 [0:31];

  assign _zz_ram_select = (ram_select + 2'b01);
  assign _zz_cursor = ({1'd0,min_cursor} <<< 1);
  assign _zz_cursor_2 = ram_0_value[min_cursor];
  assign _zz_cursor_1 = {2'd0, _zz_cursor_2};
  assign _zz_cursor_3 = ({1'd0,min_cursor} <<< 1);
  assign _zz_cursor_5 = ram_1_value[min_cursor];
  assign _zz_cursor_4 = {2'd0, _zz_cursor_5};
  assign _zz_cursor_6 = ({1'd0,min_cursor} <<< 1);
  assign _zz_cursor_8 = ram_2_value[min_cursor];
  assign _zz_cursor_7 = {2'd0, _zz_cursor_8};
  assign _zz_decoded_ram_select = (decoded_ram_select - 2'b01);
  assign _zz_ram_addr_read = (ram_addr_read - 5'h01);
  assign _zz_decoded_ram_select_1 = (decoded_ram_select - 2'b01);
  assign _zz_ram_addr_read_1 = (ram_addr_read - 5'h01);
  assign _zz_decoded_ram_select_2 = (decoded_ram_select - 2'b01);
  assign _zz_ram_addr_read_2 = (ram_addr_read - 5'h01);
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
    $readmemb("ViterbiDecoder.v_toplevel_tbu_core_states_shift_rom.bin",states_shift_rom);
  end
  assign _zz_states_shift_rom_port0 = states_shift_rom[cursor];
  initial begin
    $readmemb("ViterbiDecoder.v_toplevel_tbu_core_in_data_rom.bin",in_data_rom);
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

  assign when_Traceback_l48 = (5'h1f <= ram_addr_write);
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
        cursor = 3'b000;
      end
    endcase
  end

  assign min_cursor_next = _zz_states_shift_rom_port0;
  assign tb_node_data_next = _zz_in_data_rom_port0;
  assign when_Traceback_l104 = (((ram_addr_write == 5'h0f) && (decoded_ram_select == ram_select)) || pkg_tail);
  assign when_Traceback_l113 = (halt_cnt == 2'b11);
  assign when_Traceback_l126 = (ram_addr_read == 5'h1f);
  assign when_Traceback_l144 = (ram_addr_read == 5'h1f);
  assign when_Traceback_l153 = (ram_addr_read == 5'h1f);
  assign finished = tb_finish;
  assign halt = pipe_halt;
  assign tb_node_valid = tb_node_valid_1;
  assign tb_node_payload_fragment = {tb_finish,tb_node_data};
  assign tb_node_payload_last = tb_node_last;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      ram_select <= 2'b00;
      ram_addr_write <= 5'h0;
      pkg_tail <= 1'b0;
      ram_addr_read <= 5'h0;
      tb_node_valid_1 <= 1'b0;
      tb_node_last <= 1'b0;
      tail_repeat <= 1'b0;
      goto_tail <= 1'b0;
      traceback_state <= `TracebackStates_binary_sequential_FINISH;
    end else begin
      if(tb_finish) begin
        ram_addr_write <= 5'h0;
        ram_select <= 2'b00;
        pkg_tail <= 1'b0;
      end else begin
        if(s_path_valid) begin
          if(when_Traceback_l48) begin
            ram_addr_write <= 5'h0;
            ram_select <= ((ram_select == 2'b10) ? 2'b00 : _zz_ram_select);
          end else begin
            ram_addr_write <= (ram_addr_write + 5'h01);
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
            ram_addr_read <= (ram_addr_write - 5'h01);
            goto_tail <= pkg_tail;
          end
        end
        `TracebackStates_binary_sequential_HALT : begin
          if(when_Traceback_l113) begin
            ram_addr_read <= (ram_addr_read - 5'h01);
            if(goto_tail) begin
              tail_repeat <= ((ram_addr_write < 5'h10) && (decoded_ram_select == ram_select));
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
          ram_addr_read <= ((ram_addr_read == 5'h0) ? 5'h1f : _zz_ram_addr_read);
          tb_node_valid_1 <= 1'b1;
        end
        `TracebackStates_binary_sequential_TB : begin
          if(when_Traceback_l144) begin
            traceback_state <= `TracebackStates_binary_sequential_DECODE;
          end
          ram_addr_read <= ((ram_addr_read == 5'h0) ? 5'h1f : _zz_ram_addr_read_1);
        end
        default : begin
          if(when_Traceback_l153) begin
            traceback_state <= `TracebackStates_binary_sequential_IDLE;
            tb_node_last <= 1'b1;
          end
          ram_addr_read <= ((ram_addr_read == 5'h0) ? 5'h1f : _zz_ram_addr_read_2);
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
        halt_cnt <= 2'b00;
        if(when_Traceback_l104) begin
          pipe_halt <= 1'b1;
        end
      end
      `TracebackStates_binary_sequential_HALT : begin
        halt_cnt <= (halt_cnt + 2'b01);
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
  input      [1:0]    _zz_in_b,
  input               tbu_finished,
  output     [1:0]    min_idx,
  output              s_path_valid,
  output              s_path_payload_last,
  output     [3:0]    s_path_payload_fragment,
  input               clk,
  input               reset
);
  wire       [7:0]    addCompareSelect_4_dist_0;
  wire       [7:0]    addCompareSelect_4_dist_1;
  wire       [7:0]    addCompareSelect_5_dist_0;
  wire       [7:0]    addCompareSelect_5_dist_1;
  wire       [7:0]    addCompareSelect_6_dist_0;
  wire       [7:0]    addCompareSelect_6_dist_1;
  wire       [7:0]    addCompareSelect_7_dist_0;
  wire       [7:0]    addCompareSelect_7_dist_1;
  wire       [1:0]    branchMetric_4_dist_0;
  wire       [1:0]    branchMetric_4_dist_1;
  wire       [7:0]    addCompareSelect_4_state_weight;
  wire                addCompareSelect_4_decision;
  wire       [1:0]    branchMetric_5_dist_0;
  wire       [1:0]    branchMetric_5_dist_1;
  wire       [7:0]    addCompareSelect_5_state_weight;
  wire                addCompareSelect_5_decision;
  wire       [1:0]    branchMetric_6_dist_0;
  wire       [1:0]    branchMetric_6_dist_1;
  wire       [7:0]    addCompareSelect_6_state_weight;
  wire                addCompareSelect_6_decision;
  wire       [1:0]    branchMetric_7_dist_0;
  wire       [1:0]    branchMetric_7_dist_1;
  wire       [7:0]    addCompareSelect_7_state_weight;
  wire                addCompareSelect_7_decision;
  wire       [7:0]    minVal_1_min_val;
  wire       [1:0]    minVal_1_min_idx;
  reg        [7:0]    node_weight_0;
  reg        [7:0]    node_weight_1;
  reg        [7:0]    node_weight_2;
  reg        [7:0]    node_weight_3;
  reg        [1:0]    candidate_branches_0;
  reg        [1:0]    candidate_branches_1;
  reg        [1:0]    candidate_branches_2;
  reg        [1:0]    candidate_branches_3;
  reg        [1:0]    candidate_branches_4;
  reg        [1:0]    candidate_branches_5;
  reg        [1:0]    candidate_branches_6;
  reg        [1:0]    candidate_branches_7;
  reg        [3:0]    survival_path;
  reg                 raw_data_next;
  reg                 raw_data_last_next;
  reg                 survival_path_valid;
  reg                 survival_path_last;
  reg                 raw_data_ready_1;
  wire                when_PathMetric_l29;

  BranchMetric branchMetric_4 (
    ._zz_in_a      (2'b00                  ), //i
    ._zz_in_a_1    (2'b11                  ), //i
    ._zz_in_b      (_zz_in_b               ), //i
    .dist_0        (branchMetric_4_dist_0  ), //o
    .dist_1        (branchMetric_4_dist_1  )  //o
  );
  AddCompareSelect addCompareSelect_4 (
    .last_state_weight_0    (node_weight_0                    ), //i
    .last_state_weight_1    (node_weight_1                    ), //i
    .dist_0                 (addCompareSelect_4_dist_0        ), //i
    .dist_1                 (addCompareSelect_4_dist_1        ), //i
    .state_weight           (addCompareSelect_4_state_weight  ), //o
    .decision               (addCompareSelect_4_decision      )  //o
  );
  BranchMetric branchMetric_5 (
    ._zz_in_a      (2'b10                  ), //i
    ._zz_in_a_1    (2'b01                  ), //i
    ._zz_in_b      (_zz_in_b               ), //i
    .dist_0        (branchMetric_5_dist_0  ), //o
    .dist_1        (branchMetric_5_dist_1  )  //o
  );
  AddCompareSelect addCompareSelect_5 (
    .last_state_weight_0    (node_weight_2                    ), //i
    .last_state_weight_1    (node_weight_3                    ), //i
    .dist_0                 (addCompareSelect_5_dist_0        ), //i
    .dist_1                 (addCompareSelect_5_dist_1        ), //i
    .state_weight           (addCompareSelect_5_state_weight  ), //o
    .decision               (addCompareSelect_5_decision      )  //o
  );
  BranchMetric branchMetric_6 (
    ._zz_in_a      (2'b11                  ), //i
    ._zz_in_a_1    (2'b00                  ), //i
    ._zz_in_b      (_zz_in_b               ), //i
    .dist_0        (branchMetric_6_dist_0  ), //o
    .dist_1        (branchMetric_6_dist_1  )  //o
  );
  AddCompareSelect addCompareSelect_6 (
    .last_state_weight_0    (node_weight_0                    ), //i
    .last_state_weight_1    (node_weight_1                    ), //i
    .dist_0                 (addCompareSelect_6_dist_0        ), //i
    .dist_1                 (addCompareSelect_6_dist_1        ), //i
    .state_weight           (addCompareSelect_6_state_weight  ), //o
    .decision               (addCompareSelect_6_decision      )  //o
  );
  BranchMetric branchMetric_7 (
    ._zz_in_a      (2'b01                  ), //i
    ._zz_in_a_1    (2'b10                  ), //i
    ._zz_in_b      (_zz_in_b               ), //i
    .dist_0        (branchMetric_7_dist_0  ), //o
    .dist_1        (branchMetric_7_dist_1  )  //o
  );
  AddCompareSelect addCompareSelect_7 (
    .last_state_weight_0    (node_weight_2                    ), //i
    .last_state_weight_1    (node_weight_3                    ), //i
    .dist_0                 (addCompareSelect_7_dist_0        ), //i
    .dist_1                 (addCompareSelect_7_dist_1        ), //i
    .state_weight           (addCompareSelect_7_state_weight  ), //o
    .decision               (addCompareSelect_7_decision      )  //o
  );
  MinVal minVal_1 (
    .data_0     (node_weight_0     ), //i
    .data_1     (node_weight_1     ), //i
    .data_2     (node_weight_2     ), //i
    .data_3     (node_weight_3     ), //i
    .min_val    (minVal_1_min_val  ), //o
    .min_idx    (minVal_1_min_idx  ), //o
    .clk        (clk               ), //i
    .reset      (reset             )  //i
  );
  assign when_PathMetric_l29 = (raw_data_payload_last && raw_data_valid);
  assign addCompareSelect_4_dist_0 = {6'd0, candidate_branches_0};
  assign addCompareSelect_4_dist_1 = {6'd0, candidate_branches_1};
  assign addCompareSelect_5_dist_0 = {6'd0, candidate_branches_2};
  assign addCompareSelect_5_dist_1 = {6'd0, candidate_branches_3};
  assign addCompareSelect_6_dist_0 = {6'd0, candidate_branches_4};
  assign addCompareSelect_6_dist_1 = {6'd0, candidate_branches_5};
  assign addCompareSelect_7_dist_0 = {6'd0, candidate_branches_6};
  assign addCompareSelect_7_dist_1 = {6'd0, candidate_branches_7};
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
    end
  end

  always @(posedge clk) begin
    candidate_branches_0 <= branchMetric_4_dist_0;
    candidate_branches_1 <= branchMetric_4_dist_1;
    if(tbu_finished) begin
      node_weight_0 <= 8'h0;
      survival_path <= 4'b0000;
    end else begin
      if(raw_data_next) begin
        node_weight_0 <= addCompareSelect_4_state_weight;
        survival_path[0] <= addCompareSelect_4_decision;
      end
    end
    candidate_branches_2 <= branchMetric_5_dist_0;
    candidate_branches_3 <= branchMetric_5_dist_1;
    if(tbu_finished) begin
      node_weight_1 <= 8'h0;
      survival_path <= 4'b0000;
    end else begin
      if(raw_data_next) begin
        node_weight_1 <= addCompareSelect_5_state_weight;
        survival_path[1] <= addCompareSelect_5_decision;
      end
    end
    candidate_branches_4 <= branchMetric_6_dist_0;
    candidate_branches_5 <= branchMetric_6_dist_1;
    if(tbu_finished) begin
      node_weight_2 <= 8'h0;
      survival_path <= 4'b0000;
    end else begin
      if(raw_data_next) begin
        node_weight_2 <= addCompareSelect_6_state_weight;
        survival_path[2] <= addCompareSelect_6_decision;
      end
    end
    candidate_branches_6 <= branchMetric_7_dist_0;
    candidate_branches_7 <= branchMetric_7_dist_1;
    if(tbu_finished) begin
      node_weight_3 <= 8'h0;
      survival_path <= 4'b0000;
    end else begin
      if(raw_data_next) begin
        node_weight_3 <= addCompareSelect_7_state_weight;
        survival_path[3] <= addCompareSelect_7_decision;
      end
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
  wire       [5:0]    _zz_lifo_last_1;
  reg        [0:0]    _zz_pop_payload_fragment;
  wire       [5:0]    _zz_pop_payload_fragment_1;
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
  reg        [5:0]    lifo_head_cursor;
  reg                 lifo_last;
  wire                push_fire;
  wire                when_SISOLifo_l25;
  wire       [63:0]   _zz_1;
  wire       [63:0]   _zz_2;
  wire                pop_fire;
  wire                when_SISOLifo_l32;

  assign _zz_lifo_last_1 = (lifo_head_cursor - 6'h01);
  assign _zz_pop_payload_fragment_1 = (lifo_head_cursor - 6'h01);
  always @(*) begin
    case(_zz_lifo_last_1)
      6'b000000 : begin
        _zz_lifo_last = lifo_data_last_0;
      end
      6'b000001 : begin
        _zz_lifo_last = lifo_data_last_1;
      end
      6'b000010 : begin
        _zz_lifo_last = lifo_data_last_2;
      end
      6'b000011 : begin
        _zz_lifo_last = lifo_data_last_3;
      end
      6'b000100 : begin
        _zz_lifo_last = lifo_data_last_4;
      end
      6'b000101 : begin
        _zz_lifo_last = lifo_data_last_5;
      end
      6'b000110 : begin
        _zz_lifo_last = lifo_data_last_6;
      end
      6'b000111 : begin
        _zz_lifo_last = lifo_data_last_7;
      end
      6'b001000 : begin
        _zz_lifo_last = lifo_data_last_8;
      end
      6'b001001 : begin
        _zz_lifo_last = lifo_data_last_9;
      end
      6'b001010 : begin
        _zz_lifo_last = lifo_data_last_10;
      end
      6'b001011 : begin
        _zz_lifo_last = lifo_data_last_11;
      end
      6'b001100 : begin
        _zz_lifo_last = lifo_data_last_12;
      end
      6'b001101 : begin
        _zz_lifo_last = lifo_data_last_13;
      end
      6'b001110 : begin
        _zz_lifo_last = lifo_data_last_14;
      end
      6'b001111 : begin
        _zz_lifo_last = lifo_data_last_15;
      end
      6'b010000 : begin
        _zz_lifo_last = lifo_data_last_16;
      end
      6'b010001 : begin
        _zz_lifo_last = lifo_data_last_17;
      end
      6'b010010 : begin
        _zz_lifo_last = lifo_data_last_18;
      end
      6'b010011 : begin
        _zz_lifo_last = lifo_data_last_19;
      end
      6'b010100 : begin
        _zz_lifo_last = lifo_data_last_20;
      end
      6'b010101 : begin
        _zz_lifo_last = lifo_data_last_21;
      end
      6'b010110 : begin
        _zz_lifo_last = lifo_data_last_22;
      end
      6'b010111 : begin
        _zz_lifo_last = lifo_data_last_23;
      end
      6'b011000 : begin
        _zz_lifo_last = lifo_data_last_24;
      end
      6'b011001 : begin
        _zz_lifo_last = lifo_data_last_25;
      end
      6'b011010 : begin
        _zz_lifo_last = lifo_data_last_26;
      end
      6'b011011 : begin
        _zz_lifo_last = lifo_data_last_27;
      end
      6'b011100 : begin
        _zz_lifo_last = lifo_data_last_28;
      end
      6'b011101 : begin
        _zz_lifo_last = lifo_data_last_29;
      end
      6'b011110 : begin
        _zz_lifo_last = lifo_data_last_30;
      end
      6'b011111 : begin
        _zz_lifo_last = lifo_data_last_31;
      end
      6'b100000 : begin
        _zz_lifo_last = lifo_data_last_32;
      end
      6'b100001 : begin
        _zz_lifo_last = lifo_data_last_33;
      end
      6'b100010 : begin
        _zz_lifo_last = lifo_data_last_34;
      end
      6'b100011 : begin
        _zz_lifo_last = lifo_data_last_35;
      end
      6'b100100 : begin
        _zz_lifo_last = lifo_data_last_36;
      end
      6'b100101 : begin
        _zz_lifo_last = lifo_data_last_37;
      end
      6'b100110 : begin
        _zz_lifo_last = lifo_data_last_38;
      end
      6'b100111 : begin
        _zz_lifo_last = lifo_data_last_39;
      end
      6'b101000 : begin
        _zz_lifo_last = lifo_data_last_40;
      end
      6'b101001 : begin
        _zz_lifo_last = lifo_data_last_41;
      end
      6'b101010 : begin
        _zz_lifo_last = lifo_data_last_42;
      end
      6'b101011 : begin
        _zz_lifo_last = lifo_data_last_43;
      end
      6'b101100 : begin
        _zz_lifo_last = lifo_data_last_44;
      end
      6'b101101 : begin
        _zz_lifo_last = lifo_data_last_45;
      end
      6'b101110 : begin
        _zz_lifo_last = lifo_data_last_46;
      end
      6'b101111 : begin
        _zz_lifo_last = lifo_data_last_47;
      end
      6'b110000 : begin
        _zz_lifo_last = lifo_data_last_48;
      end
      6'b110001 : begin
        _zz_lifo_last = lifo_data_last_49;
      end
      6'b110010 : begin
        _zz_lifo_last = lifo_data_last_50;
      end
      6'b110011 : begin
        _zz_lifo_last = lifo_data_last_51;
      end
      6'b110100 : begin
        _zz_lifo_last = lifo_data_last_52;
      end
      6'b110101 : begin
        _zz_lifo_last = lifo_data_last_53;
      end
      6'b110110 : begin
        _zz_lifo_last = lifo_data_last_54;
      end
      6'b110111 : begin
        _zz_lifo_last = lifo_data_last_55;
      end
      6'b111000 : begin
        _zz_lifo_last = lifo_data_last_56;
      end
      6'b111001 : begin
        _zz_lifo_last = lifo_data_last_57;
      end
      6'b111010 : begin
        _zz_lifo_last = lifo_data_last_58;
      end
      6'b111011 : begin
        _zz_lifo_last = lifo_data_last_59;
      end
      6'b111100 : begin
        _zz_lifo_last = lifo_data_last_60;
      end
      6'b111101 : begin
        _zz_lifo_last = lifo_data_last_61;
      end
      6'b111110 : begin
        _zz_lifo_last = lifo_data_last_62;
      end
      default : begin
        _zz_lifo_last = lifo_data_last_63;
      end
    endcase
  end

  always @(*) begin
    case(_zz_pop_payload_fragment_1)
      6'b000000 : begin
        _zz_pop_payload_fragment = lifo_data_0;
      end
      6'b000001 : begin
        _zz_pop_payload_fragment = lifo_data_1;
      end
      6'b000010 : begin
        _zz_pop_payload_fragment = lifo_data_2;
      end
      6'b000011 : begin
        _zz_pop_payload_fragment = lifo_data_3;
      end
      6'b000100 : begin
        _zz_pop_payload_fragment = lifo_data_4;
      end
      6'b000101 : begin
        _zz_pop_payload_fragment = lifo_data_5;
      end
      6'b000110 : begin
        _zz_pop_payload_fragment = lifo_data_6;
      end
      6'b000111 : begin
        _zz_pop_payload_fragment = lifo_data_7;
      end
      6'b001000 : begin
        _zz_pop_payload_fragment = lifo_data_8;
      end
      6'b001001 : begin
        _zz_pop_payload_fragment = lifo_data_9;
      end
      6'b001010 : begin
        _zz_pop_payload_fragment = lifo_data_10;
      end
      6'b001011 : begin
        _zz_pop_payload_fragment = lifo_data_11;
      end
      6'b001100 : begin
        _zz_pop_payload_fragment = lifo_data_12;
      end
      6'b001101 : begin
        _zz_pop_payload_fragment = lifo_data_13;
      end
      6'b001110 : begin
        _zz_pop_payload_fragment = lifo_data_14;
      end
      6'b001111 : begin
        _zz_pop_payload_fragment = lifo_data_15;
      end
      6'b010000 : begin
        _zz_pop_payload_fragment = lifo_data_16;
      end
      6'b010001 : begin
        _zz_pop_payload_fragment = lifo_data_17;
      end
      6'b010010 : begin
        _zz_pop_payload_fragment = lifo_data_18;
      end
      6'b010011 : begin
        _zz_pop_payload_fragment = lifo_data_19;
      end
      6'b010100 : begin
        _zz_pop_payload_fragment = lifo_data_20;
      end
      6'b010101 : begin
        _zz_pop_payload_fragment = lifo_data_21;
      end
      6'b010110 : begin
        _zz_pop_payload_fragment = lifo_data_22;
      end
      6'b010111 : begin
        _zz_pop_payload_fragment = lifo_data_23;
      end
      6'b011000 : begin
        _zz_pop_payload_fragment = lifo_data_24;
      end
      6'b011001 : begin
        _zz_pop_payload_fragment = lifo_data_25;
      end
      6'b011010 : begin
        _zz_pop_payload_fragment = lifo_data_26;
      end
      6'b011011 : begin
        _zz_pop_payload_fragment = lifo_data_27;
      end
      6'b011100 : begin
        _zz_pop_payload_fragment = lifo_data_28;
      end
      6'b011101 : begin
        _zz_pop_payload_fragment = lifo_data_29;
      end
      6'b011110 : begin
        _zz_pop_payload_fragment = lifo_data_30;
      end
      6'b011111 : begin
        _zz_pop_payload_fragment = lifo_data_31;
      end
      6'b100000 : begin
        _zz_pop_payload_fragment = lifo_data_32;
      end
      6'b100001 : begin
        _zz_pop_payload_fragment = lifo_data_33;
      end
      6'b100010 : begin
        _zz_pop_payload_fragment = lifo_data_34;
      end
      6'b100011 : begin
        _zz_pop_payload_fragment = lifo_data_35;
      end
      6'b100100 : begin
        _zz_pop_payload_fragment = lifo_data_36;
      end
      6'b100101 : begin
        _zz_pop_payload_fragment = lifo_data_37;
      end
      6'b100110 : begin
        _zz_pop_payload_fragment = lifo_data_38;
      end
      6'b100111 : begin
        _zz_pop_payload_fragment = lifo_data_39;
      end
      6'b101000 : begin
        _zz_pop_payload_fragment = lifo_data_40;
      end
      6'b101001 : begin
        _zz_pop_payload_fragment = lifo_data_41;
      end
      6'b101010 : begin
        _zz_pop_payload_fragment = lifo_data_42;
      end
      6'b101011 : begin
        _zz_pop_payload_fragment = lifo_data_43;
      end
      6'b101100 : begin
        _zz_pop_payload_fragment = lifo_data_44;
      end
      6'b101101 : begin
        _zz_pop_payload_fragment = lifo_data_45;
      end
      6'b101110 : begin
        _zz_pop_payload_fragment = lifo_data_46;
      end
      6'b101111 : begin
        _zz_pop_payload_fragment = lifo_data_47;
      end
      6'b110000 : begin
        _zz_pop_payload_fragment = lifo_data_48;
      end
      6'b110001 : begin
        _zz_pop_payload_fragment = lifo_data_49;
      end
      6'b110010 : begin
        _zz_pop_payload_fragment = lifo_data_50;
      end
      6'b110011 : begin
        _zz_pop_payload_fragment = lifo_data_51;
      end
      6'b110100 : begin
        _zz_pop_payload_fragment = lifo_data_52;
      end
      6'b110101 : begin
        _zz_pop_payload_fragment = lifo_data_53;
      end
      6'b110110 : begin
        _zz_pop_payload_fragment = lifo_data_54;
      end
      6'b110111 : begin
        _zz_pop_payload_fragment = lifo_data_55;
      end
      6'b111000 : begin
        _zz_pop_payload_fragment = lifo_data_56;
      end
      6'b111001 : begin
        _zz_pop_payload_fragment = lifo_data_57;
      end
      6'b111010 : begin
        _zz_pop_payload_fragment = lifo_data_58;
      end
      6'b111011 : begin
        _zz_pop_payload_fragment = lifo_data_59;
      end
      6'b111100 : begin
        _zz_pop_payload_fragment = lifo_data_60;
      end
      6'b111101 : begin
        _zz_pop_payload_fragment = lifo_data_61;
      end
      6'b111110 : begin
        _zz_pop_payload_fragment = lifo_data_62;
      end
      default : begin
        _zz_pop_payload_fragment = lifo_data_63;
      end
    endcase
  end

  assign push_fire = (push_valid && push_ready);
  assign when_SISOLifo_l25 = (push_fire && (! full));
  assign _zz_1 = ({63'd0,1'b1} <<< lifo_head_cursor);
  assign _zz_2 = ({63'd0,1'b1} <<< lifo_head_cursor);
  assign pop_fire = (pop_valid && pop_ready);
  assign when_SISOLifo_l32 = (pop_fire && (! empty));
  assign push_ready = (push_method && (! full));
  assign pop_valid = (! (push_method || empty));
  assign pop_payload_fragment = (push_method ? 1'b0 : _zz_pop_payload_fragment);
  assign pop_payload_last = (lifo_last && (lifo_head_cursor == 6'h01));
  assign full = (lifo_head_cursor == 6'h3f);
  assign empty = (lifo_head_cursor == 6'h0);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      lifo_head_cursor <= 6'h0;
    end else begin
      if(push_method) begin
        if(when_SISOLifo_l25) begin
          lifo_head_cursor <= (lifo_head_cursor + 6'h01);
        end
      end else begin
        if(when_SISOLifo_l32) begin
          lifo_head_cursor <= (lifo_head_cursor - 6'h01);
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
  input      [7:0]    data_0,
  input      [7:0]    data_1,
  input      [7:0]    data_2,
  input      [7:0]    data_3,
  output     [7:0]    min_val,
  output     [1:0]    min_idx,
  input               clk,
  input               reset
);
  reg        [7:0]    _zz_min_val;
  reg        [7:0]    _zz_min_val_1;
  reg        [1:0]    _zz_min_idx;
  reg        [1:0]    _zz_min_idx_1;
  reg        [7:0]    _zz_min_val_2;
  reg        [1:0]    _zz_min_idx_2;

  assign min_idx = _zz_min_idx_2;
  assign min_val = _zz_min_val_2;
  always @(posedge clk) begin
    _zz_min_val <= ((data_0 <= data_1) ? data_0 : data_1);
    _zz_min_idx <= ((data_0 <= data_1) ? 2'b00 : 2'b01);
    _zz_min_val_1 <= ((data_2 <= data_3) ? data_2 : data_3);
    _zz_min_idx_1 <= ((data_2 <= data_3) ? 2'b10 : 2'b11);
    _zz_min_val_2 <= ((_zz_min_val <= _zz_min_val_1) ? _zz_min_val : _zz_min_val_1);
    _zz_min_idx_2 <= ((_zz_min_val <= _zz_min_val_1) ? _zz_min_idx : _zz_min_idx_1);
  end


endmodule

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
  input      [1:0]    _zz_in_a,
  input      [1:0]    _zz_in_a_1,
  input      [1:0]    _zz_in_b,
  output     [1:0]    dist_0,
  output     [1:0]    dist_1
);
  wire       [1:0]    hammingDistance_8_distance;
  wire       [1:0]    hammingDistance_9_distance;
  wire       [1:0]    _zz_dist_0;
  wire       [1:0]    _zz_dist_1;

  assign _zz_dist_0 = hammingDistance_8_distance;
  assign _zz_dist_1 = hammingDistance_9_distance;
  HammingDistance hammingDistance_8 (
    .in_a        (_zz_in_a                    ), //i
    .in_b        (_zz_in_b                    ), //i
    .distance    (hammingDistance_8_distance  )  //o
  );
  HammingDistance hammingDistance_9 (
    .in_a        (_zz_in_a_1                  ), //i
    .in_b        (_zz_in_b                    ), //i
    .distance    (hammingDistance_9_distance  )  //o
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

module HammingDistance (
  input      [1:0]    in_a,
  input      [1:0]    in_b,
  output     [1:0]    distance
);
  wire       [1:0]    _zz_distance;
  wire       [1:0]    _zz_distance_1;
  wire       [0:0]    _zz_distance_2;
  wire       [1:0]    _zz_distance_3;
  wire       [0:0]    _zz_distance_4;
  wire       [1:0]    xorResult;

  assign _zz_distance = (_zz_distance_1 + _zz_distance_3);
  assign _zz_distance_2 = xorResult[1];
  assign _zz_distance_1 = {1'd0, _zz_distance_2};
  assign _zz_distance_4 = xorResult[0];
  assign _zz_distance_3 = {1'd0, _zz_distance_4};
  assign xorResult = (in_a ^ in_b);
  assign distance = _zz_distance;

endmodule
