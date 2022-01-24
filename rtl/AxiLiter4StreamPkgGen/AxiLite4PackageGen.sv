// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4PackageGen
// Git hash  : e700e7347423171eccd7b05bac962965acefbb15



module AxiLite4PackageGen (
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
  input               raw_data_stream_valid,
  output              raw_data_stream_ready,
  input               raw_data_stream_payload_last,
  input      [31:0]   raw_data_stream_payload_fragment_data,
  input      [3:0]    raw_data_stream_payload_fragment_strb,
  output              pkg_data_valid,
  input               pkg_data_ready,
  output              pkg_data_payload_last,
  output     [7:0]    pkg_data_payload_fragment,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               resetn
);
  wire       [11:0]   rfClockArea_stream_package_gen_slices_cnt;
  wire                rfClockArea_stream_package_gen_raw_data_stream_ready;
  wire                rfClockArea_stream_package_gen_pkg_data_valid;
  wire                rfClockArea_stream_package_gen_pkg_data_payload_last;
  wire       [7:0]    rfClockArea_stream_package_gen_pkg_data_payload_fragment;
  wire       [11:0]   clkCrossing_2_dataOut;
  wire       [11:0]   clkCrossing_3_dataOut;
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
  wire       [11:0]   __slices_limit;
  wire       [11:0]   __slices_cnt;
  reg        [11:0]   __slices_limit_driver;

  StreamPkgGen rfClockArea_stream_package_gen (
    .slices_limit                             (clkCrossing_2_dataOut                                     ), //i
    .slices_cnt                               (rfClockArea_stream_package_gen_slices_cnt                 ), //o
    .raw_data_stream_valid                    (raw_data_stream_valid                                     ), //i
    .raw_data_stream_ready                    (rfClockArea_stream_package_gen_raw_data_stream_ready      ), //o
    .raw_data_stream_payload_last             (raw_data_stream_payload_last                              ), //i
    .raw_data_stream_payload_fragment_data    (raw_data_stream_payload_fragment_data                     ), //i
    .raw_data_stream_payload_fragment_strb    (raw_data_stream_payload_fragment_strb                     ), //i
    .pkg_data_valid                           (rfClockArea_stream_package_gen_pkg_data_valid             ), //o
    .pkg_data_ready                           (pkg_data_ready                                            ), //i
    .pkg_data_payload_last                    (rfClockArea_stream_package_gen_pkg_data_payload_last      ), //o
    .pkg_data_payload_fragment                (rfClockArea_stream_package_gen_pkg_data_payload_fragment  ), //o
    .rf_clk                                   (rf_clk                                                    ), //i
    .rf_resetn                                (rf_resetn                                                 )  //i
  );
  ClkCrossing clkCrossing_2 (
    .dataIn       (__slices_limit         ), //i
    .dataOut      (clkCrossing_2_dataOut  ), //o
    .clk          (clk                    ), //i
    .resetn       (resetn                 ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  ClkCrossing_1 clkCrossing_3 (
    .dataIn       (rfClockArea_stream_package_gen_slices_cnt  ), //i
    .dataOut      (clkCrossing_3_dataOut                      ), //o
    .rf_clk       (rf_clk                                     ), //i
    .rf_resetn    (rf_resetn                                  ), //i
    .clk          (clk                                        ), //i
    .resetn       (resetn                                     )  //i
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
        readRsp_data[11 : 0] = __slices_limit_driver;
      end
      8'h04 : begin
        readRsp_data[11 : 0] = __slices_cnt;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign raw_data_stream_ready = rfClockArea_stream_package_gen_raw_data_stream_ready;
  assign pkg_data_valid = rfClockArea_stream_package_gen_pkg_data_valid;
  assign pkg_data_payload_last = rfClockArea_stream_package_gen_pkg_data_payload_last;
  assign pkg_data_payload_fragment = rfClockArea_stream_package_gen_pkg_data_payload_fragment;
  assign __slices_limit = __slices_limit_driver;
  assign __slices_cnt = clkCrossing_3_dataOut;
  always @(posedge clk) begin
    if(!resetn) begin
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
          __slices_limit_driver <= axil4Ctrl_wdata[11 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module ClkCrossing_1 (
  input      [11:0]   dataIn,
  output     [11:0]   dataOut,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               resetn
);
  reg        [11:0]   area_clkI_reg;
  (* async_reg = "true" *) reg        [11:0]   area_clkO_buf0;
  reg        [11:0]   area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge rf_clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module ClkCrossing (
  input      [11:0]   dataIn,
  output     [11:0]   dataOut,
  input               clk,
  input               resetn,
  input               rf_clk,
  input               rf_resetn
);
  reg        [11:0]   area_clkI_reg;
  (* async_reg = "true" *) reg        [11:0]   area_clkO_buf0;
  reg        [11:0]   area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge rf_clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module StreamPkgGen (
  input      [11:0]   slices_limit,
  output     [11:0]   slices_cnt,
  input               raw_data_stream_valid,
  output              raw_data_stream_ready,
  input               raw_data_stream_payload_last,
  input      [31:0]   raw_data_stream_payload_fragment_data,
  input      [3:0]    raw_data_stream_payload_fragment_strb,
  output              pkg_data_valid,
  input               pkg_data_ready,
  output              pkg_data_payload_last,
  output     [7:0]    pkg_data_payload_fragment,
  input               rf_clk,
  input               rf_resetn
);
  wire                split_core_raw_data_ready;
  wire                split_core_split_data_valid;
  wire       [7:0]    split_core_split_data_payload;
  wire       [11:0]   _zz_pkg_data_payload_last;
  wire       [11:0]   _zz_pkg_slices_cnt;
  wire       [11:0]   _zz_pkg_slices_cnt_1;
  reg        [3:0]    strb_buf;
  reg        [11:0]   pkg_slices_cnt;
  wire                bit_valid;
  wire                raw_data_stream_fire;
  wire                split_core_split_data_fire;

  assign _zz_pkg_data_payload_last = (slices_limit - 12'h001);
  assign _zz_pkg_slices_cnt = (slices_limit - 12'h001);
  assign _zz_pkg_slices_cnt_1 = (pkg_slices_cnt + 12'h001);
  StreamPayloadSplit split_core (
    .raw_data_valid        (raw_data_stream_valid                  ), //i
    .raw_data_ready        (split_core_raw_data_ready              ), //o
    .raw_data_payload      (raw_data_stream_payload_fragment_data  ), //i
    .split_data_valid      (split_core_split_data_valid            ), //o
    .split_data_ready      (pkg_data_ready                         ), //i
    .split_data_payload    (split_core_split_data_payload          ), //o
    .rf_clk                (rf_clk                                 ), //i
    .rf_resetn             (rf_resetn                              )  //i
  );
  assign bit_valid = strb_buf[0];
  assign raw_data_stream_ready = split_core_raw_data_ready;
  assign pkg_data_valid = (split_core_split_data_valid && bit_valid);
  assign pkg_data_payload_fragment = split_core_split_data_payload;
  assign pkg_data_payload_last = (pkg_slices_cnt == _zz_pkg_data_payload_last);
  assign raw_data_stream_fire = (raw_data_stream_valid && raw_data_stream_ready);
  assign split_core_split_data_fire = (split_core_split_data_valid && pkg_data_ready);
  assign slices_cnt = pkg_slices_cnt;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      pkg_slices_cnt <= 12'h0;
    end else begin
      if(!raw_data_stream_fire) begin
        if(split_core_split_data_fire) begin
          pkg_slices_cnt <= ((pkg_slices_cnt == _zz_pkg_slices_cnt) ? 12'h0 : _zz_pkg_slices_cnt_1);
        end
      end
    end
  end

  always @(posedge rf_clk) begin
    if(raw_data_stream_fire) begin
      strb_buf <= raw_data_stream_payload_fragment_strb;
    end else begin
      if(split_core_split_data_fire) begin
        strb_buf <= (strb_buf >>> 1);
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
  input               rf_clk,
  input               rf_resetn
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
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
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

  always @(posedge rf_clk) begin
    if(raw_data_fire) begin
      data_buf <= raw_data_payload;
    end else begin
      if(split_data_fire) begin
        data_buf <= (data_buf >>> 8);
      end
    end
  end


endmodule
