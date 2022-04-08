// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : LoopBackTest
// Git hash  : 7ce20c2ff4009332a2c96be9ddbfa13c6df00a2a

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
  output     [11:0]   result_data_payload_cha_i,
  output     [11:0]   result_data_payload_cha_q,
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
  wire       [11:0]   receiver_result_data_payload_cha_i;
  wire       [11:0]   receiver_result_data_payload_cha_q;
  wire       [6:0]    clkCrossing_9_dataOut;
  wire       [6:0]    clkCrossing_10_dataOut;
  wire                clkCrossing_11_dataOut;
  wire       [3:0]    clkCrossing_12_dataOut;
  wire       [3:0]    clkCrossing_13_dataOut;
  wire       [1:0]    clkCrossing_14_dataOut;
  wire       [1:0]    clkCrossing_15_dataOut;
  wire                clkCrossing_16_dataOut;
  wire       [7:0]    clkCrossing_17_dataOut;
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

  StreamFifo_9 axi4_stream_fifo (
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
    .slices_limit                 (clkCrossing_9_dataOut[6:0]                         ), //i
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
  StreamFifo_10 trans_fifo (
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
    .div_enable                   (clkCrossing_11_dataOut                   ), //i
    .div_cnt_step                 (clkCrossing_12_dataOut[3:0]              ), //i
    .div_cnt_limit                (clkCrossing_13_dataOut[3:0]              ), //i
    .mod_method_select            (clkCrossing_14_dataOut[1:0]              ), //i
    .clk                          (clk                                      ), //i
    .reset                        (reset                                    )  //i
  );
  StreamFifo_11 trans_to_recv_fifo (
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
    .raw_data_valid               (1'b1                                      ), //i
    .raw_data_payload_cha_i       (receiver_raw_data_payload_cha_i[11:0]     ), //i
    .raw_data_payload_cha_q       (receiver_raw_data_payload_cha_q[11:0]     ), //i
    .pa_shift_bias                (clkCrossing_15_dataOut[1:0]               ), //i
    .pa_shift_dir                 (clkCrossing_16_dataOut                    ), //i
    .result_data_valid            (receiver_result_data_valid                ), //o
    .result_data_payload_cha_i    (receiver_result_data_payload_cha_i[11:0]  ), //o
    .result_data_payload_cha_q    (receiver_result_data_payload_cha_q[11:0]  ), //o
    .min_plateau                  (clkCrossing_17_dataOut[7:0]               ), //i
    .clk                          (clk                                       ), //i
    .reset                        (reset                                     )  //i
  );
  ClkCrossing clkCrossing_9 (
    .dataIn     (pkg_gen_bridge_slices_limit[6:0]  ), //i
    .dataOut    (clkCrossing_9_dataOut[6:0]        ), //o
    .clk        (clk                               ), //i
    .reset      (reset                             )  //i
  );
  ClkCrossing clkCrossing_10 (
    .dataIn     (stream_package_gen_slices_cnt[6:0]  ), //i
    .dataOut    (clkCrossing_10_dataOut[6:0]         ), //o
    .clk        (clk                                 ), //i
    .reset      (reset                               )  //i
  );
  ClkCrossing_2 clkCrossing_11 (
    .dataIn     (transmitter_bridge_div_enable  ), //i
    .dataOut    (clkCrossing_11_dataOut         ), //o
    .clk        (clk                            ), //i
    .reset      (reset                          )  //i
  );
  ClkCrossing_3 clkCrossing_12 (
    .dataIn     (transmitter_bridge_div_cnt_step[3:0]  ), //i
    .dataOut    (clkCrossing_12_dataOut[3:0]           ), //o
    .clk        (clk                                   ), //i
    .reset      (reset                                 )  //i
  );
  ClkCrossing_3 clkCrossing_13 (
    .dataIn     (transmitter_bridge_div_cnt_limit[3:0]  ), //i
    .dataOut    (clkCrossing_13_dataOut[3:0]            ), //o
    .clk        (clk                                    ), //i
    .reset      (reset                                  )  //i
  );
  ClkCrossing_5 clkCrossing_14 (
    .dataIn     (transmitter_bridge_mod_method_select[1:0]  ), //i
    .dataOut    (clkCrossing_14_dataOut[1:0]                ), //o
    .clk        (clk                                        ), //i
    .reset      (reset                                      )  //i
  );
  ClkCrossing_5 clkCrossing_15 (
    .dataIn     (receiver_bridge_pa_shift_bias[1:0]  ), //i
    .dataOut    (clkCrossing_15_dataOut[1:0]         ), //o
    .clk        (clk                                 ), //i
    .reset      (reset                               )  //i
  );
  ClkCrossing_2 clkCrossing_16 (
    .dataIn     (receiver_bridge_pa_shift_dir  ), //i
    .dataOut    (clkCrossing_16_dataOut        ), //o
    .clk        (clk                           ), //i
    .reset      (reset                         )  //i
  );
  ClkCrossing_8 clkCrossing_17 (
    .dataIn     (receiver_bridge_min_plateau[7:0]  ), //i
    .dataOut    (clkCrossing_17_dataOut[7:0]       ), //o
    .clk        (clk                               ), //i
    .reset      (reset                             )  //i
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
  assign result_data_payload_cha_i = receiver_result_data_payload_cha_i;
  assign result_data_payload_cha_q = receiver_result_data_payload_cha_q;
  assign pkg_gen_bridge_slices_limit = pkg_gen_bridge_slices_limit_driver;
  assign pkg_gen_bridge_slices_cnt = clkCrossing_10_dataOut;
  assign transmitter_bridge_div_enable = transmitter_bridge_div_enable_driver;
  assign transmitter_bridge_div_cnt_step = transmitter_bridge_div_cnt_step_driver;
  assign transmitter_bridge_div_cnt_limit = transmitter_bridge_div_cnt_limit_driver;
  assign transmitter_bridge_mod_method_select = transmitter_bridge_mod_method_select_driver;
  assign receiver_bridge_pa_shift_bias = receiver_bridge_pa_shift_bias_driver;
  assign receiver_bridge_pa_shift_dir = receiver_bridge_pa_shift_dir_driver;
  assign receiver_bridge_min_plateau = receiver_bridge_min_plateau_driver;
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
  input      [1:0]    pa_shift_bias,
  input               pa_shift_dir,
  output              result_data_valid,
  output     [11:0]   result_data_payload_cha_i,
  output     [11:0]   result_data_payload_cha_q,
  input      [7:0]    min_plateau,
  input               clk,
  input               reset
);

  wire                datatype_convert_result_data_valid;
  wire       [11:0]   datatype_convert_result_data_payload_cha_i;
  wire       [11:0]   datatype_convert_result_data_payload_cha_q;
  wire                phy_rx_power_adjustor_adjusted_data_valid;
  wire       [11:0]   phy_rx_power_adjustor_adjusted_data_payload_cha_i;
  wire       [11:0]   phy_rx_power_adjustor_adjusted_data_payload_cha_q;
  wire                phy_rx_cfo_result_data_valid;
  wire       [11:0]   phy_rx_cfo_result_data_payload_cha_i;
  wire       [11:0]   phy_rx_cfo_result_data_payload_cha_q;

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
  PhyRxCFO phy_rx_cfo (
    .raw_data_valid               (phy_rx_power_adjustor_adjusted_data_valid                ), //i
    .raw_data_payload_cha_i       (phy_rx_power_adjustor_adjusted_data_payload_cha_i[11:0]  ), //i
    .raw_data_payload_cha_q       (phy_rx_power_adjustor_adjusted_data_payload_cha_q[11:0]  ), //i
    .result_data_valid            (phy_rx_cfo_result_data_valid                             ), //o
    .result_data_payload_cha_i    (phy_rx_cfo_result_data_payload_cha_i[11:0]               ), //o
    .result_data_payload_cha_q    (phy_rx_cfo_result_data_payload_cha_q[11:0]               ), //o
    .min_plateau                  (min_plateau[7:0]                                         ), //i
    .pkg_drop                     (1'b0                                                     ), //i
    .clk                          (clk                                                      ), //i
    .reset                        (reset                                                    )  //i
  );
  assign result_data_valid = phy_rx_cfo_result_data_valid;
  assign result_data_payload_cha_i = phy_rx_cfo_result_data_payload_cha_i;
  assign result_data_payload_cha_q = phy_rx_cfo_result_data_payload_cha_q;

endmodule

module StreamFifo_11 (
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

  wire                phy_tx_padder_raw_data_valid;
  wire                phy_tx_padder_result_data_queueWithAvailability_io_pop_ready;
  wire                phy_tx_crc_raw_data_valid;
  wire                phy_tx_crc_result_data_queueWithAvailability_io_pop_ready;
  wire                phy_tx_encoder_raw_data_valid;
  wire                phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_ready;
  wire       [7:0]    phy_header_extender_mod_method;
  wire                phy_header_extender_raw_data_valid;
  wire                phy_header_extender_result_data_queueWithAvailability_io_pop_ready;
  wire                phy_tx_scrambler_raw_data_valid;
  wire                phy_tx_scrambler_result_data_queueWithAvailability_io_pop_ready;
  wire                mod_data_div_base_data_valid;
  wire       [7:0]    mod_rtl_data_flow_unit_data_payload_fragment;
  wire                mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_ready;
  wire                phy_tx_oversampling_raw_data_valid;
  wire                phy_tx_filter_result_data_queueWithAvailability_io_pop_ready;
  wire                stf_preamble_adder_raw_data_valid;
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
  wire                phy_header_extender_raw_data_ready;
  wire                phy_header_extender_result_data_valid;
  wire                phy_header_extender_result_data_payload_last;
  wire       [15:0]   phy_header_extender_result_data_payload_fragment;
  wire                phy_header_extender_result_data_queueWithAvailability_io_push_ready;
  wire                phy_header_extender_result_data_queueWithAvailability_io_pop_valid;
  wire                phy_header_extender_result_data_queueWithAvailability_io_pop_payload_last;
  wire       [15:0]   phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment;
  wire       [5:0]    phy_header_extender_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_header_extender_result_data_queueWithAvailability_io_availability;
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
  wire       [1:0]    _zz_mod_method;
  reg        [7:0]    pipeline_halt;
  wire                _zz_raw_data_ready;
  wire                _zz_io_pop_ready;
  wire                _zz_io_pop_ready_1;
  wire                phy_tx_puncher_punched_data_toStream_valid;
  wire                phy_tx_puncher_punched_data_toStream_ready;
  wire                phy_tx_puncher_punched_data_toStream_payload_last;
  wire       [15:0]   phy_tx_puncher_punched_data_toStream_payload_fragment;
  wire                _zz_io_pop_ready_2;
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

  assign _zz_mod_method = mod_method_select;
  PhyTxPadder phy_tx_padder (
    .raw_data_valid                  (phy_tx_padder_raw_data_valid                                   ), //i
    .raw_data_ready                  (phy_tx_padder_raw_data_ready                                   ), //o
    .raw_data_payload_last           (raw_data_payload_last                                          ), //i
    .raw_data_payload_fragment       (raw_data_payload_fragment[7:0]                                 ), //i
    .result_data_valid               (phy_tx_padder_result_data_valid                                ), //o
    .result_data_ready               (phy_tx_padder_result_data_queueWithAvailability_io_push_ready  ), //i
    .result_data_payload_last        (phy_tx_padder_result_data_payload_last                         ), //o
    .result_data_payload_fragment    (phy_tx_padder_result_data_payload_fragment[7:0]                ), //o
    .clk                             (clk                                                            ), //i
    .reset                           (reset                                                          )  //i
  );
  StreamFifo_1 phy_tx_padder_result_data_queueWithAvailability (
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
  PhyTxCrc phy_tx_crc (
    .raw_data_valid                  (phy_tx_crc_raw_data_valid                                                     ), //i
    .raw_data_ready                  (phy_tx_crc_raw_data_ready                                                     ), //o
    .raw_data_payload_last           (phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_last           ), //i
    .raw_data_payload_fragment       (phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //i
    .result_data_valid               (phy_tx_crc_result_data_valid                                                  ), //o
    .result_data_ready               (phy_tx_crc_result_data_queueWithAvailability_io_push_ready                    ), //i
    .result_data_payload_last        (phy_tx_crc_result_data_payload_last                                           ), //o
    .result_data_payload_fragment    (phy_tx_crc_result_data_payload_fragment[7:0]                                  ), //o
    .clk                             (clk                                                                           ), //i
    .reset                           (reset                                                                         )  //i
  );
  StreamFifo_1 phy_tx_crc_result_data_queueWithAvailability (
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
  PhyTxEncoder phy_tx_encoder (
    .raw_data_valid                  (phy_tx_encoder_raw_data_valid                                              ), //i
    .raw_data_ready                  (phy_tx_encoder_raw_data_ready                                              ), //o
    .raw_data_payload_last           (phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_last           ), //i
    .raw_data_payload_fragment       (phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //i
    .result_data_valid               (phy_tx_encoder_result_data_valid                                           ), //o
    .result_data_ready               (phy_tx_puncher_raw_data_ready                                              ), //i
    .result_data_payload_last        (phy_tx_encoder_result_data_payload_last                                    ), //o
    .result_data_payload_fragment    (phy_tx_encoder_result_data_payload_fragment[15:0]                          ), //o
    .clk                             (clk                                                                        ), //i
    .reset                           (reset                                                                      )  //i
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
  StreamFifo_3 phy_tx_puncher_punched_data_toStream_queueWithAvailability (
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
  PhyHeaderExtender phy_header_extender (
    .mod_method                      (phy_header_extender_mod_method[7:0]                                                       ), //i
    .raw_data_valid                  (phy_header_extender_raw_data_valid                                                        ), //i
    .raw_data_ready                  (phy_header_extender_raw_data_ready                                                        ), //o
    .raw_data_payload_last           (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_last            ), //i
    .raw_data_payload_fragment       (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_fragment[15:0]  ), //i
    .result_data_valid               (phy_header_extender_result_data_valid                                                     ), //o
    .result_data_ready               (phy_header_extender_result_data_queueWithAvailability_io_push_ready                       ), //i
    .result_data_payload_last        (phy_header_extender_result_data_payload_last                                              ), //o
    .result_data_payload_fragment    (phy_header_extender_result_data_payload_fragment[15:0]                                    ), //o
    .clk                             (clk                                                                                       ), //i
    .reset                           (reset                                                                                     )  //i
  );
  StreamFifo_3 phy_header_extender_result_data_queueWithAvailability (
    .io_push_valid               (phy_header_extender_result_data_valid                                                ), //i
    .io_push_ready               (phy_header_extender_result_data_queueWithAvailability_io_push_ready                  ), //o
    .io_push_payload_last        (phy_header_extender_result_data_payload_last                                         ), //i
    .io_push_payload_fragment    (phy_header_extender_result_data_payload_fragment[15:0]                               ), //i
    .io_pop_valid                (phy_header_extender_result_data_queueWithAvailability_io_pop_valid                   ), //o
    .io_pop_ready                (phy_header_extender_result_data_queueWithAvailability_io_pop_ready                   ), //i
    .io_pop_payload_last         (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_last            ), //o
    .io_pop_payload_fragment     (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment[15:0]  ), //o
    .io_flush                    (1'b0                                                                                 ), //i
    .io_occupancy                (phy_header_extender_result_data_queueWithAvailability_io_occupancy[5:0]              ), //o
    .io_availability             (phy_header_extender_result_data_queueWithAvailability_io_availability[5:0]           ), //o
    .clk                         (clk                                                                                  ), //i
    .reset                       (reset                                                                                )  //i
  );
  PhyTxScrambler phy_tx_scrambler (
    .raw_data_valid                  (phy_tx_scrambler_raw_data_valid                                                      ), //i
    .raw_data_ready                  (phy_tx_scrambler_raw_data_ready                                                      ), //o
    .raw_data_payload_last           (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_last            ), //i
    .raw_data_payload_fragment       (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment[15:0]  ), //i
    .result_data_valid               (phy_tx_scrambler_result_data_valid                                                   ), //o
    .result_data_ready               (phy_tx_scrambler_result_data_queueWithAvailability_io_push_ready                     ), //i
    .result_data_payload_last        (phy_tx_scrambler_result_data_payload_last                                            ), //o
    .result_data_payload_fragment    (phy_tx_scrambler_result_data_payload_fragment[15:0]                                  ), //o
    .clk                             (clk                                                                                  ), //i
    .reset                           (reset                                                                                )  //i
  );
  StreamFifo_3 phy_tx_scrambler_result_data_queueWithAvailability (
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
  StreamFifo_6 mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability (
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
  PhyTxOverSampling phy_tx_oversampling (
    .raw_data_valid                        (phy_tx_oversampling_raw_data_valid                                                           ), //i
    .raw_data_ready                        (phy_tx_oversampling_raw_data_ready                                                           ), //o
    .raw_data_payload_last                 (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_last                  ), //i
    .raw_data_payload_fragment_cha_i       (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_i[11:0]  ), //i
    .raw_data_payload_fragment_cha_q       (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_q[11:0]  ), //i
    .result_data_valid                     (phy_tx_oversampling_result_data_valid                                                        ), //o
    .result_data_ready                     (phy_tx_filter_raw_data_ready                                                                 ), //i
    .result_data_payload_last              (phy_tx_oversampling_result_data_payload_last                                                 ), //o
    .result_data_payload_fragment_cha_i    (phy_tx_oversampling_result_data_payload_fragment_cha_i[11:0]                                 ), //o
    .result_data_payload_fragment_cha_q    (phy_tx_oversampling_result_data_payload_fragment_cha_q[11:0]                                 ), //o
    .clk                                   (clk                                                                                          ), //i
    .reset                                 (reset                                                                                        )  //i
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
  StreamFifo_6 phy_tx_filter_result_data_queueWithAvailability (
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
  StreamFifo_8 phy_tx_front_result_data_queueWithAvailability (
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
  assign raw_data_ready = (phy_tx_padder_raw_data_ready && _zz_raw_data_ready);
  assign phy_tx_padder_raw_data_valid = (raw_data_valid && _zz_raw_data_ready);
  always @(*) begin
    pipeline_halt[0] = (phy_tx_padder_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[1] = (phy_tx_crc_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[2] = (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[3] = (phy_header_extender_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[4] = (phy_tx_scrambler_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[5] = (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[6] = (phy_tx_filter_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[7] = (phy_tx_front_result_data_queueWithAvailability_io_availability < 6'h12);
  end

  assign _zz_io_pop_ready = (! pipeline_halt[1]);
  assign phy_tx_padder_result_data_queueWithAvailability_io_pop_ready = (phy_tx_crc_raw_data_ready && _zz_io_pop_ready);
  assign phy_tx_crc_raw_data_valid = (phy_tx_padder_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready);
  assign _zz_io_pop_ready_1 = (! pipeline_halt[2]);
  assign phy_tx_crc_result_data_queueWithAvailability_io_pop_ready = (phy_tx_encoder_raw_data_ready && _zz_io_pop_ready_1);
  assign phy_tx_encoder_raw_data_valid = (phy_tx_crc_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_1);
  assign phy_tx_puncher_punched_data_toStream_valid = phy_tx_puncher_punched_data_valid;
  assign phy_tx_puncher_punched_data_toStream_payload_last = phy_tx_puncher_punched_data_payload_last;
  assign phy_tx_puncher_punched_data_toStream_payload_fragment = phy_tx_puncher_punched_data_payload_fragment;
  assign phy_tx_puncher_punched_data_toStream_ready = phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_push_ready;
  assign _zz_io_pop_ready_2 = (! pipeline_halt[3]);
  assign phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_ready = (phy_header_extender_raw_data_ready && _zz_io_pop_ready_2);
  assign phy_header_extender_raw_data_valid = (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_2);
  assign phy_header_extender_mod_method = {6'd0, _zz_mod_method};
  assign _zz_io_pop_ready_3 = (! pipeline_halt[4]);
  assign phy_header_extender_result_data_queueWithAvailability_io_pop_ready = (phy_tx_scrambler_raw_data_ready && _zz_io_pop_ready_3);
  assign phy_tx_scrambler_raw_data_valid = (phy_header_extender_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_3);
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
  assign mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_ready = (phy_tx_oversampling_raw_data_ready && _zz_io_pop_ready_5);
  assign phy_tx_oversampling_raw_data_valid = (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_5);
  assign _zz_io_pop_ready_6 = (! pipeline_halt[7]);
  assign phy_tx_filter_result_data_queueWithAvailability_io_pop_ready = (stf_preamble_adder_raw_data_ready && _zz_io_pop_ready_6);
  assign stf_preamble_adder_raw_data_valid = (phy_tx_filter_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_6);
  assign rf_data_valid = phy_tx_front_result_data_queueWithAvailability_io_pop_valid;
  assign rf_data_payload_cha_i = phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_i;
  assign rf_data_payload_cha_q = phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_q;

endmodule

module StreamFifo_10 (
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

module StreamFifo_9 (
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

module PhyRxCFO (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              result_data_valid,
  output     [11:0]   result_data_payload_cha_i,
  output     [11:0]   result_data_payload_cha_q,
  input      [7:0]    min_plateau,
  input               pkg_drop,
  input               clk,
  input               reset
);

  wire                coarse_cfo_inst_enable;
  wire                preamble_detector_pkg_detected;
  wire                preamble_detector_raw_data_out_valid;
  wire       [11:0]   preamble_detector_raw_data_out_payload_cha_i;
  wire       [11:0]   preamble_detector_raw_data_out_payload_cha_q;
  wire                preamble_detector_corr_result_valid;
  wire       [35:0]   preamble_detector_corr_result_payload_cha_i;
  wire       [35:0]   preamble_detector_corr_result_payload_cha_q;
  wire                coarse_cfo_inst_rotated_data_valid;
  wire       [11:0]   coarse_cfo_inst_rotated_data_payload_cha_i;
  wire       [11:0]   coarse_cfo_inst_rotated_data_payload_cha_q;
  wire                coarse_cfo_inst_phi_correct_valid;
  wire                cross_corr_core_corr_result_valid;
  wire       [35:0]   cross_corr_core_corr_result_payload_cha_i;
  wire       [35:0]   cross_corr_core_corr_result_payload_cha_q;
  wire       [35:0]   _zz_when_PhyRx_l49;
  wire       [35:0]   _zz_when_PhyRx_l49_1;
  wire       [35:0]   _zz_when_PhyRx_l49_2;
  wire       [35:0]   _zz_when_PhyRx_l49_3;
  wire       [0:0]    _zz_when_PhyRx_l49_4;
  wire       [35:0]   _zz_prod_max;
  wire       [35:0]   _zz_prod_max_1;
  wire       [35:0]   _zz_prod_max_2;
  wire       [0:0]    _zz_prod_max_3;
  wire       [35:0]   _zz_prod_max_4;
  wire       [35:0]   _zz_prod_max_5;
  wire       [35:0]   _zz_prod_max_6;
  wire       [0:0]    _zz_prod_max_7;
  reg                 package_handling;
  reg                 cfo_corrected;
  wire                when_PhyRx_l38;
  reg                 package_handling_regNext;
  wire                when_PhyRx_l40;
  reg        [35:0]   prod_max;
  reg        [119:0]  prod_cnt;
  wire                when_PhyRx_l49;

  assign _zz_when_PhyRx_l49 = (_zz_when_PhyRx_l49_1 + _zz_when_PhyRx_l49_3);
  assign _zz_when_PhyRx_l49_1 = (cross_corr_core_corr_result_payload_cha_i[35] ? _zz_when_PhyRx_l49_2 : cross_corr_core_corr_result_payload_cha_i);
  assign _zz_when_PhyRx_l49_2 = (~ cross_corr_core_corr_result_payload_cha_i);
  assign _zz_when_PhyRx_l49_4 = cross_corr_core_corr_result_payload_cha_i[35];
  assign _zz_when_PhyRx_l49_3 = {35'd0, _zz_when_PhyRx_l49_4};
  assign _zz_prod_max = (cross_corr_core_corr_result_payload_cha_i[35] ? _zz_prod_max_1 : cross_corr_core_corr_result_payload_cha_i);
  assign _zz_prod_max_1 = (~ cross_corr_core_corr_result_payload_cha_i);
  assign _zz_prod_max_3 = cross_corr_core_corr_result_payload_cha_i[35];
  assign _zz_prod_max_2 = {35'd0, _zz_prod_max_3};
  assign _zz_prod_max_4 = (cross_corr_core_corr_result_payload_cha_i[35] ? _zz_prod_max_5 : cross_corr_core_corr_result_payload_cha_i);
  assign _zz_prod_max_5 = (~ cross_corr_core_corr_result_payload_cha_i);
  assign _zz_prod_max_7 = cross_corr_core_corr_result_payload_cha_i[35];
  assign _zz_prod_max_6 = {35'd0, _zz_prod_max_7};
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
  CFOCorrector coarse_cfo_inst (
    .raw_data_valid                (preamble_detector_raw_data_out_valid                ), //i
    .raw_data_payload_cha_i        (preamble_detector_raw_data_out_payload_cha_i[11:0]  ), //i
    .raw_data_payload_cha_q        (preamble_detector_raw_data_out_payload_cha_q[11:0]  ), //i
    .rotated_data_valid            (coarse_cfo_inst_rotated_data_valid                  ), //o
    .rotated_data_payload_cha_i    (coarse_cfo_inst_rotated_data_payload_cha_i[11:0]    ), //o
    .rotated_data_payload_cha_q    (coarse_cfo_inst_rotated_data_payload_cha_q[11:0]    ), //o
    .enable                        (coarse_cfo_inst_enable                              ), //i
    .phi_correct_valid             (coarse_cfo_inst_phi_correct_valid                   ), //o
    .clk                           (clk                                                 ), //i
    .reset                         (reset                                               )  //i
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
  assign coarse_cfo_inst_enable = (! cfo_corrected);
  assign when_PhyRx_l38 = (pkg_drop || coarse_cfo_inst_phi_correct_valid);
  assign when_PhyRx_l40 = (package_handling && (! package_handling_regNext));
  assign when_PhyRx_l49 = (prod_max < _zz_when_PhyRx_l49);
  assign result_data_valid = coarse_cfo_inst_rotated_data_valid;
  assign result_data_payload_cha_i = coarse_cfo_inst_rotated_data_payload_cha_i;
  assign result_data_payload_cha_q = coarse_cfo_inst_rotated_data_payload_cha_q;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      package_handling <= 1'b0;
      cfo_corrected <= 1'b1;
      prod_max <= 36'h0;
      prod_cnt <= 120'h0;
    end else begin
      if(pkg_drop) begin
        package_handling <= 1'b0;
      end else begin
        if(preamble_detector_pkg_detected) begin
          package_handling <= 1'b1;
        end
      end
      if(when_PhyRx_l38) begin
        cfo_corrected <= 1'b1;
      end else begin
        if(when_PhyRx_l40) begin
          cfo_corrected <= 1'b0;
        end
      end
      if(cross_corr_core_corr_result_valid) begin
        if(when_PhyRx_l49) begin
          prod_max <= (_zz_prod_max + _zz_prod_max_2);
          prod_cnt <= 120'h0;
        end else begin
          prod_max <= (_zz_prod_max_4 + _zz_prod_max_6);
          prod_cnt <= (prod_cnt + 120'h000000000000000000000000000001);
        end
      end
    end
  end

  always @(posedge clk) begin
    package_handling_regNext <= package_handling;
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

module StreamFifo_8 (
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

//StreamFifo_6 replaced by StreamFifo_6

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
  wire                when_PhyTx_l217;
  wire                result_data_fire;
  wire                when_PhyTx_l219;
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
  assign when_PhyTx_l217 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l219 = (result_data_fire && result_data_payload_last);
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
      if(when_PhyTx_l217) begin
        last_padding <= 1'b1;
      end else begin
        if(when_PhyTx_l219) begin
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

module StreamFifo_6 (
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
    .input_valid                   (data_flow_unit_data_valid                    ), //i
    .input_payload_last            (data_flow_unit_data_payload_last             ), //i
    .input_payload_fragment        (data_flow_unit_data_payload_fragment[7:0]    ), //i
    .select_1                      (select_1[1:0]                                ), //i
    .outputs_0_valid               (flowDeMux_1_outputs_0_valid                  ), //o
    .outputs_0_payload_last        (flowDeMux_1_outputs_0_payload_last           ), //o
    .outputs_0_payload_fragment    (flowDeMux_1_outputs_0_payload_fragment[7:0]  ), //o
    .outputs_1_valid               (flowDeMux_1_outputs_1_valid                  ), //o
    .outputs_1_payload_last        (flowDeMux_1_outputs_1_payload_last           ), //o
    .outputs_1_payload_fragment    (flowDeMux_1_outputs_1_payload_fragment[7:0]  ), //o
    .outputs_2_valid               (flowDeMux_1_outputs_2_valid                  ), //o
    .outputs_2_payload_last        (flowDeMux_1_outputs_2_payload_last           ), //o
    .outputs_2_payload_fragment    (flowDeMux_1_outputs_2_payload_fragment[7:0]  )  //o
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
  FlowMux flowMux_1 (
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
    .output_valid                       (flowMux_1_output_valid                                              ), //o
    .output_payload_last                (flowMux_1_output_payload_last                                       ), //o
    .output_payload_fragment_cha_i      (flowMux_1_output_payload_fragment_cha_i[11:0]                       ), //o
    .output_payload_fragment_cha_q      (flowMux_1_output_payload_fragment_cha_q[11:0]                       )  //o
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

//StreamFifo_3 replaced by StreamFifo_3

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

  reg                 scrambler_1_init_state_valid;
  reg                 scrambler_1_scram_data_ready;
  wire                scrambler_1_scram_data_valid;
  wire       [15:0]   scrambler_1_scram_data_payload;
  reg        [1:0]    scrambler_status;
  wire                raw_data_fire;
  wire                when_PhyTx_l143;
  wire                raw_data_fire_1;
  `ifndef SYNTHESIS
  reg [79:0] scrambler_status_string;
  `endif


  Scrambler scrambler_1 (
    .init_state_valid      (scrambler_1_init_state_valid          ), //i
    .init_state_payload    (7'h7f                                 ), //i
    .scram_data_valid      (scrambler_1_scram_data_valid          ), //o
    .scram_data_ready      (scrambler_1_scram_data_ready          ), //i
    .scram_data_payload    (scrambler_1_scram_data_payload[15:0]  ), //o
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
          scrambler_1_init_state_valid = 1'b0;
        end else begin
          scrambler_1_init_state_valid = 1'b1;
        end
      end
      PhyTxScramblerStatus_SCRAMBLING : begin
        scrambler_1_init_state_valid = 1'b0;
      end
      default : begin
        scrambler_1_init_state_valid = 1'b1;
      end
    endcase
  end

  always @(*) begin
    case(scrambler_status)
      PhyTxScramblerStatus_IDLE : begin
        if(raw_data_valid) begin
          scrambler_1_scram_data_ready = 1'b1;
        end else begin
          scrambler_1_scram_data_ready = 1'b0;
        end
      end
      PhyTxScramblerStatus_SCRAMBLING : begin
        scrambler_1_scram_data_ready = raw_data_fire_1;
      end
      default : begin
        scrambler_1_scram_data_ready = 1'b0;
      end
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l143 = (raw_data_fire && raw_data_payload_last);
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
          if(when_PhyTx_l143) begin
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

//StreamFifo_3 replaced by StreamFifo_3

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
  localparam PhyTxHeaderStatus_IDLE = 2'd0;
  localparam PhyTxHeaderStatus_HEADER = 2'd1;
  localparam PhyTxHeaderStatus_DATA = 2'd2;

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
  wire                when_PhyTx_l263;
  wire                result_data_fire;
  wire                when_PhyTx_l263_1;
  wire                _zz_raw_data_ready;
  wire                result_data_fire_1;
  wire                when_PhyTx_l265;
  wire                raw_data_fire_1;
  reg        [1:0]    header_status;
  wire                result_data_fire_2;
  wire                when_PhyTx_l294;
  `ifndef SYNTHESIS
  reg [47:0] header_status_string;
  `endif


  assign _zz_result_data_payload_fragment_1 = ({1'd0,counter} <<< 1);
  assign _zz_result_data_payload_fragment = _zz_result_data_payload_fragment_1[7:0];
  StreamFifo dataFifo (
    .io_push_valid               (dataFifo_io_push_valid                  ), //i
    .io_push_ready               (dataFifo_io_push_ready                  ), //o
    .io_push_payload_last        (raw_data_payload_last                   ), //i
    .io_push_payload_fragment    (raw_data_payload_fragment[15:0]         ), //i
    .io_pop_valid                (dataFifo_io_pop_valid                   ), //o
    .io_pop_ready                (dataFifo_io_pop_ready                   ), //i
    .io_pop_payload_last         (dataFifo_io_pop_payload_last            ), //o
    .io_pop_payload_fragment     (dataFifo_io_pop_payload_fragment[15:0]  ), //o
    .io_flush                    (1'b0                                    ), //i
    .io_occupancy                (dataFifo_io_occupancy[7:0]              ), //o
    .io_availability             (dataFifo_io_availability[7:0]           ), //o
    .clk                         (clk                                     ), //i
    .reset                       (reset                                   )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(header_status)
      PhyTxHeaderStatus_IDLE : header_status_string = "IDLE  ";
      PhyTxHeaderStatus_HEADER : header_status_string = "HEADER";
      PhyTxHeaderStatus_DATA : header_status_string = "DATA  ";
      default : header_status_string = "??????";
    endcase
  end
  `endif

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l263 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l263_1 = (result_data_fire && result_data_payload_last);
  assign _zz_raw_data_ready = (! emitHeader);
  assign raw_data_ready = (dataFifo_io_push_ready && _zz_raw_data_ready);
  assign dataFifo_io_push_valid = (raw_data_valid && _zz_raw_data_ready);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l265 = (result_data_fire_1 && result_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  always @(*) begin
    result_data_payload_last = 1'b0;
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_HEADER : begin
      end
      default : begin
        result_data_payload_last = dataFifo_io_pop_payload_last;
      end
    endcase
  end

  always @(*) begin
    result_data_valid = 1'b0;
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_HEADER : begin
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
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_HEADER : begin
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
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_HEADER : begin
      end
      default : begin
        dataFifo_io_pop_ready = result_data_ready;
      end
    endcase
  end

  assign result_data_fire_2 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l294 = (result_data_fire_2 && result_data_payload_last);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      counter <= 8'h0;
      emitHeader <= 1'b0;
      header_status <= PhyTxHeaderStatus_IDLE;
    end else begin
      if(when_PhyTx_l263) begin
        emitHeader <= 1'b1;
      end
      if(when_PhyTx_l263_1) begin
        emitHeader <= 1'b0;
      end
      if(when_PhyTx_l265) begin
        counter <= 8'h0;
      end else begin
        if(raw_data_fire_1) begin
          counter <= (counter + 8'h01);
        end
      end
      case(header_status)
        PhyTxHeaderStatus_IDLE : begin
          if(emitHeader) begin
            header_status <= PhyTxHeaderStatus_HEADER;
          end
        end
        PhyTxHeaderStatus_HEADER : begin
          if(result_data_ready) begin
            header_status <= PhyTxHeaderStatus_DATA;
          end
        end
        default : begin
          if(when_PhyTx_l294) begin
            header_status <= PhyTxHeaderStatus_IDLE;
          end
        end
      endcase
    end
  end


endmodule

module StreamFifo_3 (
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
  reg                 emitEncoding;
  wire                raw_data_fire;
  wire                when_PhyTx_l95;
  wire                phy_tx_encoder_raw_data_fire;
  wire                when_PhyTx_l95_1;
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
  assign when_PhyTx_l95 = (raw_data_fire && raw_data_payload_last);
  assign phy_tx_encoder_raw_data_fire = (phy_tx_encoder_raw_data_valid && phy_tx_encoder_raw_data_ready);
  assign when_PhyTx_l95_1 = (phy_tx_encoder_raw_data_fire && phy_tx_encoder_raw_data_payload_last);
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

  assign phy_tx_encoder_coded_data_toStream_valid = phy_tx_encoder_coded_data_valid;
  assign phy_tx_encoder_coded_data_toStream_payload_last = phy_tx_encoder_coded_data_payload_last;
  assign phy_tx_encoder_coded_data_toStream_payload_fragment = phy_tx_encoder_coded_data_payload_fragment;
  assign result_data_valid = phy_tx_encoder_coded_data_toStream_valid;
  assign phy_tx_encoder_coded_data_toStream_ready = result_data_ready;
  assign result_data_payload_last = phy_tx_encoder_coded_data_toStream_payload_last;
  assign result_data_payload_fragment = phy_tx_encoder_coded_data_toStream_payload_fragment;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      emitEncoding <= 1'b0;
    end else begin
      if(when_PhyTx_l95) begin
        emitEncoding <= 1'b1;
      end
      if(when_PhyTx_l95_1) begin
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
  wire                when_PhyTx_l32;
  wire                result_data_fire;
  wire                when_PhyTx_l32_1;
  reg        [1:0]    counter;
  wire                raw_data_fire_1;
  wire                result_data_fire_1;
  wire                when_PhyTx_l39;
  wire                when_PhyTx_l47;

  Crc crc_1 (
    .flush            (crc_1_flush                     ), //i
    .input_valid      (raw_data_fire_1                 ), //i
    .input_payload    (raw_data_payload_fragment[7:0]  ), //i
    .result           (crc_1_result[31:0]              ), //o
    .resultNext       (crc_1_resultNext[31:0]          ), //o
    .clk              (clk                             ), //i
    .reset            (reset                           )  //i
  );
  always @(*) begin
    case(counter)
      2'b00 : _zz_result_data_payload_fragment = crc_1_result[7 : 0];
      2'b01 : _zz_result_data_payload_fragment = crc_1_result[15 : 8];
      2'b10 : _zz_result_data_payload_fragment = crc_1_result[23 : 16];
      default : _zz_result_data_payload_fragment = crc_1_result[31 : 24];
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l32 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l32_1 = (result_data_fire && result_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign crc_1_flush = (result_data_fire_1 && result_data_payload_last);
  always @(*) begin
    result_data_payload_last = 1'b0;
    if(!when_PhyTx_l39) begin
      if(when_PhyTx_l47) begin
        result_data_payload_last = 1'b1;
      end
    end
  end

  assign when_PhyTx_l39 = (! emitCrc);
  always @(*) begin
    if(when_PhyTx_l39) begin
      result_data_valid = raw_data_valid;
    end else begin
      result_data_valid = 1'b1;
    end
  end

  always @(*) begin
    if(when_PhyTx_l39) begin
      result_data_payload_fragment = raw_data_payload_fragment;
    end else begin
      result_data_payload_fragment = _zz_result_data_payload_fragment;
    end
  end

  always @(*) begin
    if(when_PhyTx_l39) begin
      raw_data_ready = result_data_ready;
    end else begin
      raw_data_ready = 1'b0;
    end
  end

  assign when_PhyTx_l47 = (counter == 2'b11);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      emitCrc <= 1'b0;
      counter <= 2'b00;
    end else begin
      if(when_PhyTx_l32) begin
        emitCrc <= 1'b1;
      end
      if(when_PhyTx_l32_1) begin
        emitCrc <= 1'b0;
      end
      if(!when_PhyTx_l39) begin
        if(when_PhyTx_l47) begin
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
  wire                when_PhyTx_l71;
  wire                result_data_fire_1;
  wire                when_PhyTx_l74;
  wire                _zz_raw_data_ready;
  wire                when_PhyTx_l78;

  assign ok = (counter == 3'b111);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign fill = ((counter != 3'b000) && raw_data_payload_first);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l71 = ((! ok) && result_data_fire);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l74 = (result_data_fire_1 && result_data_payload_last);
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
    if(when_PhyTx_l78) begin
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

  assign when_PhyTx_l78 = (! ok);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      counter <= 3'b000;
      raw_data_payload_first <= 1'b1;
    end else begin
      if(raw_data_fire) begin
        raw_data_payload_first <= raw_data_payload_last;
      end
      if(when_PhyTx_l71) begin
        counter <= (counter + 3'b001);
      end
      if(when_PhyTx_l74) begin
        counter <= 3'b000;
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
        cnt <= ((5'h0f <= cnt) ? 5'h0 : _zz_cnt);
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
  wire       [21:0]   _zz_delta_phi_mean_1;
  reg        [1:0]    mean_cnt;
  reg        [23:0]   delta_phi_mean;
  reg                 delta_phi_valid;
  wire                when_CFOCorrector_l45;
  reg                 delta_phi_valid_regNext;

  assign _zz_delta_phi_mean_1 = (cfo_estimator_delta_phi_payload >>> 2);
  assign _zz_delta_phi_mean = {{2{_zz_delta_phi_mean_1[21]}}, _zz_delta_phi_mean_1};
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
      mean_cnt <= 2'b00;
      delta_phi_mean <= 24'h0;
      delta_phi_valid <= 1'b0;
      delta_phi_valid_regNext <= 1'b0;
    end else begin
      if(when_CFOCorrector_l45) begin
        mean_cnt <= 2'b00;
        delta_phi_valid <= 1'b0;
        delta_phi_mean <= 24'h0;
      end else begin
        if(cfo_estimator_delta_phi_valid) begin
          mean_cnt <= (mean_cnt + 2'b01);
          delta_phi_mean <= ($signed(delta_phi_mean) + $signed(_zz_delta_phi_mean));
          delta_phi_valid <= (mean_cnt == 2'b11);
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
  wire       [22:0]   _zz_gate_pkg_det_2;
  wire       [22:0]   _zz_gate_pkg_det_3;
  wire       [22:0]   _zz_gate_pkg_det_4;
  wire       [21:0]   _zz_gate_pkg_det_5;
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
  wire       [23:0]   _zz_gate_pkg_det;
  wire                when_PreambleDetector_l64;

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
  assign _zz_gate_pkg_det_1 = {13'd0, _zz_gate_pkg_det_2};
  assign _zz_gate_pkg_det_3 = (_zz_gate_pkg_det >>> 1);
  assign _zz_gate_pkg_det_5 = (_zz_gate_pkg_det >>> 2);
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
  assign _zz_gate_pkg_det = (_zz__zz_gate_pkg_det + _zz__zz_gate_pkg_det_5);
  assign when_PreambleDetector_l64 = (plateau_cnt < 8'hff);
  assign raw_data_out_valid = raw_data_valid;
  assign raw_data_out_payload_cha_i = raw_data_payload_cha_i;
  assign raw_data_out_payload_cha_q = raw_data_payload_cha_q;
  assign corr_result_valid = autoCorrelator_2_corr_result_valid;
  assign corr_result_payload_cha_i = autoCorrelator_2_corr_result_payload_cha_i;
  assign corr_result_payload_cha_q = autoCorrelator_2_corr_result_payload_cha_q;
  assign pkg_detected = ((min_plateau <= plateau_cnt) && gate_pkg_det);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      gate_pkg_det <= 1'b0;
      prod_avg_mag <= 36'h0;
      plateau_cnt <= 8'h0;
    end else begin
      if(powerMeter_1_power_result_valid) begin
        gate_pkg_det <= (_zz_gate_pkg_det_1 < prod_avg_mag);
      end else begin
        gate_pkg_det <= 1'b0;
      end
      if(gate_pkg_det) begin
        if(when_PreambleDetector_l64) begin
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
    end
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

  wire       [18:0]   transposeCore_66_next_adder_data;
  wire       [18:0]   transposeCore_67_next_adder_data;
  wire       [18:0]   transposeCore_68_next_adder_data;
  wire       [18:0]   transposeCore_69_next_adder_data;
  wire       [18:0]   transposeCore_70_next_adder_data;
  wire       [18:0]   transposeCore_71_next_adder_data;
  wire       [18:0]   transposeCore_72_next_adder_data;
  wire       [18:0]   transposeCore_73_next_adder_data;
  wire       [18:0]   transposeCore_74_next_adder_data;
  wire       [18:0]   transposeCore_75_next_adder_data;
  wire       [18:0]   transposeCore_76_next_adder_data;
  wire       [18:0]   transposeCore_77_next_adder_data;
  wire       [18:0]   transposeCore_78_next_adder_data;
  wire       [18:0]   transposeCore_79_next_adder_data;
  wire       [18:0]   transposeCore_80_next_adder_data;
  wire       [18:0]   transposeCore_81_next_adder_data;
  wire       [18:0]   transposeCore_82_next_adder_data;
  wire       [18:0]   transposeCore_83_next_adder_data;
  wire       [18:0]   transposeCore_84_next_adder_data;
  wire       [18:0]   transposeCore_85_next_adder_data;
  wire       [18:0]   transposeCore_86_next_adder_data;
  wire       [18:0]   transposeCore_87_next_adder_data;
  wire       [18:0]   transposeCore_88_next_adder_data;
  wire       [18:0]   transposeCore_89_next_adder_data;
  wire       [18:0]   transposeCore_90_next_adder_data;
  wire       [18:0]   transposeCore_91_next_adder_data;
  wire       [18:0]   transposeCore_92_next_adder_data;
  wire       [18:0]   transposeCore_93_next_adder_data;
  wire       [18:0]   transposeCore_94_next_adder_data;
  wire       [18:0]   transposeCore_95_next_adder_data;
  wire       [18:0]   transposeCore_96_next_adder_data;
  wire       [18:0]   transposeCore_97_next_adder_data;
  wire       [18:0]   transposeCore_98_next_adder_data;
  wire       [18:0]   transposeCore_99_next_adder_data;
  wire       [18:0]   transposeCore_100_next_adder_data;
  wire       [18:0]   transposeCore_101_next_adder_data;
  wire       [18:0]   transposeCore_102_next_adder_data;
  wire       [18:0]   transposeCore_103_next_adder_data;
  wire       [18:0]   transposeCore_104_next_adder_data;
  wire       [18:0]   transposeCore_105_next_adder_data;
  wire       [18:0]   transposeCore_106_next_adder_data;
  wire       [18:0]   transposeCore_107_next_adder_data;
  wire       [18:0]   transposeCore_108_next_adder_data;
  wire       [18:0]   transposeCore_109_next_adder_data;
  wire       [18:0]   transposeCore_110_next_adder_data;
  wire       [18:0]   transposeCore_111_next_adder_data;
  wire       [18:0]   transposeCore_112_next_adder_data;
  wire       [18:0]   transposeCore_113_next_adder_data;
  wire       [18:0]   transposeCore_114_next_adder_data;
  wire       [18:0]   transposeCore_115_next_adder_data;
  wire       [18:0]   transposeCore_116_next_adder_data;
  wire       [18:0]   transposeCore_117_next_adder_data;
  wire       [18:0]   transposeCore_118_next_adder_data;
  wire       [18:0]   transposeCore_119_next_adder_data;
  wire       [18:0]   transposeCore_120_next_adder_data;
  wire       [18:0]   transposeCore_121_next_adder_data;
  wire       [18:0]   transposeCore_122_next_adder_data;
  wire       [18:0]   transposeCore_123_next_adder_data;
  wire       [18:0]   transposeCore_124_next_adder_data;
  wire       [18:0]   transposeCore_125_next_adder_data;
  wire       [18:0]   transposeCore_126_next_adder_data;
  wire       [18:0]   transposeCore_127_next_adder_data;
  wire       [18:0]   transposeCore_128_next_adder_data;
  wire       [18:0]   transposeCore_129_next_adder_data;
  wire       [18:0]   transposeCore_130_next_adder_data;
  wire       [18:0]   transposeCore_131_next_adder_data;
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

  TransposeCore transposeCore_66 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_0[6:0]                         ), //i
    .adder_data         (19'h0                                   ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_66_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_67 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_1[6:0]                         ), //i
    .adder_data         (transposeCore_66_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_67_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_68 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_2[6:0]                         ), //i
    .adder_data         (transposeCore_67_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_68_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_69 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_3[6:0]                         ), //i
    .adder_data         (transposeCore_68_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_69_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_70 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_4[6:0]                         ), //i
    .adder_data         (transposeCore_69_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_70_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_71 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_5[6:0]                         ), //i
    .adder_data         (transposeCore_70_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_71_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_72 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_6[6:0]                         ), //i
    .adder_data         (transposeCore_71_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_72_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_73 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_7[6:0]                         ), //i
    .adder_data         (transposeCore_72_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_73_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_74 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_8[6:0]                         ), //i
    .adder_data         (transposeCore_73_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_74_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_75 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_9[6:0]                         ), //i
    .adder_data         (transposeCore_74_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_75_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_76 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_10[6:0]                        ), //i
    .adder_data         (transposeCore_75_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_76_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_77 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_11[6:0]                        ), //i
    .adder_data         (transposeCore_76_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_77_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_78 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_12[6:0]                        ), //i
    .adder_data         (transposeCore_77_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_78_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_79 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_13[6:0]                        ), //i
    .adder_data         (transposeCore_78_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_79_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_80 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_14[6:0]                        ), //i
    .adder_data         (transposeCore_79_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_80_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_81 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_15[6:0]                        ), //i
    .adder_data         (transposeCore_80_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_81_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_82 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_16[6:0]                        ), //i
    .adder_data         (transposeCore_81_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_82_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_83 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_17[6:0]                        ), //i
    .adder_data         (transposeCore_82_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_83_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_84 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_18[6:0]                        ), //i
    .adder_data         (transposeCore_83_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_84_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_85 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_19[6:0]                        ), //i
    .adder_data         (transposeCore_84_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_85_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_86 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_20[6:0]                        ), //i
    .adder_data         (transposeCore_85_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_86_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_87 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_21[6:0]                        ), //i
    .adder_data         (transposeCore_86_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_87_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_88 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_22[6:0]                        ), //i
    .adder_data         (transposeCore_87_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_88_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_89 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_23[6:0]                        ), //i
    .adder_data         (transposeCore_88_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_89_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_90 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_24[6:0]                        ), //i
    .adder_data         (transposeCore_89_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_90_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_91 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_25[6:0]                        ), //i
    .adder_data         (transposeCore_90_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_91_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_92 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_26[6:0]                        ), //i
    .adder_data         (transposeCore_91_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_92_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_93 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_27[6:0]                        ), //i
    .adder_data         (transposeCore_92_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_93_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_94 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_28[6:0]                        ), //i
    .adder_data         (transposeCore_93_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_94_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_95 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_29[6:0]                        ), //i
    .adder_data         (transposeCore_94_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_95_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_96 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_30[6:0]                        ), //i
    .adder_data         (transposeCore_95_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_96_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_97 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_31[6:0]                        ), //i
    .adder_data         (transposeCore_96_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_97_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_98 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_32[6:0]                        ), //i
    .adder_data         (transposeCore_97_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_98_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_99 (
    .input_data         (raw_data_payload_1[11:0]                ), //i
    .coff_data          (coff_mem_0[6:0]                         ), //i
    .adder_data         (19'h0                                   ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_99_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_100 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_1[6:0]                          ), //i
    .adder_data         (transposeCore_99_next_adder_data[18:0]   ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_100_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_101 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_2[6:0]                          ), //i
    .adder_data         (transposeCore_100_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_101_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_102 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_3[6:0]                          ), //i
    .adder_data         (transposeCore_101_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_102_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_103 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_4[6:0]                          ), //i
    .adder_data         (transposeCore_102_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_103_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_104 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_5[6:0]                          ), //i
    .adder_data         (transposeCore_103_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_104_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_105 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_6[6:0]                          ), //i
    .adder_data         (transposeCore_104_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_105_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_106 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_7[6:0]                          ), //i
    .adder_data         (transposeCore_105_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_106_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_107 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_8[6:0]                          ), //i
    .adder_data         (transposeCore_106_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_107_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_108 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_9[6:0]                          ), //i
    .adder_data         (transposeCore_107_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_108_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_109 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_10[6:0]                         ), //i
    .adder_data         (transposeCore_108_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_109_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_110 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_11[6:0]                         ), //i
    .adder_data         (transposeCore_109_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_110_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_111 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_12[6:0]                         ), //i
    .adder_data         (transposeCore_110_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_111_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_112 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_13[6:0]                         ), //i
    .adder_data         (transposeCore_111_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_112_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_113 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_14[6:0]                         ), //i
    .adder_data         (transposeCore_112_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_113_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_114 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_15[6:0]                         ), //i
    .adder_data         (transposeCore_113_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_114_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_115 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_16[6:0]                         ), //i
    .adder_data         (transposeCore_114_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_115_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_116 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_17[6:0]                         ), //i
    .adder_data         (transposeCore_115_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_116_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_117 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_18[6:0]                         ), //i
    .adder_data         (transposeCore_116_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_117_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_118 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_19[6:0]                         ), //i
    .adder_data         (transposeCore_117_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_118_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_119 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_20[6:0]                         ), //i
    .adder_data         (transposeCore_118_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_119_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_120 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_21[6:0]                         ), //i
    .adder_data         (transposeCore_119_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_120_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_121 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_22[6:0]                         ), //i
    .adder_data         (transposeCore_120_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_121_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_122 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_23[6:0]                         ), //i
    .adder_data         (transposeCore_121_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_122_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_123 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_24[6:0]                         ), //i
    .adder_data         (transposeCore_122_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_123_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_124 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_25[6:0]                         ), //i
    .adder_data         (transposeCore_123_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_124_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_125 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_26[6:0]                         ), //i
    .adder_data         (transposeCore_124_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_125_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_126 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_27[6:0]                         ), //i
    .adder_data         (transposeCore_125_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_126_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_127 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_28[6:0]                         ), //i
    .adder_data         (transposeCore_126_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_127_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_128 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_29[6:0]                         ), //i
    .adder_data         (transposeCore_127_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_128_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_129 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_30[6:0]                         ), //i
    .adder_data         (transposeCore_128_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_129_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_130 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_31[6:0]                         ), //i
    .adder_data         (transposeCore_129_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_130_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_131 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_32[6:0]                         ), //i
    .adder_data         (transposeCore_130_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_131_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  assign filtered_data_payload_0 = transposeCore_98_next_adder_data;
  assign filtered_data_valid_vec_0 = raw_data_valid;
  assign filtered_data_payload_1 = transposeCore_131_next_adder_data;
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
  wire                when_Stream_l954;
  wire       [7:0]    logic_ptrDif;
  reg [16:0] logic_ram [0:135];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {7'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {7'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (8'h88 + logic_ptrDif);
  assign _zz_io_availability = (8'h88 + _zz_io_availability_1);
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 8'h87);
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 8'h87);
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
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 8'h88 : 8'h0);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 8'h0 : 8'h88);
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
  always @(posedge clk) begin
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
