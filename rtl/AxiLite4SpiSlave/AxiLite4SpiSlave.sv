// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4SpiSlave
// Git hash  : f551716d88446d93e1dd170a856757e67c11b4e4



module AxiLite4SpiSlave (
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
  input               spi_sclk,
  input               spi_mosi,
  output              spi_miso_write,
  output              spi_miso_writeEnable,
  input               spi_ss,
  input               clk,
  input               resetn
);
  wire       [7:0]    streamFifo_2_io_push_payload;
  reg                 core_io_rx_takeWhen_queueWithOccupancy_io_pop_ready;
  wire                core_io_rx_valid;
  wire       [7:0]    core_io_rx_payload;
  wire                core_io_tx_ready;
  wire                core_io_txError;
  wire                core_io_ssFilted;
  wire                core_io_spi_miso_write;
  wire                core_io_spi_miso_writeEnable;
  wire                streamFifo_2_io_push_ready;
  wire                streamFifo_2_io_pop_valid;
  wire       [7:0]    streamFifo_2_io_pop_payload;
  wire       [5:0]    streamFifo_2_io_occupancy;
  wire       [5:0]    streamFifo_2_io_availability;
  wire                core_io_rx_takeWhen_queueWithOccupancy_io_push_ready;
  wire                core_io_rx_takeWhen_queueWithOccupancy_io_pop_valid;
  wire       [7:0]    core_io_rx_takeWhen_queueWithOccupancy_io_pop_payload;
  wire       [5:0]    core_io_rx_takeWhen_queueWithOccupancy_io_occupancy;
  wire       [5:0]    core_io_rx_takeWhen_queueWithOccupancy_io_availability;
  wire       [0:0]    _zz__zz_readRsp_data_5;
  wire       [0:0]    _zz__zz_readRsp_data_6;
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
  reg                 _zz_io_push_valid;
  reg                 _zz_readRsp_data;
  wire                core_io_rx_takeWhen_valid;
  wire       [7:0]    core_io_rx_takeWhen_payload;
  reg                 _zz_readRsp_data_1;
  reg                 _zz_readRsp_data_2;
  reg                 _zz_readRsp_data_3;
  reg                 _zz_readRsp_data_4;
  reg                 core_io_ssFilted_regNext;
  reg                 _zz_readRsp_data_5;
  wire                when_SpiSlaveCtrl_l92;
  reg                 _zz_readRsp_data_6;
  wire                when_SpiSlaveCtrl_l93;
  reg                 when_BusSlaveFactory_l335;
  wire                when_BusSlaveFactory_l337;
  reg                 when_BusSlaveFactory_l335_1;
  wire                when_BusSlaveFactory_l337_1;
  reg                 _zz_io_kind_cpol;
  reg                 _zz_io_kind_cpha;
  wire       [1:0]    _zz_io_kind_cpol_1;

  assign _zz__zz_readRsp_data_5 = 1'b0;
  assign _zz__zz_readRsp_data_6 = 1'b0;
  SpiSlaveCtrl core (
    .io_kind_cpol               (_zz_io_kind_cpol              ), //i
    .io_kind_cpha               (_zz_io_kind_cpha              ), //i
    .io_rx_valid                (core_io_rx_valid              ), //o
    .io_rx_payload              (core_io_rx_payload            ), //o
    .io_tx_valid                (streamFifo_2_io_pop_valid     ), //i
    .io_tx_ready                (core_io_tx_ready              ), //o
    .io_tx_payload              (streamFifo_2_io_pop_payload   ), //i
    .io_txError                 (core_io_txError               ), //o
    .io_ssFilted                (core_io_ssFilted              ), //o
    .io_spi_sclk                (spi_sclk                      ), //i
    .io_spi_mosi                (spi_mosi                      ), //i
    .io_spi_miso_write          (core_io_spi_miso_write        ), //o
    .io_spi_miso_writeEnable    (core_io_spi_miso_writeEnable  ), //o
    .io_spi_ss                  (spi_ss                        ), //i
    .clk                        (clk                           ), //i
    .resetn                     (resetn                        )  //i
  );
  StreamFifo streamFifo_2 (
    .io_push_valid      (_zz_io_push_valid             ), //i
    .io_push_ready      (streamFifo_2_io_push_ready    ), //o
    .io_push_payload    (streamFifo_2_io_push_payload  ), //i
    .io_pop_valid       (streamFifo_2_io_pop_valid     ), //o
    .io_pop_ready       (core_io_tx_ready              ), //i
    .io_pop_payload     (streamFifo_2_io_pop_payload   ), //o
    .io_flush           (1'b0                          ), //i
    .io_occupancy       (streamFifo_2_io_occupancy     ), //o
    .io_availability    (streamFifo_2_io_availability  ), //o
    .clk                (clk                           ), //i
    .resetn             (resetn                        )  //i
  );
  StreamFifo core_io_rx_takeWhen_queueWithOccupancy (
    .io_push_valid      (core_io_rx_takeWhen_valid                               ), //i
    .io_push_ready      (core_io_rx_takeWhen_queueWithOccupancy_io_push_ready    ), //o
    .io_push_payload    (core_io_rx_takeWhen_payload                             ), //i
    .io_pop_valid       (core_io_rx_takeWhen_queueWithOccupancy_io_pop_valid     ), //o
    .io_pop_ready       (core_io_rx_takeWhen_queueWithOccupancy_io_pop_ready     ), //i
    .io_pop_payload     (core_io_rx_takeWhen_queueWithOccupancy_io_pop_payload   ), //o
    .io_flush           (1'b0                                                    ), //i
    .io_occupancy       (core_io_rx_takeWhen_queueWithOccupancy_io_occupancy     ), //o
    .io_availability    (core_io_rx_takeWhen_queueWithOccupancy_io_availability  ), //o
    .clk                (clk                                                     ), //i
    .resetn             (resetn                                                  )  //i
  );
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
        readRsp_data[31 : 31] = (core_io_rx_takeWhen_queueWithOccupancy_io_pop_valid ^ 1'b0);
        readRsp_data[7 : 0] = core_io_rx_takeWhen_queueWithOccupancy_io_pop_payload;
        readRsp_data[21 : 16] = core_io_rx_takeWhen_queueWithOccupancy_io_occupancy;
      end
      8'h04 : begin
        readRsp_data[21 : 16] = streamFifo_2_io_availability;
        readRsp_data[15 : 15] = _zz_readRsp_data;
        readRsp_data[0 : 0] = _zz_readRsp_data_1;
        readRsp_data[1 : 1] = _zz_readRsp_data_2;
        readRsp_data[2 : 2] = _zz_readRsp_data_3;
        readRsp_data[3 : 3] = _zz_readRsp_data_4;
        readRsp_data[8 : 8] = (_zz_readRsp_data_1 && (! streamFifo_2_io_pop_valid));
        readRsp_data[9 : 9] = (_zz_readRsp_data_2 && core_io_rx_takeWhen_queueWithOccupancy_io_pop_valid);
        readRsp_data[10 : 10] = _zz_readRsp_data_5;
        readRsp_data[11 : 11] = _zz_readRsp_data_6;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  always @(*) begin
    _zz_io_push_valid = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h0 : begin
        if(writeOccur) begin
          _zz_io_push_valid = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign streamFifo_2_io_push_payload = axil4Ctrl_wdata[7 : 0];
  assign core_io_rx_takeWhen_valid = (core_io_rx_valid && _zz_readRsp_data);
  assign core_io_rx_takeWhen_payload = core_io_rx_payload;
  always @(*) begin
    core_io_rx_takeWhen_queueWithOccupancy_io_pop_ready = 1'b0;
    case(axil4Ctrl_ar_readDataStage_payload_addr)
      8'h0 : begin
        if(readOccur) begin
          core_io_rx_takeWhen_queueWithOccupancy_io_pop_ready = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign when_SpiSlaveCtrl_l92 = (! _zz_readRsp_data_3);
  assign when_SpiSlaveCtrl_l93 = (! _zz_readRsp_data_4);
  always @(*) begin
    when_BusSlaveFactory_l335 = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h04 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l335 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l337 = axil4Ctrl_wdata[12];
  always @(*) begin
    when_BusSlaveFactory_l335_1 = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h04 : begin
        if(writeOccur) begin
          when_BusSlaveFactory_l335_1 = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign when_BusSlaveFactory_l337_1 = axil4Ctrl_wdata[13];
  assign spi_miso_write = core_io_spi_miso_write;
  assign spi_miso_writeEnable = core_io_spi_miso_writeEnable;
  assign _zz_io_kind_cpol_1 = axil4Ctrl_wdata[1 : 0];
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      _zz_readRsp_data <= 1'b0;
      _zz_readRsp_data_1 <= 1'b0;
      _zz_readRsp_data_2 <= 1'b0;
      _zz_readRsp_data_3 <= 1'b0;
      _zz_readRsp_data_4 <= 1'b0;
      core_io_ssFilted_regNext <= 1'b1;
      _zz_readRsp_data_5 <= 1'b0;
      _zz_readRsp_data_6 <= 1'b0;
    end else begin
      if(_zz_writeJoinEvent_translated_ready) begin
        _zz_axil4Ctrl_bvalid_2 <= (writeJoinEvent_translated_valid && _zz_axil4Ctrl_bvalid);
      end
      if(axil4Ctrl_arready) begin
        axil4Ctrl_ar_rValid <= axil4Ctrl_arvalid;
      end
      core_io_ssFilted_regNext <= core_io_ssFilted;
      if((core_io_ssFilted_regNext && (! core_io_ssFilted))) begin
        _zz_readRsp_data_5 <= 1'b1;
      end
      if(when_SpiSlaveCtrl_l92) begin
        _zz_readRsp_data_5 <= 1'b0;
      end
      if(((! core_io_ssFilted_regNext) && core_io_ssFilted)) begin
        _zz_readRsp_data_6 <= 1'b1;
      end
      if(when_SpiSlaveCtrl_l93) begin
        _zz_readRsp_data_6 <= 1'b0;
      end
      if(when_BusSlaveFactory_l335) begin
        if(when_BusSlaveFactory_l337) begin
          _zz_readRsp_data_5 <= _zz__zz_readRsp_data_5[0];
        end
      end
      if(when_BusSlaveFactory_l335_1) begin
        if(when_BusSlaveFactory_l337_1) begin
          _zz_readRsp_data_6 <= _zz__zz_readRsp_data_6[0];
        end
      end
      case(axil4Ctrl_awaddr)
        8'h04 : begin
          if(writeOccur) begin
            _zz_readRsp_data <= axil4Ctrl_wdata[15];
            _zz_readRsp_data_1 <= axil4Ctrl_wdata[0];
            _zz_readRsp_data_2 <= axil4Ctrl_wdata[1];
            _zz_readRsp_data_3 <= axil4Ctrl_wdata[2];
            _zz_readRsp_data_4 <= axil4Ctrl_wdata[3];
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
          _zz_io_kind_cpol <= _zz_io_kind_cpol_1[0];
          _zz_io_kind_cpha <= _zz_io_kind_cpol_1[1];
        end
      end
      default : begin
      end
    endcase
  end


endmodule

//StreamFifo replaced by StreamFifo

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

module SpiSlaveCtrl (
  input               io_kind_cpol,
  input               io_kind_cpha,
  output              io_rx_valid,
  output     [7:0]    io_rx_payload,
  input               io_tx_valid,
  output              io_tx_ready,
  input      [7:0]    io_tx_payload,
  output              io_txError,
  output              io_ssFilted,
  input               io_spi_sclk,
  input               io_spi_mosi,
  output              io_spi_miso_write,
  output              io_spi_miso_writeEnable,
  input               io_spi_ss,
  input               clk,
  input               resetn
);
  wire                io_spi_sclk_buffercc_io_dataOut;
  wire                io_spi_ss_buffercc_io_dataOut;
  wire                io_spi_mosi_buffercc_io_dataOut;
  wire       [3:0]    _zz_counter_valueNext;
  wire       [0:0]    _zz_counter_valueNext_1;
  wire       [8:0]    _zz_buffer_1;
  wire       [2:0]    _zz_rspBit;
  wire       [2:0]    _zz_rspBit_1;
  wire                spi_sclk;
  wire                spi_mosi;
  wire                spi_miso_write;
  wire                spi_miso_writeEnable;
  wire                spi_ss;
  wire                _zz_normalizedSclkEdges_rise;
  wire                normalizedSclkEdges_rise;
  wire                normalizedSclkEdges_fall;
  wire                normalizedSclkEdges_toggle;
  reg                 _zz_normalizedSclkEdges_rise_1;
  reg                 counter_willIncrement;
  reg                 counter_willClear;
  reg        [3:0]    counter_valueNext;
  reg        [3:0]    counter_value;
  wire                counter_willOverflowIfInc;
  wire                counter_willOverflow;
  reg        [7:0]    buffer_1;
  reg                 counter_willOverflow_regNext;
  wire                rspBit;
  reg                 rspBitSampled;

  assign _zz_counter_valueNext_1 = counter_willIncrement;
  assign _zz_counter_valueNext = {3'd0, _zz_counter_valueNext_1};
  assign _zz_buffer_1 = {buffer_1,spi_mosi};
  assign _zz_rspBit = (3'b111 - _zz_rspBit_1);
  assign _zz_rspBit_1 = (counter_value >>> 1);
  BufferCC io_spi_sclk_buffercc (
    .io_dataIn     (io_spi_sclk                      ), //i
    .io_dataOut    (io_spi_sclk_buffercc_io_dataOut  ), //o
    .clk           (clk                              ), //i
    .resetn        (resetn                           )  //i
  );
  BufferCC io_spi_ss_buffercc (
    .io_dataIn     (io_spi_ss                      ), //i
    .io_dataOut    (io_spi_ss_buffercc_io_dataOut  ), //o
    .clk           (clk                            ), //i
    .resetn        (resetn                         )  //i
  );
  BufferCC io_spi_mosi_buffercc (
    .io_dataIn     (io_spi_mosi                      ), //i
    .io_dataOut    (io_spi_mosi_buffercc_io_dataOut  ), //o
    .clk           (clk                              ), //i
    .resetn        (resetn                           )  //i
  );
  assign spi_sclk = io_spi_sclk_buffercc_io_dataOut;
  assign spi_ss = io_spi_ss_buffercc_io_dataOut;
  assign spi_mosi = io_spi_mosi_buffercc_io_dataOut;
  assign io_spi_miso_write = spi_miso_write;
  assign io_spi_miso_writeEnable = spi_miso_writeEnable;
  assign _zz_normalizedSclkEdges_rise = ((spi_sclk ^ io_kind_cpol) ^ io_kind_cpha);
  assign normalizedSclkEdges_rise = ((! _zz_normalizedSclkEdges_rise_1) && _zz_normalizedSclkEdges_rise);
  assign normalizedSclkEdges_fall = (_zz_normalizedSclkEdges_rise_1 && (! _zz_normalizedSclkEdges_rise));
  assign normalizedSclkEdges_toggle = (_zz_normalizedSclkEdges_rise_1 != _zz_normalizedSclkEdges_rise);
  always @(*) begin
    counter_willIncrement = 1'b0;
    if(!spi_ss) begin
      if(normalizedSclkEdges_toggle) begin
        counter_willIncrement = 1'b1;
      end
    end
  end

  always @(*) begin
    counter_willClear = 1'b0;
    if(spi_ss) begin
      counter_willClear = 1'b1;
    end
  end

  assign counter_willOverflowIfInc = (counter_value == 4'b1111);
  assign counter_willOverflow = (counter_willOverflowIfInc && counter_willIncrement);
  always @(*) begin
    counter_valueNext = (counter_value + _zz_counter_valueNext);
    if(counter_willClear) begin
      counter_valueNext = 4'b0000;
    end
  end

  assign io_ssFilted = spi_ss;
  assign io_rx_valid = counter_willOverflow_regNext;
  assign io_rx_payload = buffer_1;
  assign io_tx_ready = (counter_willOverflow || spi_ss);
  assign io_txError = (io_tx_ready && (! io_tx_valid));
  assign rspBit = io_tx_payload[_zz_rspBit];
  assign spi_miso_writeEnable = (! spi_ss);
  assign spi_miso_write = (io_kind_cpha ? rspBitSampled : rspBit);
  always @(posedge clk) begin
    _zz_normalizedSclkEdges_rise_1 <= _zz_normalizedSclkEdges_rise;
    if(!spi_ss) begin
      if(normalizedSclkEdges_rise) begin
        buffer_1 <= _zz_buffer_1[7:0];
      end
    end
    counter_willOverflow_regNext <= counter_willOverflow;
    if(normalizedSclkEdges_fall) begin
      rspBitSampled <= rspBit;
    end
  end

  always @(posedge clk) begin
    if(!resetn) begin
      counter_value <= 4'b0000;
    end else begin
      counter_value <= counter_valueNext;
    end
  end


endmodule

//BufferCC replaced by BufferCC

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
    buffers_0 <= io_dataIn;
    buffers_1 <= buffers_0;
  end


endmodule
