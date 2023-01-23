// Generator : SpinalHDL v1.8.0    git head : 4e3563a282582b41f4eaafc503787757251d23ea
// Component : AxiLite4I2cCtrl
// Git hash  : 17ba3429c74144a7d37c48904a91bdac2e1b784a

`timescale 1ns/1ps

module AxiLite4I2cCtrl (
  input               axil4Ctrl_awvalid,
  output              axil4Ctrl_awready,
  input      [7:0]    axil4Ctrl_awaddr,
  input      [2:0]    axil4Ctrl_awprot,
  input               axil4Ctrl_wvalid,
  output              axil4Ctrl_wready,
  input      [31:0]   axil4Ctrl_wdata,
  input      [3:0]    axil4Ctrl_wstrb,
  output              axil4Ctrl_bvalid,
  input               axil4Ctrl_bready,
  output     [1:0]    axil4Ctrl_bresp,
  input               axil4Ctrl_arvalid,
  output reg          axil4Ctrl_arready,
  input      [7:0]    axil4Ctrl_araddr,
  input      [2:0]    axil4Ctrl_arprot,
  output              axil4Ctrl_rvalid,
  input               axil4Ctrl_rready,
  output     [31:0]   axil4Ctrl_rdata,
  output     [1:0]    axil4Ctrl_rresp,
  output              io_i2c_sda_write,
  input               io_i2c_sda_read,
  output              io_i2c_scl_write,
  input               io_i2c_scl_read,
  output              io_interrupt,
  input               clk,
  input               resetn
);
  localparam bridge_masterLogic_fsm_enumDef_BOOT = 4'd0;
  localparam bridge_masterLogic_fsm_enumDef_IDLE = 4'd1;
  localparam bridge_masterLogic_fsm_enumDef_START1 = 4'd2;
  localparam bridge_masterLogic_fsm_enumDef_START2 = 4'd3;
  localparam bridge_masterLogic_fsm_enumDef_LOW = 4'd4;
  localparam bridge_masterLogic_fsm_enumDef_HIGH = 4'd5;
  localparam bridge_masterLogic_fsm_enumDef_RESTART = 4'd6;
  localparam bridge_masterLogic_fsm_enumDef_STOP1 = 4'd7;
  localparam bridge_masterLogic_fsm_enumDef_STOP2 = 4'd8;
  localparam bridge_masterLogic_fsm_enumDef_TBUF = 4'd9;
  localparam I2cSlaveCmdMode_NONE = 3'd0;
  localparam I2cSlaveCmdMode_START = 3'd1;
  localparam I2cSlaveCmdMode_RESTART = 3'd2;
  localparam I2cSlaveCmdMode_STOP = 3'd3;
  localparam I2cSlaveCmdMode_DROP = 3'd4;
  localparam I2cSlaveCmdMode_DRIVE = 3'd5;
  localparam I2cSlaveCmdMode_READ = 3'd6;

  reg                 i2cCtrl_io_bus_rsp_valid;
  reg                 i2cCtrl_io_bus_rsp_enable;
  reg                 i2cCtrl_io_bus_rsp_data;
  wire                i2cCtrl_io_i2c_scl_write;
  wire                i2cCtrl_io_i2c_sda_write;
  wire       [2:0]    i2cCtrl_io_bus_cmd_kind;
  wire                i2cCtrl_io_bus_cmd_data;
  wire                i2cCtrl_io_internals_inFrame;
  wire                i2cCtrl_io_internals_sdaRead;
  wire                i2cCtrl_io_internals_sclRead;
  wire       [6:0]    _zz_bridge_addressFilter_hits_0;
  wire       [6:0]    _zz_bridge_addressFilter_hits_1;
  wire       [6:0]    _zz_bridge_addressFilter_hits_2;
  wire       [6:0]    _zz_bridge_addressFilter_hits_3;
  wire       [1:0]    _zz_when_I2cCtrl_l295;
  wire       [1:0]    _zz_when_I2cCtrl_l295_1;
  wire                _zz_when_I2cCtrl_l295_2;
  wire                _zz_when_I2cCtrl_l295_3;
  wire                _zz_when_I2cCtrl_l295_4;
  wire                _zz_when_I2cCtrl_l295_5;
  wire       [0:0]    _zz_bridge_masterLogic_start;
  wire       [0:0]    _zz_bridge_masterLogic_stop;
  wire       [0:0]    _zz_bridge_masterLogic_drop;
  wire       [11:0]   _zz_bridge_masterLogic_timer_value;
  wire       [0:0]    _zz_bridge_masterLogic_timer_value_1;
  wire       [2:0]    _zz_io_bus_rsp_data;
  wire       [2:0]    _zz_bridge_rxData_value;
  wire       [0:0]    _zz_bridge_interruptCtrl_start_flag;
  wire       [0:0]    _zz_bridge_interruptCtrl_restart_flag;
  wire       [0:0]    _zz_bridge_interruptCtrl_end_flag;
  wire       [0:0]    _zz_bridge_interruptCtrl_drop_flag;
  wire       [0:0]    _zz_bridge_interruptCtrl_filterGen_flag;
  wire       [0:0]    _zz_bridge_interruptCtrl_clockGen_flag;
  wire                readErrorFlag;
  wire                writeErrorFlag;
  wire                readHaltRequest;
  wire                writeHaltRequest;
  wire                writeJoinEvent_valid;
  wire                writeJoinEvent_ready;
  wire                writeJoinEvent_fire;
  wire       [1:0]    writeRsp_resp;
  wire                writeJoinEvent_translated_valid;
  wire                writeJoinEvent_translated_ready;
  wire       [1:0]    writeJoinEvent_translated_payload_resp;
  wire                _zz_writeJoinEvent_translated_ready;
  reg                 _zz_writeJoinEvent_translated_ready_1;
  wire                _zz_axil4Ctrl_bvalid;
  reg                 _zz_axil4Ctrl_bvalid_1;
  reg        [1:0]    _zz_axil4Ctrl_bresp;
  wire                when_Stream_l368;
  wire                readDataStage_valid;
  wire                readDataStage_ready;
  wire       [7:0]    readDataStage_payload_addr;
  wire       [2:0]    readDataStage_payload_prot;
  reg                 io_axil4Ctrl_ar_rValid;
  reg        [7:0]    io_axil4Ctrl_ar_rData_addr;
  reg        [2:0]    io_axil4Ctrl_ar_rData_prot;
  wire                when_Stream_l368_1;
  reg        [31:0]   readRsp_data;
  wire       [1:0]    readRsp_resp;
  wire                _zz_axil4Ctrl_rvalid;
  wire                writeOccur;
  wire                readOccur;
  wire                bridge_busCtrlWithOffset_readErrorFlag;
  wire                bridge_busCtrlWithOffset_writeErrorFlag;
  reg                 bridge_frameReset;
  reg                 bridge_i2cBuffer_sda_write;
  wire                bridge_i2cBuffer_sda_read;
  reg                 bridge_i2cBuffer_scl_write;
  wire                bridge_i2cBuffer_scl_read;
  reg                 bridge_rxData_event;
  reg                 bridge_rxData_listen;
  reg                 bridge_rxData_valid;
  reg        [7:0]    bridge_rxData_value;
  reg                 when_I2cCtrl_l213;
  reg                 bridge_rxAck_listen;
  reg                 bridge_rxAck_valid;
  reg                 bridge_rxAck_value;
  reg                 when_I2cCtrl_l226;
  reg                 bridge_txData_valid;
  reg                 bridge_txData_repeat;
  reg                 bridge_txData_enable;
  reg        [7:0]    bridge_txData_value;
  reg                 bridge_txData_forceDisable;
  reg                 bridge_txData_disableOnDataConflict;
  reg                 bridge_txAck_valid;
  reg                 bridge_txAck_repeat;
  reg                 bridge_txAck_enable;
  reg                 bridge_txAck_value;
  reg                 bridge_txAck_forceAck;
  reg                 bridge_txAck_disableOnDataConflict;
  reg                 bridge_addressFilter_addresses_0_enable;
  reg        [9:0]    bridge_addressFilter_addresses_0_value;
  reg                 bridge_addressFilter_addresses_0_is10Bit;
  reg                 bridge_addressFilter_addresses_1_enable;
  reg        [9:0]    bridge_addressFilter_addresses_1_value;
  reg                 bridge_addressFilter_addresses_1_is10Bit;
  reg                 bridge_addressFilter_addresses_2_enable;
  reg        [9:0]    bridge_addressFilter_addresses_2_value;
  reg                 bridge_addressFilter_addresses_2_is10Bit;
  reg                 bridge_addressFilter_addresses_3_enable;
  reg        [9:0]    bridge_addressFilter_addresses_3_value;
  reg                 bridge_addressFilter_addresses_3_is10Bit;
  reg        [1:0]    bridge_addressFilter_state;
  reg        [7:0]    bridge_addressFilter_byte0;
  reg        [7:0]    bridge_addressFilter_byte1;
  wire                bridge_addressFilter_byte0Is10Bit;
  wire                bridge_addressFilter_hits_0;
  wire                bridge_addressFilter_hits_1;
  wire                bridge_addressFilter_hits_2;
  wire                bridge_addressFilter_hits_3;
  wire                when_I2cCtrl_l295;
  wire                _zz_when_I2cCtrl_l299;
  reg                 _zz_when_I2cCtrl_l299_regNext;
  wire                when_I2cCtrl_l299;
  reg                 bridge_masterLogic_start;
  reg                 when_BusSlaveFactory_l377;
  wire                when_BusSlaveFactory_l379;
  reg                 bridge_masterLogic_stop;
  reg                 when_BusSlaveFactory_l377_1;
  wire                when_BusSlaveFactory_l379_1;
  reg                 bridge_masterLogic_drop;
  reg                 when_BusSlaveFactory_l377_2;
  wire                when_BusSlaveFactory_l379_2;
  reg        [11:0]   bridge_masterLogic_timer_value;
  reg        [11:0]   bridge_masterLogic_timer_tLow;
  reg        [11:0]   bridge_masterLogic_timer_tHigh;
  reg        [11:0]   bridge_masterLogic_timer_tBuf;
  wire                bridge_masterLogic_timer_done;
  wire                bridge_masterLogic_txReady;
  wire                bridge_masterLogic_fsm_wantExit;
  reg                 bridge_masterLogic_fsm_wantStart;
  wire                bridge_masterLogic_fsm_wantKill;
  reg                 bridge_masterLogic_fsm_inFrameLate;
  wire                when_I2cCtrl_l342;
  wire                when_I2cCtrl_l342_1;
  wire                bridge_masterLogic_fsm_isBusy;
  reg        [2:0]    bridge_dataCounter;
  reg                 bridge_inAckState;
  reg                 bridge_wasntAck;
  wire                when_I2cCtrl_l481;
  wire                when_I2cCtrl_l504;
  wire                when_I2cCtrl_l524;
  wire                when_I2cCtrl_l528;
  wire                when_I2cCtrl_l532;
  wire                when_I2cCtrl_l536;
  wire                when_I2cCtrl_l546;
  wire                when_I2cCtrl_l559;
  reg                 bridge_interruptCtrl_rxDataEnable;
  reg                 bridge_interruptCtrl_rxAckEnable;
  reg                 bridge_interruptCtrl_txDataEnable;
  reg                 bridge_interruptCtrl_txAckEnable;
  reg                 bridge_interruptCtrl_interrupt;
  wire                when_I2cCtrl_l593;
  reg                 bridge_interruptCtrl_start_enable;
  reg                 bridge_interruptCtrl_start_flag;
  wire                when_I2cCtrl_l593_1;
  reg                 when_BusSlaveFactory_l341;
  wire                when_BusSlaveFactory_l347;
  wire                when_I2cCtrl_l593_2;
  reg                 bridge_interruptCtrl_restart_enable;
  reg                 bridge_interruptCtrl_restart_flag;
  wire                when_I2cCtrl_l593_3;
  reg                 when_BusSlaveFactory_l341_1;
  wire                when_BusSlaveFactory_l347_1;
  wire                when_I2cCtrl_l593_4;
  reg                 bridge_interruptCtrl_end_enable;
  reg                 bridge_interruptCtrl_end_flag;
  wire                when_I2cCtrl_l593_5;
  reg                 when_BusSlaveFactory_l341_2;
  wire                when_BusSlaveFactory_l347_2;
  wire                when_I2cCtrl_l593_6;
  reg                 bridge_interruptCtrl_drop_enable;
  reg                 bridge_interruptCtrl_drop_flag;
  wire                when_I2cCtrl_l593_7;
  reg                 when_BusSlaveFactory_l341_3;
  wire                when_BusSlaveFactory_l347_3;
  wire                _zz_when_I2cCtrl_l593;
  reg                 _zz_when_I2cCtrl_l593_regNext;
  wire                when_I2cCtrl_l593_8;
  reg                 bridge_interruptCtrl_filterGen_enable;
  reg                 bridge_interruptCtrl_filterGen_flag;
  wire                when_I2cCtrl_l593_9;
  reg                 when_BusSlaveFactory_l341_4;
  wire                when_BusSlaveFactory_l347_4;
  reg                 bridge_masterLogic_fsm_isBusy_regNext;
  wire                when_I2cCtrl_l593_10;
  reg                 bridge_interruptCtrl_clockGen_enable;
  reg                 bridge_interruptCtrl_clockGen_flag;
  wire                when_I2cCtrl_l593_11;
  reg                 when_BusSlaveFactory_l341_5;
  wire                when_BusSlaveFactory_l347_5;
  reg        [9:0]    _zz_io_config_samplingClockDivider;
  reg        [19:0]   _zz_io_config_timeout;
  reg        [5:0]    _zz_io_config_tsuData;
  reg                 bridge_i2cBuffer_scl_write_regNext;
  reg                 bridge_i2cBuffer_sda_write_regNext;
  reg        [3:0]    bridge_masterLogic_fsm_stateReg;
  reg        [3:0]    bridge_masterLogic_fsm_stateNext;
  reg                 toplevel_i2cCtrl_io_internals_inFrame_regNext;
  wire                when_I2cCtrl_l345;
  wire                when_I2cCtrl_l347;
  wire                when_I2cCtrl_l360;
  wire                when_I2cCtrl_l386;
  wire                when_I2cCtrl_l390;
  wire                when_I2cCtrl_l410;
  wire                when_I2cCtrl_l421;
  wire                when_StateMachine_l253;
  wire                when_StateMachine_l253_1;
  wire                when_StateMachine_l253_2;
  wire                when_StateMachine_l253_3;
  wire                when_StateMachine_l253_4;
  wire                when_StateMachine_l253_5;
  wire                when_StateMachine_l253_6;
  wire                when_StateMachine_l253_7;
  wire                when_I2cCtrl_l333;
  `ifndef SYNTHESIS
  reg [55:0] bridge_masterLogic_fsm_stateReg_string;
  reg [55:0] bridge_masterLogic_fsm_stateNext_string;
  `endif


  assign _zz_bridge_addressFilter_hits_0 = (bridge_addressFilter_byte0 >>> 1);
  assign _zz_bridge_addressFilter_hits_1 = (bridge_addressFilter_byte0 >>> 1);
  assign _zz_bridge_addressFilter_hits_2 = (bridge_addressFilter_byte0 >>> 1);
  assign _zz_bridge_addressFilter_hits_3 = (bridge_addressFilter_byte0 >>> 1);
  assign _zz_bridge_masterLogic_start = 1'b1;
  assign _zz_bridge_masterLogic_stop = 1'b1;
  assign _zz_bridge_masterLogic_drop = 1'b1;
  assign _zz_bridge_masterLogic_timer_value_1 = (! bridge_masterLogic_timer_done);
  assign _zz_bridge_masterLogic_timer_value = {11'd0, _zz_bridge_masterLogic_timer_value_1};
  assign _zz_io_bus_rsp_data = (3'b111 - bridge_dataCounter);
  assign _zz_bridge_rxData_value = (3'b111 - bridge_dataCounter);
  assign _zz_bridge_interruptCtrl_start_flag = 1'b0;
  assign _zz_bridge_interruptCtrl_restart_flag = 1'b0;
  assign _zz_bridge_interruptCtrl_end_flag = 1'b0;
  assign _zz_bridge_interruptCtrl_drop_flag = 1'b0;
  assign _zz_bridge_interruptCtrl_filterGen_flag = 1'b0;
  assign _zz_bridge_interruptCtrl_clockGen_flag = 1'b0;
  assign _zz_when_I2cCtrl_l295 = bridge_addressFilter_byte0[2 : 1];
  assign _zz_when_I2cCtrl_l295_1 = bridge_addressFilter_addresses_2_value[9 : 8];
  assign _zz_when_I2cCtrl_l295_2 = (bridge_addressFilter_addresses_1_enable && bridge_addressFilter_addresses_1_is10Bit);
  assign _zz_when_I2cCtrl_l295_3 = (bridge_addressFilter_byte0[2 : 1] == bridge_addressFilter_addresses_1_value[9 : 8]);
  assign _zz_when_I2cCtrl_l295_4 = (bridge_addressFilter_addresses_0_enable && bridge_addressFilter_addresses_0_is10Bit);
  assign _zz_when_I2cCtrl_l295_5 = (bridge_addressFilter_byte0[2 : 1] == bridge_addressFilter_addresses_0_value[9 : 8]);
  I2cSlave i2cCtrl (
    .io_i2c_sda_write               (i2cCtrl_io_i2c_sda_write               ), //o
    .io_i2c_sda_read                (bridge_i2cBuffer_sda_read              ), //i
    .io_i2c_scl_write               (i2cCtrl_io_i2c_scl_write               ), //o
    .io_i2c_scl_read                (bridge_i2cBuffer_scl_read              ), //i
    .io_config_samplingClockDivider (_zz_io_config_samplingClockDivider[9:0]), //i
    .io_config_timeout              (_zz_io_config_timeout[19:0]            ), //i
    .io_config_tsuData              (_zz_io_config_tsuData[5:0]             ), //i
    .io_bus_cmd_kind                (i2cCtrl_io_bus_cmd_kind[2:0]           ), //o
    .io_bus_cmd_data                (i2cCtrl_io_bus_cmd_data                ), //o
    .io_bus_rsp_valid               (i2cCtrl_io_bus_rsp_valid               ), //i
    .io_bus_rsp_enable              (i2cCtrl_io_bus_rsp_enable              ), //i
    .io_bus_rsp_data                (i2cCtrl_io_bus_rsp_data                ), //i
    .io_internals_inFrame           (i2cCtrl_io_internals_inFrame           ), //o
    .io_internals_sdaRead           (i2cCtrl_io_internals_sdaRead           ), //o
    .io_internals_sclRead           (i2cCtrl_io_internals_sclRead           ), //o
    .clk                            (clk                                    ), //i
    .resetn                         (resetn                                 )  //i
  );
  initial begin
  `ifndef SYNTHESIS
    _zz_io_config_timeout = {1{$urandom}};
    _zz_io_config_tsuData = {1{$urandom}};
  `endif
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(bridge_masterLogic_fsm_stateReg)
      bridge_masterLogic_fsm_enumDef_BOOT : bridge_masterLogic_fsm_stateReg_string = "BOOT   ";
      bridge_masterLogic_fsm_enumDef_IDLE : bridge_masterLogic_fsm_stateReg_string = "IDLE   ";
      bridge_masterLogic_fsm_enumDef_START1 : bridge_masterLogic_fsm_stateReg_string = "START1 ";
      bridge_masterLogic_fsm_enumDef_START2 : bridge_masterLogic_fsm_stateReg_string = "START2 ";
      bridge_masterLogic_fsm_enumDef_LOW : bridge_masterLogic_fsm_stateReg_string = "LOW    ";
      bridge_masterLogic_fsm_enumDef_HIGH : bridge_masterLogic_fsm_stateReg_string = "HIGH   ";
      bridge_masterLogic_fsm_enumDef_RESTART : bridge_masterLogic_fsm_stateReg_string = "RESTART";
      bridge_masterLogic_fsm_enumDef_STOP1 : bridge_masterLogic_fsm_stateReg_string = "STOP1  ";
      bridge_masterLogic_fsm_enumDef_STOP2 : bridge_masterLogic_fsm_stateReg_string = "STOP2  ";
      bridge_masterLogic_fsm_enumDef_TBUF : bridge_masterLogic_fsm_stateReg_string = "TBUF   ";
      default : bridge_masterLogic_fsm_stateReg_string = "???????";
    endcase
  end
  always @(*) begin
    case(bridge_masterLogic_fsm_stateNext)
      bridge_masterLogic_fsm_enumDef_BOOT : bridge_masterLogic_fsm_stateNext_string = "BOOT   ";
      bridge_masterLogic_fsm_enumDef_IDLE : bridge_masterLogic_fsm_stateNext_string = "IDLE   ";
      bridge_masterLogic_fsm_enumDef_START1 : bridge_masterLogic_fsm_stateNext_string = "START1 ";
      bridge_masterLogic_fsm_enumDef_START2 : bridge_masterLogic_fsm_stateNext_string = "START2 ";
      bridge_masterLogic_fsm_enumDef_LOW : bridge_masterLogic_fsm_stateNext_string = "LOW    ";
      bridge_masterLogic_fsm_enumDef_HIGH : bridge_masterLogic_fsm_stateNext_string = "HIGH   ";
      bridge_masterLogic_fsm_enumDef_RESTART : bridge_masterLogic_fsm_stateNext_string = "RESTART";
      bridge_masterLogic_fsm_enumDef_STOP1 : bridge_masterLogic_fsm_stateNext_string = "STOP1  ";
      bridge_masterLogic_fsm_enumDef_STOP2 : bridge_masterLogic_fsm_stateNext_string = "STOP2  ";
      bridge_masterLogic_fsm_enumDef_TBUF : bridge_masterLogic_fsm_stateNext_string = "TBUF   ";
      default : bridge_masterLogic_fsm_stateNext_string = "???????";
    endcase
  end
  `endif

  assign readErrorFlag = 1'b0; // @[BusSlaveFactory.scala 105:29]
  assign writeErrorFlag = 1'b0; // @[BusSlaveFactory.scala 106:30]
  assign readHaltRequest = 1'b0; // @[AxiLite4SlaveFactory.scala 9:27]
  assign writeHaltRequest = 1'b0; // @[AxiLite4SlaveFactory.scala 10:28]
  assign writeJoinEvent_fire = (writeJoinEvent_valid && writeJoinEvent_ready); // @[BaseType.scala 305:24]
  assign writeJoinEvent_valid = (axil4Ctrl_awvalid && axil4Ctrl_wvalid); // @[Stream.scala 1043:17]
  assign axil4Ctrl_awready = writeJoinEvent_fire; // @[Stream.scala 1044:29]
  assign axil4Ctrl_wready = writeJoinEvent_fire; // @[Stream.scala 1044:29]
  assign writeJoinEvent_translated_valid = writeJoinEvent_valid; // @[Stream.scala 303:16]
  assign writeJoinEvent_ready = writeJoinEvent_translated_ready; // @[Stream.scala 304:16]
  assign writeJoinEvent_translated_payload_resp = writeRsp_resp; // @[Stream.scala 324:18]
  assign _zz_writeJoinEvent_translated_ready = (! writeHaltRequest); // @[BaseType.scala 299:24]
  assign writeJoinEvent_translated_ready = (_zz_writeJoinEvent_translated_ready_1 && _zz_writeJoinEvent_translated_ready); // @[Stream.scala 427:16]
  always @(*) begin
    _zz_writeJoinEvent_translated_ready_1 = axil4Ctrl_bready; // @[Stream.scala 367:16]
    if(when_Stream_l368) begin
      _zz_writeJoinEvent_translated_ready_1 = 1'b1; // @[Stream.scala 368:35]
    end
  end

  assign when_Stream_l368 = (! _zz_axil4Ctrl_bvalid); // @[BaseType.scala 299:24]
  assign _zz_axil4Ctrl_bvalid = _zz_axil4Ctrl_bvalid_1; // @[Stream.scala 370:19]
  assign axil4Ctrl_bvalid = _zz_axil4Ctrl_bvalid; // @[Stream.scala 294:16]
  assign axil4Ctrl_bresp = _zz_axil4Ctrl_bresp; // @[Stream.scala 296:18]
  always @(*) begin
    axil4Ctrl_arready = readDataStage_ready; // @[Stream.scala 367:16]
    if(when_Stream_l368_1) begin
      axil4Ctrl_arready = 1'b1; // @[Stream.scala 368:35]
    end
  end

  assign when_Stream_l368_1 = (! readDataStage_valid); // @[BaseType.scala 299:24]
  assign readDataStage_valid = io_axil4Ctrl_ar_rValid; // @[Stream.scala 370:19]
  assign readDataStage_payload_addr = io_axil4Ctrl_ar_rData_addr; // @[Stream.scala 371:21]
  assign readDataStage_payload_prot = io_axil4Ctrl_ar_rData_prot; // @[Stream.scala 371:21]
  assign _zz_axil4Ctrl_rvalid = (! readHaltRequest); // @[BaseType.scala 299:24]
  assign readDataStage_ready = (axil4Ctrl_rready && _zz_axil4Ctrl_rvalid); // @[Stream.scala 427:16]
  assign axil4Ctrl_rvalid = (readDataStage_valid && _zz_axil4Ctrl_rvalid); // @[Stream.scala 294:16]
  assign axil4Ctrl_rdata = readRsp_data; // @[Stream.scala 296:18]
  assign axil4Ctrl_rresp = readRsp_resp; // @[Stream.scala 296:18]
  assign writeRsp_resp = 2'b00; // @[AxiLite4.scala 110:35]
  assign readRsp_resp = 2'b00; // @[AxiLite4.scala 138:35]
  always @(*) begin
    readRsp_data = 32'h0; // @[AxiLite4SlaveFactory.scala 23:18]
    case(readDataStage_payload_addr)
      8'h08 : begin
        readRsp_data[8 : 8] = bridge_rxData_valid; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[7 : 0] = bridge_rxData_value; // @[BusSlaveFactory.scala 942:69]
      end
      8'h0c : begin
        readRsp_data[8 : 8] = bridge_rxAck_valid; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[0 : 0] = bridge_rxAck_value; // @[BusSlaveFactory.scala 942:69]
      end
      8'h0 : begin
        readRsp_data[8 : 8] = bridge_txData_valid; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[9 : 9] = bridge_txData_enable; // @[BusSlaveFactory.scala 942:69]
      end
      8'h04 : begin
        readRsp_data[8 : 8] = bridge_txAck_valid; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[9 : 9] = bridge_txAck_enable; // @[BusSlaveFactory.scala 942:69]
      end
      8'h80 : begin
        readRsp_data[3 : 0] = {bridge_addressFilter_hits_3,{bridge_addressFilter_hits_2,{bridge_addressFilter_hits_1,bridge_addressFilter_hits_0}}}; // @[BusSlaveFactory.scala 942:69]
      end
      8'h84 : begin
        readRsp_data[0 : 0] = bridge_addressFilter_byte0[0]; // @[BusSlaveFactory.scala 942:69]
      end
      8'h40 : begin
        readRsp_data[4 : 4] = bridge_masterLogic_start; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[5 : 5] = bridge_masterLogic_stop; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[6 : 6] = bridge_masterLogic_drop; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[0 : 0] = bridge_masterLogic_fsm_isBusy; // @[BusSlaveFactory.scala 942:69]
      end
      8'h20 : begin
        readRsp_data[0 : 0] = bridge_interruptCtrl_rxDataEnable; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[1 : 1] = bridge_interruptCtrl_rxAckEnable; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[2 : 2] = bridge_interruptCtrl_txDataEnable; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[3 : 3] = bridge_interruptCtrl_txAckEnable; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[4 : 4] = bridge_interruptCtrl_start_enable; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[5 : 5] = bridge_interruptCtrl_restart_enable; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[6 : 6] = bridge_interruptCtrl_end_enable; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[7 : 7] = bridge_interruptCtrl_drop_enable; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[17 : 17] = bridge_interruptCtrl_filterGen_enable; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[16 : 16] = bridge_interruptCtrl_clockGen_enable; // @[BusSlaveFactory.scala 942:69]
      end
      8'h24 : begin
        readRsp_data[4 : 4] = bridge_interruptCtrl_start_flag; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[5 : 5] = bridge_interruptCtrl_restart_flag; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[6 : 6] = bridge_interruptCtrl_end_flag; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[7 : 7] = bridge_interruptCtrl_drop_flag; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[17 : 17] = bridge_interruptCtrl_filterGen_flag; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[16 : 16] = bridge_interruptCtrl_clockGen_flag; // @[BusSlaveFactory.scala 942:69]
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready); // @[BaseType.scala 305:24]
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready); // @[BaseType.scala 305:24]
  assign bridge_busCtrlWithOffset_readErrorFlag = 1'b0; // @[BusSlaveFactory.scala 105:29]
  assign bridge_busCtrlWithOffset_writeErrorFlag = 1'b0; // @[BusSlaveFactory.scala 106:30]
  always @(*) begin
    bridge_frameReset = 1'b0; // @[I2cCtrl.scala 196:22]
    case(i2cCtrl_io_bus_cmd_kind)
      I2cSlaveCmdMode_START : begin
        bridge_frameReset = 1'b1; // @[I2cCtrl.scala 512:20]
      end
      I2cSlaveCmdMode_RESTART : begin
        bridge_frameReset = 1'b1; // @[I2cCtrl.scala 515:20]
      end
      I2cSlaveCmdMode_STOP : begin
        bridge_frameReset = 1'b1; // @[I2cCtrl.scala 518:20]
      end
      I2cSlaveCmdMode_DROP : begin
        bridge_frameReset = 1'b1; // @[I2cCtrl.scala 521:23]
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bridge_i2cBuffer_sda_write = i2cCtrl_io_i2c_sda_write; // @[I2cCtrl.scala 199:15]
    case(bridge_masterLogic_fsm_stateReg)
      bridge_masterLogic_fsm_enumDef_IDLE : begin
      end
      bridge_masterLogic_fsm_enumDef_START1 : begin
        bridge_i2cBuffer_sda_write = 1'b0; // @[I2cCtrl.scala 359:33]
      end
      bridge_masterLogic_fsm_enumDef_START2 : begin
        bridge_i2cBuffer_sda_write = 1'b0; // @[I2cCtrl.scala 371:33]
      end
      bridge_masterLogic_fsm_enumDef_LOW : begin
      end
      bridge_masterLogic_fsm_enumDef_HIGH : begin
      end
      bridge_masterLogic_fsm_enumDef_RESTART : begin
      end
      bridge_masterLogic_fsm_enumDef_STOP1 : begin
        bridge_i2cBuffer_sda_write = 1'b0; // @[I2cCtrl.scala 436:33]
      end
      bridge_masterLogic_fsm_enumDef_STOP2 : begin
        bridge_i2cBuffer_sda_write = 1'b0; // @[I2cCtrl.scala 448:33]
      end
      bridge_masterLogic_fsm_enumDef_TBUF : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bridge_i2cBuffer_scl_write = i2cCtrl_io_i2c_scl_write; // @[I2cCtrl.scala 199:15]
    case(bridge_masterLogic_fsm_stateReg)
      bridge_masterLogic_fsm_enumDef_IDLE : begin
      end
      bridge_masterLogic_fsm_enumDef_START1 : begin
      end
      bridge_masterLogic_fsm_enumDef_START2 : begin
        bridge_i2cBuffer_scl_write = 1'b0; // @[I2cCtrl.scala 372:33]
      end
      bridge_masterLogic_fsm_enumDef_LOW : begin
        if(bridge_masterLogic_timer_done) begin
          if(when_I2cCtrl_l386) begin
            bridge_i2cBuffer_scl_write = 1'b0; // @[I2cCtrl.scala 387:37]
          end else begin
            if(when_I2cCtrl_l390) begin
              bridge_i2cBuffer_scl_write = 1'b0; // @[I2cCtrl.scala 391:37]
            end
          end
        end else begin
          bridge_i2cBuffer_scl_write = 1'b0; // @[I2cCtrl.scala 400:35]
        end
      end
      bridge_masterLogic_fsm_enumDef_HIGH : begin
      end
      bridge_masterLogic_fsm_enumDef_RESTART : begin
      end
      bridge_masterLogic_fsm_enumDef_STOP1 : begin
        bridge_i2cBuffer_scl_write = 1'b0; // @[I2cCtrl.scala 435:33]
      end
      bridge_masterLogic_fsm_enumDef_STOP2 : begin
      end
      bridge_masterLogic_fsm_enumDef_TBUF : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    when_I2cCtrl_l213 = 1'b0; // @[BusSlaveFactory.scala 211:15]
    case(readDataStage_payload_addr)
      8'h08 : begin
        if(readOccur) begin
          when_I2cCtrl_l213 = 1'b1; // @[BusSlaveFactory.scala 212:26]
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    when_I2cCtrl_l226 = 1'b0; // @[BusSlaveFactory.scala 211:15]
    case(readDataStage_payload_addr)
      8'h0c : begin
        if(readOccur) begin
          when_I2cCtrl_l226 = 1'b1; // @[BusSlaveFactory.scala 212:26]
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bridge_txData_forceDisable = 1'b0; // @[I2cCtrl.scala 235:26]
    if(when_I2cCtrl_l559) begin
      bridge_txData_forceDisable = 1'b0; // @[I2cCtrl.scala 563:27]
    end
    case(bridge_masterLogic_fsm_stateReg)
      bridge_masterLogic_fsm_enumDef_IDLE : begin
      end
      bridge_masterLogic_fsm_enumDef_START1 : begin
      end
      bridge_masterLogic_fsm_enumDef_START2 : begin
      end
      bridge_masterLogic_fsm_enumDef_LOW : begin
        if(bridge_masterLogic_timer_done) begin
          if(when_I2cCtrl_l386) begin
            bridge_txData_forceDisable = 1'b1; // @[I2cCtrl.scala 388:37]
          end else begin
            if(when_I2cCtrl_l390) begin
              bridge_txData_forceDisable = 1'b1; // @[I2cCtrl.scala 392:37]
            end
          end
        end
      end
      bridge_masterLogic_fsm_enumDef_HIGH : begin
      end
      bridge_masterLogic_fsm_enumDef_RESTART : begin
      end
      bridge_masterLogic_fsm_enumDef_STOP1 : begin
      end
      bridge_masterLogic_fsm_enumDef_STOP2 : begin
      end
      bridge_masterLogic_fsm_enumDef_TBUF : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bridge_txAck_forceAck = 1'b0; // @[I2cCtrl.scala 249:22]
    if(when_I2cCtrl_l295) begin
      bridge_txAck_forceAck = 1'b1; // @[I2cCtrl.scala 295:22]
    end
  end

  assign bridge_addressFilter_byte0Is10Bit = (bridge_addressFilter_byte0[7 : 3] == 5'h1e); // @[BaseType.scala 305:24]
  assign bridge_addressFilter_hits_0 = (bridge_addressFilter_addresses_0_enable && ((! bridge_addressFilter_addresses_0_is10Bit) ? ((_zz_bridge_addressFilter_hits_0 == bridge_addressFilter_addresses_0_value[6 : 0]) && (bridge_addressFilter_state != 2'b00)) : (({bridge_addressFilter_byte0[2 : 1],bridge_addressFilter_byte1} == bridge_addressFilter_addresses_0_value) && (bridge_addressFilter_state == 2'b10)))); // @[BaseType.scala 305:24]
  assign bridge_addressFilter_hits_1 = (bridge_addressFilter_addresses_1_enable && ((! bridge_addressFilter_addresses_1_is10Bit) ? ((_zz_bridge_addressFilter_hits_1 == bridge_addressFilter_addresses_1_value[6 : 0]) && (bridge_addressFilter_state != 2'b00)) : (({bridge_addressFilter_byte0[2 : 1],bridge_addressFilter_byte1} == bridge_addressFilter_addresses_1_value) && (bridge_addressFilter_state == 2'b10)))); // @[BaseType.scala 305:24]
  assign bridge_addressFilter_hits_2 = (bridge_addressFilter_addresses_2_enable && ((! bridge_addressFilter_addresses_2_is10Bit) ? ((_zz_bridge_addressFilter_hits_2 == bridge_addressFilter_addresses_2_value[6 : 0]) && (bridge_addressFilter_state != 2'b00)) : (({bridge_addressFilter_byte0[2 : 1],bridge_addressFilter_byte1} == bridge_addressFilter_addresses_2_value) && (bridge_addressFilter_state == 2'b10)))); // @[BaseType.scala 305:24]
  assign bridge_addressFilter_hits_3 = (bridge_addressFilter_addresses_3_enable && ((! bridge_addressFilter_addresses_3_is10Bit) ? ((_zz_bridge_addressFilter_hits_3 == bridge_addressFilter_addresses_3_value[6 : 0]) && (bridge_addressFilter_state != 2'b00)) : (({bridge_addressFilter_byte0[2 : 1],bridge_addressFilter_byte1} == bridge_addressFilter_addresses_3_value) && (bridge_addressFilter_state == 2'b10)))); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l295 = ((bridge_addressFilter_byte0Is10Bit && (bridge_addressFilter_state == 2'b01)) && ({((bridge_addressFilter_addresses_3_enable && bridge_addressFilter_addresses_3_is10Bit) && (bridge_addressFilter_byte0[2 : 1] == bridge_addressFilter_addresses_3_value[9 : 8])),{((bridge_addressFilter_addresses_2_enable && bridge_addressFilter_addresses_2_is10Bit) && (_zz_when_I2cCtrl_l295 == _zz_when_I2cCtrl_l295_1)),{(_zz_when_I2cCtrl_l295_2 && _zz_when_I2cCtrl_l295_3),(_zz_when_I2cCtrl_l295_4 && _zz_when_I2cCtrl_l295_5)}}} != 4'b0000)); // @[BaseType.scala 305:24]
  assign _zz_when_I2cCtrl_l299 = ({bridge_addressFilter_hits_3,{bridge_addressFilter_hits_2,{bridge_addressFilter_hits_1,bridge_addressFilter_hits_0}}} != 4'b0000); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l299 = (_zz_when_I2cCtrl_l299 && (! _zz_when_I2cCtrl_l299_regNext)); // @[BaseType.scala 305:24]
  always @(*) begin
    when_BusSlaveFactory_l377 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h40 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l377 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l379 = axil4Ctrl_wdata[4]; // @[BaseType.scala 305:24]
  always @(*) begin
    when_BusSlaveFactory_l377_1 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h40 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l377_1 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l379_1 = axil4Ctrl_wdata[5]; // @[BaseType.scala 305:24]
  always @(*) begin
    when_BusSlaveFactory_l377_2 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h40 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l377_2 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l379_2 = axil4Ctrl_wdata[6]; // @[BaseType.scala 305:24]
  assign bridge_masterLogic_timer_done = (bridge_masterLogic_timer_value == 12'h0); // @[BaseType.scala 305:24]
  assign bridge_masterLogic_fsm_wantExit = 1'b0; // @[StateMachine.scala 151:28]
  always @(*) begin
    bridge_masterLogic_fsm_wantStart = 1'b0; // @[StateMachine.scala 152:19]
    case(bridge_masterLogic_fsm_stateReg)
      bridge_masterLogic_fsm_enumDef_IDLE : begin
      end
      bridge_masterLogic_fsm_enumDef_START1 : begin
      end
      bridge_masterLogic_fsm_enumDef_START2 : begin
      end
      bridge_masterLogic_fsm_enumDef_LOW : begin
      end
      bridge_masterLogic_fsm_enumDef_HIGH : begin
      end
      bridge_masterLogic_fsm_enumDef_RESTART : begin
      end
      bridge_masterLogic_fsm_enumDef_STOP1 : begin
      end
      bridge_masterLogic_fsm_enumDef_STOP2 : begin
      end
      bridge_masterLogic_fsm_enumDef_TBUF : begin
      end
      default : begin
        bridge_masterLogic_fsm_wantStart = 1'b1; // @[StateMachine.scala 362:15]
      end
    endcase
  end

  assign bridge_masterLogic_fsm_wantKill = 1'b0; // @[StateMachine.scala 153:18]
  assign when_I2cCtrl_l342 = (! i2cCtrl_io_internals_sclRead); // @[BaseType.scala 299:24]
  assign when_I2cCtrl_l342_1 = (! i2cCtrl_io_internals_inFrame); // @[BaseType.scala 299:24]
  assign bridge_masterLogic_fsm_isBusy = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_IDLE)) && (! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_TBUF))); // @[BaseType.scala 305:24]
  assign bridge_masterLogic_txReady = (bridge_inAckState ? bridge_txAck_valid : bridge_txData_valid); // @[I2cCtrl.scala 479:39]
  assign when_I2cCtrl_l481 = (! bridge_inAckState); // @[BaseType.scala 299:24]
  always @(*) begin
    if(when_I2cCtrl_l481) begin
      i2cCtrl_io_bus_rsp_valid = ((bridge_txData_valid && (! (bridge_rxData_valid && bridge_rxData_listen))) && (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_DRIVE)); // @[I2cCtrl.scala 482:22]
      if(bridge_txData_forceDisable) begin
        i2cCtrl_io_bus_rsp_valid = 1'b1; // @[I2cCtrl.scala 487:23]
      end
    end else begin
      i2cCtrl_io_bus_rsp_valid = ((bridge_txAck_valid && (! (bridge_rxAck_valid && bridge_rxAck_listen))) && (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_DRIVE)); // @[I2cCtrl.scala 491:22]
      if(bridge_txAck_forceAck) begin
        i2cCtrl_io_bus_rsp_valid = 1'b1; // @[I2cCtrl.scala 495:24]
      end
    end
    if(when_I2cCtrl_l504) begin
      i2cCtrl_io_bus_rsp_valid = (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_DRIVE); // @[I2cCtrl.scala 505:22]
    end
  end

  always @(*) begin
    if(when_I2cCtrl_l481) begin
      i2cCtrl_io_bus_rsp_enable = bridge_txData_enable; // @[I2cCtrl.scala 483:22]
      if(bridge_txData_forceDisable) begin
        i2cCtrl_io_bus_rsp_enable = 1'b0; // @[I2cCtrl.scala 488:24]
      end
    end else begin
      i2cCtrl_io_bus_rsp_enable = bridge_txAck_enable; // @[I2cCtrl.scala 492:22]
      if(bridge_txAck_forceAck) begin
        i2cCtrl_io_bus_rsp_enable = 1'b1; // @[I2cCtrl.scala 496:24]
      end
    end
    if(when_I2cCtrl_l504) begin
      i2cCtrl_io_bus_rsp_enable = 1'b0; // @[I2cCtrl.scala 506:22]
    end
  end

  always @(*) begin
    if(when_I2cCtrl_l481) begin
      i2cCtrl_io_bus_rsp_data = bridge_txData_value[_zz_io_bus_rsp_data]; // @[I2cCtrl.scala 484:22]
    end else begin
      i2cCtrl_io_bus_rsp_data = bridge_txAck_value; // @[I2cCtrl.scala 493:22]
      if(bridge_txAck_forceAck) begin
        i2cCtrl_io_bus_rsp_data = 1'b0; // @[I2cCtrl.scala 497:24]
      end
    end
  end

  assign when_I2cCtrl_l504 = (bridge_wasntAck && (! bridge_masterLogic_fsm_isBusy)); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l524 = (! bridge_inAckState); // @[BaseType.scala 299:24]
  assign when_I2cCtrl_l528 = (i2cCtrl_io_bus_rsp_data != i2cCtrl_io_bus_cmd_data); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l532 = (bridge_dataCounter == 3'b111); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l536 = (bridge_txData_valid && (! bridge_txData_repeat)); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l546 = (bridge_txAck_valid && (! bridge_txAck_repeat)); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l559 = ((i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_STOP) || (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_DROP)); // @[BaseType.scala 305:24]
  always @(*) begin
    bridge_interruptCtrl_interrupt = ((((bridge_interruptCtrl_rxDataEnable && bridge_rxData_valid) || (bridge_interruptCtrl_rxAckEnable && bridge_rxAck_valid)) || (bridge_interruptCtrl_txDataEnable && (! bridge_txData_valid))) || (bridge_interruptCtrl_txAckEnable && (! bridge_txAck_valid))); // @[BaseType.scala 305:24]
    if(bridge_interruptCtrl_start_flag) begin
      bridge_interruptCtrl_interrupt = 1'b1; // @[I2cCtrl.scala 596:26]
    end
    if(bridge_interruptCtrl_restart_flag) begin
      bridge_interruptCtrl_interrupt = 1'b1; // @[I2cCtrl.scala 596:26]
    end
    if(bridge_interruptCtrl_end_flag) begin
      bridge_interruptCtrl_interrupt = 1'b1; // @[I2cCtrl.scala 596:26]
    end
    if(bridge_interruptCtrl_drop_flag) begin
      bridge_interruptCtrl_interrupt = 1'b1; // @[I2cCtrl.scala 596:26]
    end
    if(bridge_interruptCtrl_filterGen_flag) begin
      bridge_interruptCtrl_interrupt = 1'b1; // @[I2cCtrl.scala 596:26]
    end
    if(bridge_interruptCtrl_clockGen_flag) begin
      bridge_interruptCtrl_interrupt = 1'b1; // @[I2cCtrl.scala 596:26]
    end
  end

  assign when_I2cCtrl_l593 = (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_START); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l593_1 = (! bridge_interruptCtrl_start_enable); // @[BaseType.scala 299:24]
  always @(*) begin
    when_BusSlaveFactory_l341 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h24 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l341 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l347 = axil4Ctrl_wdata[4]; // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l593_2 = (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_RESTART); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l593_3 = (! bridge_interruptCtrl_restart_enable); // @[BaseType.scala 299:24]
  always @(*) begin
    when_BusSlaveFactory_l341_1 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h24 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l341_1 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l347_1 = axil4Ctrl_wdata[5]; // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l593_4 = (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_STOP); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l593_5 = (! bridge_interruptCtrl_end_enable); // @[BaseType.scala 299:24]
  always @(*) begin
    when_BusSlaveFactory_l341_2 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h24 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l341_2 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l347_2 = axil4Ctrl_wdata[6]; // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l593_6 = (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_DROP); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l593_7 = (! bridge_interruptCtrl_drop_enable); // @[BaseType.scala 299:24]
  always @(*) begin
    when_BusSlaveFactory_l341_3 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h24 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l341_3 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l347_3 = axil4Ctrl_wdata[7]; // @[BaseType.scala 305:24]
  assign _zz_when_I2cCtrl_l593 = ({bridge_addressFilter_hits_3,{bridge_addressFilter_hits_2,{bridge_addressFilter_hits_1,bridge_addressFilter_hits_0}}} != 4'b0000); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l593_8 = (_zz_when_I2cCtrl_l593 && (! _zz_when_I2cCtrl_l593_regNext)); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l593_9 = (! bridge_interruptCtrl_filterGen_enable); // @[BaseType.scala 299:24]
  always @(*) begin
    when_BusSlaveFactory_l341_4 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h24 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l341_4 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l347_4 = axil4Ctrl_wdata[17]; // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l593_10 = (bridge_masterLogic_fsm_isBusy && (! bridge_masterLogic_fsm_isBusy_regNext)); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l593_11 = (! bridge_interruptCtrl_clockGen_enable); // @[BaseType.scala 299:24]
  always @(*) begin
    when_BusSlaveFactory_l341_5 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h24 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l341_5 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l347_5 = axil4Ctrl_wdata[16]; // @[BaseType.scala 305:24]
  assign io_i2c_scl_write = bridge_i2cBuffer_scl_write_regNext; // @[AxiLite4I2cCtrl.scala 44:22]
  assign io_i2c_sda_write = bridge_i2cBuffer_sda_write_regNext; // @[AxiLite4I2cCtrl.scala 45:22]
  assign bridge_i2cBuffer_scl_read = io_i2c_scl_read; // @[AxiLite4I2cCtrl.scala 46:31]
  assign bridge_i2cBuffer_sda_read = io_i2c_sda_read; // @[AxiLite4I2cCtrl.scala 47:31]
  assign io_interrupt = bridge_interruptCtrl_interrupt; // @[AxiLite4I2cCtrl.scala 49:18]
  always @(*) begin
    bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_stateReg; // @[StateMachine.scala 217:17]
    case(bridge_masterLogic_fsm_stateReg)
      bridge_masterLogic_fsm_enumDef_IDLE : begin
        if(when_I2cCtrl_l345) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_TBUF; // @[Enum.scala 148:67]
        end else begin
          if(when_I2cCtrl_l347) begin
            bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_START1; // @[Enum.scala 148:67]
          end
        end
      end
      bridge_masterLogic_fsm_enumDef_START1 : begin
        if(when_I2cCtrl_l360) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_START2; // @[Enum.scala 148:67]
        end
      end
      bridge_masterLogic_fsm_enumDef_START2 : begin
        if(bridge_masterLogic_timer_done) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_LOW; // @[Enum.scala 148:67]
        end
      end
      bridge_masterLogic_fsm_enumDef_LOW : begin
        if(bridge_masterLogic_timer_done) begin
          if(when_I2cCtrl_l386) begin
            bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_STOP1; // @[Enum.scala 148:67]
          end else begin
            if(when_I2cCtrl_l390) begin
              bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_RESTART; // @[Enum.scala 148:67]
            end else begin
              if(i2cCtrl_io_internals_sclRead) begin
                bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_HIGH; // @[Enum.scala 148:67]
              end
            end
          end
        end
      end
      bridge_masterLogic_fsm_enumDef_HIGH : begin
        if(when_I2cCtrl_l410) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_LOW; // @[Enum.scala 148:67]
        end
      end
      bridge_masterLogic_fsm_enumDef_RESTART : begin
        if(bridge_masterLogic_timer_done) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_START1; // @[Enum.scala 148:67]
        end
      end
      bridge_masterLogic_fsm_enumDef_STOP1 : begin
        if(bridge_masterLogic_timer_done) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_STOP2; // @[Enum.scala 148:67]
        end
      end
      bridge_masterLogic_fsm_enumDef_STOP2 : begin
        if(bridge_masterLogic_timer_done) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_TBUF; // @[Enum.scala 148:67]
        end
      end
      bridge_masterLogic_fsm_enumDef_TBUF : begin
        if(bridge_masterLogic_timer_done) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_IDLE; // @[Enum.scala 148:67]
        end
      end
      default : begin
      end
    endcase
    if(when_I2cCtrl_l333) begin
      bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_TBUF; // @[Enum.scala 148:67]
    end
    if(bridge_masterLogic_fsm_wantStart) begin
      bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_IDLE; // @[Enum.scala 148:67]
    end
    if(bridge_masterLogic_fsm_wantKill) begin
      bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_BOOT; // @[Enum.scala 148:67]
    end
  end

  assign when_I2cCtrl_l345 = ((! i2cCtrl_io_internals_inFrame) && toplevel_i2cCtrl_io_internals_inFrame_regNext); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l347 = (bridge_masterLogic_start && (! bridge_masterLogic_fsm_inFrameLate)); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l360 = (bridge_masterLogic_timer_done || (! i2cCtrl_io_internals_sclRead)); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l386 = (bridge_masterLogic_stop && (! bridge_inAckState)); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l390 = (bridge_masterLogic_start && (! bridge_inAckState)); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l410 = (bridge_masterLogic_timer_done || (! i2cCtrl_io_internals_sclRead)); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l421 = (! i2cCtrl_io_internals_sclRead); // @[BaseType.scala 299:24]
  assign when_StateMachine_l253 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_START1)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_START1)); // @[BaseType.scala 305:24]
  assign when_StateMachine_l253_1 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_START2)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_START2)); // @[BaseType.scala 305:24]
  assign when_StateMachine_l253_2 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_LOW)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_LOW)); // @[BaseType.scala 305:24]
  assign when_StateMachine_l253_3 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_HIGH)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_HIGH)); // @[BaseType.scala 305:24]
  assign when_StateMachine_l253_4 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_RESTART)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_RESTART)); // @[BaseType.scala 305:24]
  assign when_StateMachine_l253_5 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_STOP1)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_STOP1)); // @[BaseType.scala 305:24]
  assign when_StateMachine_l253_6 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_STOP2)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_STOP2)); // @[BaseType.scala 305:24]
  assign when_StateMachine_l253_7 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_TBUF)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_TBUF)); // @[BaseType.scala 305:24]
  assign when_I2cCtrl_l333 = (bridge_masterLogic_drop || ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_IDLE)) && (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_DROP))); // @[BaseType.scala 305:24]
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_1 <= 1'b0; // @[Data.scala 400:33]
      io_axil4Ctrl_ar_rValid <= 1'b0; // @[Data.scala 400:33]
      bridge_rxData_event <= 1'b0; // @[Data.scala 400:33]
      bridge_rxData_listen <= 1'b0; // @[Data.scala 400:33]
      bridge_rxData_valid <= 1'b0; // @[Data.scala 400:33]
      bridge_rxAck_listen <= 1'b0; // @[Data.scala 400:33]
      bridge_rxAck_valid <= 1'b0; // @[Data.scala 400:33]
      bridge_txData_valid <= 1'b1; // @[Data.scala 400:33]
      bridge_txData_repeat <= 1'b1; // @[Data.scala 400:33]
      bridge_txData_enable <= 1'b0; // @[Data.scala 400:33]
      bridge_txAck_valid <= 1'b1; // @[Data.scala 400:33]
      bridge_txAck_repeat <= 1'b1; // @[Data.scala 400:33]
      bridge_txAck_enable <= 1'b0; // @[Data.scala 400:33]
      bridge_addressFilter_addresses_0_enable <= 1'b0; // @[Data.scala 400:33]
      bridge_addressFilter_addresses_1_enable <= 1'b0; // @[Data.scala 400:33]
      bridge_addressFilter_addresses_2_enable <= 1'b0; // @[Data.scala 400:33]
      bridge_addressFilter_addresses_3_enable <= 1'b0; // @[Data.scala 400:33]
      bridge_addressFilter_state <= 2'b00; // @[Data.scala 400:33]
      bridge_masterLogic_start <= 1'b0; // @[Data.scala 400:33]
      bridge_masterLogic_stop <= 1'b0; // @[Data.scala 400:33]
      bridge_masterLogic_drop <= 1'b0; // @[Data.scala 400:33]
      bridge_dataCounter <= 3'b000; // @[Data.scala 400:33]
      bridge_inAckState <= 1'b0; // @[Data.scala 400:33]
      bridge_wasntAck <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_rxDataEnable <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_rxAckEnable <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_txDataEnable <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_txAckEnable <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_start_enable <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_start_flag <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_restart_enable <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_restart_flag <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_end_enable <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_end_flag <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_drop_enable <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_drop_flag <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_filterGen_enable <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_filterGen_flag <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_clockGen_enable <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_clockGen_flag <= 1'b0; // @[Data.scala 400:33]
      _zz_io_config_samplingClockDivider <= 10'h0; // @[Data.scala 400:33]
      bridge_i2cBuffer_scl_write_regNext <= 1'b1; // @[Data.scala 400:33]
      bridge_i2cBuffer_sda_write_regNext <= 1'b1; // @[Data.scala 400:33]
      bridge_masterLogic_fsm_stateReg <= bridge_masterLogic_fsm_enumDef_BOOT; // @[Data.scala 400:33]
    end else begin
      if(_zz_writeJoinEvent_translated_ready_1) begin
        _zz_axil4Ctrl_bvalid_1 <= (writeJoinEvent_translated_valid && _zz_writeJoinEvent_translated_ready); // @[Stream.scala 361:29]
      end
      if(axil4Ctrl_arready) begin
        io_axil4Ctrl_ar_rValid <= axil4Ctrl_arvalid; // @[Stream.scala 361:29]
      end
      bridge_rxData_event <= 1'b0; // @[Reg.scala 39:30]
      if(when_I2cCtrl_l213) begin
        bridge_rxData_valid <= 1'b0; // @[I2cCtrl.scala 213:13]
      end
      if(when_I2cCtrl_l226) begin
        bridge_rxAck_valid <= 1'b0; // @[I2cCtrl.scala 226:13]
      end
      if(bridge_rxData_event) begin
        case(bridge_addressFilter_state)
          2'b00 : begin
            bridge_addressFilter_state <= 2'b01; // @[I2cCtrl.scala 281:19]
          end
          2'b01 : begin
            bridge_addressFilter_state <= 2'b10; // @[I2cCtrl.scala 285:19]
          end
          default : begin
          end
        endcase
      end
      if(bridge_frameReset) begin
        bridge_addressFilter_state <= 2'b00; // @[I2cCtrl.scala 291:15]
      end
      if(when_I2cCtrl_l299) begin
        bridge_txAck_valid <= 1'b0; // @[I2cCtrl.scala 300:21]
      end
      if(when_BusSlaveFactory_l377) begin
        if(when_BusSlaveFactory_l379) begin
          bridge_masterLogic_start <= _zz_bridge_masterLogic_start[0]; // @[Bool.scala 189:10]
        end
      end
      if(when_BusSlaveFactory_l377_1) begin
        if(when_BusSlaveFactory_l379_1) begin
          bridge_masterLogic_stop <= _zz_bridge_masterLogic_stop[0]; // @[Bool.scala 189:10]
        end
      end
      if(when_BusSlaveFactory_l377_2) begin
        if(when_BusSlaveFactory_l379_2) begin
          bridge_masterLogic_drop <= _zz_bridge_masterLogic_drop[0]; // @[Bool.scala 189:10]
        end
      end
      case(i2cCtrl_io_bus_cmd_kind)
        I2cSlaveCmdMode_READ : begin
          if(when_I2cCtrl_l524) begin
            bridge_dataCounter <= (bridge_dataCounter + 3'b001); // @[I2cCtrl.scala 526:23]
            if(when_I2cCtrl_l528) begin
              if(bridge_txData_disableOnDataConflict) begin
                bridge_txData_enable <= 1'b0; // @[I2cCtrl.scala 529:27]
              end
              if(bridge_txAck_disableOnDataConflict) begin
                bridge_txAck_enable <= 1'b0; // @[I2cCtrl.scala 530:27]
              end
            end
            if(when_I2cCtrl_l532) begin
              if(bridge_rxData_listen) begin
                bridge_rxData_valid <= 1'b1; // @[I2cCtrl.scala 533:26]
              end
              bridge_rxData_event <= 1'b1; // @[I2cCtrl.scala 534:26]
              bridge_inAckState <= 1'b1; // @[I2cCtrl.scala 535:26]
              if(when_I2cCtrl_l536) begin
                bridge_txData_valid <= 1'b0; // @[I2cCtrl.scala 537:28]
              end
            end
          end else begin
            if(bridge_rxAck_listen) begin
              bridge_rxAck_valid <= 1'b1; // @[I2cCtrl.scala 541:23]
            end
            bridge_inAckState <= 1'b0; // @[I2cCtrl.scala 543:23]
            bridge_wasntAck <= i2cCtrl_io_bus_cmd_data; // @[I2cCtrl.scala 544:23]
            if(when_I2cCtrl_l546) begin
              bridge_txAck_valid <= 1'b0; // @[I2cCtrl.scala 547:25]
            end
          end
        end
        default : begin
        end
      endcase
      if(bridge_frameReset) begin
        bridge_inAckState <= 1'b0; // @[I2cCtrl.scala 554:19]
        bridge_dataCounter <= 3'b000; // @[I2cCtrl.scala 555:19]
        bridge_wasntAck <= 1'b0; // @[I2cCtrl.scala 556:19]
      end
      if(when_I2cCtrl_l559) begin
        bridge_txData_valid <= 1'b1; // @[I2cCtrl.scala 560:21]
        bridge_txData_enable <= 1'b0; // @[I2cCtrl.scala 561:21]
        bridge_txData_repeat <= 1'b1; // @[I2cCtrl.scala 562:21]
        bridge_txAck_valid <= 1'b1; // @[I2cCtrl.scala 566:21]
        bridge_txAck_enable <= 1'b0; // @[I2cCtrl.scala 567:21]
        bridge_txAck_repeat <= 1'b1; // @[I2cCtrl.scala 568:21]
        bridge_rxData_listen <= 1'b0; // @[I2cCtrl.scala 572:21]
        bridge_rxAck_listen <= 1'b0; // @[I2cCtrl.scala 573:21]
      end
      if(when_I2cCtrl_l593) begin
        bridge_interruptCtrl_start_flag <= 1'b1; // @[I2cCtrl.scala 593:60]
      end
      if(when_I2cCtrl_l593_1) begin
        bridge_interruptCtrl_start_flag <= 1'b0; // @[I2cCtrl.scala 593:74]
      end
      if(when_BusSlaveFactory_l341) begin
        if(when_BusSlaveFactory_l347) begin
          bridge_interruptCtrl_start_flag <= _zz_bridge_interruptCtrl_start_flag[0]; // @[Bool.scala 189:10]
        end
      end
      if(when_I2cCtrl_l593_2) begin
        bridge_interruptCtrl_restart_flag <= 1'b1; // @[I2cCtrl.scala 593:60]
      end
      if(when_I2cCtrl_l593_3) begin
        bridge_interruptCtrl_restart_flag <= 1'b0; // @[I2cCtrl.scala 593:74]
      end
      if(when_BusSlaveFactory_l341_1) begin
        if(when_BusSlaveFactory_l347_1) begin
          bridge_interruptCtrl_restart_flag <= _zz_bridge_interruptCtrl_restart_flag[0]; // @[Bool.scala 189:10]
        end
      end
      if(when_I2cCtrl_l593_4) begin
        bridge_interruptCtrl_end_flag <= 1'b1; // @[I2cCtrl.scala 593:60]
      end
      if(when_I2cCtrl_l593_5) begin
        bridge_interruptCtrl_end_flag <= 1'b0; // @[I2cCtrl.scala 593:74]
      end
      if(when_BusSlaveFactory_l341_2) begin
        if(when_BusSlaveFactory_l347_2) begin
          bridge_interruptCtrl_end_flag <= _zz_bridge_interruptCtrl_end_flag[0]; // @[Bool.scala 189:10]
        end
      end
      if(when_I2cCtrl_l593_6) begin
        bridge_interruptCtrl_drop_flag <= 1'b1; // @[I2cCtrl.scala 593:60]
      end
      if(when_I2cCtrl_l593_7) begin
        bridge_interruptCtrl_drop_flag <= 1'b0; // @[I2cCtrl.scala 593:74]
      end
      if(when_BusSlaveFactory_l341_3) begin
        if(when_BusSlaveFactory_l347_3) begin
          bridge_interruptCtrl_drop_flag <= _zz_bridge_interruptCtrl_drop_flag[0]; // @[Bool.scala 189:10]
        end
      end
      if(when_I2cCtrl_l593_8) begin
        bridge_interruptCtrl_filterGen_flag <= 1'b1; // @[I2cCtrl.scala 593:60]
      end
      if(when_I2cCtrl_l593_9) begin
        bridge_interruptCtrl_filterGen_flag <= 1'b0; // @[I2cCtrl.scala 593:74]
      end
      if(when_BusSlaveFactory_l341_4) begin
        if(when_BusSlaveFactory_l347_4) begin
          bridge_interruptCtrl_filterGen_flag <= _zz_bridge_interruptCtrl_filterGen_flag[0]; // @[Bool.scala 189:10]
        end
      end
      if(when_I2cCtrl_l593_10) begin
        bridge_interruptCtrl_clockGen_flag <= 1'b1; // @[I2cCtrl.scala 593:60]
      end
      if(when_I2cCtrl_l593_11) begin
        bridge_interruptCtrl_clockGen_flag <= 1'b0; // @[I2cCtrl.scala 593:74]
      end
      if(when_BusSlaveFactory_l341_5) begin
        if(when_BusSlaveFactory_l347_5) begin
          bridge_interruptCtrl_clockGen_flag <= _zz_bridge_interruptCtrl_clockGen_flag[0]; // @[Bool.scala 189:10]
        end
      end
      bridge_i2cBuffer_scl_write_regNext <= bridge_i2cBuffer_scl_write; // @[Reg.scala 39:30]
      bridge_i2cBuffer_sda_write_regNext <= bridge_i2cBuffer_sda_write; // @[Reg.scala 39:30]
      case(axil4Ctrl_awaddr)
        8'h08 : begin
          if(writeOccur) begin
            bridge_rxData_listen <= axil4Ctrl_wdata[9]; // @[Bool.scala 189:10]
          end
        end
        8'h0c : begin
          if(writeOccur) begin
            bridge_rxAck_listen <= axil4Ctrl_wdata[9]; // @[Bool.scala 189:10]
          end
        end
        8'h0 : begin
          if(writeOccur) begin
            bridge_txData_repeat <= axil4Ctrl_wdata[10]; // @[Bool.scala 189:10]
            bridge_txData_valid <= axil4Ctrl_wdata[8]; // @[Bool.scala 189:10]
            bridge_txData_enable <= axil4Ctrl_wdata[9]; // @[Bool.scala 189:10]
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            bridge_txAck_repeat <= axil4Ctrl_wdata[10]; // @[Bool.scala 189:10]
            bridge_txAck_valid <= axil4Ctrl_wdata[8]; // @[Bool.scala 189:10]
            bridge_txAck_enable <= axil4Ctrl_wdata[9]; // @[Bool.scala 189:10]
          end
        end
        8'h88 : begin
          if(writeOccur) begin
            bridge_addressFilter_addresses_0_enable <= axil4Ctrl_wdata[15]; // @[Bool.scala 189:10]
          end
        end
        8'h8c : begin
          if(writeOccur) begin
            bridge_addressFilter_addresses_1_enable <= axil4Ctrl_wdata[15]; // @[Bool.scala 189:10]
          end
        end
        8'h90 : begin
          if(writeOccur) begin
            bridge_addressFilter_addresses_2_enable <= axil4Ctrl_wdata[15]; // @[Bool.scala 189:10]
          end
        end
        8'h94 : begin
          if(writeOccur) begin
            bridge_addressFilter_addresses_3_enable <= axil4Ctrl_wdata[15]; // @[Bool.scala 189:10]
          end
        end
        8'h20 : begin
          if(writeOccur) begin
            bridge_interruptCtrl_rxDataEnable <= axil4Ctrl_wdata[0]; // @[Bool.scala 189:10]
            bridge_interruptCtrl_rxAckEnable <= axil4Ctrl_wdata[1]; // @[Bool.scala 189:10]
            bridge_interruptCtrl_txDataEnable <= axil4Ctrl_wdata[2]; // @[Bool.scala 189:10]
            bridge_interruptCtrl_txAckEnable <= axil4Ctrl_wdata[3]; // @[Bool.scala 189:10]
            bridge_interruptCtrl_start_enable <= axil4Ctrl_wdata[4]; // @[Bool.scala 189:10]
            bridge_interruptCtrl_restart_enable <= axil4Ctrl_wdata[5]; // @[Bool.scala 189:10]
            bridge_interruptCtrl_end_enable <= axil4Ctrl_wdata[6]; // @[Bool.scala 189:10]
            bridge_interruptCtrl_drop_enable <= axil4Ctrl_wdata[7]; // @[Bool.scala 189:10]
            bridge_interruptCtrl_filterGen_enable <= axil4Ctrl_wdata[17]; // @[Bool.scala 189:10]
            bridge_interruptCtrl_clockGen_enable <= axil4Ctrl_wdata[16]; // @[Bool.scala 189:10]
          end
        end
        8'h28 : begin
          if(writeOccur) begin
            _zz_io_config_samplingClockDivider <= axil4Ctrl_wdata[9 : 0]; // @[UInt.scala 381:56]
          end
        end
        default : begin
        end
      endcase
      bridge_masterLogic_fsm_stateReg <= bridge_masterLogic_fsm_stateNext; // @[StateMachine.scala 212:14]
      case(bridge_masterLogic_fsm_stateReg)
        bridge_masterLogic_fsm_enumDef_IDLE : begin
          if(!when_I2cCtrl_l345) begin
            if(when_I2cCtrl_l347) begin
              bridge_txData_valid <= 1'b0; // @[I2cCtrl.scala 348:28]
            end
          end
        end
        bridge_masterLogic_fsm_enumDef_START1 : begin
        end
        bridge_masterLogic_fsm_enumDef_START2 : begin
          if(bridge_masterLogic_timer_done) begin
            bridge_masterLogic_start <= 1'b0; // @[I2cCtrl.scala 374:21]
          end
        end
        bridge_masterLogic_fsm_enumDef_LOW : begin
        end
        bridge_masterLogic_fsm_enumDef_HIGH : begin
        end
        bridge_masterLogic_fsm_enumDef_RESTART : begin
        end
        bridge_masterLogic_fsm_enumDef_STOP1 : begin
        end
        bridge_masterLogic_fsm_enumDef_STOP2 : begin
          if(bridge_masterLogic_timer_done) begin
            bridge_masterLogic_stop <= 1'b0; // @[I2cCtrl.scala 450:20]
          end
        end
        bridge_masterLogic_fsm_enumDef_TBUF : begin
        end
        default : begin
        end
      endcase
      if(when_I2cCtrl_l333) begin
        bridge_masterLogic_start <= 1'b0; // @[I2cCtrl.scala 334:19]
        bridge_masterLogic_stop <= 1'b0; // @[I2cCtrl.scala 335:18]
        bridge_masterLogic_drop <= 1'b0; // @[I2cCtrl.scala 336:18]
      end
    end
  end

  always @(posedge clk) begin
    if(_zz_writeJoinEvent_translated_ready_1) begin
      _zz_axil4Ctrl_bresp <= writeJoinEvent_translated_payload_resp; // @[Stream.scala 362:28]
    end
    if(axil4Ctrl_arready) begin
      io_axil4Ctrl_ar_rData_addr <= axil4Ctrl_araddr; // @[Stream.scala 362:28]
      io_axil4Ctrl_ar_rData_prot <= axil4Ctrl_arprot; // @[Stream.scala 362:28]
    end
    if(bridge_rxData_event) begin
      case(bridge_addressFilter_state)
        2'b00 : begin
          bridge_addressFilter_byte0 <= bridge_rxData_value; // @[I2cCtrl.scala 280:19]
        end
        2'b01 : begin
          bridge_addressFilter_byte1 <= bridge_rxData_value; // @[I2cCtrl.scala 284:19]
        end
        default : begin
        end
      endcase
    end
    _zz_when_I2cCtrl_l299_regNext <= _zz_when_I2cCtrl_l299; // @[Reg.scala 39:30]
    bridge_masterLogic_timer_value <= (bridge_masterLogic_timer_value - _zz_bridge_masterLogic_timer_value); // @[I2cCtrl.scala 325:15]
    if(when_I2cCtrl_l342) begin
      bridge_masterLogic_fsm_inFrameLate <= 1'b1; // @[I2cCtrl.scala 342:39]
    end
    if(when_I2cCtrl_l342_1) begin
      bridge_masterLogic_fsm_inFrameLate <= 1'b0; // @[I2cCtrl.scala 342:67]
    end
    case(i2cCtrl_io_bus_cmd_kind)
      I2cSlaveCmdMode_READ : begin
        if(when_I2cCtrl_l524) begin
          bridge_rxData_value[_zz_bridge_rxData_value] <= i2cCtrl_io_bus_cmd_data; // @[I2cCtrl.scala 525:41]
        end else begin
          bridge_rxAck_value <= i2cCtrl_io_bus_cmd_data; // @[I2cCtrl.scala 542:23]
        end
      end
      default : begin
      end
    endcase
    if(when_I2cCtrl_l559) begin
      bridge_txData_disableOnDataConflict <= 1'b0; // @[I2cCtrl.scala 564:36]
      bridge_txAck_disableOnDataConflict <= 1'b0; // @[I2cCtrl.scala 569:35]
    end
    _zz_when_I2cCtrl_l593_regNext <= _zz_when_I2cCtrl_l593; // @[Reg.scala 39:30]
    bridge_masterLogic_fsm_isBusy_regNext <= bridge_masterLogic_fsm_isBusy; // @[Reg.scala 39:30]
    case(axil4Ctrl_awaddr)
      8'h0 : begin
        if(writeOccur) begin
          bridge_txData_value <= axil4Ctrl_wdata[7 : 0]; // @[Bits.scala 133:56]
          bridge_txData_disableOnDataConflict <= axil4Ctrl_wdata[11]; // @[Bool.scala 189:10]
        end
      end
      8'h04 : begin
        if(writeOccur) begin
          bridge_txAck_value <= axil4Ctrl_wdata[0]; // @[Bool.scala 189:10]
          bridge_txAck_disableOnDataConflict <= axil4Ctrl_wdata[11]; // @[Bool.scala 189:10]
        end
      end
      8'h88 : begin
        if(writeOccur) begin
          bridge_addressFilter_addresses_0_value <= axil4Ctrl_wdata[9 : 0]; // @[Bits.scala 133:56]
          bridge_addressFilter_addresses_0_is10Bit <= axil4Ctrl_wdata[14]; // @[Bool.scala 189:10]
        end
      end
      8'h8c : begin
        if(writeOccur) begin
          bridge_addressFilter_addresses_1_value <= axil4Ctrl_wdata[9 : 0]; // @[Bits.scala 133:56]
          bridge_addressFilter_addresses_1_is10Bit <= axil4Ctrl_wdata[14]; // @[Bool.scala 189:10]
        end
      end
      8'h90 : begin
        if(writeOccur) begin
          bridge_addressFilter_addresses_2_value <= axil4Ctrl_wdata[9 : 0]; // @[Bits.scala 133:56]
          bridge_addressFilter_addresses_2_is10Bit <= axil4Ctrl_wdata[14]; // @[Bool.scala 189:10]
        end
      end
      8'h94 : begin
        if(writeOccur) begin
          bridge_addressFilter_addresses_3_value <= axil4Ctrl_wdata[9 : 0]; // @[Bits.scala 133:56]
          bridge_addressFilter_addresses_3_is10Bit <= axil4Ctrl_wdata[14]; // @[Bool.scala 189:10]
        end
      end
      8'h50 : begin
        if(writeOccur) begin
          bridge_masterLogic_timer_tLow <= axil4Ctrl_wdata[11 : 0]; // @[UInt.scala 381:56]
        end
      end
      8'h54 : begin
        if(writeOccur) begin
          bridge_masterLogic_timer_tHigh <= axil4Ctrl_wdata[11 : 0]; // @[UInt.scala 381:56]
        end
      end
      8'h58 : begin
        if(writeOccur) begin
          bridge_masterLogic_timer_tBuf <= axil4Ctrl_wdata[11 : 0]; // @[UInt.scala 381:56]
        end
      end
      8'h2c : begin
        if(writeOccur) begin
          _zz_io_config_timeout <= axil4Ctrl_wdata[19 : 0]; // @[UInt.scala 381:56]
        end
      end
      8'h30 : begin
        if(writeOccur) begin
          _zz_io_config_tsuData <= axil4Ctrl_wdata[5 : 0]; // @[UInt.scala 381:56]
        end
      end
      default : begin
      end
    endcase
    case(bridge_masterLogic_fsm_stateReg)
      bridge_masterLogic_fsm_enumDef_IDLE : begin
      end
      bridge_masterLogic_fsm_enumDef_START1 : begin
      end
      bridge_masterLogic_fsm_enumDef_START2 : begin
      end
      bridge_masterLogic_fsm_enumDef_LOW : begin
      end
      bridge_masterLogic_fsm_enumDef_HIGH : begin
      end
      bridge_masterLogic_fsm_enumDef_RESTART : begin
        if(when_I2cCtrl_l421) begin
          bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tHigh; // @[I2cCtrl.scala 422:27]
        end
      end
      bridge_masterLogic_fsm_enumDef_STOP1 : begin
      end
      bridge_masterLogic_fsm_enumDef_STOP2 : begin
      end
      bridge_masterLogic_fsm_enumDef_TBUF : begin
      end
      default : begin
      end
    endcase
    if(when_StateMachine_l253) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tHigh; // @[I2cCtrl.scala 356:25]
    end
    if(when_StateMachine_l253_1) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tLow; // @[I2cCtrl.scala 368:25]
    end
    if(when_StateMachine_l253_2) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tLow; // @[I2cCtrl.scala 382:25]
    end
    if(when_StateMachine_l253_3) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tHigh; // @[I2cCtrl.scala 407:25]
    end
    if(when_StateMachine_l253_4) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tHigh; // @[I2cCtrl.scala 418:25]
    end
    if(when_StateMachine_l253_5) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tHigh; // @[I2cCtrl.scala 432:25]
    end
    if(when_StateMachine_l253_6) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tHigh; // @[I2cCtrl.scala 445:25]
    end
    if(when_StateMachine_l253_7) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tBuf; // @[I2cCtrl.scala 458:25]
    end
  end

  always @(posedge clk) begin
    if(!resetn) begin
      toplevel_i2cCtrl_io_internals_inFrame_regNext <= 1'b0; // @[Data.scala 400:33]
    end else begin
      toplevel_i2cCtrl_io_internals_inFrame_regNext <= i2cCtrl_io_internals_inFrame; // @[Reg.scala 39:30]
    end
  end


endmodule

module I2cSlave (
  output              io_i2c_sda_write,
  input               io_i2c_sda_read,
  output              io_i2c_scl_write,
  input               io_i2c_scl_read,
  input      [9:0]    io_config_samplingClockDivider,
  input      [19:0]   io_config_timeout,
  input      [5:0]    io_config_tsuData,
  output reg [2:0]    io_bus_cmd_kind,
  output              io_bus_cmd_data,
  input               io_bus_rsp_valid,
  input               io_bus_rsp_enable,
  input               io_bus_rsp_data,
  output              io_internals_inFrame,
  output              io_internals_sdaRead,
  output              io_internals_sclRead,
  input               clk,
  input               resetn
);
  localparam I2cSlaveCmdMode_NONE = 3'd0;
  localparam I2cSlaveCmdMode_START = 3'd1;
  localparam I2cSlaveCmdMode_RESTART = 3'd2;
  localparam I2cSlaveCmdMode_STOP = 3'd3;
  localparam I2cSlaveCmdMode_DROP = 3'd4;
  localparam I2cSlaveCmdMode_DRIVE = 3'd5;
  localparam I2cSlaveCmdMode_READ = 3'd6;

  wire                io_i2c_scl_read_buffercc_io_dataOut;
  wire                io_i2c_sda_read_buffercc_io_dataOut;
  reg        [9:0]    filter_timer_counter;
  wire                filter_timer_tick;
  wire                filter_sampler_sclSync;
  wire                filter_sampler_sdaSync;
  wire                filter_sampler_sclSamples_0;
  wire                filter_sampler_sclSamples_1;
  wire                filter_sampler_sclSamples_2;
  wire                _zz_filter_sampler_sclSamples_0;
  reg                 _zz_filter_sampler_sclSamples_1;
  reg                 _zz_filter_sampler_sclSamples_2;
  wire                filter_sampler_sdaSamples_0;
  wire                filter_sampler_sdaSamples_1;
  wire                filter_sampler_sdaSamples_2;
  wire                _zz_filter_sampler_sdaSamples_0;
  reg                 _zz_filter_sampler_sdaSamples_1;
  reg                 _zz_filter_sampler_sdaSamples_2;
  reg                 filter_sda;
  reg                 filter_scl;
  wire                when_Misc_l82;
  wire                when_Misc_l85;
  wire                sclEdge_rise;
  wire                sclEdge_fall;
  wire                sclEdge_toggle;
  reg                 filter_scl_regNext;
  wire                sdaEdge_rise;
  wire                sdaEdge_fall;
  wire                sdaEdge_toggle;
  reg                 filter_sda_regNext;
  wire                detector_start;
  wire                detector_stop;
  reg        [5:0]    tsuData_counter;
  wire                tsuData_done;
  reg                 tsuData_reset;
  wire                when_I2CSlave_l189;
  reg                 ctrl_inFrame;
  reg                 ctrl_inFrameData;
  reg                 ctrl_sdaWrite;
  reg                 ctrl_sclWrite;
  wire                ctrl_rspBufferIn_valid;
  reg                 ctrl_rspBufferIn_ready;
  wire                ctrl_rspBufferIn_payload_enable;
  wire                ctrl_rspBufferIn_payload_data;
  wire                ctrl_rspBuffer_valid;
  reg                 ctrl_rspBuffer_ready;
  wire                ctrl_rspBuffer_payload_enable;
  wire                ctrl_rspBuffer_payload_data;
  reg                 ctrl_rspBufferIn_rValid;
  reg                 ctrl_rspBufferIn_rData_enable;
  reg                 ctrl_rspBufferIn_rData_data;
  wire                when_Stream_l368;
  wire                ctrl_rspAhead_valid;
  wire                ctrl_rspAhead_payload_enable;
  wire                ctrl_rspAhead_payload_data;
  wire                when_I2CSlave_l239;
  wire                when_I2CSlave_l243;
  wire                when_I2CSlave_l249;
  wire       [2:0]    _zz_io_bus_cmd_kind;
  reg        [19:0]   timeout_counter;
  reg                 timeout_tick;
  wire                when_I2CSlave_l268;
  wire                when_I2CSlave_l274;
  wire       [2:0]    _zz_io_bus_cmd_kind_1;
  `ifndef SYNTHESIS
  reg [55:0] io_bus_cmd_kind_string;
  reg [55:0] _zz_io_bus_cmd_kind_string;
  reg [55:0] _zz_io_bus_cmd_kind_1_string;
  `endif


  BufferCC_1 io_i2c_scl_read_buffercc (
    .io_dataIn  (io_i2c_scl_read                    ), //i
    .io_dataOut (io_i2c_scl_read_buffercc_io_dataOut), //o
    .clk        (clk                                ), //i
    .resetn     (resetn                             )  //i
  );
  BufferCC_1 io_i2c_sda_read_buffercc (
    .io_dataIn  (io_i2c_sda_read                    ), //i
    .io_dataOut (io_i2c_sda_read_buffercc_io_dataOut), //o
    .clk        (clk                                ), //i
    .resetn     (resetn                             )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_bus_cmd_kind)
      I2cSlaveCmdMode_NONE : io_bus_cmd_kind_string = "NONE   ";
      I2cSlaveCmdMode_START : io_bus_cmd_kind_string = "START  ";
      I2cSlaveCmdMode_RESTART : io_bus_cmd_kind_string = "RESTART";
      I2cSlaveCmdMode_STOP : io_bus_cmd_kind_string = "STOP   ";
      I2cSlaveCmdMode_DROP : io_bus_cmd_kind_string = "DROP   ";
      I2cSlaveCmdMode_DRIVE : io_bus_cmd_kind_string = "DRIVE  ";
      I2cSlaveCmdMode_READ : io_bus_cmd_kind_string = "READ   ";
      default : io_bus_cmd_kind_string = "???????";
    endcase
  end
  always @(*) begin
    case(_zz_io_bus_cmd_kind)
      I2cSlaveCmdMode_NONE : _zz_io_bus_cmd_kind_string = "NONE   ";
      I2cSlaveCmdMode_START : _zz_io_bus_cmd_kind_string = "START  ";
      I2cSlaveCmdMode_RESTART : _zz_io_bus_cmd_kind_string = "RESTART";
      I2cSlaveCmdMode_STOP : _zz_io_bus_cmd_kind_string = "STOP   ";
      I2cSlaveCmdMode_DROP : _zz_io_bus_cmd_kind_string = "DROP   ";
      I2cSlaveCmdMode_DRIVE : _zz_io_bus_cmd_kind_string = "DRIVE  ";
      I2cSlaveCmdMode_READ : _zz_io_bus_cmd_kind_string = "READ   ";
      default : _zz_io_bus_cmd_kind_string = "???????";
    endcase
  end
  always @(*) begin
    case(_zz_io_bus_cmd_kind_1)
      I2cSlaveCmdMode_NONE : _zz_io_bus_cmd_kind_1_string = "NONE   ";
      I2cSlaveCmdMode_START : _zz_io_bus_cmd_kind_1_string = "START  ";
      I2cSlaveCmdMode_RESTART : _zz_io_bus_cmd_kind_1_string = "RESTART";
      I2cSlaveCmdMode_STOP : _zz_io_bus_cmd_kind_1_string = "STOP   ";
      I2cSlaveCmdMode_DROP : _zz_io_bus_cmd_kind_1_string = "DROP   ";
      I2cSlaveCmdMode_DRIVE : _zz_io_bus_cmd_kind_1_string = "DRIVE  ";
      I2cSlaveCmdMode_READ : _zz_io_bus_cmd_kind_1_string = "READ   ";
      default : _zz_io_bus_cmd_kind_1_string = "???????";
    endcase
  end
  `endif

  assign filter_timer_tick = (filter_timer_counter == 10'h0); // @[BaseType.scala 305:24]
  assign filter_sampler_sclSync = io_i2c_scl_read_buffercc_io_dataOut; // @[CrossClock.scala 13:9]
  assign filter_sampler_sdaSync = io_i2c_sda_read_buffercc_io_dataOut; // @[CrossClock.scala 13:9]
  assign _zz_filter_sampler_sclSamples_0 = filter_sampler_sclSync; // @[Utils.scala 1115:50]
  assign filter_sampler_sclSamples_0 = _zz_filter_sampler_sclSamples_0; // @[Utils.scala 1121:87]
  assign filter_sampler_sclSamples_1 = _zz_filter_sampler_sclSamples_1; // @[Utils.scala 1121:87]
  assign filter_sampler_sclSamples_2 = _zz_filter_sampler_sclSamples_2; // @[Utils.scala 1121:87]
  assign _zz_filter_sampler_sdaSamples_0 = filter_sampler_sdaSync; // @[Utils.scala 1115:50]
  assign filter_sampler_sdaSamples_0 = _zz_filter_sampler_sdaSamples_0; // @[Utils.scala 1121:87]
  assign filter_sampler_sdaSamples_1 = _zz_filter_sampler_sdaSamples_1; // @[Utils.scala 1121:87]
  assign filter_sampler_sdaSamples_2 = _zz_filter_sampler_sdaSamples_2; // @[Utils.scala 1121:87]
  assign when_Misc_l82 = (((filter_sampler_sdaSamples_0 != filter_sda) && (filter_sampler_sdaSamples_1 != filter_sda)) && (filter_sampler_sdaSamples_2 != filter_sda)); // @[BaseType.scala 305:24]
  assign when_Misc_l85 = (((filter_sampler_sclSamples_0 != filter_scl) && (filter_sampler_sclSamples_1 != filter_scl)) && (filter_sampler_sclSamples_2 != filter_scl)); // @[BaseType.scala 305:24]
  assign sclEdge_rise = ((! filter_scl_regNext) && filter_scl); // @[Bool.scala 168:16]
  assign sclEdge_fall = (filter_scl_regNext && (! filter_scl)); // @[Bool.scala 169:16]
  assign sclEdge_toggle = (filter_scl_regNext != filter_scl); // @[Bool.scala 170:16]
  assign sdaEdge_rise = ((! filter_sda_regNext) && filter_sda); // @[Bool.scala 168:16]
  assign sdaEdge_fall = (filter_sda_regNext && (! filter_sda)); // @[Bool.scala 169:16]
  assign sdaEdge_toggle = (filter_sda_regNext != filter_sda); // @[Bool.scala 170:16]
  assign detector_start = (filter_scl && sdaEdge_fall); // @[BaseType.scala 305:24]
  assign detector_stop = (filter_scl && sdaEdge_rise); // @[BaseType.scala 305:24]
  assign tsuData_done = (tsuData_counter == 6'h0); // @[BaseType.scala 305:24]
  always @(*) begin
    tsuData_reset = 1'b0; // @[I2CSlave.scala 187:19]
    if(ctrl_inFrameData) begin
      tsuData_reset = (! ctrl_rspAhead_valid); // @[I2CSlave.scala 247:21]
    end
  end

  assign when_I2CSlave_l189 = (! tsuData_done); // @[BaseType.scala 299:24]
  always @(*) begin
    ctrl_sdaWrite = 1'b1; // @[I2CSlave.scala 205:32]
    if(ctrl_inFrameData) begin
      if(when_I2CSlave_l249) begin
        ctrl_sdaWrite = ctrl_rspAhead_payload_data; // @[I2CSlave.scala 250:18]
      end
    end
  end

  always @(*) begin
    ctrl_sclWrite = 1'b1; // @[I2CSlave.scala 205:32]
    if(ctrl_inFrameData) begin
      if(when_I2CSlave_l243) begin
        ctrl_sclWrite = 1'b0; // @[I2CSlave.scala 244:18]
      end
    end
  end

  always @(*) begin
    ctrl_rspBufferIn_ready = ctrl_rspBuffer_ready; // @[Stream.scala 367:16]
    if(when_Stream_l368) begin
      ctrl_rspBufferIn_ready = 1'b1; // @[Stream.scala 368:35]
    end
  end

  assign when_Stream_l368 = (! ctrl_rspBuffer_valid); // @[BaseType.scala 299:24]
  assign ctrl_rspBuffer_valid = ctrl_rspBufferIn_rValid; // @[Stream.scala 370:19]
  assign ctrl_rspBuffer_payload_enable = ctrl_rspBufferIn_rData_enable; // @[Stream.scala 371:21]
  assign ctrl_rspBuffer_payload_data = ctrl_rspBufferIn_rData_data; // @[Stream.scala 371:21]
  assign ctrl_rspAhead_valid = (ctrl_rspBuffer_valid ? ctrl_rspBuffer_valid : ctrl_rspBufferIn_valid); // @[Expression.scala 1420:25]
  assign ctrl_rspAhead_payload_enable = (ctrl_rspBuffer_valid ? ctrl_rspBuffer_payload_enable : ctrl_rspBufferIn_payload_enable); // @[Expression.scala 1420:25]
  assign ctrl_rspAhead_payload_data = (ctrl_rspBuffer_valid ? ctrl_rspBuffer_payload_data : ctrl_rspBufferIn_payload_data); // @[Expression.scala 1420:25]
  assign ctrl_rspBufferIn_valid = io_bus_rsp_valid; // @[I2CSlave.scala 217:24]
  assign ctrl_rspBufferIn_payload_enable = io_bus_rsp_enable; // @[I2CSlave.scala 218:24]
  assign ctrl_rspBufferIn_payload_data = io_bus_rsp_data; // @[I2CSlave.scala 219:24]
  always @(*) begin
    ctrl_rspBuffer_ready = 1'b0; // @[I2CSlave.scala 220:24]
    if(ctrl_inFrame) begin
      if(sclEdge_fall) begin
        ctrl_rspBuffer_ready = 1'b1; // @[I2CSlave.scala 234:25]
      end
    end
  end

  always @(*) begin
    io_bus_cmd_kind = I2cSlaveCmdMode_NONE; // @[Enum.scala 148:67]
    if(ctrl_inFrame) begin
      if(sclEdge_rise) begin
        io_bus_cmd_kind = I2cSlaveCmdMode_READ; // @[Enum.scala 148:67]
      end
    end
    if(ctrl_inFrameData) begin
      if(when_I2CSlave_l239) begin
        io_bus_cmd_kind = I2cSlaveCmdMode_DRIVE; // @[Enum.scala 148:67]
      end
    end
    if(detector_start) begin
      io_bus_cmd_kind = _zz_io_bus_cmd_kind; // @[I2CSlave.scala 255:23]
    end
    if(when_I2CSlave_l274) begin
      if(ctrl_inFrame) begin
        io_bus_cmd_kind = _zz_io_bus_cmd_kind_1; // @[I2CSlave.scala 276:23]
      end
    end
  end

  assign io_bus_cmd_data = filter_sda; // @[I2CSlave.scala 224:21]
  assign when_I2CSlave_l239 = ((! ctrl_rspBuffer_valid) || ctrl_rspBuffer_ready); // @[BaseType.scala 305:24]
  assign when_I2CSlave_l243 = ((! ctrl_rspAhead_valid) || (ctrl_rspAhead_payload_enable && (! tsuData_done))); // @[BaseType.scala 305:24]
  assign when_I2CSlave_l249 = (ctrl_rspAhead_valid && ctrl_rspAhead_payload_enable); // @[BaseType.scala 305:24]
  assign _zz_io_bus_cmd_kind = (ctrl_inFrame ? I2cSlaveCmdMode_RESTART : I2cSlaveCmdMode_START); // @[Expression.scala 1420:25]
  always @(*) begin
    timeout_tick = (timeout_counter == 20'h0); // @[BaseType.scala 305:24]
    if(when_I2CSlave_l268) begin
      timeout_tick = 1'b0; // @[I2CSlave.scala 270:15]
    end
  end

  assign when_I2CSlave_l268 = (sclEdge_toggle || (! ctrl_inFrame)); // @[BaseType.scala 305:24]
  assign when_I2CSlave_l274 = (detector_stop || timeout_tick); // @[BaseType.scala 305:24]
  assign _zz_io_bus_cmd_kind_1 = (timeout_tick ? I2cSlaveCmdMode_DROP : I2cSlaveCmdMode_STOP); // @[Expression.scala 1420:25]
  assign io_internals_inFrame = ctrl_inFrame; // @[I2CSlave.scala 282:24]
  assign io_internals_sdaRead = filter_sda; // @[I2CSlave.scala 283:24]
  assign io_internals_sclRead = filter_scl; // @[I2CSlave.scala 284:24]
  assign io_i2c_scl_write = ctrl_sclWrite; // @[I2CSlave.scala 290:20]
  assign io_i2c_sda_write = ctrl_sdaWrite; // @[I2CSlave.scala 291:20]
  always @(posedge clk) begin
    if(!resetn) begin
      filter_timer_counter <= 10'h0; // @[Data.scala 400:33]
      _zz_filter_sampler_sclSamples_1 <= 1'b1; // @[Data.scala 400:33]
      _zz_filter_sampler_sclSamples_2 <= 1'b1; // @[Data.scala 400:33]
      _zz_filter_sampler_sdaSamples_1 <= 1'b1; // @[Data.scala 400:33]
      _zz_filter_sampler_sdaSamples_2 <= 1'b1; // @[Data.scala 400:33]
      filter_sda <= 1'b1; // @[Data.scala 400:33]
      filter_scl <= 1'b1; // @[Data.scala 400:33]
      filter_scl_regNext <= 1'b1; // @[Data.scala 400:33]
      filter_sda_regNext <= 1'b1; // @[Data.scala 400:33]
      tsuData_counter <= 6'h0; // @[Data.scala 400:33]
      ctrl_inFrame <= 1'b0; // @[Data.scala 400:33]
      ctrl_inFrameData <= 1'b0; // @[Data.scala 400:33]
      ctrl_rspBufferIn_rValid <= 1'b0; // @[Data.scala 400:33]
      timeout_counter <= 20'h0; // @[Data.scala 400:33]
    end else begin
      filter_timer_counter <= (filter_timer_counter - 10'h001); // @[Misc.scala 65:13]
      if(filter_timer_tick) begin
        filter_timer_counter <= io_config_samplingClockDivider; // @[Misc.scala 67:15]
      end
      if(filter_timer_tick) begin
        _zz_filter_sampler_sclSamples_1 <= _zz_filter_sampler_sclSamples_0; // @[Utils.scala 1109:24]
      end
      if(filter_timer_tick) begin
        _zz_filter_sampler_sclSamples_2 <= _zz_filter_sampler_sclSamples_1; // @[Utils.scala 1109:24]
      end
      if(filter_timer_tick) begin
        _zz_filter_sampler_sdaSamples_1 <= _zz_filter_sampler_sdaSamples_0; // @[Utils.scala 1109:24]
      end
      if(filter_timer_tick) begin
        _zz_filter_sampler_sdaSamples_2 <= _zz_filter_sampler_sdaSamples_1; // @[Utils.scala 1109:24]
      end
      if(filter_timer_tick) begin
        if(when_Misc_l82) begin
          filter_sda <= filter_sampler_sdaSamples_2; // @[Misc.scala 83:11]
        end
        if(when_Misc_l85) begin
          filter_scl <= filter_sampler_sclSamples_2; // @[Misc.scala 86:11]
        end
      end
      filter_scl_regNext <= filter_scl; // @[Reg.scala 39:30]
      filter_sda_regNext <= filter_sda; // @[Reg.scala 39:30]
      if(when_I2CSlave_l189) begin
        tsuData_counter <= (tsuData_counter - 6'h01); // @[I2CSlave.scala 190:15]
      end
      if(tsuData_reset) begin
        tsuData_counter <= io_config_tsuData; // @[I2CSlave.scala 194:15]
      end
      if(ctrl_rspBufferIn_ready) begin
        ctrl_rspBufferIn_rValid <= ctrl_rspBufferIn_valid; // @[Stream.scala 361:29]
      end
      if(ctrl_inFrame) begin
        if(sclEdge_fall) begin
          ctrl_inFrameData <= 1'b1; // @[I2CSlave.scala 233:25]
        end
      end
      if(detector_start) begin
        ctrl_inFrame <= 1'b1; // @[I2CSlave.scala 256:23]
        ctrl_inFrameData <= 1'b0; // @[I2CSlave.scala 257:23]
      end
      timeout_counter <= (timeout_counter - 20'h00001); // @[I2CSlave.scala 266:13]
      if(when_I2CSlave_l268) begin
        timeout_counter <= io_config_timeout; // @[I2CSlave.scala 269:15]
      end
      if(when_I2CSlave_l274) begin
        ctrl_inFrame <= 1'b0; // @[I2CSlave.scala 278:22]
        ctrl_inFrameData <= 1'b0; // @[I2CSlave.scala 279:22]
      end
    end
  end

  always @(posedge clk) begin
    if(ctrl_rspBufferIn_ready) begin
      ctrl_rspBufferIn_rData_enable <= ctrl_rspBufferIn_payload_enable; // @[Stream.scala 362:28]
      ctrl_rspBufferIn_rData_data <= ctrl_rspBufferIn_payload_data; // @[Stream.scala 362:28]
    end
  end


endmodule

//BufferCC_1 replaced by BufferCC_1

module BufferCC_1 (
  input               io_dataIn,
  output              io_dataOut,
  input               clk,
  input               resetn
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1; // @[CrossClock.scala 38:14]
  always @(posedge clk) begin
    if(!resetn) begin
      buffers_0 <= 1'b1; // @[Data.scala 400:33]
      buffers_1 <= 1'b1; // @[Data.scala 400:33]
    end else begin
      buffers_0 <= io_dataIn; // @[CrossClock.scala 31:14]
      buffers_1 <= buffers_0; // @[CrossClock.scala 34:16]
    end
  end


endmodule
