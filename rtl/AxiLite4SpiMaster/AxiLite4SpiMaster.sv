// Generator : SpinalHDL v1.8.0    git head : 4e3563a282582b41f4eaafc503787757251d23ea
// Component : AxiLite4SpiMaster
// Git hash  : 17ba3429c74144a7d37c48904a91bdac2e1b784a

`timescale 1ns/1ps

module AxiLite4SpiMaster (
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
  output     [0:0]    spi_ss,
  output              spi_sclk,
  output              spi_mosi,
  input               spi_miso,
  output              interrupt,
  input               clk,
  input               resetn
);
  localparam SpiMasterCtrlCmdMode_DATA = 1'd0;
  localparam SpiMasterCtrlCmdMode_SS = 1'd1;

  reg                 toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_pop_ready;
  wire                spiCtrl_io_cmd_ready;
  wire                spiCtrl_io_rsp_valid;
  wire       [7:0]    spiCtrl_io_rsp_payload;
  wire                spiCtrl_io_spi_sclk;
  wire                spiCtrl_io_spi_mosi;
  wire       [0:0]    spiCtrl_io_spi_ss;
  wire                bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_push_ready;
  wire                bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_valid;
  wire       [0:0]    bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_payload_mode;
  wire       [8:0]    bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_payload_args;
  wire       [5:0]    bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_occupancy;
  wire       [5:0]    bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_availability;
  wire                toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_push_ready;
  wire                toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_pop_valid;
  wire       [7:0]    toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_pop_payload;
  wire       [5:0]    toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_occupancy;
  wire       [5:0]    toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_availability;
  wire       [0:0]    _zz_bridge_cmdLogic_streamUnbuffered_payload_args;
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
  wire                bridge_cmdLogic_streamUnbuffered_valid;
  wire                bridge_cmdLogic_streamUnbuffered_ready;
  wire       [0:0]    bridge_cmdLogic_streamUnbuffered_payload_mode;
  reg        [8:0]    bridge_cmdLogic_streamUnbuffered_payload_args;
  reg                 _zz_bridge_cmdLogic_streamUnbuffered_valid;
  wire       [7:0]    bridge_cmdLogic_dataCmd_data;
  wire                bridge_cmdLogic_dataCmd_read;
  wire                toplevel_spiCtrl_io_rsp_toStream_valid;
  wire                toplevel_spiCtrl_io_rsp_toStream_ready;
  wire       [7:0]    toplevel_spiCtrl_io_rsp_toStream_payload;
  reg                 bridge_interruptCtrl_cmdIntEnable;
  reg                 bridge_interruptCtrl_rspIntEnable;
  wire                bridge_interruptCtrl_cmdInt;
  wire                bridge_interruptCtrl_rspInt;
  wire                bridge_interruptCtrl_interrupt;
  reg                 _zz_io_config_kind_cpol;
  reg                 _zz_io_config_kind_cpha;
  reg        [15:0]   _zz_io_config_sclkToogle;
  reg        [0:0]    _zz_io_config_ss_activeHigh;
  reg        [15:0]   _zz_io_config_ss_setup;
  reg        [15:0]   _zz_io_config_ss_hold;
  reg        [15:0]   _zz_io_config_ss_disable;
  wire       [0:0]    _zz_bridge_cmdLogic_streamUnbuffered_payload_mode;
  wire       [1:0]    _zz_io_config_kind_cpol_1;
  `ifndef SYNTHESIS
  reg [31:0] bridge_cmdLogic_streamUnbuffered_payload_mode_string;
  reg [31:0] _zz_bridge_cmdLogic_streamUnbuffered_payload_mode_string;
  `endif


  assign _zz_bridge_cmdLogic_streamUnbuffered_payload_args = axil4Ctrl_wdata[24];
  SpiMasterCtrl spiCtrl (
    .io_config_kind_cpol     (_zz_io_config_kind_cpol                                                        ), //i
    .io_config_kind_cpha     (_zz_io_config_kind_cpha                                                        ), //i
    .io_config_sclkToogle    (_zz_io_config_sclkToogle[15:0]                                                 ), //i
    .io_config_ss_activeHigh (_zz_io_config_ss_activeHigh                                                    ), //i
    .io_config_ss_setup      (_zz_io_config_ss_setup[15:0]                                                   ), //i
    .io_config_ss_hold       (_zz_io_config_ss_hold[15:0]                                                    ), //i
    .io_config_ss_disable    (_zz_io_config_ss_disable[15:0]                                                 ), //i
    .io_cmd_valid            (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_valid            ), //i
    .io_cmd_ready            (spiCtrl_io_cmd_ready                                                           ), //o
    .io_cmd_payload_mode     (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_payload_mode     ), //i
    .io_cmd_payload_args     (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_payload_args[8:0]), //i
    .io_rsp_valid            (spiCtrl_io_rsp_valid                                                           ), //o
    .io_rsp_payload          (spiCtrl_io_rsp_payload[7:0]                                                    ), //o
    .io_spi_ss               (spiCtrl_io_spi_ss                                                              ), //o
    .io_spi_sclk             (spiCtrl_io_spi_sclk                                                            ), //o
    .io_spi_mosi             (spiCtrl_io_spi_mosi                                                            ), //o
    .io_spi_miso             (spi_miso                                                                       ), //i
    .clk                     (clk                                                                            ), //i
    .resetn                  (resetn                                                                         )  //i
  );
  StreamFifo_1 bridge_cmdLogic_streamUnbuffered_queueWithAvailability (
    .io_push_valid        (bridge_cmdLogic_streamUnbuffered_valid                                         ), //i
    .io_push_ready        (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_push_ready           ), //o
    .io_push_payload_mode (bridge_cmdLogic_streamUnbuffered_payload_mode                                  ), //i
    .io_push_payload_args (bridge_cmdLogic_streamUnbuffered_payload_args[8:0]                             ), //i
    .io_pop_valid         (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_valid            ), //o
    .io_pop_ready         (spiCtrl_io_cmd_ready                                                           ), //i
    .io_pop_payload_mode  (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_payload_mode     ), //o
    .io_pop_payload_args  (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_payload_args[8:0]), //o
    .io_flush             (1'b0                                                                           ), //i
    .io_occupancy         (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_occupancy[5:0]       ), //o
    .io_availability      (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_availability[5:0]    ), //o
    .clk                  (clk                                                                            ), //i
    .resetn               (resetn                                                                         )  //i
  );
  StreamFifo toplevel_spiCtrl_io_rsp_queueWithOccupancy (
    .io_push_valid   (toplevel_spiCtrl_io_rsp_toStream_valid                         ), //i
    .io_push_ready   (toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_push_ready       ), //o
    .io_push_payload (toplevel_spiCtrl_io_rsp_toStream_payload[7:0]                  ), //i
    .io_pop_valid    (toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_pop_valid        ), //o
    .io_pop_ready    (toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_pop_ready        ), //i
    .io_pop_payload  (toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_pop_payload[7:0] ), //o
    .io_flush        (1'b0                                                           ), //i
    .io_occupancy    (toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_occupancy[5:0]   ), //o
    .io_availability (toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_availability[5:0]), //o
    .clk             (clk                                                            ), //i
    .resetn          (resetn                                                         )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(bridge_cmdLogic_streamUnbuffered_payload_mode)
      SpiMasterCtrlCmdMode_DATA : bridge_cmdLogic_streamUnbuffered_payload_mode_string = "DATA";
      SpiMasterCtrlCmdMode_SS : bridge_cmdLogic_streamUnbuffered_payload_mode_string = "SS  ";
      default : bridge_cmdLogic_streamUnbuffered_payload_mode_string = "????";
    endcase
  end
  always @(*) begin
    case(_zz_bridge_cmdLogic_streamUnbuffered_payload_mode)
      SpiMasterCtrlCmdMode_DATA : _zz_bridge_cmdLogic_streamUnbuffered_payload_mode_string = "DATA";
      SpiMasterCtrlCmdMode_SS : _zz_bridge_cmdLogic_streamUnbuffered_payload_mode_string = "SS  ";
      default : _zz_bridge_cmdLogic_streamUnbuffered_payload_mode_string = "????";
    endcase
  end
  `endif

  assign spi_ss = spiCtrl_io_spi_ss; // @[AxiLite4SpiMaster.scala 33:12]
  assign spi_sclk = spiCtrl_io_spi_sclk; // @[AxiLite4SpiMaster.scala 33:12]
  assign spi_mosi = spiCtrl_io_spi_mosi; // @[AxiLite4SpiMaster.scala 33:12]
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
        readRsp_data[31 : 31] = (toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_pop_valid ^ 1'b0); // @[BusSlaveFactory.scala 942:69]
        readRsp_data[7 : 0] = toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_pop_payload; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[21 : 16] = toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_occupancy; // @[BusSlaveFactory.scala 942:69]
      end
      8'h04 : begin
        readRsp_data[21 : 16] = bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_availability; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[0 : 0] = bridge_interruptCtrl_cmdIntEnable; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[1 : 1] = bridge_interruptCtrl_rspIntEnable; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[8 : 8] = bridge_interruptCtrl_cmdInt; // @[BusSlaveFactory.scala 942:69]
        readRsp_data[9 : 9] = bridge_interruptCtrl_rspInt; // @[BusSlaveFactory.scala 942:69]
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready); // @[BaseType.scala 305:24]
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready); // @[BaseType.scala 305:24]
  always @(*) begin
    _zz_bridge_cmdLogic_streamUnbuffered_valid = 1'b0; // @[BusSlaveFactory.scala 204:15]
    case(axil4Ctrl_awaddr)
      8'h0 : begin
        if(writeOccur) begin
          _zz_bridge_cmdLogic_streamUnbuffered_valid = 1'b1; // @[BusSlaveFactory.scala 205:27]
        end
      end
      default : begin
      end
    endcase
  end

  assign bridge_cmdLogic_streamUnbuffered_valid = _zz_bridge_cmdLogic_streamUnbuffered_valid; // @[SpiMasterCtrl.scala 116:32]
  always @(*) begin
    case(bridge_cmdLogic_streamUnbuffered_payload_mode)
      SpiMasterCtrlCmdMode_DATA : begin
        bridge_cmdLogic_streamUnbuffered_payload_args = {bridge_cmdLogic_dataCmd_read,bridge_cmdLogic_dataCmd_data}; // @[Bits.scala 133:56]
      end
      default : begin
        bridge_cmdLogic_streamUnbuffered_payload_args = {8'd0, _zz_bridge_cmdLogic_streamUnbuffered_payload_args}; // @[Bits.scala 133:56]
      end
    endcase
  end

  assign bridge_cmdLogic_streamUnbuffered_ready = bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_push_ready; // @[Stream.scala 295:16]
  assign toplevel_spiCtrl_io_rsp_toStream_valid = spiCtrl_io_rsp_valid; // @[Flow.scala 72:15]
  assign toplevel_spiCtrl_io_rsp_toStream_payload = spiCtrl_io_rsp_payload; // @[Flow.scala 73:17]
  assign toplevel_spiCtrl_io_rsp_toStream_ready = toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_push_ready; // @[Stream.scala 295:16]
  always @(*) begin
    toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_pop_ready = 1'b0; // @[BusSlaveFactory.scala 576:16]
    case(readDataStage_payload_addr)
      8'h0 : begin
        if(readOccur) begin
          toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_pop_ready = 1'b1; // @[BusSlaveFactory.scala 578:18]
        end
      end
      default : begin
      end
    endcase
  end

  assign bridge_interruptCtrl_cmdInt = (bridge_interruptCtrl_cmdIntEnable && (! bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_valid)); // @[BaseType.scala 305:24]
  assign bridge_interruptCtrl_rspInt = (bridge_interruptCtrl_rspIntEnable && toplevel_spiCtrl_io_rsp_queueWithOccupancy_io_pop_valid); // @[BaseType.scala 305:24]
  assign bridge_interruptCtrl_interrupt = (bridge_interruptCtrl_rspInt || bridge_interruptCtrl_cmdInt); // @[BaseType.scala 305:24]
  assign interrupt = bridge_interruptCtrl_interrupt; // @[AxiLite4SpiMaster.scala 37:18]
  assign bridge_cmdLogic_dataCmd_data = axil4Ctrl_wdata[7 : 0]; // @[Bits.scala 133:56]
  assign bridge_cmdLogic_dataCmd_read = axil4Ctrl_wdata[24]; // @[Bool.scala 189:10]
  assign _zz_bridge_cmdLogic_streamUnbuffered_payload_mode = axil4Ctrl_wdata[28 : 28]; // @[Enum.scala 186:17]
  assign bridge_cmdLogic_streamUnbuffered_payload_mode = _zz_bridge_cmdLogic_streamUnbuffered_payload_mode; // @[Enum.scala 188:10]
  assign _zz_io_config_kind_cpol_1 = axil4Ctrl_wdata[1 : 0]; // @[BaseType.scala 299:24]
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_1 <= 1'b0; // @[Data.scala 400:33]
      axil4Ctrl_ar_rValid <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_cmdIntEnable <= 1'b0; // @[Data.scala 400:33]
      bridge_interruptCtrl_rspIntEnable <= 1'b0; // @[Data.scala 400:33]
      _zz_io_config_ss_activeHigh <= 1'b0; // @[Data.scala 400:33]
    end else begin
      if(_zz_writeJoinEvent_translated_ready_1) begin
        _zz_axil4Ctrl_bvalid_1 <= (writeJoinEvent_translated_valid && _zz_writeJoinEvent_translated_ready); // @[Stream.scala 361:29]
      end
      if(axil4Ctrl_arready) begin
        axil4Ctrl_ar_rValid <= axil4Ctrl_arvalid; // @[Stream.scala 361:29]
      end
      case(axil4Ctrl_awaddr)
        8'h04 : begin
          if(writeOccur) begin
            bridge_interruptCtrl_cmdIntEnable <= axil4Ctrl_wdata[0]; // @[Bool.scala 189:10]
            bridge_interruptCtrl_rspIntEnable <= axil4Ctrl_wdata[1]; // @[Bool.scala 189:10]
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            _zz_io_config_ss_activeHigh <= axil4Ctrl_wdata[4 : 4]; // @[Bits.scala 133:56]
          end
        end
        default : begin
        end
      endcase
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
    case(axil4Ctrl_awaddr)
      8'h08 : begin
        if(writeOccur) begin
          _zz_io_config_kind_cpol <= _zz_io_config_kind_cpol_1[0]; // @[Bool.scala 189:10]
          _zz_io_config_kind_cpha <= _zz_io_config_kind_cpol_1[1]; // @[Bool.scala 189:10]
        end
      end
      8'h0c : begin
        if(writeOccur) begin
          _zz_io_config_sclkToogle <= axil4Ctrl_wdata[15 : 0]; // @[UInt.scala 381:56]
        end
      end
      8'h10 : begin
        if(writeOccur) begin
          _zz_io_config_ss_setup <= axil4Ctrl_wdata[15 : 0]; // @[UInt.scala 381:56]
        end
      end
      8'h14 : begin
        if(writeOccur) begin
          _zz_io_config_ss_hold <= axil4Ctrl_wdata[15 : 0]; // @[UInt.scala 381:56]
        end
      end
      8'h18 : begin
        if(writeOccur) begin
          _zz_io_config_ss_disable <= axil4Ctrl_wdata[15 : 0]; // @[UInt.scala 381:56]
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module StreamFifo (
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

module StreamFifo_1 (
  input               io_push_valid,
  output              io_push_ready,
  input      [0:0]    io_push_payload_mode,
  input      [8:0]    io_push_payload_args,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [0:0]    io_pop_payload_mode,
  output     [8:0]    io_pop_payload_args,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               resetn
);
  localparam SpiMasterCtrlCmdMode_DATA = 1'd0;
  localparam SpiMasterCtrlCmdMode_SS = 1'd1;

  reg        [9:0]    _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_args;
  wire       [9:0]    _zz_logic_ram_port_1;
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
  wire       [0:0]    _zz_io_pop_payload_mode;
  wire       [9:0]    _zz_io_pop_payload_args;
  wire       [0:0]    _zz_io_pop_payload_mode_1;
  wire                when_Stream_l1101;
  wire       [4:0]    logic_ptrDif;
  `ifndef SYNTHESIS
  reg [31:0] io_push_payload_mode_string;
  reg [31:0] io_pop_payload_mode_string;
  reg [31:0] _zz_io_pop_payload_mode_string;
  reg [31:0] _zz_io_pop_payload_mode_1_string;
  `endif

  reg [9:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_args = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_args,io_push_payload_mode};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_args) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(io_push_payload_mode)
      SpiMasterCtrlCmdMode_DATA : io_push_payload_mode_string = "DATA";
      SpiMasterCtrlCmdMode_SS : io_push_payload_mode_string = "SS  ";
      default : io_push_payload_mode_string = "????";
    endcase
  end
  always @(*) begin
    case(io_pop_payload_mode)
      SpiMasterCtrlCmdMode_DATA : io_pop_payload_mode_string = "DATA";
      SpiMasterCtrlCmdMode_SS : io_pop_payload_mode_string = "SS  ";
      default : io_pop_payload_mode_string = "????";
    endcase
  end
  always @(*) begin
    case(_zz_io_pop_payload_mode)
      SpiMasterCtrlCmdMode_DATA : _zz_io_pop_payload_mode_string = "DATA";
      SpiMasterCtrlCmdMode_SS : _zz_io_pop_payload_mode_string = "SS  ";
      default : _zz_io_pop_payload_mode_string = "????";
    endcase
  end
  always @(*) begin
    case(_zz_io_pop_payload_mode_1)
      SpiMasterCtrlCmdMode_DATA : _zz_io_pop_payload_mode_1_string = "DATA";
      SpiMasterCtrlCmdMode_SS : _zz_io_pop_payload_mode_1_string = "SS  ";
      default : _zz_io_pop_payload_mode_1_string = "????";
    endcase
  end
  `endif

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
  assign _zz_io_pop_payload_args = _zz_logic_ram_port0; // @[Mem.scala 310:24]
  assign _zz_io_pop_payload_mode_1 = _zz_io_pop_payload_args[0 : 0]; // @[Enum.scala 186:17]
  assign _zz_io_pop_payload_mode = _zz_io_pop_payload_mode_1; // @[Enum.scala 188:10]
  assign io_pop_payload_mode = _zz_io_pop_payload_mode; // @[Stream.scala 1099:20]
  assign io_pop_payload_args = _zz_io_pop_payload_args[9 : 1]; // @[Stream.scala 1099:20]
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

module SpiMasterCtrl (
  input               io_config_kind_cpol,
  input               io_config_kind_cpha,
  input      [15:0]   io_config_sclkToogle,
  input      [0:0]    io_config_ss_activeHigh,
  input      [15:0]   io_config_ss_setup,
  input      [15:0]   io_config_ss_hold,
  input      [15:0]   io_config_ss_disable,
  input               io_cmd_valid,
  output reg          io_cmd_ready,
  input      [0:0]    io_cmd_payload_mode,
  input      [8:0]    io_cmd_payload_args,
  output              io_rsp_valid,
  output     [7:0]    io_rsp_payload,
  output     [0:0]    io_spi_ss,
  output              io_spi_sclk,
  output              io_spi_mosi,
  input               io_spi_miso,
  input               clk,
  input               resetn
);
  localparam SpiMasterCtrlCmdMode_DATA = 1'd0;
  localparam SpiMasterCtrlCmdMode_SS = 1'd1;

  wire       [3:0]    _zz_fsm_counter_valueNext;
  wire       [0:0]    _zz_fsm_counter_valueNext_1;
  wire       [8:0]    _zz_fsm_buffer;
  wire                _zz_when;
  wire       [7:0]    _zz__zz_io_spi_mosi;
  wire       [2:0]    _zz__zz_io_spi_mosi_1;
  wire       [2:0]    _zz__zz_io_spi_mosi_2;
  reg        [15:0]   timer_counter;
  reg                 timer_reset;
  wire                timer_ss_setupHit;
  wire                timer_ss_holdHit;
  wire                timer_ss_disableHit;
  wire                timer_sclkToogleHit;
  reg                 fsm_counter_willIncrement;
  wire                fsm_counter_willClear;
  reg        [3:0]    fsm_counter_valueNext;
  reg        [3:0]    fsm_counter_value;
  wire                fsm_counter_willOverflowIfInc;
  wire                fsm_counter_willOverflow;
  reg        [7:0]    fsm_buffer;
  reg        [0:0]    fsm_ss;
  wire                when_SpiMasterCtrl_l194;
  wire                when_SpiMasterCtrl_l199;
  wire                when_SpiMasterCtrl_l211;
  wire                io_cmd_fire;
  reg                 _zz_io_rsp_valid;
  wire                when_SpiMasterCtrl_l232;
  reg                 _zz_io_spi_sclk;
  reg                 _zz_io_spi_mosi;
  `ifndef SYNTHESIS
  reg [31:0] io_cmd_payload_mode_string;
  `endif


  assign _zz_when = io_cmd_payload_args[0];
  assign _zz_fsm_counter_valueNext_1 = fsm_counter_willIncrement;
  assign _zz_fsm_counter_valueNext = {3'd0, _zz_fsm_counter_valueNext_1};
  assign _zz_fsm_buffer = {fsm_buffer,io_spi_miso};
  assign _zz__zz_io_spi_mosi = io_cmd_payload_args[7 : 0];
  assign _zz__zz_io_spi_mosi_1 = (3'b111 - _zz__zz_io_spi_mosi_2);
  assign _zz__zz_io_spi_mosi_2 = (fsm_counter_value >>> 1);
  `ifndef SYNTHESIS
  always @(*) begin
    case(io_cmd_payload_mode)
      SpiMasterCtrlCmdMode_DATA : io_cmd_payload_mode_string = "DATA";
      SpiMasterCtrlCmdMode_SS : io_cmd_payload_mode_string = "SS  ";
      default : io_cmd_payload_mode_string = "????";
    endcase
  end
  `endif

  always @(*) begin
    timer_reset = 1'b0; // @[SpiMasterCtrl.scala 173:17]
    if(io_cmd_valid) begin
      if(when_SpiMasterCtrl_l194) begin
        if(timer_sclkToogleHit) begin
          timer_reset = 1'b1; // @[SpiMasterCtrl.scala 197:23]
        end
      end else begin
        if(!_zz_when) begin
          if(when_SpiMasterCtrl_l211) begin
            if(timer_ss_holdHit) begin
              timer_reset = 1'b1; // @[SpiMasterCtrl.scala 214:29]
            end
          end
        end
      end
    end
    if(when_SpiMasterCtrl_l232) begin
      timer_reset = 1'b1; // @[SpiMasterCtrl.scala 234:19]
    end
  end

  assign timer_ss_setupHit = (timer_counter == io_config_ss_setup); // @[BaseType.scala 305:24]
  assign timer_ss_holdHit = (timer_counter == io_config_ss_hold); // @[BaseType.scala 305:24]
  assign timer_ss_disableHit = (timer_counter == io_config_ss_disable); // @[BaseType.scala 305:24]
  assign timer_sclkToogleHit = (timer_counter == io_config_sclkToogle); // @[BaseType.scala 305:24]
  always @(*) begin
    fsm_counter_willIncrement = 1'b0; // @[Utils.scala 536:23]
    if(io_cmd_valid) begin
      if(when_SpiMasterCtrl_l194) begin
        if(timer_sclkToogleHit) begin
          fsm_counter_willIncrement = 1'b1; // @[Utils.scala 540:41]
        end
      end else begin
        if(!_zz_when) begin
          if(when_SpiMasterCtrl_l211) begin
            if(timer_ss_holdHit) begin
              fsm_counter_willIncrement = 1'b1; // @[Utils.scala 540:41]
            end
          end
        end
      end
    end
  end

  assign fsm_counter_willClear = 1'b0; // @[Utils.scala 537:19]
  assign fsm_counter_willOverflowIfInc = (fsm_counter_value == 4'b1111); // @[BaseType.scala 305:24]
  assign fsm_counter_willOverflow = (fsm_counter_willOverflowIfInc && fsm_counter_willIncrement); // @[BaseType.scala 305:24]
  always @(*) begin
    fsm_counter_valueNext = (fsm_counter_value + _zz_fsm_counter_valueNext); // @[Utils.scala 548:15]
    if(fsm_counter_willClear) begin
      fsm_counter_valueNext = 4'b0000; // @[Utils.scala 558:15]
    end
  end

  always @(*) begin
    io_cmd_ready = 1'b0; // @[SpiMasterCtrl.scala 192:18]
    if(io_cmd_valid) begin
      if(when_SpiMasterCtrl_l194) begin
        if(timer_sclkToogleHit) begin
          io_cmd_ready = fsm_counter_willOverflowIfInc; // @[SpiMasterCtrl.scala 198:24]
        end
      end else begin
        if(_zz_when) begin
          if(timer_ss_setupHit) begin
            io_cmd_ready = 1'b1; // @[SpiMasterCtrl.scala 208:28]
          end
        end else begin
          if(!when_SpiMasterCtrl_l211) begin
            if(timer_ss_disableHit) begin
              io_cmd_ready = 1'b1; // @[SpiMasterCtrl.scala 219:30]
            end
          end
        end
      end
    end
  end

  assign when_SpiMasterCtrl_l194 = (io_cmd_payload_mode == SpiMasterCtrlCmdMode_DATA); // @[BaseType.scala 305:24]
  assign when_SpiMasterCtrl_l199 = fsm_counter_value[0]; // @[BaseType.scala 305:24]
  assign when_SpiMasterCtrl_l211 = (! fsm_counter_value[0]); // @[BaseType.scala 299:24]
  assign io_cmd_fire = (io_cmd_valid && io_cmd_ready); // @[BaseType.scala 305:24]
  assign io_rsp_valid = _zz_io_rsp_valid; // @[SpiMasterCtrl.scala 228:20]
  assign io_rsp_payload = fsm_buffer; // @[SpiMasterCtrl.scala 229:20]
  assign when_SpiMasterCtrl_l232 = ((! io_cmd_valid) || io_cmd_ready); // @[BaseType.scala 305:24]
  assign io_spi_ss = (fsm_ss ^ io_config_ss_activeHigh); // @[SpiMasterCtrl.scala 238:25]
  assign io_spi_sclk = _zz_io_spi_sclk; // @[SpiMasterCtrl.scala 239:17]
  assign io_spi_mosi = _zz_io_spi_mosi; // @[SpiMasterCtrl.scala 240:17]
  always @(posedge clk) begin
    timer_counter <= (timer_counter + 16'h0001); // @[SpiMasterCtrl.scala 181:13]
    if(timer_reset) begin
      timer_counter <= 16'h0; // @[SpiMasterCtrl.scala 183:15]
    end
    if(io_cmd_valid) begin
      if(when_SpiMasterCtrl_l194) begin
        if(timer_sclkToogleHit) begin
          if(when_SpiMasterCtrl_l199) begin
            fsm_buffer <= _zz_fsm_buffer[7:0]; // @[SpiMasterCtrl.scala 200:20]
          end
        end
      end
    end
    _zz_io_spi_sclk <= (((io_cmd_valid && (io_cmd_payload_mode == SpiMasterCtrlCmdMode_DATA)) && (fsm_counter_value[0] ^ io_config_kind_cpha)) ^ io_config_kind_cpol); // @[Reg.scala 39:30]
    _zz_io_spi_mosi <= _zz__zz_io_spi_mosi[_zz__zz_io_spi_mosi_1]; // @[Reg.scala 39:30]
  end

  always @(posedge clk) begin
    if(!resetn) begin
      fsm_counter_value <= 4'b0000; // @[Data.scala 400:33]
      fsm_ss <= 1'b1; // @[Data.scala 400:33]
      _zz_io_rsp_valid <= 1'b0; // @[Data.scala 400:33]
    end else begin
      fsm_counter_value <= fsm_counter_valueNext; // @[Reg.scala 39:30]
      if(io_cmd_valid) begin
        if(!when_SpiMasterCtrl_l194) begin
          if(_zz_when) begin
            fsm_ss[0] <= 1'b0; // @[SpiMasterCtrl.scala 206:37]
          end else begin
            if(!when_SpiMasterCtrl_l211) begin
              fsm_ss[0] <= 1'b1; // @[SpiMasterCtrl.scala 217:39]
            end
          end
        end
      end
      _zz_io_rsp_valid <= ((io_cmd_fire && (io_cmd_payload_mode == SpiMasterCtrlCmdMode_DATA)) && io_cmd_payload_args[8]); // @[Reg.scala 39:30]
      if(when_SpiMasterCtrl_l232) begin
        fsm_counter_value <= 4'b0000; // @[SpiMasterCtrl.scala 233:15]
      end
    end
  end


endmodule
