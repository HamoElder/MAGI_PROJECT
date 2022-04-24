// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : AxiLite4I2cCtrl
// Git hash  : b4854519b9981ad4d90b9c6743c51cbef5656810

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
  wire       [1:0]    _zz_when_I2cCtrl_l271;
  wire       [1:0]    _zz_when_I2cCtrl_l271_1;
  wire                _zz_when_I2cCtrl_l271_2;
  wire                _zz_when_I2cCtrl_l271_3;
  wire                _zz_when_I2cCtrl_l271_4;
  wire                _zz_when_I2cCtrl_l271_5;
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
  wire                readHaltRequest;
  wire                writeHaltRequest;
  wire                writeJoinEvent_valid;
  wire                writeJoinEvent_ready;
  wire                writeJoinEvent_fire;
  wire       [1:0]    writeRsp_resp;
  wire                writeJoinEvent_translated_valid;
  wire                writeJoinEvent_translated_ready;
  wire       [1:0]    writeJoinEvent_translated_payload_resp;
  wire                _zz_axil4Ctrl_bvalid;
  reg                 _zz_writeJoinEvent_translated_ready;
  wire                _zz_axil4Ctrl_bvalid_1;
  reg                 _zz_axil4Ctrl_bvalid_2;
  reg        [1:0]    _zz_axil4Ctrl_bresp;
  wire                when_Stream_l342;
  wire                readDataStage_valid;
  wire                readDataStage_ready;
  wire       [7:0]    readDataStage_payload_addr;
  wire       [2:0]    readDataStage_payload_prot;
  reg                 io_axil4Ctrl_ar_rValid;
  reg        [7:0]    io_axil4Ctrl_ar_rData_addr;
  reg        [2:0]    io_axil4Ctrl_ar_rData_prot;
  wire                when_Stream_l342_1;
  reg        [31:0]   readRsp_data;
  wire       [1:0]    readRsp_resp;
  wire                _zz_axil4Ctrl_rvalid;
  wire                writeOccur;
  wire                readOccur;
  reg                 bridge_frameReset;
  reg                 bridge_i2cBuffer_sda_write;
  wire                bridge_i2cBuffer_sda_read;
  reg                 bridge_i2cBuffer_scl_write;
  wire                bridge_i2cBuffer_scl_read;
  reg                 bridge_rxData_event;
  reg                 bridge_rxData_listen;
  reg                 bridge_rxData_valid;
  reg        [7:0]    bridge_rxData_value;
  reg                 when_I2cCtrl_l189;
  reg                 bridge_rxAck_listen;
  reg                 bridge_rxAck_valid;
  reg                 bridge_rxAck_value;
  reg                 when_I2cCtrl_l202;
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
  wire                when_I2cCtrl_l271;
  wire                _zz_when_I2cCtrl_l275;
  reg                 _zz_when_I2cCtrl_l275_regNext;
  wire                when_I2cCtrl_l275;
  reg                 bridge_masterLogic_start;
  reg                 when_BusSlaveFactory_l366;
  wire                when_BusSlaveFactory_l368;
  reg                 bridge_masterLogic_stop;
  reg                 when_BusSlaveFactory_l366_1;
  wire                when_BusSlaveFactory_l368_1;
  reg                 bridge_masterLogic_drop;
  reg                 when_BusSlaveFactory_l366_2;
  wire                when_BusSlaveFactory_l368_2;
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
  wire                when_I2cCtrl_l318;
  wire                when_I2cCtrl_l318_1;
  wire                bridge_masterLogic_fsm_isBusy;
  reg        [2:0]    bridge_dataCounter;
  reg                 bridge_inAckState;
  reg                 bridge_wasntAck;
  wire                when_I2cCtrl_l457;
  wire                when_I2cCtrl_l480;
  wire                when_I2cCtrl_l500;
  wire                when_I2cCtrl_l504;
  wire                when_I2cCtrl_l508;
  wire                when_I2cCtrl_l512;
  wire                when_I2cCtrl_l522;
  wire                when_I2cCtrl_l535;
  reg                 bridge_interruptCtrl_rxDataEnable;
  reg                 bridge_interruptCtrl_rxAckEnable;
  reg                 bridge_interruptCtrl_txDataEnable;
  reg                 bridge_interruptCtrl_txAckEnable;
  reg                 bridge_interruptCtrl_interrupt;
  wire                when_I2cCtrl_l569;
  reg                 bridge_interruptCtrl_start_enable;
  reg                 bridge_interruptCtrl_start_flag;
  wire                when_I2cCtrl_l569_1;
  reg                 when_BusSlaveFactory_l335;
  wire                when_BusSlaveFactory_l337;
  wire                when_I2cCtrl_l569_2;
  reg                 bridge_interruptCtrl_restart_enable;
  reg                 bridge_interruptCtrl_restart_flag;
  wire                when_I2cCtrl_l569_3;
  reg                 when_BusSlaveFactory_l335_1;
  wire                when_BusSlaveFactory_l337_1;
  wire                when_I2cCtrl_l569_4;
  reg                 bridge_interruptCtrl_end_enable;
  reg                 bridge_interruptCtrl_end_flag;
  wire                when_I2cCtrl_l569_5;
  reg                 when_BusSlaveFactory_l335_2;
  wire                when_BusSlaveFactory_l337_2;
  wire                when_I2cCtrl_l569_6;
  reg                 bridge_interruptCtrl_drop_enable;
  reg                 bridge_interruptCtrl_drop_flag;
  wire                when_I2cCtrl_l569_7;
  reg                 when_BusSlaveFactory_l335_3;
  wire                when_BusSlaveFactory_l337_3;
  wire                _zz_when_I2cCtrl_l569;
  reg                 _zz_when_I2cCtrl_l569_regNext;
  wire                when_I2cCtrl_l569_8;
  reg                 bridge_interruptCtrl_filterGen_enable;
  reg                 bridge_interruptCtrl_filterGen_flag;
  wire                when_I2cCtrl_l569_9;
  reg                 when_BusSlaveFactory_l335_4;
  wire                when_BusSlaveFactory_l337_4;
  reg                 bridge_masterLogic_fsm_isBusy_regNext;
  wire                when_I2cCtrl_l569_10;
  reg                 bridge_interruptCtrl_clockGen_enable;
  reg                 bridge_interruptCtrl_clockGen_flag;
  wire                when_I2cCtrl_l569_11;
  reg                 when_BusSlaveFactory_l335_5;
  wire                when_BusSlaveFactory_l337_5;
  reg        [9:0]    _zz_io_config_samplingClockDivider;
  reg        [19:0]   _zz_io_config_timeout;
  reg        [5:0]    _zz_io_config_tsuData;
  reg                 bridge_i2cBuffer_scl_write_regNext;
  reg                 bridge_i2cBuffer_sda_write_regNext;
  reg        [3:0]    bridge_masterLogic_fsm_stateReg;
  reg        [3:0]    bridge_masterLogic_fsm_stateNext;
  reg                 i2cCtrl_io_internals_inFrame_regNext;
  wire                when_I2cCtrl_l321;
  wire                when_I2cCtrl_l323;
  wire                when_I2cCtrl_l336;
  wire                when_I2cCtrl_l362;
  wire                when_I2cCtrl_l366;
  wire                when_I2cCtrl_l386;
  wire                when_I2cCtrl_l397;
  wire                when_StateMachine_l238;
  wire                when_StateMachine_l238_1;
  wire                when_StateMachine_l238_2;
  wire                when_StateMachine_l238_3;
  wire                when_StateMachine_l238_4;
  wire                when_StateMachine_l238_5;
  wire                when_StateMachine_l238_6;
  wire                when_StateMachine_l238_7;
  wire                when_I2cCtrl_l309;
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
  assign _zz_when_I2cCtrl_l271 = bridge_addressFilter_byte0[2 : 1];
  assign _zz_when_I2cCtrl_l271_1 = bridge_addressFilter_addresses_2_value[9 : 8];
  assign _zz_when_I2cCtrl_l271_2 = (bridge_addressFilter_addresses_1_enable && bridge_addressFilter_addresses_1_is10Bit);
  assign _zz_when_I2cCtrl_l271_3 = (bridge_addressFilter_byte0[2 : 1] == bridge_addressFilter_addresses_1_value[9 : 8]);
  assign _zz_when_I2cCtrl_l271_4 = (bridge_addressFilter_addresses_0_enable && bridge_addressFilter_addresses_0_is10Bit);
  assign _zz_when_I2cCtrl_l271_5 = (bridge_addressFilter_byte0[2 : 1] == bridge_addressFilter_addresses_0_value[9 : 8]);
  I2cSlave i2cCtrl (
    .io_i2c_sda_write                  (i2cCtrl_io_i2c_sda_write                 ), //o
    .io_i2c_sda_read                   (bridge_i2cBuffer_sda_read                ), //i
    .io_i2c_scl_write                  (i2cCtrl_io_i2c_scl_write                 ), //o
    .io_i2c_scl_read                   (bridge_i2cBuffer_scl_read                ), //i
    .io_config_samplingClockDivider    (_zz_io_config_samplingClockDivider[9:0]  ), //i
    .io_config_timeout                 (_zz_io_config_timeout[19:0]              ), //i
    .io_config_tsuData                 (_zz_io_config_tsuData[5:0]               ), //i
    .io_bus_cmd_kind                   (i2cCtrl_io_bus_cmd_kind[2:0]             ), //o
    .io_bus_cmd_data                   (i2cCtrl_io_bus_cmd_data                  ), //o
    .io_bus_rsp_valid                  (i2cCtrl_io_bus_rsp_valid                 ), //i
    .io_bus_rsp_enable                 (i2cCtrl_io_bus_rsp_enable                ), //i
    .io_bus_rsp_data                   (i2cCtrl_io_bus_rsp_data                  ), //i
    .io_internals_inFrame              (i2cCtrl_io_internals_inFrame             ), //o
    .io_internals_sdaRead              (i2cCtrl_io_internals_sdaRead             ), //o
    .io_internals_sclRead              (i2cCtrl_io_internals_sclRead             ), //o
    .clk                               (clk                                      ), //i
    .resetn                            (resetn                                   )  //i
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

  assign readHaltRequest = 1'b0;
  assign writeHaltRequest = 1'b0;
  assign writeJoinEvent_fire = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign writeJoinEvent_valid = (axil4Ctrl_awvalid && axil4Ctrl_wvalid);
  assign axil4Ctrl_awready = writeJoinEvent_fire;
  assign axil4Ctrl_wready = writeJoinEvent_fire;
  assign writeJoinEvent_translated_valid = writeJoinEvent_valid;
  assign writeJoinEvent_ready = writeJoinEvent_translated_ready;
  assign writeJoinEvent_translated_payload_resp = writeRsp_resp;
  assign _zz_axil4Ctrl_bvalid = (! writeHaltRequest);
  assign writeJoinEvent_translated_ready = (_zz_writeJoinEvent_translated_ready && _zz_axil4Ctrl_bvalid);
  always @(*) begin
    _zz_writeJoinEvent_translated_ready = axil4Ctrl_bready;
    if(when_Stream_l342) begin
      _zz_writeJoinEvent_translated_ready = 1'b1;
    end
  end

  assign when_Stream_l342 = (! _zz_axil4Ctrl_bvalid_1);
  assign _zz_axil4Ctrl_bvalid_1 = _zz_axil4Ctrl_bvalid_2;
  assign axil4Ctrl_bvalid = _zz_axil4Ctrl_bvalid_1;
  assign axil4Ctrl_bresp = _zz_axil4Ctrl_bresp;
  always @(*) begin
    axil4Ctrl_arready = readDataStage_ready;
    if(when_Stream_l342_1) begin
      axil4Ctrl_arready = 1'b1;
    end
  end

  assign when_Stream_l342_1 = (! readDataStage_valid);
  assign readDataStage_valid = io_axil4Ctrl_ar_rValid;
  assign readDataStage_payload_addr = io_axil4Ctrl_ar_rData_addr;
  assign readDataStage_payload_prot = io_axil4Ctrl_ar_rData_prot;
  assign _zz_axil4Ctrl_rvalid = (! readHaltRequest);
  assign readDataStage_ready = (axil4Ctrl_rready && _zz_axil4Ctrl_rvalid);
  assign axil4Ctrl_rvalid = (readDataStage_valid && _zz_axil4Ctrl_rvalid);
  assign axil4Ctrl_rdata = readRsp_data;
  assign axil4Ctrl_rresp = readRsp_resp;
  assign writeRsp_resp = 2'b00;
  assign readRsp_resp = 2'b00;
  always @(*) begin
    readRsp_data = 32'h0;
    case(readDataStage_payload_addr)
      8'h08 : begin
        readRsp_data[8 : 8] = bridge_rxData_valid;
        readRsp_data[7 : 0] = bridge_rxData_value;
      end
      8'h0c : begin
        readRsp_data[8 : 8] = bridge_rxAck_valid;
        readRsp_data[0 : 0] = bridge_rxAck_value;
      end
      8'h0 : begin
        readRsp_data[8 : 8] = bridge_txData_valid;
        readRsp_data[9 : 9] = bridge_txData_enable;
      end
      8'h04 : begin
        readRsp_data[8 : 8] = bridge_txAck_valid;
        readRsp_data[9 : 9] = bridge_txAck_enable;
      end
      8'h80 : begin
        readRsp_data[3 : 0] = {bridge_addressFilter_hits_3,{bridge_addressFilter_hits_2,{bridge_addressFilter_hits_1,bridge_addressFilter_hits_0}}};
      end
      8'h84 : begin
        readRsp_data[0 : 0] = bridge_addressFilter_byte0[0];
      end
      8'h40 : begin
        readRsp_data[4 : 4] = bridge_masterLogic_start;
        readRsp_data[5 : 5] = bridge_masterLogic_stop;
        readRsp_data[6 : 6] = bridge_masterLogic_drop;
        readRsp_data[0 : 0] = bridge_masterLogic_fsm_isBusy;
      end
      8'h20 : begin
        readRsp_data[0 : 0] = bridge_interruptCtrl_rxDataEnable;
        readRsp_data[1 : 1] = bridge_interruptCtrl_rxAckEnable;
        readRsp_data[2 : 2] = bridge_interruptCtrl_txDataEnable;
        readRsp_data[3 : 3] = bridge_interruptCtrl_txAckEnable;
        readRsp_data[4 : 4] = bridge_interruptCtrl_start_enable;
        readRsp_data[5 : 5] = bridge_interruptCtrl_restart_enable;
        readRsp_data[6 : 6] = bridge_interruptCtrl_end_enable;
        readRsp_data[7 : 7] = bridge_interruptCtrl_drop_enable;
        readRsp_data[17 : 17] = bridge_interruptCtrl_filterGen_enable;
        readRsp_data[16 : 16] = bridge_interruptCtrl_clockGen_enable;
      end
      8'h24 : begin
        readRsp_data[4 : 4] = bridge_interruptCtrl_start_flag;
        readRsp_data[5 : 5] = bridge_interruptCtrl_restart_flag;
        readRsp_data[6 : 6] = bridge_interruptCtrl_end_flag;
        readRsp_data[7 : 7] = bridge_interruptCtrl_drop_flag;
        readRsp_data[17 : 17] = bridge_interruptCtrl_filterGen_flag;
        readRsp_data[16 : 16] = bridge_interruptCtrl_clockGen_flag;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  always @(*) begin
    bridge_frameReset = 1'b0;
    case(i2cCtrl_io_bus_cmd_kind)
      I2cSlaveCmdMode_START : begin
        bridge_frameReset = 1'b1;
      end
      I2cSlaveCmdMode_RESTART : begin
        bridge_frameReset = 1'b1;
      end
      I2cSlaveCmdMode_STOP : begin
        bridge_frameReset = 1'b1;
      end
      I2cSlaveCmdMode_DROP : begin
        bridge_frameReset = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bridge_i2cBuffer_sda_write = i2cCtrl_io_i2c_sda_write;
    case(bridge_masterLogic_fsm_stateReg)
      bridge_masterLogic_fsm_enumDef_IDLE : begin
      end
      bridge_masterLogic_fsm_enumDef_START1 : begin
        bridge_i2cBuffer_sda_write = 1'b0;
      end
      bridge_masterLogic_fsm_enumDef_START2 : begin
        bridge_i2cBuffer_sda_write = 1'b0;
      end
      bridge_masterLogic_fsm_enumDef_LOW : begin
      end
      bridge_masterLogic_fsm_enumDef_HIGH : begin
      end
      bridge_masterLogic_fsm_enumDef_RESTART : begin
      end
      bridge_masterLogic_fsm_enumDef_STOP1 : begin
        bridge_i2cBuffer_sda_write = 1'b0;
      end
      bridge_masterLogic_fsm_enumDef_STOP2 : begin
        bridge_i2cBuffer_sda_write = 1'b0;
      end
      bridge_masterLogic_fsm_enumDef_TBUF : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bridge_i2cBuffer_scl_write = i2cCtrl_io_i2c_scl_write;
    case(bridge_masterLogic_fsm_stateReg)
      bridge_masterLogic_fsm_enumDef_IDLE : begin
      end
      bridge_masterLogic_fsm_enumDef_START1 : begin
      end
      bridge_masterLogic_fsm_enumDef_START2 : begin
        bridge_i2cBuffer_scl_write = 1'b0;
      end
      bridge_masterLogic_fsm_enumDef_LOW : begin
        if(bridge_masterLogic_timer_done) begin
          if(when_I2cCtrl_l362) begin
            bridge_i2cBuffer_scl_write = 1'b0;
          end else begin
            if(when_I2cCtrl_l366) begin
              bridge_i2cBuffer_scl_write = 1'b0;
            end
          end
        end else begin
          bridge_i2cBuffer_scl_write = 1'b0;
        end
      end
      bridge_masterLogic_fsm_enumDef_HIGH : begin
      end
      bridge_masterLogic_fsm_enumDef_RESTART : begin
      end
      bridge_masterLogic_fsm_enumDef_STOP1 : begin
        bridge_i2cBuffer_scl_write = 1'b0;
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
    when_I2cCtrl_l189 = 1'b0;
    case(readDataStage_payload_addr)
      8'h08 : begin
        if(readOccur) begin
          when_I2cCtrl_l189 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    when_I2cCtrl_l202 = 1'b0;
    case(readDataStage_payload_addr)
      8'h0c : begin
        if(readOccur) begin
          when_I2cCtrl_l202 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bridge_txData_forceDisable = 1'b0;
    if(when_I2cCtrl_l535) begin
      bridge_txData_forceDisable = 1'b0;
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
          if(when_I2cCtrl_l362) begin
            bridge_txData_forceDisable = 1'b1;
          end else begin
            if(when_I2cCtrl_l366) begin
              bridge_txData_forceDisable = 1'b1;
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
    bridge_txAck_forceAck = 1'b0;
    if(when_I2cCtrl_l271) begin
      bridge_txAck_forceAck = 1'b1;
    end
  end

  assign bridge_addressFilter_byte0Is10Bit = (bridge_addressFilter_byte0[7 : 3] == 5'h1e);
  assign bridge_addressFilter_hits_0 = (bridge_addressFilter_addresses_0_enable && ((! bridge_addressFilter_addresses_0_is10Bit) ? ((_zz_bridge_addressFilter_hits_0 == bridge_addressFilter_addresses_0_value[6 : 0]) && (bridge_addressFilter_state != 2'b00)) : (({bridge_addressFilter_byte0[2 : 1],bridge_addressFilter_byte1} == bridge_addressFilter_addresses_0_value) && (bridge_addressFilter_state == 2'b10))));
  assign bridge_addressFilter_hits_1 = (bridge_addressFilter_addresses_1_enable && ((! bridge_addressFilter_addresses_1_is10Bit) ? ((_zz_bridge_addressFilter_hits_1 == bridge_addressFilter_addresses_1_value[6 : 0]) && (bridge_addressFilter_state != 2'b00)) : (({bridge_addressFilter_byte0[2 : 1],bridge_addressFilter_byte1} == bridge_addressFilter_addresses_1_value) && (bridge_addressFilter_state == 2'b10))));
  assign bridge_addressFilter_hits_2 = (bridge_addressFilter_addresses_2_enable && ((! bridge_addressFilter_addresses_2_is10Bit) ? ((_zz_bridge_addressFilter_hits_2 == bridge_addressFilter_addresses_2_value[6 : 0]) && (bridge_addressFilter_state != 2'b00)) : (({bridge_addressFilter_byte0[2 : 1],bridge_addressFilter_byte1} == bridge_addressFilter_addresses_2_value) && (bridge_addressFilter_state == 2'b10))));
  assign bridge_addressFilter_hits_3 = (bridge_addressFilter_addresses_3_enable && ((! bridge_addressFilter_addresses_3_is10Bit) ? ((_zz_bridge_addressFilter_hits_3 == bridge_addressFilter_addresses_3_value[6 : 0]) && (bridge_addressFilter_state != 2'b00)) : (({bridge_addressFilter_byte0[2 : 1],bridge_addressFilter_byte1} == bridge_addressFilter_addresses_3_value) && (bridge_addressFilter_state == 2'b10))));
  assign when_I2cCtrl_l271 = ((bridge_addressFilter_byte0Is10Bit && (bridge_addressFilter_state == 2'b01)) && ({((bridge_addressFilter_addresses_3_enable && bridge_addressFilter_addresses_3_is10Bit) && (bridge_addressFilter_byte0[2 : 1] == bridge_addressFilter_addresses_3_value[9 : 8])),{((bridge_addressFilter_addresses_2_enable && bridge_addressFilter_addresses_2_is10Bit) && (_zz_when_I2cCtrl_l271 == _zz_when_I2cCtrl_l271_1)),{(_zz_when_I2cCtrl_l271_2 && _zz_when_I2cCtrl_l271_3),(_zz_when_I2cCtrl_l271_4 && _zz_when_I2cCtrl_l271_5)}}} != 4'b0000));
  assign _zz_when_I2cCtrl_l275 = ({bridge_addressFilter_hits_3,{bridge_addressFilter_hits_2,{bridge_addressFilter_hits_1,bridge_addressFilter_hits_0}}} != 4'b0000);
  assign when_I2cCtrl_l275 = (_zz_when_I2cCtrl_l275 && (! _zz_when_I2cCtrl_l275_regNext));
  always @(*) begin
    when_BusSlaveFactory_l366 = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h40 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l366 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l368 = axil4Ctrl_wdata[4];
  always @(*) begin
    when_BusSlaveFactory_l366_1 = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h40 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l366_1 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l368_1 = axil4Ctrl_wdata[5];
  always @(*) begin
    when_BusSlaveFactory_l366_2 = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h40 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l366_2 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l368_2 = axil4Ctrl_wdata[6];
  assign bridge_masterLogic_timer_done = (bridge_masterLogic_timer_value == 12'h0);
  assign bridge_masterLogic_fsm_wantExit = 1'b0;
  always @(*) begin
    bridge_masterLogic_fsm_wantStart = 1'b0;
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
        bridge_masterLogic_fsm_wantStart = 1'b1;
      end
    endcase
  end

  assign bridge_masterLogic_fsm_wantKill = 1'b0;
  assign when_I2cCtrl_l318 = (! i2cCtrl_io_internals_sclRead);
  assign when_I2cCtrl_l318_1 = (! i2cCtrl_io_internals_inFrame);
  assign bridge_masterLogic_fsm_isBusy = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_IDLE)) && (! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_TBUF)));
  assign bridge_masterLogic_txReady = (bridge_inAckState ? bridge_txAck_valid : bridge_txData_valid);
  assign when_I2cCtrl_l457 = (! bridge_inAckState);
  always @(*) begin
    if(when_I2cCtrl_l457) begin
      i2cCtrl_io_bus_rsp_valid = ((bridge_txData_valid && (! (bridge_rxData_valid && bridge_rxData_listen))) && (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_DRIVE));
      if(bridge_txData_forceDisable) begin
        i2cCtrl_io_bus_rsp_valid = 1'b1;
      end
    end else begin
      i2cCtrl_io_bus_rsp_valid = ((bridge_txAck_valid && (! (bridge_rxAck_valid && bridge_rxAck_listen))) && (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_DRIVE));
      if(bridge_txAck_forceAck) begin
        i2cCtrl_io_bus_rsp_valid = 1'b1;
      end
    end
    if(when_I2cCtrl_l480) begin
      i2cCtrl_io_bus_rsp_valid = (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_DRIVE);
    end
  end

  always @(*) begin
    if(when_I2cCtrl_l457) begin
      i2cCtrl_io_bus_rsp_enable = bridge_txData_enable;
      if(bridge_txData_forceDisable) begin
        i2cCtrl_io_bus_rsp_enable = 1'b0;
      end
    end else begin
      i2cCtrl_io_bus_rsp_enable = bridge_txAck_enable;
      if(bridge_txAck_forceAck) begin
        i2cCtrl_io_bus_rsp_enable = 1'b1;
      end
    end
    if(when_I2cCtrl_l480) begin
      i2cCtrl_io_bus_rsp_enable = 1'b0;
    end
  end

  always @(*) begin
    if(when_I2cCtrl_l457) begin
      i2cCtrl_io_bus_rsp_data = bridge_txData_value[_zz_io_bus_rsp_data];
    end else begin
      i2cCtrl_io_bus_rsp_data = bridge_txAck_value;
      if(bridge_txAck_forceAck) begin
        i2cCtrl_io_bus_rsp_data = 1'b0;
      end
    end
  end

  assign when_I2cCtrl_l480 = (bridge_wasntAck && (! bridge_masterLogic_fsm_isBusy));
  assign when_I2cCtrl_l500 = (! bridge_inAckState);
  assign when_I2cCtrl_l504 = (i2cCtrl_io_bus_rsp_data != i2cCtrl_io_bus_cmd_data);
  assign when_I2cCtrl_l508 = (bridge_dataCounter == 3'b111);
  assign when_I2cCtrl_l512 = (bridge_txData_valid && (! bridge_txData_repeat));
  assign when_I2cCtrl_l522 = (bridge_txAck_valid && (! bridge_txAck_repeat));
  assign when_I2cCtrl_l535 = ((i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_STOP) || (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_DROP));
  always @(*) begin
    bridge_interruptCtrl_interrupt = ((((bridge_interruptCtrl_rxDataEnable && bridge_rxData_valid) || (bridge_interruptCtrl_rxAckEnable && bridge_rxAck_valid)) || (bridge_interruptCtrl_txDataEnable && (! bridge_txData_valid))) || (bridge_interruptCtrl_txAckEnable && (! bridge_txAck_valid)));
    if(bridge_interruptCtrl_start_flag) begin
      bridge_interruptCtrl_interrupt = 1'b1;
    end
    if(bridge_interruptCtrl_restart_flag) begin
      bridge_interruptCtrl_interrupt = 1'b1;
    end
    if(bridge_interruptCtrl_end_flag) begin
      bridge_interruptCtrl_interrupt = 1'b1;
    end
    if(bridge_interruptCtrl_drop_flag) begin
      bridge_interruptCtrl_interrupt = 1'b1;
    end
    if(bridge_interruptCtrl_filterGen_flag) begin
      bridge_interruptCtrl_interrupt = 1'b1;
    end
    if(bridge_interruptCtrl_clockGen_flag) begin
      bridge_interruptCtrl_interrupt = 1'b1;
    end
  end

  assign when_I2cCtrl_l569 = (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_START);
  assign when_I2cCtrl_l569_1 = (! bridge_interruptCtrl_start_enable);
  always @(*) begin
    when_BusSlaveFactory_l335 = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h24 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l335 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l337 = axil4Ctrl_wdata[4];
  assign when_I2cCtrl_l569_2 = (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_RESTART);
  assign when_I2cCtrl_l569_3 = (! bridge_interruptCtrl_restart_enable);
  always @(*) begin
    when_BusSlaveFactory_l335_1 = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h24 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l335_1 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l337_1 = axil4Ctrl_wdata[5];
  assign when_I2cCtrl_l569_4 = (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_STOP);
  assign when_I2cCtrl_l569_5 = (! bridge_interruptCtrl_end_enable);
  always @(*) begin
    when_BusSlaveFactory_l335_2 = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h24 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l335_2 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l337_2 = axil4Ctrl_wdata[6];
  assign when_I2cCtrl_l569_6 = (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_DROP);
  assign when_I2cCtrl_l569_7 = (! bridge_interruptCtrl_drop_enable);
  always @(*) begin
    when_BusSlaveFactory_l335_3 = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h24 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l335_3 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l337_3 = axil4Ctrl_wdata[7];
  assign _zz_when_I2cCtrl_l569 = ({bridge_addressFilter_hits_3,{bridge_addressFilter_hits_2,{bridge_addressFilter_hits_1,bridge_addressFilter_hits_0}}} != 4'b0000);
  assign when_I2cCtrl_l569_8 = (_zz_when_I2cCtrl_l569 && (! _zz_when_I2cCtrl_l569_regNext));
  assign when_I2cCtrl_l569_9 = (! bridge_interruptCtrl_filterGen_enable);
  always @(*) begin
    when_BusSlaveFactory_l335_4 = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h24 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l335_4 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l337_4 = axil4Ctrl_wdata[17];
  assign when_I2cCtrl_l569_10 = (bridge_masterLogic_fsm_isBusy && (! bridge_masterLogic_fsm_isBusy_regNext));
  assign when_I2cCtrl_l569_11 = (! bridge_interruptCtrl_clockGen_enable);
  always @(*) begin
    when_BusSlaveFactory_l335_5 = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h24 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l335_5 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l337_5 = axil4Ctrl_wdata[16];
  assign io_i2c_scl_write = bridge_i2cBuffer_scl_write_regNext;
  assign io_i2c_sda_write = bridge_i2cBuffer_sda_write_regNext;
  assign bridge_i2cBuffer_scl_read = io_i2c_scl_read;
  assign bridge_i2cBuffer_sda_read = io_i2c_sda_read;
  assign io_interrupt = bridge_interruptCtrl_interrupt;
  always @(*) begin
    bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_stateReg;
    case(bridge_masterLogic_fsm_stateReg)
      bridge_masterLogic_fsm_enumDef_IDLE : begin
        if(when_I2cCtrl_l321) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_TBUF;
        end else begin
          if(when_I2cCtrl_l323) begin
            bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_START1;
          end
        end
      end
      bridge_masterLogic_fsm_enumDef_START1 : begin
        if(when_I2cCtrl_l336) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_START2;
        end
      end
      bridge_masterLogic_fsm_enumDef_START2 : begin
        if(bridge_masterLogic_timer_done) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_LOW;
        end
      end
      bridge_masterLogic_fsm_enumDef_LOW : begin
        if(bridge_masterLogic_timer_done) begin
          if(when_I2cCtrl_l362) begin
            bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_STOP1;
          end else begin
            if(when_I2cCtrl_l366) begin
              bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_RESTART;
            end else begin
              if(i2cCtrl_io_internals_sclRead) begin
                bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_HIGH;
              end
            end
          end
        end
      end
      bridge_masterLogic_fsm_enumDef_HIGH : begin
        if(when_I2cCtrl_l386) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_LOW;
        end
      end
      bridge_masterLogic_fsm_enumDef_RESTART : begin
        if(bridge_masterLogic_timer_done) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_START1;
        end
      end
      bridge_masterLogic_fsm_enumDef_STOP1 : begin
        if(bridge_masterLogic_timer_done) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_STOP2;
        end
      end
      bridge_masterLogic_fsm_enumDef_STOP2 : begin
        if(bridge_masterLogic_timer_done) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_TBUF;
        end
      end
      bridge_masterLogic_fsm_enumDef_TBUF : begin
        if(bridge_masterLogic_timer_done) begin
          bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_IDLE;
        end
      end
      default : begin
      end
    endcase
    if(when_I2cCtrl_l309) begin
      bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_TBUF;
    end
    if(bridge_masterLogic_fsm_wantStart) begin
      bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_IDLE;
    end
    if(bridge_masterLogic_fsm_wantKill) begin
      bridge_masterLogic_fsm_stateNext = bridge_masterLogic_fsm_enumDef_BOOT;
    end
  end

  assign when_I2cCtrl_l321 = ((! i2cCtrl_io_internals_inFrame) && i2cCtrl_io_internals_inFrame_regNext);
  assign when_I2cCtrl_l323 = (bridge_masterLogic_start && (! bridge_masterLogic_fsm_inFrameLate));
  assign when_I2cCtrl_l336 = (bridge_masterLogic_timer_done || (! i2cCtrl_io_internals_sclRead));
  assign when_I2cCtrl_l362 = (bridge_masterLogic_stop && (! bridge_inAckState));
  assign when_I2cCtrl_l366 = (bridge_masterLogic_start && (! bridge_inAckState));
  assign when_I2cCtrl_l386 = (bridge_masterLogic_timer_done || (! i2cCtrl_io_internals_sclRead));
  assign when_I2cCtrl_l397 = (! i2cCtrl_io_internals_sclRead);
  assign when_StateMachine_l238 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_START1)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_START1));
  assign when_StateMachine_l238_1 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_START2)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_START2));
  assign when_StateMachine_l238_2 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_LOW)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_LOW));
  assign when_StateMachine_l238_3 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_HIGH)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_HIGH));
  assign when_StateMachine_l238_4 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_RESTART)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_RESTART));
  assign when_StateMachine_l238_5 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_STOP1)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_STOP1));
  assign when_StateMachine_l238_6 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_STOP2)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_STOP2));
  assign when_StateMachine_l238_7 = ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_TBUF)) && (bridge_masterLogic_fsm_stateNext == bridge_masterLogic_fsm_enumDef_TBUF));
  assign when_I2cCtrl_l309 = (bridge_masterLogic_drop || ((! (bridge_masterLogic_fsm_stateReg == bridge_masterLogic_fsm_enumDef_IDLE)) && (i2cCtrl_io_bus_cmd_kind == I2cSlaveCmdMode_DROP)));
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      io_axil4Ctrl_ar_rValid <= 1'b0;
      bridge_rxData_event <= 1'b0;
      bridge_rxData_listen <= 1'b0;
      bridge_rxData_valid <= 1'b0;
      bridge_rxAck_listen <= 1'b0;
      bridge_rxAck_valid <= 1'b0;
      bridge_txData_valid <= 1'b1;
      bridge_txData_repeat <= 1'b1;
      bridge_txData_enable <= 1'b0;
      bridge_txAck_valid <= 1'b1;
      bridge_txAck_repeat <= 1'b1;
      bridge_txAck_enable <= 1'b0;
      bridge_addressFilter_addresses_0_enable <= 1'b0;
      bridge_addressFilter_addresses_1_enable <= 1'b0;
      bridge_addressFilter_addresses_2_enable <= 1'b0;
      bridge_addressFilter_addresses_3_enable <= 1'b0;
      bridge_addressFilter_state <= 2'b00;
      bridge_masterLogic_start <= 1'b0;
      bridge_masterLogic_stop <= 1'b0;
      bridge_masterLogic_drop <= 1'b0;
      bridge_dataCounter <= 3'b000;
      bridge_inAckState <= 1'b0;
      bridge_wasntAck <= 1'b0;
      bridge_interruptCtrl_rxDataEnable <= 1'b0;
      bridge_interruptCtrl_rxAckEnable <= 1'b0;
      bridge_interruptCtrl_txDataEnable <= 1'b0;
      bridge_interruptCtrl_txAckEnable <= 1'b0;
      bridge_interruptCtrl_start_enable <= 1'b0;
      bridge_interruptCtrl_start_flag <= 1'b0;
      bridge_interruptCtrl_restart_enable <= 1'b0;
      bridge_interruptCtrl_restart_flag <= 1'b0;
      bridge_interruptCtrl_end_enable <= 1'b0;
      bridge_interruptCtrl_end_flag <= 1'b0;
      bridge_interruptCtrl_drop_enable <= 1'b0;
      bridge_interruptCtrl_drop_flag <= 1'b0;
      bridge_interruptCtrl_filterGen_enable <= 1'b0;
      bridge_interruptCtrl_filterGen_flag <= 1'b0;
      bridge_interruptCtrl_clockGen_enable <= 1'b0;
      bridge_interruptCtrl_clockGen_flag <= 1'b0;
      _zz_io_config_samplingClockDivider <= 10'h0;
      bridge_i2cBuffer_scl_write_regNext <= 1'b1;
      bridge_i2cBuffer_sda_write_regNext <= 1'b1;
      bridge_masterLogic_fsm_stateReg <= bridge_masterLogic_fsm_enumDef_BOOT;
    end else begin
      if(_zz_writeJoinEvent_translated_ready) begin
        _zz_axil4Ctrl_bvalid_2 <= (writeJoinEvent_translated_valid && _zz_axil4Ctrl_bvalid);
      end
      if(axil4Ctrl_arready) begin
        io_axil4Ctrl_ar_rValid <= axil4Ctrl_arvalid;
      end
      bridge_rxData_event <= 1'b0;
      if(when_I2cCtrl_l189) begin
        bridge_rxData_valid <= 1'b0;
      end
      if(when_I2cCtrl_l202) begin
        bridge_rxAck_valid <= 1'b0;
      end
      if(bridge_rxData_event) begin
        case(bridge_addressFilter_state)
          2'b00 : begin
            bridge_addressFilter_state <= 2'b01;
          end
          2'b01 : begin
            bridge_addressFilter_state <= 2'b10;
          end
          default : begin
          end
        endcase
      end
      if(bridge_frameReset) begin
        bridge_addressFilter_state <= 2'b00;
      end
      if(when_I2cCtrl_l275) begin
        bridge_txAck_valid <= 1'b0;
      end
      if(when_BusSlaveFactory_l366) begin
        if(when_BusSlaveFactory_l368) begin
          bridge_masterLogic_start <= _zz_bridge_masterLogic_start[0];
        end
      end
      if(when_BusSlaveFactory_l366_1) begin
        if(when_BusSlaveFactory_l368_1) begin
          bridge_masterLogic_stop <= _zz_bridge_masterLogic_stop[0];
        end
      end
      if(when_BusSlaveFactory_l366_2) begin
        if(when_BusSlaveFactory_l368_2) begin
          bridge_masterLogic_drop <= _zz_bridge_masterLogic_drop[0];
        end
      end
      case(i2cCtrl_io_bus_cmd_kind)
        I2cSlaveCmdMode_READ : begin
          if(when_I2cCtrl_l500) begin
            bridge_dataCounter <= (bridge_dataCounter + 3'b001);
            if(when_I2cCtrl_l504) begin
              if(bridge_txData_disableOnDataConflict) begin
                bridge_txData_enable <= 1'b0;
              end
              if(bridge_txAck_disableOnDataConflict) begin
                bridge_txAck_enable <= 1'b0;
              end
            end
            if(when_I2cCtrl_l508) begin
              if(bridge_rxData_listen) begin
                bridge_rxData_valid <= 1'b1;
              end
              bridge_rxData_event <= 1'b1;
              bridge_inAckState <= 1'b1;
              if(when_I2cCtrl_l512) begin
                bridge_txData_valid <= 1'b0;
              end
            end
          end else begin
            if(bridge_rxAck_listen) begin
              bridge_rxAck_valid <= 1'b1;
            end
            bridge_inAckState <= 1'b0;
            bridge_wasntAck <= i2cCtrl_io_bus_cmd_data;
            if(when_I2cCtrl_l522) begin
              bridge_txAck_valid <= 1'b0;
            end
          end
        end
        default : begin
        end
      endcase
      if(bridge_frameReset) begin
        bridge_inAckState <= 1'b0;
        bridge_dataCounter <= 3'b000;
        bridge_wasntAck <= 1'b0;
      end
      if(when_I2cCtrl_l535) begin
        bridge_txData_valid <= 1'b1;
        bridge_txData_enable <= 1'b0;
        bridge_txData_repeat <= 1'b1;
        bridge_txAck_valid <= 1'b1;
        bridge_txAck_enable <= 1'b0;
        bridge_txAck_repeat <= 1'b1;
        bridge_rxData_listen <= 1'b0;
        bridge_rxAck_listen <= 1'b0;
      end
      if(when_I2cCtrl_l569) begin
        bridge_interruptCtrl_start_flag <= 1'b1;
      end
      if(when_I2cCtrl_l569_1) begin
        bridge_interruptCtrl_start_flag <= 1'b0;
      end
      if(when_BusSlaveFactory_l335) begin
        if(when_BusSlaveFactory_l337) begin
          bridge_interruptCtrl_start_flag <= _zz_bridge_interruptCtrl_start_flag[0];
        end
      end
      if(when_I2cCtrl_l569_2) begin
        bridge_interruptCtrl_restart_flag <= 1'b1;
      end
      if(when_I2cCtrl_l569_3) begin
        bridge_interruptCtrl_restart_flag <= 1'b0;
      end
      if(when_BusSlaveFactory_l335_1) begin
        if(when_BusSlaveFactory_l337_1) begin
          bridge_interruptCtrl_restart_flag <= _zz_bridge_interruptCtrl_restart_flag[0];
        end
      end
      if(when_I2cCtrl_l569_4) begin
        bridge_interruptCtrl_end_flag <= 1'b1;
      end
      if(when_I2cCtrl_l569_5) begin
        bridge_interruptCtrl_end_flag <= 1'b0;
      end
      if(when_BusSlaveFactory_l335_2) begin
        if(when_BusSlaveFactory_l337_2) begin
          bridge_interruptCtrl_end_flag <= _zz_bridge_interruptCtrl_end_flag[0];
        end
      end
      if(when_I2cCtrl_l569_6) begin
        bridge_interruptCtrl_drop_flag <= 1'b1;
      end
      if(when_I2cCtrl_l569_7) begin
        bridge_interruptCtrl_drop_flag <= 1'b0;
      end
      if(when_BusSlaveFactory_l335_3) begin
        if(when_BusSlaveFactory_l337_3) begin
          bridge_interruptCtrl_drop_flag <= _zz_bridge_interruptCtrl_drop_flag[0];
        end
      end
      if(when_I2cCtrl_l569_8) begin
        bridge_interruptCtrl_filterGen_flag <= 1'b1;
      end
      if(when_I2cCtrl_l569_9) begin
        bridge_interruptCtrl_filterGen_flag <= 1'b0;
      end
      if(when_BusSlaveFactory_l335_4) begin
        if(when_BusSlaveFactory_l337_4) begin
          bridge_interruptCtrl_filterGen_flag <= _zz_bridge_interruptCtrl_filterGen_flag[0];
        end
      end
      if(when_I2cCtrl_l569_10) begin
        bridge_interruptCtrl_clockGen_flag <= 1'b1;
      end
      if(when_I2cCtrl_l569_11) begin
        bridge_interruptCtrl_clockGen_flag <= 1'b0;
      end
      if(when_BusSlaveFactory_l335_5) begin
        if(when_BusSlaveFactory_l337_5) begin
          bridge_interruptCtrl_clockGen_flag <= _zz_bridge_interruptCtrl_clockGen_flag[0];
        end
      end
      bridge_i2cBuffer_scl_write_regNext <= bridge_i2cBuffer_scl_write;
      bridge_i2cBuffer_sda_write_regNext <= bridge_i2cBuffer_sda_write;
      case(axil4Ctrl_awaddr)
        8'h08 : begin
          if(writeOccur) begin
            bridge_rxData_listen <= axil4Ctrl_wdata[9];
          end
        end
        8'h0c : begin
          if(writeOccur) begin
            bridge_rxAck_listen <= axil4Ctrl_wdata[9];
          end
        end
        8'h0 : begin
          if(writeOccur) begin
            bridge_txData_repeat <= axil4Ctrl_wdata[10];
            bridge_txData_valid <= axil4Ctrl_wdata[8];
            bridge_txData_enable <= axil4Ctrl_wdata[9];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            bridge_txAck_repeat <= axil4Ctrl_wdata[10];
            bridge_txAck_valid <= axil4Ctrl_wdata[8];
            bridge_txAck_enable <= axil4Ctrl_wdata[9];
          end
        end
        8'h88 : begin
          if(writeOccur) begin
            bridge_addressFilter_addresses_0_enable <= axil4Ctrl_wdata[15];
          end
        end
        8'h8c : begin
          if(writeOccur) begin
            bridge_addressFilter_addresses_1_enable <= axil4Ctrl_wdata[15];
          end
        end
        8'h90 : begin
          if(writeOccur) begin
            bridge_addressFilter_addresses_2_enable <= axil4Ctrl_wdata[15];
          end
        end
        8'h94 : begin
          if(writeOccur) begin
            bridge_addressFilter_addresses_3_enable <= axil4Ctrl_wdata[15];
          end
        end
        8'h20 : begin
          if(writeOccur) begin
            bridge_interruptCtrl_rxDataEnable <= axil4Ctrl_wdata[0];
            bridge_interruptCtrl_rxAckEnable <= axil4Ctrl_wdata[1];
            bridge_interruptCtrl_txDataEnable <= axil4Ctrl_wdata[2];
            bridge_interruptCtrl_txAckEnable <= axil4Ctrl_wdata[3];
            bridge_interruptCtrl_start_enable <= axil4Ctrl_wdata[4];
            bridge_interruptCtrl_restart_enable <= axil4Ctrl_wdata[5];
            bridge_interruptCtrl_end_enable <= axil4Ctrl_wdata[6];
            bridge_interruptCtrl_drop_enable <= axil4Ctrl_wdata[7];
            bridge_interruptCtrl_filterGen_enable <= axil4Ctrl_wdata[17];
            bridge_interruptCtrl_clockGen_enable <= axil4Ctrl_wdata[16];
          end
        end
        8'h28 : begin
          if(writeOccur) begin
            _zz_io_config_samplingClockDivider <= axil4Ctrl_wdata[9 : 0];
          end
        end
        default : begin
        end
      endcase
      bridge_masterLogic_fsm_stateReg <= bridge_masterLogic_fsm_stateNext;
      case(bridge_masterLogic_fsm_stateReg)
        bridge_masterLogic_fsm_enumDef_IDLE : begin
          if(!when_I2cCtrl_l321) begin
            if(when_I2cCtrl_l323) begin
              bridge_txData_valid <= 1'b0;
            end
          end
        end
        bridge_masterLogic_fsm_enumDef_START1 : begin
        end
        bridge_masterLogic_fsm_enumDef_START2 : begin
          if(bridge_masterLogic_timer_done) begin
            bridge_masterLogic_start <= 1'b0;
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
            bridge_masterLogic_stop <= 1'b0;
          end
        end
        bridge_masterLogic_fsm_enumDef_TBUF : begin
        end
        default : begin
        end
      endcase
      if(when_I2cCtrl_l309) begin
        bridge_masterLogic_start <= 1'b0;
        bridge_masterLogic_stop <= 1'b0;
        bridge_masterLogic_drop <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(_zz_writeJoinEvent_translated_ready) begin
      _zz_axil4Ctrl_bresp <= writeJoinEvent_translated_payload_resp;
    end
    if(axil4Ctrl_arready) begin
      io_axil4Ctrl_ar_rData_addr <= axil4Ctrl_araddr;
      io_axil4Ctrl_ar_rData_prot <= axil4Ctrl_arprot;
    end
    if(bridge_rxData_event) begin
      case(bridge_addressFilter_state)
        2'b00 : begin
          bridge_addressFilter_byte0 <= bridge_rxData_value;
        end
        2'b01 : begin
          bridge_addressFilter_byte1 <= bridge_rxData_value;
        end
        default : begin
        end
      endcase
    end
    _zz_when_I2cCtrl_l275_regNext <= _zz_when_I2cCtrl_l275;
    bridge_masterLogic_timer_value <= (bridge_masterLogic_timer_value - _zz_bridge_masterLogic_timer_value);
    if(when_I2cCtrl_l318) begin
      bridge_masterLogic_fsm_inFrameLate <= 1'b1;
    end
    if(when_I2cCtrl_l318_1) begin
      bridge_masterLogic_fsm_inFrameLate <= 1'b0;
    end
    case(i2cCtrl_io_bus_cmd_kind)
      I2cSlaveCmdMode_READ : begin
        if(when_I2cCtrl_l500) begin
          bridge_rxData_value[_zz_bridge_rxData_value] <= i2cCtrl_io_bus_cmd_data;
        end else begin
          bridge_rxAck_value <= i2cCtrl_io_bus_cmd_data;
        end
      end
      default : begin
      end
    endcase
    if(when_I2cCtrl_l535) begin
      bridge_txData_disableOnDataConflict <= 1'b0;
      bridge_txAck_disableOnDataConflict <= 1'b0;
    end
    _zz_when_I2cCtrl_l569_regNext <= _zz_when_I2cCtrl_l569;
    bridge_masterLogic_fsm_isBusy_regNext <= bridge_masterLogic_fsm_isBusy;
    case(axil4Ctrl_awaddr)
      8'h0 : begin
        if(writeOccur) begin
          bridge_txData_value <= axil4Ctrl_wdata[7 : 0];
          bridge_txData_disableOnDataConflict <= axil4Ctrl_wdata[11];
        end
      end
      8'h04 : begin
        if(writeOccur) begin
          bridge_txAck_value <= axil4Ctrl_wdata[0];
          bridge_txAck_disableOnDataConflict <= axil4Ctrl_wdata[11];
        end
      end
      8'h88 : begin
        if(writeOccur) begin
          bridge_addressFilter_addresses_0_value <= axil4Ctrl_wdata[9 : 0];
          bridge_addressFilter_addresses_0_is10Bit <= axil4Ctrl_wdata[14];
        end
      end
      8'h8c : begin
        if(writeOccur) begin
          bridge_addressFilter_addresses_1_value <= axil4Ctrl_wdata[9 : 0];
          bridge_addressFilter_addresses_1_is10Bit <= axil4Ctrl_wdata[14];
        end
      end
      8'h90 : begin
        if(writeOccur) begin
          bridge_addressFilter_addresses_2_value <= axil4Ctrl_wdata[9 : 0];
          bridge_addressFilter_addresses_2_is10Bit <= axil4Ctrl_wdata[14];
        end
      end
      8'h94 : begin
        if(writeOccur) begin
          bridge_addressFilter_addresses_3_value <= axil4Ctrl_wdata[9 : 0];
          bridge_addressFilter_addresses_3_is10Bit <= axil4Ctrl_wdata[14];
        end
      end
      8'h50 : begin
        if(writeOccur) begin
          bridge_masterLogic_timer_tLow <= axil4Ctrl_wdata[11 : 0];
        end
      end
      8'h54 : begin
        if(writeOccur) begin
          bridge_masterLogic_timer_tHigh <= axil4Ctrl_wdata[11 : 0];
        end
      end
      8'h58 : begin
        if(writeOccur) begin
          bridge_masterLogic_timer_tBuf <= axil4Ctrl_wdata[11 : 0];
        end
      end
      8'h2c : begin
        if(writeOccur) begin
          _zz_io_config_timeout <= axil4Ctrl_wdata[19 : 0];
        end
      end
      8'h30 : begin
        if(writeOccur) begin
          _zz_io_config_tsuData <= axil4Ctrl_wdata[5 : 0];
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
        if(when_I2cCtrl_l397) begin
          bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tHigh;
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
    if(when_StateMachine_l238) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tHigh;
    end
    if(when_StateMachine_l238_1) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tLow;
    end
    if(when_StateMachine_l238_2) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tLow;
    end
    if(when_StateMachine_l238_3) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tHigh;
    end
    if(when_StateMachine_l238_4) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tHigh;
    end
    if(when_StateMachine_l238_5) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tHigh;
    end
    if(when_StateMachine_l238_6) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tHigh;
    end
    if(when_StateMachine_l238_7) begin
      bridge_masterLogic_timer_value <= bridge_masterLogic_timer_tBuf;
    end
  end

  always @(posedge clk) begin
    if(!resetn) begin
      i2cCtrl_io_internals_inFrame_regNext <= 1'b0;
    end else begin
      i2cCtrl_io_internals_inFrame_regNext <= i2cCtrl_io_internals_inFrame;
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
  wire                when_I2CSlave_l58;
  wire                when_I2CSlave_l61;
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
  wire                when_I2CSlave_l221;
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
  wire                when_Stream_l342;
  wire                ctrl_rspAhead_valid;
  wire                ctrl_rspAhead_payload_enable;
  wire                ctrl_rspAhead_payload_data;
  wire                when_I2CSlave_l271;
  wire                when_I2CSlave_l275;
  wire                when_I2CSlave_l281;
  reg        [19:0]   timeout_counter;
  reg                 timeout_tick;
  wire                when_I2CSlave_l300;
  wire                when_I2CSlave_l306;
  `ifndef SYNTHESIS
  reg [55:0] io_bus_cmd_kind_string;
  `endif


  BufferCC io_i2c_scl_read_buffercc (
    .io_dataIn     (io_i2c_scl_read                      ), //i
    .io_dataOut    (io_i2c_scl_read_buffercc_io_dataOut  ), //o
    .clk           (clk                                  ), //i
    .resetn        (resetn                               )  //i
  );
  BufferCC io_i2c_sda_read_buffercc (
    .io_dataIn     (io_i2c_sda_read                      ), //i
    .io_dataOut    (io_i2c_sda_read_buffercc_io_dataOut  ), //o
    .clk           (clk                                  ), //i
    .resetn        (resetn                               )  //i
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
  `endif

  assign filter_timer_tick = (filter_timer_counter == 10'h0);
  assign filter_sampler_sclSync = io_i2c_scl_read_buffercc_io_dataOut;
  assign filter_sampler_sdaSync = io_i2c_sda_read_buffercc_io_dataOut;
  assign _zz_filter_sampler_sclSamples_0 = filter_sampler_sclSync;
  assign filter_sampler_sclSamples_0 = _zz_filter_sampler_sclSamples_0;
  assign filter_sampler_sclSamples_1 = _zz_filter_sampler_sclSamples_1;
  assign filter_sampler_sclSamples_2 = _zz_filter_sampler_sclSamples_2;
  assign _zz_filter_sampler_sdaSamples_0 = filter_sampler_sdaSync;
  assign filter_sampler_sdaSamples_0 = _zz_filter_sampler_sdaSamples_0;
  assign filter_sampler_sdaSamples_1 = _zz_filter_sampler_sdaSamples_1;
  assign filter_sampler_sdaSamples_2 = _zz_filter_sampler_sdaSamples_2;
  assign when_I2CSlave_l58 = (((filter_sampler_sdaSamples_0 != filter_sda) && (filter_sampler_sdaSamples_1 != filter_sda)) && (filter_sampler_sdaSamples_2 != filter_sda));
  assign when_I2CSlave_l61 = (((filter_sampler_sclSamples_0 != filter_scl) && (filter_sampler_sclSamples_1 != filter_scl)) && (filter_sampler_sclSamples_2 != filter_scl));
  assign sclEdge_rise = ((! filter_scl_regNext) && filter_scl);
  assign sclEdge_fall = (filter_scl_regNext && (! filter_scl));
  assign sclEdge_toggle = (filter_scl_regNext != filter_scl);
  assign sdaEdge_rise = ((! filter_sda_regNext) && filter_sda);
  assign sdaEdge_fall = (filter_sda_regNext && (! filter_sda));
  assign sdaEdge_toggle = (filter_sda_regNext != filter_sda);
  assign detector_start = (filter_scl && sdaEdge_fall);
  assign detector_stop = (filter_scl && sdaEdge_rise);
  assign tsuData_done = (tsuData_counter == 6'h0);
  always @(*) begin
    tsuData_reset = 1'b0;
    if(ctrl_inFrameData) begin
      tsuData_reset = (! ctrl_rspAhead_valid);
    end
  end

  assign when_I2CSlave_l221 = (! tsuData_done);
  always @(*) begin
    ctrl_sdaWrite = 1'b1;
    if(ctrl_inFrameData) begin
      if(when_I2CSlave_l281) begin
        ctrl_sdaWrite = ctrl_rspAhead_payload_data;
      end
    end
  end

  always @(*) begin
    ctrl_sclWrite = 1'b1;
    if(ctrl_inFrameData) begin
      if(when_I2CSlave_l275) begin
        ctrl_sclWrite = 1'b0;
      end
    end
  end

  always @(*) begin
    ctrl_rspBufferIn_ready = ctrl_rspBuffer_ready;
    if(when_Stream_l342) begin
      ctrl_rspBufferIn_ready = 1'b1;
    end
  end

  assign when_Stream_l342 = (! ctrl_rspBuffer_valid);
  assign ctrl_rspBuffer_valid = ctrl_rspBufferIn_rValid;
  assign ctrl_rspBuffer_payload_enable = ctrl_rspBufferIn_rData_enable;
  assign ctrl_rspBuffer_payload_data = ctrl_rspBufferIn_rData_data;
  assign ctrl_rspAhead_valid = (ctrl_rspBuffer_valid ? ctrl_rspBuffer_valid : ctrl_rspBufferIn_valid);
  assign ctrl_rspAhead_payload_enable = (ctrl_rspBuffer_valid ? ctrl_rspBuffer_payload_enable : ctrl_rspBufferIn_payload_enable);
  assign ctrl_rspAhead_payload_data = (ctrl_rspBuffer_valid ? ctrl_rspBuffer_payload_data : ctrl_rspBufferIn_payload_data);
  assign ctrl_rspBufferIn_valid = io_bus_rsp_valid;
  assign ctrl_rspBufferIn_payload_enable = io_bus_rsp_enable;
  assign ctrl_rspBufferIn_payload_data = io_bus_rsp_data;
  always @(*) begin
    ctrl_rspBuffer_ready = 1'b0;
    if(ctrl_inFrame) begin
      if(sclEdge_fall) begin
        ctrl_rspBuffer_ready = 1'b1;
      end
    end
  end

  always @(*) begin
    io_bus_cmd_kind = I2cSlaveCmdMode_NONE;
    if(ctrl_inFrame) begin
      if(sclEdge_rise) begin
        io_bus_cmd_kind = I2cSlaveCmdMode_READ;
      end
    end
    if(ctrl_inFrameData) begin
      if(when_I2CSlave_l271) begin
        io_bus_cmd_kind = I2cSlaveCmdMode_DRIVE;
      end
    end
    if(detector_start) begin
      io_bus_cmd_kind = (ctrl_inFrame ? I2cSlaveCmdMode_RESTART : I2cSlaveCmdMode_START);
    end
    if(when_I2CSlave_l306) begin
      if(ctrl_inFrame) begin
        io_bus_cmd_kind = (timeout_tick ? I2cSlaveCmdMode_DROP : I2cSlaveCmdMode_STOP);
      end
    end
  end

  assign io_bus_cmd_data = filter_sda;
  assign when_I2CSlave_l271 = ((! ctrl_rspBuffer_valid) || ctrl_rspBuffer_ready);
  assign when_I2CSlave_l275 = ((! ctrl_rspAhead_valid) || (ctrl_rspAhead_payload_enable && (! tsuData_done)));
  assign when_I2CSlave_l281 = (ctrl_rspAhead_valid && ctrl_rspAhead_payload_enable);
  always @(*) begin
    timeout_tick = (timeout_counter == 20'h0);
    if(when_I2CSlave_l300) begin
      timeout_tick = 1'b0;
    end
  end

  assign when_I2CSlave_l300 = (sclEdge_toggle || (! ctrl_inFrame));
  assign when_I2CSlave_l306 = (detector_stop || timeout_tick);
  assign io_internals_inFrame = ctrl_inFrame;
  assign io_internals_sdaRead = filter_sda;
  assign io_internals_sclRead = filter_scl;
  assign io_i2c_scl_write = ctrl_sclWrite;
  assign io_i2c_sda_write = ctrl_sdaWrite;
  always @(posedge clk) begin
    if(!resetn) begin
      filter_timer_counter <= 10'h0;
      _zz_filter_sampler_sclSamples_1 <= 1'b1;
      _zz_filter_sampler_sclSamples_2 <= 1'b1;
      _zz_filter_sampler_sdaSamples_1 <= 1'b1;
      _zz_filter_sampler_sdaSamples_2 <= 1'b1;
      filter_sda <= 1'b1;
      filter_scl <= 1'b1;
      filter_scl_regNext <= 1'b1;
      filter_sda_regNext <= 1'b1;
      tsuData_counter <= 6'h0;
      ctrl_inFrame <= 1'b0;
      ctrl_inFrameData <= 1'b0;
      ctrl_rspBufferIn_rValid <= 1'b0;
      timeout_counter <= 20'h0;
    end else begin
      filter_timer_counter <= (filter_timer_counter - 10'h001);
      if(filter_timer_tick) begin
        filter_timer_counter <= io_config_samplingClockDivider;
      end
      if(filter_timer_tick) begin
        _zz_filter_sampler_sclSamples_1 <= _zz_filter_sampler_sclSamples_0;
      end
      if(filter_timer_tick) begin
        _zz_filter_sampler_sclSamples_2 <= _zz_filter_sampler_sclSamples_1;
      end
      if(filter_timer_tick) begin
        _zz_filter_sampler_sdaSamples_1 <= _zz_filter_sampler_sdaSamples_0;
      end
      if(filter_timer_tick) begin
        _zz_filter_sampler_sdaSamples_2 <= _zz_filter_sampler_sdaSamples_1;
      end
      if(filter_timer_tick) begin
        if(when_I2CSlave_l58) begin
          filter_sda <= filter_sampler_sdaSamples_2;
        end
        if(when_I2CSlave_l61) begin
          filter_scl <= filter_sampler_sclSamples_2;
        end
      end
      filter_scl_regNext <= filter_scl;
      filter_sda_regNext <= filter_sda;
      if(when_I2CSlave_l221) begin
        tsuData_counter <= (tsuData_counter - 6'h01);
      end
      if(tsuData_reset) begin
        tsuData_counter <= io_config_tsuData;
      end
      if(ctrl_rspBufferIn_ready) begin
        ctrl_rspBufferIn_rValid <= ctrl_rspBufferIn_valid;
      end
      if(ctrl_inFrame) begin
        if(sclEdge_fall) begin
          ctrl_inFrameData <= 1'b1;
        end
      end
      if(detector_start) begin
        ctrl_inFrame <= 1'b1;
        ctrl_inFrameData <= 1'b0;
      end
      timeout_counter <= (timeout_counter - 20'h00001);
      if(when_I2CSlave_l300) begin
        timeout_counter <= io_config_timeout;
      end
      if(when_I2CSlave_l306) begin
        ctrl_inFrame <= 1'b0;
        ctrl_inFrameData <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(ctrl_rspBufferIn_ready) begin
      ctrl_rspBufferIn_rData_enable <= ctrl_rspBufferIn_payload_enable;
      ctrl_rspBufferIn_rData_data <= ctrl_rspBufferIn_payload_data;
    end
  end


endmodule

//BufferCC replaced by BufferCC

module BufferCC (
  input               io_dataIn,
  output              io_dataOut,
  input               clk,
  input               resetn
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    if(!resetn) begin
      buffers_0 <= 1'b1;
      buffers_1 <= 1'b1;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule
