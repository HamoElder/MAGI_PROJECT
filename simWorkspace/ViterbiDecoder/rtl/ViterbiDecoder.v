// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : ViterbiDecoder
// Git hash  : 8ea3836c6991c66e54ff283e1ce84688f7fe9417


`define TracebackStates_binary_sequential_type [2:0]
`define TracebackStates_binary_sequential_IDLE 3'b000
`define TracebackStates_binary_sequential_TB 3'b001
`define TracebackStates_binary_sequential_DECODE 3'b010
`define TracebackStates_binary_sequential_HALT 3'b011
`define TracebackStates_binary_sequential_TAIL_DECODE 3'b100
`define TracebackStates_binary_sequential_FINISH 3'b101


module ViterbiDecoder (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [1:0]    _zz_in_b,
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
  wire       [0:0]    tbu_core_tb_node_payload_fragment;
  wire                tbu_core_halt;
  wire                tbu_core_finished;
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
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign raw_data_ready = ((! tbu_core_halt) && pmu_core_raw_data_ready);

endmodule

module Traceback (
  input      [1:0]    min_idx,
  input               s_path_valid,
  input               s_path_payload_last,
  input      [3:0]    s_path_payload_fragment,
  output              tb_node_valid,
  output              tb_node_payload_last,
  output     [0:0]    tb_node_payload_fragment,
  output              halt,
  output              finished,
  input               clk,
  input               reset
);
  wire       [1:0]    _zz_states_shift_rom_port0;
  wire       [0:0]    _zz_in_data_rom_port0;
  reg        [3:0]    _zz_survival_path_ram_0_port1;
  reg        [3:0]    _zz_survival_path_ram_1_port1;
  wire       [3:0]    _zz_survival_path_ram_0_port;
  wire                _zz_survival_path_ram_0_port_1;
  wire       [3:0]    _zz_survival_path_ram_1_port;
  wire                _zz_survival_path_ram_1_port_1;
  wire                _zz_survival_path_ram_0_port_2;
  wire                _zz_ram_0_value;
  wire                _zz_survival_path_ram_1_port_2;
  wire                _zz_ram_1_value;
  wire       [2:0]    _zz_cursor;
  wire       [2:0]    _zz_cursor_1;
  wire       [2:0]    _zz_cursor_2;
  wire       [0:0]    _zz_cursor_3;
  wire       [2:0]    _zz_cursor_4;
  wire       [2:0]    _zz_cursor_5;
  wire       [2:0]    _zz_cursor_6;
  wire       [0:0]    _zz_cursor_7;
  wire       [5:0]    _zz_ram_addr_read;
  wire       [5:0]    _zz_ram_addr_read_1;
  reg                 ram_select;
  reg        [5:0]    ram_addr_write;
  reg                 pkg_tail;
  reg                 tb_finish;
  wire                when_Traceback_l46;
  reg                 decoded_ram_sel;
  reg        [5:0]    ram_addr_read;
  reg                 pipe_halt;
  wire       [3:0]    ram_0_value;
  wire       [3:0]    ram_1_value;
  reg        [1:0]    min_cursor;
  wire       [2:0]    cursor;
  wire       [1:0]    min_cursor_next;
  reg                 tail_repeat;
  wire       [0:0]    tb_node_data_next;
  reg        [0:0]    tb_node_data;
  reg                 tb_node_valid_1;
  reg                 tb_node_last;
  reg                 goto_tail;
  reg        [1:0]    halt_cnt;
  reg        `TracebackStates_binary_sequential_type traceback_state;
  wire                when_Traceback_l95;
  wire                when_Traceback_l107;
  wire                when_Traceback_l115;
  wire                when_Traceback_l133;
  wire                when_Traceback_l142;
  `ifndef SYNTHESIS
  reg [87:0] traceback_state_string;
  `endif

  (* ram_style = "distributed" *) reg [1:0] states_shift_rom [0:7];
  (* ram_style = "distributed" *) reg [0:0] in_data_rom [0:7];
  reg [3:0] survival_path_ram_0 [0:47];
  reg [3:0] survival_path_ram_1 [0:47];

  assign _zz_cursor = (_zz_cursor_1 + _zz_cursor_2);
  assign _zz_cursor_1 = ({1'd0,min_cursor} <<< 1);
  assign _zz_cursor_3 = ram_1_value[min_cursor];
  assign _zz_cursor_2 = {2'd0, _zz_cursor_3};
  assign _zz_cursor_4 = (_zz_cursor_5 + _zz_cursor_6);
  assign _zz_cursor_5 = ({1'd0,min_cursor} <<< 1);
  assign _zz_cursor_7 = ram_0_value[min_cursor];
  assign _zz_cursor_6 = {2'd0, _zz_cursor_7};
  assign _zz_ram_addr_read = (ram_addr_read - 6'h01);
  assign _zz_ram_addr_read_1 = (ram_addr_read - 6'h01);
  assign _zz_survival_path_ram_0_port = s_path_payload_fragment;
  assign _zz_survival_path_ram_0_port_1 = ((ram_select == 1'b0) && s_path_valid);
  assign _zz_ram_0_value = 1'b1;
  assign _zz_survival_path_ram_1_port = s_path_payload_fragment;
  assign _zz_survival_path_ram_1_port_1 = ((ram_select == 1'b1) && s_path_valid);
  assign _zz_ram_1_value = 1'b1;
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

  assign when_Traceback_l46 = (6'h2f <= ram_addr_write);
  assign ram_0_value = _zz_survival_path_ram_0_port1;
  assign ram_1_value = _zz_survival_path_ram_1_port1;
  assign cursor = (decoded_ram_sel ? _zz_cursor : _zz_cursor_4);
  assign min_cursor_next = _zz_states_shift_rom_port0;
  assign tb_node_data_next = _zz_in_data_rom_port0;
  assign when_Traceback_l95 = (((ram_addr_write == 6'h10) && (decoded_ram_sel == ram_select)) || pkg_tail);
  assign when_Traceback_l107 = (halt_cnt == 2'b11);
  assign when_Traceback_l115 = (ram_addr_read == 6'h2f);
  assign when_Traceback_l133 = (ram_addr_read == 6'h2f);
  assign when_Traceback_l142 = (ram_addr_read == 6'h0);
  assign finished = tb_finish;
  assign halt = pipe_halt;
  assign tb_node_valid = tb_node_valid_1;
  assign tb_node_payload_fragment = tb_node_data;
  assign tb_node_payload_last = tb_node_last;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      ram_select <= 1'b0;
      ram_addr_write <= 6'h0;
      pkg_tail <= 1'b0;
      ram_addr_read <= 6'h0;
      tail_repeat <= 1'b0;
      tb_node_valid_1 <= 1'b0;
      tb_node_last <= 1'b0;
      goto_tail <= 1'b0;
      traceback_state <= `TracebackStates_binary_sequential_FINISH;
    end else begin
      if(tb_finish) begin
        ram_addr_write <= 6'h0;
        ram_select <= 1'b0;
        pkg_tail <= 1'b0;
      end else begin
        if(s_path_valid) begin
          if(when_Traceback_l46) begin
            ram_addr_write <= 6'h0;
            ram_select <= (! ram_select);
          end else begin
            ram_addr_write <= (ram_addr_write + 6'h01);
          end
          pkg_tail <= s_path_payload_last;
        end
      end
      case(traceback_state)
        `TracebackStates_binary_sequential_FINISH : begin
          tb_node_valid_1 <= 1'b0;
          tb_node_last <= 1'b0;
          tail_repeat <= 1'b0;
          traceback_state <= `TracebackStates_binary_sequential_IDLE;
        end
        `TracebackStates_binary_sequential_IDLE : begin
          tb_node_valid_1 <= 1'b0;
          tb_node_last <= 1'b0;
          if(when_Traceback_l95) begin
            traceback_state <= `TracebackStates_binary_sequential_HALT;
            ram_addr_read <= (ram_addr_write - 6'h01);
            goto_tail <= pkg_tail;
          end
        end
        `TracebackStates_binary_sequential_HALT : begin
          if(goto_tail) begin
            tail_repeat <= ((ram_addr_write < 6'h10) && (decoded_ram_sel == ram_select));
          end
          if(when_Traceback_l107) begin
            traceback_state <= (goto_tail ? `TracebackStates_binary_sequential_TAIL_DECODE : `TracebackStates_binary_sequential_TB);
            ram_addr_read <= (ram_addr_read - 6'h01);
          end
        end
        `TracebackStates_binary_sequential_TAIL_DECODE : begin
          if(when_Traceback_l115) begin
            traceback_state <= (tail_repeat ? `TracebackStates_binary_sequential_TAIL_DECODE : `TracebackStates_binary_sequential_FINISH);
            if(tail_repeat) begin
              tail_repeat <= 1'b0;
              tb_node_last <= 1'b0;
            end else begin
              tb_node_last <= 1'b1;
            end
          end
          ram_addr_read <= ((ram_addr_read == 6'h0) ? 6'h2f : _zz_ram_addr_read);
          tb_node_valid_1 <= 1'b1;
        end
        `TracebackStates_binary_sequential_TB : begin
          if(when_Traceback_l133) begin
            traceback_state <= `TracebackStates_binary_sequential_DECODE;
          end
          ram_addr_read <= ((ram_addr_read == 6'h0) ? 6'h2f : _zz_ram_addr_read_1);
        end
        default : begin
          if(when_Traceback_l142) begin
            traceback_state <= `TracebackStates_binary_sequential_IDLE;
            tb_node_last <= 1'b1;
          end else begin
            ram_addr_read <= (ram_addr_read - 6'h01);
          end
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
        decoded_ram_sel <= 1'b1;
      end
      `TracebackStates_binary_sequential_IDLE : begin
        tb_finish <= 1'b0;
        pipe_halt <= 1'b0;
        halt_cnt <= 2'b00;
      end
      `TracebackStates_binary_sequential_HALT : begin
        pipe_halt <= 1'b1;
        halt_cnt <= (halt_cnt + 2'b01);
        if(when_Traceback_l107) begin
          min_cursor <= min_idx;
          decoded_ram_sel <= ram_select;
        end
      end
      `TracebackStates_binary_sequential_TAIL_DECODE : begin
        if(when_Traceback_l115) begin
          if(tail_repeat) begin
            decoded_ram_sel <= (! decoded_ram_sel);
          end else begin
            tb_finish <= 1'b1;
          end
        end
        min_cursor <= min_cursor_next;
        tb_node_data <= tb_node_data_next;
      end
      `TracebackStates_binary_sequential_TB : begin
        pipe_halt <= 1'b0;
        if(when_Traceback_l133) begin
          decoded_ram_sel <= (! decoded_ram_sel);
        end
        min_cursor <= min_cursor_next;
      end
      default : begin
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
  wire       [15:0]   addCompareSelect_4_dist_0;
  wire       [15:0]   addCompareSelect_4_dist_1;
  wire       [15:0]   addCompareSelect_5_dist_0;
  wire       [15:0]   addCompareSelect_5_dist_1;
  wire       [15:0]   addCompareSelect_6_dist_0;
  wire       [15:0]   addCompareSelect_6_dist_1;
  wire       [15:0]   addCompareSelect_7_dist_0;
  wire       [15:0]   addCompareSelect_7_dist_1;
  wire       [1:0]    branchMetric_4_dist_0;
  wire       [1:0]    branchMetric_4_dist_1;
  wire       [15:0]   addCompareSelect_4_state_weight;
  wire                addCompareSelect_4_decision;
  wire       [1:0]    branchMetric_5_dist_0;
  wire       [1:0]    branchMetric_5_dist_1;
  wire       [15:0]   addCompareSelect_5_state_weight;
  wire                addCompareSelect_5_decision;
  wire       [1:0]    branchMetric_6_dist_0;
  wire       [1:0]    branchMetric_6_dist_1;
  wire       [15:0]   addCompareSelect_6_state_weight;
  wire                addCompareSelect_6_decision;
  wire       [1:0]    branchMetric_7_dist_0;
  wire       [1:0]    branchMetric_7_dist_1;
  wire       [15:0]   addCompareSelect_7_state_weight;
  wire                addCompareSelect_7_decision;
  wire       [15:0]   minVal_1_min_val;
  wire       [1:0]    minVal_1_min_idx;
  reg        [15:0]   node_weight_0;
  reg        [15:0]   node_weight_1;
  reg        [15:0]   node_weight_2;
  reg        [15:0]   node_weight_3;
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
  assign addCompareSelect_4_dist_0 = {14'd0, candidate_branches_0};
  assign addCompareSelect_4_dist_1 = {14'd0, candidate_branches_1};
  assign addCompareSelect_5_dist_0 = {14'd0, candidate_branches_2};
  assign addCompareSelect_5_dist_1 = {14'd0, candidate_branches_3};
  assign addCompareSelect_6_dist_0 = {14'd0, candidate_branches_4};
  assign addCompareSelect_6_dist_1 = {14'd0, candidate_branches_5};
  assign addCompareSelect_7_dist_0 = {14'd0, candidate_branches_6};
  assign addCompareSelect_7_dist_1 = {14'd0, candidate_branches_7};
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
      node_weight_0 <= 16'h0;
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
      node_weight_1 <= 16'h0;
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
      node_weight_2 <= 16'h0;
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
      node_weight_3 <= 16'h0;
      survival_path <= 4'b0000;
    end else begin
      if(raw_data_next) begin
        node_weight_3 <= addCompareSelect_7_state_weight;
        survival_path[3] <= addCompareSelect_7_decision;
      end
    end
  end


endmodule

module MinVal (
  input      [15:0]   data_0,
  input      [15:0]   data_1,
  input      [15:0]   data_2,
  input      [15:0]   data_3,
  output     [15:0]   min_val,
  output     [1:0]    min_idx,
  input               clk,
  input               reset
);
  reg        [15:0]   _zz_min_val;
  reg        [15:0]   _zz_min_val_1;
  reg        [1:0]    _zz_min_idx;
  reg        [1:0]    _zz_min_idx_1;
  reg        [15:0]   _zz_min_val_2;
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
