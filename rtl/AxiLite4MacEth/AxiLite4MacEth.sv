// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : AxiLite4MacEth
// Git hash  : 0727f9ff86b0428c52b898049d05b42f47380ee0

`timescale 1ns/1ps

module AxiLite4MacEth (
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
  output              gmii_TX_EN,
  output              gmii_TX_ER,
  output     [7:0]    gmii_TX_TXD,
  input               gmii_RX_DV,
  input               gmii_RX_ER,
  input      [7:0]    gmii_RX_RXD,
  output              interrupt,
  input               phy_clk,
  input               phy_resetn,
  input               resetn,
  input               clk
);

  wire                mac_io_phy_rx_payload_last;
  wire                mac_io_phy_colision;
  wire                mac_io_phy_busy;
  reg                 mac_io_ctrl_rx_stream_ready;
  reg                 mac_io_ctrl_rx_stats_clear;
  wire       [31:0]   mac_io_ctrl_tx_stream_payload;
  wire                mac_io_phy_tx_valid;
  wire                mac_io_phy_tx_payload_last;
  wire       [7:0]    mac_io_phy_tx_payload_fragment_data;
  wire                mac_io_phy_rx_ready;
  wire                mac_io_ctrl_rx_stream_valid;
  wire       [31:0]   mac_io_ctrl_rx_stream_payload;
  wire       [7:0]    mac_io_ctrl_rx_stats_drops;
  wire       [7:0]    mac_io_ctrl_rx_stats_errors;
  wire                mac_io_ctrl_tx_stream_ready;
  wire       [10:0]   mac_io_ctrl_tx_availability;
  wire                mac_io_ctrl_pending;
  wire                mac_io_sim_drop;
  wire                mac_io_sim_error;
  wire                mac_io_sim_commit;
  wire                macTxInterFrame_1_io_input_ready;
  wire                macTxInterFrame_1_io_output_valid;
  wire                macTxInterFrame_1_io_output_payload_last;
  wire       [7:0]    macTxInterFrame_1_io_output_payload_fragment_data;
  reg        [7:0]    macTxInterFrame_1_io_output_payload_fragment_data_regNext;
  reg                 macTxInterFrame_1_io_output_valid_regNext;
  wire                _zz_io_phy_rx_valid;
  reg                 gmii_RX_DV_regNext;
  reg        [7:0]    gmii_RX_RXD_regNext;
  reg                 gmii_RX_ER_regNext;
  reg                 _zz_io_phy_rx_valid_1;
  reg                 _zz_io_phy_rx_payload_fragment_error;
  reg        [7:0]    _zz_io_phy_rx_payload_fragment_data;
  wire                busCtrl_readHaltRequest;
  wire                busCtrl_writeHaltRequest;
  wire                busCtrl_writeJoinEvent_valid;
  wire                busCtrl_writeJoinEvent_ready;
  wire                busCtrl_writeJoinEvent_fire;
  wire       [1:0]    busCtrl_writeRsp_resp;
  wire                busCtrl_writeJoinEvent_translated_valid;
  wire                busCtrl_writeJoinEvent_translated_ready;
  wire       [1:0]    busCtrl_writeJoinEvent_translated_payload_resp;
  wire                _zz_axil4Ctrl_bvalid;
  reg                 _zz_busCtrl_writeJoinEvent_translated_ready;
  wire                _zz_axil4Ctrl_bvalid_1;
  reg                 _zz_axil4Ctrl_bvalid_2;
  reg        [1:0]    _zz_axil4Ctrl_bresp;
  wire                when_Stream_l368;
  wire                busCtrl_readDataStage_valid;
  wire                busCtrl_readDataStage_ready;
  wire       [7:0]    busCtrl_readDataStage_payload_addr;
  wire       [2:0]    busCtrl_readDataStage_payload_prot;
  reg                 axil4Ctrl_ar_rValid;
  reg        [7:0]    axil4Ctrl_ar_rData_addr;
  reg        [2:0]    axil4Ctrl_ar_rData_prot;
  wire                when_Stream_l368_1;
  reg        [31:0]   busCtrl_readRsp_data;
  wire       [1:0]    busCtrl_readRsp_resp;
  wire                _zz_axil4Ctrl_rvalid;
  wire                busCtrl_writeOccur;
  wire                busCtrl_readOccur;
  reg                 mac_io_ctrl_tx_flush_driver;
  reg                 mac_io_ctrl_tx_alignerEnable_driver;
  reg                 mac_io_ctrl_rx_flush_driver;
  reg                 mac_io_ctrl_rx_alignerEnable_driver;
  reg                 _zz_io_ctrl_tx_stream_valid;

  MacEth mac (
    .io_phy_rx_valid                  (_zz_io_phy_rx_valid_1                   ), //i
    .io_phy_rx_ready                  (mac_io_phy_rx_ready                     ), //o
    .io_phy_rx_payload_last           (mac_io_phy_rx_payload_last              ), //i
    .io_phy_rx_payload_fragment_error (_zz_io_phy_rx_payload_fragment_error    ), //i
    .io_phy_rx_payload_fragment_data  (_zz_io_phy_rx_payload_fragment_data[7:0]), //i
    .io_phy_tx_valid                  (mac_io_phy_tx_valid                     ), //o
    .io_phy_tx_ready                  (macTxInterFrame_1_io_input_ready        ), //i
    .io_phy_tx_payload_last           (mac_io_phy_tx_payload_last              ), //o
    .io_phy_tx_payload_fragment_data  (mac_io_phy_tx_payload_fragment_data[7:0]), //o
    .io_phy_colision                  (mac_io_phy_colision                     ), //i
    .io_phy_busy                      (mac_io_phy_busy                         ), //i
    .io_ctrl_rx_stream_valid          (mac_io_ctrl_rx_stream_valid             ), //o
    .io_ctrl_rx_stream_ready          (mac_io_ctrl_rx_stream_ready             ), //i
    .io_ctrl_rx_stream_payload        (mac_io_ctrl_rx_stream_payload[31:0]     ), //o
    .io_ctrl_rx_flush                 (mac_io_ctrl_rx_flush_driver             ), //i
    .io_ctrl_rx_alignerEnable         (mac_io_ctrl_rx_alignerEnable_driver     ), //i
    .io_ctrl_rx_stats_clear           (mac_io_ctrl_rx_stats_clear              ), //i
    .io_ctrl_rx_stats_drops           (mac_io_ctrl_rx_stats_drops[7:0]         ), //o
    .io_ctrl_rx_stats_errors          (mac_io_ctrl_rx_stats_errors[7:0]        ), //o
    .io_ctrl_tx_stream_valid          (_zz_io_ctrl_tx_stream_valid             ), //i
    .io_ctrl_tx_stream_ready          (mac_io_ctrl_tx_stream_ready             ), //o
    .io_ctrl_tx_stream_payload        (mac_io_ctrl_tx_stream_payload[31:0]     ), //i
    .io_ctrl_tx_availability          (mac_io_ctrl_tx_availability[10:0]       ), //o
    .io_ctrl_tx_flush                 (mac_io_ctrl_tx_flush_driver             ), //i
    .io_ctrl_tx_alignerEnable         (mac_io_ctrl_tx_alignerEnable_driver     ), //i
    .io_ctrl_pending                  (mac_io_ctrl_pending                     ), //o
    .io_sim_drop                      (mac_io_sim_drop                         ), //o
    .io_sim_error                     (mac_io_sim_error                        ), //o
    .io_sim_commit                    (mac_io_sim_commit                       ), //o
    .resetn                           (resetn                                  ), //i
    .clk                              (clk                                     ), //i
    .phy_clk                          (phy_clk                                 )  //i
  );
  MacTxInterFrame macTxInterFrame_1 (
    .io_input_valid                  (mac_io_phy_tx_valid                                   ), //i
    .io_input_ready                  (macTxInterFrame_1_io_input_ready                      ), //o
    .io_input_payload_last           (mac_io_phy_tx_payload_last                            ), //i
    .io_input_payload_fragment_data  (mac_io_phy_tx_payload_fragment_data[7:0]              ), //i
    .io_output_valid                 (macTxInterFrame_1_io_output_valid                     ), //o
    .io_output_payload_last          (macTxInterFrame_1_io_output_payload_last              ), //o
    .io_output_payload_fragment_data (macTxInterFrame_1_io_output_payload_fragment_data[7:0]), //o
    .phy_clk                         (phy_clk                                               ), //i
    .phy_resetn                      (phy_resetn                                            )  //i
  );
  assign gmii_TX_ER = 1'b0;
  assign gmii_TX_TXD = macTxInterFrame_1_io_output_payload_fragment_data_regNext;
  assign gmii_TX_EN = macTxInterFrame_1_io_output_valid_regNext;
  assign _zz_io_phy_rx_valid = gmii_RX_DV_regNext;
  assign mac_io_phy_rx_payload_last = ((! _zz_io_phy_rx_valid) && _zz_io_phy_rx_valid_1);
  assign busCtrl_readHaltRequest = 1'b0;
  assign busCtrl_writeHaltRequest = 1'b0;
  assign busCtrl_writeJoinEvent_fire = (busCtrl_writeJoinEvent_valid && busCtrl_writeJoinEvent_ready);
  assign busCtrl_writeJoinEvent_valid = (axil4Ctrl_awvalid && axil4Ctrl_wvalid);
  assign axil4Ctrl_awready = busCtrl_writeJoinEvent_fire;
  assign axil4Ctrl_wready = busCtrl_writeJoinEvent_fire;
  assign busCtrl_writeJoinEvent_translated_valid = busCtrl_writeJoinEvent_valid;
  assign busCtrl_writeJoinEvent_ready = busCtrl_writeJoinEvent_translated_ready;
  assign busCtrl_writeJoinEvent_translated_payload_resp = busCtrl_writeRsp_resp;
  assign _zz_axil4Ctrl_bvalid = (! busCtrl_writeHaltRequest);
  assign busCtrl_writeJoinEvent_translated_ready = (_zz_busCtrl_writeJoinEvent_translated_ready && _zz_axil4Ctrl_bvalid);
  always @(*) begin
    _zz_busCtrl_writeJoinEvent_translated_ready = axil4Ctrl_bready;
    if(when_Stream_l368) begin
      _zz_busCtrl_writeJoinEvent_translated_ready = 1'b1;
    end
  end

  assign when_Stream_l368 = (! _zz_axil4Ctrl_bvalid_1);
  assign _zz_axil4Ctrl_bvalid_1 = _zz_axil4Ctrl_bvalid_2;
  assign axil4Ctrl_bvalid = _zz_axil4Ctrl_bvalid_1;
  assign axil4Ctrl_bresp = _zz_axil4Ctrl_bresp;
  always @(*) begin
    axil4Ctrl_arready = busCtrl_readDataStage_ready;
    if(when_Stream_l368_1) begin
      axil4Ctrl_arready = 1'b1;
    end
  end

  assign when_Stream_l368_1 = (! busCtrl_readDataStage_valid);
  assign busCtrl_readDataStage_valid = axil4Ctrl_ar_rValid;
  assign busCtrl_readDataStage_payload_addr = axil4Ctrl_ar_rData_addr;
  assign busCtrl_readDataStage_payload_prot = axil4Ctrl_ar_rData_prot;
  assign _zz_axil4Ctrl_rvalid = (! busCtrl_readHaltRequest);
  assign busCtrl_readDataStage_ready = (axil4Ctrl_rready && _zz_axil4Ctrl_rvalid);
  assign axil4Ctrl_rvalid = (busCtrl_readDataStage_valid && _zz_axil4Ctrl_rvalid);
  assign axil4Ctrl_rdata = busCtrl_readRsp_data;
  assign axil4Ctrl_rresp = busCtrl_readRsp_resp;
  assign busCtrl_writeRsp_resp = 2'b00;
  assign busCtrl_readRsp_resp = 2'b00;
  always @(*) begin
    busCtrl_readRsp_data = 32'h0;
    case(busCtrl_readDataStage_payload_addr)
      8'h0 : begin
        busCtrl_readRsp_data[0 : 0] = mac_io_ctrl_tx_flush_driver;
        busCtrl_readRsp_data[1 : 1] = mac_io_ctrl_tx_stream_ready;
        busCtrl_readRsp_data[2 : 2] = mac_io_ctrl_tx_alignerEnable_driver;
        busCtrl_readRsp_data[4 : 4] = mac_io_ctrl_rx_flush_driver;
        busCtrl_readRsp_data[5 : 5] = mac_io_ctrl_rx_stream_valid;
        busCtrl_readRsp_data[6 : 6] = mac_io_ctrl_rx_alignerEnable_driver;
      end
      8'h14 : begin
        busCtrl_readRsp_data[10 : 0] = mac_io_ctrl_tx_availability;
      end
      8'h20 : begin
        busCtrl_readRsp_data[31 : 0] = mac_io_ctrl_rx_stream_payload;
      end
      8'h2c : begin
        busCtrl_readRsp_data[7 : 0] = mac_io_ctrl_rx_stats_errors;
        busCtrl_readRsp_data[15 : 8] = mac_io_ctrl_rx_stats_drops;
      end
      default : begin
      end
    endcase
  end

  assign busCtrl_writeOccur = (busCtrl_writeJoinEvent_valid && busCtrl_writeJoinEvent_ready);
  assign busCtrl_readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  always @(*) begin
    _zz_io_ctrl_tx_stream_valid = 1'b0;
    case(axil4Ctrl_awaddr)
      8'h10 : begin
        if(busCtrl_writeOccur) begin
          _zz_io_ctrl_tx_stream_valid = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign mac_io_ctrl_tx_stream_payload = axil4Ctrl_wdata[31 : 0];
  always @(*) begin
    mac_io_ctrl_rx_stream_ready = 1'b0;
    case(busCtrl_readDataStage_payload_addr)
      8'h20 : begin
        if(busCtrl_readOccur) begin
          mac_io_ctrl_rx_stream_ready = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    mac_io_ctrl_rx_stats_clear = 1'b0;
    case(busCtrl_readDataStage_payload_addr)
      8'h2c : begin
        if(busCtrl_readOccur) begin
          mac_io_ctrl_rx_stats_clear = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign interrupt = mac_io_ctrl_pending;
  always @(posedge phy_clk) begin
    macTxInterFrame_1_io_output_payload_fragment_data_regNext <= macTxInterFrame_1_io_output_payload_fragment_data;
    macTxInterFrame_1_io_output_valid_regNext <= macTxInterFrame_1_io_output_valid;
    gmii_RX_DV_regNext <= gmii_RX_DV;
    gmii_RX_RXD_regNext <= gmii_RX_RXD;
    gmii_RX_ER_regNext <= gmii_RX_ER;
    _zz_io_phy_rx_valid_1 <= _zz_io_phy_rx_valid;
    _zz_io_phy_rx_payload_fragment_error <= gmii_RX_ER_regNext;
    _zz_io_phy_rx_payload_fragment_data <= gmii_RX_RXD_regNext;
  end

  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      mac_io_ctrl_tx_flush_driver <= 1'b1;
      mac_io_ctrl_tx_alignerEnable_driver <= 1'b0;
      mac_io_ctrl_rx_flush_driver <= 1'b1;
      mac_io_ctrl_rx_alignerEnable_driver <= 1'b0;
    end else begin
      if(_zz_busCtrl_writeJoinEvent_translated_ready) begin
        _zz_axil4Ctrl_bvalid_2 <= (busCtrl_writeJoinEvent_translated_valid && _zz_axil4Ctrl_bvalid);
      end
      if(axil4Ctrl_arready) begin
        axil4Ctrl_ar_rValid <= axil4Ctrl_arvalid;
      end
      case(axil4Ctrl_awaddr)
        8'h0 : begin
          if(busCtrl_writeOccur) begin
            mac_io_ctrl_tx_flush_driver <= axil4Ctrl_wdata[0];
            mac_io_ctrl_tx_alignerEnable_driver <= axil4Ctrl_wdata[2];
            mac_io_ctrl_rx_flush_driver <= axil4Ctrl_wdata[4];
            mac_io_ctrl_rx_alignerEnable_driver <= axil4Ctrl_wdata[6];
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    if(_zz_busCtrl_writeJoinEvent_translated_ready) begin
      _zz_axil4Ctrl_bresp <= busCtrl_writeJoinEvent_translated_payload_resp;
    end
    if(axil4Ctrl_arready) begin
      axil4Ctrl_ar_rData_addr <= axil4Ctrl_araddr;
      axil4Ctrl_ar_rData_prot <= axil4Ctrl_arprot;
    end
  end


endmodule

module MacTxInterFrame (
  input               io_input_valid,
  output              io_input_ready,
  input               io_input_payload_last,
  input      [7:0]    io_input_payload_fragment_data,
  output              io_output_valid,
  output              io_output_payload_last,
  output     [7:0]    io_output_payload_fragment_data,
  input               phy_clk,
  input               phy_resetn
);

  wire       [3:0]    _zz_counter_valueNext;
  wire       [0:0]    _zz_counter_valueNext_1;
  reg                 counter_willIncrement;
  wire                counter_willClear;
  reg        [3:0]    counter_valueNext;
  reg        [3:0]    counter_value;
  wire                counter_willOverflowIfInc;
  wire                counter_willOverflow;
  wire                io_input_fire;
  wire                when_MacTx_l348;
  wire                _zz_io_input_ready;

  assign _zz_counter_valueNext_1 = counter_willIncrement;
  assign _zz_counter_valueNext = {3'd0, _zz_counter_valueNext_1};
  always @(*) begin
    counter_willIncrement = 1'b0;
    if(when_MacTx_l348) begin
      counter_willIncrement = 1'b1;
    end
  end

  assign counter_willClear = 1'b0;
  assign counter_willOverflowIfInc = (counter_value == 4'b1100);
  assign counter_willOverflow = (counter_willOverflowIfInc && counter_willIncrement);
  always @(*) begin
    if(counter_willOverflow) begin
      counter_valueNext = 4'b0000;
    end else begin
      counter_valueNext = (counter_value + _zz_counter_valueNext);
    end
    if(counter_willClear) begin
      counter_valueNext = 4'b0000;
    end
  end

  assign io_input_fire = (io_input_valid && io_input_ready);
  assign when_MacTx_l348 = ((counter_value != 4'b0000) || (io_input_fire && io_input_payload_last));
  assign _zz_io_input_ready = (! (counter_value != 4'b0000));
  assign io_input_ready = (1'b1 && _zz_io_input_ready);
  assign io_output_valid = (io_input_valid && _zz_io_input_ready);
  assign io_output_payload_last = io_input_payload_last;
  assign io_output_payload_fragment_data = io_input_payload_fragment_data;
  always @(posedge phy_clk) begin
    if(!phy_resetn) begin
      counter_value <= 4'b0000;
    end else begin
      counter_value <= counter_valueNext;
    end
  end


endmodule

module MacEth (
  input               io_phy_rx_valid,
  output              io_phy_rx_ready,
  input               io_phy_rx_payload_last,
  input               io_phy_rx_payload_fragment_error,
  input      [7:0]    io_phy_rx_payload_fragment_data,
  output              io_phy_tx_valid,
  input               io_phy_tx_ready,
  output              io_phy_tx_payload_last,
  output     [7:0]    io_phy_tx_payload_fragment_data,
  input               io_phy_colision,
  input               io_phy_busy,
  output              io_ctrl_rx_stream_valid,
  input               io_ctrl_rx_stream_ready,
  output     [31:0]   io_ctrl_rx_stream_payload,
  input               io_ctrl_rx_flush,
  input               io_ctrl_rx_alignerEnable,
  input               io_ctrl_rx_stats_clear,
  output     [7:0]    io_ctrl_rx_stats_drops,
  output     [7:0]    io_ctrl_rx_stats_errors,
  input               io_ctrl_tx_stream_valid,
  output              io_ctrl_tx_stream_ready,
  input      [31:0]   io_ctrl_tx_stream_payload,
  output     [10:0]   io_ctrl_tx_availability,
  input               io_ctrl_tx_flush,
  input               io_ctrl_tx_alignerEnable,
  output              io_ctrl_pending,
  output              io_sim_drop,
  output              io_sim_error,
  output              io_sim_commit,
  input               resetn,
  input               clk,
  input               phy_clk
);

  wire                bufferCC_18_io_dataOut;
  wire                bufferCC_19_io_dataOut;
  wire                rxFrontend_preamble_input_ready;
  wire                rxFrontend_preamble_output_valid;
  wire                rxFrontend_preamble_output_payload_last;
  wire                rxFrontend_preamble_output_payload_fragment_error;
  wire       [7:0]    rxFrontend_preamble_output_payload_fragment_data;
  wire                rxFrontend_checker_io_input_ready;
  wire                rxFrontend_checker_io_output_valid;
  wire                rxFrontend_checker_io_output_payload_last;
  wire                rxFrontend_checker_io_output_payload_fragment_error;
  wire       [7:0]    rxFrontend_checker_io_output_payload_fragment_data;
  wire                rxFrontend_aligner_io_input_ready;
  wire                rxFrontend_aligner_io_output_valid;
  wire                rxFrontend_aligner_io_output_payload_last;
  wire                rxFrontend_aligner_io_output_payload_fragment_error;
  wire       [7:0]    rxFrontend_aligner_io_output_payload_fragment_data;
  wire                io_ctrl_rx_alignerEnable_buffercc_io_dataOut;
  wire                rxFrontend_buffer_io_push_stream_ready;
  wire                rxFrontend_buffer_io_push_drop;
  wire                rxFrontend_buffer_io_push_commit;
  wire                rxFrontend_buffer_io_push_error;
  wire                rxFrontend_buffer_io_pop_stream_valid;
  wire       [31:0]   rxFrontend_buffer_io_pop_stream_payload;
  wire       [7:0]    rxFrontend_buffer_io_pop_stats_drops;
  wire       [7:0]    rxFrontend_buffer_io_pop_stats_errors;
  wire                txFrontend_buffer_io_push_stream_ready;
  wire       [10:0]   txFrontend_buffer_io_push_availability;
  wire                txFrontend_buffer_io_pop_stream_valid;
  wire                txFrontend_buffer_io_pop_stream_payload_last;
  wire       [7:0]    txFrontend_buffer_io_pop_stream_payload_fragment_data;
  wire                txBackend_aligner_io_input_ready;
  wire                txBackend_aligner_io_output_valid;
  wire                txBackend_aligner_io_output_payload_last;
  wire       [7:0]    txBackend_aligner_io_output_payload_fragment_data;
  wire                io_ctrl_tx_alignerEnable_buffercc_io_dataOut;
  wire                txBackend_padder_io_input_ready;
  wire                txBackend_padder_io_output_valid;
  wire                txBackend_padder_io_output_payload_last;
  wire       [7:0]    txBackend_padder_io_output_payload_fragment_data;
  wire                txBackend_crc_io_input_ready;
  wire                txBackend_crc_io_output_valid;
  wire                txBackend_crc_io_output_payload_last;
  wire       [7:0]    txBackend_crc_io_output_payload_fragment_data;
  wire                txBackend_header_io_input_ready;
  wire                txBackend_header_io_output_valid;
  wire                txBackend_header_io_output_payload_last;
  wire       [7:0]    txBackend_header_io_output_payload_fragment_data;
  reg                 io_ctrl_rx_stream_valid_regNext;
  wire                _zz_1;
  wire                rxReset;
  wire                _zz_2;
  wire                txReset;
  wire                txBackend_header_io_output_fire;
  reg                 _zz_io_pop_commit;

  BufferCC_14 bufferCC_18 (
    .io_dataIn  (1'b1                  ), //i
    .io_dataOut (bufferCC_18_io_dataOut), //o
    .phy_clk    (phy_clk               ), //i
    ._zz_1      (_zz_1                 )  //i
  );
  BufferCC_14 bufferCC_19 (
    .io_dataIn  (1'b1                  ), //i
    .io_dataOut (bufferCC_19_io_dataOut), //o
    .phy_clk    (phy_clk               ), //i
    ._zz_1      (_zz_2                 )  //i
  );
  MacRxPreamble rxFrontend_preamble (
    .input_valid                   (io_phy_rx_valid                                      ), //i
    .input_ready                   (rxFrontend_preamble_input_ready                      ), //o
    .input_payload_last            (io_phy_rx_payload_last                               ), //i
    .input_payload_fragment_error  (io_phy_rx_payload_fragment_error                     ), //i
    .input_payload_fragment_data   (io_phy_rx_payload_fragment_data[7:0]                 ), //i
    .output_valid                  (rxFrontend_preamble_output_valid                     ), //o
    .output_ready                  (rxFrontend_checker_io_input_ready                    ), //i
    .output_payload_last           (rxFrontend_preamble_output_payload_last              ), //o
    .output_payload_fragment_error (rxFrontend_preamble_output_payload_fragment_error    ), //o
    .output_payload_fragment_data  (rxFrontend_preamble_output_payload_fragment_data[7:0]), //o
    .phy_clk                       (phy_clk                                              ), //i
    .rxReset                       (rxReset                                              )  //i
  );
  MacRxChecker rxFrontend_checker (
    .io_input_valid                   (rxFrontend_preamble_output_valid                       ), //i
    .io_input_ready                   (rxFrontend_checker_io_input_ready                      ), //o
    .io_input_payload_last            (rxFrontend_preamble_output_payload_last                ), //i
    .io_input_payload_fragment_error  (rxFrontend_preamble_output_payload_fragment_error      ), //i
    .io_input_payload_fragment_data   (rxFrontend_preamble_output_payload_fragment_data[7:0]  ), //i
    .io_output_valid                  (rxFrontend_checker_io_output_valid                     ), //o
    .io_output_ready                  (rxFrontend_aligner_io_input_ready                      ), //i
    .io_output_payload_last           (rxFrontend_checker_io_output_payload_last              ), //o
    .io_output_payload_fragment_error (rxFrontend_checker_io_output_payload_fragment_error    ), //o
    .io_output_payload_fragment_data  (rxFrontend_checker_io_output_payload_fragment_data[7:0]), //o
    .phy_clk                          (phy_clk                                                ), //i
    .rxReset                          (rxReset                                                )  //i
  );
  MacRxAligner rxFrontend_aligner (
    .io_enable                        (io_ctrl_rx_alignerEnable_buffercc_io_dataOut           ), //i
    .io_input_valid                   (rxFrontend_checker_io_output_valid                     ), //i
    .io_input_ready                   (rxFrontend_aligner_io_input_ready                      ), //o
    .io_input_payload_last            (rxFrontend_checker_io_output_payload_last              ), //i
    .io_input_payload_fragment_error  (rxFrontend_checker_io_output_payload_fragment_error    ), //i
    .io_input_payload_fragment_data   (rxFrontend_checker_io_output_payload_fragment_data[7:0]), //i
    .io_output_valid                  (rxFrontend_aligner_io_output_valid                     ), //o
    .io_output_ready                  (rxFrontend_buffer_io_push_stream_ready                 ), //i
    .io_output_payload_last           (rxFrontend_aligner_io_output_payload_last              ), //o
    .io_output_payload_fragment_error (rxFrontend_aligner_io_output_payload_fragment_error    ), //o
    .io_output_payload_fragment_data  (rxFrontend_aligner_io_output_payload_fragment_data[7:0]), //o
    .phy_clk                          (phy_clk                                                ), //i
    .rxReset                          (rxReset                                                )  //i
  );
  BufferCC_16 io_ctrl_rx_alignerEnable_buffercc (
    .io_dataIn  (io_ctrl_rx_alignerEnable                    ), //i
    .io_dataOut (io_ctrl_rx_alignerEnable_buffercc_io_dataOut), //o
    .phy_clk    (phy_clk                                     ), //i
    .rxReset    (rxReset                                     )  //i
  );
  MacRxBuffer rxFrontend_buffer (
    .io_push_stream_valid                  (rxFrontend_aligner_io_output_valid                     ), //i
    .io_push_stream_ready                  (rxFrontend_buffer_io_push_stream_ready                 ), //o
    .io_push_stream_payload_last           (rxFrontend_aligner_io_output_payload_last              ), //i
    .io_push_stream_payload_fragment_error (rxFrontend_aligner_io_output_payload_fragment_error    ), //i
    .io_push_stream_payload_fragment_data  (rxFrontend_aligner_io_output_payload_fragment_data[7:0]), //i
    .io_push_drop                          (rxFrontend_buffer_io_push_drop                         ), //o
    .io_push_commit                        (rxFrontend_buffer_io_push_commit                       ), //o
    .io_push_error                         (rxFrontend_buffer_io_push_error                        ), //o
    .io_pop_stream_valid                   (rxFrontend_buffer_io_pop_stream_valid                  ), //o
    .io_pop_stream_ready                   (io_ctrl_rx_stream_ready                                ), //i
    .io_pop_stream_payload                 (rxFrontend_buffer_io_pop_stream_payload[31:0]          ), //o
    .io_pop_stats_clear                    (io_ctrl_rx_stats_clear                                 ), //i
    .io_pop_stats_drops                    (rxFrontend_buffer_io_pop_stats_drops[7:0]              ), //o
    .io_pop_stats_errors                   (rxFrontend_buffer_io_pop_stats_errors[7:0]             ), //o
    .phy_clk                               (phy_clk                                                ), //i
    .rxReset                               (rxReset                                                ), //i
    .clk                                   (clk                                                    ), //i
    .resetn                                (resetn                                                 ), //i
    .io_ctrl_rx_flush                      (io_ctrl_rx_flush                                       )  //i
  );
  MacTxBuffer txFrontend_buffer (
    .io_push_stream_valid                (io_ctrl_tx_stream_valid                                   ), //i
    .io_push_stream_ready                (txFrontend_buffer_io_push_stream_ready                    ), //o
    .io_push_stream_payload              (io_ctrl_tx_stream_payload[31:0]                           ), //i
    .io_push_availability                (txFrontend_buffer_io_push_availability[10:0]              ), //o
    .io_pop_stream_valid                 (txFrontend_buffer_io_pop_stream_valid                     ), //o
    .io_pop_stream_ready                 (txBackend_aligner_io_input_ready                          ), //i
    .io_pop_stream_payload_last          (txFrontend_buffer_io_pop_stream_payload_last              ), //o
    .io_pop_stream_payload_fragment_data (txFrontend_buffer_io_pop_stream_payload_fragment_data[7:0]), //o
    .io_pop_redo                         (1'b0                                                      ), //i
    .io_pop_commit                       (_zz_io_pop_commit                                         ), //i
    .clk                                 (clk                                                       ), //i
    .resetn                              (resetn                                                    ), //i
    .io_ctrl_tx_flush                    (io_ctrl_tx_flush                                          ), //i
    .phy_clk                             (phy_clk                                                   ), //i
    .txReset                             (txReset                                                   )  //i
  );
  MacTxAligner txBackend_aligner (
    .io_enable                       (io_ctrl_tx_alignerEnable_buffercc_io_dataOut              ), //i
    .io_input_valid                  (txFrontend_buffer_io_pop_stream_valid                     ), //i
    .io_input_ready                  (txBackend_aligner_io_input_ready                          ), //o
    .io_input_payload_last           (txFrontend_buffer_io_pop_stream_payload_last              ), //i
    .io_input_payload_fragment_data  (txFrontend_buffer_io_pop_stream_payload_fragment_data[7:0]), //i
    .io_output_valid                 (txBackend_aligner_io_output_valid                         ), //o
    .io_output_ready                 (txBackend_padder_io_input_ready                           ), //i
    .io_output_payload_last          (txBackend_aligner_io_output_payload_last                  ), //o
    .io_output_payload_fragment_data (txBackend_aligner_io_output_payload_fragment_data[7:0]    ), //o
    .phy_clk                         (phy_clk                                                   ), //i
    .txReset                         (txReset                                                   )  //i
  );
  BufferCC_17 io_ctrl_tx_alignerEnable_buffercc (
    .io_dataIn  (io_ctrl_tx_alignerEnable                    ), //i
    .io_dataOut (io_ctrl_tx_alignerEnable_buffercc_io_dataOut), //o
    .phy_clk    (phy_clk                                     ), //i
    .txReset    (txReset                                     )  //i
  );
  MacTxPadder txBackend_padder (
    .io_input_valid                  (txBackend_aligner_io_output_valid                     ), //i
    .io_input_ready                  (txBackend_padder_io_input_ready                       ), //o
    .io_input_payload_last           (txBackend_aligner_io_output_payload_last              ), //i
    .io_input_payload_fragment_data  (txBackend_aligner_io_output_payload_fragment_data[7:0]), //i
    .io_output_valid                 (txBackend_padder_io_output_valid                      ), //o
    .io_output_ready                 (txBackend_crc_io_input_ready                          ), //i
    .io_output_payload_last          (txBackend_padder_io_output_payload_last               ), //o
    .io_output_payload_fragment_data (txBackend_padder_io_output_payload_fragment_data[7:0] ), //o
    .phy_clk                         (phy_clk                                               ), //i
    .txReset                         (txReset                                               )  //i
  );
  MacTxCrc txBackend_crc (
    .io_input_valid                  (txBackend_padder_io_output_valid                     ), //i
    .io_input_ready                  (txBackend_crc_io_input_ready                         ), //o
    .io_input_payload_last           (txBackend_padder_io_output_payload_last              ), //i
    .io_input_payload_fragment_data  (txBackend_padder_io_output_payload_fragment_data[7:0]), //i
    .io_output_valid                 (txBackend_crc_io_output_valid                        ), //o
    .io_output_ready                 (txBackend_header_io_input_ready                      ), //i
    .io_output_payload_last          (txBackend_crc_io_output_payload_last                 ), //o
    .io_output_payload_fragment_data (txBackend_crc_io_output_payload_fragment_data[7:0]   ), //o
    .phy_clk                         (phy_clk                                              ), //i
    .txReset                         (txReset                                              )  //i
  );
  MacTxHeader txBackend_header (
    .io_input_valid                  (txBackend_crc_io_output_valid                        ), //i
    .io_input_ready                  (txBackend_header_io_input_ready                      ), //o
    .io_input_payload_last           (txBackend_crc_io_output_payload_last                 ), //i
    .io_input_payload_fragment_data  (txBackend_crc_io_output_payload_fragment_data[7:0]   ), //i
    .io_output_valid                 (txBackend_header_io_output_valid                     ), //o
    .io_output_ready                 (io_phy_tx_ready                                      ), //i
    .io_output_payload_last          (txBackend_header_io_output_payload_last              ), //o
    .io_output_payload_fragment_data (txBackend_header_io_output_payload_fragment_data[7:0]), //o
    .phy_clk                         (phy_clk                                              ), //i
    .txReset                         (txReset                                              )  //i
  );
  assign io_ctrl_pending = io_ctrl_rx_stream_valid_regNext;
  assign _zz_1 = ((! resetn) || io_ctrl_rx_flush);
  assign rxReset = bufferCC_18_io_dataOut;
  assign _zz_2 = ((! resetn) || io_ctrl_tx_flush);
  assign txReset = bufferCC_19_io_dataOut;
  assign io_phy_rx_ready = rxFrontend_preamble_input_ready;
  assign io_sim_drop = rxFrontend_buffer_io_push_drop;
  assign io_sim_commit = rxFrontend_buffer_io_push_commit;
  assign io_sim_error = rxFrontend_buffer_io_push_error;
  assign io_ctrl_rx_stream_valid = rxFrontend_buffer_io_pop_stream_valid;
  assign io_ctrl_rx_stream_payload = rxFrontend_buffer_io_pop_stream_payload;
  assign io_ctrl_rx_stats_errors = rxFrontend_buffer_io_pop_stats_errors;
  assign io_ctrl_rx_stats_drops = rxFrontend_buffer_io_pop_stats_drops;
  assign io_ctrl_tx_stream_ready = txFrontend_buffer_io_push_stream_ready;
  assign io_ctrl_tx_availability = txFrontend_buffer_io_push_availability;
  assign io_phy_tx_valid = txBackend_header_io_output_valid;
  assign io_phy_tx_payload_last = txBackend_header_io_output_payload_last;
  assign io_phy_tx_payload_fragment_data = txBackend_header_io_output_payload_fragment_data;
  assign txBackend_header_io_output_fire = (txBackend_header_io_output_valid && io_phy_tx_ready);
  always @(posedge clk) begin
    if(!resetn) begin
      io_ctrl_rx_stream_valid_regNext <= 1'b0;
    end else begin
      io_ctrl_rx_stream_valid_regNext <= io_ctrl_rx_stream_valid;
    end
  end

  always @(posedge phy_clk) begin
    if(!txReset) begin
      _zz_io_pop_commit <= 1'b0;
    end else begin
      _zz_io_pop_commit <= (txBackend_header_io_output_fire && txBackend_header_io_output_payload_last);
    end
  end


endmodule

module MacTxHeader (
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [7:0]    io_input_payload_fragment_data,
  output              io_output_valid,
  input               io_output_ready,
  output reg          io_output_payload_last,
  output reg [7:0]    io_output_payload_fragment_data,
  input               phy_clk,
  input               txReset
);

  reg        [3:0]    state;
  wire                when_MacTx_l293;
  wire                when_MacTx_l300;
  wire                io_output_fire;
  wire                io_input_fire;
  wire                when_MacTx_l305;

  assign io_output_valid = io_input_valid;
  always @(*) begin
    io_output_payload_last = 1'b0;
    if(when_MacTx_l293) begin
      io_output_payload_last = io_input_payload_last;
    end
  end

  always @(*) begin
    io_input_ready = 1'b0;
    if(when_MacTx_l293) begin
      io_input_ready = io_output_ready;
    end
  end

  assign when_MacTx_l293 = (state == 4'b1000);
  always @(*) begin
    if(when_MacTx_l293) begin
      io_output_payload_fragment_data = io_input_payload_fragment_data;
    end else begin
      io_output_payload_fragment_data = 8'h0;
      io_output_payload_fragment_data[0] = 1'b1;
      io_output_payload_fragment_data[2] = 1'b1;
      io_output_payload_fragment_data[4] = 1'b1;
      io_output_payload_fragment_data[6] = 1'b1;
      if(when_MacTx_l300) begin
        io_output_payload_fragment_data[7] = 1'b1;
      end
    end
  end

  assign when_MacTx_l300 = (state == 4'b0111);
  assign io_output_fire = (io_output_valid && io_output_ready);
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign when_MacTx_l305 = (io_input_fire && io_input_payload_last);
  always @(posedge phy_clk) begin
    if(!txReset) begin
      state <= 4'b0000;
    end else begin
      if(!when_MacTx_l293) begin
        if(io_output_fire) begin
          state <= (state + 4'b0001);
        end
      end
      if(when_MacTx_l305) begin
        state <= 4'b0000;
      end
    end
  end


endmodule

module MacTxCrc (
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [7:0]    io_input_payload_fragment_data,
  output reg          io_output_valid,
  input               io_output_ready,
  output reg          io_output_payload_last,
  output reg [7:0]    io_output_payload_fragment_data,
  input               phy_clk,
  input               txReset
);

  wire                crc_2_flush;
  wire       [31:0]   crc_2_result;
  wire       [31:0]   crc_2_resultNext;
  reg        [7:0]    _zz_io_output_payload_fragment_data;
  reg                 emitCrc;
  wire                io_input_fire;
  wire                when_MacTx_l227;
  wire                io_output_fire;
  wire                when_MacTx_l227_1;
  reg        [1:0]    counter;
  wire                io_input_fire_1;
  wire                io_output_fire_1;
  wire                when_MacTx_l234;
  wire                when_MacTx_l242;

  Crc_1 crc_2 (
    .flush         (crc_2_flush                        ), //i
    .input_valid   (io_input_fire_1                    ), //i
    .input_payload (io_input_payload_fragment_data[7:0]), //i
    .result        (crc_2_result[31:0]                 ), //o
    .resultNext    (crc_2_resultNext[31:0]             ), //o
    .phy_clk       (phy_clk                            ), //i
    .txReset       (txReset                            )  //i
  );
  always @(*) begin
    case(counter)
      2'b00 : _zz_io_output_payload_fragment_data = crc_2_result[7 : 0];
      2'b01 : _zz_io_output_payload_fragment_data = crc_2_result[15 : 8];
      2'b10 : _zz_io_output_payload_fragment_data = crc_2_result[23 : 16];
      default : _zz_io_output_payload_fragment_data = crc_2_result[31 : 24];
    endcase
  end

  assign io_input_fire = (io_input_valid && io_input_ready);
  assign when_MacTx_l227 = (io_input_fire && io_input_payload_last);
  assign io_output_fire = (io_output_valid && io_output_ready);
  assign when_MacTx_l227_1 = (io_output_fire && io_output_payload_last);
  assign io_input_fire_1 = (io_input_valid && io_input_ready);
  assign io_output_fire_1 = (io_output_valid && io_output_ready);
  assign crc_2_flush = (io_output_fire_1 && io_output_payload_last);
  always @(*) begin
    io_output_payload_last = 1'b0;
    if(!when_MacTx_l234) begin
      if(when_MacTx_l242) begin
        io_output_payload_last = 1'b1;
      end
    end
  end

  assign when_MacTx_l234 = (! emitCrc);
  always @(*) begin
    if(when_MacTx_l234) begin
      io_output_valid = io_input_valid;
    end else begin
      io_output_valid = 1'b1;
    end
  end

  always @(*) begin
    if(when_MacTx_l234) begin
      io_output_payload_fragment_data = io_input_payload_fragment_data;
    end else begin
      io_output_payload_fragment_data = _zz_io_output_payload_fragment_data;
    end
  end

  always @(*) begin
    if(when_MacTx_l234) begin
      io_input_ready = io_output_ready;
    end else begin
      io_input_ready = 1'b0;
    end
  end

  assign when_MacTx_l242 = (counter == 2'b11);
  always @(posedge phy_clk) begin
    if(!txReset) begin
      emitCrc <= 1'b0;
      counter <= 2'b00;
    end else begin
      if(when_MacTx_l227) begin
        emitCrc <= 1'b1;
      end
      if(when_MacTx_l227_1) begin
        emitCrc <= 1'b0;
      end
      if(!when_MacTx_l234) begin
        if(when_MacTx_l242) begin
          if(io_output_ready) begin
            emitCrc <= 1'b0;
          end
        end
        if(io_output_ready) begin
          counter <= (counter + 2'b01);
        end
      end
    end
  end


endmodule

module MacTxPadder (
  input               io_input_valid,
  output              io_input_ready,
  input               io_input_payload_last,
  input      [7:0]    io_input_payload_fragment_data,
  output reg          io_output_valid,
  input               io_output_ready,
  output reg          io_output_payload_last,
  output reg [7:0]    io_output_payload_fragment_data,
  input               phy_clk,
  input               txReset
);

  reg        [5:0]    counter;
  wire                ok;
  wire                io_input_fire;
  reg                 io_input_payload_first;
  wire                fill;
  wire                io_output_fire;
  wire                when_MacTx_l322;
  wire                io_output_fire_1;
  wire                when_MacTx_l325;
  wire                _zz_io_input_ready;
  wire                when_MacTx_l329;

  assign ok = (counter == 6'h3b);
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign fill = ((counter != 6'h0) && io_input_payload_first);
  assign io_output_fire = (io_output_valid && io_output_ready);
  assign when_MacTx_l322 = ((! ok) && io_output_fire);
  assign io_output_fire_1 = (io_output_valid && io_output_ready);
  assign when_MacTx_l325 = (io_output_fire_1 && io_output_payload_last);
  assign _zz_io_input_ready = (! fill);
  assign io_input_ready = (io_output_ready && _zz_io_input_ready);
  always @(*) begin
    io_output_valid = (io_input_valid && _zz_io_input_ready);
    if(fill) begin
      io_output_valid = 1'b1;
    end
  end

  always @(*) begin
    io_output_payload_last = io_input_payload_last;
    if(when_MacTx_l329) begin
      io_output_payload_last = 1'b0;
    end
    if(fill) begin
      io_output_payload_last = ok;
    end
  end

  always @(*) begin
    io_output_payload_fragment_data = io_input_payload_fragment_data;
    if(fill) begin
      io_output_payload_fragment_data = 8'h0;
    end
  end

  assign when_MacTx_l329 = (! ok);
  always @(posedge phy_clk) begin
    if(!txReset) begin
      counter <= 6'h0;
      io_input_payload_first <= 1'b1;
    end else begin
      if(io_input_fire) begin
        io_input_payload_first <= io_input_payload_last;
      end
      if(when_MacTx_l322) begin
        counter <= (counter + 6'h01);
      end
      if(when_MacTx_l325) begin
        counter <= 6'h0;
      end
    end
  end


endmodule

module BufferCC_17 (
  input               io_dataIn,
  output              io_dataOut,
  input               phy_clk,
  input               txReset
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge phy_clk) begin
    buffers_0 <= io_dataIn;
    buffers_1 <= buffers_0;
  end


endmodule

module MacTxAligner (
  input               io_enable,
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [7:0]    io_input_payload_fragment_data,
  output reg          io_output_valid,
  input               io_output_ready,
  output              io_output_payload_last,
  output     [7:0]    io_output_payload_fragment_data,
  input               phy_clk,
  input               txReset
);

  reg        [1:0]    state;
  wire                when_MacTx_l267;
  wire                io_input_fire;
  wire                when_MacTx_l275;

  always @(*) begin
    io_output_valid = io_input_valid;
    if(when_MacTx_l267) begin
      io_output_valid = 1'b0;
    end
  end

  always @(*) begin
    io_input_ready = io_output_ready;
    if(when_MacTx_l267) begin
      io_input_ready = 1'b1;
    end
  end

  assign io_output_payload_last = io_input_payload_last;
  assign io_output_payload_fragment_data = io_input_payload_fragment_data;
  assign when_MacTx_l267 = (io_enable && (state != 2'b10));
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign when_MacTx_l275 = (io_input_fire && io_input_payload_last);
  always @(posedge phy_clk) begin
    if(!txReset) begin
      state <= 2'b00;
    end else begin
      if(when_MacTx_l267) begin
        if(io_input_valid) begin
          state <= (state + 2'b01);
        end
      end
      if(when_MacTx_l275) begin
        state <= 2'b00;
      end
    end
  end


endmodule

module MacTxBuffer (
  input               io_push_stream_valid,
  output              io_push_stream_ready,
  input      [31:0]   io_push_stream_payload,
  output     [10:0]   io_push_availability,
  output reg          io_pop_stream_valid,
  input               io_pop_stream_ready,
  output reg          io_pop_stream_payload_last,
  output     [7:0]    io_pop_stream_payload_fragment_data,
  input               io_pop_redo,
  input               io_pop_commit,
  input               clk,
  input               resetn,
  input               io_ctrl_tx_flush,
  input               phy_clk,
  input               txReset
);
  localparam push_State_LENGTH = 1'd0;
  localparam push_State_DATA = 1'd1;
  localparam pop_State_LENGTH = 2'd0;
  localparam pop_State_DATA = 2'd1;
  localparam pop_State_WAIT_1 = 2'd2;

  reg                 fifo_io_pop_stream_ready;
  wire                fifo_io_push_stream_ready;
  wire       [10:0]   fifo_io_push_availability;
  wire                fifo_io_pop_stream_valid;
  wire       [31:0]   fifo_io_pop_stream_payload;
  wire       [14:0]   _zz_push_wordCountMinusOne;
  wire       [31:0]   _zz_push_length;
  reg        [7:0]    _zz_io_pop_stream_payload_fragment_data;
  wire       [31:0]   _zz_pop_length;
  reg                 push_commit;
  reg        [0:0]    push_state_1;
  reg        [14:0]   push_length;
  wire       [9:0]    push_wordCountMinusOne;
  reg        [9:0]    push_wordCounter;
  wire                fifo_io_push_stream_fire;
  wire                io_push_stream_fire;
  wire                when_MacTx_l151;
  reg        [1:0]    pop_state_1;
  reg        [14:0]   pop_length;
  wire       [14:0]   pop_lengthMinusOne;
  reg        [9:0]    pop_wordCounter;
  wire       [9:0]    pop_wordCountEndAt;
  wire       [1:0]    pop_spliterEndAt;
  reg        [1:0]    pop_spliter;
  wire                when_MacTx_l196;
  wire                when_MacTx_l201;
  `ifndef SYNTHESIS
  reg [47:0] push_state_1_string;
  reg [47:0] pop_state_1_string;
  `endif


  assign _zz_push_wordCountMinusOne = (push_length - 15'h0001);
  assign _zz_push_length = io_push_stream_payload;
  assign _zz_pop_length = fifo_io_pop_stream_payload;
  MacTxManagedStreamFifoCc fifo (
    .io_push_stream_valid   (io_push_stream_valid            ), //i
    .io_push_stream_ready   (fifo_io_push_stream_ready       ), //o
    .io_push_stream_payload (io_push_stream_payload[31:0]    ), //i
    .io_push_commit         (push_commit                     ), //i
    .io_push_availability   (fifo_io_push_availability[10:0] ), //o
    .io_pop_stream_valid    (fifo_io_pop_stream_valid        ), //o
    .io_pop_stream_ready    (fifo_io_pop_stream_ready        ), //i
    .io_pop_stream_payload  (fifo_io_pop_stream_payload[31:0]), //o
    .io_pop_redo            (io_pop_redo                     ), //i
    .io_pop_commit          (io_pop_commit                   ), //i
    .clk                    (clk                             ), //i
    .resetn                 (resetn                          ), //i
    .io_ctrl_tx_flush       (io_ctrl_tx_flush                ), //i
    .phy_clk                (phy_clk                         ), //i
    .txReset                (txReset                         )  //i
  );
  always @(*) begin
    case(pop_spliter)
      2'b00 : _zz_io_pop_stream_payload_fragment_data = fifo_io_pop_stream_payload[7 : 0];
      2'b01 : _zz_io_pop_stream_payload_fragment_data = fifo_io_pop_stream_payload[15 : 8];
      2'b10 : _zz_io_pop_stream_payload_fragment_data = fifo_io_pop_stream_payload[23 : 16];
      default : _zz_io_pop_stream_payload_fragment_data = fifo_io_pop_stream_payload[31 : 24];
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(push_state_1)
      push_State_LENGTH : push_state_1_string = "LENGTH";
      push_State_DATA : push_state_1_string = "DATA  ";
      default : push_state_1_string = "??????";
    endcase
  end
  always @(*) begin
    case(pop_state_1)
      pop_State_LENGTH : pop_state_1_string = "LENGTH";
      pop_State_DATA : pop_state_1_string = "DATA  ";
      pop_State_WAIT_1 : pop_state_1_string = "WAIT_1";
      default : pop_state_1_string = "??????";
    endcase
  end
  `endif

  assign io_push_availability = fifo_io_push_availability;
  assign io_push_stream_ready = fifo_io_push_stream_ready;
  assign push_wordCountMinusOne = (_zz_push_wordCountMinusOne >>> 5);
  assign fifo_io_push_stream_fire = (io_push_stream_valid && fifo_io_push_stream_ready);
  assign io_push_stream_fire = (io_push_stream_valid && io_push_stream_ready);
  assign when_MacTx_l151 = (push_wordCounter == push_wordCountMinusOne);
  assign pop_lengthMinusOne = (pop_length - 15'h0001);
  assign pop_wordCountEndAt = (pop_lengthMinusOne >>> 5);
  assign pop_spliterEndAt = pop_lengthMinusOne[4 : 3];
  always @(*) begin
    fifo_io_pop_stream_ready = 1'b0;
    case(pop_state_1)
      pop_State_LENGTH : begin
        if(fifo_io_pop_stream_valid) begin
          fifo_io_pop_stream_ready = 1'b1;
        end
      end
      pop_State_DATA : begin
        if(io_pop_stream_ready) begin
          if(when_MacTx_l196) begin
            fifo_io_pop_stream_ready = 1'b1;
          end
          if(when_MacTx_l201) begin
            fifo_io_pop_stream_ready = 1'b1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_pop_stream_valid = 1'b0;
    case(pop_state_1)
      pop_State_LENGTH : begin
      end
      pop_State_DATA : begin
        io_pop_stream_valid = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    io_pop_stream_payload_last = 1'b0;
    case(pop_state_1)
      pop_State_LENGTH : begin
      end
      pop_State_DATA : begin
        if(io_pop_stream_ready) begin
          if(when_MacTx_l196) begin
            io_pop_stream_payload_last = 1'b1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  assign io_pop_stream_payload_fragment_data = _zz_io_pop_stream_payload_fragment_data;
  assign when_MacTx_l196 = ((pop_wordCounter == pop_wordCountEndAt) && (pop_spliter == pop_spliterEndAt));
  assign when_MacTx_l201 = (pop_spliter == 2'b11);
  always @(posedge clk) begin
    push_commit <= 1'b0;
    case(push_state_1)
      push_State_LENGTH : begin
        push_wordCounter <= 10'h0;
        if(fifo_io_push_stream_fire) begin
          push_length <= _zz_push_length[14:0];
        end
      end
      default : begin
        if(io_push_stream_fire) begin
          push_wordCounter <= (push_wordCounter + 10'h001);
          if(when_MacTx_l151) begin
            push_commit <= 1'b1;
          end
        end
      end
    endcase
  end

  always @(posedge clk) begin
    if(!resetn || io_ctrl_tx_flush) begin
      push_state_1 <= push_State_LENGTH;
    end else begin
      case(push_state_1)
        push_State_LENGTH : begin
          if(fifo_io_push_stream_fire) begin
            push_state_1 <= push_State_DATA;
          end
        end
        default : begin
          if(io_push_stream_fire) begin
            if(when_MacTx_l151) begin
              push_state_1 <= push_State_LENGTH;
            end
          end
        end
      endcase
    end
  end

  always @(posedge phy_clk) begin
    if(!txReset) begin
      pop_state_1 <= pop_State_LENGTH;
    end else begin
      case(pop_state_1)
        pop_State_LENGTH : begin
          if(fifo_io_pop_stream_valid) begin
            pop_state_1 <= pop_State_DATA;
          end
        end
        pop_State_DATA : begin
          if(io_pop_stream_ready) begin
            if(when_MacTx_l196) begin
              pop_state_1 <= pop_State_WAIT_1;
            end
          end
        end
        default : begin
          if(io_pop_commit) begin
            pop_state_1 <= pop_State_LENGTH;
          end
        end
      endcase
      if(io_pop_redo) begin
        pop_state_1 <= pop_State_LENGTH;
      end
    end
  end

  always @(posedge phy_clk) begin
    case(pop_state_1)
      pop_State_LENGTH : begin
        pop_wordCounter <= 10'h0;
        pop_spliter <= 2'b00;
        if(fifo_io_pop_stream_valid) begin
          pop_length <= _zz_pop_length[14:0];
        end
      end
      pop_State_DATA : begin
        if(io_pop_stream_ready) begin
          pop_spliter <= (pop_spliter + 2'b01);
          if(when_MacTx_l201) begin
            pop_wordCounter <= (pop_wordCounter + 10'h001);
          end
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module MacRxBuffer (
  input               io_push_stream_valid,
  output              io_push_stream_ready,
  input               io_push_stream_payload_last,
  input               io_push_stream_payload_fragment_error,
  input      [7:0]    io_push_stream_payload_fragment_data,
  output              io_push_drop,
  output              io_push_commit,
  output              io_push_error,
  output              io_pop_stream_valid,
  input               io_pop_stream_ready,
  output     [31:0]   io_pop_stream_payload,
  input               io_pop_stats_clear,
  output     [7:0]    io_pop_stats_drops,
  output     [7:0]    io_pop_stats_errors,
  input               phy_clk,
  input               rxReset,
  input               clk,
  input               resetn,
  input               io_ctrl_rx_flush
);

  wire                pulseCCByToggle_2_io_pulseIn;
  wire                pulseCCByToggle_3_io_pulseIn;
  reg        [31:0]   _zz_ram_port1;
  wire                popToPush_io_input_ready;
  wire                popToPush_io_output_valid;
  wire       [10:0]   popToPush_io_output_payload;
  wire                pushToPop_io_input_ready;
  wire                pushToPop_io_output_valid;
  wire       [10:0]   pushToPop_io_output_payload;
  wire                pushToPop_mac_rxReset_syncronized_1;
  wire                pulseCCByToggle_2_io_pulseOut;
  wire                pulseCCByToggle_3_io_pulseOut;
  wire       [14:0]   _zz_push_port_payload_data;
  wire       [7:0]    _zz_pop_stats_drops;
  wire       [0:0]    _zz_pop_stats_drops_1;
  wire       [7:0]    _zz_pop_stats_errors;
  wire       [0:0]    _zz_pop_stats_errors_1;
  reg                 _zz_1;
  reg        [10:0]   push_currentPtr;
  reg        [10:0]   push_oldPtr;
  wire       [10:0]   push_currentPtrPlusOne;
  reg        [10:0]   push_popPtr;
  reg        [23:0]   push_buffer;
  reg        [1:0]    push_state_1;
  reg        [14:0]   push_length;
  reg                 push_port_valid;
  reg        [9:0]    push_port_payload_address;
  reg        [31:0]   push_port_payload_data;
  reg                 push_error;
  reg                 push_drop;
  wire                io_push_stream_fire;
  wire                when_MacRx_l191;
  reg                 push_doWrite;
  wire                io_push_stream_fire_1;
  wire                when_MacRx_l199;
  wire                when_MacRx_l199_1;
  wire                when_MacRx_l199_2;
  wire                when_MacRx_l202;
  wire                push_full;
  wire                io_push_stream_fire_2;
  reg                 push_cleanup;
  reg                 push_commit;
  wire                when_MacRx_l224;
  wire                when_MacRx_l229;
  reg        [10:0]   pop_currentPtr;
  reg        [10:0]   pop_pushPtr;
  wire                pop_cmd_valid;
  wire                pop_cmd_ready;
  wire       [9:0]    pop_cmd_payload;
  wire                _zz_io_pop_stream_valid;
  wire                _zz_pop_cmd_ready;
  reg                 _zz_io_pop_stream_valid_1;
  wire                pop_cmd_fire;
  reg        [7:0]    pop_stats_drops;
  reg        [7:0]    pop_stats_errors;
  reg [31:0] ram [0:1023];

  assign _zz_push_port_payload_data = push_length;
  assign _zz_pop_stats_drops_1 = (pulseCCByToggle_2_io_pulseOut && (pop_stats_drops != 8'hff));
  assign _zz_pop_stats_drops = {7'd0, _zz_pop_stats_drops_1};
  assign _zz_pop_stats_errors_1 = (pulseCCByToggle_3_io_pulseOut && (pop_stats_errors != 8'hff));
  assign _zz_pop_stats_errors = {7'd0, _zz_pop_stats_errors_1};
  always @(posedge phy_clk) begin
    if(_zz_1) begin
      ram[push_port_payload_address] <= push_port_payload_data;
    end
  end

  always @(posedge clk) begin
    if(pop_cmd_ready) begin
      _zz_ram_port1 <= ram[pop_cmd_payload];
    end
  end

  StreamCCByToggle_2 popToPush (
    .io_input_valid    (1'b1                             ), //i
    .io_input_ready    (popToPush_io_input_ready         ), //o
    .io_input_payload  (pop_currentPtr[10:0]             ), //i
    .io_output_valid   (popToPush_io_output_valid        ), //o
    .io_output_ready   (1'b1                             ), //i
    .io_output_payload (popToPush_io_output_payload[10:0]), //o
    .clk               (clk                              ), //i
    .resetn            (resetn                           ), //i
    .io_ctrl_rx_flush  (io_ctrl_rx_flush                 ), //i
    .phy_clk           (phy_clk                          )  //i
  );
  StreamCCByToggle_3 pushToPop (
    .io_input_valid            (1'b1                               ), //i
    .io_input_ready            (pushToPop_io_input_ready           ), //o
    .io_input_payload          (push_oldPtr[10:0]                  ), //i
    .io_output_valid           (pushToPop_io_output_valid          ), //o
    .io_output_ready           (1'b1                               ), //i
    .io_output_payload         (pushToPop_io_output_payload[10:0]  ), //o
    .phy_clk                   (phy_clk                            ), //i
    .rxReset                   (rxReset                            ), //i
    .clk                       (clk                                ), //i
    .mac_rxReset_syncronized_1 (pushToPop_mac_rxReset_syncronized_1)  //o
  );
  PulseCCByToggle pulseCCByToggle_2 (
    .io_pulseIn                (pulseCCByToggle_2_io_pulseIn       ), //i
    .io_pulseOut               (pulseCCByToggle_2_io_pulseOut      ), //o
    .phy_clk                   (phy_clk                            ), //i
    .rxReset                   (rxReset                            ), //i
    .clk                       (clk                                ), //i
    .mac_rxReset_syncronized_1 (pushToPop_mac_rxReset_syncronized_1)  //i
  );
  PulseCCByToggle pulseCCByToggle_3 (
    .io_pulseIn                (pulseCCByToggle_3_io_pulseIn       ), //i
    .io_pulseOut               (pulseCCByToggle_3_io_pulseOut      ), //o
    .phy_clk                   (phy_clk                            ), //i
    .rxReset                   (rxReset                            ), //i
    .clk                       (clk                                ), //i
    .mac_rxReset_syncronized_1 (pushToPop_mac_rxReset_syncronized_1)  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(push_port_valid) begin
      _zz_1 = 1'b1;
    end
  end

  assign push_currentPtrPlusOne = (push_currentPtr + 11'h001);
  always @(*) begin
    push_port_valid = 1'b0;
    if(push_doWrite) begin
      if(!push_full) begin
        push_port_valid = 1'b1;
      end
    end
    if(push_commit) begin
      if(!when_MacRx_l229) begin
        push_port_valid = 1'b1;
      end
    end
  end

  always @(*) begin
    push_port_payload_address = 10'bxxxxxxxxxx;
    if(push_doWrite) begin
      if(!push_full) begin
        push_port_payload_address = push_currentPtrPlusOne[9:0];
      end
    end
    if(push_commit) begin
      if(!when_MacRx_l229) begin
        push_port_payload_address = push_oldPtr[9:0];
      end
    end
  end

  always @(*) begin
    push_port_payload_data = 32'bxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx;
    if(push_doWrite) begin
      if(!push_full) begin
        push_port_payload_data = {io_push_stream_payload_fragment_data,push_buffer};
      end
    end
    if(push_commit) begin
      if(!when_MacRx_l229) begin
        push_port_payload_data = {17'd0, _zz_push_port_payload_data};
      end
    end
  end

  assign io_push_stream_fire = (io_push_stream_valid && io_push_stream_ready);
  assign when_MacRx_l191 = (io_push_stream_fire && io_push_stream_payload_fragment_error);
  always @(*) begin
    push_doWrite = 1'b0;
    if(io_push_stream_fire_1) begin
      if(when_MacRx_l202) begin
        push_doWrite = 1'b1;
      end
    end
    if(when_MacRx_l224) begin
      push_doWrite = 1'b1;
    end
  end

  assign io_push_stream_fire_1 = (io_push_stream_valid && io_push_stream_ready);
  assign when_MacRx_l199 = (push_state_1 == 2'b00);
  assign when_MacRx_l199_1 = (push_state_1 == 2'b01);
  assign when_MacRx_l199_2 = (push_state_1 == 2'b10);
  assign when_MacRx_l202 = (push_state_1 == 2'b11);
  assign push_full = ((push_currentPtrPlusOne[10] != push_popPtr[10]) && (push_currentPtrPlusOne[9 : 0] == push_popPtr[9 : 0]));
  assign io_push_stream_fire_2 = (io_push_stream_valid && io_push_stream_ready);
  assign io_push_stream_ready = ((! push_cleanup) && (! push_commit));
  assign when_MacRx_l224 = (push_cleanup && (push_state_1 != 2'b00));
  assign when_MacRx_l229 = ((push_error || push_drop) || push_full);
  assign io_push_drop = (push_drop || (push_commit && push_full));
  assign io_push_commit = push_commit;
  assign io_push_error = push_error;
  assign pop_cmd_valid = (! (pop_currentPtr == pop_pushPtr));
  assign pop_cmd_payload = pop_currentPtr[9:0];
  assign pop_cmd_ready = ((! _zz_io_pop_stream_valid) || _zz_pop_cmd_ready);
  assign _zz_io_pop_stream_valid = _zz_io_pop_stream_valid_1;
  assign io_pop_stream_valid = _zz_io_pop_stream_valid;
  assign _zz_pop_cmd_ready = io_pop_stream_ready;
  assign io_pop_stream_payload = _zz_ram_port1;
  assign pop_cmd_fire = (pop_cmd_valid && pop_cmd_ready);
  assign pulseCCByToggle_2_io_pulseIn = (push_commit && push_drop);
  assign pulseCCByToggle_3_io_pulseIn = (push_commit && push_error);
  assign io_pop_stats_drops = pop_stats_drops;
  assign io_pop_stats_errors = pop_stats_errors;
  always @(posedge phy_clk) begin
    if(!rxReset) begin
      push_currentPtr <= 11'h0;
      push_oldPtr <= 11'h0;
      push_popPtr <= 11'h0;
      push_state_1 <= 2'b00;
      push_length <= 15'h0;
      push_error <= 1'b0;
      push_drop <= 1'b0;
      push_cleanup <= 1'b0;
      push_commit <= 1'b0;
    end else begin
      if(popToPush_io_output_valid) begin
        push_popPtr <= popToPush_io_output_payload;
      end
      if(when_MacRx_l191) begin
        push_error <= 1'b1;
      end
      if(io_push_stream_fire_1) begin
        push_state_1 <= (push_state_1 + 2'b01);
        push_length <= (push_length + 15'h0008);
      end
      if(push_doWrite) begin
        if(push_full) begin
          push_drop <= 1'b1;
        end else begin
          push_currentPtr <= push_currentPtrPlusOne;
        end
      end
      push_cleanup <= (io_push_stream_fire_2 && io_push_stream_payload_last);
      push_commit <= push_cleanup;
      if(push_commit) begin
        if(when_MacRx_l229) begin
          push_currentPtr <= push_oldPtr;
        end else begin
          push_oldPtr <= push_currentPtrPlusOne;
          push_currentPtr <= push_currentPtrPlusOne;
        end
        push_error <= 1'b0;
        push_drop <= 1'b0;
        push_state_1 <= 2'b00;
        push_length <= 15'h0;
      end
    end
  end

  always @(posedge phy_clk) begin
    if(io_push_stream_fire_1) begin
      if(when_MacRx_l199) begin
        push_buffer[7 : 0] <= io_push_stream_payload_fragment_data;
      end
      if(when_MacRx_l199_1) begin
        push_buffer[15 : 8] <= io_push_stream_payload_fragment_data;
      end
      if(when_MacRx_l199_2) begin
        push_buffer[23 : 16] <= io_push_stream_payload_fragment_data;
      end
    end
  end

  always @(posedge clk) begin
    if(!resetn || io_ctrl_rx_flush) begin
      pop_currentPtr <= 11'h0;
      pop_pushPtr <= 11'h0;
      _zz_io_pop_stream_valid_1 <= 1'b0;
      pop_stats_drops <= 8'h0;
      pop_stats_errors <= 8'h0;
    end else begin
      if(pushToPop_io_output_valid) begin
        pop_pushPtr <= pushToPop_io_output_payload;
      end
      if(_zz_pop_cmd_ready) begin
        _zz_io_pop_stream_valid_1 <= 1'b0;
      end
      if(pop_cmd_ready) begin
        _zz_io_pop_stream_valid_1 <= pop_cmd_valid;
      end
      if(pop_cmd_fire) begin
        pop_currentPtr <= (pop_currentPtr + 11'h001);
      end
      pop_stats_drops <= (pop_stats_drops + _zz_pop_stats_drops);
      pop_stats_errors <= (pop_stats_errors + _zz_pop_stats_errors);
      if(io_pop_stats_clear) begin
        pop_stats_drops <= 8'h0;
        pop_stats_errors <= 8'h0;
      end
    end
  end


endmodule

module BufferCC_16 (
  input               io_dataIn,
  output              io_dataOut,
  input               phy_clk,
  input               rxReset
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge phy_clk) begin
    buffers_0 <= io_dataIn;
    buffers_1 <= buffers_0;
  end


endmodule

module MacRxAligner (
  input               io_enable,
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input               io_input_payload_fragment_error,
  input      [7:0]    io_input_payload_fragment_data,
  output reg          io_output_valid,
  input               io_output_ready,
  output reg          io_output_payload_last,
  output reg          io_output_payload_fragment_error,
  output     [7:0]    io_output_payload_fragment_data,
  input               phy_clk,
  input               rxReset
);

  reg        [1:0]    state;
  wire                when_MacRx_l113;
  wire                io_input_fire;
  wire                when_MacRx_l123;

  always @(*) begin
    io_output_valid = io_input_valid;
    if(when_MacRx_l113) begin
      io_output_valid = 1'b1;
    end
  end

  always @(*) begin
    io_input_ready = io_output_ready;
    if(when_MacRx_l113) begin
      io_input_ready = 1'b0;
    end
  end

  always @(*) begin
    io_output_payload_last = io_input_payload_last;
    if(when_MacRx_l113) begin
      io_output_payload_last = 1'b0;
    end
  end

  always @(*) begin
    io_output_payload_fragment_error = io_input_payload_fragment_error;
    if(when_MacRx_l113) begin
      io_output_payload_fragment_error = 1'b0;
    end
  end

  assign io_output_payload_fragment_data = io_input_payload_fragment_data;
  assign when_MacRx_l113 = (io_enable && (state != 2'b10));
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign when_MacRx_l123 = (io_input_fire && io_input_payload_last);
  always @(posedge phy_clk) begin
    if(!rxReset) begin
      state <= 2'b00;
    end else begin
      if(when_MacRx_l113) begin
        if(io_output_ready) begin
          state <= (state + 2'b01);
        end
      end
      if(when_MacRx_l123) begin
        state <= 2'b00;
      end
    end
  end


endmodule

module MacRxChecker (
  input               io_input_valid,
  output              io_input_ready,
  input               io_input_payload_last,
  input               io_input_payload_fragment_error,
  input      [7:0]    io_input_payload_fragment_data,
  output              io_output_valid,
  input               io_output_ready,
  output              io_output_payload_last,
  output              io_output_payload_fragment_error,
  output     [7:0]    io_output_payload_fragment_data,
  input               phy_clk,
  input               rxReset
);

  wire                crc_2_flush;
  wire       [31:0]   crc_2_result;
  wire       [31:0]   crc_2_resultNext;
  wire                io_output_fire;

  Crc crc_2 (
    .flush         (crc_2_flush                        ), //i
    .input_valid   (io_input_valid                     ), //i
    .input_payload (io_input_payload_fragment_data[7:0]), //i
    .result        (crc_2_result[31:0]                 ), //o
    .resultNext    (crc_2_resultNext[31:0]             ), //o
    .phy_clk       (phy_clk                            ), //i
    .rxReset       (rxReset                            )  //i
  );
  assign io_output_fire = (io_output_valid && io_output_ready);
  assign crc_2_flush = (io_output_fire && io_output_payload_last);
  assign io_output_valid = io_input_valid;
  assign io_output_payload_last = io_input_payload_last;
  assign io_output_payload_fragment_data = io_input_payload_fragment_data;
  assign io_output_payload_fragment_error = (io_input_payload_fragment_error || io_input_payload_last);
  assign io_input_ready = io_output_ready;

endmodule

module MacRxPreamble (
  input               input_valid,
  output              input_ready,
  input               input_payload_last,
  input               input_payload_fragment_error,
  input      [7:0]    input_payload_fragment_data,
  output reg          output_valid,
  input               output_ready,
  output              output_payload_last,
  output              output_payload_fragment_error,
  output     [7:0]    output_payload_fragment_data,
  input               phy_clk,
  input               rxReset
);

  wire                input_fire;
  wire                history_0_valid;
  wire                history_0_ready;
  wire                history_0_payload_last;
  wire                history_0_payload_fragment_error;
  wire       [7:0]    history_0_payload_fragment_data;
  wire                history_1_valid;
  wire                history_1_ready;
  wire                history_1_payload_last;
  wire                history_1_payload_fragment_error;
  wire       [7:0]    history_1_payload_fragment_data;
  wire                history_2_valid;
  wire                history_2_ready;
  wire                history_2_payload_last;
  wire                history_2_payload_fragment_error;
  wire       [7:0]    history_2_payload_fragment_data;
  wire                _zz_history_0_valid;
  wire                _zz_history_0_ready;
  wire                _zz_history_0_payload_last;
  wire                _zz_history_0_payload_fragment_error;
  wire       [7:0]    _zz_history_0_payload_fragment_data;
  reg                 _zz_history_1_valid;
  reg                 _zz_history_1_ready;
  reg                 _zz_history_1_payload_last;
  reg                 _zz_history_1_payload_fragment_error;
  reg        [7:0]    _zz_history_1_payload_fragment_data;
  reg                 _zz_history_2_valid;
  reg                 _zz_history_2_ready;
  reg                 _zz_history_2_payload_last;
  reg                 _zz_history_2_payload_fragment_error;
  reg        [7:0]    _zz_history_2_payload_fragment_data;
  wire       [23:0]   historyDataCat;
  wire                hit;
  reg                 inFrame;
  wire                when_MacRx_l25;
  wire                when_MacRx_l32;

  assign input_fire = (input_valid && input_ready);
  assign _zz_history_0_valid = input_valid;
  assign _zz_history_0_ready = input_ready;
  assign _zz_history_0_payload_last = input_payload_last;
  assign _zz_history_0_payload_fragment_error = input_payload_fragment_error;
  assign _zz_history_0_payload_fragment_data = input_payload_fragment_data;
  assign history_0_valid = _zz_history_0_valid;
  assign history_0_ready = _zz_history_0_ready;
  assign history_0_payload_last = _zz_history_0_payload_last;
  assign history_0_payload_fragment_error = _zz_history_0_payload_fragment_error;
  assign history_0_payload_fragment_data = _zz_history_0_payload_fragment_data;
  assign history_1_valid = _zz_history_1_valid;
  assign history_1_ready = _zz_history_1_ready;
  assign history_1_payload_last = _zz_history_1_payload_last;
  assign history_1_payload_fragment_error = _zz_history_1_payload_fragment_error;
  assign history_1_payload_fragment_data = _zz_history_1_payload_fragment_data;
  assign history_2_valid = _zz_history_2_valid;
  assign history_2_ready = _zz_history_2_ready;
  assign history_2_payload_last = _zz_history_2_payload_last;
  assign history_2_payload_fragment_error = _zz_history_2_payload_fragment_error;
  assign history_2_payload_fragment_data = _zz_history_2_payload_fragment_data;
  assign historyDataCat = {history_0_payload_fragment_data,{history_1_payload_fragment_data,history_2_payload_fragment_data}};
  assign hit = (((history_0_valid && history_1_valid) && history_2_valid) && (historyDataCat == 24'h5555d5));
  always @(*) begin
    output_valid = 1'b0;
    if(!when_MacRx_l25) begin
      if(input_valid) begin
        output_valid = 1'b1;
      end
    end
  end

  assign output_payload_last = input_payload_last;
  assign output_payload_fragment_error = input_payload_fragment_error;
  assign output_payload_fragment_data = input_payload_fragment_data;
  assign input_ready = ((! inFrame) || output_ready);
  assign when_MacRx_l25 = (! inFrame);
  assign when_MacRx_l32 = (output_ready && input_payload_last);
  always @(posedge phy_clk) begin
    if(input_fire) begin
      _zz_history_1_valid <= _zz_history_0_valid;
      _zz_history_1_ready <= _zz_history_0_ready;
      _zz_history_1_payload_last <= _zz_history_0_payload_last;
      _zz_history_1_payload_fragment_error <= _zz_history_0_payload_fragment_error;
      _zz_history_1_payload_fragment_data <= _zz_history_0_payload_fragment_data;
    end
    if(input_fire) begin
      _zz_history_2_valid <= _zz_history_1_valid;
      _zz_history_2_ready <= _zz_history_1_ready;
      _zz_history_2_payload_last <= _zz_history_1_payload_last;
      _zz_history_2_payload_fragment_error <= _zz_history_1_payload_fragment_error;
      _zz_history_2_payload_fragment_data <= _zz_history_1_payload_fragment_data;
    end
  end

  always @(posedge phy_clk) begin
    if(!rxReset) begin
      inFrame <= 1'b0;
    end else begin
      if(when_MacRx_l25) begin
        if(hit) begin
          inFrame <= 1'b1;
        end
      end else begin
        if(input_valid) begin
          if(when_MacRx_l32) begin
            inFrame <= 1'b0;
          end
        end
      end
    end
  end


endmodule

//BufferCC_14 replaced by BufferCC_14

module BufferCC_14 (
  input               io_dataIn,
  output              io_dataOut,
  input               phy_clk,
  input               _zz_1
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge phy_clk or posedge _zz_1) begin
    if(_zz_1) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module Crc_1 (
  input               flush,
  input               input_valid,
  input      [7:0]    input_payload,
  output     [31:0]   result,
  output     [31:0]   resultNext,
  input               phy_clk,
  input               txReset
);

  wire       [31:0]   _zz_state_1;
  wire       [31:0]   _zz_state_2;
  wire       [31:0]   _zz_state_3;
  wire       [31:0]   _zz_state_4;
  wire       [31:0]   _zz_state_5;
  wire       [31:0]   _zz_state_6;
  wire       [31:0]   _zz_state_7;
  wire       [31:0]   _zz_state_8;
  wire                _zz_result;
  wire       [0:0]    _zz_result_1;
  wire       [20:0]   _zz_result_2;
  wire                _zz_result_3;
  wire       [0:0]    _zz_result_4;
  wire       [9:0]    _zz_result_5;
  wire                _zz_resultNext;
  wire       [0:0]    _zz_resultNext_1;
  wire       [20:0]   _zz_resultNext_2;
  wire                _zz_resultNext_3;
  wire       [0:0]    _zz_resultNext_4;
  wire       [9:0]    _zz_resultNext_5;
  reg        [31:0]   state_8;
  reg        [31:0]   state_7;
  reg        [31:0]   state_6;
  reg        [31:0]   state_5;
  reg        [31:0]   state_4;
  reg        [31:0]   state_3;
  reg        [31:0]   state_2;
  reg        [31:0]   state_1;
  reg        [31:0]   state;
  wire       [31:0]   stateXor;
  wire       [31:0]   accXor;

  assign _zz_state_1 = (state <<< 1);
  assign _zz_state_2 = (state_1 <<< 1);
  assign _zz_state_3 = (state_2 <<< 1);
  assign _zz_state_4 = (state_3 <<< 1);
  assign _zz_state_5 = (state_4 <<< 1);
  assign _zz_state_6 = (state_5 <<< 1);
  assign _zz_state_7 = (state_6 <<< 1);
  assign _zz_state_8 = (state_7 <<< 1);
  assign _zz_result = stateXor[9];
  assign _zz_result_1 = stateXor[10];
  assign _zz_result_2 = {stateXor[11],{stateXor[12],{stateXor[13],{stateXor[14],{stateXor[15],{stateXor[16],{stateXor[17],{stateXor[18],{stateXor[19],{_zz_result_3,{_zz_result_4,_zz_result_5}}}}}}}}}}};
  assign _zz_result_3 = stateXor[20];
  assign _zz_result_4 = stateXor[21];
  assign _zz_result_5 = {stateXor[22],{stateXor[23],{stateXor[24],{stateXor[25],{stateXor[26],{stateXor[27],{stateXor[28],{stateXor[29],{stateXor[30],stateXor[31]}}}}}}}}};
  assign _zz_resultNext = accXor[9];
  assign _zz_resultNext_1 = accXor[10];
  assign _zz_resultNext_2 = {accXor[11],{accXor[12],{accXor[13],{accXor[14],{accXor[15],{accXor[16],{accXor[17],{accXor[18],{accXor[19],{_zz_resultNext_3,{_zz_resultNext_4,_zz_resultNext_5}}}}}}}}}}};
  assign _zz_resultNext_3 = accXor[20];
  assign _zz_resultNext_4 = accXor[21];
  assign _zz_resultNext_5 = {accXor[22],{accXor[23],{accXor[24],{accXor[25],{accXor[26],{accXor[27],{accXor[28],{accXor[29],{accXor[30],accXor[31]}}}}}}}}};
  always @(*) begin
    state_8 = state_7;
    state_8 = (_zz_state_8 ^ ((input_payload[7] ^ state_7[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_7 = state_6;
    state_7 = (_zz_state_7 ^ ((input_payload[6] ^ state_6[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_6 = state_5;
    state_6 = (_zz_state_6 ^ ((input_payload[5] ^ state_5[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_5 = state_4;
    state_5 = (_zz_state_5 ^ ((input_payload[4] ^ state_4[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_4 = state_3;
    state_4 = (_zz_state_4 ^ ((input_payload[3] ^ state_3[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_3 = state_2;
    state_3 = (_zz_state_3 ^ ((input_payload[2] ^ state_2[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_2 = state_1;
    state_2 = (_zz_state_2 ^ ((input_payload[1] ^ state_1[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_1 = state;
    state_1 = (_zz_state_1 ^ ((input_payload[0] ^ state[31]) ? 32'h04c11db7 : 32'h0));
  end

  assign stateXor = (state ^ 32'hffffffff);
  assign accXor = (state_8 ^ 32'hffffffff);
  assign result = {stateXor[0],{stateXor[1],{stateXor[2],{stateXor[3],{stateXor[4],{stateXor[5],{stateXor[6],{stateXor[7],{stateXor[8],{_zz_result,{_zz_result_1,_zz_result_2}}}}}}}}}}};
  assign resultNext = {accXor[0],{accXor[1],{accXor[2],{accXor[3],{accXor[4],{accXor[5],{accXor[6],{accXor[7],{accXor[8],{_zz_resultNext,{_zz_resultNext_1,_zz_resultNext_2}}}}}}}}}}};
  always @(posedge phy_clk) begin
    if(!txReset) begin
      state <= 32'hffffffff;
    end else begin
      if(flush) begin
        state <= 32'hffffffff;
      end else begin
        if(input_valid) begin
          state <= state_8;
        end
      end
    end
  end


endmodule

module MacTxManagedStreamFifoCc (
  input               io_push_stream_valid,
  output              io_push_stream_ready,
  input      [31:0]   io_push_stream_payload,
  input               io_push_commit,
  output     [10:0]   io_push_availability,
  output              io_pop_stream_valid,
  input               io_pop_stream_ready,
  output     [31:0]   io_pop_stream_payload,
  input               io_pop_redo,
  input               io_pop_commit,
  input               clk,
  input               resetn,
  input               io_ctrl_tx_flush,
  input               phy_clk,
  input               txReset
);

  reg        [31:0]   _zz_ram_port1;
  wire                popToPush_io_input_ready;
  wire                popToPush_io_output_valid;
  wire       [10:0]   popToPush_io_output_payload;
  wire                pushToPop_io_input_ready;
  wire                pushToPop_io_output_valid;
  wire       [10:0]   pushToPop_io_output_payload;
  wire       [9:0]    _zz_ram_port;
  wire       [10:0]   _zz_io_push_availability;
  reg                 _zz_1;
  reg        [10:0]   push_currentPtr;
  reg        [10:0]   push_oldPtr;
  reg        [10:0]   push_popPtr;
  wire                io_push_stream_fire;
  reg        [10:0]   pop_currentPtr;
  reg        [10:0]   pop_oldPtr;
  reg        [10:0]   pop_pushPtr;
  wire                pop_cmd_valid;
  wire                pop_cmd_ready;
  wire       [9:0]    pop_cmd_payload;
  wire                io_pop_stream_fire;
  reg        [10:0]   pop_commitPtr;
  wire                _zz_io_pop_stream_valid;
  reg                 _zz_pop_cmd_ready;
  reg                 _zz_io_pop_stream_valid_1;
  reg                 _zz_io_pop_stream_valid_2;
  wire                pop_cmd_fire;
  reg [31:0] ram [0:1023];

  assign _zz_ram_port = push_currentPtr[9:0];
  assign _zz_io_push_availability = (push_currentPtr - push_popPtr);
  always @(posedge clk) begin
    if(_zz_1) begin
      ram[_zz_ram_port] <= io_push_stream_payload;
    end
  end

  always @(posedge phy_clk) begin
    if(pop_cmd_ready) begin
      _zz_ram_port1 <= ram[pop_cmd_payload];
    end
  end

  StreamCCByToggle popToPush (
    .io_input_valid    (1'b1                             ), //i
    .io_input_ready    (popToPush_io_input_ready         ), //o
    .io_input_payload  (pop_oldPtr[10:0]                 ), //i
    .io_output_valid   (popToPush_io_output_valid        ), //o
    .io_output_ready   (1'b1                             ), //i
    .io_output_payload (popToPush_io_output_payload[10:0]), //o
    .phy_clk           (phy_clk                          ), //i
    .txReset           (txReset                          ), //i
    .clk               (clk                              )  //i
  );
  StreamCCByToggle_1 pushToPop (
    .io_input_valid    (1'b1                             ), //i
    .io_input_ready    (pushToPop_io_input_ready         ), //o
    .io_input_payload  (push_oldPtr[10:0]                ), //i
    .io_output_valid   (pushToPop_io_output_valid        ), //o
    .io_output_ready   (1'b1                             ), //i
    .io_output_payload (pushToPop_io_output_payload[10:0]), //o
    .clk               (clk                              ), //i
    .resetn            (resetn                           ), //i
    .io_ctrl_tx_flush  (io_ctrl_tx_flush                 ), //i
    .phy_clk           (phy_clk                          )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(io_push_stream_fire) begin
      _zz_1 = 1'b1;
    end
  end

  assign io_push_stream_ready = (! ((push_currentPtr[10] != push_popPtr[10]) && (push_currentPtr[9 : 0] == push_popPtr[9 : 0])));
  assign io_push_stream_fire = (io_push_stream_valid && io_push_stream_ready);
  assign io_push_availability = (11'h400 - _zz_io_push_availability);
  assign pop_cmd_valid = ((! (pop_currentPtr == pop_pushPtr)) && (! io_pop_redo));
  assign pop_cmd_payload = pop_currentPtr[9:0];
  assign io_pop_stream_fire = (io_pop_stream_valid && io_pop_stream_ready);
  assign pop_cmd_ready = ((! _zz_io_pop_stream_valid) || _zz_pop_cmd_ready);
  assign _zz_io_pop_stream_valid = _zz_io_pop_stream_valid_1;
  always @(*) begin
    _zz_io_pop_stream_valid_2 = _zz_io_pop_stream_valid;
    if(io_pop_redo) begin
      _zz_io_pop_stream_valid_2 = 1'b0;
    end
  end

  always @(*) begin
    _zz_pop_cmd_ready = io_pop_stream_ready;
    if(io_pop_redo) begin
      _zz_pop_cmd_ready = 1'b1;
    end
  end

  assign io_pop_stream_valid = _zz_io_pop_stream_valid_2;
  assign io_pop_stream_payload = _zz_ram_port1;
  assign pop_cmd_fire = (pop_cmd_valid && pop_cmd_ready);
  always @(posedge clk) begin
    if(!resetn || io_ctrl_tx_flush) begin
      push_currentPtr <= 11'h0;
      push_oldPtr <= 11'h0;
      push_popPtr <= 11'h0;
    end else begin
      if(popToPush_io_output_valid) begin
        push_popPtr <= popToPush_io_output_payload;
      end
      if(io_push_stream_fire) begin
        push_currentPtr <= (push_currentPtr + 11'h001);
      end
      if(io_push_commit) begin
        push_oldPtr <= push_currentPtr;
      end
    end
  end

  always @(posedge phy_clk) begin
    if(!txReset) begin
      pop_currentPtr <= 11'h0;
      pop_oldPtr <= 11'h0;
      pop_pushPtr <= 11'h0;
      _zz_io_pop_stream_valid_1 <= 1'b0;
    end else begin
      if(pushToPop_io_output_valid) begin
        pop_pushPtr <= pushToPop_io_output_payload;
      end
      if(_zz_pop_cmd_ready) begin
        _zz_io_pop_stream_valid_1 <= 1'b0;
      end
      if(pop_cmd_ready) begin
        _zz_io_pop_stream_valid_1 <= pop_cmd_valid;
      end
      if(pop_cmd_fire) begin
        pop_currentPtr <= (pop_currentPtr + 11'h001);
      end
      if(io_pop_redo) begin
        pop_currentPtr <= pop_oldPtr;
      end
      if(io_pop_commit) begin
        pop_oldPtr <= pop_commitPtr;
      end
    end
  end

  always @(posedge phy_clk) begin
    if(io_pop_stream_fire) begin
      pop_commitPtr <= pop_currentPtr;
    end
  end


endmodule

//PulseCCByToggle replaced by PulseCCByToggle

module PulseCCByToggle (
  input               io_pulseIn,
  output              io_pulseOut,
  input               phy_clk,
  input               rxReset,
  input               clk,
  input               mac_rxReset_syncronized_1
);

  wire                inArea_target_buffercc_io_dataOut;
  reg                 inArea_target;
  wire                outArea_target;
  reg                 outArea_target_regNext;

  BufferCC_11 inArea_target_buffercc (
    .io_dataIn               (inArea_target                    ), //i
    .io_dataOut              (inArea_target_buffercc_io_dataOut), //o
    .clk                     (clk                              ), //i
    .mac_rxReset_syncronized (mac_rxReset_syncronized_1        )  //i
  );
  assign outArea_target = inArea_target_buffercc_io_dataOut;
  assign io_pulseOut = (outArea_target ^ outArea_target_regNext);
  always @(posedge phy_clk) begin
    if(!rxReset) begin
      inArea_target <= 1'b0;
    end else begin
      if(io_pulseIn) begin
        inArea_target <= (! inArea_target);
      end
    end
  end

  always @(posedge clk) begin
    if(!mac_rxReset_syncronized_1) begin
      outArea_target_regNext <= 1'b0;
    end else begin
      outArea_target_regNext <= outArea_target;
    end
  end


endmodule

module StreamCCByToggle_3 (
  input               io_input_valid,
  output              io_input_ready,
  input      [10:0]   io_input_payload,
  output              io_output_valid,
  input               io_output_ready,
  output     [10:0]   io_output_payload,
  input               phy_clk,
  input               rxReset,
  input               clk,
  output              mac_rxReset_syncronized_1
);

  wire                outHitSignal_buffercc_io_dataOut;
  wire                bufferCC_18_io_dataOut;
  wire                pushArea_target_buffercc_io_dataOut;
  wire                outHitSignal;
  wire                pushArea_hit;
  wire                pushArea_accept;
  reg                 pushArea_target;
  reg        [10:0]   pushArea_data;
  wire                io_input_fire;
  wire                mac_rxReset_syncronized;
  wire                popArea_stream_valid;
  wire                popArea_stream_ready;
  wire       [10:0]   popArea_stream_payload;
  wire                popArea_target;
  wire                popArea_stream_fire;
  reg                 popArea_hit;

  BufferCC_9 outHitSignal_buffercc (
    .io_dataIn  (outHitSignal                    ), //i
    .io_dataOut (outHitSignal_buffercc_io_dataOut), //o
    .phy_clk    (phy_clk                         ), //i
    .rxReset    (rxReset                         )  //i
  );
  BufferCC_10 bufferCC_18 (
    .io_dataIn  (1'b1                  ), //i
    .io_dataOut (bufferCC_18_io_dataOut), //o
    .clk        (clk                   ), //i
    .rxReset    (rxReset               )  //i
  );
  BufferCC_11 pushArea_target_buffercc (
    .io_dataIn               (pushArea_target                    ), //i
    .io_dataOut              (pushArea_target_buffercc_io_dataOut), //o
    .clk                     (clk                                ), //i
    .mac_rxReset_syncronized (mac_rxReset_syncronized            )  //i
  );
  assign pushArea_hit = outHitSignal_buffercc_io_dataOut;
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign pushArea_accept = io_input_fire;
  assign io_input_ready = (pushArea_hit == pushArea_target);
  assign mac_rxReset_syncronized = bufferCC_18_io_dataOut;
  assign popArea_target = pushArea_target_buffercc_io_dataOut;
  assign popArea_stream_fire = (popArea_stream_valid && popArea_stream_ready);
  assign outHitSignal = popArea_hit;
  assign popArea_stream_valid = (popArea_target != popArea_hit);
  assign popArea_stream_payload = pushArea_data;
  assign io_output_valid = popArea_stream_valid;
  assign popArea_stream_ready = io_output_ready;
  assign io_output_payload = popArea_stream_payload;
  assign mac_rxReset_syncronized_1 = mac_rxReset_syncronized;
  always @(posedge phy_clk) begin
    if(!rxReset) begin
      pushArea_target <= 1'b0;
      pushArea_data <= 11'h0;
    end else begin
      if(pushArea_accept) begin
        pushArea_target <= (! pushArea_target);
      end
      if(pushArea_accept) begin
        pushArea_data <= io_input_payload;
      end
    end
  end

  always @(posedge clk) begin
    if(!mac_rxReset_syncronized) begin
      popArea_hit <= 1'b0;
    end else begin
      if(popArea_stream_fire) begin
        popArea_hit <= popArea_target;
      end
    end
  end


endmodule

module StreamCCByToggle_2 (
  input               io_input_valid,
  output              io_input_ready,
  input      [10:0]   io_input_payload,
  output              io_output_valid,
  input               io_output_ready,
  output     [10:0]   io_output_payload,
  input               clk,
  input               resetn,
  input               io_ctrl_rx_flush,
  input               phy_clk
);

  wire                outHitSignal_buffercc_io_dataOut;
  wire                bufferCC_18_io_dataOut;
  wire                pushArea_target_buffercc_io_dataOut;
  wire                outHitSignal;
  wire                pushArea_hit;
  wire                pushArea_accept;
  reg                 pushArea_target;
  reg        [10:0]   pushArea_data;
  wire                io_input_fire;
  wire                resetn_syncronized;
  wire                popArea_stream_valid;
  wire                popArea_stream_ready;
  wire       [10:0]   popArea_stream_payload;
  wire                popArea_target;
  wire                popArea_stream_fire;
  reg                 popArea_hit;

  BufferCC_6 outHitSignal_buffercc (
    .io_dataIn        (outHitSignal                    ), //i
    .io_dataOut       (outHitSignal_buffercc_io_dataOut), //o
    .clk              (clk                             ), //i
    .resetn           (resetn                          ), //i
    .io_ctrl_rx_flush (io_ctrl_rx_flush                )  //i
  );
  BufferCC_4 bufferCC_18 (
    .io_dataIn  (1'b1                  ), //i
    .io_dataOut (bufferCC_18_io_dataOut), //o
    .phy_clk    (phy_clk               ), //i
    .resetn     (resetn                )  //i
  );
  BufferCC_5 pushArea_target_buffercc (
    .io_dataIn          (pushArea_target                    ), //i
    .io_dataOut         (pushArea_target_buffercc_io_dataOut), //o
    .phy_clk            (phy_clk                            ), //i
    .resetn_syncronized (resetn_syncronized                 )  //i
  );
  assign pushArea_hit = outHitSignal_buffercc_io_dataOut;
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign pushArea_accept = io_input_fire;
  assign io_input_ready = (pushArea_hit == pushArea_target);
  assign resetn_syncronized = bufferCC_18_io_dataOut;
  assign popArea_target = pushArea_target_buffercc_io_dataOut;
  assign popArea_stream_fire = (popArea_stream_valid && popArea_stream_ready);
  assign outHitSignal = popArea_hit;
  assign popArea_stream_valid = (popArea_target != popArea_hit);
  assign popArea_stream_payload = pushArea_data;
  assign io_output_valid = popArea_stream_valid;
  assign popArea_stream_ready = io_output_ready;
  assign io_output_payload = popArea_stream_payload;
  always @(posedge clk) begin
    if(!resetn || io_ctrl_rx_flush) begin
      pushArea_target <= 1'b0;
      pushArea_data <= 11'h0;
    end else begin
      if(pushArea_accept) begin
        pushArea_target <= (! pushArea_target);
      end
      if(pushArea_accept) begin
        pushArea_data <= io_input_payload;
      end
    end
  end

  always @(posedge phy_clk) begin
    if(!resetn_syncronized) begin
      popArea_hit <= 1'b0;
    end else begin
      if(popArea_stream_fire) begin
        popArea_hit <= popArea_target;
      end
    end
  end


endmodule

module Crc (
  input               flush,
  input               input_valid,
  input      [7:0]    input_payload,
  output     [31:0]   result,
  output     [31:0]   resultNext,
  input               phy_clk,
  input               rxReset
);

  wire       [31:0]   _zz_state_1;
  wire       [31:0]   _zz_state_2;
  wire       [31:0]   _zz_state_3;
  wire       [31:0]   _zz_state_4;
  wire       [31:0]   _zz_state_5;
  wire       [31:0]   _zz_state_6;
  wire       [31:0]   _zz_state_7;
  wire       [31:0]   _zz_state_8;
  wire                _zz_result;
  wire       [0:0]    _zz_result_1;
  wire       [20:0]   _zz_result_2;
  wire                _zz_result_3;
  wire       [0:0]    _zz_result_4;
  wire       [9:0]    _zz_result_5;
  wire                _zz_resultNext;
  wire       [0:0]    _zz_resultNext_1;
  wire       [20:0]   _zz_resultNext_2;
  wire                _zz_resultNext_3;
  wire       [0:0]    _zz_resultNext_4;
  wire       [9:0]    _zz_resultNext_5;
  reg        [31:0]   state_8;
  reg        [31:0]   state_7;
  reg        [31:0]   state_6;
  reg        [31:0]   state_5;
  reg        [31:0]   state_4;
  reg        [31:0]   state_3;
  reg        [31:0]   state_2;
  reg        [31:0]   state_1;
  reg        [31:0]   state;
  wire       [31:0]   stateXor;
  wire       [31:0]   accXor;

  assign _zz_state_1 = (state <<< 1);
  assign _zz_state_2 = (state_1 <<< 1);
  assign _zz_state_3 = (state_2 <<< 1);
  assign _zz_state_4 = (state_3 <<< 1);
  assign _zz_state_5 = (state_4 <<< 1);
  assign _zz_state_6 = (state_5 <<< 1);
  assign _zz_state_7 = (state_6 <<< 1);
  assign _zz_state_8 = (state_7 <<< 1);
  assign _zz_result = stateXor[9];
  assign _zz_result_1 = stateXor[10];
  assign _zz_result_2 = {stateXor[11],{stateXor[12],{stateXor[13],{stateXor[14],{stateXor[15],{stateXor[16],{stateXor[17],{stateXor[18],{stateXor[19],{_zz_result_3,{_zz_result_4,_zz_result_5}}}}}}}}}}};
  assign _zz_result_3 = stateXor[20];
  assign _zz_result_4 = stateXor[21];
  assign _zz_result_5 = {stateXor[22],{stateXor[23],{stateXor[24],{stateXor[25],{stateXor[26],{stateXor[27],{stateXor[28],{stateXor[29],{stateXor[30],stateXor[31]}}}}}}}}};
  assign _zz_resultNext = accXor[9];
  assign _zz_resultNext_1 = accXor[10];
  assign _zz_resultNext_2 = {accXor[11],{accXor[12],{accXor[13],{accXor[14],{accXor[15],{accXor[16],{accXor[17],{accXor[18],{accXor[19],{_zz_resultNext_3,{_zz_resultNext_4,_zz_resultNext_5}}}}}}}}}}};
  assign _zz_resultNext_3 = accXor[20];
  assign _zz_resultNext_4 = accXor[21];
  assign _zz_resultNext_5 = {accXor[22],{accXor[23],{accXor[24],{accXor[25],{accXor[26],{accXor[27],{accXor[28],{accXor[29],{accXor[30],accXor[31]}}}}}}}}};
  always @(*) begin
    state_8 = state_7;
    state_8 = (_zz_state_8 ^ ((input_payload[7] ^ state_7[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_7 = state_6;
    state_7 = (_zz_state_7 ^ ((input_payload[6] ^ state_6[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_6 = state_5;
    state_6 = (_zz_state_6 ^ ((input_payload[5] ^ state_5[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_5 = state_4;
    state_5 = (_zz_state_5 ^ ((input_payload[4] ^ state_4[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_4 = state_3;
    state_4 = (_zz_state_4 ^ ((input_payload[3] ^ state_3[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_3 = state_2;
    state_3 = (_zz_state_3 ^ ((input_payload[2] ^ state_2[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_2 = state_1;
    state_2 = (_zz_state_2 ^ ((input_payload[1] ^ state_1[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_1 = state;
    state_1 = (_zz_state_1 ^ ((input_payload[0] ^ state[31]) ? 32'h04c11db7 : 32'h0));
  end

  assign stateXor = (state ^ 32'hffffffff);
  assign accXor = (state_8 ^ 32'hffffffff);
  assign result = {stateXor[0],{stateXor[1],{stateXor[2],{stateXor[3],{stateXor[4],{stateXor[5],{stateXor[6],{stateXor[7],{stateXor[8],{_zz_result,{_zz_result_1,_zz_result_2}}}}}}}}}}};
  assign resultNext = {accXor[0],{accXor[1],{accXor[2],{accXor[3],{accXor[4],{accXor[5],{accXor[6],{accXor[7],{accXor[8],{_zz_resultNext,{_zz_resultNext_1,_zz_resultNext_2}}}}}}}}}}};
  always @(posedge phy_clk) begin
    if(!rxReset) begin
      state <= 32'hffffffff;
    end else begin
      if(flush) begin
        state <= 32'hffffffff;
      end else begin
        if(input_valid) begin
          state <= state_8;
        end
      end
    end
  end


endmodule

module StreamCCByToggle_1 (
  input               io_input_valid,
  output              io_input_ready,
  input      [10:0]   io_input_payload,
  output              io_output_valid,
  input               io_output_ready,
  output     [10:0]   io_output_payload,
  input               clk,
  input               resetn,
  input               io_ctrl_tx_flush,
  input               phy_clk
);

  wire                outHitSignal_buffercc_io_dataOut;
  wire                bufferCC_18_io_dataOut;
  wire                pushArea_target_buffercc_io_dataOut;
  wire                outHitSignal;
  wire                pushArea_hit;
  wire                pushArea_accept;
  reg                 pushArea_target;
  reg        [10:0]   pushArea_data;
  wire                io_input_fire;
  wire                resetn_syncronized;
  wire                popArea_stream_valid;
  wire                popArea_stream_ready;
  wire       [10:0]   popArea_stream_payload;
  wire                popArea_target;
  wire                popArea_stream_fire;
  reg                 popArea_hit;

  BufferCC_3 outHitSignal_buffercc (
    .io_dataIn        (outHitSignal                    ), //i
    .io_dataOut       (outHitSignal_buffercc_io_dataOut), //o
    .clk              (clk                             ), //i
    .resetn           (resetn                          ), //i
    .io_ctrl_tx_flush (io_ctrl_tx_flush                )  //i
  );
  BufferCC_4 bufferCC_18 (
    .io_dataIn  (1'b1                  ), //i
    .io_dataOut (bufferCC_18_io_dataOut), //o
    .phy_clk    (phy_clk               ), //i
    .resetn     (resetn                )  //i
  );
  BufferCC_5 pushArea_target_buffercc (
    .io_dataIn          (pushArea_target                    ), //i
    .io_dataOut         (pushArea_target_buffercc_io_dataOut), //o
    .phy_clk            (phy_clk                            ), //i
    .resetn_syncronized (resetn_syncronized                 )  //i
  );
  assign pushArea_hit = outHitSignal_buffercc_io_dataOut;
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign pushArea_accept = io_input_fire;
  assign io_input_ready = (pushArea_hit == pushArea_target);
  assign resetn_syncronized = bufferCC_18_io_dataOut;
  assign popArea_target = pushArea_target_buffercc_io_dataOut;
  assign popArea_stream_fire = (popArea_stream_valid && popArea_stream_ready);
  assign outHitSignal = popArea_hit;
  assign popArea_stream_valid = (popArea_target != popArea_hit);
  assign popArea_stream_payload = pushArea_data;
  assign io_output_valid = popArea_stream_valid;
  assign popArea_stream_ready = io_output_ready;
  assign io_output_payload = popArea_stream_payload;
  always @(posedge clk) begin
    if(!resetn || io_ctrl_tx_flush) begin
      pushArea_target <= 1'b0;
      pushArea_data <= 11'h0;
    end else begin
      if(pushArea_accept) begin
        pushArea_target <= (! pushArea_target);
      end
      if(pushArea_accept) begin
        pushArea_data <= io_input_payload;
      end
    end
  end

  always @(posedge phy_clk) begin
    if(!resetn_syncronized) begin
      popArea_hit <= 1'b0;
    end else begin
      if(popArea_stream_fire) begin
        popArea_hit <= popArea_target;
      end
    end
  end


endmodule

module StreamCCByToggle (
  input               io_input_valid,
  output              io_input_ready,
  input      [10:0]   io_input_payload,
  output              io_output_valid,
  input               io_output_ready,
  output     [10:0]   io_output_payload,
  input               phy_clk,
  input               txReset,
  input               clk
);

  wire                outHitSignal_buffercc_io_dataOut;
  wire                bufferCC_18_io_dataOut;
  wire                pushArea_target_buffercc_io_dataOut;
  wire                outHitSignal;
  wire                pushArea_hit;
  wire                pushArea_accept;
  reg                 pushArea_target;
  reg        [10:0]   pushArea_data;
  wire                io_input_fire;
  wire                mac_txReset_syncronized;
  wire                popArea_stream_valid;
  wire                popArea_stream_ready;
  wire       [10:0]   popArea_stream_payload;
  wire                popArea_target;
  wire                popArea_stream_fire;
  reg                 popArea_hit;

  BufferCC outHitSignal_buffercc (
    .io_dataIn  (outHitSignal                    ), //i
    .io_dataOut (outHitSignal_buffercc_io_dataOut), //o
    .phy_clk    (phy_clk                         ), //i
    .txReset    (txReset                         )  //i
  );
  BufferCC_1 bufferCC_18 (
    .io_dataIn  (1'b1                  ), //i
    .io_dataOut (bufferCC_18_io_dataOut), //o
    .clk        (clk                   ), //i
    .txReset    (txReset               )  //i
  );
  BufferCC_2 pushArea_target_buffercc (
    .io_dataIn               (pushArea_target                    ), //i
    .io_dataOut              (pushArea_target_buffercc_io_dataOut), //o
    .clk                     (clk                                ), //i
    .mac_txReset_syncronized (mac_txReset_syncronized            )  //i
  );
  assign pushArea_hit = outHitSignal_buffercc_io_dataOut;
  assign io_input_fire = (io_input_valid && io_input_ready);
  assign pushArea_accept = io_input_fire;
  assign io_input_ready = (pushArea_hit == pushArea_target);
  assign mac_txReset_syncronized = bufferCC_18_io_dataOut;
  assign popArea_target = pushArea_target_buffercc_io_dataOut;
  assign popArea_stream_fire = (popArea_stream_valid && popArea_stream_ready);
  assign outHitSignal = popArea_hit;
  assign popArea_stream_valid = (popArea_target != popArea_hit);
  assign popArea_stream_payload = pushArea_data;
  assign io_output_valid = popArea_stream_valid;
  assign popArea_stream_ready = io_output_ready;
  assign io_output_payload = popArea_stream_payload;
  always @(posedge phy_clk) begin
    if(!txReset) begin
      pushArea_target <= 1'b0;
      pushArea_data <= 11'h0;
    end else begin
      if(pushArea_accept) begin
        pushArea_target <= (! pushArea_target);
      end
      if(pushArea_accept) begin
        pushArea_data <= io_input_payload;
      end
    end
  end

  always @(posedge clk) begin
    if(!mac_txReset_syncronized) begin
      popArea_hit <= 1'b0;
    end else begin
      if(popArea_stream_fire) begin
        popArea_hit <= popArea_target;
      end
    end
  end


endmodule

//BufferCC_11 replaced by BufferCC_11

//BufferCC_11 replaced by BufferCC_11

module BufferCC_11 (
  input               io_dataIn,
  output              io_dataOut,
  input               clk,
  input               mac_rxReset_syncronized
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    if(!mac_rxReset_syncronized) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_10 (
  input               io_dataIn,
  output              io_dataOut,
  input               clk,
  input               rxReset
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk or negedge rxReset) begin
    if(!rxReset) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_9 (
  input               io_dataIn,
  output              io_dataOut,
  input               phy_clk,
  input               rxReset
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge phy_clk) begin
    if(!rxReset) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

//BufferCC_5 replaced by BufferCC_5

//BufferCC_4 replaced by BufferCC_4

module BufferCC_6 (
  input               io_dataIn,
  output              io_dataOut,
  input               clk,
  input               resetn,
  input               io_ctrl_rx_flush
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    if(!resetn || io_ctrl_rx_flush) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_5 (
  input               io_dataIn,
  output              io_dataOut,
  input               phy_clk,
  input               resetn_syncronized
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge phy_clk) begin
    if(!resetn_syncronized) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_4 (
  input               io_dataIn,
  output              io_dataOut,
  input               phy_clk,
  input               resetn
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge phy_clk or negedge resetn) begin
    if(!resetn) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_3 (
  input               io_dataIn,
  output              io_dataOut,
  input               clk,
  input               resetn,
  input               io_ctrl_tx_flush
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    if(!resetn || io_ctrl_tx_flush) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_2 (
  input               io_dataIn,
  output              io_dataOut,
  input               clk,
  input               mac_txReset_syncronized
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    if(!mac_txReset_syncronized) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_1 (
  input               io_dataIn,
  output              io_dataOut,
  input               clk,
  input               txReset
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk or negedge txReset) begin
    if(!txReset) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC (
  input               io_dataIn,
  output              io_dataOut,
  input               phy_clk,
  input               txReset
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge phy_clk) begin
    if(!txReset) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule
