// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : TX
// Git hash  : 61664472cf3f86fd764685245c89176f90ddeaa4


`define PhyTxHeaderStatus_binary_sequential_type [1:0]
`define PhyTxHeaderStatus_binary_sequential_IDLE 2'b00
`define PhyTxHeaderStatus_binary_sequential_HEADER 2'b01
`define PhyTxHeaderStatus_binary_sequential_DATA 2'b10

`define PhyTxScramblerStatus_binary_sequential_type [1:0]
`define PhyTxScramblerStatus_binary_sequential_IDLE 2'b00
`define PhyTxScramblerStatus_binary_sequential_SCRAMBLING 2'b01
`define PhyTxScramblerStatus_binary_sequential_FINAL_1 2'b10

`define PreambleExtenderStates_binary_sequential_type [1:0]
`define PreambleExtenderStates_binary_sequential_IDLE 2'b00
`define PreambleExtenderStates_binary_sequential_PREAMBLE 2'b01
`define PreambleExtenderStates_binary_sequential_DATA 2'b10


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
  input               rf_if_rx_if_frame_p,
  input               rf_if_rx_if_frame_n,
  input      [5:0]    rf_if_rx_if_data_p,
  input      [5:0]    rf_if_rx_if_data_n,
  input               rf_if_rx_data_clk_p,
  input               rf_if_rx_data_clk_n,
  output              rf_if_tx_if_frame_p,
  output              rf_if_tx_if_frame_n,
  output              rf_if_tx_fb_clk_p,
  output              rf_if_tx_fb_clk_n,
  output     [5:0]    rf_if_tx_if_data_p,
  output     [5:0]    rf_if_tx_if_data_n,
  input               clk,
  input               resetn
);
  wire       [7:0]    rfClockArea_mod_rtl_data_flow_unit_data_payload_fragment;
  wire                rf_interface_adc_data_valid;
  wire       [11:0]   rf_interface_adc_data_payload_0_cha_i;
  wire       [11:0]   rf_interface_adc_data_payload_0_cha_q;
  wire       [11:0]   rf_interface_adc_data_payload_1_cha_i;
  wire       [11:0]   rf_interface_adc_data_payload_1_cha_q;
  wire                rf_interface_tx_if_frame_p;
  wire                rf_interface_tx_if_frame_n;
  wire                rf_interface_tx_fb_clk_p;
  wire                rf_interface_tx_fb_clk_n;
  wire       [5:0]    rf_interface_tx_if_data_p;
  wire       [5:0]    rf_interface_tx_if_data_n;
  wire                rf_interface_dac_data_ready;
  wire                rf_interface_adc_error;
  wire                rf_interface_data_clk;
  wire                rf_interface_O;
  wire       [6:0]    rfClockArea_stream_package_gen_slices_cnt;
  wire                rfClockArea_stream_package_gen_raw_data_tready;
  wire                rfClockArea_stream_package_gen_pkg_data_valid;
  wire                rfClockArea_stream_package_gen_pkg_data_payload_last;
  wire       [7:0]    rfClockArea_stream_package_gen_pkg_data_payload_fragment;
  wire                rfClockArea_phy_tx_padder_raw_data_ready;
  wire                rfClockArea_phy_tx_padder_result_data_valid;
  wire                rfClockArea_phy_tx_padder_result_data_payload_last;
  wire       [7:0]    rfClockArea_phy_tx_padder_result_data_payload_fragment;
  wire                rfClockArea_stream_package_gen_pkg_data_fifo_io_push_ready;
  wire                rfClockArea_stream_package_gen_pkg_data_fifo_io_pop_valid;
  wire                rfClockArea_stream_package_gen_pkg_data_fifo_io_pop_payload_last;
  wire       [7:0]    rfClockArea_stream_package_gen_pkg_data_fifo_io_pop_payload_fragment;
  wire       [7:0]    rfClockArea_stream_package_gen_pkg_data_fifo_io_occupancy;
  wire       [7:0]    rfClockArea_stream_package_gen_pkg_data_fifo_io_availability;
  wire                rfClockArea_phy_tx_crc_raw_data_ready;
  wire                rfClockArea_phy_tx_crc_result_data_valid;
  wire                rfClockArea_phy_tx_crc_result_data_payload_last;
  wire       [7:0]    rfClockArea_phy_tx_crc_result_data_payload_fragment;
  wire                rfClockArea_phy_tx_padder_result_data_fifo_io_push_ready;
  wire                rfClockArea_phy_tx_padder_result_data_fifo_io_pop_valid;
  wire                rfClockArea_phy_tx_padder_result_data_fifo_io_pop_payload_last;
  wire       [7:0]    rfClockArea_phy_tx_padder_result_data_fifo_io_pop_payload_fragment;
  wire       [7:0]    rfClockArea_phy_tx_padder_result_data_fifo_io_occupancy;
  wire       [7:0]    rfClockArea_phy_tx_padder_result_data_fifo_io_availability;
  wire                rfClockArea_phy_tx_encoder_raw_data_ready;
  wire                rfClockArea_phy_tx_encoder_result_data_valid;
  wire                rfClockArea_phy_tx_encoder_result_data_payload_last;
  wire       [15:0]   rfClockArea_phy_tx_encoder_result_data_payload_fragment;
  wire                rfClockArea_phy_tx_crc_result_data_fifo_io_push_ready;
  wire                rfClockArea_phy_tx_crc_result_data_fifo_io_pop_valid;
  wire                rfClockArea_phy_tx_crc_result_data_fifo_io_pop_payload_last;
  wire       [7:0]    rfClockArea_phy_tx_crc_result_data_fifo_io_pop_payload_fragment;
  wire       [7:0]    rfClockArea_phy_tx_crc_result_data_fifo_io_occupancy;
  wire       [7:0]    rfClockArea_phy_tx_crc_result_data_fifo_io_availability;
  wire                rfClockArea_phy_tx_puncher_raw_data_ready;
  wire                rfClockArea_phy_tx_puncher_punched_data_valid;
  wire                rfClockArea_phy_tx_puncher_punched_data_payload_last;
  wire       [15:0]   rfClockArea_phy_tx_puncher_punched_data_payload_fragment;
  wire                rfClockArea_phy_tx_encoder_result_data_fifo_io_push_ready;
  wire                rfClockArea_phy_tx_encoder_result_data_fifo_io_pop_valid;
  wire                rfClockArea_phy_tx_encoder_result_data_fifo_io_pop_payload_last;
  wire       [15:0]   rfClockArea_phy_tx_encoder_result_data_fifo_io_pop_payload_fragment;
  wire       [7:0]    rfClockArea_phy_tx_encoder_result_data_fifo_io_occupancy;
  wire       [7:0]    rfClockArea_phy_tx_encoder_result_data_fifo_io_availability;
  wire                rfClockArea_phy_header_extender_raw_data_ready;
  wire                rfClockArea_phy_header_extender_result_data_valid;
  wire                rfClockArea_phy_header_extender_result_data_payload_last;
  wire       [15:0]   rfClockArea_phy_header_extender_result_data_payload_fragment;
  wire                streamFifo_10_io_push_ready;
  wire                streamFifo_10_io_pop_valid;
  wire                streamFifo_10_io_pop_payload_last;
  wire       [15:0]   streamFifo_10_io_pop_payload_fragment;
  wire       [7:0]    streamFifo_10_io_occupancy;
  wire       [7:0]    streamFifo_10_io_availability;
  wire                rfClockArea_phy_tx_scrambler_raw_data_ready;
  wire                rfClockArea_phy_tx_scrambler_result_data_valid;
  wire                rfClockArea_phy_tx_scrambler_result_data_payload_last;
  wire       [15:0]   rfClockArea_phy_tx_scrambler_result_data_payload_fragment;
  wire                rfClockArea_phy_header_extender_result_data_fifo_io_push_ready;
  wire                rfClockArea_phy_header_extender_result_data_fifo_io_pop_valid;
  wire                rfClockArea_phy_header_extender_result_data_fifo_io_pop_payload_last;
  wire       [15:0]   rfClockArea_phy_header_extender_result_data_fifo_io_pop_payload_fragment;
  wire       [7:0]    rfClockArea_phy_header_extender_result_data_fifo_io_occupancy;
  wire       [7:0]    rfClockArea_phy_header_extender_result_data_fifo_io_availability;
  wire                rfClockArea_mod_data_div_base_data_ready;
  wire                rfClockArea_mod_data_div_unit_data_valid;
  wire                rfClockArea_mod_data_div_unit_data_payload_last;
  wire       [15:0]   rfClockArea_mod_data_div_unit_data_payload_fragment;
  wire                rfClockArea_phy_tx_scrambler_result_data_fifo_io_push_ready;
  wire                rfClockArea_phy_tx_scrambler_result_data_fifo_io_pop_valid;
  wire                rfClockArea_phy_tx_scrambler_result_data_fifo_io_pop_payload_last;
  wire       [15:0]   rfClockArea_phy_tx_scrambler_result_data_fifo_io_pop_payload_fragment;
  wire       [10:0]   rfClockArea_phy_tx_scrambler_result_data_fifo_io_occupancy;
  wire       [10:0]   rfClockArea_phy_tx_scrambler_result_data_fifo_io_availability;
  wire                rfClockArea_mod_rtl_data_flow_mod_iq_valid;
  wire                rfClockArea_mod_rtl_data_flow_mod_iq_payload_last;
  wire       [11:0]   rfClockArea_mod_rtl_data_flow_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   rfClockArea_mod_rtl_data_flow_mod_iq_payload_fragment_cha_q;
  wire                rfClockArea_stf_preamble_adder_raw_data_ready;
  wire                rfClockArea_stf_preamble_adder_preamble_data_valid;
  wire                rfClockArea_stf_preamble_adder_preamble_data_payload_last;
  wire       [11:0]   rfClockArea_stf_preamble_adder_preamble_data_payload_fragment_cha_i;
  wire       [11:0]   rfClockArea_stf_preamble_adder_preamble_data_payload_fragment_cha_q;
  wire                streamFifo_11_io_push_ready;
  wire                streamFifo_11_io_pop_valid;
  wire                streamFifo_11_io_pop_payload_last;
  wire       [11:0]   streamFifo_11_io_pop_payload_fragment_cha_i;
  wire       [11:0]   streamFifo_11_io_pop_payload_fragment_cha_q;
  wire       [10:0]   streamFifo_11_io_occupancy;
  wire       [10:0]   streamFifo_11_io_availability;
  wire                rfClockArea_phy_tx_front_raw_data_ready;
  wire                rfClockArea_phy_tx_front_result_data_valid;
  wire       [11:0]   rfClockArea_phy_tx_front_result_data_payload_cha_i;
  wire       [11:0]   rfClockArea_phy_tx_front_result_data_payload_cha_q;
  wire                rfClockArea_stf_preamble_adder_preamble_data_fifo_io_push_ready;
  wire                rfClockArea_stf_preamble_adder_preamble_data_fifo_io_pop_valid;
  wire                rfClockArea_stf_preamble_adder_preamble_data_fifo_io_pop_payload_last;
  wire       [11:0]   rfClockArea_stf_preamble_adder_preamble_data_fifo_io_pop_payload_fragment_cha_i;
  wire       [11:0]   rfClockArea_stf_preamble_adder_preamble_data_fifo_io_pop_payload_fragment_cha_q;
  wire       [3:0]    rfClockArea_stf_preamble_adder_preamble_data_fifo_io_occupancy;
  wire       [3:0]    rfClockArea_stf_preamble_adder_preamble_data_fifo_io_availability;
  wire       [6:0]    clkCrossing_6_dataOut;
  wire       [6:0]    clkCrossing_7_dataOut;
  wire                clkCrossing_8_dataOut;
  wire       [3:0]    clkCrossing_9_dataOut;
  wire       [3:0]    clkCrossing_10_dataOut;
  wire       [1:0]    clkCrossing_11_dataOut;
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
  wire                rfClockArea_pipeline_halt;
  wire                _zz_data_flow_unit_data_valid;
  wire                _zz_data_flow_unit_data_payload_last;
  wire       [6:0]    pkg_gen_bridge_slices_limit;
  wire       [6:0]    pkg_gen_bridge_slices_cnt;
  reg        [6:0]    pkg_gen_bridge_slices_limit_driver;
  wire                data_div_bridge_enable;
  wire       [3:0]    data_div_bridge_cnt_step;
  wire       [3:0]    data_div_bridge_cnt_limit;
  reg                 data_div_bridge_enable_driver;
  reg        [3:0]    data_div_bridge_cnt_step_driver;
  reg        [3:0]    data_div_bridge_cnt_limit_driver;
  wire       [1:0]    mod_rtl_bridge_select;
  reg        [1:0]    mod_rtl_bridge_select_driver;

  AD9361Interface rf_interface (
    .dac_data_valid              (rfClockArea_phy_tx_front_result_data_valid          ), //i
    .dac_data_ready              (rf_interface_dac_data_ready                         ), //o
    .dac_data_payload_0_cha_i    (rfClockArea_phy_tx_front_result_data_payload_cha_i  ), //i
    .dac_data_payload_0_cha_q    (rfClockArea_phy_tx_front_result_data_payload_cha_q  ), //i
    .dac_data_payload_1_cha_i    (12'h0                                               ), //i
    .dac_data_payload_1_cha_q    (12'h0                                               ), //i
    .dac_t1_mod                  (1'b0                                                ), //i
    .adc_data_valid              (rf_interface_adc_data_valid                         ), //o
    .adc_data_payload_0_cha_i    (rf_interface_adc_data_payload_0_cha_i               ), //o
    .adc_data_payload_0_cha_q    (rf_interface_adc_data_payload_0_cha_q               ), //o
    .adc_data_payload_1_cha_i    (rf_interface_adc_data_payload_1_cha_i               ), //o
    .adc_data_payload_1_cha_q    (rf_interface_adc_data_payload_1_cha_q               ), //o
    .adc_r1_mod                  (1'b0                                                ), //i
    .adc_error                   (rf_interface_adc_error                              ), //o
    .rx_if_frame_p               (rf_if_rx_if_frame_p                                 ), //i
    .rx_if_frame_n               (rf_if_rx_if_frame_n                                 ), //i
    .rx_if_data_p                (rf_if_rx_if_data_p                                  ), //i
    .rx_if_data_n                (rf_if_rx_if_data_n                                  ), //i
    .rx_data_clk_p               (rf_if_rx_data_clk_p                                 ), //i
    .rx_data_clk_n               (rf_if_rx_data_clk_n                                 ), //i
    .tx_if_frame_p               (rf_interface_tx_if_frame_p                          ), //o
    .tx_if_frame_n               (rf_interface_tx_if_frame_n                          ), //o
    .tx_fb_clk_p                 (rf_interface_tx_fb_clk_p                            ), //o
    .tx_fb_clk_n                 (rf_interface_tx_fb_clk_n                            ), //o
    .tx_if_data_p                (rf_interface_tx_if_data_p                           ), //o
    .tx_if_data_n                (rf_interface_tx_if_data_n                           ), //o
    .data_clk                    (rf_interface_data_clk                               ), //o
    .O                           (rf_interface_O                                      ), //o
    .resetn                      (resetn                                              )  //i
  );
  StreamPkgGen rfClockArea_stream_package_gen (
    .slices_limit                 (clkCrossing_6_dataOut                                       ), //i
    .slices_cnt                   (rfClockArea_stream_package_gen_slices_cnt                   ), //o
    .raw_data_tvalid              (raw_data_tvalid                                             ), //i
    .raw_data_tready              (rfClockArea_stream_package_gen_raw_data_tready              ), //o
    .raw_data_tdata               (raw_data_tdata                                              ), //i
    .raw_data_tstrb               (raw_data_tstrb                                              ), //i
    .raw_data_tlast               (raw_data_tlast                                              ), //i
    .pkg_data_valid               (rfClockArea_stream_package_gen_pkg_data_valid               ), //o
    .pkg_data_ready               (rfClockArea_stream_package_gen_pkg_data_fifo_io_push_ready  ), //i
    .pkg_data_payload_last        (rfClockArea_stream_package_gen_pkg_data_payload_last        ), //o
    .pkg_data_payload_fragment    (rfClockArea_stream_package_gen_pkg_data_payload_fragment    ), //o
    .O                            (rf_interface_O                                              ), //i
    .resetn                       (resetn                                                      )  //i
  );
  PhyTxPadder rfClockArea_phy_tx_padder (
    .raw_data_valid                  (rfClockArea_stream_package_gen_pkg_data_fifo_io_pop_valid             ), //i
    .raw_data_ready                  (rfClockArea_phy_tx_padder_raw_data_ready                              ), //o
    .raw_data_payload_last           (rfClockArea_stream_package_gen_pkg_data_fifo_io_pop_payload_last      ), //i
    .raw_data_payload_fragment       (rfClockArea_stream_package_gen_pkg_data_fifo_io_pop_payload_fragment  ), //i
    .result_data_valid               (rfClockArea_phy_tx_padder_result_data_valid                           ), //o
    .result_data_ready               (rfClockArea_phy_tx_padder_result_data_fifo_io_push_ready              ), //i
    .result_data_payload_last        (rfClockArea_phy_tx_padder_result_data_payload_last                    ), //o
    .result_data_payload_fragment    (rfClockArea_phy_tx_padder_result_data_payload_fragment                ), //o
    .O                               (rf_interface_O                                                        ), //i
    .resetn                          (resetn                                                                )  //i
  );
  StreamFifo_1 rfClockArea_stream_package_gen_pkg_data_fifo (
    .io_push_valid               (rfClockArea_stream_package_gen_pkg_data_valid                         ), //i
    .io_push_ready               (rfClockArea_stream_package_gen_pkg_data_fifo_io_push_ready            ), //o
    .io_push_payload_last        (rfClockArea_stream_package_gen_pkg_data_payload_last                  ), //i
    .io_push_payload_fragment    (rfClockArea_stream_package_gen_pkg_data_payload_fragment              ), //i
    .io_pop_valid                (rfClockArea_stream_package_gen_pkg_data_fifo_io_pop_valid             ), //o
    .io_pop_ready                (rfClockArea_phy_tx_padder_raw_data_ready                              ), //i
    .io_pop_payload_last         (rfClockArea_stream_package_gen_pkg_data_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (rfClockArea_stream_package_gen_pkg_data_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                                                  ), //i
    .io_occupancy                (rfClockArea_stream_package_gen_pkg_data_fifo_io_occupancy             ), //o
    .io_availability             (rfClockArea_stream_package_gen_pkg_data_fifo_io_availability          ), //o
    .O                           (rf_interface_O                                                        ), //i
    .resetn                      (resetn                                                                )  //i
  );
  PhyTxCrc rfClockArea_phy_tx_crc (
    .raw_data_valid                  (rfClockArea_phy_tx_padder_result_data_fifo_io_pop_valid             ), //i
    .raw_data_ready                  (rfClockArea_phy_tx_crc_raw_data_ready                               ), //o
    .raw_data_payload_last           (rfClockArea_phy_tx_padder_result_data_fifo_io_pop_payload_last      ), //i
    .raw_data_payload_fragment       (rfClockArea_phy_tx_padder_result_data_fifo_io_pop_payload_fragment  ), //i
    .result_data_valid               (rfClockArea_phy_tx_crc_result_data_valid                            ), //o
    .result_data_ready               (rfClockArea_phy_tx_crc_result_data_fifo_io_push_ready               ), //i
    .result_data_payload_last        (rfClockArea_phy_tx_crc_result_data_payload_last                     ), //o
    .result_data_payload_fragment    (rfClockArea_phy_tx_crc_result_data_payload_fragment                 ), //o
    .O                               (rf_interface_O                                                      ), //i
    .resetn                          (resetn                                                              )  //i
  );
  StreamFifo_1 rfClockArea_phy_tx_padder_result_data_fifo (
    .io_push_valid               (rfClockArea_phy_tx_padder_result_data_valid                         ), //i
    .io_push_ready               (rfClockArea_phy_tx_padder_result_data_fifo_io_push_ready            ), //o
    .io_push_payload_last        (rfClockArea_phy_tx_padder_result_data_payload_last                  ), //i
    .io_push_payload_fragment    (rfClockArea_phy_tx_padder_result_data_payload_fragment              ), //i
    .io_pop_valid                (rfClockArea_phy_tx_padder_result_data_fifo_io_pop_valid             ), //o
    .io_pop_ready                (rfClockArea_phy_tx_crc_raw_data_ready                               ), //i
    .io_pop_payload_last         (rfClockArea_phy_tx_padder_result_data_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (rfClockArea_phy_tx_padder_result_data_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                                                ), //i
    .io_occupancy                (rfClockArea_phy_tx_padder_result_data_fifo_io_occupancy             ), //o
    .io_availability             (rfClockArea_phy_tx_padder_result_data_fifo_io_availability          ), //o
    .O                           (rf_interface_O                                                      ), //i
    .resetn                      (resetn                                                              )  //i
  );
  PhyTxEncoder rfClockArea_phy_tx_encoder (
    .raw_data_valid                  (rfClockArea_phy_tx_crc_result_data_fifo_io_pop_valid             ), //i
    .raw_data_ready                  (rfClockArea_phy_tx_encoder_raw_data_ready                        ), //o
    .raw_data_payload_last           (rfClockArea_phy_tx_crc_result_data_fifo_io_pop_payload_last      ), //i
    .raw_data_payload_fragment       (rfClockArea_phy_tx_crc_result_data_fifo_io_pop_payload_fragment  ), //i
    .result_data_valid               (rfClockArea_phy_tx_encoder_result_data_valid                     ), //o
    .result_data_ready               (rfClockArea_phy_tx_encoder_result_data_fifo_io_push_ready        ), //i
    .result_data_payload_last        (rfClockArea_phy_tx_encoder_result_data_payload_last              ), //o
    .result_data_payload_fragment    (rfClockArea_phy_tx_encoder_result_data_payload_fragment          ), //o
    .O                               (rf_interface_O                                                   ), //i
    .resetn                          (resetn                                                           )  //i
  );
  StreamFifo_1 rfClockArea_phy_tx_crc_result_data_fifo (
    .io_push_valid               (rfClockArea_phy_tx_crc_result_data_valid                         ), //i
    .io_push_ready               (rfClockArea_phy_tx_crc_result_data_fifo_io_push_ready            ), //o
    .io_push_payload_last        (rfClockArea_phy_tx_crc_result_data_payload_last                  ), //i
    .io_push_payload_fragment    (rfClockArea_phy_tx_crc_result_data_payload_fragment              ), //i
    .io_pop_valid                (rfClockArea_phy_tx_crc_result_data_fifo_io_pop_valid             ), //o
    .io_pop_ready                (rfClockArea_phy_tx_encoder_raw_data_ready                        ), //i
    .io_pop_payload_last         (rfClockArea_phy_tx_crc_result_data_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (rfClockArea_phy_tx_crc_result_data_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                                             ), //i
    .io_occupancy                (rfClockArea_phy_tx_crc_result_data_fifo_io_occupancy             ), //o
    .io_availability             (rfClockArea_phy_tx_crc_result_data_fifo_io_availability          ), //o
    .O                           (rf_interface_O                                                   ), //i
    .resetn                      (resetn                                                           )  //i
  );
  Puncturing rfClockArea_phy_tx_puncher (
    .raw_data_valid                   (rfClockArea_phy_tx_encoder_result_data_fifo_io_pop_valid             ), //i
    .raw_data_ready                   (rfClockArea_phy_tx_puncher_raw_data_ready                            ), //o
    .raw_data_payload_last            (rfClockArea_phy_tx_encoder_result_data_fifo_io_pop_payload_last      ), //i
    .raw_data_payload_fragment        (rfClockArea_phy_tx_encoder_result_data_fifo_io_pop_payload_fragment  ), //i
    .punched_data_valid               (rfClockArea_phy_tx_puncher_punched_data_valid                        ), //o
    .punched_data_payload_last        (rfClockArea_phy_tx_puncher_punched_data_payload_last                 ), //o
    .punched_data_payload_fragment    (rfClockArea_phy_tx_puncher_punched_data_payload_fragment             ), //o
    .O                                (rf_interface_O                                                       ), //i
    .resetn                           (resetn                                                               )  //i
  );
  StreamFifo_4 rfClockArea_phy_tx_encoder_result_data_fifo (
    .io_push_valid               (rfClockArea_phy_tx_encoder_result_data_valid                         ), //i
    .io_push_ready               (rfClockArea_phy_tx_encoder_result_data_fifo_io_push_ready            ), //o
    .io_push_payload_last        (rfClockArea_phy_tx_encoder_result_data_payload_last                  ), //i
    .io_push_payload_fragment    (rfClockArea_phy_tx_encoder_result_data_payload_fragment              ), //i
    .io_pop_valid                (rfClockArea_phy_tx_encoder_result_data_fifo_io_pop_valid             ), //o
    .io_pop_ready                (rfClockArea_phy_tx_puncher_raw_data_ready                            ), //i
    .io_pop_payload_last         (rfClockArea_phy_tx_encoder_result_data_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (rfClockArea_phy_tx_encoder_result_data_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                                                 ), //i
    .io_occupancy                (rfClockArea_phy_tx_encoder_result_data_fifo_io_occupancy             ), //o
    .io_availability             (rfClockArea_phy_tx_encoder_result_data_fifo_io_availability          ), //o
    .O                           (rf_interface_O                                                       ), //i
    .resetn                      (resetn                                                               )  //i
  );
  PhyHeaderExtender rfClockArea_phy_header_extender (
    .mod_method                      (8'h55                                                           ), //i
    .raw_data_valid                  (streamFifo_10_io_pop_valid                                      ), //i
    .raw_data_ready                  (rfClockArea_phy_header_extender_raw_data_ready                  ), //o
    .raw_data_payload_last           (streamFifo_10_io_pop_payload_last                               ), //i
    .raw_data_payload_fragment       (streamFifo_10_io_pop_payload_fragment                           ), //i
    .result_data_valid               (rfClockArea_phy_header_extender_result_data_valid               ), //o
    .result_data_ready               (rfClockArea_phy_header_extender_result_data_fifo_io_push_ready  ), //i
    .result_data_payload_last        (rfClockArea_phy_header_extender_result_data_payload_last        ), //o
    .result_data_payload_fragment    (rfClockArea_phy_header_extender_result_data_payload_fragment    ), //o
    .O                               (rf_interface_O                                                  ), //i
    .resetn                          (resetn                                                          )  //i
  );
  StreamFifo_4 streamFifo_10 (
    .io_push_valid               (rfClockArea_phy_tx_puncher_punched_data_valid             ), //i
    .io_push_ready               (streamFifo_10_io_push_ready                               ), //o
    .io_push_payload_last        (rfClockArea_phy_tx_puncher_punched_data_payload_last      ), //i
    .io_push_payload_fragment    (rfClockArea_phy_tx_puncher_punched_data_payload_fragment  ), //i
    .io_pop_valid                (streamFifo_10_io_pop_valid                                ), //o
    .io_pop_ready                (rfClockArea_phy_header_extender_raw_data_ready            ), //i
    .io_pop_payload_last         (streamFifo_10_io_pop_payload_last                         ), //o
    .io_pop_payload_fragment     (streamFifo_10_io_pop_payload_fragment                     ), //o
    .io_flush                    (1'b0                                                      ), //i
    .io_occupancy                (streamFifo_10_io_occupancy                                ), //o
    .io_availability             (streamFifo_10_io_availability                             ), //o
    .O                           (rf_interface_O                                            ), //i
    .resetn                      (resetn                                                    )  //i
  );
  PhyTxScrambler rfClockArea_phy_tx_scrambler (
    .raw_data_valid                  (rfClockArea_phy_header_extender_result_data_fifo_io_pop_valid             ), //i
    .raw_data_ready                  (rfClockArea_phy_tx_scrambler_raw_data_ready                               ), //o
    .raw_data_payload_last           (rfClockArea_phy_header_extender_result_data_fifo_io_pop_payload_last      ), //i
    .raw_data_payload_fragment       (rfClockArea_phy_header_extender_result_data_fifo_io_pop_payload_fragment  ), //i
    .result_data_valid               (rfClockArea_phy_tx_scrambler_result_data_valid                            ), //o
    .result_data_ready               (rfClockArea_phy_tx_scrambler_result_data_fifo_io_push_ready               ), //i
    .result_data_payload_last        (rfClockArea_phy_tx_scrambler_result_data_payload_last                     ), //o
    .result_data_payload_fragment    (rfClockArea_phy_tx_scrambler_result_data_payload_fragment                 ), //o
    .O                               (rf_interface_O                                                            ), //i
    .resetn                          (resetn                                                                    )  //i
  );
  StreamFifo_4 rfClockArea_phy_header_extender_result_data_fifo (
    .io_push_valid               (rfClockArea_phy_header_extender_result_data_valid                         ), //i
    .io_push_ready               (rfClockArea_phy_header_extender_result_data_fifo_io_push_ready            ), //o
    .io_push_payload_last        (rfClockArea_phy_header_extender_result_data_payload_last                  ), //i
    .io_push_payload_fragment    (rfClockArea_phy_header_extender_result_data_payload_fragment              ), //i
    .io_pop_valid                (rfClockArea_phy_header_extender_result_data_fifo_io_pop_valid             ), //o
    .io_pop_ready                (rfClockArea_phy_tx_scrambler_raw_data_ready                               ), //i
    .io_pop_payload_last         (rfClockArea_phy_header_extender_result_data_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (rfClockArea_phy_header_extender_result_data_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                                                      ), //i
    .io_occupancy                (rfClockArea_phy_header_extender_result_data_fifo_io_occupancy             ), //o
    .io_availability             (rfClockArea_phy_header_extender_result_data_fifo_io_availability          ), //o
    .O                           (rf_interface_O                                                            ), //i
    .resetn                      (resetn                                                                    )  //i
  );
  dataDivDynamic rfClockArea_mod_data_div (
    .base_data_valid               (rfClockArea_phy_tx_scrambler_result_data_fifo_io_pop_valid             ), //i
    .base_data_ready               (rfClockArea_mod_data_div_base_data_ready                               ), //o
    .base_data_payload_last        (rfClockArea_phy_tx_scrambler_result_data_fifo_io_pop_payload_last      ), //i
    .base_data_payload_fragment    (rfClockArea_phy_tx_scrambler_result_data_fifo_io_pop_payload_fragment  ), //i
    .enable                        (clkCrossing_8_dataOut                                                  ), //i
    .cnt_step                      (clkCrossing_9_dataOut                                                  ), //i
    .cnt_limit                     (clkCrossing_10_dataOut                                                 ), //i
    .unit_data_valid               (rfClockArea_mod_data_div_unit_data_valid                               ), //o
    .unit_data_payload_last        (rfClockArea_mod_data_div_unit_data_payload_last                        ), //o
    .unit_data_payload_fragment    (rfClockArea_mod_data_div_unit_data_payload_fragment                    ), //o
    .O                             (rf_interface_O                                                         ), //i
    .resetn                        (resetn                                                                 )  //i
  );
  StreamFifo_7 rfClockArea_phy_tx_scrambler_result_data_fifo (
    .io_push_valid               (rfClockArea_phy_tx_scrambler_result_data_valid                         ), //i
    .io_push_ready               (rfClockArea_phy_tx_scrambler_result_data_fifo_io_push_ready            ), //o
    .io_push_payload_last        (rfClockArea_phy_tx_scrambler_result_data_payload_last                  ), //i
    .io_push_payload_fragment    (rfClockArea_phy_tx_scrambler_result_data_payload_fragment              ), //i
    .io_pop_valid                (rfClockArea_phy_tx_scrambler_result_data_fifo_io_pop_valid             ), //o
    .io_pop_ready                (rfClockArea_mod_data_div_base_data_ready                               ), //i
    .io_pop_payload_last         (rfClockArea_phy_tx_scrambler_result_data_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (rfClockArea_phy_tx_scrambler_result_data_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                                                   ), //i
    .io_occupancy                (rfClockArea_phy_tx_scrambler_result_data_fifo_io_occupancy             ), //o
    .io_availability             (rfClockArea_phy_tx_scrambler_result_data_fifo_io_availability          ), //o
    .O                           (rf_interface_O                                                         ), //i
    .resetn                      (resetn                                                                 )  //i
  );
  ModulatorRTL rfClockArea_mod_rtl (
    .data_flow_unit_data_valid                  (_zz_data_flow_unit_data_valid                                ), //i
    .data_flow_unit_data_payload_last           (_zz_data_flow_unit_data_payload_last                         ), //i
    .data_flow_unit_data_payload_fragment       (rfClockArea_mod_rtl_data_flow_unit_data_payload_fragment     ), //i
    .data_flow_mod_iq_valid                     (rfClockArea_mod_rtl_data_flow_mod_iq_valid                   ), //o
    .data_flow_mod_iq_payload_last              (rfClockArea_mod_rtl_data_flow_mod_iq_payload_last            ), //o
    .data_flow_mod_iq_payload_fragment_cha_i    (rfClockArea_mod_rtl_data_flow_mod_iq_payload_fragment_cha_i  ), //o
    .data_flow_mod_iq_payload_fragment_cha_q    (rfClockArea_mod_rtl_data_flow_mod_iq_payload_fragment_cha_q  ), //o
    .select_1                                   (clkCrossing_11_dataOut                                       ), //i
    .O                                          (rf_interface_O                                               ), //i
    .resetn                                     (resetn                                                       )  //i
  );
  PreambleExtender rfClockArea_stf_preamble_adder (
    .raw_data_valid                          (streamFifo_11_io_pop_valid                                           ), //i
    .raw_data_ready                          (rfClockArea_stf_preamble_adder_raw_data_ready                        ), //o
    .raw_data_payload_last                   (streamFifo_11_io_pop_payload_last                                    ), //i
    .raw_data_payload_fragment_cha_i         (streamFifo_11_io_pop_payload_fragment_cha_i                          ), //i
    .raw_data_payload_fragment_cha_q         (streamFifo_11_io_pop_payload_fragment_cha_q                          ), //i
    .preamble_data_valid                     (rfClockArea_stf_preamble_adder_preamble_data_valid                   ), //o
    .preamble_data_ready                     (rfClockArea_stf_preamble_adder_preamble_data_fifo_io_push_ready      ), //i
    .preamble_data_payload_last              (rfClockArea_stf_preamble_adder_preamble_data_payload_last            ), //o
    .preamble_data_payload_fragment_cha_i    (rfClockArea_stf_preamble_adder_preamble_data_payload_fragment_cha_i  ), //o
    .preamble_data_payload_fragment_cha_q    (rfClockArea_stf_preamble_adder_preamble_data_payload_fragment_cha_q  ), //o
    .O                                       (rf_interface_O                                                       ), //i
    .resetn                                  (resetn                                                               )  //i
  );
  StreamFifo_8 streamFifo_11 (
    .io_push_valid                     (rfClockArea_mod_rtl_data_flow_mod_iq_valid                   ), //i
    .io_push_ready                     (streamFifo_11_io_push_ready                                  ), //o
    .io_push_payload_last              (rfClockArea_mod_rtl_data_flow_mod_iq_payload_last            ), //i
    .io_push_payload_fragment_cha_i    (rfClockArea_mod_rtl_data_flow_mod_iq_payload_fragment_cha_i  ), //i
    .io_push_payload_fragment_cha_q    (rfClockArea_mod_rtl_data_flow_mod_iq_payload_fragment_cha_q  ), //i
    .io_pop_valid                      (streamFifo_11_io_pop_valid                                   ), //o
    .io_pop_ready                      (rfClockArea_stf_preamble_adder_raw_data_ready                ), //i
    .io_pop_payload_last               (streamFifo_11_io_pop_payload_last                            ), //o
    .io_pop_payload_fragment_cha_i     (streamFifo_11_io_pop_payload_fragment_cha_i                  ), //o
    .io_pop_payload_fragment_cha_q     (streamFifo_11_io_pop_payload_fragment_cha_q                  ), //o
    .io_flush                          (1'b0                                                         ), //i
    .io_occupancy                      (streamFifo_11_io_occupancy                                   ), //o
    .io_availability                   (streamFifo_11_io_availability                                ), //o
    .O                                 (rf_interface_O                                               ), //i
    .resetn                            (resetn                                                       )  //i
  );
  PhyTxICFront rfClockArea_phy_tx_front (
    .raw_data_valid                     (rfClockArea_stf_preamble_adder_preamble_data_fifo_io_pop_valid                   ), //i
    .raw_data_ready                     (rfClockArea_phy_tx_front_raw_data_ready                                          ), //o
    .raw_data_payload_last              (rfClockArea_stf_preamble_adder_preamble_data_fifo_io_pop_payload_last            ), //i
    .raw_data_payload_fragment_cha_i    (rfClockArea_stf_preamble_adder_preamble_data_fifo_io_pop_payload_fragment_cha_i  ), //i
    .raw_data_payload_fragment_cha_q    (rfClockArea_stf_preamble_adder_preamble_data_fifo_io_pop_payload_fragment_cha_q  ), //i
    .result_data_valid                  (rfClockArea_phy_tx_front_result_data_valid                                       ), //o
    .result_data_ready                  (rf_interface_dac_data_ready                                                      ), //i
    .result_data_payload_cha_i          (rfClockArea_phy_tx_front_result_data_payload_cha_i                               ), //o
    .result_data_payload_cha_q          (rfClockArea_phy_tx_front_result_data_payload_cha_q                               )  //o
  );
  StreamFifo_9 rfClockArea_stf_preamble_adder_preamble_data_fifo (
    .io_push_valid                     (rfClockArea_stf_preamble_adder_preamble_data_valid                               ), //i
    .io_push_ready                     (rfClockArea_stf_preamble_adder_preamble_data_fifo_io_push_ready                  ), //o
    .io_push_payload_last              (rfClockArea_stf_preamble_adder_preamble_data_payload_last                        ), //i
    .io_push_payload_fragment_cha_i    (rfClockArea_stf_preamble_adder_preamble_data_payload_fragment_cha_i              ), //i
    .io_push_payload_fragment_cha_q    (rfClockArea_stf_preamble_adder_preamble_data_payload_fragment_cha_q              ), //i
    .io_pop_valid                      (rfClockArea_stf_preamble_adder_preamble_data_fifo_io_pop_valid                   ), //o
    .io_pop_ready                      (rfClockArea_phy_tx_front_raw_data_ready                                          ), //i
    .io_pop_payload_last               (rfClockArea_stf_preamble_adder_preamble_data_fifo_io_pop_payload_last            ), //o
    .io_pop_payload_fragment_cha_i     (rfClockArea_stf_preamble_adder_preamble_data_fifo_io_pop_payload_fragment_cha_i  ), //o
    .io_pop_payload_fragment_cha_q     (rfClockArea_stf_preamble_adder_preamble_data_fifo_io_pop_payload_fragment_cha_q  ), //o
    .io_flush                          (1'b0                                                                             ), //i
    .io_occupancy                      (rfClockArea_stf_preamble_adder_preamble_data_fifo_io_occupancy                   ), //o
    .io_availability                   (rfClockArea_stf_preamble_adder_preamble_data_fifo_io_availability                ), //o
    .O                                 (rf_interface_O                                                                   ), //i
    .resetn                            (resetn                                                                           )  //i
  );
  ClkCrossing clkCrossing_6 (
    .dataIn     (pkg_gen_bridge_slices_limit  ), //i
    .dataOut    (clkCrossing_6_dataOut        ), //o
    .clk        (clk                          ), //i
    .resetn     (resetn                       ), //i
    .O          (rf_interface_O               )  //i
  );
  ClkCrossing_1 clkCrossing_7 (
    .dataIn     (rfClockArea_stream_package_gen_slices_cnt  ), //i
    .dataOut    (clkCrossing_7_dataOut                      ), //o
    .O          (rf_interface_O                             ), //i
    .resetn     (resetn                                     ), //i
    .clk        (clk                                        )  //i
  );
  ClkCrossing_2 clkCrossing_8 (
    .dataIn     (data_div_bridge_enable  ), //i
    .dataOut    (clkCrossing_8_dataOut   ), //o
    .clk        (clk                     ), //i
    .resetn     (resetn                  ), //i
    .O          (rf_interface_O          )  //i
  );
  ClkCrossing_3 clkCrossing_9 (
    .dataIn     (data_div_bridge_cnt_step  ), //i
    .dataOut    (clkCrossing_9_dataOut     ), //o
    .clk        (clk                       ), //i
    .resetn     (resetn                    ), //i
    .O          (rf_interface_O            )  //i
  );
  ClkCrossing_3 clkCrossing_10 (
    .dataIn     (data_div_bridge_cnt_limit  ), //i
    .dataOut    (clkCrossing_10_dataOut     ), //o
    .clk        (clk                        ), //i
    .resetn     (resetn                     ), //i
    .O          (rf_interface_O             )  //i
  );
  ClkCrossing_5 clkCrossing_11 (
    .dataIn     (mod_rtl_bridge_select   ), //i
    .dataOut    (clkCrossing_11_dataOut  ), //o
    .clk        (clk                     ), //i
    .resetn     (resetn                  ), //i
    .O          (rf_interface_O          )  //i
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
        readRsp_data[6 : 0] = pkg_gen_bridge_slices_limit_driver;
      end
      8'h04 : begin
        readRsp_data[6 : 0] = pkg_gen_bridge_slices_cnt;
      end
      8'h10 : begin
        readRsp_data[0 : 0] = data_div_bridge_enable_driver;
      end
      8'h14 : begin
        readRsp_data[3 : 0] = data_div_bridge_cnt_step_driver;
      end
      8'h18 : begin
        readRsp_data[3 : 0] = data_div_bridge_cnt_limit_driver;
      end
      8'h20 : begin
        readRsp_data[1 : 0] = mod_rtl_bridge_select_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign rfClockArea_pipeline_halt = 1'b0;
  assign raw_data_tready = rfClockArea_stream_package_gen_raw_data_tready;
  assign _zz_data_flow_unit_data_valid = rfClockArea_mod_data_div_unit_data_valid;
  assign _zz_data_flow_unit_data_payload_last = rfClockArea_mod_data_div_unit_data_payload_last;
  assign rfClockArea_mod_rtl_data_flow_unit_data_payload_fragment = rfClockArea_mod_data_div_unit_data_payload_fragment[7:0];
  assign rf_if_tx_if_frame_p = rf_interface_tx_if_frame_p;
  assign rf_if_tx_if_frame_n = rf_interface_tx_if_frame_n;
  assign rf_if_tx_fb_clk_p = rf_interface_tx_fb_clk_p;
  assign rf_if_tx_fb_clk_n = rf_interface_tx_fb_clk_n;
  assign rf_if_tx_if_data_p = rf_interface_tx_if_data_p;
  assign rf_if_tx_if_data_n = rf_interface_tx_if_data_n;
  assign pkg_gen_bridge_slices_limit = pkg_gen_bridge_slices_limit_driver;
  assign pkg_gen_bridge_slices_cnt = clkCrossing_7_dataOut;
  assign data_div_bridge_enable = data_div_bridge_enable_driver;
  assign data_div_bridge_cnt_step = data_div_bridge_cnt_step_driver;
  assign data_div_bridge_cnt_limit = data_div_bridge_cnt_limit_driver;
  assign mod_rtl_bridge_select = mod_rtl_bridge_select_driver;
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      data_div_bridge_enable_driver <= 1'b0;
      data_div_bridge_cnt_step_driver <= 4'b0000;
      data_div_bridge_cnt_limit_driver <= 4'b0000;
      mod_rtl_bridge_select_driver <= 2'b00;
    end else begin
      if(_zz_writeJoinEvent_translated_ready) begin
        _zz_axil4Ctrl_bvalid_2 <= (writeJoinEvent_translated_valid && _zz_axil4Ctrl_bvalid);
      end
      if(axil4Ctrl_arready) begin
        axil4Ctrl_ar_rValid <= axil4Ctrl_arvalid;
      end
      case(axil4Ctrl_awaddr)
        8'h10 : begin
          if(writeOccur) begin
            data_div_bridge_enable_driver <= axil4Ctrl_wdata[0];
          end
        end
        8'h14 : begin
          if(writeOccur) begin
            data_div_bridge_cnt_step_driver <= axil4Ctrl_wdata[3 : 0];
          end
        end
        8'h18 : begin
          if(writeOccur) begin
            data_div_bridge_cnt_limit_driver <= axil4Ctrl_wdata[3 : 0];
          end
        end
        8'h20 : begin
          if(writeOccur) begin
            mod_rtl_bridge_select_driver <= axil4Ctrl_wdata[1 : 0];
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
      8'h0 : begin
        if(writeOccur) begin
          pkg_gen_bridge_slices_limit_driver <= axil4Ctrl_wdata[6 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module ClkCrossing_5 (
  input      [1:0]    dataIn,
  output     [1:0]    dataOut,
  input               clk,
  input               resetn,
  input               O
);
  reg        [1:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [1:0]    area_clkO_buf0;
  reg        [1:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge O) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

//ClkCrossing_3 replaced by ClkCrossing_3

module ClkCrossing_3 (
  input      [3:0]    dataIn,
  output     [3:0]    dataOut,
  input               clk,
  input               resetn,
  input               O
);
  reg        [3:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [3:0]    area_clkO_buf0;
  reg        [3:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge O) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module ClkCrossing_2 (
  input               dataIn,
  output              dataOut,
  input               clk,
  input               resetn,
  input               O
);
  reg                 area_clkI_reg;
  (* async_reg = "true" *) reg                 area_clkO_buf0;
  reg                 area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge O) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module ClkCrossing_1 (
  input      [6:0]    dataIn,
  output     [6:0]    dataOut,
  input               O,
  input               resetn,
  input               clk
);
  reg        [6:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [6:0]    area_clkO_buf0;
  reg        [6:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge O) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module ClkCrossing (
  input      [6:0]    dataIn,
  output     [6:0]    dataOut,
  input               clk,
  input               resetn,
  input               O
);
  reg        [6:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [6:0]    area_clkO_buf0;
  reg        [6:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge O) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module StreamFifo_9 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [11:0]   io_push_payload_fragment_cha_i,
  input      [11:0]   io_push_payload_fragment_cha_q,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [11:0]   io_pop_payload_fragment_cha_i,
  output     [11:0]   io_pop_payload_fragment_cha_q,
  input               io_flush,
  output     [3:0]    io_occupancy,
  output     [3:0]    io_availability,
  input               O,
  input               resetn
);
  reg        [24:0]   _zz_logic_ram_port0;
  wire       [2:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [2:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [24:0]   _zz_logic_ram_port_1;
  wire       [2:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [2:0]    logic_pushPtr_valueNext;
  reg        [2:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [2:0]    logic_popPtr_valueNext;
  reg        [2:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [24:0]   _zz_io_pop_payload_last;
  wire       [23:0]   _zz_io_pop_payload_fragment_cha_i;
  wire                when_Stream_l933;
  wire       [2:0]    logic_ptrDif;
  reg [24:0] logic_ram [0:7];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {2'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {2'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {{io_push_payload_fragment_cha_q,io_push_payload_fragment_cha_i},io_push_payload_last};
  always @(posedge O) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge O) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 3'b111);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 3'b000;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 3'b111);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 3'b000;
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
  assign _zz_io_pop_payload_fragment_cha_i = _zz_io_pop_payload_last[24 : 1];
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment_cha_i = _zz_io_pop_payload_fragment_cha_i[11 : 0];
  assign io_pop_payload_fragment_cha_q = _zz_io_pop_payload_fragment_cha_i[23 : 12];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge O) begin
    if(!resetn) begin
      logic_pushPtr_value <= 3'b000;
      logic_popPtr_value <= 3'b000;
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

module PhyTxICFront (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [11:0]   raw_data_payload_fragment_cha_i,
  input      [11:0]   raw_data_payload_fragment_cha_q,
  output              result_data_valid,
  input               result_data_ready,
  output     [11:0]   result_data_payload_cha_i,
  output     [11:0]   result_data_payload_cha_q
);

  assign raw_data_ready = result_data_ready;
  assign result_data_payload_cha_i = (raw_data_valid ? raw_data_payload_fragment_cha_i : 12'h0);
  assign result_data_payload_cha_q = (raw_data_valid ? raw_data_payload_fragment_cha_q : 12'h0);
  assign result_data_valid = raw_data_valid;

endmodule

module StreamFifo_8 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [11:0]   io_push_payload_fragment_cha_i,
  input      [11:0]   io_push_payload_fragment_cha_q,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [11:0]   io_pop_payload_fragment_cha_i,
  output     [11:0]   io_pop_payload_fragment_cha_q,
  input               io_flush,
  output reg [10:0]   io_occupancy,
  output reg [10:0]   io_availability,
  input               O,
  input               resetn
);
  reg        [24:0]   _zz_logic_ram_port0;
  wire       [10:0]   _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [10:0]   _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [24:0]   _zz_logic_ram_port_1;
  wire       [10:0]   _zz_io_occupancy;
  wire       [10:0]   _zz_io_availability;
  wire       [10:0]   _zz_io_availability_1;
  wire       [10:0]   _zz_io_availability_2;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [10:0]   logic_pushPtr_valueNext;
  reg        [10:0]   logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [10:0]   logic_popPtr_valueNext;
  reg        [10:0]   logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [24:0]   _zz_io_pop_payload_last;
  wire       [23:0]   _zz_io_pop_payload_fragment_cha_i;
  wire                when_Stream_l933;
  wire       [10:0]   logic_ptrDif;
  reg [24:0] logic_ram [0:1999];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {10'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {10'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (11'h7d0 + logic_ptrDif);
  assign _zz_io_availability = (11'h7d0 + _zz_io_availability_1);
  assign _zz_io_availability_1 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_availability_2 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {{io_push_payload_fragment_cha_q,io_push_payload_fragment_cha_i},io_push_payload_last};
  always @(posedge O) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge O) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 11'h7cf);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 11'h0;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 11'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 11'h7cf);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 11'h0;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 11'h0;
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
  assign _zz_io_pop_payload_fragment_cha_i = _zz_io_pop_payload_last[24 : 1];
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment_cha_i = _zz_io_pop_payload_fragment_cha_i[11 : 0];
  assign io_pop_payload_fragment_cha_q = _zz_io_pop_payload_fragment_cha_i[23 : 12];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 11'h7d0 : 11'h0);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 11'h0 : 11'h7d0);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

  always @(posedge O) begin
    if(!resetn) begin
      logic_pushPtr_value <= 11'h0;
      logic_popPtr_value <= 11'h0;
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

module PreambleExtender (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [11:0]   raw_data_payload_fragment_cha_i,
  input      [11:0]   raw_data_payload_fragment_cha_q,
  output              preamble_data_valid,
  input               preamble_data_ready,
  output              preamble_data_payload_last,
  output     [11:0]   preamble_data_payload_fragment_cha_i,
  output     [11:0]   preamble_data_payload_fragment_cha_q,
  input               O,
  input               resetn
);
  reg        [11:0]   _zz_I_mem_port0;
  reg        [11:0]   _zz_I_mem_port1;
  reg        [11:0]   _zz_Q_mem_port0;
  reg        [11:0]   _zz_Q_mem_port1;
  wire       [6:0]    _zz_I_mem_port;
  wire                _zz_I_mem_port_1;
  wire       [6:0]    _zz_Q_mem_port;
  wire                _zz_Q_mem_port_1;
  wire       [6:0]    _zz_I_mem_port_2;
  wire                _zz_I_mem_port_3;
  wire       [6:0]    _zz_Q_mem_port_2;
  wire                _zz_Q_mem_port_3;
  wire       [6:0]    _zz_preamble_data_i_2;
  wire                _zz_preamble_data_i_3;
  wire       [6:0]    _zz_preamble_data_q_2;
  wire                _zz_preamble_data_q_3;
  wire       [6:0]    _zz_preamble_data_i_4;
  wire                _zz_preamble_data_i_5;
  wire       [6:0]    _zz_preamble_data_q_4;
  wire                _zz_preamble_data_q_5;
  reg        [7:0]    cnt;
  reg                 raw_ready;
  reg        [11:0]   preamble_data_i;
  reg        [11:0]   preamble_data_q;
  reg                 preamble_valid;
  reg                 preamble_last;
  reg        `PreambleExtenderStates_binary_sequential_type preamble_states;
  wire                when_PreambleExtender_l58;
  wire       [7:0]    _zz_preamble_data_i;
  wire       [7:0]    _zz_preamble_data_q;
  wire       [7:0]    _zz_preamble_data_i_1;
  wire       [7:0]    _zz_preamble_data_q_1;
  wire                when_PreambleExtender_l72;
  wire                raw_data_fire;
  wire                raw_data_fire_1;
  wire                when_PreambleExtender_l86;
  `ifndef SYNTHESIS
  reg [63:0] preamble_states_string;
  `endif

  (* rom_style = "block" *) reg [11:0] I_mem [0:127];
  (* rom_style = "block" *) reg [11:0] Q_mem [0:127];

  assign _zz_preamble_data_i_2 = _zz_preamble_data_i[6:0];
  assign _zz_preamble_data_q_2 = _zz_preamble_data_q[6:0];
  assign _zz_preamble_data_i_4 = _zz_preamble_data_i_1[6:0];
  assign _zz_preamble_data_q_4 = _zz_preamble_data_q_1[6:0];
  assign _zz_preamble_data_i_3 = 1'b1;
  assign _zz_preamble_data_i_5 = 1'b1;
  assign _zz_preamble_data_q_3 = 1'b1;
  assign _zz_preamble_data_q_5 = 1'b1;
  initial begin
    $readmemb("TX.sv_toplevel_rfClockArea_stf_preamble_adder_I_mem.bin",I_mem);
  end
  always @(posedge O) begin
    if(_zz_preamble_data_i_3) begin
      _zz_I_mem_port0 <= I_mem[_zz_preamble_data_i_2];
    end
  end

  always @(posedge O) begin
    if(_zz_preamble_data_i_5) begin
      _zz_I_mem_port1 <= I_mem[_zz_preamble_data_i_4];
    end
  end

  initial begin
    $readmemb("TX.sv_toplevel_rfClockArea_stf_preamble_adder_Q_mem.bin",Q_mem);
  end
  always @(posedge O) begin
    if(_zz_preamble_data_q_3) begin
      _zz_Q_mem_port0 <= Q_mem[_zz_preamble_data_q_2];
    end
  end

  always @(posedge O) begin
    if(_zz_preamble_data_q_5) begin
      _zz_Q_mem_port1 <= Q_mem[_zz_preamble_data_q_4];
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(preamble_states)
      `PreambleExtenderStates_binary_sequential_IDLE : preamble_states_string = "IDLE    ";
      `PreambleExtenderStates_binary_sequential_PREAMBLE : preamble_states_string = "PREAMBLE";
      `PreambleExtenderStates_binary_sequential_DATA : preamble_states_string = "DATA    ";
      default : preamble_states_string = "????????";
    endcase
  end
  `endif

  assign when_PreambleExtender_l58 = (raw_data_valid && preamble_data_ready);
  assign _zz_preamble_data_i = cnt;
  assign _zz_preamble_data_q = cnt;
  assign _zz_preamble_data_i_1 = cnt;
  assign _zz_preamble_data_q_1 = cnt;
  assign when_PreambleExtender_l72 = (8'h80 <= cnt);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign when_PreambleExtender_l86 = (raw_data_payload_last && raw_data_fire_1);
  assign raw_data_ready = (raw_ready && preamble_data_ready);
  assign preamble_data_valid = preamble_valid;
  assign preamble_data_payload_fragment_cha_i = preamble_data_i;
  assign preamble_data_payload_fragment_cha_q = preamble_data_q;
  assign preamble_data_payload_last = preamble_last;
  always @(posedge O) begin
    if(!resetn) begin
      cnt <= 8'h0;
      raw_ready <= 1'b0;
      preamble_valid <= 1'b0;
      preamble_last <= 1'b0;
      preamble_states <= `PreambleExtenderStates_binary_sequential_IDLE;
    end else begin
      case(preamble_states)
        `PreambleExtenderStates_binary_sequential_IDLE : begin
          cnt <= 8'h0;
          raw_ready <= 1'b0;
          preamble_valid <= 1'b0;
          preamble_last <= 1'b0;
          if(when_PreambleExtender_l58) begin
            cnt <= (cnt + 8'h01);
            preamble_states <= `PreambleExtenderStates_binary_sequential_PREAMBLE;
          end
        end
        `PreambleExtenderStates_binary_sequential_PREAMBLE : begin
          if(preamble_data_ready) begin
            cnt <= (cnt + 8'h01);
          end
          preamble_valid <= 1'b1;
          if(when_PreambleExtender_l72) begin
            raw_ready <= 1'b1;
            preamble_states <= `PreambleExtenderStates_binary_sequential_DATA;
          end
        end
        default : begin
          if(raw_data_fire) begin
            preamble_valid <= 1'b1;
          end else begin
            preamble_valid <= 1'b0;
          end
          if(when_PreambleExtender_l86) begin
            preamble_states <= `PreambleExtenderStates_binary_sequential_IDLE;
            preamble_last <= 1'b1;
          end else begin
            preamble_last <= 1'b0;
          end
        end
      endcase
    end
  end

  always @(posedge O) begin
    case(preamble_states)
      `PreambleExtenderStates_binary_sequential_IDLE : begin
        preamble_data_i <= _zz_I_mem_port0;
        preamble_data_q <= _zz_Q_mem_port0;
      end
      `PreambleExtenderStates_binary_sequential_PREAMBLE : begin
        preamble_data_i <= _zz_I_mem_port1;
        preamble_data_q <= _zz_Q_mem_port1;
      end
      default : begin
        if(raw_data_fire) begin
          preamble_data_i <= raw_data_payload_fragment_cha_i;
          preamble_data_q <= raw_data_payload_fragment_cha_q;
        end
      end
    endcase
  end


endmodule

module ModulatorRTL (
  input               data_flow_unit_data_valid,
  input               data_flow_unit_data_payload_last,
  input      [7:0]    data_flow_unit_data_payload_fragment,
  output              data_flow_mod_iq_valid,
  output              data_flow_mod_iq_payload_last,
  output     [11:0]   data_flow_mod_iq_payload_fragment_cha_i,
  output     [11:0]   data_flow_mod_iq_payload_fragment_cha_q,
  input      [1:0]    select_1,
  input               O,
  input               resetn
);
  wire       [0:0]    mPSK_Modulator_Extension_mod_unit_data_payload_fragment;
  wire       [1:0]    mPSK_Modulator_Extension_mod_1_unit_data_payload_fragment;
  wire       [3:0]    mQAM_Modulator_Extension_mod_unit_data_payload_fragment;
  wire                flowDeMux_1_outputs_0_valid;
  wire                flowDeMux_1_outputs_0_payload_last;
  wire       [7:0]    flowDeMux_1_outputs_0_payload_fragment;
  wire                flowDeMux_1_outputs_1_valid;
  wire                flowDeMux_1_outputs_1_payload_last;
  wire       [7:0]    flowDeMux_1_outputs_1_payload_fragment;
  wire                flowDeMux_1_outputs_2_valid;
  wire                flowDeMux_1_outputs_2_payload_last;
  wire       [7:0]    flowDeMux_1_outputs_2_payload_fragment;
  wire                mPSK_Modulator_Extension_mod_mod_iq_valid;
  wire                mPSK_Modulator_Extension_mod_mod_iq_payload_last;
  wire       [11:0]   mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q;
  wire                mPSK_Modulator_Extension_mod_1_mod_iq_valid;
  wire                mPSK_Modulator_Extension_mod_1_mod_iq_payload_last;
  wire       [11:0]   mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_q;
  wire                mQAM_Modulator_Extension_mod_mod_iq_valid;
  wire                mQAM_Modulator_Extension_mod_mod_iq_payload_last;
  wire       [11:0]   mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q;
  wire                flowMux_1_output_valid;
  wire                flowMux_1_output_payload_last;
  wire       [11:0]   flowMux_1_output_payload_fragment_cha_i;
  wire       [11:0]   flowMux_1_output_payload_fragment_cha_q;
  wire                _zz_unit_data_valid;
  wire                _zz_unit_data_payload_last;
  wire                _zz_unit_data_valid_1;
  wire                _zz_unit_data_payload_last_1;
  wire                _zz_unit_data_valid_2;
  wire                _zz_unit_data_payload_last_2;

  FlowDeMux flowDeMux_1 (
    .input_valid                   (data_flow_unit_data_valid               ), //i
    .input_payload_last            (data_flow_unit_data_payload_last        ), //i
    .input_payload_fragment        (data_flow_unit_data_payload_fragment    ), //i
    .select_1                      (select_1                                ), //i
    .outputs_0_valid               (flowDeMux_1_outputs_0_valid             ), //o
    .outputs_0_payload_last        (flowDeMux_1_outputs_0_payload_last      ), //o
    .outputs_0_payload_fragment    (flowDeMux_1_outputs_0_payload_fragment  ), //o
    .outputs_1_valid               (flowDeMux_1_outputs_1_valid             ), //o
    .outputs_1_payload_last        (flowDeMux_1_outputs_1_payload_last      ), //o
    .outputs_1_payload_fragment    (flowDeMux_1_outputs_1_payload_fragment  ), //o
    .outputs_2_valid               (flowDeMux_1_outputs_2_valid             ), //o
    .outputs_2_payload_last        (flowDeMux_1_outputs_2_payload_last      ), //o
    .outputs_2_payload_fragment    (flowDeMux_1_outputs_2_payload_fragment  )  //o
  );
  mPSKMod mPSK_Modulator_Extension_mod (
    .unit_data_valid                  (_zz_unit_data_valid                                         ), //i
    .unit_data_payload_last           (_zz_unit_data_payload_last                                  ), //i
    .unit_data_payload_fragment       (mPSK_Modulator_Extension_mod_unit_data_payload_fragment     ), //i
    .mod_iq_valid                     (mPSK_Modulator_Extension_mod_mod_iq_valid                   ), //o
    .mod_iq_payload_last              (mPSK_Modulator_Extension_mod_mod_iq_payload_last            ), //o
    .mod_iq_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i  ), //o
    .mod_iq_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q  ), //o
    .O                                (O                                                           ), //i
    .resetn                           (resetn                                                      )  //i
  );
  mPSKMod_1 mPSK_Modulator_Extension_mod_1 (
    .unit_data_valid                  (_zz_unit_data_valid_1                                         ), //i
    .unit_data_payload_last           (_zz_unit_data_payload_last_1                                  ), //i
    .unit_data_payload_fragment       (mPSK_Modulator_Extension_mod_1_unit_data_payload_fragment     ), //i
    .mod_iq_valid                     (mPSK_Modulator_Extension_mod_1_mod_iq_valid                   ), //o
    .mod_iq_payload_last              (mPSK_Modulator_Extension_mod_1_mod_iq_payload_last            ), //o
    .mod_iq_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_i  ), //o
    .mod_iq_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_q  ), //o
    .O                                (O                                                             ), //i
    .resetn                           (resetn                                                        )  //i
  );
  mQAMMod mQAM_Modulator_Extension_mod (
    .unit_data_valid                  (_zz_unit_data_valid_2                                       ), //i
    .unit_data_payload_last           (_zz_unit_data_payload_last_2                                ), //i
    .unit_data_payload_fragment       (mQAM_Modulator_Extension_mod_unit_data_payload_fragment     ), //i
    .mod_iq_valid                     (mQAM_Modulator_Extension_mod_mod_iq_valid                   ), //o
    .mod_iq_payload_last              (mQAM_Modulator_Extension_mod_mod_iq_payload_last            ), //o
    .mod_iq_payload_fragment_cha_i    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i  ), //o
    .mod_iq_payload_fragment_cha_q    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q  ), //o
    .O                                (O                                                           ), //i
    .resetn                           (resetn                                                      )  //i
  );
  FlowMux flowMux_1 (
    .inputs_0_valid                     (mPSK_Modulator_Extension_mod_mod_iq_valid                     ), //i
    .inputs_0_payload_last              (mPSK_Modulator_Extension_mod_mod_iq_payload_last              ), //i
    .inputs_0_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i    ), //i
    .inputs_0_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q    ), //i
    .inputs_1_valid                     (mPSK_Modulator_Extension_mod_1_mod_iq_valid                   ), //i
    .inputs_1_payload_last              (mPSK_Modulator_Extension_mod_1_mod_iq_payload_last            ), //i
    .inputs_1_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_i  ), //i
    .inputs_1_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_q  ), //i
    .inputs_2_valid                     (mQAM_Modulator_Extension_mod_mod_iq_valid                     ), //i
    .inputs_2_payload_last              (mQAM_Modulator_Extension_mod_mod_iq_payload_last              ), //i
    .inputs_2_payload_fragment_cha_i    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i    ), //i
    .inputs_2_payload_fragment_cha_q    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q    ), //i
    .select_1                           (select_1                                                      ), //i
    .output_valid                       (flowMux_1_output_valid                                        ), //o
    .output_payload_last                (flowMux_1_output_payload_last                                 ), //o
    .output_payload_fragment_cha_i      (flowMux_1_output_payload_fragment_cha_i                       ), //o
    .output_payload_fragment_cha_q      (flowMux_1_output_payload_fragment_cha_q                       )  //o
  );
  assign _zz_unit_data_valid = flowDeMux_1_outputs_0_valid;
  assign _zz_unit_data_payload_last = flowDeMux_1_outputs_0_payload_last;
  assign mPSK_Modulator_Extension_mod_unit_data_payload_fragment = flowDeMux_1_outputs_0_payload_fragment[0:0];
  assign _zz_unit_data_valid_1 = flowDeMux_1_outputs_1_valid;
  assign _zz_unit_data_payload_last_1 = flowDeMux_1_outputs_1_payload_last;
  assign mPSK_Modulator_Extension_mod_1_unit_data_payload_fragment = flowDeMux_1_outputs_1_payload_fragment[1:0];
  assign _zz_unit_data_valid_2 = flowDeMux_1_outputs_2_valid;
  assign _zz_unit_data_payload_last_2 = flowDeMux_1_outputs_2_payload_last;
  assign mQAM_Modulator_Extension_mod_unit_data_payload_fragment = flowDeMux_1_outputs_2_payload_fragment[3:0];
  assign data_flow_mod_iq_valid = flowMux_1_output_valid;
  assign data_flow_mod_iq_payload_last = flowMux_1_output_payload_last;
  assign data_flow_mod_iq_payload_fragment_cha_i = flowMux_1_output_payload_fragment_cha_i;
  assign data_flow_mod_iq_payload_fragment_cha_q = flowMux_1_output_payload_fragment_cha_q;

endmodule

module StreamFifo_7 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [15:0]   io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [15:0]   io_pop_payload_fragment,
  input               io_flush,
  output reg [10:0]   io_occupancy,
  output reg [10:0]   io_availability,
  input               O,
  input               resetn
);
  reg        [16:0]   _zz_logic_ram_port0;
  wire       [10:0]   _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [10:0]   _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [16:0]   _zz_logic_ram_port_1;
  wire       [10:0]   _zz_io_occupancy;
  wire       [10:0]   _zz_io_availability;
  wire       [10:0]   _zz_io_availability_1;
  wire       [10:0]   _zz_io_availability_2;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [10:0]   logic_pushPtr_valueNext;
  reg        [10:0]   logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [10:0]   logic_popPtr_valueNext;
  reg        [10:0]   logic_popPtr_value;
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
  wire       [10:0]   logic_ptrDif;
  reg [16:0] logic_ram [0:1999];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {10'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {10'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (11'h7d0 + logic_ptrDif);
  assign _zz_io_availability = (11'h7d0 + _zz_io_availability_1);
  assign _zz_io_availability_1 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_availability_2 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_fragment,io_push_payload_last};
  always @(posedge O) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge O) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 11'h7cf);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 11'h0;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 11'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 11'h7cf);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 11'h0;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 11'h0;
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
      io_occupancy = (logic_risingOccupancy ? 11'h7d0 : 11'h0);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 11'h0 : 11'h7d0);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

  always @(posedge O) begin
    if(!resetn) begin
      logic_pushPtr_value <= 11'h0;
      logic_popPtr_value <= 11'h0;
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

module dataDivDynamic (
  input               base_data_valid,
  output              base_data_ready,
  input               base_data_payload_last,
  input      [15:0]   base_data_payload_fragment,
  input               enable,
  input      [3:0]    cnt_step,
  input      [3:0]    cnt_limit,
  output              unit_data_valid,
  output              unit_data_payload_last,
  output     [15:0]   unit_data_payload_fragment,
  input               O,
  input               resetn
);
  wire       [3:0]    _zz_base_cnt;
  reg                 unit_valid;
  reg                 base_last;
  reg        [3:0]    base_cnt;
  wire                base_ready;
  reg        [15:0]   base_buffer;
  reg                 loaded;
  wire                when_dataDivDynamic_l42;
  wire                base_data_fire;
  wire                when_dataDivDynamic_l52;

  assign _zz_base_cnt = (base_cnt + cnt_step);
  assign base_ready = ((cnt_limit == base_cnt) && enable);
  assign when_dataDivDynamic_l42 = (! enable);
  assign base_data_fire = (base_data_valid && base_data_ready);
  assign when_dataDivDynamic_l52 = (base_cnt == cnt_limit);
  assign base_data_ready = base_ready;
  assign unit_data_payload_fragment = base_buffer;
  assign unit_data_payload_last = (base_last && (base_cnt == cnt_limit));
  assign unit_data_valid = unit_valid;
  always @(posedge O) begin
    if(!resetn) begin
      unit_valid <= 1'b0;
      base_last <= 1'b0;
      base_cnt <= 4'b0000;
      base_buffer <= 16'h0;
      loaded <= 1'b0;
    end else begin
      if(when_dataDivDynamic_l42) begin
        base_cnt <= cnt_limit;
        unit_valid <= 1'b0;
        loaded <= 1'b0;
      end else begin
        if(base_data_fire) begin
          base_cnt <= (_zz_base_cnt + 4'b0000);
          base_buffer <= base_data_payload_fragment;
          base_last <= base_data_payload_last;
          unit_valid <= 1'b1;
          loaded <= 1'b1;
        end else begin
          if(when_dataDivDynamic_l52) begin
            base_buffer <= (base_buffer >>> cnt_step);
            unit_valid <= 1'b0;
            loaded <= 1'b0;
          end else begin
            if(loaded) begin
              base_cnt <= (base_cnt + cnt_step);
              base_buffer <= (base_buffer >>> cnt_step);
              unit_valid <= 1'b1;
            end
          end
        end
      end
    end
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
  input               O,
  input               resetn
);
  reg                 scrambler_1_init_state_valid;
  reg                 scrambler_1_scram_data_ready;
  wire                scrambler_1_scram_data_valid;
  wire       [15:0]   scrambler_1_scram_data_payload;
  reg        `PhyTxScramblerStatus_binary_sequential_type scrambler_status;
  wire                raw_data_fire;
  wire                when_PhyTx_l142;
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
    .O                     (O                               ), //i
    .resetn                (resetn                          )  //i
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
  assign when_PhyTx_l142 = (raw_data_fire && raw_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  always @(posedge O) begin
    if(!resetn) begin
      scrambler_status <= `PhyTxScramblerStatus_binary_sequential_IDLE;
    end else begin
      case(scrambler_status)
        `PhyTxScramblerStatus_binary_sequential_IDLE : begin
          if(raw_data_valid) begin
            scrambler_status <= `PhyTxScramblerStatus_binary_sequential_SCRAMBLING;
          end
        end
        `PhyTxScramblerStatus_binary_sequential_SCRAMBLING : begin
          if(when_PhyTx_l142) begin
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
  input               O,
  input               resetn
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
  wire                when_PhyTx_l218;
  wire                result_data_fire;
  wire                when_PhyTx_l218_1;
  wire                _zz_raw_data_ready;
  wire                result_data_fire_1;
  wire                when_PhyTx_l220;
  wire                raw_data_fire_1;
  reg        `PhyTxHeaderStatus_binary_sequential_type header_status;
  wire                result_data_fire_2;
  wire                when_PhyTx_l249;
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
    .O                           (O                                 ), //i
    .resetn                      (resetn                            )  //i
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
  assign when_PhyTx_l218 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l218_1 = (result_data_fire && result_data_payload_last);
  assign _zz_raw_data_ready = (! emitHeader);
  assign raw_data_ready = (dataFifo_io_push_ready && _zz_raw_data_ready);
  assign dataFifo_io_push_valid = (raw_data_valid && _zz_raw_data_ready);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l220 = (result_data_fire_1 && result_data_payload_last);
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
  assign when_PhyTx_l249 = (result_data_fire_2 && result_data_payload_last);
  always @(posedge O) begin
    if(!resetn) begin
      counter <= 8'h0;
      emitHeader <= 1'b0;
      header_status <= `PhyTxHeaderStatus_binary_sequential_IDLE;
    end else begin
      if(when_PhyTx_l218) begin
        emitHeader <= 1'b1;
      end
      if(when_PhyTx_l218_1) begin
        emitHeader <= 1'b0;
      end
      if(when_PhyTx_l220) begin
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
          if(when_PhyTx_l249) begin
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
  input               O,
  input               resetn
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
  always @(posedge O) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge O) begin
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

  always @(posedge O) begin
    if(!resetn) begin
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
  input               O,
  input               resetn
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
  always @(posedge O) begin
    raw_data_fragment <= raw_data_payload_fragment;
  end

  always @(posedge O) begin
    if(!resetn) begin
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
  input               O,
  input               resetn
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
  wire                when_PhyTx_l94;
  wire                phy_tx_encoder_raw_data_fire;
  wire                when_PhyTx_l94_1;

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
    .O                              (O                                           ), //i
    .resetn                         (resetn                                      )  //i
  );
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l94 = (raw_data_fire && raw_data_payload_last);
  assign phy_tx_encoder_raw_data_fire = (phy_tx_encoder_raw_data_valid && phy_tx_encoder_raw_data_ready);
  assign when_PhyTx_l94_1 = (phy_tx_encoder_raw_data_fire && phy_tx_encoder_raw_data_payload_last);
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
  always @(posedge O) begin
    if(!resetn) begin
      emitEncoding <= 1'b0;
    end else begin
      if(when_PhyTx_l94) begin
        emitEncoding <= 1'b1;
      end
      if(when_PhyTx_l94_1) begin
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
  input               O,
  input               resetn
);
  wire                crc_1_flush;
  wire       [31:0]   crc_1_result;
  wire       [31:0]   crc_1_resultNext;
  reg        [7:0]    _zz_result_data_payload_fragment;
  reg                 emitCrc;
  wire                raw_data_fire;
  wire                when_PhyTx_l31;
  wire                result_data_fire;
  wire                when_PhyTx_l31_1;
  reg        [1:0]    counter;
  wire                raw_data_fire_1;
  wire                result_data_fire_1;
  wire                when_PhyTx_l38;
  wire                when_PhyTx_l46;

  Crc crc_1 (
    .flush            (crc_1_flush                ), //i
    .input_valid      (raw_data_fire_1            ), //i
    .input_payload    (raw_data_payload_fragment  ), //i
    .result           (crc_1_result               ), //o
    .resultNext       (crc_1_resultNext           ), //o
    .O                (O                          ), //i
    .resetn           (resetn                     )  //i
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
  assign when_PhyTx_l31 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l31_1 = (result_data_fire && result_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign crc_1_flush = (result_data_fire_1 && result_data_payload_last);
  always @(*) begin
    result_data_payload_last = 1'b0;
    if(!when_PhyTx_l38) begin
      if(when_PhyTx_l46) begin
        result_data_payload_last = 1'b1;
      end
    end
  end

  assign when_PhyTx_l38 = (! emitCrc);
  always @(*) begin
    if(when_PhyTx_l38) begin
      result_data_valid = raw_data_valid;
    end else begin
      result_data_valid = 1'b1;
    end
  end

  always @(*) begin
    if(when_PhyTx_l38) begin
      result_data_payload_fragment = raw_data_payload_fragment;
    end else begin
      result_data_payload_fragment = _zz_result_data_payload_fragment;
    end
  end

  always @(*) begin
    if(when_PhyTx_l38) begin
      raw_data_ready = result_data_ready;
    end else begin
      raw_data_ready = 1'b0;
    end
  end

  assign when_PhyTx_l46 = (counter == 2'b11);
  always @(posedge O) begin
    if(!resetn) begin
      emitCrc <= 1'b0;
      counter <= 2'b00;
    end else begin
      if(when_PhyTx_l31) begin
        emitCrc <= 1'b1;
      end
      if(when_PhyTx_l31_1) begin
        emitCrc <= 1'b0;
      end
      if(!when_PhyTx_l38) begin
        if(when_PhyTx_l46) begin
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
  input               O,
  input               resetn
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
  always @(posedge O) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge O) begin
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

  always @(posedge O) begin
    if(!resetn) begin
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
  input               O,
  input               resetn
);
  reg        [2:0]    counter;
  wire                ok;
  wire                raw_data_fire;
  reg                 raw_data_payload_first;
  wire                fill;
  wire                result_data_fire;
  wire                when_PhyTx_l70;
  wire                result_data_fire_1;
  wire                when_PhyTx_l73;
  wire                _zz_raw_data_ready;
  wire                when_PhyTx_l77;

  assign ok = (counter == 3'b111);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign fill = ((counter != 3'b000) && raw_data_payload_first);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l70 = ((! ok) && result_data_fire);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l73 = (result_data_fire_1 && result_data_payload_last);
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
    if(when_PhyTx_l77) begin
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

  assign when_PhyTx_l77 = (! ok);
  always @(posedge O) begin
    if(!resetn) begin
      counter <= 3'b000;
      raw_data_payload_first <= 1'b1;
    end else begin
      if(raw_data_fire) begin
        raw_data_payload_first <= raw_data_payload_last;
      end
      if(when_PhyTx_l70) begin
        counter <= (counter + 3'b001);
      end
      if(when_PhyTx_l73) begin
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
  input               O,
  input               resetn
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
    .O                     (O                              ), //i
    .resetn                (resetn                         )  //i
  );
  assign bit_valid = strb_buf[0];
  assign raw_data_tready = split_core_raw_data_ready;
  assign pkg_data_valid = (split_core_split_data_valid && bit_valid);
  assign pkg_data_payload_fragment = split_core_split_data_payload;
  assign pkg_data_payload_last = ((pkg_slices_cnt == _zz_pkg_data_payload_last) || (raw_data_last && (strb_buf == 4'b0001)));
  assign raw_data_stream_fire = (raw_data_tvalid && raw_data_tready);
  assign split_core_split_data_fire = (split_core_split_data_valid && pkg_data_ready);
  assign slices_cnt = pkg_slices_cnt;
  always @(posedge O) begin
    if(!resetn) begin
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

  always @(posedge O) begin
    if(raw_data_stream_fire) begin
      strb_buf <= raw_data_tstrb;
    end else begin
      if(split_core_split_data_fire) begin
        strb_buf <= (strb_buf >>> 1);
      end
    end
  end


endmodule

module AD9361Interface (
  input               dac_data_valid,
  output              dac_data_ready,
  input      [11:0]   dac_data_payload_0_cha_i,
  input      [11:0]   dac_data_payload_0_cha_q,
  input      [11:0]   dac_data_payload_1_cha_i,
  input      [11:0]   dac_data_payload_1_cha_q,
  input               dac_t1_mod,
  output reg          adc_data_valid,
  output reg [11:0]   adc_data_payload_0_cha_i,
  output reg [11:0]   adc_data_payload_0_cha_q,
  output reg [11:0]   adc_data_payload_1_cha_i,
  output reg [11:0]   adc_data_payload_1_cha_q,
  input               adc_r1_mod,
  output reg          adc_error,
  input               rx_if_frame_p,
  input               rx_if_frame_n,
  input      [5:0]    rx_if_data_p,
  input      [5:0]    rx_if_data_n,
  input               rx_data_clk_p,
  input               rx_data_clk_n,
  output              tx_if_frame_p,
  output              tx_if_frame_n,
  output              tx_fb_clk_p,
  output              tx_fb_clk_n,
  output reg [5:0]    tx_if_data_p,
  output reg [5:0]    tx_if_data_n,
  output              data_clk,
  output              O,
  input               resetn
);
  wire                iBUFDS_1_I;
  wire                iBUFDS_1_IB;
  wire                iBUFDS_2_I;
  wire                iBUFDS_2_IB;
  wire                iBUFDS_3_I;
  wire                iBUFDS_3_IB;
  wire                iBUFDS_4_I;
  wire                iBUFDS_4_IB;
  wire                iBUFDS_5_I;
  wire                iBUFDS_5_IB;
  wire                iBUFDS_6_I;
  wire                iBUFDS_6_IB;
  wire                oDDR_1_D1;
  wire                oDDR_1_D2;
  wire                oDDR_2_D1;
  wire                oDDR_2_D2;
  wire                oDDR_3_D1;
  wire                oDDR_3_D2;
  wire                oDDR_4_D1;
  wire                oDDR_4_D2;
  wire                oDDR_5_D1;
  wire                oDDR_5_D2;
  wire                oDDR_6_D1;
  wire                oDDR_6_D2;
  wire                iBUFGDS_1_O;
  wire                bUFG_1_O;
  wire                iBUFDS_1_O;
  wire                iDDR_1_Q1;
  wire                iDDR_1_Q2;
  wire                iBUFDS_2_O;
  wire                iDDR_2_Q1;
  wire                iDDR_2_Q2;
  wire                iBUFDS_3_O;
  wire                iDDR_3_Q1;
  wire                iDDR_3_Q2;
  wire                iBUFDS_4_O;
  wire                iDDR_4_Q1;
  wire                iDDR_4_Q2;
  wire                iBUFDS_5_O;
  wire                iDDR_5_Q1;
  wire                iDDR_5_Q2;
  wire                iBUFDS_6_O;
  wire                iDDR_6_Q1;
  wire                iDDR_6_Q2;
  wire                iBUFDS_7_O;
  wire                rxClockArea_iddr_frame_Q1;
  wire                rxClockArea_iddr_frame_Q2;
  wire                oDDR_1_Q;
  wire                oBUFDS_1_O;
  wire                oBUFDS_1_OB;
  wire                oDDR_2_Q;
  wire                oBUFDS_2_O;
  wire                oBUFDS_2_OB;
  wire                oDDR_3_Q;
  wire                oBUFDS_3_O;
  wire                oBUFDS_3_OB;
  wire                oDDR_4_Q;
  wire                oBUFDS_4_O;
  wire                oBUFDS_4_OB;
  wire                oDDR_5_Q;
  wire                oBUFDS_5_O;
  wire                oBUFDS_5_OB;
  wire                oDDR_6_Q;
  wire                oBUFDS_6_O;
  wire                oBUFDS_6_OB;
  wire                txClockArea_tx_frame_oddr_Q;
  wire                txClockArea_tx_frame_obuf_O;
  wire                txClockArea_tx_frame_obuf_OB;
  wire                txClockArea_tx_clk_oddr_Q;
  wire                txClockArea_tx_clk_obuf_O;
  wire                txClockArea_tx_clk_obuf_OB;
  reg        [5:0]    rxClockArea_rx_data_p_s;
  reg        [5:0]    rxClockArea_rx_data_n_s;
  wire                rxClockArea_rx_frame_p_s;
  wire                rxClockArea_rx_frame_n_s;
  reg        [5:0]    rxClockArea_rx_data_n;
  reg                 rxClockArea_rx_frame_n;
  reg        [11:0]   rxClockArea_rx_data;
  reg        [1:0]    rxClockArea_rx_frame;
  reg        [1:0]    rxClockArea_rx_frame_d;
  reg        [11:0]   rxClockArea_rx_data_d;
  wire       [3:0]    rxClockArea_rx_frame_comb;
  reg                 rxClockArea_rx_valid_r1;
  reg                 rxClockArea_rx_error_r1;
  reg        [11:0]   rxClockArea_rx_data_i_r1;
  reg        [11:0]   rxClockArea_rx_data_q_r1;
  wire                when_AD9361Interface_l117;
  reg                 rxClockArea_rx_error_r2;
  reg                 rxClockArea_rx_valid_r2;
  reg        [11:0]   rxClockArea_rx_data_i0_r2;
  reg        [11:0]   rxClockArea_rx_data_q0_r2;
  reg        [11:0]   rxClockArea_rx_data_i1_r2;
  reg        [11:0]   rxClockArea_rx_data_q1_r2;
  wire                when_AD9361Interface_l133;
  wire                when_AD9361Interface_l138;
  reg        [2:0]    txClockArea_tx_data_cnt;
  reg        [11:0]   txClockArea_tx_data_i0_d;
  reg        [11:0]   txClockArea_tx_data_q0_d;
  reg        [11:0]   txClockArea_tx_data_i1_d;
  reg        [11:0]   txClockArea_tx_data_q1_d;
  reg                 txClockArea_tx_frame;
  reg        [5:0]    txClockArea_tx_data_p;
  reg        [5:0]    txClockArea_tx_data_n;
  wire       [3:0]    txClockArea_tx_data_sel;
  wire                dac_data_fire;
  wire                when_AD9361Interface_l192;
  wire                txClockArea_tx_frame_buf;
  wire                txClockArea_tx_clk_buf;

  IBUFGDS iBUFGDS_1 (
    .I     (rx_data_clk_p  ), //i
    .IB    (rx_data_clk_n  ), //i
    .O     (iBUFGDS_1_O    )  //o
  );
  BUFG bUFG_1 (
    .I    (iBUFGDS_1_O  ), //i
    .O    (bUFG_1_O     )  //o
  );
  IBUFDS iBUFDS_1 (
    .I     (iBUFDS_1_I   ), //i
    .IB    (iBUFDS_1_IB  ), //i
    .O     (iBUFDS_1_O   )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) iDDR_1 (
    .CE    (1'b1        ), //i
    .R     (1'b0        ), //i
    .S     (1'b0        ), //i
    .C     (bUFG_1_O    ), //i
    .D     (iBUFDS_1_O  ), //i
    .Q1    (iDDR_1_Q1   ), //o
    .Q2    (iDDR_1_Q2   )  //o
  );
  IBUFDS iBUFDS_2 (
    .I     (iBUFDS_2_I   ), //i
    .IB    (iBUFDS_2_IB  ), //i
    .O     (iBUFDS_2_O   )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) iDDR_2 (
    .CE    (1'b1        ), //i
    .R     (1'b0        ), //i
    .S     (1'b0        ), //i
    .C     (bUFG_1_O    ), //i
    .D     (iBUFDS_2_O  ), //i
    .Q1    (iDDR_2_Q1   ), //o
    .Q2    (iDDR_2_Q2   )  //o
  );
  IBUFDS iBUFDS_3 (
    .I     (iBUFDS_3_I   ), //i
    .IB    (iBUFDS_3_IB  ), //i
    .O     (iBUFDS_3_O   )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) iDDR_3 (
    .CE    (1'b1        ), //i
    .R     (1'b0        ), //i
    .S     (1'b0        ), //i
    .C     (bUFG_1_O    ), //i
    .D     (iBUFDS_3_O  ), //i
    .Q1    (iDDR_3_Q1   ), //o
    .Q2    (iDDR_3_Q2   )  //o
  );
  IBUFDS iBUFDS_4 (
    .I     (iBUFDS_4_I   ), //i
    .IB    (iBUFDS_4_IB  ), //i
    .O     (iBUFDS_4_O   )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) iDDR_4 (
    .CE    (1'b1        ), //i
    .R     (1'b0        ), //i
    .S     (1'b0        ), //i
    .C     (bUFG_1_O    ), //i
    .D     (iBUFDS_4_O  ), //i
    .Q1    (iDDR_4_Q1   ), //o
    .Q2    (iDDR_4_Q2   )  //o
  );
  IBUFDS iBUFDS_5 (
    .I     (iBUFDS_5_I   ), //i
    .IB    (iBUFDS_5_IB  ), //i
    .O     (iBUFDS_5_O   )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) iDDR_5 (
    .CE    (1'b1        ), //i
    .R     (1'b0        ), //i
    .S     (1'b0        ), //i
    .C     (bUFG_1_O    ), //i
    .D     (iBUFDS_5_O  ), //i
    .Q1    (iDDR_5_Q1   ), //o
    .Q2    (iDDR_5_Q2   )  //o
  );
  IBUFDS iBUFDS_6 (
    .I     (iBUFDS_6_I   ), //i
    .IB    (iBUFDS_6_IB  ), //i
    .O     (iBUFDS_6_O   )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) iDDR_6 (
    .CE    (1'b1        ), //i
    .R     (1'b0        ), //i
    .S     (1'b0        ), //i
    .C     (bUFG_1_O    ), //i
    .D     (iBUFDS_6_O  ), //i
    .Q1    (iDDR_6_Q1   ), //o
    .Q2    (iDDR_6_Q2   )  //o
  );
  IBUFDS iBUFDS_7 (
    .I     (rx_if_frame_p  ), //i
    .IB    (rx_if_frame_n  ), //i
    .O     (iBUFDS_7_O     )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) rxClockArea_iddr_frame (
    .CE    (1'b1                       ), //i
    .R     (1'b0                       ), //i
    .S     (1'b0                       ), //i
    .C     (bUFG_1_O                   ), //i
    .D     (iBUFDS_7_O                 ), //i
    .Q1    (rxClockArea_iddr_frame_Q1  ), //o
    .Q2    (rxClockArea_iddr_frame_Q2  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) oDDR_1 (
    .CE    (1'b1       ), //i
    .R     (1'b0       ), //i
    .S     (1'b0       ), //i
    .C     (bUFG_1_O   ), //i
    .D1    (oDDR_1_D1  ), //i
    .D2    (oDDR_1_D2  ), //i
    .Q     (oDDR_1_Q   )  //o
  );
  OBUFDS oBUFDS_1 (
    .I     (oDDR_1_Q     ), //i
    .O     (oBUFDS_1_O   ), //o
    .OB    (oBUFDS_1_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) oDDR_2 (
    .CE    (1'b1       ), //i
    .R     (1'b0       ), //i
    .S     (1'b0       ), //i
    .C     (bUFG_1_O   ), //i
    .D1    (oDDR_2_D1  ), //i
    .D2    (oDDR_2_D2  ), //i
    .Q     (oDDR_2_Q   )  //o
  );
  OBUFDS oBUFDS_2 (
    .I     (oDDR_2_Q     ), //i
    .O     (oBUFDS_2_O   ), //o
    .OB    (oBUFDS_2_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) oDDR_3 (
    .CE    (1'b1       ), //i
    .R     (1'b0       ), //i
    .S     (1'b0       ), //i
    .C     (bUFG_1_O   ), //i
    .D1    (oDDR_3_D1  ), //i
    .D2    (oDDR_3_D2  ), //i
    .Q     (oDDR_3_Q   )  //o
  );
  OBUFDS oBUFDS_3 (
    .I     (oDDR_3_Q     ), //i
    .O     (oBUFDS_3_O   ), //o
    .OB    (oBUFDS_3_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) oDDR_4 (
    .CE    (1'b1       ), //i
    .R     (1'b0       ), //i
    .S     (1'b0       ), //i
    .C     (bUFG_1_O   ), //i
    .D1    (oDDR_4_D1  ), //i
    .D2    (oDDR_4_D2  ), //i
    .Q     (oDDR_4_Q   )  //o
  );
  OBUFDS oBUFDS_4 (
    .I     (oDDR_4_Q     ), //i
    .O     (oBUFDS_4_O   ), //o
    .OB    (oBUFDS_4_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) oDDR_5 (
    .CE    (1'b1       ), //i
    .R     (1'b0       ), //i
    .S     (1'b0       ), //i
    .C     (bUFG_1_O   ), //i
    .D1    (oDDR_5_D1  ), //i
    .D2    (oDDR_5_D2  ), //i
    .Q     (oDDR_5_Q   )  //o
  );
  OBUFDS oBUFDS_5 (
    .I     (oDDR_5_Q     ), //i
    .O     (oBUFDS_5_O   ), //o
    .OB    (oBUFDS_5_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) oDDR_6 (
    .CE    (1'b1       ), //i
    .R     (1'b0       ), //i
    .S     (1'b0       ), //i
    .C     (bUFG_1_O   ), //i
    .D1    (oDDR_6_D1  ), //i
    .D2    (oDDR_6_D2  ), //i
    .Q     (oDDR_6_Q   )  //o
  );
  OBUFDS oBUFDS_6 (
    .I     (oDDR_6_Q     ), //i
    .O     (oBUFDS_6_O   ), //o
    .OB    (oBUFDS_6_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) txClockArea_tx_frame_oddr (
    .CE    (1'b1                         ), //i
    .R     (1'b0                         ), //i
    .S     (1'b0                         ), //i
    .C     (bUFG_1_O                     ), //i
    .D1    (txClockArea_tx_frame         ), //i
    .D2    (txClockArea_tx_frame         ), //i
    .Q     (txClockArea_tx_frame_oddr_Q  )  //o
  );
  OBUFDS txClockArea_tx_frame_obuf (
    .I     (txClockArea_tx_frame_buf      ), //i
    .O     (txClockArea_tx_frame_obuf_O   ), //o
    .OB    (txClockArea_tx_frame_obuf_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) txClockArea_tx_clk_oddr (
    .CE    (1'b1                       ), //i
    .R     (1'b0                       ), //i
    .S     (1'b0                       ), //i
    .C     (bUFG_1_O                   ), //i
    .D1    (1'b0                       ), //i
    .D2    (1'b1                       ), //i
    .Q     (txClockArea_tx_clk_oddr_Q  )  //o
  );
  OBUFDS txClockArea_tx_clk_obuf (
    .I     (txClockArea_tx_clk_buf      ), //i
    .O     (txClockArea_tx_clk_obuf_O   ), //o
    .OB    (txClockArea_tx_clk_obuf_OB  )  //o
  );
  assign iBUFDS_1_I = rx_if_data_p[0];
  assign iBUFDS_1_IB = rx_if_data_n[0];
  always @(*) begin
    rxClockArea_rx_data_p_s[0] = iDDR_1_Q1;
    rxClockArea_rx_data_p_s[1] = iDDR_2_Q1;
    rxClockArea_rx_data_p_s[2] = iDDR_3_Q1;
    rxClockArea_rx_data_p_s[3] = iDDR_4_Q1;
    rxClockArea_rx_data_p_s[4] = iDDR_5_Q1;
    rxClockArea_rx_data_p_s[5] = iDDR_6_Q1;
  end

  always @(*) begin
    rxClockArea_rx_data_n_s[0] = iDDR_1_Q2;
    rxClockArea_rx_data_n_s[1] = iDDR_2_Q2;
    rxClockArea_rx_data_n_s[2] = iDDR_3_Q2;
    rxClockArea_rx_data_n_s[3] = iDDR_4_Q2;
    rxClockArea_rx_data_n_s[4] = iDDR_5_Q2;
    rxClockArea_rx_data_n_s[5] = iDDR_6_Q2;
  end

  assign iBUFDS_2_I = rx_if_data_p[1];
  assign iBUFDS_2_IB = rx_if_data_n[1];
  assign iBUFDS_3_I = rx_if_data_p[2];
  assign iBUFDS_3_IB = rx_if_data_n[2];
  assign iBUFDS_4_I = rx_if_data_p[3];
  assign iBUFDS_4_IB = rx_if_data_n[3];
  assign iBUFDS_5_I = rx_if_data_p[4];
  assign iBUFDS_5_IB = rx_if_data_n[4];
  assign iBUFDS_6_I = rx_if_data_p[5];
  assign iBUFDS_6_IB = rx_if_data_n[5];
  assign rxClockArea_rx_frame_p_s = rxClockArea_iddr_frame_Q1;
  assign rxClockArea_rx_frame_n_s = rxClockArea_iddr_frame_Q2;
  assign rxClockArea_rx_frame_comb = {rxClockArea_rx_frame_d,rxClockArea_rx_frame};
  assign when_AD9361Interface_l117 = (rxClockArea_rx_frame_comb == 4'b1100);
  assign when_AD9361Interface_l133 = (rxClockArea_rx_frame_comb == 4'b1111);
  assign when_AD9361Interface_l138 = (rxClockArea_rx_frame_comb == 4'b0000);
  always @(*) begin
    if(adc_r1_mod) begin
      adc_data_valid = rxClockArea_rx_valid_r1;
    end else begin
      adc_data_valid = rxClockArea_rx_valid_r2;
    end
  end

  always @(*) begin
    if(adc_r1_mod) begin
      adc_data_payload_0_cha_i = rxClockArea_rx_data_i_r1;
    end else begin
      adc_data_payload_0_cha_i = rxClockArea_rx_data_i0_r2;
    end
  end

  always @(*) begin
    if(adc_r1_mod) begin
      adc_data_payload_0_cha_q = rxClockArea_rx_data_q_r1;
    end else begin
      adc_data_payload_0_cha_q = rxClockArea_rx_data_q0_r2;
    end
  end

  always @(*) begin
    if(adc_r1_mod) begin
      adc_data_payload_1_cha_i = 12'h0;
    end else begin
      adc_data_payload_1_cha_i = rxClockArea_rx_data_i1_r2;
    end
  end

  always @(*) begin
    if(adc_r1_mod) begin
      adc_data_payload_1_cha_q = 12'h0;
    end else begin
      adc_data_payload_1_cha_q = rxClockArea_rx_data_q1_r2;
    end
  end

  always @(*) begin
    if(adc_r1_mod) begin
      adc_error = (! rxClockArea_rx_error_r1);
    end else begin
      adc_error = (! rxClockArea_rx_error_r2);
    end
  end

  assign txClockArea_tx_data_sel = {{txClockArea_tx_data_cnt[2],dac_t1_mod},txClockArea_tx_data_cnt[1 : 0]};
  assign dac_data_fire = (dac_data_valid && dac_data_ready);
  assign when_AD9361Interface_l192 = txClockArea_tx_data_cnt[2];
  assign dac_data_ready = (txClockArea_tx_data_cnt == 3'b000);
  assign oDDR_1_D1 = txClockArea_tx_data_p[0];
  assign oDDR_1_D2 = txClockArea_tx_data_n[0];
  always @(*) begin
    tx_if_data_p[0] = oBUFDS_1_O;
    tx_if_data_p[1] = oBUFDS_2_O;
    tx_if_data_p[2] = oBUFDS_3_O;
    tx_if_data_p[3] = oBUFDS_4_O;
    tx_if_data_p[4] = oBUFDS_5_O;
    tx_if_data_p[5] = oBUFDS_6_O;
  end

  always @(*) begin
    tx_if_data_n[0] = oBUFDS_1_OB;
    tx_if_data_n[1] = oBUFDS_2_OB;
    tx_if_data_n[2] = oBUFDS_3_OB;
    tx_if_data_n[3] = oBUFDS_4_OB;
    tx_if_data_n[4] = oBUFDS_5_OB;
    tx_if_data_n[5] = oBUFDS_6_OB;
  end

  assign oDDR_2_D1 = txClockArea_tx_data_p[1];
  assign oDDR_2_D2 = txClockArea_tx_data_n[1];
  assign oDDR_3_D1 = txClockArea_tx_data_p[2];
  assign oDDR_3_D2 = txClockArea_tx_data_n[2];
  assign oDDR_4_D1 = txClockArea_tx_data_p[3];
  assign oDDR_4_D2 = txClockArea_tx_data_n[3];
  assign oDDR_5_D1 = txClockArea_tx_data_p[4];
  assign oDDR_5_D2 = txClockArea_tx_data_n[4];
  assign oDDR_6_D1 = txClockArea_tx_data_p[5];
  assign oDDR_6_D2 = txClockArea_tx_data_n[5];
  assign txClockArea_tx_frame_buf = txClockArea_tx_frame_oddr_Q;
  assign tx_if_frame_p = txClockArea_tx_frame_obuf_O;
  assign tx_if_frame_n = txClockArea_tx_frame_obuf_OB;
  assign txClockArea_tx_clk_buf = txClockArea_tx_clk_oddr_Q;
  assign tx_fb_clk_p = txClockArea_tx_clk_obuf_O;
  assign tx_fb_clk_n = txClockArea_tx_clk_obuf_OB;
  assign data_clk = bUFG_1_O;
  assign O = bUFG_1_O;
  always @(posedge bUFG_1_O) begin
    if(!resetn) begin
      rxClockArea_rx_data_n <= 6'h0;
      rxClockArea_rx_frame_n <= 1'b0;
      rxClockArea_rx_data <= 12'h0;
      rxClockArea_rx_frame <= 2'b00;
      rxClockArea_rx_frame_d <= 2'b00;
      rxClockArea_rx_data_d <= 12'h0;
      rxClockArea_rx_valid_r1 <= 1'b0;
      rxClockArea_rx_error_r1 <= 1'b0;
      rxClockArea_rx_error_r2 <= 1'b0;
      rxClockArea_rx_valid_r2 <= 1'b0;
      txClockArea_tx_data_cnt <= 3'b000;
      txClockArea_tx_data_i0_d <= 12'h0;
      txClockArea_tx_data_q0_d <= 12'h0;
      txClockArea_tx_data_i1_d <= 12'h0;
      txClockArea_tx_data_q1_d <= 12'h0;
    end else begin
      rxClockArea_rx_data_n <= rxClockArea_rx_data_n_s;
      rxClockArea_rx_frame_n <= rxClockArea_rx_frame_n_s;
      rxClockArea_rx_data <= {rxClockArea_rx_data_n,rxClockArea_rx_data_p_s};
      rxClockArea_rx_frame <= {rxClockArea_rx_frame_n,rxClockArea_rx_frame_p_s};
      rxClockArea_rx_frame_d <= rxClockArea_rx_frame;
      rxClockArea_rx_data_d <= rxClockArea_rx_data;
      rxClockArea_rx_valid_r1 <= (rxClockArea_rx_frame_comb == 4'b1100);
      if(when_AD9361Interface_l117) begin
        rxClockArea_rx_error_r1 <= (! ((rxClockArea_rx_frame_comb == 4'b1100) || (rxClockArea_rx_frame_comb == 4'b0011)));
      end
      rxClockArea_rx_error_r2 <= (! ((((rxClockArea_rx_frame_comb == 4'b1111) || (rxClockArea_rx_frame_comb == 4'b1100)) || (rxClockArea_rx_frame_comb == 4'b0000)) || (rxClockArea_rx_frame_comb == 4'b0011)));
      rxClockArea_rx_valid_r2 <= (rxClockArea_rx_frame_comb == 4'b0000);
      if(dac_data_fire) begin
        txClockArea_tx_data_cnt <= 3'b100;
        txClockArea_tx_data_i0_d <= dac_data_payload_0_cha_i;
        txClockArea_tx_data_q0_d <= dac_data_payload_0_cha_q;
        txClockArea_tx_data_i1_d <= dac_data_payload_1_cha_i;
        txClockArea_tx_data_q1_d <= dac_data_payload_1_cha_q;
      end else begin
        if(when_AD9361Interface_l192) begin
          txClockArea_tx_data_cnt <= (txClockArea_tx_data_cnt + 3'b001);
        end
      end
    end
  end

  always @(posedge bUFG_1_O) begin
    if(when_AD9361Interface_l117) begin
      rxClockArea_rx_data_i_r1 <= {rxClockArea_rx_data_d[11 : 6],rxClockArea_rx_data[11 : 6]};
      rxClockArea_rx_data_q_r1 <= {rxClockArea_rx_data_d[5 : 0],rxClockArea_rx_data[5 : 0]};
    end
    if(when_AD9361Interface_l133) begin
      rxClockArea_rx_data_i0_r2 <= {rxClockArea_rx_data_d[11 : 6],rxClockArea_rx_data[11 : 6]};
      rxClockArea_rx_data_q0_r2 <= {rxClockArea_rx_data_d[5 : 0],rxClockArea_rx_data[5 : 0]};
    end
    if(when_AD9361Interface_l138) begin
      rxClockArea_rx_data_i1_r2 <= {rxClockArea_rx_data_d[11 : 6],rxClockArea_rx_data[11 : 6]};
      rxClockArea_rx_data_q1_r2 <= {rxClockArea_rx_data_d[5 : 0],rxClockArea_rx_data[5 : 0]};
    end
    if(!dac_data_fire) begin
      if(when_AD9361Interface_l192) begin
        case(txClockArea_tx_data_sel)
          4'b1101 : begin
            txClockArea_tx_frame <= 1'b0;
            txClockArea_tx_data_p <= txClockArea_tx_data_i0_d[5 : 0];
            txClockArea_tx_data_n <= txClockArea_tx_data_q0_d[5 : 0];
          end
          4'b1100 : begin
            txClockArea_tx_frame <= 1'b1;
            txClockArea_tx_data_p <= txClockArea_tx_data_i0_d[11 : 6];
            txClockArea_tx_data_n <= txClockArea_tx_data_q0_d[11 : 6];
          end
          4'b1011 : begin
            txClockArea_tx_frame <= 1'b0;
            txClockArea_tx_data_p <= txClockArea_tx_data_i1_d[5 : 0];
            txClockArea_tx_data_n <= txClockArea_tx_data_q1_d[5 : 0];
          end
          4'b1010 : begin
            txClockArea_tx_frame <= 1'b0;
            txClockArea_tx_data_p <= txClockArea_tx_data_i1_d[11 : 6];
            txClockArea_tx_data_n <= txClockArea_tx_data_q1_d[11 : 6];
          end
          4'b1001 : begin
            txClockArea_tx_frame <= 1'b1;
            txClockArea_tx_data_p <= txClockArea_tx_data_i0_d[5 : 0];
            txClockArea_tx_data_n <= txClockArea_tx_data_q0_d[5 : 0];
          end
          4'b1000 : begin
            txClockArea_tx_frame <= 1'b1;
            txClockArea_tx_data_p <= txClockArea_tx_data_i0_d[11 : 6];
            txClockArea_tx_data_n <= txClockArea_tx_data_q0_d[11 : 6];
          end
          default : begin
            txClockArea_tx_frame <= 1'b0;
            txClockArea_tx_data_p <= 6'h0;
            txClockArea_tx_data_n <= 6'h0;
          end
        endcase
      end else begin
        txClockArea_tx_frame <= 1'b0;
        txClockArea_tx_data_p <= 6'h0;
        txClockArea_tx_data_n <= 6'h0;
      end
    end
  end


endmodule

module FlowMux (
  input               inputs_0_valid,
  input               inputs_0_payload_last,
  input      [11:0]   inputs_0_payload_fragment_cha_i,
  input      [11:0]   inputs_0_payload_fragment_cha_q,
  input               inputs_1_valid,
  input               inputs_1_payload_last,
  input      [11:0]   inputs_1_payload_fragment_cha_i,
  input      [11:0]   inputs_1_payload_fragment_cha_q,
  input               inputs_2_valid,
  input               inputs_2_payload_last,
  input      [11:0]   inputs_2_payload_fragment_cha_i,
  input      [11:0]   inputs_2_payload_fragment_cha_q,
  input      [1:0]    select_1,
  output              output_valid,
  output              output_payload_last,
  output     [11:0]   output_payload_fragment_cha_i,
  output     [11:0]   output_payload_fragment_cha_q
);
  reg                 _zz_output_valid;
  reg                 _zz_output_payload_last;
  reg        [11:0]   _zz_output_payload_fragment_cha_i;
  reg        [11:0]   _zz_output_payload_fragment_cha_q;

  always @(*) begin
    case(select_1)
      2'b00 : begin
        _zz_output_valid = inputs_0_valid;
        _zz_output_payload_last = inputs_0_payload_last;
        _zz_output_payload_fragment_cha_i = inputs_0_payload_fragment_cha_i;
        _zz_output_payload_fragment_cha_q = inputs_0_payload_fragment_cha_q;
      end
      2'b01 : begin
        _zz_output_valid = inputs_1_valid;
        _zz_output_payload_last = inputs_1_payload_last;
        _zz_output_payload_fragment_cha_i = inputs_1_payload_fragment_cha_i;
        _zz_output_payload_fragment_cha_q = inputs_1_payload_fragment_cha_q;
      end
      default : begin
        _zz_output_valid = inputs_2_valid;
        _zz_output_payload_last = inputs_2_payload_last;
        _zz_output_payload_fragment_cha_i = inputs_2_payload_fragment_cha_i;
        _zz_output_payload_fragment_cha_q = inputs_2_payload_fragment_cha_q;
      end
    endcase
  end

  assign output_valid = _zz_output_valid;
  assign output_payload_last = _zz_output_payload_last;
  assign output_payload_fragment_cha_i = _zz_output_payload_fragment_cha_i;
  assign output_payload_fragment_cha_q = _zz_output_payload_fragment_cha_q;

endmodule

module mQAMMod (
  input               unit_data_valid,
  input               unit_data_payload_last,
  input      [3:0]    unit_data_payload_fragment,
  output reg          mod_iq_valid,
  output reg          mod_iq_payload_last,
  output reg [11:0]   mod_iq_payload_fragment_cha_i,
  output reg [11:0]   mod_iq_payload_fragment_cha_q,
  input               O,
  input               resetn
);
  reg        [11:0]   _zz_mod_iq_payload_fragment_cha_i;
  wire       [1:0]    _zz_mod_iq_payload_fragment_cha_i_1;
  reg        [11:0]   _zz_mod_iq_payload_fragment_cha_q;
  wire       [1:0]    _zz_mod_iq_payload_fragment_cha_q_1;
  wire       [11:0]   codeTableI_0;
  wire       [11:0]   codeTableI_1;
  wire       [11:0]   codeTableI_2;
  wire       [11:0]   codeTableI_3;
  wire       [11:0]   codeTableQ_0;
  wire       [11:0]   codeTableQ_1;
  wire       [11:0]   codeTableQ_2;
  wire       [11:0]   codeTableQ_3;
  reg                 unit_data_payload_regNext_last;
  reg        [3:0]    unit_data_payload_regNext_fragment;
  reg                 unit_valid;
  reg                 unit_last;
  wire       [1:0]    data_div_0;
  wire       [1:0]    data_div_1;

  assign _zz_mod_iq_payload_fragment_cha_i_1 = data_div_1;
  assign _zz_mod_iq_payload_fragment_cha_q_1 = data_div_0;
  always @(*) begin
    case(_zz_mod_iq_payload_fragment_cha_i_1)
      2'b00 : begin
        _zz_mod_iq_payload_fragment_cha_i = codeTableI_0;
      end
      2'b01 : begin
        _zz_mod_iq_payload_fragment_cha_i = codeTableI_1;
      end
      2'b10 : begin
        _zz_mod_iq_payload_fragment_cha_i = codeTableI_2;
      end
      default : begin
        _zz_mod_iq_payload_fragment_cha_i = codeTableI_3;
      end
    endcase
  end

  always @(*) begin
    case(_zz_mod_iq_payload_fragment_cha_q_1)
      2'b00 : begin
        _zz_mod_iq_payload_fragment_cha_q = codeTableQ_0;
      end
      2'b01 : begin
        _zz_mod_iq_payload_fragment_cha_q = codeTableQ_1;
      end
      2'b10 : begin
        _zz_mod_iq_payload_fragment_cha_q = codeTableQ_2;
      end
      default : begin
        _zz_mod_iq_payload_fragment_cha_q = codeTableQ_3;
      end
    endcase
  end

  assign codeTableI_0 = 12'hc35;
  assign codeTableQ_0 = 12'hc35;
  assign codeTableI_1 = 12'hebc;
  assign codeTableQ_1 = 12'hebc;
  assign codeTableI_2 = 12'h3ca;
  assign codeTableQ_2 = 12'h3ca;
  assign codeTableI_3 = 12'h143;
  assign codeTableQ_3 = 12'h143;
  assign data_div_0 = unit_data_payload_regNext_fragment[1 : 0];
  assign data_div_1 = unit_data_payload_regNext_fragment[3 : 2];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_i = _zz_mod_iq_payload_fragment_cha_i;
    end else begin
      mod_iq_payload_fragment_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_q = _zz_mod_iq_payload_fragment_cha_q;
    end else begin
      mod_iq_payload_fragment_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_last = unit_last;
    end else begin
      mod_iq_payload_last = 1'b0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge O) begin
    unit_data_payload_regNext_last <= unit_data_payload_last;
  end

  always @(posedge O) begin
    if(!resetn) begin
      unit_data_payload_regNext_fragment <= 4'b0000;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
    end else begin
      unit_data_payload_regNext_fragment <= unit_data_payload_fragment;
      unit_valid <= unit_data_valid;
      unit_last <= unit_data_payload_last;
    end
  end


endmodule

module mPSKMod_1 (
  input               unit_data_valid,
  input               unit_data_payload_last,
  input      [1:0]    unit_data_payload_fragment,
  output reg          mod_iq_valid,
  output reg          mod_iq_payload_last,
  output reg [11:0]   mod_iq_payload_fragment_cha_i,
  output reg [11:0]   mod_iq_payload_fragment_cha_q,
  input               O,
  input               resetn
);
  reg        [23:0]   _zz__zz_mod_iq_0;
  wire       [1:0]    _zz__zz_mod_iq_0_1;
  wire       [23:0]   codeTable_0;
  wire       [23:0]   codeTable_1;
  wire       [23:0]   codeTable_2;
  wire       [23:0]   codeTable_3;
  reg                 unit_data_payload_regNext_last;
  reg        [1:0]    unit_data_payload_regNext_fragment;
  reg                 unit_valid;
  reg                 unit_last;
  wire       [23:0]   _zz_mod_iq_0;
  wire       [11:0]   mod_iq_0;
  wire       [11:0]   mod_iq_1;

  assign _zz__zz_mod_iq_0_1 = unit_data_payload_regNext_fragment;
  always @(*) begin
    case(_zz__zz_mod_iq_0_1)
      2'b00 : begin
        _zz__zz_mod_iq_0 = codeTable_0;
      end
      2'b01 : begin
        _zz__zz_mod_iq_0 = codeTable_1;
      end
      2'b10 : begin
        _zz__zz_mod_iq_0 = codeTable_2;
      end
      default : begin
        _zz__zz_mod_iq_0 = codeTable_3;
      end
    endcase
  end

  assign codeTable_0 = 24'ha59a59;
  assign codeTable_1 = 24'ha595a7;
  assign codeTable_2 = 24'h5a7a59;
  assign codeTable_3 = 24'h5a75a7;
  assign _zz_mod_iq_0 = _zz__zz_mod_iq_0;
  assign mod_iq_0 = _zz_mod_iq_0[11 : 0];
  assign mod_iq_1 = _zz_mod_iq_0[23 : 12];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_i = mod_iq_1;
    end else begin
      mod_iq_payload_fragment_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_q = mod_iq_0;
    end else begin
      mod_iq_payload_fragment_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_last = unit_last;
    end else begin
      mod_iq_payload_last = 1'b0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge O) begin
    unit_data_payload_regNext_last <= unit_data_payload_last;
  end

  always @(posedge O) begin
    if(!resetn) begin
      unit_data_payload_regNext_fragment <= 2'b00;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
    end else begin
      unit_data_payload_regNext_fragment <= unit_data_payload_fragment;
      unit_valid <= unit_data_valid;
      unit_last <= unit_data_payload_last;
    end
  end


endmodule

module mPSKMod (
  input               unit_data_valid,
  input               unit_data_payload_last,
  input      [0:0]    unit_data_payload_fragment,
  output reg          mod_iq_valid,
  output reg          mod_iq_payload_last,
  output reg [11:0]   mod_iq_payload_fragment_cha_i,
  output reg [11:0]   mod_iq_payload_fragment_cha_q,
  input               O,
  input               resetn
);
  reg        [23:0]   _zz__zz_mod_iq_0;
  wire       [0:0]    _zz__zz_mod_iq_0_1;
  wire       [23:0]   codeTable_0;
  wire       [23:0]   codeTable_1;
  reg                 unit_data_payload_regNext_last;
  reg        [0:0]    unit_data_payload_regNext_fragment;
  reg                 unit_valid;
  reg                 unit_last;
  wire       [23:0]   _zz_mod_iq_0;
  wire       [11:0]   mod_iq_0;
  wire       [11:0]   mod_iq_1;

  assign _zz__zz_mod_iq_0_1 = unit_data_payload_regNext_fragment;
  always @(*) begin
    case(_zz__zz_mod_iq_0_1)
      1'b0 : begin
        _zz__zz_mod_iq_0 = codeTable_0;
      end
      default : begin
        _zz__zz_mod_iq_0 = codeTable_1;
      end
    endcase
  end

  assign codeTable_0 = 24'h801000;
  assign codeTable_1 = 24'h7ff000;
  assign _zz_mod_iq_0 = _zz__zz_mod_iq_0;
  assign mod_iq_0 = _zz_mod_iq_0[11 : 0];
  assign mod_iq_1 = _zz_mod_iq_0[23 : 12];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_i = mod_iq_1;
    end else begin
      mod_iq_payload_fragment_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_q = mod_iq_0;
    end else begin
      mod_iq_payload_fragment_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_last = unit_last;
    end else begin
      mod_iq_payload_last = 1'b0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge O) begin
    unit_data_payload_regNext_last <= unit_data_payload_last;
  end

  always @(posedge O) begin
    if(!resetn) begin
      unit_data_payload_regNext_fragment <= 1'b0;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
    end else begin
      unit_data_payload_regNext_fragment <= unit_data_payload_fragment;
      unit_valid <= unit_data_valid;
      unit_last <= unit_data_payload_last;
    end
  end


endmodule

module FlowDeMux (
  input               input_valid,
  input               input_payload_last,
  input      [7:0]    input_payload_fragment,
  input      [1:0]    select_1,
  output reg          outputs_0_valid,
  output reg          outputs_0_payload_last,
  output reg [7:0]    outputs_0_payload_fragment,
  output reg          outputs_1_valid,
  output reg          outputs_1_payload_last,
  output reg [7:0]    outputs_1_payload_fragment,
  output reg          outputs_2_valid,
  output reg          outputs_2_payload_last,
  output reg [7:0]    outputs_2_payload_fragment
);
  wire                when_FlowDeMux_l16;
  wire                when_FlowDeMux_l16_1;
  wire                when_FlowDeMux_l16_2;

  assign when_FlowDeMux_l16 = (2'b00 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l16) begin
      outputs_0_valid = 1'b0;
    end else begin
      outputs_0_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16) begin
      outputs_0_payload_last = 1'b0;
    end else begin
      outputs_0_payload_last = input_payload_last;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16) begin
      outputs_0_payload_fragment = 8'h0;
    end else begin
      outputs_0_payload_fragment = input_payload_fragment;
    end
  end

  assign when_FlowDeMux_l16_1 = (2'b01 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l16_1) begin
      outputs_1_valid = 1'b0;
    end else begin
      outputs_1_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_1) begin
      outputs_1_payload_last = 1'b0;
    end else begin
      outputs_1_payload_last = input_payload_last;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_1) begin
      outputs_1_payload_fragment = 8'h0;
    end else begin
      outputs_1_payload_fragment = input_payload_fragment;
    end
  end

  assign when_FlowDeMux_l16_2 = (2'b10 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l16_2) begin
      outputs_2_valid = 1'b0;
    end else begin
      outputs_2_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_2) begin
      outputs_2_payload_last = 1'b0;
    end else begin
      outputs_2_payload_last = input_payload_last;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_2) begin
      outputs_2_payload_fragment = 8'h0;
    end else begin
      outputs_2_payload_fragment = input_payload_fragment;
    end
  end


endmodule

module Scrambler (
  input               init_state_valid,
  input      [6:0]    init_state_payload,
  output              scram_data_valid,
  input               scram_data_ready,
  output     [15:0]   scram_data_payload,
  input               O,
  input               resetn
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
  always @(posedge O) begin
    if(!resetn) begin
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

  always @(posedge O) begin
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
  input               O,
  input               resetn
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
  always @(posedge O) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge O) begin
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

  always @(posedge O) begin
    if(!resetn) begin
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
  input               O,
  input               resetn
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
  always @(posedge O) begin
    if(!resetn) begin
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

  always @(posedge O) begin
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
  input               O,
  input               resetn
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
  always @(posedge O) begin
    if(!resetn) begin
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
  input               O,
  input               resetn
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
  always @(posedge O) begin
    if(!resetn) begin
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

  always @(posedge O) begin
    if(raw_data_fire) begin
      data_buf <= raw_data_payload;
    end else begin
      if(split_data_fire) begin
        data_buf <= (data_buf >>> 8);
      end
    end
  end


endmodule
