// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : TX
// Git hash  : b90f7fc9b0893d6f01a499c7804b365a21d113e6


`define PhyTxHeaderStatus_binary_sequential_type [1:0]
`define PhyTxHeaderStatus_binary_sequential_IDLE 2'b00
`define PhyTxHeaderStatus_binary_sequential_HEADER 2'b01
`define PhyTxHeaderStatus_binary_sequential_DATA 2'b10

`define PhyTxScramblerStatus_binary_sequential_type [1:0]
`define PhyTxScramblerStatus_binary_sequential_IDLE 2'b00
`define PhyTxScramblerStatus_binary_sequential_SCRAMBLING 2'b01
`define PhyTxScramblerStatus_binary_sequential_FINAL_1 2'b10


module TX (
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
  input               raw_data_tvalid,
  output              raw_data_tready,
  input      [31:0]   raw_data_tdata,
  input      [3:0]    raw_data_tstrb,
  input      [3:0]    raw_data_tkeep,
  input               raw_data_tlast,
  output              coded_data_valid,
  input               coded_data_ready,
  output              coded_data_payload_last,
  output     [15:0]   coded_data_payload_fragment,
  input               clk,
  input               reset
);
  wire       [6:0]    stream_package_gen_slices_cnt;
  wire                stream_package_gen_raw_data_tready;
  wire                stream_package_gen_pkg_data_valid;
  wire                stream_package_gen_pkg_data_payload_last;
  wire       [7:0]    stream_package_gen_pkg_data_payload_fragment;
  wire                phy_tx_padder_raw_data_ready;
  wire                phy_tx_padder_result_data_valid;
  wire                phy_tx_padder_result_data_payload_last;
  wire       [7:0]    phy_tx_padder_result_data_payload_fragment;
  wire                stream_package_gen_pkg_data_fifo_io_push_ready;
  wire                stream_package_gen_pkg_data_fifo_io_pop_valid;
  wire                stream_package_gen_pkg_data_fifo_io_pop_payload_last;
  wire       [7:0]    stream_package_gen_pkg_data_fifo_io_pop_payload_fragment;
  wire       [7:0]    stream_package_gen_pkg_data_fifo_io_occupancy;
  wire       [7:0]    stream_package_gen_pkg_data_fifo_io_availability;
  wire                phy_tx_crc_raw_data_ready;
  wire                phy_tx_crc_result_data_valid;
  wire                phy_tx_crc_result_data_payload_last;
  wire       [7:0]    phy_tx_crc_result_data_payload_fragment;
  wire                phy_tx_padder_result_data_fifo_io_push_ready;
  wire                phy_tx_padder_result_data_fifo_io_pop_valid;
  wire                phy_tx_padder_result_data_fifo_io_pop_payload_last;
  wire       [7:0]    phy_tx_padder_result_data_fifo_io_pop_payload_fragment;
  wire       [7:0]    phy_tx_padder_result_data_fifo_io_occupancy;
  wire       [7:0]    phy_tx_padder_result_data_fifo_io_availability;
  wire                phy_tx_encoder_raw_data_ready;
  wire                phy_tx_encoder_result_data_valid;
  wire                phy_tx_encoder_result_data_payload_last;
  wire       [15:0]   phy_tx_encoder_result_data_payload_fragment;
  wire                phy_tx_crc_result_data_fifo_io_push_ready;
  wire                phy_tx_crc_result_data_fifo_io_pop_valid;
  wire                phy_tx_crc_result_data_fifo_io_pop_payload_last;
  wire       [7:0]    phy_tx_crc_result_data_fifo_io_pop_payload_fragment;
  wire       [7:0]    phy_tx_crc_result_data_fifo_io_occupancy;
  wire       [7:0]    phy_tx_crc_result_data_fifo_io_availability;
  wire                phy_tx_puncher_raw_data_ready;
  wire                phy_tx_puncher_punched_data_valid;
  wire                phy_tx_puncher_punched_data_payload_last;
  wire       [15:0]   phy_tx_puncher_punched_data_payload_fragment;
  wire                phy_tx_encoder_result_data_fifo_io_push_ready;
  wire                phy_tx_encoder_result_data_fifo_io_pop_valid;
  wire                phy_tx_encoder_result_data_fifo_io_pop_payload_last;
  wire       [15:0]   phy_tx_encoder_result_data_fifo_io_pop_payload_fragment;
  wire       [7:0]    phy_tx_encoder_result_data_fifo_io_occupancy;
  wire       [7:0]    phy_tx_encoder_result_data_fifo_io_availability;
  wire                phy_header_extender_raw_data_ready;
  wire                phy_header_extender_result_data_valid;
  wire                phy_header_extender_result_data_payload_last;
  wire       [15:0]   phy_header_extender_result_data_payload_fragment;
  wire                streamFifo_7_io_push_ready;
  wire                streamFifo_7_io_pop_valid;
  wire                streamFifo_7_io_pop_payload_last;
  wire       [15:0]   streamFifo_7_io_pop_payload_fragment;
  wire       [7:0]    streamFifo_7_io_occupancy;
  wire       [7:0]    streamFifo_7_io_availability;
  wire                phy_tx_scrambler_raw_data_ready;
  wire                phy_tx_scrambler_result_data_valid;
  wire                phy_tx_scrambler_result_data_payload_last;
  wire       [15:0]   phy_tx_scrambler_result_data_payload_fragment;
  wire                phy_header_extender_result_data_fifo_io_push_ready;
  wire                phy_header_extender_result_data_fifo_io_pop_valid;
  wire                phy_header_extender_result_data_fifo_io_pop_payload_last;
  wire       [15:0]   phy_header_extender_result_data_fifo_io_pop_payload_fragment;
  wire       [7:0]    phy_header_extender_result_data_fifo_io_occupancy;
  wire       [7:0]    phy_header_extender_result_data_fifo_io_availability;
  wire       [6:0]    clkCrossing_2_dataOut;
  wire       [6:0]    clkCrossing_3_dataOut;
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
  wire       [6:0]    __slices_limit;
  wire       [6:0]    __slices_cnt;
  reg        [6:0]    __slices_limit_driver;

  StreamPkgGen stream_package_gen (
    .slices_limit                 (clkCrossing_2_dataOut                           ), //i
    .slices_cnt                   (stream_package_gen_slices_cnt                   ), //o
    .raw_data_tvalid              (raw_data_tvalid                                 ), //i
    .raw_data_tready              (stream_package_gen_raw_data_tready              ), //o
    .raw_data_tdata               (raw_data_tdata                                  ), //i
    .raw_data_tstrb               (raw_data_tstrb                                  ), //i
    .raw_data_tlast               (raw_data_tlast                                  ), //i
    .pkg_data_valid               (stream_package_gen_pkg_data_valid               ), //o
    .pkg_data_ready               (stream_package_gen_pkg_data_fifo_io_push_ready  ), //i
    .pkg_data_payload_last        (stream_package_gen_pkg_data_payload_last        ), //o
    .pkg_data_payload_fragment    (stream_package_gen_pkg_data_payload_fragment    ), //o
    .clk                          (clk                                             ), //i
    .reset                        (reset                                           )  //i
  );
  PhyTxPadder phy_tx_padder (
    .raw_data_valid                  (stream_package_gen_pkg_data_fifo_io_pop_valid             ), //i
    .raw_data_ready                  (phy_tx_padder_raw_data_ready                              ), //o
    .raw_data_payload_last           (stream_package_gen_pkg_data_fifo_io_pop_payload_last      ), //i
    .raw_data_payload_fragment       (stream_package_gen_pkg_data_fifo_io_pop_payload_fragment  ), //i
    .result_data_valid               (phy_tx_padder_result_data_valid                           ), //o
    .result_data_ready               (phy_tx_padder_result_data_fifo_io_push_ready              ), //i
    .result_data_payload_last        (phy_tx_padder_result_data_payload_last                    ), //o
    .result_data_payload_fragment    (phy_tx_padder_result_data_payload_fragment                ), //o
    .clk                             (clk                                                       ), //i
    .reset                           (reset                                                     )  //i
  );
  StreamFifo_1 stream_package_gen_pkg_data_fifo (
    .io_push_valid               (stream_package_gen_pkg_data_valid                         ), //i
    .io_push_ready               (stream_package_gen_pkg_data_fifo_io_push_ready            ), //o
    .io_push_payload_last        (stream_package_gen_pkg_data_payload_last                  ), //i
    .io_push_payload_fragment    (stream_package_gen_pkg_data_payload_fragment              ), //i
    .io_pop_valid                (stream_package_gen_pkg_data_fifo_io_pop_valid             ), //o
    .io_pop_ready                (phy_tx_padder_raw_data_ready                              ), //i
    .io_pop_payload_last         (stream_package_gen_pkg_data_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (stream_package_gen_pkg_data_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                                      ), //i
    .io_occupancy                (stream_package_gen_pkg_data_fifo_io_occupancy             ), //o
    .io_availability             (stream_package_gen_pkg_data_fifo_io_availability          ), //o
    .clk                         (clk                                                       ), //i
    .reset                       (reset                                                     )  //i
  );
  PhyTxCrc phy_tx_crc (
    .raw_data_valid                  (phy_tx_padder_result_data_fifo_io_pop_valid             ), //i
    .raw_data_ready                  (phy_tx_crc_raw_data_ready                               ), //o
    .raw_data_payload_last           (phy_tx_padder_result_data_fifo_io_pop_payload_last      ), //i
    .raw_data_payload_fragment       (phy_tx_padder_result_data_fifo_io_pop_payload_fragment  ), //i
    .result_data_valid               (phy_tx_crc_result_data_valid                            ), //o
    .result_data_ready               (phy_tx_crc_result_data_fifo_io_push_ready               ), //i
    .result_data_payload_last        (phy_tx_crc_result_data_payload_last                     ), //o
    .result_data_payload_fragment    (phy_tx_crc_result_data_payload_fragment                 ), //o
    .clk                             (clk                                                     ), //i
    .reset                           (reset                                                   )  //i
  );
  StreamFifo_1 phy_tx_padder_result_data_fifo (
    .io_push_valid               (phy_tx_padder_result_data_valid                         ), //i
    .io_push_ready               (phy_tx_padder_result_data_fifo_io_push_ready            ), //o
    .io_push_payload_last        (phy_tx_padder_result_data_payload_last                  ), //i
    .io_push_payload_fragment    (phy_tx_padder_result_data_payload_fragment              ), //i
    .io_pop_valid                (phy_tx_padder_result_data_fifo_io_pop_valid             ), //o
    .io_pop_ready                (phy_tx_crc_raw_data_ready                               ), //i
    .io_pop_payload_last         (phy_tx_padder_result_data_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (phy_tx_padder_result_data_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                                    ), //i
    .io_occupancy                (phy_tx_padder_result_data_fifo_io_occupancy             ), //o
    .io_availability             (phy_tx_padder_result_data_fifo_io_availability          ), //o
    .clk                         (clk                                                     ), //i
    .reset                       (reset                                                   )  //i
  );
  PhyTxEncoder phy_tx_encoder (
    .raw_data_valid                  (phy_tx_crc_result_data_fifo_io_pop_valid             ), //i
    .raw_data_ready                  (phy_tx_encoder_raw_data_ready                        ), //o
    .raw_data_payload_last           (phy_tx_crc_result_data_fifo_io_pop_payload_last      ), //i
    .raw_data_payload_fragment       (phy_tx_crc_result_data_fifo_io_pop_payload_fragment  ), //i
    .result_data_valid               (phy_tx_encoder_result_data_valid                     ), //o
    .result_data_ready               (phy_tx_encoder_result_data_fifo_io_push_ready        ), //i
    .result_data_payload_last        (phy_tx_encoder_result_data_payload_last              ), //o
    .result_data_payload_fragment    (phy_tx_encoder_result_data_payload_fragment          ), //o
    .clk                             (clk                                                  ), //i
    .reset                           (reset                                                )  //i
  );
  StreamFifo_1 phy_tx_crc_result_data_fifo (
    .io_push_valid               (phy_tx_crc_result_data_valid                         ), //i
    .io_push_ready               (phy_tx_crc_result_data_fifo_io_push_ready            ), //o
    .io_push_payload_last        (phy_tx_crc_result_data_payload_last                  ), //i
    .io_push_payload_fragment    (phy_tx_crc_result_data_payload_fragment              ), //i
    .io_pop_valid                (phy_tx_crc_result_data_fifo_io_pop_valid             ), //o
    .io_pop_ready                (phy_tx_encoder_raw_data_ready                        ), //i
    .io_pop_payload_last         (phy_tx_crc_result_data_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (phy_tx_crc_result_data_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                                 ), //i
    .io_occupancy                (phy_tx_crc_result_data_fifo_io_occupancy             ), //o
    .io_availability             (phy_tx_crc_result_data_fifo_io_availability          ), //o
    .clk                         (clk                                                  ), //i
    .reset                       (reset                                                )  //i
  );
  Puncturing phy_tx_puncher (
    .raw_data_valid                   (phy_tx_encoder_result_data_fifo_io_pop_valid             ), //i
    .raw_data_ready                   (phy_tx_puncher_raw_data_ready                            ), //o
    .raw_data_payload_last            (phy_tx_encoder_result_data_fifo_io_pop_payload_last      ), //i
    .raw_data_payload_fragment        (phy_tx_encoder_result_data_fifo_io_pop_payload_fragment  ), //i
    .punched_data_valid               (phy_tx_puncher_punched_data_valid                        ), //o
    .punched_data_payload_last        (phy_tx_puncher_punched_data_payload_last                 ), //o
    .punched_data_payload_fragment    (phy_tx_puncher_punched_data_payload_fragment             ), //o
    .clk                              (clk                                                      ), //i
    .reset                            (reset                                                    )  //i
  );
  StreamFifo_4 phy_tx_encoder_result_data_fifo (
    .io_push_valid               (phy_tx_encoder_result_data_valid                         ), //i
    .io_push_ready               (phy_tx_encoder_result_data_fifo_io_push_ready            ), //o
    .io_push_payload_last        (phy_tx_encoder_result_data_payload_last                  ), //i
    .io_push_payload_fragment    (phy_tx_encoder_result_data_payload_fragment              ), //i
    .io_pop_valid                (phy_tx_encoder_result_data_fifo_io_pop_valid             ), //o
    .io_pop_ready                (phy_tx_puncher_raw_data_ready                            ), //i
    .io_pop_payload_last         (phy_tx_encoder_result_data_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (phy_tx_encoder_result_data_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                                     ), //i
    .io_occupancy                (phy_tx_encoder_result_data_fifo_io_occupancy             ), //o
    .io_availability             (phy_tx_encoder_result_data_fifo_io_availability          ), //o
    .clk                         (clk                                                      ), //i
    .reset                       (reset                                                    )  //i
  );
  PhyHeaderExtender phy_header_extender (
    .mod_method                      (8'h55                                               ), //i
    .raw_data_valid                  (streamFifo_7_io_pop_valid                           ), //i
    .raw_data_ready                  (phy_header_extender_raw_data_ready                  ), //o
    .raw_data_payload_last           (streamFifo_7_io_pop_payload_last                    ), //i
    .raw_data_payload_fragment       (streamFifo_7_io_pop_payload_fragment                ), //i
    .result_data_valid               (phy_header_extender_result_data_valid               ), //o
    .result_data_ready               (phy_header_extender_result_data_fifo_io_push_ready  ), //i
    .result_data_payload_last        (phy_header_extender_result_data_payload_last        ), //o
    .result_data_payload_fragment    (phy_header_extender_result_data_payload_fragment    ), //o
    .clk                             (clk                                                 ), //i
    .reset                           (reset                                               )  //i
  );
  StreamFifo_4 streamFifo_7 (
    .io_push_valid               (phy_tx_puncher_punched_data_valid             ), //i
    .io_push_ready               (streamFifo_7_io_push_ready                    ), //o
    .io_push_payload_last        (phy_tx_puncher_punched_data_payload_last      ), //i
    .io_push_payload_fragment    (phy_tx_puncher_punched_data_payload_fragment  ), //i
    .io_pop_valid                (streamFifo_7_io_pop_valid                     ), //o
    .io_pop_ready                (phy_header_extender_raw_data_ready            ), //i
    .io_pop_payload_last         (streamFifo_7_io_pop_payload_last              ), //o
    .io_pop_payload_fragment     (streamFifo_7_io_pop_payload_fragment          ), //o
    .io_flush                    (1'b0                                          ), //i
    .io_occupancy                (streamFifo_7_io_occupancy                     ), //o
    .io_availability             (streamFifo_7_io_availability                  ), //o
    .clk                         (clk                                           ), //i
    .reset                       (reset                                         )  //i
  );
  PhyTxScrambler phy_tx_scrambler (
    .raw_data_valid                  (phy_header_extender_result_data_fifo_io_pop_valid             ), //i
    .raw_data_ready                  (phy_tx_scrambler_raw_data_ready                               ), //o
    .raw_data_payload_last           (phy_header_extender_result_data_fifo_io_pop_payload_last      ), //i
    .raw_data_payload_fragment       (phy_header_extender_result_data_fifo_io_pop_payload_fragment  ), //i
    .result_data_valid               (phy_tx_scrambler_result_data_valid                            ), //o
    .result_data_ready               (coded_data_ready                                              ), //i
    .result_data_payload_last        (phy_tx_scrambler_result_data_payload_last                     ), //o
    .result_data_payload_fragment    (phy_tx_scrambler_result_data_payload_fragment                 ), //o
    .clk                             (clk                                                           ), //i
    .reset                           (reset                                                         )  //i
  );
  StreamFifo_4 phy_header_extender_result_data_fifo (
    .io_push_valid               (phy_header_extender_result_data_valid                         ), //i
    .io_push_ready               (phy_header_extender_result_data_fifo_io_push_ready            ), //o
    .io_push_payload_last        (phy_header_extender_result_data_payload_last                  ), //i
    .io_push_payload_fragment    (phy_header_extender_result_data_payload_fragment              ), //i
    .io_pop_valid                (phy_header_extender_result_data_fifo_io_pop_valid             ), //o
    .io_pop_ready                (phy_tx_scrambler_raw_data_ready                               ), //i
    .io_pop_payload_last         (phy_header_extender_result_data_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (phy_header_extender_result_data_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                                          ), //i
    .io_occupancy                (phy_header_extender_result_data_fifo_io_occupancy             ), //o
    .io_availability             (phy_header_extender_result_data_fifo_io_availability          ), //o
    .clk                         (clk                                                           ), //i
    .reset                       (reset                                                         )  //i
  );
  ClkCrossing clkCrossing_2 (
    .dataIn     (__slices_limit         ), //i
    .dataOut    (clkCrossing_2_dataOut  ), //o
    .clk        (clk                    ), //i
    .reset      (reset                  )  //i
  );
  ClkCrossing clkCrossing_3 (
    .dataIn     (stream_package_gen_slices_cnt  ), //i
    .dataOut    (clkCrossing_3_dataOut          ), //o
    .clk        (clk                            ), //i
    .reset      (reset                          )  //i
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
        readRsp_data[6 : 0] = __slices_limit_driver;
      end
      8'h04 : begin
        readRsp_data[6 : 0] = __slices_cnt;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign raw_data_tready = stream_package_gen_raw_data_tready;
  assign coded_data_valid = phy_tx_scrambler_result_data_valid;
  assign coded_data_payload_last = phy_tx_scrambler_result_data_payload_last;
  assign coded_data_payload_fragment = phy_tx_scrambler_result_data_payload_fragment;
  assign __slices_limit = __slices_limit_driver;
  assign __slices_cnt = clkCrossing_3_dataOut;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
    end else begin
      if(_zz_writeJoinEvent_translated_ready) begin
        _zz_axil4Ctrl_bvalid_2 <= (writeJoinEvent_translated_valid && _zz_axil4Ctrl_bvalid);
      end
      if(axil4Ctrl_arready) begin
        axil4Ctrl_ar_rValid <= axil4Ctrl_arvalid;
      end
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
      8'h0 : begin
        if(writeOccur) begin
          __slices_limit_driver <= axil4Ctrl_wdata[6 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule

//ClkCrossing replaced by ClkCrossing

module ClkCrossing (
  input      [6:0]    dataIn,
  output     [6:0]    dataOut,
  input               clk,
  input               reset
);
  reg        [6:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [6:0]    area_clkO_buf0;
  reg        [6:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

//StreamFifo_4 replaced by StreamFifo_4

module PhyTxScrambler (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [15:0]   result_data_payload_fragment,
  input               clk,
  input               reset
);
  reg                 scrambler_1_init_state_valid;
  reg                 scrambler_1_scram_data_ready;
  wire                scrambler_1_scram_data_valid;
  wire       [15:0]   scrambler_1_scram_data_payload;
  reg        `PhyTxScramblerStatus_binary_sequential_type scrambler_status;
  wire                raw_data_fire;
  wire                when_PhyTx_l127;
  wire                raw_data_fire_1;
  `ifndef SYNTHESIS
  reg [79:0] scrambler_status_string;
  `endif


  Scrambler scrambler_1 (
    .init_state_valid      (scrambler_1_init_state_valid    ), //i
    .init_state_payload    (7'h7f                           ), //i
    .scram_data_valid      (scrambler_1_scram_data_valid    ), //o
    .scram_data_ready      (scrambler_1_scram_data_ready    ), //i
    .scram_data_payload    (scrambler_1_scram_data_payload  ), //o
    .clk                   (clk                             ), //i
    .reset                 (reset                           )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(scrambler_status)
      `PhyTxScramblerStatus_binary_sequential_IDLE : scrambler_status_string = "IDLE      ";
      `PhyTxScramblerStatus_binary_sequential_SCRAMBLING : scrambler_status_string = "SCRAMBLING";
      `PhyTxScramblerStatus_binary_sequential_FINAL_1 : scrambler_status_string = "FINAL_1   ";
      default : scrambler_status_string = "??????????";
    endcase
  end
  `endif

  always @(*) begin
    result_data_valid = 1'b0;
    case(scrambler_status)
      `PhyTxScramblerStatus_binary_sequential_IDLE : begin
      end
      `PhyTxScramblerStatus_binary_sequential_SCRAMBLING : begin
        result_data_valid = (scrambler_1_scram_data_valid && raw_data_valid);
      end
      default : begin
      end
    endcase
  end

  assign result_data_payload_fragment = (scrambler_1_scram_data_payload ^ raw_data_payload_fragment);
  assign result_data_payload_last = raw_data_payload_last;
  always @(*) begin
    raw_data_ready = 1'b0;
    case(scrambler_status)
      `PhyTxScramblerStatus_binary_sequential_IDLE : begin
      end
      `PhyTxScramblerStatus_binary_sequential_SCRAMBLING : begin
        raw_data_ready = result_data_ready;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    case(scrambler_status)
      `PhyTxScramblerStatus_binary_sequential_IDLE : begin
        if(raw_data_valid) begin
          scrambler_1_init_state_valid = 1'b0;
        end else begin
          scrambler_1_init_state_valid = 1'b1;
        end
      end
      `PhyTxScramblerStatus_binary_sequential_SCRAMBLING : begin
        scrambler_1_init_state_valid = 1'b0;
      end
      default : begin
        scrambler_1_init_state_valid = 1'b1;
      end
    endcase
  end

  always @(*) begin
    case(scrambler_status)
      `PhyTxScramblerStatus_binary_sequential_IDLE : begin
        if(raw_data_valid) begin
          scrambler_1_scram_data_ready = 1'b1;
        end else begin
          scrambler_1_scram_data_ready = 1'b0;
        end
      end
      `PhyTxScramblerStatus_binary_sequential_SCRAMBLING : begin
        scrambler_1_scram_data_ready = raw_data_fire_1;
      end
      default : begin
        scrambler_1_scram_data_ready = 1'b0;
      end
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l127 = (raw_data_fire && raw_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      scrambler_status <= `PhyTxScramblerStatus_binary_sequential_IDLE;
    end else begin
      case(scrambler_status)
        `PhyTxScramblerStatus_binary_sequential_IDLE : begin
          if(raw_data_valid) begin
            scrambler_status <= `PhyTxScramblerStatus_binary_sequential_SCRAMBLING;
          end
        end
        `PhyTxScramblerStatus_binary_sequential_SCRAMBLING : begin
          if(when_PhyTx_l127) begin
            scrambler_status <= `PhyTxScramblerStatus_binary_sequential_FINAL_1;
          end
        end
        default : begin
          scrambler_status <= `PhyTxScramblerStatus_binary_sequential_IDLE;
        end
      endcase
    end
  end


endmodule

//StreamFifo_4 replaced by StreamFifo_4

module PhyHeaderExtender (
  input      [7:0]    mod_method,
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [15:0]   result_data_payload_fragment,
  input               clk,
  input               reset
);
  wire                dataFifo_io_push_valid;
  reg                 dataFifo_io_pop_ready;
  wire                dataFifo_io_push_ready;
  wire                dataFifo_io_pop_valid;
  wire                dataFifo_io_pop_payload_last;
  wire       [15:0]   dataFifo_io_pop_payload_fragment;
  wire       [7:0]    dataFifo_io_occupancy;
  wire       [7:0]    dataFifo_io_availability;
  wire       [7:0]    _zz_result_data_payload_fragment;
  wire       [8:0]    _zz_result_data_payload_fragment_1;
  reg        [7:0]    counter;
  reg                 emitHeader;
  wire                raw_data_fire;
  wire                when_PhyTx_l159;
  wire                result_data_fire;
  wire                when_PhyTx_l159_1;
  wire                _zz_raw_data_ready;
  wire                result_data_fire_1;
  wire                when_PhyTx_l161;
  wire                raw_data_fire_1;
  reg        `PhyTxHeaderStatus_binary_sequential_type header_status;
  wire                result_data_fire_2;
  wire                when_PhyTx_l190;
  `ifndef SYNTHESIS
  reg [47:0] header_status_string;
  `endif


  assign _zz_result_data_payload_fragment_1 = ({1'd0,counter} <<< 1);
  assign _zz_result_data_payload_fragment = _zz_result_data_payload_fragment_1[7:0];
  StreamFifo dataFifo (
    .io_push_valid               (dataFifo_io_push_valid            ), //i
    .io_push_ready               (dataFifo_io_push_ready            ), //o
    .io_push_payload_last        (raw_data_payload_last             ), //i
    .io_push_payload_fragment    (raw_data_payload_fragment         ), //i
    .io_pop_valid                (dataFifo_io_pop_valid             ), //o
    .io_pop_ready                (dataFifo_io_pop_ready             ), //i
    .io_pop_payload_last         (dataFifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (dataFifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                              ), //i
    .io_occupancy                (dataFifo_io_occupancy             ), //o
    .io_availability             (dataFifo_io_availability          ), //o
    .clk                         (clk                               ), //i
    .reset                       (reset                             )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(header_status)
      `PhyTxHeaderStatus_binary_sequential_IDLE : header_status_string = "IDLE  ";
      `PhyTxHeaderStatus_binary_sequential_HEADER : header_status_string = "HEADER";
      `PhyTxHeaderStatus_binary_sequential_DATA : header_status_string = "DATA  ";
      default : header_status_string = "??????";
    endcase
  end
  `endif

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l159 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l159_1 = (result_data_fire && result_data_payload_last);
  assign _zz_raw_data_ready = (! emitHeader);
  assign raw_data_ready = (dataFifo_io_push_ready && _zz_raw_data_ready);
  assign dataFifo_io_push_valid = (raw_data_valid && _zz_raw_data_ready);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l161 = (result_data_fire_1 && result_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  always @(*) begin
    result_data_payload_last = 1'b0;
    case(header_status)
      `PhyTxHeaderStatus_binary_sequential_IDLE : begin
      end
      `PhyTxHeaderStatus_binary_sequential_HEADER : begin
      end
      default : begin
        result_data_payload_last = dataFifo_io_pop_payload_last;
      end
    endcase
  end

  always @(*) begin
    result_data_valid = 1'b0;
    case(header_status)
      `PhyTxHeaderStatus_binary_sequential_IDLE : begin
      end
      `PhyTxHeaderStatus_binary_sequential_HEADER : begin
        result_data_valid = 1'b1;
      end
      default : begin
        result_data_valid = dataFifo_io_pop_valid;
      end
    endcase
  end

  always @(*) begin
    result_data_payload_fragment = 16'h0;
    case(header_status)
      `PhyTxHeaderStatus_binary_sequential_IDLE : begin
      end
      `PhyTxHeaderStatus_binary_sequential_HEADER : begin
        result_data_payload_fragment = {mod_method,_zz_result_data_payload_fragment};
      end
      default : begin
        result_data_payload_fragment = dataFifo_io_pop_payload_fragment;
      end
    endcase
  end

  always @(*) begin
    dataFifo_io_pop_ready = 1'b0;
    case(header_status)
      `PhyTxHeaderStatus_binary_sequential_IDLE : begin
      end
      `PhyTxHeaderStatus_binary_sequential_HEADER : begin
      end
      default : begin
        dataFifo_io_pop_ready = result_data_ready;
      end
    endcase
  end

  assign result_data_fire_2 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l190 = (result_data_fire_2 && result_data_payload_last);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      counter <= 8'h0;
      emitHeader <= 1'b0;
      header_status <= `PhyTxHeaderStatus_binary_sequential_IDLE;
    end else begin
      if(when_PhyTx_l159) begin
        emitHeader <= 1'b1;
      end
      if(when_PhyTx_l159_1) begin
        emitHeader <= 1'b0;
      end
      if(when_PhyTx_l161) begin
        counter <= 8'h0;
      end else begin
        if(raw_data_fire_1) begin
          counter <= (counter + 8'h01);
        end
      end
      case(header_status)
        `PhyTxHeaderStatus_binary_sequential_IDLE : begin
          if(emitHeader) begin
            header_status <= `PhyTxHeaderStatus_binary_sequential_HEADER;
          end
        end
        `PhyTxHeaderStatus_binary_sequential_HEADER : begin
          if(result_data_ready) begin
            header_status <= `PhyTxHeaderStatus_binary_sequential_DATA;
          end
        end
        default : begin
          if(when_PhyTx_l190) begin
            header_status <= `PhyTxHeaderStatus_binary_sequential_IDLE;
          end
        end
      endcase
    end
  end


endmodule

module StreamFifo_4 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [15:0]   io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [15:0]   io_pop_payload_fragment,
  input               io_flush,
  output reg [7:0]    io_occupancy,
  output reg [7:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [16:0]   _zz_logic_ram_port0;
  wire       [7:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [7:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [16:0]   _zz_logic_ram_port_1;
  wire       [7:0]    _zz_io_occupancy;
  wire       [7:0]    _zz_io_availability;
  wire       [7:0]    _zz_io_availability_1;
  wire       [7:0]    _zz_io_availability_2;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [7:0]    logic_pushPtr_valueNext;
  reg        [7:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [7:0]    logic_popPtr_valueNext;
  reg        [7:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [16:0]   _zz_io_pop_payload_last;
  wire                when_Stream_l933;
  wire       [7:0]    logic_ptrDif;
  reg [16:0] logic_ram [0:199];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {7'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {7'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (8'hc8 + logic_ptrDif);
  assign _zz_io_availability = (8'hc8 + _zz_io_availability_1);
  assign _zz_io_availability_1 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_availability_2 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_fragment,io_push_payload_last};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 8'hc7);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 8'h0;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 8'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 8'hc7);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 8'h0;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 8'h0;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[16 : 1];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 8'hc8 : 8'h0);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 8'h0 : 8'hc8);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 8'h0;
      logic_popPtr_value <= 8'h0;
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

module Puncturing (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output              punched_data_valid,
  output              punched_data_payload_last,
  output     [15:0]   punched_data_payload_fragment,
  input               clk,
  input               reset
);
  wire       [4:0]    _zz_punched_data_payload_fragment;
  wire       [0:0]    _zz_punched_data_payload_fragment_1;
  wire                _zz_punched_data_payload_fragment_2;
  reg        [15:0]   raw_data_fragment;
  reg                 raw_data_valid_1;
  reg                 raw_data_last;

  assign _zz_punched_data_payload_fragment = {{{{raw_data_fragment[15],raw_data_fragment[7]},raw_data_fragment[14]},raw_data_fragment[6]},raw_data_fragment[13]};
  assign _zz_punched_data_payload_fragment_1 = raw_data_fragment[5];
  assign _zz_punched_data_payload_fragment_2 = raw_data_fragment[12];
  assign raw_data_ready = 1'b1;
  assign punched_data_valid = raw_data_valid_1;
  assign punched_data_payload_last = raw_data_last;
  assign punched_data_payload_fragment = {{{{{{{{{{{_zz_punched_data_payload_fragment,_zz_punched_data_payload_fragment_1},_zz_punched_data_payload_fragment_2},raw_data_fragment[4]},raw_data_fragment[11]},raw_data_fragment[3]},raw_data_fragment[10]},raw_data_fragment[2]},raw_data_fragment[9]},raw_data_fragment[1]},raw_data_fragment[8]},raw_data_fragment[0]};
  always @(posedge clk) begin
    raw_data_fragment <= raw_data_payload_fragment;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      raw_data_valid_1 <= 1'b0;
      raw_data_last <= 1'b0;
    end else begin
      raw_data_valid_1 <= raw_data_valid;
      raw_data_last <= raw_data_payload_last;
    end
  end


endmodule

//StreamFifo_1 replaced by StreamFifo_1

module PhyTxEncoder (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [15:0]   result_data_payload_fragment,
  input               clk,
  input               reset
);
  reg                 phy_tx_encoder_raw_data_valid;
  reg                 phy_tx_encoder_raw_data_payload_last;
  reg        [7:0]    phy_tx_encoder_raw_data_payload_fragment;
  wire                phy_tx_encoder_raw_data_ready;
  wire                phy_tx_encoder_coded_data_valid;
  wire                phy_tx_encoder_coded_data_payload_last;
  wire       [15:0]   phy_tx_encoder_coded_data_payload_fragment;
  reg                 emitEncoding;
  wire                raw_data_fire;
  wire                when_PhyTx_l79;
  wire                phy_tx_encoder_raw_data_fire;
  wire                when_PhyTx_l79_1;

  ConvEncoder phy_tx_encoder (
    .tail_bits_valid                (1'b0                                        ), //i
    .tail_bits_payload              (7'h0                                        ), //i
    .raw_data_valid                 (phy_tx_encoder_raw_data_valid               ), //i
    .raw_data_ready                 (phy_tx_encoder_raw_data_ready               ), //o
    .raw_data_payload_last          (phy_tx_encoder_raw_data_payload_last        ), //i
    .raw_data_payload_fragment      (phy_tx_encoder_raw_data_payload_fragment    ), //i
    .coded_data_valid               (phy_tx_encoder_coded_data_valid             ), //o
    .coded_data_payload_last        (phy_tx_encoder_coded_data_payload_last      ), //o
    .coded_data_payload_fragment    (phy_tx_encoder_coded_data_payload_fragment  ), //o
    .clk                            (clk                                         ), //i
    .reset                          (reset                                       )  //i
  );
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l79 = (raw_data_fire && raw_data_payload_last);
  assign phy_tx_encoder_raw_data_fire = (phy_tx_encoder_raw_data_valid && phy_tx_encoder_raw_data_ready);
  assign when_PhyTx_l79_1 = (phy_tx_encoder_raw_data_fire && phy_tx_encoder_raw_data_payload_last);
  always @(*) begin
    if(emitEncoding) begin
      raw_data_ready = 1'b0;
    end else begin
      raw_data_ready = phy_tx_encoder_raw_data_ready;
    end
  end

  always @(*) begin
    if(emitEncoding) begin
      phy_tx_encoder_raw_data_valid = 1'b1;
    end else begin
      phy_tx_encoder_raw_data_valid = raw_data_valid;
    end
  end

  always @(*) begin
    if(emitEncoding) begin
      phy_tx_encoder_raw_data_payload_fragment = 8'h0;
    end else begin
      phy_tx_encoder_raw_data_payload_fragment = raw_data_payload_fragment;
    end
  end

  always @(*) begin
    if(emitEncoding) begin
      phy_tx_encoder_raw_data_payload_last = 1'b1;
    end else begin
      phy_tx_encoder_raw_data_payload_last = 1'b0;
    end
  end

  assign result_data_valid = phy_tx_encoder_coded_data_valid;
  assign result_data_payload_last = phy_tx_encoder_coded_data_payload_last;
  assign result_data_payload_fragment = phy_tx_encoder_coded_data_payload_fragment;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      emitEncoding <= 1'b0;
    end else begin
      if(when_PhyTx_l79) begin
        emitEncoding <= 1'b1;
      end
      if(when_PhyTx_l79_1) begin
        emitEncoding <= 1'b0;
      end
    end
  end


endmodule

//StreamFifo_1 replaced by StreamFifo_1

module PhyTxCrc (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [7:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);
  wire                crc_1_flush;
  wire       [31:0]   crc_1_result;
  wire       [31:0]   crc_1_resultNext;
  reg        [7:0]    _zz_result_data_payload_fragment;
  reg                 emitCrc;
  wire                raw_data_fire;
  wire                when_PhyTx_l16;
  wire                result_data_fire;
  wire                when_PhyTx_l16_1;
  reg        [1:0]    counter;
  wire                raw_data_fire_1;
  wire                result_data_fire_1;
  wire                when_PhyTx_l23;
  wire                when_PhyTx_l31;

  Crc crc_1 (
    .flush            (crc_1_flush                ), //i
    .input_valid      (raw_data_fire_1            ), //i
    .input_payload    (raw_data_payload_fragment  ), //i
    .result           (crc_1_result               ), //o
    .resultNext       (crc_1_resultNext           ), //o
    .clk              (clk                        ), //i
    .reset            (reset                      )  //i
  );
  always @(*) begin
    case(counter)
      2'b00 : begin
        _zz_result_data_payload_fragment = crc_1_result[7 : 0];
      end
      2'b01 : begin
        _zz_result_data_payload_fragment = crc_1_result[15 : 8];
      end
      2'b10 : begin
        _zz_result_data_payload_fragment = crc_1_result[23 : 16];
      end
      default : begin
        _zz_result_data_payload_fragment = crc_1_result[31 : 24];
      end
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l16 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l16_1 = (result_data_fire && result_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign crc_1_flush = (result_data_fire_1 && result_data_payload_last);
  always @(*) begin
    result_data_payload_last = 1'b0;
    if(!when_PhyTx_l23) begin
      if(when_PhyTx_l31) begin
        result_data_payload_last = 1'b1;
      end
    end
  end

  assign when_PhyTx_l23 = (! emitCrc);
  always @(*) begin
    if(when_PhyTx_l23) begin
      result_data_valid = raw_data_valid;
    end else begin
      result_data_valid = 1'b1;
    end
  end

  always @(*) begin
    if(when_PhyTx_l23) begin
      result_data_payload_fragment = raw_data_payload_fragment;
    end else begin
      result_data_payload_fragment = _zz_result_data_payload_fragment;
    end
  end

  always @(*) begin
    if(when_PhyTx_l23) begin
      raw_data_ready = result_data_ready;
    end else begin
      raw_data_ready = 1'b0;
    end
  end

  assign when_PhyTx_l31 = (counter == 2'b11);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      emitCrc <= 1'b0;
      counter <= 2'b00;
    end else begin
      if(when_PhyTx_l16) begin
        emitCrc <= 1'b1;
      end
      if(when_PhyTx_l16_1) begin
        emitCrc <= 1'b0;
      end
      if(!when_PhyTx_l23) begin
        if(when_PhyTx_l31) begin
          if(result_data_ready) begin
            emitCrc <= 1'b0;
          end
        end
        if(result_data_ready) begin
          counter <= (counter + 2'b01);
        end
      end
    end
  end


endmodule

module StreamFifo_1 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [7:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [7:0]    io_pop_payload_fragment,
  input               io_flush,
  output reg [7:0]    io_occupancy,
  output reg [7:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [8:0]    _zz_logic_ram_port0;
  wire       [7:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [7:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [8:0]    _zz_logic_ram_port_1;
  wire       [7:0]    _zz_io_occupancy;
  wire       [7:0]    _zz_io_availability;
  wire       [7:0]    _zz_io_availability_1;
  wire       [7:0]    _zz_io_availability_2;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [7:0]    logic_pushPtr_valueNext;
  reg        [7:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [7:0]    logic_popPtr_valueNext;
  reg        [7:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [8:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l933;
  wire       [7:0]    logic_ptrDif;
  reg [8:0] logic_ram [0:199];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {7'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {7'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (8'hc8 + logic_ptrDif);
  assign _zz_io_availability = (8'hc8 + _zz_io_availability_1);
  assign _zz_io_availability_1 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_availability_2 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_fragment,io_push_payload_last};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 8'hc7);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 8'h0;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 8'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 8'hc7);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 8'h0;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 8'h0;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[8 : 1];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 8'hc8 : 8'h0);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 8'h0 : 8'hc8);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 8'h0;
      logic_popPtr_value <= 8'h0;
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

module PhyTxPadder (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [7:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);
  reg        [2:0]    counter;
  wire                ok;
  wire                raw_data_fire;
  reg                 raw_data_payload_first;
  wire                fill;
  wire                result_data_fire;
  wire                when_PhyTx_l55;
  wire                result_data_fire_1;
  wire                when_PhyTx_l58;
  wire                _zz_raw_data_ready;
  wire                when_PhyTx_l62;

  assign ok = (counter == 3'b111);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign fill = ((counter != 3'b000) && raw_data_payload_first);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l55 = ((! ok) && result_data_fire);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l58 = (result_data_fire_1 && result_data_payload_last);
  assign _zz_raw_data_ready = (! fill);
  assign raw_data_ready = (result_data_ready && _zz_raw_data_ready);
  always @(*) begin
    result_data_valid = (raw_data_valid && _zz_raw_data_ready);
    if(fill) begin
      result_data_valid = 1'b1;
    end
  end

  always @(*) begin
    result_data_payload_last = raw_data_payload_last;
    if(when_PhyTx_l62) begin
      result_data_payload_last = 1'b0;
    end
    if(fill) begin
      result_data_payload_last = ok;
    end
  end

  always @(*) begin
    result_data_payload_fragment = raw_data_payload_fragment;
    if(fill) begin
      result_data_payload_fragment = 8'h0;
    end
  end

  assign when_PhyTx_l62 = (! ok);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      counter <= 3'b000;
      raw_data_payload_first <= 1'b1;
    end else begin
      if(raw_data_fire) begin
        raw_data_payload_first <= raw_data_payload_last;
      end
      if(when_PhyTx_l55) begin
        counter <= (counter + 3'b001);
      end
      if(when_PhyTx_l58) begin
        counter <= 3'b000;
      end
    end
  end


endmodule

module StreamPkgGen (
  input      [6:0]    slices_limit,
  output     [6:0]    slices_cnt,
  input               raw_data_tvalid,
  output              raw_data_tready,
  input      [31:0]   raw_data_tdata,
  input      [3:0]    raw_data_tstrb,
  input               raw_data_tlast,
  output              pkg_data_valid,
  input               pkg_data_ready,
  output              pkg_data_payload_last,
  output     [7:0]    pkg_data_payload_fragment,
  input               clk,
  input               reset
);
  wire                split_core_raw_data_ready;
  wire                split_core_split_data_valid;
  wire       [7:0]    split_core_split_data_payload;
  wire       [6:0]    _zz_pkg_data_payload_last;
  wire       [6:0]    _zz_pkg_slices_cnt;
  reg        [3:0]    strb_buf;
  reg        [6:0]    pkg_slices_cnt;
  wire                bit_valid;
  reg                 raw_data_last;
  wire                raw_data_stream_fire;
  wire                split_core_split_data_fire;

  assign _zz_pkg_data_payload_last = (slices_limit - 7'h01);
  assign _zz_pkg_slices_cnt = (pkg_slices_cnt + 7'h01);
  StreamPayloadSplit split_core (
    .raw_data_valid        (raw_data_tvalid                ), //i
    .raw_data_ready        (split_core_raw_data_ready      ), //o
    .raw_data_payload      (raw_data_tdata                 ), //i
    .split_data_valid      (split_core_split_data_valid    ), //o
    .split_data_ready      (pkg_data_ready                 ), //i
    .split_data_payload    (split_core_split_data_payload  ), //o
    .clk                   (clk                            ), //i
    .reset                 (reset                          )  //i
  );
  assign bit_valid = strb_buf[0];
  assign raw_data_tready = split_core_raw_data_ready;
  assign pkg_data_valid = (split_core_split_data_valid && bit_valid);
  assign pkg_data_payload_fragment = split_core_split_data_payload;
  assign pkg_data_payload_last = ((pkg_slices_cnt == _zz_pkg_data_payload_last) || (raw_data_last && (strb_buf == 4'b0001)));
  assign raw_data_stream_fire = (raw_data_tvalid && raw_data_tready);
  assign split_core_split_data_fire = (split_core_split_data_valid && pkg_data_ready);
  assign slices_cnt = pkg_slices_cnt;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pkg_slices_cnt <= 7'h0;
      raw_data_last <= 1'b0;
    end else begin
      if(raw_data_stream_fire) begin
        raw_data_last <= raw_data_tlast;
      end else begin
        if(split_core_split_data_fire) begin
          pkg_slices_cnt <= (pkg_data_payload_last ? 7'h0 : _zz_pkg_slices_cnt);
        end
      end
    end
  end

  always @(posedge clk) begin
    if(raw_data_stream_fire) begin
      strb_buf <= raw_data_tstrb;
    end else begin
      if(split_core_split_data_fire) begin
        strb_buf <= (strb_buf >>> 1);
      end
    end
  end


endmodule

module Scrambler (
  input               init_state_valid,
  input      [6:0]    init_state_payload,
  output              scram_data_valid,
  input               scram_data_ready,
  output     [15:0]   scram_data_payload,
  input               clk,
  input               reset
);
  wire       [7:0]    _zz_r_scr_0;
  wire       [7:0]    _zz_r_scr_1;
  wire       [7:0]    _zz_r_scr_2;
  wire       [7:0]    _zz_r_scr_3;
  wire       [7:0]    _zz_r_scr_4;
  wire       [7:0]    _zz_r_scr_5;
  wire       [7:0]    _zz_r_scr_6;
  wire       [7:0]    _zz_r_scr_7;
  wire       [7:0]    _zz_r_scr_8;
  wire       [7:0]    _zz_r_scr_9;
  wire       [7:0]    _zz_r_scr_10;
  wire       [7:0]    _zz_r_scr_11;
  wire       [7:0]    _zz_r_scr_12;
  wire       [7:0]    _zz_r_scr_13;
  wire       [7:0]    _zz_r_scr_14;
  wire       [7:0]    _zz_r_scr_15;
  wire       [0:0]    _zz_scram_data;
  wire       [4:0]    _zz_scram_data_1;
  reg        [6:0]    scram_state;
  wire       [6:0]    r_scr_0;
  wire       [6:0]    r_scr_1;
  wire       [6:0]    r_scr_2;
  wire       [6:0]    r_scr_3;
  wire       [6:0]    r_scr_4;
  wire       [6:0]    r_scr_5;
  wire       [6:0]    r_scr_6;
  wire       [6:0]    r_scr_7;
  wire       [6:0]    r_scr_8;
  wire       [6:0]    r_scr_9;
  wire       [6:0]    r_scr_10;
  wire       [6:0]    r_scr_11;
  wire       [6:0]    r_scr_12;
  wire       [6:0]    r_scr_13;
  wire       [6:0]    r_scr_14;
  wire       [6:0]    r_scr_15;
  wire                feed_back_0;
  wire                feed_back_1;
  wire                feed_back_2;
  wire                feed_back_3;
  wire                feed_back_4;
  wire                feed_back_5;
  wire                feed_back_6;
  wire                feed_back_7;
  wire                feed_back_8;
  wire                feed_back_9;
  wire                feed_back_10;
  wire                feed_back_11;
  wire                feed_back_12;
  wire                feed_back_13;
  wire                feed_back_14;
  wire                feed_back_15;
  reg                 scram_valid;
  reg        [15:0]   scram_data;

  assign _zz_r_scr_0 = {scram_state,feed_back_0};
  assign _zz_r_scr_1 = {r_scr_0,feed_back_1};
  assign _zz_r_scr_2 = {r_scr_1,feed_back_2};
  assign _zz_r_scr_3 = {r_scr_2,feed_back_3};
  assign _zz_r_scr_4 = {r_scr_3,feed_back_4};
  assign _zz_r_scr_5 = {r_scr_4,feed_back_5};
  assign _zz_r_scr_6 = {r_scr_5,feed_back_6};
  assign _zz_r_scr_7 = {r_scr_6,feed_back_7};
  assign _zz_r_scr_8 = {r_scr_7,feed_back_8};
  assign _zz_r_scr_9 = {r_scr_8,feed_back_9};
  assign _zz_r_scr_10 = {r_scr_9,feed_back_10};
  assign _zz_r_scr_11 = {r_scr_10,feed_back_11};
  assign _zz_r_scr_12 = {r_scr_11,feed_back_12};
  assign _zz_r_scr_13 = {r_scr_12,feed_back_13};
  assign _zz_r_scr_14 = {r_scr_13,feed_back_14};
  assign _zz_r_scr_15 = {r_scr_14,feed_back_15};
  assign _zz_scram_data = feed_back_5;
  assign _zz_scram_data_1 = {feed_back_4,{feed_back_3,{feed_back_2,{feed_back_1,feed_back_0}}}};
  assign feed_back_0 = (scram_state[6] ^ scram_state[3]);
  assign r_scr_0 = _zz_r_scr_0[6:0];
  assign feed_back_1 = (r_scr_0[6] ^ r_scr_0[3]);
  assign r_scr_1 = _zz_r_scr_1[6:0];
  assign feed_back_2 = (r_scr_1[6] ^ r_scr_1[3]);
  assign r_scr_2 = _zz_r_scr_2[6:0];
  assign feed_back_3 = (r_scr_2[6] ^ r_scr_2[3]);
  assign r_scr_3 = _zz_r_scr_3[6:0];
  assign feed_back_4 = (r_scr_3[6] ^ r_scr_3[3]);
  assign r_scr_4 = _zz_r_scr_4[6:0];
  assign feed_back_5 = (r_scr_4[6] ^ r_scr_4[3]);
  assign r_scr_5 = _zz_r_scr_5[6:0];
  assign feed_back_6 = (r_scr_5[6] ^ r_scr_5[3]);
  assign r_scr_6 = _zz_r_scr_6[6:0];
  assign feed_back_7 = (r_scr_6[6] ^ r_scr_6[3]);
  assign r_scr_7 = _zz_r_scr_7[6:0];
  assign feed_back_8 = (r_scr_7[6] ^ r_scr_7[3]);
  assign r_scr_8 = _zz_r_scr_8[6:0];
  assign feed_back_9 = (r_scr_8[6] ^ r_scr_8[3]);
  assign r_scr_9 = _zz_r_scr_9[6:0];
  assign feed_back_10 = (r_scr_9[6] ^ r_scr_9[3]);
  assign r_scr_10 = _zz_r_scr_10[6:0];
  assign feed_back_11 = (r_scr_10[6] ^ r_scr_10[3]);
  assign r_scr_11 = _zz_r_scr_11[6:0];
  assign feed_back_12 = (r_scr_11[6] ^ r_scr_11[3]);
  assign r_scr_12 = _zz_r_scr_12[6:0];
  assign feed_back_13 = (r_scr_12[6] ^ r_scr_12[3]);
  assign r_scr_13 = _zz_r_scr_13[6:0];
  assign feed_back_14 = (r_scr_13[6] ^ r_scr_13[3]);
  assign r_scr_14 = _zz_r_scr_14[6:0];
  assign feed_back_15 = (r_scr_14[6] ^ r_scr_14[3]);
  assign r_scr_15 = _zz_r_scr_15[6:0];
  assign scram_data_payload = scram_data;
  assign scram_data_valid = scram_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      scram_valid <= 1'b0;
    end else begin
      if(init_state_valid) begin
        scram_valid <= 1'b0;
      end else begin
        if(scram_data_ready) begin
          scram_valid <= 1'b1;
        end
      end
    end
  end

  always @(posedge clk) begin
    if(init_state_valid) begin
      scram_state <= init_state_payload;
    end else begin
      if(scram_data_ready) begin
        scram_state <= r_scr_15;
        scram_data <= {feed_back_15,{feed_back_14,{feed_back_13,{feed_back_12,{feed_back_11,{feed_back_10,{feed_back_9,{feed_back_8,{feed_back_7,{feed_back_6,{_zz_scram_data,_zz_scram_data_1}}}}}}}}}}};
      end
    end
  end


endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [15:0]   io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [15:0]   io_pop_payload_fragment,
  input               io_flush,
  output reg [7:0]    io_occupancy,
  output reg [7:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [16:0]   _zz_logic_ram_port0;
  wire       [7:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [7:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [16:0]   _zz_logic_ram_port_1;
  wire       [7:0]    _zz_io_occupancy;
  wire       [7:0]    _zz_io_availability;
  wire       [7:0]    _zz_io_availability_1;
  wire       [7:0]    _zz_io_availability_2;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [7:0]    logic_pushPtr_valueNext;
  reg        [7:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [7:0]    logic_popPtr_valueNext;
  reg        [7:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [16:0]   _zz_io_pop_payload_last;
  wire                when_Stream_l933;
  wire       [7:0]    logic_ptrDif;
  reg [16:0] logic_ram [0:133];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {7'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {7'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (8'h86 + logic_ptrDif);
  assign _zz_io_availability = (8'h86 + _zz_io_availability_1);
  assign _zz_io_availability_1 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_availability_2 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_fragment,io_push_payload_last};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 8'h85);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 8'h0;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 8'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 8'h85);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 8'h0;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 8'h0;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[16 : 1];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 8'h86 : 8'h0);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 8'h0 : 8'h86);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 8'h0;
      logic_popPtr_value <= 8'h0;
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

module ConvEncoder (
  input               tail_bits_valid,
  input      [6:0]    tail_bits_payload,
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              coded_data_valid,
  output              coded_data_payload_last,
  output     [15:0]   coded_data_payload_fragment,
  input               clk,
  input               reset
);
  wire       [7:0]    _zz_r_enc_0;
  wire       [7:0]    _zz_r_enc_1;
  wire       [7:0]    _zz_r_enc_2;
  wire       [7:0]    _zz_r_enc_3;
  wire       [7:0]    _zz_r_enc_4;
  wire       [7:0]    _zz_r_enc_5;
  wire       [7:0]    _zz_r_enc_6;
  wire       [7:0]    _zz_r_enc_7;
  reg        [15:0]   coded_data;
  reg                 coded_data_valid_1;
  reg        [6:0]    r_enc_buf;
  wire       [6:0]    r_enc_0;
  wire       [6:0]    r_enc_1;
  wire       [6:0]    r_enc_2;
  wire       [6:0]    r_enc_3;
  wire       [6:0]    r_enc_4;
  wire       [6:0]    r_enc_5;
  wire       [6:0]    r_enc_6;
  wire       [6:0]    r_enc_7;
  reg        [7:0]    code_vec_0;
  reg        [7:0]    code_vec_1;
  wire                raw_data_fire;
  reg                 raw_data_payload_last_regNext;

  assign _zz_r_enc_0 = {raw_data_payload_fragment[0],r_enc_buf};
  assign _zz_r_enc_1 = {raw_data_payload_fragment[1],r_enc_0};
  assign _zz_r_enc_2 = {raw_data_payload_fragment[2],r_enc_1};
  assign _zz_r_enc_3 = {raw_data_payload_fragment[3],r_enc_2};
  assign _zz_r_enc_4 = {raw_data_payload_fragment[4],r_enc_3};
  assign _zz_r_enc_5 = {raw_data_payload_fragment[5],r_enc_4};
  assign _zz_r_enc_6 = {raw_data_payload_fragment[6],r_enc_5};
  assign _zz_r_enc_7 = {raw_data_payload_fragment[7],r_enc_6};
  assign r_enc_0 = _zz_r_enc_0[7 : 1];
  assign r_enc_1 = _zz_r_enc_1[7 : 1];
  assign r_enc_2 = _zz_r_enc_2[7 : 1];
  assign r_enc_3 = _zz_r_enc_3[7 : 1];
  assign r_enc_4 = _zz_r_enc_4[7 : 1];
  assign r_enc_5 = _zz_r_enc_5[7 : 1];
  assign r_enc_6 = _zz_r_enc_6[7 : 1];
  assign r_enc_7 = _zz_r_enc_7[7 : 1];
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign raw_data_ready = (! tail_bits_valid);
  always @(*) begin
    code_vec_0[0] = ((((r_enc_0[0] ^ r_enc_0[1]) ^ r_enc_0[3]) ^ r_enc_0[4]) ^ r_enc_0[6]);
    code_vec_0[1] = ((((r_enc_1[0] ^ r_enc_1[1]) ^ r_enc_1[3]) ^ r_enc_1[4]) ^ r_enc_1[6]);
    code_vec_0[2] = ((((r_enc_2[0] ^ r_enc_2[1]) ^ r_enc_2[3]) ^ r_enc_2[4]) ^ r_enc_2[6]);
    code_vec_0[3] = ((((r_enc_3[0] ^ r_enc_3[1]) ^ r_enc_3[3]) ^ r_enc_3[4]) ^ r_enc_3[6]);
    code_vec_0[4] = ((((r_enc_4[0] ^ r_enc_4[1]) ^ r_enc_4[3]) ^ r_enc_4[4]) ^ r_enc_4[6]);
    code_vec_0[5] = ((((r_enc_5[0] ^ r_enc_5[1]) ^ r_enc_5[3]) ^ r_enc_5[4]) ^ r_enc_5[6]);
    code_vec_0[6] = ((((r_enc_6[0] ^ r_enc_6[1]) ^ r_enc_6[3]) ^ r_enc_6[4]) ^ r_enc_6[6]);
    code_vec_0[7] = ((((r_enc_7[0] ^ r_enc_7[1]) ^ r_enc_7[3]) ^ r_enc_7[4]) ^ r_enc_7[6]);
  end

  always @(*) begin
    code_vec_1[0] = ((((r_enc_0[0] ^ r_enc_0[3]) ^ r_enc_0[4]) ^ r_enc_0[5]) ^ r_enc_0[6]);
    code_vec_1[1] = ((((r_enc_1[0] ^ r_enc_1[3]) ^ r_enc_1[4]) ^ r_enc_1[5]) ^ r_enc_1[6]);
    code_vec_1[2] = ((((r_enc_2[0] ^ r_enc_2[3]) ^ r_enc_2[4]) ^ r_enc_2[5]) ^ r_enc_2[6]);
    code_vec_1[3] = ((((r_enc_3[0] ^ r_enc_3[3]) ^ r_enc_3[4]) ^ r_enc_3[5]) ^ r_enc_3[6]);
    code_vec_1[4] = ((((r_enc_4[0] ^ r_enc_4[3]) ^ r_enc_4[4]) ^ r_enc_4[5]) ^ r_enc_4[6]);
    code_vec_1[5] = ((((r_enc_5[0] ^ r_enc_5[3]) ^ r_enc_5[4]) ^ r_enc_5[5]) ^ r_enc_5[6]);
    code_vec_1[6] = ((((r_enc_6[0] ^ r_enc_6[3]) ^ r_enc_6[4]) ^ r_enc_6[5]) ^ r_enc_6[6]);
    code_vec_1[7] = ((((r_enc_7[0] ^ r_enc_7[3]) ^ r_enc_7[4]) ^ r_enc_7[5]) ^ r_enc_7[6]);
  end

  assign coded_data_payload_fragment = coded_data;
  assign coded_data_valid = coded_data_valid_1;
  assign coded_data_payload_last = raw_data_payload_last_regNext;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      coded_data_valid_1 <= 1'b0;
      r_enc_buf <= 7'h0;
      raw_data_payload_last_regNext <= 1'b0;
    end else begin
      if(tail_bits_valid) begin
        r_enc_buf <= tail_bits_payload;
      end else begin
        if(raw_data_fire) begin
          r_enc_buf <= r_enc_7;
          coded_data_valid_1 <= 1'b1;
        end else begin
          coded_data_valid_1 <= 1'b0;
        end
      end
      raw_data_payload_last_regNext <= raw_data_payload_last;
    end
  end

  always @(posedge clk) begin
    if(!tail_bits_valid) begin
      if(raw_data_fire) begin
        coded_data <= {code_vec_0,code_vec_1};
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
  input               clk,
  input               reset
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
  always @(posedge clk or posedge reset) begin
    if(reset) begin
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

module StreamPayloadSplit (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [31:0]   raw_data_payload,
  output              split_data_valid,
  input               split_data_ready,
  output     [7:0]    split_data_payload,
  input               clk,
  input               reset
);
  reg        [2:0]    cnt;
  reg        [31:0]   data_buf;
  wire                raw_data_fire;
  wire                split_data_fire;

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign split_data_fire = (split_data_valid && split_data_ready);
  assign raw_data_ready = (cnt == 3'b000);
  assign split_data_valid = (cnt != 3'b000);
  assign split_data_payload = data_buf[7:0];
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 3'b000;
    end else begin
      if(raw_data_fire) begin
        cnt <= 3'b100;
      end else begin
        if(split_data_fire) begin
          cnt <= (cnt - 3'b001);
        end
      end
    end
  end

  always @(posedge clk) begin
    if(raw_data_fire) begin
      data_buf <= raw_data_payload;
    end else begin
      if(split_data_fire) begin
        data_buf <= (data_buf >>> 8);
      end
    end
  end


endmodule
