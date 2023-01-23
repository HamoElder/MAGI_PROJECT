// Generator : SpinalHDL v1.8.0    git head : 4e3563a282582b41f4eaafc503787757251d23ea
// Component : AxiLite4Uart
// Git hash  : 17ba3429c74144a7d37c48904a91bdac2e1b784a

`timescale 1ns/1ps

module AxiLite4Uart (
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
  output              uart_txd,
  input               uart_rxd,
  output              interrupt,
  input               clk,
  input               resetn
);
  localparam UartStopType_ONE = 1'd0;
  localparam UartStopType_TWO = 1'd1;
  localparam UartParityType_NONE = 2'd0;
  localparam UartParityType_EVEN = 2'd1;
  localparam UartParityType_ODD = 2'd2;

  reg                 toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready;
  wire                uartCtrl_1_io_write_ready;
  wire                uartCtrl_1_io_read_valid;
  wire       [7:0]    uartCtrl_1_io_read_payload;
  wire                uartCtrl_1_io_uart_txd;
  wire                uartCtrl_1_io_readError;
  wire                uartCtrl_1_io_readBreak;
  wire                bridge_write_streamUnbuffered_queueWithOccupancy_io_push_ready;
  wire                bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid;
  wire       [7:0]    bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_payload;
  wire       [5:0]    bridge_write_streamUnbuffered_queueWithOccupancy_io_occupancy;
  wire       [5:0]    bridge_write_streamUnbuffered_queueWithOccupancy_io_availability;
  wire                toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_push_ready;
  wire                toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_pop_valid;
  wire       [7:0]    toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_pop_payload;
  wire       [5:0]    toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_occupancy;
  wire       [5:0]    toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_availability;
  wire       [0:0]    _zz_bridge_misc_readError;
  wire       [0:0]    _zz_bridge_misc_readOverflowError;
  wire       [0:0]    _zz_bridge_misc_breakDetected;
  wire       [0:0]    _zz_bridge_misc_doBreak;
  wire       [0:0]    _zz_bridge_misc_doBreak_1;
  wire       [19:0]   _zz_bridge_uartConfigReg_clockDivider;
  wire       [19:0]   _zz_bridge_uartConfigReg_clockDivider_1;
  wire       [5:0]    _zz_readRsp_data;
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
  reg                 axil4Ctrl_ar_rValid;
  reg        [7:0]    axil4Ctrl_ar_rData_addr;
  reg        [2:0]    axil4Ctrl_ar_rData_prot;
  wire                when_Stream_l368_1;
  reg        [31:0]   readRsp_data;
  wire       [1:0]    readRsp_resp;
  wire                _zz_axil4Ctrl_rvalid;
  wire                writeOccur;
  wire                readOccur;
  wire                bridge_busCtrlWrapped_readErrorFlag;
  wire                bridge_busCtrlWrapped_writeErrorFlag;
  reg        [2:0]    bridge_uartConfigReg_frame_dataLength;
  reg        [0:0]    bridge_uartConfigReg_frame_stop;
  reg        [1:0]    bridge_uartConfigReg_frame_parity;
  reg        [19:0]   bridge_uartConfigReg_clockDivider;
  reg                 _zz_bridge_write_streamUnbuffered_valid;
  wire                bridge_write_streamUnbuffered_valid;
  wire                bridge_write_streamUnbuffered_ready;
  wire       [7:0]    bridge_write_streamUnbuffered_payload;
  reg                 bridge_read_streamBreaked_valid;
  reg                 bridge_read_streamBreaked_ready;
  wire       [7:0]    bridge_read_streamBreaked_payload;
  reg                 bridge_interruptCtrl_writeIntEnable;
  reg                 bridge_interruptCtrl_readIntEnable;
  wire                bridge_interruptCtrl_readInt;
  wire                bridge_interruptCtrl_writeInt;
  wire                bridge_interruptCtrl_interrupt;
  reg                 bridge_misc_readError;
  reg                 when_BusSlaveFactory_l341;
  wire                when_BusSlaveFactory_l347;
  reg                 bridge_misc_readOverflowError;
  reg                 when_BusSlaveFactory_l341_1;
  wire                when_BusSlaveFactory_l347_1;
  wire                toplevel_uartCtrl_1_io_read_isStall;
  reg                 bridge_misc_breakDetected;
  reg                 toplevel_uartCtrl_1_io_readBreak_regNext;
  wire                when_UartCtrl_l155;
  reg                 when_BusSlaveFactory_l341_2;
  wire                when_BusSlaveFactory_l347_2;
  reg                 bridge_misc_doBreak;
  reg                 when_BusSlaveFactory_l377;
  wire                when_BusSlaveFactory_l379;
  reg                 when_BusSlaveFactory_l341_3;
  wire                when_BusSlaveFactory_l347_3;
  wire       [1:0]    _zz_bridge_uartConfigReg_frame_parity;
  wire       [0:0]    _zz_bridge_uartConfigReg_frame_stop;
  wire                when_AxiLite4SlaveFactory_l46;
  `ifndef SYNTHESIS
  reg [23:0] bridge_uartConfigReg_frame_stop_string;
  reg [31:0] bridge_uartConfigReg_frame_parity_string;
  reg [31:0] _zz_bridge_uartConfigReg_frame_parity_string;
  reg [23:0] _zz_bridge_uartConfigReg_frame_stop_string;
  `endif


  assign _zz_bridge_misc_readError = 1'b0;
  assign _zz_bridge_misc_readOverflowError = 1'b0;
  assign _zz_bridge_misc_breakDetected = 1'b0;
  assign _zz_bridge_misc_doBreak = 1'b1;
  assign _zz_bridge_misc_doBreak_1 = 1'b0;
  assign _zz_bridge_uartConfigReg_clockDivider_1 = axil4Ctrl_wdata[19 : 0];
  assign _zz_bridge_uartConfigReg_clockDivider = _zz_bridge_uartConfigReg_clockDivider_1;
  assign _zz_readRsp_data = (6'h20 - bridge_write_streamUnbuffered_queueWithOccupancy_io_occupancy);
  UartCtrl uartCtrl_1 (
    .io_config_frame_dataLength (bridge_uartConfigReg_frame_dataLength[2:0]                          ), //i
    .io_config_frame_stop       (bridge_uartConfigReg_frame_stop                                     ), //i
    .io_config_frame_parity     (bridge_uartConfigReg_frame_parity[1:0]                              ), //i
    .io_config_clockDivider     (bridge_uartConfigReg_clockDivider[19:0]                             ), //i
    .io_write_valid             (bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid       ), //i
    .io_write_ready             (uartCtrl_1_io_write_ready                                           ), //o
    .io_write_payload           (bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_payload[7:0]), //i
    .io_read_valid              (uartCtrl_1_io_read_valid                                            ), //o
    .io_read_ready              (toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_push_ready        ), //i
    .io_read_payload            (uartCtrl_1_io_read_payload[7:0]                                     ), //o
    .io_uart_txd                (uartCtrl_1_io_uart_txd                                              ), //o
    .io_uart_rxd                (uart_rxd                                                            ), //i
    .io_readError               (uartCtrl_1_io_readError                                             ), //o
    .io_writeBreak              (bridge_misc_doBreak                                                 ), //i
    .io_readBreak               (uartCtrl_1_io_readBreak                                             ), //o
    .clk                        (clk                                                                 ), //i
    .resetn                     (resetn                                                              )  //i
  );
  StreamFifo_1 bridge_write_streamUnbuffered_queueWithOccupancy (
    .io_push_valid   (bridge_write_streamUnbuffered_valid                                  ), //i
    .io_push_ready   (bridge_write_streamUnbuffered_queueWithOccupancy_io_push_ready       ), //o
    .io_push_payload (bridge_write_streamUnbuffered_payload[7:0]                           ), //i
    .io_pop_valid    (bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid        ), //o
    .io_pop_ready    (uartCtrl_1_io_write_ready                                            ), //i
    .io_pop_payload  (bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_payload[7:0] ), //o
    .io_flush        (1'b0                                                                 ), //i
    .io_occupancy    (bridge_write_streamUnbuffered_queueWithOccupancy_io_occupancy[5:0]   ), //o
    .io_availability (bridge_write_streamUnbuffered_queueWithOccupancy_io_availability[5:0]), //o
    .clk             (clk                                                                  ), //i
    .resetn          (resetn                                                               )  //i
  );
  StreamFifo_1 toplevel_uartCtrl_1_io_read_queueWithOccupancy (
    .io_push_valid   (uartCtrl_1_io_read_valid                                           ), //i
    .io_push_ready   (toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_push_ready       ), //o
    .io_push_payload (uartCtrl_1_io_read_payload[7:0]                                    ), //i
    .io_pop_valid    (toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_pop_valid        ), //o
    .io_pop_ready    (toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready        ), //i
    .io_pop_payload  (toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_pop_payload[7:0] ), //o
    .io_flush        (1'b0                                                               ), //i
    .io_occupancy    (toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_occupancy[5:0]   ), //o
    .io_availability (toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_availability[5:0]), //o
    .clk             (clk                                                                ), //i
    .resetn          (resetn                                                             )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(bridge_uartConfigReg_frame_stop)
      UartStopType_ONE : bridge_uartConfigReg_frame_stop_string = "ONE";
      UartStopType_TWO : bridge_uartConfigReg_frame_stop_string = "TWO";
      default : bridge_uartConfigReg_frame_stop_string = "???";
    endcase
  end
  always @(*) begin
    case(bridge_uartConfigReg_frame_parity)
      UartParityType_NONE : bridge_uartConfigReg_frame_parity_string = "NONE";
      UartParityType_EVEN : bridge_uartConfigReg_frame_parity_string = "EVEN";
      UartParityType_ODD : bridge_uartConfigReg_frame_parity_string = "ODD ";
      default : bridge_uartConfigReg_frame_parity_string = "????";
    endcase
  end
  always @(*) begin
    case(_zz_bridge_uartConfigReg_frame_parity)
      UartParityType_NONE : _zz_bridge_uartConfigReg_frame_parity_string = "NONE";
      UartParityType_EVEN : _zz_bridge_uartConfigReg_frame_parity_string = "EVEN";
      UartParityType_ODD : _zz_bridge_uartConfigReg_frame_parity_string = "ODD ";
      default : _zz_bridge_uartConfigReg_frame_parity_string = "????";
    endcase
  end
  always @(*) begin
    case(_zz_bridge_uartConfigReg_frame_stop)
      UartStopType_ONE : _zz_bridge_uartConfigReg_frame_stop_string = "ONE";
      UartStopType_TWO : _zz_bridge_uartConfigReg_frame_stop_string = "TWO";
      default : _zz_bridge_uartConfigReg_frame_stop_string = "???";
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
  assign readDataStage_valid = axil4Ctrl_ar_rValid; // @[Stream.scala 370:19]
  assign readDataStage_payload_addr = axil4Ctrl_ar_rData_addr; // @[Stream.scala 371:21]
  assign readDataStage_payload_prot = axil4Ctrl_ar_rData_prot; // @[Stream.scala 371:21]
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
      8'h0 : begin
        readRsp_data[16 : 16] = (bridge_read_streamBreaked_valid ^ 1'b0); // @[BusSlaveFactory.scala 942:69]
        readRsp_data[7 : 0] = bridge_read_streamBreaked_payload; // @[BusSlaveFactory.scala 942:69]
      end
      8'h04 : begin
        readRsp_data[21 : 16] = _zz_readRsp_data; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[15 : 15] = bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[29 : 24] = toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_occupancy; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[0 : 0] = bridge_interruptCtrl_writeIntEnable; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[1 : 1] = bridge_interruptCtrl_readIntEnable; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[8 : 8] = bridge_interruptCtrl_writeInt; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[9 : 9] = bridge_interruptCtrl_readInt; // @[BusSlaveFactory.scala 942:69]
      end
      8'h10 : begin
        readRsp_data[0 : 0] = bridge_misc_readError; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[1 : 1] = bridge_misc_readOverflowError; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[8 : 8] = uartCtrl_1_io_readBreak; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[9 : 9] = bridge_misc_breakDetected; // @[BusSlaveFactory.scala 942:69]
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready); // @[BaseType.scala 305:24]
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready); // @[BaseType.scala 305:24]
  assign uart_txd = uartCtrl_1_io_uart_txd; // @[AxiLite4Uart.scala 42:13]
  assign bridge_busCtrlWrapped_readErrorFlag = 1'b0; // @[BusSlaveFactory.scala 105:29]
  assign bridge_busCtrlWrapped_writeErrorFlag = 1'b0; // @[BusSlaveFactory.scala 106:30]
  always @(*) begin
    _zz_bridge_write_streamUnbuffered_valid = 1'b0; // @[BusSlaveFactory.scala 513:18]
    case(axil4Ctrl_awaddr)
      8'h0 : begin
        if(writeOccur) begin
          _zz_bridge_write_streamUnbuffered_valid = 1'b1; // @[BusSlaveFactory.scala 514:36]
        end
      end
      default : begin
      end
    endcase
  end

  assign bridge_write_streamUnbuffered_valid = _zz_bridge_write_streamUnbuffered_valid; // @[Flow.scala 72:15]
  assign bridge_write_streamUnbuffered_payload = axil4Ctrl_wdata[7 : 0]; // @[Flow.scala 73:17]
  assign bridge_write_streamUnbuffered_ready = bridge_write_streamUnbuffered_queueWithOccupancy_io_push_ready; // @[Stream.scala 295:16]
  always @(*) begin
    bridge_read_streamBreaked_valid = toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_pop_valid; // @[Stream.scala 294:16]
    if(uartCtrl_1_io_readBreak) begin
      bridge_read_streamBreaked_valid = 1'b0; // @[Stream.scala 439:18]
    end
  end

  always @(*) begin
    toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready = bridge_read_streamBreaked_ready; // @[Stream.scala 295:16]
    if(uartCtrl_1_io_readBreak) begin
      toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_pop_ready = 1'b1; // @[Stream.scala 440:18]
    end
  end

  assign bridge_read_streamBreaked_payload = toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_pop_payload; // @[Stream.scala 296:18]
  always @(*) begin
    bridge_read_streamBreaked_ready = 1'b0; // @[BusSlaveFactory.scala 576:16]
    case(readDataStage_payload_addr)
      8'h0 : begin
        if(readOccur) begin
          bridge_read_streamBreaked_ready = 1'b1; // @[BusSlaveFactory.scala 578:18]
        end
      end
      default : begin
      end
    endcase
  end

  assign bridge_interruptCtrl_readInt = (bridge_interruptCtrl_readIntEnable && bridge_read_streamBreaked_valid); // @[BaseType.scala 305:24]
  assign bridge_interruptCtrl_writeInt = (bridge_interruptCtrl_writeIntEnable && (! bridge_write_streamUnbuffered_queueWithOccupancy_io_pop_valid)); // @[BaseType.scala 305:24]
  assign bridge_interruptCtrl_interrupt = (bridge_interruptCtrl_readInt || bridge_interruptCtrl_writeInt); // @[BaseType.scala 305:24]
  always @(*) begin
    when_BusSlaveFactory_l341 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h10 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l341 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l347 = axil4Ctrl_wdata[0]; // @[BaseType.scala 305:24]
  always @(*) begin
    when_BusSlaveFactory_l341_1 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h10 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l341_1 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l347_1 = axil4Ctrl_wdata[1]; // @[BaseType.scala 305:24]
  assign toplevel_uartCtrl_1_io_read_isStall = (uartCtrl_1_io_read_valid && (! toplevel_uartCtrl_1_io_read_queueWithOccupancy_io_push_ready)); // @[BaseType.scala 305:24]
  assign when_UartCtrl_l155 = (uartCtrl_1_io_readBreak && (! toplevel_uartCtrl_1_io_readBreak_regNext)); // @[BaseType.scala 305:24]
  always @(*) begin
    when_BusSlaveFactory_l341_2 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h10 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l341_2 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l347_2 = axil4Ctrl_wdata[9]; // @[BaseType.scala 305:24]
  always @(*) begin
    when_BusSlaveFactory_l377 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h10 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l377 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l379 = axil4Ctrl_wdata[10]; // @[BaseType.scala 305:24]
  always @(*) begin
    when_BusSlaveFactory_l341_3 = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h10 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l341_3 = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l347_3 = axil4Ctrl_wdata[11]; // @[BaseType.scala 305:24]
  assign interrupt = bridge_interruptCtrl_interrupt; // @[AxiLite4Uart.scala 45:18]
  assign _zz_bridge_uartConfigReg_frame_parity = axil4Ctrl_wdata[9 : 8]; // @[Enum.scala 186:17]
  assign _zz_bridge_uartConfigReg_frame_stop = axil4Ctrl_wdata[16 : 16]; // @[Enum.scala 186:17]
  assign when_AxiLite4SlaveFactory_l46 = ((axil4Ctrl_awaddr & (~ 8'h03)) == 8'h08); // @[BaseType.scala 305:24]
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_1 <= 1'b0; // @[Data.scala 400:33]
      axil4Ctrl_ar_rValid <= 1'b0; // @[Data.scala 400:33]
      bridge_uartConfigReg_clockDivider <= 20'h0; // @[Data.scala 400:33]
      bridge_interruptCtrl_writeIntEnable <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_readIntEnable <= 1'b0; // @[Data.scala 400:33]
      bridge_misc_readError <= 1'b0; // @[Data.scala 400:33]
      bridge_misc_readOverflowError <= 1'b0; // @[Data.scala 400:33]
      bridge_misc_breakDetected <= 1'b0; // @[Data.scala 400:33]
      bridge_misc_doBreak <= 1'b0; // @[Data.scala 400:33]
    end else begin
      if(_zz_writeJoinEvent_translated_ready_1) begin
        _zz_axil4Ctrl_bvalid_1 <= (writeJoinEvent_translated_valid && _zz_writeJoinEvent_translated_ready); // @[Stream.scala 361:29]
      end
      if(axil4Ctrl_arready) begin
        axil4Ctrl_ar_rValid <= axil4Ctrl_arvalid; // @[Stream.scala 361:29]
      end
      if(when_BusSlaveFactory_l341) begin
        if(when_BusSlaveFactory_l347) begin
          bridge_misc_readError <= _zz_bridge_misc_readError[0]; // @[Bool.scala 189:10]
        end
      end
      if(uartCtrl_1_io_readError) begin
        bridge_misc_readError <= 1'b1; // @[UartCtrl.scala 152:91]
      end
      if(when_BusSlaveFactory_l341_1) begin
        if(when_BusSlaveFactory_l347_1) begin
          bridge_misc_readOverflowError <= _zz_bridge_misc_readOverflowError[0]; // @[Bool.scala 189:10]
        end
      end
      if(toplevel_uartCtrl_1_io_read_isStall) begin
        bridge_misc_readOverflowError <= 1'b1; // @[UartCtrl.scala 153:99]
      end
      if(when_UartCtrl_l155) begin
        bridge_misc_breakDetected <= 1'b1; // @[UartCtrl.scala 155:42]
      end
      if(when_BusSlaveFactory_l341_2) begin
        if(when_BusSlaveFactory_l347_2) begin
          bridge_misc_breakDetected <= _zz_bridge_misc_breakDetected[0]; // @[Bool.scala 189:10]
        end
      end
      if(when_BusSlaveFactory_l377) begin
        if(when_BusSlaveFactory_l379) begin
          bridge_misc_doBreak <= _zz_bridge_misc_doBreak[0]; // @[Bool.scala 189:10]
        end
      end
      if(when_BusSlaveFactory_l341_3) begin
        if(when_BusSlaveFactory_l347_3) begin
          bridge_misc_doBreak <= _zz_bridge_misc_doBreak_1[0]; // @[Bool.scala 189:10]
        end
      end
      case(axil4Ctrl_awaddr)
        8'h04 : begin
          if(writeOccur) begin
            bridge_interruptCtrl_writeIntEnable <= axil4Ctrl_wdata[0]; // @[Bool.scala 189:10]
            bridge_interruptCtrl_readIntEnable <= axil4Ctrl_wdata[1]; // @[Bool.scala 189:10]
          end
        end
        default : begin
        end
      endcase
      if(when_AxiLite4SlaveFactory_l46) begin
        if(writeOccur) begin
          bridge_uartConfigReg_clockDivider[19 : 0] <= _zz_bridge_uartConfigReg_clockDivider; // @[UInt.scala 381:56]
        end
      end
    end
  end

  always @(posedge clk) begin
    if(_zz_writeJoinEvent_translated_ready_1) begin
      _zz_axil4Ctrl_bresp <= writeJoinEvent_translated_payload_resp; // @[Stream.scala 362:28]
    end
    if(axil4Ctrl_arready) begin
      axil4Ctrl_ar_rData_addr <= axil4Ctrl_araddr; // @[Stream.scala 362:28]
      axil4Ctrl_ar_rData_prot <= axil4Ctrl_arprot; // @[Stream.scala 362:28]
    end
    toplevel_uartCtrl_1_io_readBreak_regNext <= uartCtrl_1_io_readBreak; // @[Reg.scala 39:30]
    case(axil4Ctrl_awaddr)
      8'h0c : begin
        if(writeOccur) begin
          bridge_uartConfigReg_frame_dataLength <= axil4Ctrl_wdata[2 : 0]; // @[UInt.scala 381:56]
          bridge_uartConfigReg_frame_parity <= _zz_bridge_uartConfigReg_frame_parity; // @[Enum.scala 188:10]
          bridge_uartConfigReg_frame_stop <= _zz_bridge_uartConfigReg_frame_stop; // @[Enum.scala 188:10]
        end
      end
      default : begin
      end
    endcase
  end


endmodule

//StreamFifo_1 replaced by StreamFifo_1

module StreamFifo_1 (
  input               io_push_valid,
  output              io_push_ready,
  input      [7:0]    io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [7:0]    io_pop_payload,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               resetn
);

  reg        [7:0]    _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
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
  wire                when_Stream_l1101;
  wire       [4:0]    logic_ptrDif;
  reg [7:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_pop_payload = 1'b1;
  always @(posedge clk) begin
    if(_zz_io_pop_payload) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= io_push_payload;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0; // @[when.scala 47:16]
    if(logic_pushing) begin
      _zz_1 = 1'b1; // @[when.scala 52:10]
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1; // @[Utils.scala 540:41]
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0; // @[Utils.scala 537:19]
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1; // @[Utils.scala 539:33]
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 5'h1f); // @[BaseType.scala 305:24]
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext); // @[Utils.scala 548:15]
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 5'h0; // @[Utils.scala 558:15]
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1; // @[Utils.scala 540:41]
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0; // @[Utils.scala 537:19]
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1; // @[Utils.scala 539:33]
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 5'h1f); // @[BaseType.scala 305:24]
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext); // @[Utils.scala 548:15]
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 5'h0; // @[Utils.scala 558:15]
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value); // @[BaseType.scala 305:24]
  assign logic_pushing = (io_push_valid && io_push_ready); // @[BaseType.scala 305:24]
  assign logic_popping = (io_pop_valid && io_pop_ready); // @[BaseType.scala 305:24]
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy)); // @[BaseType.scala 305:24]
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy); // @[BaseType.scala 305:24]
  assign io_push_ready = (! logic_full); // @[Stream.scala 1097:19]
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full)))); // @[Stream.scala 1098:18]
  assign io_pop_payload = _zz_logic_ram_port0; // @[Stream.scala 1099:20]
  assign when_Stream_l1101 = (logic_pushing != logic_popping); // @[BaseType.scala 305:24]
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value); // @[BaseType.scala 299:24]
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif}; // @[Stream.scala 1114:20]
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability}; // @[Stream.scala 1115:23]
  always @(posedge clk) begin
    if(!resetn) begin
      logic_pushPtr_value <= 5'h0; // @[Data.scala 400:33]
      logic_popPtr_value <= 5'h0; // @[Data.scala 400:33]
      logic_risingOccupancy <= 1'b0; // @[Data.scala 400:33]
      _zz_io_pop_valid <= 1'b0; // @[Data.scala 400:33]
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext; // @[Reg.scala 39:30]
      logic_popPtr_value <= logic_popPtr_valueNext; // @[Reg.scala 39:30]
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value); // @[Reg.scala 39:30]
      if(when_Stream_l1101) begin
        logic_risingOccupancy <= logic_pushing; // @[Stream.scala 1102:23]
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0; // @[Stream.scala 1129:23]
      end
    end
  end


endmodule

module UartCtrl (
  input      [2:0]    io_config_frame_dataLength,
  input      [0:0]    io_config_frame_stop,
  input      [1:0]    io_config_frame_parity,
  input      [19:0]   io_config_clockDivider,
  input               io_write_valid,
  output reg          io_write_ready,
  input      [7:0]    io_write_payload,
  output              io_read_valid,
  input               io_read_ready,
  output     [7:0]    io_read_payload,
  output              io_uart_txd,
  input               io_uart_rxd,
  output              io_readError,
  input               io_writeBreak,
  output              io_readBreak,
  input               clk,
  input               resetn
);
  localparam UartStopType_ONE = 1'd0;
  localparam UartStopType_TWO = 1'd1;
  localparam UartParityType_NONE = 2'd0;
  localparam UartParityType_EVEN = 2'd1;
  localparam UartParityType_ODD = 2'd2;

  wire                tx_io_write_ready;
  wire                tx_io_txd;
  wire                rx_io_read_valid;
  wire       [7:0]    rx_io_read_payload;
  wire                rx_io_rts;
  wire                rx_io_error;
  wire                rx_io_break;
  reg        [19:0]   clockDivider_counter;
  wire                clockDivider_tick;
  reg                 clockDivider_tickReg;
  reg                 io_write_thrown_valid;
  wire                io_write_thrown_ready;
  wire       [7:0]    io_write_thrown_payload;
  `ifndef SYNTHESIS
  reg [23:0] io_config_frame_stop_string;
  reg [31:0] io_config_frame_parity_string;
  `endif


  UartCtrlTx tx (
    .io_configFrame_dataLength (io_config_frame_dataLength[2:0]), //i
    .io_configFrame_stop       (io_config_frame_stop           ), //i
    .io_configFrame_parity     (io_config_frame_parity[1:0]    ), //i
    .io_samplingTick           (clockDivider_tickReg           ), //i
    .io_write_valid            (io_write_thrown_valid          ), //i
    .io_write_ready            (tx_io_write_ready              ), //o
    .io_write_payload          (io_write_thrown_payload[7:0]   ), //i
    .io_cts                    (1'b0                           ), //i
    .io_txd                    (tx_io_txd                      ), //o
    .io_break                  (io_writeBreak                  ), //i
    .clk                       (clk                            ), //i
    .resetn                    (resetn                         )  //i
  );
  UartCtrlRx rx (
    .io_configFrame_dataLength (io_config_frame_dataLength[2:0]), //i
    .io_configFrame_stop       (io_config_frame_stop           ), //i
    .io_configFrame_parity     (io_config_frame_parity[1:0]    ), //i
    .io_samplingTick           (clockDivider_tickReg           ), //i
    .io_read_valid             (rx_io_read_valid               ), //o
    .io_read_ready             (io_read_ready                  ), //i
    .io_read_payload           (rx_io_read_payload[7:0]        ), //o
    .io_rxd                    (io_uart_rxd                    ), //i
    .io_rts                    (rx_io_rts                      ), //o
    .io_error                  (rx_io_error                    ), //o
    .io_break                  (rx_io_break                    ), //o
    .clk                       (clk                            ), //i
    .resetn                    (resetn                         )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_config_frame_stop)
      UartStopType_ONE : io_config_frame_stop_string = "ONE";
      UartStopType_TWO : io_config_frame_stop_string = "TWO";
      default : io_config_frame_stop_string = "???";
    endcase
  end
  always @(*) begin
    case(io_config_frame_parity)
      UartParityType_NONE : io_config_frame_parity_string = "NONE";
      UartParityType_EVEN : io_config_frame_parity_string = "EVEN";
      UartParityType_ODD : io_config_frame_parity_string = "ODD ";
      default : io_config_frame_parity_string = "????";
    endcase
  end
  `endif

  assign clockDivider_tick = (clockDivider_counter == 20'h0); // @[BaseType.scala 305:24]
  always @(*) begin
    io_write_thrown_valid = io_write_valid; // @[Stream.scala 294:16]
    if(rx_io_break) begin
      io_write_thrown_valid = 1'b0; // @[Stream.scala 439:18]
    end
  end

  always @(*) begin
    io_write_ready = io_write_thrown_ready; // @[Stream.scala 295:16]
    if(rx_io_break) begin
      io_write_ready = 1'b1; // @[Stream.scala 440:18]
    end
  end

  assign io_write_thrown_payload = io_write_payload; // @[Stream.scala 296:18]
  assign io_write_thrown_ready = tx_io_write_ready; // @[Stream.scala 295:16]
  assign io_read_valid = rx_io_read_valid; // @[Stream.scala 294:16]
  assign io_read_payload = rx_io_read_payload; // @[Stream.scala 296:18]
  assign io_uart_txd = tx_io_txd; // @[UartCtrl.scala 76:15]
  assign io_readError = rx_io_error; // @[UartCtrl.scala 79:16]
  assign io_readBreak = rx_io_break; // @[UartCtrl.scala 82:16]
  always @(posedge clk) begin
    if(!resetn) begin
      clockDivider_counter <= 20'h0; // @[Data.scala 400:33]
      clockDivider_tickReg <= 1'b0; // @[Data.scala 400:33]
    end else begin
      clockDivider_tickReg <= clockDivider_tick; // @[Reg.scala 39:30]
      clockDivider_counter <= (clockDivider_counter - 20'h00001); // @[UartCtrl.scala 61:13]
      if(clockDivider_tick) begin
        clockDivider_counter <= io_config_clockDivider; // @[UartCtrl.scala 63:15]
      end
    end
  end


endmodule

module UartCtrlRx (
  input      [2:0]    io_configFrame_dataLength,
  input      [0:0]    io_configFrame_stop,
  input      [1:0]    io_configFrame_parity,
  input               io_samplingTick,
  output              io_read_valid,
  input               io_read_ready,
  output     [7:0]    io_read_payload,
  input               io_rxd,
  output              io_rts,
  output reg          io_error,
  output              io_break,
  input               clk,
  input               resetn
);
  localparam UartStopType_ONE = 1'd0;
  localparam UartStopType_TWO = 1'd1;
  localparam UartParityType_NONE = 2'd0;
  localparam UartParityType_EVEN = 2'd1;
  localparam UartParityType_ODD = 2'd2;
  localparam UartCtrlRxState_IDLE = 3'd0;
  localparam UartCtrlRxState_START = 3'd1;
  localparam UartCtrlRxState_DATA = 3'd2;
  localparam UartCtrlRxState_PARITY = 3'd3;
  localparam UartCtrlRxState_STOP = 3'd4;

  wire                io_rxd_buffercc_io_dataOut;
  wire                _zz_sampler_value;
  wire                _zz_sampler_value_1;
  wire                _zz_sampler_value_2;
  wire                _zz_sampler_value_3;
  wire                _zz_sampler_value_4;
  wire                _zz_sampler_value_5;
  wire                _zz_sampler_value_6;
  wire       [2:0]    _zz_when_UartCtrlRx_l139;
  wire       [0:0]    _zz_when_UartCtrlRx_l139_1;
  reg                 _zz_io_rts;
  wire                sampler_synchroniser;
  wire                sampler_samples_0;
  reg                 sampler_samples_1;
  reg                 sampler_samples_2;
  reg                 sampler_samples_3;
  reg                 sampler_samples_4;
  reg                 sampler_value;
  reg                 sampler_tick;
  reg        [2:0]    bitTimer_counter;
  reg                 bitTimer_tick;
  wire                when_UartCtrlRx_l43;
  reg        [2:0]    bitCounter_value;
  reg        [6:0]    break_counter;
  wire                break_valid;
  wire                when_UartCtrlRx_l69;
  reg        [2:0]    stateMachine_state;
  reg                 stateMachine_parity;
  reg        [7:0]    stateMachine_shifter;
  reg                 stateMachine_validReg;
  wire                when_UartCtrlRx_l93;
  wire                when_UartCtrlRx_l103;
  wire                when_UartCtrlRx_l111;
  wire                when_UartCtrlRx_l113;
  wire                when_UartCtrlRx_l125;
  wire                when_UartCtrlRx_l136;
  wire                when_UartCtrlRx_l139;
  `ifndef SYNTHESIS
  reg [23:0] io_configFrame_stop_string;
  reg [31:0] io_configFrame_parity_string;
  reg [47:0] stateMachine_state_string;
  `endif


  assign _zz_when_UartCtrlRx_l139_1 = ((io_configFrame_stop == UartStopType_ONE) ? 1'b0 : 1'b1);
  assign _zz_when_UartCtrlRx_l139 = {2'd0, _zz_when_UartCtrlRx_l139_1};
  assign _zz_sampler_value = ((((1'b0 || ((_zz_sampler_value_1 && sampler_samples_1) && sampler_samples_2)) || (((_zz_sampler_value_2 && sampler_samples_0) && sampler_samples_1) && sampler_samples_3)) || (((1'b1 && sampler_samples_0) && sampler_samples_2) && sampler_samples_3)) || (((1'b1 && sampler_samples_1) && sampler_samples_2) && sampler_samples_3));
  assign _zz_sampler_value_3 = (((1'b1 && sampler_samples_0) && sampler_samples_1) && sampler_samples_4);
  assign _zz_sampler_value_4 = ((1'b1 && sampler_samples_0) && sampler_samples_2);
  assign _zz_sampler_value_5 = (1'b1 && sampler_samples_1);
  assign _zz_sampler_value_6 = 1'b1;
  assign _zz_sampler_value_1 = (1'b1 && sampler_samples_0);
  assign _zz_sampler_value_2 = 1'b1;
  BufferCC io_rxd_buffercc (
    .io_dataIn  (io_rxd                    ), //i
    .io_dataOut (io_rxd_buffercc_io_dataOut), //o
    .clk        (clk                       ), //i
    .resetn     (resetn                    )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_configFrame_stop)
      UartStopType_ONE : io_configFrame_stop_string = "ONE";
      UartStopType_TWO : io_configFrame_stop_string = "TWO";
      default : io_configFrame_stop_string = "???";
    endcase
  end
  always @(*) begin
    case(io_configFrame_parity)
      UartParityType_NONE : io_configFrame_parity_string = "NONE";
      UartParityType_EVEN : io_configFrame_parity_string = "EVEN";
      UartParityType_ODD : io_configFrame_parity_string = "ODD ";
      default : io_configFrame_parity_string = "????";
    endcase
  end
  always @(*) begin
    case(stateMachine_state)
      UartCtrlRxState_IDLE : stateMachine_state_string = "IDLE  ";
      UartCtrlRxState_START : stateMachine_state_string = "START ";
      UartCtrlRxState_DATA : stateMachine_state_string = "DATA  ";
      UartCtrlRxState_PARITY : stateMachine_state_string = "PARITY";
      UartCtrlRxState_STOP : stateMachine_state_string = "STOP  ";
      default : stateMachine_state_string = "??????";
    endcase
  end
  `endif

  always @(*) begin
    io_error = 1'b0; // @[UartCtrlRx.scala 23:12]
    case(stateMachine_state)
      UartCtrlRxState_IDLE : begin
      end
      UartCtrlRxState_START : begin
      end
      UartCtrlRxState_DATA : begin
      end
      UartCtrlRxState_PARITY : begin
        if(bitTimer_tick) begin
          if(!when_UartCtrlRx_l125) begin
            io_error = 1'b1; // @[UartCtrlRx.scala 130:22]
          end
        end
      end
      default : begin
        if(bitTimer_tick) begin
          if(when_UartCtrlRx_l136) begin
            io_error = 1'b1; // @[UartCtrlRx.scala 137:22]
          end
        end
      end
    endcase
  end

  assign io_rts = _zz_io_rts; // @[UartCtrlRx.scala 24:10]
  assign sampler_synchroniser = io_rxd_buffercc_io_dataOut; // @[CrossClock.scala 13:9]
  assign sampler_samples_0 = sampler_synchroniser; // @[Utils.scala 1115:50]
  always @(*) begin
    bitTimer_tick = 1'b0; // @[UartCtrlRx.scala 40:16]
    if(sampler_tick) begin
      if(when_UartCtrlRx_l43) begin
        bitTimer_tick = 1'b1; // @[UartCtrlRx.scala 44:14]
      end
    end
  end

  assign when_UartCtrlRx_l43 = (bitTimer_counter == 3'b000); // @[BaseType.scala 305:24]
  assign break_valid = (break_counter == 7'h68); // @[BaseType.scala 305:24]
  assign when_UartCtrlRx_l69 = (io_samplingTick && (! break_valid)); // @[BaseType.scala 305:24]
  assign io_break = break_valid; // @[UartCtrlRx.scala 75:12]
  assign io_read_valid = stateMachine_validReg; // @[UartCtrlRx.scala 84:19]
  assign when_UartCtrlRx_l93 = ((sampler_tick && (! sampler_value)) && (! break_valid)); // @[BaseType.scala 305:24]
  assign when_UartCtrlRx_l103 = (sampler_value == 1'b1); // @[BaseType.scala 305:24]
  assign when_UartCtrlRx_l111 = (bitCounter_value == io_configFrame_dataLength); // @[BaseType.scala 305:24]
  assign when_UartCtrlRx_l113 = (io_configFrame_parity == UartParityType_NONE); // @[BaseType.scala 305:24]
  assign when_UartCtrlRx_l125 = (stateMachine_parity == sampler_value); // @[BaseType.scala 305:24]
  assign when_UartCtrlRx_l136 = (! sampler_value); // @[BaseType.scala 299:24]
  assign when_UartCtrlRx_l139 = (bitCounter_value == _zz_when_UartCtrlRx_l139); // @[BaseType.scala 305:24]
  assign io_read_payload = stateMachine_shifter; // @[UartCtrlRx.scala 146:19]
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_io_rts <= 1'b0; // @[Data.scala 400:33]
      sampler_samples_1 <= 1'b1; // @[Data.scala 400:33]
      sampler_samples_2 <= 1'b1; // @[Data.scala 400:33]
      sampler_samples_3 <= 1'b1; // @[Data.scala 400:33]
      sampler_samples_4 <= 1'b1; // @[Data.scala 400:33]
      sampler_value <= 1'b1; // @[Data.scala 400:33]
      sampler_tick <= 1'b0; // @[Data.scala 400:33]
      break_counter <= 7'h0; // @[Data.scala 400:33]
      stateMachine_state <= UartCtrlRxState_IDLE; // @[Data.scala 400:33]
      stateMachine_validReg <= 1'b0; // @[Data.scala 400:33]
    end else begin
      _zz_io_rts <= (! io_read_ready); // @[Reg.scala 39:30]
      if(io_samplingTick) begin
        sampler_samples_1 <= sampler_samples_0; // @[Utils.scala 1109:24]
      end
      if(io_samplingTick) begin
        sampler_samples_2 <= sampler_samples_1; // @[Utils.scala 1109:24]
      end
      if(io_samplingTick) begin
        sampler_samples_3 <= sampler_samples_2; // @[Utils.scala 1109:24]
      end
      if(io_samplingTick) begin
        sampler_samples_4 <= sampler_samples_3; // @[Utils.scala 1109:24]
      end
      sampler_value <= ((((((_zz_sampler_value || _zz_sampler_value_3) || (_zz_sampler_value_4 && sampler_samples_4)) || ((_zz_sampler_value_5 && sampler_samples_2) && sampler_samples_4)) || (((_zz_sampler_value_6 && sampler_samples_0) && sampler_samples_3) && sampler_samples_4)) || (((1'b1 && sampler_samples_1) && sampler_samples_3) && sampler_samples_4)) || (((1'b1 && sampler_samples_2) && sampler_samples_3) && sampler_samples_4)); // @[Reg.scala 39:30]
      sampler_tick <= io_samplingTick; // @[Reg.scala 39:30]
      if(sampler_value) begin
        break_counter <= 7'h0; // @[UartCtrlRx.scala 67:15]
      end else begin
        if(when_UartCtrlRx_l69) begin
          break_counter <= (break_counter + 7'h01); // @[UartCtrlRx.scala 70:17]
        end
      end
      stateMachine_validReg <= 1'b0; // @[Reg.scala 39:30]
      case(stateMachine_state)
        UartCtrlRxState_IDLE : begin
          if(when_UartCtrlRx_l93) begin
            stateMachine_state <= UartCtrlRxState_START; // @[Enum.scala 148:67]
          end
        end
        UartCtrlRxState_START : begin
          if(bitTimer_tick) begin
            stateMachine_state <= UartCtrlRxState_DATA; // @[Enum.scala 148:67]
            if(when_UartCtrlRx_l103) begin
              stateMachine_state <= UartCtrlRxState_IDLE; // @[Enum.scala 148:67]
            end
          end
        end
        UartCtrlRxState_DATA : begin
          if(bitTimer_tick) begin
            if(when_UartCtrlRx_l111) begin
              if(when_UartCtrlRx_l113) begin
                stateMachine_state <= UartCtrlRxState_STOP; // @[Enum.scala 148:67]
                stateMachine_validReg <= 1'b1; // @[UartCtrlRx.scala 115:24]
              end else begin
                stateMachine_state <= UartCtrlRxState_PARITY; // @[Enum.scala 148:67]
              end
            end
          end
        end
        UartCtrlRxState_PARITY : begin
          if(bitTimer_tick) begin
            if(when_UartCtrlRx_l125) begin
              stateMachine_state <= UartCtrlRxState_STOP; // @[Enum.scala 148:67]
              stateMachine_validReg <= 1'b1; // @[UartCtrlRx.scala 127:22]
            end else begin
              stateMachine_state <= UartCtrlRxState_IDLE; // @[Enum.scala 148:67]
            end
          end
        end
        default : begin
          if(bitTimer_tick) begin
            if(when_UartCtrlRx_l136) begin
              stateMachine_state <= UartCtrlRxState_IDLE; // @[Enum.scala 148:67]
            end else begin
              if(when_UartCtrlRx_l139) begin
                stateMachine_state <= UartCtrlRxState_IDLE; // @[Enum.scala 148:67]
              end
            end
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    if(sampler_tick) begin
      bitTimer_counter <= (bitTimer_counter - 3'b001); // @[UartCtrlRx.scala 42:15]
    end
    if(bitTimer_tick) begin
      bitCounter_value <= (bitCounter_value + 3'b001); // @[UartCtrlRx.scala 58:13]
    end
    if(bitTimer_tick) begin
      stateMachine_parity <= (stateMachine_parity ^ sampler_value); // @[UartCtrlRx.scala 88:14]
    end
    case(stateMachine_state)
      UartCtrlRxState_IDLE : begin
        if(when_UartCtrlRx_l93) begin
          bitTimer_counter <= 3'b010; // @[UartCtrlRx.scala 39:27]
        end
      end
      UartCtrlRxState_START : begin
        if(bitTimer_tick) begin
          bitCounter_value <= 3'b000; // @[UartCtrlRx.scala 55:25]
          stateMachine_parity <= (io_configFrame_parity == UartParityType_ODD); // @[UartCtrlRx.scala 102:18]
        end
      end
      UartCtrlRxState_DATA : begin
        if(bitTimer_tick) begin
          stateMachine_shifter[bitCounter_value] <= sampler_value; // @[UartCtrlRx.scala 110:37]
          if(when_UartCtrlRx_l111) begin
            bitCounter_value <= 3'b000; // @[UartCtrlRx.scala 55:25]
          end
        end
      end
      UartCtrlRxState_PARITY : begin
        if(bitTimer_tick) begin
          bitCounter_value <= 3'b000; // @[UartCtrlRx.scala 55:25]
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module UartCtrlTx (
  input      [2:0]    io_configFrame_dataLength,
  input      [0:0]    io_configFrame_stop,
  input      [1:0]    io_configFrame_parity,
  input               io_samplingTick,
  input               io_write_valid,
  output reg          io_write_ready,
  input      [7:0]    io_write_payload,
  input               io_cts,
  output              io_txd,
  input               io_break,
  input               clk,
  input               resetn
);
  localparam UartStopType_ONE = 1'd0;
  localparam UartStopType_TWO = 1'd1;
  localparam UartParityType_NONE = 2'd0;
  localparam UartParityType_EVEN = 2'd1;
  localparam UartParityType_ODD = 2'd2;
  localparam UartCtrlTxState_IDLE = 3'd0;
  localparam UartCtrlTxState_START = 3'd1;
  localparam UartCtrlTxState_DATA = 3'd2;
  localparam UartCtrlTxState_PARITY = 3'd3;
  localparam UartCtrlTxState_STOP = 3'd4;

  wire       [2:0]    _zz_clockDivider_counter_valueNext;
  wire       [0:0]    _zz_clockDivider_counter_valueNext_1;
  wire       [2:0]    _zz_when_UartCtrlTx_l93;
  wire       [0:0]    _zz_when_UartCtrlTx_l93_1;
  reg                 clockDivider_counter_willIncrement;
  wire                clockDivider_counter_willClear;
  reg        [2:0]    clockDivider_counter_valueNext;
  reg        [2:0]    clockDivider_counter_value;
  wire                clockDivider_counter_willOverflowIfInc;
  wire                clockDivider_counter_willOverflow;
  reg        [2:0]    tickCounter_value;
  reg        [2:0]    stateMachine_state;
  reg                 stateMachine_parity;
  reg                 stateMachine_txd;
  wire                when_UartCtrlTx_l58;
  wire                when_UartCtrlTx_l73;
  wire                when_UartCtrlTx_l76;
  wire                when_UartCtrlTx_l93;
  wire       [2:0]    _zz_stateMachine_state;
  reg                 _zz_io_txd;
  `ifndef SYNTHESIS
  reg [23:0] io_configFrame_stop_string;
  reg [31:0] io_configFrame_parity_string;
  reg [47:0] stateMachine_state_string;
  reg [47:0] _zz_stateMachine_state_string;
  `endif


  assign _zz_clockDivider_counter_valueNext_1 = clockDivider_counter_willIncrement;
  assign _zz_clockDivider_counter_valueNext = {2'd0, _zz_clockDivider_counter_valueNext_1};
  assign _zz_when_UartCtrlTx_l93_1 = ((io_configFrame_stop == UartStopType_ONE) ? 1'b0 : 1'b1);
  assign _zz_when_UartCtrlTx_l93 = {2'd0, _zz_when_UartCtrlTx_l93_1};
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_configFrame_stop)
      UartStopType_ONE : io_configFrame_stop_string = "ONE";
      UartStopType_TWO : io_configFrame_stop_string = "TWO";
      default : io_configFrame_stop_string = "???";
    endcase
  end
  always @(*) begin
    case(io_configFrame_parity)
      UartParityType_NONE : io_configFrame_parity_string = "NONE";
      UartParityType_EVEN : io_configFrame_parity_string = "EVEN";
      UartParityType_ODD : io_configFrame_parity_string = "ODD ";
      default : io_configFrame_parity_string = "????";
    endcase
  end
  always @(*) begin
    case(stateMachine_state)
      UartCtrlTxState_IDLE : stateMachine_state_string = "IDLE  ";
      UartCtrlTxState_START : stateMachine_state_string = "START ";
      UartCtrlTxState_DATA : stateMachine_state_string = "DATA  ";
      UartCtrlTxState_PARITY : stateMachine_state_string = "PARITY";
      UartCtrlTxState_STOP : stateMachine_state_string = "STOP  ";
      default : stateMachine_state_string = "??????";
    endcase
  end
  always @(*) begin
    case(_zz_stateMachine_state)
      UartCtrlTxState_IDLE : _zz_stateMachine_state_string = "IDLE  ";
      UartCtrlTxState_START : _zz_stateMachine_state_string = "START ";
      UartCtrlTxState_DATA : _zz_stateMachine_state_string = "DATA  ";
      UartCtrlTxState_PARITY : _zz_stateMachine_state_string = "PARITY";
      UartCtrlTxState_STOP : _zz_stateMachine_state_string = "STOP  ";
      default : _zz_stateMachine_state_string = "??????";
    endcase
  end
  `endif

  always @(*) begin
    clockDivider_counter_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(io_samplingTick) begin
      clockDivider_counter_willIncrement = 1'b1; // @[Utils.scala 540:41]
    end
  end

  assign clockDivider_counter_willClear = 1'b0; // @[Utils.scala 537:19]
  assign clockDivider_counter_willOverflowIfInc = (clockDivider_counter_value == 3'b111); // @[BaseType.scala 305:24]
  assign clockDivider_counter_willOverflow = (clockDivider_counter_willOverflowIfInc && clockDivider_counter_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    clockDivider_counter_valueNext = (clockDivider_counter_value + _zz_clockDivider_counter_valueNext); // @[Utils.scala 548:15]
    if(clockDivider_counter_willClear) begin
      clockDivider_counter_valueNext = 3'b000; // @[Utils.scala 558:15]
    end
  end

  always @(*) begin
    stateMachine_txd = 1'b1; // @[UartCtrlTx.scala 49:15]
    case(stateMachine_state)
      UartCtrlTxState_IDLE : begin
      end
      UartCtrlTxState_START : begin
        stateMachine_txd = 1'b0; // @[UartCtrlTx.scala 63:13]
      end
      UartCtrlTxState_DATA : begin
        stateMachine_txd = io_write_payload[tickCounter_value]; // @[UartCtrlTx.scala 71:13]
      end
      UartCtrlTxState_PARITY : begin
        stateMachine_txd = stateMachine_parity; // @[UartCtrlTx.scala 85:13]
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_write_ready = io_break; // @[UartCtrlTx.scala 55:20]
    case(stateMachine_state)
      UartCtrlTxState_IDLE : begin
      end
      UartCtrlTxState_START : begin
      end
      UartCtrlTxState_DATA : begin
        if(clockDivider_counter_willOverflow) begin
          if(when_UartCtrlTx_l73) begin
            io_write_ready = 1'b1; // @[UartCtrlTx.scala 74:28]
          end
        end
      end
      UartCtrlTxState_PARITY : begin
      end
      default : begin
      end
    endcase
  end

  assign when_UartCtrlTx_l58 = ((io_write_valid && (! io_cts)) && clockDivider_counter_willOverflow); // @[BaseType.scala 305:24]
  assign when_UartCtrlTx_l73 = (tickCounter_value == io_configFrame_dataLength); // @[BaseType.scala 305:24]
  assign when_UartCtrlTx_l76 = (io_configFrame_parity == UartParityType_NONE); // @[BaseType.scala 305:24]
  assign when_UartCtrlTx_l93 = (tickCounter_value == _zz_when_UartCtrlTx_l93); // @[BaseType.scala 305:24]
  assign _zz_stateMachine_state = (io_write_valid ? UartCtrlTxState_START : UartCtrlTxState_IDLE); // @[Expression.scala 1420:25]
  assign io_txd = _zz_io_txd; // @[UartCtrlTx.scala 101:10]
  always @(posedge clk) begin
    if(!resetn) begin
      clockDivider_counter_value <= 3'b000; // @[Data.scala 400:33]
      stateMachine_state <= UartCtrlTxState_IDLE; // @[Data.scala 400:33]
      _zz_io_txd <= 1'b1; // @[Data.scala 400:33]
    end else begin
      clockDivider_counter_value <= clockDivider_counter_valueNext; // @[Reg.scala 39:30]
      case(stateMachine_state)
        UartCtrlTxState_IDLE : begin
          if(when_UartCtrlTx_l58) begin
            stateMachine_state <= UartCtrlTxState_START; // @[Enum.scala 148:67]
          end
        end
        UartCtrlTxState_START : begin
          if(clockDivider_counter_willOverflow) begin
            stateMachine_state <= UartCtrlTxState_DATA; // @[Enum.scala 148:67]
          end
        end
        UartCtrlTxState_DATA : begin
          if(clockDivider_counter_willOverflow) begin
            if(when_UartCtrlTx_l73) begin
              if(when_UartCtrlTx_l76) begin
                stateMachine_state <= UartCtrlTxState_STOP; // @[Enum.scala 148:67]
              end else begin
                stateMachine_state <= UartCtrlTxState_PARITY; // @[Enum.scala 148:67]
              end
            end
          end
        end
        UartCtrlTxState_PARITY : begin
          if(clockDivider_counter_willOverflow) begin
            stateMachine_state <= UartCtrlTxState_STOP; // @[Enum.scala 148:67]
          end
        end
        default : begin
          if(clockDivider_counter_willOverflow) begin
            if(when_UartCtrlTx_l93) begin
              stateMachine_state <= _zz_stateMachine_state; // @[UartCtrlTx.scala 94:19]
            end
          end
        end
      endcase
      _zz_io_txd <= (stateMachine_txd && (! io_break)); // @[Reg.scala 39:30]
    end
  end

  always @(posedge clk) begin
    if(clockDivider_counter_willOverflow) begin
      tickCounter_value <= (tickCounter_value + 3'b001); // @[UartCtrlTx.scala 40:13]
    end
    if(clockDivider_counter_willOverflow) begin
      stateMachine_parity <= (stateMachine_parity ^ stateMachine_txd); // @[UartCtrlTx.scala 52:14]
    end
    case(stateMachine_state)
      UartCtrlTxState_IDLE : begin
      end
      UartCtrlTxState_START : begin
        if(clockDivider_counter_willOverflow) begin
          stateMachine_parity <= (io_configFrame_parity == UartParityType_ODD); // @[UartCtrlTx.scala 66:18]
          tickCounter_value <= 3'b000; // @[UartCtrlTx.scala 37:25]
        end
      end
      UartCtrlTxState_DATA : begin
        if(clockDivider_counter_willOverflow) begin
          if(when_UartCtrlTx_l73) begin
            tickCounter_value <= 3'b000; // @[UartCtrlTx.scala 37:25]
          end
        end
      end
      UartCtrlTxState_PARITY : begin
        if(clockDivider_counter_willOverflow) begin
          tickCounter_value <= 3'b000; // @[UartCtrlTx.scala 37:25]
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module BufferCC (
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
      buffers_0 <= 1'b0; // @[Data.scala 400:33]
      buffers_1 <= 1'b0; // @[Data.scala 400:33]
    end else begin
      buffers_0 <= io_dataIn; // @[CrossClock.scala 31:14]
      buffers_1 <= buffers_0; // @[CrossClock.scala 34:16]
    end
  end


endmodule
