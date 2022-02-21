// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Axi4SdramCtrl
// Git hash  : 0217021604d3a9ca978d159eb118fec977cd8522


`define SdramCtrlBackendTask_binary_sequential_type [2:0]
`define SdramCtrlBackendTask_binary_sequential_MODE 3'b000
`define SdramCtrlBackendTask_binary_sequential_PRECHARGE_ALL 3'b001
`define SdramCtrlBackendTask_binary_sequential_PRECHARGE_SINGLE 3'b010
`define SdramCtrlBackendTask_binary_sequential_REFRESH 3'b011
`define SdramCtrlBackendTask_binary_sequential_ACTIVE 3'b100
`define SdramCtrlBackendTask_binary_sequential_READ 3'b101
`define SdramCtrlBackendTask_binary_sequential_WRITE 3'b110

`define SdramCtrlFrontendState_binary_sequential_type [1:0]
`define SdramCtrlFrontendState_binary_sequential_BOOT_PRECHARGE 2'b00
`define SdramCtrlFrontendState_binary_sequential_BOOT_REFRESH 2'b01
`define SdramCtrlFrontendState_binary_sequential_BOOT_MODE 2'b10
`define SdramCtrlFrontendState_binary_sequential_RUN 2'b11


module Axi4SdramCtrl (
  input               io_axi_aw_valid,
  output              io_axi_aw_ready,
  input      [25:0]   io_axi_aw_payload_addr,
  input      [2:0]    io_axi_aw_payload_id,
  input      [7:0]    io_axi_aw_payload_len,
  input      [2:0]    io_axi_aw_payload_size,
  input      [1:0]    io_axi_aw_payload_burst,
  input               io_axi_w_valid,
  output              io_axi_w_ready,
  input      [31:0]   io_axi_w_payload_data,
  input      [3:0]    io_axi_w_payload_strb,
  input               io_axi_w_payload_last,
  output              io_axi_b_valid,
  input               io_axi_b_ready,
  output     [2:0]    io_axi_b_payload_id,
  output     [1:0]    io_axi_b_payload_resp,
  input               io_axi_ar_valid,
  output              io_axi_ar_ready,
  input      [25:0]   io_axi_ar_payload_addr,
  input      [2:0]    io_axi_ar_payload_id,
  input      [7:0]    io_axi_ar_payload_len,
  input      [2:0]    io_axi_ar_payload_size,
  input      [1:0]    io_axi_ar_payload_burst,
  output              io_axi_r_valid,
  input               io_axi_r_ready,
  output     [31:0]   io_axi_r_payload_data,
  output     [2:0]    io_axi_r_payload_id,
  output     [1:0]    io_axi_r_payload_resp,
  output              io_axi_r_payload_last,
  output     [12:0]   io_sdram_ADDR,
  output     [1:0]    io_sdram_BA,
  input      [15:0]   io_sdram_DQ_read,
  output     [15:0]   io_sdram_DQ_write,
  output     [15:0]   io_sdram_DQ_writeEnable,
  output     [1:0]    io_sdram_DQM,
  output              io_sdram_CASn,
  output              io_sdram_CKE,
  output              io_sdram_CSn,
  output              io_sdram_RASn,
  output              io_sdram_WEn,
  input               clk,
  input               resetn
);
  wire       [24:0]   ctrl_io_bus_cmd_payload_address;
  wire       [15:0]   ctrl_io_bus_cmd_payload_data;
  wire       [1:0]    ctrl_io_bus_cmd_payload_mask;
  wire                ctrl_io_bus_rsp_ready;
  wire                ctrl_io_bus_cmd_ready;
  wire                ctrl_io_bus_rsp_valid;
  wire       [15:0]   ctrl_io_bus_rsp_payload_data;
  wire       [2:0]    ctrl_io_bus_rsp_payload_context_id;
  wire                ctrl_io_bus_rsp_payload_context_last;
  wire       [12:0]   ctrl_io_sdram_ADDR;
  wire       [1:0]    ctrl_io_sdram_BA;
  wire                ctrl_io_sdram_CASn;
  wire                ctrl_io_sdram_CKE;
  wire                ctrl_io_sdram_CSn;
  wire       [1:0]    ctrl_io_sdram_DQM;
  wire                ctrl_io_sdram_RASn;
  wire                ctrl_io_sdram_WEn;
  wire       [15:0]   ctrl_io_sdram_DQ_write;
  wire       [15:0]   ctrl_io_sdram_DQ_writeEnable;
  wire                streamArbiter_1_io_inputs_0_ready;
  wire                streamArbiter_1_io_inputs_1_ready;
  wire                streamArbiter_1_io_output_valid;
  wire       [25:0]   streamArbiter_1_io_output_payload_addr;
  wire       [2:0]    streamArbiter_1_io_output_payload_id;
  wire       [7:0]    streamArbiter_1_io_output_payload_len;
  wire       [2:0]    streamArbiter_1_io_output_payload_size;
  wire       [1:0]    streamArbiter_1_io_output_payload_burst;
  wire       [0:0]    streamArbiter_1_io_chosen;
  wire       [1:0]    streamArbiter_1_io_chosenOH;
  reg        [15:0]   _zz_io_bus_cmd_payload_data;
  reg        [1:0]    _zz_io_bus_cmd_payload_mask;
  wire       [1:0]    _zz_Axi4Incr_alignMask;
  wire       [11:0]   _zz_Axi4Incr_base;
  wire       [11:0]   _zz_Axi4Incr_base_1;
  wire       [11:0]   _zz_Axi4Incr_baseIncr;
  wire       [2:0]    _zz_Axi4Incr_wrapCase_1;
  wire       [2:0]    _zz_Axi4Incr_wrapCase_2;
  reg        [11:0]   _zz_Axi4Incr_result;
  wire       [10:0]   _zz_Axi4Incr_result_1;
  wire       [0:0]    _zz_Axi4Incr_result_2;
  wire       [9:0]    _zz_Axi4Incr_result_3;
  wire       [1:0]    _zz_Axi4Incr_result_4;
  wire       [8:0]    _zz_Axi4Incr_result_5;
  wire       [2:0]    _zz_Axi4Incr_result_6;
  wire       [7:0]    _zz_Axi4Incr_result_7;
  wire       [3:0]    _zz_Axi4Incr_result_8;
  wire       [6:0]    _zz_Axi4Incr_result_9;
  wire       [4:0]    _zz_Axi4Incr_result_10;
  wire       [5:0]    _zz_Axi4Incr_result_11;
  wire       [5:0]    _zz_Axi4Incr_result_12;
  wire                ctrlBusAdapted_cmd_valid;
  wire                ctrlBusAdapted_cmd_ready;
  wire       [23:0]   ctrlBusAdapted_cmd_payload_address;
  wire                ctrlBusAdapted_cmd_payload_write;
  wire       [31:0]   ctrlBusAdapted_cmd_payload_data;
  wire       [3:0]    ctrlBusAdapted_cmd_payload_mask;
  wire       [2:0]    ctrlBusAdapted_cmd_payload_context_id;
  wire                ctrlBusAdapted_cmd_payload_context_last;
  wire                ctrlBusAdapted_rsp_valid;
  wire                ctrlBusAdapted_rsp_ready;
  wire       [31:0]   ctrlBusAdapted_rsp_payload_data;
  wire       [2:0]    ctrlBusAdapted_rsp_payload_context_id;
  wire                ctrlBusAdapted_rsp_payload_context_last;
  wire                ctrl_io_bus_cmd_fire;
  reg                 _zz_ctrlBusAdapted_cmd_ready;
  reg        [0:0]    _zz_ctrlBusAdapted_cmd_ready_1;
  reg        [0:0]    _zz_ctrlBusAdapted_cmd_ready_2;
  wire                _zz_ctrlBusAdapted_cmd_ready_3;
  wire                ctrl_io_bus_rsp_fire;
  reg                 _zz_ctrlBusAdapted_rsp_valid;
  reg        [0:0]    _zz_ctrlBusAdapted_rsp_valid_1;
  reg        [0:0]    _zz_ctrlBusAdapted_rsp_valid_2;
  wire                _zz_ctrlBusAdapted_rsp_valid_3;
  wire                ctrl_io_bus_rsp_fire_1;
  reg        [15:0]   ctrl_io_bus_rsp_payload_data_regNextWhen;
  wire                _zz_unburstify_result_valid;
  reg                 _zz_io_output_ready;
  wire       [25:0]   _zz_unburstify_result_payload_fragment_addr;
  wire       [2:0]    _zz_unburstify_result_payload_fragment_id;
  wire       [7:0]    _zz_unburstify_buffer_len;
  wire       [2:0]    _zz_unburstify_result_payload_fragment_size;
  wire       [1:0]    _zz_unburstify_result_payload_fragment_burst;
  wire                _zz_unburstify_result_payload_fragment_write;
  reg                 unburstify_result_valid;
  wire                unburstify_result_ready;
  reg                 unburstify_result_payload_last;
  reg        [25:0]   unburstify_result_payload_fragment_addr;
  reg        [2:0]    unburstify_result_payload_fragment_id;
  reg        [2:0]    unburstify_result_payload_fragment_size;
  reg        [1:0]    unburstify_result_payload_fragment_burst;
  reg                 unburstify_result_payload_fragment_write;
  wire                unburstify_doResult;
  reg                 unburstify_buffer_valid;
  reg        [7:0]    unburstify_buffer_len;
  reg        [7:0]    unburstify_buffer_beat;
  reg        [25:0]   unburstify_buffer_transaction_addr;
  reg        [2:0]    unburstify_buffer_transaction_id;
  reg        [2:0]    unburstify_buffer_transaction_size;
  reg        [1:0]    unburstify_buffer_transaction_burst;
  reg                 unburstify_buffer_transaction_write;
  wire                unburstify_buffer_last;
  wire       [1:0]    Axi4Incr_validSize;
  reg        [25:0]   Axi4Incr_result;
  wire       [13:0]   Axi4Incr_highCat;
  wire       [2:0]    Axi4Incr_sizeValue;
  wire       [11:0]   Axi4Incr_alignMask;
  wire       [11:0]   Axi4Incr_base;
  wire       [11:0]   Axi4Incr_baseIncr;
  reg        [1:0]    _zz_Axi4Incr_wrapCase;
  wire       [2:0]    Axi4Incr_wrapCase;
  wire                when_Axi4Channel_l181;
  wire                _zz_unburstify_result_ready;
  wire                bridge_axiCmd_valid;
  wire                bridge_axiCmd_ready;
  wire                bridge_axiCmd_payload_last;
  wire       [25:0]   bridge_axiCmd_payload_fragment_addr;
  wire       [2:0]    bridge_axiCmd_payload_fragment_id;
  wire       [2:0]    bridge_axiCmd_payload_fragment_size;
  wire       [1:0]    bridge_axiCmd_payload_fragment_burst;
  wire                bridge_axiCmd_payload_fragment_write;
  wire                bridge_writeRsp_valid;
  reg                 bridge_writeRsp_ready;
  wire       [2:0]    bridge_writeRsp_payload_id;
  wire       [1:0]    bridge_writeRsp_payload_resp;
  wire                bridge_axiCmd_fire;
  wire                bridge_writeRsp_m2sPipe_valid;
  wire                bridge_writeRsp_m2sPipe_ready;
  wire       [2:0]    bridge_writeRsp_m2sPipe_payload_id;
  wire       [1:0]    bridge_writeRsp_m2sPipe_payload_resp;
  reg                 bridge_writeRsp_rValid;
  reg        [2:0]    bridge_writeRsp_rData_id;
  reg        [1:0]    bridge_writeRsp_rData_resp;
  wire                when_Stream_l342;

  assign _zz_Axi4Incr_alignMask = {(2'b01 < Axi4Incr_validSize),(2'b00 < Axi4Incr_validSize)};
  assign _zz_Axi4Incr_base_1 = unburstify_buffer_transaction_addr[11 : 0];
  assign _zz_Axi4Incr_base = _zz_Axi4Incr_base_1;
  assign _zz_Axi4Incr_baseIncr = {9'd0, Axi4Incr_sizeValue};
  assign _zz_Axi4Incr_wrapCase_1 = {1'd0, Axi4Incr_validSize};
  assign _zz_Axi4Incr_wrapCase_2 = {1'd0, _zz_Axi4Incr_wrapCase};
  assign _zz_Axi4Incr_result_1 = Axi4Incr_base[11 : 1];
  assign _zz_Axi4Incr_result_2 = Axi4Incr_baseIncr[0 : 0];
  assign _zz_Axi4Incr_result_3 = Axi4Incr_base[11 : 2];
  assign _zz_Axi4Incr_result_4 = Axi4Incr_baseIncr[1 : 0];
  assign _zz_Axi4Incr_result_5 = Axi4Incr_base[11 : 3];
  assign _zz_Axi4Incr_result_6 = Axi4Incr_baseIncr[2 : 0];
  assign _zz_Axi4Incr_result_7 = Axi4Incr_base[11 : 4];
  assign _zz_Axi4Incr_result_8 = Axi4Incr_baseIncr[3 : 0];
  assign _zz_Axi4Incr_result_9 = Axi4Incr_base[11 : 5];
  assign _zz_Axi4Incr_result_10 = Axi4Incr_baseIncr[4 : 0];
  assign _zz_Axi4Incr_result_11 = Axi4Incr_base[11 : 6];
  assign _zz_Axi4Incr_result_12 = Axi4Incr_baseIncr[5 : 0];
  SdramCtrl ctrl (
    .io_bus_cmd_valid                   (ctrlBusAdapted_cmd_valid                 ), //i
    .io_bus_cmd_ready                   (ctrl_io_bus_cmd_ready                    ), //o
    .io_bus_cmd_payload_address         (ctrl_io_bus_cmd_payload_address          ), //i
    .io_bus_cmd_payload_write           (ctrlBusAdapted_cmd_payload_write         ), //i
    .io_bus_cmd_payload_data            (ctrl_io_bus_cmd_payload_data             ), //i
    .io_bus_cmd_payload_mask            (ctrl_io_bus_cmd_payload_mask             ), //i
    .io_bus_cmd_payload_context_id      (ctrlBusAdapted_cmd_payload_context_id    ), //i
    .io_bus_cmd_payload_context_last    (ctrlBusAdapted_cmd_payload_context_last  ), //i
    .io_bus_rsp_valid                   (ctrl_io_bus_rsp_valid                    ), //o
    .io_bus_rsp_ready                   (ctrl_io_bus_rsp_ready                    ), //i
    .io_bus_rsp_payload_data            (ctrl_io_bus_rsp_payload_data             ), //o
    .io_bus_rsp_payload_context_id      (ctrl_io_bus_rsp_payload_context_id       ), //o
    .io_bus_rsp_payload_context_last    (ctrl_io_bus_rsp_payload_context_last     ), //o
    .io_sdram_ADDR                      (ctrl_io_sdram_ADDR                       ), //o
    .io_sdram_BA                        (ctrl_io_sdram_BA                         ), //o
    .io_sdram_DQ_read                   (io_sdram_DQ_read                         ), //i
    .io_sdram_DQ_write                  (ctrl_io_sdram_DQ_write                   ), //o
    .io_sdram_DQ_writeEnable            (ctrl_io_sdram_DQ_writeEnable             ), //o
    .io_sdram_DQM                       (ctrl_io_sdram_DQM                        ), //o
    .io_sdram_CASn                      (ctrl_io_sdram_CASn                       ), //o
    .io_sdram_CKE                       (ctrl_io_sdram_CKE                        ), //o
    .io_sdram_CSn                       (ctrl_io_sdram_CSn                        ), //o
    .io_sdram_RASn                      (ctrl_io_sdram_RASn                       ), //o
    .io_sdram_WEn                       (ctrl_io_sdram_WEn                        ), //o
    .clk                                (clk                                      ), //i
    .resetn                             (resetn                                   )  //i
  );
  StreamArbiter streamArbiter_1 (
    .io_inputs_0_valid            (io_axi_ar_valid                          ), //i
    .io_inputs_0_ready            (streamArbiter_1_io_inputs_0_ready        ), //o
    .io_inputs_0_payload_addr     (io_axi_ar_payload_addr                   ), //i
    .io_inputs_0_payload_id       (io_axi_ar_payload_id                     ), //i
    .io_inputs_0_payload_len      (io_axi_ar_payload_len                    ), //i
    .io_inputs_0_payload_size     (io_axi_ar_payload_size                   ), //i
    .io_inputs_0_payload_burst    (io_axi_ar_payload_burst                  ), //i
    .io_inputs_1_valid            (io_axi_aw_valid                          ), //i
    .io_inputs_1_ready            (streamArbiter_1_io_inputs_1_ready        ), //o
    .io_inputs_1_payload_addr     (io_axi_aw_payload_addr                   ), //i
    .io_inputs_1_payload_id       (io_axi_aw_payload_id                     ), //i
    .io_inputs_1_payload_len      (io_axi_aw_payload_len                    ), //i
    .io_inputs_1_payload_size     (io_axi_aw_payload_size                   ), //i
    .io_inputs_1_payload_burst    (io_axi_aw_payload_burst                  ), //i
    .io_output_valid              (streamArbiter_1_io_output_valid          ), //o
    .io_output_ready              (_zz_io_output_ready                      ), //i
    .io_output_payload_addr       (streamArbiter_1_io_output_payload_addr   ), //o
    .io_output_payload_id         (streamArbiter_1_io_output_payload_id     ), //o
    .io_output_payload_len        (streamArbiter_1_io_output_payload_len    ), //o
    .io_output_payload_size       (streamArbiter_1_io_output_payload_size   ), //o
    .io_output_payload_burst      (streamArbiter_1_io_output_payload_burst  ), //o
    .io_chosen                    (streamArbiter_1_io_chosen                ), //o
    .io_chosenOH                  (streamArbiter_1_io_chosenOH              ), //o
    .clk                          (clk                                      ), //i
    .resetn                       (resetn                                   )  //i
  );
  always @(*) begin
    case(_zz_ctrlBusAdapted_cmd_ready_2)
      1'b0 : begin
        _zz_io_bus_cmd_payload_data = ctrlBusAdapted_cmd_payload_data[15 : 0];
        _zz_io_bus_cmd_payload_mask = ctrlBusAdapted_cmd_payload_mask[1 : 0];
      end
      default : begin
        _zz_io_bus_cmd_payload_data = ctrlBusAdapted_cmd_payload_data[31 : 16];
        _zz_io_bus_cmd_payload_mask = ctrlBusAdapted_cmd_payload_mask[3 : 2];
      end
    endcase
  end

  always @(*) begin
    case(Axi4Incr_wrapCase)
      3'b000 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_1,_zz_Axi4Incr_result_2};
      end
      3'b001 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_3,_zz_Axi4Incr_result_4};
      end
      3'b010 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_5,_zz_Axi4Incr_result_6};
      end
      3'b011 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_7,_zz_Axi4Incr_result_8};
      end
      3'b100 : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_9,_zz_Axi4Incr_result_10};
      end
      default : begin
        _zz_Axi4Incr_result = {_zz_Axi4Incr_result_11,_zz_Axi4Incr_result_12};
      end
    endcase
  end

  assign ctrl_io_bus_cmd_fire = (ctrlBusAdapted_cmd_valid && ctrl_io_bus_cmd_ready);
  always @(*) begin
    _zz_ctrlBusAdapted_cmd_ready = 1'b0;
    if(ctrl_io_bus_cmd_fire) begin
      _zz_ctrlBusAdapted_cmd_ready = 1'b1;
    end
  end

  assign _zz_ctrlBusAdapted_cmd_ready_3 = (_zz_ctrlBusAdapted_cmd_ready_2 == 1'b1);
  always @(*) begin
    _zz_ctrlBusAdapted_cmd_ready_1 = (_zz_ctrlBusAdapted_cmd_ready_2 + _zz_ctrlBusAdapted_cmd_ready);
    if(1'b0) begin
      _zz_ctrlBusAdapted_cmd_ready_1 = 1'b0;
    end
  end

  assign ctrl_io_bus_cmd_payload_address = {ctrlBusAdapted_cmd_payload_address,_zz_ctrlBusAdapted_cmd_ready_2};
  assign ctrl_io_bus_cmd_payload_data = _zz_io_bus_cmd_payload_data;
  assign ctrl_io_bus_cmd_payload_mask = _zz_io_bus_cmd_payload_mask;
  assign ctrlBusAdapted_cmd_ready = (ctrl_io_bus_cmd_ready && _zz_ctrlBusAdapted_cmd_ready_3);
  assign ctrl_io_bus_rsp_fire = (ctrl_io_bus_rsp_valid && ctrl_io_bus_rsp_ready);
  always @(*) begin
    _zz_ctrlBusAdapted_rsp_valid = 1'b0;
    if(ctrl_io_bus_rsp_fire) begin
      _zz_ctrlBusAdapted_rsp_valid = 1'b1;
    end
  end

  assign _zz_ctrlBusAdapted_rsp_valid_3 = (_zz_ctrlBusAdapted_rsp_valid_2 == 1'b1);
  always @(*) begin
    _zz_ctrlBusAdapted_rsp_valid_1 = (_zz_ctrlBusAdapted_rsp_valid_2 + _zz_ctrlBusAdapted_rsp_valid);
    if(1'b0) begin
      _zz_ctrlBusAdapted_rsp_valid_1 = 1'b0;
    end
  end

  assign ctrlBusAdapted_rsp_valid = (ctrl_io_bus_rsp_valid && _zz_ctrlBusAdapted_rsp_valid_3);
  assign ctrl_io_bus_rsp_fire_1 = (ctrl_io_bus_rsp_valid && ctrl_io_bus_rsp_ready);
  assign ctrlBusAdapted_rsp_payload_data = {ctrl_io_bus_rsp_payload_data,ctrl_io_bus_rsp_payload_data_regNextWhen};
  assign ctrlBusAdapted_rsp_payload_context_id = ctrl_io_bus_rsp_payload_context_id;
  assign ctrlBusAdapted_rsp_payload_context_last = ctrl_io_bus_rsp_payload_context_last;
  assign ctrl_io_bus_rsp_ready = (ctrlBusAdapted_rsp_ready || (! _zz_ctrlBusAdapted_rsp_valid_3));
  assign io_axi_ar_ready = streamArbiter_1_io_inputs_0_ready;
  assign io_axi_aw_ready = streamArbiter_1_io_inputs_1_ready;
  assign _zz_unburstify_result_valid = streamArbiter_1_io_output_valid;
  assign _zz_unburstify_result_payload_fragment_addr = streamArbiter_1_io_output_payload_addr;
  assign _zz_unburstify_result_payload_fragment_id = streamArbiter_1_io_output_payload_id;
  assign _zz_unburstify_buffer_len = streamArbiter_1_io_output_payload_len;
  assign _zz_unburstify_result_payload_fragment_size = streamArbiter_1_io_output_payload_size;
  assign _zz_unburstify_result_payload_fragment_burst = streamArbiter_1_io_output_payload_burst;
  assign _zz_unburstify_result_payload_fragment_write = streamArbiter_1_io_chosenOH[1];
  assign io_axi_w_ready = ((unburstify_result_valid && unburstify_result_payload_fragment_write) && bridge_axiCmd_ready);
  assign io_axi_b_valid = bridge_writeRsp_m2sPipe_valid;
  assign io_axi_b_payload_id = bridge_writeRsp_m2sPipe_payload_id;
  assign io_axi_b_payload_resp = bridge_writeRsp_m2sPipe_payload_resp;
  assign io_axi_r_valid = ctrlBusAdapted_rsp_valid;
  assign io_axi_r_payload_data = ctrlBusAdapted_rsp_payload_data;
  assign io_axi_r_payload_id = ctrlBusAdapted_rsp_payload_context_id;
  assign io_axi_r_payload_resp = 2'b00;
  assign io_axi_r_payload_last = ctrlBusAdapted_rsp_payload_context_last;
  assign unburstify_buffer_last = (unburstify_buffer_beat == 8'h01);
  assign Axi4Incr_validSize = unburstify_buffer_transaction_size[1 : 0];
  assign Axi4Incr_highCat = unburstify_buffer_transaction_addr[25 : 12];
  assign Axi4Incr_sizeValue = {(2'b10 == Axi4Incr_validSize),{(2'b01 == Axi4Incr_validSize),(2'b00 == Axi4Incr_validSize)}};
  assign Axi4Incr_alignMask = {10'd0, _zz_Axi4Incr_alignMask};
  assign Axi4Incr_base = (_zz_Axi4Incr_base & (~ Axi4Incr_alignMask));
  assign Axi4Incr_baseIncr = (Axi4Incr_base + _zz_Axi4Incr_baseIncr);
  always @(*) begin
    casez(unburstify_buffer_len)
      8'b????1??? : begin
        _zz_Axi4Incr_wrapCase = 2'b11;
      end
      8'b????01?? : begin
        _zz_Axi4Incr_wrapCase = 2'b10;
      end
      8'b????001? : begin
        _zz_Axi4Incr_wrapCase = 2'b01;
      end
      default : begin
        _zz_Axi4Incr_wrapCase = 2'b00;
      end
    endcase
  end

  assign Axi4Incr_wrapCase = (_zz_Axi4Incr_wrapCase_1 + _zz_Axi4Incr_wrapCase_2);
  always @(*) begin
    case(unburstify_buffer_transaction_burst)
      2'b00 : begin
        Axi4Incr_result = unburstify_buffer_transaction_addr;
      end
      2'b10 : begin
        Axi4Incr_result = {Axi4Incr_highCat,_zz_Axi4Incr_result};
      end
      default : begin
        Axi4Incr_result = {Axi4Incr_highCat,Axi4Incr_baseIncr};
      end
    endcase
  end

  always @(*) begin
    _zz_io_output_ready = 1'b0;
    if(!unburstify_buffer_valid) begin
      _zz_io_output_ready = unburstify_result_ready;
    end
  end

  always @(*) begin
    if(unburstify_buffer_valid) begin
      unburstify_result_valid = 1'b1;
    end else begin
      unburstify_result_valid = _zz_unburstify_result_valid;
    end
  end

  always @(*) begin
    if(unburstify_buffer_valid) begin
      unburstify_result_payload_last = unburstify_buffer_last;
    end else begin
      if(when_Axi4Channel_l181) begin
        unburstify_result_payload_last = 1'b1;
      end else begin
        unburstify_result_payload_last = 1'b0;
      end
    end
  end

  always @(*) begin
    if(unburstify_buffer_valid) begin
      unburstify_result_payload_fragment_id = unburstify_buffer_transaction_id;
    end else begin
      unburstify_result_payload_fragment_id = _zz_unburstify_result_payload_fragment_id;
    end
  end

  always @(*) begin
    if(unburstify_buffer_valid) begin
      unburstify_result_payload_fragment_size = unburstify_buffer_transaction_size;
    end else begin
      unburstify_result_payload_fragment_size = _zz_unburstify_result_payload_fragment_size;
    end
  end

  always @(*) begin
    if(unburstify_buffer_valid) begin
      unburstify_result_payload_fragment_burst = unburstify_buffer_transaction_burst;
    end else begin
      unburstify_result_payload_fragment_burst = _zz_unburstify_result_payload_fragment_burst;
    end
  end

  always @(*) begin
    if(unburstify_buffer_valid) begin
      unburstify_result_payload_fragment_write = unburstify_buffer_transaction_write;
    end else begin
      unburstify_result_payload_fragment_write = _zz_unburstify_result_payload_fragment_write;
    end
  end

  always @(*) begin
    if(unburstify_buffer_valid) begin
      unburstify_result_payload_fragment_addr = Axi4Incr_result;
    end else begin
      unburstify_result_payload_fragment_addr = _zz_unburstify_result_payload_fragment_addr;
    end
  end

  assign when_Axi4Channel_l181 = (_zz_unburstify_buffer_len == 8'h0);
  assign _zz_unburstify_result_ready = (! (unburstify_result_payload_fragment_write && (! io_axi_w_valid)));
  assign bridge_axiCmd_valid = (unburstify_result_valid && _zz_unburstify_result_ready);
  assign unburstify_result_ready = (bridge_axiCmd_ready && _zz_unburstify_result_ready);
  assign bridge_axiCmd_payload_last = unburstify_result_payload_last;
  assign bridge_axiCmd_payload_fragment_addr = unburstify_result_payload_fragment_addr;
  assign bridge_axiCmd_payload_fragment_id = unburstify_result_payload_fragment_id;
  assign bridge_axiCmd_payload_fragment_size = unburstify_result_payload_fragment_size;
  assign bridge_axiCmd_payload_fragment_burst = unburstify_result_payload_fragment_burst;
  assign bridge_axiCmd_payload_fragment_write = unburstify_result_payload_fragment_write;
  assign ctrlBusAdapted_cmd_valid = bridge_axiCmd_valid;
  assign ctrlBusAdapted_cmd_payload_address = bridge_axiCmd_payload_fragment_addr[25 : 2];
  assign ctrlBusAdapted_cmd_payload_write = bridge_axiCmd_payload_fragment_write;
  assign ctrlBusAdapted_cmd_payload_data = io_axi_w_payload_data;
  assign ctrlBusAdapted_cmd_payload_mask = io_axi_w_payload_strb;
  assign ctrlBusAdapted_cmd_payload_context_id = bridge_axiCmd_payload_fragment_id;
  assign ctrlBusAdapted_cmd_payload_context_last = bridge_axiCmd_payload_last;
  assign bridge_axiCmd_fire = (bridge_axiCmd_valid && bridge_axiCmd_ready);
  assign bridge_writeRsp_valid = ((bridge_axiCmd_fire && bridge_axiCmd_payload_fragment_write) && bridge_axiCmd_payload_last);
  assign bridge_writeRsp_payload_resp = 2'b00;
  assign bridge_writeRsp_payload_id = bridge_axiCmd_payload_fragment_id;
  always @(*) begin
    bridge_writeRsp_ready = bridge_writeRsp_m2sPipe_ready;
    if(when_Stream_l342) begin
      bridge_writeRsp_ready = 1'b1;
    end
  end

  assign when_Stream_l342 = (! bridge_writeRsp_m2sPipe_valid);
  assign bridge_writeRsp_m2sPipe_valid = bridge_writeRsp_rValid;
  assign bridge_writeRsp_m2sPipe_payload_id = bridge_writeRsp_rData_id;
  assign bridge_writeRsp_m2sPipe_payload_resp = bridge_writeRsp_rData_resp;
  assign bridge_writeRsp_m2sPipe_ready = io_axi_b_ready;
  assign ctrlBusAdapted_rsp_ready = io_axi_r_ready;
  assign bridge_axiCmd_ready = (ctrlBusAdapted_cmd_ready && (! (bridge_axiCmd_payload_fragment_write && (! bridge_writeRsp_ready))));
  assign io_sdram_ADDR = ctrl_io_sdram_ADDR;
  assign io_sdram_BA = ctrl_io_sdram_BA;
  assign io_sdram_DQ_write = ctrl_io_sdram_DQ_write;
  assign io_sdram_DQ_writeEnable = ctrl_io_sdram_DQ_writeEnable;
  assign io_sdram_DQM = ctrl_io_sdram_DQM;
  assign io_sdram_CASn = ctrl_io_sdram_CASn;
  assign io_sdram_CKE = ctrl_io_sdram_CKE;
  assign io_sdram_CSn = ctrl_io_sdram_CSn;
  assign io_sdram_RASn = ctrl_io_sdram_RASn;
  assign io_sdram_WEn = ctrl_io_sdram_WEn;
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_ctrlBusAdapted_cmd_ready_2 <= 1'b0;
      _zz_ctrlBusAdapted_rsp_valid_2 <= 1'b0;
      unburstify_buffer_valid <= 1'b0;
      bridge_writeRsp_rValid <= 1'b0;
    end else begin
      _zz_ctrlBusAdapted_cmd_ready_2 <= _zz_ctrlBusAdapted_cmd_ready_1;
      _zz_ctrlBusAdapted_rsp_valid_2 <= _zz_ctrlBusAdapted_rsp_valid_1;
      if(unburstify_result_ready) begin
        if(unburstify_buffer_last) begin
          unburstify_buffer_valid <= 1'b0;
        end
      end
      if(!unburstify_buffer_valid) begin
        if(!when_Axi4Channel_l181) begin
          if(unburstify_result_ready) begin
            unburstify_buffer_valid <= _zz_unburstify_result_valid;
          end
        end
      end
      if(bridge_writeRsp_ready) begin
        bridge_writeRsp_rValid <= bridge_writeRsp_valid;
      end
    end
  end

  always @(posedge clk) begin
    if(ctrl_io_bus_rsp_fire_1) begin
      ctrl_io_bus_rsp_payload_data_regNextWhen <= ctrl_io_bus_rsp_payload_data;
    end
    if(unburstify_result_ready) begin
      unburstify_buffer_beat <= (unburstify_buffer_beat - 8'h01);
      unburstify_buffer_transaction_addr[11 : 0] <= Axi4Incr_result[11 : 0];
    end
    if(!unburstify_buffer_valid) begin
      if(!when_Axi4Channel_l181) begin
        if(unburstify_result_ready) begin
          unburstify_buffer_transaction_addr <= _zz_unburstify_result_payload_fragment_addr;
          unburstify_buffer_transaction_id <= _zz_unburstify_result_payload_fragment_id;
          unburstify_buffer_transaction_size <= _zz_unburstify_result_payload_fragment_size;
          unburstify_buffer_transaction_burst <= _zz_unburstify_result_payload_fragment_burst;
          unburstify_buffer_transaction_write <= _zz_unburstify_result_payload_fragment_write;
          unburstify_buffer_beat <= _zz_unburstify_buffer_len;
          unburstify_buffer_len <= _zz_unburstify_buffer_len;
        end
      end
    end
    if(bridge_writeRsp_ready) begin
      bridge_writeRsp_rData_id <= bridge_writeRsp_payload_id;
      bridge_writeRsp_rData_resp <= bridge_writeRsp_payload_resp;
    end
  end


endmodule

module StreamArbiter (
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input      [25:0]   io_inputs_0_payload_addr,
  input      [2:0]    io_inputs_0_payload_id,
  input      [7:0]    io_inputs_0_payload_len,
  input      [2:0]    io_inputs_0_payload_size,
  input      [1:0]    io_inputs_0_payload_burst,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input      [25:0]   io_inputs_1_payload_addr,
  input      [2:0]    io_inputs_1_payload_id,
  input      [7:0]    io_inputs_1_payload_len,
  input      [2:0]    io_inputs_1_payload_size,
  input      [1:0]    io_inputs_1_payload_burst,
  output              io_output_valid,
  input               io_output_ready,
  output     [25:0]   io_output_payload_addr,
  output     [2:0]    io_output_payload_id,
  output     [7:0]    io_output_payload_len,
  output     [2:0]    io_output_payload_size,
  output     [1:0]    io_output_payload_burst,
  output     [0:0]    io_chosen,
  output     [1:0]    io_chosenOH,
  input               clk,
  input               resetn
);
  wire       [3:0]    _zz__zz_maskProposal_0_2;
  wire       [3:0]    _zz__zz_maskProposal_0_2_1;
  wire       [1:0]    _zz__zz_maskProposal_0_2_2;
  reg                 locked;
  wire                maskProposal_0;
  wire                maskProposal_1;
  reg                 maskLocked_0;
  reg                 maskLocked_1;
  wire                maskRouted_0;
  wire                maskRouted_1;
  wire       [1:0]    _zz_maskProposal_0;
  wire       [3:0]    _zz_maskProposal_0_1;
  wire       [3:0]    _zz_maskProposal_0_2;
  wire       [1:0]    _zz_maskProposal_0_3;
  wire                io_output_fire;
  wire                _zz_io_chosen;

  assign _zz__zz_maskProposal_0_2 = (_zz_maskProposal_0_1 - _zz__zz_maskProposal_0_2_1);
  assign _zz__zz_maskProposal_0_2_2 = {maskLocked_0,maskLocked_1};
  assign _zz__zz_maskProposal_0_2_1 = {2'd0, _zz__zz_maskProposal_0_2_2};
  assign maskRouted_0 = (locked ? maskLocked_0 : maskProposal_0);
  assign maskRouted_1 = (locked ? maskLocked_1 : maskProposal_1);
  assign _zz_maskProposal_0 = {io_inputs_1_valid,io_inputs_0_valid};
  assign _zz_maskProposal_0_1 = {_zz_maskProposal_0,_zz_maskProposal_0};
  assign _zz_maskProposal_0_2 = (_zz_maskProposal_0_1 & (~ _zz__zz_maskProposal_0_2));
  assign _zz_maskProposal_0_3 = (_zz_maskProposal_0_2[3 : 2] | _zz_maskProposal_0_2[1 : 0]);
  assign maskProposal_0 = _zz_maskProposal_0_3[0];
  assign maskProposal_1 = _zz_maskProposal_0_3[1];
  assign io_output_fire = (io_output_valid && io_output_ready);
  assign io_output_valid = ((io_inputs_0_valid && maskRouted_0) || (io_inputs_1_valid && maskRouted_1));
  assign io_output_payload_addr = (maskRouted_0 ? io_inputs_0_payload_addr : io_inputs_1_payload_addr);
  assign io_output_payload_id = (maskRouted_0 ? io_inputs_0_payload_id : io_inputs_1_payload_id);
  assign io_output_payload_len = (maskRouted_0 ? io_inputs_0_payload_len : io_inputs_1_payload_len);
  assign io_output_payload_size = (maskRouted_0 ? io_inputs_0_payload_size : io_inputs_1_payload_size);
  assign io_output_payload_burst = (maskRouted_0 ? io_inputs_0_payload_burst : io_inputs_1_payload_burst);
  assign io_inputs_0_ready = (maskRouted_0 && io_output_ready);
  assign io_inputs_1_ready = (maskRouted_1 && io_output_ready);
  assign io_chosenOH = {maskRouted_1,maskRouted_0};
  assign _zz_io_chosen = io_chosenOH[1];
  assign io_chosen = _zz_io_chosen;
  always @(posedge clk) begin
    if(!resetn) begin
      locked <= 1'b0;
      maskLocked_0 <= 1'b0;
      maskLocked_1 <= 1'b1;
    end else begin
      if(io_output_valid) begin
        maskLocked_0 <= maskRouted_0;
        maskLocked_1 <= maskRouted_1;
      end
      if(io_output_valid) begin
        locked <= 1'b1;
      end
      if(io_output_fire) begin
        locked <= 1'b0;
      end
    end
  end


endmodule

module SdramCtrl (
  input               io_bus_cmd_valid,
  output reg          io_bus_cmd_ready,
  input      [24:0]   io_bus_cmd_payload_address,
  input               io_bus_cmd_payload_write,
  input      [15:0]   io_bus_cmd_payload_data,
  input      [1:0]    io_bus_cmd_payload_mask,
  input      [2:0]    io_bus_cmd_payload_context_id,
  input               io_bus_cmd_payload_context_last,
  output              io_bus_rsp_valid,
  input               io_bus_rsp_ready,
  output     [15:0]   io_bus_rsp_payload_data,
  output     [2:0]    io_bus_rsp_payload_context_id,
  output              io_bus_rsp_payload_context_last,
  output     [12:0]   io_sdram_ADDR,
  output     [1:0]    io_sdram_BA,
  input      [15:0]   io_sdram_DQ_read,
  output     [15:0]   io_sdram_DQ_write,
  output     [15:0]   io_sdram_DQ_writeEnable,
  output     [1:0]    io_sdram_DQM,
  output              io_sdram_CASn,
  output              io_sdram_CKE,
  output              io_sdram_CSn,
  output              io_sdram_RASn,
  output              io_sdram_WEn,
  input               clk,
  input               resetn
);
  wire                chip_backupIn_fifo_io_push_ready;
  wire                chip_backupIn_fifo_io_pop_valid;
  wire       [15:0]   chip_backupIn_fifo_io_pop_payload_data;
  wire       [2:0]    chip_backupIn_fifo_io_pop_payload_context_id;
  wire                chip_backupIn_fifo_io_pop_payload_context_last;
  wire       [1:0]    chip_backupIn_fifo_io_occupancy;
  wire       [9:0]    _zz_refresh_counter_valueNext;
  wire       [0:0]    _zz_refresh_counter_valueNext_1;
  wire       [2:0]    _zz_frontend_bootRefreshCounter_valueNext;
  wire       [0:0]    _zz_frontend_bootRefreshCounter_valueNext_1;
  reg                 _zz__zz_when_SdramCtrl_l255;
  reg        [12:0]   _zz_when_SdramCtrl_l255_1;
  reg                 _zz_bubbleInserter_insertBubble;
  reg                 _zz_bubbleInserter_insertBubble_1;
  wire                refresh_counter_willIncrement;
  wire                refresh_counter_willClear;
  reg        [9:0]    refresh_counter_valueNext;
  reg        [9:0]    refresh_counter_value;
  wire                refresh_counter_willOverflowIfInc;
  wire                refresh_counter_willOverflow;
  reg                 refresh_pending;
  reg        [13:0]   powerup_counter;
  reg                 powerup_done;
  wire                when_SdramCtrl_l177;
  wire       [13:0]   _zz_when_SdramCtrl_l179;
  wire                when_SdramCtrl_l179;
  reg                 frontend_banks_0_active;
  reg        [12:0]   frontend_banks_0_row;
  reg                 frontend_banks_1_active;
  reg        [12:0]   frontend_banks_1_row;
  reg                 frontend_banks_2_active;
  reg        [12:0]   frontend_banks_2_row;
  reg                 frontend_banks_3_active;
  reg        [12:0]   frontend_banks_3_row;
  wire       [9:0]    frontend_address_column;
  wire       [1:0]    frontend_address_bank;
  wire       [12:0]   frontend_address_row;
  wire       [24:0]   _zz_frontend_address_column;
  reg                 frontend_rsp_valid;
  reg                 frontend_rsp_ready;
  reg        `SdramCtrlBackendTask_binary_sequential_type frontend_rsp_payload_task;
  wire       [1:0]    frontend_rsp_payload_bank;
  reg        [12:0]   frontend_rsp_payload_rowColumn;
  wire       [15:0]   frontend_rsp_payload_data;
  wire       [1:0]    frontend_rsp_payload_mask;
  wire       [2:0]    frontend_rsp_payload_context_id;
  wire                frontend_rsp_payload_context_last;
  reg        `SdramCtrlFrontendState_binary_sequential_type frontend_state;
  reg                 frontend_bootRefreshCounter_willIncrement;
  wire                frontend_bootRefreshCounter_willClear;
  reg        [2:0]    frontend_bootRefreshCounter_valueNext;
  reg        [2:0]    frontend_bootRefreshCounter_value;
  wire                frontend_bootRefreshCounter_willOverflowIfInc;
  wire                frontend_bootRefreshCounter_willOverflow;
  wire                when_SdramCtrl_l241;
  wire                _zz_when_SdramCtrl_l255;
  wire       [3:0]    _zz_1;
  wire                _zz_2;
  wire                _zz_3;
  wire                _zz_4;
  wire                _zz_5;
  wire                when_SdramCtrl_l255;
  wire                when_SdramCtrl_l260;
  wire                frontend_rsp_cmd_valid;
  wire                frontend_rsp_cmd_ready;
  wire       `SdramCtrlBackendTask_binary_sequential_type frontend_rsp_cmd_payload_task;
  wire       [1:0]    frontend_rsp_cmd_payload_bank;
  wire       [12:0]   frontend_rsp_cmd_payload_rowColumn;
  wire       [15:0]   frontend_rsp_cmd_payload_data;
  wire       [1:0]    frontend_rsp_cmd_payload_mask;
  wire       [2:0]    frontend_rsp_cmd_payload_context_id;
  wire                frontend_rsp_cmd_payload_context_last;
  reg                 frontend_rsp_rValid;
  reg        `SdramCtrlBackendTask_binary_sequential_type frontend_rsp_rData_task;
  reg        [1:0]    frontend_rsp_rData_bank;
  reg        [12:0]   frontend_rsp_rData_rowColumn;
  reg        [15:0]   frontend_rsp_rData_data;
  reg        [1:0]    frontend_rsp_rData_mask;
  reg        [2:0]    frontend_rsp_rData_context_id;
  reg                 frontend_rsp_rData_context_last;
  wire                when_Stream_l342;
  wire                bubbleInserter_rsp_valid;
  wire                bubbleInserter_rsp_ready;
  wire       `SdramCtrlBackendTask_binary_sequential_type bubbleInserter_rsp_payload_task;
  wire       [1:0]    bubbleInserter_rsp_payload_bank;
  wire       [12:0]   bubbleInserter_rsp_payload_rowColumn;
  wire       [15:0]   bubbleInserter_rsp_payload_data;
  wire       [1:0]    bubbleInserter_rsp_payload_mask;
  wire       [2:0]    bubbleInserter_rsp_payload_context_id;
  wire                bubbleInserter_rsp_payload_context_last;
  reg                 bubbleInserter_insertBubble;
  wire                _zz_frontend_rsp_cmd_ready;
  wire       `SdramCtrlBackendTask_binary_sequential_type _zz_bubbleInserter_rsp_payload_task;
  reg        [0:0]    bubbleInserter_timings_read_counter;
  wire                bubbleInserter_timings_read_busy;
  wire                when_SdramCtrl_l287;
  reg        [2:0]    bubbleInserter_timings_write_counter;
  wire                bubbleInserter_timings_write_busy;
  wire                when_SdramCtrl_l287_1;
  reg        [2:0]    bubbleInserter_timings_banks_0_precharge_counter;
  wire                bubbleInserter_timings_banks_0_precharge_busy;
  wire                when_SdramCtrl_l287_2;
  reg        [2:0]    bubbleInserter_timings_banks_0_active_counter;
  wire                bubbleInserter_timings_banks_0_active_busy;
  wire                when_SdramCtrl_l287_3;
  reg        [2:0]    bubbleInserter_timings_banks_1_precharge_counter;
  wire                bubbleInserter_timings_banks_1_precharge_busy;
  wire                when_SdramCtrl_l287_4;
  reg        [2:0]    bubbleInserter_timings_banks_1_active_counter;
  wire                bubbleInserter_timings_banks_1_active_busy;
  wire                when_SdramCtrl_l287_5;
  reg        [2:0]    bubbleInserter_timings_banks_2_precharge_counter;
  wire                bubbleInserter_timings_banks_2_precharge_busy;
  wire                when_SdramCtrl_l287_6;
  reg        [2:0]    bubbleInserter_timings_banks_2_active_counter;
  wire                bubbleInserter_timings_banks_2_active_busy;
  wire                when_SdramCtrl_l287_7;
  reg        [2:0]    bubbleInserter_timings_banks_3_precharge_counter;
  wire                bubbleInserter_timings_banks_3_precharge_busy;
  wire                when_SdramCtrl_l287_8;
  reg        [2:0]    bubbleInserter_timings_banks_3_active_counter;
  wire                bubbleInserter_timings_banks_3_active_busy;
  wire                when_SdramCtrl_l287_9;
  wire                when_SdramCtrl_l296;
  wire                when_SdramCtrl_l296_1;
  wire                when_SdramCtrl_l296_2;
  wire                when_SdramCtrl_l296_3;
  wire                when_SdramCtrl_l296_4;
  wire                when_Utils_l762;
  wire                when_SdramCtrl_l296_5;
  wire                when_Utils_l762_1;
  wire                when_SdramCtrl_l296_6;
  wire                when_Utils_l762_2;
  wire                when_SdramCtrl_l296_7;
  wire                when_Utils_l762_3;
  wire                when_SdramCtrl_l296_8;
  wire                when_SdramCtrl_l296_9;
  wire                when_SdramCtrl_l296_10;
  wire                when_SdramCtrl_l296_11;
  wire                when_SdramCtrl_l296_12;
  wire                when_SdramCtrl_l296_13;
  wire                when_Utils_l762_4;
  wire                when_SdramCtrl_l296_14;
  wire                when_Utils_l762_5;
  wire                when_SdramCtrl_l296_15;
  wire                when_Utils_l762_6;
  wire                when_SdramCtrl_l296_16;
  wire                when_Utils_l762_7;
  wire                when_SdramCtrl_l296_17;
  wire                when_Utils_l762_8;
  wire                when_SdramCtrl_l296_18;
  wire                when_Utils_l762_9;
  wire                when_SdramCtrl_l296_19;
  wire                when_Utils_l762_10;
  wire                when_SdramCtrl_l296_20;
  wire                when_Utils_l762_11;
  wire                when_SdramCtrl_l296_21;
  wire                when_SdramCtrl_l296_22;
  wire                when_Utils_l762_12;
  wire                when_SdramCtrl_l296_23;
  wire                when_Utils_l762_13;
  wire                when_SdramCtrl_l296_24;
  wire                when_Utils_l762_14;
  wire                when_SdramCtrl_l296_25;
  wire                when_Utils_l762_15;
  wire                when_SdramCtrl_l296_26;
  wire                chip_cmd_valid;
  wire                chip_cmd_ready;
  wire       `SdramCtrlBackendTask_binary_sequential_type chip_cmd_payload_task;
  wire       [1:0]    chip_cmd_payload_bank;
  wire       [12:0]   chip_cmd_payload_rowColumn;
  wire       [15:0]   chip_cmd_payload_data;
  wire       [1:0]    chip_cmd_payload_mask;
  wire       [2:0]    chip_cmd_payload_context_id;
  wire                chip_cmd_payload_context_last;
  reg        [12:0]   chip_sdram_ADDR;
  reg        [1:0]    chip_sdram_BA;
  reg        [15:0]   chip_sdram_DQ_read;
  reg        [15:0]   chip_sdram_DQ_write;
  reg        [15:0]   chip_sdram_DQ_writeEnable;
  reg        [1:0]    chip_sdram_DQM;
  reg                 chip_sdram_CASn;
  reg                 chip_sdram_CKE;
  reg                 chip_sdram_CSn;
  reg                 chip_sdram_RASn;
  reg                 chip_sdram_WEn;
  wire                chip_remoteCke;
  wire                chip_readHistory_0;
  wire                chip_readHistory_1;
  wire                chip_readHistory_2;
  wire                chip_readHistory_3;
  wire                chip_readHistory_4;
  wire                chip_readHistory_5;
  wire                _zz_chip_readHistory_0;
  reg                 _zz_chip_readHistory_1;
  reg                 _zz_chip_readHistory_2;
  reg                 _zz_chip_readHistory_3;
  reg                 _zz_chip_readHistory_4;
  reg                 _zz_chip_readHistory_5;
  reg        [2:0]    chip_cmd_payload_context_delay_1_id;
  reg                 chip_cmd_payload_context_delay_1_last;
  reg        [2:0]    chip_cmd_payload_context_delay_2_id;
  reg                 chip_cmd_payload_context_delay_2_last;
  reg        [2:0]    chip_cmd_payload_context_delay_3_id;
  reg                 chip_cmd_payload_context_delay_3_last;
  reg        [2:0]    chip_cmd_payload_context_delay_4_id;
  reg                 chip_cmd_payload_context_delay_4_last;
  reg        [2:0]    chip_contextDelayed_id;
  reg                 chip_contextDelayed_last;
  wire                chip_sdramCkeNext;
  reg                 chip_sdramCkeInternal;
  reg                 chip_sdramCkeInternal_regNext;
  wire                _zz_chip_sdram_DQM;
  wire                chip_backupIn_valid;
  wire                chip_backupIn_ready;
  wire       [15:0]   chip_backupIn_payload_data;
  wire       [2:0]    chip_backupIn_payload_context_id;
  wire                chip_backupIn_payload_context_last;
  `ifndef SYNTHESIS
  reg [127:0] frontend_rsp_payload_task_string;
  reg [111:0] frontend_state_string;
  reg [127:0] frontend_rsp_cmd_payload_task_string;
  reg [127:0] frontend_rsp_rData_task_string;
  reg [127:0] bubbleInserter_rsp_payload_task_string;
  reg [127:0] _zz_bubbleInserter_rsp_payload_task_string;
  reg [127:0] chip_cmd_payload_task_string;
  `endif


  assign _zz_refresh_counter_valueNext_1 = refresh_counter_willIncrement;
  assign _zz_refresh_counter_valueNext = {9'd0, _zz_refresh_counter_valueNext_1};
  assign _zz_frontend_bootRefreshCounter_valueNext_1 = frontend_bootRefreshCounter_willIncrement;
  assign _zz_frontend_bootRefreshCounter_valueNext = {2'd0, _zz_frontend_bootRefreshCounter_valueNext_1};
  StreamFifoLowLatency chip_backupIn_fifo (
    .io_push_valid                   (chip_backupIn_valid                             ), //i
    .io_push_ready                   (chip_backupIn_fifo_io_push_ready                ), //o
    .io_push_payload_data            (chip_backupIn_payload_data                      ), //i
    .io_push_payload_context_id      (chip_backupIn_payload_context_id                ), //i
    .io_push_payload_context_last    (chip_backupIn_payload_context_last              ), //i
    .io_pop_valid                    (chip_backupIn_fifo_io_pop_valid                 ), //o
    .io_pop_ready                    (io_bus_rsp_ready                                ), //i
    .io_pop_payload_data             (chip_backupIn_fifo_io_pop_payload_data          ), //o
    .io_pop_payload_context_id       (chip_backupIn_fifo_io_pop_payload_context_id    ), //o
    .io_pop_payload_context_last     (chip_backupIn_fifo_io_pop_payload_context_last  ), //o
    .io_flush                        (1'b0                                            ), //i
    .io_occupancy                    (chip_backupIn_fifo_io_occupancy                 ), //o
    .clk                             (clk                                             ), //i
    .resetn                          (resetn                                          )  //i
  );
  always @(*) begin
    case(frontend_address_bank)
      2'b00 : begin
        _zz__zz_when_SdramCtrl_l255 = frontend_banks_0_active;
        _zz_when_SdramCtrl_l255_1 = frontend_banks_0_row;
      end
      2'b01 : begin
        _zz__zz_when_SdramCtrl_l255 = frontend_banks_1_active;
        _zz_when_SdramCtrl_l255_1 = frontend_banks_1_row;
      end
      2'b10 : begin
        _zz__zz_when_SdramCtrl_l255 = frontend_banks_2_active;
        _zz_when_SdramCtrl_l255_1 = frontend_banks_2_row;
      end
      default : begin
        _zz__zz_when_SdramCtrl_l255 = frontend_banks_3_active;
        _zz_when_SdramCtrl_l255_1 = frontend_banks_3_row;
      end
    endcase
  end

  always @(*) begin
    case(frontend_rsp_cmd_payload_bank)
      2'b00 : begin
        _zz_bubbleInserter_insertBubble = bubbleInserter_timings_banks_0_precharge_busy;
        _zz_bubbleInserter_insertBubble_1 = bubbleInserter_timings_banks_0_active_busy;
      end
      2'b01 : begin
        _zz_bubbleInserter_insertBubble = bubbleInserter_timings_banks_1_precharge_busy;
        _zz_bubbleInserter_insertBubble_1 = bubbleInserter_timings_banks_1_active_busy;
      end
      2'b10 : begin
        _zz_bubbleInserter_insertBubble = bubbleInserter_timings_banks_2_precharge_busy;
        _zz_bubbleInserter_insertBubble_1 = bubbleInserter_timings_banks_2_active_busy;
      end
      default : begin
        _zz_bubbleInserter_insertBubble = bubbleInserter_timings_banks_3_precharge_busy;
        _zz_bubbleInserter_insertBubble_1 = bubbleInserter_timings_banks_3_active_busy;
      end
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(frontend_rsp_payload_task)
      `SdramCtrlBackendTask_binary_sequential_MODE : frontend_rsp_payload_task_string = "MODE            ";
      `SdramCtrlBackendTask_binary_sequential_PRECHARGE_ALL : frontend_rsp_payload_task_string = "PRECHARGE_ALL   ";
      `SdramCtrlBackendTask_binary_sequential_PRECHARGE_SINGLE : frontend_rsp_payload_task_string = "PRECHARGE_SINGLE";
      `SdramCtrlBackendTask_binary_sequential_REFRESH : frontend_rsp_payload_task_string = "REFRESH         ";
      `SdramCtrlBackendTask_binary_sequential_ACTIVE : frontend_rsp_payload_task_string = "ACTIVE          ";
      `SdramCtrlBackendTask_binary_sequential_READ : frontend_rsp_payload_task_string = "READ            ";
      `SdramCtrlBackendTask_binary_sequential_WRITE : frontend_rsp_payload_task_string = "WRITE           ";
      default : frontend_rsp_payload_task_string = "????????????????";
    endcase
  end
  always @(*) begin
    case(frontend_state)
      `SdramCtrlFrontendState_binary_sequential_BOOT_PRECHARGE : frontend_state_string = "BOOT_PRECHARGE";
      `SdramCtrlFrontendState_binary_sequential_BOOT_REFRESH : frontend_state_string = "BOOT_REFRESH  ";
      `SdramCtrlFrontendState_binary_sequential_BOOT_MODE : frontend_state_string = "BOOT_MODE     ";
      `SdramCtrlFrontendState_binary_sequential_RUN : frontend_state_string = "RUN           ";
      default : frontend_state_string = "??????????????";
    endcase
  end
  always @(*) begin
    case(frontend_rsp_cmd_payload_task)
      `SdramCtrlBackendTask_binary_sequential_MODE : frontend_rsp_cmd_payload_task_string = "MODE            ";
      `SdramCtrlBackendTask_binary_sequential_PRECHARGE_ALL : frontend_rsp_cmd_payload_task_string = "PRECHARGE_ALL   ";
      `SdramCtrlBackendTask_binary_sequential_PRECHARGE_SINGLE : frontend_rsp_cmd_payload_task_string = "PRECHARGE_SINGLE";
      `SdramCtrlBackendTask_binary_sequential_REFRESH : frontend_rsp_cmd_payload_task_string = "REFRESH         ";
      `SdramCtrlBackendTask_binary_sequential_ACTIVE : frontend_rsp_cmd_payload_task_string = "ACTIVE          ";
      `SdramCtrlBackendTask_binary_sequential_READ : frontend_rsp_cmd_payload_task_string = "READ            ";
      `SdramCtrlBackendTask_binary_sequential_WRITE : frontend_rsp_cmd_payload_task_string = "WRITE           ";
      default : frontend_rsp_cmd_payload_task_string = "????????????????";
    endcase
  end
  always @(*) begin
    case(frontend_rsp_rData_task)
      `SdramCtrlBackendTask_binary_sequential_MODE : frontend_rsp_rData_task_string = "MODE            ";
      `SdramCtrlBackendTask_binary_sequential_PRECHARGE_ALL : frontend_rsp_rData_task_string = "PRECHARGE_ALL   ";
      `SdramCtrlBackendTask_binary_sequential_PRECHARGE_SINGLE : frontend_rsp_rData_task_string = "PRECHARGE_SINGLE";
      `SdramCtrlBackendTask_binary_sequential_REFRESH : frontend_rsp_rData_task_string = "REFRESH         ";
      `SdramCtrlBackendTask_binary_sequential_ACTIVE : frontend_rsp_rData_task_string = "ACTIVE          ";
      `SdramCtrlBackendTask_binary_sequential_READ : frontend_rsp_rData_task_string = "READ            ";
      `SdramCtrlBackendTask_binary_sequential_WRITE : frontend_rsp_rData_task_string = "WRITE           ";
      default : frontend_rsp_rData_task_string = "????????????????";
    endcase
  end
  always @(*) begin
    case(bubbleInserter_rsp_payload_task)
      `SdramCtrlBackendTask_binary_sequential_MODE : bubbleInserter_rsp_payload_task_string = "MODE            ";
      `SdramCtrlBackendTask_binary_sequential_PRECHARGE_ALL : bubbleInserter_rsp_payload_task_string = "PRECHARGE_ALL   ";
      `SdramCtrlBackendTask_binary_sequential_PRECHARGE_SINGLE : bubbleInserter_rsp_payload_task_string = "PRECHARGE_SINGLE";
      `SdramCtrlBackendTask_binary_sequential_REFRESH : bubbleInserter_rsp_payload_task_string = "REFRESH         ";
      `SdramCtrlBackendTask_binary_sequential_ACTIVE : bubbleInserter_rsp_payload_task_string = "ACTIVE          ";
      `SdramCtrlBackendTask_binary_sequential_READ : bubbleInserter_rsp_payload_task_string = "READ            ";
      `SdramCtrlBackendTask_binary_sequential_WRITE : bubbleInserter_rsp_payload_task_string = "WRITE           ";
      default : bubbleInserter_rsp_payload_task_string = "????????????????";
    endcase
  end
  always @(*) begin
    case(_zz_bubbleInserter_rsp_payload_task)
      `SdramCtrlBackendTask_binary_sequential_MODE : _zz_bubbleInserter_rsp_payload_task_string = "MODE            ";
      `SdramCtrlBackendTask_binary_sequential_PRECHARGE_ALL : _zz_bubbleInserter_rsp_payload_task_string = "PRECHARGE_ALL   ";
      `SdramCtrlBackendTask_binary_sequential_PRECHARGE_SINGLE : _zz_bubbleInserter_rsp_payload_task_string = "PRECHARGE_SINGLE";
      `SdramCtrlBackendTask_binary_sequential_REFRESH : _zz_bubbleInserter_rsp_payload_task_string = "REFRESH         ";
      `SdramCtrlBackendTask_binary_sequential_ACTIVE : _zz_bubbleInserter_rsp_payload_task_string = "ACTIVE          ";
      `SdramCtrlBackendTask_binary_sequential_READ : _zz_bubbleInserter_rsp_payload_task_string = "READ            ";
      `SdramCtrlBackendTask_binary_sequential_WRITE : _zz_bubbleInserter_rsp_payload_task_string = "WRITE           ";
      default : _zz_bubbleInserter_rsp_payload_task_string = "????????????????";
    endcase
  end
  always @(*) begin
    case(chip_cmd_payload_task)
      `SdramCtrlBackendTask_binary_sequential_MODE : chip_cmd_payload_task_string = "MODE            ";
      `SdramCtrlBackendTask_binary_sequential_PRECHARGE_ALL : chip_cmd_payload_task_string = "PRECHARGE_ALL   ";
      `SdramCtrlBackendTask_binary_sequential_PRECHARGE_SINGLE : chip_cmd_payload_task_string = "PRECHARGE_SINGLE";
      `SdramCtrlBackendTask_binary_sequential_REFRESH : chip_cmd_payload_task_string = "REFRESH         ";
      `SdramCtrlBackendTask_binary_sequential_ACTIVE : chip_cmd_payload_task_string = "ACTIVE          ";
      `SdramCtrlBackendTask_binary_sequential_READ : chip_cmd_payload_task_string = "READ            ";
      `SdramCtrlBackendTask_binary_sequential_WRITE : chip_cmd_payload_task_string = "WRITE           ";
      default : chip_cmd_payload_task_string = "????????????????";
    endcase
  end
  `endif

  assign refresh_counter_willClear = 1'b0;
  assign refresh_counter_willOverflowIfInc = (refresh_counter_value == 10'h30d);
  assign refresh_counter_willOverflow = (refresh_counter_willOverflowIfInc && refresh_counter_willIncrement);
  always @(*) begin
    if(refresh_counter_willOverflow) begin
      refresh_counter_valueNext = 10'h0;
    end else begin
      refresh_counter_valueNext = (refresh_counter_value + _zz_refresh_counter_valueNext);
    end
    if(refresh_counter_willClear) begin
      refresh_counter_valueNext = 10'h0;
    end
  end

  assign refresh_counter_willIncrement = 1'b1;
  assign when_SdramCtrl_l177 = (! powerup_done);
  assign _zz_when_SdramCtrl_l179[13 : 0] = 14'h3fff;
  assign when_SdramCtrl_l179 = (powerup_counter == _zz_when_SdramCtrl_l179);
  assign _zz_frontend_address_column = io_bus_cmd_payload_address;
  assign frontend_address_column = _zz_frontend_address_column[9 : 0];
  assign frontend_address_bank = _zz_frontend_address_column[11 : 10];
  assign frontend_address_row = _zz_frontend_address_column[24 : 12];
  always @(*) begin
    frontend_rsp_valid = 1'b0;
    case(frontend_state)
      `SdramCtrlFrontendState_binary_sequential_BOOT_PRECHARGE : begin
        if(powerup_done) begin
          frontend_rsp_valid = 1'b1;
        end
      end
      `SdramCtrlFrontendState_binary_sequential_BOOT_REFRESH : begin
        frontend_rsp_valid = 1'b1;
      end
      `SdramCtrlFrontendState_binary_sequential_BOOT_MODE : begin
        frontend_rsp_valid = 1'b1;
      end
      default : begin
        if(refresh_pending) begin
          frontend_rsp_valid = 1'b1;
        end else begin
          if(io_bus_cmd_valid) begin
            frontend_rsp_valid = 1'b1;
          end
        end
      end
    endcase
  end

  always @(*) begin
    frontend_rsp_payload_task = `SdramCtrlBackendTask_binary_sequential_REFRESH;
    case(frontend_state)
      `SdramCtrlFrontendState_binary_sequential_BOOT_PRECHARGE : begin
        frontend_rsp_payload_task = `SdramCtrlBackendTask_binary_sequential_PRECHARGE_ALL;
      end
      `SdramCtrlFrontendState_binary_sequential_BOOT_REFRESH : begin
        frontend_rsp_payload_task = `SdramCtrlBackendTask_binary_sequential_REFRESH;
      end
      `SdramCtrlFrontendState_binary_sequential_BOOT_MODE : begin
        frontend_rsp_payload_task = `SdramCtrlBackendTask_binary_sequential_MODE;
      end
      default : begin
        if(refresh_pending) begin
          if(when_SdramCtrl_l241) begin
            frontend_rsp_payload_task = `SdramCtrlBackendTask_binary_sequential_PRECHARGE_ALL;
          end else begin
            frontend_rsp_payload_task = `SdramCtrlBackendTask_binary_sequential_REFRESH;
          end
        end else begin
          if(io_bus_cmd_valid) begin
            if(when_SdramCtrl_l255) begin
              frontend_rsp_payload_task = `SdramCtrlBackendTask_binary_sequential_PRECHARGE_SINGLE;
            end else begin
              if(when_SdramCtrl_l260) begin
                frontend_rsp_payload_task = `SdramCtrlBackendTask_binary_sequential_ACTIVE;
              end else begin
                frontend_rsp_payload_task = (io_bus_cmd_payload_write ? `SdramCtrlBackendTask_binary_sequential_WRITE : `SdramCtrlBackendTask_binary_sequential_READ);
              end
            end
          end
        end
      end
    endcase
  end

  assign frontend_rsp_payload_bank = frontend_address_bank;
  always @(*) begin
    frontend_rsp_payload_rowColumn = frontend_address_row;
    case(frontend_state)
      `SdramCtrlFrontendState_binary_sequential_BOOT_PRECHARGE : begin
      end
      `SdramCtrlFrontendState_binary_sequential_BOOT_REFRESH : begin
      end
      `SdramCtrlFrontendState_binary_sequential_BOOT_MODE : begin
      end
      default : begin
        if(!refresh_pending) begin
          if(io_bus_cmd_valid) begin
            if(!when_SdramCtrl_l255) begin
              if(!when_SdramCtrl_l260) begin
                frontend_rsp_payload_rowColumn = {3'd0, frontend_address_column};
              end
            end
          end
        end
      end
    endcase
  end

  assign frontend_rsp_payload_data = io_bus_cmd_payload_data;
  assign frontend_rsp_payload_mask = io_bus_cmd_payload_mask;
  assign frontend_rsp_payload_context_id = io_bus_cmd_payload_context_id;
  assign frontend_rsp_payload_context_last = io_bus_cmd_payload_context_last;
  always @(*) begin
    io_bus_cmd_ready = 1'b0;
    case(frontend_state)
      `SdramCtrlFrontendState_binary_sequential_BOOT_PRECHARGE : begin
      end
      `SdramCtrlFrontendState_binary_sequential_BOOT_REFRESH : begin
      end
      `SdramCtrlFrontendState_binary_sequential_BOOT_MODE : begin
      end
      default : begin
        if(!refresh_pending) begin
          if(io_bus_cmd_valid) begin
            if(!when_SdramCtrl_l255) begin
              if(!when_SdramCtrl_l260) begin
                io_bus_cmd_ready = frontend_rsp_ready;
              end
            end
          end
        end
      end
    endcase
  end

  always @(*) begin
    frontend_bootRefreshCounter_willIncrement = 1'b0;
    case(frontend_state)
      `SdramCtrlFrontendState_binary_sequential_BOOT_PRECHARGE : begin
      end
      `SdramCtrlFrontendState_binary_sequential_BOOT_REFRESH : begin
        if(frontend_rsp_ready) begin
          frontend_bootRefreshCounter_willIncrement = 1'b1;
        end
      end
      `SdramCtrlFrontendState_binary_sequential_BOOT_MODE : begin
      end
      default : begin
      end
    endcase
  end

  assign frontend_bootRefreshCounter_willClear = 1'b0;
  assign frontend_bootRefreshCounter_willOverflowIfInc = (frontend_bootRefreshCounter_value == 3'b111);
  assign frontend_bootRefreshCounter_willOverflow = (frontend_bootRefreshCounter_willOverflowIfInc && frontend_bootRefreshCounter_willIncrement);
  always @(*) begin
    frontend_bootRefreshCounter_valueNext = (frontend_bootRefreshCounter_value + _zz_frontend_bootRefreshCounter_valueNext);
    if(frontend_bootRefreshCounter_willClear) begin
      frontend_bootRefreshCounter_valueNext = 3'b000;
    end
  end

  assign when_SdramCtrl_l241 = (((frontend_banks_0_active || frontend_banks_1_active) || frontend_banks_2_active) || frontend_banks_3_active);
  assign _zz_when_SdramCtrl_l255 = _zz__zz_when_SdramCtrl_l255;
  assign _zz_1 = ({3'd0,1'b1} <<< frontend_address_bank);
  assign _zz_2 = _zz_1[0];
  assign _zz_3 = _zz_1[1];
  assign _zz_4 = _zz_1[2];
  assign _zz_5 = _zz_1[3];
  assign when_SdramCtrl_l255 = (_zz_when_SdramCtrl_l255 && (_zz_when_SdramCtrl_l255_1 != frontend_address_row));
  assign when_SdramCtrl_l260 = (_zz_when_SdramCtrl_l255 == 1'b0);
  always @(*) begin
    frontend_rsp_ready = frontend_rsp_cmd_ready;
    if(when_Stream_l342) begin
      frontend_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l342 = (! frontend_rsp_cmd_valid);
  assign frontend_rsp_cmd_valid = frontend_rsp_rValid;
  assign frontend_rsp_cmd_payload_task = frontend_rsp_rData_task;
  assign frontend_rsp_cmd_payload_bank = frontend_rsp_rData_bank;
  assign frontend_rsp_cmd_payload_rowColumn = frontend_rsp_rData_rowColumn;
  assign frontend_rsp_cmd_payload_data = frontend_rsp_rData_data;
  assign frontend_rsp_cmd_payload_mask = frontend_rsp_rData_mask;
  assign frontend_rsp_cmd_payload_context_id = frontend_rsp_rData_context_id;
  assign frontend_rsp_cmd_payload_context_last = frontend_rsp_rData_context_last;
  always @(*) begin
    bubbleInserter_insertBubble = 1'b0;
    if(frontend_rsp_cmd_valid) begin
      case(frontend_rsp_cmd_payload_task)
        `SdramCtrlBackendTask_binary_sequential_MODE : begin
          bubbleInserter_insertBubble = bubbleInserter_timings_banks_0_active_busy;
        end
        `SdramCtrlBackendTask_binary_sequential_PRECHARGE_ALL : begin
          bubbleInserter_insertBubble = ({bubbleInserter_timings_banks_3_precharge_busy,{bubbleInserter_timings_banks_2_precharge_busy,{bubbleInserter_timings_banks_1_precharge_busy,bubbleInserter_timings_banks_0_precharge_busy}}} != 4'b0000);
        end
        `SdramCtrlBackendTask_binary_sequential_PRECHARGE_SINGLE : begin
          bubbleInserter_insertBubble = _zz_bubbleInserter_insertBubble;
        end
        `SdramCtrlBackendTask_binary_sequential_REFRESH : begin
          bubbleInserter_insertBubble = ({bubbleInserter_timings_banks_3_active_busy,{bubbleInserter_timings_banks_2_active_busy,{bubbleInserter_timings_banks_1_active_busy,bubbleInserter_timings_banks_0_active_busy}}} != 4'b0000);
        end
        `SdramCtrlBackendTask_binary_sequential_ACTIVE : begin
          bubbleInserter_insertBubble = _zz_bubbleInserter_insertBubble_1;
        end
        `SdramCtrlBackendTask_binary_sequential_READ : begin
          bubbleInserter_insertBubble = bubbleInserter_timings_read_busy;
        end
        default : begin
          bubbleInserter_insertBubble = bubbleInserter_timings_write_busy;
        end
      endcase
    end
  end

  assign _zz_frontend_rsp_cmd_ready = (! bubbleInserter_insertBubble);
  assign frontend_rsp_cmd_ready = (bubbleInserter_rsp_ready && _zz_frontend_rsp_cmd_ready);
  assign _zz_bubbleInserter_rsp_payload_task = frontend_rsp_cmd_payload_task;
  assign bubbleInserter_rsp_valid = (frontend_rsp_cmd_valid && _zz_frontend_rsp_cmd_ready);
  assign bubbleInserter_rsp_payload_task = _zz_bubbleInserter_rsp_payload_task;
  assign bubbleInserter_rsp_payload_bank = frontend_rsp_cmd_payload_bank;
  assign bubbleInserter_rsp_payload_rowColumn = frontend_rsp_cmd_payload_rowColumn;
  assign bubbleInserter_rsp_payload_data = frontend_rsp_cmd_payload_data;
  assign bubbleInserter_rsp_payload_mask = frontend_rsp_cmd_payload_mask;
  assign bubbleInserter_rsp_payload_context_id = frontend_rsp_cmd_payload_context_id;
  assign bubbleInserter_rsp_payload_context_last = frontend_rsp_cmd_payload_context_last;
  assign bubbleInserter_timings_read_busy = (bubbleInserter_timings_read_counter != 1'b0);
  assign when_SdramCtrl_l287 = (bubbleInserter_timings_read_busy && bubbleInserter_rsp_ready);
  assign bubbleInserter_timings_write_busy = (bubbleInserter_timings_write_counter != 3'b000);
  assign when_SdramCtrl_l287_1 = (bubbleInserter_timings_write_busy && bubbleInserter_rsp_ready);
  assign bubbleInserter_timings_banks_0_precharge_busy = (bubbleInserter_timings_banks_0_precharge_counter != 3'b000);
  assign when_SdramCtrl_l287_2 = (bubbleInserter_timings_banks_0_precharge_busy && bubbleInserter_rsp_ready);
  assign bubbleInserter_timings_banks_0_active_busy = (bubbleInserter_timings_banks_0_active_counter != 3'b000);
  assign when_SdramCtrl_l287_3 = (bubbleInserter_timings_banks_0_active_busy && bubbleInserter_rsp_ready);
  assign bubbleInserter_timings_banks_1_precharge_busy = (bubbleInserter_timings_banks_1_precharge_counter != 3'b000);
  assign when_SdramCtrl_l287_4 = (bubbleInserter_timings_banks_1_precharge_busy && bubbleInserter_rsp_ready);
  assign bubbleInserter_timings_banks_1_active_busy = (bubbleInserter_timings_banks_1_active_counter != 3'b000);
  assign when_SdramCtrl_l287_5 = (bubbleInserter_timings_banks_1_active_busy && bubbleInserter_rsp_ready);
  assign bubbleInserter_timings_banks_2_precharge_busy = (bubbleInserter_timings_banks_2_precharge_counter != 3'b000);
  assign when_SdramCtrl_l287_6 = (bubbleInserter_timings_banks_2_precharge_busy && bubbleInserter_rsp_ready);
  assign bubbleInserter_timings_banks_2_active_busy = (bubbleInserter_timings_banks_2_active_counter != 3'b000);
  assign when_SdramCtrl_l287_7 = (bubbleInserter_timings_banks_2_active_busy && bubbleInserter_rsp_ready);
  assign bubbleInserter_timings_banks_3_precharge_busy = (bubbleInserter_timings_banks_3_precharge_counter != 3'b000);
  assign when_SdramCtrl_l287_8 = (bubbleInserter_timings_banks_3_precharge_busy && bubbleInserter_rsp_ready);
  assign bubbleInserter_timings_banks_3_active_busy = (bubbleInserter_timings_banks_3_active_counter != 3'b000);
  assign when_SdramCtrl_l287_9 = (bubbleInserter_timings_banks_3_active_busy && bubbleInserter_rsp_ready);
  assign when_SdramCtrl_l296 = (bubbleInserter_timings_banks_0_active_counter <= 3'b001);
  assign when_SdramCtrl_l296_1 = (bubbleInserter_timings_banks_1_active_counter <= 3'b001);
  assign when_SdramCtrl_l296_2 = (bubbleInserter_timings_banks_2_active_counter <= 3'b001);
  assign when_SdramCtrl_l296_3 = (bubbleInserter_timings_banks_3_active_counter <= 3'b001);
  assign when_SdramCtrl_l296_4 = (bubbleInserter_timings_banks_0_active_counter <= 3'b001);
  assign when_Utils_l762 = (frontend_rsp_cmd_payload_bank == 2'b00);
  assign when_SdramCtrl_l296_5 = (bubbleInserter_timings_banks_0_active_counter <= 3'b001);
  assign when_Utils_l762_1 = (frontend_rsp_cmd_payload_bank == 2'b01);
  assign when_SdramCtrl_l296_6 = (bubbleInserter_timings_banks_1_active_counter <= 3'b001);
  assign when_Utils_l762_2 = (frontend_rsp_cmd_payload_bank == 2'b10);
  assign when_SdramCtrl_l296_7 = (bubbleInserter_timings_banks_2_active_counter <= 3'b001);
  assign when_Utils_l762_3 = (frontend_rsp_cmd_payload_bank == 2'b11);
  assign when_SdramCtrl_l296_8 = (bubbleInserter_timings_banks_3_active_counter <= 3'b001);
  assign when_SdramCtrl_l296_9 = (bubbleInserter_timings_banks_0_active_counter <= 3'b101);
  assign when_SdramCtrl_l296_10 = (bubbleInserter_timings_banks_1_active_counter <= 3'b101);
  assign when_SdramCtrl_l296_11 = (bubbleInserter_timings_banks_2_active_counter <= 3'b101);
  assign when_SdramCtrl_l296_12 = (bubbleInserter_timings_banks_3_active_counter <= 3'b101);
  assign when_SdramCtrl_l296_13 = (bubbleInserter_timings_write_counter <= 3'b001);
  assign when_Utils_l762_4 = (frontend_rsp_cmd_payload_bank == 2'b00);
  assign when_SdramCtrl_l296_14 = (bubbleInserter_timings_banks_0_precharge_counter <= 3'b011);
  assign when_Utils_l762_5 = (frontend_rsp_cmd_payload_bank == 2'b01);
  assign when_SdramCtrl_l296_15 = (bubbleInserter_timings_banks_1_precharge_counter <= 3'b011);
  assign when_Utils_l762_6 = (frontend_rsp_cmd_payload_bank == 2'b10);
  assign when_SdramCtrl_l296_16 = (bubbleInserter_timings_banks_2_precharge_counter <= 3'b011);
  assign when_Utils_l762_7 = (frontend_rsp_cmd_payload_bank == 2'b11);
  assign when_SdramCtrl_l296_17 = (bubbleInserter_timings_banks_3_precharge_counter <= 3'b011);
  assign when_Utils_l762_8 = (frontend_rsp_cmd_payload_bank == 2'b00);
  assign when_SdramCtrl_l296_18 = (bubbleInserter_timings_banks_0_active_counter <= 3'b101);
  assign when_Utils_l762_9 = (frontend_rsp_cmd_payload_bank == 2'b01);
  assign when_SdramCtrl_l296_19 = (bubbleInserter_timings_banks_1_active_counter <= 3'b101);
  assign when_Utils_l762_10 = (frontend_rsp_cmd_payload_bank == 2'b10);
  assign when_SdramCtrl_l296_20 = (bubbleInserter_timings_banks_2_active_counter <= 3'b101);
  assign when_Utils_l762_11 = (frontend_rsp_cmd_payload_bank == 2'b11);
  assign when_SdramCtrl_l296_21 = (bubbleInserter_timings_banks_3_active_counter <= 3'b101);
  assign when_SdramCtrl_l296_22 = (bubbleInserter_timings_write_counter <= 3'b100);
  assign when_Utils_l762_12 = (frontend_rsp_cmd_payload_bank == 2'b00);
  assign when_SdramCtrl_l296_23 = (bubbleInserter_timings_banks_0_precharge_counter <= 3'b001);
  assign when_Utils_l762_13 = (frontend_rsp_cmd_payload_bank == 2'b01);
  assign when_SdramCtrl_l296_24 = (bubbleInserter_timings_banks_1_precharge_counter <= 3'b001);
  assign when_Utils_l762_14 = (frontend_rsp_cmd_payload_bank == 2'b10);
  assign when_SdramCtrl_l296_25 = (bubbleInserter_timings_banks_2_precharge_counter <= 3'b001);
  assign when_Utils_l762_15 = (frontend_rsp_cmd_payload_bank == 2'b11);
  assign when_SdramCtrl_l296_26 = (bubbleInserter_timings_banks_3_precharge_counter <= 3'b001);
  assign chip_cmd_valid = bubbleInserter_rsp_valid;
  assign bubbleInserter_rsp_ready = chip_cmd_ready;
  assign chip_cmd_payload_task = bubbleInserter_rsp_payload_task;
  assign chip_cmd_payload_bank = bubbleInserter_rsp_payload_bank;
  assign chip_cmd_payload_rowColumn = bubbleInserter_rsp_payload_rowColumn;
  assign chip_cmd_payload_data = bubbleInserter_rsp_payload_data;
  assign chip_cmd_payload_mask = bubbleInserter_rsp_payload_mask;
  assign chip_cmd_payload_context_id = bubbleInserter_rsp_payload_context_id;
  assign chip_cmd_payload_context_last = bubbleInserter_rsp_payload_context_last;
  assign io_sdram_ADDR = chip_sdram_ADDR;
  assign io_sdram_BA = chip_sdram_BA;
  assign io_sdram_DQ_write = chip_sdram_DQ_write;
  assign io_sdram_DQ_writeEnable = chip_sdram_DQ_writeEnable;
  assign io_sdram_DQM = chip_sdram_DQM;
  assign io_sdram_CASn = chip_sdram_CASn;
  assign io_sdram_CKE = chip_sdram_CKE;
  assign io_sdram_CSn = chip_sdram_CSn;
  assign io_sdram_RASn = chip_sdram_RASn;
  assign io_sdram_WEn = chip_sdram_WEn;
  assign _zz_chip_readHistory_0 = (chip_cmd_valid && ((chip_cmd_payload_task == `SdramCtrlBackendTask_binary_sequential_READ) || 1'b0));
  assign chip_readHistory_0 = _zz_chip_readHistory_0;
  assign chip_readHistory_1 = _zz_chip_readHistory_1;
  assign chip_readHistory_2 = _zz_chip_readHistory_2;
  assign chip_readHistory_3 = _zz_chip_readHistory_3;
  assign chip_readHistory_4 = _zz_chip_readHistory_4;
  assign chip_readHistory_5 = _zz_chip_readHistory_5;
  assign chip_sdramCkeNext = (! (({chip_readHistory_5,{chip_readHistory_4,{chip_readHistory_3,{chip_readHistory_2,{chip_readHistory_1,chip_readHistory_0}}}}} != 6'h0) && (! io_bus_rsp_ready)));
  assign chip_remoteCke = chip_sdramCkeInternal_regNext;
  assign _zz_chip_sdram_DQM = (! chip_readHistory_1);
  assign chip_backupIn_valid = (chip_readHistory_5 && chip_remoteCke);
  assign chip_backupIn_payload_data = chip_sdram_DQ_read;
  assign chip_backupIn_payload_context_id = chip_contextDelayed_id;
  assign chip_backupIn_payload_context_last = chip_contextDelayed_last;
  assign chip_backupIn_ready = chip_backupIn_fifo_io_push_ready;
  assign io_bus_rsp_valid = chip_backupIn_fifo_io_pop_valid;
  assign io_bus_rsp_payload_data = chip_backupIn_fifo_io_pop_payload_data;
  assign io_bus_rsp_payload_context_id = chip_backupIn_fifo_io_pop_payload_context_id;
  assign io_bus_rsp_payload_context_last = chip_backupIn_fifo_io_pop_payload_context_last;
  assign chip_cmd_ready = chip_remoteCke;
  always @(posedge clk) begin
    if(!resetn) begin
      refresh_counter_value <= 10'h0;
      refresh_pending <= 1'b0;
      powerup_counter <= 14'h0;
      powerup_done <= 1'b0;
      frontend_banks_0_active <= 1'b0;
      frontend_banks_1_active <= 1'b0;
      frontend_banks_2_active <= 1'b0;
      frontend_banks_3_active <= 1'b0;
      frontend_state <= `SdramCtrlFrontendState_binary_sequential_BOOT_PRECHARGE;
      frontend_bootRefreshCounter_value <= 3'b000;
      frontend_rsp_rValid <= 1'b0;
      bubbleInserter_timings_read_counter <= 1'b0;
      bubbleInserter_timings_write_counter <= 3'b000;
      bubbleInserter_timings_banks_0_precharge_counter <= 3'b000;
      bubbleInserter_timings_banks_0_active_counter <= 3'b000;
      bubbleInserter_timings_banks_1_precharge_counter <= 3'b000;
      bubbleInserter_timings_banks_1_active_counter <= 3'b000;
      bubbleInserter_timings_banks_2_precharge_counter <= 3'b000;
      bubbleInserter_timings_banks_2_active_counter <= 3'b000;
      bubbleInserter_timings_banks_3_precharge_counter <= 3'b000;
      bubbleInserter_timings_banks_3_active_counter <= 3'b000;
      _zz_chip_readHistory_1 <= 1'b0;
      _zz_chip_readHistory_2 <= 1'b0;
      _zz_chip_readHistory_3 <= 1'b0;
      _zz_chip_readHistory_4 <= 1'b0;
      _zz_chip_readHistory_5 <= 1'b0;
      chip_sdramCkeInternal <= 1'b1;
      chip_sdramCkeInternal_regNext <= 1'b1;
    end else begin
      refresh_counter_value <= refresh_counter_valueNext;
      if(refresh_counter_willOverflow) begin
        refresh_pending <= 1'b1;
      end
      if(when_SdramCtrl_l177) begin
        powerup_counter <= (powerup_counter + 14'h0001);
        if(when_SdramCtrl_l179) begin
          powerup_done <= 1'b1;
        end
      end
      frontend_bootRefreshCounter_value <= frontend_bootRefreshCounter_valueNext;
      case(frontend_state)
        `SdramCtrlFrontendState_binary_sequential_BOOT_PRECHARGE : begin
          if(powerup_done) begin
            if(frontend_rsp_ready) begin
              frontend_state <= `SdramCtrlFrontendState_binary_sequential_BOOT_REFRESH;
            end
          end
        end
        `SdramCtrlFrontendState_binary_sequential_BOOT_REFRESH : begin
          if(frontend_rsp_ready) begin
            if(frontend_bootRefreshCounter_willOverflowIfInc) begin
              frontend_state <= `SdramCtrlFrontendState_binary_sequential_BOOT_MODE;
            end
          end
        end
        `SdramCtrlFrontendState_binary_sequential_BOOT_MODE : begin
          if(frontend_rsp_ready) begin
            frontend_state <= `SdramCtrlFrontendState_binary_sequential_RUN;
          end
        end
        default : begin
          if(refresh_pending) begin
            if(when_SdramCtrl_l241) begin
              if(frontend_rsp_ready) begin
                frontend_banks_0_active <= 1'b0;
                frontend_banks_1_active <= 1'b0;
                frontend_banks_2_active <= 1'b0;
                frontend_banks_3_active <= 1'b0;
              end
            end else begin
              if(frontend_rsp_ready) begin
                refresh_pending <= 1'b0;
              end
            end
          end else begin
            if(io_bus_cmd_valid) begin
              if(when_SdramCtrl_l255) begin
                if(frontend_rsp_ready) begin
                  if(_zz_2) begin
                    frontend_banks_0_active <= 1'b0;
                  end
                  if(_zz_3) begin
                    frontend_banks_1_active <= 1'b0;
                  end
                  if(_zz_4) begin
                    frontend_banks_2_active <= 1'b0;
                  end
                  if(_zz_5) begin
                    frontend_banks_3_active <= 1'b0;
                  end
                end
              end else begin
                if(when_SdramCtrl_l260) begin
                  if(frontend_rsp_ready) begin
                    if(_zz_2) begin
                      frontend_banks_0_active <= 1'b1;
                    end
                    if(_zz_3) begin
                      frontend_banks_1_active <= 1'b1;
                    end
                    if(_zz_4) begin
                      frontend_banks_2_active <= 1'b1;
                    end
                    if(_zz_5) begin
                      frontend_banks_3_active <= 1'b1;
                    end
                  end
                end
              end
            end
          end
        end
      endcase
      if(frontend_rsp_ready) begin
        frontend_rsp_rValid <= frontend_rsp_valid;
      end
      if(when_SdramCtrl_l287) begin
        bubbleInserter_timings_read_counter <= (bubbleInserter_timings_read_counter - 1'b1);
      end
      if(when_SdramCtrl_l287_1) begin
        bubbleInserter_timings_write_counter <= (bubbleInserter_timings_write_counter - 3'b001);
      end
      if(when_SdramCtrl_l287_2) begin
        bubbleInserter_timings_banks_0_precharge_counter <= (bubbleInserter_timings_banks_0_precharge_counter - 3'b001);
      end
      if(when_SdramCtrl_l287_3) begin
        bubbleInserter_timings_banks_0_active_counter <= (bubbleInserter_timings_banks_0_active_counter - 3'b001);
      end
      if(when_SdramCtrl_l287_4) begin
        bubbleInserter_timings_banks_1_precharge_counter <= (bubbleInserter_timings_banks_1_precharge_counter - 3'b001);
      end
      if(when_SdramCtrl_l287_5) begin
        bubbleInserter_timings_banks_1_active_counter <= (bubbleInserter_timings_banks_1_active_counter - 3'b001);
      end
      if(when_SdramCtrl_l287_6) begin
        bubbleInserter_timings_banks_2_precharge_counter <= (bubbleInserter_timings_banks_2_precharge_counter - 3'b001);
      end
      if(when_SdramCtrl_l287_7) begin
        bubbleInserter_timings_banks_2_active_counter <= (bubbleInserter_timings_banks_2_active_counter - 3'b001);
      end
      if(when_SdramCtrl_l287_8) begin
        bubbleInserter_timings_banks_3_precharge_counter <= (bubbleInserter_timings_banks_3_precharge_counter - 3'b001);
      end
      if(when_SdramCtrl_l287_9) begin
        bubbleInserter_timings_banks_3_active_counter <= (bubbleInserter_timings_banks_3_active_counter - 3'b001);
      end
      if(frontend_rsp_cmd_valid) begin
        case(frontend_rsp_cmd_payload_task)
          `SdramCtrlBackendTask_binary_sequential_MODE : begin
            if(frontend_rsp_cmd_ready) begin
              if(when_SdramCtrl_l296) begin
                bubbleInserter_timings_banks_0_active_counter <= 3'b001;
              end
              if(when_SdramCtrl_l296_1) begin
                bubbleInserter_timings_banks_1_active_counter <= 3'b001;
              end
              if(when_SdramCtrl_l296_2) begin
                bubbleInserter_timings_banks_2_active_counter <= 3'b001;
              end
              if(when_SdramCtrl_l296_3) begin
                bubbleInserter_timings_banks_3_active_counter <= 3'b001;
              end
            end
          end
          `SdramCtrlBackendTask_binary_sequential_PRECHARGE_ALL : begin
            if(frontend_rsp_cmd_ready) begin
              if(when_SdramCtrl_l296_4) begin
                bubbleInserter_timings_banks_0_active_counter <= 3'b001;
              end
            end
          end
          `SdramCtrlBackendTask_binary_sequential_PRECHARGE_SINGLE : begin
            if(frontend_rsp_cmd_ready) begin
              if(when_Utils_l762) begin
                if(when_SdramCtrl_l296_5) begin
                  bubbleInserter_timings_banks_0_active_counter <= 3'b001;
                end
              end
              if(when_Utils_l762_1) begin
                if(when_SdramCtrl_l296_6) begin
                  bubbleInserter_timings_banks_1_active_counter <= 3'b001;
                end
              end
              if(when_Utils_l762_2) begin
                if(when_SdramCtrl_l296_7) begin
                  bubbleInserter_timings_banks_2_active_counter <= 3'b001;
                end
              end
              if(when_Utils_l762_3) begin
                if(when_SdramCtrl_l296_8) begin
                  bubbleInserter_timings_banks_3_active_counter <= 3'b001;
                end
              end
            end
          end
          `SdramCtrlBackendTask_binary_sequential_REFRESH : begin
            if(frontend_rsp_cmd_ready) begin
              if(when_SdramCtrl_l296_9) begin
                bubbleInserter_timings_banks_0_active_counter <= 3'b101;
              end
              if(when_SdramCtrl_l296_10) begin
                bubbleInserter_timings_banks_1_active_counter <= 3'b101;
              end
              if(when_SdramCtrl_l296_11) begin
                bubbleInserter_timings_banks_2_active_counter <= 3'b101;
              end
              if(when_SdramCtrl_l296_12) begin
                bubbleInserter_timings_banks_3_active_counter <= 3'b101;
              end
            end
          end
          `SdramCtrlBackendTask_binary_sequential_ACTIVE : begin
            if(frontend_rsp_cmd_ready) begin
              if(when_SdramCtrl_l296_13) begin
                bubbleInserter_timings_write_counter <= 3'b001;
              end
              bubbleInserter_timings_read_counter <= 1'b1;
              if(when_Utils_l762_4) begin
                if(when_SdramCtrl_l296_14) begin
                  bubbleInserter_timings_banks_0_precharge_counter <= 3'b011;
                end
              end
              if(when_Utils_l762_5) begin
                if(when_SdramCtrl_l296_15) begin
                  bubbleInserter_timings_banks_1_precharge_counter <= 3'b011;
                end
              end
              if(when_Utils_l762_6) begin
                if(when_SdramCtrl_l296_16) begin
                  bubbleInserter_timings_banks_2_precharge_counter <= 3'b011;
                end
              end
              if(when_Utils_l762_7) begin
                if(when_SdramCtrl_l296_17) begin
                  bubbleInserter_timings_banks_3_precharge_counter <= 3'b011;
                end
              end
              if(when_Utils_l762_8) begin
                if(when_SdramCtrl_l296_18) begin
                  bubbleInserter_timings_banks_0_active_counter <= 3'b101;
                end
              end
              if(when_Utils_l762_9) begin
                if(when_SdramCtrl_l296_19) begin
                  bubbleInserter_timings_banks_1_active_counter <= 3'b101;
                end
              end
              if(when_Utils_l762_10) begin
                if(when_SdramCtrl_l296_20) begin
                  bubbleInserter_timings_banks_2_active_counter <= 3'b101;
                end
              end
              if(when_Utils_l762_11) begin
                if(when_SdramCtrl_l296_21) begin
                  bubbleInserter_timings_banks_3_active_counter <= 3'b101;
                end
              end
            end
          end
          `SdramCtrlBackendTask_binary_sequential_READ : begin
            if(frontend_rsp_cmd_ready) begin
              if(when_SdramCtrl_l296_22) begin
                bubbleInserter_timings_write_counter <= 3'b100;
              end
            end
          end
          default : begin
            if(frontend_rsp_cmd_ready) begin
              if(when_Utils_l762_12) begin
                if(when_SdramCtrl_l296_23) begin
                  bubbleInserter_timings_banks_0_precharge_counter <= 3'b001;
                end
              end
              if(when_Utils_l762_13) begin
                if(when_SdramCtrl_l296_24) begin
                  bubbleInserter_timings_banks_1_precharge_counter <= 3'b001;
                end
              end
              if(when_Utils_l762_14) begin
                if(when_SdramCtrl_l296_25) begin
                  bubbleInserter_timings_banks_2_precharge_counter <= 3'b001;
                end
              end
              if(when_Utils_l762_15) begin
                if(when_SdramCtrl_l296_26) begin
                  bubbleInserter_timings_banks_3_precharge_counter <= 3'b001;
                end
              end
            end
          end
        endcase
      end
      if(chip_remoteCke) begin
        _zz_chip_readHistory_1 <= _zz_chip_readHistory_0;
      end
      if(chip_remoteCke) begin
        _zz_chip_readHistory_2 <= _zz_chip_readHistory_1;
      end
      if(chip_remoteCke) begin
        _zz_chip_readHistory_3 <= _zz_chip_readHistory_2;
      end
      if(chip_remoteCke) begin
        _zz_chip_readHistory_4 <= _zz_chip_readHistory_3;
      end
      if(chip_remoteCke) begin
        _zz_chip_readHistory_5 <= _zz_chip_readHistory_4;
      end
      chip_sdramCkeInternal <= chip_sdramCkeNext;
      chip_sdramCkeInternal_regNext <= chip_sdramCkeInternal;
    end
  end

  always @(posedge clk) begin
    case(frontend_state)
      `SdramCtrlFrontendState_binary_sequential_BOOT_PRECHARGE : begin
      end
      `SdramCtrlFrontendState_binary_sequential_BOOT_REFRESH : begin
      end
      `SdramCtrlFrontendState_binary_sequential_BOOT_MODE : begin
      end
      default : begin
        if(!refresh_pending) begin
          if(io_bus_cmd_valid) begin
            if(!when_SdramCtrl_l255) begin
              if(when_SdramCtrl_l260) begin
                if(_zz_2) begin
                  frontend_banks_0_row <= frontend_address_row;
                end
                if(_zz_3) begin
                  frontend_banks_1_row <= frontend_address_row;
                end
                if(_zz_4) begin
                  frontend_banks_2_row <= frontend_address_row;
                end
                if(_zz_5) begin
                  frontend_banks_3_row <= frontend_address_row;
                end
              end
            end
          end
        end
      end
    endcase
    if(frontend_rsp_ready) begin
      frontend_rsp_rData_task <= frontend_rsp_payload_task;
      frontend_rsp_rData_bank <= frontend_rsp_payload_bank;
      frontend_rsp_rData_rowColumn <= frontend_rsp_payload_rowColumn;
      frontend_rsp_rData_data <= frontend_rsp_payload_data;
      frontend_rsp_rData_mask <= frontend_rsp_payload_mask;
      frontend_rsp_rData_context_id <= frontend_rsp_payload_context_id;
      frontend_rsp_rData_context_last <= frontend_rsp_payload_context_last;
    end
    if(chip_remoteCke) begin
      chip_cmd_payload_context_delay_1_id <= chip_cmd_payload_context_id;
      chip_cmd_payload_context_delay_1_last <= chip_cmd_payload_context_last;
    end
    if(chip_remoteCke) begin
      chip_cmd_payload_context_delay_2_id <= chip_cmd_payload_context_delay_1_id;
      chip_cmd_payload_context_delay_2_last <= chip_cmd_payload_context_delay_1_last;
    end
    if(chip_remoteCke) begin
      chip_cmd_payload_context_delay_3_id <= chip_cmd_payload_context_delay_2_id;
      chip_cmd_payload_context_delay_3_last <= chip_cmd_payload_context_delay_2_last;
    end
    if(chip_remoteCke) begin
      chip_cmd_payload_context_delay_4_id <= chip_cmd_payload_context_delay_3_id;
      chip_cmd_payload_context_delay_4_last <= chip_cmd_payload_context_delay_3_last;
    end
    if(chip_remoteCke) begin
      chip_contextDelayed_id <= chip_cmd_payload_context_delay_4_id;
      chip_contextDelayed_last <= chip_cmd_payload_context_delay_4_last;
    end
    chip_sdram_CKE <= chip_sdramCkeNext;
    if(chip_remoteCke) begin
      chip_sdram_DQ_read <= io_sdram_DQ_read;
      chip_sdram_CSn <= 1'b0;
      chip_sdram_RASn <= 1'b1;
      chip_sdram_CASn <= 1'b1;
      chip_sdram_WEn <= 1'b1;
      chip_sdram_DQ_write <= chip_cmd_payload_data;
      chip_sdram_DQ_writeEnable <= 16'h0;
      chip_sdram_DQM[0] <= _zz_chip_sdram_DQM;
      chip_sdram_DQM[1] <= _zz_chip_sdram_DQM;
      if(chip_cmd_valid) begin
        case(chip_cmd_payload_task)
          `SdramCtrlBackendTask_binary_sequential_PRECHARGE_ALL : begin
            chip_sdram_ADDR[10] <= 1'b1;
            chip_sdram_CSn <= 1'b0;
            chip_sdram_RASn <= 1'b0;
            chip_sdram_CASn <= 1'b1;
            chip_sdram_WEn <= 1'b0;
          end
          `SdramCtrlBackendTask_binary_sequential_REFRESH : begin
            chip_sdram_CSn <= 1'b0;
            chip_sdram_RASn <= 1'b0;
            chip_sdram_CASn <= 1'b0;
            chip_sdram_WEn <= 1'b1;
          end
          `SdramCtrlBackendTask_binary_sequential_MODE : begin
            chip_sdram_ADDR <= 13'h0;
            chip_sdram_ADDR[2 : 0] <= 3'b000;
            chip_sdram_ADDR[3] <= 1'b0;
            chip_sdram_ADDR[6 : 4] <= 3'b011;
            chip_sdram_ADDR[8 : 7] <= 2'b00;
            chip_sdram_ADDR[9] <= 1'b0;
            chip_sdram_BA <= 2'b00;
            chip_sdram_CSn <= 1'b0;
            chip_sdram_RASn <= 1'b0;
            chip_sdram_CASn <= 1'b0;
            chip_sdram_WEn <= 1'b0;
          end
          `SdramCtrlBackendTask_binary_sequential_ACTIVE : begin
            chip_sdram_ADDR <= chip_cmd_payload_rowColumn;
            chip_sdram_BA <= chip_cmd_payload_bank;
            chip_sdram_CSn <= 1'b0;
            chip_sdram_RASn <= 1'b0;
            chip_sdram_CASn <= 1'b1;
            chip_sdram_WEn <= 1'b1;
          end
          `SdramCtrlBackendTask_binary_sequential_WRITE : begin
            chip_sdram_ADDR <= chip_cmd_payload_rowColumn;
            chip_sdram_ADDR[10] <= 1'b0;
            chip_sdram_DQ_writeEnable <= 16'hffff;
            chip_sdram_DQ_write <= chip_cmd_payload_data;
            chip_sdram_DQM <= (~ chip_cmd_payload_mask);
            chip_sdram_BA <= chip_cmd_payload_bank;
            chip_sdram_CSn <= 1'b0;
            chip_sdram_RASn <= 1'b1;
            chip_sdram_CASn <= 1'b0;
            chip_sdram_WEn <= 1'b0;
          end
          `SdramCtrlBackendTask_binary_sequential_READ : begin
            chip_sdram_ADDR <= chip_cmd_payload_rowColumn;
            chip_sdram_ADDR[10] <= 1'b0;
            chip_sdram_BA <= chip_cmd_payload_bank;
            chip_sdram_CSn <= 1'b0;
            chip_sdram_RASn <= 1'b1;
            chip_sdram_CASn <= 1'b0;
            chip_sdram_WEn <= 1'b1;
          end
          default : begin
            chip_sdram_BA <= chip_cmd_payload_bank;
            chip_sdram_ADDR[10] <= 1'b0;
            chip_sdram_CSn <= 1'b0;
            chip_sdram_RASn <= 1'b0;
            chip_sdram_CASn <= 1'b1;
            chip_sdram_WEn <= 1'b0;
          end
        endcase
      end
    end
  end


endmodule

module StreamFifoLowLatency (
  input               io_push_valid,
  output              io_push_ready,
  input      [15:0]   io_push_payload_data,
  input      [2:0]    io_push_payload_context_id,
  input               io_push_payload_context_last,
  output reg          io_pop_valid,
  input               io_pop_ready,
  output reg [15:0]   io_pop_payload_data,
  output reg [2:0]    io_pop_payload_context_id,
  output reg          io_pop_payload_context_last,
  input               io_flush,
  output     [1:0]    io_occupancy,
  input               clk,
  input               resetn
);
  wire       [19:0]   _zz_ram_port0;
  wire       [19:0]   _zz_ram_port;
  reg                 _zz_1;
  reg                 pushPtr_willIncrement;
  reg                 pushPtr_willClear;
  reg        [0:0]    pushPtr_valueNext;
  reg        [0:0]    pushPtr_value;
  wire                pushPtr_willOverflowIfInc;
  wire                pushPtr_willOverflow;
  reg                 popPtr_willIncrement;
  reg                 popPtr_willClear;
  reg        [0:0]    popPtr_valueNext;
  reg        [0:0]    popPtr_value;
  wire                popPtr_willOverflowIfInc;
  wire                popPtr_willOverflow;
  wire                ptrMatch;
  reg                 risingOccupancy;
  wire                empty;
  wire                full;
  wire                pushing;
  wire                popping;
  wire                when_Stream_l995;
  wire       [19:0]   _zz_io_pop_payload_data;
  wire       [3:0]    _zz_io_pop_payload_context_id;
  wire                when_Stream_l1008;
  wire       [0:0]    ptrDif;
  (* ram_style = "distributed" *) reg [19:0] ram [0:1];

  assign _zz_ram_port = {{io_push_payload_context_last,io_push_payload_context_id},io_push_payload_data};
  assign _zz_ram_port0 = ram[popPtr_value];
  always @(posedge clk) begin
    if(_zz_1) begin
      ram[pushPtr_value] <= _zz_ram_port;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    pushPtr_willIncrement = 1'b0;
    if(pushing) begin
      pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    pushPtr_willClear = 1'b0;
    if(io_flush) begin
      pushPtr_willClear = 1'b1;
    end
  end

  assign pushPtr_willOverflowIfInc = (pushPtr_value == 1'b1);
  assign pushPtr_willOverflow = (pushPtr_willOverflowIfInc && pushPtr_willIncrement);
  always @(*) begin
    pushPtr_valueNext = (pushPtr_value + pushPtr_willIncrement);
    if(pushPtr_willClear) begin
      pushPtr_valueNext = 1'b0;
    end
  end

  always @(*) begin
    popPtr_willIncrement = 1'b0;
    if(popping) begin
      popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    popPtr_willClear = 1'b0;
    if(io_flush) begin
      popPtr_willClear = 1'b1;
    end
  end

  assign popPtr_willOverflowIfInc = (popPtr_value == 1'b1);
  assign popPtr_willOverflow = (popPtr_willOverflowIfInc && popPtr_willIncrement);
  always @(*) begin
    popPtr_valueNext = (popPtr_value + popPtr_willIncrement);
    if(popPtr_willClear) begin
      popPtr_valueNext = 1'b0;
    end
  end

  assign ptrMatch = (pushPtr_value == popPtr_value);
  assign empty = (ptrMatch && (! risingOccupancy));
  assign full = (ptrMatch && risingOccupancy);
  assign pushing = (io_push_valid && io_push_ready);
  assign popping = (io_pop_valid && io_pop_ready);
  assign io_push_ready = (! full);
  assign when_Stream_l995 = (! empty);
  always @(*) begin
    if(when_Stream_l995) begin
      io_pop_valid = 1'b1;
    end else begin
      io_pop_valid = io_push_valid;
    end
  end

  assign _zz_io_pop_payload_data = _zz_ram_port0;
  assign _zz_io_pop_payload_context_id = _zz_io_pop_payload_data[19 : 16];
  always @(*) begin
    if(when_Stream_l995) begin
      io_pop_payload_data = _zz_io_pop_payload_data[15 : 0];
    end else begin
      io_pop_payload_data = io_push_payload_data;
    end
  end

  always @(*) begin
    if(when_Stream_l995) begin
      io_pop_payload_context_id = _zz_io_pop_payload_context_id[2 : 0];
    end else begin
      io_pop_payload_context_id = io_push_payload_context_id;
    end
  end

  always @(*) begin
    if(when_Stream_l995) begin
      io_pop_payload_context_last = _zz_io_pop_payload_context_id[3];
    end else begin
      io_pop_payload_context_last = io_push_payload_context_last;
    end
  end

  assign when_Stream_l1008 = (pushing != popping);
  assign ptrDif = (pushPtr_value - popPtr_value);
  assign io_occupancy = {(risingOccupancy && ptrMatch),ptrDif};
  always @(posedge clk) begin
    if(!resetn) begin
      pushPtr_value <= 1'b0;
      popPtr_value <= 1'b0;
      risingOccupancy <= 1'b0;
    end else begin
      pushPtr_value <= pushPtr_valueNext;
      popPtr_value <= popPtr_valueNext;
      if(when_Stream_l1008) begin
        risingOccupancy <= pushing;
      end
      if(io_flush) begin
        risingOccupancy <= 1'b0;
      end
    end
  end


endmodule
