// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4SpiMaster
// Git hash  : f551716d88446d93e1dd170a856757e67c11b4e4


`define SpiMasterCtrlCmdMode_binary_sequential_type [0:0]
`define SpiMasterCtrlCmdMode_binary_sequential_DATA 1'b0
`define SpiMasterCtrlCmdMode_binary_sequential_SS 1'b1


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
  reg                 spiCtrl_rsp_queueWithOccupancy_io_pop_ready;
  wire                spiCtrl_cmd_ready;
  wire                spiCtrl_rsp_valid;
  wire       [7:0]    spiCtrl_rsp_payload;
  wire                spiCtrl_spi_sclk;
  wire                spiCtrl_spi_mosi;
  wire       [0:0]    spiCtrl_spi_ss;
  wire                bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_push_ready;
  wire                bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_valid;
  wire       `SpiMasterCtrlCmdMode_binary_sequential_type bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_payload_mode;
  wire       [8:0]    bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_payload_args;
  wire       [5:0]    bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_occupancy;
  wire       [5:0]    bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_availability;
  wire                spiCtrl_rsp_queueWithOccupancy_io_push_ready;
  wire                spiCtrl_rsp_queueWithOccupancy_io_pop_valid;
  wire       [7:0]    spiCtrl_rsp_queueWithOccupancy_io_pop_payload;
  wire       [5:0]    spiCtrl_rsp_queueWithOccupancy_io_occupancy;
  wire       [5:0]    spiCtrl_rsp_queueWithOccupancy_io_availability;
  wire       [0:0]    _zz_bridge_cmdLogic_streamUnbuffered_payload_args;
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
  wire                axil4Ctrl_ar_readDataStage_valid;
  wire                axil4Ctrl_ar_readDataStage_ready;
  wire       [7:0]    axil4Ctrl_ar_readDataStage_payload_addr;
  wire       [2:0]    axil4Ctrl_ar_readDataStage_payload_prot;
  reg                 axil4Ctrl_ar_rValid;
  reg        [7:0]    axil4Ctrl_ar_rData_addr;
  reg        [2:0]    axil4Ctrl_ar_rData_prot;
  wire                when_Stream_l342_1;
  reg        [31:0]   readRsp_data;
  wire       [1:0]    readRsp_resp;
  wire                _zz_axil4Ctrl_rvalid;
  wire                writeOccur;
  wire                readOccur;
  wire                bridge_cmdLogic_streamUnbuffered_valid;
  wire                bridge_cmdLogic_streamUnbuffered_ready;
  wire       `SpiMasterCtrlCmdMode_binary_sequential_type bridge_cmdLogic_streamUnbuffered_payload_mode;
  reg        [8:0]    bridge_cmdLogic_streamUnbuffered_payload_args;
  reg                 _zz_bridge_cmdLogic_streamUnbuffered_valid;
  wire       [7:0]    bridge_cmdLogic_dataCmd_data;
  wire                bridge_cmdLogic_dataCmd_read;
  reg                 bridge_interruptCtrl_cmdIntEnable;
  reg                 bridge_interruptCtrl_rspIntEnable;
  wire                bridge_interruptCtrl_cmdInt;
  wire                bridge_interruptCtrl_rspInt;
  wire                bridge_interruptCtrl_interrupt;
  reg                 _zz_config_kind_cpol;
  reg                 _zz_config_kind_cpha;
  reg        [15:0]   _zz_config_sclkToogle;
  reg        [0:0]    _zz_config_ss_activeHigh;
  reg        [15:0]   _zz_config_ss_setup;
  reg        [15:0]   _zz_config_ss_hold;
  reg        [15:0]   _zz_config_ss_disable;
  wire       `SpiMasterCtrlCmdMode_binary_sequential_type _zz_bridge_cmdLogic_streamUnbuffered_payload_mode;
  wire       [1:0]    _zz_config_kind_cpol_1;
  `ifndef SYNTHESIS
  reg [31:0] bridge_cmdLogic_streamUnbuffered_payload_mode_string;
  reg [31:0] _zz_bridge_cmdLogic_streamUnbuffered_payload_mode_string;
  `endif


  assign _zz_bridge_cmdLogic_streamUnbuffered_payload_args = axil4Ctrl_wdata[24];
  SpiMasterCtrl spiCtrl (
    .config_kind_cpol        (_zz_config_kind_cpol                                                        ), //i
    .config_kind_cpha        (_zz_config_kind_cpha                                                        ), //i
    .config_sclkToogle       (_zz_config_sclkToogle                                                       ), //i
    .config_ss_activeHigh    (_zz_config_ss_activeHigh                                                    ), //i
    .config_ss_setup         (_zz_config_ss_setup                                                         ), //i
    .config_ss_hold          (_zz_config_ss_hold                                                          ), //i
    .config_ss_disable       (_zz_config_ss_disable                                                       ), //i
    .cmd_valid               (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_valid         ), //i
    .cmd_ready               (spiCtrl_cmd_ready                                                           ), //o
    .cmd_payload_mode        (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_payload_mode  ), //i
    .cmd_payload_args        (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_payload_args  ), //i
    .rsp_valid               (spiCtrl_rsp_valid                                                           ), //o
    .rsp_payload             (spiCtrl_rsp_payload                                                         ), //o
    .spi_ss                  (spiCtrl_spi_ss                                                              ), //o
    .spi_sclk                (spiCtrl_spi_sclk                                                            ), //o
    .spi_mosi                (spiCtrl_spi_mosi                                                            ), //o
    .spi_miso                (spi_miso                                                                    ), //i
    .clk                     (clk                                                                         ), //i
    .resetn                  (resetn                                                                      )  //i
  );
  StreamFifo bridge_cmdLogic_streamUnbuffered_queueWithAvailability (
    .io_push_valid           (bridge_cmdLogic_streamUnbuffered_valid                                      ), //i
    .io_push_ready           (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_push_ready        ), //o
    .io_push_payload_mode    (bridge_cmdLogic_streamUnbuffered_payload_mode                               ), //i
    .io_push_payload_args    (bridge_cmdLogic_streamUnbuffered_payload_args                               ), //i
    .io_pop_valid            (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_valid         ), //o
    .io_pop_ready            (spiCtrl_cmd_ready                                                           ), //i
    .io_pop_payload_mode     (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_payload_mode  ), //o
    .io_pop_payload_args     (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_payload_args  ), //o
    .io_flush                (1'b0                                                                        ), //i
    .io_occupancy            (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_occupancy         ), //o
    .io_availability         (bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_availability      ), //o
    .clk                     (clk                                                                         ), //i
    .resetn                  (resetn                                                                      )  //i
  );
  StreamFifo_1 spiCtrl_rsp_queueWithOccupancy (
    .io_push_valid      (spiCtrl_rsp_valid                               ), //i
    .io_push_ready      (spiCtrl_rsp_queueWithOccupancy_io_push_ready    ), //o
    .io_push_payload    (spiCtrl_rsp_payload                             ), //i
    .io_pop_valid       (spiCtrl_rsp_queueWithOccupancy_io_pop_valid     ), //o
    .io_pop_ready       (spiCtrl_rsp_queueWithOccupancy_io_pop_ready     ), //i
    .io_pop_payload     (spiCtrl_rsp_queueWithOccupancy_io_pop_payload   ), //o
    .io_flush           (1'b0                                            ), //i
    .io_occupancy       (spiCtrl_rsp_queueWithOccupancy_io_occupancy     ), //o
    .io_availability    (spiCtrl_rsp_queueWithOccupancy_io_availability  ), //o
    .clk                (clk                                             ), //i
    .resetn             (resetn                                          )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(bridge_cmdLogic_streamUnbuffered_payload_mode)
      `SpiMasterCtrlCmdMode_binary_sequential_DATA : bridge_cmdLogic_streamUnbuffered_payload_mode_string = "DATA";
      `SpiMasterCtrlCmdMode_binary_sequential_SS : bridge_cmdLogic_streamUnbuffered_payload_mode_string = "SS  ";
      default : bridge_cmdLogic_streamUnbuffered_payload_mode_string = "????";
    endcase
  end
  always @(*) begin
    case(_zz_bridge_cmdLogic_streamUnbuffered_payload_mode)
      `SpiMasterCtrlCmdMode_binary_sequential_DATA : _zz_bridge_cmdLogic_streamUnbuffered_payload_mode_string = "DATA";
      `SpiMasterCtrlCmdMode_binary_sequential_SS : _zz_bridge_cmdLogic_streamUnbuffered_payload_mode_string = "SS  ";
      default : _zz_bridge_cmdLogic_streamUnbuffered_payload_mode_string = "????";
    endcase
  end
  `endif

  assign spi_ss = spiCtrl_spi_ss;
  assign spi_sclk = spiCtrl_spi_sclk;
  assign spi_mosi = spiCtrl_spi_mosi;
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
    axil4Ctrl_arready = axil4Ctrl_ar_readDataStage_ready;
    if(when_Stream_l342_1) begin
      axil4Ctrl_arready = 1'b1;
    end
  end

  assign when_Stream_l342_1 = (! axil4Ctrl_ar_readDataStage_valid);
  assign axil4Ctrl_ar_readDataStage_valid = axil4Ctrl_ar_rValid;
  assign axil4Ctrl_ar_readDataStage_payload_addr = axil4Ctrl_ar_rData_addr;
  assign axil4Ctrl_ar_readDataStage_payload_prot = axil4Ctrl_ar_rData_prot;
  assign _zz_axil4Ctrl_rvalid = (! readHaltRequest);
  assign axil4Ctrl_ar_readDataStage_ready = (axil4Ctrl_rready && _zz_axil4Ctrl_rvalid);
  assign axil4Ctrl_rvalid = (axil4Ctrl_ar_readDataStage_valid && _zz_axil4Ctrl_rvalid);
  assign axil4Ctrl_rdata = readRsp_data;
  assign axil4Ctrl_rresp = readRsp_resp;
  assign writeRsp_resp = 2'b00;
  assign readRsp_resp = 2'b00;
  always @(*) begin
    readRsp_data = 32'h0;
    case(axil4Ctrl_ar_readDataStage_payload_addr)
      8'h0 : begin
        readRsp_data[31 : 31] = (spiCtrl_rsp_queueWithOccupancy_io_pop_valid ^ 1'b0);
        readRsp_data[7 : 0] = spiCtrl_rsp_queueWithOccupancy_io_pop_payload;
        readRsp_data[21 : 16] = spiCtrl_rsp_queueWithOccupancy_io_occupancy;
      end
      8'h04 : begin
        readRsp_data[21 : 16] = bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_availability;
        readRsp_data[0 : 0] = bridge_interruptCtrl_cmdIntEnable;
        readRsp_data[1 : 1] = bridge_interruptCtrl_rspIntEnable;
        readRsp_data[8 : 8] = bridge_interruptCtrl_cmdInt;
        readRsp_data[9 : 9] = bridge_interruptCtrl_rspInt;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  always @(*) begin
    _zz_bridge_cmdLogic_streamUnbuffered_valid = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h0 : begin
        if(writeOccur) begin
          _zz_bridge_cmdLogic_streamUnbuffered_valid = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign bridge_cmdLogic_streamUnbuffered_valid = _zz_bridge_cmdLogic_streamUnbuffered_valid;
  always @(*) begin
    case(bridge_cmdLogic_streamUnbuffered_payload_mode)
      `SpiMasterCtrlCmdMode_binary_sequential_DATA : begin
        bridge_cmdLogic_streamUnbuffered_payload_args = {bridge_cmdLogic_dataCmd_read,bridge_cmdLogic_dataCmd_data};
      end
      default : begin
        bridge_cmdLogic_streamUnbuffered_payload_args = {8'd0, _zz_bridge_cmdLogic_streamUnbuffered_payload_args};
      end
    endcase
  end

  assign bridge_cmdLogic_streamUnbuffered_ready = bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_push_ready;
  always @(*) begin
    spiCtrl_rsp_queueWithOccupancy_io_pop_ready = 1'b0;
    case(axil4Ctrl_ar_readDataStage_payload_addr)
      8'h0 : begin
        if(readOccur) begin
          spiCtrl_rsp_queueWithOccupancy_io_pop_ready = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign bridge_interruptCtrl_cmdInt = (bridge_interruptCtrl_cmdIntEnable && (! bridge_cmdLogic_streamUnbuffered_queueWithAvailability_io_pop_valid));
  assign bridge_interruptCtrl_rspInt = (bridge_interruptCtrl_rspIntEnable && spiCtrl_rsp_queueWithOccupancy_io_pop_valid);
  assign bridge_interruptCtrl_interrupt = (bridge_interruptCtrl_rspInt || bridge_interruptCtrl_cmdInt);
  assign interrupt = bridge_interruptCtrl_interrupt;
  assign bridge_cmdLogic_dataCmd_data = axil4Ctrl_wdata[7 : 0];
  assign bridge_cmdLogic_dataCmd_read = axil4Ctrl_wdata[24];
  assign _zz_bridge_cmdLogic_streamUnbuffered_payload_mode = axil4Ctrl_wdata[28 : 28];
  assign bridge_cmdLogic_streamUnbuffered_payload_mode = _zz_bridge_cmdLogic_streamUnbuffered_payload_mode;
  assign _zz_config_kind_cpol_1 = axil4Ctrl_wdata[1 : 0];
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      bridge_interruptCtrl_cmdIntEnable <= 1'b0;
      bridge_interruptCtrl_rspIntEnable <= 1'b0;
      _zz_config_ss_activeHigh <= 1'b0;
    end else begin
      if(_zz_writeJoinEvent_translated_ready) begin
        _zz_axil4Ctrl_bvalid_2 <= (writeJoinEvent_translated_valid && _zz_axil4Ctrl_bvalid);
      end
      if(axil4Ctrl_arready) begin
        axil4Ctrl_ar_rValid <= axil4Ctrl_arvalid;
      end
      case(axil4Ctrl_awaddr)
        8'h04 : begin
          if(writeOccur) begin
            bridge_interruptCtrl_cmdIntEnable <= axil4Ctrl_wdata[0];
            bridge_interruptCtrl_rspIntEnable <= axil4Ctrl_wdata[1];
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            _zz_config_ss_activeHigh <= axil4Ctrl_wdata[4 : 4];
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    if(_zz_writeJoinEvent_translated_ready) begin
      _zz_axil4Ctrl_bresp <= writeJoinEvent_translated_payload_resp;
    end
    if(axil4Ctrl_arready) begin
      axil4Ctrl_ar_rData_addr <= axil4Ctrl_araddr;
      axil4Ctrl_ar_rData_prot <= axil4Ctrl_arprot;
    end
    case(axil4Ctrl_awaddr)
      8'h08 : begin
        if(writeOccur) begin
          _zz_config_kind_cpol <= _zz_config_kind_cpol_1[0];
          _zz_config_kind_cpha <= _zz_config_kind_cpol_1[1];
        end
      end
      8'h0c : begin
        if(writeOccur) begin
          _zz_config_sclkToogle <= axil4Ctrl_wdata[15 : 0];
        end
      end
      8'h10 : begin
        if(writeOccur) begin
          _zz_config_ss_setup <= axil4Ctrl_wdata[15 : 0];
        end
      end
      8'h14 : begin
        if(writeOccur) begin
          _zz_config_ss_hold <= axil4Ctrl_wdata[15 : 0];
        end
      end
      8'h18 : begin
        if(writeOccur) begin
          _zz_config_ss_disable <= axil4Ctrl_wdata[15 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule

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
  wire                when_Stream_l933;
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 5'h1f);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 5'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 5'h1f);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 5'h0;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign io_pop_payload = _zz_logic_ram_port0;
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk) begin
    if(!resetn) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
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

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input      `SpiMasterCtrlCmdMode_binary_sequential_type io_push_payload_mode,
  input      [8:0]    io_push_payload_args,
  output              io_pop_valid,
  input               io_pop_ready,
  output     `SpiMasterCtrlCmdMode_binary_sequential_type io_pop_payload_mode,
  output     [8:0]    io_pop_payload_args,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               resetn
);
  reg        [9:0]    _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_mode_1;
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
  wire       `SpiMasterCtrlCmdMode_binary_sequential_type _zz_io_pop_payload_mode;
  wire       [9:0]    _zz_io_pop_payload_mode_1;
  wire       `SpiMasterCtrlCmdMode_binary_sequential_type _zz_io_pop_payload_mode_2;
  wire                when_Stream_l933;
  wire       [4:0]    logic_ptrDif;
  `ifndef SYNTHESIS
  reg [31:0] io_push_payload_mode_string;
  reg [31:0] io_pop_payload_mode_string;
  reg [31:0] _zz_io_pop_payload_mode_string;
  reg [31:0] _zz_io_pop_payload_mode_2_string;
  `endif

  reg [9:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_mode_1 = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_args,io_push_payload_mode};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_mode_1) begin
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
      `SpiMasterCtrlCmdMode_binary_sequential_DATA : io_push_payload_mode_string = "DATA";
      `SpiMasterCtrlCmdMode_binary_sequential_SS : io_push_payload_mode_string = "SS  ";
      default : io_push_payload_mode_string = "????";
    endcase
  end
  always @(*) begin
    case(io_pop_payload_mode)
      `SpiMasterCtrlCmdMode_binary_sequential_DATA : io_pop_payload_mode_string = "DATA";
      `SpiMasterCtrlCmdMode_binary_sequential_SS : io_pop_payload_mode_string = "SS  ";
      default : io_pop_payload_mode_string = "????";
    endcase
  end
  always @(*) begin
    case(_zz_io_pop_payload_mode)
      `SpiMasterCtrlCmdMode_binary_sequential_DATA : _zz_io_pop_payload_mode_string = "DATA";
      `SpiMasterCtrlCmdMode_binary_sequential_SS : _zz_io_pop_payload_mode_string = "SS  ";
      default : _zz_io_pop_payload_mode_string = "????";
    endcase
  end
  always @(*) begin
    case(_zz_io_pop_payload_mode_2)
      `SpiMasterCtrlCmdMode_binary_sequential_DATA : _zz_io_pop_payload_mode_2_string = "DATA";
      `SpiMasterCtrlCmdMode_binary_sequential_SS : _zz_io_pop_payload_mode_2_string = "SS  ";
      default : _zz_io_pop_payload_mode_2_string = "????";
    endcase
  end
  `endif

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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 5'h1f);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 5'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 5'h1f);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 5'h0;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_mode_1 = _zz_logic_ram_port0;
  assign _zz_io_pop_payload_mode_2 = _zz_io_pop_payload_mode_1[0 : 0];
  assign _zz_io_pop_payload_mode = _zz_io_pop_payload_mode_2;
  assign io_pop_payload_mode = _zz_io_pop_payload_mode;
  assign io_pop_payload_args = _zz_io_pop_payload_mode_1[9 : 1];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk) begin
    if(!resetn) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
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

module SpiMasterCtrl (
  input               config_kind_cpol,
  input               config_kind_cpha,
  input      [15:0]   config_sclkToogle,
  input      [0:0]    config_ss_activeHigh,
  input      [15:0]   config_ss_setup,
  input      [15:0]   config_ss_hold,
  input      [15:0]   config_ss_disable,
  input               cmd_valid,
  output reg          cmd_ready,
  input      `SpiMasterCtrlCmdMode_binary_sequential_type cmd_payload_mode,
  input      [8:0]    cmd_payload_args,
  output              rsp_valid,
  output     [7:0]    rsp_payload,
  output     [0:0]    spi_ss,
  output              spi_sclk,
  output              spi_mosi,
  input               spi_miso,
  input               clk,
  input               resetn
);
  wire       [3:0]    _zz_fsm_counter_valueNext;
  wire       [0:0]    _zz_fsm_counter_valueNext_1;
  wire       [8:0]    _zz_fsm_buffer;
  wire                _zz_when;
  wire       [7:0]    _zz__zz_spi_mosi;
  wire       [2:0]    _zz__zz_spi_mosi_1;
  wire       [2:0]    _zz__zz_spi_mosi_2;
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
  wire                when_SpiMasterCtrl_l191;
  wire                when_SpiMasterCtrl_l196;
  wire                when_SpiMasterCtrl_l208;
  wire                cmd_fire;
  reg                 _zz_rsp_valid;
  wire                when_SpiMasterCtrl_l229;
  reg                 _zz_spi_sclk;
  reg                 _zz_spi_mosi;
  `ifndef SYNTHESIS
  reg [31:0] cmd_payload_mode_string;
  `endif


  assign _zz_when = cmd_payload_args[0];
  assign _zz_fsm_counter_valueNext_1 = fsm_counter_willIncrement;
  assign _zz_fsm_counter_valueNext = {3'd0, _zz_fsm_counter_valueNext_1};
  assign _zz_fsm_buffer = {fsm_buffer,spi_miso};
  assign _zz__zz_spi_mosi = cmd_payload_args[7 : 0];
  assign _zz__zz_spi_mosi_1 = (3'b111 - _zz__zz_spi_mosi_2);
  assign _zz__zz_spi_mosi_2 = (fsm_counter_value >>> 1);
  `ifndef SYNTHESIS
  always @(*) begin
    case(cmd_payload_mode)
      `SpiMasterCtrlCmdMode_binary_sequential_DATA : cmd_payload_mode_string = "DATA";
      `SpiMasterCtrlCmdMode_binary_sequential_SS : cmd_payload_mode_string = "SS  ";
      default : cmd_payload_mode_string = "????";
    endcase
  end
  `endif

  always @(*) begin
    timer_reset = 1'b0;
    if(cmd_valid) begin
      if(when_SpiMasterCtrl_l191) begin
        if(timer_sclkToogleHit) begin
          timer_reset = 1'b1;
        end
      end else begin
        if(!_zz_when) begin
          if(when_SpiMasterCtrl_l208) begin
            if(timer_ss_holdHit) begin
              timer_reset = 1'b1;
            end
          end
        end
      end
    end
    if(when_SpiMasterCtrl_l229) begin
      timer_reset = 1'b1;
    end
  end

  assign timer_ss_setupHit = (timer_counter == config_ss_setup);
  assign timer_ss_holdHit = (timer_counter == config_ss_hold);
  assign timer_ss_disableHit = (timer_counter == config_ss_disable);
  assign timer_sclkToogleHit = (timer_counter == config_sclkToogle);
  always @(*) begin
    fsm_counter_willIncrement = 1'b0;
    if(cmd_valid) begin
      if(when_SpiMasterCtrl_l191) begin
        if(timer_sclkToogleHit) begin
          fsm_counter_willIncrement = 1'b1;
        end
      end else begin
        if(!_zz_when) begin
          if(when_SpiMasterCtrl_l208) begin
            if(timer_ss_holdHit) begin
              fsm_counter_willIncrement = 1'b1;
            end
          end
        end
      end
    end
  end

  assign fsm_counter_willClear = 1'b0;
  assign fsm_counter_willOverflowIfInc = (fsm_counter_value == 4'b1111);
  assign fsm_counter_willOverflow = (fsm_counter_willOverflowIfInc && fsm_counter_willIncrement);
  always @(*) begin
    fsm_counter_valueNext = (fsm_counter_value + _zz_fsm_counter_valueNext);
    if(fsm_counter_willClear) begin
      fsm_counter_valueNext = 4'b0000;
    end
  end

  always @(*) begin
    cmd_ready = 1'b0;
    if(cmd_valid) begin
      if(when_SpiMasterCtrl_l191) begin
        if(timer_sclkToogleHit) begin
          cmd_ready = fsm_counter_willOverflowIfInc;
        end
      end else begin
        if(_zz_when) begin
          if(timer_ss_setupHit) begin
            cmd_ready = 1'b1;
          end
        end else begin
          if(!when_SpiMasterCtrl_l208) begin
            if(timer_ss_disableHit) begin
              cmd_ready = 1'b1;
            end
          end
        end
      end
    end
  end

  assign when_SpiMasterCtrl_l191 = (cmd_payload_mode == `SpiMasterCtrlCmdMode_binary_sequential_DATA);
  assign when_SpiMasterCtrl_l196 = fsm_counter_value[0];
  assign when_SpiMasterCtrl_l208 = (! fsm_counter_value[0]);
  assign cmd_fire = (cmd_valid && cmd_ready);
  assign rsp_valid = _zz_rsp_valid;
  assign rsp_payload = fsm_buffer;
  assign when_SpiMasterCtrl_l229 = ((! cmd_valid) || cmd_ready);
  assign spi_ss = (fsm_ss ^ config_ss_activeHigh);
  assign spi_sclk = _zz_spi_sclk;
  assign spi_mosi = _zz_spi_mosi;
  always @(posedge clk) begin
    timer_counter <= (timer_counter + 16'h0001);
    if(timer_reset) begin
      timer_counter <= 16'h0;
    end
    if(cmd_valid) begin
      if(when_SpiMasterCtrl_l191) begin
        if(timer_sclkToogleHit) begin
          if(when_SpiMasterCtrl_l196) begin
            fsm_buffer <= _zz_fsm_buffer[7:0];
          end
        end
      end
    end
    _zz_spi_sclk <= (((cmd_valid && (cmd_payload_mode == `SpiMasterCtrlCmdMode_binary_sequential_DATA)) && (fsm_counter_value[0] ^ config_kind_cpha)) ^ config_kind_cpol);
    _zz_spi_mosi <= _zz__zz_spi_mosi[_zz__zz_spi_mosi_1];
  end

  always @(posedge clk) begin
    if(!resetn) begin
      fsm_counter_value <= 4'b0000;
      fsm_ss <= 1'b1;
      _zz_rsp_valid <= 1'b0;
    end else begin
      fsm_counter_value <= fsm_counter_valueNext;
      if(cmd_valid) begin
        if(!when_SpiMasterCtrl_l191) begin
          if(_zz_when) begin
            fsm_ss[0] <= 1'b0;
          end else begin
            if(!when_SpiMasterCtrl_l208) begin
              fsm_ss[0] <= 1'b1;
            end
          end
        end
      end
      _zz_rsp_valid <= ((cmd_fire && (cmd_payload_mode == `SpiMasterCtrlCmdMode_binary_sequential_DATA)) && cmd_payload_args[8]);
      if(when_SpiMasterCtrl_l229) begin
        fsm_counter_value <= 4'b0000;
      end
    end
  end


endmodule
