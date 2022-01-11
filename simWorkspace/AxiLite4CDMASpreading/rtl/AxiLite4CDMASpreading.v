// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4CDMASpreading
// Git hash  : 67f129201e20f87ae1cc1df1af41955d77102f75



module AxiLite4CDMASpreading (
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
  input               base_iq_valid,
  output              base_iq_ready,
  input      [15:0]   base_iq_payload_cha_i,
  input      [15:0]   base_iq_payload_cha_q,
  output              mod_iq_valid,
  output     [15:0]   mod_iq_payload_cha_i,
  output     [15:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               reset
);
  wire                rfClockArea_cdma_spread_base_iq_ready;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_0_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_1_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_2_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_3_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_4_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_5_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_6_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_7_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_q;
  wire                rfClockArea_cdma_code_sum_mod_iq_valid;
  wire       [15:0]   rfClockArea_cdma_code_sum_mod_iq_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_code_sum_mod_iq_payload_cha_q;
  wire                clkCrossing_5_dataOut;
  wire                clkCrossing_6_dataOut;
  wire       [2:0]    clkCrossing_7_dataOut;
  wire       [7:0]    clkCrossing_8_dataOut;
  wire       [2:0]    clkCrossing_9_dataOut;
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
  wire                cdma_spread_bridge_clc;
  reg                 cdma_spread_bridge_clc_driver;
  reg                 _zz_dataIn;
  reg        [2:0]    _zz_dataIn_1;
  reg        [7:0]    _zz_dataIn_2;
  reg        [2:0]    _zz_dataIn_3;

  CDMASpreading rfClockArea_cdma_spread (
    .w_en                           (clkCrossing_6_dataOut                                ), //i
    .w_addr                         (clkCrossing_7_dataOut                                ), //i
    .w_data                         (clkCrossing_8_dataOut                                ), //i
    .clc                            (clkCrossing_5_dataOut                                ), //i
    .cnt_limit                      (clkCrossing_9_dataOut                                ), //i
    .base_iq_valid                  (base_iq_valid                                        ), //i
    .base_iq_ready                  (rfClockArea_cdma_spread_base_iq_ready                ), //o
    .base_iq_payload_cha_i          (base_iq_payload_cha_i                                ), //i
    .base_iq_payload_cha_q          (base_iq_payload_cha_q                                ), //i
    .mod_sub_iqs_0_valid            (rfClockArea_cdma_spread_mod_sub_iqs_0_valid          ), //o
    .mod_sub_iqs_0_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_i  ), //o
    .mod_sub_iqs_0_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_q  ), //o
    .mod_sub_iqs_1_valid            (rfClockArea_cdma_spread_mod_sub_iqs_1_valid          ), //o
    .mod_sub_iqs_1_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_i  ), //o
    .mod_sub_iqs_1_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_q  ), //o
    .mod_sub_iqs_2_valid            (rfClockArea_cdma_spread_mod_sub_iqs_2_valid          ), //o
    .mod_sub_iqs_2_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_i  ), //o
    .mod_sub_iqs_2_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_q  ), //o
    .mod_sub_iqs_3_valid            (rfClockArea_cdma_spread_mod_sub_iqs_3_valid          ), //o
    .mod_sub_iqs_3_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_i  ), //o
    .mod_sub_iqs_3_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_q  ), //o
    .mod_sub_iqs_4_valid            (rfClockArea_cdma_spread_mod_sub_iqs_4_valid          ), //o
    .mod_sub_iqs_4_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_i  ), //o
    .mod_sub_iqs_4_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_q  ), //o
    .mod_sub_iqs_5_valid            (rfClockArea_cdma_spread_mod_sub_iqs_5_valid          ), //o
    .mod_sub_iqs_5_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_i  ), //o
    .mod_sub_iqs_5_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_q  ), //o
    .mod_sub_iqs_6_valid            (rfClockArea_cdma_spread_mod_sub_iqs_6_valid          ), //o
    .mod_sub_iqs_6_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_i  ), //o
    .mod_sub_iqs_6_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_q  ), //o
    .mod_sub_iqs_7_valid            (rfClockArea_cdma_spread_mod_sub_iqs_7_valid          ), //o
    .mod_sub_iqs_7_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_i  ), //o
    .mod_sub_iqs_7_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_q  ), //o
    .rf_clk                         (rf_clk                                               ), //i
    .rf_resetn                      (rf_resetn                                            )  //i
  );
  CodeCompose rfClockArea_cdma_code_sum (
    .mod_sub_iqs_0_valid            (rfClockArea_cdma_spread_mod_sub_iqs_0_valid          ), //i
    .mod_sub_iqs_0_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_i  ), //i
    .mod_sub_iqs_0_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_q  ), //i
    .mod_sub_iqs_1_valid            (rfClockArea_cdma_spread_mod_sub_iqs_1_valid          ), //i
    .mod_sub_iqs_1_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_i  ), //i
    .mod_sub_iqs_1_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_q  ), //i
    .mod_sub_iqs_2_valid            (rfClockArea_cdma_spread_mod_sub_iqs_2_valid          ), //i
    .mod_sub_iqs_2_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_i  ), //i
    .mod_sub_iqs_2_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_q  ), //i
    .mod_sub_iqs_3_valid            (rfClockArea_cdma_spread_mod_sub_iqs_3_valid          ), //i
    .mod_sub_iqs_3_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_i  ), //i
    .mod_sub_iqs_3_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_q  ), //i
    .mod_sub_iqs_4_valid            (rfClockArea_cdma_spread_mod_sub_iqs_4_valid          ), //i
    .mod_sub_iqs_4_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_i  ), //i
    .mod_sub_iqs_4_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_q  ), //i
    .mod_sub_iqs_5_valid            (rfClockArea_cdma_spread_mod_sub_iqs_5_valid          ), //i
    .mod_sub_iqs_5_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_i  ), //i
    .mod_sub_iqs_5_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_q  ), //i
    .mod_sub_iqs_6_valid            (rfClockArea_cdma_spread_mod_sub_iqs_6_valid          ), //i
    .mod_sub_iqs_6_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_i  ), //i
    .mod_sub_iqs_6_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_q  ), //i
    .mod_sub_iqs_7_valid            (rfClockArea_cdma_spread_mod_sub_iqs_7_valid          ), //i
    .mod_sub_iqs_7_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_i  ), //i
    .mod_sub_iqs_7_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_q  ), //i
    .mod_iq_valid                   (rfClockArea_cdma_code_sum_mod_iq_valid               ), //o
    .mod_iq_payload_cha_i           (rfClockArea_cdma_code_sum_mod_iq_payload_cha_i       ), //o
    .mod_iq_payload_cha_q           (rfClockArea_cdma_code_sum_mod_iq_payload_cha_q       ), //o
    .rf_clk                         (rf_clk                                               ), //i
    .rf_resetn                      (rf_resetn                                            )  //i
  );
  ClkCrossing clkCrossing_5 (
    .dataIn       (cdma_spread_bridge_clc  ), //i
    .dataOut      (clkCrossing_5_dataOut   ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing clkCrossing_6 (
    .dataIn       (_zz_dataIn             ), //i
    .dataOut      (clkCrossing_6_dataOut  ), //o
    .clk          (clk                    ), //i
    .reset        (reset                  ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  ClkCrossing_2 clkCrossing_7 (
    .dataIn       (_zz_dataIn_1           ), //i
    .dataOut      (clkCrossing_7_dataOut  ), //o
    .clk          (clk                    ), //i
    .reset        (reset                  ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  ClkCrossing_3 clkCrossing_8 (
    .dataIn       (_zz_dataIn_2           ), //i
    .dataOut      (clkCrossing_8_dataOut  ), //o
    .clk          (clk                    ), //i
    .reset        (reset                  ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  ClkCrossing_2 clkCrossing_9 (
    .dataIn       (_zz_dataIn_3           ), //i
    .dataOut      (clkCrossing_9_dataOut  ), //o
    .clk          (clk                    ), //i
    .reset        (reset                  ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  assign base_iq_ready = rfClockArea_cdma_spread_base_iq_ready;
  assign mod_iq_valid = rfClockArea_cdma_code_sum_mod_iq_valid;
  assign mod_iq_payload_cha_i = rfClockArea_cdma_code_sum_mod_iq_payload_cha_i;
  assign mod_iq_payload_cha_q = rfClockArea_cdma_code_sum_mod_iq_payload_cha_q;
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
        readRsp_data[0 : 0] = cdma_spread_bridge_clc_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign cdma_spread_bridge_clc = cdma_spread_bridge_clc_driver;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      cdma_spread_bridge_clc_driver <= 1'b1;
      _zz_dataIn <= 1'b0;
      _zz_dataIn_1 <= 3'b000;
      _zz_dataIn_2 <= 8'h0;
    end else begin
      if(_zz_writeJoinEvent_translated_ready) begin
        _zz_axil4Ctrl_bvalid_2 <= (writeJoinEvent_translated_valid && _zz_axil4Ctrl_bvalid);
      end
      if(axil4Ctrl_arready) begin
        axil4Ctrl_ar_rValid <= axil4Ctrl_arvalid;
      end
      case(axil4Ctrl_awaddr)
        8'h0 : begin
          if(writeOccur) begin
            cdma_spread_bridge_clc_driver <= axil4Ctrl_wdata[0];
            _zz_dataIn <= axil4Ctrl_wdata[1];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            _zz_dataIn_1 <= axil4Ctrl_wdata[2 : 0];
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            _zz_dataIn_2 <= axil4Ctrl_wdata[7 : 0];
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
      8'h0c : begin
        if(writeOccur) begin
          _zz_dataIn_3 <= axil4Ctrl_wdata[2 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule

//ClkCrossing_2 replaced by ClkCrossing_2

module ClkCrossing_3 (
  input      [7:0]    dataIn,
  output     [7:0]    dataOut,
  input               clk,
  input               reset,
  input               rf_clk,
  input               rf_resetn
);
  reg        [7:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [7:0]    area_clkO_buf0;
  reg        [7:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge rf_clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module ClkCrossing_2 (
  input      [2:0]    dataIn,
  output     [2:0]    dataOut,
  input               clk,
  input               reset,
  input               rf_clk,
  input               rf_resetn
);
  reg        [2:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [2:0]    area_clkO_buf0;
  reg        [2:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge rf_clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

//ClkCrossing replaced by ClkCrossing

module ClkCrossing (
  input               dataIn,
  output              dataOut,
  input               clk,
  input               reset,
  input               rf_clk,
  input               rf_resetn
);
  reg                 area_clkI_reg;
  (* async_reg = "true" *) reg                 area_clkO_buf0;
  reg                 area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge rf_clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module CodeCompose (
  input               mod_sub_iqs_0_valid,
  input      [15:0]   mod_sub_iqs_0_payload_cha_i,
  input      [15:0]   mod_sub_iqs_0_payload_cha_q,
  input               mod_sub_iqs_1_valid,
  input      [15:0]   mod_sub_iqs_1_payload_cha_i,
  input      [15:0]   mod_sub_iqs_1_payload_cha_q,
  input               mod_sub_iqs_2_valid,
  input      [15:0]   mod_sub_iqs_2_payload_cha_i,
  input      [15:0]   mod_sub_iqs_2_payload_cha_q,
  input               mod_sub_iqs_3_valid,
  input      [15:0]   mod_sub_iqs_3_payload_cha_i,
  input      [15:0]   mod_sub_iqs_3_payload_cha_q,
  input               mod_sub_iqs_4_valid,
  input      [15:0]   mod_sub_iqs_4_payload_cha_i,
  input      [15:0]   mod_sub_iqs_4_payload_cha_q,
  input               mod_sub_iqs_5_valid,
  input      [15:0]   mod_sub_iqs_5_payload_cha_i,
  input      [15:0]   mod_sub_iqs_5_payload_cha_q,
  input               mod_sub_iqs_6_valid,
  input      [15:0]   mod_sub_iqs_6_payload_cha_i,
  input      [15:0]   mod_sub_iqs_6_payload_cha_q,
  input               mod_sub_iqs_7_valid,
  input      [15:0]   mod_sub_iqs_7_payload_cha_i,
  input      [15:0]   mod_sub_iqs_7_payload_cha_q,
  output              mod_iq_valid,
  output     [15:0]   mod_iq_payload_cha_i,
  output     [15:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_i_1;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_2;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_3;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_i_4;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_5;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_i_6;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_7;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_i_8;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_9;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_10;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_i_11;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_12;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_i_13;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_1_1;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_i_1_2;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_1_3;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_1_4;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_i_1_5;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_1_6;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_i_1_7;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_1_8;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_i_1_9;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_1_10;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_1_11;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_i_1_12;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_1_13;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_i_1_14;
  wire       [15:0]   _zz_mod_iq_payload_cha_i_2;
  wire       [12:0]   _zz_mod_iq_payload_cha_i_3;
  wire       [15:0]   _zz_mod_iq_payload_cha_i_4;
  wire       [12:0]   _zz_mod_iq_payload_cha_i_5;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_q_1;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_2;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_3;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_q_4;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_5;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_q_6;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_7;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_q_8;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_9;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_10;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_q_11;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_12;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_q_13;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_1_1;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_q_1_2;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_1_3;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_1_4;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_q_1_5;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_1_6;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_q_1_7;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_1_8;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_q_1_9;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_1_10;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_1_11;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_q_1_12;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_1_13;
  wire       [12:0]   _zz__zz_mod_iq_payload_cha_q_1_14;
  wire       [15:0]   _zz_mod_iq_payload_cha_q_2;
  wire       [12:0]   _zz_mod_iq_payload_cha_q_3;
  wire       [15:0]   _zz_mod_iq_payload_cha_q_4;
  wire       [12:0]   _zz_mod_iq_payload_cha_q_5;
  wire       [15:0]   sub_i_data_vec_0;
  wire       [15:0]   sub_i_data_vec_1;
  wire       [15:0]   sub_i_data_vec_2;
  wire       [15:0]   sub_i_data_vec_3;
  wire       [15:0]   sub_i_data_vec_4;
  wire       [15:0]   sub_i_data_vec_5;
  wire       [15:0]   sub_i_data_vec_6;
  wire       [15:0]   sub_i_data_vec_7;
  wire       [15:0]   sub_q_data_vec_0;
  wire       [15:0]   sub_q_data_vec_1;
  wire       [15:0]   sub_q_data_vec_2;
  wire       [15:0]   sub_q_data_vec_3;
  wire       [15:0]   sub_q_data_vec_4;
  wire       [15:0]   sub_q_data_vec_5;
  wire       [15:0]   sub_q_data_vec_6;
  wire       [15:0]   sub_q_data_vec_7;
  wire                sub_iqs_valid_vec_0;
  wire                sub_iqs_valid_vec_1;
  wire                sub_iqs_valid_vec_2;
  wire                sub_iqs_valid_vec_3;
  wire                sub_iqs_valid_vec_4;
  wire                sub_iqs_valid_vec_5;
  wire                sub_iqs_valid_vec_6;
  wire                sub_iqs_valid_vec_7;
  reg        [15:0]   _zz_mod_iq_payload_cha_i;
  reg        [15:0]   _zz_mod_iq_payload_cha_i_1;
  reg        [15:0]   _zz_mod_iq_payload_cha_q;
  reg        [15:0]   _zz_mod_iq_payload_cha_q_1;
  reg                 _zz_mod_iq_valid;
  reg                 _zz_mod_iq_valid_1;

  assign _zz__zz_mod_iq_payload_cha_i_1 = (_zz__zz_mod_iq_payload_cha_i_2 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_i = {{3{_zz__zz_mod_iq_payload_cha_i_1[12]}}, _zz__zz_mod_iq_payload_cha_i_1};
  assign _zz__zz_mod_iq_payload_cha_i_2 = ($signed(_zz__zz_mod_iq_payload_cha_i_3) + $signed(_zz__zz_mod_iq_payload_cha_i_5));
  assign _zz__zz_mod_iq_payload_cha_i_4 = (sub_i_data_vec_0 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_i_3 = {{3{_zz__zz_mod_iq_payload_cha_i_4[12]}}, _zz__zz_mod_iq_payload_cha_i_4};
  assign _zz__zz_mod_iq_payload_cha_i_6 = (sub_i_data_vec_1 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_i_5 = {{3{_zz__zz_mod_iq_payload_cha_i_6[12]}}, _zz__zz_mod_iq_payload_cha_i_6};
  assign _zz__zz_mod_iq_payload_cha_i_8 = (_zz__zz_mod_iq_payload_cha_i_9 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_i_7 = {{3{_zz__zz_mod_iq_payload_cha_i_8[12]}}, _zz__zz_mod_iq_payload_cha_i_8};
  assign _zz__zz_mod_iq_payload_cha_i_9 = ($signed(_zz__zz_mod_iq_payload_cha_i_10) + $signed(_zz__zz_mod_iq_payload_cha_i_12));
  assign _zz__zz_mod_iq_payload_cha_i_11 = (sub_i_data_vec_2 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_i_10 = {{3{_zz__zz_mod_iq_payload_cha_i_11[12]}}, _zz__zz_mod_iq_payload_cha_i_11};
  assign _zz__zz_mod_iq_payload_cha_i_13 = (sub_i_data_vec_3 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_i_12 = {{3{_zz__zz_mod_iq_payload_cha_i_13[12]}}, _zz__zz_mod_iq_payload_cha_i_13};
  assign _zz__zz_mod_iq_payload_cha_i_1_2 = (_zz__zz_mod_iq_payload_cha_i_1_3 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_i_1_1 = {{3{_zz__zz_mod_iq_payload_cha_i_1_2[12]}}, _zz__zz_mod_iq_payload_cha_i_1_2};
  assign _zz__zz_mod_iq_payload_cha_i_1_3 = ($signed(_zz__zz_mod_iq_payload_cha_i_1_4) + $signed(_zz__zz_mod_iq_payload_cha_i_1_6));
  assign _zz__zz_mod_iq_payload_cha_i_1_5 = (sub_i_data_vec_4 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_i_1_4 = {{3{_zz__zz_mod_iq_payload_cha_i_1_5[12]}}, _zz__zz_mod_iq_payload_cha_i_1_5};
  assign _zz__zz_mod_iq_payload_cha_i_1_7 = (sub_i_data_vec_5 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_i_1_6 = {{3{_zz__zz_mod_iq_payload_cha_i_1_7[12]}}, _zz__zz_mod_iq_payload_cha_i_1_7};
  assign _zz__zz_mod_iq_payload_cha_i_1_9 = (_zz__zz_mod_iq_payload_cha_i_1_10 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_i_1_8 = {{3{_zz__zz_mod_iq_payload_cha_i_1_9[12]}}, _zz__zz_mod_iq_payload_cha_i_1_9};
  assign _zz__zz_mod_iq_payload_cha_i_1_10 = ($signed(_zz__zz_mod_iq_payload_cha_i_1_11) + $signed(_zz__zz_mod_iq_payload_cha_i_1_13));
  assign _zz__zz_mod_iq_payload_cha_i_1_12 = (sub_i_data_vec_6 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_i_1_11 = {{3{_zz__zz_mod_iq_payload_cha_i_1_12[12]}}, _zz__zz_mod_iq_payload_cha_i_1_12};
  assign _zz__zz_mod_iq_payload_cha_i_1_14 = (sub_i_data_vec_7 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_i_1_13 = {{3{_zz__zz_mod_iq_payload_cha_i_1_14[12]}}, _zz__zz_mod_iq_payload_cha_i_1_14};
  assign _zz_mod_iq_payload_cha_i_3 = (_zz_mod_iq_payload_cha_i >>> 3);
  assign _zz_mod_iq_payload_cha_i_2 = {{3{_zz_mod_iq_payload_cha_i_3[12]}}, _zz_mod_iq_payload_cha_i_3};
  assign _zz_mod_iq_payload_cha_i_5 = (_zz_mod_iq_payload_cha_i_1 >>> 3);
  assign _zz_mod_iq_payload_cha_i_4 = {{3{_zz_mod_iq_payload_cha_i_5[12]}}, _zz_mod_iq_payload_cha_i_5};
  assign _zz__zz_mod_iq_payload_cha_q_1 = (_zz__zz_mod_iq_payload_cha_q_2 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_q = {{3{_zz__zz_mod_iq_payload_cha_q_1[12]}}, _zz__zz_mod_iq_payload_cha_q_1};
  assign _zz__zz_mod_iq_payload_cha_q_2 = ($signed(_zz__zz_mod_iq_payload_cha_q_3) + $signed(_zz__zz_mod_iq_payload_cha_q_5));
  assign _zz__zz_mod_iq_payload_cha_q_4 = (sub_q_data_vec_0 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_q_3 = {{3{_zz__zz_mod_iq_payload_cha_q_4[12]}}, _zz__zz_mod_iq_payload_cha_q_4};
  assign _zz__zz_mod_iq_payload_cha_q_6 = (sub_q_data_vec_1 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_q_5 = {{3{_zz__zz_mod_iq_payload_cha_q_6[12]}}, _zz__zz_mod_iq_payload_cha_q_6};
  assign _zz__zz_mod_iq_payload_cha_q_8 = (_zz__zz_mod_iq_payload_cha_q_9 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_q_7 = {{3{_zz__zz_mod_iq_payload_cha_q_8[12]}}, _zz__zz_mod_iq_payload_cha_q_8};
  assign _zz__zz_mod_iq_payload_cha_q_9 = ($signed(_zz__zz_mod_iq_payload_cha_q_10) + $signed(_zz__zz_mod_iq_payload_cha_q_12));
  assign _zz__zz_mod_iq_payload_cha_q_11 = (sub_q_data_vec_2 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_q_10 = {{3{_zz__zz_mod_iq_payload_cha_q_11[12]}}, _zz__zz_mod_iq_payload_cha_q_11};
  assign _zz__zz_mod_iq_payload_cha_q_13 = (sub_q_data_vec_3 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_q_12 = {{3{_zz__zz_mod_iq_payload_cha_q_13[12]}}, _zz__zz_mod_iq_payload_cha_q_13};
  assign _zz__zz_mod_iq_payload_cha_q_1_2 = (_zz__zz_mod_iq_payload_cha_q_1_3 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_q_1_1 = {{3{_zz__zz_mod_iq_payload_cha_q_1_2[12]}}, _zz__zz_mod_iq_payload_cha_q_1_2};
  assign _zz__zz_mod_iq_payload_cha_q_1_3 = ($signed(_zz__zz_mod_iq_payload_cha_q_1_4) + $signed(_zz__zz_mod_iq_payload_cha_q_1_6));
  assign _zz__zz_mod_iq_payload_cha_q_1_5 = (sub_q_data_vec_4 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_q_1_4 = {{3{_zz__zz_mod_iq_payload_cha_q_1_5[12]}}, _zz__zz_mod_iq_payload_cha_q_1_5};
  assign _zz__zz_mod_iq_payload_cha_q_1_7 = (sub_q_data_vec_5 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_q_1_6 = {{3{_zz__zz_mod_iq_payload_cha_q_1_7[12]}}, _zz__zz_mod_iq_payload_cha_q_1_7};
  assign _zz__zz_mod_iq_payload_cha_q_1_9 = (_zz__zz_mod_iq_payload_cha_q_1_10 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_q_1_8 = {{3{_zz__zz_mod_iq_payload_cha_q_1_9[12]}}, _zz__zz_mod_iq_payload_cha_q_1_9};
  assign _zz__zz_mod_iq_payload_cha_q_1_10 = ($signed(_zz__zz_mod_iq_payload_cha_q_1_11) + $signed(_zz__zz_mod_iq_payload_cha_q_1_13));
  assign _zz__zz_mod_iq_payload_cha_q_1_12 = (sub_q_data_vec_6 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_q_1_11 = {{3{_zz__zz_mod_iq_payload_cha_q_1_12[12]}}, _zz__zz_mod_iq_payload_cha_q_1_12};
  assign _zz__zz_mod_iq_payload_cha_q_1_14 = (sub_q_data_vec_7 >>> 3);
  assign _zz__zz_mod_iq_payload_cha_q_1_13 = {{3{_zz__zz_mod_iq_payload_cha_q_1_14[12]}}, _zz__zz_mod_iq_payload_cha_q_1_14};
  assign _zz_mod_iq_payload_cha_q_3 = (_zz_mod_iq_payload_cha_q >>> 3);
  assign _zz_mod_iq_payload_cha_q_2 = {{3{_zz_mod_iq_payload_cha_q_3[12]}}, _zz_mod_iq_payload_cha_q_3};
  assign _zz_mod_iq_payload_cha_q_5 = (_zz_mod_iq_payload_cha_q_1 >>> 3);
  assign _zz_mod_iq_payload_cha_q_4 = {{3{_zz_mod_iq_payload_cha_q_5[12]}}, _zz_mod_iq_payload_cha_q_5};
  assign sub_i_data_vec_0 = mod_sub_iqs_0_payload_cha_i;
  assign sub_q_data_vec_0 = mod_sub_iqs_0_payload_cha_q;
  assign sub_iqs_valid_vec_0 = mod_sub_iqs_0_valid;
  assign sub_i_data_vec_1 = mod_sub_iqs_1_payload_cha_i;
  assign sub_q_data_vec_1 = mod_sub_iqs_1_payload_cha_q;
  assign sub_iqs_valid_vec_1 = mod_sub_iqs_1_valid;
  assign sub_i_data_vec_2 = mod_sub_iqs_2_payload_cha_i;
  assign sub_q_data_vec_2 = mod_sub_iqs_2_payload_cha_q;
  assign sub_iqs_valid_vec_2 = mod_sub_iqs_2_valid;
  assign sub_i_data_vec_3 = mod_sub_iqs_3_payload_cha_i;
  assign sub_q_data_vec_3 = mod_sub_iqs_3_payload_cha_q;
  assign sub_iqs_valid_vec_3 = mod_sub_iqs_3_valid;
  assign sub_i_data_vec_4 = mod_sub_iqs_4_payload_cha_i;
  assign sub_q_data_vec_4 = mod_sub_iqs_4_payload_cha_q;
  assign sub_iqs_valid_vec_4 = mod_sub_iqs_4_valid;
  assign sub_i_data_vec_5 = mod_sub_iqs_5_payload_cha_i;
  assign sub_q_data_vec_5 = mod_sub_iqs_5_payload_cha_q;
  assign sub_iqs_valid_vec_5 = mod_sub_iqs_5_valid;
  assign sub_i_data_vec_6 = mod_sub_iqs_6_payload_cha_i;
  assign sub_q_data_vec_6 = mod_sub_iqs_6_payload_cha_q;
  assign sub_iqs_valid_vec_6 = mod_sub_iqs_6_valid;
  assign sub_i_data_vec_7 = mod_sub_iqs_7_payload_cha_i;
  assign sub_q_data_vec_7 = mod_sub_iqs_7_payload_cha_q;
  assign sub_iqs_valid_vec_7 = mod_sub_iqs_7_valid;
  assign mod_iq_payload_cha_i = ($signed(_zz_mod_iq_payload_cha_i_2) + $signed(_zz_mod_iq_payload_cha_i_4));
  assign mod_iq_payload_cha_q = ($signed(_zz_mod_iq_payload_cha_q_2) + $signed(_zz_mod_iq_payload_cha_q_4));
  assign mod_iq_valid = (_zz_mod_iq_valid && _zz_mod_iq_valid_1);
  always @(posedge rf_clk) begin
    _zz_mod_iq_payload_cha_i <= ($signed(_zz__zz_mod_iq_payload_cha_i) + $signed(_zz__zz_mod_iq_payload_cha_i_7));
    _zz_mod_iq_payload_cha_i_1 <= ($signed(_zz__zz_mod_iq_payload_cha_i_1_1) + $signed(_zz__zz_mod_iq_payload_cha_i_1_8));
    _zz_mod_iq_payload_cha_q <= ($signed(_zz__zz_mod_iq_payload_cha_q) + $signed(_zz__zz_mod_iq_payload_cha_q_7));
    _zz_mod_iq_payload_cha_q_1 <= ($signed(_zz__zz_mod_iq_payload_cha_q_1_1) + $signed(_zz__zz_mod_iq_payload_cha_q_1_8));
    _zz_mod_iq_valid <= ((sub_iqs_valid_vec_0 && sub_iqs_valid_vec_1) && (sub_iqs_valid_vec_2 && sub_iqs_valid_vec_3));
    _zz_mod_iq_valid_1 <= ((sub_iqs_valid_vec_4 && sub_iqs_valid_vec_5) && (sub_iqs_valid_vec_6 && sub_iqs_valid_vec_7));
  end


endmodule

module CDMASpreading (
  input               w_en,
  input      [2:0]    w_addr,
  input      [7:0]    w_data,
  input               clc,
  input      [2:0]    cnt_limit,
  input               base_iq_valid,
  output              base_iq_ready,
  input      [15:0]   base_iq_payload_cha_i,
  input      [15:0]   base_iq_payload_cha_q,
  output              mod_sub_iqs_0_valid,
  output     [15:0]   mod_sub_iqs_0_payload_cha_i,
  output     [15:0]   mod_sub_iqs_0_payload_cha_q,
  output              mod_sub_iqs_1_valid,
  output     [15:0]   mod_sub_iqs_1_payload_cha_i,
  output     [15:0]   mod_sub_iqs_1_payload_cha_q,
  output              mod_sub_iqs_2_valid,
  output     [15:0]   mod_sub_iqs_2_payload_cha_i,
  output     [15:0]   mod_sub_iqs_2_payload_cha_q,
  output              mod_sub_iqs_3_valid,
  output     [15:0]   mod_sub_iqs_3_payload_cha_i,
  output     [15:0]   mod_sub_iqs_3_payload_cha_q,
  output              mod_sub_iqs_4_valid,
  output     [15:0]   mod_sub_iqs_4_payload_cha_i,
  output     [15:0]   mod_sub_iqs_4_payload_cha_q,
  output              mod_sub_iqs_5_valid,
  output     [15:0]   mod_sub_iqs_5_payload_cha_i,
  output     [15:0]   mod_sub_iqs_5_payload_cha_q,
  output              mod_sub_iqs_6_valid,
  output     [15:0]   mod_sub_iqs_6_payload_cha_i,
  output     [15:0]   mod_sub_iqs_6_payload_cha_q,
  output              mod_sub_iqs_7_valid,
  output     [15:0]   mod_sub_iqs_7_payload_cha_i,
  output     [15:0]   mod_sub_iqs_7_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [7:0]    _zz_code_map_port0;
  wire       [7:0]    _zz_code_map_port1;
  wire       [7:0]    _zz_code_map_port2;
  wire       [7:0]    _zz_code_map_port3;
  wire       [7:0]    _zz_code_map_port4;
  wire       [7:0]    _zz_code_map_port5;
  wire       [7:0]    _zz_code_map_port6;
  wire       [7:0]    _zz_code_map_port7;
  wire                computeUnit_8_mod_iq_valid;
  wire       [15:0]   computeUnit_8_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_8_mod_iq_payload_cha_q;
  wire                computeUnit_9_mod_iq_valid;
  wire       [15:0]   computeUnit_9_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_9_mod_iq_payload_cha_q;
  wire                computeUnit_10_mod_iq_valid;
  wire       [15:0]   computeUnit_10_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_10_mod_iq_payload_cha_q;
  wire                computeUnit_11_mod_iq_valid;
  wire       [15:0]   computeUnit_11_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_11_mod_iq_payload_cha_q;
  wire                computeUnit_12_mod_iq_valid;
  wire       [15:0]   computeUnit_12_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_12_mod_iq_payload_cha_q;
  wire                computeUnit_13_mod_iq_valid;
  wire       [15:0]   computeUnit_13_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_13_mod_iq_payload_cha_q;
  wire                computeUnit_14_mod_iq_valid;
  wire       [15:0]   computeUnit_14_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_14_mod_iq_payload_cha_q;
  wire                computeUnit_15_mod_iq_valid;
  wire       [15:0]   computeUnit_15_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_15_mod_iq_payload_cha_q;
  wire       [2:0]    _zz_cnt;
  reg                 _zz_1;
  reg        [2:0]    cnt;
  reg        [15:0]   flow_iq_data_cha_i;
  reg        [15:0]   flow_iq_data_cha_q;
  reg                 flow_iq_valid;
  reg                 _zz_code;
  reg                 _zz_code_1;
  reg                 _zz_code_2;
  reg                 _zz_code_3;
  reg                 _zz_code_4;
  reg                 _zz_code_5;
  reg                 _zz_code_6;
  reg                 _zz_code_7;
  wire                base_iq_fire;
  wire                when_CDMASpreading_l52;
  wire                when_CDMASpreading_l65;
  (* ram_style = "distributed" *) reg [7:0] code_map [0:7];

  assign _zz_cnt = (cnt + 3'b001);
  assign _zz_code_map_port0 = code_map[cnt];
  assign _zz_code_map_port1 = code_map[cnt];
  assign _zz_code_map_port2 = code_map[cnt];
  assign _zz_code_map_port3 = code_map[cnt];
  assign _zz_code_map_port4 = code_map[cnt];
  assign _zz_code_map_port5 = code_map[cnt];
  assign _zz_code_map_port6 = code_map[cnt];
  assign _zz_code_map_port7 = code_map[cnt];
  always @(posedge rf_clk) begin
    if(_zz_1) begin
      code_map[w_addr] <= w_data;
    end
  end

  ComputeUnit computeUnit_8 (
    .code                     (_zz_code                            ), //i
    .base_iq_valid            (flow_iq_valid                       ), //i
    .base_iq_payload_cha_i    (flow_iq_data_cha_i                  ), //i
    .base_iq_payload_cha_q    (flow_iq_data_cha_q                  ), //i
    .mod_iq_valid             (computeUnit_8_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_8_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_8_mod_iq_payload_cha_q  ), //o
    .rf_clk                   (rf_clk                              ), //i
    .rf_resetn                (rf_resetn                           )  //i
  );
  ComputeUnit computeUnit_9 (
    .code                     (_zz_code_1                          ), //i
    .base_iq_valid            (flow_iq_valid                       ), //i
    .base_iq_payload_cha_i    (flow_iq_data_cha_i                  ), //i
    .base_iq_payload_cha_q    (flow_iq_data_cha_q                  ), //i
    .mod_iq_valid             (computeUnit_9_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_9_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_9_mod_iq_payload_cha_q  ), //o
    .rf_clk                   (rf_clk                              ), //i
    .rf_resetn                (rf_resetn                           )  //i
  );
  ComputeUnit computeUnit_10 (
    .code                     (_zz_code_2                           ), //i
    .base_iq_valid            (flow_iq_valid                        ), //i
    .base_iq_payload_cha_i    (flow_iq_data_cha_i                   ), //i
    .base_iq_payload_cha_q    (flow_iq_data_cha_q                   ), //i
    .mod_iq_valid             (computeUnit_10_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_10_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_10_mod_iq_payload_cha_q  ), //o
    .rf_clk                   (rf_clk                               ), //i
    .rf_resetn                (rf_resetn                            )  //i
  );
  ComputeUnit computeUnit_11 (
    .code                     (_zz_code_3                           ), //i
    .base_iq_valid            (flow_iq_valid                        ), //i
    .base_iq_payload_cha_i    (flow_iq_data_cha_i                   ), //i
    .base_iq_payload_cha_q    (flow_iq_data_cha_q                   ), //i
    .mod_iq_valid             (computeUnit_11_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_11_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_11_mod_iq_payload_cha_q  ), //o
    .rf_clk                   (rf_clk                               ), //i
    .rf_resetn                (rf_resetn                            )  //i
  );
  ComputeUnit computeUnit_12 (
    .code                     (_zz_code_4                           ), //i
    .base_iq_valid            (flow_iq_valid                        ), //i
    .base_iq_payload_cha_i    (flow_iq_data_cha_i                   ), //i
    .base_iq_payload_cha_q    (flow_iq_data_cha_q                   ), //i
    .mod_iq_valid             (computeUnit_12_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_12_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_12_mod_iq_payload_cha_q  ), //o
    .rf_clk                   (rf_clk                               ), //i
    .rf_resetn                (rf_resetn                            )  //i
  );
  ComputeUnit computeUnit_13 (
    .code                     (_zz_code_5                           ), //i
    .base_iq_valid            (flow_iq_valid                        ), //i
    .base_iq_payload_cha_i    (flow_iq_data_cha_i                   ), //i
    .base_iq_payload_cha_q    (flow_iq_data_cha_q                   ), //i
    .mod_iq_valid             (computeUnit_13_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_13_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_13_mod_iq_payload_cha_q  ), //o
    .rf_clk                   (rf_clk                               ), //i
    .rf_resetn                (rf_resetn                            )  //i
  );
  ComputeUnit computeUnit_14 (
    .code                     (_zz_code_6                           ), //i
    .base_iq_valid            (flow_iq_valid                        ), //i
    .base_iq_payload_cha_i    (flow_iq_data_cha_i                   ), //i
    .base_iq_payload_cha_q    (flow_iq_data_cha_q                   ), //i
    .mod_iq_valid             (computeUnit_14_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_14_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_14_mod_iq_payload_cha_q  ), //o
    .rf_clk                   (rf_clk                               ), //i
    .rf_resetn                (rf_resetn                            )  //i
  );
  ComputeUnit computeUnit_15 (
    .code                     (_zz_code_7                           ), //i
    .base_iq_valid            (flow_iq_valid                        ), //i
    .base_iq_payload_cha_i    (flow_iq_data_cha_i                   ), //i
    .base_iq_payload_cha_q    (flow_iq_data_cha_q                   ), //i
    .mod_iq_valid             (computeUnit_15_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_15_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_15_mod_iq_payload_cha_q  ), //o
    .rf_clk                   (rf_clk                               ), //i
    .rf_resetn                (rf_resetn                            )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(w_en) begin
      _zz_1 = 1'b1;
    end
  end

  assign mod_sub_iqs_0_valid = computeUnit_8_mod_iq_valid;
  assign mod_sub_iqs_0_payload_cha_i = computeUnit_8_mod_iq_payload_cha_i;
  assign mod_sub_iqs_0_payload_cha_q = computeUnit_8_mod_iq_payload_cha_q;
  assign mod_sub_iqs_1_valid = computeUnit_9_mod_iq_valid;
  assign mod_sub_iqs_1_payload_cha_i = computeUnit_9_mod_iq_payload_cha_i;
  assign mod_sub_iqs_1_payload_cha_q = computeUnit_9_mod_iq_payload_cha_q;
  assign mod_sub_iqs_2_valid = computeUnit_10_mod_iq_valid;
  assign mod_sub_iqs_2_payload_cha_i = computeUnit_10_mod_iq_payload_cha_i;
  assign mod_sub_iqs_2_payload_cha_q = computeUnit_10_mod_iq_payload_cha_q;
  assign mod_sub_iqs_3_valid = computeUnit_11_mod_iq_valid;
  assign mod_sub_iqs_3_payload_cha_i = computeUnit_11_mod_iq_payload_cha_i;
  assign mod_sub_iqs_3_payload_cha_q = computeUnit_11_mod_iq_payload_cha_q;
  assign mod_sub_iqs_4_valid = computeUnit_12_mod_iq_valid;
  assign mod_sub_iqs_4_payload_cha_i = computeUnit_12_mod_iq_payload_cha_i;
  assign mod_sub_iqs_4_payload_cha_q = computeUnit_12_mod_iq_payload_cha_q;
  assign mod_sub_iqs_5_valid = computeUnit_13_mod_iq_valid;
  assign mod_sub_iqs_5_payload_cha_i = computeUnit_13_mod_iq_payload_cha_i;
  assign mod_sub_iqs_5_payload_cha_q = computeUnit_13_mod_iq_payload_cha_q;
  assign mod_sub_iqs_6_valid = computeUnit_14_mod_iq_valid;
  assign mod_sub_iqs_6_payload_cha_i = computeUnit_14_mod_iq_payload_cha_i;
  assign mod_sub_iqs_6_payload_cha_q = computeUnit_14_mod_iq_payload_cha_q;
  assign mod_sub_iqs_7_valid = computeUnit_15_mod_iq_valid;
  assign mod_sub_iqs_7_payload_cha_i = computeUnit_15_mod_iq_payload_cha_i;
  assign mod_sub_iqs_7_payload_cha_q = computeUnit_15_mod_iq_payload_cha_q;
  assign base_iq_fire = (base_iq_valid && base_iq_ready);
  assign when_CDMASpreading_l52 = (base_iq_fire || (cnt != 3'b000));
  assign when_CDMASpreading_l65 = (cnt == 3'b000);
  assign base_iq_ready = (cnt == 3'b000);
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      cnt <= 3'b000;
      flow_iq_valid <= 1'b0;
    end else begin
      if(clc) begin
        cnt <= 3'b000;
      end else begin
        if(when_CDMASpreading_l52) begin
          cnt <= ((cnt == cnt_limit) ? 3'b000 : _zz_cnt);
        end
      end
      if(when_CDMASpreading_l65) begin
        flow_iq_valid <= base_iq_valid;
      end
    end
  end

  always @(posedge rf_clk) begin
    _zz_code <= _zz_code_map_port0[7];
    _zz_code_1 <= _zz_code_map_port1[6];
    _zz_code_2 <= _zz_code_map_port2[5];
    _zz_code_3 <= _zz_code_map_port3[4];
    _zz_code_4 <= _zz_code_map_port4[3];
    _zz_code_5 <= _zz_code_map_port5[2];
    _zz_code_6 <= _zz_code_map_port6[1];
    _zz_code_7 <= _zz_code_map_port7[0];
    if(when_CDMASpreading_l65) begin
      flow_iq_data_cha_i <= base_iq_payload_cha_i;
      flow_iq_data_cha_q <= base_iq_payload_cha_q;
    end
  end


endmodule

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

module ComputeUnit (
  input               code,
  input               base_iq_valid,
  input      [15:0]   base_iq_payload_cha_i,
  input      [15:0]   base_iq_payload_cha_q,
  output              mod_iq_valid,
  output     [15:0]   mod_iq_payload_cha_i,
  output     [15:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [15:0]   _zz_mod_i;
  wire       [15:0]   _zz_mod_q;
  reg        [15:0]   mod_i;
  reg        [15:0]   mod_q;
  reg                 mod_valid;

  assign _zz_mod_i = (- base_iq_payload_cha_i);
  assign _zz_mod_q = (- base_iq_payload_cha_q);
  assign mod_iq_payload_cha_i = mod_i;
  assign mod_iq_payload_cha_q = mod_q;
  assign mod_iq_valid = mod_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      mod_i <= 16'h0;
      mod_q <= 16'h0;
      mod_valid <= 1'b0;
    end else begin
      if(base_iq_valid) begin
        mod_i <= (code ? base_iq_payload_cha_i : _zz_mod_i);
        mod_q <= (code ? base_iq_payload_cha_q : _zz_mod_q);
        mod_valid <= 1'b1;
      end else begin
        mod_valid <= 1'b0;
      end
    end
  end


endmodule
