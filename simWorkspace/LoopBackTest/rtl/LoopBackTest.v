// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : LoopBackTest
// Git hash  : 8d2c64a14bad8227774c74e2a7d5ea571705d609

`timescale 1ns/1ps 

module LoopBackTest (
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
  input               trans_data_tvalid,
  output              trans_data_tready,
  input      [31:0]   trans_data_tdata,
  input      [3:0]    trans_data_tstrb,
  input      [3:0]    trans_data_tkeep,
  input               trans_data_tlast,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [7:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);

  wire       [11:0]   receiver_raw_data_payload_cha_i;
  wire       [11:0]   receiver_raw_data_payload_cha_q;
  wire                axi4_stream_fifo_io_push_ready;
  wire                axi4_stream_fifo_io_pop_valid;
  wire       [31:0]   axi4_stream_fifo_io_pop_payload_data;
  wire       [3:0]    axi4_stream_fifo_io_pop_payload_strb;
  wire       [3:0]    axi4_stream_fifo_io_pop_payload_keep_;
  wire                axi4_stream_fifo_io_pop_payload_last;
  wire       [8:0]    axi4_stream_fifo_io_occupancy;
  wire       [8:0]    axi4_stream_fifo_io_availability;
  wire       [6:0]    stream_package_gen_slices_cnt;
  wire                stream_package_gen_raw_data_tready;
  wire                stream_package_gen_pkg_data_valid;
  wire                stream_package_gen_pkg_data_payload_last;
  wire       [7:0]    stream_package_gen_pkg_data_payload_fragment;
  wire                trans_fifo_io_push_ready;
  wire                trans_fifo_io_pop_valid;
  wire                trans_fifo_io_pop_payload_last;
  wire       [7:0]    trans_fifo_io_pop_payload_fragment;
  wire       [8:0]    trans_fifo_io_occupancy;
  wire       [8:0]    trans_fifo_io_availability;
  wire                transmitter_raw_data_ready;
  wire                transmitter_rf_data_valid;
  wire       [11:0]   transmitter_rf_data_payload_cha_i;
  wire       [11:0]   transmitter_rf_data_payload_cha_q;
  wire                trans_to_recv_fifo_io_push_ready;
  wire                trans_to_recv_fifo_io_pop_valid;
  wire       [11:0]   trans_to_recv_fifo_io_pop_payload_cha_i;
  wire       [11:0]   trans_to_recv_fifo_io_pop_payload_cha_q;
  wire       [10:0]   trans_to_recv_fifo_io_occupancy;
  wire       [10:0]   trans_to_recv_fifo_io_availability;
  wire                receiver_result_data_valid;
  wire                receiver_result_data_payload_last;
  wire       [7:0]    receiver_result_data_payload_fragment;
  wire       [6:0]    clkCrossing_10_dataOut;
  wire       [6:0]    clkCrossing_11_dataOut;
  wire                clkCrossing_12_dataOut;
  wire       [3:0]    clkCrossing_13_dataOut;
  wire       [3:0]    clkCrossing_14_dataOut;
  wire       [1:0]    clkCrossing_15_dataOut;
  wire       [1:0]    clkCrossing_16_dataOut;
  wire                clkCrossing_17_dataOut;
  wire       [7:0]    clkCrossing_18_dataOut;
  wire       [5:0]    clkCrossing_19_dataOut;
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
  reg                 axil4Ctrl_ar_rValid;
  reg        [7:0]    axil4Ctrl_ar_rData_addr;
  reg        [2:0]    axil4Ctrl_ar_rData_prot;
  wire                when_Stream_l342_1;
  reg        [31:0]   readRsp_data;
  wire       [1:0]    readRsp_resp;
  wire                _zz_axil4Ctrl_rvalid;
  wire                writeOccur;
  wire                readOccur;
  wire       [6:0]    pkg_gen_bridge_slices_limit;
  wire       [6:0]    pkg_gen_bridge_slices_cnt;
  reg        [6:0]    pkg_gen_bridge_slices_limit_driver;
  wire                transmitter_bridge_div_enable;
  wire       [3:0]    transmitter_bridge_div_cnt_step;
  wire       [3:0]    transmitter_bridge_div_cnt_limit;
  reg                 transmitter_bridge_div_enable_driver;
  reg        [3:0]    transmitter_bridge_div_cnt_step_driver;
  reg        [3:0]    transmitter_bridge_div_cnt_limit_driver;
  wire       [1:0]    transmitter_bridge_mod_method_select;
  reg        [1:0]    transmitter_bridge_mod_method_select_driver;
  wire       [1:0]    receiver_bridge_pa_shift_bias;
  wire                receiver_bridge_pa_shift_dir;
  reg        [1:0]    receiver_bridge_pa_shift_bias_driver;
  reg                 receiver_bridge_pa_shift_dir_driver;
  wire       [7:0]    receiver_bridge_min_plateau;
  reg        [7:0]    receiver_bridge_min_plateau_driver;
  wire       [5:0]    receiver_bridge_phase_corrector_shift;
  reg        [5:0]    receiver_bridge_phase_corrector_shift_driver;

  StreamFifo_16 axi4_stream_fifo (
    .io_push_valid            (trans_data_tvalid                           ), //i
    .io_push_ready            (axi4_stream_fifo_io_push_ready              ), //o
    .io_push_payload_data     (trans_data_tdata[31:0]                      ), //i
    .io_push_payload_strb     (trans_data_tstrb[3:0]                       ), //i
    .io_push_payload_keep_    (trans_data_tkeep[3:0]                       ), //i
    .io_push_payload_last     (trans_data_tlast                            ), //i
    .io_pop_valid             (axi4_stream_fifo_io_pop_valid               ), //o
    .io_pop_ready             (stream_package_gen_raw_data_tready          ), //i
    .io_pop_payload_data      (axi4_stream_fifo_io_pop_payload_data[31:0]  ), //o
    .io_pop_payload_strb      (axi4_stream_fifo_io_pop_payload_strb[3:0]   ), //o
    .io_pop_payload_keep_     (axi4_stream_fifo_io_pop_payload_keep_[3:0]  ), //o
    .io_pop_payload_last      (axi4_stream_fifo_io_pop_payload_last        ), //o
    .io_flush                 (1'b0                                        ), //i
    .io_occupancy             (axi4_stream_fifo_io_occupancy[8:0]          ), //o
    .io_availability          (axi4_stream_fifo_io_availability[8:0]       ), //o
    .clk                      (clk                                         ), //i
    .reset                    (reset                                       )  //i
  );
  StreamPkgGen stream_package_gen (
    .slices_limit                 (clkCrossing_10_dataOut[6:0]                        ), //i
    .slices_cnt                   (stream_package_gen_slices_cnt[6:0]                 ), //o
    .raw_data_tvalid              (axi4_stream_fifo_io_pop_valid                      ), //i
    .raw_data_tready              (stream_package_gen_raw_data_tready                 ), //o
    .raw_data_tdata               (axi4_stream_fifo_io_pop_payload_data[31:0]         ), //i
    .raw_data_tstrb               (axi4_stream_fifo_io_pop_payload_strb[3:0]          ), //i
    .raw_data_tlast               (axi4_stream_fifo_io_pop_payload_last               ), //i
    .pkg_data_valid               (stream_package_gen_pkg_data_valid                  ), //o
    .pkg_data_ready               (trans_fifo_io_push_ready                           ), //i
    .pkg_data_payload_last        (stream_package_gen_pkg_data_payload_last           ), //o
    .pkg_data_payload_fragment    (stream_package_gen_pkg_data_payload_fragment[7:0]  ), //o
    .clk                          (clk                                                ), //i
    .reset                        (reset                                              )  //i
  );
  StreamFifo_17 trans_fifo (
    .io_push_valid               (stream_package_gen_pkg_data_valid                  ), //i
    .io_push_ready               (trans_fifo_io_push_ready                           ), //o
    .io_push_payload_last        (stream_package_gen_pkg_data_payload_last           ), //i
    .io_push_payload_fragment    (stream_package_gen_pkg_data_payload_fragment[7:0]  ), //i
    .io_pop_valid                (trans_fifo_io_pop_valid                            ), //o
    .io_pop_ready                (transmitter_raw_data_ready                         ), //i
    .io_pop_payload_last         (trans_fifo_io_pop_payload_last                     ), //o
    .io_pop_payload_fragment     (trans_fifo_io_pop_payload_fragment[7:0]            ), //o
    .io_flush                    (1'b0                                               ), //i
    .io_occupancy                (trans_fifo_io_occupancy[8:0]                       ), //o
    .io_availability             (trans_fifo_io_availability[8:0]                    ), //o
    .clk                         (clk                                                ), //i
    .reset                       (reset                                              )  //i
  );
  TX transmitter (
    .raw_data_valid               (trans_fifo_io_pop_valid                  ), //i
    .raw_data_ready               (transmitter_raw_data_ready               ), //o
    .raw_data_payload_last        (trans_fifo_io_pop_payload_last           ), //i
    .raw_data_payload_fragment    (trans_fifo_io_pop_payload_fragment[7:0]  ), //i
    .rf_data_valid                (transmitter_rf_data_valid                ), //o
    .rf_data_ready                (trans_to_recv_fifo_io_push_ready         ), //i
    .rf_data_payload_cha_i        (transmitter_rf_data_payload_cha_i[11:0]  ), //o
    .rf_data_payload_cha_q        (transmitter_rf_data_payload_cha_q[11:0]  ), //o
    .div_enable                   (clkCrossing_12_dataOut                   ), //i
    .div_cnt_step                 (clkCrossing_13_dataOut[3:0]              ), //i
    .div_cnt_limit                (clkCrossing_14_dataOut[3:0]              ), //i
    .mod_method_select            (clkCrossing_15_dataOut[1:0]              ), //i
    .clk                          (clk                                      ), //i
    .reset                        (reset                                    )  //i
  );
  StreamFifo_18 trans_to_recv_fifo (
    .io_push_valid            (transmitter_rf_data_valid                      ), //i
    .io_push_ready            (trans_to_recv_fifo_io_push_ready               ), //o
    .io_push_payload_cha_i    (transmitter_rf_data_payload_cha_i[11:0]        ), //i
    .io_push_payload_cha_q    (transmitter_rf_data_payload_cha_q[11:0]        ), //i
    .io_pop_valid             (trans_to_recv_fifo_io_pop_valid                ), //o
    .io_pop_ready             (1'b1                                           ), //i
    .io_pop_payload_cha_i     (trans_to_recv_fifo_io_pop_payload_cha_i[11:0]  ), //o
    .io_pop_payload_cha_q     (trans_to_recv_fifo_io_pop_payload_cha_q[11:0]  ), //o
    .io_flush                 (1'b0                                           ), //i
    .io_occupancy             (trans_to_recv_fifo_io_occupancy[10:0]          ), //o
    .io_availability          (trans_to_recv_fifo_io_availability[10:0]       ), //o
    .clk                      (clk                                            ), //i
    .reset                    (reset                                          )  //i
  );
  RX receiver (
    .raw_data_valid                  (1'b1                                        ), //i
    .raw_data_payload_cha_i          (receiver_raw_data_payload_cha_i[11:0]       ), //i
    .raw_data_payload_cha_q          (receiver_raw_data_payload_cha_q[11:0]       ), //i
    .result_data_valid               (receiver_result_data_valid                  ), //o
    .result_data_ready               (result_data_ready                           ), //i
    .result_data_payload_last        (receiver_result_data_payload_last           ), //o
    .result_data_payload_fragment    (receiver_result_data_payload_fragment[7:0]  ), //o
    .pa_shift_bias                   (clkCrossing_16_dataOut[1:0]                 ), //i
    .pa_shift_dir                    (clkCrossing_17_dataOut                      ), //i
    .min_plateau                     (clkCrossing_18_dataOut[7:0]                 ), //i
    .phase_corrector_shift           (clkCrossing_19_dataOut[5:0]                 ), //i
    .clk                             (clk                                         ), //i
    .reset                           (reset                                       )  //i
  );
  ClkCrossing clkCrossing_10 (
    .dataIn     (pkg_gen_bridge_slices_limit[6:0]  ), //i
    .dataOut    (clkCrossing_10_dataOut[6:0]       ), //o
    .clk        (clk                               ), //i
    .reset      (reset                             )  //i
  );
  ClkCrossing clkCrossing_11 (
    .dataIn     (stream_package_gen_slices_cnt[6:0]  ), //i
    .dataOut    (clkCrossing_11_dataOut[6:0]         ), //o
    .clk        (clk                                 ), //i
    .reset      (reset                               )  //i
  );
  ClkCrossing_2 clkCrossing_12 (
    .dataIn     (transmitter_bridge_div_enable  ), //i
    .dataOut    (clkCrossing_12_dataOut         ), //o
    .clk        (clk                            ), //i
    .reset      (reset                          )  //i
  );
  ClkCrossing_3 clkCrossing_13 (
    .dataIn     (transmitter_bridge_div_cnt_step[3:0]  ), //i
    .dataOut    (clkCrossing_13_dataOut[3:0]           ), //o
    .clk        (clk                                   ), //i
    .reset      (reset                                 )  //i
  );
  ClkCrossing_3 clkCrossing_14 (
    .dataIn     (transmitter_bridge_div_cnt_limit[3:0]  ), //i
    .dataOut    (clkCrossing_14_dataOut[3:0]            ), //o
    .clk        (clk                                    ), //i
    .reset      (reset                                  )  //i
  );
  ClkCrossing_5 clkCrossing_15 (
    .dataIn     (transmitter_bridge_mod_method_select[1:0]  ), //i
    .dataOut    (clkCrossing_15_dataOut[1:0]                ), //o
    .clk        (clk                                        ), //i
    .reset      (reset                                      )  //i
  );
  ClkCrossing_5 clkCrossing_16 (
    .dataIn     (receiver_bridge_pa_shift_bias[1:0]  ), //i
    .dataOut    (clkCrossing_16_dataOut[1:0]         ), //o
    .clk        (clk                                 ), //i
    .reset      (reset                               )  //i
  );
  ClkCrossing_2 clkCrossing_17 (
    .dataIn     (receiver_bridge_pa_shift_dir  ), //i
    .dataOut    (clkCrossing_17_dataOut        ), //o
    .clk        (clk                           ), //i
    .reset      (reset                         )  //i
  );
  ClkCrossing_8 clkCrossing_18 (
    .dataIn     (receiver_bridge_min_plateau[7:0]  ), //i
    .dataOut    (clkCrossing_18_dataOut[7:0]       ), //o
    .clk        (clk                               ), //i
    .reset      (reset                             )  //i
  );
  ClkCrossing_9 clkCrossing_19 (
    .dataIn     (receiver_bridge_phase_corrector_shift[5:0]  ), //i
    .dataOut    (clkCrossing_19_dataOut[5:0]                 ), //o
    .clk        (clk                                         ), //i
    .reset      (reset                                       )  //i
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
    axil4Ctrl_arready = readDataStage_ready;
    if(when_Stream_l342_1) begin
      axil4Ctrl_arready = 1'b1;
    end
  end

  assign when_Stream_l342_1 = (! readDataStage_valid);
  assign readDataStage_valid = axil4Ctrl_ar_rValid;
  assign readDataStage_payload_addr = axil4Ctrl_ar_rData_addr;
  assign readDataStage_payload_prot = axil4Ctrl_ar_rData_prot;
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
      8'h0 : begin
        readRsp_data[6 : 0] = pkg_gen_bridge_slices_limit_driver;
      end
      8'h04 : begin
        readRsp_data[6 : 0] = pkg_gen_bridge_slices_cnt;
      end
      8'h10 : begin
        readRsp_data[0 : 0] = transmitter_bridge_div_enable_driver;
      end
      8'h14 : begin
        readRsp_data[3 : 0] = transmitter_bridge_div_cnt_step_driver;
      end
      8'h18 : begin
        readRsp_data[3 : 0] = transmitter_bridge_div_cnt_limit_driver;
      end
      8'h20 : begin
        readRsp_data[1 : 0] = transmitter_bridge_mod_method_select_driver;
      end
      8'h40 : begin
        readRsp_data[1 : 0] = receiver_bridge_pa_shift_bias_driver;
      end
      8'h44 : begin
        readRsp_data[0 : 0] = receiver_bridge_pa_shift_dir_driver;
      end
      8'h4c : begin
        readRsp_data[7 : 0] = receiver_bridge_min_plateau_driver;
      end
      8'h60 : begin
        readRsp_data[5 : 0] = receiver_bridge_phase_corrector_shift_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign trans_data_tready = axi4_stream_fifo_io_push_ready;
  assign receiver_raw_data_payload_cha_i = (trans_to_recv_fifo_io_pop_valid ? trans_to_recv_fifo_io_pop_payload_cha_i : 12'h0);
  assign receiver_raw_data_payload_cha_q = (trans_to_recv_fifo_io_pop_valid ? trans_to_recv_fifo_io_pop_payload_cha_q : 12'h0);
  assign result_data_valid = receiver_result_data_valid;
  assign result_data_payload_last = receiver_result_data_payload_last;
  assign result_data_payload_fragment = receiver_result_data_payload_fragment;
  assign pkg_gen_bridge_slices_limit = pkg_gen_bridge_slices_limit_driver;
  assign pkg_gen_bridge_slices_cnt = clkCrossing_11_dataOut;
  assign transmitter_bridge_div_enable = transmitter_bridge_div_enable_driver;
  assign transmitter_bridge_div_cnt_step = transmitter_bridge_div_cnt_step_driver;
  assign transmitter_bridge_div_cnt_limit = transmitter_bridge_div_cnt_limit_driver;
  assign transmitter_bridge_mod_method_select = transmitter_bridge_mod_method_select_driver;
  assign receiver_bridge_pa_shift_bias = receiver_bridge_pa_shift_bias_driver;
  assign receiver_bridge_pa_shift_dir = receiver_bridge_pa_shift_dir_driver;
  assign receiver_bridge_min_plateau = receiver_bridge_min_plateau_driver;
  assign receiver_bridge_phase_corrector_shift = receiver_bridge_phase_corrector_shift_driver;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      transmitter_bridge_div_enable_driver <= 1'b0;
      transmitter_bridge_div_cnt_step_driver <= 4'b0000;
      transmitter_bridge_div_cnt_limit_driver <= 4'b0000;
      transmitter_bridge_mod_method_select_driver <= 2'b00;
      receiver_bridge_pa_shift_bias_driver <= 2'b00;
      receiver_bridge_pa_shift_dir_driver <= 1'b0;
      receiver_bridge_min_plateau_driver <= 8'h0;
      receiver_bridge_phase_corrector_shift_driver <= 6'h1d;
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
            transmitter_bridge_div_enable_driver <= axil4Ctrl_wdata[0];
          end
        end
        8'h14 : begin
          if(writeOccur) begin
            transmitter_bridge_div_cnt_step_driver <= axil4Ctrl_wdata[3 : 0];
          end
        end
        8'h18 : begin
          if(writeOccur) begin
            transmitter_bridge_div_cnt_limit_driver <= axil4Ctrl_wdata[3 : 0];
          end
        end
        8'h20 : begin
          if(writeOccur) begin
            transmitter_bridge_mod_method_select_driver <= axil4Ctrl_wdata[1 : 0];
          end
        end
        8'h40 : begin
          if(writeOccur) begin
            receiver_bridge_pa_shift_bias_driver <= axil4Ctrl_wdata[1 : 0];
          end
        end
        8'h44 : begin
          if(writeOccur) begin
            receiver_bridge_pa_shift_dir_driver <= axil4Ctrl_wdata[0];
          end
        end
        8'h4c : begin
          if(writeOccur) begin
            receiver_bridge_min_plateau_driver <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'h60 : begin
          if(writeOccur) begin
            receiver_bridge_phase_corrector_shift_driver <= axil4Ctrl_wdata[5 : 0];
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

module ClkCrossing_9 (
  input      [5:0]    dataIn,
  output     [5:0]    dataOut,
  input               clk,
  input               reset
);

  reg        [5:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [5:0]    area_clkO_buf0;
  reg        [5:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module ClkCrossing_8 (
  input      [7:0]    dataIn,
  output     [7:0]    dataOut,
  input               clk,
  input               reset
);

  reg        [7:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [7:0]    area_clkO_buf0;
  reg        [7:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

//ClkCrossing_2 replaced by ClkCrossing_2

//ClkCrossing_5 replaced by ClkCrossing_5

module ClkCrossing_5 (
  input      [1:0]    dataIn,
  output     [1:0]    dataOut,
  input               clk,
  input               reset
);

  reg        [1:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [1:0]    area_clkO_buf0;
  reg        [1:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

//ClkCrossing_3 replaced by ClkCrossing_3

module ClkCrossing_3 (
  input      [3:0]    dataIn,
  output     [3:0]    dataOut,
  input               clk,
  input               reset
);

  reg        [3:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [3:0]    area_clkO_buf0;
  reg        [3:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module ClkCrossing_2 (
  input               dataIn,
  output              dataOut,
  input               clk,
  input               reset
);

  reg                 area_clkI_reg;
  (* async_reg = "true" *) reg                 area_clkO_buf0;
  reg                 area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
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

module RX (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [7:0]    result_data_payload_fragment,
  input      [1:0]    pa_shift_bias,
  input               pa_shift_dir,
  input      [7:0]    min_plateau,
  input      [5:0]    phase_corrector_shift,
  input               clk,
  input               reset
);

  wire                phy_rx_crc_checker_raw_data_valid;
  wire       [7:0]    phy_rx_crc_checker_raw_data_payload_fragment;
  wire                phy_rx_decoder_decoded_data_toStream_fifo_io_pop_ready;
  wire                datatype_convert_result_data_valid;
  wire       [11:0]   datatype_convert_result_data_payload_cha_i;
  wire       [11:0]   datatype_convert_result_data_payload_cha_q;
  wire                phy_rx_power_adjustor_adjusted_data_valid;
  wire       [11:0]   phy_rx_power_adjustor_adjusted_data_payload_cha_i;
  wire       [11:0]   phy_rx_power_adjustor_adjusted_data_payload_cha_q;
  wire                phy_rx_preamble_detector_result_data_valid;
  wire       [11:0]   phy_rx_preamble_detector_result_data_payload_cha_i;
  wire       [11:0]   phy_rx_preamble_detector_result_data_payload_cha_q;
  wire                phy_rx_preamble_detector_pkg_handling;
  wire                phy_rx_cfo_result_data_valid;
  wire       [11:0]   phy_rx_cfo_result_data_payload_cha_i;
  wire       [11:0]   phy_rx_cfo_result_data_payload_cha_q;
  wire                phy_rx_cfo_phase_corrected;
  wire                phy_rx_filter_result_data_valid;
  wire       [11:0]   phy_rx_filter_result_data_payload_cha_i;
  wire       [11:0]   phy_rx_filter_result_data_payload_cha_q;
  wire                phy_rx_decimator_result_data_valid;
  wire       [11:0]   phy_rx_decimator_result_data_payload_cha_i;
  wire       [11:0]   phy_rx_decimator_result_data_payload_cha_q;
  wire                phy_rx_header_extender_result_data_valid;
  wire       [11:0]   phy_rx_header_extender_result_data_payload_cha_i;
  wire       [11:0]   phy_rx_header_extender_result_data_payload_cha_q;
  wire                phy_rx_header_extender_sdf_not_found;
  wire                phy_rx_header_extender_header_message_valid;
  wire       [7:0]    phy_rx_header_extender_header_message_payload_pkg_size;
  wire       [1:0]    phy_rx_header_extender_header_message_payload_demod_method;
  wire       [7:0]    phy_rx_header_extender_package_size;
  wire                phy_rx_demodulator_result_data_valid;
  wire                phy_rx_demodulator_result_data_payload_last;
  wire       [7:0]    phy_rx_demodulator_result_data_payload_fragment;
  wire                phy_rx_data_combination_result_data_valid;
  wire                phy_rx_data_combination_result_data_payload_last;
  wire       [15:0]   phy_rx_data_combination_result_data_payload_fragment;
  wire                phy_rx_descrambling_result_data_valid;
  wire                phy_rx_descrambling_result_data_payload_last;
  wire       [15:0]   phy_rx_descrambling_result_data_payload_fragment;
  wire                de_scrambling_to_de_puncher_fifo_io_push_ready;
  wire                de_scrambling_to_de_puncher_fifo_io_pop_valid;
  wire                de_scrambling_to_de_puncher_fifo_io_pop_payload_last;
  wire       [15:0]   de_scrambling_to_de_puncher_fifo_io_pop_payload_fragment;
  wire       [6:0]    de_scrambling_to_de_puncher_fifo_io_occupancy;
  wire       [6:0]    de_scrambling_to_de_puncher_fifo_io_availability;
  wire                phy_rx_de_puncher_raw_data_ready;
  wire                phy_rx_de_puncher_de_punched_data_valid;
  wire                phy_rx_de_puncher_de_punched_data_payload_last;
  wire       [1:0]    phy_rx_de_puncher_de_punched_data_payload_fragment_data;
  wire       [1:0]    phy_rx_de_puncher_de_punched_data_payload_fragment_indicate;
  wire                phy_rx_decoder_raw_data_ready;
  wire                phy_rx_decoder_decoded_data_valid;
  wire                phy_rx_decoder_decoded_data_payload_last;
  wire       [0:0]    phy_rx_decoder_decoded_data_payload_fragment;
  wire                phy_rx_de_puncher_de_punched_data_fifo_io_push_ready;
  wire                phy_rx_de_puncher_de_punched_data_fifo_io_pop_valid;
  wire                phy_rx_de_puncher_de_punched_data_fifo_io_pop_payload_last;
  wire       [1:0]    phy_rx_de_puncher_de_punched_data_fifo_io_pop_payload_fragment_data;
  wire       [1:0]    phy_rx_de_puncher_de_punched_data_fifo_io_pop_payload_fragment_indicate;
  wire       [5:0]    phy_rx_de_puncher_de_punched_data_fifo_io_occupancy;
  wire       [5:0]    phy_rx_de_puncher_de_punched_data_fifo_io_availability;
  wire                phy_rx_crc_checker_raw_data_ready;
  wire                phy_rx_crc_checker_result_data_valid;
  wire                phy_rx_crc_checker_result_data_payload_last;
  wire       [7:0]    phy_rx_crc_checker_result_data_payload_fragment;
  wire                phy_rx_crc_checker_phy_rx_finish;
  wire                phy_rx_decoder_decoded_data_toStream_fifo_io_push_ready;
  wire                phy_rx_decoder_decoded_data_toStream_fifo_io_pop_valid;
  wire                phy_rx_decoder_decoded_data_toStream_fifo_io_pop_payload_last;
  wire       [0:0]    phy_rx_decoder_decoded_data_toStream_fifo_io_pop_payload_fragment;
  wire       [5:0]    phy_rx_decoder_decoded_data_toStream_fifo_io_occupancy;
  wire       [5:0]    phy_rx_decoder_decoded_data_toStream_fifo_io_availability;
  wire       [2:0]    _zz__zz_raw_data_valid_1;
  wire       [0:0]    _zz__zz_raw_data_valid_1_1;
  wire       [5:0]    _zz__zz_raw_data_payload_fragment;
  wire                phy_rx_reset;
  wire                phy_rx_descrambling_result_data_toStream_valid;
  wire                phy_rx_descrambling_result_data_toStream_ready;
  wire                phy_rx_descrambling_result_data_toStream_payload_last;
  wire       [15:0]   phy_rx_descrambling_result_data_toStream_payload_fragment;
  wire                phy_rx_decoder_decoded_data_toStream_valid;
  wire                phy_rx_decoder_decoded_data_toStream_ready;
  wire                phy_rx_decoder_decoded_data_toStream_payload_last;
  wire       [0:0]    phy_rx_decoder_decoded_data_toStream_payload_fragment;
  wire                phy_rx_decoder_decoded_data_toStream_fifo_io_pop_fire;
  reg                 _zz_raw_data_valid;
  reg        [2:0]    _zz_raw_data_valid_1;
  reg        [2:0]    _zz_raw_data_valid_2;
  wire                _zz_raw_data_valid_3;
  reg        [6:0]    _zz_raw_data_payload_fragment;
  wire                phy_rx_decoder_decoded_data_toStream_fifo_io_pop_fire_1;

  assign _zz__zz_raw_data_valid_1_1 = _zz_raw_data_valid;
  assign _zz__zz_raw_data_valid_1 = {2'd0, _zz__zz_raw_data_valid_1_1};
  assign _zz__zz_raw_data_payload_fragment = (_zz_raw_data_payload_fragment >>> 1);
  PhyRxInterfaceIQ2modIQ datatype_convert (
    .raw_data_valid               (raw_data_valid                                    ), //i
    .raw_data_payload_cha_i       (raw_data_payload_cha_i[11:0]                      ), //i
    .raw_data_payload_cha_q       (raw_data_payload_cha_q[11:0]                      ), //i
    .result_data_valid            (datatype_convert_result_data_valid                ), //o
    .result_data_payload_cha_i    (datatype_convert_result_data_payload_cha_i[11:0]  ), //o
    .result_data_payload_cha_q    (datatype_convert_result_data_payload_cha_q[11:0]  )  //o
  );
  PowerAdjustor phy_rx_power_adjustor (
    .raw_data_valid                 (datatype_convert_result_data_valid                       ), //i
    .raw_data_payload_cha_i         (datatype_convert_result_data_payload_cha_i[11:0]         ), //i
    .raw_data_payload_cha_q         (datatype_convert_result_data_payload_cha_q[11:0]         ), //i
    .adjusted_data_valid            (phy_rx_power_adjustor_adjusted_data_valid                ), //o
    .adjusted_data_payload_cha_i    (phy_rx_power_adjustor_adjusted_data_payload_cha_i[11:0]  ), //o
    .adjusted_data_payload_cha_q    (phy_rx_power_adjustor_adjusted_data_payload_cha_q[11:0]  ), //o
    .shift_bias                     (pa_shift_bias[1:0]                                       ), //i
    .shift_dir                      (pa_shift_dir                                             ), //i
    .clk                            (clk                                                      ), //i
    .reset                          (reset                                                    )  //i
  );
  PhyRxPreambleDetector phy_rx_preamble_detector (
    .raw_data_valid               (phy_rx_power_adjustor_adjusted_data_valid                 ), //i
    .raw_data_payload_cha_i       (phy_rx_power_adjustor_adjusted_data_payload_cha_i[11:0]   ), //i
    .raw_data_payload_cha_q       (phy_rx_power_adjustor_adjusted_data_payload_cha_q[11:0]   ), //i
    .result_data_valid            (phy_rx_preamble_detector_result_data_valid                ), //o
    .result_data_payload_cha_i    (phy_rx_preamble_detector_result_data_payload_cha_i[11:0]  ), //o
    .result_data_payload_cha_q    (phy_rx_preamble_detector_result_data_payload_cha_q[11:0]  ), //o
    .min_plateau                  (min_plateau[7:0]                                          ), //i
    .detector_reset               (phy_rx_reset                                              ), //i
    .pkg_handling                 (phy_rx_preamble_detector_pkg_handling                     ), //o
    .clk                          (clk                                                       ), //i
    .reset                        (reset                                                     )  //i
  );
  PhyRxCFO phy_rx_cfo (
    .raw_data_valid               (phy_rx_preamble_detector_result_data_valid                ), //i
    .raw_data_payload_cha_i       (phy_rx_preamble_detector_result_data_payload_cha_i[11:0]  ), //i
    .raw_data_payload_cha_q       (phy_rx_preamble_detector_result_data_payload_cha_q[11:0]  ), //i
    .result_data_valid            (phy_rx_cfo_result_data_valid                              ), //o
    .result_data_payload_cha_i    (phy_rx_cfo_result_data_payload_cha_i[11:0]                ), //o
    .result_data_payload_cha_q    (phy_rx_cfo_result_data_payload_cha_q[11:0]                ), //o
    .phase_corrector_shift        (phase_corrector_shift[5:0]                                ), //i
    .cfo_reset                    (phy_rx_reset                                              ), //i
    .pkg_detected                 (phy_rx_preamble_detector_pkg_handling                     ), //i
    .phase_corrected              (phy_rx_cfo_phase_corrected                                ), //o
    .clk                          (clk                                                       ), //i
    .reset                        (reset                                                     )  //i
  );
  PhyRxFilter phy_rx_filter (
    .raw_data_valid               (phy_rx_cfo_result_data_valid                   ), //i
    .raw_data_payload_cha_i       (phy_rx_cfo_result_data_payload_cha_i[11:0]     ), //i
    .raw_data_payload_cha_q       (phy_rx_cfo_result_data_payload_cha_q[11:0]     ), //i
    .result_data_valid            (phy_rx_filter_result_data_valid                ), //o
    .result_data_payload_cha_i    (phy_rx_filter_result_data_payload_cha_i[11:0]  ), //o
    .result_data_payload_cha_q    (phy_rx_filter_result_data_payload_cha_q[11:0]  ), //o
    .clk                          (clk                                            ), //i
    .reset                        (reset                                          )  //i
  );
  PhyRxDecimator phy_rx_decimator (
    .raw_data_valid               (phy_rx_filter_result_data_valid                   ), //i
    .raw_data_payload_cha_i       (phy_rx_filter_result_data_payload_cha_i[11:0]     ), //i
    .raw_data_payload_cha_q       (phy_rx_filter_result_data_payload_cha_q[11:0]     ), //i
    .result_data_valid            (phy_rx_decimator_result_data_valid                ), //o
    .result_data_payload_cha_i    (phy_rx_decimator_result_data_payload_cha_i[11:0]  ), //o
    .result_data_payload_cha_q    (phy_rx_decimator_result_data_payload_cha_q[11:0]  ), //o
    .enable                       (phy_rx_cfo_phase_corrected                        ), //i
    .clk                          (clk                                               ), //i
    .reset                        (reset                                             )  //i
  );
  PhyRxHeaderExtender phy_rx_header_extender (
    .raw_data_valid                         (phy_rx_decimator_result_data_valid                               ), //i
    .raw_data_payload_cha_i                 (phy_rx_decimator_result_data_payload_cha_i[11:0]                 ), //i
    .raw_data_payload_cha_q                 (phy_rx_decimator_result_data_payload_cha_q[11:0]                 ), //i
    .result_data_valid                      (phy_rx_header_extender_result_data_valid                         ), //o
    .result_data_payload_cha_i              (phy_rx_header_extender_result_data_payload_cha_i[11:0]           ), //o
    .result_data_payload_cha_q              (phy_rx_header_extender_result_data_payload_cha_q[11:0]           ), //o
    .sdf_not_found                          (phy_rx_header_extender_sdf_not_found                             ), //o
    .header_extender_reset                  (phy_rx_reset                                                     ), //i
    .header_message_valid                   (phy_rx_header_extender_header_message_valid                      ), //o
    .header_message_payload_pkg_size        (phy_rx_header_extender_header_message_payload_pkg_size[7:0]      ), //o
    .header_message_payload_demod_method    (phy_rx_header_extender_header_message_payload_demod_method[1:0]  ), //o
    .package_size                           (phy_rx_header_extender_package_size[7:0]                         ), //o
    .clk                                    (clk                                                              ), //i
    .reset                                  (reset                                                            )  //i
  );
  PhyRxDemodulator phy_rx_demodulator (
    .raw_data_valid                         (phy_rx_header_extender_result_data_valid                         ), //i
    .raw_data_payload_cha_i                 (phy_rx_header_extender_result_data_payload_cha_i[11:0]           ), //i
    .raw_data_payload_cha_q                 (phy_rx_header_extender_result_data_payload_cha_q[11:0]           ), //i
    .result_data_valid                      (phy_rx_demodulator_result_data_valid                             ), //o
    .result_data_payload_last               (phy_rx_demodulator_result_data_payload_last                      ), //o
    .result_data_payload_fragment           (phy_rx_demodulator_result_data_payload_fragment[7:0]             ), //o
    .header_message_valid                   (phy_rx_header_extender_header_message_valid                      ), //i
    .header_message_payload_pkg_size        (phy_rx_header_extender_header_message_payload_pkg_size[7:0]      ), //i
    .header_message_payload_demod_method    (phy_rx_header_extender_header_message_payload_demod_method[1:0]  ), //i
    .clk                                    (clk                                                              ), //i
    .reset                                  (reset                                                            )  //i
  );
  PhyRxDataCombination phy_rx_data_combination (
    .raw_data_valid                         (phy_rx_demodulator_result_data_valid                             ), //i
    .raw_data_payload_last                  (phy_rx_demodulator_result_data_payload_last                      ), //i
    .raw_data_payload_fragment              (phy_rx_demodulator_result_data_payload_fragment[7:0]             ), //i
    .result_data_valid                      (phy_rx_data_combination_result_data_valid                        ), //o
    .result_data_payload_last               (phy_rx_data_combination_result_data_payload_last                 ), //o
    .result_data_payload_fragment           (phy_rx_data_combination_result_data_payload_fragment[15:0]       ), //o
    .header_message_valid                   (phy_rx_header_extender_header_message_valid                      ), //i
    .header_message_payload_pkg_size        (phy_rx_header_extender_header_message_payload_pkg_size[7:0]      ), //i
    .header_message_payload_demod_method    (phy_rx_header_extender_header_message_payload_demod_method[1:0]  ), //i
    .enable                                 (phy_rx_cfo_phase_corrected                                       ), //i
    .clk                                    (clk                                                              ), //i
    .reset                                  (reset                                                            )  //i
  );
  PhyRxDescrambling phy_rx_descrambling (
    .raw_data_valid                  (phy_rx_data_combination_result_data_valid                   ), //i
    .raw_data_payload_last           (phy_rx_data_combination_result_data_payload_last            ), //i
    .raw_data_payload_fragment       (phy_rx_data_combination_result_data_payload_fragment[15:0]  ), //i
    .result_data_valid               (phy_rx_descrambling_result_data_valid                       ), //o
    .result_data_payload_last        (phy_rx_descrambling_result_data_payload_last                ), //o
    .result_data_payload_fragment    (phy_rx_descrambling_result_data_payload_fragment[15:0]      ), //o
    .clk                             (clk                                                         ), //i
    .reset                           (reset                                                       )  //i
  );
  StreamFifo_13 de_scrambling_to_de_puncher_fifo (
    .io_push_valid               (phy_rx_descrambling_result_data_toStream_valid                   ), //i
    .io_push_ready               (de_scrambling_to_de_puncher_fifo_io_push_ready                   ), //o
    .io_push_payload_last        (phy_rx_descrambling_result_data_toStream_payload_last            ), //i
    .io_push_payload_fragment    (phy_rx_descrambling_result_data_toStream_payload_fragment[15:0]  ), //i
    .io_pop_valid                (de_scrambling_to_de_puncher_fifo_io_pop_valid                    ), //o
    .io_pop_ready                (phy_rx_de_puncher_raw_data_ready                                 ), //i
    .io_pop_payload_last         (de_scrambling_to_de_puncher_fifo_io_pop_payload_last             ), //o
    .io_pop_payload_fragment     (de_scrambling_to_de_puncher_fifo_io_pop_payload_fragment[15:0]   ), //o
    .io_flush                    (phy_rx_reset                                                     ), //i
    .io_occupancy                (de_scrambling_to_de_puncher_fifo_io_occupancy[6:0]               ), //o
    .io_availability             (de_scrambling_to_de_puncher_fifo_io_availability[6:0]            ), //o
    .clk                         (clk                                                              ), //i
    .reset                       (reset                                                            )  //i
  );
  DePuncturing phy_rx_de_puncher (
    .raw_data_valid                               (de_scrambling_to_de_puncher_fifo_io_pop_valid                     ), //i
    .raw_data_ready                               (phy_rx_de_puncher_raw_data_ready                                  ), //o
    .raw_data_payload_last                        (de_scrambling_to_de_puncher_fifo_io_pop_payload_last              ), //i
    .raw_data_payload_fragment                    (de_scrambling_to_de_puncher_fifo_io_pop_payload_fragment[15:0]    ), //i
    .de_punched_data_valid                        (phy_rx_de_puncher_de_punched_data_valid                           ), //o
    .de_punched_data_ready                        (phy_rx_de_puncher_de_punched_data_fifo_io_push_ready              ), //i
    .de_punched_data_payload_last                 (phy_rx_de_puncher_de_punched_data_payload_last                    ), //o
    .de_punched_data_payload_fragment_data        (phy_rx_de_puncher_de_punched_data_payload_fragment_data[1:0]      ), //o
    .de_punched_data_payload_fragment_indicate    (phy_rx_de_puncher_de_punched_data_payload_fragment_indicate[1:0]  ), //o
    .clk                                          (clk                                                               ), //i
    .reset                                        (reset                                                             )  //i
  );
  ViterbiDecoder phy_rx_decoder (
    .raw_data_valid                        (phy_rx_de_puncher_de_punched_data_fifo_io_pop_valid                           ), //i
    .raw_data_ready                        (phy_rx_decoder_raw_data_ready                                                 ), //o
    .raw_data_payload_last                 (phy_rx_de_puncher_de_punched_data_fifo_io_pop_payload_last                    ), //i
    .raw_data_payload_fragment_data        (phy_rx_de_puncher_de_punched_data_fifo_io_pop_payload_fragment_data[1:0]      ), //i
    .raw_data_payload_fragment_indicate    (phy_rx_de_puncher_de_punched_data_fifo_io_pop_payload_fragment_indicate[1:0]  ), //i
    .decoded_data_valid                    (phy_rx_decoder_decoded_data_valid                                             ), //o
    .decoded_data_payload_last             (phy_rx_decoder_decoded_data_payload_last                                      ), //o
    .decoded_data_payload_fragment         (phy_rx_decoder_decoded_data_payload_fragment                                  ), //o
    .clk                                   (clk                                                                           ), //i
    .reset                                 (reset                                                                         )  //i
  );
  StreamFifo_14 phy_rx_de_puncher_de_punched_data_fifo (
    .io_push_valid                        (phy_rx_de_puncher_de_punched_data_valid                                       ), //i
    .io_push_ready                        (phy_rx_de_puncher_de_punched_data_fifo_io_push_ready                          ), //o
    .io_push_payload_last                 (phy_rx_de_puncher_de_punched_data_payload_last                                ), //i
    .io_push_payload_fragment_data        (phy_rx_de_puncher_de_punched_data_payload_fragment_data[1:0]                  ), //i
    .io_push_payload_fragment_indicate    (phy_rx_de_puncher_de_punched_data_payload_fragment_indicate[1:0]              ), //i
    .io_pop_valid                         (phy_rx_de_puncher_de_punched_data_fifo_io_pop_valid                           ), //o
    .io_pop_ready                         (phy_rx_decoder_raw_data_ready                                                 ), //i
    .io_pop_payload_last                  (phy_rx_de_puncher_de_punched_data_fifo_io_pop_payload_last                    ), //o
    .io_pop_payload_fragment_data         (phy_rx_de_puncher_de_punched_data_fifo_io_pop_payload_fragment_data[1:0]      ), //o
    .io_pop_payload_fragment_indicate     (phy_rx_de_puncher_de_punched_data_fifo_io_pop_payload_fragment_indicate[1:0]  ), //o
    .io_flush                             (1'b0                                                                          ), //i
    .io_occupancy                         (phy_rx_de_puncher_de_punched_data_fifo_io_occupancy[5:0]                      ), //o
    .io_availability                      (phy_rx_de_puncher_de_punched_data_fifo_io_availability[5:0]                   ), //o
    .clk                                  (clk                                                                           ), //i
    .reset                                (reset                                                                         )  //i
  );
  PhyRxCrcChecker phy_rx_crc_checker (
    .raw_data_valid                         (phy_rx_crc_checker_raw_data_valid                                ), //i
    .raw_data_ready                         (phy_rx_crc_checker_raw_data_ready                                ), //o
    .raw_data_payload_last                  (phy_rx_decoder_decoded_data_toStream_fifo_io_pop_payload_last    ), //i
    .raw_data_payload_fragment              (phy_rx_crc_checker_raw_data_payload_fragment[7:0]                ), //i
    .result_data_valid                      (phy_rx_crc_checker_result_data_valid                             ), //o
    .result_data_ready                      (result_data_ready                                                ), //i
    .result_data_payload_last               (phy_rx_crc_checker_result_data_payload_last                      ), //o
    .result_data_payload_fragment           (phy_rx_crc_checker_result_data_payload_fragment[7:0]             ), //o
    .header_message_valid                   (phy_rx_header_extender_header_message_valid                      ), //i
    .header_message_payload_pkg_size        (phy_rx_header_extender_header_message_payload_pkg_size[7:0]      ), //i
    .header_message_payload_demod_method    (phy_rx_header_extender_header_message_payload_demod_method[1:0]  ), //i
    .phy_rx_finish                          (phy_rx_crc_checker_phy_rx_finish                                 ), //o
    .clk                                    (clk                                                              ), //i
    .reset                                  (reset                                                            )  //i
  );
  StreamFifo_15 phy_rx_decoder_decoded_data_toStream_fifo (
    .io_push_valid               (phy_rx_decoder_decoded_data_toStream_valid                         ), //i
    .io_push_ready               (phy_rx_decoder_decoded_data_toStream_fifo_io_push_ready            ), //o
    .io_push_payload_last        (phy_rx_decoder_decoded_data_toStream_payload_last                  ), //i
    .io_push_payload_fragment    (phy_rx_decoder_decoded_data_toStream_payload_fragment              ), //i
    .io_pop_valid                (phy_rx_decoder_decoded_data_toStream_fifo_io_pop_valid             ), //o
    .io_pop_ready                (phy_rx_decoder_decoded_data_toStream_fifo_io_pop_ready             ), //i
    .io_pop_payload_last         (phy_rx_decoder_decoded_data_toStream_fifo_io_pop_payload_last      ), //o
    .io_pop_payload_fragment     (phy_rx_decoder_decoded_data_toStream_fifo_io_pop_payload_fragment  ), //o
    .io_flush                    (1'b0                                                               ), //i
    .io_occupancy                (phy_rx_decoder_decoded_data_toStream_fifo_io_occupancy[5:0]        ), //o
    .io_availability             (phy_rx_decoder_decoded_data_toStream_fifo_io_availability[5:0]     ), //o
    .clk                         (clk                                                                ), //i
    .reset                       (reset                                                              )  //i
  );
  assign phy_rx_descrambling_result_data_toStream_valid = phy_rx_descrambling_result_data_valid;
  assign phy_rx_descrambling_result_data_toStream_payload_last = phy_rx_descrambling_result_data_payload_last;
  assign phy_rx_descrambling_result_data_toStream_payload_fragment = phy_rx_descrambling_result_data_payload_fragment;
  assign phy_rx_descrambling_result_data_toStream_ready = de_scrambling_to_de_puncher_fifo_io_push_ready;
  assign phy_rx_decoder_decoded_data_toStream_valid = phy_rx_decoder_decoded_data_valid;
  assign phy_rx_decoder_decoded_data_toStream_payload_last = phy_rx_decoder_decoded_data_payload_last;
  assign phy_rx_decoder_decoded_data_toStream_payload_fragment = phy_rx_decoder_decoded_data_payload_fragment;
  assign phy_rx_decoder_decoded_data_toStream_ready = phy_rx_decoder_decoded_data_toStream_fifo_io_push_ready;
  assign phy_rx_decoder_decoded_data_toStream_fifo_io_pop_fire = (phy_rx_decoder_decoded_data_toStream_fifo_io_pop_valid && phy_rx_decoder_decoded_data_toStream_fifo_io_pop_ready);
  always @(*) begin
    _zz_raw_data_valid = 1'b0;
    if(phy_rx_decoder_decoded_data_toStream_fifo_io_pop_fire) begin
      _zz_raw_data_valid = 1'b1;
    end
  end

  assign _zz_raw_data_valid_3 = (_zz_raw_data_valid_2 == 3'b111);
  always @(*) begin
    _zz_raw_data_valid_1 = (_zz_raw_data_valid_2 + _zz__zz_raw_data_valid_1);
    if(1'b0) begin
      _zz_raw_data_valid_1 = 3'b000;
    end
  end

  assign phy_rx_decoder_decoded_data_toStream_fifo_io_pop_fire_1 = (phy_rx_decoder_decoded_data_toStream_fifo_io_pop_valid && phy_rx_decoder_decoded_data_toStream_fifo_io_pop_ready);
  assign phy_rx_decoder_decoded_data_toStream_fifo_io_pop_ready = (! ((! phy_rx_crc_checker_raw_data_ready) && _zz_raw_data_valid_3));
  assign phy_rx_crc_checker_raw_data_valid = (phy_rx_decoder_decoded_data_toStream_fifo_io_pop_valid && _zz_raw_data_valid_3);
  assign phy_rx_crc_checker_raw_data_payload_fragment = {phy_rx_decoder_decoded_data_toStream_fifo_io_pop_payload_fragment,_zz_raw_data_payload_fragment};
  assign result_data_valid = phy_rx_crc_checker_result_data_valid;
  assign result_data_payload_last = phy_rx_crc_checker_result_data_payload_last;
  assign result_data_payload_fragment = phy_rx_crc_checker_result_data_payload_fragment;
  assign phy_rx_reset = (phy_rx_header_extender_sdf_not_found || phy_rx_crc_checker_phy_rx_finish);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_raw_data_valid_2 <= 3'b000;
    end else begin
      _zz_raw_data_valid_2 <= _zz_raw_data_valid_1;
    end
  end

  always @(posedge clk) begin
    if(phy_rx_decoder_decoded_data_toStream_fifo_io_pop_fire_1) begin
      _zz_raw_data_payload_fragment <= {phy_rx_decoder_decoded_data_toStream_fifo_io_pop_payload_fragment,_zz__zz_raw_data_payload_fragment};
    end
  end


endmodule

module StreamFifo_18 (
  input               io_push_valid,
  output              io_push_ready,
  input      [11:0]   io_push_payload_cha_i,
  input      [11:0]   io_push_payload_cha_q,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [11:0]   io_pop_payload_cha_i,
  output     [11:0]   io_pop_payload_cha_q,
  input               io_flush,
  output     [10:0]   io_occupancy,
  output     [10:0]   io_availability,
  input               clk,
  input               reset
);

  reg        [23:0]   _zz_logic_ram_port0;
  wire       [9:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [9:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_cha_i;
  wire       [23:0]   _zz_logic_ram_port_1;
  wire       [9:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [9:0]    logic_pushPtr_valueNext;
  reg        [9:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [9:0]    logic_popPtr_valueNext;
  reg        [9:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [23:0]   _zz_io_pop_payload_cha_i;
  wire                when_Stream_l954;
  wire       [9:0]    logic_ptrDif;
  reg [23:0] logic_ram [0:1023];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {9'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {9'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_cha_i = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_cha_q,io_push_payload_cha_i};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_cha_i) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 10'h3ff);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 10'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 10'h3ff);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 10'h0;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_cha_i = _zz_logic_ram_port0;
  assign io_pop_payload_cha_i = _zz_io_pop_payload_cha_i[11 : 0];
  assign io_pop_payload_cha_q = _zz_io_pop_payload_cha_i[23 : 12];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 10'h0;
      logic_popPtr_value <= 10'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module TX (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              rf_data_valid,
  input               rf_data_ready,
  output     [11:0]   rf_data_payload_cha_i,
  output     [11:0]   rf_data_payload_cha_q,
  input               div_enable,
  input      [3:0]    div_cnt_step,
  input      [3:0]    div_cnt_limit,
  input      [1:0]    mod_method_select,
  input               clk,
  input               reset
);

  wire                phy_tx_information_gen_raw_data_valid;
  wire                phy_tx_information_gen_result_data_queueWithAvailability_io_pop_ready;
  wire                phy_tx_crc_raw_data_valid;
  wire                phy_tx_crc_result_data_queueWithAvailability_io_pop_ready;
  wire                phy_tx_padder_raw_data_valid;
  wire                phy_tx_padder_result_data_queueWithAvailability_io_pop_ready;
  wire                phy_tx_encoder_raw_data_valid;
  wire                phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_ready;
  wire                phy_tx_scrambler_raw_data_valid;
  wire                phy_tx_scrambler_result_data_queueWithAvailability_io_pop_ready;
  wire                mod_data_div_base_data_valid;
  wire       [7:0]    mod_rtl_data_flow_unit_data_payload_fragment;
  wire                mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_ready;
  wire                phy_header_extender_raw_data_valid;
  wire                phy_header_extender_result_data_queueWithAvailability_io_pop_ready;
  wire                phy_tx_oversampling_raw_data_valid;
  wire                phy_tx_filter_result_data_queueWithAvailability_io_pop_ready;
  wire                stf_preamble_adder_raw_data_valid;
  wire                phy_tx_information_gen_raw_data_ready;
  wire                phy_tx_information_gen_result_data_valid;
  wire                phy_tx_information_gen_result_data_payload_last;
  wire       [7:0]    phy_tx_information_gen_result_data_payload_fragment;
  wire                phy_tx_information_gen_pkg_size_valid;
  wire       [7:0]    phy_tx_information_gen_pkg_size_payload;
  wire                phy_tx_information_gen_result_data_queueWithAvailability_io_push_ready;
  wire                phy_tx_information_gen_result_data_queueWithAvailability_io_pop_valid;
  wire                phy_tx_information_gen_result_data_queueWithAvailability_io_pop_payload_last;
  wire       [7:0]    phy_tx_information_gen_result_data_queueWithAvailability_io_pop_payload_fragment;
  wire       [5:0]    phy_tx_information_gen_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_information_gen_result_data_queueWithAvailability_io_availability;
  wire                phy_tx_crc_raw_data_ready;
  wire                phy_tx_crc_result_data_valid;
  wire                phy_tx_crc_result_data_payload_last;
  wire       [7:0]    phy_tx_crc_result_data_payload_fragment;
  wire                phy_tx_crc_result_data_queueWithAvailability_io_push_ready;
  wire                phy_tx_crc_result_data_queueWithAvailability_io_pop_valid;
  wire                phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_last;
  wire       [7:0]    phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_fragment;
  wire       [5:0]    phy_tx_crc_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_crc_result_data_queueWithAvailability_io_availability;
  wire                phy_tx_padder_raw_data_ready;
  wire                phy_tx_padder_result_data_valid;
  wire                phy_tx_padder_result_data_payload_last;
  wire       [7:0]    phy_tx_padder_result_data_payload_fragment;
  wire                phy_tx_padder_result_data_queueWithAvailability_io_push_ready;
  wire                phy_tx_padder_result_data_queueWithAvailability_io_pop_valid;
  wire                phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_last;
  wire       [7:0]    phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_fragment;
  wire       [5:0]    phy_tx_padder_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_padder_result_data_queueWithAvailability_io_availability;
  wire                phy_tx_encoder_raw_data_ready;
  wire                phy_tx_encoder_result_data_valid;
  wire                phy_tx_encoder_result_data_payload_last;
  wire       [15:0]   phy_tx_encoder_result_data_payload_fragment;
  wire                phy_tx_puncher_raw_data_ready;
  wire                phy_tx_puncher_punched_data_valid;
  wire                phy_tx_puncher_punched_data_payload_last;
  wire       [15:0]   phy_tx_puncher_punched_data_payload_fragment;
  wire                phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_push_ready;
  wire                phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid;
  wire                phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_last;
  wire       [15:0]   phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_fragment;
  wire       [5:0]    phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_availability;
  wire                phy_tx_scrambler_raw_data_ready;
  wire                phy_tx_scrambler_result_data_valid;
  wire                phy_tx_scrambler_result_data_payload_last;
  wire       [15:0]   phy_tx_scrambler_result_data_payload_fragment;
  wire                phy_tx_scrambler_result_data_queueWithAvailability_io_push_ready;
  wire                phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid;
  wire                phy_tx_scrambler_result_data_queueWithAvailability_io_pop_payload_last;
  wire       [15:0]   phy_tx_scrambler_result_data_queueWithAvailability_io_pop_payload_fragment;
  wire       [5:0]    phy_tx_scrambler_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_scrambler_result_data_queueWithAvailability_io_availability;
  wire                mod_data_div_base_data_ready;
  wire                mod_data_div_unit_data_valid;
  wire                mod_data_div_unit_data_payload_last;
  wire       [15:0]   mod_data_div_unit_data_payload_fragment;
  wire                mod_rtl_data_flow_mod_iq_valid;
  wire                mod_rtl_data_flow_mod_iq_payload_last;
  wire       [11:0]   mod_rtl_data_flow_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   mod_rtl_data_flow_mod_iq_payload_fragment_cha_q;
  wire                mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_push_ready;
  wire                mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid;
  wire                mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_last;
  wire       [11:0]   mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_i;
  wire       [11:0]   mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_q;
  wire       [5:0]    mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_occupancy;
  wire       [5:0]    mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_availability;
  wire                phy_header_extender_pkg_size_ready;
  wire                phy_header_extender_raw_data_ready;
  wire                phy_header_extender_result_data_valid;
  wire                phy_header_extender_result_data_payload_last;
  wire       [11:0]   phy_header_extender_result_data_payload_fragment_cha_i;
  wire       [11:0]   phy_header_extender_result_data_payload_fragment_cha_q;
  wire                phy_header_extender_result_data_queueWithAvailability_io_push_ready;
  wire                phy_header_extender_result_data_queueWithAvailability_io_pop_valid;
  wire                phy_header_extender_result_data_queueWithAvailability_io_pop_payload_last;
  wire       [11:0]   phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment_cha_i;
  wire       [11:0]   phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment_cha_q;
  wire       [5:0]    phy_header_extender_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_header_extender_result_data_queueWithAvailability_io_availability;
  wire                phy_tx_oversampling_raw_data_ready;
  wire                phy_tx_oversampling_result_data_valid;
  wire                phy_tx_oversampling_result_data_payload_last;
  wire       [11:0]   phy_tx_oversampling_result_data_payload_fragment_cha_i;
  wire       [11:0]   phy_tx_oversampling_result_data_payload_fragment_cha_q;
  wire                phy_tx_filter_raw_data_ready;
  wire                phy_tx_filter_result_data_valid;
  wire                phy_tx_filter_result_data_payload_last;
  wire       [11:0]   phy_tx_filter_result_data_payload_fragment_cha_i;
  wire       [11:0]   phy_tx_filter_result_data_payload_fragment_cha_q;
  wire                phy_tx_filter_result_data_queueWithAvailability_io_push_ready;
  wire                phy_tx_filter_result_data_queueWithAvailability_io_pop_valid;
  wire                phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_last;
  wire       [11:0]   phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_fragment_cha_i;
  wire       [11:0]   phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_fragment_cha_q;
  wire       [5:0]    phy_tx_filter_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_filter_result_data_queueWithAvailability_io_availability;
  wire                stf_preamble_adder_raw_data_ready;
  wire                stf_preamble_adder_preamble_data_valid;
  wire                stf_preamble_adder_preamble_data_payload_last;
  wire       [11:0]   stf_preamble_adder_preamble_data_payload_fragment_cha_i;
  wire       [11:0]   stf_preamble_adder_preamble_data_payload_fragment_cha_q;
  wire                phy_tx_front_raw_data_ready;
  wire                phy_tx_front_result_data_valid;
  wire       [11:0]   phy_tx_front_result_data_payload_cha_i;
  wire       [11:0]   phy_tx_front_result_data_payload_cha_q;
  wire                phy_tx_front_result_data_queueWithAvailability_io_push_ready;
  wire                phy_tx_front_result_data_queueWithAvailability_io_pop_valid;
  wire       [11:0]   phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_i;
  wire       [11:0]   phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_q;
  wire       [5:0]    phy_tx_front_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_front_result_data_queueWithAvailability_io_availability;
  reg        [8:0]    pipeline_halt;
  wire                _zz_raw_data_ready;
  wire                _zz_io_pop_ready;
  wire                _zz_io_pop_ready_1;
  wire                _zz_io_pop_ready_2;
  wire                phy_tx_puncher_punched_data_toStream_valid;
  wire                phy_tx_puncher_punched_data_toStream_ready;
  wire                phy_tx_puncher_punched_data_toStream_payload_last;
  wire       [15:0]   phy_tx_puncher_punched_data_toStream_payload_fragment;
  wire                _zz_io_pop_ready_3;
  wire                _zz_io_pop_ready_4;
  wire                _zz_data_flow_unit_data_valid;
  wire                _zz_data_flow_unit_data_payload_last;
  wire                mod_rtl_data_flow_mod_iq_toStream_valid;
  wire                mod_rtl_data_flow_mod_iq_toStream_ready;
  wire                mod_rtl_data_flow_mod_iq_toStream_payload_last;
  wire       [11:0]   mod_rtl_data_flow_mod_iq_toStream_payload_fragment_cha_i;
  wire       [11:0]   mod_rtl_data_flow_mod_iq_toStream_payload_fragment_cha_q;
  wire                _zz_io_pop_ready_5;
  wire                _zz_io_pop_ready_6;
  wire                _zz_io_pop_ready_7;

  PhyPkgInformationGen phy_tx_information_gen (
    .raw_data_valid                  (phy_tx_information_gen_raw_data_valid                                   ), //i
    .raw_data_ready                  (phy_tx_information_gen_raw_data_ready                                   ), //o
    .raw_data_payload_last           (raw_data_payload_last                                                   ), //i
    .raw_data_payload_fragment       (raw_data_payload_fragment[7:0]                                          ), //i
    .result_data_valid               (phy_tx_information_gen_result_data_valid                                ), //o
    .result_data_ready               (phy_tx_information_gen_result_data_queueWithAvailability_io_push_ready  ), //i
    .result_data_payload_last        (phy_tx_information_gen_result_data_payload_last                         ), //o
    .result_data_payload_fragment    (phy_tx_information_gen_result_data_payload_fragment[7:0]                ), //o
    .pkg_size_valid                  (phy_tx_information_gen_pkg_size_valid                                   ), //o
    .pkg_size_ready                  (phy_header_extender_pkg_size_ready                                      ), //i
    .pkg_size_payload                (phy_tx_information_gen_pkg_size_payload[7:0]                            ), //o
    .clk                             (clk                                                                     ), //i
    .reset                           (reset                                                                   )  //i
  );
  StreamFifo_4 phy_tx_information_gen_result_data_queueWithAvailability (
    .io_push_valid               (phy_tx_information_gen_result_data_valid                                               ), //i
    .io_push_ready               (phy_tx_information_gen_result_data_queueWithAvailability_io_push_ready                 ), //o
    .io_push_payload_last        (phy_tx_information_gen_result_data_payload_last                                        ), //i
    .io_push_payload_fragment    (phy_tx_information_gen_result_data_payload_fragment[7:0]                               ), //i
    .io_pop_valid                (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_valid                  ), //o
    .io_pop_ready                (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_ready                  ), //i
    .io_pop_payload_last         (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_payload_last           ), //o
    .io_pop_payload_fragment     (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //o
    .io_flush                    (1'b0                                                                                   ), //i
    .io_occupancy                (phy_tx_information_gen_result_data_queueWithAvailability_io_occupancy[5:0]             ), //o
    .io_availability             (phy_tx_information_gen_result_data_queueWithAvailability_io_availability[5:0]          ), //o
    .clk                         (clk                                                                                    ), //i
    .reset                       (reset                                                                                  )  //i
  );
  PhyTxCrc phy_tx_crc (
    .raw_data_valid                  (phy_tx_crc_raw_data_valid                                                              ), //i
    .raw_data_ready                  (phy_tx_crc_raw_data_ready                                                              ), //o
    .raw_data_payload_last           (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_payload_last           ), //i
    .raw_data_payload_fragment       (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //i
    .result_data_valid               (phy_tx_crc_result_data_valid                                                           ), //o
    .result_data_ready               (phy_tx_crc_result_data_queueWithAvailability_io_push_ready                             ), //i
    .result_data_payload_last        (phy_tx_crc_result_data_payload_last                                                    ), //o
    .result_data_payload_fragment    (phy_tx_crc_result_data_payload_fragment[7:0]                                           ), //o
    .clk                             (clk                                                                                    ), //i
    .reset                           (reset                                                                                  )  //i
  );
  StreamFifo_4 phy_tx_crc_result_data_queueWithAvailability (
    .io_push_valid               (phy_tx_crc_result_data_valid                                               ), //i
    .io_push_ready               (phy_tx_crc_result_data_queueWithAvailability_io_push_ready                 ), //o
    .io_push_payload_last        (phy_tx_crc_result_data_payload_last                                        ), //i
    .io_push_payload_fragment    (phy_tx_crc_result_data_payload_fragment[7:0]                               ), //i
    .io_pop_valid                (phy_tx_crc_result_data_queueWithAvailability_io_pop_valid                  ), //o
    .io_pop_ready                (phy_tx_crc_result_data_queueWithAvailability_io_pop_ready                  ), //i
    .io_pop_payload_last         (phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_last           ), //o
    .io_pop_payload_fragment     (phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //o
    .io_flush                    (1'b0                                                                       ), //i
    .io_occupancy                (phy_tx_crc_result_data_queueWithAvailability_io_occupancy[5:0]             ), //o
    .io_availability             (phy_tx_crc_result_data_queueWithAvailability_io_availability[5:0]          ), //o
    .clk                         (clk                                                                        ), //i
    .reset                       (reset                                                                      )  //i
  );
  PhyTxPadder phy_tx_padder (
    .raw_data_valid                  (phy_tx_padder_raw_data_valid                                               ), //i
    .raw_data_ready                  (phy_tx_padder_raw_data_ready                                               ), //o
    .raw_data_payload_last           (phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_last           ), //i
    .raw_data_payload_fragment       (phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //i
    .result_data_valid               (phy_tx_padder_result_data_valid                                            ), //o
    .result_data_ready               (phy_tx_padder_result_data_queueWithAvailability_io_push_ready              ), //i
    .result_data_payload_last        (phy_tx_padder_result_data_payload_last                                     ), //o
    .result_data_payload_fragment    (phy_tx_padder_result_data_payload_fragment[7:0]                            ), //o
    .clk                             (clk                                                                        ), //i
    .reset                           (reset                                                                      )  //i
  );
  StreamFifo_4 phy_tx_padder_result_data_queueWithAvailability (
    .io_push_valid               (phy_tx_padder_result_data_valid                                               ), //i
    .io_push_ready               (phy_tx_padder_result_data_queueWithAvailability_io_push_ready                 ), //o
    .io_push_payload_last        (phy_tx_padder_result_data_payload_last                                        ), //i
    .io_push_payload_fragment    (phy_tx_padder_result_data_payload_fragment[7:0]                               ), //i
    .io_pop_valid                (phy_tx_padder_result_data_queueWithAvailability_io_pop_valid                  ), //o
    .io_pop_ready                (phy_tx_padder_result_data_queueWithAvailability_io_pop_ready                  ), //i
    .io_pop_payload_last         (phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_last           ), //o
    .io_pop_payload_fragment     (phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //o
    .io_flush                    (1'b0                                                                          ), //i
    .io_occupancy                (phy_tx_padder_result_data_queueWithAvailability_io_occupancy[5:0]             ), //o
    .io_availability             (phy_tx_padder_result_data_queueWithAvailability_io_availability[5:0]          ), //o
    .clk                         (clk                                                                           ), //i
    .reset                       (reset                                                                         )  //i
  );
  PhyTxEncoder phy_tx_encoder (
    .raw_data_valid                  (phy_tx_encoder_raw_data_valid                                                 ), //i
    .raw_data_ready                  (phy_tx_encoder_raw_data_ready                                                 ), //o
    .raw_data_payload_last           (phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_last           ), //i
    .raw_data_payload_fragment       (phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //i
    .result_data_valid               (phy_tx_encoder_result_data_valid                                              ), //o
    .result_data_ready               (phy_tx_puncher_raw_data_ready                                                 ), //i
    .result_data_payload_last        (phy_tx_encoder_result_data_payload_last                                       ), //o
    .result_data_payload_fragment    (phy_tx_encoder_result_data_payload_fragment[15:0]                             ), //o
    .clk                             (clk                                                                           ), //i
    .reset                           (reset                                                                         )  //i
  );
  Puncturing phy_tx_puncher (
    .raw_data_valid                   (phy_tx_encoder_result_data_valid                    ), //i
    .raw_data_ready                   (phy_tx_puncher_raw_data_ready                       ), //o
    .raw_data_payload_last            (phy_tx_encoder_result_data_payload_last             ), //i
    .raw_data_payload_fragment        (phy_tx_encoder_result_data_payload_fragment[15:0]   ), //i
    .punched_data_valid               (phy_tx_puncher_punched_data_valid                   ), //o
    .punched_data_payload_last        (phy_tx_puncher_punched_data_payload_last            ), //o
    .punched_data_payload_fragment    (phy_tx_puncher_punched_data_payload_fragment[15:0]  ), //o
    .clk                              (clk                                                 ), //i
    .reset                            (reset                                               )  //i
  );
  StreamFifo_7 phy_tx_puncher_punched_data_toStream_queueWithAvailability (
    .io_push_valid               (phy_tx_puncher_punched_data_toStream_valid                                                ), //i
    .io_push_ready               (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_push_ready                  ), //o
    .io_push_payload_last        (phy_tx_puncher_punched_data_toStream_payload_last                                         ), //i
    .io_push_payload_fragment    (phy_tx_puncher_punched_data_toStream_payload_fragment[15:0]                               ), //i
    .io_pop_valid                (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid                   ), //o
    .io_pop_ready                (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_ready                   ), //i
    .io_pop_payload_last         (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_last            ), //o
    .io_pop_payload_fragment     (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_fragment[15:0]  ), //o
    .io_flush                    (1'b0                                                                                      ), //i
    .io_occupancy                (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_occupancy[5:0]              ), //o
    .io_availability             (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_availability[5:0]           ), //o
    .clk                         (clk                                                                                       ), //i
    .reset                       (reset                                                                                     )  //i
  );
  PhyTxScrambler phy_tx_scrambler (
    .raw_data_valid                  (phy_tx_scrambler_raw_data_valid                                                           ), //i
    .raw_data_ready                  (phy_tx_scrambler_raw_data_ready                                                           ), //o
    .raw_data_payload_last           (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_last            ), //i
    .raw_data_payload_fragment       (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_fragment[15:0]  ), //i
    .result_data_valid               (phy_tx_scrambler_result_data_valid                                                        ), //o
    .result_data_ready               (phy_tx_scrambler_result_data_queueWithAvailability_io_push_ready                          ), //i
    .result_data_payload_last        (phy_tx_scrambler_result_data_payload_last                                                 ), //o
    .result_data_payload_fragment    (phy_tx_scrambler_result_data_payload_fragment[15:0]                                       ), //o
    .clk                             (clk                                                                                       ), //i
    .reset                           (reset                                                                                     )  //i
  );
  StreamFifo_7 phy_tx_scrambler_result_data_queueWithAvailability (
    .io_push_valid               (phy_tx_scrambler_result_data_valid                                                ), //i
    .io_push_ready               (phy_tx_scrambler_result_data_queueWithAvailability_io_push_ready                  ), //o
    .io_push_payload_last        (phy_tx_scrambler_result_data_payload_last                                         ), //i
    .io_push_payload_fragment    (phy_tx_scrambler_result_data_payload_fragment[15:0]                               ), //i
    .io_pop_valid                (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid                   ), //o
    .io_pop_ready                (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_ready                   ), //i
    .io_pop_payload_last         (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_payload_last            ), //o
    .io_pop_payload_fragment     (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_payload_fragment[15:0]  ), //o
    .io_flush                    (1'b0                                                                              ), //i
    .io_occupancy                (phy_tx_scrambler_result_data_queueWithAvailability_io_occupancy[5:0]              ), //o
    .io_availability             (phy_tx_scrambler_result_data_queueWithAvailability_io_availability[5:0]           ), //o
    .clk                         (clk                                                                               ), //i
    .reset                       (reset                                                                             )  //i
  );
  dataDivDynamic mod_data_div (
    .base_data_valid               (mod_data_div_base_data_valid                                                      ), //i
    .base_data_ready               (mod_data_div_base_data_ready                                                      ), //o
    .base_data_payload_last        (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_payload_last            ), //i
    .base_data_payload_fragment    (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_payload_fragment[15:0]  ), //i
    .enable                        (div_enable                                                                        ), //i
    .cnt_step                      (div_cnt_step[3:0]                                                                 ), //i
    .cnt_limit                     (div_cnt_limit[3:0]                                                                ), //i
    .unit_data_valid               (mod_data_div_unit_data_valid                                                      ), //o
    .unit_data_payload_last        (mod_data_div_unit_data_payload_last                                               ), //o
    .unit_data_payload_fragment    (mod_data_div_unit_data_payload_fragment[15:0]                                     ), //o
    .clk                           (clk                                                                               ), //i
    .reset                         (reset                                                                             )  //i
  );
  ModulatorRTL mod_rtl (
    .data_flow_unit_data_valid                  (_zz_data_flow_unit_data_valid                          ), //i
    .data_flow_unit_data_payload_last           (_zz_data_flow_unit_data_payload_last                   ), //i
    .data_flow_unit_data_payload_fragment       (mod_rtl_data_flow_unit_data_payload_fragment[7:0]      ), //i
    .data_flow_mod_iq_valid                     (mod_rtl_data_flow_mod_iq_valid                         ), //o
    .data_flow_mod_iq_payload_last              (mod_rtl_data_flow_mod_iq_payload_last                  ), //o
    .data_flow_mod_iq_payload_fragment_cha_i    (mod_rtl_data_flow_mod_iq_payload_fragment_cha_i[11:0]  ), //o
    .data_flow_mod_iq_payload_fragment_cha_q    (mod_rtl_data_flow_mod_iq_payload_fragment_cha_q[11:0]  ), //o
    .select_1                                   (mod_method_select[1:0]                                 ), //i
    .clk                                        (clk                                                    ), //i
    .reset                                      (reset                                                  )  //i
  );
  StreamFifo_9 mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability (
    .io_push_valid                     (mod_rtl_data_flow_mod_iq_toStream_valid                                                      ), //i
    .io_push_ready                     (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_push_ready                        ), //o
    .io_push_payload_last              (mod_rtl_data_flow_mod_iq_toStream_payload_last                                               ), //i
    .io_push_payload_fragment_cha_i    (mod_rtl_data_flow_mod_iq_toStream_payload_fragment_cha_i[11:0]                               ), //i
    .io_push_payload_fragment_cha_q    (mod_rtl_data_flow_mod_iq_toStream_payload_fragment_cha_q[11:0]                               ), //i
    .io_pop_valid                      (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid                         ), //o
    .io_pop_ready                      (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_ready                         ), //i
    .io_pop_payload_last               (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_last                  ), //o
    .io_pop_payload_fragment_cha_i     (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_i[11:0]  ), //o
    .io_pop_payload_fragment_cha_q     (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_q[11:0]  ), //o
    .io_flush                          (1'b0                                                                                         ), //i
    .io_occupancy                      (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_occupancy[5:0]                    ), //o
    .io_availability                   (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_availability[5:0]                 ), //o
    .clk                               (clk                                                                                          ), //i
    .reset                             (reset                                                                                        )  //i
  );
  PhyHeaderExtender phy_header_extender (
    .mod_method                            (mod_method_select[1:0]                                                                       ), //i
    .pkg_size_valid                        (phy_tx_information_gen_pkg_size_valid                                                        ), //i
    .pkg_size_ready                        (phy_header_extender_pkg_size_ready                                                           ), //o
    .pkg_size_payload                      (phy_tx_information_gen_pkg_size_payload[7:0]                                                 ), //i
    .raw_data_valid                        (phy_header_extender_raw_data_valid                                                           ), //i
    .raw_data_ready                        (phy_header_extender_raw_data_ready                                                           ), //o
    .raw_data_payload_last                 (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_last                  ), //i
    .raw_data_payload_fragment_cha_i       (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_i[11:0]  ), //i
    .raw_data_payload_fragment_cha_q       (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_q[11:0]  ), //i
    .result_data_valid                     (phy_header_extender_result_data_valid                                                        ), //o
    .result_data_ready                     (phy_header_extender_result_data_queueWithAvailability_io_push_ready                          ), //i
    .result_data_payload_last              (phy_header_extender_result_data_payload_last                                                 ), //o
    .result_data_payload_fragment_cha_i    (phy_header_extender_result_data_payload_fragment_cha_i[11:0]                                 ), //o
    .result_data_payload_fragment_cha_q    (phy_header_extender_result_data_payload_fragment_cha_q[11:0]                                 ), //o
    .clk                                   (clk                                                                                          ), //i
    .reset                                 (reset                                                                                        )  //i
  );
  StreamFifo_9 phy_header_extender_result_data_queueWithAvailability (
    .io_push_valid                     (phy_header_extender_result_data_valid                                                      ), //i
    .io_push_ready                     (phy_header_extender_result_data_queueWithAvailability_io_push_ready                        ), //o
    .io_push_payload_last              (phy_header_extender_result_data_payload_last                                               ), //i
    .io_push_payload_fragment_cha_i    (phy_header_extender_result_data_payload_fragment_cha_i[11:0]                               ), //i
    .io_push_payload_fragment_cha_q    (phy_header_extender_result_data_payload_fragment_cha_q[11:0]                               ), //i
    .io_pop_valid                      (phy_header_extender_result_data_queueWithAvailability_io_pop_valid                         ), //o
    .io_pop_ready                      (phy_header_extender_result_data_queueWithAvailability_io_pop_ready                         ), //i
    .io_pop_payload_last               (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_last                  ), //o
    .io_pop_payload_fragment_cha_i     (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment_cha_i[11:0]  ), //o
    .io_pop_payload_fragment_cha_q     (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment_cha_q[11:0]  ), //o
    .io_flush                          (1'b0                                                                                       ), //i
    .io_occupancy                      (phy_header_extender_result_data_queueWithAvailability_io_occupancy[5:0]                    ), //o
    .io_availability                   (phy_header_extender_result_data_queueWithAvailability_io_availability[5:0]                 ), //o
    .clk                               (clk                                                                                        ), //i
    .reset                             (reset                                                                                      )  //i
  );
  PhyTxOverSampling phy_tx_oversampling (
    .raw_data_valid                        (phy_tx_oversampling_raw_data_valid                                                         ), //i
    .raw_data_ready                        (phy_tx_oversampling_raw_data_ready                                                         ), //o
    .raw_data_payload_last                 (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_last                  ), //i
    .raw_data_payload_fragment_cha_i       (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment_cha_i[11:0]  ), //i
    .raw_data_payload_fragment_cha_q       (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment_cha_q[11:0]  ), //i
    .result_data_valid                     (phy_tx_oversampling_result_data_valid                                                      ), //o
    .result_data_ready                     (phy_tx_filter_raw_data_ready                                                               ), //i
    .result_data_payload_last              (phy_tx_oversampling_result_data_payload_last                                               ), //o
    .result_data_payload_fragment_cha_i    (phy_tx_oversampling_result_data_payload_fragment_cha_i[11:0]                               ), //o
    .result_data_payload_fragment_cha_q    (phy_tx_oversampling_result_data_payload_fragment_cha_q[11:0]                               ), //o
    .clk                                   (clk                                                                                        ), //i
    .reset                                 (reset                                                                                      )  //i
  );
  PhyTxFilter phy_tx_filter (
    .raw_data_valid                        (phy_tx_oversampling_result_data_valid                          ), //i
    .raw_data_ready                        (phy_tx_filter_raw_data_ready                                   ), //o
    .raw_data_payload_last                 (phy_tx_oversampling_result_data_payload_last                   ), //i
    .raw_data_payload_fragment_cha_i       (phy_tx_oversampling_result_data_payload_fragment_cha_i[11:0]   ), //i
    .raw_data_payload_fragment_cha_q       (phy_tx_oversampling_result_data_payload_fragment_cha_q[11:0]   ), //i
    .result_data_valid                     (phy_tx_filter_result_data_valid                                ), //o
    .result_data_ready                     (phy_tx_filter_result_data_queueWithAvailability_io_push_ready  ), //i
    .result_data_payload_last              (phy_tx_filter_result_data_payload_last                         ), //o
    .result_data_payload_fragment_cha_i    (phy_tx_filter_result_data_payload_fragment_cha_i[11:0]         ), //o
    .result_data_payload_fragment_cha_q    (phy_tx_filter_result_data_payload_fragment_cha_q[11:0]         ), //o
    .clk                                   (clk                                                            ), //i
    .reset                                 (reset                                                          )  //i
  );
  StreamFifo_9 phy_tx_filter_result_data_queueWithAvailability (
    .io_push_valid                     (phy_tx_filter_result_data_valid                                                      ), //i
    .io_push_ready                     (phy_tx_filter_result_data_queueWithAvailability_io_push_ready                        ), //o
    .io_push_payload_last              (phy_tx_filter_result_data_payload_last                                               ), //i
    .io_push_payload_fragment_cha_i    (phy_tx_filter_result_data_payload_fragment_cha_i[11:0]                               ), //i
    .io_push_payload_fragment_cha_q    (phy_tx_filter_result_data_payload_fragment_cha_q[11:0]                               ), //i
    .io_pop_valid                      (phy_tx_filter_result_data_queueWithAvailability_io_pop_valid                         ), //o
    .io_pop_ready                      (phy_tx_filter_result_data_queueWithAvailability_io_pop_ready                         ), //i
    .io_pop_payload_last               (phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_last                  ), //o
    .io_pop_payload_fragment_cha_i     (phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_fragment_cha_i[11:0]  ), //o
    .io_pop_payload_fragment_cha_q     (phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_fragment_cha_q[11:0]  ), //o
    .io_flush                          (1'b0                                                                                 ), //i
    .io_occupancy                      (phy_tx_filter_result_data_queueWithAvailability_io_occupancy[5:0]                    ), //o
    .io_availability                   (phy_tx_filter_result_data_queueWithAvailability_io_availability[5:0]                 ), //o
    .clk                               (clk                                                                                  ), //i
    .reset                             (reset                                                                                )  //i
  );
  PreambleExtender stf_preamble_adder (
    .raw_data_valid                          (stf_preamble_adder_raw_data_valid                                                    ), //i
    .raw_data_ready                          (stf_preamble_adder_raw_data_ready                                                    ), //o
    .raw_data_payload_last                   (phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_last                  ), //i
    .raw_data_payload_fragment_cha_i         (phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_fragment_cha_i[11:0]  ), //i
    .raw_data_payload_fragment_cha_q         (phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_fragment_cha_q[11:0]  ), //i
    .preamble_data_valid                     (stf_preamble_adder_preamble_data_valid                                               ), //o
    .preamble_data_ready                     (phy_tx_front_raw_data_ready                                                          ), //i
    .preamble_data_payload_last              (stf_preamble_adder_preamble_data_payload_last                                        ), //o
    .preamble_data_payload_fragment_cha_i    (stf_preamble_adder_preamble_data_payload_fragment_cha_i[11:0]                        ), //o
    .preamble_data_payload_fragment_cha_q    (stf_preamble_adder_preamble_data_payload_fragment_cha_q[11:0]                        ), //o
    .clk                                     (clk                                                                                  ), //i
    .reset                                   (reset                                                                                )  //i
  );
  PhyTxICFront phy_tx_front (
    .raw_data_valid                     (stf_preamble_adder_preamble_data_valid                         ), //i
    .raw_data_ready                     (phy_tx_front_raw_data_ready                                    ), //o
    .raw_data_payload_last              (stf_preamble_adder_preamble_data_payload_last                  ), //i
    .raw_data_payload_fragment_cha_i    (stf_preamble_adder_preamble_data_payload_fragment_cha_i[11:0]  ), //i
    .raw_data_payload_fragment_cha_q    (stf_preamble_adder_preamble_data_payload_fragment_cha_q[11:0]  ), //i
    .result_data_valid                  (phy_tx_front_result_data_valid                                 ), //o
    .result_data_ready                  (phy_tx_front_result_data_queueWithAvailability_io_push_ready   ), //i
    .result_data_payload_cha_i          (phy_tx_front_result_data_payload_cha_i[11:0]                   ), //o
    .result_data_payload_cha_q          (phy_tx_front_result_data_payload_cha_q[11:0]                   )  //o
  );
  StreamFifo_12 phy_tx_front_result_data_queueWithAvailability (
    .io_push_valid            (phy_tx_front_result_data_valid                                             ), //i
    .io_push_ready            (phy_tx_front_result_data_queueWithAvailability_io_push_ready               ), //o
    .io_push_payload_cha_i    (phy_tx_front_result_data_payload_cha_i[11:0]                               ), //i
    .io_push_payload_cha_q    (phy_tx_front_result_data_payload_cha_q[11:0]                               ), //i
    .io_pop_valid             (phy_tx_front_result_data_queueWithAvailability_io_pop_valid                ), //o
    .io_pop_ready             (rf_data_ready                                                              ), //i
    .io_pop_payload_cha_i     (phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_i[11:0]  ), //o
    .io_pop_payload_cha_q     (phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_q[11:0]  ), //o
    .io_flush                 (1'b0                                                                       ), //i
    .io_occupancy             (phy_tx_front_result_data_queueWithAvailability_io_occupancy[5:0]           ), //o
    .io_availability          (phy_tx_front_result_data_queueWithAvailability_io_availability[5:0]        ), //o
    .clk                      (clk                                                                        ), //i
    .reset                    (reset                                                                      )  //i
  );
  assign _zz_raw_data_ready = (! pipeline_halt[0]);
  assign raw_data_ready = (phy_tx_information_gen_raw_data_ready && _zz_raw_data_ready);
  assign phy_tx_information_gen_raw_data_valid = (raw_data_valid && _zz_raw_data_ready);
  always @(*) begin
    pipeline_halt[0] = (phy_tx_information_gen_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[1] = (phy_tx_crc_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[2] = (phy_tx_padder_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[3] = (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[4] = (phy_tx_scrambler_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[5] = (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[6] = (phy_header_extender_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[7] = (phy_tx_filter_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[8] = (phy_tx_front_result_data_queueWithAvailability_io_availability < 6'h12);
  end

  assign _zz_io_pop_ready = (! pipeline_halt[1]);
  assign phy_tx_information_gen_result_data_queueWithAvailability_io_pop_ready = (phy_tx_crc_raw_data_ready && _zz_io_pop_ready);
  assign phy_tx_crc_raw_data_valid = (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready);
  assign _zz_io_pop_ready_1 = (! pipeline_halt[2]);
  assign phy_tx_crc_result_data_queueWithAvailability_io_pop_ready = (phy_tx_padder_raw_data_ready && _zz_io_pop_ready_1);
  assign phy_tx_padder_raw_data_valid = (phy_tx_crc_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_1);
  assign _zz_io_pop_ready_2 = (! pipeline_halt[3]);
  assign phy_tx_padder_result_data_queueWithAvailability_io_pop_ready = (phy_tx_encoder_raw_data_ready && _zz_io_pop_ready_2);
  assign phy_tx_encoder_raw_data_valid = (phy_tx_padder_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_2);
  assign phy_tx_puncher_punched_data_toStream_valid = phy_tx_puncher_punched_data_valid;
  assign phy_tx_puncher_punched_data_toStream_payload_last = phy_tx_puncher_punched_data_payload_last;
  assign phy_tx_puncher_punched_data_toStream_payload_fragment = phy_tx_puncher_punched_data_payload_fragment;
  assign phy_tx_puncher_punched_data_toStream_ready = phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_push_ready;
  assign _zz_io_pop_ready_3 = (! pipeline_halt[4]);
  assign phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_ready = (phy_tx_scrambler_raw_data_ready && _zz_io_pop_ready_3);
  assign phy_tx_scrambler_raw_data_valid = (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_3);
  assign _zz_io_pop_ready_4 = (! pipeline_halt[5]);
  assign phy_tx_scrambler_result_data_queueWithAvailability_io_pop_ready = (mod_data_div_base_data_ready && _zz_io_pop_ready_4);
  assign mod_data_div_base_data_valid = (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_4);
  assign _zz_data_flow_unit_data_valid = mod_data_div_unit_data_valid;
  assign _zz_data_flow_unit_data_payload_last = mod_data_div_unit_data_payload_last;
  assign mod_rtl_data_flow_unit_data_payload_fragment = mod_data_div_unit_data_payload_fragment[7:0];
  assign mod_rtl_data_flow_mod_iq_toStream_valid = mod_rtl_data_flow_mod_iq_valid;
  assign mod_rtl_data_flow_mod_iq_toStream_payload_last = mod_rtl_data_flow_mod_iq_payload_last;
  assign mod_rtl_data_flow_mod_iq_toStream_payload_fragment_cha_i = mod_rtl_data_flow_mod_iq_payload_fragment_cha_i;
  assign mod_rtl_data_flow_mod_iq_toStream_payload_fragment_cha_q = mod_rtl_data_flow_mod_iq_payload_fragment_cha_q;
  assign mod_rtl_data_flow_mod_iq_toStream_ready = mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_push_ready;
  assign _zz_io_pop_ready_5 = (! pipeline_halt[6]);
  assign mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_ready = (phy_header_extender_raw_data_ready && _zz_io_pop_ready_5);
  assign phy_header_extender_raw_data_valid = (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_5);
  assign _zz_io_pop_ready_6 = (! pipeline_halt[7]);
  assign phy_header_extender_result_data_queueWithAvailability_io_pop_ready = (phy_tx_oversampling_raw_data_ready && _zz_io_pop_ready_6);
  assign phy_tx_oversampling_raw_data_valid = (phy_header_extender_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_6);
  assign _zz_io_pop_ready_7 = (! pipeline_halt[8]);
  assign phy_tx_filter_result_data_queueWithAvailability_io_pop_ready = (stf_preamble_adder_raw_data_ready && _zz_io_pop_ready_7);
  assign stf_preamble_adder_raw_data_valid = (phy_tx_filter_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_7);
  assign rf_data_valid = phy_tx_front_result_data_queueWithAvailability_io_pop_valid;
  assign rf_data_payload_cha_i = phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_i;
  assign rf_data_payload_cha_q = phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_q;

endmodule

module StreamFifo_17 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [7:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [7:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [8:0]    io_occupancy,
  output     [8:0]    io_availability,
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
  wire       [7:0]    _zz_io_availability;
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
  wire                when_Stream_l954;
  wire       [7:0]    logic_ptrDif;
  reg [8:0] logic_ram [0:255];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {7'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {7'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 8'hff);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 8'hff);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
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
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
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
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
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
    .raw_data_valid        (raw_data_tvalid                     ), //i
    .raw_data_ready        (split_core_raw_data_ready           ), //o
    .raw_data_payload      (raw_data_tdata[31:0]                ), //i
    .split_data_valid      (split_core_split_data_valid         ), //o
    .split_data_ready      (pkg_data_ready                      ), //i
    .split_data_payload    (split_core_split_data_payload[7:0]  ), //o
    .clk                   (clk                                 ), //i
    .reset                 (reset                               )  //i
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

module StreamFifo_16 (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload_data,
  input      [3:0]    io_push_payload_strb,
  input      [3:0]    io_push_payload_keep_,
  input               io_push_payload_last,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload_data,
  output     [3:0]    io_pop_payload_strb,
  output     [3:0]    io_pop_payload_keep_,
  output              io_pop_payload_last,
  input               io_flush,
  output     [8:0]    io_occupancy,
  output     [8:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [40:0]   _zz_logic_ram_port0;
  wire       [7:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [7:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_data;
  wire       [40:0]   _zz_logic_ram_port_1;
  wire       [7:0]    _zz_io_availability;
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
  wire       [40:0]   _zz_io_pop_payload_data;
  wire                when_Stream_l954;
  wire       [7:0]    logic_ptrDif;
  reg [40:0] logic_ram [0:255];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {7'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {7'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_data = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_last,{io_push_payload_keep_,{io_push_payload_strb,io_push_payload_data}}};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_data) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 8'hff);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 8'hff);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
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
  assign _zz_io_pop_payload_data = _zz_logic_ram_port0;
  assign io_pop_payload_data = _zz_io_pop_payload_data[31 : 0];
  assign io_pop_payload_strb = _zz_io_pop_payload_data[35 : 32];
  assign io_pop_payload_keep_ = _zz_io_pop_payload_data[39 : 36];
  assign io_pop_payload_last = _zz_io_pop_payload_data[40];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
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
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module StreamFifo_15 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [0:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [0:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [1:0]    _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [1:0]    _zz_logic_ram_port_1;
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
  wire       [1:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l954;
  wire       [4:0]    logic_ptrDif;
  reg [1:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
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
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[1 : 1];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module PhyRxCrcChecker (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [7:0]    result_data_payload_fragment,
  input               header_message_valid,
  input      [7:0]    header_message_payload_pkg_size,
  input      [1:0]    header_message_payload_demod_method,
  output reg          phy_rx_finish,
  input               clk,
  input               reset
);
  localparam PhyRxCrcCheckerStatus_IDLE = 3'd0;
  localparam PhyRxCrcCheckerStatus_CALC_CRC = 3'd1;
  localparam PhyRxCrcCheckerStatus_CMP = 3'd2;
  localparam PhyRxCrcCheckerStatus_TRANS = 3'd3;
  localparam PhyRxCrcCheckerStatus_RESET = 3'd4;

  wire                crc_2_flush;
  wire                crc_2_input_valid;
  wire                data_fifo_io_push_valid;
  wire                data_fifo_io_push_payload_last;
  wire                data_fifo_io_pop_ready;
  wire       [31:0]   crc_2_result;
  wire       [31:0]   crc_2_resultNext;
  wire                data_fifo_io_push_ready;
  wire                data_fifo_io_pop_valid;
  wire                data_fifo_io_pop_payload_last;
  wire       [7:0]    data_fifo_io_pop_payload_fragment;
  wire       [7:0]    data_fifo_io_occupancy;
  wire       [7:0]    data_fifo_io_availability;
  reg        [7:0]    _zz_crc_checker_result;
  wire       [1:0]    _zz_crc_checker_result_1;
  reg        [2:0]    crc_status;
  reg                 fifo_push_valve;
  reg                 fifo_pop_valve;
  reg        [7:0]    pkg_cnt;
  reg        [7:0]    pkg_limit;
  wire                raw_data_fire;
  wire                result_data_fire;
  wire                raw_data_fire_1;
  wire       [7:0]    crc_checker_result;
  wire                raw_data_fire_2;
  wire                when_PhyRx_l441;
  wire                raw_data_fire_3;
  wire                when_PhyRx_l454;
  wire                when_PhyRx_l458;
  wire                when_PhyRx_l467;
  wire                when_PhyRx_l473;
  wire                _zz_result_data_valid;
  `ifndef SYNTHESIS
  reg [63:0] crc_status_string;
  `endif


  assign _zz_crc_checker_result_1 = pkg_cnt[1:0];
  Crc crc_2 (
    .flush            (crc_2_flush                     ), //i
    .input_valid      (crc_2_input_valid               ), //i
    .input_payload    (raw_data_payload_fragment[7:0]  ), //i
    .result           (crc_2_result[31:0]              ), //o
    .resultNext       (crc_2_resultNext[31:0]          ), //o
    .clk              (clk                             ), //i
    .reset            (reset                           )  //i
  );
  StreamFifo_3 data_fifo (
    .io_push_valid               (data_fifo_io_push_valid                 ), //i
    .io_push_ready               (data_fifo_io_push_ready                 ), //o
    .io_push_payload_last        (data_fifo_io_push_payload_last          ), //i
    .io_push_payload_fragment    (raw_data_payload_fragment[7:0]          ), //i
    .io_pop_valid                (data_fifo_io_pop_valid                  ), //o
    .io_pop_ready                (data_fifo_io_pop_ready                  ), //i
    .io_pop_payload_last         (data_fifo_io_pop_payload_last           ), //o
    .io_pop_payload_fragment     (data_fifo_io_pop_payload_fragment[7:0]  ), //o
    .io_flush                    (phy_rx_finish                           ), //i
    .io_occupancy                (data_fifo_io_occupancy[7:0]             ), //o
    .io_availability             (data_fifo_io_availability[7:0]          ), //o
    .clk                         (clk                                     ), //i
    .reset                       (reset                                   )  //i
  );
  always @(*) begin
    case(_zz_crc_checker_result_1)
      2'b00 : _zz_crc_checker_result = crc_2_result[7 : 0];
      2'b01 : _zz_crc_checker_result = crc_2_result[15 : 8];
      2'b10 : _zz_crc_checker_result = crc_2_result[23 : 16];
      default : _zz_crc_checker_result = crc_2_result[31 : 24];
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(crc_status)
      PhyRxCrcCheckerStatus_IDLE : crc_status_string = "IDLE    ";
      PhyRxCrcCheckerStatus_CALC_CRC : crc_status_string = "CALC_CRC";
      PhyRxCrcCheckerStatus_CMP : crc_status_string = "CMP     ";
      PhyRxCrcCheckerStatus_TRANS : crc_status_string = "TRANS   ";
      PhyRxCrcCheckerStatus_RESET : crc_status_string = "RESET   ";
      default : crc_status_string = "????????";
    endcase
  end
  `endif

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign crc_2_input_valid = (raw_data_fire && fifo_push_valve);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign crc_2_flush = (result_data_fire && result_data_payload_last);
  always @(*) begin
    phy_rx_finish = 1'b0;
    case(crc_status)
      PhyRxCrcCheckerStatus_IDLE : begin
      end
      PhyRxCrcCheckerStatus_CALC_CRC : begin
      end
      PhyRxCrcCheckerStatus_CMP : begin
      end
      PhyRxCrcCheckerStatus_TRANS : begin
      end
      default : begin
        phy_rx_finish = 1'b1;
      end
    endcase
  end

  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign data_fifo_io_push_valid = (raw_data_fire_1 && fifo_push_valve);
  assign data_fifo_io_push_payload_last = (pkg_cnt == pkg_limit);
  always @(*) begin
    raw_data_ready = 1'b0;
    case(crc_status)
      PhyRxCrcCheckerStatus_IDLE : begin
      end
      PhyRxCrcCheckerStatus_CALC_CRC : begin
        raw_data_ready = data_fifo_io_push_ready;
      end
      PhyRxCrcCheckerStatus_CMP : begin
        raw_data_ready = data_fifo_io_push_ready;
      end
      PhyRxCrcCheckerStatus_TRANS : begin
      end
      default : begin
      end
    endcase
  end

  assign crc_checker_result = _zz_crc_checker_result;
  assign raw_data_fire_2 = (raw_data_valid && raw_data_ready);
  assign when_PhyRx_l441 = (pkg_cnt == pkg_limit);
  assign raw_data_fire_3 = (raw_data_valid && raw_data_ready);
  assign when_PhyRx_l454 = (raw_data_payload_last || (pkg_cnt == 8'h04));
  assign when_PhyRx_l458 = (raw_data_payload_fragment != crc_checker_result);
  assign when_PhyRx_l467 = (data_fifo_io_occupancy == 8'h0);
  assign when_PhyRx_l473 = (pkg_cnt == 8'h03);
  assign _zz_result_data_valid = (! (! fifo_pop_valve));
  assign data_fifo_io_pop_ready = (result_data_ready && _zz_result_data_valid);
  assign result_data_valid = (data_fifo_io_pop_valid && _zz_result_data_valid);
  assign result_data_payload_last = data_fifo_io_pop_payload_last;
  assign result_data_payload_fragment = data_fifo_io_pop_payload_fragment;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      crc_status <= PhyRxCrcCheckerStatus_IDLE;
      fifo_push_valve <= 1'b0;
      fifo_pop_valve <= 1'b0;
    end else begin
      case(crc_status)
        PhyRxCrcCheckerStatus_IDLE : begin
          if(header_message_valid) begin
            crc_status <= PhyRxCrcCheckerStatus_CALC_CRC;
            fifo_push_valve <= 1'b1;
            fifo_pop_valve <= 1'b0;
          end else begin
            fifo_push_valve <= 1'b0;
            fifo_pop_valve <= 1'b1;
          end
        end
        PhyRxCrcCheckerStatus_CALC_CRC : begin
          if(raw_data_fire_2) begin
            if(when_PhyRx_l441) begin
              fifo_push_valve <= 1'b0;
              crc_status <= PhyRxCrcCheckerStatus_CMP;
            end
          end
        end
        PhyRxCrcCheckerStatus_CMP : begin
          if(raw_data_fire_3) begin
            if(when_PhyRx_l454) begin
              fifo_pop_valve <= 1'b1;
              crc_status <= PhyRxCrcCheckerStatus_TRANS;
            end else begin
              if(when_PhyRx_l458) begin
                crc_status <= PhyRxCrcCheckerStatus_RESET;
              end
            end
          end
        end
        PhyRxCrcCheckerStatus_TRANS : begin
          if(when_PhyRx_l467) begin
            crc_status <= PhyRxCrcCheckerStatus_RESET;
          end
        end
        default : begin
          if(when_PhyRx_l473) begin
            crc_status <= PhyRxCrcCheckerStatus_IDLE;
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(crc_status)
      PhyRxCrcCheckerStatus_IDLE : begin
        pkg_cnt <= 8'h0;
        if(header_message_valid) begin
          pkg_limit <= (header_message_payload_pkg_size - 8'h01);
        end
      end
      PhyRxCrcCheckerStatus_CALC_CRC : begin
        if(raw_data_fire_2) begin
          if(when_PhyRx_l441) begin
            pkg_cnt <= 8'h0;
          end else begin
            pkg_cnt <= (pkg_cnt + 8'h01);
          end
        end
      end
      PhyRxCrcCheckerStatus_CMP : begin
        if(raw_data_fire_3) begin
          if(when_PhyRx_l454) begin
            pkg_cnt <= 8'h0;
          end else begin
            if(when_PhyRx_l458) begin
              pkg_cnt <= 8'h0;
            end else begin
              pkg_cnt <= (pkg_cnt + 8'h01);
            end
          end
        end
      end
      PhyRxCrcCheckerStatus_TRANS : begin
      end
      default : begin
        pkg_cnt <= (pkg_cnt + 8'h01);
      end
    endcase
  end


endmodule

module StreamFifo_14 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [1:0]    io_push_payload_fragment_data,
  input      [1:0]    io_push_payload_fragment_indicate,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [1:0]    io_pop_payload_fragment_data,
  output     [1:0]    io_pop_payload_fragment_indicate,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [4:0]    _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [4:0]    _zz_logic_ram_port_1;
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
  wire       [4:0]    _zz_io_pop_payload_last;
  wire       [3:0]    _zz_io_pop_payload_fragment_data;
  wire                when_Stream_l954;
  wire       [4:0]    logic_ptrDif;
  reg [4:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {{io_push_payload_fragment_indicate,io_push_payload_fragment_data},io_push_payload_last};
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
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign _zz_io_pop_payload_fragment_data = _zz_io_pop_payload_last[4 : 1];
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment_data = _zz_io_pop_payload_fragment_data[1 : 0];
  assign io_pop_payload_fragment_indicate = _zz_io_pop_payload_fragment_data[3 : 2];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module ViterbiDecoder (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [1:0]    raw_data_payload_fragment_data,
  input      [1:0]    raw_data_payload_fragment_indicate,
  output              decoded_data_valid,
  output              decoded_data_payload_last,
  output     [0:0]    decoded_data_payload_fragment,
  input               clk,
  input               reset
);

  wire                pmu_core_raw_data_ready;
  wire       [5:0]    pmu_core_min_idx;
  wire                pmu_core_s_path_valid;
  wire                pmu_core_s_path_payload_last;
  wire       [63:0]   pmu_core_s_path_payload_fragment;
  wire                tbu_core_tb_node_valid;
  wire                tbu_core_tb_node_payload_last;
  wire       [1:0]    tbu_core_tb_node_payload_fragment;
  wire                tbu_core_halt;
  wire                tbu_core_finished;
  wire                lifo_core_decoded_data_valid;
  wire                lifo_core_decoded_data_payload_last;
  wire       [0:0]    lifo_core_decoded_data_payload_fragment;
  wire                raw_data_fire;

  PathMetric pmu_core (
    .raw_data_valid                        (raw_data_fire                            ), //i
    .raw_data_ready                        (pmu_core_raw_data_ready                  ), //o
    .raw_data_payload_last                 (raw_data_payload_last                    ), //i
    .raw_data_payload_fragment_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_payload_fragment_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .tbu_finished                          (tbu_core_finished                        ), //i
    .min_idx                               (pmu_core_min_idx[5:0]                    ), //o
    .s_path_valid                          (pmu_core_s_path_valid                    ), //o
    .s_path_payload_last                   (pmu_core_s_path_payload_last             ), //o
    .s_path_payload_fragment               (pmu_core_s_path_payload_fragment[63:0]   ), //o
    .clk                                   (clk                                      ), //i
    .reset                                 (reset                                    )  //i
  );
  Traceback tbu_core (
    .min_idx                     (pmu_core_min_idx[5:0]                   ), //i
    .s_path_valid                (pmu_core_s_path_valid                   ), //i
    .s_path_payload_last         (pmu_core_s_path_payload_last            ), //i
    .s_path_payload_fragment     (pmu_core_s_path_payload_fragment[63:0]  ), //i
    .tb_node_valid               (tbu_core_tb_node_valid                  ), //o
    .tb_node_payload_last        (tbu_core_tb_node_payload_last           ), //o
    .tb_node_payload_fragment    (tbu_core_tb_node_payload_fragment[1:0]  ), //o
    .halt                        (tbu_core_halt                           ), //o
    .finished                    (tbu_core_finished                       ), //o
    .clk                         (clk                                     ), //i
    .reset                       (reset                                   )  //i
  );
  ReorderLifo lifo_core (
    .inverted_order_valid               (tbu_core_tb_node_valid                   ), //i
    .inverted_order_payload_last        (tbu_core_tb_node_payload_last            ), //i
    .inverted_order_payload_fragment    (tbu_core_tb_node_payload_fragment[1:0]   ), //i
    .decoded_data_valid                 (lifo_core_decoded_data_valid             ), //o
    .decoded_data_payload_last          (lifo_core_decoded_data_payload_last      ), //o
    .decoded_data_payload_fragment      (lifo_core_decoded_data_payload_fragment  ), //o
    .clk                                (clk                                      ), //i
    .reset                              (reset                                    )  //i
  );
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign raw_data_ready = ((! tbu_core_halt) && pmu_core_raw_data_ready);
  assign decoded_data_valid = lifo_core_decoded_data_valid;
  assign decoded_data_payload_last = lifo_core_decoded_data_payload_last;
  assign decoded_data_payload_fragment = lifo_core_decoded_data_payload_fragment;

endmodule

module DePuncturing (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output              de_punched_data_valid,
  input               de_punched_data_ready,
  output              de_punched_data_payload_last,
  output     [1:0]    de_punched_data_payload_fragment_data,
  output     [1:0]    de_punched_data_payload_fragment_indicate,
  input               clk,
  input               reset
);

  reg        [1:0]    _zz_switch_Misc_l211;
  wire       [2:0]    _zz_switch_Misc_l211_1;
  wire       [3:0]    _zz_mask_cnt;
  reg        [1:0]    _zz_switch_Misc_l211_1_1;
  wire       [2:0]    _zz_switch_Misc_l211_1_2;
  reg        [1:0]    _zz_de_punched_data_payload_fragment_indicate;
  wire       [2:0]    _zz_de_punched_data_payload_fragment_indicate_1;
  wire       [1:0]    mask_rom_0;
  wire       [1:0]    mask_rom_1;
  wire       [1:0]    mask_rom_2;
  wire       [1:0]    mask_rom_3;
  wire       [1:0]    mask_rom_4;
  wire       [1:0]    mask_rom_5;
  wire       [1:0]    mask_rom_6;
  wire       [1:0]    mask_rom_7;
  reg        [3:0]    mask_cnt;
  reg        [3:0]    cnt;
  reg        [15:0]   raw_data_fragment;
  reg                 raw_data_last;
  wire                when_DePuncturing_l52;
  wire       [1:0]    switch_Misc_l211;
  reg        [15:0]   _zz_raw_data_fragment;
  wire                raw_data_fire;
  wire                de_punched_data_fire;
  wire       [1:0]    switch_Misc_l211_1;
  reg        [1:0]    _zz_de_punched_data_payload_fragment_data;

  assign _zz_switch_Misc_l211_1 = mask_cnt[2:0];
  assign _zz_mask_cnt = (mask_cnt + 4'b0001);
  assign _zz_switch_Misc_l211_1_2 = mask_cnt[2:0];
  assign _zz_de_punched_data_payload_fragment_indicate_1 = mask_cnt[2:0];
  always @(*) begin
    case(_zz_switch_Misc_l211_1)
      3'b000 : _zz_switch_Misc_l211 = mask_rom_0;
      3'b001 : _zz_switch_Misc_l211 = mask_rom_1;
      3'b010 : _zz_switch_Misc_l211 = mask_rom_2;
      3'b011 : _zz_switch_Misc_l211 = mask_rom_3;
      3'b100 : _zz_switch_Misc_l211 = mask_rom_4;
      3'b101 : _zz_switch_Misc_l211 = mask_rom_5;
      3'b110 : _zz_switch_Misc_l211 = mask_rom_6;
      default : _zz_switch_Misc_l211 = mask_rom_7;
    endcase
  end

  always @(*) begin
    case(_zz_switch_Misc_l211_1_2)
      3'b000 : _zz_switch_Misc_l211_1_1 = mask_rom_0;
      3'b001 : _zz_switch_Misc_l211_1_1 = mask_rom_1;
      3'b010 : _zz_switch_Misc_l211_1_1 = mask_rom_2;
      3'b011 : _zz_switch_Misc_l211_1_1 = mask_rom_3;
      3'b100 : _zz_switch_Misc_l211_1_1 = mask_rom_4;
      3'b101 : _zz_switch_Misc_l211_1_1 = mask_rom_5;
      3'b110 : _zz_switch_Misc_l211_1_1 = mask_rom_6;
      default : _zz_switch_Misc_l211_1_1 = mask_rom_7;
    endcase
  end

  always @(*) begin
    case(_zz_de_punched_data_payload_fragment_indicate_1)
      3'b000 : _zz_de_punched_data_payload_fragment_indicate = mask_rom_0;
      3'b001 : _zz_de_punched_data_payload_fragment_indicate = mask_rom_1;
      3'b010 : _zz_de_punched_data_payload_fragment_indicate = mask_rom_2;
      3'b011 : _zz_de_punched_data_payload_fragment_indicate = mask_rom_3;
      3'b100 : _zz_de_punched_data_payload_fragment_indicate = mask_rom_4;
      3'b101 : _zz_de_punched_data_payload_fragment_indicate = mask_rom_5;
      3'b110 : _zz_de_punched_data_payload_fragment_indicate = mask_rom_6;
      default : _zz_de_punched_data_payload_fragment_indicate = mask_rom_7;
    endcase
  end

  assign mask_rom_0 = 2'b11;
  assign mask_rom_1 = 2'b11;
  assign mask_rom_2 = 2'b11;
  assign mask_rom_3 = 2'b11;
  assign mask_rom_4 = 2'b11;
  assign mask_rom_5 = 2'b11;
  assign mask_rom_6 = 2'b11;
  assign mask_rom_7 = 2'b11;
  assign when_DePuncturing_l52 = (raw_data_last && (cnt == 4'b0000));
  assign switch_Misc_l211 = _zz_switch_Misc_l211;
  always @(*) begin
    case(switch_Misc_l211)
      2'b11 : begin
        _zz_raw_data_fragment = (raw_data_fragment >>> 2);
      end
      default : begin
        _zz_raw_data_fragment = raw_data_fragment;
      end
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign de_punched_data_fire = (de_punched_data_valid && de_punched_data_ready);
  assign switch_Misc_l211_1 = _zz_switch_Misc_l211_1_1;
  always @(*) begin
    case(switch_Misc_l211_1)
      2'b11 : begin
        _zz_de_punched_data_payload_fragment_data = {raw_data_fragment[1 : 1],raw_data_fragment[0 : 0]};
      end
      default : begin
        _zz_de_punched_data_payload_fragment_data = 2'b00;
      end
    endcase
  end

  assign de_punched_data_payload_fragment_data = _zz_de_punched_data_payload_fragment_data;
  assign de_punched_data_payload_fragment_indicate = _zz_de_punched_data_payload_fragment_indicate;
  assign de_punched_data_valid = (cnt != 4'b0000);
  assign de_punched_data_payload_last = ((cnt == 4'b0001) && raw_data_last);
  assign raw_data_ready = ((cnt == 4'b0000) && (! raw_data_last));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      mask_cnt <= 4'b0000;
      cnt <= 4'b0000;
      raw_data_last <= 1'b0;
    end else begin
      if(when_DePuncturing_l52) begin
        mask_cnt <= 4'b0000;
        cnt <= 4'b0000;
        raw_data_last <= 1'b0;
      end else begin
        if(raw_data_fire) begin
          raw_data_last <= raw_data_payload_last;
          cnt <= 4'b1000;
        end else begin
          if(de_punched_data_fire) begin
            cnt <= (cnt - 4'b0001);
            mask_cnt <= ((mask_cnt == 4'b0111) ? 4'b0000 : _zz_mask_cnt);
          end
        end
      end
    end
  end

  always @(posedge clk) begin
    if(!when_DePuncturing_l52) begin
      if(raw_data_fire) begin
        raw_data_fragment <= raw_data_payload_fragment;
      end else begin
        if(de_punched_data_fire) begin
          raw_data_fragment <= _zz_raw_data_fragment;
        end
      end
    end
  end


endmodule

module StreamFifo_13 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [15:0]   io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [15:0]   io_pop_payload_fragment,
  input               io_flush,
  output reg [6:0]    io_occupancy,
  output reg [6:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [16:0]   _zz_logic_ram_port0;
  wire       [6:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [6:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [16:0]   _zz_logic_ram_port_1;
  wire       [6:0]    _zz_io_occupancy;
  wire       [6:0]    _zz_io_availability;
  wire       [6:0]    _zz_io_availability_1;
  wire       [6:0]    _zz_io_availability_2;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [6:0]    logic_pushPtr_valueNext;
  reg        [6:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [6:0]    logic_popPtr_valueNext;
  reg        [6:0]    logic_popPtr_value;
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
  wire                when_Stream_l954;
  wire       [6:0]    logic_ptrDif;
  reg [16:0] logic_ram [0:83];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {6'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {6'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (7'h54 + logic_ptrDif);
  assign _zz_io_availability = (7'h54 + _zz_io_availability_1);
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 7'h53);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 7'h0;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 7'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 7'h53);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 7'h0;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 7'h0;
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
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 7'h54 : 7'h0);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 7'h0 : 7'h54);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 7'h0;
      logic_popPtr_value <= 7'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module PhyRxDescrambling (
  input               raw_data_valid,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output reg          result_data_valid,
  output              result_data_payload_last,
  output     [15:0]   result_data_payload_fragment,
  input               clk,
  input               reset
);
  localparam PhyRxDescramblerStatus_IDLE = 2'd0;
  localparam PhyRxDescramblerStatus_DESCRAMBLING = 2'd1;
  localparam PhyRxDescramblerStatus_FINAL_1 = 2'd2;

  reg                 descrambler_init_state_valid;
  reg                 descrambler_scram_data_ready;
  wire                descrambler_scram_data_valid;
  wire       [15:0]   descrambler_scram_data_payload;
  reg        [1:0]    descrambler_status;
  wire                when_PhyRx_l377;
  `ifndef SYNTHESIS
  reg [95:0] descrambler_status_string;
  `endif


  Scrambler descrambler (
    .init_state_valid      (descrambler_init_state_valid          ), //i
    .init_state_payload    (7'h7f                                 ), //i
    .scram_data_valid      (descrambler_scram_data_valid          ), //o
    .scram_data_ready      (descrambler_scram_data_ready          ), //i
    .scram_data_payload    (descrambler_scram_data_payload[15:0]  ), //o
    .clk                   (clk                                   ), //i
    .reset                 (reset                                 )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(descrambler_status)
      PhyRxDescramblerStatus_IDLE : descrambler_status_string = "IDLE        ";
      PhyRxDescramblerStatus_DESCRAMBLING : descrambler_status_string = "DESCRAMBLING";
      PhyRxDescramblerStatus_FINAL_1 : descrambler_status_string = "FINAL_1     ";
      default : descrambler_status_string = "????????????";
    endcase
  end
  `endif

  always @(*) begin
    result_data_valid = 1'b0;
    case(descrambler_status)
      PhyRxDescramblerStatus_IDLE : begin
      end
      PhyRxDescramblerStatus_DESCRAMBLING : begin
        result_data_valid = (descrambler_scram_data_valid && raw_data_valid);
      end
      default : begin
      end
    endcase
  end

  assign result_data_payload_fragment = (descrambler_scram_data_payload ^ raw_data_payload_fragment);
  assign result_data_payload_last = raw_data_payload_last;
  always @(*) begin
    case(descrambler_status)
      PhyRxDescramblerStatus_IDLE : begin
        descrambler_scram_data_ready = 1'b1;
      end
      PhyRxDescramblerStatus_DESCRAMBLING : begin
        descrambler_scram_data_ready = raw_data_valid;
      end
      default : begin
        descrambler_scram_data_ready = 1'b0;
      end
    endcase
  end

  always @(*) begin
    case(descrambler_status)
      PhyRxDescramblerStatus_IDLE : begin
        descrambler_init_state_valid = 1'b0;
      end
      PhyRxDescramblerStatus_DESCRAMBLING : begin
        descrambler_init_state_valid = 1'b0;
      end
      default : begin
        descrambler_init_state_valid = 1'b1;
      end
    endcase
  end

  assign when_PhyRx_l377 = (raw_data_valid && raw_data_payload_last);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      descrambler_status <= PhyRxDescramblerStatus_FINAL_1;
    end else begin
      case(descrambler_status)
        PhyRxDescramblerStatus_IDLE : begin
          descrambler_status <= PhyRxDescramblerStatus_DESCRAMBLING;
        end
        PhyRxDescramblerStatus_DESCRAMBLING : begin
          if(when_PhyRx_l377) begin
            descrambler_status <= PhyRxDescramblerStatus_FINAL_1;
          end
        end
        default : begin
          descrambler_status <= PhyRxDescramblerStatus_IDLE;
        end
      endcase
    end
  end


endmodule

module PhyRxDataCombination (
  input               raw_data_valid,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              result_data_valid,
  output              result_data_payload_last,
  output     [15:0]   result_data_payload_fragment,
  input               header_message_valid,
  input      [7:0]    header_message_payload_pkg_size,
  input      [1:0]    header_message_payload_demod_method,
  input               enable,
  input               clk,
  input               reset
);

  wire       [15:0]   data_combination_unit_data_payload_fragment;
  wire       [3:0]    data_combination_cnt_step;
  wire       [3:0]    data_combination_cnt_limit;
  wire                data_combination_base_data_valid;
  wire                data_combination_base_data_payload_last;
  wire       [15:0]   data_combination_base_data_payload_fragment;
  wire       [4:0]    _zz_cnt_limit;
  wire       [4:0]    _zz_cnt_limit_1;
  reg        [1:0]    demod_method;
  reg        [2:0]    data_shift;
  wire                _zz_unit_data_valid;
  wire                _zz_unit_data_payload_last;

  assign _zz_cnt_limit = (5'h10 - _zz_cnt_limit_1);
  assign _zz_cnt_limit_1 = {2'd0, data_shift};
  dataCombination data_combination (
    .unit_data_valid               (_zz_unit_data_valid                                ), //i
    .unit_data_payload_last        (_zz_unit_data_payload_last                         ), //i
    .unit_data_payload_fragment    (data_combination_unit_data_payload_fragment[15:0]  ), //i
    .base_data_valid               (data_combination_base_data_valid                   ), //o
    .base_data_payload_last        (data_combination_base_data_payload_last            ), //o
    .base_data_payload_fragment    (data_combination_base_data_payload_fragment[15:0]  ), //o
    .enable                        (enable                                             ), //i
    .cnt_step                      (data_combination_cnt_step[3:0]                     ), //i
    .cnt_limit                     (data_combination_cnt_limit[3:0]                    ), //i
    .clk                           (clk                                                ), //i
    .reset                         (reset                                              )  //i
  );
  always @(*) begin
    case(demod_method)
      2'b00 : begin
        data_shift = 3'b001;
      end
      2'b01 : begin
        data_shift = 3'b010;
      end
      2'b10 : begin
        data_shift = 3'b100;
      end
      default : begin
        data_shift = 3'b000;
      end
    endcase
  end

  assign _zz_unit_data_valid = raw_data_valid;
  assign _zz_unit_data_payload_last = raw_data_payload_last;
  assign data_combination_unit_data_payload_fragment = {8'd0, raw_data_payload_fragment};
  assign data_combination_cnt_limit = _zz_cnt_limit[3:0];
  assign data_combination_cnt_step = {1'd0, data_shift};
  assign result_data_valid = data_combination_base_data_valid;
  assign result_data_payload_last = data_combination_base_data_payload_last;
  assign result_data_payload_fragment = data_combination_base_data_payload_fragment;
  always @(posedge clk) begin
    if(header_message_valid) begin
      demod_method <= header_message_payload_demod_method;
    end
  end


endmodule

module PhyRxDemodulator (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              result_data_valid,
  output              result_data_payload_last,
  output     [7:0]    result_data_payload_fragment,
  input               header_message_valid,
  input      [7:0]    header_message_payload_pkg_size,
  input      [1:0]    header_message_payload_demod_method,
  input               clk,
  input               reset
);
  localparam PhyRxDemodualtorStatus_IDLE = 2'd0;
  localparam PhyRxDemodualtorStatus_CALC = 2'd1;
  localparam PhyRxDemodualtorStatus_DATA = 2'd2;

  wire                demodulator_inst_data_flow_mod_iq_valid;
  wire                demodulator_inst_data_flow_mod_iq_payload_last;
  wire                demodulator_inst_data_flow_unit_data_valid;
  wire                demodulator_inst_data_flow_unit_data_payload_last;
  wire       [7:0]    demodulator_inst_data_flow_unit_data_payload_fragment;
  wire       [7:0]    _zz_bytes_size;
  wire       [11:0]   _zz__zz_desc_cnt;
  wire       [10:0]   _zz__zz_desc_cnt_1;
  wire       [9:0]    _zz__zz_desc_cnt_2;
  wire       [10:0]   _zz_when_PhyRx_l299;
  wire       [10:0]   _zz_data_flow_mod_iq_payload_last;
  reg        [10:0]   desc_cnt;
  reg        [10:0]   symbol_cnt;
  reg        [1:0]    demod_method;
  reg        [1:0]    demodulator_states;
  reg        [7:0]    bytes_size;
  reg        [10:0]   _zz_desc_cnt;
  wire                when_PhyRx_l299;
  `ifndef SYNTHESIS
  reg [31:0] demodulator_states_string;
  `endif


  assign _zz_bytes_size = (header_message_payload_pkg_size + 8'h04);
  assign _zz__zz_desc_cnt = ({4'd0,bytes_size} <<< 4);
  assign _zz__zz_desc_cnt_1 = ({3'd0,bytes_size} <<< 3);
  assign _zz__zz_desc_cnt_2 = ({2'd0,bytes_size} <<< 2);
  assign _zz_when_PhyRx_l299 = (desc_cnt - 11'h001);
  assign _zz_data_flow_mod_iq_payload_last = (desc_cnt - 11'h001);
  DemodulatorRTL demodulator_inst (
    .select_1                                   (demod_method[1:0]                                           ), //i
    .data_flow_unit_data_valid                  (demodulator_inst_data_flow_unit_data_valid                  ), //o
    .data_flow_unit_data_payload_last           (demodulator_inst_data_flow_unit_data_payload_last           ), //o
    .data_flow_unit_data_payload_fragment       (demodulator_inst_data_flow_unit_data_payload_fragment[7:0]  ), //o
    .data_flow_mod_iq_valid                     (demodulator_inst_data_flow_mod_iq_valid                     ), //i
    .data_flow_mod_iq_payload_last              (demodulator_inst_data_flow_mod_iq_payload_last              ), //i
    .data_flow_mod_iq_payload_fragment_cha_i    (raw_data_payload_cha_i[11:0]                                ), //i
    .data_flow_mod_iq_payload_fragment_cha_q    (raw_data_payload_cha_q[11:0]                                ), //i
    .clk                                        (clk                                                         ), //i
    .reset                                      (reset                                                       )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(demodulator_states)
      PhyRxDemodualtorStatus_IDLE : demodulator_states_string = "IDLE";
      PhyRxDemodualtorStatus_CALC : demodulator_states_string = "CALC";
      PhyRxDemodualtorStatus_DATA : demodulator_states_string = "DATA";
      default : demodulator_states_string = "????";
    endcase
  end
  `endif

  always @(*) begin
    case(demod_method)
      2'b00 : begin
        _zz_desc_cnt = _zz__zz_desc_cnt[10:0];
      end
      2'b01 : begin
        _zz_desc_cnt = _zz__zz_desc_cnt_1;
      end
      2'b10 : begin
        _zz_desc_cnt = {1'd0, _zz__zz_desc_cnt_2};
      end
      default : begin
        _zz_desc_cnt = {3'd0, bytes_size};
      end
    endcase
  end

  assign when_PhyRx_l299 = (symbol_cnt == _zz_when_PhyRx_l299);
  assign demodulator_inst_data_flow_mod_iq_valid = (raw_data_valid && (demodulator_states == PhyRxDemodualtorStatus_DATA));
  assign demodulator_inst_data_flow_mod_iq_payload_last = ((symbol_cnt == _zz_data_flow_mod_iq_payload_last) && raw_data_valid);
  assign result_data_valid = demodulator_inst_data_flow_unit_data_valid;
  assign result_data_payload_last = demodulator_inst_data_flow_unit_data_payload_last;
  assign result_data_payload_fragment = demodulator_inst_data_flow_unit_data_payload_fragment;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      desc_cnt <= 11'h0;
      symbol_cnt <= 11'h0;
      demodulator_states <= PhyRxDemodualtorStatus_IDLE;
    end else begin
      case(demodulator_states)
        PhyRxDemodualtorStatus_IDLE : begin
          if(header_message_valid) begin
            demodulator_states <= PhyRxDemodualtorStatus_CALC;
          end
          symbol_cnt <= 11'h0;
        end
        PhyRxDemodualtorStatus_CALC : begin
          desc_cnt <= _zz_desc_cnt;
          demodulator_states <= PhyRxDemodualtorStatus_DATA;
        end
        default : begin
          if(raw_data_valid) begin
            symbol_cnt <= (symbol_cnt + 11'h001);
            if(when_PhyRx_l299) begin
              demodulator_states <= PhyRxDemodualtorStatus_IDLE;
            end
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(demodulator_states)
      PhyRxDemodualtorStatus_IDLE : begin
        if(header_message_valid) begin
          demod_method <= header_message_payload_demod_method;
          bytes_size <= (_zz_bytes_size + 8'h01);
        end
      end
      PhyRxDemodualtorStatus_CALC : begin
      end
      default : begin
      end
    endcase
  end


endmodule

module PhyRxHeaderExtender (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              result_data_valid,
  output     [11:0]   result_data_payload_cha_i,
  output     [11:0]   result_data_payload_cha_q,
  output reg          sdf_not_found,
  input               header_extender_reset,
  output              header_message_valid,
  output     [7:0]    header_message_payload_pkg_size,
  output     [1:0]    header_message_payload_demod_method,
  output     [7:0]    package_size,
  input               clk,
  input               reset
);
  localparam PhyRxHeaderStatus_SDF = 2'd0;
  localparam PhyRxHeaderStatus_METHOD = 2'd1;
  localparam PhyRxHeaderStatus_SIZE = 2'd2;
  localparam PhyRxHeaderStatus_DATA = 2'd3;

  wire       [11:0]   _zz_raw_data_i_bpsk_demoded;
  wire       [0:0]    _zz_demod_method;
  wire       [2:0]    _zz_pkg_size;
  reg        [3:0]    cnt;
  reg        [7:0]    sdf_i_win;
  reg        [7:0]    sdf_i_ref;
  reg                 by_pass_enable;
  wire                raw_data_i_bpsk_demoded;
  reg        [7:0]    pkg_size;
  reg        [1:0]    demod_method;
  reg        [1:0]    header_status;
  reg                 message_valid;
  reg        [5:0]    timeout;
  wire                when_PhyRx_l207;
  wire                when_PhyRx_l214;
  wire                when_PhyRx_l222;
  wire                when_PhyRx_l233;
  wire                raw_data_takeWhen_valid;
  wire       [11:0]   raw_data_takeWhen_payload_cha_i;
  wire       [11:0]   raw_data_takeWhen_payload_cha_q;
  reg                 raw_data_takeWhen_regNext_valid;
  reg        [11:0]   raw_data_takeWhen_regNext_payload_cha_i;
  reg        [11:0]   raw_data_takeWhen_regNext_payload_cha_q;
  `ifndef SYNTHESIS
  reg [47:0] header_status_string;
  `endif

  function [7:0] zz_sdf_i_ref(input dummy);
    begin
      zz_sdf_i_ref[0] = 1'b0;
      zz_sdf_i_ref[1] = 1'b1;
      zz_sdf_i_ref[2] = 1'b0;
      zz_sdf_i_ref[3] = 1'b0;
      zz_sdf_i_ref[4] = 1'b1;
      zz_sdf_i_ref[5] = 1'b1;
      zz_sdf_i_ref[6] = 1'b0;
      zz_sdf_i_ref[7] = 1'b0;
    end
  endfunction
  wire [7:0] _zz_1;

  assign _zz_raw_data_i_bpsk_demoded = 12'h0;
  assign _zz_demod_method = cnt[0:0];
  assign _zz_pkg_size = cnt[2:0];
  `ifndef SYNTHESIS
  always @(*) begin
    case(header_status)
      PhyRxHeaderStatus_SDF : header_status_string = "SDF   ";
      PhyRxHeaderStatus_METHOD : header_status_string = "METHOD";
      PhyRxHeaderStatus_SIZE : header_status_string = "SIZE  ";
      PhyRxHeaderStatus_DATA : header_status_string = "DATA  ";
      default : header_status_string = "??????";
    endcase
  end
  `endif

  assign _zz_1 = zz_sdf_i_ref(1'b0);
  always @(*) sdf_i_ref = _zz_1;
  assign raw_data_i_bpsk_demoded = ($signed(_zz_raw_data_i_bpsk_demoded) <= $signed(raw_data_payload_cha_i));
  always @(*) begin
    sdf_not_found = 1'b0;
    case(header_status)
      PhyRxHeaderStatus_SDF : begin
        if(raw_data_valid) begin
          if(when_PhyRx_l214) begin
            sdf_not_found = 1'b1;
          end
        end
      end
      PhyRxHeaderStatus_METHOD : begin
      end
      PhyRxHeaderStatus_SIZE : begin
      end
      default : begin
      end
    endcase
  end

  assign when_PhyRx_l207 = (sdf_i_win == sdf_i_ref);
  assign when_PhyRx_l214 = (timeout == 6'h3f);
  assign when_PhyRx_l222 = (cnt == 4'b0000);
  assign when_PhyRx_l233 = (cnt == 4'b0000);
  assign raw_data_takeWhen_valid = (raw_data_valid && by_pass_enable);
  assign raw_data_takeWhen_payload_cha_i = raw_data_payload_cha_i;
  assign raw_data_takeWhen_payload_cha_q = raw_data_payload_cha_q;
  assign result_data_valid = raw_data_takeWhen_regNext_valid;
  assign result_data_payload_cha_i = raw_data_takeWhen_regNext_payload_cha_i;
  assign result_data_payload_cha_q = raw_data_takeWhen_regNext_payload_cha_q;
  assign header_message_payload_pkg_size = pkg_size;
  assign header_message_payload_demod_method = demod_method;
  assign header_message_valid = message_valid;
  assign package_size = pkg_size;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 4'b0000;
      sdf_i_win <= 8'h0;
      by_pass_enable <= 1'b0;
      header_status <= PhyRxHeaderStatus_SDF;
      message_valid <= 1'b0;
      timeout <= 6'h0;
      raw_data_takeWhen_regNext_valid <= 1'b0;
    end else begin
      if(header_extender_reset) begin
        sdf_i_win <= 8'h0;
      end else begin
        if(raw_data_valid) begin
          sdf_i_win[0] <= raw_data_i_bpsk_demoded;
          sdf_i_win[1] <= sdf_i_win[0];
          sdf_i_win[2] <= sdf_i_win[1];
          sdf_i_win[3] <= sdf_i_win[2];
          sdf_i_win[4] <= sdf_i_win[3];
          sdf_i_win[5] <= sdf_i_win[4];
          sdf_i_win[6] <= sdf_i_win[5];
          sdf_i_win[7] <= sdf_i_win[6];
        end
      end
      case(header_status)
        PhyRxHeaderStatus_SDF : begin
          if(when_PhyRx_l207) begin
            header_status <= PhyRxHeaderStatus_METHOD;
          end
          cnt <= 4'b0001;
          by_pass_enable <= 1'b0;
          if(raw_data_valid) begin
            timeout <= (timeout + 6'h01);
          end
        end
        PhyRxHeaderStatus_METHOD : begin
          timeout <= 6'h0;
          if(raw_data_valid) begin
            if(when_PhyRx_l222) begin
              header_status <= PhyRxHeaderStatus_SIZE;
              cnt <= 4'b0111;
            end else begin
              cnt <= (cnt - 4'b0001);
            end
          end
        end
        PhyRxHeaderStatus_SIZE : begin
          if(raw_data_valid) begin
            if(when_PhyRx_l233) begin
              header_status <= PhyRxHeaderStatus_DATA;
              message_valid <= 1'b1;
            end else begin
              cnt <= (cnt - 4'b0001);
            end
          end
        end
        default : begin
          if(header_extender_reset) begin
            header_status <= PhyRxHeaderStatus_SDF;
          end
          message_valid <= 1'b0;
          by_pass_enable <= 1'b1;
        end
      endcase
      raw_data_takeWhen_regNext_valid <= raw_data_takeWhen_valid;
    end
  end

  always @(posedge clk) begin
    case(header_status)
      PhyRxHeaderStatus_SDF : begin
      end
      PhyRxHeaderStatus_METHOD : begin
        if(raw_data_valid) begin
          demod_method[_zz_demod_method] <= raw_data_i_bpsk_demoded;
        end
      end
      PhyRxHeaderStatus_SIZE : begin
        if(raw_data_valid) begin
          pkg_size[_zz_pkg_size] <= raw_data_i_bpsk_demoded;
        end
      end
      default : begin
      end
    endcase
    raw_data_takeWhen_regNext_payload_cha_i <= raw_data_takeWhen_payload_cha_i;
    raw_data_takeWhen_regNext_payload_cha_q <= raw_data_takeWhen_payload_cha_q;
  end


endmodule

module PhyRxDecimator (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              result_data_valid,
  output     [11:0]   result_data_payload_cha_i,
  output     [11:0]   result_data_payload_cha_q,
  input               enable,
  input               clk,
  input               reset
);

  wire                decimator_out_valid;
  wire       [11:0]   decimator_out_payload_cha_i;
  wire       [11:0]   decimator_out_payload_cha_q;
  wire                raw_data_takeWhen_valid;
  wire       [11:0]   raw_data_takeWhen_payload_cha_i;
  wire       [11:0]   raw_data_takeWhen_payload_cha_q;

  DecimatorIQ decimator (
    .in_valid             (raw_data_takeWhen_valid                ), //i
    .in_payload_cha_i     (raw_data_takeWhen_payload_cha_i[11:0]  ), //i
    .in_payload_cha_q     (raw_data_takeWhen_payload_cha_q[11:0]  ), //i
    .out_valid            (decimator_out_valid                    ), //o
    .out_payload_cha_i    (decimator_out_payload_cha_i[11:0]      ), //o
    .out_payload_cha_q    (decimator_out_payload_cha_q[11:0]      ), //o
    .clk                  (clk                                    ), //i
    .reset                (reset                                  )  //i
  );
  assign raw_data_takeWhen_valid = (raw_data_valid && enable);
  assign raw_data_takeWhen_payload_cha_i = raw_data_payload_cha_i;
  assign raw_data_takeWhen_payload_cha_q = raw_data_payload_cha_q;
  assign result_data_valid = decimator_out_valid;
  assign result_data_payload_cha_i = decimator_out_payload_cha_i;
  assign result_data_payload_cha_q = decimator_out_payload_cha_q;

endmodule

module PhyRxFilter (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              result_data_valid,
  output     [11:0]   result_data_payload_cha_i,
  output     [11:0]   result_data_payload_cha_q,
  input               clk,
  input               reset
);

  wire                fir_filter_iq_filtered_data_valid;
  wire       [18:0]   fir_filter_iq_filtered_data_payload_0;
  wire       [18:0]   fir_filter_iq_filtered_data_payload_1;

  TransposeFIR fir_filter_iq (
    .raw_data_valid             (raw_data_valid                               ), //i
    .raw_data_payload_0         (raw_data_payload_cha_i[11:0]                 ), //i
    .raw_data_payload_1         (raw_data_payload_cha_q[11:0]                 ), //i
    .filtered_data_valid        (fir_filter_iq_filtered_data_valid            ), //o
    .filtered_data_payload_0    (fir_filter_iq_filtered_data_payload_0[18:0]  ), //o
    .filtered_data_payload_1    (fir_filter_iq_filtered_data_payload_1[18:0]  ), //o
    .clk                        (clk                                          ), //i
    .reset                      (reset                                        )  //i
  );
  assign result_data_valid = fir_filter_iq_filtered_data_valid;
  assign result_data_payload_cha_i = (fir_filter_iq_filtered_data_payload_0 >>> 7);
  assign result_data_payload_cha_q = (fir_filter_iq_filtered_data_payload_1 >>> 7);

endmodule

module PhyRxCFO (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              result_data_valid,
  output     [11:0]   result_data_payload_cha_i,
  output     [11:0]   result_data_payload_cha_q,
  input      [5:0]    phase_corrector_shift,
  input               cfo_reset,
  input               pkg_detected,
  output              phase_corrected,
  input               clk,
  input               reset
);

  wire                coarse_cfo_inst_rotated_data_valid;
  wire       [11:0]   coarse_cfo_inst_rotated_data_payload_cha_i;
  wire       [11:0]   coarse_cfo_inst_rotated_data_payload_cha_q;
  wire                coarse_cfo_inst_phi_correct_valid;
  wire                cross_corr_core_corr_result_valid;
  wire       [35:0]   cross_corr_core_corr_result_payload_cha_i;
  wire       [35:0]   cross_corr_core_corr_result_payload_cha_q;
  reg                 cfo_corrected;
  reg                 cfo_enable;
  wire                header_corrected;
  wire                when_PhyRx_l66;
  reg                 pkg_detected_regNext;
  wire                when_PhyRx_l68;
  reg                 phase_corrected_1;
  reg        [35:0]   prod_max;
  reg        [5:0]    prod_cnt;
  wire                when_PhyRx_l91;
  wire                when_PhyRx_l94;
  wire                when_PhyRx_l90;

  CFOCorrector coarse_cfo_inst (
    .raw_data_valid                (raw_data_valid                                    ), //i
    .raw_data_payload_cha_i        (raw_data_payload_cha_i[11:0]                      ), //i
    .raw_data_payload_cha_q        (raw_data_payload_cha_q[11:0]                      ), //i
    .rotated_data_valid            (coarse_cfo_inst_rotated_data_valid                ), //o
    .rotated_data_payload_cha_i    (coarse_cfo_inst_rotated_data_payload_cha_i[11:0]  ), //o
    .rotated_data_payload_cha_q    (coarse_cfo_inst_rotated_data_payload_cha_q[11:0]  ), //o
    .enable                        (cfo_enable                                        ), //i
    .phi_correct_valid             (coarse_cfo_inst_phi_correct_valid                 ), //o
    .clk                           (clk                                               ), //i
    .reset                         (reset                                             )  //i
  );
  CrossCorrelator cross_corr_core (
    .raw_data_valid               (coarse_cfo_inst_rotated_data_valid                ), //i
    .raw_data_payload_cha_i       (coarse_cfo_inst_rotated_data_payload_cha_i[11:0]  ), //i
    .raw_data_payload_cha_q       (coarse_cfo_inst_rotated_data_payload_cha_q[11:0]  ), //i
    .corr_result_valid            (cross_corr_core_corr_result_valid                 ), //o
    .corr_result_payload_cha_i    (cross_corr_core_corr_result_payload_cha_i[35:0]   ), //o
    .corr_result_payload_cha_q    (cross_corr_core_corr_result_payload_cha_q[35:0]   ), //o
    .clk                          (clk                                               ), //i
    .reset                        (reset                                             )  //i
  );
  assign header_corrected = 1'b0;
  assign when_PhyRx_l66 = (cfo_reset || coarse_cfo_inst_phi_correct_valid);
  assign when_PhyRx_l68 = (pkg_detected && (! pkg_detected_regNext));
  assign when_PhyRx_l91 = (phase_corrector_shift <= prod_cnt);
  assign when_PhyRx_l94 = ($signed(prod_max) < $signed(cross_corr_core_corr_result_payload_cha_i));
  assign when_PhyRx_l90 = (cfo_corrected && (! phase_corrected_1));
  assign phase_corrected = phase_corrected_1;
  assign result_data_valid = coarse_cfo_inst_rotated_data_valid;
  assign result_data_payload_cha_i = coarse_cfo_inst_rotated_data_payload_cha_i;
  assign result_data_payload_cha_q = coarse_cfo_inst_rotated_data_payload_cha_q;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cfo_corrected <= 1'b0;
      cfo_enable <= 1'b0;
      phase_corrected_1 <= 1'b0;
      prod_max <= 36'h0;
      prod_cnt <= 6'h0;
    end else begin
      if(when_PhyRx_l66) begin
        cfo_enable <= 1'b0;
      end else begin
        if(when_PhyRx_l68) begin
          cfo_enable <= 1'b1;
        end
      end
      if(cfo_reset) begin
        cfo_corrected <= 1'b0;
      end else begin
        if(coarse_cfo_inst_phi_correct_valid) begin
          cfo_corrected <= 1'b1;
        end
      end
      if(cfo_reset) begin
        phase_corrected_1 <= 1'b0;
        prod_max <= 36'h0;
        prod_cnt <= 6'h0;
      end else begin
        if(when_PhyRx_l90) begin
          if(when_PhyRx_l91) begin
            phase_corrected_1 <= 1'b1;
          end else begin
            if(when_PhyRx_l94) begin
              prod_max <= cross_corr_core_corr_result_payload_cha_i;
              prod_cnt <= 6'h0;
            end else begin
              prod_cnt <= (prod_cnt + 6'h01);
            end
            phase_corrected_1 <= 1'b0;
          end
        end
      end
    end
  end

  always @(posedge clk) begin
    pkg_detected_regNext <= pkg_detected;
  end


endmodule

module PhyRxPreambleDetector (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              result_data_valid,
  output     [11:0]   result_data_payload_cha_i,
  output     [11:0]   result_data_payload_cha_q,
  input      [7:0]    min_plateau,
  input               detector_reset,
  output              pkg_handling,
  input               clk,
  input               reset
);

  wire                preamble_detector_pkg_detected;
  wire                preamble_detector_raw_data_out_valid;
  wire       [11:0]   preamble_detector_raw_data_out_payload_cha_i;
  wire       [11:0]   preamble_detector_raw_data_out_payload_cha_q;
  wire                preamble_detector_corr_result_valid;
  wire       [35:0]   preamble_detector_corr_result_payload_cha_i;
  wire       [35:0]   preamble_detector_corr_result_payload_cha_q;
  reg                 pkg_handling_1;

  PreambleDetector preamble_detector (
    .min_plateau                   (min_plateau[7:0]                                    ), //i
    .pkg_detected                  (preamble_detector_pkg_detected                      ), //o
    .raw_data_valid                (raw_data_valid                                      ), //i
    .raw_data_payload_cha_i        (raw_data_payload_cha_i[11:0]                        ), //i
    .raw_data_payload_cha_q        (raw_data_payload_cha_q[11:0]                        ), //i
    .raw_data_out_valid            (preamble_detector_raw_data_out_valid                ), //o
    .raw_data_out_payload_cha_i    (preamble_detector_raw_data_out_payload_cha_i[11:0]  ), //o
    .raw_data_out_payload_cha_q    (preamble_detector_raw_data_out_payload_cha_q[11:0]  ), //o
    .corr_result_valid             (preamble_detector_corr_result_valid                 ), //o
    .corr_result_payload_cha_i     (preamble_detector_corr_result_payload_cha_i[35:0]   ), //o
    .corr_result_payload_cha_q     (preamble_detector_corr_result_payload_cha_q[35:0]   ), //o
    .clk                           (clk                                                 ), //i
    .reset                         (reset                                               )  //i
  );
  assign pkg_handling = pkg_handling_1;
  assign result_data_valid = preamble_detector_raw_data_out_valid;
  assign result_data_payload_cha_i = preamble_detector_raw_data_out_payload_cha_i;
  assign result_data_payload_cha_q = preamble_detector_raw_data_out_payload_cha_q;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pkg_handling_1 <= 1'b0;
    end else begin
      if(detector_reset) begin
        pkg_handling_1 <= 1'b0;
      end else begin
        if(preamble_detector_pkg_detected) begin
          pkg_handling_1 <= 1'b1;
        end
      end
    end
  end


endmodule

module PowerAdjustor (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output reg          adjusted_data_valid,
  output     [11:0]   adjusted_data_payload_cha_i,
  output     [11:0]   adjusted_data_payload_cha_q,
  input      [1:0]    shift_bias,
  input               shift_dir,
  input               clk,
  input               reset
);

  reg        [11:0]   shifted_data_cha_i;
  reg        [11:0]   shifted_data_cha_q;

  always @(*) begin
    if(raw_data_valid) begin
      adjusted_data_valid = 1'b1;
    end else begin
      adjusted_data_valid = 1'b0;
    end
  end

  assign adjusted_data_payload_cha_i = shifted_data_cha_i;
  assign adjusted_data_payload_cha_q = shifted_data_cha_q;
  always @(posedge clk) begin
    if(raw_data_valid) begin
      if(shift_dir) begin
        shifted_data_cha_i <= ($signed(raw_data_payload_cha_i) >>> shift_bias);
        shifted_data_cha_q <= ($signed(raw_data_payload_cha_q) >>> shift_bias);
      end else begin
        shifted_data_cha_i <= ($signed(raw_data_payload_cha_i) <<< shift_bias);
        shifted_data_cha_q <= ($signed(raw_data_payload_cha_q) <<< shift_bias);
      end
    end
  end


endmodule

module PhyRxInterfaceIQ2modIQ (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              result_data_valid,
  output     [11:0]   result_data_payload_cha_i,
  output     [11:0]   result_data_payload_cha_q
);


  assign result_data_payload_cha_i = raw_data_payload_cha_i;
  assign result_data_payload_cha_q = raw_data_payload_cha_q;
  assign result_data_valid = raw_data_valid;

endmodule

module StreamFifo_12 (
  input               io_push_valid,
  output              io_push_ready,
  input      [11:0]   io_push_payload_cha_i,
  input      [11:0]   io_push_payload_cha_q,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [11:0]   io_pop_payload_cha_i,
  output     [11:0]   io_pop_payload_cha_q,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [23:0]   _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_cha_i;
  wire       [23:0]   _zz_logic_ram_port_1;
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
  wire       [23:0]   _zz_io_pop_payload_cha_i;
  wire                when_Stream_l954;
  wire       [4:0]    logic_ptrDif;
  reg [23:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_cha_i = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_cha_q,io_push_payload_cha_i};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_cha_i) begin
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
  assign _zz_io_pop_payload_cha_i = _zz_logic_ram_port0;
  assign io_pop_payload_cha_i = _zz_io_pop_payload_cha_i[11 : 0];
  assign io_pop_payload_cha_q = _zz_io_pop_payload_cha_i[23 : 12];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
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
  input               clk,
  input               reset
);
  localparam PreambleExtenderStates_IDLE = 2'd0;
  localparam PreambleExtenderStates_PREAMBLE = 2'd1;
  localparam PreambleExtenderStates_DATA = 2'd2;

  reg        [11:0]   _zz_I_mem_port0;
  reg        [11:0]   _zz_I_mem_port1;
  reg        [11:0]   _zz_Q_mem_port0;
  reg        [11:0]   _zz_Q_mem_port1;
  wire                _zz_I_mem_port;
  wire                _zz_Q_mem_port;
  wire                _zz_I_mem_port_1;
  wire                _zz_Q_mem_port_1;
  wire                _zz_preamble_data_i;
  wire                _zz_preamble_data_q;
  wire       [3:0]    _zz_cnt;
  wire                _zz_preamble_data_i_1;
  wire                _zz_preamble_data_q_1;
  reg        [3:0]    cnt;
  reg        [4:0]    repeatCnt;
  reg                 raw_ready;
  reg        [11:0]   preamble_data_i;
  reg        [11:0]   preamble_data_q;
  reg                 preamble_valid;
  reg                 preamble_last;
  reg        [1:0]    preamble_states;
  wire                when_PreambleExtender_l60;
  wire                when_PreambleExtender_l74;
  wire                when_PreambleExtender_l76;
  wire                raw_data_fire;
  wire                raw_data_fire_1;
  wire                when_PreambleExtender_l91;
  `ifndef SYNTHESIS
  reg [63:0] preamble_states_string;
  `endif

  (* rom_style = "block" *) reg [11:0] I_mem [0:15];
  (* rom_style = "block" *) reg [11:0] Q_mem [0:15];

  assign _zz_cnt = (cnt + 4'b0001);
  assign _zz_preamble_data_i = 1'b1;
  assign _zz_preamble_data_i_1 = 1'b1;
  assign _zz_preamble_data_q = 1'b1;
  assign _zz_preamble_data_q_1 = 1'b1;
  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/./simWorkspace/LoopBackTest/rtl/LoopBackTest.v_toplevel_transmitter_stf_preamble_adder_I_mem.bin",I_mem);
  end
  always @(posedge clk) begin
    if(_zz_preamble_data_i) begin
      _zz_I_mem_port0 <= I_mem[cnt];
    end
  end

  always @(posedge clk) begin
    if(_zz_preamble_data_i_1) begin
      _zz_I_mem_port1 <= I_mem[cnt];
    end
  end

  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/./simWorkspace/LoopBackTest/rtl/LoopBackTest.v_toplevel_transmitter_stf_preamble_adder_Q_mem.bin",Q_mem);
  end
  always @(posedge clk) begin
    if(_zz_preamble_data_q) begin
      _zz_Q_mem_port0 <= Q_mem[cnt];
    end
  end

  always @(posedge clk) begin
    if(_zz_preamble_data_q_1) begin
      _zz_Q_mem_port1 <= Q_mem[cnt];
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(preamble_states)
      PreambleExtenderStates_IDLE : preamble_states_string = "IDLE    ";
      PreambleExtenderStates_PREAMBLE : preamble_states_string = "PREAMBLE";
      PreambleExtenderStates_DATA : preamble_states_string = "DATA    ";
      default : preamble_states_string = "????????";
    endcase
  end
  `endif

  assign when_PreambleExtender_l60 = (raw_data_valid && preamble_data_ready);
  assign when_PreambleExtender_l74 = (cnt == 4'b1111);
  assign when_PreambleExtender_l76 = (repeatCnt == 5'h09);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign when_PreambleExtender_l91 = (raw_data_fire_1 && raw_data_payload_last);
  assign raw_data_ready = (raw_ready && preamble_data_ready);
  assign preamble_data_valid = preamble_valid;
  assign preamble_data_payload_fragment_cha_i = preamble_data_i;
  assign preamble_data_payload_fragment_cha_q = preamble_data_q;
  assign preamble_data_payload_last = preamble_last;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 4'b0000;
      repeatCnt <= 5'h0;
      raw_ready <= 1'b0;
      preamble_valid <= 1'b0;
      preamble_last <= 1'b0;
      preamble_states <= PreambleExtenderStates_IDLE;
    end else begin
      case(preamble_states)
        PreambleExtenderStates_IDLE : begin
          cnt <= 4'b0000;
          repeatCnt <= 5'h0;
          raw_ready <= 1'b0;
          preamble_valid <= 1'b0;
          preamble_last <= 1'b0;
          if(when_PreambleExtender_l60) begin
            cnt <= (cnt + 4'b0001);
            preamble_states <= PreambleExtenderStates_PREAMBLE;
          end
        end
        PreambleExtenderStates_PREAMBLE : begin
          if(preamble_data_ready) begin
            cnt <= ((cnt == 4'b1111) ? 4'b0000 : _zz_cnt);
          end
          preamble_valid <= 1'b1;
          if(when_PreambleExtender_l74) begin
            repeatCnt <= (repeatCnt + 5'h01);
            if(when_PreambleExtender_l76) begin
              raw_ready <= 1'b1;
              preamble_states <= PreambleExtenderStates_DATA;
            end
          end
        end
        default : begin
          if(raw_data_fire) begin
            preamble_valid <= 1'b1;
          end else begin
            preamble_valid <= 1'b0;
          end
          if(when_PreambleExtender_l91) begin
            preamble_states <= PreambleExtenderStates_IDLE;
            preamble_last <= 1'b1;
          end else begin
            preamble_last <= 1'b0;
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(preamble_states)
      PreambleExtenderStates_IDLE : begin
        preamble_data_i <= _zz_I_mem_port0;
        preamble_data_q <= _zz_Q_mem_port0;
      end
      PreambleExtenderStates_PREAMBLE : begin
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

//StreamFifo_9 replaced by StreamFifo_9

module PhyTxFilter (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [11:0]   raw_data_payload_fragment_cha_i,
  input      [11:0]   raw_data_payload_fragment_cha_q,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [11:0]   result_data_payload_fragment_cha_i,
  output     [11:0]   result_data_payload_fragment_cha_q,
  input               clk,
  input               reset
);

  wire                fir_filter_iq_raw_data_valid;
  wire       [11:0]   fir_filter_iq_raw_data_payload_0;
  wire       [11:0]   fir_filter_iq_raw_data_payload_1;
  wire                fir_filter_iq_filtered_data_valid;
  wire       [18:0]   fir_filter_iq_filtered_data_payload_0;
  wire       [18:0]   fir_filter_iq_filtered_data_payload_1;
  wire       [11:0]   _zz_raw_data_payload_0;
  wire       [11:0]   _zz_raw_data_payload_1;
  reg                 last_padding;
  wire                raw_data_fire;
  wire                when_PhyTx_l196;
  wire                result_data_fire;
  wire                when_PhyTx_l198;
  reg                 raw_data_payload_last_delay_1;
  reg                 raw_data_payload_last_delay_2;
  reg                 raw_data_payload_last_delay_3;
  reg                 raw_data_payload_last_delay_4;
  reg                 raw_data_payload_last_delay_5;
  reg                 raw_data_payload_last_delay_6;
  reg                 raw_data_payload_last_delay_7;
  reg                 raw_data_payload_last_delay_8;
  reg                 raw_data_payload_last_delay_9;
  reg                 raw_data_payload_last_delay_10;
  reg                 raw_data_payload_last_delay_11;
  reg                 raw_data_payload_last_delay_12;
  reg                 raw_data_payload_last_delay_13;
  reg                 raw_data_payload_last_delay_14;
  reg                 raw_data_payload_last_delay_15;
  reg                 raw_data_payload_last_delay_16;
  reg                 raw_data_payload_last_delay_17;
  reg                 raw_data_payload_last_delay_18;
  reg                 raw_data_payload_last_delay_19;
  reg                 raw_data_payload_last_delay_20;
  reg                 raw_data_payload_last_delay_21;
  reg                 raw_data_payload_last_delay_22;
  reg                 raw_data_payload_last_delay_23;
  reg                 raw_data_payload_last_delay_24;
  reg                 raw_data_payload_last_delay_25;

  assign _zz_raw_data_payload_0 = 12'h0;
  assign _zz_raw_data_payload_1 = 12'h0;
  TransposeFIR fir_filter_iq (
    .raw_data_valid             (fir_filter_iq_raw_data_valid                 ), //i
    .raw_data_payload_0         (fir_filter_iq_raw_data_payload_0[11:0]       ), //i
    .raw_data_payload_1         (fir_filter_iq_raw_data_payload_1[11:0]       ), //i
    .filtered_data_valid        (fir_filter_iq_filtered_data_valid            ), //o
    .filtered_data_payload_0    (fir_filter_iq_filtered_data_payload_0[18:0]  ), //o
    .filtered_data_payload_1    (fir_filter_iq_filtered_data_payload_1[18:0]  ), //o
    .clk                        (clk                                          ), //i
    .reset                      (reset                                        )  //i
  );
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l196 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l198 = (result_data_fire && result_data_payload_last);
  assign raw_data_ready = ((! last_padding) && result_data_ready);
  assign fir_filter_iq_raw_data_valid = (raw_data_valid || last_padding);
  assign fir_filter_iq_raw_data_payload_0 = (last_padding ? _zz_raw_data_payload_0 : raw_data_payload_fragment_cha_i);
  assign fir_filter_iq_raw_data_payload_1 = (last_padding ? _zz_raw_data_payload_1 : raw_data_payload_fragment_cha_q);
  assign result_data_valid = fir_filter_iq_filtered_data_valid;
  assign result_data_payload_fragment_cha_i = (fir_filter_iq_filtered_data_payload_0 >>> 7);
  assign result_data_payload_fragment_cha_q = (fir_filter_iq_filtered_data_payload_1 >>> 7);
  assign result_data_payload_last = raw_data_payload_last_delay_25;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      last_padding <= 1'b0;
      raw_data_payload_last_delay_1 <= 1'b0;
      raw_data_payload_last_delay_2 <= 1'b0;
      raw_data_payload_last_delay_3 <= 1'b0;
      raw_data_payload_last_delay_4 <= 1'b0;
      raw_data_payload_last_delay_5 <= 1'b0;
      raw_data_payload_last_delay_6 <= 1'b0;
      raw_data_payload_last_delay_7 <= 1'b0;
      raw_data_payload_last_delay_8 <= 1'b0;
      raw_data_payload_last_delay_9 <= 1'b0;
      raw_data_payload_last_delay_10 <= 1'b0;
      raw_data_payload_last_delay_11 <= 1'b0;
      raw_data_payload_last_delay_12 <= 1'b0;
      raw_data_payload_last_delay_13 <= 1'b0;
      raw_data_payload_last_delay_14 <= 1'b0;
      raw_data_payload_last_delay_15 <= 1'b0;
      raw_data_payload_last_delay_16 <= 1'b0;
      raw_data_payload_last_delay_17 <= 1'b0;
      raw_data_payload_last_delay_18 <= 1'b0;
      raw_data_payload_last_delay_19 <= 1'b0;
      raw_data_payload_last_delay_20 <= 1'b0;
      raw_data_payload_last_delay_21 <= 1'b0;
      raw_data_payload_last_delay_22 <= 1'b0;
      raw_data_payload_last_delay_23 <= 1'b0;
      raw_data_payload_last_delay_24 <= 1'b0;
      raw_data_payload_last_delay_25 <= 1'b0;
    end else begin
      if(when_PhyTx_l196) begin
        last_padding <= 1'b1;
      end else begin
        if(when_PhyTx_l198) begin
          last_padding <= 1'b0;
        end
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_1 <= raw_data_payload_last;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_2 <= raw_data_payload_last_delay_1;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_3 <= raw_data_payload_last_delay_2;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_4 <= raw_data_payload_last_delay_3;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_5 <= raw_data_payload_last_delay_4;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_6 <= raw_data_payload_last_delay_5;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_7 <= raw_data_payload_last_delay_6;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_8 <= raw_data_payload_last_delay_7;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_9 <= raw_data_payload_last_delay_8;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_10 <= raw_data_payload_last_delay_9;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_11 <= raw_data_payload_last_delay_10;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_12 <= raw_data_payload_last_delay_11;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_13 <= raw_data_payload_last_delay_12;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_14 <= raw_data_payload_last_delay_13;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_15 <= raw_data_payload_last_delay_14;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_16 <= raw_data_payload_last_delay_15;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_17 <= raw_data_payload_last_delay_16;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_18 <= raw_data_payload_last_delay_17;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_19 <= raw_data_payload_last_delay_18;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_20 <= raw_data_payload_last_delay_19;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_21 <= raw_data_payload_last_delay_20;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_22 <= raw_data_payload_last_delay_21;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_23 <= raw_data_payload_last_delay_22;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_24 <= raw_data_payload_last_delay_23;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_25 <= raw_data_payload_last_delay_24;
      end
    end
  end


endmodule

module PhyTxOverSampling (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [11:0]   raw_data_payload_fragment_cha_i,
  input      [11:0]   raw_data_payload_fragment_cha_q,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [11:0]   result_data_payload_fragment_cha_i,
  output     [11:0]   result_data_payload_fragment_cha_q,
  input               clk,
  input               reset
);

  wire       [2:0]    _zz_cnt;
  wire       [11:0]   _zz_result_data_payload_fragment_cha_i;
  wire       [11:0]   _zz_result_data_payload_fragment_cha_q;
  reg        [2:0]    cnt;
  reg                 raw_last;
  wire                raw_data_fire;
  wire                result_data_fire;

  assign _zz_cnt = (cnt + 3'b001);
  assign _zz_result_data_payload_fragment_cha_i = 12'h0;
  assign _zz_result_data_payload_fragment_cha_q = 12'h0;
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign raw_data_ready = (result_data_ready && (cnt == 3'b000));
  assign result_data_valid = (raw_data_valid || (cnt != 3'b000));
  assign result_data_payload_last = (raw_last && (cnt == 3'b111));
  assign result_data_payload_fragment_cha_i = ((cnt == 3'b000) ? raw_data_payload_fragment_cha_i : _zz_result_data_payload_fragment_cha_i);
  assign result_data_payload_fragment_cha_q = ((cnt == 3'b000) ? raw_data_payload_fragment_cha_q : _zz_result_data_payload_fragment_cha_q);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 3'b000;
      raw_last <= 1'b0;
    end else begin
      if(raw_data_fire) begin
        raw_last <= raw_data_payload_last;
      end
      if(result_data_fire) begin
        cnt <= ((cnt == 3'b111) ? 3'b000 : _zz_cnt);
      end
    end
  end


endmodule

//StreamFifo_9 replaced by StreamFifo_9

module PhyHeaderExtender (
  input      [1:0]    mod_method,
  input               pkg_size_valid,
  output              pkg_size_ready,
  input      [7:0]    pkg_size_payload,
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [11:0]   raw_data_payload_fragment_cha_i,
  input      [11:0]   raw_data_payload_fragment_cha_q,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [11:0]   result_data_payload_fragment_cha_i,
  output reg [11:0]   result_data_payload_fragment_cha_q,
  input               clk,
  input               reset
);
  localparam PhyTxHeaderStatus_IDLE = 2'd0;
  localparam PhyTxHeaderStatus_SDF = 2'd1;
  localparam PhyTxHeaderStatus_HEADER = 2'd2;
  localparam PhyTxHeaderStatus_DATA = 2'd3;

  reg        [11:0]   _zz_result_data_payload_fragment_cha_i;
  wire       [2:0]    _zz_result_data_payload_fragment_cha_i_1;
  reg        [11:0]   _zz_result_data_payload_fragment_cha_i_2;
  wire       [0:0]    _zz_result_data_payload_fragment_cha_i_3;
  wire       [3:0]    _zz_result_data_payload_fragment_cha_i_4;
  reg        [1:0]    header_status;
  wire       [11:0]   header_mod_array_0;
  wire       [11:0]   header_mod_array_1;
  wire       [11:0]   sdf_i_vec_0;
  wire       [11:0]   sdf_i_vec_1;
  wire       [11:0]   sdf_i_vec_2;
  wire       [11:0]   sdf_i_vec_3;
  wire       [11:0]   sdf_i_vec_4;
  wire       [11:0]   sdf_i_vec_5;
  wire       [11:0]   sdf_i_vec_6;
  wire       [11:0]   sdf_i_vec_7;
  reg        [4:0]    counter;
  reg                 pkg_size_ready_1;
  reg        [7:0]    pkg_size_payload_1;
  wire       [9:0]    method_size;
  wire                when_PhyTx_l304;
  wire                pkg_size_fire;
  wire                result_data_fire;
  wire                when_PhyTx_l315;
  wire                result_data_fire_1;
  wire                when_PhyTx_l327;
  wire                result_data_fire_2;
  wire                when_PhyTx_l338;
  `ifndef SYNTHESIS
  reg [47:0] header_status_string;
  `endif


  assign _zz_result_data_payload_fragment_cha_i_1 = counter[2:0];
  assign _zz_result_data_payload_fragment_cha_i_4 = counter[3:0];
  assign _zz_result_data_payload_fragment_cha_i_3 = method_size[_zz_result_data_payload_fragment_cha_i_4];
  always @(*) begin
    case(_zz_result_data_payload_fragment_cha_i_1)
      3'b000 : _zz_result_data_payload_fragment_cha_i = sdf_i_vec_0;
      3'b001 : _zz_result_data_payload_fragment_cha_i = sdf_i_vec_1;
      3'b010 : _zz_result_data_payload_fragment_cha_i = sdf_i_vec_2;
      3'b011 : _zz_result_data_payload_fragment_cha_i = sdf_i_vec_3;
      3'b100 : _zz_result_data_payload_fragment_cha_i = sdf_i_vec_4;
      3'b101 : _zz_result_data_payload_fragment_cha_i = sdf_i_vec_5;
      3'b110 : _zz_result_data_payload_fragment_cha_i = sdf_i_vec_6;
      default : _zz_result_data_payload_fragment_cha_i = sdf_i_vec_7;
    endcase
  end

  always @(*) begin
    case(_zz_result_data_payload_fragment_cha_i_3)
      1'b0 : _zz_result_data_payload_fragment_cha_i_2 = header_mod_array_0;
      default : _zz_result_data_payload_fragment_cha_i_2 = header_mod_array_1;
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(header_status)
      PhyTxHeaderStatus_IDLE : header_status_string = "IDLE  ";
      PhyTxHeaderStatus_SDF : header_status_string = "SDF   ";
      PhyTxHeaderStatus_HEADER : header_status_string = "HEADER";
      PhyTxHeaderStatus_DATA : header_status_string = "DATA  ";
      default : header_status_string = "??????";
    endcase
  end
  `endif

  assign header_mod_array_0 = 12'hc01;
  assign header_mod_array_1 = 12'h3ff;
  assign sdf_i_vec_0 = 12'hc01;
  assign sdf_i_vec_1 = 12'hc01;
  assign sdf_i_vec_2 = 12'h3ff;
  assign sdf_i_vec_3 = 12'h3ff;
  assign sdf_i_vec_4 = 12'hc01;
  assign sdf_i_vec_5 = 12'hc01;
  assign sdf_i_vec_6 = 12'h3ff;
  assign sdf_i_vec_7 = 12'hc01;
  always @(*) begin
    raw_data_ready = 1'b0;
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_SDF : begin
      end
      PhyTxHeaderStatus_HEADER : begin
      end
      default : begin
        raw_data_ready = result_data_ready;
      end
    endcase
  end

  always @(*) begin
    result_data_valid = 1'b0;
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_SDF : begin
        result_data_valid = 1'b1;
      end
      PhyTxHeaderStatus_HEADER : begin
        result_data_valid = 1'b1;
      end
      default : begin
        result_data_valid = raw_data_valid;
      end
    endcase
  end

  always @(*) begin
    result_data_payload_last = 1'b0;
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_SDF : begin
      end
      PhyTxHeaderStatus_HEADER : begin
      end
      default : begin
        result_data_payload_last = raw_data_payload_last;
      end
    endcase
  end

  always @(*) begin
    result_data_payload_fragment_cha_i = 12'h0;
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_SDF : begin
        result_data_payload_fragment_cha_i = _zz_result_data_payload_fragment_cha_i;
      end
      PhyTxHeaderStatus_HEADER : begin
        result_data_payload_fragment_cha_i = _zz_result_data_payload_fragment_cha_i_2;
      end
      default : begin
        result_data_payload_fragment_cha_i = raw_data_payload_fragment_cha_i;
      end
    endcase
  end

  always @(*) begin
    result_data_payload_fragment_cha_q = 12'h0;
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_SDF : begin
      end
      PhyTxHeaderStatus_HEADER : begin
      end
      default : begin
        result_data_payload_fragment_cha_q = raw_data_payload_fragment_cha_q;
      end
    endcase
  end

  assign method_size = {mod_method,pkg_size_payload_1};
  assign when_PhyTx_l304 = (raw_data_valid && pkg_size_valid);
  assign pkg_size_fire = (pkg_size_valid && pkg_size_ready);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l315 = (counter == 5'h07);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l327 = (counter == 5'h0);
  assign result_data_fire_2 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l338 = (result_data_fire_2 && result_data_payload_last);
  assign pkg_size_ready = pkg_size_ready_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      header_status <= PhyTxHeaderStatus_IDLE;
      counter <= 5'h0;
      pkg_size_ready_1 <= 1'b0;
    end else begin
      case(header_status)
        PhyTxHeaderStatus_IDLE : begin
          if(when_PhyTx_l304) begin
            header_status <= PhyTxHeaderStatus_SDF;
            pkg_size_ready_1 <= 1'b1;
          end
        end
        PhyTxHeaderStatus_SDF : begin
          if(pkg_size_fire) begin
            pkg_size_ready_1 <= 1'b0;
          end
          if(result_data_fire) begin
            if(when_PhyTx_l315) begin
              header_status <= PhyTxHeaderStatus_HEADER;
              counter <= 5'h09;
            end else begin
              counter <= (counter + 5'h01);
            end
          end
        end
        PhyTxHeaderStatus_HEADER : begin
          if(result_data_fire_1) begin
            if(when_PhyTx_l327) begin
              header_status <= PhyTxHeaderStatus_DATA;
              counter <= 5'h0;
            end else begin
              counter <= (counter - 5'h01);
            end
          end
        end
        default : begin
          if(when_PhyTx_l338) begin
            header_status <= PhyTxHeaderStatus_IDLE;
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_SDF : begin
        if(pkg_size_fire) begin
          pkg_size_payload_1 <= pkg_size_payload;
        end
      end
      PhyTxHeaderStatus_HEADER : begin
      end
      default : begin
      end
    endcase
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
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [24:0]   _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [24:0]   _zz_logic_ram_port_1;
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
  wire       [24:0]   _zz_io_pop_payload_last;
  wire       [23:0]   _zz_io_pop_payload_fragment_cha_i;
  wire                when_Stream_l954;
  wire       [4:0]    logic_ptrDif;
  reg [24:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {{io_push_payload_fragment_cha_q,io_push_payload_fragment_cha_i},io_push_payload_last};
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
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign _zz_io_pop_payload_fragment_cha_i = _zz_io_pop_payload_last[24 : 1];
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment_cha_i = _zz_io_pop_payload_fragment_cha_i[11 : 0];
  assign io_pop_payload_fragment_cha_q = _zz_io_pop_payload_fragment_cha_i[23 : 12];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
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
  input               clk,
  input               reset
);

  wire       [0:0]    mPSK_Modulator_Extension_mod_unit_data_payload_fragment;
  wire       [1:0]    mPSK_Modulator_Extension_mod_1_unit_data_payload_fragment;
  wire       [3:0]    mQAM_Modulator_Extension_mod_unit_data_payload_fragment;
  wire                flowDeMux_2_outputs_0_valid;
  wire                flowDeMux_2_outputs_0_payload_last;
  wire       [7:0]    flowDeMux_2_outputs_0_payload_fragment;
  wire                flowDeMux_2_outputs_1_valid;
  wire                flowDeMux_2_outputs_1_payload_last;
  wire       [7:0]    flowDeMux_2_outputs_1_payload_fragment;
  wire                flowDeMux_2_outputs_2_valid;
  wire                flowDeMux_2_outputs_2_payload_last;
  wire       [7:0]    flowDeMux_2_outputs_2_payload_fragment;
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
  wire                flowMux_2_output_valid;
  wire                flowMux_2_output_payload_last;
  wire       [11:0]   flowMux_2_output_payload_fragment_cha_i;
  wire       [11:0]   flowMux_2_output_payload_fragment_cha_q;
  wire                _zz_unit_data_valid;
  wire                _zz_unit_data_payload_last;
  wire                _zz_unit_data_valid_1;
  wire                _zz_unit_data_payload_last_1;
  wire                _zz_unit_data_valid_2;
  wire                _zz_unit_data_payload_last_2;

  FlowDeMux_1 flowDeMux_2 (
    .input_valid                   (data_flow_unit_data_valid                    ), //i
    .input_payload_last            (data_flow_unit_data_payload_last             ), //i
    .input_payload_fragment        (data_flow_unit_data_payload_fragment[7:0]    ), //i
    .select_1                      (select_1[1:0]                                ), //i
    .outputs_0_valid               (flowDeMux_2_outputs_0_valid                  ), //o
    .outputs_0_payload_last        (flowDeMux_2_outputs_0_payload_last           ), //o
    .outputs_0_payload_fragment    (flowDeMux_2_outputs_0_payload_fragment[7:0]  ), //o
    .outputs_1_valid               (flowDeMux_2_outputs_1_valid                  ), //o
    .outputs_1_payload_last        (flowDeMux_2_outputs_1_payload_last           ), //o
    .outputs_1_payload_fragment    (flowDeMux_2_outputs_1_payload_fragment[7:0]  ), //o
    .outputs_2_valid               (flowDeMux_2_outputs_2_valid                  ), //o
    .outputs_2_payload_last        (flowDeMux_2_outputs_2_payload_last           ), //o
    .outputs_2_payload_fragment    (flowDeMux_2_outputs_2_payload_fragment[7:0]  )  //o
  );
  mPSKMod mPSK_Modulator_Extension_mod (
    .unit_data_valid                  (_zz_unit_data_valid                                               ), //i
    .unit_data_payload_last           (_zz_unit_data_payload_last                                        ), //i
    .unit_data_payload_fragment       (mPSK_Modulator_Extension_mod_unit_data_payload_fragment           ), //i
    .mod_iq_valid                     (mPSK_Modulator_Extension_mod_mod_iq_valid                         ), //o
    .mod_iq_payload_last              (mPSK_Modulator_Extension_mod_mod_iq_payload_last                  ), //o
    .mod_iq_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i[11:0]  ), //o
    .mod_iq_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q[11:0]  ), //o
    .clk                              (clk                                                               ), //i
    .reset                            (reset                                                             )  //i
  );
  mPSKMod_1 mPSK_Modulator_Extension_mod_1 (
    .unit_data_valid                  (_zz_unit_data_valid_1                                               ), //i
    .unit_data_payload_last           (_zz_unit_data_payload_last_1                                        ), //i
    .unit_data_payload_fragment       (mPSK_Modulator_Extension_mod_1_unit_data_payload_fragment[1:0]      ), //i
    .mod_iq_valid                     (mPSK_Modulator_Extension_mod_1_mod_iq_valid                         ), //o
    .mod_iq_payload_last              (mPSK_Modulator_Extension_mod_1_mod_iq_payload_last                  ), //o
    .mod_iq_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_i[11:0]  ), //o
    .mod_iq_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_q[11:0]  ), //o
    .clk                              (clk                                                                 ), //i
    .reset                            (reset                                                               )  //i
  );
  mQAMMod mQAM_Modulator_Extension_mod (
    .unit_data_valid                  (_zz_unit_data_valid_2                                             ), //i
    .unit_data_payload_last           (_zz_unit_data_payload_last_2                                      ), //i
    .unit_data_payload_fragment       (mQAM_Modulator_Extension_mod_unit_data_payload_fragment[3:0]      ), //i
    .mod_iq_valid                     (mQAM_Modulator_Extension_mod_mod_iq_valid                         ), //o
    .mod_iq_payload_last              (mQAM_Modulator_Extension_mod_mod_iq_payload_last                  ), //o
    .mod_iq_payload_fragment_cha_i    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i[11:0]  ), //o
    .mod_iq_payload_fragment_cha_q    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q[11:0]  ), //o
    .clk                              (clk                                                               ), //i
    .reset                            (reset                                                             )  //i
  );
  FlowMux_1 flowMux_2 (
    .inputs_0_valid                     (mPSK_Modulator_Extension_mod_mod_iq_valid                           ), //i
    .inputs_0_payload_last              (mPSK_Modulator_Extension_mod_mod_iq_payload_last                    ), //i
    .inputs_0_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i[11:0]    ), //i
    .inputs_0_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q[11:0]    ), //i
    .inputs_1_valid                     (mPSK_Modulator_Extension_mod_1_mod_iq_valid                         ), //i
    .inputs_1_payload_last              (mPSK_Modulator_Extension_mod_1_mod_iq_payload_last                  ), //i
    .inputs_1_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_i[11:0]  ), //i
    .inputs_1_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_q[11:0]  ), //i
    .inputs_2_valid                     (mQAM_Modulator_Extension_mod_mod_iq_valid                           ), //i
    .inputs_2_payload_last              (mQAM_Modulator_Extension_mod_mod_iq_payload_last                    ), //i
    .inputs_2_payload_fragment_cha_i    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i[11:0]    ), //i
    .inputs_2_payload_fragment_cha_q    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q[11:0]    ), //i
    .select_1                           (select_1[1:0]                                                       ), //i
    .output_valid                       (flowMux_2_output_valid                                              ), //o
    .output_payload_last                (flowMux_2_output_payload_last                                       ), //o
    .output_payload_fragment_cha_i      (flowMux_2_output_payload_fragment_cha_i[11:0]                       ), //o
    .output_payload_fragment_cha_q      (flowMux_2_output_payload_fragment_cha_q[11:0]                       )  //o
  );
  assign _zz_unit_data_valid = flowDeMux_2_outputs_0_valid;
  assign _zz_unit_data_payload_last = flowDeMux_2_outputs_0_payload_last;
  assign mPSK_Modulator_Extension_mod_unit_data_payload_fragment = flowDeMux_2_outputs_0_payload_fragment[0:0];
  assign _zz_unit_data_valid_1 = flowDeMux_2_outputs_1_valid;
  assign _zz_unit_data_payload_last_1 = flowDeMux_2_outputs_1_payload_last;
  assign mPSK_Modulator_Extension_mod_1_unit_data_payload_fragment = flowDeMux_2_outputs_1_payload_fragment[1:0];
  assign _zz_unit_data_valid_2 = flowDeMux_2_outputs_2_valid;
  assign _zz_unit_data_payload_last_2 = flowDeMux_2_outputs_2_payload_last;
  assign mQAM_Modulator_Extension_mod_unit_data_payload_fragment = flowDeMux_2_outputs_2_payload_fragment[3:0];
  assign data_flow_mod_iq_valid = flowMux_2_output_valid;
  assign data_flow_mod_iq_payload_last = flowMux_2_output_payload_last;
  assign data_flow_mod_iq_payload_fragment_cha_i = flowMux_2_output_payload_fragment_cha_i;
  assign data_flow_mod_iq_payload_fragment_cha_q = flowMux_2_output_payload_fragment_cha_q;

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
  input               clk,
  input               reset
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
  always @(posedge clk or posedge reset) begin
    if(reset) begin
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

//StreamFifo_7 replaced by StreamFifo_7

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
  localparam PhyTxScramblerStatus_IDLE = 2'd0;
  localparam PhyTxScramblerStatus_SCRAMBLING = 2'd1;
  localparam PhyTxScramblerStatus_FINAL_1 = 2'd2;

  reg                 scrambler_2_init_state_valid;
  reg                 scrambler_2_scram_data_ready;
  wire                scrambler_2_scram_data_valid;
  wire       [15:0]   scrambler_2_scram_data_payload;
  reg        [1:0]    scrambler_status;
  wire                raw_data_fire;
  wire                when_PhyTx_l148;
  wire                raw_data_fire_1;
  `ifndef SYNTHESIS
  reg [79:0] scrambler_status_string;
  `endif


  Scrambler scrambler_2 (
    .init_state_valid      (scrambler_2_init_state_valid          ), //i
    .init_state_payload    (7'h7f                                 ), //i
    .scram_data_valid      (scrambler_2_scram_data_valid          ), //o
    .scram_data_ready      (scrambler_2_scram_data_ready          ), //i
    .scram_data_payload    (scrambler_2_scram_data_payload[15:0]  ), //o
    .clk                   (clk                                   ), //i
    .reset                 (reset                                 )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(scrambler_status)
      PhyTxScramblerStatus_IDLE : scrambler_status_string = "IDLE      ";
      PhyTxScramblerStatus_SCRAMBLING : scrambler_status_string = "SCRAMBLING";
      PhyTxScramblerStatus_FINAL_1 : scrambler_status_string = "FINAL_1   ";
      default : scrambler_status_string = "??????????";
    endcase
  end
  `endif

  always @(*) begin
    result_data_valid = 1'b0;
    case(scrambler_status)
      PhyTxScramblerStatus_IDLE : begin
      end
      PhyTxScramblerStatus_SCRAMBLING : begin
        result_data_valid = (scrambler_2_scram_data_valid && raw_data_valid);
      end
      default : begin
      end
    endcase
  end

  assign result_data_payload_fragment = (scrambler_2_scram_data_payload ^ raw_data_payload_fragment);
  assign result_data_payload_last = raw_data_payload_last;
  always @(*) begin
    raw_data_ready = 1'b0;
    case(scrambler_status)
      PhyTxScramblerStatus_IDLE : begin
      end
      PhyTxScramblerStatus_SCRAMBLING : begin
        raw_data_ready = result_data_ready;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    case(scrambler_status)
      PhyTxScramblerStatus_IDLE : begin
        if(raw_data_valid) begin
          scrambler_2_init_state_valid = 1'b0;
        end else begin
          scrambler_2_init_state_valid = 1'b1;
        end
      end
      PhyTxScramblerStatus_SCRAMBLING : begin
        scrambler_2_init_state_valid = 1'b0;
      end
      default : begin
        scrambler_2_init_state_valid = 1'b1;
      end
    endcase
  end

  always @(*) begin
    case(scrambler_status)
      PhyTxScramblerStatus_IDLE : begin
        if(raw_data_valid) begin
          scrambler_2_scram_data_ready = 1'b1;
        end else begin
          scrambler_2_scram_data_ready = 1'b0;
        end
      end
      PhyTxScramblerStatus_SCRAMBLING : begin
        scrambler_2_scram_data_ready = raw_data_fire_1;
      end
      default : begin
        scrambler_2_scram_data_ready = 1'b0;
      end
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l148 = (raw_data_fire && raw_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      scrambler_status <= PhyTxScramblerStatus_IDLE;
    end else begin
      case(scrambler_status)
        PhyTxScramblerStatus_IDLE : begin
          if(raw_data_valid) begin
            scrambler_status <= PhyTxScramblerStatus_SCRAMBLING;
          end
        end
        PhyTxScramblerStatus_SCRAMBLING : begin
          if(when_PhyTx_l148) begin
            scrambler_status <= PhyTxScramblerStatus_FINAL_1;
          end
        end
        default : begin
          scrambler_status <= PhyTxScramblerStatus_IDLE;
        end
      endcase
    end
  end


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
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [16:0]   _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [16:0]   _zz_logic_ram_port_1;
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
  wire       [16:0]   _zz_io_pop_payload_last;
  wire                when_Stream_l954;
  wire       [4:0]    logic_ptrDif;
  reg [16:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
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
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[16 : 1];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
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
  reg                 isEncoding;
  wire                raw_data_fire;
  wire                when_PhyTx_l97;
  wire                phy_tx_encoder_coded_data_toStream_valid;
  wire                phy_tx_encoder_coded_data_toStream_ready;
  wire                phy_tx_encoder_coded_data_toStream_payload_last;
  wire       [15:0]   phy_tx_encoder_coded_data_toStream_payload_fragment;

  ConvEncoder phy_tx_encoder (
    .tail_bits_valid                (1'b0                                              ), //i
    .tail_bits_payload              (7'h0                                              ), //i
    .raw_data_valid                 (phy_tx_encoder_raw_data_valid                     ), //i
    .raw_data_ready                 (phy_tx_encoder_raw_data_ready                     ), //o
    .raw_data_payload_last          (phy_tx_encoder_raw_data_payload_last              ), //i
    .raw_data_payload_fragment      (phy_tx_encoder_raw_data_payload_fragment[7:0]     ), //i
    .coded_data_valid               (phy_tx_encoder_coded_data_valid                   ), //o
    .coded_data_payload_last        (phy_tx_encoder_coded_data_payload_last            ), //o
    .coded_data_payload_fragment    (phy_tx_encoder_coded_data_payload_fragment[15:0]  ), //o
    .clk                            (clk                                               ), //i
    .reset                          (reset                                             )  //i
  );
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l97 = (raw_data_fire && raw_data_payload_last);
  always @(*) begin
    if(isEncoding) begin
      raw_data_ready = phy_tx_encoder_raw_data_ready;
    end else begin
      raw_data_ready = 1'b0;
    end
  end

  always @(*) begin
    if(isEncoding) begin
      phy_tx_encoder_raw_data_valid = raw_data_valid;
    end else begin
      phy_tx_encoder_raw_data_valid = 1'b0;
    end
  end

  always @(*) begin
    if(isEncoding) begin
      phy_tx_encoder_raw_data_payload_fragment = raw_data_payload_fragment;
    end else begin
      phy_tx_encoder_raw_data_payload_fragment = 8'h0;
    end
  end

  always @(*) begin
    if(isEncoding) begin
      phy_tx_encoder_raw_data_payload_last = raw_data_payload_last;
    end else begin
      phy_tx_encoder_raw_data_payload_last = 1'b0;
    end
  end

  assign phy_tx_encoder_coded_data_toStream_valid = phy_tx_encoder_coded_data_valid;
  assign phy_tx_encoder_coded_data_toStream_payload_last = phy_tx_encoder_coded_data_payload_last;
  assign phy_tx_encoder_coded_data_toStream_payload_fragment = phy_tx_encoder_coded_data_payload_fragment;
  assign result_data_valid = phy_tx_encoder_coded_data_toStream_valid;
  assign phy_tx_encoder_coded_data_toStream_ready = result_data_ready;
  assign result_data_payload_last = phy_tx_encoder_coded_data_toStream_payload_last;
  assign result_data_payload_fragment = phy_tx_encoder_coded_data_toStream_payload_fragment;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      isEncoding <= 1'b0;
    end else begin
      if(when_PhyTx_l97) begin
        isEncoding <= 1'b0;
      end else begin
        if(raw_data_valid) begin
          isEncoding <= 1'b1;
        end
      end
    end
  end


endmodule

//StreamFifo_4 replaced by StreamFifo_4

module PhyTxPadder (
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

  reg                 data_last;
  wire                result_data_fire;
  wire                when_PhyTx_l70;
  wire                raw_data_fire;
  wire                when_PhyTx_l78;

  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l70 = (result_data_fire && result_data_payload_last);
  always @(*) begin
    if(data_last) begin
      result_data_valid = 1'b1;
    end else begin
      result_data_valid = raw_data_valid;
    end
  end

  always @(*) begin
    if(data_last) begin
      result_data_payload_fragment = 8'h0;
    end else begin
      result_data_payload_fragment = raw_data_payload_fragment;
    end
  end

  always @(*) begin
    if(data_last) begin
      raw_data_ready = 1'b0;
    end else begin
      raw_data_ready = result_data_ready;
    end
  end

  always @(*) begin
    if(data_last) begin
      result_data_payload_last = 1'b1;
    end else begin
      result_data_payload_last = 1'b0;
    end
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l78 = (raw_data_fire && raw_data_payload_last);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      data_last <= 1'b0;
    end else begin
      if(data_last) begin
        if(when_PhyTx_l70) begin
          data_last <= 1'b0;
        end
      end else begin
        if(when_PhyTx_l78) begin
          data_last <= 1'b1;
        end
      end
    end
  end


endmodule

//StreamFifo_4 replaced by StreamFifo_4

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

  wire                crc_2_flush;
  wire       [31:0]   crc_2_result;
  wire       [31:0]   crc_2_resultNext;
  reg        [7:0]    _zz_result_data_payload_fragment;
  reg                 emitCrc;
  wire                raw_data_fire;
  wire                when_PhyTx_l33;
  wire                result_data_fire;
  wire                when_PhyTx_l33_1;
  reg        [1:0]    counter;
  wire                raw_data_fire_1;
  wire                result_data_fire_1;
  wire                when_PhyTx_l40;
  wire                when_PhyTx_l48;

  Crc crc_2 (
    .flush            (crc_2_flush                     ), //i
    .input_valid      (raw_data_fire_1                 ), //i
    .input_payload    (raw_data_payload_fragment[7:0]  ), //i
    .result           (crc_2_result[31:0]              ), //o
    .resultNext       (crc_2_resultNext[31:0]          ), //o
    .clk              (clk                             ), //i
    .reset            (reset                           )  //i
  );
  always @(*) begin
    case(counter)
      2'b00 : _zz_result_data_payload_fragment = crc_2_result[7 : 0];
      2'b01 : _zz_result_data_payload_fragment = crc_2_result[15 : 8];
      2'b10 : _zz_result_data_payload_fragment = crc_2_result[23 : 16];
      default : _zz_result_data_payload_fragment = crc_2_result[31 : 24];
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l33 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l33_1 = (result_data_fire && result_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign crc_2_flush = (result_data_fire_1 && result_data_payload_last);
  always @(*) begin
    result_data_payload_last = 1'b0;
    if(!when_PhyTx_l40) begin
      if(when_PhyTx_l48) begin
        result_data_payload_last = 1'b1;
      end
    end
  end

  assign when_PhyTx_l40 = (! emitCrc);
  always @(*) begin
    if(when_PhyTx_l40) begin
      result_data_valid = raw_data_valid;
    end else begin
      result_data_valid = 1'b1;
    end
  end

  always @(*) begin
    if(when_PhyTx_l40) begin
      result_data_payload_fragment = raw_data_payload_fragment;
    end else begin
      result_data_payload_fragment = _zz_result_data_payload_fragment;
    end
  end

  always @(*) begin
    if(when_PhyTx_l40) begin
      raw_data_ready = result_data_ready;
    end else begin
      raw_data_ready = 1'b0;
    end
  end

  assign when_PhyTx_l48 = (counter == 2'b11);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      emitCrc <= 1'b0;
      counter <= 2'b00;
    end else begin
      if(when_PhyTx_l33) begin
        emitCrc <= 1'b1;
      end
      if(when_PhyTx_l33_1) begin
        emitCrc <= 1'b0;
      end
      if(!when_PhyTx_l40) begin
        if(when_PhyTx_l48) begin
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

module StreamFifo_4 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [7:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [7:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [8:0]    _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [8:0]    _zz_logic_ram_port_1;
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
  wire       [8:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l954;
  wire       [4:0]    logic_ptrDif;
  reg [8:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
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
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[8 : 1];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module PhyPkgInformationGen (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [7:0]    result_data_payload_fragment,
  output              pkg_size_valid,
  input               pkg_size_ready,
  output     [7:0]    pkg_size_payload,
  input               clk,
  input               reset
);

  wire                dataFifo_io_push_valid;
  wire                dataFifo_io_push_ready;
  wire                dataFifo_io_pop_valid;
  wire                dataFifo_io_pop_payload_last;
  wire       [7:0]    dataFifo_io_pop_payload_fragment;
  wire       [6:0]    dataFifo_io_occupancy;
  wire       [6:0]    dataFifo_io_availability;
  wire                pkg_size_fifo_io_push_ready;
  wire                pkg_size_fifo_io_pop_valid;
  wire       [7:0]    pkg_size_fifo_io_pop_payload;
  wire       [4:0]    pkg_size_fifo_io_occupancy;
  wire       [4:0]    pkg_size_fifo_io_availability;
  reg        [7:0]    pkg_size_cnt;
  wire                _zz_raw_data_ready;
  wire                raw_data_fire;
  wire                when_PhyTx_l244;
  wire                raw_data_fire_1;
  reg                 pkg_size_valid_1;
  reg        [7:0]    pkg_size_payload_1;
  wire                raw_data_fire_2;
  wire                when_PhyTx_l251;
  wire                raw_data_fire_3;

  StreamFifo_1 dataFifo (
    .io_push_valid               (dataFifo_io_push_valid                 ), //i
    .io_push_ready               (dataFifo_io_push_ready                 ), //o
    .io_push_payload_last        (raw_data_payload_last                  ), //i
    .io_push_payload_fragment    (raw_data_payload_fragment[7:0]         ), //i
    .io_pop_valid                (dataFifo_io_pop_valid                  ), //o
    .io_pop_ready                (result_data_ready                      ), //i
    .io_pop_payload_last         (dataFifo_io_pop_payload_last           ), //o
    .io_pop_payload_fragment     (dataFifo_io_pop_payload_fragment[7:0]  ), //o
    .io_flush                    (1'b0                                   ), //i
    .io_occupancy                (dataFifo_io_occupancy[6:0]             ), //o
    .io_availability             (dataFifo_io_availability[6:0]          ), //o
    .clk                         (clk                                    ), //i
    .reset                       (reset                                  )  //i
  );
  StreamFifo_2 pkg_size_fifo (
    .io_push_valid      (pkg_size_valid_1                    ), //i
    .io_push_ready      (pkg_size_fifo_io_push_ready         ), //o
    .io_push_payload    (pkg_size_payload_1[7:0]             ), //i
    .io_pop_valid       (pkg_size_fifo_io_pop_valid          ), //o
    .io_pop_ready       (pkg_size_ready                      ), //i
    .io_pop_payload     (pkg_size_fifo_io_pop_payload[7:0]   ), //o
    .io_flush           (1'b0                                ), //i
    .io_occupancy       (pkg_size_fifo_io_occupancy[4:0]     ), //o
    .io_availability    (pkg_size_fifo_io_availability[4:0]  ), //o
    .clk                (clk                                 ), //i
    .reset              (reset                               )  //i
  );
  assign _zz_raw_data_ready = (! (! pkg_size_fifo_io_push_ready));
  assign raw_data_ready = (dataFifo_io_push_ready && _zz_raw_data_ready);
  assign dataFifo_io_push_valid = (raw_data_valid && _zz_raw_data_ready);
  assign result_data_valid = dataFifo_io_pop_valid;
  assign result_data_payload_last = dataFifo_io_pop_payload_last;
  assign result_data_payload_fragment = dataFifo_io_pop_payload_fragment;
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l244 = (raw_data_fire && raw_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign raw_data_fire_2 = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l251 = (raw_data_fire_2 && raw_data_payload_last);
  assign raw_data_fire_3 = (raw_data_valid && raw_data_ready);
  assign pkg_size_valid = pkg_size_fifo_io_pop_valid;
  assign pkg_size_payload = pkg_size_fifo_io_pop_payload;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pkg_size_cnt <= 8'h0;
      pkg_size_valid_1 <= 1'b0;
      pkg_size_payload_1 <= 8'h0;
    end else begin
      if(!when_PhyTx_l244) begin
        if(raw_data_fire_1) begin
          pkg_size_cnt <= (pkg_size_cnt + 8'h01);
        end
      end
      if(when_PhyTx_l251) begin
        pkg_size_valid_1 <= 1'b1;
        pkg_size_payload_1 <= (pkg_size_cnt + 8'h01);
        pkg_size_cnt <= 8'h0;
      end else begin
        if(raw_data_fire_3) begin
          pkg_size_cnt <= (pkg_size_cnt + 8'h01);
          pkg_size_valid_1 <= 1'b0;
        end else begin
          pkg_size_valid_1 <= 1'b0;
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

module StreamFifo_3 (
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
  wire                when_Stream_l954;
  wire       [7:0]    logic_ptrDif;
  reg [8:0] logic_ram [0:251];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {7'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {7'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (8'hfc + logic_ptrDif);
  assign _zz_io_availability = (8'hfc + _zz_io_availability_1);
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 8'hfb);
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 8'hfb);
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
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 8'hfc : 8'h0);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 8'h0 : 8'hfc);
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
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

//Crc replaced by Crc

module ReorderLifo (
  input               inverted_order_valid,
  input               inverted_order_payload_last,
  input      [1:0]    inverted_order_payload_fragment,
  output              decoded_data_valid,
  output              decoded_data_payload_last,
  output     [0:0]    decoded_data_payload_fragment,
  input               clk,
  input               reset
);
  localparam ReorderLifoStates_PUSH0POP1 = 1'd0;
  localparam ReorderLifoStates_POP0PUSH1 = 1'd1;

  wire                inverted_order_fifo_io_pop_ready;
  wire                decoded_lifo_0_push_method;
  wire                decoded_lifo_1_push_method;
  wire                lifo_demux_input_valid;
  wire                lifo_demux_input_payload_last;
  wire       [0:0]    lifo_demux_input_payload_fragment;
  wire       [0:0]    lifo_mux_io_select;
  wire                inverted_order_fifo_io_push_ready;
  wire                inverted_order_fifo_io_pop_valid;
  wire                inverted_order_fifo_io_pop_payload_last;
  wire       [1:0]    inverted_order_fifo_io_pop_payload_fragment;
  wire       [4:0]    inverted_order_fifo_io_occupancy;
  wire       [4:0]    inverted_order_fifo_io_availability;
  wire                decoded_lifo_0_push_ready;
  wire                decoded_lifo_0_pop_valid;
  wire                decoded_lifo_0_pop_payload_last;
  wire       [0:0]    decoded_lifo_0_pop_payload_fragment;
  wire                decoded_lifo_0_empty;
  wire                decoded_lifo_0_full;
  wire                decoded_lifo_1_push_ready;
  wire                decoded_lifo_1_pop_valid;
  wire                decoded_lifo_1_pop_payload_last;
  wire       [0:0]    decoded_lifo_1_pop_payload_fragment;
  wire                decoded_lifo_1_empty;
  wire                decoded_lifo_1_full;
  wire                lifo_demux_input_ready;
  wire                lifo_demux_outputs_0_valid;
  wire                lifo_demux_outputs_0_payload_last;
  wire       [0:0]    lifo_demux_outputs_0_payload_fragment;
  wire                lifo_demux_outputs_1_valid;
  wire                lifo_demux_outputs_1_payload_last;
  wire       [0:0]    lifo_demux_outputs_1_payload_fragment;
  wire                lifo_mux_io_inputs_0_ready;
  wire                lifo_mux_io_inputs_1_ready;
  wire                lifo_mux_io_output_valid;
  wire                lifo_mux_io_output_payload_last;
  wire       [0:0]    lifo_mux_io_output_payload_fragment;
  reg        [0:0]    reorder_state;
  wire                inverted_order_toStream_valid;
  wire                inverted_order_toStream_ready;
  wire                inverted_order_toStream_payload_last;
  wire       [1:0]    inverted_order_toStream_payload_fragment;
  wire       [0:0]    lifo_push_sel;
  reg                 fifo_pop_valve;
  wire                when_ReorderLifo_l40;
  wire                inverted_order_fifo_io_pop_fire;
  wire                when_ReorderLifo_l52;
  wire                inverted_order_fifo_io_pop_fire_1;
  reg                 lifo_mux_io_output_valid_regNext;
  reg                 lifo_mux_io_output_payload_last_regNext;
  reg        [0:0]    lifo_mux_io_output_payload_fragment_regNext;
  `ifndef SYNTHESIS
  reg [71:0] reorder_state_string;
  `endif


  StreamFifo inverted_order_fifo (
    .io_push_valid               (inverted_order_toStream_valid                     ), //i
    .io_push_ready               (inverted_order_fifo_io_push_ready                 ), //o
    .io_push_payload_last        (inverted_order_toStream_payload_last              ), //i
    .io_push_payload_fragment    (inverted_order_toStream_payload_fragment[1:0]     ), //i
    .io_pop_valid                (inverted_order_fifo_io_pop_valid                  ), //o
    .io_pop_ready                (inverted_order_fifo_io_pop_ready                  ), //i
    .io_pop_payload_last         (inverted_order_fifo_io_pop_payload_last           ), //o
    .io_pop_payload_fragment     (inverted_order_fifo_io_pop_payload_fragment[1:0]  ), //o
    .io_flush                    (1'b0                                              ), //i
    .io_occupancy                (inverted_order_fifo_io_occupancy[4:0]             ), //o
    .io_availability             (inverted_order_fifo_io_availability[4:0]          ), //o
    .clk                         (clk                                               ), //i
    .reset                       (reset                                             )  //i
  );
  SISOLifo decoded_lifo_0 (
    .push_valid               (lifo_demux_outputs_0_valid             ), //i
    .push_ready               (decoded_lifo_0_push_ready              ), //o
    .push_payload_last        (lifo_demux_outputs_0_payload_last      ), //i
    .push_payload_fragment    (lifo_demux_outputs_0_payload_fragment  ), //i
    .pop_valid                (decoded_lifo_0_pop_valid               ), //o
    .pop_ready                (lifo_mux_io_inputs_0_ready             ), //i
    .pop_payload_last         (decoded_lifo_0_pop_payload_last        ), //o
    .pop_payload_fragment     (decoded_lifo_0_pop_payload_fragment    ), //o
    .push_method              (decoded_lifo_0_push_method             ), //i
    .empty                    (decoded_lifo_0_empty                   ), //o
    .full                     (decoded_lifo_0_full                    ), //o
    .clk                      (clk                                    ), //i
    .reset                    (reset                                  )  //i
  );
  SISOLifo decoded_lifo_1 (
    .push_valid               (lifo_demux_outputs_1_valid             ), //i
    .push_ready               (decoded_lifo_1_push_ready              ), //o
    .push_payload_last        (lifo_demux_outputs_1_payload_last      ), //i
    .push_payload_fragment    (lifo_demux_outputs_1_payload_fragment  ), //i
    .pop_valid                (decoded_lifo_1_pop_valid               ), //o
    .pop_ready                (lifo_mux_io_inputs_1_ready             ), //i
    .pop_payload_last         (decoded_lifo_1_pop_payload_last        ), //o
    .pop_payload_fragment     (decoded_lifo_1_pop_payload_fragment    ), //o
    .push_method              (decoded_lifo_1_push_method             ), //i
    .empty                    (decoded_lifo_1_empty                   ), //o
    .full                     (decoded_lifo_1_full                    ), //o
    .clk                      (clk                                    ), //i
    .reset                    (reset                                  )  //i
  );
  LifoDemux lifo_demux (
    .select_1                      (lifo_push_sel                          ), //i
    .input_valid                   (lifo_demux_input_valid                 ), //i
    .input_ready                   (lifo_demux_input_ready                 ), //o
    .input_payload_last            (lifo_demux_input_payload_last          ), //i
    .input_payload_fragment        (lifo_demux_input_payload_fragment      ), //i
    .outputs_0_valid               (lifo_demux_outputs_0_valid             ), //o
    .outputs_0_ready               (decoded_lifo_0_push_ready              ), //i
    .outputs_0_payload_last        (lifo_demux_outputs_0_payload_last      ), //o
    .outputs_0_payload_fragment    (lifo_demux_outputs_0_payload_fragment  ), //o
    .outputs_1_valid               (lifo_demux_outputs_1_valid             ), //o
    .outputs_1_ready               (decoded_lifo_1_push_ready              ), //i
    .outputs_1_payload_last        (lifo_demux_outputs_1_payload_last      ), //o
    .outputs_1_payload_fragment    (lifo_demux_outputs_1_payload_fragment  )  //o
  );
  LifoMux lifo_mux (
    .io_select                       (lifo_mux_io_select                   ), //i
    .io_inputs_0_valid               (decoded_lifo_0_pop_valid             ), //i
    .io_inputs_0_ready               (lifo_mux_io_inputs_0_ready           ), //o
    .io_inputs_0_payload_last        (decoded_lifo_0_pop_payload_last      ), //i
    .io_inputs_0_payload_fragment    (decoded_lifo_0_pop_payload_fragment  ), //i
    .io_inputs_1_valid               (decoded_lifo_1_pop_valid             ), //i
    .io_inputs_1_ready               (lifo_mux_io_inputs_1_ready           ), //o
    .io_inputs_1_payload_last        (decoded_lifo_1_pop_payload_last      ), //i
    .io_inputs_1_payload_fragment    (decoded_lifo_1_pop_payload_fragment  ), //i
    .io_output_valid                 (lifo_mux_io_output_valid             ), //o
    .io_output_ready                 (1'b1                                 ), //i
    .io_output_payload_last          (lifo_mux_io_output_payload_last      ), //o
    .io_output_payload_fragment      (lifo_mux_io_output_payload_fragment  )  //o
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(reorder_state)
      ReorderLifoStates_PUSH0POP1 : reorder_state_string = "PUSH0POP1";
      ReorderLifoStates_POP0PUSH1 : reorder_state_string = "POP0PUSH1";
      default : reorder_state_string = "?????????";
    endcase
  end
  `endif

  assign inverted_order_toStream_valid = inverted_order_valid;
  assign inverted_order_toStream_payload_last = inverted_order_payload_last;
  assign inverted_order_toStream_payload_fragment = inverted_order_payload_fragment;
  assign inverted_order_toStream_ready = inverted_order_fifo_io_push_ready;
  assign lifo_push_sel = reorder_state;
  assign decoded_lifo_0_push_method = (lifo_push_sel == 1'b0);
  assign decoded_lifo_1_push_method = (lifo_push_sel == 1'b1);
  assign lifo_demux_input_payload_fragment = inverted_order_fifo_io_pop_payload_fragment[0];
  assign lifo_demux_input_payload_last = inverted_order_fifo_io_pop_payload_fragment[1];
  assign lifo_demux_input_valid = (inverted_order_fifo_io_pop_valid && fifo_pop_valve);
  assign inverted_order_fifo_io_pop_ready = (lifo_demux_input_ready && fifo_pop_valve);
  assign when_ReorderLifo_l40 = (fifo_pop_valve == 1'b0);
  assign inverted_order_fifo_io_pop_fire = (inverted_order_fifo_io_pop_valid && inverted_order_fifo_io_pop_ready);
  assign when_ReorderLifo_l52 = (fifo_pop_valve == 1'b0);
  assign inverted_order_fifo_io_pop_fire_1 = (inverted_order_fifo_io_pop_valid && inverted_order_fifo_io_pop_ready);
  assign lifo_mux_io_select = (~ lifo_push_sel);
  assign decoded_data_valid = lifo_mux_io_output_valid_regNext;
  assign decoded_data_payload_last = lifo_mux_io_output_payload_last_regNext;
  assign decoded_data_payload_fragment = lifo_mux_io_output_payload_fragment_regNext;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      reorder_state <= ReorderLifoStates_PUSH0POP1;
      fifo_pop_valve <= 1'b1;
      lifo_mux_io_output_valid_regNext <= 1'b0;
      lifo_mux_io_output_payload_last_regNext <= 1'b0;
    end else begin
      case(reorder_state)
        ReorderLifoStates_PUSH0POP1 : begin
          if(when_ReorderLifo_l40) begin
            if(decoded_lifo_1_empty) begin
              reorder_state <= ReorderLifoStates_POP0PUSH1;
              fifo_pop_valve <= 1'b1;
            end
          end else begin
            if(inverted_order_fifo_io_pop_fire) begin
              if(inverted_order_fifo_io_pop_payload_last) begin
                fifo_pop_valve <= 1'b0;
              end
            end
          end
        end
        default : begin
          if(when_ReorderLifo_l52) begin
            if(decoded_lifo_0_empty) begin
              reorder_state <= ReorderLifoStates_PUSH0POP1;
              fifo_pop_valve <= 1'b1;
            end
          end else begin
            if(inverted_order_fifo_io_pop_fire_1) begin
              if(inverted_order_fifo_io_pop_payload_last) begin
                fifo_pop_valve <= 1'b0;
              end
            end
          end
        end
      endcase
      lifo_mux_io_output_valid_regNext <= lifo_mux_io_output_valid;
      lifo_mux_io_output_payload_last_regNext <= lifo_mux_io_output_payload_last;
    end
  end

  always @(posedge clk) begin
    lifo_mux_io_output_payload_fragment_regNext <= lifo_mux_io_output_payload_fragment;
  end


endmodule

module Traceback (
  input      [5:0]    min_idx,
  input               s_path_valid,
  input               s_path_payload_last,
  input      [63:0]   s_path_payload_fragment,
  output              tb_node_valid,
  output              tb_node_payload_last,
  output     [1:0]    tb_node_payload_fragment,
  output              halt,
  output              finished,
  input               clk,
  input               reset
);
  localparam TracebackStates_IDLE = 3'd0;
  localparam TracebackStates_TB = 3'd1;
  localparam TracebackStates_DECODE = 3'd2;
  localparam TracebackStates_HALT = 3'd3;
  localparam TracebackStates_TAIL_DECODE = 3'd4;
  localparam TracebackStates_FINISH = 3'd5;

  wire       [5:0]    _zz_states_shift_rom_port0;
  wire       [0:0]    _zz_in_data_rom_port0;
  reg        [63:0]   _zz_survival_path_ram_0_port1;
  reg        [63:0]   _zz_survival_path_ram_1_port1;
  reg        [63:0]   _zz_survival_path_ram_2_port1;
  wire       [63:0]   _zz_survival_path_ram_0_port;
  wire                _zz_survival_path_ram_0_port_1;
  wire       [63:0]   _zz_survival_path_ram_1_port;
  wire                _zz_survival_path_ram_1_port_1;
  wire       [63:0]   _zz_survival_path_ram_2_port;
  wire                _zz_survival_path_ram_2_port_1;
  wire       [1:0]    _zz_ram_select;
  wire                _zz_survival_path_ram_0_port_2;
  wire                _zz_ram_0_value;
  wire                _zz_survival_path_ram_1_port_2;
  wire                _zz_ram_1_value;
  wire                _zz_survival_path_ram_2_port_2;
  wire                _zz_ram_2_value;
  wire       [6:0]    _zz_cursor;
  wire       [6:0]    _zz_cursor_1;
  wire       [0:0]    _zz_cursor_2;
  wire       [6:0]    _zz_cursor_3;
  wire       [6:0]    _zz_cursor_4;
  wire       [0:0]    _zz_cursor_5;
  wire       [6:0]    _zz_cursor_6;
  wire       [6:0]    _zz_cursor_7;
  wire       [0:0]    _zz_cursor_8;
  wire       [1:0]    _zz_decoded_ram_select;
  wire       [7:0]    _zz_ram_addr_read;
  wire       [1:0]    _zz_decoded_ram_select_1;
  wire       [7:0]    _zz_ram_addr_read_1;
  wire       [1:0]    _zz_decoded_ram_select_2;
  wire       [7:0]    _zz_ram_addr_read_2;
  reg        [1:0]    ram_select;
  reg        [7:0]    ram_addr_write;
  reg                 pkg_tail;
  reg                 tb_finish;
  wire                when_Traceback_l48;
  reg        [1:0]    decoded_ram_select;
  reg        [7:0]    ram_addr_read;
  reg                 pipe_halt;
  wire       [63:0]   ram_0_value;
  wire       [63:0]   ram_1_value;
  wire       [63:0]   ram_2_value;
  reg        [5:0]    min_cursor;
  reg        [6:0]    cursor;
  wire       [5:0]    min_cursor_next;
  wire       [0:0]    tb_node_data_next;
  reg        [0:0]    tb_node_data;
  reg                 tb_node_valid_1;
  reg                 tb_node_last;
  reg                 tail_repeat;
  reg                 goto_tail;
  reg        [2:0]    halt_cnt;
  reg        [2:0]    traceback_state;
  wire                when_Traceback_l104;
  wire                when_Traceback_l113;
  wire                when_Traceback_l126;
  wire                when_Traceback_l144;
  wire                when_Traceback_l153;
  `ifndef SYNTHESIS
  reg [87:0] traceback_state_string;
  `endif

  (* ram_style = "distributed" *) reg [5:0] states_shift_rom [0:127];
  (* ram_style = "distributed" *) reg [0:0] in_data_rom [0:127];
  reg [63:0] survival_path_ram_0 [0:167];
  reg [63:0] survival_path_ram_1 [0:167];
  reg [63:0] survival_path_ram_2 [0:167];

  assign _zz_ram_select = (ram_select + 2'b01);
  assign _zz_cursor = ({1'd0,min_cursor} <<< 1);
  assign _zz_cursor_2 = ram_0_value[min_cursor];
  assign _zz_cursor_1 = {6'd0, _zz_cursor_2};
  assign _zz_cursor_3 = ({1'd0,min_cursor} <<< 1);
  assign _zz_cursor_5 = ram_1_value[min_cursor];
  assign _zz_cursor_4 = {6'd0, _zz_cursor_5};
  assign _zz_cursor_6 = ({1'd0,min_cursor} <<< 1);
  assign _zz_cursor_8 = ram_2_value[min_cursor];
  assign _zz_cursor_7 = {6'd0, _zz_cursor_8};
  assign _zz_decoded_ram_select = (decoded_ram_select - 2'b01);
  assign _zz_ram_addr_read = (ram_addr_read - 8'h01);
  assign _zz_decoded_ram_select_1 = (decoded_ram_select - 2'b01);
  assign _zz_ram_addr_read_1 = (ram_addr_read - 8'h01);
  assign _zz_decoded_ram_select_2 = (decoded_ram_select - 2'b01);
  assign _zz_ram_addr_read_2 = (ram_addr_read - 8'h01);
  assign _zz_survival_path_ram_0_port = s_path_payload_fragment;
  assign _zz_survival_path_ram_0_port_1 = ((ram_select == 2'b00) && s_path_valid);
  assign _zz_ram_0_value = 1'b1;
  assign _zz_survival_path_ram_1_port = s_path_payload_fragment;
  assign _zz_survival_path_ram_1_port_1 = ((ram_select == 2'b01) && s_path_valid);
  assign _zz_ram_1_value = 1'b1;
  assign _zz_survival_path_ram_2_port = s_path_payload_fragment;
  assign _zz_survival_path_ram_2_port_1 = ((ram_select == 2'b10) && s_path_valid);
  assign _zz_ram_2_value = 1'b1;
  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/./simWorkspace/LoopBackTest/rtl/LoopBackTest.v_toplevel_receiver_phy_rx_decoder_tbu_core_states_shift_rom.bin",states_shift_rom);
  end
  assign _zz_states_shift_rom_port0 = states_shift_rom[cursor];
  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/./simWorkspace/LoopBackTest/rtl/LoopBackTest.v_toplevel_receiver_phy_rx_decoder_tbu_core_in_data_rom.bin",in_data_rom);
  end
  assign _zz_in_data_rom_port0 = in_data_rom[cursor];
  always @(posedge clk) begin
    if(_zz_survival_path_ram_0_port_1) begin
      survival_path_ram_0[ram_addr_write] <= _zz_survival_path_ram_0_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_ram_0_value) begin
      _zz_survival_path_ram_0_port1 <= survival_path_ram_0[ram_addr_read];
    end
  end

  always @(posedge clk) begin
    if(_zz_survival_path_ram_1_port_1) begin
      survival_path_ram_1[ram_addr_write] <= _zz_survival_path_ram_1_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_ram_1_value) begin
      _zz_survival_path_ram_1_port1 <= survival_path_ram_1[ram_addr_read];
    end
  end

  always @(posedge clk) begin
    if(_zz_survival_path_ram_2_port_1) begin
      survival_path_ram_2[ram_addr_write] <= _zz_survival_path_ram_2_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_ram_2_value) begin
      _zz_survival_path_ram_2_port1 <= survival_path_ram_2[ram_addr_read];
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(traceback_state)
      TracebackStates_IDLE : traceback_state_string = "IDLE       ";
      TracebackStates_TB : traceback_state_string = "TB         ";
      TracebackStates_DECODE : traceback_state_string = "DECODE     ";
      TracebackStates_HALT : traceback_state_string = "HALT       ";
      TracebackStates_TAIL_DECODE : traceback_state_string = "TAIL_DECODE";
      TracebackStates_FINISH : traceback_state_string = "FINISH     ";
      default : traceback_state_string = "???????????";
    endcase
  end
  `endif

  assign when_Traceback_l48 = (8'ha7 <= ram_addr_write);
  assign ram_0_value = _zz_survival_path_ram_0_port1;
  assign ram_1_value = _zz_survival_path_ram_1_port1;
  assign ram_2_value = _zz_survival_path_ram_2_port1;
  always @(*) begin
    case(decoded_ram_select)
      2'b00 : begin
        cursor = (_zz_cursor + _zz_cursor_1);
      end
      2'b01 : begin
        cursor = (_zz_cursor_3 + _zz_cursor_4);
      end
      2'b10 : begin
        cursor = (_zz_cursor_6 + _zz_cursor_7);
      end
      default : begin
        cursor = 7'h0;
      end
    endcase
  end

  assign min_cursor_next = _zz_states_shift_rom_port0;
  assign tb_node_data_next = _zz_in_data_rom_port0;
  assign when_Traceback_l104 = (((ram_addr_write == 8'h53) && (decoded_ram_select == ram_select)) || pkg_tail);
  assign when_Traceback_l113 = (halt_cnt == 3'b111);
  assign when_Traceback_l126 = (ram_addr_read == 8'ha7);
  assign when_Traceback_l144 = (ram_addr_read == 8'ha7);
  assign when_Traceback_l153 = (ram_addr_read == 8'ha7);
  assign finished = tb_finish;
  assign halt = pipe_halt;
  assign tb_node_valid = tb_node_valid_1;
  assign tb_node_payload_fragment = {tb_finish,tb_node_data};
  assign tb_node_payload_last = tb_node_last;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      ram_select <= 2'b00;
      ram_addr_write <= 8'h0;
      pkg_tail <= 1'b0;
      ram_addr_read <= 8'h0;
      tb_node_valid_1 <= 1'b0;
      tb_node_last <= 1'b0;
      tail_repeat <= 1'b0;
      goto_tail <= 1'b0;
      traceback_state <= TracebackStates_FINISH;
    end else begin
      if(tb_finish) begin
        ram_addr_write <= 8'h0;
        ram_select <= 2'b00;
        pkg_tail <= 1'b0;
      end else begin
        if(s_path_valid) begin
          if(when_Traceback_l48) begin
            ram_addr_write <= 8'h0;
            ram_select <= ((ram_select == 2'b10) ? 2'b00 : _zz_ram_select);
          end else begin
            ram_addr_write <= (ram_addr_write + 8'h01);
          end
          pkg_tail <= s_path_payload_last;
        end
      end
      case(traceback_state)
        TracebackStates_FINISH : begin
          tb_node_valid_1 <= 1'b0;
          tb_node_last <= 1'b0;
          tail_repeat <= 1'b0;
          goto_tail <= 1'b0;
          traceback_state <= TracebackStates_IDLE;
        end
        TracebackStates_IDLE : begin
          tb_node_valid_1 <= 1'b0;
          tb_node_last <= 1'b0;
          if(when_Traceback_l104) begin
            traceback_state <= TracebackStates_HALT;
            ram_addr_read <= (ram_addr_write - 8'h01);
            goto_tail <= pkg_tail;
          end
        end
        TracebackStates_HALT : begin
          if(when_Traceback_l113) begin
            ram_addr_read <= (ram_addr_read - 8'h01);
            if(goto_tail) begin
              tail_repeat <= ((ram_addr_write < 8'h54) && (decoded_ram_select == ram_select));
              traceback_state <= TracebackStates_TAIL_DECODE;
            end else begin
              traceback_state <= TracebackStates_TB;
            end
          end
        end
        TracebackStates_TAIL_DECODE : begin
          if(when_Traceback_l126) begin
            if(tail_repeat) begin
              traceback_state <= TracebackStates_TAIL_DECODE;
              tail_repeat <= 1'b0;
              tb_node_last <= 1'b0;
            end else begin
              traceback_state <= TracebackStates_FINISH;
              tb_node_last <= 1'b1;
            end
          end
          ram_addr_read <= ((ram_addr_read == 8'h0) ? 8'ha7 : _zz_ram_addr_read);
          tb_node_valid_1 <= 1'b1;
        end
        TracebackStates_TB : begin
          if(when_Traceback_l144) begin
            traceback_state <= TracebackStates_DECODE;
          end
          ram_addr_read <= ((ram_addr_read == 8'h0) ? 8'ha7 : _zz_ram_addr_read_1);
        end
        default : begin
          if(when_Traceback_l153) begin
            traceback_state <= TracebackStates_IDLE;
            tb_node_last <= 1'b1;
          end
          ram_addr_read <= ((ram_addr_read == 8'h0) ? 8'ha7 : _zz_ram_addr_read_2);
          tb_node_valid_1 <= 1'b1;
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(traceback_state)
      TracebackStates_FINISH : begin
        tb_finish <= 1'b1;
        pipe_halt <= 1'b1;
        decoded_ram_select <= 2'b01;
      end
      TracebackStates_IDLE : begin
        tb_finish <= 1'b0;
        pipe_halt <= 1'b0;
        halt_cnt <= 3'b000;
        if(when_Traceback_l104) begin
          pipe_halt <= 1'b1;
        end
      end
      TracebackStates_HALT : begin
        halt_cnt <= (halt_cnt + 3'b001);
        if(when_Traceback_l113) begin
          if(goto_tail) begin
            decoded_ram_select <= ram_select;
            min_cursor <= min_idx;
          end
        end
      end
      TracebackStates_TAIL_DECODE : begin
        if(when_Traceback_l126) begin
          if(tail_repeat) begin
            decoded_ram_select <= ((decoded_ram_select == 2'b00) ? 2'b10 : _zz_decoded_ram_select);
          end else begin
            tb_finish <= 1'b1;
          end
        end
        min_cursor <= min_cursor_next;
        tb_node_data <= tb_node_data_next;
      end
      TracebackStates_TB : begin
        if(when_Traceback_l144) begin
          decoded_ram_select <= ((decoded_ram_select == 2'b00) ? 2'b10 : _zz_decoded_ram_select_1);
        end
        min_cursor <= min_cursor_next;
      end
      default : begin
        pipe_halt <= 1'b0;
        if(when_Traceback_l153) begin
          decoded_ram_select <= ((decoded_ram_select == 2'b00) ? 2'b10 : _zz_decoded_ram_select_2);
        end
        min_cursor <= min_cursor_next;
        tb_node_data <= tb_node_data_next;
      end
    endcase
  end


endmodule

module PathMetric (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [1:0]    raw_data_payload_fragment_data,
  input      [1:0]    raw_data_payload_fragment_indicate,
  input               tbu_finished,
  output     [5:0]    min_idx,
  output              s_path_valid,
  output              s_path_payload_last,
  output     [63:0]   s_path_payload_fragment,
  input               clk,
  input               reset
);

  wire       [15:0]   addCompareSelect_64_dist_0;
  wire       [15:0]   addCompareSelect_64_dist_1;
  wire       [15:0]   addCompareSelect_65_dist_0;
  wire       [15:0]   addCompareSelect_65_dist_1;
  wire       [15:0]   addCompareSelect_66_dist_0;
  wire       [15:0]   addCompareSelect_66_dist_1;
  wire       [15:0]   addCompareSelect_67_dist_0;
  wire       [15:0]   addCompareSelect_67_dist_1;
  wire       [15:0]   addCompareSelect_68_dist_0;
  wire       [15:0]   addCompareSelect_68_dist_1;
  wire       [15:0]   addCompareSelect_69_dist_0;
  wire       [15:0]   addCompareSelect_69_dist_1;
  wire       [15:0]   addCompareSelect_70_dist_0;
  wire       [15:0]   addCompareSelect_70_dist_1;
  wire       [15:0]   addCompareSelect_71_dist_0;
  wire       [15:0]   addCompareSelect_71_dist_1;
  wire       [15:0]   addCompareSelect_72_dist_0;
  wire       [15:0]   addCompareSelect_72_dist_1;
  wire       [15:0]   addCompareSelect_73_dist_0;
  wire       [15:0]   addCompareSelect_73_dist_1;
  wire       [15:0]   addCompareSelect_74_dist_0;
  wire       [15:0]   addCompareSelect_74_dist_1;
  wire       [15:0]   addCompareSelect_75_dist_0;
  wire       [15:0]   addCompareSelect_75_dist_1;
  wire       [15:0]   addCompareSelect_76_dist_0;
  wire       [15:0]   addCompareSelect_76_dist_1;
  wire       [15:0]   addCompareSelect_77_dist_0;
  wire       [15:0]   addCompareSelect_77_dist_1;
  wire       [15:0]   addCompareSelect_78_dist_0;
  wire       [15:0]   addCompareSelect_78_dist_1;
  wire       [15:0]   addCompareSelect_79_dist_0;
  wire       [15:0]   addCompareSelect_79_dist_1;
  wire       [15:0]   addCompareSelect_80_dist_0;
  wire       [15:0]   addCompareSelect_80_dist_1;
  wire       [15:0]   addCompareSelect_81_dist_0;
  wire       [15:0]   addCompareSelect_81_dist_1;
  wire       [15:0]   addCompareSelect_82_dist_0;
  wire       [15:0]   addCompareSelect_82_dist_1;
  wire       [15:0]   addCompareSelect_83_dist_0;
  wire       [15:0]   addCompareSelect_83_dist_1;
  wire       [15:0]   addCompareSelect_84_dist_0;
  wire       [15:0]   addCompareSelect_84_dist_1;
  wire       [15:0]   addCompareSelect_85_dist_0;
  wire       [15:0]   addCompareSelect_85_dist_1;
  wire       [15:0]   addCompareSelect_86_dist_0;
  wire       [15:0]   addCompareSelect_86_dist_1;
  wire       [15:0]   addCompareSelect_87_dist_0;
  wire       [15:0]   addCompareSelect_87_dist_1;
  wire       [15:0]   addCompareSelect_88_dist_0;
  wire       [15:0]   addCompareSelect_88_dist_1;
  wire       [15:0]   addCompareSelect_89_dist_0;
  wire       [15:0]   addCompareSelect_89_dist_1;
  wire       [15:0]   addCompareSelect_90_dist_0;
  wire       [15:0]   addCompareSelect_90_dist_1;
  wire       [15:0]   addCompareSelect_91_dist_0;
  wire       [15:0]   addCompareSelect_91_dist_1;
  wire       [15:0]   addCompareSelect_92_dist_0;
  wire       [15:0]   addCompareSelect_92_dist_1;
  wire       [15:0]   addCompareSelect_93_dist_0;
  wire       [15:0]   addCompareSelect_93_dist_1;
  wire       [15:0]   addCompareSelect_94_dist_0;
  wire       [15:0]   addCompareSelect_94_dist_1;
  wire       [15:0]   addCompareSelect_95_dist_0;
  wire       [15:0]   addCompareSelect_95_dist_1;
  wire       [15:0]   addCompareSelect_96_dist_0;
  wire       [15:0]   addCompareSelect_96_dist_1;
  wire       [15:0]   addCompareSelect_97_dist_0;
  wire       [15:0]   addCompareSelect_97_dist_1;
  wire       [15:0]   addCompareSelect_98_dist_0;
  wire       [15:0]   addCompareSelect_98_dist_1;
  wire       [15:0]   addCompareSelect_99_dist_0;
  wire       [15:0]   addCompareSelect_99_dist_1;
  wire       [15:0]   addCompareSelect_100_dist_0;
  wire       [15:0]   addCompareSelect_100_dist_1;
  wire       [15:0]   addCompareSelect_101_dist_0;
  wire       [15:0]   addCompareSelect_101_dist_1;
  wire       [15:0]   addCompareSelect_102_dist_0;
  wire       [15:0]   addCompareSelect_102_dist_1;
  wire       [15:0]   addCompareSelect_103_dist_0;
  wire       [15:0]   addCompareSelect_103_dist_1;
  wire       [15:0]   addCompareSelect_104_dist_0;
  wire       [15:0]   addCompareSelect_104_dist_1;
  wire       [15:0]   addCompareSelect_105_dist_0;
  wire       [15:0]   addCompareSelect_105_dist_1;
  wire       [15:0]   addCompareSelect_106_dist_0;
  wire       [15:0]   addCompareSelect_106_dist_1;
  wire       [15:0]   addCompareSelect_107_dist_0;
  wire       [15:0]   addCompareSelect_107_dist_1;
  wire       [15:0]   addCompareSelect_108_dist_0;
  wire       [15:0]   addCompareSelect_108_dist_1;
  wire       [15:0]   addCompareSelect_109_dist_0;
  wire       [15:0]   addCompareSelect_109_dist_1;
  wire       [15:0]   addCompareSelect_110_dist_0;
  wire       [15:0]   addCompareSelect_110_dist_1;
  wire       [15:0]   addCompareSelect_111_dist_0;
  wire       [15:0]   addCompareSelect_111_dist_1;
  wire       [15:0]   addCompareSelect_112_dist_0;
  wire       [15:0]   addCompareSelect_112_dist_1;
  wire       [15:0]   addCompareSelect_113_dist_0;
  wire       [15:0]   addCompareSelect_113_dist_1;
  wire       [15:0]   addCompareSelect_114_dist_0;
  wire       [15:0]   addCompareSelect_114_dist_1;
  wire       [15:0]   addCompareSelect_115_dist_0;
  wire       [15:0]   addCompareSelect_115_dist_1;
  wire       [15:0]   addCompareSelect_116_dist_0;
  wire       [15:0]   addCompareSelect_116_dist_1;
  wire       [15:0]   addCompareSelect_117_dist_0;
  wire       [15:0]   addCompareSelect_117_dist_1;
  wire       [15:0]   addCompareSelect_118_dist_0;
  wire       [15:0]   addCompareSelect_118_dist_1;
  wire       [15:0]   addCompareSelect_119_dist_0;
  wire       [15:0]   addCompareSelect_119_dist_1;
  wire       [15:0]   addCompareSelect_120_dist_0;
  wire       [15:0]   addCompareSelect_120_dist_1;
  wire       [15:0]   addCompareSelect_121_dist_0;
  wire       [15:0]   addCompareSelect_121_dist_1;
  wire       [15:0]   addCompareSelect_122_dist_0;
  wire       [15:0]   addCompareSelect_122_dist_1;
  wire       [15:0]   addCompareSelect_123_dist_0;
  wire       [15:0]   addCompareSelect_123_dist_1;
  wire       [15:0]   addCompareSelect_124_dist_0;
  wire       [15:0]   addCompareSelect_124_dist_1;
  wire       [15:0]   addCompareSelect_125_dist_0;
  wire       [15:0]   addCompareSelect_125_dist_1;
  wire       [15:0]   addCompareSelect_126_dist_0;
  wire       [15:0]   addCompareSelect_126_dist_1;
  wire       [15:0]   addCompareSelect_127_dist_0;
  wire       [15:0]   addCompareSelect_127_dist_1;
  wire       [2:0]    branchMetric_64_dist_0;
  wire       [2:0]    branchMetric_64_dist_1;
  wire       [15:0]   addCompareSelect_64_state_weight;
  wire                addCompareSelect_64_decision;
  wire       [2:0]    branchMetric_65_dist_0;
  wire       [2:0]    branchMetric_65_dist_1;
  wire       [15:0]   addCompareSelect_65_state_weight;
  wire                addCompareSelect_65_decision;
  wire       [2:0]    branchMetric_66_dist_0;
  wire       [2:0]    branchMetric_66_dist_1;
  wire       [15:0]   addCompareSelect_66_state_weight;
  wire                addCompareSelect_66_decision;
  wire       [2:0]    branchMetric_67_dist_0;
  wire       [2:0]    branchMetric_67_dist_1;
  wire       [15:0]   addCompareSelect_67_state_weight;
  wire                addCompareSelect_67_decision;
  wire       [2:0]    branchMetric_68_dist_0;
  wire       [2:0]    branchMetric_68_dist_1;
  wire       [15:0]   addCompareSelect_68_state_weight;
  wire                addCompareSelect_68_decision;
  wire       [2:0]    branchMetric_69_dist_0;
  wire       [2:0]    branchMetric_69_dist_1;
  wire       [15:0]   addCompareSelect_69_state_weight;
  wire                addCompareSelect_69_decision;
  wire       [2:0]    branchMetric_70_dist_0;
  wire       [2:0]    branchMetric_70_dist_1;
  wire       [15:0]   addCompareSelect_70_state_weight;
  wire                addCompareSelect_70_decision;
  wire       [2:0]    branchMetric_71_dist_0;
  wire       [2:0]    branchMetric_71_dist_1;
  wire       [15:0]   addCompareSelect_71_state_weight;
  wire                addCompareSelect_71_decision;
  wire       [2:0]    branchMetric_72_dist_0;
  wire       [2:0]    branchMetric_72_dist_1;
  wire       [15:0]   addCompareSelect_72_state_weight;
  wire                addCompareSelect_72_decision;
  wire       [2:0]    branchMetric_73_dist_0;
  wire       [2:0]    branchMetric_73_dist_1;
  wire       [15:0]   addCompareSelect_73_state_weight;
  wire                addCompareSelect_73_decision;
  wire       [2:0]    branchMetric_74_dist_0;
  wire       [2:0]    branchMetric_74_dist_1;
  wire       [15:0]   addCompareSelect_74_state_weight;
  wire                addCompareSelect_74_decision;
  wire       [2:0]    branchMetric_75_dist_0;
  wire       [2:0]    branchMetric_75_dist_1;
  wire       [15:0]   addCompareSelect_75_state_weight;
  wire                addCompareSelect_75_decision;
  wire       [2:0]    branchMetric_76_dist_0;
  wire       [2:0]    branchMetric_76_dist_1;
  wire       [15:0]   addCompareSelect_76_state_weight;
  wire                addCompareSelect_76_decision;
  wire       [2:0]    branchMetric_77_dist_0;
  wire       [2:0]    branchMetric_77_dist_1;
  wire       [15:0]   addCompareSelect_77_state_weight;
  wire                addCompareSelect_77_decision;
  wire       [2:0]    branchMetric_78_dist_0;
  wire       [2:0]    branchMetric_78_dist_1;
  wire       [15:0]   addCompareSelect_78_state_weight;
  wire                addCompareSelect_78_decision;
  wire       [2:0]    branchMetric_79_dist_0;
  wire       [2:0]    branchMetric_79_dist_1;
  wire       [15:0]   addCompareSelect_79_state_weight;
  wire                addCompareSelect_79_decision;
  wire       [2:0]    branchMetric_80_dist_0;
  wire       [2:0]    branchMetric_80_dist_1;
  wire       [15:0]   addCompareSelect_80_state_weight;
  wire                addCompareSelect_80_decision;
  wire       [2:0]    branchMetric_81_dist_0;
  wire       [2:0]    branchMetric_81_dist_1;
  wire       [15:0]   addCompareSelect_81_state_weight;
  wire                addCompareSelect_81_decision;
  wire       [2:0]    branchMetric_82_dist_0;
  wire       [2:0]    branchMetric_82_dist_1;
  wire       [15:0]   addCompareSelect_82_state_weight;
  wire                addCompareSelect_82_decision;
  wire       [2:0]    branchMetric_83_dist_0;
  wire       [2:0]    branchMetric_83_dist_1;
  wire       [15:0]   addCompareSelect_83_state_weight;
  wire                addCompareSelect_83_decision;
  wire       [2:0]    branchMetric_84_dist_0;
  wire       [2:0]    branchMetric_84_dist_1;
  wire       [15:0]   addCompareSelect_84_state_weight;
  wire                addCompareSelect_84_decision;
  wire       [2:0]    branchMetric_85_dist_0;
  wire       [2:0]    branchMetric_85_dist_1;
  wire       [15:0]   addCompareSelect_85_state_weight;
  wire                addCompareSelect_85_decision;
  wire       [2:0]    branchMetric_86_dist_0;
  wire       [2:0]    branchMetric_86_dist_1;
  wire       [15:0]   addCompareSelect_86_state_weight;
  wire                addCompareSelect_86_decision;
  wire       [2:0]    branchMetric_87_dist_0;
  wire       [2:0]    branchMetric_87_dist_1;
  wire       [15:0]   addCompareSelect_87_state_weight;
  wire                addCompareSelect_87_decision;
  wire       [2:0]    branchMetric_88_dist_0;
  wire       [2:0]    branchMetric_88_dist_1;
  wire       [15:0]   addCompareSelect_88_state_weight;
  wire                addCompareSelect_88_decision;
  wire       [2:0]    branchMetric_89_dist_0;
  wire       [2:0]    branchMetric_89_dist_1;
  wire       [15:0]   addCompareSelect_89_state_weight;
  wire                addCompareSelect_89_decision;
  wire       [2:0]    branchMetric_90_dist_0;
  wire       [2:0]    branchMetric_90_dist_1;
  wire       [15:0]   addCompareSelect_90_state_weight;
  wire                addCompareSelect_90_decision;
  wire       [2:0]    branchMetric_91_dist_0;
  wire       [2:0]    branchMetric_91_dist_1;
  wire       [15:0]   addCompareSelect_91_state_weight;
  wire                addCompareSelect_91_decision;
  wire       [2:0]    branchMetric_92_dist_0;
  wire       [2:0]    branchMetric_92_dist_1;
  wire       [15:0]   addCompareSelect_92_state_weight;
  wire                addCompareSelect_92_decision;
  wire       [2:0]    branchMetric_93_dist_0;
  wire       [2:0]    branchMetric_93_dist_1;
  wire       [15:0]   addCompareSelect_93_state_weight;
  wire                addCompareSelect_93_decision;
  wire       [2:0]    branchMetric_94_dist_0;
  wire       [2:0]    branchMetric_94_dist_1;
  wire       [15:0]   addCompareSelect_94_state_weight;
  wire                addCompareSelect_94_decision;
  wire       [2:0]    branchMetric_95_dist_0;
  wire       [2:0]    branchMetric_95_dist_1;
  wire       [15:0]   addCompareSelect_95_state_weight;
  wire                addCompareSelect_95_decision;
  wire       [2:0]    branchMetric_96_dist_0;
  wire       [2:0]    branchMetric_96_dist_1;
  wire       [15:0]   addCompareSelect_96_state_weight;
  wire                addCompareSelect_96_decision;
  wire       [2:0]    branchMetric_97_dist_0;
  wire       [2:0]    branchMetric_97_dist_1;
  wire       [15:0]   addCompareSelect_97_state_weight;
  wire                addCompareSelect_97_decision;
  wire       [2:0]    branchMetric_98_dist_0;
  wire       [2:0]    branchMetric_98_dist_1;
  wire       [15:0]   addCompareSelect_98_state_weight;
  wire                addCompareSelect_98_decision;
  wire       [2:0]    branchMetric_99_dist_0;
  wire       [2:0]    branchMetric_99_dist_1;
  wire       [15:0]   addCompareSelect_99_state_weight;
  wire                addCompareSelect_99_decision;
  wire       [2:0]    branchMetric_100_dist_0;
  wire       [2:0]    branchMetric_100_dist_1;
  wire       [15:0]   addCompareSelect_100_state_weight;
  wire                addCompareSelect_100_decision;
  wire       [2:0]    branchMetric_101_dist_0;
  wire       [2:0]    branchMetric_101_dist_1;
  wire       [15:0]   addCompareSelect_101_state_weight;
  wire                addCompareSelect_101_decision;
  wire       [2:0]    branchMetric_102_dist_0;
  wire       [2:0]    branchMetric_102_dist_1;
  wire       [15:0]   addCompareSelect_102_state_weight;
  wire                addCompareSelect_102_decision;
  wire       [2:0]    branchMetric_103_dist_0;
  wire       [2:0]    branchMetric_103_dist_1;
  wire       [15:0]   addCompareSelect_103_state_weight;
  wire                addCompareSelect_103_decision;
  wire       [2:0]    branchMetric_104_dist_0;
  wire       [2:0]    branchMetric_104_dist_1;
  wire       [15:0]   addCompareSelect_104_state_weight;
  wire                addCompareSelect_104_decision;
  wire       [2:0]    branchMetric_105_dist_0;
  wire       [2:0]    branchMetric_105_dist_1;
  wire       [15:0]   addCompareSelect_105_state_weight;
  wire                addCompareSelect_105_decision;
  wire       [2:0]    branchMetric_106_dist_0;
  wire       [2:0]    branchMetric_106_dist_1;
  wire       [15:0]   addCompareSelect_106_state_weight;
  wire                addCompareSelect_106_decision;
  wire       [2:0]    branchMetric_107_dist_0;
  wire       [2:0]    branchMetric_107_dist_1;
  wire       [15:0]   addCompareSelect_107_state_weight;
  wire                addCompareSelect_107_decision;
  wire       [2:0]    branchMetric_108_dist_0;
  wire       [2:0]    branchMetric_108_dist_1;
  wire       [15:0]   addCompareSelect_108_state_weight;
  wire                addCompareSelect_108_decision;
  wire       [2:0]    branchMetric_109_dist_0;
  wire       [2:0]    branchMetric_109_dist_1;
  wire       [15:0]   addCompareSelect_109_state_weight;
  wire                addCompareSelect_109_decision;
  wire       [2:0]    branchMetric_110_dist_0;
  wire       [2:0]    branchMetric_110_dist_1;
  wire       [15:0]   addCompareSelect_110_state_weight;
  wire                addCompareSelect_110_decision;
  wire       [2:0]    branchMetric_111_dist_0;
  wire       [2:0]    branchMetric_111_dist_1;
  wire       [15:0]   addCompareSelect_111_state_weight;
  wire                addCompareSelect_111_decision;
  wire       [2:0]    branchMetric_112_dist_0;
  wire       [2:0]    branchMetric_112_dist_1;
  wire       [15:0]   addCompareSelect_112_state_weight;
  wire                addCompareSelect_112_decision;
  wire       [2:0]    branchMetric_113_dist_0;
  wire       [2:0]    branchMetric_113_dist_1;
  wire       [15:0]   addCompareSelect_113_state_weight;
  wire                addCompareSelect_113_decision;
  wire       [2:0]    branchMetric_114_dist_0;
  wire       [2:0]    branchMetric_114_dist_1;
  wire       [15:0]   addCompareSelect_114_state_weight;
  wire                addCompareSelect_114_decision;
  wire       [2:0]    branchMetric_115_dist_0;
  wire       [2:0]    branchMetric_115_dist_1;
  wire       [15:0]   addCompareSelect_115_state_weight;
  wire                addCompareSelect_115_decision;
  wire       [2:0]    branchMetric_116_dist_0;
  wire       [2:0]    branchMetric_116_dist_1;
  wire       [15:0]   addCompareSelect_116_state_weight;
  wire                addCompareSelect_116_decision;
  wire       [2:0]    branchMetric_117_dist_0;
  wire       [2:0]    branchMetric_117_dist_1;
  wire       [15:0]   addCompareSelect_117_state_weight;
  wire                addCompareSelect_117_decision;
  wire       [2:0]    branchMetric_118_dist_0;
  wire       [2:0]    branchMetric_118_dist_1;
  wire       [15:0]   addCompareSelect_118_state_weight;
  wire                addCompareSelect_118_decision;
  wire       [2:0]    branchMetric_119_dist_0;
  wire       [2:0]    branchMetric_119_dist_1;
  wire       [15:0]   addCompareSelect_119_state_weight;
  wire                addCompareSelect_119_decision;
  wire       [2:0]    branchMetric_120_dist_0;
  wire       [2:0]    branchMetric_120_dist_1;
  wire       [15:0]   addCompareSelect_120_state_weight;
  wire                addCompareSelect_120_decision;
  wire       [2:0]    branchMetric_121_dist_0;
  wire       [2:0]    branchMetric_121_dist_1;
  wire       [15:0]   addCompareSelect_121_state_weight;
  wire                addCompareSelect_121_decision;
  wire       [2:0]    branchMetric_122_dist_0;
  wire       [2:0]    branchMetric_122_dist_1;
  wire       [15:0]   addCompareSelect_122_state_weight;
  wire                addCompareSelect_122_decision;
  wire       [2:0]    branchMetric_123_dist_0;
  wire       [2:0]    branchMetric_123_dist_1;
  wire       [15:0]   addCompareSelect_123_state_weight;
  wire                addCompareSelect_123_decision;
  wire       [2:0]    branchMetric_124_dist_0;
  wire       [2:0]    branchMetric_124_dist_1;
  wire       [15:0]   addCompareSelect_124_state_weight;
  wire                addCompareSelect_124_decision;
  wire       [2:0]    branchMetric_125_dist_0;
  wire       [2:0]    branchMetric_125_dist_1;
  wire       [15:0]   addCompareSelect_125_state_weight;
  wire                addCompareSelect_125_decision;
  wire       [2:0]    branchMetric_126_dist_0;
  wire       [2:0]    branchMetric_126_dist_1;
  wire       [15:0]   addCompareSelect_126_state_weight;
  wire                addCompareSelect_126_decision;
  wire       [2:0]    branchMetric_127_dist_0;
  wire       [2:0]    branchMetric_127_dist_1;
  wire       [15:0]   addCompareSelect_127_state_weight;
  wire                addCompareSelect_127_decision;
  wire       [15:0]   minVal_1_min_val;
  wire       [5:0]    minVal_1_min_idx;
  reg        [15:0]   node_weight_0;
  reg        [15:0]   node_weight_1;
  reg        [15:0]   node_weight_2;
  reg        [15:0]   node_weight_3;
  reg        [15:0]   node_weight_4;
  reg        [15:0]   node_weight_5;
  reg        [15:0]   node_weight_6;
  reg        [15:0]   node_weight_7;
  reg        [15:0]   node_weight_8;
  reg        [15:0]   node_weight_9;
  reg        [15:0]   node_weight_10;
  reg        [15:0]   node_weight_11;
  reg        [15:0]   node_weight_12;
  reg        [15:0]   node_weight_13;
  reg        [15:0]   node_weight_14;
  reg        [15:0]   node_weight_15;
  reg        [15:0]   node_weight_16;
  reg        [15:0]   node_weight_17;
  reg        [15:0]   node_weight_18;
  reg        [15:0]   node_weight_19;
  reg        [15:0]   node_weight_20;
  reg        [15:0]   node_weight_21;
  reg        [15:0]   node_weight_22;
  reg        [15:0]   node_weight_23;
  reg        [15:0]   node_weight_24;
  reg        [15:0]   node_weight_25;
  reg        [15:0]   node_weight_26;
  reg        [15:0]   node_weight_27;
  reg        [15:0]   node_weight_28;
  reg        [15:0]   node_weight_29;
  reg        [15:0]   node_weight_30;
  reg        [15:0]   node_weight_31;
  reg        [15:0]   node_weight_32;
  reg        [15:0]   node_weight_33;
  reg        [15:0]   node_weight_34;
  reg        [15:0]   node_weight_35;
  reg        [15:0]   node_weight_36;
  reg        [15:0]   node_weight_37;
  reg        [15:0]   node_weight_38;
  reg        [15:0]   node_weight_39;
  reg        [15:0]   node_weight_40;
  reg        [15:0]   node_weight_41;
  reg        [15:0]   node_weight_42;
  reg        [15:0]   node_weight_43;
  reg        [15:0]   node_weight_44;
  reg        [15:0]   node_weight_45;
  reg        [15:0]   node_weight_46;
  reg        [15:0]   node_weight_47;
  reg        [15:0]   node_weight_48;
  reg        [15:0]   node_weight_49;
  reg        [15:0]   node_weight_50;
  reg        [15:0]   node_weight_51;
  reg        [15:0]   node_weight_52;
  reg        [15:0]   node_weight_53;
  reg        [15:0]   node_weight_54;
  reg        [15:0]   node_weight_55;
  reg        [15:0]   node_weight_56;
  reg        [15:0]   node_weight_57;
  reg        [15:0]   node_weight_58;
  reg        [15:0]   node_weight_59;
  reg        [15:0]   node_weight_60;
  reg        [15:0]   node_weight_61;
  reg        [15:0]   node_weight_62;
  reg        [15:0]   node_weight_63;
  reg        [2:0]    candidate_branches_0;
  reg        [2:0]    candidate_branches_1;
  reg        [2:0]    candidate_branches_2;
  reg        [2:0]    candidate_branches_3;
  reg        [2:0]    candidate_branches_4;
  reg        [2:0]    candidate_branches_5;
  reg        [2:0]    candidate_branches_6;
  reg        [2:0]    candidate_branches_7;
  reg        [2:0]    candidate_branches_8;
  reg        [2:0]    candidate_branches_9;
  reg        [2:0]    candidate_branches_10;
  reg        [2:0]    candidate_branches_11;
  reg        [2:0]    candidate_branches_12;
  reg        [2:0]    candidate_branches_13;
  reg        [2:0]    candidate_branches_14;
  reg        [2:0]    candidate_branches_15;
  reg        [2:0]    candidate_branches_16;
  reg        [2:0]    candidate_branches_17;
  reg        [2:0]    candidate_branches_18;
  reg        [2:0]    candidate_branches_19;
  reg        [2:0]    candidate_branches_20;
  reg        [2:0]    candidate_branches_21;
  reg        [2:0]    candidate_branches_22;
  reg        [2:0]    candidate_branches_23;
  reg        [2:0]    candidate_branches_24;
  reg        [2:0]    candidate_branches_25;
  reg        [2:0]    candidate_branches_26;
  reg        [2:0]    candidate_branches_27;
  reg        [2:0]    candidate_branches_28;
  reg        [2:0]    candidate_branches_29;
  reg        [2:0]    candidate_branches_30;
  reg        [2:0]    candidate_branches_31;
  reg        [2:0]    candidate_branches_32;
  reg        [2:0]    candidate_branches_33;
  reg        [2:0]    candidate_branches_34;
  reg        [2:0]    candidate_branches_35;
  reg        [2:0]    candidate_branches_36;
  reg        [2:0]    candidate_branches_37;
  reg        [2:0]    candidate_branches_38;
  reg        [2:0]    candidate_branches_39;
  reg        [2:0]    candidate_branches_40;
  reg        [2:0]    candidate_branches_41;
  reg        [2:0]    candidate_branches_42;
  reg        [2:0]    candidate_branches_43;
  reg        [2:0]    candidate_branches_44;
  reg        [2:0]    candidate_branches_45;
  reg        [2:0]    candidate_branches_46;
  reg        [2:0]    candidate_branches_47;
  reg        [2:0]    candidate_branches_48;
  reg        [2:0]    candidate_branches_49;
  reg        [2:0]    candidate_branches_50;
  reg        [2:0]    candidate_branches_51;
  reg        [2:0]    candidate_branches_52;
  reg        [2:0]    candidate_branches_53;
  reg        [2:0]    candidate_branches_54;
  reg        [2:0]    candidate_branches_55;
  reg        [2:0]    candidate_branches_56;
  reg        [2:0]    candidate_branches_57;
  reg        [2:0]    candidate_branches_58;
  reg        [2:0]    candidate_branches_59;
  reg        [2:0]    candidate_branches_60;
  reg        [2:0]    candidate_branches_61;
  reg        [2:0]    candidate_branches_62;
  reg        [2:0]    candidate_branches_63;
  reg        [2:0]    candidate_branches_64;
  reg        [2:0]    candidate_branches_65;
  reg        [2:0]    candidate_branches_66;
  reg        [2:0]    candidate_branches_67;
  reg        [2:0]    candidate_branches_68;
  reg        [2:0]    candidate_branches_69;
  reg        [2:0]    candidate_branches_70;
  reg        [2:0]    candidate_branches_71;
  reg        [2:0]    candidate_branches_72;
  reg        [2:0]    candidate_branches_73;
  reg        [2:0]    candidate_branches_74;
  reg        [2:0]    candidate_branches_75;
  reg        [2:0]    candidate_branches_76;
  reg        [2:0]    candidate_branches_77;
  reg        [2:0]    candidate_branches_78;
  reg        [2:0]    candidate_branches_79;
  reg        [2:0]    candidate_branches_80;
  reg        [2:0]    candidate_branches_81;
  reg        [2:0]    candidate_branches_82;
  reg        [2:0]    candidate_branches_83;
  reg        [2:0]    candidate_branches_84;
  reg        [2:0]    candidate_branches_85;
  reg        [2:0]    candidate_branches_86;
  reg        [2:0]    candidate_branches_87;
  reg        [2:0]    candidate_branches_88;
  reg        [2:0]    candidate_branches_89;
  reg        [2:0]    candidate_branches_90;
  reg        [2:0]    candidate_branches_91;
  reg        [2:0]    candidate_branches_92;
  reg        [2:0]    candidate_branches_93;
  reg        [2:0]    candidate_branches_94;
  reg        [2:0]    candidate_branches_95;
  reg        [2:0]    candidate_branches_96;
  reg        [2:0]    candidate_branches_97;
  reg        [2:0]    candidate_branches_98;
  reg        [2:0]    candidate_branches_99;
  reg        [2:0]    candidate_branches_100;
  reg        [2:0]    candidate_branches_101;
  reg        [2:0]    candidate_branches_102;
  reg        [2:0]    candidate_branches_103;
  reg        [2:0]    candidate_branches_104;
  reg        [2:0]    candidate_branches_105;
  reg        [2:0]    candidate_branches_106;
  reg        [2:0]    candidate_branches_107;
  reg        [2:0]    candidate_branches_108;
  reg        [2:0]    candidate_branches_109;
  reg        [2:0]    candidate_branches_110;
  reg        [2:0]    candidate_branches_111;
  reg        [2:0]    candidate_branches_112;
  reg        [2:0]    candidate_branches_113;
  reg        [2:0]    candidate_branches_114;
  reg        [2:0]    candidate_branches_115;
  reg        [2:0]    candidate_branches_116;
  reg        [2:0]    candidate_branches_117;
  reg        [2:0]    candidate_branches_118;
  reg        [2:0]    candidate_branches_119;
  reg        [2:0]    candidate_branches_120;
  reg        [2:0]    candidate_branches_121;
  reg        [2:0]    candidate_branches_122;
  reg        [2:0]    candidate_branches_123;
  reg        [2:0]    candidate_branches_124;
  reg        [2:0]    candidate_branches_125;
  reg        [2:0]    candidate_branches_126;
  reg        [2:0]    candidate_branches_127;
  reg        [63:0]   survival_path;
  reg                 raw_data_next;
  reg                 raw_data_last_next;
  reg                 survival_path_valid;
  reg                 survival_path_last;
  reg                 raw_data_ready_1;
  wire                when_PathMetric_l29;

  BranchMetric branchMetric_64 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_64_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_64_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_64 (
    .last_state_weight_0    (node_weight_0[15:0]                     ), //i
    .last_state_weight_1    (node_weight_1[15:0]                     ), //i
    .dist_0                 (addCompareSelect_64_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_64_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_64_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_64_decision            )  //o
  );
  BranchMetric branchMetric_65 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_65_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_65_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_65 (
    .last_state_weight_0    (node_weight_2[15:0]                     ), //i
    .last_state_weight_1    (node_weight_3[15:0]                     ), //i
    .dist_0                 (addCompareSelect_65_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_65_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_65_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_65_decision            )  //o
  );
  BranchMetric branchMetric_66 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_66_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_66_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_66 (
    .last_state_weight_0    (node_weight_4[15:0]                     ), //i
    .last_state_weight_1    (node_weight_5[15:0]                     ), //i
    .dist_0                 (addCompareSelect_66_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_66_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_66_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_66_decision            )  //o
  );
  BranchMetric branchMetric_67 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_67_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_67_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_67 (
    .last_state_weight_0    (node_weight_6[15:0]                     ), //i
    .last_state_weight_1    (node_weight_7[15:0]                     ), //i
    .dist_0                 (addCompareSelect_67_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_67_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_67_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_67_decision            )  //o
  );
  BranchMetric branchMetric_68 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_68_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_68_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_68 (
    .last_state_weight_0    (node_weight_8[15:0]                     ), //i
    .last_state_weight_1    (node_weight_9[15:0]                     ), //i
    .dist_0                 (addCompareSelect_68_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_68_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_68_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_68_decision            )  //o
  );
  BranchMetric branchMetric_69 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_69_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_69_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_69 (
    .last_state_weight_0    (node_weight_10[15:0]                    ), //i
    .last_state_weight_1    (node_weight_11[15:0]                    ), //i
    .dist_0                 (addCompareSelect_69_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_69_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_69_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_69_decision            )  //o
  );
  BranchMetric branchMetric_70 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_70_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_70_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_70 (
    .last_state_weight_0    (node_weight_12[15:0]                    ), //i
    .last_state_weight_1    (node_weight_13[15:0]                    ), //i
    .dist_0                 (addCompareSelect_70_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_70_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_70_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_70_decision            )  //o
  );
  BranchMetric branchMetric_71 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_71_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_71_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_71 (
    .last_state_weight_0    (node_weight_14[15:0]                    ), //i
    .last_state_weight_1    (node_weight_15[15:0]                    ), //i
    .dist_0                 (addCompareSelect_71_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_71_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_71_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_71_decision            )  //o
  );
  BranchMetric branchMetric_72 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_72_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_72_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_72 (
    .last_state_weight_0    (node_weight_16[15:0]                    ), //i
    .last_state_weight_1    (node_weight_17[15:0]                    ), //i
    .dist_0                 (addCompareSelect_72_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_72_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_72_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_72_decision            )  //o
  );
  BranchMetric branchMetric_73 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_73_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_73_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_73 (
    .last_state_weight_0    (node_weight_18[15:0]                    ), //i
    .last_state_weight_1    (node_weight_19[15:0]                    ), //i
    .dist_0                 (addCompareSelect_73_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_73_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_73_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_73_decision            )  //o
  );
  BranchMetric branchMetric_74 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_74_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_74_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_74 (
    .last_state_weight_0    (node_weight_20[15:0]                    ), //i
    .last_state_weight_1    (node_weight_21[15:0]                    ), //i
    .dist_0                 (addCompareSelect_74_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_74_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_74_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_74_decision            )  //o
  );
  BranchMetric branchMetric_75 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_75_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_75_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_75 (
    .last_state_weight_0    (node_weight_22[15:0]                    ), //i
    .last_state_weight_1    (node_weight_23[15:0]                    ), //i
    .dist_0                 (addCompareSelect_75_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_75_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_75_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_75_decision            )  //o
  );
  BranchMetric branchMetric_76 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_76_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_76_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_76 (
    .last_state_weight_0    (node_weight_24[15:0]                    ), //i
    .last_state_weight_1    (node_weight_25[15:0]                    ), //i
    .dist_0                 (addCompareSelect_76_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_76_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_76_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_76_decision            )  //o
  );
  BranchMetric branchMetric_77 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_77_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_77_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_77 (
    .last_state_weight_0    (node_weight_26[15:0]                    ), //i
    .last_state_weight_1    (node_weight_27[15:0]                    ), //i
    .dist_0                 (addCompareSelect_77_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_77_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_77_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_77_decision            )  //o
  );
  BranchMetric branchMetric_78 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_78_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_78_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_78 (
    .last_state_weight_0    (node_weight_28[15:0]                    ), //i
    .last_state_weight_1    (node_weight_29[15:0]                    ), //i
    .dist_0                 (addCompareSelect_78_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_78_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_78_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_78_decision            )  //o
  );
  BranchMetric branchMetric_79 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_79_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_79_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_79 (
    .last_state_weight_0    (node_weight_30[15:0]                    ), //i
    .last_state_weight_1    (node_weight_31[15:0]                    ), //i
    .dist_0                 (addCompareSelect_79_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_79_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_79_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_79_decision            )  //o
  );
  BranchMetric branchMetric_80 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_80_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_80_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_80 (
    .last_state_weight_0    (node_weight_32[15:0]                    ), //i
    .last_state_weight_1    (node_weight_33[15:0]                    ), //i
    .dist_0                 (addCompareSelect_80_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_80_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_80_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_80_decision            )  //o
  );
  BranchMetric branchMetric_81 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_81_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_81_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_81 (
    .last_state_weight_0    (node_weight_34[15:0]                    ), //i
    .last_state_weight_1    (node_weight_35[15:0]                    ), //i
    .dist_0                 (addCompareSelect_81_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_81_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_81_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_81_decision            )  //o
  );
  BranchMetric branchMetric_82 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_82_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_82_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_82 (
    .last_state_weight_0    (node_weight_36[15:0]                    ), //i
    .last_state_weight_1    (node_weight_37[15:0]                    ), //i
    .dist_0                 (addCompareSelect_82_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_82_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_82_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_82_decision            )  //o
  );
  BranchMetric branchMetric_83 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_83_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_83_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_83 (
    .last_state_weight_0    (node_weight_38[15:0]                    ), //i
    .last_state_weight_1    (node_weight_39[15:0]                    ), //i
    .dist_0                 (addCompareSelect_83_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_83_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_83_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_83_decision            )  //o
  );
  BranchMetric branchMetric_84 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_84_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_84_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_84 (
    .last_state_weight_0    (node_weight_40[15:0]                    ), //i
    .last_state_weight_1    (node_weight_41[15:0]                    ), //i
    .dist_0                 (addCompareSelect_84_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_84_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_84_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_84_decision            )  //o
  );
  BranchMetric branchMetric_85 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_85_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_85_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_85 (
    .last_state_weight_0    (node_weight_42[15:0]                    ), //i
    .last_state_weight_1    (node_weight_43[15:0]                    ), //i
    .dist_0                 (addCompareSelect_85_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_85_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_85_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_85_decision            )  //o
  );
  BranchMetric branchMetric_86 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_86_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_86_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_86 (
    .last_state_weight_0    (node_weight_44[15:0]                    ), //i
    .last_state_weight_1    (node_weight_45[15:0]                    ), //i
    .dist_0                 (addCompareSelect_86_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_86_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_86_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_86_decision            )  //o
  );
  BranchMetric branchMetric_87 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_87_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_87_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_87 (
    .last_state_weight_0    (node_weight_46[15:0]                    ), //i
    .last_state_weight_1    (node_weight_47[15:0]                    ), //i
    .dist_0                 (addCompareSelect_87_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_87_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_87_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_87_decision            )  //o
  );
  BranchMetric branchMetric_88 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_88_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_88_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_88 (
    .last_state_weight_0    (node_weight_48[15:0]                    ), //i
    .last_state_weight_1    (node_weight_49[15:0]                    ), //i
    .dist_0                 (addCompareSelect_88_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_88_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_88_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_88_decision            )  //o
  );
  BranchMetric branchMetric_89 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_89_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_89_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_89 (
    .last_state_weight_0    (node_weight_50[15:0]                    ), //i
    .last_state_weight_1    (node_weight_51[15:0]                    ), //i
    .dist_0                 (addCompareSelect_89_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_89_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_89_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_89_decision            )  //o
  );
  BranchMetric branchMetric_90 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_90_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_90_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_90 (
    .last_state_weight_0    (node_weight_52[15:0]                    ), //i
    .last_state_weight_1    (node_weight_53[15:0]                    ), //i
    .dist_0                 (addCompareSelect_90_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_90_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_90_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_90_decision            )  //o
  );
  BranchMetric branchMetric_91 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_91_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_91_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_91 (
    .last_state_weight_0    (node_weight_54[15:0]                    ), //i
    .last_state_weight_1    (node_weight_55[15:0]                    ), //i
    .dist_0                 (addCompareSelect_91_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_91_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_91_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_91_decision            )  //o
  );
  BranchMetric branchMetric_92 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_92_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_92_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_92 (
    .last_state_weight_0    (node_weight_56[15:0]                    ), //i
    .last_state_weight_1    (node_weight_57[15:0]                    ), //i
    .dist_0                 (addCompareSelect_92_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_92_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_92_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_92_decision            )  //o
  );
  BranchMetric branchMetric_93 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_93_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_93_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_93 (
    .last_state_weight_0    (node_weight_58[15:0]                    ), //i
    .last_state_weight_1    (node_weight_59[15:0]                    ), //i
    .dist_0                 (addCompareSelect_93_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_93_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_93_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_93_decision            )  //o
  );
  BranchMetric branchMetric_94 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_94_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_94_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_94 (
    .last_state_weight_0    (node_weight_60[15:0]                    ), //i
    .last_state_weight_1    (node_weight_61[15:0]                    ), //i
    .dist_0                 (addCompareSelect_94_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_94_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_94_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_94_decision            )  //o
  );
  BranchMetric branchMetric_95 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_95_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_95_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_95 (
    .last_state_weight_0    (node_weight_62[15:0]                    ), //i
    .last_state_weight_1    (node_weight_63[15:0]                    ), //i
    .dist_0                 (addCompareSelect_95_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_95_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_95_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_95_decision            )  //o
  );
  BranchMetric branchMetric_96 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_96_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_96_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_96 (
    .last_state_weight_0    (node_weight_0[15:0]                     ), //i
    .last_state_weight_1    (node_weight_1[15:0]                     ), //i
    .dist_0                 (addCompareSelect_96_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_96_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_96_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_96_decision            )  //o
  );
  BranchMetric branchMetric_97 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_97_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_97_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_97 (
    .last_state_weight_0    (node_weight_2[15:0]                     ), //i
    .last_state_weight_1    (node_weight_3[15:0]                     ), //i
    .dist_0                 (addCompareSelect_97_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_97_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_97_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_97_decision            )  //o
  );
  BranchMetric branchMetric_98 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_98_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_98_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_98 (
    .last_state_weight_0    (node_weight_4[15:0]                     ), //i
    .last_state_weight_1    (node_weight_5[15:0]                     ), //i
    .dist_0                 (addCompareSelect_98_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_98_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_98_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_98_decision            )  //o
  );
  BranchMetric branchMetric_99 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_99_dist_0[2:0]              ), //o
    .dist_1               (branchMetric_99_dist_1[2:0]              )  //o
  );
  AddCompareSelect addCompareSelect_99 (
    .last_state_weight_0    (node_weight_6[15:0]                     ), //i
    .last_state_weight_1    (node_weight_7[15:0]                     ), //i
    .dist_0                 (addCompareSelect_99_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_99_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_99_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_99_decision            )  //o
  );
  BranchMetric branchMetric_100 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_100_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_100_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_100 (
    .last_state_weight_0    (node_weight_8[15:0]                      ), //i
    .last_state_weight_1    (node_weight_9[15:0]                      ), //i
    .dist_0                 (addCompareSelect_100_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_100_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_100_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_100_decision            )  //o
  );
  BranchMetric branchMetric_101 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_101_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_101_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_101 (
    .last_state_weight_0    (node_weight_10[15:0]                     ), //i
    .last_state_weight_1    (node_weight_11[15:0]                     ), //i
    .dist_0                 (addCompareSelect_101_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_101_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_101_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_101_decision            )  //o
  );
  BranchMetric branchMetric_102 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_102_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_102_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_102 (
    .last_state_weight_0    (node_weight_12[15:0]                     ), //i
    .last_state_weight_1    (node_weight_13[15:0]                     ), //i
    .dist_0                 (addCompareSelect_102_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_102_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_102_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_102_decision            )  //o
  );
  BranchMetric branchMetric_103 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_103_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_103_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_103 (
    .last_state_weight_0    (node_weight_14[15:0]                     ), //i
    .last_state_weight_1    (node_weight_15[15:0]                     ), //i
    .dist_0                 (addCompareSelect_103_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_103_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_103_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_103_decision            )  //o
  );
  BranchMetric branchMetric_104 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_104_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_104_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_104 (
    .last_state_weight_0    (node_weight_16[15:0]                     ), //i
    .last_state_weight_1    (node_weight_17[15:0]                     ), //i
    .dist_0                 (addCompareSelect_104_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_104_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_104_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_104_decision            )  //o
  );
  BranchMetric branchMetric_105 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_105_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_105_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_105 (
    .last_state_weight_0    (node_weight_18[15:0]                     ), //i
    .last_state_weight_1    (node_weight_19[15:0]                     ), //i
    .dist_0                 (addCompareSelect_105_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_105_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_105_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_105_decision            )  //o
  );
  BranchMetric branchMetric_106 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_106_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_106_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_106 (
    .last_state_weight_0    (node_weight_20[15:0]                     ), //i
    .last_state_weight_1    (node_weight_21[15:0]                     ), //i
    .dist_0                 (addCompareSelect_106_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_106_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_106_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_106_decision            )  //o
  );
  BranchMetric branchMetric_107 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_107_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_107_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_107 (
    .last_state_weight_0    (node_weight_22[15:0]                     ), //i
    .last_state_weight_1    (node_weight_23[15:0]                     ), //i
    .dist_0                 (addCompareSelect_107_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_107_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_107_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_107_decision            )  //o
  );
  BranchMetric branchMetric_108 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_108_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_108_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_108 (
    .last_state_weight_0    (node_weight_24[15:0]                     ), //i
    .last_state_weight_1    (node_weight_25[15:0]                     ), //i
    .dist_0                 (addCompareSelect_108_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_108_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_108_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_108_decision            )  //o
  );
  BranchMetric branchMetric_109 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_109_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_109_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_109 (
    .last_state_weight_0    (node_weight_26[15:0]                     ), //i
    .last_state_weight_1    (node_weight_27[15:0]                     ), //i
    .dist_0                 (addCompareSelect_109_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_109_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_109_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_109_decision            )  //o
  );
  BranchMetric branchMetric_110 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_110_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_110_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_110 (
    .last_state_weight_0    (node_weight_28[15:0]                     ), //i
    .last_state_weight_1    (node_weight_29[15:0]                     ), //i
    .dist_0                 (addCompareSelect_110_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_110_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_110_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_110_decision            )  //o
  );
  BranchMetric branchMetric_111 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_111_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_111_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_111 (
    .last_state_weight_0    (node_weight_30[15:0]                     ), //i
    .last_state_weight_1    (node_weight_31[15:0]                     ), //i
    .dist_0                 (addCompareSelect_111_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_111_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_111_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_111_decision            )  //o
  );
  BranchMetric branchMetric_112 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_112_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_112_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_112 (
    .last_state_weight_0    (node_weight_32[15:0]                     ), //i
    .last_state_weight_1    (node_weight_33[15:0]                     ), //i
    .dist_0                 (addCompareSelect_112_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_112_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_112_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_112_decision            )  //o
  );
  BranchMetric branchMetric_113 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_113_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_113_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_113 (
    .last_state_weight_0    (node_weight_34[15:0]                     ), //i
    .last_state_weight_1    (node_weight_35[15:0]                     ), //i
    .dist_0                 (addCompareSelect_113_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_113_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_113_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_113_decision            )  //o
  );
  BranchMetric branchMetric_114 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_114_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_114_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_114 (
    .last_state_weight_0    (node_weight_36[15:0]                     ), //i
    .last_state_weight_1    (node_weight_37[15:0]                     ), //i
    .dist_0                 (addCompareSelect_114_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_114_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_114_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_114_decision            )  //o
  );
  BranchMetric branchMetric_115 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_115_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_115_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_115 (
    .last_state_weight_0    (node_weight_38[15:0]                     ), //i
    .last_state_weight_1    (node_weight_39[15:0]                     ), //i
    .dist_0                 (addCompareSelect_115_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_115_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_115_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_115_decision            )  //o
  );
  BranchMetric branchMetric_116 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_116_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_116_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_116 (
    .last_state_weight_0    (node_weight_40[15:0]                     ), //i
    .last_state_weight_1    (node_weight_41[15:0]                     ), //i
    .dist_0                 (addCompareSelect_116_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_116_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_116_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_116_decision            )  //o
  );
  BranchMetric branchMetric_117 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_117_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_117_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_117 (
    .last_state_weight_0    (node_weight_42[15:0]                     ), //i
    .last_state_weight_1    (node_weight_43[15:0]                     ), //i
    .dist_0                 (addCompareSelect_117_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_117_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_117_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_117_decision            )  //o
  );
  BranchMetric branchMetric_118 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_118_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_118_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_118 (
    .last_state_weight_0    (node_weight_44[15:0]                     ), //i
    .last_state_weight_1    (node_weight_45[15:0]                     ), //i
    .dist_0                 (addCompareSelect_118_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_118_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_118_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_118_decision            )  //o
  );
  BranchMetric branchMetric_119 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_119_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_119_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_119 (
    .last_state_weight_0    (node_weight_46[15:0]                     ), //i
    .last_state_weight_1    (node_weight_47[15:0]                     ), //i
    .dist_0                 (addCompareSelect_119_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_119_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_119_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_119_decision            )  //o
  );
  BranchMetric branchMetric_120 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_120_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_120_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_120 (
    .last_state_weight_0    (node_weight_48[15:0]                     ), //i
    .last_state_weight_1    (node_weight_49[15:0]                     ), //i
    .dist_0                 (addCompareSelect_120_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_120_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_120_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_120_decision            )  //o
  );
  BranchMetric branchMetric_121 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_121_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_121_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_121 (
    .last_state_weight_0    (node_weight_50[15:0]                     ), //i
    .last_state_weight_1    (node_weight_51[15:0]                     ), //i
    .dist_0                 (addCompareSelect_121_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_121_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_121_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_121_decision            )  //o
  );
  BranchMetric branchMetric_122 (
    .trellis_unit_0       (2'b01                                    ), //i
    .trellis_unit_1       (2'b10                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_122_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_122_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_122 (
    .last_state_weight_0    (node_weight_52[15:0]                     ), //i
    .last_state_weight_1    (node_weight_53[15:0]                     ), //i
    .dist_0                 (addCompareSelect_122_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_122_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_122_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_122_decision            )  //o
  );
  BranchMetric branchMetric_123 (
    .trellis_unit_0       (2'b11                                    ), //i
    .trellis_unit_1       (2'b00                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_123_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_123_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_123 (
    .last_state_weight_0    (node_weight_54[15:0]                     ), //i
    .last_state_weight_1    (node_weight_55[15:0]                     ), //i
    .dist_0                 (addCompareSelect_123_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_123_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_123_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_123_decision            )  //o
  );
  BranchMetric branchMetric_124 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_124_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_124_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_124 (
    .last_state_weight_0    (node_weight_56[15:0]                     ), //i
    .last_state_weight_1    (node_weight_57[15:0]                     ), //i
    .dist_0                 (addCompareSelect_124_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_124_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_124_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_124_decision            )  //o
  );
  BranchMetric branchMetric_125 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_125_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_125_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_125 (
    .last_state_weight_0    (node_weight_58[15:0]                     ), //i
    .last_state_weight_1    (node_weight_59[15:0]                     ), //i
    .dist_0                 (addCompareSelect_125_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_125_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_125_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_125_decision            )  //o
  );
  BranchMetric branchMetric_126 (
    .trellis_unit_0       (2'b10                                    ), //i
    .trellis_unit_1       (2'b01                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_126_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_126_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_126 (
    .last_state_weight_0    (node_weight_60[15:0]                     ), //i
    .last_state_weight_1    (node_weight_61[15:0]                     ), //i
    .dist_0                 (addCompareSelect_126_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_126_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_126_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_126_decision            )  //o
  );
  BranchMetric branchMetric_127 (
    .trellis_unit_0       (2'b00                                    ), //i
    .trellis_unit_1       (2'b11                                    ), //i
    .raw_data_data        (raw_data_payload_fragment_data[1:0]      ), //i
    .raw_data_indicate    (raw_data_payload_fragment_indicate[1:0]  ), //i
    .dist_0               (branchMetric_127_dist_0[2:0]             ), //o
    .dist_1               (branchMetric_127_dist_1[2:0]             )  //o
  );
  AddCompareSelect addCompareSelect_127 (
    .last_state_weight_0    (node_weight_62[15:0]                     ), //i
    .last_state_weight_1    (node_weight_63[15:0]                     ), //i
    .dist_0                 (addCompareSelect_127_dist_0[15:0]        ), //i
    .dist_1                 (addCompareSelect_127_dist_1[15:0]        ), //i
    .state_weight           (addCompareSelect_127_state_weight[15:0]  ), //o
    .decision               (addCompareSelect_127_decision            )  //o
  );
  MinVal minVal_1 (
    .data_0     (node_weight_0[15:0]     ), //i
    .data_1     (node_weight_1[15:0]     ), //i
    .data_2     (node_weight_2[15:0]     ), //i
    .data_3     (node_weight_3[15:0]     ), //i
    .data_4     (node_weight_4[15:0]     ), //i
    .data_5     (node_weight_5[15:0]     ), //i
    .data_6     (node_weight_6[15:0]     ), //i
    .data_7     (node_weight_7[15:0]     ), //i
    .data_8     (node_weight_8[15:0]     ), //i
    .data_9     (node_weight_9[15:0]     ), //i
    .data_10    (node_weight_10[15:0]    ), //i
    .data_11    (node_weight_11[15:0]    ), //i
    .data_12    (node_weight_12[15:0]    ), //i
    .data_13    (node_weight_13[15:0]    ), //i
    .data_14    (node_weight_14[15:0]    ), //i
    .data_15    (node_weight_15[15:0]    ), //i
    .data_16    (node_weight_16[15:0]    ), //i
    .data_17    (node_weight_17[15:0]    ), //i
    .data_18    (node_weight_18[15:0]    ), //i
    .data_19    (node_weight_19[15:0]    ), //i
    .data_20    (node_weight_20[15:0]    ), //i
    .data_21    (node_weight_21[15:0]    ), //i
    .data_22    (node_weight_22[15:0]    ), //i
    .data_23    (node_weight_23[15:0]    ), //i
    .data_24    (node_weight_24[15:0]    ), //i
    .data_25    (node_weight_25[15:0]    ), //i
    .data_26    (node_weight_26[15:0]    ), //i
    .data_27    (node_weight_27[15:0]    ), //i
    .data_28    (node_weight_28[15:0]    ), //i
    .data_29    (node_weight_29[15:0]    ), //i
    .data_30    (node_weight_30[15:0]    ), //i
    .data_31    (node_weight_31[15:0]    ), //i
    .data_32    (node_weight_32[15:0]    ), //i
    .data_33    (node_weight_33[15:0]    ), //i
    .data_34    (node_weight_34[15:0]    ), //i
    .data_35    (node_weight_35[15:0]    ), //i
    .data_36    (node_weight_36[15:0]    ), //i
    .data_37    (node_weight_37[15:0]    ), //i
    .data_38    (node_weight_38[15:0]    ), //i
    .data_39    (node_weight_39[15:0]    ), //i
    .data_40    (node_weight_40[15:0]    ), //i
    .data_41    (node_weight_41[15:0]    ), //i
    .data_42    (node_weight_42[15:0]    ), //i
    .data_43    (node_weight_43[15:0]    ), //i
    .data_44    (node_weight_44[15:0]    ), //i
    .data_45    (node_weight_45[15:0]    ), //i
    .data_46    (node_weight_46[15:0]    ), //i
    .data_47    (node_weight_47[15:0]    ), //i
    .data_48    (node_weight_48[15:0]    ), //i
    .data_49    (node_weight_49[15:0]    ), //i
    .data_50    (node_weight_50[15:0]    ), //i
    .data_51    (node_weight_51[15:0]    ), //i
    .data_52    (node_weight_52[15:0]    ), //i
    .data_53    (node_weight_53[15:0]    ), //i
    .data_54    (node_weight_54[15:0]    ), //i
    .data_55    (node_weight_55[15:0]    ), //i
    .data_56    (node_weight_56[15:0]    ), //i
    .data_57    (node_weight_57[15:0]    ), //i
    .data_58    (node_weight_58[15:0]    ), //i
    .data_59    (node_weight_59[15:0]    ), //i
    .data_60    (node_weight_60[15:0]    ), //i
    .data_61    (node_weight_61[15:0]    ), //i
    .data_62    (node_weight_62[15:0]    ), //i
    .data_63    (node_weight_63[15:0]    ), //i
    .min_val    (minVal_1_min_val[15:0]  ), //o
    .min_idx    (minVal_1_min_idx[5:0]   ), //o
    .clk        (clk                     ), //i
    .reset      (reset                   )  //i
  );
  assign when_PathMetric_l29 = (raw_data_payload_last && raw_data_valid);
  assign addCompareSelect_64_dist_0 = {13'd0, candidate_branches_0};
  assign addCompareSelect_64_dist_1 = {13'd0, candidate_branches_1};
  assign addCompareSelect_65_dist_0 = {13'd0, candidate_branches_2};
  assign addCompareSelect_65_dist_1 = {13'd0, candidate_branches_3};
  assign addCompareSelect_66_dist_0 = {13'd0, candidate_branches_4};
  assign addCompareSelect_66_dist_1 = {13'd0, candidate_branches_5};
  assign addCompareSelect_67_dist_0 = {13'd0, candidate_branches_6};
  assign addCompareSelect_67_dist_1 = {13'd0, candidate_branches_7};
  assign addCompareSelect_68_dist_0 = {13'd0, candidate_branches_8};
  assign addCompareSelect_68_dist_1 = {13'd0, candidate_branches_9};
  assign addCompareSelect_69_dist_0 = {13'd0, candidate_branches_10};
  assign addCompareSelect_69_dist_1 = {13'd0, candidate_branches_11};
  assign addCompareSelect_70_dist_0 = {13'd0, candidate_branches_12};
  assign addCompareSelect_70_dist_1 = {13'd0, candidate_branches_13};
  assign addCompareSelect_71_dist_0 = {13'd0, candidate_branches_14};
  assign addCompareSelect_71_dist_1 = {13'd0, candidate_branches_15};
  assign addCompareSelect_72_dist_0 = {13'd0, candidate_branches_16};
  assign addCompareSelect_72_dist_1 = {13'd0, candidate_branches_17};
  assign addCompareSelect_73_dist_0 = {13'd0, candidate_branches_18};
  assign addCompareSelect_73_dist_1 = {13'd0, candidate_branches_19};
  assign addCompareSelect_74_dist_0 = {13'd0, candidate_branches_20};
  assign addCompareSelect_74_dist_1 = {13'd0, candidate_branches_21};
  assign addCompareSelect_75_dist_0 = {13'd0, candidate_branches_22};
  assign addCompareSelect_75_dist_1 = {13'd0, candidate_branches_23};
  assign addCompareSelect_76_dist_0 = {13'd0, candidate_branches_24};
  assign addCompareSelect_76_dist_1 = {13'd0, candidate_branches_25};
  assign addCompareSelect_77_dist_0 = {13'd0, candidate_branches_26};
  assign addCompareSelect_77_dist_1 = {13'd0, candidate_branches_27};
  assign addCompareSelect_78_dist_0 = {13'd0, candidate_branches_28};
  assign addCompareSelect_78_dist_1 = {13'd0, candidate_branches_29};
  assign addCompareSelect_79_dist_0 = {13'd0, candidate_branches_30};
  assign addCompareSelect_79_dist_1 = {13'd0, candidate_branches_31};
  assign addCompareSelect_80_dist_0 = {13'd0, candidate_branches_32};
  assign addCompareSelect_80_dist_1 = {13'd0, candidate_branches_33};
  assign addCompareSelect_81_dist_0 = {13'd0, candidate_branches_34};
  assign addCompareSelect_81_dist_1 = {13'd0, candidate_branches_35};
  assign addCompareSelect_82_dist_0 = {13'd0, candidate_branches_36};
  assign addCompareSelect_82_dist_1 = {13'd0, candidate_branches_37};
  assign addCompareSelect_83_dist_0 = {13'd0, candidate_branches_38};
  assign addCompareSelect_83_dist_1 = {13'd0, candidate_branches_39};
  assign addCompareSelect_84_dist_0 = {13'd0, candidate_branches_40};
  assign addCompareSelect_84_dist_1 = {13'd0, candidate_branches_41};
  assign addCompareSelect_85_dist_0 = {13'd0, candidate_branches_42};
  assign addCompareSelect_85_dist_1 = {13'd0, candidate_branches_43};
  assign addCompareSelect_86_dist_0 = {13'd0, candidate_branches_44};
  assign addCompareSelect_86_dist_1 = {13'd0, candidate_branches_45};
  assign addCompareSelect_87_dist_0 = {13'd0, candidate_branches_46};
  assign addCompareSelect_87_dist_1 = {13'd0, candidate_branches_47};
  assign addCompareSelect_88_dist_0 = {13'd0, candidate_branches_48};
  assign addCompareSelect_88_dist_1 = {13'd0, candidate_branches_49};
  assign addCompareSelect_89_dist_0 = {13'd0, candidate_branches_50};
  assign addCompareSelect_89_dist_1 = {13'd0, candidate_branches_51};
  assign addCompareSelect_90_dist_0 = {13'd0, candidate_branches_52};
  assign addCompareSelect_90_dist_1 = {13'd0, candidate_branches_53};
  assign addCompareSelect_91_dist_0 = {13'd0, candidate_branches_54};
  assign addCompareSelect_91_dist_1 = {13'd0, candidate_branches_55};
  assign addCompareSelect_92_dist_0 = {13'd0, candidate_branches_56};
  assign addCompareSelect_92_dist_1 = {13'd0, candidate_branches_57};
  assign addCompareSelect_93_dist_0 = {13'd0, candidate_branches_58};
  assign addCompareSelect_93_dist_1 = {13'd0, candidate_branches_59};
  assign addCompareSelect_94_dist_0 = {13'd0, candidate_branches_60};
  assign addCompareSelect_94_dist_1 = {13'd0, candidate_branches_61};
  assign addCompareSelect_95_dist_0 = {13'd0, candidate_branches_62};
  assign addCompareSelect_95_dist_1 = {13'd0, candidate_branches_63};
  assign addCompareSelect_96_dist_0 = {13'd0, candidate_branches_64};
  assign addCompareSelect_96_dist_1 = {13'd0, candidate_branches_65};
  assign addCompareSelect_97_dist_0 = {13'd0, candidate_branches_66};
  assign addCompareSelect_97_dist_1 = {13'd0, candidate_branches_67};
  assign addCompareSelect_98_dist_0 = {13'd0, candidate_branches_68};
  assign addCompareSelect_98_dist_1 = {13'd0, candidate_branches_69};
  assign addCompareSelect_99_dist_0 = {13'd0, candidate_branches_70};
  assign addCompareSelect_99_dist_1 = {13'd0, candidate_branches_71};
  assign addCompareSelect_100_dist_0 = {13'd0, candidate_branches_72};
  assign addCompareSelect_100_dist_1 = {13'd0, candidate_branches_73};
  assign addCompareSelect_101_dist_0 = {13'd0, candidate_branches_74};
  assign addCompareSelect_101_dist_1 = {13'd0, candidate_branches_75};
  assign addCompareSelect_102_dist_0 = {13'd0, candidate_branches_76};
  assign addCompareSelect_102_dist_1 = {13'd0, candidate_branches_77};
  assign addCompareSelect_103_dist_0 = {13'd0, candidate_branches_78};
  assign addCompareSelect_103_dist_1 = {13'd0, candidate_branches_79};
  assign addCompareSelect_104_dist_0 = {13'd0, candidate_branches_80};
  assign addCompareSelect_104_dist_1 = {13'd0, candidate_branches_81};
  assign addCompareSelect_105_dist_0 = {13'd0, candidate_branches_82};
  assign addCompareSelect_105_dist_1 = {13'd0, candidate_branches_83};
  assign addCompareSelect_106_dist_0 = {13'd0, candidate_branches_84};
  assign addCompareSelect_106_dist_1 = {13'd0, candidate_branches_85};
  assign addCompareSelect_107_dist_0 = {13'd0, candidate_branches_86};
  assign addCompareSelect_107_dist_1 = {13'd0, candidate_branches_87};
  assign addCompareSelect_108_dist_0 = {13'd0, candidate_branches_88};
  assign addCompareSelect_108_dist_1 = {13'd0, candidate_branches_89};
  assign addCompareSelect_109_dist_0 = {13'd0, candidate_branches_90};
  assign addCompareSelect_109_dist_1 = {13'd0, candidate_branches_91};
  assign addCompareSelect_110_dist_0 = {13'd0, candidate_branches_92};
  assign addCompareSelect_110_dist_1 = {13'd0, candidate_branches_93};
  assign addCompareSelect_111_dist_0 = {13'd0, candidate_branches_94};
  assign addCompareSelect_111_dist_1 = {13'd0, candidate_branches_95};
  assign addCompareSelect_112_dist_0 = {13'd0, candidate_branches_96};
  assign addCompareSelect_112_dist_1 = {13'd0, candidate_branches_97};
  assign addCompareSelect_113_dist_0 = {13'd0, candidate_branches_98};
  assign addCompareSelect_113_dist_1 = {13'd0, candidate_branches_99};
  assign addCompareSelect_114_dist_0 = {13'd0, candidate_branches_100};
  assign addCompareSelect_114_dist_1 = {13'd0, candidate_branches_101};
  assign addCompareSelect_115_dist_0 = {13'd0, candidate_branches_102};
  assign addCompareSelect_115_dist_1 = {13'd0, candidate_branches_103};
  assign addCompareSelect_116_dist_0 = {13'd0, candidate_branches_104};
  assign addCompareSelect_116_dist_1 = {13'd0, candidate_branches_105};
  assign addCompareSelect_117_dist_0 = {13'd0, candidate_branches_106};
  assign addCompareSelect_117_dist_1 = {13'd0, candidate_branches_107};
  assign addCompareSelect_118_dist_0 = {13'd0, candidate_branches_108};
  assign addCompareSelect_118_dist_1 = {13'd0, candidate_branches_109};
  assign addCompareSelect_119_dist_0 = {13'd0, candidate_branches_110};
  assign addCompareSelect_119_dist_1 = {13'd0, candidate_branches_111};
  assign addCompareSelect_120_dist_0 = {13'd0, candidate_branches_112};
  assign addCompareSelect_120_dist_1 = {13'd0, candidate_branches_113};
  assign addCompareSelect_121_dist_0 = {13'd0, candidate_branches_114};
  assign addCompareSelect_121_dist_1 = {13'd0, candidate_branches_115};
  assign addCompareSelect_122_dist_0 = {13'd0, candidate_branches_116};
  assign addCompareSelect_122_dist_1 = {13'd0, candidate_branches_117};
  assign addCompareSelect_123_dist_0 = {13'd0, candidate_branches_118};
  assign addCompareSelect_123_dist_1 = {13'd0, candidate_branches_119};
  assign addCompareSelect_124_dist_0 = {13'd0, candidate_branches_120};
  assign addCompareSelect_124_dist_1 = {13'd0, candidate_branches_121};
  assign addCompareSelect_125_dist_0 = {13'd0, candidate_branches_122};
  assign addCompareSelect_125_dist_1 = {13'd0, candidate_branches_123};
  assign addCompareSelect_126_dist_0 = {13'd0, candidate_branches_124};
  assign addCompareSelect_126_dist_1 = {13'd0, candidate_branches_125};
  assign addCompareSelect_127_dist_0 = {13'd0, candidate_branches_126};
  assign addCompareSelect_127_dist_1 = {13'd0, candidate_branches_127};
  assign raw_data_ready = raw_data_ready_1;
  assign s_path_payload_fragment = survival_path;
  assign s_path_valid = survival_path_valid;
  assign s_path_payload_last = survival_path_last;
  assign min_idx = minVal_1_min_idx;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      raw_data_next <= 1'b0;
      raw_data_last_next <= 1'b0;
      survival_path_valid <= 1'b0;
      survival_path_last <= 1'b0;
      raw_data_ready_1 <= 1'b0;
    end else begin
      raw_data_next <= raw_data_valid;
      raw_data_last_next <= raw_data_payload_last;
      if(tbu_finished) begin
        raw_data_ready_1 <= 1'b1;
      end else begin
        if(when_PathMetric_l29) begin
          raw_data_ready_1 <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
      if(tbu_finished) begin
        survival_path_valid <= 1'b0;
        survival_path_last <= 1'b0;
      end else begin
        if(raw_data_next) begin
          survival_path_valid <= 1'b1;
          survival_path_last <= raw_data_last_next;
        end else begin
          survival_path_valid <= 1'b0;
          survival_path_last <= 1'b0;
        end
      end
    end
  end

  always @(posedge clk) begin
    candidate_branches_0 <= branchMetric_64_dist_0;
    candidate_branches_1 <= branchMetric_64_dist_1;
    if(tbu_finished) begin
      node_weight_0 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_0 <= addCompareSelect_64_state_weight;
        survival_path[0] <= addCompareSelect_64_decision;
      end
    end
    candidate_branches_2 <= branchMetric_65_dist_0;
    candidate_branches_3 <= branchMetric_65_dist_1;
    if(tbu_finished) begin
      node_weight_1 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_1 <= addCompareSelect_65_state_weight;
        survival_path[1] <= addCompareSelect_65_decision;
      end
    end
    candidate_branches_4 <= branchMetric_66_dist_0;
    candidate_branches_5 <= branchMetric_66_dist_1;
    if(tbu_finished) begin
      node_weight_2 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_2 <= addCompareSelect_66_state_weight;
        survival_path[2] <= addCompareSelect_66_decision;
      end
    end
    candidate_branches_6 <= branchMetric_67_dist_0;
    candidate_branches_7 <= branchMetric_67_dist_1;
    if(tbu_finished) begin
      node_weight_3 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_3 <= addCompareSelect_67_state_weight;
        survival_path[3] <= addCompareSelect_67_decision;
      end
    end
    candidate_branches_8 <= branchMetric_68_dist_0;
    candidate_branches_9 <= branchMetric_68_dist_1;
    if(tbu_finished) begin
      node_weight_4 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_4 <= addCompareSelect_68_state_weight;
        survival_path[4] <= addCompareSelect_68_decision;
      end
    end
    candidate_branches_10 <= branchMetric_69_dist_0;
    candidate_branches_11 <= branchMetric_69_dist_1;
    if(tbu_finished) begin
      node_weight_5 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_5 <= addCompareSelect_69_state_weight;
        survival_path[5] <= addCompareSelect_69_decision;
      end
    end
    candidate_branches_12 <= branchMetric_70_dist_0;
    candidate_branches_13 <= branchMetric_70_dist_1;
    if(tbu_finished) begin
      node_weight_6 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_6 <= addCompareSelect_70_state_weight;
        survival_path[6] <= addCompareSelect_70_decision;
      end
    end
    candidate_branches_14 <= branchMetric_71_dist_0;
    candidate_branches_15 <= branchMetric_71_dist_1;
    if(tbu_finished) begin
      node_weight_7 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_7 <= addCompareSelect_71_state_weight;
        survival_path[7] <= addCompareSelect_71_decision;
      end
    end
    candidate_branches_16 <= branchMetric_72_dist_0;
    candidate_branches_17 <= branchMetric_72_dist_1;
    if(tbu_finished) begin
      node_weight_8 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_8 <= addCompareSelect_72_state_weight;
        survival_path[8] <= addCompareSelect_72_decision;
      end
    end
    candidate_branches_18 <= branchMetric_73_dist_0;
    candidate_branches_19 <= branchMetric_73_dist_1;
    if(tbu_finished) begin
      node_weight_9 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_9 <= addCompareSelect_73_state_weight;
        survival_path[9] <= addCompareSelect_73_decision;
      end
    end
    candidate_branches_20 <= branchMetric_74_dist_0;
    candidate_branches_21 <= branchMetric_74_dist_1;
    if(tbu_finished) begin
      node_weight_10 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_10 <= addCompareSelect_74_state_weight;
        survival_path[10] <= addCompareSelect_74_decision;
      end
    end
    candidate_branches_22 <= branchMetric_75_dist_0;
    candidate_branches_23 <= branchMetric_75_dist_1;
    if(tbu_finished) begin
      node_weight_11 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_11 <= addCompareSelect_75_state_weight;
        survival_path[11] <= addCompareSelect_75_decision;
      end
    end
    candidate_branches_24 <= branchMetric_76_dist_0;
    candidate_branches_25 <= branchMetric_76_dist_1;
    if(tbu_finished) begin
      node_weight_12 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_12 <= addCompareSelect_76_state_weight;
        survival_path[12] <= addCompareSelect_76_decision;
      end
    end
    candidate_branches_26 <= branchMetric_77_dist_0;
    candidate_branches_27 <= branchMetric_77_dist_1;
    if(tbu_finished) begin
      node_weight_13 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_13 <= addCompareSelect_77_state_weight;
        survival_path[13] <= addCompareSelect_77_decision;
      end
    end
    candidate_branches_28 <= branchMetric_78_dist_0;
    candidate_branches_29 <= branchMetric_78_dist_1;
    if(tbu_finished) begin
      node_weight_14 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_14 <= addCompareSelect_78_state_weight;
        survival_path[14] <= addCompareSelect_78_decision;
      end
    end
    candidate_branches_30 <= branchMetric_79_dist_0;
    candidate_branches_31 <= branchMetric_79_dist_1;
    if(tbu_finished) begin
      node_weight_15 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_15 <= addCompareSelect_79_state_weight;
        survival_path[15] <= addCompareSelect_79_decision;
      end
    end
    candidate_branches_32 <= branchMetric_80_dist_0;
    candidate_branches_33 <= branchMetric_80_dist_1;
    if(tbu_finished) begin
      node_weight_16 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_16 <= addCompareSelect_80_state_weight;
        survival_path[16] <= addCompareSelect_80_decision;
      end
    end
    candidate_branches_34 <= branchMetric_81_dist_0;
    candidate_branches_35 <= branchMetric_81_dist_1;
    if(tbu_finished) begin
      node_weight_17 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_17 <= addCompareSelect_81_state_weight;
        survival_path[17] <= addCompareSelect_81_decision;
      end
    end
    candidate_branches_36 <= branchMetric_82_dist_0;
    candidate_branches_37 <= branchMetric_82_dist_1;
    if(tbu_finished) begin
      node_weight_18 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_18 <= addCompareSelect_82_state_weight;
        survival_path[18] <= addCompareSelect_82_decision;
      end
    end
    candidate_branches_38 <= branchMetric_83_dist_0;
    candidate_branches_39 <= branchMetric_83_dist_1;
    if(tbu_finished) begin
      node_weight_19 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_19 <= addCompareSelect_83_state_weight;
        survival_path[19] <= addCompareSelect_83_decision;
      end
    end
    candidate_branches_40 <= branchMetric_84_dist_0;
    candidate_branches_41 <= branchMetric_84_dist_1;
    if(tbu_finished) begin
      node_weight_20 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_20 <= addCompareSelect_84_state_weight;
        survival_path[20] <= addCompareSelect_84_decision;
      end
    end
    candidate_branches_42 <= branchMetric_85_dist_0;
    candidate_branches_43 <= branchMetric_85_dist_1;
    if(tbu_finished) begin
      node_weight_21 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_21 <= addCompareSelect_85_state_weight;
        survival_path[21] <= addCompareSelect_85_decision;
      end
    end
    candidate_branches_44 <= branchMetric_86_dist_0;
    candidate_branches_45 <= branchMetric_86_dist_1;
    if(tbu_finished) begin
      node_weight_22 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_22 <= addCompareSelect_86_state_weight;
        survival_path[22] <= addCompareSelect_86_decision;
      end
    end
    candidate_branches_46 <= branchMetric_87_dist_0;
    candidate_branches_47 <= branchMetric_87_dist_1;
    if(tbu_finished) begin
      node_weight_23 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_23 <= addCompareSelect_87_state_weight;
        survival_path[23] <= addCompareSelect_87_decision;
      end
    end
    candidate_branches_48 <= branchMetric_88_dist_0;
    candidate_branches_49 <= branchMetric_88_dist_1;
    if(tbu_finished) begin
      node_weight_24 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_24 <= addCompareSelect_88_state_weight;
        survival_path[24] <= addCompareSelect_88_decision;
      end
    end
    candidate_branches_50 <= branchMetric_89_dist_0;
    candidate_branches_51 <= branchMetric_89_dist_1;
    if(tbu_finished) begin
      node_weight_25 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_25 <= addCompareSelect_89_state_weight;
        survival_path[25] <= addCompareSelect_89_decision;
      end
    end
    candidate_branches_52 <= branchMetric_90_dist_0;
    candidate_branches_53 <= branchMetric_90_dist_1;
    if(tbu_finished) begin
      node_weight_26 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_26 <= addCompareSelect_90_state_weight;
        survival_path[26] <= addCompareSelect_90_decision;
      end
    end
    candidate_branches_54 <= branchMetric_91_dist_0;
    candidate_branches_55 <= branchMetric_91_dist_1;
    if(tbu_finished) begin
      node_weight_27 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_27 <= addCompareSelect_91_state_weight;
        survival_path[27] <= addCompareSelect_91_decision;
      end
    end
    candidate_branches_56 <= branchMetric_92_dist_0;
    candidate_branches_57 <= branchMetric_92_dist_1;
    if(tbu_finished) begin
      node_weight_28 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_28 <= addCompareSelect_92_state_weight;
        survival_path[28] <= addCompareSelect_92_decision;
      end
    end
    candidate_branches_58 <= branchMetric_93_dist_0;
    candidate_branches_59 <= branchMetric_93_dist_1;
    if(tbu_finished) begin
      node_weight_29 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_29 <= addCompareSelect_93_state_weight;
        survival_path[29] <= addCompareSelect_93_decision;
      end
    end
    candidate_branches_60 <= branchMetric_94_dist_0;
    candidate_branches_61 <= branchMetric_94_dist_1;
    if(tbu_finished) begin
      node_weight_30 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_30 <= addCompareSelect_94_state_weight;
        survival_path[30] <= addCompareSelect_94_decision;
      end
    end
    candidate_branches_62 <= branchMetric_95_dist_0;
    candidate_branches_63 <= branchMetric_95_dist_1;
    if(tbu_finished) begin
      node_weight_31 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_31 <= addCompareSelect_95_state_weight;
        survival_path[31] <= addCompareSelect_95_decision;
      end
    end
    candidate_branches_64 <= branchMetric_96_dist_0;
    candidate_branches_65 <= branchMetric_96_dist_1;
    if(tbu_finished) begin
      node_weight_32 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_32 <= addCompareSelect_96_state_weight;
        survival_path[32] <= addCompareSelect_96_decision;
      end
    end
    candidate_branches_66 <= branchMetric_97_dist_0;
    candidate_branches_67 <= branchMetric_97_dist_1;
    if(tbu_finished) begin
      node_weight_33 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_33 <= addCompareSelect_97_state_weight;
        survival_path[33] <= addCompareSelect_97_decision;
      end
    end
    candidate_branches_68 <= branchMetric_98_dist_0;
    candidate_branches_69 <= branchMetric_98_dist_1;
    if(tbu_finished) begin
      node_weight_34 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_34 <= addCompareSelect_98_state_weight;
        survival_path[34] <= addCompareSelect_98_decision;
      end
    end
    candidate_branches_70 <= branchMetric_99_dist_0;
    candidate_branches_71 <= branchMetric_99_dist_1;
    if(tbu_finished) begin
      node_weight_35 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_35 <= addCompareSelect_99_state_weight;
        survival_path[35] <= addCompareSelect_99_decision;
      end
    end
    candidate_branches_72 <= branchMetric_100_dist_0;
    candidate_branches_73 <= branchMetric_100_dist_1;
    if(tbu_finished) begin
      node_weight_36 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_36 <= addCompareSelect_100_state_weight;
        survival_path[36] <= addCompareSelect_100_decision;
      end
    end
    candidate_branches_74 <= branchMetric_101_dist_0;
    candidate_branches_75 <= branchMetric_101_dist_1;
    if(tbu_finished) begin
      node_weight_37 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_37 <= addCompareSelect_101_state_weight;
        survival_path[37] <= addCompareSelect_101_decision;
      end
    end
    candidate_branches_76 <= branchMetric_102_dist_0;
    candidate_branches_77 <= branchMetric_102_dist_1;
    if(tbu_finished) begin
      node_weight_38 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_38 <= addCompareSelect_102_state_weight;
        survival_path[38] <= addCompareSelect_102_decision;
      end
    end
    candidate_branches_78 <= branchMetric_103_dist_0;
    candidate_branches_79 <= branchMetric_103_dist_1;
    if(tbu_finished) begin
      node_weight_39 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_39 <= addCompareSelect_103_state_weight;
        survival_path[39] <= addCompareSelect_103_decision;
      end
    end
    candidate_branches_80 <= branchMetric_104_dist_0;
    candidate_branches_81 <= branchMetric_104_dist_1;
    if(tbu_finished) begin
      node_weight_40 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_40 <= addCompareSelect_104_state_weight;
        survival_path[40] <= addCompareSelect_104_decision;
      end
    end
    candidate_branches_82 <= branchMetric_105_dist_0;
    candidate_branches_83 <= branchMetric_105_dist_1;
    if(tbu_finished) begin
      node_weight_41 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_41 <= addCompareSelect_105_state_weight;
        survival_path[41] <= addCompareSelect_105_decision;
      end
    end
    candidate_branches_84 <= branchMetric_106_dist_0;
    candidate_branches_85 <= branchMetric_106_dist_1;
    if(tbu_finished) begin
      node_weight_42 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_42 <= addCompareSelect_106_state_weight;
        survival_path[42] <= addCompareSelect_106_decision;
      end
    end
    candidate_branches_86 <= branchMetric_107_dist_0;
    candidate_branches_87 <= branchMetric_107_dist_1;
    if(tbu_finished) begin
      node_weight_43 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_43 <= addCompareSelect_107_state_weight;
        survival_path[43] <= addCompareSelect_107_decision;
      end
    end
    candidate_branches_88 <= branchMetric_108_dist_0;
    candidate_branches_89 <= branchMetric_108_dist_1;
    if(tbu_finished) begin
      node_weight_44 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_44 <= addCompareSelect_108_state_weight;
        survival_path[44] <= addCompareSelect_108_decision;
      end
    end
    candidate_branches_90 <= branchMetric_109_dist_0;
    candidate_branches_91 <= branchMetric_109_dist_1;
    if(tbu_finished) begin
      node_weight_45 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_45 <= addCompareSelect_109_state_weight;
        survival_path[45] <= addCompareSelect_109_decision;
      end
    end
    candidate_branches_92 <= branchMetric_110_dist_0;
    candidate_branches_93 <= branchMetric_110_dist_1;
    if(tbu_finished) begin
      node_weight_46 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_46 <= addCompareSelect_110_state_weight;
        survival_path[46] <= addCompareSelect_110_decision;
      end
    end
    candidate_branches_94 <= branchMetric_111_dist_0;
    candidate_branches_95 <= branchMetric_111_dist_1;
    if(tbu_finished) begin
      node_weight_47 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_47 <= addCompareSelect_111_state_weight;
        survival_path[47] <= addCompareSelect_111_decision;
      end
    end
    candidate_branches_96 <= branchMetric_112_dist_0;
    candidate_branches_97 <= branchMetric_112_dist_1;
    if(tbu_finished) begin
      node_weight_48 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_48 <= addCompareSelect_112_state_weight;
        survival_path[48] <= addCompareSelect_112_decision;
      end
    end
    candidate_branches_98 <= branchMetric_113_dist_0;
    candidate_branches_99 <= branchMetric_113_dist_1;
    if(tbu_finished) begin
      node_weight_49 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_49 <= addCompareSelect_113_state_weight;
        survival_path[49] <= addCompareSelect_113_decision;
      end
    end
    candidate_branches_100 <= branchMetric_114_dist_0;
    candidate_branches_101 <= branchMetric_114_dist_1;
    if(tbu_finished) begin
      node_weight_50 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_50 <= addCompareSelect_114_state_weight;
        survival_path[50] <= addCompareSelect_114_decision;
      end
    end
    candidate_branches_102 <= branchMetric_115_dist_0;
    candidate_branches_103 <= branchMetric_115_dist_1;
    if(tbu_finished) begin
      node_weight_51 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_51 <= addCompareSelect_115_state_weight;
        survival_path[51] <= addCompareSelect_115_decision;
      end
    end
    candidate_branches_104 <= branchMetric_116_dist_0;
    candidate_branches_105 <= branchMetric_116_dist_1;
    if(tbu_finished) begin
      node_weight_52 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_52 <= addCompareSelect_116_state_weight;
        survival_path[52] <= addCompareSelect_116_decision;
      end
    end
    candidate_branches_106 <= branchMetric_117_dist_0;
    candidate_branches_107 <= branchMetric_117_dist_1;
    if(tbu_finished) begin
      node_weight_53 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_53 <= addCompareSelect_117_state_weight;
        survival_path[53] <= addCompareSelect_117_decision;
      end
    end
    candidate_branches_108 <= branchMetric_118_dist_0;
    candidate_branches_109 <= branchMetric_118_dist_1;
    if(tbu_finished) begin
      node_weight_54 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_54 <= addCompareSelect_118_state_weight;
        survival_path[54] <= addCompareSelect_118_decision;
      end
    end
    candidate_branches_110 <= branchMetric_119_dist_0;
    candidate_branches_111 <= branchMetric_119_dist_1;
    if(tbu_finished) begin
      node_weight_55 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_55 <= addCompareSelect_119_state_weight;
        survival_path[55] <= addCompareSelect_119_decision;
      end
    end
    candidate_branches_112 <= branchMetric_120_dist_0;
    candidate_branches_113 <= branchMetric_120_dist_1;
    if(tbu_finished) begin
      node_weight_56 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_56 <= addCompareSelect_120_state_weight;
        survival_path[56] <= addCompareSelect_120_decision;
      end
    end
    candidate_branches_114 <= branchMetric_121_dist_0;
    candidate_branches_115 <= branchMetric_121_dist_1;
    if(tbu_finished) begin
      node_weight_57 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_57 <= addCompareSelect_121_state_weight;
        survival_path[57] <= addCompareSelect_121_decision;
      end
    end
    candidate_branches_116 <= branchMetric_122_dist_0;
    candidate_branches_117 <= branchMetric_122_dist_1;
    if(tbu_finished) begin
      node_weight_58 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_58 <= addCompareSelect_122_state_weight;
        survival_path[58] <= addCompareSelect_122_decision;
      end
    end
    candidate_branches_118 <= branchMetric_123_dist_0;
    candidate_branches_119 <= branchMetric_123_dist_1;
    if(tbu_finished) begin
      node_weight_59 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_59 <= addCompareSelect_123_state_weight;
        survival_path[59] <= addCompareSelect_123_decision;
      end
    end
    candidate_branches_120 <= branchMetric_124_dist_0;
    candidate_branches_121 <= branchMetric_124_dist_1;
    if(tbu_finished) begin
      node_weight_60 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_60 <= addCompareSelect_124_state_weight;
        survival_path[60] <= addCompareSelect_124_decision;
      end
    end
    candidate_branches_122 <= branchMetric_125_dist_0;
    candidate_branches_123 <= branchMetric_125_dist_1;
    if(tbu_finished) begin
      node_weight_61 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_61 <= addCompareSelect_125_state_weight;
        survival_path[61] <= addCompareSelect_125_decision;
      end
    end
    candidate_branches_124 <= branchMetric_126_dist_0;
    candidate_branches_125 <= branchMetric_126_dist_1;
    if(tbu_finished) begin
      node_weight_62 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_62 <= addCompareSelect_126_state_weight;
        survival_path[62] <= addCompareSelect_126_decision;
      end
    end
    candidate_branches_126 <= branchMetric_127_dist_0;
    candidate_branches_127 <= branchMetric_127_dist_1;
    if(tbu_finished) begin
      node_weight_63 <= 16'h0;
      survival_path <= 64'h0;
    end else begin
      if(raw_data_next) begin
        node_weight_63 <= addCompareSelect_127_state_weight;
        survival_path[63] <= addCompareSelect_127_decision;
      end
    end
  end


endmodule

//Scrambler replaced by Scrambler

module dataCombination (
  input               unit_data_valid,
  input               unit_data_payload_last,
  input      [15:0]   unit_data_payload_fragment,
  output              base_data_valid,
  output              base_data_payload_last,
  output     [15:0]   base_data_payload_fragment,
  input               enable,
  input      [3:0]    cnt_step,
  input      [3:0]    cnt_limit,
  input               clk,
  input               reset
);

  wire       [3:0]    _zz_base_cnt;
  wire       [31:0]   _zz_base_data_buffer;
  wire       [31:0]   _zz_base_data_buffer_1;
  reg        [3:0]    base_cnt;
  reg        [15:0]   unit_data_buffer;
  reg                 unit_data_valid_1;
  reg                 unit_data_last;
  reg        [15:0]   base_data_buffer;
  reg                 base_data_valid_1;
  reg                 base_data_last;
  wire                when_dataCombination_l42;

  assign _zz_base_cnt = (base_cnt + cnt_step);
  assign _zz_base_data_buffer = _zz_base_data_buffer_1;
  assign _zz_base_data_buffer_1 = ({unit_data_buffer,base_data_buffer} >>> cnt_step);
  assign when_dataCombination_l42 = (! enable);
  assign base_data_payload_fragment = base_data_buffer;
  assign base_data_valid = base_data_valid_1;
  assign base_data_payload_last = base_data_last;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      base_cnt <= 4'b0000;
      unit_data_buffer <= 16'h0;
      unit_data_valid_1 <= 1'b0;
      unit_data_last <= 1'b0;
      base_data_buffer <= 16'h0;
      base_data_valid_1 <= 1'b0;
      base_data_last <= 1'b0;
    end else begin
      unit_data_buffer <= unit_data_payload_fragment;
      unit_data_valid_1 <= unit_data_valid;
      unit_data_last <= unit_data_payload_last;
      if(when_dataCombination_l42) begin
        base_cnt <= 4'b0000;
        base_data_valid_1 <= 1'b0;
        base_data_last <= 1'b0;
      end else begin
        if(unit_data_valid_1) begin
          base_data_valid_1 <= (base_cnt == cnt_limit);
          base_data_last <= ((base_cnt == cnt_limit) && unit_data_last);
          base_cnt <= ((base_cnt == cnt_limit) ? 4'b0000 : _zz_base_cnt);
          base_data_buffer <= _zz_base_data_buffer[15:0];
        end else begin
          if(base_data_valid) begin
            base_cnt <= 4'b0000;
            base_data_valid_1 <= 1'b0;
          end
        end
      end
    end
  end


endmodule

module DemodulatorRTL (
  input      [1:0]    select_1,
  output              data_flow_unit_data_valid,
  output              data_flow_unit_data_payload_last,
  output     [7:0]    data_flow_unit_data_payload_fragment,
  input               data_flow_mod_iq_valid,
  input               data_flow_mod_iq_payload_last,
  input      [11:0]   data_flow_mod_iq_payload_fragment_cha_i,
  input      [11:0]   data_flow_mod_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);

  wire                flowDeMux_2_outputs_0_valid;
  wire                flowDeMux_2_outputs_0_payload_last;
  wire       [11:0]   flowDeMux_2_outputs_0_payload_fragment_cha_i;
  wire       [11:0]   flowDeMux_2_outputs_0_payload_fragment_cha_q;
  wire                flowDeMux_2_outputs_1_valid;
  wire                flowDeMux_2_outputs_1_payload_last;
  wire       [11:0]   flowDeMux_2_outputs_1_payload_fragment_cha_i;
  wire       [11:0]   flowDeMux_2_outputs_1_payload_fragment_cha_q;
  wire                flowDeMux_2_outputs_2_valid;
  wire                flowDeMux_2_outputs_2_payload_last;
  wire       [11:0]   flowDeMux_2_outputs_2_payload_fragment_cha_i;
  wire       [11:0]   flowDeMux_2_outputs_2_payload_fragment_cha_q;
  wire                demod_unit_data_valid;
  wire                demod_unit_data_payload_last;
  wire       [7:0]    demod_unit_data_payload_fragment;
  wire                demod_1_unit_data_valid;
  wire                demod_1_unit_data_payload_last;
  wire       [7:0]    demod_1_unit_data_payload_fragment;
  wire                demod_2_unit_data_valid;
  wire                demod_2_unit_data_payload_last;
  wire       [7:0]    demod_2_unit_data_payload_fragment;
  wire                flowMux_2_output_valid;
  wire                flowMux_2_output_payload_last;
  wire       [7:0]    flowMux_2_output_payload_fragment;

  FlowDeMux flowDeMux_2 (
    .input_valid                         (data_flow_mod_iq_valid                              ), //i
    .input_payload_last                  (data_flow_mod_iq_payload_last                       ), //i
    .input_payload_fragment_cha_i        (data_flow_mod_iq_payload_fragment_cha_i[11:0]       ), //i
    .input_payload_fragment_cha_q        (data_flow_mod_iq_payload_fragment_cha_q[11:0]       ), //i
    .select_1                            (select_1[1:0]                                       ), //i
    .outputs_0_valid                     (flowDeMux_2_outputs_0_valid                         ), //o
    .outputs_0_payload_last              (flowDeMux_2_outputs_0_payload_last                  ), //o
    .outputs_0_payload_fragment_cha_i    (flowDeMux_2_outputs_0_payload_fragment_cha_i[11:0]  ), //o
    .outputs_0_payload_fragment_cha_q    (flowDeMux_2_outputs_0_payload_fragment_cha_q[11:0]  ), //o
    .outputs_1_valid                     (flowDeMux_2_outputs_1_valid                         ), //o
    .outputs_1_payload_last              (flowDeMux_2_outputs_1_payload_last                  ), //o
    .outputs_1_payload_fragment_cha_i    (flowDeMux_2_outputs_1_payload_fragment_cha_i[11:0]  ), //o
    .outputs_1_payload_fragment_cha_q    (flowDeMux_2_outputs_1_payload_fragment_cha_q[11:0]  ), //o
    .outputs_2_valid                     (flowDeMux_2_outputs_2_valid                         ), //o
    .outputs_2_payload_last              (flowDeMux_2_outputs_2_payload_last                  ), //o
    .outputs_2_payload_fragment_cha_i    (flowDeMux_2_outputs_2_payload_fragment_cha_i[11:0]  ), //o
    .outputs_2_payload_fragment_cha_q    (flowDeMux_2_outputs_2_payload_fragment_cha_q[11:0]  )  //o
  );
  IQDemod demod (
    .unit_data_valid                  (demod_unit_data_valid                               ), //o
    .unit_data_payload_last           (demod_unit_data_payload_last                        ), //o
    .unit_data_payload_fragment       (demod_unit_data_payload_fragment[7:0]               ), //o
    .mod_iq_valid                     (flowDeMux_2_outputs_0_valid                         ), //i
    .mod_iq_payload_last              (flowDeMux_2_outputs_0_payload_last                  ), //i
    .mod_iq_payload_fragment_cha_i    (flowDeMux_2_outputs_0_payload_fragment_cha_i[11:0]  ), //i
    .mod_iq_payload_fragment_cha_q    (flowDeMux_2_outputs_0_payload_fragment_cha_q[11:0]  ), //i
    .clk                              (clk                                                 ), //i
    .reset                            (reset                                               )  //i
  );
  IQDemod_1 demod_1 (
    .unit_data_valid                  (demod_1_unit_data_valid                             ), //o
    .unit_data_payload_last           (demod_1_unit_data_payload_last                      ), //o
    .unit_data_payload_fragment       (demod_1_unit_data_payload_fragment[7:0]             ), //o
    .mod_iq_valid                     (flowDeMux_2_outputs_1_valid                         ), //i
    .mod_iq_payload_last              (flowDeMux_2_outputs_1_payload_last                  ), //i
    .mod_iq_payload_fragment_cha_i    (flowDeMux_2_outputs_1_payload_fragment_cha_i[11:0]  ), //i
    .mod_iq_payload_fragment_cha_q    (flowDeMux_2_outputs_1_payload_fragment_cha_q[11:0]  ), //i
    .clk                              (clk                                                 ), //i
    .reset                            (reset                                               )  //i
  );
  IQDemod_2 demod_2 (
    .unit_data_valid                  (demod_2_unit_data_valid                             ), //o
    .unit_data_payload_last           (demod_2_unit_data_payload_last                      ), //o
    .unit_data_payload_fragment       (demod_2_unit_data_payload_fragment[7:0]             ), //o
    .mod_iq_valid                     (flowDeMux_2_outputs_2_valid                         ), //i
    .mod_iq_payload_last              (flowDeMux_2_outputs_2_payload_last                  ), //i
    .mod_iq_payload_fragment_cha_i    (flowDeMux_2_outputs_2_payload_fragment_cha_i[11:0]  ), //i
    .mod_iq_payload_fragment_cha_q    (flowDeMux_2_outputs_2_payload_fragment_cha_q[11:0]  ), //i
    .clk                              (clk                                                 ), //i
    .reset                            (reset                                               )  //i
  );
  FlowMux flowMux_2 (
    .inputs_0_valid               (demod_unit_data_valid                    ), //i
    .inputs_0_payload_last        (demod_unit_data_payload_last             ), //i
    .inputs_0_payload_fragment    (demod_unit_data_payload_fragment[7:0]    ), //i
    .inputs_1_valid               (demod_1_unit_data_valid                  ), //i
    .inputs_1_payload_last        (demod_1_unit_data_payload_last           ), //i
    .inputs_1_payload_fragment    (demod_1_unit_data_payload_fragment[7:0]  ), //i
    .inputs_2_valid               (demod_2_unit_data_valid                  ), //i
    .inputs_2_payload_last        (demod_2_unit_data_payload_last           ), //i
    .inputs_2_payload_fragment    (demod_2_unit_data_payload_fragment[7:0]  ), //i
    .select_1                     (select_1[1:0]                            ), //i
    .output_valid                 (flowMux_2_output_valid                   ), //o
    .output_payload_last          (flowMux_2_output_payload_last            ), //o
    .output_payload_fragment      (flowMux_2_output_payload_fragment[7:0]   )  //o
  );
  assign data_flow_unit_data_valid = flowMux_2_output_valid;
  assign data_flow_unit_data_payload_last = flowMux_2_output_payload_last;
  assign data_flow_unit_data_payload_fragment = flowMux_2_output_payload_fragment;

endmodule

module DecimatorIQ (
  input               in_valid,
  input      [11:0]   in_payload_cha_i,
  input      [11:0]   in_payload_cha_q,
  output              out_valid,
  output     [11:0]   out_payload_cha_i,
  output     [11:0]   out_payload_cha_q,
  input               clk,
  input               reset
);

  wire       [2:0]    _zz_cnt;
  reg        [2:0]    cnt;
  reg        [11:0]   out_data_cha_i;
  reg        [11:0]   out_data_cha_q;
  reg                 out_valid_1;
  wire                when_DecimatorIQ_l23;

  assign _zz_cnt = (cnt + 3'b001);
  assign when_DecimatorIQ_l23 = (cnt == 3'b111);
  assign out_payload_cha_i = out_data_cha_i;
  assign out_payload_cha_q = out_data_cha_q;
  assign out_valid = out_valid_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 3'b000;
      out_valid_1 <= 1'b0;
    end else begin
      if(in_valid) begin
        cnt <= ((cnt == 3'b111) ? 3'b000 : _zz_cnt);
      end
      if(in_valid) begin
        if(when_DecimatorIQ_l23) begin
          out_valid_1 <= 1'b1;
        end else begin
          out_valid_1 <= 1'b0;
        end
      end else begin
        out_valid_1 <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(in_valid) begin
      if(when_DecimatorIQ_l23) begin
        out_data_cha_i <= in_payload_cha_i;
        out_data_cha_q <= in_payload_cha_q;
      end
    end
  end


endmodule

//TransposeFIR replaced by TransposeFIR

module CrossCorrelator (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              corr_result_valid,
  output     [35:0]   corr_result_payload_cha_i,
  output     [35:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);

  reg        [11:0]   _zz_I_mem_port0;
  reg        [11:0]   _zz_Q_mem_port0;
  wire                corr_core_corr_result_valid;
  wire       [35:0]   corr_core_corr_result_payload_cha_i;
  wire       [35:0]   corr_core_corr_result_payload_cha_q;
  wire       [3:0]    _zz_I_mem_port;
  wire                _zz_I_mem_port_1;
  wire       [3:0]    _zz_iq_cursor_cha_i_1;
  wire                _zz_iq_cursor_cha_i_2;
  wire       [3:0]    _zz_Q_mem_port;
  wire                _zz_Q_mem_port_1;
  wire       [3:0]    _zz_iq_cursor_cha_q_1;
  wire                _zz_iq_cursor_cha_q_2;
  wire       [4:0]    _zz_cnt;
  reg        [4:0]    cnt;
  wire       [11:0]   iq_cursor_cha_i;
  wire       [11:0]   iq_cursor_cha_q;
  wire       [4:0]    _zz_iq_cursor_cha_i;
  wire       [4:0]    _zz_iq_cursor_cha_q;
  (* rom_style = "block" *) reg [11:0] I_mem [0:15];
  (* rom_style = "block" *) reg [11:0] Q_mem [0:15];

  assign _zz_iq_cursor_cha_i_1 = _zz_iq_cursor_cha_i[3:0];
  assign _zz_iq_cursor_cha_q_1 = _zz_iq_cursor_cha_q[3:0];
  assign _zz_cnt = (cnt + 5'h01);
  assign _zz_iq_cursor_cha_i_2 = 1'b1;
  assign _zz_iq_cursor_cha_q_2 = 1'b1;
  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/./simWorkspace/LoopBackTest/rtl/LoopBackTest.v_toplevel_receiver_phy_rx_cfo_cross_corr_core_I_mem.bin",I_mem);
  end
  always @(posedge clk) begin
    if(_zz_iq_cursor_cha_i_2) begin
      _zz_I_mem_port0 <= I_mem[_zz_iq_cursor_cha_i_1];
    end
  end

  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/./simWorkspace/LoopBackTest/rtl/LoopBackTest.v_toplevel_receiver_phy_rx_cfo_cross_corr_core_Q_mem.bin",Q_mem);
  end
  always @(posedge clk) begin
    if(_zz_iq_cursor_cha_q_2) begin
      _zz_Q_mem_port0 <= Q_mem[_zz_iq_cursor_cha_q_1];
    end
  end

  Correlator_2 corr_core (
    .raw_data_0_valid             (raw_data_valid                             ), //i
    .raw_data_0_payload_cha_i     (raw_data_payload_cha_i[11:0]               ), //i
    .raw_data_0_payload_cha_q     (raw_data_payload_cha_q[11:0]               ), //i
    .raw_data_1_valid             (raw_data_valid                             ), //i
    .raw_data_1_payload_cha_i     (iq_cursor_cha_i[11:0]                      ), //i
    .raw_data_1_payload_cha_q     (iq_cursor_cha_q[11:0]                      ), //i
    .corr_result_valid            (corr_core_corr_result_valid                ), //o
    .corr_result_payload_cha_i    (corr_core_corr_result_payload_cha_i[35:0]  ), //o
    .corr_result_payload_cha_q    (corr_core_corr_result_payload_cha_q[35:0]  ), //o
    .clk                          (clk                                        ), //i
    .reset                        (reset                                      )  //i
  );
  assign _zz_iq_cursor_cha_i = cnt;
  assign iq_cursor_cha_i = _zz_I_mem_port0;
  assign _zz_iq_cursor_cha_q = cnt;
  assign iq_cursor_cha_q = _zz_Q_mem_port0;
  assign corr_result_valid = corr_core_corr_result_valid;
  assign corr_result_payload_cha_i = corr_core_corr_result_payload_cha_i;
  assign corr_result_payload_cha_q = corr_core_corr_result_payload_cha_q;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 5'h0;
    end else begin
      if(raw_data_valid) begin
        cnt <= ((cnt == 5'h0f) ? 5'h0 : _zz_cnt);
      end else begin
        cnt <= 5'h0;
      end
    end
  end


endmodule

module CFOCorrector (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              rotated_data_valid,
  output     [11:0]   rotated_data_payload_cha_i,
  output     [11:0]   rotated_data_payload_cha_q,
  input               enable,
  output              phi_correct_valid,
  input               clk,
  input               reset
);

  wire       [23:0]   phase_rotator_delta_phi_payload;
  wire                cfo_estimator_delta_phi_valid;
  wire       [23:0]   cfo_estimator_delta_phi_payload;
  wire                phase_rotator_rotated_data_valid;
  wire       [11:0]   phase_rotator_rotated_data_payload_cha_i;
  wire       [11:0]   phase_rotator_rotated_data_payload_cha_q;
  wire       [23:0]   _zz_delta_phi_mean;
  wire       [22:0]   _zz_delta_phi_mean_1;
  reg        [0:0]    mean_cnt;
  reg        [23:0]   delta_phi_mean;
  reg                 delta_phi_valid;
  wire                when_CFOCorrector_l45;
  reg                 delta_phi_valid_regNext;

  assign _zz_delta_phi_mean_1 = (cfo_estimator_delta_phi_payload >>> 1);
  assign _zz_delta_phi_mean = {{1{_zz_delta_phi_mean_1[22]}}, _zz_delta_phi_mean_1};
  CFOEstimator cfo_estimator (
    .rotated_data_valid            (raw_data_valid                         ), //i
    .rotated_data_payload_cha_i    (raw_data_payload_cha_i[11:0]           ), //i
    .rotated_data_payload_cha_q    (raw_data_payload_cha_q[11:0]           ), //i
    .delta_phi_valid               (cfo_estimator_delta_phi_valid          ), //o
    .delta_phi_payload             (cfo_estimator_delta_phi_payload[23:0]  ), //o
    .clk                           (clk                                    ), //i
    .reset                         (reset                                  )  //i
  );
  PhaseRotator phase_rotator (
    .raw_data_valid                (raw_data_valid                                  ), //i
    .raw_data_payload_cha_i        (raw_data_payload_cha_i[11:0]                    ), //i
    .raw_data_payload_cha_q        (raw_data_payload_cha_q[11:0]                    ), //i
    .delta_phi_valid               (delta_phi_valid                                 ), //i
    .delta_phi_payload             (phase_rotator_delta_phi_payload[23:0]           ), //i
    .rotated_data_valid            (phase_rotator_rotated_data_valid                ), //o
    .rotated_data_payload_cha_i    (phase_rotator_rotated_data_payload_cha_i[11:0]  ), //o
    .rotated_data_payload_cha_q    (phase_rotator_rotated_data_payload_cha_q[11:0]  ), //o
    .clk                           (clk                                             ), //i
    .reset                         (reset                                           )  //i
  );
  assign when_CFOCorrector_l45 = (delta_phi_valid || (! enable));
  assign phase_rotator_delta_phi_payload = (- delta_phi_mean);
  assign rotated_data_valid = phase_rotator_rotated_data_valid;
  assign rotated_data_payload_cha_i = phase_rotator_rotated_data_payload_cha_i;
  assign rotated_data_payload_cha_q = phase_rotator_rotated_data_payload_cha_q;
  assign phi_correct_valid = delta_phi_valid_regNext;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      mean_cnt <= 1'b0;
      delta_phi_mean <= 24'h0;
      delta_phi_valid <= 1'b0;
      delta_phi_valid_regNext <= 1'b0;
    end else begin
      if(when_CFOCorrector_l45) begin
        mean_cnt <= 1'b0;
        delta_phi_valid <= 1'b0;
        delta_phi_mean <= 24'h0;
      end else begin
        if(cfo_estimator_delta_phi_valid) begin
          mean_cnt <= (mean_cnt + 1'b1);
          delta_phi_mean <= ($signed(delta_phi_mean) + $signed(_zz_delta_phi_mean));
          delta_phi_valid <= (mean_cnt == 1'b1);
        end
      end
      delta_phi_valid_regNext <= delta_phi_valid;
    end
  end


endmodule

module PreambleDetector (
  input      [7:0]    min_plateau,
  output              pkg_detected,
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              raw_data_out_valid,
  output     [11:0]   raw_data_out_payload_cha_i,
  output     [11:0]   raw_data_out_payload_cha_q,
  output              corr_result_valid,
  output     [35:0]   corr_result_payload_cha_i,
  output     [35:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);

  wire                powerMeter_1_power_result_valid;
  wire       [23:0]   powerMeter_1_power_result_payload_cha_i;
  wire       [23:0]   powerMeter_1_power_result_payload_cha_q;
  wire                autoCorrelator_2_corr_result_valid;
  wire       [35:0]   autoCorrelator_2_corr_result_payload_cha_i;
  wire       [35:0]   autoCorrelator_2_corr_result_payload_cha_q;
  wire       [23:0]   _zz__zz_gate_pkg_det;
  wire       [23:0]   _zz__zz_gate_pkg_det_1;
  wire       [23:0]   _zz__zz_gate_pkg_det_2;
  wire       [23:0]   _zz__zz_gate_pkg_det_3;
  wire       [0:0]    _zz__zz_gate_pkg_det_4;
  wire       [23:0]   _zz__zz_gate_pkg_det_5;
  wire       [23:0]   _zz__zz_gate_pkg_det_6;
  wire       [23:0]   _zz__zz_gate_pkg_det_7;
  wire       [23:0]   _zz__zz_gate_pkg_det_8;
  wire       [0:0]    _zz__zz_gate_pkg_det_9;
  wire       [35:0]   _zz_gate_pkg_det_1;
  wire       [26:0]   _zz_gate_pkg_det_2;
  wire       [26:0]   _zz_gate_pkg_det_3;
  wire       [26:0]   _zz_gate_pkg_det_4;
  wire       [25:0]   _zz_gate_pkg_det_5;
  wire       [35:0]   _zz_prod_avg_mag;
  wire       [35:0]   _zz_prod_avg_mag_1;
  wire       [35:0]   _zz_prod_avg_mag_2;
  wire       [35:0]   _zz_prod_avg_mag_3;
  wire       [0:0]    _zz_prod_avg_mag_4;
  wire       [35:0]   _zz_prod_avg_mag_5;
  wire       [35:0]   _zz_prod_avg_mag_6;
  wire       [35:0]   _zz_prod_avg_mag_7;
  wire       [35:0]   _zz_prod_avg_mag_8;
  wire       [0:0]    _zz_prod_avg_mag_9;
  reg                 gate_pkg_det;
  reg        [35:0]   prod_avg_mag;
  reg        [7:0]    plateau_cnt;
  reg        [23:0]   _zz_gate_pkg_det;
  reg                 powerMeter_1_power_result_valid_regNext;
  wire                when_PreambleDetector_l66;
  reg                 raw_data_regNext_valid;
  reg        [11:0]   raw_data_regNext_payload_cha_i;
  reg        [11:0]   raw_data_regNext_payload_cha_q;

  assign _zz__zz_gate_pkg_det = (_zz__zz_gate_pkg_det_1 + _zz__zz_gate_pkg_det_3);
  assign _zz__zz_gate_pkg_det_1 = (powerMeter_1_power_result_payload_cha_i[23] ? _zz__zz_gate_pkg_det_2 : powerMeter_1_power_result_payload_cha_i);
  assign _zz__zz_gate_pkg_det_2 = (~ powerMeter_1_power_result_payload_cha_i);
  assign _zz__zz_gate_pkg_det_4 = powerMeter_1_power_result_payload_cha_i[23];
  assign _zz__zz_gate_pkg_det_3 = {23'd0, _zz__zz_gate_pkg_det_4};
  assign _zz__zz_gate_pkg_det_5 = (_zz__zz_gate_pkg_det_6 + _zz__zz_gate_pkg_det_8);
  assign _zz__zz_gate_pkg_det_6 = (powerMeter_1_power_result_payload_cha_q[23] ? _zz__zz_gate_pkg_det_7 : powerMeter_1_power_result_payload_cha_q);
  assign _zz__zz_gate_pkg_det_7 = (~ powerMeter_1_power_result_payload_cha_q);
  assign _zz__zz_gate_pkg_det_9 = powerMeter_1_power_result_payload_cha_q[23];
  assign _zz__zz_gate_pkg_det_8 = {23'd0, _zz__zz_gate_pkg_det_9};
  assign _zz_gate_pkg_det_2 = (_zz_gate_pkg_det_3 + _zz_gate_pkg_det_4);
  assign _zz_gate_pkg_det_1 = {9'd0, _zz_gate_pkg_det_2};
  assign _zz_gate_pkg_det_3 = ({3'd0,_zz_gate_pkg_det} <<< 3);
  assign _zz_gate_pkg_det_5 = ({2'd0,_zz_gate_pkg_det} <<< 2);
  assign _zz_gate_pkg_det_4 = {1'd0, _zz_gate_pkg_det_5};
  assign _zz_prod_avg_mag = (_zz_prod_avg_mag_1 + _zz_prod_avg_mag_3);
  assign _zz_prod_avg_mag_1 = (autoCorrelator_2_corr_result_payload_cha_i[35] ? _zz_prod_avg_mag_2 : autoCorrelator_2_corr_result_payload_cha_i);
  assign _zz_prod_avg_mag_2 = (~ autoCorrelator_2_corr_result_payload_cha_i);
  assign _zz_prod_avg_mag_4 = autoCorrelator_2_corr_result_payload_cha_i[35];
  assign _zz_prod_avg_mag_3 = {35'd0, _zz_prod_avg_mag_4};
  assign _zz_prod_avg_mag_5 = (_zz_prod_avg_mag_6 + _zz_prod_avg_mag_8);
  assign _zz_prod_avg_mag_6 = (autoCorrelator_2_corr_result_payload_cha_q[35] ? _zz_prod_avg_mag_7 : autoCorrelator_2_corr_result_payload_cha_q);
  assign _zz_prod_avg_mag_7 = (~ autoCorrelator_2_corr_result_payload_cha_q);
  assign _zz_prod_avg_mag_9 = autoCorrelator_2_corr_result_payload_cha_q[35];
  assign _zz_prod_avg_mag_8 = {35'd0, _zz_prod_avg_mag_9};
  PowerMeter powerMeter_1 (
    .raw_data_valid                (raw_data_valid                                 ), //i
    .raw_data_payload_cha_i        (raw_data_payload_cha_i[11:0]                   ), //i
    .raw_data_payload_cha_q        (raw_data_payload_cha_q[11:0]                   ), //i
    .power_result_valid            (powerMeter_1_power_result_valid                ), //o
    .power_result_payload_cha_i    (powerMeter_1_power_result_payload_cha_i[23:0]  ), //o
    .power_result_payload_cha_q    (powerMeter_1_power_result_payload_cha_q[23:0]  ), //o
    .clk                           (clk                                            ), //i
    .reset                         (reset                                          )  //i
  );
  AutoCorrelator_1 autoCorrelator_2 (
    .raw_data_valid               (raw_data_valid                                    ), //i
    .raw_data_payload_cha_i       (raw_data_payload_cha_i[11:0]                      ), //i
    .raw_data_payload_cha_q       (raw_data_payload_cha_q[11:0]                      ), //i
    .corr_result_valid            (autoCorrelator_2_corr_result_valid                ), //o
    .corr_result_payload_cha_i    (autoCorrelator_2_corr_result_payload_cha_i[35:0]  ), //o
    .corr_result_payload_cha_q    (autoCorrelator_2_corr_result_payload_cha_q[35:0]  ), //o
    .clk                          (clk                                               ), //i
    .reset                        (reset                                             )  //i
  );
  assign when_PreambleDetector_l66 = (plateau_cnt < 8'hff);
  assign raw_data_out_valid = raw_data_regNext_valid;
  assign raw_data_out_payload_cha_i = raw_data_regNext_payload_cha_i;
  assign raw_data_out_payload_cha_q = raw_data_regNext_payload_cha_q;
  assign corr_result_valid = autoCorrelator_2_corr_result_valid;
  assign corr_result_payload_cha_i = autoCorrelator_2_corr_result_payload_cha_i;
  assign corr_result_payload_cha_q = autoCorrelator_2_corr_result_payload_cha_q;
  assign pkg_detected = ((min_plateau <= plateau_cnt) && gate_pkg_det);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      gate_pkg_det <= 1'b0;
      prod_avg_mag <= 36'h0;
      plateau_cnt <= 8'h0;
      _zz_gate_pkg_det <= 24'h0;
      powerMeter_1_power_result_valid_regNext <= 1'b0;
      raw_data_regNext_valid <= 1'b0;
    end else begin
      _zz_gate_pkg_det <= (_zz__zz_gate_pkg_det + _zz__zz_gate_pkg_det_5);
      powerMeter_1_power_result_valid_regNext <= powerMeter_1_power_result_valid;
      if(powerMeter_1_power_result_valid_regNext) begin
        gate_pkg_det <= (_zz_gate_pkg_det_1 < prod_avg_mag);
      end else begin
        gate_pkg_det <= 1'b0;
      end
      if(gate_pkg_det) begin
        if(when_PreambleDetector_l66) begin
          plateau_cnt <= (plateau_cnt + 8'h01);
        end
      end else begin
        plateau_cnt <= 8'h0;
      end
      if(autoCorrelator_2_corr_result_valid) begin
        prod_avg_mag <= (_zz_prod_avg_mag + _zz_prod_avg_mag_5);
      end else begin
        prod_avg_mag <= 36'h0;
      end
      raw_data_regNext_valid <= raw_data_valid;
    end
  end

  always @(posedge clk) begin
    raw_data_regNext_payload_cha_i <= raw_data_payload_cha_i;
    raw_data_regNext_payload_cha_q <= raw_data_payload_cha_q;
  end


endmodule

module TransposeFIR (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_0,
  input      [11:0]   raw_data_payload_1,
  output              filtered_data_valid,
  output     [18:0]   filtered_data_payload_0,
  output     [18:0]   filtered_data_payload_1,
  input               clk,
  input               reset
);

  wire       [18:0]   transposeCore_132_next_adder_data;
  wire       [18:0]   transposeCore_133_next_adder_data;
  wire       [18:0]   transposeCore_134_next_adder_data;
  wire       [18:0]   transposeCore_135_next_adder_data;
  wire       [18:0]   transposeCore_136_next_adder_data;
  wire       [18:0]   transposeCore_137_next_adder_data;
  wire       [18:0]   transposeCore_138_next_adder_data;
  wire       [18:0]   transposeCore_139_next_adder_data;
  wire       [18:0]   transposeCore_140_next_adder_data;
  wire       [18:0]   transposeCore_141_next_adder_data;
  wire       [18:0]   transposeCore_142_next_adder_data;
  wire       [18:0]   transposeCore_143_next_adder_data;
  wire       [18:0]   transposeCore_144_next_adder_data;
  wire       [18:0]   transposeCore_145_next_adder_data;
  wire       [18:0]   transposeCore_146_next_adder_data;
  wire       [18:0]   transposeCore_147_next_adder_data;
  wire       [18:0]   transposeCore_148_next_adder_data;
  wire       [18:0]   transposeCore_149_next_adder_data;
  wire       [18:0]   transposeCore_150_next_adder_data;
  wire       [18:0]   transposeCore_151_next_adder_data;
  wire       [18:0]   transposeCore_152_next_adder_data;
  wire       [18:0]   transposeCore_153_next_adder_data;
  wire       [18:0]   transposeCore_154_next_adder_data;
  wire       [18:0]   transposeCore_155_next_adder_data;
  wire       [18:0]   transposeCore_156_next_adder_data;
  wire       [18:0]   transposeCore_157_next_adder_data;
  wire       [18:0]   transposeCore_158_next_adder_data;
  wire       [18:0]   transposeCore_159_next_adder_data;
  wire       [18:0]   transposeCore_160_next_adder_data;
  wire       [18:0]   transposeCore_161_next_adder_data;
  wire       [18:0]   transposeCore_162_next_adder_data;
  wire       [18:0]   transposeCore_163_next_adder_data;
  wire       [18:0]   transposeCore_164_next_adder_data;
  wire       [18:0]   transposeCore_165_next_adder_data;
  wire       [18:0]   transposeCore_166_next_adder_data;
  wire       [18:0]   transposeCore_167_next_adder_data;
  wire       [18:0]   transposeCore_168_next_adder_data;
  wire       [18:0]   transposeCore_169_next_adder_data;
  wire       [18:0]   transposeCore_170_next_adder_data;
  wire       [18:0]   transposeCore_171_next_adder_data;
  wire       [18:0]   transposeCore_172_next_adder_data;
  wire       [18:0]   transposeCore_173_next_adder_data;
  wire       [18:0]   transposeCore_174_next_adder_data;
  wire       [18:0]   transposeCore_175_next_adder_data;
  wire       [18:0]   transposeCore_176_next_adder_data;
  wire       [18:0]   transposeCore_177_next_adder_data;
  wire       [18:0]   transposeCore_178_next_adder_data;
  wire       [18:0]   transposeCore_179_next_adder_data;
  wire       [18:0]   transposeCore_180_next_adder_data;
  wire       [18:0]   transposeCore_181_next_adder_data;
  wire       [18:0]   transposeCore_182_next_adder_data;
  wire       [18:0]   transposeCore_183_next_adder_data;
  wire       [18:0]   transposeCore_184_next_adder_data;
  wire       [18:0]   transposeCore_185_next_adder_data;
  wire       [18:0]   transposeCore_186_next_adder_data;
  wire       [18:0]   transposeCore_187_next_adder_data;
  wire       [18:0]   transposeCore_188_next_adder_data;
  wire       [18:0]   transposeCore_189_next_adder_data;
  wire       [18:0]   transposeCore_190_next_adder_data;
  wire       [18:0]   transposeCore_191_next_adder_data;
  wire       [18:0]   transposeCore_192_next_adder_data;
  wire       [18:0]   transposeCore_193_next_adder_data;
  wire       [18:0]   transposeCore_194_next_adder_data;
  wire       [18:0]   transposeCore_195_next_adder_data;
  wire       [18:0]   transposeCore_196_next_adder_data;
  wire       [18:0]   transposeCore_197_next_adder_data;
  reg        [6:0]    coff_mem_0;
  reg        [6:0]    coff_mem_1;
  reg        [6:0]    coff_mem_2;
  reg        [6:0]    coff_mem_3;
  reg        [6:0]    coff_mem_4;
  reg        [6:0]    coff_mem_5;
  reg        [6:0]    coff_mem_6;
  reg        [6:0]    coff_mem_7;
  reg        [6:0]    coff_mem_8;
  reg        [6:0]    coff_mem_9;
  reg        [6:0]    coff_mem_10;
  reg        [6:0]    coff_mem_11;
  reg        [6:0]    coff_mem_12;
  reg        [6:0]    coff_mem_13;
  reg        [6:0]    coff_mem_14;
  reg        [6:0]    coff_mem_15;
  reg        [6:0]    coff_mem_16;
  reg        [6:0]    coff_mem_17;
  reg        [6:0]    coff_mem_18;
  reg        [6:0]    coff_mem_19;
  reg        [6:0]    coff_mem_20;
  reg        [6:0]    coff_mem_21;
  reg        [6:0]    coff_mem_22;
  reg        [6:0]    coff_mem_23;
  reg        [6:0]    coff_mem_24;
  reg        [6:0]    coff_mem_25;
  reg        [6:0]    coff_mem_26;
  reg        [6:0]    coff_mem_27;
  reg        [6:0]    coff_mem_28;
  reg        [6:0]    coff_mem_29;
  reg        [6:0]    coff_mem_30;
  reg        [6:0]    coff_mem_31;
  reg        [6:0]    coff_mem_32;
  wire                filtered_data_valid_vec_0;
  wire                filtered_data_valid_vec_1;

  TransposeCore transposeCore_132 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_0[6:0]                          ), //i
    .adder_data         (19'h0                                    ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_132_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_133 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_1[6:0]                          ), //i
    .adder_data         (transposeCore_132_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_133_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_134 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_2[6:0]                          ), //i
    .adder_data         (transposeCore_133_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_134_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_135 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_3[6:0]                          ), //i
    .adder_data         (transposeCore_134_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_135_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_136 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_4[6:0]                          ), //i
    .adder_data         (transposeCore_135_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_136_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_137 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_5[6:0]                          ), //i
    .adder_data         (transposeCore_136_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_137_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_138 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_6[6:0]                          ), //i
    .adder_data         (transposeCore_137_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_138_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_139 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_7[6:0]                          ), //i
    .adder_data         (transposeCore_138_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_139_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_140 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_8[6:0]                          ), //i
    .adder_data         (transposeCore_139_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_140_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_141 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_9[6:0]                          ), //i
    .adder_data         (transposeCore_140_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_141_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_142 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_10[6:0]                         ), //i
    .adder_data         (transposeCore_141_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_142_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_143 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_11[6:0]                         ), //i
    .adder_data         (transposeCore_142_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_143_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_144 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_12[6:0]                         ), //i
    .adder_data         (transposeCore_143_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_144_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_145 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_13[6:0]                         ), //i
    .adder_data         (transposeCore_144_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_145_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_146 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_14[6:0]                         ), //i
    .adder_data         (transposeCore_145_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_146_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_147 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_15[6:0]                         ), //i
    .adder_data         (transposeCore_146_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_147_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_148 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_16[6:0]                         ), //i
    .adder_data         (transposeCore_147_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_148_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_149 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_17[6:0]                         ), //i
    .adder_data         (transposeCore_148_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_149_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_150 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_18[6:0]                         ), //i
    .adder_data         (transposeCore_149_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_150_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_151 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_19[6:0]                         ), //i
    .adder_data         (transposeCore_150_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_151_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_152 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_20[6:0]                         ), //i
    .adder_data         (transposeCore_151_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_152_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_153 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_21[6:0]                         ), //i
    .adder_data         (transposeCore_152_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_153_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_154 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_22[6:0]                         ), //i
    .adder_data         (transposeCore_153_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_154_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_155 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_23[6:0]                         ), //i
    .adder_data         (transposeCore_154_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_155_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_156 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_24[6:0]                         ), //i
    .adder_data         (transposeCore_155_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_156_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_157 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_25[6:0]                         ), //i
    .adder_data         (transposeCore_156_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_157_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_158 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_26[6:0]                         ), //i
    .adder_data         (transposeCore_157_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_158_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_159 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_27[6:0]                         ), //i
    .adder_data         (transposeCore_158_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_159_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_160 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_28[6:0]                         ), //i
    .adder_data         (transposeCore_159_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_160_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_161 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_29[6:0]                         ), //i
    .adder_data         (transposeCore_160_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_161_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_162 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_30[6:0]                         ), //i
    .adder_data         (transposeCore_161_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_162_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_163 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_31[6:0]                         ), //i
    .adder_data         (transposeCore_162_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_163_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_164 (
    .input_data         (raw_data_payload_0[11:0]                 ), //i
    .coff_data          (coff_mem_32[6:0]                         ), //i
    .adder_data         (transposeCore_163_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_164_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_165 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_0[6:0]                          ), //i
    .adder_data         (19'h0                                    ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_165_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_166 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_1[6:0]                          ), //i
    .adder_data         (transposeCore_165_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_166_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_167 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_2[6:0]                          ), //i
    .adder_data         (transposeCore_166_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_167_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_168 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_3[6:0]                          ), //i
    .adder_data         (transposeCore_167_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_168_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_169 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_4[6:0]                          ), //i
    .adder_data         (transposeCore_168_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_169_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_170 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_5[6:0]                          ), //i
    .adder_data         (transposeCore_169_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_170_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_171 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_6[6:0]                          ), //i
    .adder_data         (transposeCore_170_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_171_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_172 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_7[6:0]                          ), //i
    .adder_data         (transposeCore_171_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_172_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_173 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_8[6:0]                          ), //i
    .adder_data         (transposeCore_172_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_173_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_174 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_9[6:0]                          ), //i
    .adder_data         (transposeCore_173_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_174_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_175 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_10[6:0]                         ), //i
    .adder_data         (transposeCore_174_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_175_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_176 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_11[6:0]                         ), //i
    .adder_data         (transposeCore_175_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_176_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_177 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_12[6:0]                         ), //i
    .adder_data         (transposeCore_176_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_177_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_178 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_13[6:0]                         ), //i
    .adder_data         (transposeCore_177_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_178_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_179 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_14[6:0]                         ), //i
    .adder_data         (transposeCore_178_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_179_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_180 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_15[6:0]                         ), //i
    .adder_data         (transposeCore_179_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_180_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_181 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_16[6:0]                         ), //i
    .adder_data         (transposeCore_180_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_181_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_182 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_17[6:0]                         ), //i
    .adder_data         (transposeCore_181_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_182_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_183 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_18[6:0]                         ), //i
    .adder_data         (transposeCore_182_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_183_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_184 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_19[6:0]                         ), //i
    .adder_data         (transposeCore_183_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_184_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_185 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_20[6:0]                         ), //i
    .adder_data         (transposeCore_184_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_185_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_186 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_21[6:0]                         ), //i
    .adder_data         (transposeCore_185_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_186_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_187 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_22[6:0]                         ), //i
    .adder_data         (transposeCore_186_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_187_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_188 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_23[6:0]                         ), //i
    .adder_data         (transposeCore_187_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_188_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_189 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_24[6:0]                         ), //i
    .adder_data         (transposeCore_188_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_189_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_190 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_25[6:0]                         ), //i
    .adder_data         (transposeCore_189_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_190_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_191 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_26[6:0]                         ), //i
    .adder_data         (transposeCore_190_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_191_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_192 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_27[6:0]                         ), //i
    .adder_data         (transposeCore_191_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_192_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_193 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_28[6:0]                         ), //i
    .adder_data         (transposeCore_192_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_193_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_194 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_29[6:0]                         ), //i
    .adder_data         (transposeCore_193_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_194_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_195 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_30[6:0]                         ), //i
    .adder_data         (transposeCore_194_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_195_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_196 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_31[6:0]                         ), //i
    .adder_data         (transposeCore_195_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_196_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_197 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_32[6:0]                         ), //i
    .adder_data         (transposeCore_196_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_197_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  assign filtered_data_payload_0 = transposeCore_164_next_adder_data;
  assign filtered_data_valid_vec_0 = raw_data_valid;
  assign filtered_data_payload_1 = transposeCore_197_next_adder_data;
  assign filtered_data_valid_vec_1 = raw_data_valid;
  assign filtered_data_valid = (filtered_data_valid_vec_0 && filtered_data_valid_vec_1);
  always @(posedge clk) begin
    coff_mem_0 <= 7'h03;
    coff_mem_1 <= 7'h01;
    coff_mem_2 <= 7'h7e;
    coff_mem_3 <= 7'h7c;
    coff_mem_4 <= 7'h79;
    coff_mem_5 <= 7'h77;
    coff_mem_6 <= 7'h77;
    coff_mem_7 <= 7'h79;
    coff_mem_8 <= 7'h7d;
    coff_mem_9 <= 7'h02;
    coff_mem_10 <= 7'h0a;
    coff_mem_11 <= 7'h13;
    coff_mem_12 <= 7'h1c;
    coff_mem_13 <= 7'h24;
    coff_mem_14 <= 7'h2b;
    coff_mem_15 <= 7'h30;
    coff_mem_16 <= 7'h31;
    coff_mem_17 <= 7'h30;
    coff_mem_18 <= 7'h2b;
    coff_mem_19 <= 7'h24;
    coff_mem_20 <= 7'h1c;
    coff_mem_21 <= 7'h13;
    coff_mem_22 <= 7'h0a;
    coff_mem_23 <= 7'h02;
    coff_mem_24 <= 7'h7d;
    coff_mem_25 <= 7'h79;
    coff_mem_26 <= 7'h77;
    coff_mem_27 <= 7'h77;
    coff_mem_28 <= 7'h79;
    coff_mem_29 <= 7'h7c;
    coff_mem_30 <= 7'h7e;
    coff_mem_31 <= 7'h01;
    coff_mem_32 <= 7'h03;
  end


endmodule

module FlowMux_1 (
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
  input               clk,
  input               reset
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
      2'b00 : _zz_mod_iq_payload_fragment_cha_i = codeTableI_0;
      2'b01 : _zz_mod_iq_payload_fragment_cha_i = codeTableI_1;
      2'b10 : _zz_mod_iq_payload_fragment_cha_i = codeTableI_2;
      default : _zz_mod_iq_payload_fragment_cha_i = codeTableI_3;
    endcase
  end

  always @(*) begin
    case(_zz_mod_iq_payload_fragment_cha_q_1)
      2'b00 : _zz_mod_iq_payload_fragment_cha_q = codeTableQ_0;
      2'b01 : _zz_mod_iq_payload_fragment_cha_q = codeTableQ_1;
      2'b10 : _zz_mod_iq_payload_fragment_cha_q = codeTableQ_2;
      default : _zz_mod_iq_payload_fragment_cha_q = codeTableQ_3;
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

  always @(posedge clk) begin
    unit_data_payload_regNext_last <= unit_data_payload_last;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
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
  input               clk,
  input               reset
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
      2'b00 : _zz__zz_mod_iq_0 = codeTable_0;
      2'b01 : _zz__zz_mod_iq_0 = codeTable_1;
      2'b10 : _zz__zz_mod_iq_0 = codeTable_2;
      default : _zz__zz_mod_iq_0 = codeTable_3;
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

  always @(posedge clk) begin
    unit_data_payload_regNext_last <= unit_data_payload_last;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
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
  input               clk,
  input               reset
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
      1'b0 : _zz__zz_mod_iq_0 = codeTable_0;
      default : _zz__zz_mod_iq_0 = codeTable_1;
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

  always @(posedge clk) begin
    unit_data_payload_regNext_last <= unit_data_payload_last;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
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

module FlowDeMux_1 (
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
        coded_data_valid_1 <= 1'b0;
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

module StreamFifo_2 (
  input               io_push_valid,
  output              io_push_ready,
  input      [7:0]    io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [7:0]    io_pop_payload,
  input               io_flush,
  output     [4:0]    io_occupancy,
  output     [4:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [7:0]    _zz_logic_ram_port0;
  wire       [3:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [3:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [7:0]    _zz_logic_ram_port_1;
  wire       [3:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [3:0]    logic_pushPtr_valueNext;
  reg        [3:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [3:0]    logic_popPtr_valueNext;
  reg        [3:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire                when_Stream_l954;
  wire       [3:0]    logic_ptrDif;
  reg [7:0] logic_ram [0:15];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {3'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {3'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_pop_payload = 1'b1;
  assign _zz_logic_ram_port_1 = io_push_payload;
  always @(posedge clk) begin
    if(_zz_io_pop_payload) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 4'b1111);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 4'b0000;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 4'b1111);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 4'b0000;
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
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 4'b0000;
      logic_popPtr_value <= 4'b0000;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
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
  output reg [6:0]    io_occupancy,
  output reg [6:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [8:0]    _zz_logic_ram_port0;
  wire       [6:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [6:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [8:0]    _zz_logic_ram_port_1;
  wire       [6:0]    _zz_io_occupancy;
  wire       [6:0]    _zz_io_availability;
  wire       [6:0]    _zz_io_availability_1;
  wire       [6:0]    _zz_io_availability_2;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [6:0]    logic_pushPtr_valueNext;
  reg        [6:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [6:0]    logic_popPtr_valueNext;
  reg        [6:0]    logic_popPtr_value;
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
  wire                when_Stream_l954;
  wire       [6:0]    logic_ptrDif;
  reg [8:0] logic_ram [0:126];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {6'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {6'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (7'h7f + logic_ptrDif);
  assign _zz_io_availability = (7'h7f + _zz_io_availability_1);
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 7'h7e);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 7'h0;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 7'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 7'h7e);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 7'h0;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 7'h0;
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
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 7'h7f : 7'h0);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 7'h0 : 7'h7f);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 7'h0;
      logic_popPtr_value <= 7'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module LifoMux (
  input      [0:0]    io_select,
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input               io_inputs_0_payload_last,
  input      [0:0]    io_inputs_0_payload_fragment,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input               io_inputs_1_payload_last,
  input      [0:0]    io_inputs_1_payload_fragment,
  output              io_output_valid,
  input               io_output_ready,
  output              io_output_payload_last,
  output     [0:0]    io_output_payload_fragment
);

  reg                 _zz_io_output_valid;
  reg                 _zz_io_output_payload_last;
  reg        [0:0]    _zz_io_output_payload_fragment;

  always @(*) begin
    case(io_select)
      1'b0 : begin
        _zz_io_output_valid = io_inputs_0_valid;
        _zz_io_output_payload_last = io_inputs_0_payload_last;
        _zz_io_output_payload_fragment = io_inputs_0_payload_fragment;
      end
      default : begin
        _zz_io_output_valid = io_inputs_1_valid;
        _zz_io_output_payload_last = io_inputs_1_payload_last;
        _zz_io_output_payload_fragment = io_inputs_1_payload_fragment;
      end
    endcase
  end

  assign io_inputs_0_ready = ((io_select == 1'b0) && io_output_ready);
  assign io_inputs_1_ready = ((io_select == 1'b1) && io_output_ready);
  assign io_output_valid = _zz_io_output_valid;
  assign io_output_payload_last = _zz_io_output_payload_last;
  assign io_output_payload_fragment = _zz_io_output_payload_fragment;

endmodule

module LifoDemux (
  input      [0:0]    select_1,
  input               input_valid,
  output reg          input_ready,
  input               input_payload_last,
  input      [0:0]    input_payload_fragment,
  output reg          outputs_0_valid,
  input               outputs_0_ready,
  output              outputs_0_payload_last,
  output     [0:0]    outputs_0_payload_fragment,
  output reg          outputs_1_valid,
  input               outputs_1_ready,
  output              outputs_1_payload_last,
  output     [0:0]    outputs_1_payload_fragment
);

  wire                when_SISOLifo_l57;
  wire                when_SISOLifo_l57_1;

  always @(*) begin
    input_ready = 1'b0;
    if(!when_SISOLifo_l57) begin
      input_ready = outputs_0_ready;
    end
    if(!when_SISOLifo_l57_1) begin
      input_ready = outputs_1_ready;
    end
  end

  assign outputs_0_payload_last = input_payload_last;
  assign outputs_0_payload_fragment = input_payload_fragment;
  assign when_SISOLifo_l57 = (1'b0 != select_1);
  always @(*) begin
    if(when_SISOLifo_l57) begin
      outputs_0_valid = 1'b0;
    end else begin
      outputs_0_valid = input_valid;
    end
  end

  assign outputs_1_payload_last = input_payload_last;
  assign outputs_1_payload_fragment = input_payload_fragment;
  assign when_SISOLifo_l57_1 = (1'b1 != select_1);
  always @(*) begin
    if(when_SISOLifo_l57_1) begin
      outputs_1_valid = 1'b0;
    end else begin
      outputs_1_valid = input_valid;
    end
  end


endmodule

//SISOLifo replaced by SISOLifo

module SISOLifo (
  input               push_valid,
  output              push_ready,
  input               push_payload_last,
  input      [0:0]    push_payload_fragment,
  output              pop_valid,
  input               pop_ready,
  output              pop_payload_last,
  output     [0:0]    pop_payload_fragment,
  input               push_method,
  output              empty,
  output              full,
  input               clk,
  input               reset
);

  reg                 _zz_lifo_last;
  wire       [8:0]    _zz_lifo_last_1;
  reg        [0:0]    _zz_pop_payload_fragment;
  wire       [8:0]    _zz_pop_payload_fragment_1;
  reg        [0:0]    lifo_data_0;
  reg        [0:0]    lifo_data_1;
  reg        [0:0]    lifo_data_2;
  reg        [0:0]    lifo_data_3;
  reg        [0:0]    lifo_data_4;
  reg        [0:0]    lifo_data_5;
  reg        [0:0]    lifo_data_6;
  reg        [0:0]    lifo_data_7;
  reg        [0:0]    lifo_data_8;
  reg        [0:0]    lifo_data_9;
  reg        [0:0]    lifo_data_10;
  reg        [0:0]    lifo_data_11;
  reg        [0:0]    lifo_data_12;
  reg        [0:0]    lifo_data_13;
  reg        [0:0]    lifo_data_14;
  reg        [0:0]    lifo_data_15;
  reg        [0:0]    lifo_data_16;
  reg        [0:0]    lifo_data_17;
  reg        [0:0]    lifo_data_18;
  reg        [0:0]    lifo_data_19;
  reg        [0:0]    lifo_data_20;
  reg        [0:0]    lifo_data_21;
  reg        [0:0]    lifo_data_22;
  reg        [0:0]    lifo_data_23;
  reg        [0:0]    lifo_data_24;
  reg        [0:0]    lifo_data_25;
  reg        [0:0]    lifo_data_26;
  reg        [0:0]    lifo_data_27;
  reg        [0:0]    lifo_data_28;
  reg        [0:0]    lifo_data_29;
  reg        [0:0]    lifo_data_30;
  reg        [0:0]    lifo_data_31;
  reg        [0:0]    lifo_data_32;
  reg        [0:0]    lifo_data_33;
  reg        [0:0]    lifo_data_34;
  reg        [0:0]    lifo_data_35;
  reg        [0:0]    lifo_data_36;
  reg        [0:0]    lifo_data_37;
  reg        [0:0]    lifo_data_38;
  reg        [0:0]    lifo_data_39;
  reg        [0:0]    lifo_data_40;
  reg        [0:0]    lifo_data_41;
  reg        [0:0]    lifo_data_42;
  reg        [0:0]    lifo_data_43;
  reg        [0:0]    lifo_data_44;
  reg        [0:0]    lifo_data_45;
  reg        [0:0]    lifo_data_46;
  reg        [0:0]    lifo_data_47;
  reg        [0:0]    lifo_data_48;
  reg        [0:0]    lifo_data_49;
  reg        [0:0]    lifo_data_50;
  reg        [0:0]    lifo_data_51;
  reg        [0:0]    lifo_data_52;
  reg        [0:0]    lifo_data_53;
  reg        [0:0]    lifo_data_54;
  reg        [0:0]    lifo_data_55;
  reg        [0:0]    lifo_data_56;
  reg        [0:0]    lifo_data_57;
  reg        [0:0]    lifo_data_58;
  reg        [0:0]    lifo_data_59;
  reg        [0:0]    lifo_data_60;
  reg        [0:0]    lifo_data_61;
  reg        [0:0]    lifo_data_62;
  reg        [0:0]    lifo_data_63;
  reg        [0:0]    lifo_data_64;
  reg        [0:0]    lifo_data_65;
  reg        [0:0]    lifo_data_66;
  reg        [0:0]    lifo_data_67;
  reg        [0:0]    lifo_data_68;
  reg        [0:0]    lifo_data_69;
  reg        [0:0]    lifo_data_70;
  reg        [0:0]    lifo_data_71;
  reg        [0:0]    lifo_data_72;
  reg        [0:0]    lifo_data_73;
  reg        [0:0]    lifo_data_74;
  reg        [0:0]    lifo_data_75;
  reg        [0:0]    lifo_data_76;
  reg        [0:0]    lifo_data_77;
  reg        [0:0]    lifo_data_78;
  reg        [0:0]    lifo_data_79;
  reg        [0:0]    lifo_data_80;
  reg        [0:0]    lifo_data_81;
  reg        [0:0]    lifo_data_82;
  reg        [0:0]    lifo_data_83;
  reg        [0:0]    lifo_data_84;
  reg        [0:0]    lifo_data_85;
  reg        [0:0]    lifo_data_86;
  reg        [0:0]    lifo_data_87;
  reg        [0:0]    lifo_data_88;
  reg        [0:0]    lifo_data_89;
  reg        [0:0]    lifo_data_90;
  reg        [0:0]    lifo_data_91;
  reg        [0:0]    lifo_data_92;
  reg        [0:0]    lifo_data_93;
  reg        [0:0]    lifo_data_94;
  reg        [0:0]    lifo_data_95;
  reg        [0:0]    lifo_data_96;
  reg        [0:0]    lifo_data_97;
  reg        [0:0]    lifo_data_98;
  reg        [0:0]    lifo_data_99;
  reg        [0:0]    lifo_data_100;
  reg        [0:0]    lifo_data_101;
  reg        [0:0]    lifo_data_102;
  reg        [0:0]    lifo_data_103;
  reg        [0:0]    lifo_data_104;
  reg        [0:0]    lifo_data_105;
  reg        [0:0]    lifo_data_106;
  reg        [0:0]    lifo_data_107;
  reg        [0:0]    lifo_data_108;
  reg        [0:0]    lifo_data_109;
  reg        [0:0]    lifo_data_110;
  reg        [0:0]    lifo_data_111;
  reg        [0:0]    lifo_data_112;
  reg        [0:0]    lifo_data_113;
  reg        [0:0]    lifo_data_114;
  reg        [0:0]    lifo_data_115;
  reg        [0:0]    lifo_data_116;
  reg        [0:0]    lifo_data_117;
  reg        [0:0]    lifo_data_118;
  reg        [0:0]    lifo_data_119;
  reg        [0:0]    lifo_data_120;
  reg        [0:0]    lifo_data_121;
  reg        [0:0]    lifo_data_122;
  reg        [0:0]    lifo_data_123;
  reg        [0:0]    lifo_data_124;
  reg        [0:0]    lifo_data_125;
  reg        [0:0]    lifo_data_126;
  reg        [0:0]    lifo_data_127;
  reg        [0:0]    lifo_data_128;
  reg        [0:0]    lifo_data_129;
  reg        [0:0]    lifo_data_130;
  reg        [0:0]    lifo_data_131;
  reg        [0:0]    lifo_data_132;
  reg        [0:0]    lifo_data_133;
  reg        [0:0]    lifo_data_134;
  reg        [0:0]    lifo_data_135;
  reg        [0:0]    lifo_data_136;
  reg        [0:0]    lifo_data_137;
  reg        [0:0]    lifo_data_138;
  reg        [0:0]    lifo_data_139;
  reg        [0:0]    lifo_data_140;
  reg        [0:0]    lifo_data_141;
  reg        [0:0]    lifo_data_142;
  reg        [0:0]    lifo_data_143;
  reg        [0:0]    lifo_data_144;
  reg        [0:0]    lifo_data_145;
  reg        [0:0]    lifo_data_146;
  reg        [0:0]    lifo_data_147;
  reg        [0:0]    lifo_data_148;
  reg        [0:0]    lifo_data_149;
  reg        [0:0]    lifo_data_150;
  reg        [0:0]    lifo_data_151;
  reg        [0:0]    lifo_data_152;
  reg        [0:0]    lifo_data_153;
  reg        [0:0]    lifo_data_154;
  reg        [0:0]    lifo_data_155;
  reg        [0:0]    lifo_data_156;
  reg        [0:0]    lifo_data_157;
  reg        [0:0]    lifo_data_158;
  reg        [0:0]    lifo_data_159;
  reg        [0:0]    lifo_data_160;
  reg        [0:0]    lifo_data_161;
  reg        [0:0]    lifo_data_162;
  reg        [0:0]    lifo_data_163;
  reg        [0:0]    lifo_data_164;
  reg        [0:0]    lifo_data_165;
  reg        [0:0]    lifo_data_166;
  reg        [0:0]    lifo_data_167;
  reg        [0:0]    lifo_data_168;
  reg        [0:0]    lifo_data_169;
  reg        [0:0]    lifo_data_170;
  reg        [0:0]    lifo_data_171;
  reg        [0:0]    lifo_data_172;
  reg        [0:0]    lifo_data_173;
  reg        [0:0]    lifo_data_174;
  reg        [0:0]    lifo_data_175;
  reg        [0:0]    lifo_data_176;
  reg        [0:0]    lifo_data_177;
  reg        [0:0]    lifo_data_178;
  reg        [0:0]    lifo_data_179;
  reg        [0:0]    lifo_data_180;
  reg        [0:0]    lifo_data_181;
  reg        [0:0]    lifo_data_182;
  reg        [0:0]    lifo_data_183;
  reg        [0:0]    lifo_data_184;
  reg        [0:0]    lifo_data_185;
  reg        [0:0]    lifo_data_186;
  reg        [0:0]    lifo_data_187;
  reg        [0:0]    lifo_data_188;
  reg        [0:0]    lifo_data_189;
  reg        [0:0]    lifo_data_190;
  reg        [0:0]    lifo_data_191;
  reg        [0:0]    lifo_data_192;
  reg        [0:0]    lifo_data_193;
  reg        [0:0]    lifo_data_194;
  reg        [0:0]    lifo_data_195;
  reg        [0:0]    lifo_data_196;
  reg        [0:0]    lifo_data_197;
  reg        [0:0]    lifo_data_198;
  reg        [0:0]    lifo_data_199;
  reg        [0:0]    lifo_data_200;
  reg        [0:0]    lifo_data_201;
  reg        [0:0]    lifo_data_202;
  reg        [0:0]    lifo_data_203;
  reg        [0:0]    lifo_data_204;
  reg        [0:0]    lifo_data_205;
  reg        [0:0]    lifo_data_206;
  reg        [0:0]    lifo_data_207;
  reg        [0:0]    lifo_data_208;
  reg        [0:0]    lifo_data_209;
  reg        [0:0]    lifo_data_210;
  reg        [0:0]    lifo_data_211;
  reg        [0:0]    lifo_data_212;
  reg        [0:0]    lifo_data_213;
  reg        [0:0]    lifo_data_214;
  reg        [0:0]    lifo_data_215;
  reg        [0:0]    lifo_data_216;
  reg        [0:0]    lifo_data_217;
  reg        [0:0]    lifo_data_218;
  reg        [0:0]    lifo_data_219;
  reg        [0:0]    lifo_data_220;
  reg        [0:0]    lifo_data_221;
  reg        [0:0]    lifo_data_222;
  reg        [0:0]    lifo_data_223;
  reg        [0:0]    lifo_data_224;
  reg        [0:0]    lifo_data_225;
  reg        [0:0]    lifo_data_226;
  reg        [0:0]    lifo_data_227;
  reg        [0:0]    lifo_data_228;
  reg        [0:0]    lifo_data_229;
  reg        [0:0]    lifo_data_230;
  reg        [0:0]    lifo_data_231;
  reg        [0:0]    lifo_data_232;
  reg        [0:0]    lifo_data_233;
  reg        [0:0]    lifo_data_234;
  reg        [0:0]    lifo_data_235;
  reg        [0:0]    lifo_data_236;
  reg        [0:0]    lifo_data_237;
  reg        [0:0]    lifo_data_238;
  reg        [0:0]    lifo_data_239;
  reg        [0:0]    lifo_data_240;
  reg        [0:0]    lifo_data_241;
  reg        [0:0]    lifo_data_242;
  reg        [0:0]    lifo_data_243;
  reg        [0:0]    lifo_data_244;
  reg        [0:0]    lifo_data_245;
  reg        [0:0]    lifo_data_246;
  reg        [0:0]    lifo_data_247;
  reg        [0:0]    lifo_data_248;
  reg        [0:0]    lifo_data_249;
  reg        [0:0]    lifo_data_250;
  reg        [0:0]    lifo_data_251;
  reg        [0:0]    lifo_data_252;
  reg        [0:0]    lifo_data_253;
  reg        [0:0]    lifo_data_254;
  reg        [0:0]    lifo_data_255;
  reg        [0:0]    lifo_data_256;
  reg        [0:0]    lifo_data_257;
  reg        [0:0]    lifo_data_258;
  reg        [0:0]    lifo_data_259;
  reg        [0:0]    lifo_data_260;
  reg        [0:0]    lifo_data_261;
  reg        [0:0]    lifo_data_262;
  reg        [0:0]    lifo_data_263;
  reg        [0:0]    lifo_data_264;
  reg        [0:0]    lifo_data_265;
  reg        [0:0]    lifo_data_266;
  reg        [0:0]    lifo_data_267;
  reg                 lifo_data_last_0;
  reg                 lifo_data_last_1;
  reg                 lifo_data_last_2;
  reg                 lifo_data_last_3;
  reg                 lifo_data_last_4;
  reg                 lifo_data_last_5;
  reg                 lifo_data_last_6;
  reg                 lifo_data_last_7;
  reg                 lifo_data_last_8;
  reg                 lifo_data_last_9;
  reg                 lifo_data_last_10;
  reg                 lifo_data_last_11;
  reg                 lifo_data_last_12;
  reg                 lifo_data_last_13;
  reg                 lifo_data_last_14;
  reg                 lifo_data_last_15;
  reg                 lifo_data_last_16;
  reg                 lifo_data_last_17;
  reg                 lifo_data_last_18;
  reg                 lifo_data_last_19;
  reg                 lifo_data_last_20;
  reg                 lifo_data_last_21;
  reg                 lifo_data_last_22;
  reg                 lifo_data_last_23;
  reg                 lifo_data_last_24;
  reg                 lifo_data_last_25;
  reg                 lifo_data_last_26;
  reg                 lifo_data_last_27;
  reg                 lifo_data_last_28;
  reg                 lifo_data_last_29;
  reg                 lifo_data_last_30;
  reg                 lifo_data_last_31;
  reg                 lifo_data_last_32;
  reg                 lifo_data_last_33;
  reg                 lifo_data_last_34;
  reg                 lifo_data_last_35;
  reg                 lifo_data_last_36;
  reg                 lifo_data_last_37;
  reg                 lifo_data_last_38;
  reg                 lifo_data_last_39;
  reg                 lifo_data_last_40;
  reg                 lifo_data_last_41;
  reg                 lifo_data_last_42;
  reg                 lifo_data_last_43;
  reg                 lifo_data_last_44;
  reg                 lifo_data_last_45;
  reg                 lifo_data_last_46;
  reg                 lifo_data_last_47;
  reg                 lifo_data_last_48;
  reg                 lifo_data_last_49;
  reg                 lifo_data_last_50;
  reg                 lifo_data_last_51;
  reg                 lifo_data_last_52;
  reg                 lifo_data_last_53;
  reg                 lifo_data_last_54;
  reg                 lifo_data_last_55;
  reg                 lifo_data_last_56;
  reg                 lifo_data_last_57;
  reg                 lifo_data_last_58;
  reg                 lifo_data_last_59;
  reg                 lifo_data_last_60;
  reg                 lifo_data_last_61;
  reg                 lifo_data_last_62;
  reg                 lifo_data_last_63;
  reg                 lifo_data_last_64;
  reg                 lifo_data_last_65;
  reg                 lifo_data_last_66;
  reg                 lifo_data_last_67;
  reg                 lifo_data_last_68;
  reg                 lifo_data_last_69;
  reg                 lifo_data_last_70;
  reg                 lifo_data_last_71;
  reg                 lifo_data_last_72;
  reg                 lifo_data_last_73;
  reg                 lifo_data_last_74;
  reg                 lifo_data_last_75;
  reg                 lifo_data_last_76;
  reg                 lifo_data_last_77;
  reg                 lifo_data_last_78;
  reg                 lifo_data_last_79;
  reg                 lifo_data_last_80;
  reg                 lifo_data_last_81;
  reg                 lifo_data_last_82;
  reg                 lifo_data_last_83;
  reg                 lifo_data_last_84;
  reg                 lifo_data_last_85;
  reg                 lifo_data_last_86;
  reg                 lifo_data_last_87;
  reg                 lifo_data_last_88;
  reg                 lifo_data_last_89;
  reg                 lifo_data_last_90;
  reg                 lifo_data_last_91;
  reg                 lifo_data_last_92;
  reg                 lifo_data_last_93;
  reg                 lifo_data_last_94;
  reg                 lifo_data_last_95;
  reg                 lifo_data_last_96;
  reg                 lifo_data_last_97;
  reg                 lifo_data_last_98;
  reg                 lifo_data_last_99;
  reg                 lifo_data_last_100;
  reg                 lifo_data_last_101;
  reg                 lifo_data_last_102;
  reg                 lifo_data_last_103;
  reg                 lifo_data_last_104;
  reg                 lifo_data_last_105;
  reg                 lifo_data_last_106;
  reg                 lifo_data_last_107;
  reg                 lifo_data_last_108;
  reg                 lifo_data_last_109;
  reg                 lifo_data_last_110;
  reg                 lifo_data_last_111;
  reg                 lifo_data_last_112;
  reg                 lifo_data_last_113;
  reg                 lifo_data_last_114;
  reg                 lifo_data_last_115;
  reg                 lifo_data_last_116;
  reg                 lifo_data_last_117;
  reg                 lifo_data_last_118;
  reg                 lifo_data_last_119;
  reg                 lifo_data_last_120;
  reg                 lifo_data_last_121;
  reg                 lifo_data_last_122;
  reg                 lifo_data_last_123;
  reg                 lifo_data_last_124;
  reg                 lifo_data_last_125;
  reg                 lifo_data_last_126;
  reg                 lifo_data_last_127;
  reg                 lifo_data_last_128;
  reg                 lifo_data_last_129;
  reg                 lifo_data_last_130;
  reg                 lifo_data_last_131;
  reg                 lifo_data_last_132;
  reg                 lifo_data_last_133;
  reg                 lifo_data_last_134;
  reg                 lifo_data_last_135;
  reg                 lifo_data_last_136;
  reg                 lifo_data_last_137;
  reg                 lifo_data_last_138;
  reg                 lifo_data_last_139;
  reg                 lifo_data_last_140;
  reg                 lifo_data_last_141;
  reg                 lifo_data_last_142;
  reg                 lifo_data_last_143;
  reg                 lifo_data_last_144;
  reg                 lifo_data_last_145;
  reg                 lifo_data_last_146;
  reg                 lifo_data_last_147;
  reg                 lifo_data_last_148;
  reg                 lifo_data_last_149;
  reg                 lifo_data_last_150;
  reg                 lifo_data_last_151;
  reg                 lifo_data_last_152;
  reg                 lifo_data_last_153;
  reg                 lifo_data_last_154;
  reg                 lifo_data_last_155;
  reg                 lifo_data_last_156;
  reg                 lifo_data_last_157;
  reg                 lifo_data_last_158;
  reg                 lifo_data_last_159;
  reg                 lifo_data_last_160;
  reg                 lifo_data_last_161;
  reg                 lifo_data_last_162;
  reg                 lifo_data_last_163;
  reg                 lifo_data_last_164;
  reg                 lifo_data_last_165;
  reg                 lifo_data_last_166;
  reg                 lifo_data_last_167;
  reg                 lifo_data_last_168;
  reg                 lifo_data_last_169;
  reg                 lifo_data_last_170;
  reg                 lifo_data_last_171;
  reg                 lifo_data_last_172;
  reg                 lifo_data_last_173;
  reg                 lifo_data_last_174;
  reg                 lifo_data_last_175;
  reg                 lifo_data_last_176;
  reg                 lifo_data_last_177;
  reg                 lifo_data_last_178;
  reg                 lifo_data_last_179;
  reg                 lifo_data_last_180;
  reg                 lifo_data_last_181;
  reg                 lifo_data_last_182;
  reg                 lifo_data_last_183;
  reg                 lifo_data_last_184;
  reg                 lifo_data_last_185;
  reg                 lifo_data_last_186;
  reg                 lifo_data_last_187;
  reg                 lifo_data_last_188;
  reg                 lifo_data_last_189;
  reg                 lifo_data_last_190;
  reg                 lifo_data_last_191;
  reg                 lifo_data_last_192;
  reg                 lifo_data_last_193;
  reg                 lifo_data_last_194;
  reg                 lifo_data_last_195;
  reg                 lifo_data_last_196;
  reg                 lifo_data_last_197;
  reg                 lifo_data_last_198;
  reg                 lifo_data_last_199;
  reg                 lifo_data_last_200;
  reg                 lifo_data_last_201;
  reg                 lifo_data_last_202;
  reg                 lifo_data_last_203;
  reg                 lifo_data_last_204;
  reg                 lifo_data_last_205;
  reg                 lifo_data_last_206;
  reg                 lifo_data_last_207;
  reg                 lifo_data_last_208;
  reg                 lifo_data_last_209;
  reg                 lifo_data_last_210;
  reg                 lifo_data_last_211;
  reg                 lifo_data_last_212;
  reg                 lifo_data_last_213;
  reg                 lifo_data_last_214;
  reg                 lifo_data_last_215;
  reg                 lifo_data_last_216;
  reg                 lifo_data_last_217;
  reg                 lifo_data_last_218;
  reg                 lifo_data_last_219;
  reg                 lifo_data_last_220;
  reg                 lifo_data_last_221;
  reg                 lifo_data_last_222;
  reg                 lifo_data_last_223;
  reg                 lifo_data_last_224;
  reg                 lifo_data_last_225;
  reg                 lifo_data_last_226;
  reg                 lifo_data_last_227;
  reg                 lifo_data_last_228;
  reg                 lifo_data_last_229;
  reg                 lifo_data_last_230;
  reg                 lifo_data_last_231;
  reg                 lifo_data_last_232;
  reg                 lifo_data_last_233;
  reg                 lifo_data_last_234;
  reg                 lifo_data_last_235;
  reg                 lifo_data_last_236;
  reg                 lifo_data_last_237;
  reg                 lifo_data_last_238;
  reg                 lifo_data_last_239;
  reg                 lifo_data_last_240;
  reg                 lifo_data_last_241;
  reg                 lifo_data_last_242;
  reg                 lifo_data_last_243;
  reg                 lifo_data_last_244;
  reg                 lifo_data_last_245;
  reg                 lifo_data_last_246;
  reg                 lifo_data_last_247;
  reg                 lifo_data_last_248;
  reg                 lifo_data_last_249;
  reg                 lifo_data_last_250;
  reg                 lifo_data_last_251;
  reg                 lifo_data_last_252;
  reg                 lifo_data_last_253;
  reg                 lifo_data_last_254;
  reg                 lifo_data_last_255;
  reg                 lifo_data_last_256;
  reg                 lifo_data_last_257;
  reg                 lifo_data_last_258;
  reg                 lifo_data_last_259;
  reg                 lifo_data_last_260;
  reg                 lifo_data_last_261;
  reg                 lifo_data_last_262;
  reg                 lifo_data_last_263;
  reg                 lifo_data_last_264;
  reg                 lifo_data_last_265;
  reg                 lifo_data_last_266;
  reg                 lifo_data_last_267;
  reg        [8:0]    lifo_head_cursor;
  reg                 lifo_last;
  wire                push_fire;
  wire                when_SISOLifo_l25;
  wire       [511:0]  _zz_1;
  wire       [511:0]  _zz_2;
  wire                pop_fire;
  wire                when_SISOLifo_l32;

  assign _zz_lifo_last_1 = (lifo_head_cursor - 9'h001);
  assign _zz_pop_payload_fragment_1 = (lifo_head_cursor - 9'h001);
  always @(*) begin
    case(_zz_lifo_last_1)
      9'b000000000 : _zz_lifo_last = lifo_data_last_0;
      9'b000000001 : _zz_lifo_last = lifo_data_last_1;
      9'b000000010 : _zz_lifo_last = lifo_data_last_2;
      9'b000000011 : _zz_lifo_last = lifo_data_last_3;
      9'b000000100 : _zz_lifo_last = lifo_data_last_4;
      9'b000000101 : _zz_lifo_last = lifo_data_last_5;
      9'b000000110 : _zz_lifo_last = lifo_data_last_6;
      9'b000000111 : _zz_lifo_last = lifo_data_last_7;
      9'b000001000 : _zz_lifo_last = lifo_data_last_8;
      9'b000001001 : _zz_lifo_last = lifo_data_last_9;
      9'b000001010 : _zz_lifo_last = lifo_data_last_10;
      9'b000001011 : _zz_lifo_last = lifo_data_last_11;
      9'b000001100 : _zz_lifo_last = lifo_data_last_12;
      9'b000001101 : _zz_lifo_last = lifo_data_last_13;
      9'b000001110 : _zz_lifo_last = lifo_data_last_14;
      9'b000001111 : _zz_lifo_last = lifo_data_last_15;
      9'b000010000 : _zz_lifo_last = lifo_data_last_16;
      9'b000010001 : _zz_lifo_last = lifo_data_last_17;
      9'b000010010 : _zz_lifo_last = lifo_data_last_18;
      9'b000010011 : _zz_lifo_last = lifo_data_last_19;
      9'b000010100 : _zz_lifo_last = lifo_data_last_20;
      9'b000010101 : _zz_lifo_last = lifo_data_last_21;
      9'b000010110 : _zz_lifo_last = lifo_data_last_22;
      9'b000010111 : _zz_lifo_last = lifo_data_last_23;
      9'b000011000 : _zz_lifo_last = lifo_data_last_24;
      9'b000011001 : _zz_lifo_last = lifo_data_last_25;
      9'b000011010 : _zz_lifo_last = lifo_data_last_26;
      9'b000011011 : _zz_lifo_last = lifo_data_last_27;
      9'b000011100 : _zz_lifo_last = lifo_data_last_28;
      9'b000011101 : _zz_lifo_last = lifo_data_last_29;
      9'b000011110 : _zz_lifo_last = lifo_data_last_30;
      9'b000011111 : _zz_lifo_last = lifo_data_last_31;
      9'b000100000 : _zz_lifo_last = lifo_data_last_32;
      9'b000100001 : _zz_lifo_last = lifo_data_last_33;
      9'b000100010 : _zz_lifo_last = lifo_data_last_34;
      9'b000100011 : _zz_lifo_last = lifo_data_last_35;
      9'b000100100 : _zz_lifo_last = lifo_data_last_36;
      9'b000100101 : _zz_lifo_last = lifo_data_last_37;
      9'b000100110 : _zz_lifo_last = lifo_data_last_38;
      9'b000100111 : _zz_lifo_last = lifo_data_last_39;
      9'b000101000 : _zz_lifo_last = lifo_data_last_40;
      9'b000101001 : _zz_lifo_last = lifo_data_last_41;
      9'b000101010 : _zz_lifo_last = lifo_data_last_42;
      9'b000101011 : _zz_lifo_last = lifo_data_last_43;
      9'b000101100 : _zz_lifo_last = lifo_data_last_44;
      9'b000101101 : _zz_lifo_last = lifo_data_last_45;
      9'b000101110 : _zz_lifo_last = lifo_data_last_46;
      9'b000101111 : _zz_lifo_last = lifo_data_last_47;
      9'b000110000 : _zz_lifo_last = lifo_data_last_48;
      9'b000110001 : _zz_lifo_last = lifo_data_last_49;
      9'b000110010 : _zz_lifo_last = lifo_data_last_50;
      9'b000110011 : _zz_lifo_last = lifo_data_last_51;
      9'b000110100 : _zz_lifo_last = lifo_data_last_52;
      9'b000110101 : _zz_lifo_last = lifo_data_last_53;
      9'b000110110 : _zz_lifo_last = lifo_data_last_54;
      9'b000110111 : _zz_lifo_last = lifo_data_last_55;
      9'b000111000 : _zz_lifo_last = lifo_data_last_56;
      9'b000111001 : _zz_lifo_last = lifo_data_last_57;
      9'b000111010 : _zz_lifo_last = lifo_data_last_58;
      9'b000111011 : _zz_lifo_last = lifo_data_last_59;
      9'b000111100 : _zz_lifo_last = lifo_data_last_60;
      9'b000111101 : _zz_lifo_last = lifo_data_last_61;
      9'b000111110 : _zz_lifo_last = lifo_data_last_62;
      9'b000111111 : _zz_lifo_last = lifo_data_last_63;
      9'b001000000 : _zz_lifo_last = lifo_data_last_64;
      9'b001000001 : _zz_lifo_last = lifo_data_last_65;
      9'b001000010 : _zz_lifo_last = lifo_data_last_66;
      9'b001000011 : _zz_lifo_last = lifo_data_last_67;
      9'b001000100 : _zz_lifo_last = lifo_data_last_68;
      9'b001000101 : _zz_lifo_last = lifo_data_last_69;
      9'b001000110 : _zz_lifo_last = lifo_data_last_70;
      9'b001000111 : _zz_lifo_last = lifo_data_last_71;
      9'b001001000 : _zz_lifo_last = lifo_data_last_72;
      9'b001001001 : _zz_lifo_last = lifo_data_last_73;
      9'b001001010 : _zz_lifo_last = lifo_data_last_74;
      9'b001001011 : _zz_lifo_last = lifo_data_last_75;
      9'b001001100 : _zz_lifo_last = lifo_data_last_76;
      9'b001001101 : _zz_lifo_last = lifo_data_last_77;
      9'b001001110 : _zz_lifo_last = lifo_data_last_78;
      9'b001001111 : _zz_lifo_last = lifo_data_last_79;
      9'b001010000 : _zz_lifo_last = lifo_data_last_80;
      9'b001010001 : _zz_lifo_last = lifo_data_last_81;
      9'b001010010 : _zz_lifo_last = lifo_data_last_82;
      9'b001010011 : _zz_lifo_last = lifo_data_last_83;
      9'b001010100 : _zz_lifo_last = lifo_data_last_84;
      9'b001010101 : _zz_lifo_last = lifo_data_last_85;
      9'b001010110 : _zz_lifo_last = lifo_data_last_86;
      9'b001010111 : _zz_lifo_last = lifo_data_last_87;
      9'b001011000 : _zz_lifo_last = lifo_data_last_88;
      9'b001011001 : _zz_lifo_last = lifo_data_last_89;
      9'b001011010 : _zz_lifo_last = lifo_data_last_90;
      9'b001011011 : _zz_lifo_last = lifo_data_last_91;
      9'b001011100 : _zz_lifo_last = lifo_data_last_92;
      9'b001011101 : _zz_lifo_last = lifo_data_last_93;
      9'b001011110 : _zz_lifo_last = lifo_data_last_94;
      9'b001011111 : _zz_lifo_last = lifo_data_last_95;
      9'b001100000 : _zz_lifo_last = lifo_data_last_96;
      9'b001100001 : _zz_lifo_last = lifo_data_last_97;
      9'b001100010 : _zz_lifo_last = lifo_data_last_98;
      9'b001100011 : _zz_lifo_last = lifo_data_last_99;
      9'b001100100 : _zz_lifo_last = lifo_data_last_100;
      9'b001100101 : _zz_lifo_last = lifo_data_last_101;
      9'b001100110 : _zz_lifo_last = lifo_data_last_102;
      9'b001100111 : _zz_lifo_last = lifo_data_last_103;
      9'b001101000 : _zz_lifo_last = lifo_data_last_104;
      9'b001101001 : _zz_lifo_last = lifo_data_last_105;
      9'b001101010 : _zz_lifo_last = lifo_data_last_106;
      9'b001101011 : _zz_lifo_last = lifo_data_last_107;
      9'b001101100 : _zz_lifo_last = lifo_data_last_108;
      9'b001101101 : _zz_lifo_last = lifo_data_last_109;
      9'b001101110 : _zz_lifo_last = lifo_data_last_110;
      9'b001101111 : _zz_lifo_last = lifo_data_last_111;
      9'b001110000 : _zz_lifo_last = lifo_data_last_112;
      9'b001110001 : _zz_lifo_last = lifo_data_last_113;
      9'b001110010 : _zz_lifo_last = lifo_data_last_114;
      9'b001110011 : _zz_lifo_last = lifo_data_last_115;
      9'b001110100 : _zz_lifo_last = lifo_data_last_116;
      9'b001110101 : _zz_lifo_last = lifo_data_last_117;
      9'b001110110 : _zz_lifo_last = lifo_data_last_118;
      9'b001110111 : _zz_lifo_last = lifo_data_last_119;
      9'b001111000 : _zz_lifo_last = lifo_data_last_120;
      9'b001111001 : _zz_lifo_last = lifo_data_last_121;
      9'b001111010 : _zz_lifo_last = lifo_data_last_122;
      9'b001111011 : _zz_lifo_last = lifo_data_last_123;
      9'b001111100 : _zz_lifo_last = lifo_data_last_124;
      9'b001111101 : _zz_lifo_last = lifo_data_last_125;
      9'b001111110 : _zz_lifo_last = lifo_data_last_126;
      9'b001111111 : _zz_lifo_last = lifo_data_last_127;
      9'b010000000 : _zz_lifo_last = lifo_data_last_128;
      9'b010000001 : _zz_lifo_last = lifo_data_last_129;
      9'b010000010 : _zz_lifo_last = lifo_data_last_130;
      9'b010000011 : _zz_lifo_last = lifo_data_last_131;
      9'b010000100 : _zz_lifo_last = lifo_data_last_132;
      9'b010000101 : _zz_lifo_last = lifo_data_last_133;
      9'b010000110 : _zz_lifo_last = lifo_data_last_134;
      9'b010000111 : _zz_lifo_last = lifo_data_last_135;
      9'b010001000 : _zz_lifo_last = lifo_data_last_136;
      9'b010001001 : _zz_lifo_last = lifo_data_last_137;
      9'b010001010 : _zz_lifo_last = lifo_data_last_138;
      9'b010001011 : _zz_lifo_last = lifo_data_last_139;
      9'b010001100 : _zz_lifo_last = lifo_data_last_140;
      9'b010001101 : _zz_lifo_last = lifo_data_last_141;
      9'b010001110 : _zz_lifo_last = lifo_data_last_142;
      9'b010001111 : _zz_lifo_last = lifo_data_last_143;
      9'b010010000 : _zz_lifo_last = lifo_data_last_144;
      9'b010010001 : _zz_lifo_last = lifo_data_last_145;
      9'b010010010 : _zz_lifo_last = lifo_data_last_146;
      9'b010010011 : _zz_lifo_last = lifo_data_last_147;
      9'b010010100 : _zz_lifo_last = lifo_data_last_148;
      9'b010010101 : _zz_lifo_last = lifo_data_last_149;
      9'b010010110 : _zz_lifo_last = lifo_data_last_150;
      9'b010010111 : _zz_lifo_last = lifo_data_last_151;
      9'b010011000 : _zz_lifo_last = lifo_data_last_152;
      9'b010011001 : _zz_lifo_last = lifo_data_last_153;
      9'b010011010 : _zz_lifo_last = lifo_data_last_154;
      9'b010011011 : _zz_lifo_last = lifo_data_last_155;
      9'b010011100 : _zz_lifo_last = lifo_data_last_156;
      9'b010011101 : _zz_lifo_last = lifo_data_last_157;
      9'b010011110 : _zz_lifo_last = lifo_data_last_158;
      9'b010011111 : _zz_lifo_last = lifo_data_last_159;
      9'b010100000 : _zz_lifo_last = lifo_data_last_160;
      9'b010100001 : _zz_lifo_last = lifo_data_last_161;
      9'b010100010 : _zz_lifo_last = lifo_data_last_162;
      9'b010100011 : _zz_lifo_last = lifo_data_last_163;
      9'b010100100 : _zz_lifo_last = lifo_data_last_164;
      9'b010100101 : _zz_lifo_last = lifo_data_last_165;
      9'b010100110 : _zz_lifo_last = lifo_data_last_166;
      9'b010100111 : _zz_lifo_last = lifo_data_last_167;
      9'b010101000 : _zz_lifo_last = lifo_data_last_168;
      9'b010101001 : _zz_lifo_last = lifo_data_last_169;
      9'b010101010 : _zz_lifo_last = lifo_data_last_170;
      9'b010101011 : _zz_lifo_last = lifo_data_last_171;
      9'b010101100 : _zz_lifo_last = lifo_data_last_172;
      9'b010101101 : _zz_lifo_last = lifo_data_last_173;
      9'b010101110 : _zz_lifo_last = lifo_data_last_174;
      9'b010101111 : _zz_lifo_last = lifo_data_last_175;
      9'b010110000 : _zz_lifo_last = lifo_data_last_176;
      9'b010110001 : _zz_lifo_last = lifo_data_last_177;
      9'b010110010 : _zz_lifo_last = lifo_data_last_178;
      9'b010110011 : _zz_lifo_last = lifo_data_last_179;
      9'b010110100 : _zz_lifo_last = lifo_data_last_180;
      9'b010110101 : _zz_lifo_last = lifo_data_last_181;
      9'b010110110 : _zz_lifo_last = lifo_data_last_182;
      9'b010110111 : _zz_lifo_last = lifo_data_last_183;
      9'b010111000 : _zz_lifo_last = lifo_data_last_184;
      9'b010111001 : _zz_lifo_last = lifo_data_last_185;
      9'b010111010 : _zz_lifo_last = lifo_data_last_186;
      9'b010111011 : _zz_lifo_last = lifo_data_last_187;
      9'b010111100 : _zz_lifo_last = lifo_data_last_188;
      9'b010111101 : _zz_lifo_last = lifo_data_last_189;
      9'b010111110 : _zz_lifo_last = lifo_data_last_190;
      9'b010111111 : _zz_lifo_last = lifo_data_last_191;
      9'b011000000 : _zz_lifo_last = lifo_data_last_192;
      9'b011000001 : _zz_lifo_last = lifo_data_last_193;
      9'b011000010 : _zz_lifo_last = lifo_data_last_194;
      9'b011000011 : _zz_lifo_last = lifo_data_last_195;
      9'b011000100 : _zz_lifo_last = lifo_data_last_196;
      9'b011000101 : _zz_lifo_last = lifo_data_last_197;
      9'b011000110 : _zz_lifo_last = lifo_data_last_198;
      9'b011000111 : _zz_lifo_last = lifo_data_last_199;
      9'b011001000 : _zz_lifo_last = lifo_data_last_200;
      9'b011001001 : _zz_lifo_last = lifo_data_last_201;
      9'b011001010 : _zz_lifo_last = lifo_data_last_202;
      9'b011001011 : _zz_lifo_last = lifo_data_last_203;
      9'b011001100 : _zz_lifo_last = lifo_data_last_204;
      9'b011001101 : _zz_lifo_last = lifo_data_last_205;
      9'b011001110 : _zz_lifo_last = lifo_data_last_206;
      9'b011001111 : _zz_lifo_last = lifo_data_last_207;
      9'b011010000 : _zz_lifo_last = lifo_data_last_208;
      9'b011010001 : _zz_lifo_last = lifo_data_last_209;
      9'b011010010 : _zz_lifo_last = lifo_data_last_210;
      9'b011010011 : _zz_lifo_last = lifo_data_last_211;
      9'b011010100 : _zz_lifo_last = lifo_data_last_212;
      9'b011010101 : _zz_lifo_last = lifo_data_last_213;
      9'b011010110 : _zz_lifo_last = lifo_data_last_214;
      9'b011010111 : _zz_lifo_last = lifo_data_last_215;
      9'b011011000 : _zz_lifo_last = lifo_data_last_216;
      9'b011011001 : _zz_lifo_last = lifo_data_last_217;
      9'b011011010 : _zz_lifo_last = lifo_data_last_218;
      9'b011011011 : _zz_lifo_last = lifo_data_last_219;
      9'b011011100 : _zz_lifo_last = lifo_data_last_220;
      9'b011011101 : _zz_lifo_last = lifo_data_last_221;
      9'b011011110 : _zz_lifo_last = lifo_data_last_222;
      9'b011011111 : _zz_lifo_last = lifo_data_last_223;
      9'b011100000 : _zz_lifo_last = lifo_data_last_224;
      9'b011100001 : _zz_lifo_last = lifo_data_last_225;
      9'b011100010 : _zz_lifo_last = lifo_data_last_226;
      9'b011100011 : _zz_lifo_last = lifo_data_last_227;
      9'b011100100 : _zz_lifo_last = lifo_data_last_228;
      9'b011100101 : _zz_lifo_last = lifo_data_last_229;
      9'b011100110 : _zz_lifo_last = lifo_data_last_230;
      9'b011100111 : _zz_lifo_last = lifo_data_last_231;
      9'b011101000 : _zz_lifo_last = lifo_data_last_232;
      9'b011101001 : _zz_lifo_last = lifo_data_last_233;
      9'b011101010 : _zz_lifo_last = lifo_data_last_234;
      9'b011101011 : _zz_lifo_last = lifo_data_last_235;
      9'b011101100 : _zz_lifo_last = lifo_data_last_236;
      9'b011101101 : _zz_lifo_last = lifo_data_last_237;
      9'b011101110 : _zz_lifo_last = lifo_data_last_238;
      9'b011101111 : _zz_lifo_last = lifo_data_last_239;
      9'b011110000 : _zz_lifo_last = lifo_data_last_240;
      9'b011110001 : _zz_lifo_last = lifo_data_last_241;
      9'b011110010 : _zz_lifo_last = lifo_data_last_242;
      9'b011110011 : _zz_lifo_last = lifo_data_last_243;
      9'b011110100 : _zz_lifo_last = lifo_data_last_244;
      9'b011110101 : _zz_lifo_last = lifo_data_last_245;
      9'b011110110 : _zz_lifo_last = lifo_data_last_246;
      9'b011110111 : _zz_lifo_last = lifo_data_last_247;
      9'b011111000 : _zz_lifo_last = lifo_data_last_248;
      9'b011111001 : _zz_lifo_last = lifo_data_last_249;
      9'b011111010 : _zz_lifo_last = lifo_data_last_250;
      9'b011111011 : _zz_lifo_last = lifo_data_last_251;
      9'b011111100 : _zz_lifo_last = lifo_data_last_252;
      9'b011111101 : _zz_lifo_last = lifo_data_last_253;
      9'b011111110 : _zz_lifo_last = lifo_data_last_254;
      9'b011111111 : _zz_lifo_last = lifo_data_last_255;
      9'b100000000 : _zz_lifo_last = lifo_data_last_256;
      9'b100000001 : _zz_lifo_last = lifo_data_last_257;
      9'b100000010 : _zz_lifo_last = lifo_data_last_258;
      9'b100000011 : _zz_lifo_last = lifo_data_last_259;
      9'b100000100 : _zz_lifo_last = lifo_data_last_260;
      9'b100000101 : _zz_lifo_last = lifo_data_last_261;
      9'b100000110 : _zz_lifo_last = lifo_data_last_262;
      9'b100000111 : _zz_lifo_last = lifo_data_last_263;
      9'b100001000 : _zz_lifo_last = lifo_data_last_264;
      9'b100001001 : _zz_lifo_last = lifo_data_last_265;
      9'b100001010 : _zz_lifo_last = lifo_data_last_266;
      default : _zz_lifo_last = lifo_data_last_267;
    endcase
  end

  always @(*) begin
    case(_zz_pop_payload_fragment_1)
      9'b000000000 : _zz_pop_payload_fragment = lifo_data_0;
      9'b000000001 : _zz_pop_payload_fragment = lifo_data_1;
      9'b000000010 : _zz_pop_payload_fragment = lifo_data_2;
      9'b000000011 : _zz_pop_payload_fragment = lifo_data_3;
      9'b000000100 : _zz_pop_payload_fragment = lifo_data_4;
      9'b000000101 : _zz_pop_payload_fragment = lifo_data_5;
      9'b000000110 : _zz_pop_payload_fragment = lifo_data_6;
      9'b000000111 : _zz_pop_payload_fragment = lifo_data_7;
      9'b000001000 : _zz_pop_payload_fragment = lifo_data_8;
      9'b000001001 : _zz_pop_payload_fragment = lifo_data_9;
      9'b000001010 : _zz_pop_payload_fragment = lifo_data_10;
      9'b000001011 : _zz_pop_payload_fragment = lifo_data_11;
      9'b000001100 : _zz_pop_payload_fragment = lifo_data_12;
      9'b000001101 : _zz_pop_payload_fragment = lifo_data_13;
      9'b000001110 : _zz_pop_payload_fragment = lifo_data_14;
      9'b000001111 : _zz_pop_payload_fragment = lifo_data_15;
      9'b000010000 : _zz_pop_payload_fragment = lifo_data_16;
      9'b000010001 : _zz_pop_payload_fragment = lifo_data_17;
      9'b000010010 : _zz_pop_payload_fragment = lifo_data_18;
      9'b000010011 : _zz_pop_payload_fragment = lifo_data_19;
      9'b000010100 : _zz_pop_payload_fragment = lifo_data_20;
      9'b000010101 : _zz_pop_payload_fragment = lifo_data_21;
      9'b000010110 : _zz_pop_payload_fragment = lifo_data_22;
      9'b000010111 : _zz_pop_payload_fragment = lifo_data_23;
      9'b000011000 : _zz_pop_payload_fragment = lifo_data_24;
      9'b000011001 : _zz_pop_payload_fragment = lifo_data_25;
      9'b000011010 : _zz_pop_payload_fragment = lifo_data_26;
      9'b000011011 : _zz_pop_payload_fragment = lifo_data_27;
      9'b000011100 : _zz_pop_payload_fragment = lifo_data_28;
      9'b000011101 : _zz_pop_payload_fragment = lifo_data_29;
      9'b000011110 : _zz_pop_payload_fragment = lifo_data_30;
      9'b000011111 : _zz_pop_payload_fragment = lifo_data_31;
      9'b000100000 : _zz_pop_payload_fragment = lifo_data_32;
      9'b000100001 : _zz_pop_payload_fragment = lifo_data_33;
      9'b000100010 : _zz_pop_payload_fragment = lifo_data_34;
      9'b000100011 : _zz_pop_payload_fragment = lifo_data_35;
      9'b000100100 : _zz_pop_payload_fragment = lifo_data_36;
      9'b000100101 : _zz_pop_payload_fragment = lifo_data_37;
      9'b000100110 : _zz_pop_payload_fragment = lifo_data_38;
      9'b000100111 : _zz_pop_payload_fragment = lifo_data_39;
      9'b000101000 : _zz_pop_payload_fragment = lifo_data_40;
      9'b000101001 : _zz_pop_payload_fragment = lifo_data_41;
      9'b000101010 : _zz_pop_payload_fragment = lifo_data_42;
      9'b000101011 : _zz_pop_payload_fragment = lifo_data_43;
      9'b000101100 : _zz_pop_payload_fragment = lifo_data_44;
      9'b000101101 : _zz_pop_payload_fragment = lifo_data_45;
      9'b000101110 : _zz_pop_payload_fragment = lifo_data_46;
      9'b000101111 : _zz_pop_payload_fragment = lifo_data_47;
      9'b000110000 : _zz_pop_payload_fragment = lifo_data_48;
      9'b000110001 : _zz_pop_payload_fragment = lifo_data_49;
      9'b000110010 : _zz_pop_payload_fragment = lifo_data_50;
      9'b000110011 : _zz_pop_payload_fragment = lifo_data_51;
      9'b000110100 : _zz_pop_payload_fragment = lifo_data_52;
      9'b000110101 : _zz_pop_payload_fragment = lifo_data_53;
      9'b000110110 : _zz_pop_payload_fragment = lifo_data_54;
      9'b000110111 : _zz_pop_payload_fragment = lifo_data_55;
      9'b000111000 : _zz_pop_payload_fragment = lifo_data_56;
      9'b000111001 : _zz_pop_payload_fragment = lifo_data_57;
      9'b000111010 : _zz_pop_payload_fragment = lifo_data_58;
      9'b000111011 : _zz_pop_payload_fragment = lifo_data_59;
      9'b000111100 : _zz_pop_payload_fragment = lifo_data_60;
      9'b000111101 : _zz_pop_payload_fragment = lifo_data_61;
      9'b000111110 : _zz_pop_payload_fragment = lifo_data_62;
      9'b000111111 : _zz_pop_payload_fragment = lifo_data_63;
      9'b001000000 : _zz_pop_payload_fragment = lifo_data_64;
      9'b001000001 : _zz_pop_payload_fragment = lifo_data_65;
      9'b001000010 : _zz_pop_payload_fragment = lifo_data_66;
      9'b001000011 : _zz_pop_payload_fragment = lifo_data_67;
      9'b001000100 : _zz_pop_payload_fragment = lifo_data_68;
      9'b001000101 : _zz_pop_payload_fragment = lifo_data_69;
      9'b001000110 : _zz_pop_payload_fragment = lifo_data_70;
      9'b001000111 : _zz_pop_payload_fragment = lifo_data_71;
      9'b001001000 : _zz_pop_payload_fragment = lifo_data_72;
      9'b001001001 : _zz_pop_payload_fragment = lifo_data_73;
      9'b001001010 : _zz_pop_payload_fragment = lifo_data_74;
      9'b001001011 : _zz_pop_payload_fragment = lifo_data_75;
      9'b001001100 : _zz_pop_payload_fragment = lifo_data_76;
      9'b001001101 : _zz_pop_payload_fragment = lifo_data_77;
      9'b001001110 : _zz_pop_payload_fragment = lifo_data_78;
      9'b001001111 : _zz_pop_payload_fragment = lifo_data_79;
      9'b001010000 : _zz_pop_payload_fragment = lifo_data_80;
      9'b001010001 : _zz_pop_payload_fragment = lifo_data_81;
      9'b001010010 : _zz_pop_payload_fragment = lifo_data_82;
      9'b001010011 : _zz_pop_payload_fragment = lifo_data_83;
      9'b001010100 : _zz_pop_payload_fragment = lifo_data_84;
      9'b001010101 : _zz_pop_payload_fragment = lifo_data_85;
      9'b001010110 : _zz_pop_payload_fragment = lifo_data_86;
      9'b001010111 : _zz_pop_payload_fragment = lifo_data_87;
      9'b001011000 : _zz_pop_payload_fragment = lifo_data_88;
      9'b001011001 : _zz_pop_payload_fragment = lifo_data_89;
      9'b001011010 : _zz_pop_payload_fragment = lifo_data_90;
      9'b001011011 : _zz_pop_payload_fragment = lifo_data_91;
      9'b001011100 : _zz_pop_payload_fragment = lifo_data_92;
      9'b001011101 : _zz_pop_payload_fragment = lifo_data_93;
      9'b001011110 : _zz_pop_payload_fragment = lifo_data_94;
      9'b001011111 : _zz_pop_payload_fragment = lifo_data_95;
      9'b001100000 : _zz_pop_payload_fragment = lifo_data_96;
      9'b001100001 : _zz_pop_payload_fragment = lifo_data_97;
      9'b001100010 : _zz_pop_payload_fragment = lifo_data_98;
      9'b001100011 : _zz_pop_payload_fragment = lifo_data_99;
      9'b001100100 : _zz_pop_payload_fragment = lifo_data_100;
      9'b001100101 : _zz_pop_payload_fragment = lifo_data_101;
      9'b001100110 : _zz_pop_payload_fragment = lifo_data_102;
      9'b001100111 : _zz_pop_payload_fragment = lifo_data_103;
      9'b001101000 : _zz_pop_payload_fragment = lifo_data_104;
      9'b001101001 : _zz_pop_payload_fragment = lifo_data_105;
      9'b001101010 : _zz_pop_payload_fragment = lifo_data_106;
      9'b001101011 : _zz_pop_payload_fragment = lifo_data_107;
      9'b001101100 : _zz_pop_payload_fragment = lifo_data_108;
      9'b001101101 : _zz_pop_payload_fragment = lifo_data_109;
      9'b001101110 : _zz_pop_payload_fragment = lifo_data_110;
      9'b001101111 : _zz_pop_payload_fragment = lifo_data_111;
      9'b001110000 : _zz_pop_payload_fragment = lifo_data_112;
      9'b001110001 : _zz_pop_payload_fragment = lifo_data_113;
      9'b001110010 : _zz_pop_payload_fragment = lifo_data_114;
      9'b001110011 : _zz_pop_payload_fragment = lifo_data_115;
      9'b001110100 : _zz_pop_payload_fragment = lifo_data_116;
      9'b001110101 : _zz_pop_payload_fragment = lifo_data_117;
      9'b001110110 : _zz_pop_payload_fragment = lifo_data_118;
      9'b001110111 : _zz_pop_payload_fragment = lifo_data_119;
      9'b001111000 : _zz_pop_payload_fragment = lifo_data_120;
      9'b001111001 : _zz_pop_payload_fragment = lifo_data_121;
      9'b001111010 : _zz_pop_payload_fragment = lifo_data_122;
      9'b001111011 : _zz_pop_payload_fragment = lifo_data_123;
      9'b001111100 : _zz_pop_payload_fragment = lifo_data_124;
      9'b001111101 : _zz_pop_payload_fragment = lifo_data_125;
      9'b001111110 : _zz_pop_payload_fragment = lifo_data_126;
      9'b001111111 : _zz_pop_payload_fragment = lifo_data_127;
      9'b010000000 : _zz_pop_payload_fragment = lifo_data_128;
      9'b010000001 : _zz_pop_payload_fragment = lifo_data_129;
      9'b010000010 : _zz_pop_payload_fragment = lifo_data_130;
      9'b010000011 : _zz_pop_payload_fragment = lifo_data_131;
      9'b010000100 : _zz_pop_payload_fragment = lifo_data_132;
      9'b010000101 : _zz_pop_payload_fragment = lifo_data_133;
      9'b010000110 : _zz_pop_payload_fragment = lifo_data_134;
      9'b010000111 : _zz_pop_payload_fragment = lifo_data_135;
      9'b010001000 : _zz_pop_payload_fragment = lifo_data_136;
      9'b010001001 : _zz_pop_payload_fragment = lifo_data_137;
      9'b010001010 : _zz_pop_payload_fragment = lifo_data_138;
      9'b010001011 : _zz_pop_payload_fragment = lifo_data_139;
      9'b010001100 : _zz_pop_payload_fragment = lifo_data_140;
      9'b010001101 : _zz_pop_payload_fragment = lifo_data_141;
      9'b010001110 : _zz_pop_payload_fragment = lifo_data_142;
      9'b010001111 : _zz_pop_payload_fragment = lifo_data_143;
      9'b010010000 : _zz_pop_payload_fragment = lifo_data_144;
      9'b010010001 : _zz_pop_payload_fragment = lifo_data_145;
      9'b010010010 : _zz_pop_payload_fragment = lifo_data_146;
      9'b010010011 : _zz_pop_payload_fragment = lifo_data_147;
      9'b010010100 : _zz_pop_payload_fragment = lifo_data_148;
      9'b010010101 : _zz_pop_payload_fragment = lifo_data_149;
      9'b010010110 : _zz_pop_payload_fragment = lifo_data_150;
      9'b010010111 : _zz_pop_payload_fragment = lifo_data_151;
      9'b010011000 : _zz_pop_payload_fragment = lifo_data_152;
      9'b010011001 : _zz_pop_payload_fragment = lifo_data_153;
      9'b010011010 : _zz_pop_payload_fragment = lifo_data_154;
      9'b010011011 : _zz_pop_payload_fragment = lifo_data_155;
      9'b010011100 : _zz_pop_payload_fragment = lifo_data_156;
      9'b010011101 : _zz_pop_payload_fragment = lifo_data_157;
      9'b010011110 : _zz_pop_payload_fragment = lifo_data_158;
      9'b010011111 : _zz_pop_payload_fragment = lifo_data_159;
      9'b010100000 : _zz_pop_payload_fragment = lifo_data_160;
      9'b010100001 : _zz_pop_payload_fragment = lifo_data_161;
      9'b010100010 : _zz_pop_payload_fragment = lifo_data_162;
      9'b010100011 : _zz_pop_payload_fragment = lifo_data_163;
      9'b010100100 : _zz_pop_payload_fragment = lifo_data_164;
      9'b010100101 : _zz_pop_payload_fragment = lifo_data_165;
      9'b010100110 : _zz_pop_payload_fragment = lifo_data_166;
      9'b010100111 : _zz_pop_payload_fragment = lifo_data_167;
      9'b010101000 : _zz_pop_payload_fragment = lifo_data_168;
      9'b010101001 : _zz_pop_payload_fragment = lifo_data_169;
      9'b010101010 : _zz_pop_payload_fragment = lifo_data_170;
      9'b010101011 : _zz_pop_payload_fragment = lifo_data_171;
      9'b010101100 : _zz_pop_payload_fragment = lifo_data_172;
      9'b010101101 : _zz_pop_payload_fragment = lifo_data_173;
      9'b010101110 : _zz_pop_payload_fragment = lifo_data_174;
      9'b010101111 : _zz_pop_payload_fragment = lifo_data_175;
      9'b010110000 : _zz_pop_payload_fragment = lifo_data_176;
      9'b010110001 : _zz_pop_payload_fragment = lifo_data_177;
      9'b010110010 : _zz_pop_payload_fragment = lifo_data_178;
      9'b010110011 : _zz_pop_payload_fragment = lifo_data_179;
      9'b010110100 : _zz_pop_payload_fragment = lifo_data_180;
      9'b010110101 : _zz_pop_payload_fragment = lifo_data_181;
      9'b010110110 : _zz_pop_payload_fragment = lifo_data_182;
      9'b010110111 : _zz_pop_payload_fragment = lifo_data_183;
      9'b010111000 : _zz_pop_payload_fragment = lifo_data_184;
      9'b010111001 : _zz_pop_payload_fragment = lifo_data_185;
      9'b010111010 : _zz_pop_payload_fragment = lifo_data_186;
      9'b010111011 : _zz_pop_payload_fragment = lifo_data_187;
      9'b010111100 : _zz_pop_payload_fragment = lifo_data_188;
      9'b010111101 : _zz_pop_payload_fragment = lifo_data_189;
      9'b010111110 : _zz_pop_payload_fragment = lifo_data_190;
      9'b010111111 : _zz_pop_payload_fragment = lifo_data_191;
      9'b011000000 : _zz_pop_payload_fragment = lifo_data_192;
      9'b011000001 : _zz_pop_payload_fragment = lifo_data_193;
      9'b011000010 : _zz_pop_payload_fragment = lifo_data_194;
      9'b011000011 : _zz_pop_payload_fragment = lifo_data_195;
      9'b011000100 : _zz_pop_payload_fragment = lifo_data_196;
      9'b011000101 : _zz_pop_payload_fragment = lifo_data_197;
      9'b011000110 : _zz_pop_payload_fragment = lifo_data_198;
      9'b011000111 : _zz_pop_payload_fragment = lifo_data_199;
      9'b011001000 : _zz_pop_payload_fragment = lifo_data_200;
      9'b011001001 : _zz_pop_payload_fragment = lifo_data_201;
      9'b011001010 : _zz_pop_payload_fragment = lifo_data_202;
      9'b011001011 : _zz_pop_payload_fragment = lifo_data_203;
      9'b011001100 : _zz_pop_payload_fragment = lifo_data_204;
      9'b011001101 : _zz_pop_payload_fragment = lifo_data_205;
      9'b011001110 : _zz_pop_payload_fragment = lifo_data_206;
      9'b011001111 : _zz_pop_payload_fragment = lifo_data_207;
      9'b011010000 : _zz_pop_payload_fragment = lifo_data_208;
      9'b011010001 : _zz_pop_payload_fragment = lifo_data_209;
      9'b011010010 : _zz_pop_payload_fragment = lifo_data_210;
      9'b011010011 : _zz_pop_payload_fragment = lifo_data_211;
      9'b011010100 : _zz_pop_payload_fragment = lifo_data_212;
      9'b011010101 : _zz_pop_payload_fragment = lifo_data_213;
      9'b011010110 : _zz_pop_payload_fragment = lifo_data_214;
      9'b011010111 : _zz_pop_payload_fragment = lifo_data_215;
      9'b011011000 : _zz_pop_payload_fragment = lifo_data_216;
      9'b011011001 : _zz_pop_payload_fragment = lifo_data_217;
      9'b011011010 : _zz_pop_payload_fragment = lifo_data_218;
      9'b011011011 : _zz_pop_payload_fragment = lifo_data_219;
      9'b011011100 : _zz_pop_payload_fragment = lifo_data_220;
      9'b011011101 : _zz_pop_payload_fragment = lifo_data_221;
      9'b011011110 : _zz_pop_payload_fragment = lifo_data_222;
      9'b011011111 : _zz_pop_payload_fragment = lifo_data_223;
      9'b011100000 : _zz_pop_payload_fragment = lifo_data_224;
      9'b011100001 : _zz_pop_payload_fragment = lifo_data_225;
      9'b011100010 : _zz_pop_payload_fragment = lifo_data_226;
      9'b011100011 : _zz_pop_payload_fragment = lifo_data_227;
      9'b011100100 : _zz_pop_payload_fragment = lifo_data_228;
      9'b011100101 : _zz_pop_payload_fragment = lifo_data_229;
      9'b011100110 : _zz_pop_payload_fragment = lifo_data_230;
      9'b011100111 : _zz_pop_payload_fragment = lifo_data_231;
      9'b011101000 : _zz_pop_payload_fragment = lifo_data_232;
      9'b011101001 : _zz_pop_payload_fragment = lifo_data_233;
      9'b011101010 : _zz_pop_payload_fragment = lifo_data_234;
      9'b011101011 : _zz_pop_payload_fragment = lifo_data_235;
      9'b011101100 : _zz_pop_payload_fragment = lifo_data_236;
      9'b011101101 : _zz_pop_payload_fragment = lifo_data_237;
      9'b011101110 : _zz_pop_payload_fragment = lifo_data_238;
      9'b011101111 : _zz_pop_payload_fragment = lifo_data_239;
      9'b011110000 : _zz_pop_payload_fragment = lifo_data_240;
      9'b011110001 : _zz_pop_payload_fragment = lifo_data_241;
      9'b011110010 : _zz_pop_payload_fragment = lifo_data_242;
      9'b011110011 : _zz_pop_payload_fragment = lifo_data_243;
      9'b011110100 : _zz_pop_payload_fragment = lifo_data_244;
      9'b011110101 : _zz_pop_payload_fragment = lifo_data_245;
      9'b011110110 : _zz_pop_payload_fragment = lifo_data_246;
      9'b011110111 : _zz_pop_payload_fragment = lifo_data_247;
      9'b011111000 : _zz_pop_payload_fragment = lifo_data_248;
      9'b011111001 : _zz_pop_payload_fragment = lifo_data_249;
      9'b011111010 : _zz_pop_payload_fragment = lifo_data_250;
      9'b011111011 : _zz_pop_payload_fragment = lifo_data_251;
      9'b011111100 : _zz_pop_payload_fragment = lifo_data_252;
      9'b011111101 : _zz_pop_payload_fragment = lifo_data_253;
      9'b011111110 : _zz_pop_payload_fragment = lifo_data_254;
      9'b011111111 : _zz_pop_payload_fragment = lifo_data_255;
      9'b100000000 : _zz_pop_payload_fragment = lifo_data_256;
      9'b100000001 : _zz_pop_payload_fragment = lifo_data_257;
      9'b100000010 : _zz_pop_payload_fragment = lifo_data_258;
      9'b100000011 : _zz_pop_payload_fragment = lifo_data_259;
      9'b100000100 : _zz_pop_payload_fragment = lifo_data_260;
      9'b100000101 : _zz_pop_payload_fragment = lifo_data_261;
      9'b100000110 : _zz_pop_payload_fragment = lifo_data_262;
      9'b100000111 : _zz_pop_payload_fragment = lifo_data_263;
      9'b100001000 : _zz_pop_payload_fragment = lifo_data_264;
      9'b100001001 : _zz_pop_payload_fragment = lifo_data_265;
      9'b100001010 : _zz_pop_payload_fragment = lifo_data_266;
      default : _zz_pop_payload_fragment = lifo_data_267;
    endcase
  end

  assign push_fire = (push_valid && push_ready);
  assign when_SISOLifo_l25 = (push_fire && (! full));
  assign _zz_1 = ({511'd0,1'b1} <<< lifo_head_cursor);
  assign _zz_2 = ({511'd0,1'b1} <<< lifo_head_cursor);
  assign pop_fire = (pop_valid && pop_ready);
  assign when_SISOLifo_l32 = (pop_fire && (! empty));
  assign push_ready = (push_method && (! full));
  assign pop_valid = (! (push_method || empty));
  assign pop_payload_fragment = (push_method ? 1'b0 : _zz_pop_payload_fragment);
  assign pop_payload_last = (lifo_last && (lifo_head_cursor == 9'h001));
  assign full = (lifo_head_cursor == 9'h10b);
  assign empty = (lifo_head_cursor == 9'h0);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      lifo_head_cursor <= 9'h0;
    end else begin
      if(push_method) begin
        if(when_SISOLifo_l25) begin
          lifo_head_cursor <= (lifo_head_cursor + 9'h001);
        end
      end else begin
        if(when_SISOLifo_l32) begin
          lifo_head_cursor <= (lifo_head_cursor - 9'h001);
        end
      end
    end
  end

  always @(posedge clk) begin
    if(push_method) begin
      if(when_SISOLifo_l25) begin
        if(_zz_1[0]) begin
          lifo_data_0 <= push_payload_fragment;
        end
        if(_zz_1[1]) begin
          lifo_data_1 <= push_payload_fragment;
        end
        if(_zz_1[2]) begin
          lifo_data_2 <= push_payload_fragment;
        end
        if(_zz_1[3]) begin
          lifo_data_3 <= push_payload_fragment;
        end
        if(_zz_1[4]) begin
          lifo_data_4 <= push_payload_fragment;
        end
        if(_zz_1[5]) begin
          lifo_data_5 <= push_payload_fragment;
        end
        if(_zz_1[6]) begin
          lifo_data_6 <= push_payload_fragment;
        end
        if(_zz_1[7]) begin
          lifo_data_7 <= push_payload_fragment;
        end
        if(_zz_1[8]) begin
          lifo_data_8 <= push_payload_fragment;
        end
        if(_zz_1[9]) begin
          lifo_data_9 <= push_payload_fragment;
        end
        if(_zz_1[10]) begin
          lifo_data_10 <= push_payload_fragment;
        end
        if(_zz_1[11]) begin
          lifo_data_11 <= push_payload_fragment;
        end
        if(_zz_1[12]) begin
          lifo_data_12 <= push_payload_fragment;
        end
        if(_zz_1[13]) begin
          lifo_data_13 <= push_payload_fragment;
        end
        if(_zz_1[14]) begin
          lifo_data_14 <= push_payload_fragment;
        end
        if(_zz_1[15]) begin
          lifo_data_15 <= push_payload_fragment;
        end
        if(_zz_1[16]) begin
          lifo_data_16 <= push_payload_fragment;
        end
        if(_zz_1[17]) begin
          lifo_data_17 <= push_payload_fragment;
        end
        if(_zz_1[18]) begin
          lifo_data_18 <= push_payload_fragment;
        end
        if(_zz_1[19]) begin
          lifo_data_19 <= push_payload_fragment;
        end
        if(_zz_1[20]) begin
          lifo_data_20 <= push_payload_fragment;
        end
        if(_zz_1[21]) begin
          lifo_data_21 <= push_payload_fragment;
        end
        if(_zz_1[22]) begin
          lifo_data_22 <= push_payload_fragment;
        end
        if(_zz_1[23]) begin
          lifo_data_23 <= push_payload_fragment;
        end
        if(_zz_1[24]) begin
          lifo_data_24 <= push_payload_fragment;
        end
        if(_zz_1[25]) begin
          lifo_data_25 <= push_payload_fragment;
        end
        if(_zz_1[26]) begin
          lifo_data_26 <= push_payload_fragment;
        end
        if(_zz_1[27]) begin
          lifo_data_27 <= push_payload_fragment;
        end
        if(_zz_1[28]) begin
          lifo_data_28 <= push_payload_fragment;
        end
        if(_zz_1[29]) begin
          lifo_data_29 <= push_payload_fragment;
        end
        if(_zz_1[30]) begin
          lifo_data_30 <= push_payload_fragment;
        end
        if(_zz_1[31]) begin
          lifo_data_31 <= push_payload_fragment;
        end
        if(_zz_1[32]) begin
          lifo_data_32 <= push_payload_fragment;
        end
        if(_zz_1[33]) begin
          lifo_data_33 <= push_payload_fragment;
        end
        if(_zz_1[34]) begin
          lifo_data_34 <= push_payload_fragment;
        end
        if(_zz_1[35]) begin
          lifo_data_35 <= push_payload_fragment;
        end
        if(_zz_1[36]) begin
          lifo_data_36 <= push_payload_fragment;
        end
        if(_zz_1[37]) begin
          lifo_data_37 <= push_payload_fragment;
        end
        if(_zz_1[38]) begin
          lifo_data_38 <= push_payload_fragment;
        end
        if(_zz_1[39]) begin
          lifo_data_39 <= push_payload_fragment;
        end
        if(_zz_1[40]) begin
          lifo_data_40 <= push_payload_fragment;
        end
        if(_zz_1[41]) begin
          lifo_data_41 <= push_payload_fragment;
        end
        if(_zz_1[42]) begin
          lifo_data_42 <= push_payload_fragment;
        end
        if(_zz_1[43]) begin
          lifo_data_43 <= push_payload_fragment;
        end
        if(_zz_1[44]) begin
          lifo_data_44 <= push_payload_fragment;
        end
        if(_zz_1[45]) begin
          lifo_data_45 <= push_payload_fragment;
        end
        if(_zz_1[46]) begin
          lifo_data_46 <= push_payload_fragment;
        end
        if(_zz_1[47]) begin
          lifo_data_47 <= push_payload_fragment;
        end
        if(_zz_1[48]) begin
          lifo_data_48 <= push_payload_fragment;
        end
        if(_zz_1[49]) begin
          lifo_data_49 <= push_payload_fragment;
        end
        if(_zz_1[50]) begin
          lifo_data_50 <= push_payload_fragment;
        end
        if(_zz_1[51]) begin
          lifo_data_51 <= push_payload_fragment;
        end
        if(_zz_1[52]) begin
          lifo_data_52 <= push_payload_fragment;
        end
        if(_zz_1[53]) begin
          lifo_data_53 <= push_payload_fragment;
        end
        if(_zz_1[54]) begin
          lifo_data_54 <= push_payload_fragment;
        end
        if(_zz_1[55]) begin
          lifo_data_55 <= push_payload_fragment;
        end
        if(_zz_1[56]) begin
          lifo_data_56 <= push_payload_fragment;
        end
        if(_zz_1[57]) begin
          lifo_data_57 <= push_payload_fragment;
        end
        if(_zz_1[58]) begin
          lifo_data_58 <= push_payload_fragment;
        end
        if(_zz_1[59]) begin
          lifo_data_59 <= push_payload_fragment;
        end
        if(_zz_1[60]) begin
          lifo_data_60 <= push_payload_fragment;
        end
        if(_zz_1[61]) begin
          lifo_data_61 <= push_payload_fragment;
        end
        if(_zz_1[62]) begin
          lifo_data_62 <= push_payload_fragment;
        end
        if(_zz_1[63]) begin
          lifo_data_63 <= push_payload_fragment;
        end
        if(_zz_1[64]) begin
          lifo_data_64 <= push_payload_fragment;
        end
        if(_zz_1[65]) begin
          lifo_data_65 <= push_payload_fragment;
        end
        if(_zz_1[66]) begin
          lifo_data_66 <= push_payload_fragment;
        end
        if(_zz_1[67]) begin
          lifo_data_67 <= push_payload_fragment;
        end
        if(_zz_1[68]) begin
          lifo_data_68 <= push_payload_fragment;
        end
        if(_zz_1[69]) begin
          lifo_data_69 <= push_payload_fragment;
        end
        if(_zz_1[70]) begin
          lifo_data_70 <= push_payload_fragment;
        end
        if(_zz_1[71]) begin
          lifo_data_71 <= push_payload_fragment;
        end
        if(_zz_1[72]) begin
          lifo_data_72 <= push_payload_fragment;
        end
        if(_zz_1[73]) begin
          lifo_data_73 <= push_payload_fragment;
        end
        if(_zz_1[74]) begin
          lifo_data_74 <= push_payload_fragment;
        end
        if(_zz_1[75]) begin
          lifo_data_75 <= push_payload_fragment;
        end
        if(_zz_1[76]) begin
          lifo_data_76 <= push_payload_fragment;
        end
        if(_zz_1[77]) begin
          lifo_data_77 <= push_payload_fragment;
        end
        if(_zz_1[78]) begin
          lifo_data_78 <= push_payload_fragment;
        end
        if(_zz_1[79]) begin
          lifo_data_79 <= push_payload_fragment;
        end
        if(_zz_1[80]) begin
          lifo_data_80 <= push_payload_fragment;
        end
        if(_zz_1[81]) begin
          lifo_data_81 <= push_payload_fragment;
        end
        if(_zz_1[82]) begin
          lifo_data_82 <= push_payload_fragment;
        end
        if(_zz_1[83]) begin
          lifo_data_83 <= push_payload_fragment;
        end
        if(_zz_1[84]) begin
          lifo_data_84 <= push_payload_fragment;
        end
        if(_zz_1[85]) begin
          lifo_data_85 <= push_payload_fragment;
        end
        if(_zz_1[86]) begin
          lifo_data_86 <= push_payload_fragment;
        end
        if(_zz_1[87]) begin
          lifo_data_87 <= push_payload_fragment;
        end
        if(_zz_1[88]) begin
          lifo_data_88 <= push_payload_fragment;
        end
        if(_zz_1[89]) begin
          lifo_data_89 <= push_payload_fragment;
        end
        if(_zz_1[90]) begin
          lifo_data_90 <= push_payload_fragment;
        end
        if(_zz_1[91]) begin
          lifo_data_91 <= push_payload_fragment;
        end
        if(_zz_1[92]) begin
          lifo_data_92 <= push_payload_fragment;
        end
        if(_zz_1[93]) begin
          lifo_data_93 <= push_payload_fragment;
        end
        if(_zz_1[94]) begin
          lifo_data_94 <= push_payload_fragment;
        end
        if(_zz_1[95]) begin
          lifo_data_95 <= push_payload_fragment;
        end
        if(_zz_1[96]) begin
          lifo_data_96 <= push_payload_fragment;
        end
        if(_zz_1[97]) begin
          lifo_data_97 <= push_payload_fragment;
        end
        if(_zz_1[98]) begin
          lifo_data_98 <= push_payload_fragment;
        end
        if(_zz_1[99]) begin
          lifo_data_99 <= push_payload_fragment;
        end
        if(_zz_1[100]) begin
          lifo_data_100 <= push_payload_fragment;
        end
        if(_zz_1[101]) begin
          lifo_data_101 <= push_payload_fragment;
        end
        if(_zz_1[102]) begin
          lifo_data_102 <= push_payload_fragment;
        end
        if(_zz_1[103]) begin
          lifo_data_103 <= push_payload_fragment;
        end
        if(_zz_1[104]) begin
          lifo_data_104 <= push_payload_fragment;
        end
        if(_zz_1[105]) begin
          lifo_data_105 <= push_payload_fragment;
        end
        if(_zz_1[106]) begin
          lifo_data_106 <= push_payload_fragment;
        end
        if(_zz_1[107]) begin
          lifo_data_107 <= push_payload_fragment;
        end
        if(_zz_1[108]) begin
          lifo_data_108 <= push_payload_fragment;
        end
        if(_zz_1[109]) begin
          lifo_data_109 <= push_payload_fragment;
        end
        if(_zz_1[110]) begin
          lifo_data_110 <= push_payload_fragment;
        end
        if(_zz_1[111]) begin
          lifo_data_111 <= push_payload_fragment;
        end
        if(_zz_1[112]) begin
          lifo_data_112 <= push_payload_fragment;
        end
        if(_zz_1[113]) begin
          lifo_data_113 <= push_payload_fragment;
        end
        if(_zz_1[114]) begin
          lifo_data_114 <= push_payload_fragment;
        end
        if(_zz_1[115]) begin
          lifo_data_115 <= push_payload_fragment;
        end
        if(_zz_1[116]) begin
          lifo_data_116 <= push_payload_fragment;
        end
        if(_zz_1[117]) begin
          lifo_data_117 <= push_payload_fragment;
        end
        if(_zz_1[118]) begin
          lifo_data_118 <= push_payload_fragment;
        end
        if(_zz_1[119]) begin
          lifo_data_119 <= push_payload_fragment;
        end
        if(_zz_1[120]) begin
          lifo_data_120 <= push_payload_fragment;
        end
        if(_zz_1[121]) begin
          lifo_data_121 <= push_payload_fragment;
        end
        if(_zz_1[122]) begin
          lifo_data_122 <= push_payload_fragment;
        end
        if(_zz_1[123]) begin
          lifo_data_123 <= push_payload_fragment;
        end
        if(_zz_1[124]) begin
          lifo_data_124 <= push_payload_fragment;
        end
        if(_zz_1[125]) begin
          lifo_data_125 <= push_payload_fragment;
        end
        if(_zz_1[126]) begin
          lifo_data_126 <= push_payload_fragment;
        end
        if(_zz_1[127]) begin
          lifo_data_127 <= push_payload_fragment;
        end
        if(_zz_1[128]) begin
          lifo_data_128 <= push_payload_fragment;
        end
        if(_zz_1[129]) begin
          lifo_data_129 <= push_payload_fragment;
        end
        if(_zz_1[130]) begin
          lifo_data_130 <= push_payload_fragment;
        end
        if(_zz_1[131]) begin
          lifo_data_131 <= push_payload_fragment;
        end
        if(_zz_1[132]) begin
          lifo_data_132 <= push_payload_fragment;
        end
        if(_zz_1[133]) begin
          lifo_data_133 <= push_payload_fragment;
        end
        if(_zz_1[134]) begin
          lifo_data_134 <= push_payload_fragment;
        end
        if(_zz_1[135]) begin
          lifo_data_135 <= push_payload_fragment;
        end
        if(_zz_1[136]) begin
          lifo_data_136 <= push_payload_fragment;
        end
        if(_zz_1[137]) begin
          lifo_data_137 <= push_payload_fragment;
        end
        if(_zz_1[138]) begin
          lifo_data_138 <= push_payload_fragment;
        end
        if(_zz_1[139]) begin
          lifo_data_139 <= push_payload_fragment;
        end
        if(_zz_1[140]) begin
          lifo_data_140 <= push_payload_fragment;
        end
        if(_zz_1[141]) begin
          lifo_data_141 <= push_payload_fragment;
        end
        if(_zz_1[142]) begin
          lifo_data_142 <= push_payload_fragment;
        end
        if(_zz_1[143]) begin
          lifo_data_143 <= push_payload_fragment;
        end
        if(_zz_1[144]) begin
          lifo_data_144 <= push_payload_fragment;
        end
        if(_zz_1[145]) begin
          lifo_data_145 <= push_payload_fragment;
        end
        if(_zz_1[146]) begin
          lifo_data_146 <= push_payload_fragment;
        end
        if(_zz_1[147]) begin
          lifo_data_147 <= push_payload_fragment;
        end
        if(_zz_1[148]) begin
          lifo_data_148 <= push_payload_fragment;
        end
        if(_zz_1[149]) begin
          lifo_data_149 <= push_payload_fragment;
        end
        if(_zz_1[150]) begin
          lifo_data_150 <= push_payload_fragment;
        end
        if(_zz_1[151]) begin
          lifo_data_151 <= push_payload_fragment;
        end
        if(_zz_1[152]) begin
          lifo_data_152 <= push_payload_fragment;
        end
        if(_zz_1[153]) begin
          lifo_data_153 <= push_payload_fragment;
        end
        if(_zz_1[154]) begin
          lifo_data_154 <= push_payload_fragment;
        end
        if(_zz_1[155]) begin
          lifo_data_155 <= push_payload_fragment;
        end
        if(_zz_1[156]) begin
          lifo_data_156 <= push_payload_fragment;
        end
        if(_zz_1[157]) begin
          lifo_data_157 <= push_payload_fragment;
        end
        if(_zz_1[158]) begin
          lifo_data_158 <= push_payload_fragment;
        end
        if(_zz_1[159]) begin
          lifo_data_159 <= push_payload_fragment;
        end
        if(_zz_1[160]) begin
          lifo_data_160 <= push_payload_fragment;
        end
        if(_zz_1[161]) begin
          lifo_data_161 <= push_payload_fragment;
        end
        if(_zz_1[162]) begin
          lifo_data_162 <= push_payload_fragment;
        end
        if(_zz_1[163]) begin
          lifo_data_163 <= push_payload_fragment;
        end
        if(_zz_1[164]) begin
          lifo_data_164 <= push_payload_fragment;
        end
        if(_zz_1[165]) begin
          lifo_data_165 <= push_payload_fragment;
        end
        if(_zz_1[166]) begin
          lifo_data_166 <= push_payload_fragment;
        end
        if(_zz_1[167]) begin
          lifo_data_167 <= push_payload_fragment;
        end
        if(_zz_1[168]) begin
          lifo_data_168 <= push_payload_fragment;
        end
        if(_zz_1[169]) begin
          lifo_data_169 <= push_payload_fragment;
        end
        if(_zz_1[170]) begin
          lifo_data_170 <= push_payload_fragment;
        end
        if(_zz_1[171]) begin
          lifo_data_171 <= push_payload_fragment;
        end
        if(_zz_1[172]) begin
          lifo_data_172 <= push_payload_fragment;
        end
        if(_zz_1[173]) begin
          lifo_data_173 <= push_payload_fragment;
        end
        if(_zz_1[174]) begin
          lifo_data_174 <= push_payload_fragment;
        end
        if(_zz_1[175]) begin
          lifo_data_175 <= push_payload_fragment;
        end
        if(_zz_1[176]) begin
          lifo_data_176 <= push_payload_fragment;
        end
        if(_zz_1[177]) begin
          lifo_data_177 <= push_payload_fragment;
        end
        if(_zz_1[178]) begin
          lifo_data_178 <= push_payload_fragment;
        end
        if(_zz_1[179]) begin
          lifo_data_179 <= push_payload_fragment;
        end
        if(_zz_1[180]) begin
          lifo_data_180 <= push_payload_fragment;
        end
        if(_zz_1[181]) begin
          lifo_data_181 <= push_payload_fragment;
        end
        if(_zz_1[182]) begin
          lifo_data_182 <= push_payload_fragment;
        end
        if(_zz_1[183]) begin
          lifo_data_183 <= push_payload_fragment;
        end
        if(_zz_1[184]) begin
          lifo_data_184 <= push_payload_fragment;
        end
        if(_zz_1[185]) begin
          lifo_data_185 <= push_payload_fragment;
        end
        if(_zz_1[186]) begin
          lifo_data_186 <= push_payload_fragment;
        end
        if(_zz_1[187]) begin
          lifo_data_187 <= push_payload_fragment;
        end
        if(_zz_1[188]) begin
          lifo_data_188 <= push_payload_fragment;
        end
        if(_zz_1[189]) begin
          lifo_data_189 <= push_payload_fragment;
        end
        if(_zz_1[190]) begin
          lifo_data_190 <= push_payload_fragment;
        end
        if(_zz_1[191]) begin
          lifo_data_191 <= push_payload_fragment;
        end
        if(_zz_1[192]) begin
          lifo_data_192 <= push_payload_fragment;
        end
        if(_zz_1[193]) begin
          lifo_data_193 <= push_payload_fragment;
        end
        if(_zz_1[194]) begin
          lifo_data_194 <= push_payload_fragment;
        end
        if(_zz_1[195]) begin
          lifo_data_195 <= push_payload_fragment;
        end
        if(_zz_1[196]) begin
          lifo_data_196 <= push_payload_fragment;
        end
        if(_zz_1[197]) begin
          lifo_data_197 <= push_payload_fragment;
        end
        if(_zz_1[198]) begin
          lifo_data_198 <= push_payload_fragment;
        end
        if(_zz_1[199]) begin
          lifo_data_199 <= push_payload_fragment;
        end
        if(_zz_1[200]) begin
          lifo_data_200 <= push_payload_fragment;
        end
        if(_zz_1[201]) begin
          lifo_data_201 <= push_payload_fragment;
        end
        if(_zz_1[202]) begin
          lifo_data_202 <= push_payload_fragment;
        end
        if(_zz_1[203]) begin
          lifo_data_203 <= push_payload_fragment;
        end
        if(_zz_1[204]) begin
          lifo_data_204 <= push_payload_fragment;
        end
        if(_zz_1[205]) begin
          lifo_data_205 <= push_payload_fragment;
        end
        if(_zz_1[206]) begin
          lifo_data_206 <= push_payload_fragment;
        end
        if(_zz_1[207]) begin
          lifo_data_207 <= push_payload_fragment;
        end
        if(_zz_1[208]) begin
          lifo_data_208 <= push_payload_fragment;
        end
        if(_zz_1[209]) begin
          lifo_data_209 <= push_payload_fragment;
        end
        if(_zz_1[210]) begin
          lifo_data_210 <= push_payload_fragment;
        end
        if(_zz_1[211]) begin
          lifo_data_211 <= push_payload_fragment;
        end
        if(_zz_1[212]) begin
          lifo_data_212 <= push_payload_fragment;
        end
        if(_zz_1[213]) begin
          lifo_data_213 <= push_payload_fragment;
        end
        if(_zz_1[214]) begin
          lifo_data_214 <= push_payload_fragment;
        end
        if(_zz_1[215]) begin
          lifo_data_215 <= push_payload_fragment;
        end
        if(_zz_1[216]) begin
          lifo_data_216 <= push_payload_fragment;
        end
        if(_zz_1[217]) begin
          lifo_data_217 <= push_payload_fragment;
        end
        if(_zz_1[218]) begin
          lifo_data_218 <= push_payload_fragment;
        end
        if(_zz_1[219]) begin
          lifo_data_219 <= push_payload_fragment;
        end
        if(_zz_1[220]) begin
          lifo_data_220 <= push_payload_fragment;
        end
        if(_zz_1[221]) begin
          lifo_data_221 <= push_payload_fragment;
        end
        if(_zz_1[222]) begin
          lifo_data_222 <= push_payload_fragment;
        end
        if(_zz_1[223]) begin
          lifo_data_223 <= push_payload_fragment;
        end
        if(_zz_1[224]) begin
          lifo_data_224 <= push_payload_fragment;
        end
        if(_zz_1[225]) begin
          lifo_data_225 <= push_payload_fragment;
        end
        if(_zz_1[226]) begin
          lifo_data_226 <= push_payload_fragment;
        end
        if(_zz_1[227]) begin
          lifo_data_227 <= push_payload_fragment;
        end
        if(_zz_1[228]) begin
          lifo_data_228 <= push_payload_fragment;
        end
        if(_zz_1[229]) begin
          lifo_data_229 <= push_payload_fragment;
        end
        if(_zz_1[230]) begin
          lifo_data_230 <= push_payload_fragment;
        end
        if(_zz_1[231]) begin
          lifo_data_231 <= push_payload_fragment;
        end
        if(_zz_1[232]) begin
          lifo_data_232 <= push_payload_fragment;
        end
        if(_zz_1[233]) begin
          lifo_data_233 <= push_payload_fragment;
        end
        if(_zz_1[234]) begin
          lifo_data_234 <= push_payload_fragment;
        end
        if(_zz_1[235]) begin
          lifo_data_235 <= push_payload_fragment;
        end
        if(_zz_1[236]) begin
          lifo_data_236 <= push_payload_fragment;
        end
        if(_zz_1[237]) begin
          lifo_data_237 <= push_payload_fragment;
        end
        if(_zz_1[238]) begin
          lifo_data_238 <= push_payload_fragment;
        end
        if(_zz_1[239]) begin
          lifo_data_239 <= push_payload_fragment;
        end
        if(_zz_1[240]) begin
          lifo_data_240 <= push_payload_fragment;
        end
        if(_zz_1[241]) begin
          lifo_data_241 <= push_payload_fragment;
        end
        if(_zz_1[242]) begin
          lifo_data_242 <= push_payload_fragment;
        end
        if(_zz_1[243]) begin
          lifo_data_243 <= push_payload_fragment;
        end
        if(_zz_1[244]) begin
          lifo_data_244 <= push_payload_fragment;
        end
        if(_zz_1[245]) begin
          lifo_data_245 <= push_payload_fragment;
        end
        if(_zz_1[246]) begin
          lifo_data_246 <= push_payload_fragment;
        end
        if(_zz_1[247]) begin
          lifo_data_247 <= push_payload_fragment;
        end
        if(_zz_1[248]) begin
          lifo_data_248 <= push_payload_fragment;
        end
        if(_zz_1[249]) begin
          lifo_data_249 <= push_payload_fragment;
        end
        if(_zz_1[250]) begin
          lifo_data_250 <= push_payload_fragment;
        end
        if(_zz_1[251]) begin
          lifo_data_251 <= push_payload_fragment;
        end
        if(_zz_1[252]) begin
          lifo_data_252 <= push_payload_fragment;
        end
        if(_zz_1[253]) begin
          lifo_data_253 <= push_payload_fragment;
        end
        if(_zz_1[254]) begin
          lifo_data_254 <= push_payload_fragment;
        end
        if(_zz_1[255]) begin
          lifo_data_255 <= push_payload_fragment;
        end
        if(_zz_1[256]) begin
          lifo_data_256 <= push_payload_fragment;
        end
        if(_zz_1[257]) begin
          lifo_data_257 <= push_payload_fragment;
        end
        if(_zz_1[258]) begin
          lifo_data_258 <= push_payload_fragment;
        end
        if(_zz_1[259]) begin
          lifo_data_259 <= push_payload_fragment;
        end
        if(_zz_1[260]) begin
          lifo_data_260 <= push_payload_fragment;
        end
        if(_zz_1[261]) begin
          lifo_data_261 <= push_payload_fragment;
        end
        if(_zz_1[262]) begin
          lifo_data_262 <= push_payload_fragment;
        end
        if(_zz_1[263]) begin
          lifo_data_263 <= push_payload_fragment;
        end
        if(_zz_1[264]) begin
          lifo_data_264 <= push_payload_fragment;
        end
        if(_zz_1[265]) begin
          lifo_data_265 <= push_payload_fragment;
        end
        if(_zz_1[266]) begin
          lifo_data_266 <= push_payload_fragment;
        end
        if(_zz_1[267]) begin
          lifo_data_267 <= push_payload_fragment;
        end
        if(_zz_2[0]) begin
          lifo_data_last_0 <= push_payload_last;
        end
        if(_zz_2[1]) begin
          lifo_data_last_1 <= push_payload_last;
        end
        if(_zz_2[2]) begin
          lifo_data_last_2 <= push_payload_last;
        end
        if(_zz_2[3]) begin
          lifo_data_last_3 <= push_payload_last;
        end
        if(_zz_2[4]) begin
          lifo_data_last_4 <= push_payload_last;
        end
        if(_zz_2[5]) begin
          lifo_data_last_5 <= push_payload_last;
        end
        if(_zz_2[6]) begin
          lifo_data_last_6 <= push_payload_last;
        end
        if(_zz_2[7]) begin
          lifo_data_last_7 <= push_payload_last;
        end
        if(_zz_2[8]) begin
          lifo_data_last_8 <= push_payload_last;
        end
        if(_zz_2[9]) begin
          lifo_data_last_9 <= push_payload_last;
        end
        if(_zz_2[10]) begin
          lifo_data_last_10 <= push_payload_last;
        end
        if(_zz_2[11]) begin
          lifo_data_last_11 <= push_payload_last;
        end
        if(_zz_2[12]) begin
          lifo_data_last_12 <= push_payload_last;
        end
        if(_zz_2[13]) begin
          lifo_data_last_13 <= push_payload_last;
        end
        if(_zz_2[14]) begin
          lifo_data_last_14 <= push_payload_last;
        end
        if(_zz_2[15]) begin
          lifo_data_last_15 <= push_payload_last;
        end
        if(_zz_2[16]) begin
          lifo_data_last_16 <= push_payload_last;
        end
        if(_zz_2[17]) begin
          lifo_data_last_17 <= push_payload_last;
        end
        if(_zz_2[18]) begin
          lifo_data_last_18 <= push_payload_last;
        end
        if(_zz_2[19]) begin
          lifo_data_last_19 <= push_payload_last;
        end
        if(_zz_2[20]) begin
          lifo_data_last_20 <= push_payload_last;
        end
        if(_zz_2[21]) begin
          lifo_data_last_21 <= push_payload_last;
        end
        if(_zz_2[22]) begin
          lifo_data_last_22 <= push_payload_last;
        end
        if(_zz_2[23]) begin
          lifo_data_last_23 <= push_payload_last;
        end
        if(_zz_2[24]) begin
          lifo_data_last_24 <= push_payload_last;
        end
        if(_zz_2[25]) begin
          lifo_data_last_25 <= push_payload_last;
        end
        if(_zz_2[26]) begin
          lifo_data_last_26 <= push_payload_last;
        end
        if(_zz_2[27]) begin
          lifo_data_last_27 <= push_payload_last;
        end
        if(_zz_2[28]) begin
          lifo_data_last_28 <= push_payload_last;
        end
        if(_zz_2[29]) begin
          lifo_data_last_29 <= push_payload_last;
        end
        if(_zz_2[30]) begin
          lifo_data_last_30 <= push_payload_last;
        end
        if(_zz_2[31]) begin
          lifo_data_last_31 <= push_payload_last;
        end
        if(_zz_2[32]) begin
          lifo_data_last_32 <= push_payload_last;
        end
        if(_zz_2[33]) begin
          lifo_data_last_33 <= push_payload_last;
        end
        if(_zz_2[34]) begin
          lifo_data_last_34 <= push_payload_last;
        end
        if(_zz_2[35]) begin
          lifo_data_last_35 <= push_payload_last;
        end
        if(_zz_2[36]) begin
          lifo_data_last_36 <= push_payload_last;
        end
        if(_zz_2[37]) begin
          lifo_data_last_37 <= push_payload_last;
        end
        if(_zz_2[38]) begin
          lifo_data_last_38 <= push_payload_last;
        end
        if(_zz_2[39]) begin
          lifo_data_last_39 <= push_payload_last;
        end
        if(_zz_2[40]) begin
          lifo_data_last_40 <= push_payload_last;
        end
        if(_zz_2[41]) begin
          lifo_data_last_41 <= push_payload_last;
        end
        if(_zz_2[42]) begin
          lifo_data_last_42 <= push_payload_last;
        end
        if(_zz_2[43]) begin
          lifo_data_last_43 <= push_payload_last;
        end
        if(_zz_2[44]) begin
          lifo_data_last_44 <= push_payload_last;
        end
        if(_zz_2[45]) begin
          lifo_data_last_45 <= push_payload_last;
        end
        if(_zz_2[46]) begin
          lifo_data_last_46 <= push_payload_last;
        end
        if(_zz_2[47]) begin
          lifo_data_last_47 <= push_payload_last;
        end
        if(_zz_2[48]) begin
          lifo_data_last_48 <= push_payload_last;
        end
        if(_zz_2[49]) begin
          lifo_data_last_49 <= push_payload_last;
        end
        if(_zz_2[50]) begin
          lifo_data_last_50 <= push_payload_last;
        end
        if(_zz_2[51]) begin
          lifo_data_last_51 <= push_payload_last;
        end
        if(_zz_2[52]) begin
          lifo_data_last_52 <= push_payload_last;
        end
        if(_zz_2[53]) begin
          lifo_data_last_53 <= push_payload_last;
        end
        if(_zz_2[54]) begin
          lifo_data_last_54 <= push_payload_last;
        end
        if(_zz_2[55]) begin
          lifo_data_last_55 <= push_payload_last;
        end
        if(_zz_2[56]) begin
          lifo_data_last_56 <= push_payload_last;
        end
        if(_zz_2[57]) begin
          lifo_data_last_57 <= push_payload_last;
        end
        if(_zz_2[58]) begin
          lifo_data_last_58 <= push_payload_last;
        end
        if(_zz_2[59]) begin
          lifo_data_last_59 <= push_payload_last;
        end
        if(_zz_2[60]) begin
          lifo_data_last_60 <= push_payload_last;
        end
        if(_zz_2[61]) begin
          lifo_data_last_61 <= push_payload_last;
        end
        if(_zz_2[62]) begin
          lifo_data_last_62 <= push_payload_last;
        end
        if(_zz_2[63]) begin
          lifo_data_last_63 <= push_payload_last;
        end
        if(_zz_2[64]) begin
          lifo_data_last_64 <= push_payload_last;
        end
        if(_zz_2[65]) begin
          lifo_data_last_65 <= push_payload_last;
        end
        if(_zz_2[66]) begin
          lifo_data_last_66 <= push_payload_last;
        end
        if(_zz_2[67]) begin
          lifo_data_last_67 <= push_payload_last;
        end
        if(_zz_2[68]) begin
          lifo_data_last_68 <= push_payload_last;
        end
        if(_zz_2[69]) begin
          lifo_data_last_69 <= push_payload_last;
        end
        if(_zz_2[70]) begin
          lifo_data_last_70 <= push_payload_last;
        end
        if(_zz_2[71]) begin
          lifo_data_last_71 <= push_payload_last;
        end
        if(_zz_2[72]) begin
          lifo_data_last_72 <= push_payload_last;
        end
        if(_zz_2[73]) begin
          lifo_data_last_73 <= push_payload_last;
        end
        if(_zz_2[74]) begin
          lifo_data_last_74 <= push_payload_last;
        end
        if(_zz_2[75]) begin
          lifo_data_last_75 <= push_payload_last;
        end
        if(_zz_2[76]) begin
          lifo_data_last_76 <= push_payload_last;
        end
        if(_zz_2[77]) begin
          lifo_data_last_77 <= push_payload_last;
        end
        if(_zz_2[78]) begin
          lifo_data_last_78 <= push_payload_last;
        end
        if(_zz_2[79]) begin
          lifo_data_last_79 <= push_payload_last;
        end
        if(_zz_2[80]) begin
          lifo_data_last_80 <= push_payload_last;
        end
        if(_zz_2[81]) begin
          lifo_data_last_81 <= push_payload_last;
        end
        if(_zz_2[82]) begin
          lifo_data_last_82 <= push_payload_last;
        end
        if(_zz_2[83]) begin
          lifo_data_last_83 <= push_payload_last;
        end
        if(_zz_2[84]) begin
          lifo_data_last_84 <= push_payload_last;
        end
        if(_zz_2[85]) begin
          lifo_data_last_85 <= push_payload_last;
        end
        if(_zz_2[86]) begin
          lifo_data_last_86 <= push_payload_last;
        end
        if(_zz_2[87]) begin
          lifo_data_last_87 <= push_payload_last;
        end
        if(_zz_2[88]) begin
          lifo_data_last_88 <= push_payload_last;
        end
        if(_zz_2[89]) begin
          lifo_data_last_89 <= push_payload_last;
        end
        if(_zz_2[90]) begin
          lifo_data_last_90 <= push_payload_last;
        end
        if(_zz_2[91]) begin
          lifo_data_last_91 <= push_payload_last;
        end
        if(_zz_2[92]) begin
          lifo_data_last_92 <= push_payload_last;
        end
        if(_zz_2[93]) begin
          lifo_data_last_93 <= push_payload_last;
        end
        if(_zz_2[94]) begin
          lifo_data_last_94 <= push_payload_last;
        end
        if(_zz_2[95]) begin
          lifo_data_last_95 <= push_payload_last;
        end
        if(_zz_2[96]) begin
          lifo_data_last_96 <= push_payload_last;
        end
        if(_zz_2[97]) begin
          lifo_data_last_97 <= push_payload_last;
        end
        if(_zz_2[98]) begin
          lifo_data_last_98 <= push_payload_last;
        end
        if(_zz_2[99]) begin
          lifo_data_last_99 <= push_payload_last;
        end
        if(_zz_2[100]) begin
          lifo_data_last_100 <= push_payload_last;
        end
        if(_zz_2[101]) begin
          lifo_data_last_101 <= push_payload_last;
        end
        if(_zz_2[102]) begin
          lifo_data_last_102 <= push_payload_last;
        end
        if(_zz_2[103]) begin
          lifo_data_last_103 <= push_payload_last;
        end
        if(_zz_2[104]) begin
          lifo_data_last_104 <= push_payload_last;
        end
        if(_zz_2[105]) begin
          lifo_data_last_105 <= push_payload_last;
        end
        if(_zz_2[106]) begin
          lifo_data_last_106 <= push_payload_last;
        end
        if(_zz_2[107]) begin
          lifo_data_last_107 <= push_payload_last;
        end
        if(_zz_2[108]) begin
          lifo_data_last_108 <= push_payload_last;
        end
        if(_zz_2[109]) begin
          lifo_data_last_109 <= push_payload_last;
        end
        if(_zz_2[110]) begin
          lifo_data_last_110 <= push_payload_last;
        end
        if(_zz_2[111]) begin
          lifo_data_last_111 <= push_payload_last;
        end
        if(_zz_2[112]) begin
          lifo_data_last_112 <= push_payload_last;
        end
        if(_zz_2[113]) begin
          lifo_data_last_113 <= push_payload_last;
        end
        if(_zz_2[114]) begin
          lifo_data_last_114 <= push_payload_last;
        end
        if(_zz_2[115]) begin
          lifo_data_last_115 <= push_payload_last;
        end
        if(_zz_2[116]) begin
          lifo_data_last_116 <= push_payload_last;
        end
        if(_zz_2[117]) begin
          lifo_data_last_117 <= push_payload_last;
        end
        if(_zz_2[118]) begin
          lifo_data_last_118 <= push_payload_last;
        end
        if(_zz_2[119]) begin
          lifo_data_last_119 <= push_payload_last;
        end
        if(_zz_2[120]) begin
          lifo_data_last_120 <= push_payload_last;
        end
        if(_zz_2[121]) begin
          lifo_data_last_121 <= push_payload_last;
        end
        if(_zz_2[122]) begin
          lifo_data_last_122 <= push_payload_last;
        end
        if(_zz_2[123]) begin
          lifo_data_last_123 <= push_payload_last;
        end
        if(_zz_2[124]) begin
          lifo_data_last_124 <= push_payload_last;
        end
        if(_zz_2[125]) begin
          lifo_data_last_125 <= push_payload_last;
        end
        if(_zz_2[126]) begin
          lifo_data_last_126 <= push_payload_last;
        end
        if(_zz_2[127]) begin
          lifo_data_last_127 <= push_payload_last;
        end
        if(_zz_2[128]) begin
          lifo_data_last_128 <= push_payload_last;
        end
        if(_zz_2[129]) begin
          lifo_data_last_129 <= push_payload_last;
        end
        if(_zz_2[130]) begin
          lifo_data_last_130 <= push_payload_last;
        end
        if(_zz_2[131]) begin
          lifo_data_last_131 <= push_payload_last;
        end
        if(_zz_2[132]) begin
          lifo_data_last_132 <= push_payload_last;
        end
        if(_zz_2[133]) begin
          lifo_data_last_133 <= push_payload_last;
        end
        if(_zz_2[134]) begin
          lifo_data_last_134 <= push_payload_last;
        end
        if(_zz_2[135]) begin
          lifo_data_last_135 <= push_payload_last;
        end
        if(_zz_2[136]) begin
          lifo_data_last_136 <= push_payload_last;
        end
        if(_zz_2[137]) begin
          lifo_data_last_137 <= push_payload_last;
        end
        if(_zz_2[138]) begin
          lifo_data_last_138 <= push_payload_last;
        end
        if(_zz_2[139]) begin
          lifo_data_last_139 <= push_payload_last;
        end
        if(_zz_2[140]) begin
          lifo_data_last_140 <= push_payload_last;
        end
        if(_zz_2[141]) begin
          lifo_data_last_141 <= push_payload_last;
        end
        if(_zz_2[142]) begin
          lifo_data_last_142 <= push_payload_last;
        end
        if(_zz_2[143]) begin
          lifo_data_last_143 <= push_payload_last;
        end
        if(_zz_2[144]) begin
          lifo_data_last_144 <= push_payload_last;
        end
        if(_zz_2[145]) begin
          lifo_data_last_145 <= push_payload_last;
        end
        if(_zz_2[146]) begin
          lifo_data_last_146 <= push_payload_last;
        end
        if(_zz_2[147]) begin
          lifo_data_last_147 <= push_payload_last;
        end
        if(_zz_2[148]) begin
          lifo_data_last_148 <= push_payload_last;
        end
        if(_zz_2[149]) begin
          lifo_data_last_149 <= push_payload_last;
        end
        if(_zz_2[150]) begin
          lifo_data_last_150 <= push_payload_last;
        end
        if(_zz_2[151]) begin
          lifo_data_last_151 <= push_payload_last;
        end
        if(_zz_2[152]) begin
          lifo_data_last_152 <= push_payload_last;
        end
        if(_zz_2[153]) begin
          lifo_data_last_153 <= push_payload_last;
        end
        if(_zz_2[154]) begin
          lifo_data_last_154 <= push_payload_last;
        end
        if(_zz_2[155]) begin
          lifo_data_last_155 <= push_payload_last;
        end
        if(_zz_2[156]) begin
          lifo_data_last_156 <= push_payload_last;
        end
        if(_zz_2[157]) begin
          lifo_data_last_157 <= push_payload_last;
        end
        if(_zz_2[158]) begin
          lifo_data_last_158 <= push_payload_last;
        end
        if(_zz_2[159]) begin
          lifo_data_last_159 <= push_payload_last;
        end
        if(_zz_2[160]) begin
          lifo_data_last_160 <= push_payload_last;
        end
        if(_zz_2[161]) begin
          lifo_data_last_161 <= push_payload_last;
        end
        if(_zz_2[162]) begin
          lifo_data_last_162 <= push_payload_last;
        end
        if(_zz_2[163]) begin
          lifo_data_last_163 <= push_payload_last;
        end
        if(_zz_2[164]) begin
          lifo_data_last_164 <= push_payload_last;
        end
        if(_zz_2[165]) begin
          lifo_data_last_165 <= push_payload_last;
        end
        if(_zz_2[166]) begin
          lifo_data_last_166 <= push_payload_last;
        end
        if(_zz_2[167]) begin
          lifo_data_last_167 <= push_payload_last;
        end
        if(_zz_2[168]) begin
          lifo_data_last_168 <= push_payload_last;
        end
        if(_zz_2[169]) begin
          lifo_data_last_169 <= push_payload_last;
        end
        if(_zz_2[170]) begin
          lifo_data_last_170 <= push_payload_last;
        end
        if(_zz_2[171]) begin
          lifo_data_last_171 <= push_payload_last;
        end
        if(_zz_2[172]) begin
          lifo_data_last_172 <= push_payload_last;
        end
        if(_zz_2[173]) begin
          lifo_data_last_173 <= push_payload_last;
        end
        if(_zz_2[174]) begin
          lifo_data_last_174 <= push_payload_last;
        end
        if(_zz_2[175]) begin
          lifo_data_last_175 <= push_payload_last;
        end
        if(_zz_2[176]) begin
          lifo_data_last_176 <= push_payload_last;
        end
        if(_zz_2[177]) begin
          lifo_data_last_177 <= push_payload_last;
        end
        if(_zz_2[178]) begin
          lifo_data_last_178 <= push_payload_last;
        end
        if(_zz_2[179]) begin
          lifo_data_last_179 <= push_payload_last;
        end
        if(_zz_2[180]) begin
          lifo_data_last_180 <= push_payload_last;
        end
        if(_zz_2[181]) begin
          lifo_data_last_181 <= push_payload_last;
        end
        if(_zz_2[182]) begin
          lifo_data_last_182 <= push_payload_last;
        end
        if(_zz_2[183]) begin
          lifo_data_last_183 <= push_payload_last;
        end
        if(_zz_2[184]) begin
          lifo_data_last_184 <= push_payload_last;
        end
        if(_zz_2[185]) begin
          lifo_data_last_185 <= push_payload_last;
        end
        if(_zz_2[186]) begin
          lifo_data_last_186 <= push_payload_last;
        end
        if(_zz_2[187]) begin
          lifo_data_last_187 <= push_payload_last;
        end
        if(_zz_2[188]) begin
          lifo_data_last_188 <= push_payload_last;
        end
        if(_zz_2[189]) begin
          lifo_data_last_189 <= push_payload_last;
        end
        if(_zz_2[190]) begin
          lifo_data_last_190 <= push_payload_last;
        end
        if(_zz_2[191]) begin
          lifo_data_last_191 <= push_payload_last;
        end
        if(_zz_2[192]) begin
          lifo_data_last_192 <= push_payload_last;
        end
        if(_zz_2[193]) begin
          lifo_data_last_193 <= push_payload_last;
        end
        if(_zz_2[194]) begin
          lifo_data_last_194 <= push_payload_last;
        end
        if(_zz_2[195]) begin
          lifo_data_last_195 <= push_payload_last;
        end
        if(_zz_2[196]) begin
          lifo_data_last_196 <= push_payload_last;
        end
        if(_zz_2[197]) begin
          lifo_data_last_197 <= push_payload_last;
        end
        if(_zz_2[198]) begin
          lifo_data_last_198 <= push_payload_last;
        end
        if(_zz_2[199]) begin
          lifo_data_last_199 <= push_payload_last;
        end
        if(_zz_2[200]) begin
          lifo_data_last_200 <= push_payload_last;
        end
        if(_zz_2[201]) begin
          lifo_data_last_201 <= push_payload_last;
        end
        if(_zz_2[202]) begin
          lifo_data_last_202 <= push_payload_last;
        end
        if(_zz_2[203]) begin
          lifo_data_last_203 <= push_payload_last;
        end
        if(_zz_2[204]) begin
          lifo_data_last_204 <= push_payload_last;
        end
        if(_zz_2[205]) begin
          lifo_data_last_205 <= push_payload_last;
        end
        if(_zz_2[206]) begin
          lifo_data_last_206 <= push_payload_last;
        end
        if(_zz_2[207]) begin
          lifo_data_last_207 <= push_payload_last;
        end
        if(_zz_2[208]) begin
          lifo_data_last_208 <= push_payload_last;
        end
        if(_zz_2[209]) begin
          lifo_data_last_209 <= push_payload_last;
        end
        if(_zz_2[210]) begin
          lifo_data_last_210 <= push_payload_last;
        end
        if(_zz_2[211]) begin
          lifo_data_last_211 <= push_payload_last;
        end
        if(_zz_2[212]) begin
          lifo_data_last_212 <= push_payload_last;
        end
        if(_zz_2[213]) begin
          lifo_data_last_213 <= push_payload_last;
        end
        if(_zz_2[214]) begin
          lifo_data_last_214 <= push_payload_last;
        end
        if(_zz_2[215]) begin
          lifo_data_last_215 <= push_payload_last;
        end
        if(_zz_2[216]) begin
          lifo_data_last_216 <= push_payload_last;
        end
        if(_zz_2[217]) begin
          lifo_data_last_217 <= push_payload_last;
        end
        if(_zz_2[218]) begin
          lifo_data_last_218 <= push_payload_last;
        end
        if(_zz_2[219]) begin
          lifo_data_last_219 <= push_payload_last;
        end
        if(_zz_2[220]) begin
          lifo_data_last_220 <= push_payload_last;
        end
        if(_zz_2[221]) begin
          lifo_data_last_221 <= push_payload_last;
        end
        if(_zz_2[222]) begin
          lifo_data_last_222 <= push_payload_last;
        end
        if(_zz_2[223]) begin
          lifo_data_last_223 <= push_payload_last;
        end
        if(_zz_2[224]) begin
          lifo_data_last_224 <= push_payload_last;
        end
        if(_zz_2[225]) begin
          lifo_data_last_225 <= push_payload_last;
        end
        if(_zz_2[226]) begin
          lifo_data_last_226 <= push_payload_last;
        end
        if(_zz_2[227]) begin
          lifo_data_last_227 <= push_payload_last;
        end
        if(_zz_2[228]) begin
          lifo_data_last_228 <= push_payload_last;
        end
        if(_zz_2[229]) begin
          lifo_data_last_229 <= push_payload_last;
        end
        if(_zz_2[230]) begin
          lifo_data_last_230 <= push_payload_last;
        end
        if(_zz_2[231]) begin
          lifo_data_last_231 <= push_payload_last;
        end
        if(_zz_2[232]) begin
          lifo_data_last_232 <= push_payload_last;
        end
        if(_zz_2[233]) begin
          lifo_data_last_233 <= push_payload_last;
        end
        if(_zz_2[234]) begin
          lifo_data_last_234 <= push_payload_last;
        end
        if(_zz_2[235]) begin
          lifo_data_last_235 <= push_payload_last;
        end
        if(_zz_2[236]) begin
          lifo_data_last_236 <= push_payload_last;
        end
        if(_zz_2[237]) begin
          lifo_data_last_237 <= push_payload_last;
        end
        if(_zz_2[238]) begin
          lifo_data_last_238 <= push_payload_last;
        end
        if(_zz_2[239]) begin
          lifo_data_last_239 <= push_payload_last;
        end
        if(_zz_2[240]) begin
          lifo_data_last_240 <= push_payload_last;
        end
        if(_zz_2[241]) begin
          lifo_data_last_241 <= push_payload_last;
        end
        if(_zz_2[242]) begin
          lifo_data_last_242 <= push_payload_last;
        end
        if(_zz_2[243]) begin
          lifo_data_last_243 <= push_payload_last;
        end
        if(_zz_2[244]) begin
          lifo_data_last_244 <= push_payload_last;
        end
        if(_zz_2[245]) begin
          lifo_data_last_245 <= push_payload_last;
        end
        if(_zz_2[246]) begin
          lifo_data_last_246 <= push_payload_last;
        end
        if(_zz_2[247]) begin
          lifo_data_last_247 <= push_payload_last;
        end
        if(_zz_2[248]) begin
          lifo_data_last_248 <= push_payload_last;
        end
        if(_zz_2[249]) begin
          lifo_data_last_249 <= push_payload_last;
        end
        if(_zz_2[250]) begin
          lifo_data_last_250 <= push_payload_last;
        end
        if(_zz_2[251]) begin
          lifo_data_last_251 <= push_payload_last;
        end
        if(_zz_2[252]) begin
          lifo_data_last_252 <= push_payload_last;
        end
        if(_zz_2[253]) begin
          lifo_data_last_253 <= push_payload_last;
        end
        if(_zz_2[254]) begin
          lifo_data_last_254 <= push_payload_last;
        end
        if(_zz_2[255]) begin
          lifo_data_last_255 <= push_payload_last;
        end
        if(_zz_2[256]) begin
          lifo_data_last_256 <= push_payload_last;
        end
        if(_zz_2[257]) begin
          lifo_data_last_257 <= push_payload_last;
        end
        if(_zz_2[258]) begin
          lifo_data_last_258 <= push_payload_last;
        end
        if(_zz_2[259]) begin
          lifo_data_last_259 <= push_payload_last;
        end
        if(_zz_2[260]) begin
          lifo_data_last_260 <= push_payload_last;
        end
        if(_zz_2[261]) begin
          lifo_data_last_261 <= push_payload_last;
        end
        if(_zz_2[262]) begin
          lifo_data_last_262 <= push_payload_last;
        end
        if(_zz_2[263]) begin
          lifo_data_last_263 <= push_payload_last;
        end
        if(_zz_2[264]) begin
          lifo_data_last_264 <= push_payload_last;
        end
        if(_zz_2[265]) begin
          lifo_data_last_265 <= push_payload_last;
        end
        if(_zz_2[266]) begin
          lifo_data_last_266 <= push_payload_last;
        end
        if(_zz_2[267]) begin
          lifo_data_last_267 <= push_payload_last;
        end
      end
      lifo_last <= 1'b0;
    end else begin
      lifo_last <= ((lifo_last == 1'b1) ? 1'b1 : _zz_lifo_last);
    end
  end


endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [1:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [1:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [4:0]    io_occupancy,
  output     [4:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [2:0]    _zz_logic_ram_port0;
  wire       [3:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [3:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [2:0]    _zz_logic_ram_port_1;
  wire       [3:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [3:0]    logic_pushPtr_valueNext;
  reg        [3:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [3:0]    logic_popPtr_valueNext;
  reg        [3:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [2:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l954;
  wire       [3:0]    logic_ptrDif;
  reg [2:0] logic_ram [0:15];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {3'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {3'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 4'b1111);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 4'b0000;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 4'b1111);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 4'b0000;
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
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[2 : 1];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 4'b0000;
      logic_popPtr_value <= 4'b0000;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module MinVal (
  input      [15:0]   data_0,
  input      [15:0]   data_1,
  input      [15:0]   data_2,
  input      [15:0]   data_3,
  input      [15:0]   data_4,
  input      [15:0]   data_5,
  input      [15:0]   data_6,
  input      [15:0]   data_7,
  input      [15:0]   data_8,
  input      [15:0]   data_9,
  input      [15:0]   data_10,
  input      [15:0]   data_11,
  input      [15:0]   data_12,
  input      [15:0]   data_13,
  input      [15:0]   data_14,
  input      [15:0]   data_15,
  input      [15:0]   data_16,
  input      [15:0]   data_17,
  input      [15:0]   data_18,
  input      [15:0]   data_19,
  input      [15:0]   data_20,
  input      [15:0]   data_21,
  input      [15:0]   data_22,
  input      [15:0]   data_23,
  input      [15:0]   data_24,
  input      [15:0]   data_25,
  input      [15:0]   data_26,
  input      [15:0]   data_27,
  input      [15:0]   data_28,
  input      [15:0]   data_29,
  input      [15:0]   data_30,
  input      [15:0]   data_31,
  input      [15:0]   data_32,
  input      [15:0]   data_33,
  input      [15:0]   data_34,
  input      [15:0]   data_35,
  input      [15:0]   data_36,
  input      [15:0]   data_37,
  input      [15:0]   data_38,
  input      [15:0]   data_39,
  input      [15:0]   data_40,
  input      [15:0]   data_41,
  input      [15:0]   data_42,
  input      [15:0]   data_43,
  input      [15:0]   data_44,
  input      [15:0]   data_45,
  input      [15:0]   data_46,
  input      [15:0]   data_47,
  input      [15:0]   data_48,
  input      [15:0]   data_49,
  input      [15:0]   data_50,
  input      [15:0]   data_51,
  input      [15:0]   data_52,
  input      [15:0]   data_53,
  input      [15:0]   data_54,
  input      [15:0]   data_55,
  input      [15:0]   data_56,
  input      [15:0]   data_57,
  input      [15:0]   data_58,
  input      [15:0]   data_59,
  input      [15:0]   data_60,
  input      [15:0]   data_61,
  input      [15:0]   data_62,
  input      [15:0]   data_63,
  output     [15:0]   min_val,
  output     [5:0]    min_idx,
  input               clk,
  input               reset
);

  reg        [15:0]   _zz_min_val;
  reg        [15:0]   _zz_min_val_1;
  reg        [15:0]   _zz_min_val_2;
  reg        [15:0]   _zz_min_val_3;
  reg        [15:0]   _zz_min_val_4;
  reg        [15:0]   _zz_min_val_5;
  reg        [15:0]   _zz_min_val_6;
  reg        [15:0]   _zz_min_val_7;
  reg        [15:0]   _zz_min_val_8;
  reg        [15:0]   _zz_min_val_9;
  reg        [15:0]   _zz_min_val_10;
  reg        [15:0]   _zz_min_val_11;
  reg        [15:0]   _zz_min_val_12;
  reg        [15:0]   _zz_min_val_13;
  reg        [15:0]   _zz_min_val_14;
  reg        [15:0]   _zz_min_val_15;
  reg        [15:0]   _zz_min_val_16;
  reg        [15:0]   _zz_min_val_17;
  reg        [15:0]   _zz_min_val_18;
  reg        [15:0]   _zz_min_val_19;
  reg        [15:0]   _zz_min_val_20;
  reg        [15:0]   _zz_min_val_21;
  reg        [15:0]   _zz_min_val_22;
  reg        [15:0]   _zz_min_val_23;
  reg        [15:0]   _zz_min_val_24;
  reg        [15:0]   _zz_min_val_25;
  reg        [15:0]   _zz_min_val_26;
  reg        [15:0]   _zz_min_val_27;
  reg        [15:0]   _zz_min_val_28;
  reg        [15:0]   _zz_min_val_29;
  reg        [15:0]   _zz_min_val_30;
  reg        [15:0]   _zz_min_val_31;
  reg        [5:0]    _zz_min_idx;
  reg        [5:0]    _zz_min_idx_1;
  reg        [5:0]    _zz_min_idx_2;
  reg        [5:0]    _zz_min_idx_3;
  reg        [5:0]    _zz_min_idx_4;
  reg        [5:0]    _zz_min_idx_5;
  reg        [5:0]    _zz_min_idx_6;
  reg        [5:0]    _zz_min_idx_7;
  reg        [5:0]    _zz_min_idx_8;
  reg        [5:0]    _zz_min_idx_9;
  reg        [5:0]    _zz_min_idx_10;
  reg        [5:0]    _zz_min_idx_11;
  reg        [5:0]    _zz_min_idx_12;
  reg        [5:0]    _zz_min_idx_13;
  reg        [5:0]    _zz_min_idx_14;
  reg        [5:0]    _zz_min_idx_15;
  reg        [5:0]    _zz_min_idx_16;
  reg        [5:0]    _zz_min_idx_17;
  reg        [5:0]    _zz_min_idx_18;
  reg        [5:0]    _zz_min_idx_19;
  reg        [5:0]    _zz_min_idx_20;
  reg        [5:0]    _zz_min_idx_21;
  reg        [5:0]    _zz_min_idx_22;
  reg        [5:0]    _zz_min_idx_23;
  reg        [5:0]    _zz_min_idx_24;
  reg        [5:0]    _zz_min_idx_25;
  reg        [5:0]    _zz_min_idx_26;
  reg        [5:0]    _zz_min_idx_27;
  reg        [5:0]    _zz_min_idx_28;
  reg        [5:0]    _zz_min_idx_29;
  reg        [5:0]    _zz_min_idx_30;
  reg        [5:0]    _zz_min_idx_31;
  reg        [15:0]   _zz_min_val_32;
  reg        [15:0]   _zz_min_val_33;
  reg        [15:0]   _zz_min_val_34;
  reg        [15:0]   _zz_min_val_35;
  reg        [15:0]   _zz_min_val_36;
  reg        [15:0]   _zz_min_val_37;
  reg        [15:0]   _zz_min_val_38;
  reg        [15:0]   _zz_min_val_39;
  reg        [15:0]   _zz_min_val_40;
  reg        [15:0]   _zz_min_val_41;
  reg        [15:0]   _zz_min_val_42;
  reg        [15:0]   _zz_min_val_43;
  reg        [15:0]   _zz_min_val_44;
  reg        [15:0]   _zz_min_val_45;
  reg        [15:0]   _zz_min_val_46;
  reg        [15:0]   _zz_min_val_47;
  reg        [5:0]    _zz_min_idx_32;
  reg        [5:0]    _zz_min_idx_33;
  reg        [5:0]    _zz_min_idx_34;
  reg        [5:0]    _zz_min_idx_35;
  reg        [5:0]    _zz_min_idx_36;
  reg        [5:0]    _zz_min_idx_37;
  reg        [5:0]    _zz_min_idx_38;
  reg        [5:0]    _zz_min_idx_39;
  reg        [5:0]    _zz_min_idx_40;
  reg        [5:0]    _zz_min_idx_41;
  reg        [5:0]    _zz_min_idx_42;
  reg        [5:0]    _zz_min_idx_43;
  reg        [5:0]    _zz_min_idx_44;
  reg        [5:0]    _zz_min_idx_45;
  reg        [5:0]    _zz_min_idx_46;
  reg        [5:0]    _zz_min_idx_47;
  reg        [15:0]   _zz_min_val_48;
  reg        [15:0]   _zz_min_val_49;
  reg        [15:0]   _zz_min_val_50;
  reg        [15:0]   _zz_min_val_51;
  reg        [15:0]   _zz_min_val_52;
  reg        [15:0]   _zz_min_val_53;
  reg        [15:0]   _zz_min_val_54;
  reg        [15:0]   _zz_min_val_55;
  reg        [5:0]    _zz_min_idx_48;
  reg        [5:0]    _zz_min_idx_49;
  reg        [5:0]    _zz_min_idx_50;
  reg        [5:0]    _zz_min_idx_51;
  reg        [5:0]    _zz_min_idx_52;
  reg        [5:0]    _zz_min_idx_53;
  reg        [5:0]    _zz_min_idx_54;
  reg        [5:0]    _zz_min_idx_55;
  reg        [15:0]   _zz_min_val_56;
  reg        [15:0]   _zz_min_val_57;
  reg        [15:0]   _zz_min_val_58;
  reg        [15:0]   _zz_min_val_59;
  reg        [5:0]    _zz_min_idx_56;
  reg        [5:0]    _zz_min_idx_57;
  reg        [5:0]    _zz_min_idx_58;
  reg        [5:0]    _zz_min_idx_59;
  reg        [15:0]   _zz_min_val_60;
  reg        [15:0]   _zz_min_val_61;
  reg        [5:0]    _zz_min_idx_60;
  reg        [5:0]    _zz_min_idx_61;
  reg        [15:0]   _zz_min_val_62;
  reg        [5:0]    _zz_min_idx_62;

  assign min_idx = _zz_min_idx_62;
  assign min_val = _zz_min_val_62;
  always @(posedge clk) begin
    _zz_min_val <= ((data_0 <= data_1) ? data_0 : data_1);
    _zz_min_idx <= ((data_0 <= data_1) ? 6'h0 : 6'h01);
    _zz_min_val_1 <= ((data_2 <= data_3) ? data_2 : data_3);
    _zz_min_idx_1 <= ((data_2 <= data_3) ? 6'h02 : 6'h03);
    _zz_min_val_2 <= ((data_4 <= data_5) ? data_4 : data_5);
    _zz_min_idx_2 <= ((data_4 <= data_5) ? 6'h04 : 6'h05);
    _zz_min_val_3 <= ((data_6 <= data_7) ? data_6 : data_7);
    _zz_min_idx_3 <= ((data_6 <= data_7) ? 6'h06 : 6'h07);
    _zz_min_val_4 <= ((data_8 <= data_9) ? data_8 : data_9);
    _zz_min_idx_4 <= ((data_8 <= data_9) ? 6'h08 : 6'h09);
    _zz_min_val_5 <= ((data_10 <= data_11) ? data_10 : data_11);
    _zz_min_idx_5 <= ((data_10 <= data_11) ? 6'h0a : 6'h0b);
    _zz_min_val_6 <= ((data_12 <= data_13) ? data_12 : data_13);
    _zz_min_idx_6 <= ((data_12 <= data_13) ? 6'h0c : 6'h0d);
    _zz_min_val_7 <= ((data_14 <= data_15) ? data_14 : data_15);
    _zz_min_idx_7 <= ((data_14 <= data_15) ? 6'h0e : 6'h0f);
    _zz_min_val_8 <= ((data_16 <= data_17) ? data_16 : data_17);
    _zz_min_idx_8 <= ((data_16 <= data_17) ? 6'h10 : 6'h11);
    _zz_min_val_9 <= ((data_18 <= data_19) ? data_18 : data_19);
    _zz_min_idx_9 <= ((data_18 <= data_19) ? 6'h12 : 6'h13);
    _zz_min_val_10 <= ((data_20 <= data_21) ? data_20 : data_21);
    _zz_min_idx_10 <= ((data_20 <= data_21) ? 6'h14 : 6'h15);
    _zz_min_val_11 <= ((data_22 <= data_23) ? data_22 : data_23);
    _zz_min_idx_11 <= ((data_22 <= data_23) ? 6'h16 : 6'h17);
    _zz_min_val_12 <= ((data_24 <= data_25) ? data_24 : data_25);
    _zz_min_idx_12 <= ((data_24 <= data_25) ? 6'h18 : 6'h19);
    _zz_min_val_13 <= ((data_26 <= data_27) ? data_26 : data_27);
    _zz_min_idx_13 <= ((data_26 <= data_27) ? 6'h1a : 6'h1b);
    _zz_min_val_14 <= ((data_28 <= data_29) ? data_28 : data_29);
    _zz_min_idx_14 <= ((data_28 <= data_29) ? 6'h1c : 6'h1d);
    _zz_min_val_15 <= ((data_30 <= data_31) ? data_30 : data_31);
    _zz_min_idx_15 <= ((data_30 <= data_31) ? 6'h1e : 6'h1f);
    _zz_min_val_16 <= ((data_32 <= data_33) ? data_32 : data_33);
    _zz_min_idx_16 <= ((data_32 <= data_33) ? 6'h20 : 6'h21);
    _zz_min_val_17 <= ((data_34 <= data_35) ? data_34 : data_35);
    _zz_min_idx_17 <= ((data_34 <= data_35) ? 6'h22 : 6'h23);
    _zz_min_val_18 <= ((data_36 <= data_37) ? data_36 : data_37);
    _zz_min_idx_18 <= ((data_36 <= data_37) ? 6'h24 : 6'h25);
    _zz_min_val_19 <= ((data_38 <= data_39) ? data_38 : data_39);
    _zz_min_idx_19 <= ((data_38 <= data_39) ? 6'h26 : 6'h27);
    _zz_min_val_20 <= ((data_40 <= data_41) ? data_40 : data_41);
    _zz_min_idx_20 <= ((data_40 <= data_41) ? 6'h28 : 6'h29);
    _zz_min_val_21 <= ((data_42 <= data_43) ? data_42 : data_43);
    _zz_min_idx_21 <= ((data_42 <= data_43) ? 6'h2a : 6'h2b);
    _zz_min_val_22 <= ((data_44 <= data_45) ? data_44 : data_45);
    _zz_min_idx_22 <= ((data_44 <= data_45) ? 6'h2c : 6'h2d);
    _zz_min_val_23 <= ((data_46 <= data_47) ? data_46 : data_47);
    _zz_min_idx_23 <= ((data_46 <= data_47) ? 6'h2e : 6'h2f);
    _zz_min_val_24 <= ((data_48 <= data_49) ? data_48 : data_49);
    _zz_min_idx_24 <= ((data_48 <= data_49) ? 6'h30 : 6'h31);
    _zz_min_val_25 <= ((data_50 <= data_51) ? data_50 : data_51);
    _zz_min_idx_25 <= ((data_50 <= data_51) ? 6'h32 : 6'h33);
    _zz_min_val_26 <= ((data_52 <= data_53) ? data_52 : data_53);
    _zz_min_idx_26 <= ((data_52 <= data_53) ? 6'h34 : 6'h35);
    _zz_min_val_27 <= ((data_54 <= data_55) ? data_54 : data_55);
    _zz_min_idx_27 <= ((data_54 <= data_55) ? 6'h36 : 6'h37);
    _zz_min_val_28 <= ((data_56 <= data_57) ? data_56 : data_57);
    _zz_min_idx_28 <= ((data_56 <= data_57) ? 6'h38 : 6'h39);
    _zz_min_val_29 <= ((data_58 <= data_59) ? data_58 : data_59);
    _zz_min_idx_29 <= ((data_58 <= data_59) ? 6'h3a : 6'h3b);
    _zz_min_val_30 <= ((data_60 <= data_61) ? data_60 : data_61);
    _zz_min_idx_30 <= ((data_60 <= data_61) ? 6'h3c : 6'h3d);
    _zz_min_val_31 <= ((data_62 <= data_63) ? data_62 : data_63);
    _zz_min_idx_31 <= ((data_62 <= data_63) ? 6'h3e : 6'h3f);
    _zz_min_val_32 <= ((_zz_min_val <= _zz_min_val_1) ? _zz_min_val : _zz_min_val_1);
    _zz_min_idx_32 <= ((_zz_min_val <= _zz_min_val_1) ? _zz_min_idx : _zz_min_idx_1);
    _zz_min_val_33 <= ((_zz_min_val_2 <= _zz_min_val_3) ? _zz_min_val_2 : _zz_min_val_3);
    _zz_min_idx_33 <= ((_zz_min_val_2 <= _zz_min_val_3) ? _zz_min_idx_2 : _zz_min_idx_3);
    _zz_min_val_34 <= ((_zz_min_val_4 <= _zz_min_val_5) ? _zz_min_val_4 : _zz_min_val_5);
    _zz_min_idx_34 <= ((_zz_min_val_4 <= _zz_min_val_5) ? _zz_min_idx_4 : _zz_min_idx_5);
    _zz_min_val_35 <= ((_zz_min_val_6 <= _zz_min_val_7) ? _zz_min_val_6 : _zz_min_val_7);
    _zz_min_idx_35 <= ((_zz_min_val_6 <= _zz_min_val_7) ? _zz_min_idx_6 : _zz_min_idx_7);
    _zz_min_val_36 <= ((_zz_min_val_8 <= _zz_min_val_9) ? _zz_min_val_8 : _zz_min_val_9);
    _zz_min_idx_36 <= ((_zz_min_val_8 <= _zz_min_val_9) ? _zz_min_idx_8 : _zz_min_idx_9);
    _zz_min_val_37 <= ((_zz_min_val_10 <= _zz_min_val_11) ? _zz_min_val_10 : _zz_min_val_11);
    _zz_min_idx_37 <= ((_zz_min_val_10 <= _zz_min_val_11) ? _zz_min_idx_10 : _zz_min_idx_11);
    _zz_min_val_38 <= ((_zz_min_val_12 <= _zz_min_val_13) ? _zz_min_val_12 : _zz_min_val_13);
    _zz_min_idx_38 <= ((_zz_min_val_12 <= _zz_min_val_13) ? _zz_min_idx_12 : _zz_min_idx_13);
    _zz_min_val_39 <= ((_zz_min_val_14 <= _zz_min_val_15) ? _zz_min_val_14 : _zz_min_val_15);
    _zz_min_idx_39 <= ((_zz_min_val_14 <= _zz_min_val_15) ? _zz_min_idx_14 : _zz_min_idx_15);
    _zz_min_val_40 <= ((_zz_min_val_16 <= _zz_min_val_17) ? _zz_min_val_16 : _zz_min_val_17);
    _zz_min_idx_40 <= ((_zz_min_val_16 <= _zz_min_val_17) ? _zz_min_idx_16 : _zz_min_idx_17);
    _zz_min_val_41 <= ((_zz_min_val_18 <= _zz_min_val_19) ? _zz_min_val_18 : _zz_min_val_19);
    _zz_min_idx_41 <= ((_zz_min_val_18 <= _zz_min_val_19) ? _zz_min_idx_18 : _zz_min_idx_19);
    _zz_min_val_42 <= ((_zz_min_val_20 <= _zz_min_val_21) ? _zz_min_val_20 : _zz_min_val_21);
    _zz_min_idx_42 <= ((_zz_min_val_20 <= _zz_min_val_21) ? _zz_min_idx_20 : _zz_min_idx_21);
    _zz_min_val_43 <= ((_zz_min_val_22 <= _zz_min_val_23) ? _zz_min_val_22 : _zz_min_val_23);
    _zz_min_idx_43 <= ((_zz_min_val_22 <= _zz_min_val_23) ? _zz_min_idx_22 : _zz_min_idx_23);
    _zz_min_val_44 <= ((_zz_min_val_24 <= _zz_min_val_25) ? _zz_min_val_24 : _zz_min_val_25);
    _zz_min_idx_44 <= ((_zz_min_val_24 <= _zz_min_val_25) ? _zz_min_idx_24 : _zz_min_idx_25);
    _zz_min_val_45 <= ((_zz_min_val_26 <= _zz_min_val_27) ? _zz_min_val_26 : _zz_min_val_27);
    _zz_min_idx_45 <= ((_zz_min_val_26 <= _zz_min_val_27) ? _zz_min_idx_26 : _zz_min_idx_27);
    _zz_min_val_46 <= ((_zz_min_val_28 <= _zz_min_val_29) ? _zz_min_val_28 : _zz_min_val_29);
    _zz_min_idx_46 <= ((_zz_min_val_28 <= _zz_min_val_29) ? _zz_min_idx_28 : _zz_min_idx_29);
    _zz_min_val_47 <= ((_zz_min_val_30 <= _zz_min_val_31) ? _zz_min_val_30 : _zz_min_val_31);
    _zz_min_idx_47 <= ((_zz_min_val_30 <= _zz_min_val_31) ? _zz_min_idx_30 : _zz_min_idx_31);
    _zz_min_val_48 <= ((_zz_min_val_32 <= _zz_min_val_33) ? _zz_min_val_32 : _zz_min_val_33);
    _zz_min_idx_48 <= ((_zz_min_val_32 <= _zz_min_val_33) ? _zz_min_idx_32 : _zz_min_idx_33);
    _zz_min_val_49 <= ((_zz_min_val_34 <= _zz_min_val_35) ? _zz_min_val_34 : _zz_min_val_35);
    _zz_min_idx_49 <= ((_zz_min_val_34 <= _zz_min_val_35) ? _zz_min_idx_34 : _zz_min_idx_35);
    _zz_min_val_50 <= ((_zz_min_val_36 <= _zz_min_val_37) ? _zz_min_val_36 : _zz_min_val_37);
    _zz_min_idx_50 <= ((_zz_min_val_36 <= _zz_min_val_37) ? _zz_min_idx_36 : _zz_min_idx_37);
    _zz_min_val_51 <= ((_zz_min_val_38 <= _zz_min_val_39) ? _zz_min_val_38 : _zz_min_val_39);
    _zz_min_idx_51 <= ((_zz_min_val_38 <= _zz_min_val_39) ? _zz_min_idx_38 : _zz_min_idx_39);
    _zz_min_val_52 <= ((_zz_min_val_40 <= _zz_min_val_41) ? _zz_min_val_40 : _zz_min_val_41);
    _zz_min_idx_52 <= ((_zz_min_val_40 <= _zz_min_val_41) ? _zz_min_idx_40 : _zz_min_idx_41);
    _zz_min_val_53 <= ((_zz_min_val_42 <= _zz_min_val_43) ? _zz_min_val_42 : _zz_min_val_43);
    _zz_min_idx_53 <= ((_zz_min_val_42 <= _zz_min_val_43) ? _zz_min_idx_42 : _zz_min_idx_43);
    _zz_min_val_54 <= ((_zz_min_val_44 <= _zz_min_val_45) ? _zz_min_val_44 : _zz_min_val_45);
    _zz_min_idx_54 <= ((_zz_min_val_44 <= _zz_min_val_45) ? _zz_min_idx_44 : _zz_min_idx_45);
    _zz_min_val_55 <= ((_zz_min_val_46 <= _zz_min_val_47) ? _zz_min_val_46 : _zz_min_val_47);
    _zz_min_idx_55 <= ((_zz_min_val_46 <= _zz_min_val_47) ? _zz_min_idx_46 : _zz_min_idx_47);
    _zz_min_val_56 <= ((_zz_min_val_48 <= _zz_min_val_49) ? _zz_min_val_48 : _zz_min_val_49);
    _zz_min_idx_56 <= ((_zz_min_val_48 <= _zz_min_val_49) ? _zz_min_idx_48 : _zz_min_idx_49);
    _zz_min_val_57 <= ((_zz_min_val_50 <= _zz_min_val_51) ? _zz_min_val_50 : _zz_min_val_51);
    _zz_min_idx_57 <= ((_zz_min_val_50 <= _zz_min_val_51) ? _zz_min_idx_50 : _zz_min_idx_51);
    _zz_min_val_58 <= ((_zz_min_val_52 <= _zz_min_val_53) ? _zz_min_val_52 : _zz_min_val_53);
    _zz_min_idx_58 <= ((_zz_min_val_52 <= _zz_min_val_53) ? _zz_min_idx_52 : _zz_min_idx_53);
    _zz_min_val_59 <= ((_zz_min_val_54 <= _zz_min_val_55) ? _zz_min_val_54 : _zz_min_val_55);
    _zz_min_idx_59 <= ((_zz_min_val_54 <= _zz_min_val_55) ? _zz_min_idx_54 : _zz_min_idx_55);
    _zz_min_val_60 <= ((_zz_min_val_56 <= _zz_min_val_57) ? _zz_min_val_56 : _zz_min_val_57);
    _zz_min_idx_60 <= ((_zz_min_val_56 <= _zz_min_val_57) ? _zz_min_idx_56 : _zz_min_idx_57);
    _zz_min_val_61 <= ((_zz_min_val_58 <= _zz_min_val_59) ? _zz_min_val_58 : _zz_min_val_59);
    _zz_min_idx_61 <= ((_zz_min_val_58 <= _zz_min_val_59) ? _zz_min_idx_58 : _zz_min_idx_59);
    _zz_min_val_62 <= ((_zz_min_val_60 <= _zz_min_val_61) ? _zz_min_val_60 : _zz_min_val_61);
    _zz_min_idx_62 <= ((_zz_min_val_60 <= _zz_min_val_61) ? _zz_min_idx_60 : _zz_min_idx_61);
  end


endmodule

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

//AddCompareSelect replaced by AddCompareSelect

//BranchMetric replaced by BranchMetric

module AddCompareSelect (
  input      [15:0]   last_state_weight_0,
  input      [15:0]   last_state_weight_1,
  input      [15:0]   dist_0,
  input      [15:0]   dist_1,
  output reg [15:0]   state_weight,
  output reg          decision
);

  wire       [15:0]   branch_weight_0;
  wire       [15:0]   branch_weight_1;
  wire                when_AddCompareSelect_l17;

  assign branch_weight_0 = (last_state_weight_0 + dist_0);
  assign branch_weight_1 = (last_state_weight_1 + dist_1);
  assign when_AddCompareSelect_l17 = (branch_weight_0 <= branch_weight_1);
  always @(*) begin
    if(when_AddCompareSelect_l17) begin
      state_weight = branch_weight_0;
    end else begin
      state_weight = branch_weight_1;
    end
  end

  always @(*) begin
    if(when_AddCompareSelect_l17) begin
      decision = 1'b0;
    end else begin
      decision = 1'b1;
    end
  end


endmodule

module BranchMetric (
  input      [1:0]    trellis_unit_0,
  input      [1:0]    trellis_unit_1,
  input      [1:0]    raw_data_data,
  input      [1:0]    raw_data_indicate,
  output     [2:0]    dist_0,
  output     [2:0]    dist_1
);

  wire       [1:0]    hammingDistance_128_distance;
  wire       [1:0]    hammingDistance_129_distance;
  wire       [2:0]    _zz_dist_0;
  wire       [2:0]    _zz_dist_1;

  assign _zz_dist_0 = {1'd0, hammingDistance_128_distance};
  assign _zz_dist_1 = {1'd0, hammingDistance_129_distance};
  HammingDistance hammingDistance_128 (
    .in_a        (trellis_unit_0[1:0]                ), //i
    .in_b        (raw_data_data[1:0]                 ), //i
    .distance    (hammingDistance_128_distance[1:0]  )  //o
  );
  HammingDistance hammingDistance_129 (
    .in_a        (trellis_unit_1[1:0]                ), //i
    .in_b        (raw_data_data[1:0]                 ), //i
    .distance    (hammingDistance_129_distance[1:0]  )  //o
  );
  assign dist_0 = _zz_dist_0;
  assign dist_1 = _zz_dist_1;

endmodule

module FlowMux (
  input               inputs_0_valid,
  input               inputs_0_payload_last,
  input      [7:0]    inputs_0_payload_fragment,
  input               inputs_1_valid,
  input               inputs_1_payload_last,
  input      [7:0]    inputs_1_payload_fragment,
  input               inputs_2_valid,
  input               inputs_2_payload_last,
  input      [7:0]    inputs_2_payload_fragment,
  input      [1:0]    select_1,
  output              output_valid,
  output              output_payload_last,
  output     [7:0]    output_payload_fragment
);

  reg                 _zz_output_valid;
  reg                 _zz_output_payload_last;
  reg        [7:0]    _zz_output_payload_fragment;

  always @(*) begin
    case(select_1)
      2'b00 : begin
        _zz_output_valid = inputs_0_valid;
        _zz_output_payload_last = inputs_0_payload_last;
        _zz_output_payload_fragment = inputs_0_payload_fragment;
      end
      2'b01 : begin
        _zz_output_valid = inputs_1_valid;
        _zz_output_payload_last = inputs_1_payload_last;
        _zz_output_payload_fragment = inputs_1_payload_fragment;
      end
      default : begin
        _zz_output_valid = inputs_2_valid;
        _zz_output_payload_last = inputs_2_payload_last;
        _zz_output_payload_fragment = inputs_2_payload_fragment;
      end
    endcase
  end

  assign output_valid = _zz_output_valid;
  assign output_payload_last = _zz_output_payload_last;
  assign output_payload_fragment = _zz_output_payload_fragment;

endmodule

module IQDemod_2 (
  output              unit_data_valid,
  output              unit_data_payload_last,
  output     [7:0]    unit_data_payload_fragment,
  input               mod_iq_valid,
  input               mod_iq_payload_last,
  input      [11:0]   mod_iq_payload_fragment_cha_i,
  input      [11:0]   mod_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);

  wire       [11:0]   _zz_comp_cmp_i;
  wire       [11:0]   _zz_comp_cmp_q;
  wire       [11:0]   _zz_comp_cmp_i_1;
  wire       [11:0]   _zz_comp_cmp_q_1;
  wire       [11:0]   _zz_comp_cmp_i_2;
  wire       [11:0]   _zz_comp_cmp_q_2;
  wire       [3:0]    _zz_unit_data_payload_fragment;
  reg        [11:0]   demod_data_i;
  reg                 demod_valid_i;
  reg        [11:0]   demod_data_q;
  reg                 demod_valid_q;
  reg                 demod_last_iq;
  reg        [2:0]    comp_cmp_i;
  reg        [2:0]    comp_cmp_q;
  reg        [2:0]    compTable_i;
  reg        [2:0]    codeTable_q;
  reg                 demod_valid;
  reg                 demod_last;
  reg        [1:0]    unit_data_i;
  reg        [1:0]    unit_data_q;
  reg                 unit_valid;
  reg                 unit_last;

  assign _zz_comp_cmp_i = 12'hd78;
  assign _zz_comp_cmp_q = 12'hd78;
  assign _zz_comp_cmp_i_1 = 12'hfff;
  assign _zz_comp_cmp_q_1 = 12'hfff;
  assign _zz_comp_cmp_i_2 = 12'h286;
  assign _zz_comp_cmp_q_2 = 12'h286;
  assign _zz_unit_data_payload_fragment = {unit_data_i,unit_data_q};
  always @(*) begin
    comp_cmp_i[0] = ($signed(_zz_comp_cmp_i) < $signed(demod_data_i));
    comp_cmp_i[1] = ($signed(_zz_comp_cmp_i_1) < $signed(demod_data_i));
    comp_cmp_i[2] = ($signed(_zz_comp_cmp_i_2) < $signed(demod_data_i));
  end

  always @(*) begin
    comp_cmp_q[0] = ($signed(_zz_comp_cmp_q) < $signed(demod_data_q));
    comp_cmp_q[1] = ($signed(_zz_comp_cmp_q_1) < $signed(demod_data_q));
    comp_cmp_q[2] = ($signed(_zz_comp_cmp_q_2) < $signed(demod_data_q));
  end

  assign unit_data_payload_fragment = {4'd0, _zz_unit_data_payload_fragment};
  assign unit_data_valid = unit_valid;
  assign unit_data_payload_last = unit_last;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      demod_data_i <= 12'h0;
      demod_valid_i <= 1'b0;
      demod_data_q <= 12'h0;
      demod_valid_q <= 1'b0;
      demod_last_iq <= 1'b0;
      compTable_i <= 3'b000;
      codeTable_q <= 3'b000;
      demod_valid <= 1'b0;
      demod_last <= 1'b0;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
    end else begin
      demod_data_i <= mod_iq_payload_fragment_cha_i;
      demod_valid_i <= mod_iq_valid;
      demod_data_q <= mod_iq_payload_fragment_cha_q;
      demod_valid_q <= mod_iq_valid;
      demod_last_iq <= mod_iq_payload_last;
      compTable_i <= comp_cmp_i;
      codeTable_q <= comp_cmp_q;
      demod_valid <= (demod_valid_i && demod_valid_q);
      demod_last <= demod_last_iq;
      if(demod_valid) begin
        unit_valid <= 1'b1;
        unit_last <= demod_last;
      end else begin
        unit_valid <= 1'b0;
        unit_last <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(demod_valid) begin
      case(compTable_i)
        3'b000 : begin
          unit_data_i <= 2'b00;
        end
        3'b001 : begin
          unit_data_i <= 2'b01;
        end
        3'b011 : begin
          unit_data_i <= 2'b11;
        end
        3'b111 : begin
          unit_data_i <= 2'b10;
        end
        default : begin
        end
      endcase
      case(codeTable_q)
        3'b000 : begin
          unit_data_q <= 2'b00;
        end
        3'b001 : begin
          unit_data_q <= 2'b01;
        end
        3'b011 : begin
          unit_data_q <= 2'b11;
        end
        3'b111 : begin
          unit_data_q <= 2'b10;
        end
        default : begin
        end
      endcase
    end else begin
      unit_data_i <= 2'b00;
      unit_data_q <= 2'b00;
    end
  end


endmodule

module IQDemod_1 (
  output              unit_data_valid,
  output              unit_data_payload_last,
  output     [7:0]    unit_data_payload_fragment,
  input               mod_iq_valid,
  input               mod_iq_payload_last,
  input      [11:0]   mod_iq_payload_fragment_cha_i,
  input      [11:0]   mod_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);

  wire       [11:0]   _zz_comp_cmp_i;
  wire       [11:0]   _zz_comp_cmp_q;
  wire       [1:0]    _zz_unit_data_payload_fragment;
  reg        [11:0]   demod_data_i;
  reg                 demod_valid_i;
  reg        [11:0]   demod_data_q;
  reg                 demod_valid_q;
  reg                 demod_last_iq;
  wire       [0:0]    comp_cmp_i;
  wire       [0:0]    comp_cmp_q;
  reg        [0:0]    compTable_i;
  reg        [0:0]    codeTable_q;
  reg                 demod_valid;
  reg                 demod_last;
  reg        [0:0]    unit_data_i;
  reg        [0:0]    unit_data_q;
  reg                 unit_valid;
  reg                 unit_last;

  assign _zz_comp_cmp_i = 12'h0;
  assign _zz_comp_cmp_q = 12'h0;
  assign _zz_unit_data_payload_fragment = {unit_data_i,unit_data_q};
  assign comp_cmp_i[0] = ($signed(_zz_comp_cmp_i) < $signed(demod_data_i));
  assign comp_cmp_q[0] = ($signed(_zz_comp_cmp_q) < $signed(demod_data_q));
  assign unit_data_payload_fragment = {6'd0, _zz_unit_data_payload_fragment};
  assign unit_data_valid = unit_valid;
  assign unit_data_payload_last = unit_last;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      demod_data_i <= 12'h0;
      demod_valid_i <= 1'b0;
      demod_data_q <= 12'h0;
      demod_valid_q <= 1'b0;
      demod_last_iq <= 1'b0;
      compTable_i <= 1'b0;
      codeTable_q <= 1'b0;
      demod_valid <= 1'b0;
      demod_last <= 1'b0;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
    end else begin
      demod_data_i <= mod_iq_payload_fragment_cha_i;
      demod_valid_i <= mod_iq_valid;
      demod_data_q <= mod_iq_payload_fragment_cha_q;
      demod_valid_q <= mod_iq_valid;
      demod_last_iq <= mod_iq_payload_last;
      compTable_i <= comp_cmp_i;
      codeTable_q <= comp_cmp_q;
      demod_valid <= (demod_valid_i && demod_valid_q);
      demod_last <= demod_last_iq;
      if(demod_valid) begin
        unit_valid <= 1'b1;
        unit_last <= demod_last;
      end else begin
        unit_valid <= 1'b0;
        unit_last <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(demod_valid) begin
      case(compTable_i)
        1'b0 : begin
          unit_data_i <= 1'b0;
        end
        default : begin
          unit_data_i <= 1'b1;
        end
      endcase
      case(codeTable_q)
        1'b0 : begin
          unit_data_q <= 1'b0;
        end
        default : begin
          unit_data_q <= 1'b1;
        end
      endcase
    end else begin
      unit_data_i <= 1'b0;
      unit_data_q <= 1'b0;
    end
  end


endmodule

module IQDemod (
  output              unit_data_valid,
  output              unit_data_payload_last,
  output     [7:0]    unit_data_payload_fragment,
  input               mod_iq_valid,
  input               mod_iq_payload_last,
  input      [11:0]   mod_iq_payload_fragment_cha_i,
  input      [11:0]   mod_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);

  wire       [11:0]   _zz_comp_cmp_i;
  reg        [11:0]   demod_data_i;
  reg                 demod_valid_i;
  reg                 demod_last_iq;
  wire       [0:0]    comp_cmp_i;
  reg        [0:0]    compTable_i;
  reg                 demod_valid;
  reg                 demod_last;
  reg        [0:0]    unit_data_i;
  reg                 unit_valid;
  reg                 unit_last;

  assign _zz_comp_cmp_i = 12'h0;
  assign comp_cmp_i[0] = ($signed(_zz_comp_cmp_i) < $signed(demod_data_i));
  assign unit_data_payload_fragment = {7'd0, unit_data_i};
  assign unit_data_valid = unit_valid;
  assign unit_data_payload_last = unit_last;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      demod_data_i <= 12'h0;
      demod_valid_i <= 1'b0;
      demod_last_iq <= 1'b0;
      compTable_i <= 1'b0;
      demod_last <= 1'b0;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
    end else begin
      demod_data_i <= mod_iq_payload_fragment_cha_i;
      demod_valid_i <= mod_iq_valid;
      demod_last_iq <= mod_iq_payload_last;
      compTable_i <= comp_cmp_i;
      demod_last <= demod_last_iq;
      if(demod_valid) begin
        unit_valid <= 1'b1;
        unit_last <= demod_last;
      end else begin
        unit_valid <= 1'b0;
        unit_last <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    demod_valid <= demod_valid_i;
    if(demod_valid) begin
      case(compTable_i)
        1'b0 : begin
          unit_data_i <= 1'b0;
        end
        default : begin
          unit_data_i <= 1'b1;
        end
      endcase
    end else begin
      unit_data_i <= 1'b0;
    end
  end


endmodule

module FlowDeMux (
  input               input_valid,
  input               input_payload_last,
  input      [11:0]   input_payload_fragment_cha_i,
  input      [11:0]   input_payload_fragment_cha_q,
  input      [1:0]    select_1,
  output reg          outputs_0_valid,
  output reg          outputs_0_payload_last,
  output reg [11:0]   outputs_0_payload_fragment_cha_i,
  output reg [11:0]   outputs_0_payload_fragment_cha_q,
  output reg          outputs_1_valid,
  output reg          outputs_1_payload_last,
  output reg [11:0]   outputs_1_payload_fragment_cha_i,
  output reg [11:0]   outputs_1_payload_fragment_cha_q,
  output reg          outputs_2_valid,
  output reg          outputs_2_payload_last,
  output reg [11:0]   outputs_2_payload_fragment_cha_i,
  output reg [11:0]   outputs_2_payload_fragment_cha_q
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
      outputs_0_payload_fragment_cha_i = 12'h0;
    end else begin
      outputs_0_payload_fragment_cha_i = input_payload_fragment_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16) begin
      outputs_0_payload_fragment_cha_q = 12'h0;
    end else begin
      outputs_0_payload_fragment_cha_q = input_payload_fragment_cha_q;
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
      outputs_1_payload_fragment_cha_i = 12'h0;
    end else begin
      outputs_1_payload_fragment_cha_i = input_payload_fragment_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_1) begin
      outputs_1_payload_fragment_cha_q = 12'h0;
    end else begin
      outputs_1_payload_fragment_cha_q = input_payload_fragment_cha_q;
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
      outputs_2_payload_fragment_cha_i = 12'h0;
    end else begin
      outputs_2_payload_fragment_cha_i = input_payload_fragment_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_2) begin
      outputs_2_payload_fragment_cha_q = 12'h0;
    end else begin
      outputs_2_payload_fragment_cha_q = input_payload_fragment_cha_q;
    end
  end


endmodule

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

module Correlator_2 (
  input               raw_data_0_valid,
  input      [11:0]   raw_data_0_payload_cha_i,
  input      [11:0]   raw_data_0_payload_cha_q,
  input               raw_data_1_valid,
  input      [11:0]   raw_data_1_payload_cha_i,
  input      [11:0]   raw_data_1_payload_cha_q,
  output              corr_result_valid,
  output     [35:0]   corr_result_payload_cha_i,
  output     [35:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);

  wire       [23:0]   shiftRegister_11_output_1;
  wire       [23:0]   shiftRegister_12_output_1;
  wire       [23:0]   _zz__zz_corr_val_i;
  wire       [23:0]   _zz__zz_corr_val_i_1;
  wire       [23:0]   _zz__zz_corr_val_q;
  wire       [23:0]   _zz__zz_corr_val_q_1;
  wire       [35:0]   _zz_corr_val_i_1;
  wire       [35:0]   _zz_corr_val_i_2;
  wire       [35:0]   _zz_corr_val_i_3;
  wire       [35:0]   _zz_corr_val_q_1;
  wire       [35:0]   _zz_corr_val_q_2;
  wire       [35:0]   _zz_corr_val_q_3;
  reg        [35:0]   corr_val_i;
  reg        [35:0]   corr_val_q;
  reg        [23:0]   _zz_corr_val_i;
  reg        [23:0]   _zz_corr_val_q;
  reg                 _zz_enable;
  reg                 _zz_corr_result_valid;

  assign _zz__zz_corr_val_i = ($signed(raw_data_0_payload_cha_i) * $signed(raw_data_1_payload_cha_i));
  assign _zz__zz_corr_val_i_1 = ($signed(raw_data_0_payload_cha_q) * $signed(raw_data_1_payload_cha_q));
  assign _zz__zz_corr_val_q = ($signed(raw_data_0_payload_cha_q) * $signed(raw_data_1_payload_cha_i));
  assign _zz__zz_corr_val_q_1 = ($signed(raw_data_0_payload_cha_i) * $signed(raw_data_1_payload_cha_q));
  assign _zz_corr_val_i_1 = ($signed(corr_val_i) - $signed(_zz_corr_val_i_2));
  assign _zz_corr_val_i_2 = {{12{shiftRegister_11_output_1[23]}}, shiftRegister_11_output_1};
  assign _zz_corr_val_i_3 = {{12{_zz_corr_val_i[23]}}, _zz_corr_val_i};
  assign _zz_corr_val_q_1 = ($signed(corr_val_q) - $signed(_zz_corr_val_q_2));
  assign _zz_corr_val_q_2 = {{12{shiftRegister_12_output_1[23]}}, shiftRegister_12_output_1};
  assign _zz_corr_val_q_3 = {{12{_zz_corr_val_q[23]}}, _zz_corr_val_q};
  ShiftRegister_9 shiftRegister_11 (
    .input_1     (_zz_corr_val_i[23:0]             ), //i
    .output_1    (shiftRegister_11_output_1[23:0]  ), //o
    .enable      (_zz_enable                       ), //i
    .clk         (clk                              ), //i
    .reset       (reset                            )  //i
  );
  ShiftRegister_9 shiftRegister_12 (
    .input_1     (_zz_corr_val_q[23:0]             ), //i
    .output_1    (shiftRegister_12_output_1[23:0]  ), //o
    .enable      (_zz_enable                       ), //i
    .clk         (clk                              ), //i
    .reset       (reset                            )  //i
  );
  assign corr_result_payload_cha_i = corr_val_i;
  assign corr_result_payload_cha_q = corr_val_q;
  assign corr_result_valid = _zz_corr_result_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      corr_val_i <= 36'h0;
      corr_val_q <= 36'h0;
      _zz_corr_val_i <= 24'h0;
      _zz_corr_val_q <= 24'h0;
      _zz_enable <= 1'b0;
      _zz_corr_result_valid <= 1'b0;
    end else begin
      _zz_corr_val_i <= ($signed(_zz__zz_corr_val_i) + $signed(_zz__zz_corr_val_i_1));
      _zz_corr_val_q <= ($signed(_zz__zz_corr_val_q) - $signed(_zz__zz_corr_val_q_1));
      _zz_enable <= (raw_data_0_valid && raw_data_1_valid);
      if(_zz_enable) begin
        _zz_corr_result_valid <= 1'b1;
        corr_val_i <= ($signed(_zz_corr_val_i_1) + $signed(_zz_corr_val_i_3));
        corr_val_q <= ($signed(_zz_corr_val_q_1) + $signed(_zz_corr_val_q_3));
      end else begin
        _zz_corr_result_valid <= 1'b0;
      end
    end
  end


endmodule

module PhaseRotator (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  input               delta_phi_valid,
  input      [23:0]   delta_phi_payload,
  output              rotated_data_valid,
  output     [11:0]   rotated_data_payload_cha_i,
  output     [11:0]   rotated_data_payload_cha_q,
  input               clk,
  input               reset
);

  wire       [24:0]   cordic_pipeline_core_raw_data_payload_x;
  wire       [24:0]   cordic_pipeline_core_raw_data_payload_y;
  wire       [24:0]   cordic_pipeline_core_raw_data_payload_z;
  wire                shiftRegister_11_clc;
  wire                cordic_pipeline_core_raw_data_ready;
  wire                cordic_pipeline_core_result_valid;
  wire       [24:0]   cordic_pipeline_core_result_payload_x;
  wire       [24:0]   cordic_pipeline_core_result_payload_y;
  wire       [24:0]   cordic_pipeline_core_result_payload_z;
  wire                shiftRegister_11_output_1;
  wire       [23:0]   _zz_when_PhaseRotator_l47;
  wire       [23:0]   _zz_phiNext;
  wire       [23:0]   _zz_phiNext_1;
  wire       [23:0]   _zz_when_PhaseRotator_l50;
  wire       [23:0]   _zz_raw_data_payload_x;
  wire       [23:0]   _zz_raw_data_payload_y;
  wire       [25:0]   _zz__zz_when_SInt_l337_2;
  wire       [25:0]   _zz__zz_when_SInt_l337_2_1;
  wire       [12:0]   _zz_when_SInt_l191;
  wire       [12:0]   _zz__zz_rotated_x_raw_3;
  wire       [12:0]   _zz__zz_rotated_x_raw_3_1;
  wire       [25:0]   _zz__zz_rotated_x_raw;
  wire       [25:0]   _zz__zz_rotated_x_raw_1;
  wire       [25:0]   _zz__zz_rotated_x_raw_2;
  wire       [1:0]    _zz_when_SInt_l131;
  wire       [0:0]    _zz_when_SInt_l137;
  wire       [25:0]   _zz__zz_when_SInt_l337_5;
  wire       [25:0]   _zz__zz_when_SInt_l337_5_1;
  wire       [12:0]   _zz_when_SInt_l191_1;
  wire       [12:0]   _zz__zz_rotated_y_raw_3;
  wire       [12:0]   _zz__zz_rotated_y_raw_3_1;
  wire       [25:0]   _zz__zz_rotated_y_raw;
  wire       [25:0]   _zz__zz_rotated_y_raw_1;
  wire       [25:0]   _zz__zz_rotated_y_raw_2;
  wire       [1:0]    _zz_when_SInt_l131_1;
  wire       [0:0]    _zz_when_SInt_l137_1;
  wire       [11:0]   _zz_rotated_data_payload_cha_i;
  wire       [11:0]   _zz_rotated_data_payload_cha_q;
  reg                 xy_symbol;
  reg        [23:0]   phi;
  reg        [23:0]   phiNext;
  reg        [23:0]   phiCorrect;
  wire       [23:0]   math_pi;
  wire       [23:0]   math_pi_2;
  wire       [23:0]   neg_math_pi_2;
  wire                when_PhaseRotator_l47;
  wire                when_PhaseRotator_l50;
  reg        [12:0]   _zz_rotated_x_raw;
  wire       [24:0]   _zz_rotated_x_raw_1;
  wire       [24:0]   _zz_when_SInt_l337;
  wire       [24:0]   _zz_when_SInt_l337_1;
  wire       [25:0]   _zz_when_SInt_l337_2;
  wire       [24:0]   _zz_rotated_x_raw_2;
  wire                when_SInt_l337;
  reg        [12:0]   _zz_rotated_x_raw_3;
  wire                when_SInt_l191;
  reg        [11:0]   rotated_x_raw;
  wire                when_SInt_l130;
  wire                when_SInt_l131;
  wire                when_SInt_l137;
  reg        [12:0]   _zz_rotated_y_raw;
  wire       [24:0]   _zz_rotated_y_raw_1;
  wire       [24:0]   _zz_when_SInt_l337_3;
  wire       [24:0]   _zz_when_SInt_l337_4;
  wire       [25:0]   _zz_when_SInt_l337_5;
  wire       [24:0]   _zz_rotated_y_raw_2;
  wire                when_SInt_l337_1;
  reg        [12:0]   _zz_rotated_y_raw_3;
  wire                when_SInt_l191_1;
  reg        [11:0]   rotated_y_raw;
  wire                when_SInt_l130_1;
  wire                when_SInt_l131_1;
  wire                when_SInt_l137_1;

  assign _zz_when_PhaseRotator_l47 = ($signed(phi) + $signed(phiCorrect));
  assign _zz_phiNext = ($signed(phi) - $signed(math_pi));
  assign _zz_phiNext_1 = ($signed(phi) + $signed(math_pi));
  assign _zz_when_PhaseRotator_l50 = ($signed(phi) + $signed(phiCorrect));
  assign _zz_raw_data_payload_x = {raw_data_payload_cha_i,12'h0};
  assign _zz_raw_data_payload_y = {raw_data_payload_cha_q,12'h0};
  assign _zz__zz_when_SInt_l337_2 = {_zz_when_SInt_l337_1[24],_zz_when_SInt_l337_1};
  assign _zz__zz_when_SInt_l337_2_1 = {_zz_when_SInt_l337[24],_zz_when_SInt_l337};
  assign _zz_when_SInt_l191 = _zz_when_SInt_l337_2[12 : 0];
  assign _zz__zz_rotated_x_raw_3 = _zz_when_SInt_l337_2[25 : 13];
  assign _zz__zz_rotated_x_raw_3_1 = 13'h0001;
  assign _zz__zz_rotated_x_raw = ($signed(_zz__zz_rotated_x_raw_1) + $signed(_zz__zz_rotated_x_raw_2));
  assign _zz__zz_rotated_x_raw_1 = {_zz_rotated_x_raw_2[24],_zz_rotated_x_raw_2};
  assign _zz__zz_rotated_x_raw_2 = {_zz_rotated_x_raw_1[24],_zz_rotated_x_raw_1};
  assign _zz_when_SInt_l131 = _zz_rotated_x_raw[12 : 11];
  assign _zz_when_SInt_l137 = _zz_rotated_x_raw[11 : 11];
  assign _zz__zz_when_SInt_l337_5 = {_zz_when_SInt_l337_4[24],_zz_when_SInt_l337_4};
  assign _zz__zz_when_SInt_l337_5_1 = {_zz_when_SInt_l337_3[24],_zz_when_SInt_l337_3};
  assign _zz_when_SInt_l191_1 = _zz_when_SInt_l337_5[12 : 0];
  assign _zz__zz_rotated_y_raw_3 = _zz_when_SInt_l337_5[25 : 13];
  assign _zz__zz_rotated_y_raw_3_1 = 13'h0001;
  assign _zz__zz_rotated_y_raw = ($signed(_zz__zz_rotated_y_raw_1) + $signed(_zz__zz_rotated_y_raw_2));
  assign _zz__zz_rotated_y_raw_1 = {_zz_rotated_y_raw_2[24],_zz_rotated_y_raw_2};
  assign _zz__zz_rotated_y_raw_2 = {_zz_rotated_y_raw_1[24],_zz_rotated_y_raw_1};
  assign _zz_when_SInt_l131_1 = _zz_rotated_y_raw[12 : 11];
  assign _zz_when_SInt_l137_1 = _zz_rotated_y_raw[11 : 11];
  assign _zz_rotated_data_payload_cha_i = (- rotated_x_raw);
  assign _zz_rotated_data_payload_cha_q = (- rotated_y_raw);
  CordicRotator_1 cordic_pipeline_core (
    .rotate_mode           (1'b1                                           ), //i
    .x_u                   (2'b00                                          ), //i
    .raw_data_valid        (raw_data_valid                                 ), //i
    .raw_data_ready        (cordic_pipeline_core_raw_data_ready            ), //o
    .raw_data_payload_x    (cordic_pipeline_core_raw_data_payload_x[24:0]  ), //i
    .raw_data_payload_y    (cordic_pipeline_core_raw_data_payload_y[24:0]  ), //i
    .raw_data_payload_z    (cordic_pipeline_core_raw_data_payload_z[24:0]  ), //i
    .result_valid          (cordic_pipeline_core_result_valid              ), //o
    .result_payload_x      (cordic_pipeline_core_result_payload_x[24:0]    ), //o
    .result_payload_y      (cordic_pipeline_core_result_payload_y[24:0]    ), //o
    .result_payload_z      (cordic_pipeline_core_result_payload_z[24:0]    ), //o
    .clk                   (clk                                            ), //i
    .reset                 (reset                                          )  //i
  );
  ShiftRegister_8 shiftRegister_11 (
    .input_1     (xy_symbol                  ), //i
    .output_1    (shiftRegister_11_output_1  ), //o
    .enable      (raw_data_valid             ), //i
    .clc         (shiftRegister_11_clc       ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  assign shiftRegister_11_clc = (! raw_data_valid);
  assign math_pi = 24'h003243;
  assign math_pi_2 = 24'h001921;
  assign neg_math_pi_2 = 24'hffe6df;
  assign when_PhaseRotator_l47 = ($signed(math_pi_2) <= $signed(_zz_when_PhaseRotator_l47));
  always @(*) begin
    if(when_PhaseRotator_l47) begin
      phiNext = ($signed(_zz_phiNext) + $signed(phiCorrect));
    end else begin
      if(when_PhaseRotator_l50) begin
        phiNext = ($signed(_zz_phiNext_1) + $signed(phiCorrect));
      end else begin
        phiNext = ($signed(phi) + $signed(phiCorrect));
      end
    end
  end

  assign when_PhaseRotator_l50 = ($signed(_zz_when_PhaseRotator_l50) <= $signed(neg_math_pi_2));
  assign cordic_pipeline_core_raw_data_payload_x = {{1{_zz_raw_data_payload_x[23]}}, _zz_raw_data_payload_x};
  assign cordic_pipeline_core_raw_data_payload_y = {{1{_zz_raw_data_payload_y[23]}}, _zz_raw_data_payload_y};
  assign cordic_pipeline_core_raw_data_payload_z = {{1{phi[23]}}, phi};
  assign _zz_rotated_x_raw_1 = {{12'h0,1'b1},12'h0};
  assign _zz_when_SInt_l337 = {13'h1fff,12'h0};
  assign _zz_when_SInt_l337_1 = cordic_pipeline_core_result_payload_x[24 : 0];
  assign _zz_when_SInt_l337_2 = ($signed(_zz__zz_when_SInt_l337_2) + $signed(_zz__zz_when_SInt_l337_2_1));
  assign _zz_rotated_x_raw_2 = cordic_pipeline_core_result_payload_x[24 : 0];
  assign when_SInt_l337 = _zz_when_SInt_l337_2[25];
  assign when_SInt_l191 = (|_zz_when_SInt_l191);
  always @(*) begin
    if(when_SInt_l191) begin
      _zz_rotated_x_raw_3 = ($signed(_zz__zz_rotated_x_raw_3) + $signed(_zz__zz_rotated_x_raw_3_1));
    end else begin
      _zz_rotated_x_raw_3 = _zz_when_SInt_l337_2[25 : 13];
    end
  end

  always @(*) begin
    if(when_SInt_l337) begin
      _zz_rotated_x_raw = _zz_rotated_x_raw_3;
    end else begin
      _zz_rotated_x_raw = (_zz__zz_rotated_x_raw >>> 13);
    end
  end

  assign when_SInt_l130 = _zz_rotated_x_raw[12];
  assign when_SInt_l131 = (! (&_zz_when_SInt_l131));
  always @(*) begin
    if(when_SInt_l130) begin
      if(when_SInt_l131) begin
        rotated_x_raw = 12'h800;
      end else begin
        rotated_x_raw = _zz_rotated_x_raw[11 : 0];
      end
    end else begin
      if(when_SInt_l137) begin
        rotated_x_raw = 12'h7ff;
      end else begin
        rotated_x_raw = _zz_rotated_x_raw[11 : 0];
      end
    end
  end

  assign when_SInt_l137 = (|_zz_when_SInt_l137);
  assign _zz_rotated_y_raw_1 = {{12'h0,1'b1},12'h0};
  assign _zz_when_SInt_l337_3 = {13'h1fff,12'h0};
  assign _zz_when_SInt_l337_4 = cordic_pipeline_core_result_payload_y[24 : 0];
  assign _zz_when_SInt_l337_5 = ($signed(_zz__zz_when_SInt_l337_5) + $signed(_zz__zz_when_SInt_l337_5_1));
  assign _zz_rotated_y_raw_2 = cordic_pipeline_core_result_payload_y[24 : 0];
  assign when_SInt_l337_1 = _zz_when_SInt_l337_5[25];
  assign when_SInt_l191_1 = (|_zz_when_SInt_l191_1);
  always @(*) begin
    if(when_SInt_l191_1) begin
      _zz_rotated_y_raw_3 = ($signed(_zz__zz_rotated_y_raw_3) + $signed(_zz__zz_rotated_y_raw_3_1));
    end else begin
      _zz_rotated_y_raw_3 = _zz_when_SInt_l337_5[25 : 13];
    end
  end

  always @(*) begin
    if(when_SInt_l337_1) begin
      _zz_rotated_y_raw = _zz_rotated_y_raw_3;
    end else begin
      _zz_rotated_y_raw = (_zz__zz_rotated_y_raw >>> 13);
    end
  end

  assign when_SInt_l130_1 = _zz_rotated_y_raw[12];
  assign when_SInt_l131_1 = (! (&_zz_when_SInt_l131_1));
  always @(*) begin
    if(when_SInt_l130_1) begin
      if(when_SInt_l131_1) begin
        rotated_y_raw = 12'h800;
      end else begin
        rotated_y_raw = _zz_rotated_y_raw[11 : 0];
      end
    end else begin
      if(when_SInt_l137_1) begin
        rotated_y_raw = 12'h7ff;
      end else begin
        rotated_y_raw = _zz_rotated_y_raw[11 : 0];
      end
    end
  end

  assign when_SInt_l137_1 = (|_zz_when_SInt_l137_1);
  assign rotated_data_valid = cordic_pipeline_core_result_valid;
  assign rotated_data_payload_cha_i = (shiftRegister_11_output_1 ? _zz_rotated_data_payload_cha_i : rotated_x_raw);
  assign rotated_data_payload_cha_q = (shiftRegister_11_output_1 ? _zz_rotated_data_payload_cha_q : rotated_y_raw);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      xy_symbol <= 1'b0;
      phi <= 24'h0;
      phiCorrect <= 24'h0;
    end else begin
      if(when_PhaseRotator_l47) begin
        xy_symbol <= (! xy_symbol);
      end else begin
        if(when_PhaseRotator_l50) begin
          xy_symbol <= (! xy_symbol);
        end
      end
      if(raw_data_valid) begin
        phi <= phiNext;
        if(delta_phi_valid) begin
          phiCorrect <= delta_phi_payload;
        end
      end else begin
        phi <= 24'h0;
        phiCorrect <= 24'h0;
      end
    end
  end


endmodule

module CFOEstimator (
  input               rotated_data_valid,
  input      [11:0]   rotated_data_payload_cha_i,
  input      [11:0]   rotated_data_payload_cha_q,
  output              delta_phi_valid,
  output     [23:0]   delta_phi_payload,
  input               clk,
  input               reset
);

  wire                auto_corr_core_corr_result_valid;
  wire       [27:0]   auto_corr_core_corr_result_payload_cha_i;
  wire       [27:0]   auto_corr_core_corr_result_payload_cha_q;
  wire                cordic_core_raw_data_ready;
  wire                cordic_core_result_valid;
  wire       [23:0]   cordic_core_result_payload_x;
  wire       [23:0]   cordic_core_result_payload_y;
  wire       [23:0]   cordic_core_result_payload_z;
  wire       [28:0]   _zz__zz_when_SInt_l337_2;
  wire       [28:0]   _zz__zz_when_SInt_l337_2_1;
  wire       [3:0]    _zz_when_SInt_l191;
  wire       [24:0]   _zz__zz_when_SInt_l130_3;
  wire       [24:0]   _zz__zz_when_SInt_l130_3_1;
  wire       [28:0]   _zz__zz_when_SInt_l130;
  wire       [28:0]   _zz__zz_when_SInt_l130_1;
  wire       [28:0]   _zz__zz_when_SInt_l130_2;
  wire       [1:0]    _zz_when_SInt_l131;
  wire       [0:0]    _zz_when_SInt_l137;
  wire       [28:0]   _zz__zz_when_SInt_l337_5;
  wire       [28:0]   _zz__zz_when_SInt_l337_5_1;
  wire       [3:0]    _zz_when_SInt_l191_1;
  wire       [24:0]   _zz__zz_when_SInt_l130_7;
  wire       [24:0]   _zz__zz_when_SInt_l130_7_1;
  wire       [28:0]   _zz__zz_when_SInt_l130_4;
  wire       [28:0]   _zz__zz_when_SInt_l130_4_1;
  wire       [28:0]   _zz__zz_when_SInt_l130_4_2;
  wire       [1:0]    _zz_when_SInt_l131_1;
  wire       [0:0]    _zz_when_SInt_l137_1;
  wire       [4:0]    _zz_impulse_cnt;
  reg        [4:0]    impulse_cnt;
  reg        [24:0]   _zz_when_SInt_l130;
  wire       [27:0]   _zz_when_SInt_l130_1;
  wire       [27:0]   _zz_when_SInt_l337;
  wire       [27:0]   _zz_when_SInt_l337_1;
  wire       [28:0]   _zz_when_SInt_l337_2;
  wire       [27:0]   _zz_when_SInt_l130_2;
  wire                when_SInt_l337;
  reg        [24:0]   _zz_when_SInt_l130_3;
  wire                when_SInt_l191;
  reg        [23:0]   _zz_raw_data_payload_x;
  wire                when_SInt_l130;
  wire                when_SInt_l131;
  wire                when_SInt_l137;
  reg        [24:0]   _zz_when_SInt_l130_4;
  wire       [27:0]   _zz_when_SInt_l130_5;
  wire       [27:0]   _zz_when_SInt_l337_3;
  wire       [27:0]   _zz_when_SInt_l337_4;
  wire       [28:0]   _zz_when_SInt_l337_5;
  wire       [27:0]   _zz_when_SInt_l130_6;
  wire                when_SInt_l337_1;
  reg        [24:0]   _zz_when_SInt_l130_7;
  wire                when_SInt_l191_1;
  reg        [23:0]   _zz_raw_data_payload_y;
  wire                when_SInt_l130_1;
  wire                when_SInt_l131_1;
  wire                when_SInt_l137_1;

  assign _zz__zz_when_SInt_l337_2 = {_zz_when_SInt_l337_1[27],_zz_when_SInt_l337_1};
  assign _zz__zz_when_SInt_l337_2_1 = {_zz_when_SInt_l337[27],_zz_when_SInt_l337};
  assign _zz_when_SInt_l191 = _zz_when_SInt_l337_2[3 : 0];
  assign _zz__zz_when_SInt_l130_3 = _zz_when_SInt_l337_2[28 : 4];
  assign _zz__zz_when_SInt_l130_3_1 = 25'h0000001;
  assign _zz__zz_when_SInt_l130 = ($signed(_zz__zz_when_SInt_l130_1) + $signed(_zz__zz_when_SInt_l130_2));
  assign _zz__zz_when_SInt_l130_1 = {_zz_when_SInt_l130_2[27],_zz_when_SInt_l130_2};
  assign _zz__zz_when_SInt_l130_2 = {_zz_when_SInt_l130_1[27],_zz_when_SInt_l130_1};
  assign _zz_when_SInt_l131 = _zz_when_SInt_l130[24 : 23];
  assign _zz_when_SInt_l137 = _zz_when_SInt_l130[23 : 23];
  assign _zz__zz_when_SInt_l337_5 = {_zz_when_SInt_l337_4[27],_zz_when_SInt_l337_4};
  assign _zz__zz_when_SInt_l337_5_1 = {_zz_when_SInt_l337_3[27],_zz_when_SInt_l337_3};
  assign _zz_when_SInt_l191_1 = _zz_when_SInt_l337_5[3 : 0];
  assign _zz__zz_when_SInt_l130_7 = _zz_when_SInt_l337_5[28 : 4];
  assign _zz__zz_when_SInt_l130_7_1 = 25'h0000001;
  assign _zz__zz_when_SInt_l130_4 = ($signed(_zz__zz_when_SInt_l130_4_1) + $signed(_zz__zz_when_SInt_l130_4_2));
  assign _zz__zz_when_SInt_l130_4_1 = {_zz_when_SInt_l130_6[27],_zz_when_SInt_l130_6};
  assign _zz__zz_when_SInt_l130_4_2 = {_zz_when_SInt_l130_5[27],_zz_when_SInt_l130_5};
  assign _zz_when_SInt_l131_1 = _zz_when_SInt_l130_4[24 : 23];
  assign _zz_when_SInt_l137_1 = _zz_when_SInt_l130_4[23 : 23];
  assign _zz_impulse_cnt = (impulse_cnt + 5'h01);
  AutoCorrelator auto_corr_core (
    .raw_data_valid               (rotated_data_valid                              ), //i
    .raw_data_payload_cha_i       (rotated_data_payload_cha_i[11:0]                ), //i
    .raw_data_payload_cha_q       (rotated_data_payload_cha_q[11:0]                ), //i
    .corr_result_valid            (auto_corr_core_corr_result_valid                ), //o
    .corr_result_payload_cha_i    (auto_corr_core_corr_result_payload_cha_i[27:0]  ), //o
    .corr_result_payload_cha_q    (auto_corr_core_corr_result_payload_cha_q[27:0]  ), //o
    .clk                          (clk                                             ), //i
    .reset                        (reset                                           )  //i
  );
  CordicRotator cordic_core (
    .rotate_mode           (1'b0                                ), //i
    .x_u                   (2'b00                               ), //i
    .raw_data_valid        (auto_corr_core_corr_result_valid    ), //i
    .raw_data_ready        (cordic_core_raw_data_ready          ), //o
    .raw_data_payload_x    (_zz_raw_data_payload_x[23:0]        ), //i
    .raw_data_payload_y    (_zz_raw_data_payload_y[23:0]        ), //i
    .raw_data_payload_z    (24'h0                               ), //i
    .result_valid          (cordic_core_result_valid            ), //o
    .result_payload_x      (cordic_core_result_payload_x[23:0]  ), //o
    .result_payload_y      (cordic_core_result_payload_y[23:0]  ), //o
    .result_payload_z      (cordic_core_result_payload_z[23:0]  ), //o
    .clk                   (clk                                 ), //i
    .reset                 (reset                               )  //i
  );
  assign _zz_when_SInt_l130_1 = {{24'h0,1'b1},3'b000};
  assign _zz_when_SInt_l337 = {25'h1ffffff,3'b000};
  assign _zz_when_SInt_l337_1 = auto_corr_core_corr_result_payload_cha_i[27 : 0];
  assign _zz_when_SInt_l337_2 = ($signed(_zz__zz_when_SInt_l337_2) + $signed(_zz__zz_when_SInt_l337_2_1));
  assign _zz_when_SInt_l130_2 = auto_corr_core_corr_result_payload_cha_i[27 : 0];
  assign when_SInt_l337 = _zz_when_SInt_l337_2[28];
  assign when_SInt_l191 = (|_zz_when_SInt_l191);
  always @(*) begin
    if(when_SInt_l191) begin
      _zz_when_SInt_l130_3 = ($signed(_zz__zz_when_SInt_l130_3) + $signed(_zz__zz_when_SInt_l130_3_1));
    end else begin
      _zz_when_SInt_l130_3 = _zz_when_SInt_l337_2[28 : 4];
    end
  end

  always @(*) begin
    if(when_SInt_l337) begin
      _zz_when_SInt_l130 = _zz_when_SInt_l130_3;
    end else begin
      _zz_when_SInt_l130 = (_zz__zz_when_SInt_l130 >>> 4);
    end
  end

  assign when_SInt_l130 = _zz_when_SInt_l130[24];
  assign when_SInt_l131 = (! (&_zz_when_SInt_l131));
  always @(*) begin
    if(when_SInt_l130) begin
      if(when_SInt_l131) begin
        _zz_raw_data_payload_x = 24'h800000;
      end else begin
        _zz_raw_data_payload_x = _zz_when_SInt_l130[23 : 0];
      end
    end else begin
      if(when_SInt_l137) begin
        _zz_raw_data_payload_x = 24'h7fffff;
      end else begin
        _zz_raw_data_payload_x = _zz_when_SInt_l130[23 : 0];
      end
    end
  end

  assign when_SInt_l137 = (|_zz_when_SInt_l137);
  assign _zz_when_SInt_l130_5 = {{24'h0,1'b1},3'b000};
  assign _zz_when_SInt_l337_3 = {25'h1ffffff,3'b000};
  assign _zz_when_SInt_l337_4 = auto_corr_core_corr_result_payload_cha_q[27 : 0];
  assign _zz_when_SInt_l337_5 = ($signed(_zz__zz_when_SInt_l337_5) + $signed(_zz__zz_when_SInt_l337_5_1));
  assign _zz_when_SInt_l130_6 = auto_corr_core_corr_result_payload_cha_q[27 : 0];
  assign when_SInt_l337_1 = _zz_when_SInt_l337_5[28];
  assign when_SInt_l191_1 = (|_zz_when_SInt_l191_1);
  always @(*) begin
    if(when_SInt_l191_1) begin
      _zz_when_SInt_l130_7 = ($signed(_zz__zz_when_SInt_l130_7) + $signed(_zz__zz_when_SInt_l130_7_1));
    end else begin
      _zz_when_SInt_l130_7 = _zz_when_SInt_l337_5[28 : 4];
    end
  end

  always @(*) begin
    if(when_SInt_l337_1) begin
      _zz_when_SInt_l130_4 = _zz_when_SInt_l130_7;
    end else begin
      _zz_when_SInt_l130_4 = (_zz__zz_when_SInt_l130_4 >>> 4);
    end
  end

  assign when_SInt_l130_1 = _zz_when_SInt_l130_4[24];
  assign when_SInt_l131_1 = (! (&_zz_when_SInt_l131_1));
  always @(*) begin
    if(when_SInt_l130_1) begin
      if(when_SInt_l131_1) begin
        _zz_raw_data_payload_y = 24'h800000;
      end else begin
        _zz_raw_data_payload_y = _zz_when_SInt_l130_4[23 : 0];
      end
    end else begin
      if(when_SInt_l137_1) begin
        _zz_raw_data_payload_y = 24'h7fffff;
      end else begin
        _zz_raw_data_payload_y = _zz_when_SInt_l130_4[23 : 0];
      end
    end
  end

  assign when_SInt_l137_1 = (|_zz_when_SInt_l137_1);
  assign delta_phi_valid = (cordic_core_result_valid && (impulse_cnt == 5'h11));
  assign delta_phi_payload = ($signed(cordic_core_result_payload_z) >>> 4);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      impulse_cnt <= 5'h0;
    end else begin
      if(auto_corr_core_corr_result_valid) begin
        impulse_cnt <= ((5'h11 <= impulse_cnt) ? 5'h0 : _zz_impulse_cnt);
      end else begin
        impulse_cnt <= 5'h0;
      end
    end
  end


endmodule

module AutoCorrelator_1 (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              corr_result_valid,
  output     [35:0]   corr_result_payload_cha_i,
  output     [35:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);

  wire                shiftRegister_11_output_valid;
  wire       [11:0]   shiftRegister_11_output_payload_cha_i;
  wire       [11:0]   shiftRegister_11_output_payload_cha_q;
  wire                corr_core_corr_result_valid;
  wire       [35:0]   corr_core_corr_result_payload_cha_i;
  wire       [35:0]   corr_core_corr_result_payload_cha_q;

  ShiftRegister_7 shiftRegister_11 (
    .input_valid             (raw_data_valid                               ), //i
    .input_payload_cha_i     (raw_data_payload_cha_i[11:0]                 ), //i
    .input_payload_cha_q     (raw_data_payload_cha_q[11:0]                 ), //i
    .output_valid            (shiftRegister_11_output_valid                ), //o
    .output_payload_cha_i    (shiftRegister_11_output_payload_cha_i[11:0]  ), //o
    .output_payload_cha_q    (shiftRegister_11_output_payload_cha_q[11:0]  ), //o
    .enable                  (raw_data_valid                               ), //i
    .clk                     (clk                                          ), //i
    .reset                   (reset                                        )  //i
  );
  Correlator_1 corr_core (
    .raw_data_0_valid             (raw_data_valid                               ), //i
    .raw_data_0_payload_cha_i     (raw_data_payload_cha_i[11:0]                 ), //i
    .raw_data_0_payload_cha_q     (raw_data_payload_cha_q[11:0]                 ), //i
    .raw_data_1_valid             (shiftRegister_11_output_valid                ), //i
    .raw_data_1_payload_cha_i     (shiftRegister_11_output_payload_cha_i[11:0]  ), //i
    .raw_data_1_payload_cha_q     (shiftRegister_11_output_payload_cha_q[11:0]  ), //i
    .corr_result_valid            (corr_core_corr_result_valid                  ), //o
    .corr_result_payload_cha_i    (corr_core_corr_result_payload_cha_i[35:0]    ), //o
    .corr_result_payload_cha_q    (corr_core_corr_result_payload_cha_q[35:0]    ), //o
    .clk                          (clk                                          ), //i
    .reset                        (reset                                        )  //i
  );
  assign corr_result_valid = corr_core_corr_result_valid;
  assign corr_result_payload_cha_i = corr_core_corr_result_payload_cha_i;
  assign corr_result_payload_cha_q = corr_core_corr_result_payload_cha_q;

endmodule

module PowerMeter (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              power_result_valid,
  output     [23:0]   power_result_payload_cha_i,
  output     [23:0]   power_result_payload_cha_q,
  input               clk,
  input               reset
);

  wire       [19:0]   shiftRegister_11_output_1;
  wire       [19:0]   shiftRegister_12_output_1;
  wire       [23:0]   _zz_power_val_i;
  wire       [23:0]   _zz_power_val_i_1;
  wire       [23:0]   _zz_power_val_i_2;
  wire       [23:0]   _zz_power_val_q;
  wire       [23:0]   _zz_power_val_q_1;
  wire       [23:0]   _zz_power_val_q_2;
  reg        [23:0]   power_val_cha_i;
  reg        [23:0]   power_val_cha_q;
  reg        [23:0]   power_val_i;
  reg        [23:0]   power_val_q;
  wire       [23:0]   sq_i;
  wire       [23:0]   sq_q;
  reg        [23:0]   sq_i_regNext;
  wire       [19:0]   power_cal_i;
  reg        [23:0]   sq_q_regNext;
  wire       [19:0]   power_cal_q;
  reg                 power_cal_valid;
  reg                 power_result_valid_1;

  assign _zz_power_val_i = ($signed(power_val_i) - $signed(_zz_power_val_i_1));
  assign _zz_power_val_i_1 = {{4{shiftRegister_11_output_1[19]}}, shiftRegister_11_output_1};
  assign _zz_power_val_i_2 = {{4{power_cal_i[19]}}, power_cal_i};
  assign _zz_power_val_q = ($signed(power_val_q) - $signed(_zz_power_val_q_1));
  assign _zz_power_val_q_1 = {{4{shiftRegister_12_output_1[19]}}, shiftRegister_12_output_1};
  assign _zz_power_val_q_2 = {{4{power_cal_q[19]}}, power_cal_q};
  ShiftRegister_5 shiftRegister_11 (
    .input_1     (power_cal_i[19:0]                ), //i
    .output_1    (shiftRegister_11_output_1[19:0]  ), //o
    .enable      (power_cal_valid                  ), //i
    .clk         (clk                              ), //i
    .reset       (reset                            )  //i
  );
  ShiftRegister_5 shiftRegister_12 (
    .input_1     (power_cal_q[19:0]                ), //i
    .output_1    (shiftRegister_12_output_1[19:0]  ), //o
    .enable      (power_cal_valid                  ), //i
    .clk         (clk                              ), //i
    .reset       (reset                            )  //i
  );
  assign sq_i = ($signed(raw_data_payload_cha_i) * $signed(raw_data_payload_cha_i));
  assign sq_q = ($signed(raw_data_payload_cha_q) * $signed(raw_data_payload_cha_q));
  assign power_cal_i = (sq_i_regNext >>> 4);
  assign power_cal_q = (sq_q_regNext >>> 4);
  assign power_result_payload_cha_i = power_val_cha_i;
  assign power_result_payload_cha_q = power_val_cha_q;
  assign power_result_valid = power_result_valid_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      power_val_i <= 24'h0;
      power_val_q <= 24'h0;
      power_cal_valid <= 1'b0;
      power_result_valid_1 <= 1'b0;
    end else begin
      power_cal_valid <= raw_data_valid;
      if(power_cal_valid) begin
        power_val_i <= ($signed(_zz_power_val_i) + $signed(_zz_power_val_i_2));
        power_val_q <= ($signed(_zz_power_val_q) + $signed(_zz_power_val_q_2));
        power_result_valid_1 <= 1'b1;
      end else begin
        power_result_valid_1 <= 1'b0;
        power_val_i <= 24'h0;
        power_val_q <= 24'h0;
      end
    end
  end

  always @(posedge clk) begin
    power_val_cha_i <= power_val_i;
    power_val_cha_q <= power_val_q;
    sq_i_regNext <= sq_i;
    sq_q_regNext <= sq_q;
  end


endmodule

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

module TransposeCore (
  input      [11:0]   input_data,
  input      [6:0]    coff_data,
  input      [18:0]   adder_data,
  input               valid,
  output     [18:0]   next_adder_data,
  input               clk,
  input               reset
);

  wire       [18:0]   _zz_next_adder_data;
  reg        [18:0]   previous_adder_data;

  assign _zz_next_adder_data = ($signed(input_data) * $signed(coff_data));
  assign next_adder_data = ($signed(_zz_next_adder_data) + $signed(previous_adder_data));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      previous_adder_data <= 19'h0;
    end else begin
      if(valid) begin
        previous_adder_data <= adder_data;
      end
    end
  end


endmodule

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

//HammingDistance replaced by HammingDistance

module HammingDistance (
  input      [1:0]    in_a,
  input      [1:0]    in_b,
  output     [1:0]    distance
);

  wire       [1:0]    _zz_distance;
  wire       [1:0]    _zz_distance_1;
  wire       [0:0]    _zz_distance_2;
  wire       [1:0]    _zz_distance_3;
  wire       [0:0]    _zz_distance_4;
  wire       [1:0]    xorResult;

  assign _zz_distance = (_zz_distance_1 + _zz_distance_3);
  assign _zz_distance_2 = xorResult[1];
  assign _zz_distance_1 = {1'd0, _zz_distance_2};
  assign _zz_distance_4 = xorResult[0];
  assign _zz_distance_3 = {1'd0, _zz_distance_4};
  assign xorResult = (in_a ^ in_b);
  assign distance = _zz_distance;

endmodule

//ShiftRegister_9 replaced by ShiftRegister_9

module ShiftRegister_9 (
  input      [23:0]   input_1,
  output     [23:0]   output_1,
  input               enable,
  input               clk,
  input               reset
);

  reg        [23:0]   shift_reg_0;
  reg        [23:0]   shift_reg_1;
  reg        [23:0]   shift_reg_2;
  reg        [23:0]   shift_reg_3;
  reg        [23:0]   shift_reg_4;
  reg        [23:0]   shift_reg_5;
  reg        [23:0]   shift_reg_6;
  reg        [23:0]   shift_reg_7;
  reg        [23:0]   shift_reg_8;
  reg        [23:0]   shift_reg_9;
  reg        [23:0]   shift_reg_10;
  reg        [23:0]   shift_reg_11;
  reg        [23:0]   shift_reg_12;
  reg        [23:0]   shift_reg_13;
  reg        [23:0]   shift_reg_14;
  reg        [23:0]   shift_reg_15;
  reg        [23:0]   shift_reg_16;

  assign output_1 = shift_reg_16;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 24'h0;
      shift_reg_1 <= 24'h0;
      shift_reg_2 <= 24'h0;
      shift_reg_3 <= 24'h0;
      shift_reg_4 <= 24'h0;
      shift_reg_5 <= 24'h0;
      shift_reg_6 <= 24'h0;
      shift_reg_7 <= 24'h0;
      shift_reg_8 <= 24'h0;
      shift_reg_9 <= 24'h0;
      shift_reg_10 <= 24'h0;
      shift_reg_11 <= 24'h0;
      shift_reg_12 <= 24'h0;
      shift_reg_13 <= 24'h0;
      shift_reg_14 <= 24'h0;
      shift_reg_15 <= 24'h0;
      shift_reg_16 <= 24'h0;
    end else begin
      if(enable) begin
        shift_reg_0 <= input_1;
        shift_reg_1 <= shift_reg_0;
        shift_reg_2 <= shift_reg_1;
        shift_reg_3 <= shift_reg_2;
        shift_reg_4 <= shift_reg_3;
        shift_reg_5 <= shift_reg_4;
        shift_reg_6 <= shift_reg_5;
        shift_reg_7 <= shift_reg_6;
        shift_reg_8 <= shift_reg_7;
        shift_reg_9 <= shift_reg_8;
        shift_reg_10 <= shift_reg_9;
        shift_reg_11 <= shift_reg_10;
        shift_reg_12 <= shift_reg_11;
        shift_reg_13 <= shift_reg_12;
        shift_reg_14 <= shift_reg_13;
        shift_reg_15 <= shift_reg_14;
        shift_reg_16 <= shift_reg_15;
      end
    end
  end


endmodule

module ShiftRegister_8 (
  input               input_1,
  output              output_1,
  input               enable,
  input               clc,
  input               clk,
  input               reset
);

  reg                 shift_reg_0;
  reg                 shift_reg_1;
  reg                 shift_reg_2;
  reg                 shift_reg_3;
  reg                 shift_reg_4;
  reg                 shift_reg_5;
  reg                 shift_reg_6;
  reg                 shift_reg_7;
  reg                 shift_reg_8;
  reg                 shift_reg_9;
  reg                 shift_reg_10;
  reg                 shift_reg_11;

  assign output_1 = shift_reg_11;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 1'b0;
      shift_reg_1 <= 1'b0;
      shift_reg_2 <= 1'b0;
      shift_reg_3 <= 1'b0;
      shift_reg_4 <= 1'b0;
      shift_reg_5 <= 1'b0;
      shift_reg_6 <= 1'b0;
      shift_reg_7 <= 1'b0;
      shift_reg_8 <= 1'b0;
      shift_reg_9 <= 1'b0;
      shift_reg_10 <= 1'b0;
      shift_reg_11 <= 1'b0;
    end else begin
      if(clc) begin
        shift_reg_0 <= 1'b0;
        shift_reg_1 <= 1'b0;
        shift_reg_2 <= 1'b0;
        shift_reg_3 <= 1'b0;
        shift_reg_4 <= 1'b0;
        shift_reg_5 <= 1'b0;
        shift_reg_6 <= 1'b0;
        shift_reg_7 <= 1'b0;
        shift_reg_8 <= 1'b0;
        shift_reg_9 <= 1'b0;
        shift_reg_10 <= 1'b0;
        shift_reg_11 <= 1'b0;
      end else begin
        if(enable) begin
          shift_reg_0 <= input_1;
          shift_reg_1 <= shift_reg_0;
          shift_reg_2 <= shift_reg_1;
          shift_reg_3 <= shift_reg_2;
          shift_reg_4 <= shift_reg_3;
          shift_reg_5 <= shift_reg_4;
          shift_reg_6 <= shift_reg_5;
          shift_reg_7 <= shift_reg_6;
          shift_reg_8 <= shift_reg_7;
          shift_reg_9 <= shift_reg_8;
          shift_reg_10 <= shift_reg_9;
          shift_reg_11 <= shift_reg_10;
        end
      end
    end
  end


endmodule

module CordicRotator_1 (
  input               rotate_mode,
  input      [1:0]    x_u,
  input               raw_data_valid,
  output              raw_data_ready,
  input      [24:0]   raw_data_payload_x,
  input      [24:0]   raw_data_payload_y,
  input      [24:0]   raw_data_payload_z,
  output              result_valid,
  output     [24:0]   result_payload_x,
  output     [24:0]   result_payload_y,
  output     [24:0]   result_payload_z,
  input               clk,
  input               reset
);

  wire       [24:0]   _zz__zz_result_payload_x_1;
  wire       [24:0]   _zz__zz_result_payload_x_1_1;
  wire       [24:0]   _zz__zz_result_payload_x_1_2;
  wire       [24:0]   _zz__zz_result_payload_x_1_3;
  wire       [24:0]   _zz__zz_result_payload_x_13;
  wire       [24:0]   _zz__zz_result_payload_x_13_1;
  wire       [24:0]   _zz__zz_result_payload_x_24;
  wire       [24:0]   _zz__zz_result_payload_x_24_1;
  wire       [24:0]   _zz__zz_result_payload_x_2;
  wire       [24:0]   _zz__zz_result_payload_x_2_1;
  wire       [24:0]   _zz__zz_result_payload_x_2_2;
  wire       [24:0]   _zz__zz_result_payload_x_2_3;
  wire       [24:0]   _zz__zz_result_payload_x_14;
  wire       [24:0]   _zz__zz_result_payload_x_14_1;
  wire       [24:0]   _zz__zz_result_payload_x_25;
  wire       [24:0]   _zz__zz_result_payload_x_25_1;
  wire       [24:0]   _zz__zz_result_payload_x_3;
  wire       [24:0]   _zz__zz_result_payload_x_3_1;
  wire       [24:0]   _zz__zz_result_payload_x_3_2;
  wire       [24:0]   _zz__zz_result_payload_x_3_3;
  wire       [24:0]   _zz__zz_result_payload_x_15;
  wire       [24:0]   _zz__zz_result_payload_x_15_1;
  wire       [24:0]   _zz__zz_result_payload_x_26;
  wire       [24:0]   _zz__zz_result_payload_x_26_1;
  wire       [24:0]   _zz__zz_result_payload_x_4;
  wire       [24:0]   _zz__zz_result_payload_x_4_1;
  wire       [24:0]   _zz__zz_result_payload_x_4_2;
  wire       [24:0]   _zz__zz_result_payload_x_4_3;
  wire       [24:0]   _zz__zz_result_payload_x_16;
  wire       [24:0]   _zz__zz_result_payload_x_16_1;
  wire       [24:0]   _zz__zz_result_payload_x_27;
  wire       [24:0]   _zz__zz_result_payload_x_27_1;
  wire       [24:0]   _zz__zz_result_payload_x_5;
  wire       [24:0]   _zz__zz_result_payload_x_5_1;
  wire       [24:0]   _zz__zz_result_payload_x_5_2;
  wire       [24:0]   _zz__zz_result_payload_x_5_3;
  wire       [24:0]   _zz__zz_result_payload_x_17;
  wire       [24:0]   _zz__zz_result_payload_x_17_1;
  wire       [24:0]   _zz__zz_result_payload_x_28;
  wire       [24:0]   _zz__zz_result_payload_x_28_1;
  wire       [24:0]   _zz__zz_result_payload_x_6;
  wire       [24:0]   _zz__zz_result_payload_x_6_1;
  wire       [24:0]   _zz__zz_result_payload_x_6_2;
  wire       [24:0]   _zz__zz_result_payload_x_6_3;
  wire       [24:0]   _zz__zz_result_payload_x_18;
  wire       [24:0]   _zz__zz_result_payload_x_18_1;
  wire       [24:0]   _zz__zz_result_payload_x_29;
  wire       [24:0]   _zz__zz_result_payload_x_29_1;
  wire       [24:0]   _zz__zz_result_payload_x_7;
  wire       [24:0]   _zz__zz_result_payload_x_7_1;
  wire       [24:0]   _zz__zz_result_payload_x_7_2;
  wire       [24:0]   _zz__zz_result_payload_x_7_3;
  wire       [24:0]   _zz__zz_result_payload_x_19;
  wire       [24:0]   _zz__zz_result_payload_x_19_1;
  wire       [24:0]   _zz__zz_result_payload_x_30;
  wire       [24:0]   _zz__zz_result_payload_x_30_1;
  wire       [24:0]   _zz__zz_result_payload_x_8;
  wire       [24:0]   _zz__zz_result_payload_x_8_1;
  wire       [24:0]   _zz__zz_result_payload_x_8_2;
  wire       [24:0]   _zz__zz_result_payload_x_8_3;
  wire       [24:0]   _zz__zz_result_payload_x_20;
  wire       [24:0]   _zz__zz_result_payload_x_20_1;
  wire       [24:0]   _zz__zz_result_payload_x_31;
  wire       [24:0]   _zz__zz_result_payload_x_31_1;
  wire       [24:0]   _zz__zz_result_payload_x_9;
  wire       [24:0]   _zz__zz_result_payload_x_9_1;
  wire       [24:0]   _zz__zz_result_payload_x_9_2;
  wire       [24:0]   _zz__zz_result_payload_x_9_3;
  wire       [24:0]   _zz__zz_result_payload_x_21;
  wire       [24:0]   _zz__zz_result_payload_x_21_1;
  wire       [24:0]   _zz__zz_result_payload_x_32;
  wire       [24:0]   _zz__zz_result_payload_x_32_1;
  wire       [24:0]   _zz__zz_result_payload_x_10;
  wire       [24:0]   _zz__zz_result_payload_x_10_1;
  wire       [24:0]   _zz__zz_result_payload_x_10_2;
  wire       [24:0]   _zz__zz_result_payload_x_10_3;
  wire       [24:0]   _zz__zz_result_payload_x_22;
  wire       [24:0]   _zz__zz_result_payload_x_22_1;
  wire       [24:0]   _zz__zz_result_payload_x_33;
  wire       [24:0]   _zz__zz_result_payload_x_33_1;
  wire       [24:0]   _zz__zz_result_payload_x_11;
  wire       [24:0]   _zz__zz_result_payload_x_11_1;
  wire       [24:0]   _zz__zz_result_payload_x_11_2;
  wire       [24:0]   _zz__zz_result_payload_x_11_3;
  wire       [24:0]   _zz__zz_result_payload_y;
  wire       [24:0]   _zz__zz_result_payload_y_1;
  wire       [24:0]   _zz__zz_result_payload_z;
  wire       [24:0]   _zz__zz_result_payload_z_1;
  reg        [24:0]   _zz_result_payload_x;
  reg        [24:0]   _zz_result_payload_x_1;
  reg        [24:0]   _zz_result_payload_x_2;
  reg        [24:0]   _zz_result_payload_x_3;
  reg        [24:0]   _zz_result_payload_x_4;
  reg        [24:0]   _zz_result_payload_x_5;
  reg        [24:0]   _zz_result_payload_x_6;
  reg        [24:0]   _zz_result_payload_x_7;
  reg        [24:0]   _zz_result_payload_x_8;
  reg        [24:0]   _zz_result_payload_x_9;
  reg        [24:0]   _zz_result_payload_x_10;
  reg        [24:0]   _zz_result_payload_x_11;
  reg        [24:0]   _zz_result_payload_x_12;
  reg        [24:0]   _zz_result_payload_x_13;
  reg        [24:0]   _zz_result_payload_x_14;
  reg        [24:0]   _zz_result_payload_x_15;
  reg        [24:0]   _zz_result_payload_x_16;
  reg        [24:0]   _zz_result_payload_x_17;
  reg        [24:0]   _zz_result_payload_x_18;
  reg        [24:0]   _zz_result_payload_x_19;
  reg        [24:0]   _zz_result_payload_x_20;
  reg        [24:0]   _zz_result_payload_x_21;
  reg        [24:0]   _zz_result_payload_x_22;
  reg        [24:0]   _zz_result_payload_y;
  reg        [24:0]   _zz_result_payload_x_23;
  reg        [24:0]   _zz_result_payload_x_24;
  reg        [24:0]   _zz_result_payload_x_25;
  reg        [24:0]   _zz_result_payload_x_26;
  reg        [24:0]   _zz_result_payload_x_27;
  reg        [24:0]   _zz_result_payload_x_28;
  reg        [24:0]   _zz_result_payload_x_29;
  reg        [24:0]   _zz_result_payload_x_30;
  reg        [24:0]   _zz_result_payload_x_31;
  reg        [24:0]   _zz_result_payload_x_32;
  reg        [24:0]   _zz_result_payload_x_33;
  reg        [24:0]   _zz_result_payload_z;
  reg                 _zz_result_valid;
  reg                 _zz_result_valid_1;
  reg                 _zz_result_valid_2;
  reg                 _zz_result_valid_3;
  reg                 _zz_result_valid_4;
  reg                 _zz_result_valid_5;
  reg                 _zz_result_valid_6;
  reg                 _zz_result_valid_7;
  reg                 _zz_result_valid_8;
  reg                 _zz_result_valid_9;
  reg                 _zz_result_valid_10;
  reg                 _zz_result_valid_11;
  reg                 _zz_result_payload_x_34;
  reg                 _zz_result_payload_x_35;
  reg                 _zz_result_payload_x_36;
  reg                 _zz_result_payload_x_37;
  reg                 _zz_result_payload_x_38;
  reg                 _zz_result_payload_x_39;
  reg                 _zz_result_payload_x_40;
  reg                 _zz_result_payload_x_41;
  reg                 _zz_result_payload_x_42;
  reg                 _zz_result_payload_x_43;
  reg                 _zz_result_payload_x_44;
  reg        [24:0]   _zz_result_payload_x_45;
  reg        [24:0]   _zz_result_payload_x_46;
  reg        [24:0]   _zz_result_payload_x_47;
  reg        [24:0]   _zz_result_payload_x_48;
  reg        [24:0]   _zz_result_payload_x_49;
  reg        [24:0]   _zz_result_payload_x_50;
  reg        [24:0]   _zz_result_payload_x_51;
  reg        [24:0]   _zz_result_payload_x_52;
  reg        [24:0]   _zz_result_payload_x_53;
  reg        [24:0]   _zz_result_payload_x_54;
  reg        [24:0]   _zz_result_payload_z_1;
  wire                raw_data_fire;
  wire                _zz_result_payload_x_55;
  wire       [24:0]   _zz_result_payload_x_56;
  wire       [24:0]   _zz_result_payload_x_57;
  wire                _zz_result_payload_x_58;
  wire       [24:0]   _zz_result_payload_x_59;
  wire       [24:0]   _zz_result_payload_x_60;
  wire                _zz_result_payload_x_61;
  wire       [24:0]   _zz_result_payload_x_62;
  wire       [24:0]   _zz_result_payload_x_63;
  wire                _zz_result_payload_x_64;
  wire       [24:0]   _zz_result_payload_x_65;
  wire       [24:0]   _zz_result_payload_x_66;
  wire                _zz_result_payload_x_67;
  wire       [24:0]   _zz_result_payload_x_68;
  wire       [24:0]   _zz_result_payload_x_69;
  wire                _zz_result_payload_x_70;
  wire       [24:0]   _zz_result_payload_x_71;
  wire       [24:0]   _zz_result_payload_x_72;
  wire                _zz_result_payload_x_73;
  wire       [24:0]   _zz_result_payload_x_74;
  wire       [24:0]   _zz_result_payload_x_75;
  wire                _zz_result_payload_x_76;
  wire       [24:0]   _zz_result_payload_x_77;
  wire       [24:0]   _zz_result_payload_x_78;
  wire                _zz_result_payload_x_79;
  wire       [24:0]   _zz_result_payload_x_80;
  wire       [24:0]   _zz_result_payload_x_81;
  wire                _zz_result_payload_x_82;
  wire       [24:0]   _zz_result_payload_x_83;
  wire       [24:0]   _zz_result_payload_x_84;
  wire                _zz_result_payload_x_85;
  wire       [24:0]   _zz_result_payload_y_1;
  wire       [24:0]   _zz_result_payload_x_86;

  assign _zz__zz_result_payload_x_1 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_1_1 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_1_2 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_1_3 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_13 = ($signed(_zz_result_payload_x_12) + $signed(_zz_result_payload_x_56));
  assign _zz__zz_result_payload_x_13_1 = ($signed(_zz_result_payload_x_12) - $signed(_zz_result_payload_x_56));
  assign _zz__zz_result_payload_x_24 = ($signed(_zz_result_payload_x_23) - $signed(_zz_result_payload_x_45));
  assign _zz__zz_result_payload_x_24_1 = ($signed(_zz_result_payload_x_23) + $signed(_zz_result_payload_x_45));
  assign _zz__zz_result_payload_x_2 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_60));
  assign _zz__zz_result_payload_x_2_1 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_60));
  assign _zz__zz_result_payload_x_2_2 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_60));
  assign _zz__zz_result_payload_x_2_3 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_60));
  assign _zz__zz_result_payload_x_14 = ($signed(_zz_result_payload_x_13) + $signed(_zz_result_payload_x_59));
  assign _zz__zz_result_payload_x_14_1 = ($signed(_zz_result_payload_x_13) - $signed(_zz_result_payload_x_59));
  assign _zz__zz_result_payload_x_25 = ($signed(_zz_result_payload_x_24) - $signed(_zz_result_payload_x_46));
  assign _zz__zz_result_payload_x_25_1 = ($signed(_zz_result_payload_x_24) + $signed(_zz_result_payload_x_46));
  assign _zz__zz_result_payload_x_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_3_1 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_3_2 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_3_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_15 = ($signed(_zz_result_payload_x_14) + $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_15_1 = ($signed(_zz_result_payload_x_14) - $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_26 = ($signed(_zz_result_payload_x_25) - $signed(_zz_result_payload_x_47));
  assign _zz__zz_result_payload_x_26_1 = ($signed(_zz_result_payload_x_25) + $signed(_zz_result_payload_x_47));
  assign _zz__zz_result_payload_x_4 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_4_1 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_4_2 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_4_3 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_16 = ($signed(_zz_result_payload_x_15) + $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_16_1 = ($signed(_zz_result_payload_x_15) - $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_27 = ($signed(_zz_result_payload_x_26) - $signed(_zz_result_payload_x_48));
  assign _zz__zz_result_payload_x_27_1 = ($signed(_zz_result_payload_x_26) + $signed(_zz_result_payload_x_48));
  assign _zz__zz_result_payload_x_5 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_5_1 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_5_2 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_5_3 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_17 = ($signed(_zz_result_payload_x_16) + $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_17_1 = ($signed(_zz_result_payload_x_16) - $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_28 = ($signed(_zz_result_payload_x_27) - $signed(_zz_result_payload_x_49));
  assign _zz__zz_result_payload_x_28_1 = ($signed(_zz_result_payload_x_27) + $signed(_zz_result_payload_x_49));
  assign _zz__zz_result_payload_x_6 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_6_1 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_6_2 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_6_3 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_18 = ($signed(_zz_result_payload_x_17) + $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_18_1 = ($signed(_zz_result_payload_x_17) - $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_29 = ($signed(_zz_result_payload_x_28) - $signed(_zz_result_payload_x_50));
  assign _zz__zz_result_payload_x_29_1 = ($signed(_zz_result_payload_x_28) + $signed(_zz_result_payload_x_50));
  assign _zz__zz_result_payload_x_7 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_75));
  assign _zz__zz_result_payload_x_7_1 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_75));
  assign _zz__zz_result_payload_x_7_2 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_75));
  assign _zz__zz_result_payload_x_7_3 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_75));
  assign _zz__zz_result_payload_x_19 = ($signed(_zz_result_payload_x_18) + $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_19_1 = ($signed(_zz_result_payload_x_18) - $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_30 = ($signed(_zz_result_payload_x_29) - $signed(_zz_result_payload_x_51));
  assign _zz__zz_result_payload_x_30_1 = ($signed(_zz_result_payload_x_29) + $signed(_zz_result_payload_x_51));
  assign _zz__zz_result_payload_x_8 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_8_1 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_8_2 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_8_3 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_20 = ($signed(_zz_result_payload_x_19) + $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_20_1 = ($signed(_zz_result_payload_x_19) - $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_31 = ($signed(_zz_result_payload_x_30) - $signed(_zz_result_payload_x_52));
  assign _zz__zz_result_payload_x_31_1 = ($signed(_zz_result_payload_x_30) + $signed(_zz_result_payload_x_52));
  assign _zz__zz_result_payload_x_9 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_9_1 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_9_2 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_9_3 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_21 = ($signed(_zz_result_payload_x_20) + $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_21_1 = ($signed(_zz_result_payload_x_20) - $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_32 = ($signed(_zz_result_payload_x_31) - $signed(_zz_result_payload_x_53));
  assign _zz__zz_result_payload_x_32_1 = ($signed(_zz_result_payload_x_31) + $signed(_zz_result_payload_x_53));
  assign _zz__zz_result_payload_x_10 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_10_1 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_10_2 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_10_3 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_22 = ($signed(_zz_result_payload_x_21) + $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_22_1 = ($signed(_zz_result_payload_x_21) - $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_33 = ($signed(_zz_result_payload_x_32) - $signed(_zz_result_payload_x_54));
  assign _zz__zz_result_payload_x_33_1 = ($signed(_zz_result_payload_x_32) + $signed(_zz_result_payload_x_54));
  assign _zz__zz_result_payload_x_11 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_11_1 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_11_2 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_11_3 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_y = ($signed(_zz_result_payload_x_22) + $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_y_1 = ($signed(_zz_result_payload_x_22) - $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_z = ($signed(_zz_result_payload_x_33) - $signed(_zz_result_payload_z_1));
  assign _zz__zz_result_payload_z_1 = ($signed(_zz_result_payload_x_33) + $signed(_zz_result_payload_z_1));
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign _zz_result_payload_x_55 = (_zz_result_payload_x_34 ? (! _zz_result_payload_x_23[24]) : _zz_result_payload_x_12[24]);
  assign _zz_result_payload_x_56 = ($signed(_zz_result_payload_x) >>> 0);
  assign _zz_result_payload_x_57 = ($signed(_zz_result_payload_x_12) >>> 0);
  assign _zz_result_payload_x_58 = (_zz_result_payload_x_35 ? (! _zz_result_payload_x_24[24]) : _zz_result_payload_x_13[24]);
  assign _zz_result_payload_x_59 = ($signed(_zz_result_payload_x_1) >>> 1);
  assign _zz_result_payload_x_60 = ($signed(_zz_result_payload_x_13) >>> 1);
  assign _zz_result_payload_x_61 = (_zz_result_payload_x_36 ? (! _zz_result_payload_x_25[24]) : _zz_result_payload_x_14[24]);
  assign _zz_result_payload_x_62 = ($signed(_zz_result_payload_x_2) >>> 2);
  assign _zz_result_payload_x_63 = ($signed(_zz_result_payload_x_14) >>> 2);
  assign _zz_result_payload_x_64 = (_zz_result_payload_x_37 ? (! _zz_result_payload_x_26[24]) : _zz_result_payload_x_15[24]);
  assign _zz_result_payload_x_65 = ($signed(_zz_result_payload_x_3) >>> 3);
  assign _zz_result_payload_x_66 = ($signed(_zz_result_payload_x_15) >>> 3);
  assign _zz_result_payload_x_67 = (_zz_result_payload_x_38 ? (! _zz_result_payload_x_27[24]) : _zz_result_payload_x_16[24]);
  assign _zz_result_payload_x_68 = ($signed(_zz_result_payload_x_4) >>> 4);
  assign _zz_result_payload_x_69 = ($signed(_zz_result_payload_x_16) >>> 4);
  assign _zz_result_payload_x_70 = (_zz_result_payload_x_39 ? (! _zz_result_payload_x_28[24]) : _zz_result_payload_x_17[24]);
  assign _zz_result_payload_x_71 = ($signed(_zz_result_payload_x_5) >>> 5);
  assign _zz_result_payload_x_72 = ($signed(_zz_result_payload_x_17) >>> 5);
  assign _zz_result_payload_x_73 = (_zz_result_payload_x_40 ? (! _zz_result_payload_x_29[24]) : _zz_result_payload_x_18[24]);
  assign _zz_result_payload_x_74 = ($signed(_zz_result_payload_x_6) >>> 6);
  assign _zz_result_payload_x_75 = ($signed(_zz_result_payload_x_18) >>> 6);
  assign _zz_result_payload_x_76 = (_zz_result_payload_x_41 ? (! _zz_result_payload_x_30[24]) : _zz_result_payload_x_19[24]);
  assign _zz_result_payload_x_77 = ($signed(_zz_result_payload_x_7) >>> 7);
  assign _zz_result_payload_x_78 = ($signed(_zz_result_payload_x_19) >>> 7);
  assign _zz_result_payload_x_79 = (_zz_result_payload_x_42 ? (! _zz_result_payload_x_31[24]) : _zz_result_payload_x_20[24]);
  assign _zz_result_payload_x_80 = ($signed(_zz_result_payload_x_8) >>> 8);
  assign _zz_result_payload_x_81 = ($signed(_zz_result_payload_x_20) >>> 8);
  assign _zz_result_payload_x_82 = (_zz_result_payload_x_43 ? (! _zz_result_payload_x_32[24]) : _zz_result_payload_x_21[24]);
  assign _zz_result_payload_x_83 = ($signed(_zz_result_payload_x_9) >>> 9);
  assign _zz_result_payload_x_84 = ($signed(_zz_result_payload_x_21) >>> 9);
  assign _zz_result_payload_x_85 = (_zz_result_payload_x_44 ? (! _zz_result_payload_x_33[24]) : _zz_result_payload_x_22[24]);
  assign _zz_result_payload_y_1 = ($signed(_zz_result_payload_x_10) >>> 10);
  assign _zz_result_payload_x_86 = ($signed(_zz_result_payload_x_22) >>> 10);
  assign result_valid = _zz_result_valid_11;
  assign result_payload_x = _zz_result_payload_x_11;
  assign result_payload_y = _zz_result_payload_y;
  assign result_payload_z = _zz_result_payload_z;
  assign raw_data_ready = 1'b1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_result_valid <= 1'b0;
      _zz_result_valid_1 <= 1'b0;
      _zz_result_valid_2 <= 1'b0;
      _zz_result_valid_3 <= 1'b0;
      _zz_result_valid_4 <= 1'b0;
      _zz_result_valid_5 <= 1'b0;
      _zz_result_valid_6 <= 1'b0;
      _zz_result_valid_7 <= 1'b0;
      _zz_result_valid_8 <= 1'b0;
      _zz_result_valid_9 <= 1'b0;
      _zz_result_valid_10 <= 1'b0;
      _zz_result_valid_11 <= 1'b0;
    end else begin
      if(raw_data_fire) begin
        _zz_result_valid <= 1'b1;
      end else begin
        _zz_result_valid <= 1'b0;
      end
      _zz_result_valid_1 <= _zz_result_valid;
      _zz_result_valid_2 <= _zz_result_valid_1;
      _zz_result_valid_3 <= _zz_result_valid_2;
      _zz_result_valid_4 <= _zz_result_valid_3;
      _zz_result_valid_5 <= _zz_result_valid_4;
      _zz_result_valid_6 <= _zz_result_valid_5;
      _zz_result_valid_7 <= _zz_result_valid_6;
      _zz_result_valid_8 <= _zz_result_valid_7;
      _zz_result_valid_9 <= _zz_result_valid_8;
      _zz_result_valid_10 <= _zz_result_valid_9;
      _zz_result_valid_11 <= _zz_result_valid_10;
    end
  end

  always @(posedge clk) begin
    _zz_result_payload_x_45 <= 25'h0000c90;
    _zz_result_payload_x_46 <= 25'h000076b;
    _zz_result_payload_x_47 <= 25'h00003eb;
    _zz_result_payload_x_48 <= 25'h00001fd;
    _zz_result_payload_x_49 <= 25'h00000ff;
    _zz_result_payload_x_50 <= 25'h000007f;
    _zz_result_payload_x_51 <= 25'h000003f;
    _zz_result_payload_x_52 <= 25'h000001f;
    _zz_result_payload_x_53 <= 25'h000000f;
    _zz_result_payload_x_54 <= 25'h0000007;
    _zz_result_payload_z_1 <= 25'h0000003;
    if(raw_data_fire) begin
      _zz_result_payload_x <= raw_data_payload_x;
      _zz_result_payload_x_12 <= raw_data_payload_y;
      _zz_result_payload_x_23 <= raw_data_payload_z;
      _zz_result_payload_x_34 <= rotate_mode;
    end
    if(_zz_result_valid) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_55 ? _zz__zz_result_payload_x_1 : _zz__zz_result_payload_x_1_1);
        end
        2'b10 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_55 ? _zz__zz_result_payload_x_1_2 : _zz__zz_result_payload_x_1_3);
        end
        default : begin
          _zz_result_payload_x_1 <= _zz_result_payload_x;
        end
      endcase
      _zz_result_payload_x_13 <= (_zz_result_payload_x_55 ? _zz__zz_result_payload_x_13 : _zz__zz_result_payload_x_13_1);
      _zz_result_payload_x_24 <= (_zz_result_payload_x_55 ? _zz__zz_result_payload_x_24 : _zz__zz_result_payload_x_24_1);
    end
    _zz_result_payload_x_35 <= _zz_result_payload_x_34;
    if(_zz_result_valid_1) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_58 ? _zz__zz_result_payload_x_2 : _zz__zz_result_payload_x_2_1);
        end
        2'b10 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_58 ? _zz__zz_result_payload_x_2_2 : _zz__zz_result_payload_x_2_3);
        end
        default : begin
          _zz_result_payload_x_2 <= _zz_result_payload_x_1;
        end
      endcase
      _zz_result_payload_x_14 <= (_zz_result_payload_x_58 ? _zz__zz_result_payload_x_14 : _zz__zz_result_payload_x_14_1);
      _zz_result_payload_x_25 <= (_zz_result_payload_x_58 ? _zz__zz_result_payload_x_25 : _zz__zz_result_payload_x_25_1);
    end
    _zz_result_payload_x_36 <= _zz_result_payload_x_35;
    if(_zz_result_valid_2) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_61 ? _zz__zz_result_payload_x_3 : _zz__zz_result_payload_x_3_1);
        end
        2'b10 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_61 ? _zz__zz_result_payload_x_3_2 : _zz__zz_result_payload_x_3_3);
        end
        default : begin
          _zz_result_payload_x_3 <= _zz_result_payload_x_2;
        end
      endcase
      _zz_result_payload_x_15 <= (_zz_result_payload_x_61 ? _zz__zz_result_payload_x_15 : _zz__zz_result_payload_x_15_1);
      _zz_result_payload_x_26 <= (_zz_result_payload_x_61 ? _zz__zz_result_payload_x_26 : _zz__zz_result_payload_x_26_1);
    end
    _zz_result_payload_x_37 <= _zz_result_payload_x_36;
    if(_zz_result_valid_3) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_64 ? _zz__zz_result_payload_x_4 : _zz__zz_result_payload_x_4_1);
        end
        2'b10 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_64 ? _zz__zz_result_payload_x_4_2 : _zz__zz_result_payload_x_4_3);
        end
        default : begin
          _zz_result_payload_x_4 <= _zz_result_payload_x_3;
        end
      endcase
      _zz_result_payload_x_16 <= (_zz_result_payload_x_64 ? _zz__zz_result_payload_x_16 : _zz__zz_result_payload_x_16_1);
      _zz_result_payload_x_27 <= (_zz_result_payload_x_64 ? _zz__zz_result_payload_x_27 : _zz__zz_result_payload_x_27_1);
    end
    _zz_result_payload_x_38 <= _zz_result_payload_x_37;
    if(_zz_result_valid_4) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_67 ? _zz__zz_result_payload_x_5 : _zz__zz_result_payload_x_5_1);
        end
        2'b10 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_67 ? _zz__zz_result_payload_x_5_2 : _zz__zz_result_payload_x_5_3);
        end
        default : begin
          _zz_result_payload_x_5 <= _zz_result_payload_x_4;
        end
      endcase
      _zz_result_payload_x_17 <= (_zz_result_payload_x_67 ? _zz__zz_result_payload_x_17 : _zz__zz_result_payload_x_17_1);
      _zz_result_payload_x_28 <= (_zz_result_payload_x_67 ? _zz__zz_result_payload_x_28 : _zz__zz_result_payload_x_28_1);
    end
    _zz_result_payload_x_39 <= _zz_result_payload_x_38;
    if(_zz_result_valid_5) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_70 ? _zz__zz_result_payload_x_6 : _zz__zz_result_payload_x_6_1);
        end
        2'b10 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_70 ? _zz__zz_result_payload_x_6_2 : _zz__zz_result_payload_x_6_3);
        end
        default : begin
          _zz_result_payload_x_6 <= _zz_result_payload_x_5;
        end
      endcase
      _zz_result_payload_x_18 <= (_zz_result_payload_x_70 ? _zz__zz_result_payload_x_18 : _zz__zz_result_payload_x_18_1);
      _zz_result_payload_x_29 <= (_zz_result_payload_x_70 ? _zz__zz_result_payload_x_29 : _zz__zz_result_payload_x_29_1);
    end
    _zz_result_payload_x_40 <= _zz_result_payload_x_39;
    if(_zz_result_valid_6) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_73 ? _zz__zz_result_payload_x_7 : _zz__zz_result_payload_x_7_1);
        end
        2'b10 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_73 ? _zz__zz_result_payload_x_7_2 : _zz__zz_result_payload_x_7_3);
        end
        default : begin
          _zz_result_payload_x_7 <= _zz_result_payload_x_6;
        end
      endcase
      _zz_result_payload_x_19 <= (_zz_result_payload_x_73 ? _zz__zz_result_payload_x_19 : _zz__zz_result_payload_x_19_1);
      _zz_result_payload_x_30 <= (_zz_result_payload_x_73 ? _zz__zz_result_payload_x_30 : _zz__zz_result_payload_x_30_1);
    end
    _zz_result_payload_x_41 <= _zz_result_payload_x_40;
    if(_zz_result_valid_7) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_8 : _zz__zz_result_payload_x_8_1);
        end
        2'b10 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_8_2 : _zz__zz_result_payload_x_8_3);
        end
        default : begin
          _zz_result_payload_x_8 <= _zz_result_payload_x_7;
        end
      endcase
      _zz_result_payload_x_20 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_20 : _zz__zz_result_payload_x_20_1);
      _zz_result_payload_x_31 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_31 : _zz__zz_result_payload_x_31_1);
    end
    _zz_result_payload_x_42 <= _zz_result_payload_x_41;
    if(_zz_result_valid_8) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_9 : _zz__zz_result_payload_x_9_1);
        end
        2'b10 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_9_2 : _zz__zz_result_payload_x_9_3);
        end
        default : begin
          _zz_result_payload_x_9 <= _zz_result_payload_x_8;
        end
      endcase
      _zz_result_payload_x_21 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_21 : _zz__zz_result_payload_x_21_1);
      _zz_result_payload_x_32 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_32 : _zz__zz_result_payload_x_32_1);
    end
    _zz_result_payload_x_43 <= _zz_result_payload_x_42;
    if(_zz_result_valid_9) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_10 : _zz__zz_result_payload_x_10_1);
        end
        2'b10 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_10_2 : _zz__zz_result_payload_x_10_3);
        end
        default : begin
          _zz_result_payload_x_10 <= _zz_result_payload_x_9;
        end
      endcase
      _zz_result_payload_x_22 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_22 : _zz__zz_result_payload_x_22_1);
      _zz_result_payload_x_33 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_33 : _zz__zz_result_payload_x_33_1);
    end
    _zz_result_payload_x_44 <= _zz_result_payload_x_43;
    if(_zz_result_valid_10) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_x_11 : _zz__zz_result_payload_x_11_1);
        end
        2'b10 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_x_11_2 : _zz__zz_result_payload_x_11_3);
        end
        default : begin
          _zz_result_payload_x_11 <= _zz_result_payload_x_10;
        end
      endcase
      _zz_result_payload_y <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_y : _zz__zz_result_payload_y_1);
      _zz_result_payload_z <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_z : _zz__zz_result_payload_z_1);
    end
  end


endmodule

module CordicRotator (
  input               rotate_mode,
  input      [1:0]    x_u,
  input               raw_data_valid,
  output              raw_data_ready,
  input      [23:0]   raw_data_payload_x,
  input      [23:0]   raw_data_payload_y,
  input      [23:0]   raw_data_payload_z,
  output              result_valid,
  output     [23:0]   result_payload_x,
  output     [23:0]   result_payload_y,
  output     [23:0]   result_payload_z,
  input               clk,
  input               reset
);

  wire       [23:0]   _zz__zz_result_payload_x_1;
  wire       [23:0]   _zz__zz_result_payload_x_1_1;
  wire       [23:0]   _zz__zz_result_payload_x_1_2;
  wire       [23:0]   _zz__zz_result_payload_x_1_3;
  wire       [23:0]   _zz__zz_result_payload_x_13;
  wire       [23:0]   _zz__zz_result_payload_x_13_1;
  wire       [23:0]   _zz__zz_result_payload_x_24;
  wire       [23:0]   _zz__zz_result_payload_x_24_1;
  wire       [23:0]   _zz__zz_result_payload_x_2;
  wire       [23:0]   _zz__zz_result_payload_x_2_1;
  wire       [23:0]   _zz__zz_result_payload_x_2_2;
  wire       [23:0]   _zz__zz_result_payload_x_2_3;
  wire       [23:0]   _zz__zz_result_payload_x_14;
  wire       [23:0]   _zz__zz_result_payload_x_14_1;
  wire       [23:0]   _zz__zz_result_payload_x_25;
  wire       [23:0]   _zz__zz_result_payload_x_25_1;
  wire       [23:0]   _zz__zz_result_payload_x_3;
  wire       [23:0]   _zz__zz_result_payload_x_3_1;
  wire       [23:0]   _zz__zz_result_payload_x_3_2;
  wire       [23:0]   _zz__zz_result_payload_x_3_3;
  wire       [23:0]   _zz__zz_result_payload_x_15;
  wire       [23:0]   _zz__zz_result_payload_x_15_1;
  wire       [23:0]   _zz__zz_result_payload_x_26;
  wire       [23:0]   _zz__zz_result_payload_x_26_1;
  wire       [23:0]   _zz__zz_result_payload_x_4;
  wire       [23:0]   _zz__zz_result_payload_x_4_1;
  wire       [23:0]   _zz__zz_result_payload_x_4_2;
  wire       [23:0]   _zz__zz_result_payload_x_4_3;
  wire       [23:0]   _zz__zz_result_payload_x_16;
  wire       [23:0]   _zz__zz_result_payload_x_16_1;
  wire       [23:0]   _zz__zz_result_payload_x_27;
  wire       [23:0]   _zz__zz_result_payload_x_27_1;
  wire       [23:0]   _zz__zz_result_payload_x_5;
  wire       [23:0]   _zz__zz_result_payload_x_5_1;
  wire       [23:0]   _zz__zz_result_payload_x_5_2;
  wire       [23:0]   _zz__zz_result_payload_x_5_3;
  wire       [23:0]   _zz__zz_result_payload_x_17;
  wire       [23:0]   _zz__zz_result_payload_x_17_1;
  wire       [23:0]   _zz__zz_result_payload_x_28;
  wire       [23:0]   _zz__zz_result_payload_x_28_1;
  wire       [23:0]   _zz__zz_result_payload_x_6;
  wire       [23:0]   _zz__zz_result_payload_x_6_1;
  wire       [23:0]   _zz__zz_result_payload_x_6_2;
  wire       [23:0]   _zz__zz_result_payload_x_6_3;
  wire       [23:0]   _zz__zz_result_payload_x_18;
  wire       [23:0]   _zz__zz_result_payload_x_18_1;
  wire       [23:0]   _zz__zz_result_payload_x_29;
  wire       [23:0]   _zz__zz_result_payload_x_29_1;
  wire       [23:0]   _zz__zz_result_payload_x_7;
  wire       [23:0]   _zz__zz_result_payload_x_7_1;
  wire       [23:0]   _zz__zz_result_payload_x_7_2;
  wire       [23:0]   _zz__zz_result_payload_x_7_3;
  wire       [23:0]   _zz__zz_result_payload_x_19;
  wire       [23:0]   _zz__zz_result_payload_x_19_1;
  wire       [23:0]   _zz__zz_result_payload_x_30;
  wire       [23:0]   _zz__zz_result_payload_x_30_1;
  wire       [23:0]   _zz__zz_result_payload_x_8;
  wire       [23:0]   _zz__zz_result_payload_x_8_1;
  wire       [23:0]   _zz__zz_result_payload_x_8_2;
  wire       [23:0]   _zz__zz_result_payload_x_8_3;
  wire       [23:0]   _zz__zz_result_payload_x_20;
  wire       [23:0]   _zz__zz_result_payload_x_20_1;
  wire       [23:0]   _zz__zz_result_payload_x_31;
  wire       [23:0]   _zz__zz_result_payload_x_31_1;
  wire       [23:0]   _zz__zz_result_payload_x_9;
  wire       [23:0]   _zz__zz_result_payload_x_9_1;
  wire       [23:0]   _zz__zz_result_payload_x_9_2;
  wire       [23:0]   _zz__zz_result_payload_x_9_3;
  wire       [23:0]   _zz__zz_result_payload_x_21;
  wire       [23:0]   _zz__zz_result_payload_x_21_1;
  wire       [23:0]   _zz__zz_result_payload_x_32;
  wire       [23:0]   _zz__zz_result_payload_x_32_1;
  wire       [23:0]   _zz__zz_result_payload_x_10;
  wire       [23:0]   _zz__zz_result_payload_x_10_1;
  wire       [23:0]   _zz__zz_result_payload_x_10_2;
  wire       [23:0]   _zz__zz_result_payload_x_10_3;
  wire       [23:0]   _zz__zz_result_payload_x_22;
  wire       [23:0]   _zz__zz_result_payload_x_22_1;
  wire       [23:0]   _zz__zz_result_payload_x_33;
  wire       [23:0]   _zz__zz_result_payload_x_33_1;
  wire       [23:0]   _zz__zz_result_payload_x_11;
  wire       [23:0]   _zz__zz_result_payload_x_11_1;
  wire       [23:0]   _zz__zz_result_payload_x_11_2;
  wire       [23:0]   _zz__zz_result_payload_x_11_3;
  wire       [23:0]   _zz__zz_result_payload_y;
  wire       [23:0]   _zz__zz_result_payload_y_1;
  wire       [23:0]   _zz__zz_result_payload_z;
  wire       [23:0]   _zz__zz_result_payload_z_1;
  reg        [23:0]   _zz_result_payload_x;
  reg        [23:0]   _zz_result_payload_x_1;
  reg        [23:0]   _zz_result_payload_x_2;
  reg        [23:0]   _zz_result_payload_x_3;
  reg        [23:0]   _zz_result_payload_x_4;
  reg        [23:0]   _zz_result_payload_x_5;
  reg        [23:0]   _zz_result_payload_x_6;
  reg        [23:0]   _zz_result_payload_x_7;
  reg        [23:0]   _zz_result_payload_x_8;
  reg        [23:0]   _zz_result_payload_x_9;
  reg        [23:0]   _zz_result_payload_x_10;
  reg        [23:0]   _zz_result_payload_x_11;
  reg        [23:0]   _zz_result_payload_x_12;
  reg        [23:0]   _zz_result_payload_x_13;
  reg        [23:0]   _zz_result_payload_x_14;
  reg        [23:0]   _zz_result_payload_x_15;
  reg        [23:0]   _zz_result_payload_x_16;
  reg        [23:0]   _zz_result_payload_x_17;
  reg        [23:0]   _zz_result_payload_x_18;
  reg        [23:0]   _zz_result_payload_x_19;
  reg        [23:0]   _zz_result_payload_x_20;
  reg        [23:0]   _zz_result_payload_x_21;
  reg        [23:0]   _zz_result_payload_x_22;
  reg        [23:0]   _zz_result_payload_y;
  reg        [23:0]   _zz_result_payload_x_23;
  reg        [23:0]   _zz_result_payload_x_24;
  reg        [23:0]   _zz_result_payload_x_25;
  reg        [23:0]   _zz_result_payload_x_26;
  reg        [23:0]   _zz_result_payload_x_27;
  reg        [23:0]   _zz_result_payload_x_28;
  reg        [23:0]   _zz_result_payload_x_29;
  reg        [23:0]   _zz_result_payload_x_30;
  reg        [23:0]   _zz_result_payload_x_31;
  reg        [23:0]   _zz_result_payload_x_32;
  reg        [23:0]   _zz_result_payload_x_33;
  reg        [23:0]   _zz_result_payload_z;
  reg                 _zz_result_valid;
  reg                 _zz_result_valid_1;
  reg                 _zz_result_valid_2;
  reg                 _zz_result_valid_3;
  reg                 _zz_result_valid_4;
  reg                 _zz_result_valid_5;
  reg                 _zz_result_valid_6;
  reg                 _zz_result_valid_7;
  reg                 _zz_result_valid_8;
  reg                 _zz_result_valid_9;
  reg                 _zz_result_valid_10;
  reg                 _zz_result_valid_11;
  reg                 _zz_result_payload_x_34;
  reg                 _zz_result_payload_x_35;
  reg                 _zz_result_payload_x_36;
  reg                 _zz_result_payload_x_37;
  reg                 _zz_result_payload_x_38;
  reg                 _zz_result_payload_x_39;
  reg                 _zz_result_payload_x_40;
  reg                 _zz_result_payload_x_41;
  reg                 _zz_result_payload_x_42;
  reg                 _zz_result_payload_x_43;
  reg                 _zz_result_payload_x_44;
  reg        [23:0]   _zz_result_payload_x_45;
  reg        [23:0]   _zz_result_payload_x_46;
  reg        [23:0]   _zz_result_payload_x_47;
  reg        [23:0]   _zz_result_payload_x_48;
  reg        [23:0]   _zz_result_payload_x_49;
  reg        [23:0]   _zz_result_payload_x_50;
  reg        [23:0]   _zz_result_payload_x_51;
  reg        [23:0]   _zz_result_payload_x_52;
  reg        [23:0]   _zz_result_payload_x_53;
  reg        [23:0]   _zz_result_payload_x_54;
  reg        [23:0]   _zz_result_payload_z_1;
  wire                raw_data_fire;
  wire                _zz_result_payload_x_55;
  wire       [23:0]   _zz_result_payload_x_56;
  wire       [23:0]   _zz_result_payload_x_57;
  wire                _zz_result_payload_x_58;
  wire       [23:0]   _zz_result_payload_x_59;
  wire       [23:0]   _zz_result_payload_x_60;
  wire                _zz_result_payload_x_61;
  wire       [23:0]   _zz_result_payload_x_62;
  wire       [23:0]   _zz_result_payload_x_63;
  wire                _zz_result_payload_x_64;
  wire       [23:0]   _zz_result_payload_x_65;
  wire       [23:0]   _zz_result_payload_x_66;
  wire                _zz_result_payload_x_67;
  wire       [23:0]   _zz_result_payload_x_68;
  wire       [23:0]   _zz_result_payload_x_69;
  wire                _zz_result_payload_x_70;
  wire       [23:0]   _zz_result_payload_x_71;
  wire       [23:0]   _zz_result_payload_x_72;
  wire                _zz_result_payload_x_73;
  wire       [23:0]   _zz_result_payload_x_74;
  wire       [23:0]   _zz_result_payload_x_75;
  wire                _zz_result_payload_x_76;
  wire       [23:0]   _zz_result_payload_x_77;
  wire       [23:0]   _zz_result_payload_x_78;
  wire                _zz_result_payload_x_79;
  wire       [23:0]   _zz_result_payload_x_80;
  wire       [23:0]   _zz_result_payload_x_81;
  wire                _zz_result_payload_x_82;
  wire       [23:0]   _zz_result_payload_x_83;
  wire       [23:0]   _zz_result_payload_x_84;
  wire                _zz_result_payload_x_85;
  wire       [23:0]   _zz_result_payload_y_1;
  wire       [23:0]   _zz_result_payload_x_86;

  assign _zz__zz_result_payload_x_1 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_1_1 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_1_2 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_1_3 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_13 = ($signed(_zz_result_payload_x_12) + $signed(_zz_result_payload_x_56));
  assign _zz__zz_result_payload_x_13_1 = ($signed(_zz_result_payload_x_12) - $signed(_zz_result_payload_x_56));
  assign _zz__zz_result_payload_x_24 = ($signed(_zz_result_payload_x_23) - $signed(_zz_result_payload_x_45));
  assign _zz__zz_result_payload_x_24_1 = ($signed(_zz_result_payload_x_23) + $signed(_zz_result_payload_x_45));
  assign _zz__zz_result_payload_x_2 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_60));
  assign _zz__zz_result_payload_x_2_1 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_60));
  assign _zz__zz_result_payload_x_2_2 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_60));
  assign _zz__zz_result_payload_x_2_3 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_60));
  assign _zz__zz_result_payload_x_14 = ($signed(_zz_result_payload_x_13) + $signed(_zz_result_payload_x_59));
  assign _zz__zz_result_payload_x_14_1 = ($signed(_zz_result_payload_x_13) - $signed(_zz_result_payload_x_59));
  assign _zz__zz_result_payload_x_25 = ($signed(_zz_result_payload_x_24) - $signed(_zz_result_payload_x_46));
  assign _zz__zz_result_payload_x_25_1 = ($signed(_zz_result_payload_x_24) + $signed(_zz_result_payload_x_46));
  assign _zz__zz_result_payload_x_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_3_1 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_3_2 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_3_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_63));
  assign _zz__zz_result_payload_x_15 = ($signed(_zz_result_payload_x_14) + $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_15_1 = ($signed(_zz_result_payload_x_14) - $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_26 = ($signed(_zz_result_payload_x_25) - $signed(_zz_result_payload_x_47));
  assign _zz__zz_result_payload_x_26_1 = ($signed(_zz_result_payload_x_25) + $signed(_zz_result_payload_x_47));
  assign _zz__zz_result_payload_x_4 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_4_1 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_4_2 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_4_3 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_66));
  assign _zz__zz_result_payload_x_16 = ($signed(_zz_result_payload_x_15) + $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_16_1 = ($signed(_zz_result_payload_x_15) - $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_27 = ($signed(_zz_result_payload_x_26) - $signed(_zz_result_payload_x_48));
  assign _zz__zz_result_payload_x_27_1 = ($signed(_zz_result_payload_x_26) + $signed(_zz_result_payload_x_48));
  assign _zz__zz_result_payload_x_5 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_5_1 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_5_2 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_5_3 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_69));
  assign _zz__zz_result_payload_x_17 = ($signed(_zz_result_payload_x_16) + $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_17_1 = ($signed(_zz_result_payload_x_16) - $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_28 = ($signed(_zz_result_payload_x_27) - $signed(_zz_result_payload_x_49));
  assign _zz__zz_result_payload_x_28_1 = ($signed(_zz_result_payload_x_27) + $signed(_zz_result_payload_x_49));
  assign _zz__zz_result_payload_x_6 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_6_1 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_6_2 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_6_3 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_72));
  assign _zz__zz_result_payload_x_18 = ($signed(_zz_result_payload_x_17) + $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_18_1 = ($signed(_zz_result_payload_x_17) - $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_29 = ($signed(_zz_result_payload_x_28) - $signed(_zz_result_payload_x_50));
  assign _zz__zz_result_payload_x_29_1 = ($signed(_zz_result_payload_x_28) + $signed(_zz_result_payload_x_50));
  assign _zz__zz_result_payload_x_7 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_75));
  assign _zz__zz_result_payload_x_7_1 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_75));
  assign _zz__zz_result_payload_x_7_2 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_75));
  assign _zz__zz_result_payload_x_7_3 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_75));
  assign _zz__zz_result_payload_x_19 = ($signed(_zz_result_payload_x_18) + $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_19_1 = ($signed(_zz_result_payload_x_18) - $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_30 = ($signed(_zz_result_payload_x_29) - $signed(_zz_result_payload_x_51));
  assign _zz__zz_result_payload_x_30_1 = ($signed(_zz_result_payload_x_29) + $signed(_zz_result_payload_x_51));
  assign _zz__zz_result_payload_x_8 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_8_1 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_8_2 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_8_3 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_78));
  assign _zz__zz_result_payload_x_20 = ($signed(_zz_result_payload_x_19) + $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_20_1 = ($signed(_zz_result_payload_x_19) - $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_31 = ($signed(_zz_result_payload_x_30) - $signed(_zz_result_payload_x_52));
  assign _zz__zz_result_payload_x_31_1 = ($signed(_zz_result_payload_x_30) + $signed(_zz_result_payload_x_52));
  assign _zz__zz_result_payload_x_9 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_9_1 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_9_2 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_9_3 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_81));
  assign _zz__zz_result_payload_x_21 = ($signed(_zz_result_payload_x_20) + $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_21_1 = ($signed(_zz_result_payload_x_20) - $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_32 = ($signed(_zz_result_payload_x_31) - $signed(_zz_result_payload_x_53));
  assign _zz__zz_result_payload_x_32_1 = ($signed(_zz_result_payload_x_31) + $signed(_zz_result_payload_x_53));
  assign _zz__zz_result_payload_x_10 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_10_1 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_10_2 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_10_3 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_84));
  assign _zz__zz_result_payload_x_22 = ($signed(_zz_result_payload_x_21) + $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_22_1 = ($signed(_zz_result_payload_x_21) - $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_33 = ($signed(_zz_result_payload_x_32) - $signed(_zz_result_payload_x_54));
  assign _zz__zz_result_payload_x_33_1 = ($signed(_zz_result_payload_x_32) + $signed(_zz_result_payload_x_54));
  assign _zz__zz_result_payload_x_11 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_11_1 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_11_2 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_11_3 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_y = ($signed(_zz_result_payload_x_22) + $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_y_1 = ($signed(_zz_result_payload_x_22) - $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_z = ($signed(_zz_result_payload_x_33) - $signed(_zz_result_payload_z_1));
  assign _zz__zz_result_payload_z_1 = ($signed(_zz_result_payload_x_33) + $signed(_zz_result_payload_z_1));
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign _zz_result_payload_x_55 = (_zz_result_payload_x_34 ? (! _zz_result_payload_x_23[23]) : _zz_result_payload_x_12[23]);
  assign _zz_result_payload_x_56 = ($signed(_zz_result_payload_x) >>> 0);
  assign _zz_result_payload_x_57 = ($signed(_zz_result_payload_x_12) >>> 0);
  assign _zz_result_payload_x_58 = (_zz_result_payload_x_35 ? (! _zz_result_payload_x_24[23]) : _zz_result_payload_x_13[23]);
  assign _zz_result_payload_x_59 = ($signed(_zz_result_payload_x_1) >>> 1);
  assign _zz_result_payload_x_60 = ($signed(_zz_result_payload_x_13) >>> 1);
  assign _zz_result_payload_x_61 = (_zz_result_payload_x_36 ? (! _zz_result_payload_x_25[23]) : _zz_result_payload_x_14[23]);
  assign _zz_result_payload_x_62 = ($signed(_zz_result_payload_x_2) >>> 2);
  assign _zz_result_payload_x_63 = ($signed(_zz_result_payload_x_14) >>> 2);
  assign _zz_result_payload_x_64 = (_zz_result_payload_x_37 ? (! _zz_result_payload_x_26[23]) : _zz_result_payload_x_15[23]);
  assign _zz_result_payload_x_65 = ($signed(_zz_result_payload_x_3) >>> 3);
  assign _zz_result_payload_x_66 = ($signed(_zz_result_payload_x_15) >>> 3);
  assign _zz_result_payload_x_67 = (_zz_result_payload_x_38 ? (! _zz_result_payload_x_27[23]) : _zz_result_payload_x_16[23]);
  assign _zz_result_payload_x_68 = ($signed(_zz_result_payload_x_4) >>> 4);
  assign _zz_result_payload_x_69 = ($signed(_zz_result_payload_x_16) >>> 4);
  assign _zz_result_payload_x_70 = (_zz_result_payload_x_39 ? (! _zz_result_payload_x_28[23]) : _zz_result_payload_x_17[23]);
  assign _zz_result_payload_x_71 = ($signed(_zz_result_payload_x_5) >>> 5);
  assign _zz_result_payload_x_72 = ($signed(_zz_result_payload_x_17) >>> 5);
  assign _zz_result_payload_x_73 = (_zz_result_payload_x_40 ? (! _zz_result_payload_x_29[23]) : _zz_result_payload_x_18[23]);
  assign _zz_result_payload_x_74 = ($signed(_zz_result_payload_x_6) >>> 6);
  assign _zz_result_payload_x_75 = ($signed(_zz_result_payload_x_18) >>> 6);
  assign _zz_result_payload_x_76 = (_zz_result_payload_x_41 ? (! _zz_result_payload_x_30[23]) : _zz_result_payload_x_19[23]);
  assign _zz_result_payload_x_77 = ($signed(_zz_result_payload_x_7) >>> 7);
  assign _zz_result_payload_x_78 = ($signed(_zz_result_payload_x_19) >>> 7);
  assign _zz_result_payload_x_79 = (_zz_result_payload_x_42 ? (! _zz_result_payload_x_31[23]) : _zz_result_payload_x_20[23]);
  assign _zz_result_payload_x_80 = ($signed(_zz_result_payload_x_8) >>> 8);
  assign _zz_result_payload_x_81 = ($signed(_zz_result_payload_x_20) >>> 8);
  assign _zz_result_payload_x_82 = (_zz_result_payload_x_43 ? (! _zz_result_payload_x_32[23]) : _zz_result_payload_x_21[23]);
  assign _zz_result_payload_x_83 = ($signed(_zz_result_payload_x_9) >>> 9);
  assign _zz_result_payload_x_84 = ($signed(_zz_result_payload_x_21) >>> 9);
  assign _zz_result_payload_x_85 = (_zz_result_payload_x_44 ? (! _zz_result_payload_x_33[23]) : _zz_result_payload_x_22[23]);
  assign _zz_result_payload_y_1 = ($signed(_zz_result_payload_x_10) >>> 10);
  assign _zz_result_payload_x_86 = ($signed(_zz_result_payload_x_22) >>> 10);
  assign result_valid = _zz_result_valid_11;
  assign result_payload_x = _zz_result_payload_x_11;
  assign result_payload_y = _zz_result_payload_y;
  assign result_payload_z = _zz_result_payload_z;
  assign raw_data_ready = 1'b1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_result_valid <= 1'b0;
      _zz_result_valid_1 <= 1'b0;
      _zz_result_valid_2 <= 1'b0;
      _zz_result_valid_3 <= 1'b0;
      _zz_result_valid_4 <= 1'b0;
      _zz_result_valid_5 <= 1'b0;
      _zz_result_valid_6 <= 1'b0;
      _zz_result_valid_7 <= 1'b0;
      _zz_result_valid_8 <= 1'b0;
      _zz_result_valid_9 <= 1'b0;
      _zz_result_valid_10 <= 1'b0;
      _zz_result_valid_11 <= 1'b0;
    end else begin
      if(raw_data_fire) begin
        _zz_result_valid <= 1'b1;
      end else begin
        _zz_result_valid <= 1'b0;
      end
      _zz_result_valid_1 <= _zz_result_valid;
      _zz_result_valid_2 <= _zz_result_valid_1;
      _zz_result_valid_3 <= _zz_result_valid_2;
      _zz_result_valid_4 <= _zz_result_valid_3;
      _zz_result_valid_5 <= _zz_result_valid_4;
      _zz_result_valid_6 <= _zz_result_valid_5;
      _zz_result_valid_7 <= _zz_result_valid_6;
      _zz_result_valid_8 <= _zz_result_valid_7;
      _zz_result_valid_9 <= _zz_result_valid_8;
      _zz_result_valid_10 <= _zz_result_valid_9;
      _zz_result_valid_11 <= _zz_result_valid_10;
    end
  end

  always @(posedge clk) begin
    _zz_result_payload_x_45 <= 24'h000c90;
    _zz_result_payload_x_46 <= 24'h00076b;
    _zz_result_payload_x_47 <= 24'h0003eb;
    _zz_result_payload_x_48 <= 24'h0001fd;
    _zz_result_payload_x_49 <= 24'h0000ff;
    _zz_result_payload_x_50 <= 24'h00007f;
    _zz_result_payload_x_51 <= 24'h00003f;
    _zz_result_payload_x_52 <= 24'h00001f;
    _zz_result_payload_x_53 <= 24'h00000f;
    _zz_result_payload_x_54 <= 24'h000007;
    _zz_result_payload_z_1 <= 24'h000003;
    if(raw_data_fire) begin
      _zz_result_payload_x <= raw_data_payload_x;
      _zz_result_payload_x_12 <= raw_data_payload_y;
      _zz_result_payload_x_23 <= raw_data_payload_z;
      _zz_result_payload_x_34 <= rotate_mode;
    end
    if(_zz_result_valid) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_55 ? _zz__zz_result_payload_x_1 : _zz__zz_result_payload_x_1_1);
        end
        2'b10 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_55 ? _zz__zz_result_payload_x_1_2 : _zz__zz_result_payload_x_1_3);
        end
        default : begin
          _zz_result_payload_x_1 <= _zz_result_payload_x;
        end
      endcase
      _zz_result_payload_x_13 <= (_zz_result_payload_x_55 ? _zz__zz_result_payload_x_13 : _zz__zz_result_payload_x_13_1);
      _zz_result_payload_x_24 <= (_zz_result_payload_x_55 ? _zz__zz_result_payload_x_24 : _zz__zz_result_payload_x_24_1);
    end
    _zz_result_payload_x_35 <= _zz_result_payload_x_34;
    if(_zz_result_valid_1) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_58 ? _zz__zz_result_payload_x_2 : _zz__zz_result_payload_x_2_1);
        end
        2'b10 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_58 ? _zz__zz_result_payload_x_2_2 : _zz__zz_result_payload_x_2_3);
        end
        default : begin
          _zz_result_payload_x_2 <= _zz_result_payload_x_1;
        end
      endcase
      _zz_result_payload_x_14 <= (_zz_result_payload_x_58 ? _zz__zz_result_payload_x_14 : _zz__zz_result_payload_x_14_1);
      _zz_result_payload_x_25 <= (_zz_result_payload_x_58 ? _zz__zz_result_payload_x_25 : _zz__zz_result_payload_x_25_1);
    end
    _zz_result_payload_x_36 <= _zz_result_payload_x_35;
    if(_zz_result_valid_2) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_61 ? _zz__zz_result_payload_x_3 : _zz__zz_result_payload_x_3_1);
        end
        2'b10 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_61 ? _zz__zz_result_payload_x_3_2 : _zz__zz_result_payload_x_3_3);
        end
        default : begin
          _zz_result_payload_x_3 <= _zz_result_payload_x_2;
        end
      endcase
      _zz_result_payload_x_15 <= (_zz_result_payload_x_61 ? _zz__zz_result_payload_x_15 : _zz__zz_result_payload_x_15_1);
      _zz_result_payload_x_26 <= (_zz_result_payload_x_61 ? _zz__zz_result_payload_x_26 : _zz__zz_result_payload_x_26_1);
    end
    _zz_result_payload_x_37 <= _zz_result_payload_x_36;
    if(_zz_result_valid_3) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_64 ? _zz__zz_result_payload_x_4 : _zz__zz_result_payload_x_4_1);
        end
        2'b10 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_64 ? _zz__zz_result_payload_x_4_2 : _zz__zz_result_payload_x_4_3);
        end
        default : begin
          _zz_result_payload_x_4 <= _zz_result_payload_x_3;
        end
      endcase
      _zz_result_payload_x_16 <= (_zz_result_payload_x_64 ? _zz__zz_result_payload_x_16 : _zz__zz_result_payload_x_16_1);
      _zz_result_payload_x_27 <= (_zz_result_payload_x_64 ? _zz__zz_result_payload_x_27 : _zz__zz_result_payload_x_27_1);
    end
    _zz_result_payload_x_38 <= _zz_result_payload_x_37;
    if(_zz_result_valid_4) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_67 ? _zz__zz_result_payload_x_5 : _zz__zz_result_payload_x_5_1);
        end
        2'b10 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_67 ? _zz__zz_result_payload_x_5_2 : _zz__zz_result_payload_x_5_3);
        end
        default : begin
          _zz_result_payload_x_5 <= _zz_result_payload_x_4;
        end
      endcase
      _zz_result_payload_x_17 <= (_zz_result_payload_x_67 ? _zz__zz_result_payload_x_17 : _zz__zz_result_payload_x_17_1);
      _zz_result_payload_x_28 <= (_zz_result_payload_x_67 ? _zz__zz_result_payload_x_28 : _zz__zz_result_payload_x_28_1);
    end
    _zz_result_payload_x_39 <= _zz_result_payload_x_38;
    if(_zz_result_valid_5) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_70 ? _zz__zz_result_payload_x_6 : _zz__zz_result_payload_x_6_1);
        end
        2'b10 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_70 ? _zz__zz_result_payload_x_6_2 : _zz__zz_result_payload_x_6_3);
        end
        default : begin
          _zz_result_payload_x_6 <= _zz_result_payload_x_5;
        end
      endcase
      _zz_result_payload_x_18 <= (_zz_result_payload_x_70 ? _zz__zz_result_payload_x_18 : _zz__zz_result_payload_x_18_1);
      _zz_result_payload_x_29 <= (_zz_result_payload_x_70 ? _zz__zz_result_payload_x_29 : _zz__zz_result_payload_x_29_1);
    end
    _zz_result_payload_x_40 <= _zz_result_payload_x_39;
    if(_zz_result_valid_6) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_73 ? _zz__zz_result_payload_x_7 : _zz__zz_result_payload_x_7_1);
        end
        2'b10 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_73 ? _zz__zz_result_payload_x_7_2 : _zz__zz_result_payload_x_7_3);
        end
        default : begin
          _zz_result_payload_x_7 <= _zz_result_payload_x_6;
        end
      endcase
      _zz_result_payload_x_19 <= (_zz_result_payload_x_73 ? _zz__zz_result_payload_x_19 : _zz__zz_result_payload_x_19_1);
      _zz_result_payload_x_30 <= (_zz_result_payload_x_73 ? _zz__zz_result_payload_x_30 : _zz__zz_result_payload_x_30_1);
    end
    _zz_result_payload_x_41 <= _zz_result_payload_x_40;
    if(_zz_result_valid_7) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_8 : _zz__zz_result_payload_x_8_1);
        end
        2'b10 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_8_2 : _zz__zz_result_payload_x_8_3);
        end
        default : begin
          _zz_result_payload_x_8 <= _zz_result_payload_x_7;
        end
      endcase
      _zz_result_payload_x_20 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_20 : _zz__zz_result_payload_x_20_1);
      _zz_result_payload_x_31 <= (_zz_result_payload_x_76 ? _zz__zz_result_payload_x_31 : _zz__zz_result_payload_x_31_1);
    end
    _zz_result_payload_x_42 <= _zz_result_payload_x_41;
    if(_zz_result_valid_8) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_9 : _zz__zz_result_payload_x_9_1);
        end
        2'b10 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_9_2 : _zz__zz_result_payload_x_9_3);
        end
        default : begin
          _zz_result_payload_x_9 <= _zz_result_payload_x_8;
        end
      endcase
      _zz_result_payload_x_21 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_21 : _zz__zz_result_payload_x_21_1);
      _zz_result_payload_x_32 <= (_zz_result_payload_x_79 ? _zz__zz_result_payload_x_32 : _zz__zz_result_payload_x_32_1);
    end
    _zz_result_payload_x_43 <= _zz_result_payload_x_42;
    if(_zz_result_valid_9) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_10 : _zz__zz_result_payload_x_10_1);
        end
        2'b10 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_10_2 : _zz__zz_result_payload_x_10_3);
        end
        default : begin
          _zz_result_payload_x_10 <= _zz_result_payload_x_9;
        end
      endcase
      _zz_result_payload_x_22 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_22 : _zz__zz_result_payload_x_22_1);
      _zz_result_payload_x_33 <= (_zz_result_payload_x_82 ? _zz__zz_result_payload_x_33 : _zz__zz_result_payload_x_33_1);
    end
    _zz_result_payload_x_44 <= _zz_result_payload_x_43;
    if(_zz_result_valid_10) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_x_11 : _zz__zz_result_payload_x_11_1);
        end
        2'b10 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_x_11_2 : _zz__zz_result_payload_x_11_3);
        end
        default : begin
          _zz_result_payload_x_11 <= _zz_result_payload_x_10;
        end
      endcase
      _zz_result_payload_y <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_y : _zz__zz_result_payload_y_1);
      _zz_result_payload_z <= (_zz_result_payload_x_85 ? _zz__zz_result_payload_z : _zz__zz_result_payload_z_1);
    end
  end


endmodule

module AutoCorrelator (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              corr_result_valid,
  output     [27:0]   corr_result_payload_cha_i,
  output     [27:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);

  wire                shiftRegister_11_clc;
  wire                shiftRegister_11_output_valid;
  wire       [11:0]   shiftRegister_11_output_payload_cha_i;
  wire       [11:0]   shiftRegister_11_output_payload_cha_q;
  wire                corr_core_corr_result_valid;
  wire       [27:0]   corr_core_corr_result_payload_cha_i;
  wire       [27:0]   corr_core_corr_result_payload_cha_q;

  ShiftRegister_4 shiftRegister_11 (
    .input_valid             (raw_data_valid                               ), //i
    .input_payload_cha_i     (raw_data_payload_cha_i[11:0]                 ), //i
    .input_payload_cha_q     (raw_data_payload_cha_q[11:0]                 ), //i
    .output_valid            (shiftRegister_11_output_valid                ), //o
    .output_payload_cha_i    (shiftRegister_11_output_payload_cha_i[11:0]  ), //o
    .output_payload_cha_q    (shiftRegister_11_output_payload_cha_q[11:0]  ), //o
    .enable                  (raw_data_valid                               ), //i
    .clc                     (shiftRegister_11_clc                         ), //i
    .clk                     (clk                                          ), //i
    .reset                   (reset                                        )  //i
  );
  Correlator corr_core (
    .raw_data_0_valid             (raw_data_valid                               ), //i
    .raw_data_0_payload_cha_i     (raw_data_payload_cha_i[11:0]                 ), //i
    .raw_data_0_payload_cha_q     (raw_data_payload_cha_q[11:0]                 ), //i
    .raw_data_1_valid             (shiftRegister_11_output_valid                ), //i
    .raw_data_1_payload_cha_i     (shiftRegister_11_output_payload_cha_i[11:0]  ), //i
    .raw_data_1_payload_cha_q     (shiftRegister_11_output_payload_cha_q[11:0]  ), //i
    .corr_result_valid            (corr_core_corr_result_valid                  ), //o
    .corr_result_payload_cha_i    (corr_core_corr_result_payload_cha_i[27:0]    ), //o
    .corr_result_payload_cha_q    (corr_core_corr_result_payload_cha_q[27:0]    ), //o
    .clk                          (clk                                          ), //i
    .reset                        (reset                                        )  //i
  );
  assign shiftRegister_11_clc = (! raw_data_valid);
  assign corr_result_valid = corr_core_corr_result_valid;
  assign corr_result_payload_cha_i = corr_core_corr_result_payload_cha_i;
  assign corr_result_payload_cha_q = corr_core_corr_result_payload_cha_q;

endmodule

module Correlator_1 (
  input               raw_data_0_valid,
  input      [11:0]   raw_data_0_payload_cha_i,
  input      [11:0]   raw_data_0_payload_cha_q,
  input               raw_data_1_valid,
  input      [11:0]   raw_data_1_payload_cha_i,
  input      [11:0]   raw_data_1_payload_cha_q,
  output              corr_result_valid,
  output     [35:0]   corr_result_payload_cha_i,
  output     [35:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);

  wire       [23:0]   shiftRegister_11_output_1;
  wire       [23:0]   shiftRegister_12_output_1;
  wire       [23:0]   _zz__zz_corr_val_i;
  wire       [23:0]   _zz__zz_corr_val_i_1;
  wire       [23:0]   _zz__zz_corr_val_q;
  wire       [23:0]   _zz__zz_corr_val_q_1;
  wire       [35:0]   _zz_corr_val_i_1;
  wire       [35:0]   _zz_corr_val_i_2;
  wire       [35:0]   _zz_corr_val_i_3;
  wire       [35:0]   _zz_corr_val_q_1;
  wire       [35:0]   _zz_corr_val_q_2;
  wire       [35:0]   _zz_corr_val_q_3;
  reg        [35:0]   corr_val_i;
  reg        [35:0]   corr_val_q;
  reg        [23:0]   _zz_corr_val_i;
  reg        [23:0]   _zz_corr_val_q;
  reg                 _zz_enable;
  reg                 _zz_corr_result_valid;

  assign _zz__zz_corr_val_i = ($signed(raw_data_0_payload_cha_i) * $signed(raw_data_1_payload_cha_i));
  assign _zz__zz_corr_val_i_1 = ($signed(raw_data_0_payload_cha_q) * $signed(raw_data_1_payload_cha_q));
  assign _zz__zz_corr_val_q = ($signed(raw_data_0_payload_cha_q) * $signed(raw_data_1_payload_cha_i));
  assign _zz__zz_corr_val_q_1 = ($signed(raw_data_0_payload_cha_i) * $signed(raw_data_1_payload_cha_q));
  assign _zz_corr_val_i_1 = ($signed(corr_val_i) - $signed(_zz_corr_val_i_2));
  assign _zz_corr_val_i_2 = {{12{shiftRegister_11_output_1[23]}}, shiftRegister_11_output_1};
  assign _zz_corr_val_i_3 = {{12{_zz_corr_val_i[23]}}, _zz_corr_val_i};
  assign _zz_corr_val_q_1 = ($signed(corr_val_q) - $signed(_zz_corr_val_q_2));
  assign _zz_corr_val_q_2 = {{12{shiftRegister_12_output_1[23]}}, shiftRegister_12_output_1};
  assign _zz_corr_val_q_3 = {{12{_zz_corr_val_q[23]}}, _zz_corr_val_q};
  ShiftRegister_2 shiftRegister_11 (
    .input_1     (_zz_corr_val_i[23:0]             ), //i
    .output_1    (shiftRegister_11_output_1[23:0]  ), //o
    .enable      (_zz_enable                       ), //i
    .clk         (clk                              ), //i
    .reset       (reset                            )  //i
  );
  ShiftRegister_2 shiftRegister_12 (
    .input_1     (_zz_corr_val_q[23:0]             ), //i
    .output_1    (shiftRegister_12_output_1[23:0]  ), //o
    .enable      (_zz_enable                       ), //i
    .clk         (clk                              ), //i
    .reset       (reset                            )  //i
  );
  assign corr_result_payload_cha_i = corr_val_i;
  assign corr_result_payload_cha_q = corr_val_q;
  assign corr_result_valid = _zz_corr_result_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      corr_val_i <= 36'h0;
      corr_val_q <= 36'h0;
      _zz_corr_val_i <= 24'h0;
      _zz_corr_val_q <= 24'h0;
      _zz_enable <= 1'b0;
      _zz_corr_result_valid <= 1'b0;
    end else begin
      _zz_corr_val_i <= ($signed(_zz__zz_corr_val_i) + $signed(_zz__zz_corr_val_i_1));
      _zz_corr_val_q <= ($signed(_zz__zz_corr_val_q) - $signed(_zz__zz_corr_val_q_1));
      _zz_enable <= (raw_data_0_valid && raw_data_1_valid);
      if(_zz_enable) begin
        _zz_corr_result_valid <= 1'b1;
        corr_val_i <= ($signed(_zz_corr_val_i_1) + $signed(_zz_corr_val_i_3));
        corr_val_q <= ($signed(_zz_corr_val_q_1) + $signed(_zz_corr_val_q_3));
      end else begin
        _zz_corr_result_valid <= 1'b0;
      end
    end
  end


endmodule

module ShiftRegister_7 (
  input               input_valid,
  input      [11:0]   input_payload_cha_i,
  input      [11:0]   input_payload_cha_q,
  output              output_valid,
  output     [11:0]   output_payload_cha_i,
  output     [11:0]   output_payload_cha_q,
  input               enable,
  input               clk,
  input               reset
);

  reg                 shift_reg_0_valid;
  reg        [11:0]   shift_reg_0_payload_cha_i;
  reg        [11:0]   shift_reg_0_payload_cha_q;
  reg                 shift_reg_1_valid;
  reg        [11:0]   shift_reg_1_payload_cha_i;
  reg        [11:0]   shift_reg_1_payload_cha_q;
  reg                 shift_reg_2_valid;
  reg        [11:0]   shift_reg_2_payload_cha_i;
  reg        [11:0]   shift_reg_2_payload_cha_q;
  reg                 shift_reg_3_valid;
  reg        [11:0]   shift_reg_3_payload_cha_i;
  reg        [11:0]   shift_reg_3_payload_cha_q;
  reg                 shift_reg_4_valid;
  reg        [11:0]   shift_reg_4_payload_cha_i;
  reg        [11:0]   shift_reg_4_payload_cha_q;
  reg                 shift_reg_5_valid;
  reg        [11:0]   shift_reg_5_payload_cha_i;
  reg        [11:0]   shift_reg_5_payload_cha_q;
  reg                 shift_reg_6_valid;
  reg        [11:0]   shift_reg_6_payload_cha_i;
  reg        [11:0]   shift_reg_6_payload_cha_q;
  reg                 shift_reg_7_valid;
  reg        [11:0]   shift_reg_7_payload_cha_i;
  reg        [11:0]   shift_reg_7_payload_cha_q;
  reg                 shift_reg_8_valid;
  reg        [11:0]   shift_reg_8_payload_cha_i;
  reg        [11:0]   shift_reg_8_payload_cha_q;
  reg                 shift_reg_9_valid;
  reg        [11:0]   shift_reg_9_payload_cha_i;
  reg        [11:0]   shift_reg_9_payload_cha_q;
  reg                 shift_reg_10_valid;
  reg        [11:0]   shift_reg_10_payload_cha_i;
  reg        [11:0]   shift_reg_10_payload_cha_q;
  reg                 shift_reg_11_valid;
  reg        [11:0]   shift_reg_11_payload_cha_i;
  reg        [11:0]   shift_reg_11_payload_cha_q;
  reg                 shift_reg_12_valid;
  reg        [11:0]   shift_reg_12_payload_cha_i;
  reg        [11:0]   shift_reg_12_payload_cha_q;
  reg                 shift_reg_13_valid;
  reg        [11:0]   shift_reg_13_payload_cha_i;
  reg        [11:0]   shift_reg_13_payload_cha_q;
  reg                 shift_reg_14_valid;
  reg        [11:0]   shift_reg_14_payload_cha_i;
  reg        [11:0]   shift_reg_14_payload_cha_q;
  reg                 shift_reg_15_valid;
  reg        [11:0]   shift_reg_15_payload_cha_i;
  reg        [11:0]   shift_reg_15_payload_cha_q;

  assign output_valid = shift_reg_15_valid;
  assign output_payload_cha_i = shift_reg_15_payload_cha_i;
  assign output_payload_cha_q = shift_reg_15_payload_cha_q;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0_valid <= 1'b0;
      shift_reg_0_payload_cha_i <= 12'h0;
      shift_reg_0_payload_cha_q <= 12'h0;
      shift_reg_1_valid <= 1'b0;
      shift_reg_1_payload_cha_i <= 12'h0;
      shift_reg_1_payload_cha_q <= 12'h0;
      shift_reg_2_valid <= 1'b0;
      shift_reg_2_payload_cha_i <= 12'h0;
      shift_reg_2_payload_cha_q <= 12'h0;
      shift_reg_3_valid <= 1'b0;
      shift_reg_3_payload_cha_i <= 12'h0;
      shift_reg_3_payload_cha_q <= 12'h0;
      shift_reg_4_valid <= 1'b0;
      shift_reg_4_payload_cha_i <= 12'h0;
      shift_reg_4_payload_cha_q <= 12'h0;
      shift_reg_5_valid <= 1'b0;
      shift_reg_5_payload_cha_i <= 12'h0;
      shift_reg_5_payload_cha_q <= 12'h0;
      shift_reg_6_valid <= 1'b0;
      shift_reg_6_payload_cha_i <= 12'h0;
      shift_reg_6_payload_cha_q <= 12'h0;
      shift_reg_7_valid <= 1'b0;
      shift_reg_7_payload_cha_i <= 12'h0;
      shift_reg_7_payload_cha_q <= 12'h0;
      shift_reg_8_valid <= 1'b0;
      shift_reg_8_payload_cha_i <= 12'h0;
      shift_reg_8_payload_cha_q <= 12'h0;
      shift_reg_9_valid <= 1'b0;
      shift_reg_9_payload_cha_i <= 12'h0;
      shift_reg_9_payload_cha_q <= 12'h0;
      shift_reg_10_valid <= 1'b0;
      shift_reg_10_payload_cha_i <= 12'h0;
      shift_reg_10_payload_cha_q <= 12'h0;
      shift_reg_11_valid <= 1'b0;
      shift_reg_11_payload_cha_i <= 12'h0;
      shift_reg_11_payload_cha_q <= 12'h0;
      shift_reg_12_valid <= 1'b0;
      shift_reg_12_payload_cha_i <= 12'h0;
      shift_reg_12_payload_cha_q <= 12'h0;
      shift_reg_13_valid <= 1'b0;
      shift_reg_13_payload_cha_i <= 12'h0;
      shift_reg_13_payload_cha_q <= 12'h0;
      shift_reg_14_valid <= 1'b0;
      shift_reg_14_payload_cha_i <= 12'h0;
      shift_reg_14_payload_cha_q <= 12'h0;
      shift_reg_15_valid <= 1'b0;
      shift_reg_15_payload_cha_i <= 12'h0;
      shift_reg_15_payload_cha_q <= 12'h0;
    end else begin
      if(enable) begin
        shift_reg_0_valid <= input_valid;
        shift_reg_0_payload_cha_i <= input_payload_cha_i;
        shift_reg_0_payload_cha_q <= input_payload_cha_q;
        shift_reg_1_valid <= shift_reg_0_valid;
        shift_reg_1_payload_cha_i <= shift_reg_0_payload_cha_i;
        shift_reg_1_payload_cha_q <= shift_reg_0_payload_cha_q;
        shift_reg_2_valid <= shift_reg_1_valid;
        shift_reg_2_payload_cha_i <= shift_reg_1_payload_cha_i;
        shift_reg_2_payload_cha_q <= shift_reg_1_payload_cha_q;
        shift_reg_3_valid <= shift_reg_2_valid;
        shift_reg_3_payload_cha_i <= shift_reg_2_payload_cha_i;
        shift_reg_3_payload_cha_q <= shift_reg_2_payload_cha_q;
        shift_reg_4_valid <= shift_reg_3_valid;
        shift_reg_4_payload_cha_i <= shift_reg_3_payload_cha_i;
        shift_reg_4_payload_cha_q <= shift_reg_3_payload_cha_q;
        shift_reg_5_valid <= shift_reg_4_valid;
        shift_reg_5_payload_cha_i <= shift_reg_4_payload_cha_i;
        shift_reg_5_payload_cha_q <= shift_reg_4_payload_cha_q;
        shift_reg_6_valid <= shift_reg_5_valid;
        shift_reg_6_payload_cha_i <= shift_reg_5_payload_cha_i;
        shift_reg_6_payload_cha_q <= shift_reg_5_payload_cha_q;
        shift_reg_7_valid <= shift_reg_6_valid;
        shift_reg_7_payload_cha_i <= shift_reg_6_payload_cha_i;
        shift_reg_7_payload_cha_q <= shift_reg_6_payload_cha_q;
        shift_reg_8_valid <= shift_reg_7_valid;
        shift_reg_8_payload_cha_i <= shift_reg_7_payload_cha_i;
        shift_reg_8_payload_cha_q <= shift_reg_7_payload_cha_q;
        shift_reg_9_valid <= shift_reg_8_valid;
        shift_reg_9_payload_cha_i <= shift_reg_8_payload_cha_i;
        shift_reg_9_payload_cha_q <= shift_reg_8_payload_cha_q;
        shift_reg_10_valid <= shift_reg_9_valid;
        shift_reg_10_payload_cha_i <= shift_reg_9_payload_cha_i;
        shift_reg_10_payload_cha_q <= shift_reg_9_payload_cha_q;
        shift_reg_11_valid <= shift_reg_10_valid;
        shift_reg_11_payload_cha_i <= shift_reg_10_payload_cha_i;
        shift_reg_11_payload_cha_q <= shift_reg_10_payload_cha_q;
        shift_reg_12_valid <= shift_reg_11_valid;
        shift_reg_12_payload_cha_i <= shift_reg_11_payload_cha_i;
        shift_reg_12_payload_cha_q <= shift_reg_11_payload_cha_q;
        shift_reg_13_valid <= shift_reg_12_valid;
        shift_reg_13_payload_cha_i <= shift_reg_12_payload_cha_i;
        shift_reg_13_payload_cha_q <= shift_reg_12_payload_cha_q;
        shift_reg_14_valid <= shift_reg_13_valid;
        shift_reg_14_payload_cha_i <= shift_reg_13_payload_cha_i;
        shift_reg_14_payload_cha_q <= shift_reg_13_payload_cha_q;
        shift_reg_15_valid <= shift_reg_14_valid;
        shift_reg_15_payload_cha_i <= shift_reg_14_payload_cha_i;
        shift_reg_15_payload_cha_q <= shift_reg_14_payload_cha_q;
      end
    end
  end


endmodule

//ShiftRegister_5 replaced by ShiftRegister_5

module ShiftRegister_5 (
  input      [19:0]   input_1,
  output     [19:0]   output_1,
  input               enable,
  input               clk,
  input               reset
);

  reg        [19:0]   shift_reg_0;
  reg        [19:0]   shift_reg_1;
  reg        [19:0]   shift_reg_2;
  reg        [19:0]   shift_reg_3;
  reg        [19:0]   shift_reg_4;
  reg        [19:0]   shift_reg_5;
  reg        [19:0]   shift_reg_6;
  reg        [19:0]   shift_reg_7;
  reg        [19:0]   shift_reg_8;
  reg        [19:0]   shift_reg_9;
  reg        [19:0]   shift_reg_10;
  reg        [19:0]   shift_reg_11;
  reg        [19:0]   shift_reg_12;
  reg        [19:0]   shift_reg_13;
  reg        [19:0]   shift_reg_14;
  reg        [19:0]   shift_reg_15;

  assign output_1 = shift_reg_15;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 20'h0;
      shift_reg_1 <= 20'h0;
      shift_reg_2 <= 20'h0;
      shift_reg_3 <= 20'h0;
      shift_reg_4 <= 20'h0;
      shift_reg_5 <= 20'h0;
      shift_reg_6 <= 20'h0;
      shift_reg_7 <= 20'h0;
      shift_reg_8 <= 20'h0;
      shift_reg_9 <= 20'h0;
      shift_reg_10 <= 20'h0;
      shift_reg_11 <= 20'h0;
      shift_reg_12 <= 20'h0;
      shift_reg_13 <= 20'h0;
      shift_reg_14 <= 20'h0;
      shift_reg_15 <= 20'h0;
    end else begin
      if(enable) begin
        shift_reg_0 <= input_1;
        shift_reg_1 <= shift_reg_0;
        shift_reg_2 <= shift_reg_1;
        shift_reg_3 <= shift_reg_2;
        shift_reg_4 <= shift_reg_3;
        shift_reg_5 <= shift_reg_4;
        shift_reg_6 <= shift_reg_5;
        shift_reg_7 <= shift_reg_6;
        shift_reg_8 <= shift_reg_7;
        shift_reg_9 <= shift_reg_8;
        shift_reg_10 <= shift_reg_9;
        shift_reg_11 <= shift_reg_10;
        shift_reg_12 <= shift_reg_11;
        shift_reg_13 <= shift_reg_12;
        shift_reg_14 <= shift_reg_13;
        shift_reg_15 <= shift_reg_14;
      end
    end
  end


endmodule

module Correlator (
  input               raw_data_0_valid,
  input      [11:0]   raw_data_0_payload_cha_i,
  input      [11:0]   raw_data_0_payload_cha_q,
  input               raw_data_1_valid,
  input      [11:0]   raw_data_1_payload_cha_i,
  input      [11:0]   raw_data_1_payload_cha_q,
  output              corr_result_valid,
  output     [27:0]   corr_result_payload_cha_i,
  output     [27:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);

  wire                shiftRegister_11_clc;
  wire                shiftRegister_12_clc;
  wire       [23:0]   shiftRegister_11_output_1;
  wire       [23:0]   shiftRegister_12_output_1;
  wire       [23:0]   _zz__zz_corr_val_i;
  wire       [23:0]   _zz__zz_corr_val_i_1;
  wire       [23:0]   _zz__zz_corr_val_q;
  wire       [23:0]   _zz__zz_corr_val_q_1;
  wire       [27:0]   _zz_corr_val_i_1;
  wire       [27:0]   _zz_corr_val_i_2;
  wire       [27:0]   _zz_corr_val_i_3;
  wire       [27:0]   _zz_corr_val_q_1;
  wire       [27:0]   _zz_corr_val_q_2;
  wire       [27:0]   _zz_corr_val_q_3;
  reg        [27:0]   corr_val_i;
  reg        [27:0]   corr_val_q;
  reg        [23:0]   _zz_corr_val_i;
  reg        [23:0]   _zz_corr_val_q;
  reg                 _zz_enable;
  reg                 _zz_corr_result_valid;

  assign _zz__zz_corr_val_i = ($signed(raw_data_0_payload_cha_i) * $signed(raw_data_1_payload_cha_i));
  assign _zz__zz_corr_val_i_1 = ($signed(raw_data_0_payload_cha_q) * $signed(raw_data_1_payload_cha_q));
  assign _zz__zz_corr_val_q = ($signed(raw_data_0_payload_cha_q) * $signed(raw_data_1_payload_cha_i));
  assign _zz__zz_corr_val_q_1 = ($signed(raw_data_0_payload_cha_i) * $signed(raw_data_1_payload_cha_q));
  assign _zz_corr_val_i_1 = ($signed(corr_val_i) - $signed(_zz_corr_val_i_2));
  assign _zz_corr_val_i_2 = {{4{shiftRegister_11_output_1[23]}}, shiftRegister_11_output_1};
  assign _zz_corr_val_i_3 = {{4{_zz_corr_val_i[23]}}, _zz_corr_val_i};
  assign _zz_corr_val_q_1 = ($signed(corr_val_q) - $signed(_zz_corr_val_q_2));
  assign _zz_corr_val_q_2 = {{4{shiftRegister_12_output_1[23]}}, shiftRegister_12_output_1};
  assign _zz_corr_val_q_3 = {{4{_zz_corr_val_q[23]}}, _zz_corr_val_q};
  ShiftRegister shiftRegister_11 (
    .input_1     (_zz_corr_val_i[23:0]             ), //i
    .output_1    (shiftRegister_11_output_1[23:0]  ), //o
    .enable      (_zz_enable                       ), //i
    .clc         (shiftRegister_11_clc             ), //i
    .clk         (clk                              ), //i
    .reset       (reset                            )  //i
  );
  ShiftRegister shiftRegister_12 (
    .input_1     (_zz_corr_val_q[23:0]             ), //i
    .output_1    (shiftRegister_12_output_1[23:0]  ), //o
    .enable      (_zz_enable                       ), //i
    .clc         (shiftRegister_12_clc             ), //i
    .clk         (clk                              ), //i
    .reset       (reset                            )  //i
  );
  assign shiftRegister_11_clc = (! _zz_enable);
  assign shiftRegister_12_clc = (! _zz_enable);
  assign corr_result_payload_cha_i = corr_val_i;
  assign corr_result_payload_cha_q = corr_val_q;
  assign corr_result_valid = _zz_corr_result_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      corr_val_i <= 28'h0;
      corr_val_q <= 28'h0;
      _zz_corr_val_i <= 24'h0;
      _zz_corr_val_q <= 24'h0;
      _zz_enable <= 1'b0;
      _zz_corr_result_valid <= 1'b0;
    end else begin
      _zz_corr_val_i <= ($signed(_zz__zz_corr_val_i) + $signed(_zz__zz_corr_val_i_1));
      _zz_corr_val_q <= ($signed(_zz__zz_corr_val_q) - $signed(_zz__zz_corr_val_q_1));
      _zz_enable <= (raw_data_0_valid && raw_data_1_valid);
      if(_zz_enable) begin
        _zz_corr_result_valid <= 1'b1;
        corr_val_i <= ($signed(_zz_corr_val_i_1) + $signed(_zz_corr_val_i_3));
        corr_val_q <= ($signed(_zz_corr_val_q_1) + $signed(_zz_corr_val_q_3));
      end else begin
        _zz_corr_result_valid <= 1'b0;
        corr_val_i <= 28'h0;
        corr_val_q <= 28'h0;
      end
    end
  end


endmodule

module ShiftRegister_4 (
  input               input_valid,
  input      [11:0]   input_payload_cha_i,
  input      [11:0]   input_payload_cha_q,
  output              output_valid,
  output     [11:0]   output_payload_cha_i,
  output     [11:0]   output_payload_cha_q,
  input               enable,
  input               clc,
  input               clk,
  input               reset
);

  reg                 shift_reg_0_valid;
  reg        [11:0]   shift_reg_0_payload_cha_i;
  reg        [11:0]   shift_reg_0_payload_cha_q;
  reg                 shift_reg_1_valid;
  reg        [11:0]   shift_reg_1_payload_cha_i;
  reg        [11:0]   shift_reg_1_payload_cha_q;
  reg                 shift_reg_2_valid;
  reg        [11:0]   shift_reg_2_payload_cha_i;
  reg        [11:0]   shift_reg_2_payload_cha_q;
  reg                 shift_reg_3_valid;
  reg        [11:0]   shift_reg_3_payload_cha_i;
  reg        [11:0]   shift_reg_3_payload_cha_q;
  reg                 shift_reg_4_valid;
  reg        [11:0]   shift_reg_4_payload_cha_i;
  reg        [11:0]   shift_reg_4_payload_cha_q;
  reg                 shift_reg_5_valid;
  reg        [11:0]   shift_reg_5_payload_cha_i;
  reg        [11:0]   shift_reg_5_payload_cha_q;
  reg                 shift_reg_6_valid;
  reg        [11:0]   shift_reg_6_payload_cha_i;
  reg        [11:0]   shift_reg_6_payload_cha_q;
  reg                 shift_reg_7_valid;
  reg        [11:0]   shift_reg_7_payload_cha_i;
  reg        [11:0]   shift_reg_7_payload_cha_q;
  reg                 shift_reg_8_valid;
  reg        [11:0]   shift_reg_8_payload_cha_i;
  reg        [11:0]   shift_reg_8_payload_cha_q;
  reg                 shift_reg_9_valid;
  reg        [11:0]   shift_reg_9_payload_cha_i;
  reg        [11:0]   shift_reg_9_payload_cha_q;
  reg                 shift_reg_10_valid;
  reg        [11:0]   shift_reg_10_payload_cha_i;
  reg        [11:0]   shift_reg_10_payload_cha_q;
  reg                 shift_reg_11_valid;
  reg        [11:0]   shift_reg_11_payload_cha_i;
  reg        [11:0]   shift_reg_11_payload_cha_q;
  reg                 shift_reg_12_valid;
  reg        [11:0]   shift_reg_12_payload_cha_i;
  reg        [11:0]   shift_reg_12_payload_cha_q;
  reg                 shift_reg_13_valid;
  reg        [11:0]   shift_reg_13_payload_cha_i;
  reg        [11:0]   shift_reg_13_payload_cha_q;
  reg                 shift_reg_14_valid;
  reg        [11:0]   shift_reg_14_payload_cha_i;
  reg        [11:0]   shift_reg_14_payload_cha_q;
  reg                 shift_reg_15_valid;
  reg        [11:0]   shift_reg_15_payload_cha_i;
  reg        [11:0]   shift_reg_15_payload_cha_q;

  assign output_valid = shift_reg_15_valid;
  assign output_payload_cha_i = shift_reg_15_payload_cha_i;
  assign output_payload_cha_q = shift_reg_15_payload_cha_q;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0_valid <= 1'b0;
      shift_reg_0_payload_cha_i <= 12'h0;
      shift_reg_0_payload_cha_q <= 12'h0;
      shift_reg_1_valid <= 1'b0;
      shift_reg_1_payload_cha_i <= 12'h0;
      shift_reg_1_payload_cha_q <= 12'h0;
      shift_reg_2_valid <= 1'b0;
      shift_reg_2_payload_cha_i <= 12'h0;
      shift_reg_2_payload_cha_q <= 12'h0;
      shift_reg_3_valid <= 1'b0;
      shift_reg_3_payload_cha_i <= 12'h0;
      shift_reg_3_payload_cha_q <= 12'h0;
      shift_reg_4_valid <= 1'b0;
      shift_reg_4_payload_cha_i <= 12'h0;
      shift_reg_4_payload_cha_q <= 12'h0;
      shift_reg_5_valid <= 1'b0;
      shift_reg_5_payload_cha_i <= 12'h0;
      shift_reg_5_payload_cha_q <= 12'h0;
      shift_reg_6_valid <= 1'b0;
      shift_reg_6_payload_cha_i <= 12'h0;
      shift_reg_6_payload_cha_q <= 12'h0;
      shift_reg_7_valid <= 1'b0;
      shift_reg_7_payload_cha_i <= 12'h0;
      shift_reg_7_payload_cha_q <= 12'h0;
      shift_reg_8_valid <= 1'b0;
      shift_reg_8_payload_cha_i <= 12'h0;
      shift_reg_8_payload_cha_q <= 12'h0;
      shift_reg_9_valid <= 1'b0;
      shift_reg_9_payload_cha_i <= 12'h0;
      shift_reg_9_payload_cha_q <= 12'h0;
      shift_reg_10_valid <= 1'b0;
      shift_reg_10_payload_cha_i <= 12'h0;
      shift_reg_10_payload_cha_q <= 12'h0;
      shift_reg_11_valid <= 1'b0;
      shift_reg_11_payload_cha_i <= 12'h0;
      shift_reg_11_payload_cha_q <= 12'h0;
      shift_reg_12_valid <= 1'b0;
      shift_reg_12_payload_cha_i <= 12'h0;
      shift_reg_12_payload_cha_q <= 12'h0;
      shift_reg_13_valid <= 1'b0;
      shift_reg_13_payload_cha_i <= 12'h0;
      shift_reg_13_payload_cha_q <= 12'h0;
      shift_reg_14_valid <= 1'b0;
      shift_reg_14_payload_cha_i <= 12'h0;
      shift_reg_14_payload_cha_q <= 12'h0;
      shift_reg_15_valid <= 1'b0;
      shift_reg_15_payload_cha_i <= 12'h0;
      shift_reg_15_payload_cha_q <= 12'h0;
    end else begin
      if(clc) begin
        shift_reg_0_valid <= 1'b0;
        shift_reg_0_payload_cha_i <= 12'h0;
        shift_reg_0_payload_cha_q <= 12'h0;
        shift_reg_1_valid <= 1'b0;
        shift_reg_1_payload_cha_i <= 12'h0;
        shift_reg_1_payload_cha_q <= 12'h0;
        shift_reg_2_valid <= 1'b0;
        shift_reg_2_payload_cha_i <= 12'h0;
        shift_reg_2_payload_cha_q <= 12'h0;
        shift_reg_3_valid <= 1'b0;
        shift_reg_3_payload_cha_i <= 12'h0;
        shift_reg_3_payload_cha_q <= 12'h0;
        shift_reg_4_valid <= 1'b0;
        shift_reg_4_payload_cha_i <= 12'h0;
        shift_reg_4_payload_cha_q <= 12'h0;
        shift_reg_5_valid <= 1'b0;
        shift_reg_5_payload_cha_i <= 12'h0;
        shift_reg_5_payload_cha_q <= 12'h0;
        shift_reg_6_valid <= 1'b0;
        shift_reg_6_payload_cha_i <= 12'h0;
        shift_reg_6_payload_cha_q <= 12'h0;
        shift_reg_7_valid <= 1'b0;
        shift_reg_7_payload_cha_i <= 12'h0;
        shift_reg_7_payload_cha_q <= 12'h0;
        shift_reg_8_valid <= 1'b0;
        shift_reg_8_payload_cha_i <= 12'h0;
        shift_reg_8_payload_cha_q <= 12'h0;
        shift_reg_9_valid <= 1'b0;
        shift_reg_9_payload_cha_i <= 12'h0;
        shift_reg_9_payload_cha_q <= 12'h0;
        shift_reg_10_valid <= 1'b0;
        shift_reg_10_payload_cha_i <= 12'h0;
        shift_reg_10_payload_cha_q <= 12'h0;
        shift_reg_11_valid <= 1'b0;
        shift_reg_11_payload_cha_i <= 12'h0;
        shift_reg_11_payload_cha_q <= 12'h0;
        shift_reg_12_valid <= 1'b0;
        shift_reg_12_payload_cha_i <= 12'h0;
        shift_reg_12_payload_cha_q <= 12'h0;
        shift_reg_13_valid <= 1'b0;
        shift_reg_13_payload_cha_i <= 12'h0;
        shift_reg_13_payload_cha_q <= 12'h0;
        shift_reg_14_valid <= 1'b0;
        shift_reg_14_payload_cha_i <= 12'h0;
        shift_reg_14_payload_cha_q <= 12'h0;
        shift_reg_15_valid <= 1'b0;
        shift_reg_15_payload_cha_i <= 12'h0;
        shift_reg_15_payload_cha_q <= 12'h0;
      end else begin
        if(enable) begin
          shift_reg_0_valid <= input_valid;
          shift_reg_0_payload_cha_i <= input_payload_cha_i;
          shift_reg_0_payload_cha_q <= input_payload_cha_q;
          shift_reg_1_valid <= shift_reg_0_valid;
          shift_reg_1_payload_cha_i <= shift_reg_0_payload_cha_i;
          shift_reg_1_payload_cha_q <= shift_reg_0_payload_cha_q;
          shift_reg_2_valid <= shift_reg_1_valid;
          shift_reg_2_payload_cha_i <= shift_reg_1_payload_cha_i;
          shift_reg_2_payload_cha_q <= shift_reg_1_payload_cha_q;
          shift_reg_3_valid <= shift_reg_2_valid;
          shift_reg_3_payload_cha_i <= shift_reg_2_payload_cha_i;
          shift_reg_3_payload_cha_q <= shift_reg_2_payload_cha_q;
          shift_reg_4_valid <= shift_reg_3_valid;
          shift_reg_4_payload_cha_i <= shift_reg_3_payload_cha_i;
          shift_reg_4_payload_cha_q <= shift_reg_3_payload_cha_q;
          shift_reg_5_valid <= shift_reg_4_valid;
          shift_reg_5_payload_cha_i <= shift_reg_4_payload_cha_i;
          shift_reg_5_payload_cha_q <= shift_reg_4_payload_cha_q;
          shift_reg_6_valid <= shift_reg_5_valid;
          shift_reg_6_payload_cha_i <= shift_reg_5_payload_cha_i;
          shift_reg_6_payload_cha_q <= shift_reg_5_payload_cha_q;
          shift_reg_7_valid <= shift_reg_6_valid;
          shift_reg_7_payload_cha_i <= shift_reg_6_payload_cha_i;
          shift_reg_7_payload_cha_q <= shift_reg_6_payload_cha_q;
          shift_reg_8_valid <= shift_reg_7_valid;
          shift_reg_8_payload_cha_i <= shift_reg_7_payload_cha_i;
          shift_reg_8_payload_cha_q <= shift_reg_7_payload_cha_q;
          shift_reg_9_valid <= shift_reg_8_valid;
          shift_reg_9_payload_cha_i <= shift_reg_8_payload_cha_i;
          shift_reg_9_payload_cha_q <= shift_reg_8_payload_cha_q;
          shift_reg_10_valid <= shift_reg_9_valid;
          shift_reg_10_payload_cha_i <= shift_reg_9_payload_cha_i;
          shift_reg_10_payload_cha_q <= shift_reg_9_payload_cha_q;
          shift_reg_11_valid <= shift_reg_10_valid;
          shift_reg_11_payload_cha_i <= shift_reg_10_payload_cha_i;
          shift_reg_11_payload_cha_q <= shift_reg_10_payload_cha_q;
          shift_reg_12_valid <= shift_reg_11_valid;
          shift_reg_12_payload_cha_i <= shift_reg_11_payload_cha_i;
          shift_reg_12_payload_cha_q <= shift_reg_11_payload_cha_q;
          shift_reg_13_valid <= shift_reg_12_valid;
          shift_reg_13_payload_cha_i <= shift_reg_12_payload_cha_i;
          shift_reg_13_payload_cha_q <= shift_reg_12_payload_cha_q;
          shift_reg_14_valid <= shift_reg_13_valid;
          shift_reg_14_payload_cha_i <= shift_reg_13_payload_cha_i;
          shift_reg_14_payload_cha_q <= shift_reg_13_payload_cha_q;
          shift_reg_15_valid <= shift_reg_14_valid;
          shift_reg_15_payload_cha_i <= shift_reg_14_payload_cha_i;
          shift_reg_15_payload_cha_q <= shift_reg_14_payload_cha_q;
        end
      end
    end
  end


endmodule

//ShiftRegister_2 replaced by ShiftRegister_2

module ShiftRegister_2 (
  input      [23:0]   input_1,
  output     [23:0]   output_1,
  input               enable,
  input               clk,
  input               reset
);

  reg        [23:0]   shift_reg_0;
  reg        [23:0]   shift_reg_1;
  reg        [23:0]   shift_reg_2;
  reg        [23:0]   shift_reg_3;
  reg        [23:0]   shift_reg_4;
  reg        [23:0]   shift_reg_5;
  reg        [23:0]   shift_reg_6;
  reg        [23:0]   shift_reg_7;
  reg        [23:0]   shift_reg_8;
  reg        [23:0]   shift_reg_9;
  reg        [23:0]   shift_reg_10;
  reg        [23:0]   shift_reg_11;
  reg        [23:0]   shift_reg_12;
  reg        [23:0]   shift_reg_13;
  reg        [23:0]   shift_reg_14;
  reg        [23:0]   shift_reg_15;

  assign output_1 = shift_reg_15;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 24'h0;
      shift_reg_1 <= 24'h0;
      shift_reg_2 <= 24'h0;
      shift_reg_3 <= 24'h0;
      shift_reg_4 <= 24'h0;
      shift_reg_5 <= 24'h0;
      shift_reg_6 <= 24'h0;
      shift_reg_7 <= 24'h0;
      shift_reg_8 <= 24'h0;
      shift_reg_9 <= 24'h0;
      shift_reg_10 <= 24'h0;
      shift_reg_11 <= 24'h0;
      shift_reg_12 <= 24'h0;
      shift_reg_13 <= 24'h0;
      shift_reg_14 <= 24'h0;
      shift_reg_15 <= 24'h0;
    end else begin
      if(enable) begin
        shift_reg_0 <= input_1;
        shift_reg_1 <= shift_reg_0;
        shift_reg_2 <= shift_reg_1;
        shift_reg_3 <= shift_reg_2;
        shift_reg_4 <= shift_reg_3;
        shift_reg_5 <= shift_reg_4;
        shift_reg_6 <= shift_reg_5;
        shift_reg_7 <= shift_reg_6;
        shift_reg_8 <= shift_reg_7;
        shift_reg_9 <= shift_reg_8;
        shift_reg_10 <= shift_reg_9;
        shift_reg_11 <= shift_reg_10;
        shift_reg_12 <= shift_reg_11;
        shift_reg_13 <= shift_reg_12;
        shift_reg_14 <= shift_reg_13;
        shift_reg_15 <= shift_reg_14;
      end
    end
  end


endmodule

//ShiftRegister replaced by ShiftRegister

module ShiftRegister (
  input      [23:0]   input_1,
  output     [23:0]   output_1,
  input               enable,
  input               clc,
  input               clk,
  input               reset
);

  reg        [23:0]   shift_reg_0;
  reg        [23:0]   shift_reg_1;
  reg        [23:0]   shift_reg_2;
  reg        [23:0]   shift_reg_3;
  reg        [23:0]   shift_reg_4;
  reg        [23:0]   shift_reg_5;
  reg        [23:0]   shift_reg_6;
  reg        [23:0]   shift_reg_7;
  reg        [23:0]   shift_reg_8;
  reg        [23:0]   shift_reg_9;
  reg        [23:0]   shift_reg_10;
  reg        [23:0]   shift_reg_11;
  reg        [23:0]   shift_reg_12;
  reg        [23:0]   shift_reg_13;
  reg        [23:0]   shift_reg_14;
  reg        [23:0]   shift_reg_15;

  assign output_1 = shift_reg_15;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 24'h0;
      shift_reg_1 <= 24'h0;
      shift_reg_2 <= 24'h0;
      shift_reg_3 <= 24'h0;
      shift_reg_4 <= 24'h0;
      shift_reg_5 <= 24'h0;
      shift_reg_6 <= 24'h0;
      shift_reg_7 <= 24'h0;
      shift_reg_8 <= 24'h0;
      shift_reg_9 <= 24'h0;
      shift_reg_10 <= 24'h0;
      shift_reg_11 <= 24'h0;
      shift_reg_12 <= 24'h0;
      shift_reg_13 <= 24'h0;
      shift_reg_14 <= 24'h0;
      shift_reg_15 <= 24'h0;
    end else begin
      if(clc) begin
        shift_reg_0 <= 24'h0;
        shift_reg_1 <= 24'h0;
        shift_reg_2 <= 24'h0;
        shift_reg_3 <= 24'h0;
        shift_reg_4 <= 24'h0;
        shift_reg_5 <= 24'h0;
        shift_reg_6 <= 24'h0;
        shift_reg_7 <= 24'h0;
        shift_reg_8 <= 24'h0;
        shift_reg_9 <= 24'h0;
        shift_reg_10 <= 24'h0;
        shift_reg_11 <= 24'h0;
        shift_reg_12 <= 24'h0;
        shift_reg_13 <= 24'h0;
        shift_reg_14 <= 24'h0;
        shift_reg_15 <= 24'h0;
      end else begin
        if(enable) begin
          shift_reg_0 <= input_1;
          shift_reg_1 <= shift_reg_0;
          shift_reg_2 <= shift_reg_1;
          shift_reg_3 <= shift_reg_2;
          shift_reg_4 <= shift_reg_3;
          shift_reg_5 <= shift_reg_4;
          shift_reg_6 <= shift_reg_5;
          shift_reg_7 <= shift_reg_6;
          shift_reg_8 <= shift_reg_7;
          shift_reg_9 <= shift_reg_8;
          shift_reg_10 <= shift_reg_9;
          shift_reg_11 <= shift_reg_10;
          shift_reg_12 <= shift_reg_11;
          shift_reg_13 <= shift_reg_12;
          shift_reg_14 <= shift_reg_13;
          shift_reg_15 <= shift_reg_14;
        end
      end
    end
  end


endmodule
