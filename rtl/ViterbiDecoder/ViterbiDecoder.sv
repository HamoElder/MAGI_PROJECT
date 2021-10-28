// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : ViterbiDecoder
// Git hash  : 5bfb4b1917c3fb3091cb8a8db0f1b8fc1680d1dd


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
  input      [5:0]    _zz_dist_0,
  input               clk,
  input               resetn
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
    ._zz_dist_0                 (_zz_dist_0                        ), //i
    .tbu_finished               (tbu_core_finished                 ), //i
    .min_idx                    (pmu_core_min_idx                  ), //o
    .s_path_valid               (pmu_core_s_path_valid             ), //o
    .s_path_payload_last        (pmu_core_s_path_payload_last      ), //o
    .s_path_payload_fragment    (pmu_core_s_path_payload_fragment  ), //o
    .clk                        (clk                               ), //i
    .resetn                     (resetn                            )  //i
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
    .resetn                      (resetn                             )  //i
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
  input               resetn
);
  reg        [3:0]    _zz_survival_path_ram_0_port1;
  reg        [3:0]    _zz_survival_path_ram_1_port1;
  wire       [3:0]    _zz_survival_path_ram_0_port;
  wire                _zz_survival_path_ram_0_port_1;
  wire       [3:0]    _zz_survival_path_ram_1_port;
  wire                _zz_survival_path_ram_1_port_1;
  wire       [2:0]    _zz_cursor;
  wire       [2:0]    _zz_cursor_1;
  wire       [2:0]    _zz_cursor_2;
  wire       [0:0]    _zz_cursor_3;
  wire       [2:0]    _zz_cursor_4;
  wire       [2:0]    _zz_cursor_5;
  wire       [2:0]    _zz_cursor_6;
  wire       [0:0]    _zz_cursor_7;
  reg        [1:0]    _zz_min_cursor_next;
  reg        [0:0]    _zz_tb_node_data_next;
  wire       [1:0]    states_shift_rom_0;
  wire       [1:0]    states_shift_rom_1;
  wire       [1:0]    states_shift_rom_2;
  wire       [1:0]    states_shift_rom_3;
  wire       [1:0]    states_shift_rom_4;
  wire       [1:0]    states_shift_rom_5;
  wire       [1:0]    states_shift_rom_6;
  wire       [1:0]    states_shift_rom_7;
  wire       [0:0]    in_data_rom_0;
  wire       [0:0]    in_data_rom_1;
  wire       [0:0]    in_data_rom_2;
  wire       [0:0]    in_data_rom_3;
  wire       [0:0]    in_data_rom_4;
  wire       [0:0]    in_data_rom_5;
  wire       [0:0]    in_data_rom_6;
  wire       [0:0]    in_data_rom_7;
  reg                 ram_select;
  reg        [7:0]    ram_addr_write;
  reg                 pkg_tail;
  reg                 tb_finish;
  wire                when_Traceback_l45;
  reg                 decoded_ram_sel;
  reg        [7:0]    ram_addr_read;
  reg                 pipe_halt;
  reg        [1:0]    min_cursor;
  wire                _zz_ram_0_value;
  wire       [3:0]    ram_0_value;
  wire                _zz_ram_1_value;
  wire       [3:0]    ram_1_value;
  wire       [2:0]    cursor;
  wire       [1:0]    min_cursor_next;
  wire       [0:0]    tb_node_data_next;
  reg        [0:0]    tb_node_data;
  reg                 tb_node_valid_1;
  reg                 tb_node_last;
  reg        [1:0]    halt_cnt;
  reg        `TracebackStates_binary_sequential_type traceback_state;
  wire                when_Traceback_l85;
  wire                when_Traceback_l96;
  wire                when_Traceback_l106;
  wire                when_Traceback_l113;
  wire                when_Traceback_l128;
  wire                when_Traceback_l138;
  `ifndef SYNTHESIS
  reg [87:0] traceback_state_string;
  `endif

  reg [3:0] survival_path_ram_0 [0:251];
  reg [3:0] survival_path_ram_1 [0:251];

  assign _zz_cursor = (_zz_cursor_1 + _zz_cursor_2);
  assign _zz_cursor_1 = ({1'd0,min_cursor} <<< 1);
  assign _zz_cursor_3 = ram_0_value[min_cursor];
  assign _zz_cursor_2 = {2'd0, _zz_cursor_3};
  assign _zz_cursor_4 = (_zz_cursor_5 + _zz_cursor_6);
  assign _zz_cursor_5 = ({1'd0,min_cursor} <<< 1);
  assign _zz_cursor_7 = ram_1_value[min_cursor];
  assign _zz_cursor_6 = {2'd0, _zz_cursor_7};
  assign _zz_survival_path_ram_0_port = s_path_payload_fragment;
  assign _zz_survival_path_ram_0_port_1 = ((ram_select == 1'b0) && s_path_valid);
  assign _zz_survival_path_ram_1_port = s_path_payload_fragment;
  assign _zz_survival_path_ram_1_port_1 = ((ram_select == 1'b1) && s_path_valid);
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

  always @(*) begin
    case(cursor)
      3'b000 : begin
        _zz_min_cursor_next = states_shift_rom_0;
        _zz_tb_node_data_next = in_data_rom_0;
      end
      3'b001 : begin
        _zz_min_cursor_next = states_shift_rom_1;
        _zz_tb_node_data_next = in_data_rom_1;
      end
      3'b010 : begin
        _zz_min_cursor_next = states_shift_rom_2;
        _zz_tb_node_data_next = in_data_rom_2;
      end
      3'b011 : begin
        _zz_min_cursor_next = states_shift_rom_3;
        _zz_tb_node_data_next = in_data_rom_3;
      end
      3'b100 : begin
        _zz_min_cursor_next = states_shift_rom_4;
        _zz_tb_node_data_next = in_data_rom_4;
      end
      3'b101 : begin
        _zz_min_cursor_next = states_shift_rom_5;
        _zz_tb_node_data_next = in_data_rom_5;
      end
      3'b110 : begin
        _zz_min_cursor_next = states_shift_rom_6;
        _zz_tb_node_data_next = in_data_rom_6;
      end
      default : begin
        _zz_min_cursor_next = states_shift_rom_7;
        _zz_tb_node_data_next = in_data_rom_7;
      end
    endcase
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

  assign states_shift_rom_0 = 2'b00;
  assign in_data_rom_0 = 1'b0;
  assign states_shift_rom_1 = 2'b01;
  assign in_data_rom_1 = 1'b0;
  assign states_shift_rom_2 = 2'b10;
  assign in_data_rom_2 = 1'b0;
  assign states_shift_rom_3 = 2'b11;
  assign in_data_rom_3 = 1'b0;
  assign states_shift_rom_4 = 2'b00;
  assign in_data_rom_4 = 1'b1;
  assign states_shift_rom_5 = 2'b01;
  assign in_data_rom_5 = 1'b1;
  assign states_shift_rom_6 = 2'b10;
  assign in_data_rom_6 = 1'b1;
  assign states_shift_rom_7 = 2'b11;
  assign in_data_rom_7 = 1'b1;
  assign when_Traceback_l45 = (8'hfb <= ram_addr_write);
  assign _zz_ram_0_value = (decoded_ram_sel == 1'b0);
  assign ram_0_value = _zz_survival_path_ram_0_port1;
  assign _zz_ram_1_value = (decoded_ram_sel == 1'b1);
  assign ram_1_value = _zz_survival_path_ram_1_port1;
  assign cursor = (decoded_ram_sel ? _zz_cursor : _zz_cursor_4);
  assign min_cursor_next = _zz_min_cursor_next;
  assign tb_node_data_next = _zz_tb_node_data_next;
  assign when_Traceback_l85 = (halt_cnt != 2'b00);
  assign when_Traceback_l96 = (((ram_addr_write == 8'h54) && (decoded_ram_sel == ram_select)) || pkg_tail);
  assign when_Traceback_l106 = (halt_cnt == 2'b10);
  assign when_Traceback_l113 = (ram_addr_read == 8'h0);
  assign when_Traceback_l128 = (ram_addr_read == 8'h0);
  assign when_Traceback_l138 = (ram_addr_read == 8'h0);
  assign finished = tb_finish;
  assign halt = pipe_halt;
  assign tb_node_valid = tb_node_valid_1;
  assign tb_node_payload_fragment = tb_node_data;
  assign tb_node_payload_last = tb_node_last;
  always @(posedge clk) begin
    if(!resetn) begin
      ram_select <= 1'b0;
      ram_addr_write <= 8'h0;
      pkg_tail <= 1'b0;
      ram_addr_read <= 8'h0;
      tb_node_valid_1 <= 1'b0;
      tb_node_last <= 1'b0;
      traceback_state <= `TracebackStates_binary_sequential_FINISH;
    end else begin
      if(tb_finish) begin
        ram_addr_write <= 8'h0;
        ram_select <= 1'b0;
        pkg_tail <= 1'b0;
      end else begin
        if(s_path_valid) begin
          if(when_Traceback_l45) begin
            ram_addr_write <= 8'h0;
            ram_select <= (! ram_select);
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
          if(when_Traceback_l85) begin
            traceback_state <= `TracebackStates_binary_sequential_IDLE;
          end
        end
        `TracebackStates_binary_sequential_IDLE : begin
          tb_node_valid_1 <= 1'b0;
          tb_node_last <= 1'b0;
          if(when_Traceback_l96) begin
            traceback_state <= `TracebackStates_binary_sequential_HALT;
            ram_addr_read <= ram_addr_write;
          end
        end
        `TracebackStates_binary_sequential_HALT : begin
          if(when_Traceback_l106) begin
            traceback_state <= (pkg_tail ? `TracebackStates_binary_sequential_TAIL_DECODE : `TracebackStates_binary_sequential_TB);
            ram_addr_read <= (ram_addr_read - 8'h01);
          end
        end
        `TracebackStates_binary_sequential_TAIL_DECODE : begin
          if(when_Traceback_l113) begin
            traceback_state <= `TracebackStates_binary_sequential_FINISH;
            ram_addr_read <= 8'hfb;
            tb_node_last <= 1'b1;
          end else begin
            ram_addr_read <= (ram_addr_read - 8'h01);
          end
          tb_node_valid_1 <= 1'b1;
        end
        `TracebackStates_binary_sequential_TB : begin
          if(when_Traceback_l128) begin
            traceback_state <= `TracebackStates_binary_sequential_DECODE;
            ram_addr_read <= 8'hfb;
          end else begin
            ram_addr_read <= (ram_addr_read - 8'h01);
          end
        end
        default : begin
          if(when_Traceback_l138) begin
            traceback_state <= `TracebackStates_binary_sequential_IDLE;
            tb_node_last <= 1'b1;
          end else begin
            ram_addr_read <= (ram_addr_read - 8'h01);
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
        halt_cnt <= (halt_cnt + 2'b01);
      end
      `TracebackStates_binary_sequential_IDLE : begin
        tb_finish <= 1'b0;
        pipe_halt <= 1'b0;
        halt_cnt <= 2'b00;
      end
      `TracebackStates_binary_sequential_HALT : begin
        pipe_halt <= 1'b1;
        halt_cnt <= (halt_cnt + 2'b01);
        decoded_ram_sel <= (pkg_tail ? ram_select : decoded_ram_sel);
        min_cursor <= min_idx;
      end
      `TracebackStates_binary_sequential_TAIL_DECODE : begin
        halt_cnt <= 2'b00;
        min_cursor <= min_cursor_next;
        tb_node_data <= tb_node_data_next;
      end
      `TracebackStates_binary_sequential_TB : begin
        pipe_halt <= 1'b0;
        if(when_Traceback_l128) begin
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
  input      [5:0]    _zz_dist_0,
  input               tbu_finished,
  output     [1:0]    min_idx,
  output              s_path_valid,
  output              s_path_payload_last,
  output     [3:0]    s_path_payload_fragment,
  input               clk,
  input               resetn
);
  wire       [15:0]   addCompareSelect_4_dist_0;
  wire       [15:0]   addCompareSelect_4_dist_1;
  wire       [15:0]   addCompareSelect_5_dist_0;
  wire       [15:0]   addCompareSelect_5_dist_1;
  wire       [15:0]   addCompareSelect_6_dist_0;
  wire       [15:0]   addCompareSelect_6_dist_1;
  wire       [15:0]   addCompareSelect_7_dist_0;
  wire       [15:0]   addCompareSelect_7_dist_1;
  wire       [2:0]    branchMetric_4_dist_0;
  wire       [2:0]    branchMetric_4_dist_1;
  wire       [15:0]   addCompareSelect_4_state_weight;
  wire                addCompareSelect_4_decision;
  wire       [2:0]    branchMetric_5_dist_0;
  wire       [2:0]    branchMetric_5_dist_1;
  wire       [15:0]   addCompareSelect_5_state_weight;
  wire                addCompareSelect_5_decision;
  wire       [2:0]    branchMetric_6_dist_0;
  wire       [2:0]    branchMetric_6_dist_1;
  wire       [15:0]   addCompareSelect_6_state_weight;
  wire                addCompareSelect_6_decision;
  wire       [2:0]    branchMetric_7_dist_0;
  wire       [2:0]    branchMetric_7_dist_1;
  wire       [15:0]   addCompareSelect_7_state_weight;
  wire                addCompareSelect_7_decision;
  wire       [15:0]   minVal_1_min_val;
  wire       [1:0]    minVal_1_min_idx;
  reg        [15:0]   node_weight_0;
  reg        [15:0]   node_weight_1;
  reg        [15:0]   node_weight_2;
  reg        [15:0]   node_weight_3;
  reg        [2:0]    candidate_branches_0;
  reg        [2:0]    candidate_branches_1;
  reg        [2:0]    candidate_branches_2;
  reg        [2:0]    candidate_branches_3;
  reg        [2:0]    candidate_branches_4;
  reg        [2:0]    candidate_branches_5;
  reg        [2:0]    candidate_branches_6;
  reg        [2:0]    candidate_branches_7;
  reg        [3:0]    survival_path;
  reg                 raw_data_next;
  reg                 raw_data_last_next;
  reg                 survival_path_valid;
  reg                 survival_path_last;
  reg                 raw_data_ready_1;

  BranchMetric branchMetric_4 (
    ._zz_dist_0      (6'h0                   ), //i
    ._zz_dist_1      (6'h3f                  ), //i
    ._zz_dist_0_1    (_zz_dist_0             ), //i
    .dist_0          (branchMetric_4_dist_0  ), //o
    .dist_1          (branchMetric_4_dist_1  )  //o
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
    ._zz_dist_0      (6'h38                  ), //i
    ._zz_dist_1      (6'h07                  ), //i
    ._zz_dist_0_1    (_zz_dist_0             ), //i
    .dist_0          (branchMetric_5_dist_0  ), //o
    .dist_1          (branchMetric_5_dist_1  )  //o
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
    ._zz_dist_0      (6'h3f                  ), //i
    ._zz_dist_1      (6'h0                   ), //i
    ._zz_dist_0_1    (_zz_dist_0             ), //i
    .dist_0          (branchMetric_6_dist_0  ), //o
    .dist_1          (branchMetric_6_dist_1  )  //o
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
    ._zz_dist_0      (6'h07                  ), //i
    ._zz_dist_1      (6'h38                  ), //i
    ._zz_dist_0_1    (_zz_dist_0             ), //i
    .dist_0          (branchMetric_7_dist_0  ), //o
    .dist_1          (branchMetric_7_dist_1  )  //o
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
    .resetn     (resetn            )  //i
  );
  assign addCompareSelect_4_dist_0 = {13'd0, candidate_branches_0};
  assign addCompareSelect_4_dist_1 = {13'd0, candidate_branches_1};
  assign addCompareSelect_5_dist_0 = {13'd0, candidate_branches_2};
  assign addCompareSelect_5_dist_1 = {13'd0, candidate_branches_3};
  assign addCompareSelect_6_dist_0 = {13'd0, candidate_branches_4};
  assign addCompareSelect_6_dist_1 = {13'd0, candidate_branches_5};
  assign addCompareSelect_7_dist_0 = {13'd0, candidate_branches_6};
  assign addCompareSelect_7_dist_1 = {13'd0, candidate_branches_7};
  assign raw_data_ready = raw_data_ready_1;
  assign s_path_payload_fragment = survival_path;
  assign s_path_valid = survival_path_valid;
  assign s_path_payload_last = survival_path_last;
  assign min_idx = minVal_1_min_idx;
  always @(posedge clk) begin
    if(!resetn) begin
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
        if(raw_data_payload_last) begin
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
  input               resetn
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
  input      [5:0]    _zz_dist_0,
  input      [5:0]    _zz_dist_1,
  input      [5:0]    _zz_dist_0_1,
  output     [2:0]    dist_0,
  output     [2:0]    dist_1
);
  wire       [2:0]    _zz_dist_0_8;
  wire       [2:0]    _zz_dist_0_9;
  wire       [2:0]    _zz_dist_0_10;
  wire       [2:0]    _zz_dist_0_11;
  wire       [2:0]    _zz_dist_0_12;
  wire       [2:0]    _zz_dist_0_13;
  wire       [2:0]    _zz_dist_0_14;
  wire       [2:0]    _zz_dist_1_7;
  wire       [2:0]    _zz_dist_1_8;
  wire       [2:0]    _zz_dist_1_9;
  wire       [2:0]    _zz_dist_1_10;
  wire       [2:0]    _zz_dist_1_11;
  wire       [2:0]    _zz_dist_1_12;
  wire       [2:0]    _zz_dist_1_13;
  wire       [5:0]    _zz_dist_0_2;
  wire       [2:0]    _zz_dist_0_3;
  wire       [2:0]    _zz_dist_0_4;
  wire       [5:0]    _zz_dist_0_5;
  wire       [2:0]    _zz_dist_0_6;
  wire       [2:0]    _zz_dist_0_7;
  wire       [5:0]    _zz_dist_1_1;
  wire       [2:0]    _zz_dist_1_2;
  wire       [2:0]    _zz_dist_1_3;
  wire       [5:0]    _zz_dist_1_4;
  wire       [2:0]    _zz_dist_1_5;
  wire       [2:0]    _zz_dist_1_6;

  assign _zz_dist_0_8 = (((_zz_dist_0_4 == 3'b000) ? _zz_dist_0_9 : _zz_dist_0_10) + _zz_dist_0_11);
  assign _zz_dist_0_9 = (_zz_dist_0_7 - _zz_dist_0_4);
  assign _zz_dist_0_10 = (_zz_dist_0_4 - _zz_dist_0_7);
  assign _zz_dist_0_12 = ((_zz_dist_0_3 == 3'b000) ? _zz_dist_0_13 : _zz_dist_0_14);
  assign _zz_dist_0_11 = _zz_dist_0_12;
  assign _zz_dist_0_13 = (_zz_dist_0_6 - _zz_dist_0_3);
  assign _zz_dist_0_14 = (_zz_dist_0_3 - _zz_dist_0_6);
  assign _zz_dist_1_7 = (((_zz_dist_1_3 == 3'b000) ? _zz_dist_1_8 : _zz_dist_1_9) + _zz_dist_1_10);
  assign _zz_dist_1_8 = (_zz_dist_1_6 - _zz_dist_1_3);
  assign _zz_dist_1_9 = (_zz_dist_1_3 - _zz_dist_1_6);
  assign _zz_dist_1_11 = ((_zz_dist_1_2 == 3'b000) ? _zz_dist_1_12 : _zz_dist_1_13);
  assign _zz_dist_1_10 = _zz_dist_1_11;
  assign _zz_dist_1_12 = (_zz_dist_1_5 - _zz_dist_1_2);
  assign _zz_dist_1_13 = (_zz_dist_1_2 - _zz_dist_1_5);
  assign _zz_dist_0_2 = _zz_dist_0;
  assign _zz_dist_0_3 = _zz_dist_0_2[2 : 0];
  assign _zz_dist_0_4 = _zz_dist_0_2[5 : 3];
  assign _zz_dist_0_5 = _zz_dist_0_1;
  assign _zz_dist_0_6 = _zz_dist_0_5[2 : 0];
  assign _zz_dist_0_7 = _zz_dist_0_5[5 : 3];
  assign dist_0 = _zz_dist_0_8;
  assign _zz_dist_1_1 = _zz_dist_1;
  assign _zz_dist_1_2 = _zz_dist_1_1[2 : 0];
  assign _zz_dist_1_3 = _zz_dist_1_1[5 : 3];
  assign _zz_dist_1_4 = _zz_dist_0_1;
  assign _zz_dist_1_5 = _zz_dist_1_4[2 : 0];
  assign _zz_dist_1_6 = _zz_dist_1_4[5 : 3];
  assign dist_1 = _zz_dist_1_7;

endmodule
