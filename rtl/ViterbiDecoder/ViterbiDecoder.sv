// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : ViterbiDecoder
// Git hash  : e3a5df1ea47c224930d57c25c9d0d9fb2bdff661


`define fsm_enumDefinition_binary_sequential_type [2:0]
`define fsm_enumDefinition_binary_sequential_fsm_BOOT 3'b000
`define fsm_enumDefinition_binary_sequential_fsm_IDLE 3'b001
`define fsm_enumDefinition_binary_sequential_fsm_TB0 3'b010
`define fsm_enumDefinition_binary_sequential_fsm_DECODE_0 3'b011
`define fsm_enumDefinition_binary_sequential_fsm_TB1 3'b100
`define fsm_enumDefinition_binary_sequential_fsm_DECODE_1 3'b101
`define fsm_enumDefinition_binary_sequential_fsm_WAIT 3'b110


module ViterbiDecoder (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [5:0]    _zz_dist_0,
  input               clc,
  input               clk,
  input               resetn
);
  wire       [1:0]    pmu_core_min_idx;
  wire                pmu_core_s_path_valid;
  wire       [3:0]    pmu_core_s_path_payload;

  PathMetric pmu_core (
    .raw_data_valid    (raw_data_valid           ), //i
    ._zz_dist_0        (_zz_dist_0               ), //i
    .clc               (clc                      ), //i
    .min_idx           (pmu_core_min_idx         ), //o
    .s_path_valid      (pmu_core_s_path_valid    ), //o
    .s_path_payload    (pmu_core_s_path_payload  ), //o
    .clk               (clk                      ), //i
    .resetn            (resetn                   )  //i
  );
  Traceback tbu_core (
    .min_idx           (pmu_core_min_idx         ), //i
    .s_path_valid      (pmu_core_s_path_valid    ), //i
    .s_path_payload    (pmu_core_s_path_payload  ), //i
    .clc               (clc                      ), //i
    .clk               (clk                      ), //i
    .resetn            (resetn                   )  //i
  );
  assign raw_data_ready = 1'b1;

endmodule

module Traceback (
  input      [1:0]    min_idx,
  input               s_path_valid,
  input      [3:0]    s_path_payload,
  input               clc,
  input               clk,
  input               resetn
);
  wire       [3:0]    _zz_survival_path_ram_0_port;
  wire       [3:0]    _zz_survival_path_ram_1_port;
  reg                 _zz_1;
  reg                 _zz_2;
  reg        [7:0]    ram_addr_in;
  reg                 ram_sel;
  wire                when_Traceback_l32;
  reg        [7:0]    ram_addr_out;
  reg        [167:0]  decoded_lifo_0;
  reg        [167:0]  decoded_lifo_1;
  wire                fsm_wantExit;
  reg                 fsm_wantStart;
  wire                fsm_wantKill;
  reg        `fsm_enumDefinition_binary_sequential_type fsm_stateReg;
  reg        `fsm_enumDefinition_binary_sequential_type fsm_stateNext;
  wire                when_Traceback_l50;
  wire                when_Traceback_l69;
  `ifndef SYNTHESIS
  reg [95:0] fsm_stateReg_string;
  reg [95:0] fsm_stateNext_string;
  `endif

  reg [3:0] survival_path_ram_0 [0:251];
  reg [3:0] survival_path_ram_1 [0:251];

  assign _zz_survival_path_ram_0_port = s_path_payload;
  assign _zz_survival_path_ram_1_port = s_path_payload;
  always @(posedge clk) begin
    if(_zz_2) begin
      survival_path_ram_0[ram_addr_in] <= _zz_survival_path_ram_0_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      survival_path_ram_1[ram_addr_in] <= _zz_survival_path_ram_1_port;
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(fsm_stateReg)
      `fsm_enumDefinition_binary_sequential_fsm_BOOT : fsm_stateReg_string = "fsm_BOOT    ";
      `fsm_enumDefinition_binary_sequential_fsm_IDLE : fsm_stateReg_string = "fsm_IDLE    ";
      `fsm_enumDefinition_binary_sequential_fsm_TB0 : fsm_stateReg_string = "fsm_TB0     ";
      `fsm_enumDefinition_binary_sequential_fsm_DECODE_0 : fsm_stateReg_string = "fsm_DECODE_0";
      `fsm_enumDefinition_binary_sequential_fsm_TB1 : fsm_stateReg_string = "fsm_TB1     ";
      `fsm_enumDefinition_binary_sequential_fsm_DECODE_1 : fsm_stateReg_string = "fsm_DECODE_1";
      `fsm_enumDefinition_binary_sequential_fsm_WAIT : fsm_stateReg_string = "fsm_WAIT    ";
      default : fsm_stateReg_string = "????????????";
    endcase
  end
  always @(*) begin
    case(fsm_stateNext)
      `fsm_enumDefinition_binary_sequential_fsm_BOOT : fsm_stateNext_string = "fsm_BOOT    ";
      `fsm_enumDefinition_binary_sequential_fsm_IDLE : fsm_stateNext_string = "fsm_IDLE    ";
      `fsm_enumDefinition_binary_sequential_fsm_TB0 : fsm_stateNext_string = "fsm_TB0     ";
      `fsm_enumDefinition_binary_sequential_fsm_DECODE_0 : fsm_stateNext_string = "fsm_DECODE_0";
      `fsm_enumDefinition_binary_sequential_fsm_TB1 : fsm_stateNext_string = "fsm_TB1     ";
      `fsm_enumDefinition_binary_sequential_fsm_DECODE_1 : fsm_stateNext_string = "fsm_DECODE_1";
      `fsm_enumDefinition_binary_sequential_fsm_WAIT : fsm_stateNext_string = "fsm_WAIT    ";
      default : fsm_stateNext_string = "????????????";
    endcase
  end
  `endif

  always @(*) begin
    _zz_1 = 1'b0;
    if(!clc) begin
      if(s_path_valid) begin
        if(!ram_sel) begin
          _zz_1 = 1'b1;
        end
      end
    end
  end

  always @(*) begin
    _zz_2 = 1'b0;
    if(!clc) begin
      if(s_path_valid) begin
        if(ram_sel) begin
          _zz_2 = 1'b1;
        end
      end
    end
  end

  assign when_Traceback_l32 = (8'h07 <= ram_addr_in);
  assign fsm_wantExit = 1'b0;
  always @(*) begin
    fsm_wantStart = 1'b0;
    case(fsm_stateReg)
      `fsm_enumDefinition_binary_sequential_fsm_IDLE : begin
      end
      `fsm_enumDefinition_binary_sequential_fsm_TB0 : begin
      end
      `fsm_enumDefinition_binary_sequential_fsm_DECODE_0 : begin
      end
      `fsm_enumDefinition_binary_sequential_fsm_TB1 : begin
      end
      `fsm_enumDefinition_binary_sequential_fsm_DECODE_1 : begin
      end
      `fsm_enumDefinition_binary_sequential_fsm_WAIT : begin
      end
      default : begin
        fsm_wantStart = 1'b1;
      end
    endcase
  end

  assign fsm_wantKill = 1'b0;
  always @(*) begin
    fsm_stateNext = fsm_stateReg;
    case(fsm_stateReg)
      `fsm_enumDefinition_binary_sequential_fsm_IDLE : begin
        if(when_Traceback_l50) begin
          fsm_stateNext = `fsm_enumDefinition_binary_sequential_fsm_WAIT;
        end
      end
      `fsm_enumDefinition_binary_sequential_fsm_TB0 : begin
      end
      `fsm_enumDefinition_binary_sequential_fsm_DECODE_0 : begin
      end
      `fsm_enumDefinition_binary_sequential_fsm_TB1 : begin
      end
      `fsm_enumDefinition_binary_sequential_fsm_DECODE_1 : begin
      end
      `fsm_enumDefinition_binary_sequential_fsm_WAIT : begin
        if(when_Traceback_l69) begin
          fsm_stateNext = `fsm_enumDefinition_binary_sequential_fsm_TB0;
        end
      end
      default : begin
      end
    endcase
    if(fsm_wantStart) begin
      fsm_stateNext = `fsm_enumDefinition_binary_sequential_fsm_IDLE;
    end
    if(fsm_wantKill) begin
      fsm_stateNext = `fsm_enumDefinition_binary_sequential_fsm_BOOT;
    end
  end

  assign when_Traceback_l50 = (ram_addr_in == 8'h54);
  assign when_Traceback_l69 = (ram_addr_in == 8'h54);
  always @(posedge clk) begin
    if(clc) begin
      ram_addr_in <= 8'h0;
      ram_sel <= 1'b0;
    end else begin
      if(s_path_valid) begin
        if(when_Traceback_l32) begin
          ram_addr_in <= 8'h0;
          ram_sel <= (! ram_sel);
        end else begin
          ram_addr_in <= (ram_addr_in + 8'h01);
        end
      end
    end
  end

  always @(posedge clk) begin
    if(!resetn) begin
      fsm_stateReg <= `fsm_enumDefinition_binary_sequential_fsm_BOOT;
    end else begin
      fsm_stateReg <= fsm_stateNext;
    end
  end


endmodule

module PathMetric (
  input               raw_data_valid,
  input      [5:0]    _zz_dist_0,
  input               clc,
  output     [1:0]    min_idx,
  output              s_path_valid,
  output     [3:0]    s_path_payload,
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
  reg                 survival_path_valid;

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
    .min_idx    (minVal_1_min_idx  )  //o
  );
  assign addCompareSelect_4_dist_0 = {13'd0, candidate_branches_0};
  assign addCompareSelect_4_dist_1 = {13'd0, candidate_branches_1};
  assign addCompareSelect_5_dist_0 = {13'd0, candidate_branches_2};
  assign addCompareSelect_5_dist_1 = {13'd0, candidate_branches_3};
  assign addCompareSelect_6_dist_0 = {13'd0, candidate_branches_4};
  assign addCompareSelect_6_dist_1 = {13'd0, candidate_branches_5};
  assign addCompareSelect_7_dist_0 = {13'd0, candidate_branches_6};
  assign addCompareSelect_7_dist_1 = {13'd0, candidate_branches_7};
  assign s_path_payload = survival_path;
  assign s_path_valid = survival_path_valid;
  assign min_idx = minVal_1_min_idx;
  always @(posedge clk) begin
    raw_data_next <= raw_data_valid;
    candidate_branches_0 <= branchMetric_4_dist_0;
    candidate_branches_1 <= branchMetric_4_dist_1;
    if(clc) begin
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
    if(clc) begin
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
    if(clc) begin
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
    if(clc) begin
      node_weight_3 <= 16'h0;
      survival_path <= 4'b0000;
    end else begin
      if(raw_data_next) begin
        node_weight_3 <= addCompareSelect_7_state_weight;
        survival_path[3] <= addCompareSelect_7_decision;
      end
    end
  end

  always @(posedge clk) begin
    if(!resetn) begin
      survival_path_valid <= 1'b0;
    end else begin
      if(clc) begin
        survival_path_valid <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
        end else begin
          survival_path_valid <= 1'b0;
        end
      end
      if(clc) begin
        survival_path_valid <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
        end else begin
          survival_path_valid <= 1'b0;
        end
      end
      if(clc) begin
        survival_path_valid <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
        end else begin
          survival_path_valid <= 1'b0;
        end
      end
      if(clc) begin
        survival_path_valid <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
        end else begin
          survival_path_valid <= 1'b0;
        end
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
  output     [1:0]    min_idx
);
  wire       [15:0]   _zz_min_val;
  wire       [15:0]   _zz_min_val_1;

  assign _zz_min_val = ((data_0 <= data_1) ? data_0 : data_1);
  assign _zz_min_val_1 = ((data_2 <= data_3) ? data_2 : data_3);
  assign min_idx = ((_zz_min_val <= _zz_min_val_1) ? ((data_0 <= data_1) ? 2'b00 : 2'b01) : ((data_2 <= data_3) ? 2'b10 : 2'b11));
  assign min_val = ((_zz_min_val <= _zz_min_val_1) ? _zz_min_val : _zz_min_val_1);

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
