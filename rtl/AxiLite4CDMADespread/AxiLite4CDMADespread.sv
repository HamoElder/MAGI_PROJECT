// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4CDMADespread
// Git hash  : 67f129201e20f87ae1cc1df1af41955d77102f75



module AxiLite4CDMADespread (
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
  input               mod_iq_valid,
  output              mod_iq_ready,
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  output              base_sub_iqs_0_valid,
  output     [15:0]   base_sub_iqs_0_payload_cha_i,
  output     [15:0]   base_sub_iqs_0_payload_cha_q,
  output              base_sub_iqs_1_valid,
  output     [15:0]   base_sub_iqs_1_payload_cha_i,
  output     [15:0]   base_sub_iqs_1_payload_cha_q,
  output              base_sub_iqs_2_valid,
  output     [15:0]   base_sub_iqs_2_payload_cha_i,
  output     [15:0]   base_sub_iqs_2_payload_cha_q,
  output              base_sub_iqs_3_valid,
  output     [15:0]   base_sub_iqs_3_payload_cha_i,
  output     [15:0]   base_sub_iqs_3_payload_cha_q,
  output              base_sub_iqs_4_valid,
  output     [15:0]   base_sub_iqs_4_payload_cha_i,
  output     [15:0]   base_sub_iqs_4_payload_cha_q,
  output              base_sub_iqs_5_valid,
  output     [15:0]   base_sub_iqs_5_payload_cha_i,
  output     [15:0]   base_sub_iqs_5_payload_cha_q,
  output              base_sub_iqs_6_valid,
  output     [15:0]   base_sub_iqs_6_payload_cha_i,
  output     [15:0]   base_sub_iqs_6_payload_cha_q,
  output              base_sub_iqs_7_valid,
  output     [15:0]   base_sub_iqs_7_payload_cha_i,
  output     [15:0]   base_sub_iqs_7_payload_cha_q,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               resetn
);
  wire                rfClockArea_cdma_despread_mod_iq_ready;
  wire                rfClockArea_cdma_despread_base_sub_iqs_0_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_1_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_2_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_3_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_4_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_5_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_6_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_7_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_q;
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

  CDMADespreading rfClockArea_cdma_despread (
    .w_en                            (clkCrossing_6_dataOut                                   ), //i
    .w_addr                          (clkCrossing_7_dataOut                                   ), //i
    .w_data                          (clkCrossing_8_dataOut                                   ), //i
    .clc                             (clkCrossing_5_dataOut                                   ), //i
    .cnt_limit                       (clkCrossing_9_dataOut                                   ), //i
    .mod_iq_valid                    (mod_iq_valid                                            ), //i
    .mod_iq_ready                    (rfClockArea_cdma_despread_mod_iq_ready                  ), //o
    .mod_iq_payload_cha_i            (mod_iq_payload_cha_i                                    ), //i
    .mod_iq_payload_cha_q            (mod_iq_payload_cha_q                                    ), //i
    .base_sub_iqs_0_valid            (rfClockArea_cdma_despread_base_sub_iqs_0_valid          ), //o
    .base_sub_iqs_0_payload_cha_i    (rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_i  ), //o
    .base_sub_iqs_0_payload_cha_q    (rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_q  ), //o
    .base_sub_iqs_1_valid            (rfClockArea_cdma_despread_base_sub_iqs_1_valid          ), //o
    .base_sub_iqs_1_payload_cha_i    (rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_i  ), //o
    .base_sub_iqs_1_payload_cha_q    (rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_q  ), //o
    .base_sub_iqs_2_valid            (rfClockArea_cdma_despread_base_sub_iqs_2_valid          ), //o
    .base_sub_iqs_2_payload_cha_i    (rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_i  ), //o
    .base_sub_iqs_2_payload_cha_q    (rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_q  ), //o
    .base_sub_iqs_3_valid            (rfClockArea_cdma_despread_base_sub_iqs_3_valid          ), //o
    .base_sub_iqs_3_payload_cha_i    (rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_i  ), //o
    .base_sub_iqs_3_payload_cha_q    (rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_q  ), //o
    .base_sub_iqs_4_valid            (rfClockArea_cdma_despread_base_sub_iqs_4_valid          ), //o
    .base_sub_iqs_4_payload_cha_i    (rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_i  ), //o
    .base_sub_iqs_4_payload_cha_q    (rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_q  ), //o
    .base_sub_iqs_5_valid            (rfClockArea_cdma_despread_base_sub_iqs_5_valid          ), //o
    .base_sub_iqs_5_payload_cha_i    (rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_i  ), //o
    .base_sub_iqs_5_payload_cha_q    (rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_q  ), //o
    .base_sub_iqs_6_valid            (rfClockArea_cdma_despread_base_sub_iqs_6_valid          ), //o
    .base_sub_iqs_6_payload_cha_i    (rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_i  ), //o
    .base_sub_iqs_6_payload_cha_q    (rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_q  ), //o
    .base_sub_iqs_7_valid            (rfClockArea_cdma_despread_base_sub_iqs_7_valid          ), //o
    .base_sub_iqs_7_payload_cha_i    (rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_i  ), //o
    .base_sub_iqs_7_payload_cha_q    (rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_q  ), //o
    .rf_clk                          (rf_clk                                                  ), //i
    .rf_resetn                       (rf_resetn                                               )  //i
  );
  ClkCrossing clkCrossing_5 (
    .dataIn       (cdma_spread_bridge_clc  ), //i
    .dataOut      (clkCrossing_5_dataOut   ), //o
    .clk          (clk                     ), //i
    .resetn       (resetn                  ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing clkCrossing_6 (
    .dataIn       (_zz_dataIn             ), //i
    .dataOut      (clkCrossing_6_dataOut  ), //o
    .clk          (clk                    ), //i
    .resetn       (resetn                 ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  ClkCrossing_2 clkCrossing_7 (
    .dataIn       (_zz_dataIn_1           ), //i
    .dataOut      (clkCrossing_7_dataOut  ), //o
    .clk          (clk                    ), //i
    .resetn       (resetn                 ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  ClkCrossing_3 clkCrossing_8 (
    .dataIn       (_zz_dataIn_2           ), //i
    .dataOut      (clkCrossing_8_dataOut  ), //o
    .clk          (clk                    ), //i
    .resetn       (resetn                 ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  ClkCrossing_2 clkCrossing_9 (
    .dataIn       (_zz_dataIn_3           ), //i
    .dataOut      (clkCrossing_9_dataOut  ), //o
    .clk          (clk                    ), //i
    .resetn       (resetn                 ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  assign mod_iq_ready = rfClockArea_cdma_despread_mod_iq_ready;
  assign base_sub_iqs_0_valid = rfClockArea_cdma_despread_base_sub_iqs_0_valid;
  assign base_sub_iqs_0_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_i;
  assign base_sub_iqs_0_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_q;
  assign base_sub_iqs_1_valid = rfClockArea_cdma_despread_base_sub_iqs_1_valid;
  assign base_sub_iqs_1_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_i;
  assign base_sub_iqs_1_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_q;
  assign base_sub_iqs_2_valid = rfClockArea_cdma_despread_base_sub_iqs_2_valid;
  assign base_sub_iqs_2_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_i;
  assign base_sub_iqs_2_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_q;
  assign base_sub_iqs_3_valid = rfClockArea_cdma_despread_base_sub_iqs_3_valid;
  assign base_sub_iqs_3_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_i;
  assign base_sub_iqs_3_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_q;
  assign base_sub_iqs_4_valid = rfClockArea_cdma_despread_base_sub_iqs_4_valid;
  assign base_sub_iqs_4_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_i;
  assign base_sub_iqs_4_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_q;
  assign base_sub_iqs_5_valid = rfClockArea_cdma_despread_base_sub_iqs_5_valid;
  assign base_sub_iqs_5_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_i;
  assign base_sub_iqs_5_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_q;
  assign base_sub_iqs_6_valid = rfClockArea_cdma_despread_base_sub_iqs_6_valid;
  assign base_sub_iqs_6_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_i;
  assign base_sub_iqs_6_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_q;
  assign base_sub_iqs_7_valid = rfClockArea_cdma_despread_base_sub_iqs_7_valid;
  assign base_sub_iqs_7_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_i;
  assign base_sub_iqs_7_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_q;
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
  always @(posedge clk) begin
    if(!resetn) begin
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
  input               resetn,
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
  input               resetn,
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
  input               resetn,
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

module CDMADespreading (
  input               w_en,
  input      [2:0]    w_addr,
  input      [7:0]    w_data,
  input               clc,
  input      [2:0]    cnt_limit,
  input               mod_iq_valid,
  output              mod_iq_ready,
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  output              base_sub_iqs_0_valid,
  output     [15:0]   base_sub_iqs_0_payload_cha_i,
  output     [15:0]   base_sub_iqs_0_payload_cha_q,
  output              base_sub_iqs_1_valid,
  output     [15:0]   base_sub_iqs_1_payload_cha_i,
  output     [15:0]   base_sub_iqs_1_payload_cha_q,
  output              base_sub_iqs_2_valid,
  output     [15:0]   base_sub_iqs_2_payload_cha_i,
  output     [15:0]   base_sub_iqs_2_payload_cha_q,
  output              base_sub_iqs_3_valid,
  output     [15:0]   base_sub_iqs_3_payload_cha_i,
  output     [15:0]   base_sub_iqs_3_payload_cha_q,
  output              base_sub_iqs_4_valid,
  output     [15:0]   base_sub_iqs_4_payload_cha_i,
  output     [15:0]   base_sub_iqs_4_payload_cha_q,
  output              base_sub_iqs_5_valid,
  output     [15:0]   base_sub_iqs_5_payload_cha_i,
  output     [15:0]   base_sub_iqs_5_payload_cha_q,
  output              base_sub_iqs_6_valid,
  output     [15:0]   base_sub_iqs_6_payload_cha_i,
  output     [15:0]   base_sub_iqs_6_payload_cha_q,
  output              base_sub_iqs_7_valid,
  output     [15:0]   base_sub_iqs_7_payload_cha_i,
  output     [15:0]   base_sub_iqs_7_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [7:0]    computeUnit_8_code;
  wire       [7:0]    computeUnit_9_code;
  wire       [7:0]    computeUnit_10_code;
  wire       [7:0]    computeUnit_11_code;
  wire       [7:0]    computeUnit_12_code;
  wire       [7:0]    computeUnit_13_code;
  wire       [7:0]    computeUnit_14_code;
  wire       [7:0]    computeUnit_15_code;
  wire       [7:0]    _zz_code_map_port0;
  wire       [7:0]    _zz_code_map_port1;
  wire       [7:0]    _zz_code_map_port2;
  wire       [7:0]    _zz_code_map_port3;
  wire       [7:0]    _zz_code_map_port4;
  wire       [7:0]    _zz_code_map_port5;
  wire       [7:0]    _zz_code_map_port6;
  wire       [7:0]    _zz_code_map_port7;
  wire                computeUnit_8_base_iq_valid;
  wire       [15:0]   computeUnit_8_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_8_base_iq_payload_cha_q;
  wire                computeUnit_9_base_iq_valid;
  wire       [15:0]   computeUnit_9_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_9_base_iq_payload_cha_q;
  wire                computeUnit_10_base_iq_valid;
  wire       [15:0]   computeUnit_10_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_10_base_iq_payload_cha_q;
  wire                computeUnit_11_base_iq_valid;
  wire       [15:0]   computeUnit_11_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_11_base_iq_payload_cha_q;
  wire                computeUnit_12_base_iq_valid;
  wire       [15:0]   computeUnit_12_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_12_base_iq_payload_cha_q;
  wire                computeUnit_13_base_iq_valid;
  wire       [15:0]   computeUnit_13_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_13_base_iq_payload_cha_q;
  wire                computeUnit_14_base_iq_valid;
  wire       [15:0]   computeUnit_14_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_14_base_iq_payload_cha_q;
  wire                computeUnit_15_base_iq_valid;
  wire       [15:0]   computeUnit_15_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_15_base_iq_payload_cha_q;
  wire       [2:0]    _zz_code_map_port;
  wire       [2:0]    _zz_code;
  wire       [2:0]    _zz_code_map_port_1;
  wire       [2:0]    _zz_code_1;
  wire       [2:0]    _zz_code_map_port_2;
  wire       [2:0]    _zz_code_2;
  wire       [2:0]    _zz_code_map_port_3;
  wire       [2:0]    _zz_code_3;
  wire       [2:0]    _zz_code_map_port_4;
  wire       [2:0]    _zz_code_4;
  wire       [2:0]    _zz_code_map_port_5;
  wire       [2:0]    _zz_code_5;
  wire       [2:0]    _zz_code_map_port_6;
  wire       [2:0]    _zz_code_6;
  wire       [2:0]    _zz_code_map_port_7;
  wire       [2:0]    _zz_code_7;
  reg                 _zz_1;
  (* ram_style = "distributed" *) reg [7:0] code_map [0:7];

  assign _zz_code = 3'b000;
  assign _zz_code_1 = 3'b001;
  assign _zz_code_2 = 3'b010;
  assign _zz_code_3 = 3'b011;
  assign _zz_code_4 = 3'b100;
  assign _zz_code_5 = 3'b101;
  assign _zz_code_6 = 3'b110;
  assign _zz_code_7 = 3'b111;
  initial begin
    $readmemb("AxiLite4CDMADespread.sv_toplevel_rfClockArea_cdma_despread_code_map.bin",code_map);
  end
  assign _zz_code_map_port0 = code_map[_zz_code];
  assign _zz_code_map_port1 = code_map[_zz_code_1];
  assign _zz_code_map_port2 = code_map[_zz_code_2];
  assign _zz_code_map_port3 = code_map[_zz_code_3];
  assign _zz_code_map_port4 = code_map[_zz_code_4];
  assign _zz_code_map_port5 = code_map[_zz_code_5];
  assign _zz_code_map_port6 = code_map[_zz_code_6];
  assign _zz_code_map_port7 = code_map[_zz_code_7];
  always @(posedge rf_clk) begin
    if(_zz_1) begin
      code_map[w_addr] <= w_data;
    end
  end

  ComputeUnit computeUnit_8 (
    .code                     (computeUnit_8_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                         ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                 ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                 ), //i
    .base_iq_valid            (computeUnit_8_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_8_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_8_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                  ), //i
    .cnt_limit                (cnt_limit                            ), //i
    .rf_clk                   (rf_clk                               ), //i
    .rf_resetn                (rf_resetn                            )  //i
  );
  ComputeUnit computeUnit_9 (
    .code                     (computeUnit_9_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                         ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                 ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                 ), //i
    .base_iq_valid            (computeUnit_9_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_9_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_9_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                  ), //i
    .cnt_limit                (cnt_limit                            ), //i
    .rf_clk                   (rf_clk                               ), //i
    .rf_resetn                (rf_resetn                            )  //i
  );
  ComputeUnit computeUnit_10 (
    .code                     (computeUnit_10_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                          ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                  ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                  ), //i
    .base_iq_valid            (computeUnit_10_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_10_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_10_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                   ), //i
    .cnt_limit                (cnt_limit                             ), //i
    .rf_clk                   (rf_clk                                ), //i
    .rf_resetn                (rf_resetn                             )  //i
  );
  ComputeUnit computeUnit_11 (
    .code                     (computeUnit_11_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                          ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                  ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                  ), //i
    .base_iq_valid            (computeUnit_11_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_11_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_11_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                   ), //i
    .cnt_limit                (cnt_limit                             ), //i
    .rf_clk                   (rf_clk                                ), //i
    .rf_resetn                (rf_resetn                             )  //i
  );
  ComputeUnit computeUnit_12 (
    .code                     (computeUnit_12_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                          ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                  ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                  ), //i
    .base_iq_valid            (computeUnit_12_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_12_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_12_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                   ), //i
    .cnt_limit                (cnt_limit                             ), //i
    .rf_clk                   (rf_clk                                ), //i
    .rf_resetn                (rf_resetn                             )  //i
  );
  ComputeUnit computeUnit_13 (
    .code                     (computeUnit_13_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                          ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                  ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                  ), //i
    .base_iq_valid            (computeUnit_13_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_13_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_13_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                   ), //i
    .cnt_limit                (cnt_limit                             ), //i
    .rf_clk                   (rf_clk                                ), //i
    .rf_resetn                (rf_resetn                             )  //i
  );
  ComputeUnit computeUnit_14 (
    .code                     (computeUnit_14_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                          ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                  ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                  ), //i
    .base_iq_valid            (computeUnit_14_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_14_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_14_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                   ), //i
    .cnt_limit                (cnt_limit                             ), //i
    .rf_clk                   (rf_clk                                ), //i
    .rf_resetn                (rf_resetn                             )  //i
  );
  ComputeUnit computeUnit_15 (
    .code                     (computeUnit_15_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                          ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                  ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                  ), //i
    .base_iq_valid            (computeUnit_15_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_15_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_15_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                   ), //i
    .cnt_limit                (cnt_limit                             ), //i
    .rf_clk                   (rf_clk                                ), //i
    .rf_resetn                (rf_resetn                             )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(w_en) begin
      _zz_1 = 1'b1;
    end
  end

  assign computeUnit_8_code = _zz_code_map_port0;
  assign base_sub_iqs_0_valid = computeUnit_8_base_iq_valid;
  assign base_sub_iqs_0_payload_cha_i = computeUnit_8_base_iq_payload_cha_i;
  assign base_sub_iqs_0_payload_cha_q = computeUnit_8_base_iq_payload_cha_q;
  assign computeUnit_9_code = _zz_code_map_port1;
  assign base_sub_iqs_1_valid = computeUnit_9_base_iq_valid;
  assign base_sub_iqs_1_payload_cha_i = computeUnit_9_base_iq_payload_cha_i;
  assign base_sub_iqs_1_payload_cha_q = computeUnit_9_base_iq_payload_cha_q;
  assign computeUnit_10_code = _zz_code_map_port2;
  assign base_sub_iqs_2_valid = computeUnit_10_base_iq_valid;
  assign base_sub_iqs_2_payload_cha_i = computeUnit_10_base_iq_payload_cha_i;
  assign base_sub_iqs_2_payload_cha_q = computeUnit_10_base_iq_payload_cha_q;
  assign computeUnit_11_code = _zz_code_map_port3;
  assign base_sub_iqs_3_valid = computeUnit_11_base_iq_valid;
  assign base_sub_iqs_3_payload_cha_i = computeUnit_11_base_iq_payload_cha_i;
  assign base_sub_iqs_3_payload_cha_q = computeUnit_11_base_iq_payload_cha_q;
  assign computeUnit_12_code = _zz_code_map_port4;
  assign base_sub_iqs_4_valid = computeUnit_12_base_iq_valid;
  assign base_sub_iqs_4_payload_cha_i = computeUnit_12_base_iq_payload_cha_i;
  assign base_sub_iqs_4_payload_cha_q = computeUnit_12_base_iq_payload_cha_q;
  assign computeUnit_13_code = _zz_code_map_port5;
  assign base_sub_iqs_5_valid = computeUnit_13_base_iq_valid;
  assign base_sub_iqs_5_payload_cha_i = computeUnit_13_base_iq_payload_cha_i;
  assign base_sub_iqs_5_payload_cha_q = computeUnit_13_base_iq_payload_cha_q;
  assign computeUnit_14_code = _zz_code_map_port6;
  assign base_sub_iqs_6_valid = computeUnit_14_base_iq_valid;
  assign base_sub_iqs_6_payload_cha_i = computeUnit_14_base_iq_payload_cha_i;
  assign base_sub_iqs_6_payload_cha_q = computeUnit_14_base_iq_payload_cha_q;
  assign computeUnit_15_code = _zz_code_map_port7;
  assign base_sub_iqs_7_valid = computeUnit_15_base_iq_valid;
  assign base_sub_iqs_7_payload_cha_i = computeUnit_15_base_iq_payload_cha_i;
  assign base_sub_iqs_7_payload_cha_q = computeUnit_15_base_iq_payload_cha_q;
  assign mod_iq_ready = (! clc);

endmodule

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

module ComputeUnit (
  input      [7:0]    code,
  input               mod_iq_valid,
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  output              base_iq_valid,
  output     [15:0]   base_iq_payload_cha_i,
  output     [15:0]   base_iq_payload_cha_q,
  input               clc,
  input      [2:0]    cnt_limit,
  input               rf_clk,
  input               rf_resetn
);
  wire       [15:0]   shiftRegister_16_output_1;
  wire       [15:0]   shiftRegister_17_output_1;
  wire       [2:0]    _zz_data_i;
  wire       [15:0]   _zz_data_i_1;
  wire       [2:0]    _zz_data_q;
  wire       [15:0]   _zz_data_q_1;
  wire       [15:0]   _zz_base_i_next;
  wire       [15:0]   _zz_base_q_next;
  wire       [2:0]    _zz_cnt;
  reg        [15:0]   base_i;
  reg        [15:0]   base_q;
  reg        [2:0]    cnt;
  wire       [15:0]   data_i;
  wire       [15:0]   data_q;
  wire       [15:0]   base_i_next;
  wire       [15:0]   base_q_next;
  reg        [15:0]   base_i_next_regNext;
  reg        [15:0]   base_q_next_regNext;
  reg                 _zz_base_iq_valid;

  assign _zz_data_i = (3'b111 - cnt);
  assign _zz_data_i_1 = (- mod_iq_payload_cha_i);
  assign _zz_data_q = (3'b111 - cnt);
  assign _zz_data_q_1 = (- mod_iq_payload_cha_q);
  assign _zz_base_i_next = ($signed(base_i) + $signed(data_i));
  assign _zz_base_q_next = ($signed(base_q) + $signed(data_q));
  assign _zz_cnt = (cnt + 3'b001);
  ShiftRegister shiftRegister_16 (
    .input_1      (data_i                     ), //i
    .output_1     (shiftRegister_16_output_1  ), //o
    .enable       (mod_iq_valid               ), //i
    .clc          (clc                        ), //i
    .rf_clk       (rf_clk                     ), //i
    .rf_resetn    (rf_resetn                  )  //i
  );
  ShiftRegister shiftRegister_17 (
    .input_1      (data_q                     ), //i
    .output_1     (shiftRegister_17_output_1  ), //o
    .enable       (mod_iq_valid               ), //i
    .clc          (clc                        ), //i
    .rf_clk       (rf_clk                     ), //i
    .rf_resetn    (rf_resetn                  )  //i
  );
  assign data_i = (code[_zz_data_i] ? mod_iq_payload_cha_i : _zz_data_i_1);
  assign data_q = (code[_zz_data_q] ? mod_iq_payload_cha_q : _zz_data_q_1);
  assign base_i_next = ($signed(_zz_base_i_next) - $signed(shiftRegister_16_output_1));
  assign base_q_next = ($signed(_zz_base_q_next) - $signed(shiftRegister_17_output_1));
  assign base_iq_payload_cha_i = base_i_next_regNext;
  assign base_iq_payload_cha_q = base_q_next_regNext;
  assign base_iq_valid = _zz_base_iq_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      base_i <= 16'h0;
      base_q <= 16'h0;
      cnt <= 3'b000;
    end else begin
      if(clc) begin
        base_i <= 16'h0;
        base_q <= 16'h0;
        cnt <= 3'b000;
      end else begin
        if(mod_iq_valid) begin
          base_i <= base_i_next;
          base_q <= base_q_next;
          cnt <= ((cnt == cnt_limit) ? 3'b000 : _zz_cnt);
        end
      end
    end
  end

  always @(posedge rf_clk) begin
    base_i_next_regNext <= base_i_next;
    base_q_next_regNext <= base_q_next;
    _zz_base_iq_valid <= ((cnt == cnt_limit) && mod_iq_valid);
  end


endmodule

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

module ShiftRegister (
  input      [15:0]   input_1,
  output     [15:0]   output_1,
  input               enable,
  input               clc,
  input               rf_clk,
  input               rf_resetn
);
  reg        [15:0]   shift_reg_0;
  reg        [15:0]   shift_reg_1;
  reg        [15:0]   shift_reg_2;
  reg        [15:0]   shift_reg_3;
  reg        [15:0]   shift_reg_4;
  reg        [15:0]   shift_reg_5;
  reg        [15:0]   shift_reg_6;
  reg        [15:0]   shift_reg_7;

  assign output_1 = shift_reg_7;
  always @(posedge rf_clk) begin
    if(clc) begin
      shift_reg_0 <= 16'h0;
      shift_reg_1 <= 16'h0;
      shift_reg_2 <= 16'h0;
      shift_reg_3 <= 16'h0;
      shift_reg_4 <= 16'h0;
      shift_reg_5 <= 16'h0;
      shift_reg_6 <= 16'h0;
      shift_reg_7 <= 16'h0;
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
      end
    end
  end


endmodule
