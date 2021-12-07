// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4Modulator
// Git hash  : 337bfd8570c228307d1eda92fceba305cde6c602



module AxiLite4Modulator (
  input               base_data_valid,
  output              base_data_ready,
  input      [7:0]    base_data_payload,
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
  output              mod_iq_valid,
  output     [11:0]   mod_iq_payload_cha_i,
  output     [11:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               resetn
);
  wire                rfClockArea_mod_data_div_base_data_ready;
  wire                rfClockArea_mod_data_div_unit_data_valid;
  wire       [7:0]    rfClockArea_mod_data_div_unit_data_payload;
  wire                rfClockArea_mod_rtl_data_flow_mod_iq_valid;
  wire       [11:0]   rfClockArea_mod_rtl_data_flow_mod_iq_payload_cha_i;
  wire       [11:0]   rfClockArea_mod_rtl_data_flow_mod_iq_payload_cha_q;
  wire                clkCrossing_7_dataOut;
  wire       [2:0]    clkCrossing_8_dataOut;
  wire       [2:0]    clkCrossing_9_dataOut;
  wire       [0:0]    clkCrossing_10_dataOut;
  wire       [31:0]   clkCrossing_11_dataOut;
  wire       [31:0]   clkCrossing_12_dataOut;
  wire       [1:0]    clkCrossing_13_dataOut;
  wire                _zz_data_flow_unit_data_valid;
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
  wire                mod_data_bridge_enable;
  wire       [2:0]    mod_data_bridge_cnt_step;
  wire       [2:0]    mod_data_bridge_cnt_limit;
  reg                 mod_data_bridge_enable_driver;
  reg        [2:0]    mod_data_bridge_cnt_step_driver;
  reg        [2:0]    mod_data_bridge_cnt_limit_driver;
  wire       [1:0]    mod_rtl_bridge_select;
  reg        [1:0]    mod_rtl_bridge_select_driver;
  reg        [0:0]    _zz_dataIn;
  reg        [31:0]   _zz_dataIn_1;
  reg        [31:0]   _zz_dataIn_2;

  dataDivDynamic rfClockArea_mod_data_div (
    .base_data_valid      (base_data_valid                             ), //i
    .base_data_ready      (rfClockArea_mod_data_div_base_data_ready    ), //o
    .base_data_payload    (base_data_payload                           ), //i
    .enable               (clkCrossing_7_dataOut                       ), //i
    .cnt_step             (clkCrossing_8_dataOut                       ), //i
    .cnt_limit            (clkCrossing_9_dataOut                       ), //i
    .unit_data_valid      (rfClockArea_mod_data_div_unit_data_valid    ), //o
    .unit_data_payload    (rfClockArea_mod_data_div_unit_data_payload  ), //o
    .rf_clk               (rf_clk                                      ), //i
    .rf_resetn            (rf_resetn                                   )  //i
  );
  ModulatorRTL rfClockArea_mod_rtl (
    .data_flow_unit_data_valid         (_zz_data_flow_unit_data_valid                       ), //i
    .data_flow_unit_data_payload       (rfClockArea_mod_data_div_unit_data_payload          ), //i
    .data_flow_mod_iq_valid            (rfClockArea_mod_rtl_data_flow_mod_iq_valid          ), //o
    .data_flow_mod_iq_payload_cha_i    (rfClockArea_mod_rtl_data_flow_mod_iq_payload_cha_i  ), //o
    .data_flow_mod_iq_payload_cha_q    (rfClockArea_mod_rtl_data_flow_mod_iq_payload_cha_q  ), //o
    .w_en                              (clkCrossing_10_dataOut                              ), //i
    .w_addr                            (clkCrossing_11_dataOut                              ), //i
    .w_data                            (clkCrossing_12_dataOut                              ), //i
    .select_1                          (clkCrossing_13_dataOut                              ), //i
    .rf_clk                            (rf_clk                                              ), //i
    .rf_resetn                         (rf_resetn                                           )  //i
  );
  ClkCrossing clkCrossing_7 (
    .dataIn       (mod_data_bridge_enable  ), //i
    .dataOut      (clkCrossing_7_dataOut   ), //o
    .clk          (clk                     ), //i
    .resetn       (resetn                  ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_1 clkCrossing_8 (
    .dataIn       (mod_data_bridge_cnt_step  ), //i
    .dataOut      (clkCrossing_8_dataOut     ), //o
    .clk          (clk                       ), //i
    .resetn       (resetn                    ), //i
    .rf_clk       (rf_clk                    ), //i
    .rf_resetn    (rf_resetn                 )  //i
  );
  ClkCrossing_1 clkCrossing_9 (
    .dataIn       (mod_data_bridge_cnt_limit  ), //i
    .dataOut      (clkCrossing_9_dataOut      ), //o
    .clk          (clk                        ), //i
    .resetn       (resetn                     ), //i
    .rf_clk       (rf_clk                     ), //i
    .rf_resetn    (rf_resetn                  )  //i
  );
  ClkCrossing_3 clkCrossing_10 (
    .dataIn       (_zz_dataIn              ), //i
    .dataOut      (clkCrossing_10_dataOut  ), //o
    .clk          (clk                     ), //i
    .resetn       (resetn                  ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_4 clkCrossing_11 (
    .dataIn       (_zz_dataIn_1            ), //i
    .dataOut      (clkCrossing_11_dataOut  ), //o
    .clk          (clk                     ), //i
    .resetn       (resetn                  ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_4 clkCrossing_12 (
    .dataIn       (_zz_dataIn_2            ), //i
    .dataOut      (clkCrossing_12_dataOut  ), //o
    .clk          (clk                     ), //i
    .resetn       (resetn                  ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_6 clkCrossing_13 (
    .dataIn       (mod_rtl_bridge_select   ), //i
    .dataOut      (clkCrossing_13_dataOut  ), //o
    .clk          (clk                     ), //i
    .resetn       (resetn                  ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  assign base_data_ready = rfClockArea_mod_data_div_base_data_ready;
  assign _zz_data_flow_unit_data_valid = rfClockArea_mod_data_div_unit_data_valid;
  assign mod_iq_payload_cha_i = rfClockArea_mod_rtl_data_flow_mod_iq_payload_cha_i;
  assign mod_iq_payload_cha_q = rfClockArea_mod_rtl_data_flow_mod_iq_payload_cha_q;
  assign mod_iq_valid = rfClockArea_mod_rtl_data_flow_mod_iq_valid;
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
        readRsp_data[0 : 0] = mod_data_bridge_enable_driver;
      end
      8'h04 : begin
        readRsp_data[2 : 0] = mod_data_bridge_cnt_step_driver;
      end
      8'h08 : begin
        readRsp_data[2 : 0] = mod_data_bridge_cnt_limit_driver;
      end
      8'h10 : begin
        readRsp_data[1 : 0] = mod_rtl_bridge_select_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign mod_data_bridge_enable = mod_data_bridge_enable_driver;
  assign mod_data_bridge_cnt_step = mod_data_bridge_cnt_step_driver;
  assign mod_data_bridge_cnt_limit = mod_data_bridge_cnt_limit_driver;
  assign mod_rtl_bridge_select = mod_rtl_bridge_select_driver;
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      mod_data_bridge_enable_driver <= 1'b0;
      mod_data_bridge_cnt_step_driver <= 3'b000;
      mod_data_bridge_cnt_limit_driver <= 3'b000;
      mod_rtl_bridge_select_driver <= 2'b00;
      _zz_dataIn <= 1'b1;
      _zz_dataIn_1 <= 32'h0;
      _zz_dataIn_2 <= 32'h0;
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
            mod_data_bridge_enable_driver <= axil4Ctrl_wdata[0];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            mod_data_bridge_cnt_step_driver <= axil4Ctrl_wdata[2 : 0];
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            mod_data_bridge_cnt_limit_driver <= axil4Ctrl_wdata[2 : 0];
          end
        end
        8'h10 : begin
          if(writeOccur) begin
            mod_rtl_bridge_select_driver <= axil4Ctrl_wdata[1 : 0];
          end
        end
        8'h14 : begin
          if(writeOccur) begin
            _zz_dataIn <= axil4Ctrl_wdata[0 : 0];
          end
        end
        8'h18 : begin
          if(writeOccur) begin
            _zz_dataIn_1 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h1c : begin
          if(writeOccur) begin
            _zz_dataIn_2 <= axil4Ctrl_wdata[31 : 0];
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
  end


endmodule

module ClkCrossing_6 (
  input      [1:0]    dataIn,
  output     [1:0]    dataOut,
  input               clk,
  input               resetn,
  input               rf_clk,
  input               rf_resetn
);
  reg        [1:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [1:0]    area_clkO_buf0;
  reg        [1:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge rf_clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

//ClkCrossing_4 replaced by ClkCrossing_4

module ClkCrossing_4 (
  input      [31:0]   dataIn,
  output     [31:0]   dataOut,
  input               clk,
  input               resetn,
  input               rf_clk,
  input               rf_resetn
);
  reg        [31:0]   area_clkI_reg;
  (* async_reg = "true" *) reg        [31:0]   area_clkO_buf0;
  reg        [31:0]   area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge rf_clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module ClkCrossing_3 (
  input      [0:0]    dataIn,
  output     [0:0]    dataOut,
  input               clk,
  input               resetn,
  input               rf_clk,
  input               rf_resetn
);
  reg        [0:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [0:0]    area_clkO_buf0;
  reg        [0:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge rf_clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

//ClkCrossing_1 replaced by ClkCrossing_1

module ClkCrossing_1 (
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

module ModulatorRTL (
  input               data_flow_unit_data_valid,
  input      [7:0]    data_flow_unit_data_payload,
  output              data_flow_mod_iq_valid,
  output     [11:0]   data_flow_mod_iq_payload_cha_i,
  output     [11:0]   data_flow_mod_iq_payload_cha_q,
  input      [0:0]    w_en,
  input      [31:0]   w_addr,
  input      [31:0]   w_data,
  input      [1:0]    select_1,
  input               rf_clk,
  input               rf_resetn
);
  wire       [0:0]    mPSK_Modulator_Extension_mod_unit_data_payload;
  wire       [1:0]    mPSK_Modulator_Extension_mod_1_unit_data_payload;
  wire       [3:0]    mQAM_Modulator_Extension_mod_unit_data_payload;
  wire                mod_1_w_en;
  wire       [7:0]    mod_1_w_addr;
  wire       [23:0]   mod_1_w_data;
  wire                flowDeMux_1_outputs_0_valid;
  wire       [7:0]    flowDeMux_1_outputs_0_payload;
  wire                flowDeMux_1_outputs_1_valid;
  wire       [7:0]    flowDeMux_1_outputs_1_payload;
  wire                flowDeMux_1_outputs_2_valid;
  wire       [7:0]    flowDeMux_1_outputs_2_payload;
  wire                flowDeMux_1_outputs_3_valid;
  wire       [7:0]    flowDeMux_1_outputs_3_payload;
  wire                mPSK_Modulator_Extension_mod_mod_iq_valid;
  wire       [11:0]   mPSK_Modulator_Extension_mod_mod_iq_payload_cha_i;
  wire       [11:0]   mPSK_Modulator_Extension_mod_mod_iq_payload_cha_q;
  wire                mPSK_Modulator_Extension_mod_1_mod_iq_valid;
  wire       [11:0]   mPSK_Modulator_Extension_mod_1_mod_iq_payload_cha_i;
  wire       [11:0]   mPSK_Modulator_Extension_mod_1_mod_iq_payload_cha_q;
  wire                mQAM_Modulator_Extension_mod_mod_iq_valid;
  wire       [11:0]   mQAM_Modulator_Extension_mod_mod_iq_payload_cha_i;
  wire       [11:0]   mQAM_Modulator_Extension_mod_mod_iq_payload_cha_q;
  wire                mod_1_data_flow_mod_iq_valid;
  wire       [11:0]   mod_1_data_flow_mod_iq_payload_cha_i;
  wire       [11:0]   mod_1_data_flow_mod_iq_payload_cha_q;
  wire                flowMux_1_output_valid;
  wire       [11:0]   flowMux_1_output_payload_cha_i;
  wire       [11:0]   flowMux_1_output_payload_cha_q;
  wire       [31:0]   _zz_w_addr;
  wire       [31:0]   _zz_w_data;
  wire                _zz_unit_data_valid;
  wire                _zz_unit_data_valid_1;
  wire                _zz_unit_data_valid_2;
  wire                _zz_data_flow_unit_data_valid;

  assign _zz_w_addr = w_addr;
  assign _zz_w_data = w_data;
  FlowDeMux flowDeMux_1 (
    .input_valid          (data_flow_unit_data_valid      ), //i
    .input_payload        (data_flow_unit_data_payload    ), //i
    .select_1             (select_1                       ), //i
    .outputs_0_valid      (flowDeMux_1_outputs_0_valid    ), //o
    .outputs_0_payload    (flowDeMux_1_outputs_0_payload  ), //o
    .outputs_1_valid      (flowDeMux_1_outputs_1_valid    ), //o
    .outputs_1_payload    (flowDeMux_1_outputs_1_payload  ), //o
    .outputs_2_valid      (flowDeMux_1_outputs_2_valid    ), //o
    .outputs_2_payload    (flowDeMux_1_outputs_2_payload  ), //o
    .outputs_3_valid      (flowDeMux_1_outputs_3_valid    ), //o
    .outputs_3_payload    (flowDeMux_1_outputs_3_payload  )  //o
  );
  mPSKMod mPSK_Modulator_Extension_mod (
    .unit_data_valid         (_zz_unit_data_valid                                ), //i
    .unit_data_payload       (mPSK_Modulator_Extension_mod_unit_data_payload     ), //i
    .mod_iq_valid            (mPSK_Modulator_Extension_mod_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i    (mPSK_Modulator_Extension_mod_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q    (mPSK_Modulator_Extension_mod_mod_iq_payload_cha_q  ), //o
    .rf_clk                  (rf_clk                                             ), //i
    .rf_resetn               (rf_resetn                                          )  //i
  );
  mPSKMod_1 mPSK_Modulator_Extension_mod_1 (
    .unit_data_valid         (_zz_unit_data_valid_1                                ), //i
    .unit_data_payload       (mPSK_Modulator_Extension_mod_1_unit_data_payload     ), //i
    .mod_iq_valid            (mPSK_Modulator_Extension_mod_1_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_cha_q  ), //o
    .rf_clk                  (rf_clk                                               ), //i
    .rf_resetn               (rf_resetn                                            )  //i
  );
  mQAMMod mQAM_Modulator_Extension_mod (
    .unit_data_valid         (_zz_unit_data_valid_2                              ), //i
    .unit_data_payload       (mQAM_Modulator_Extension_mod_unit_data_payload     ), //i
    .mod_iq_valid            (mQAM_Modulator_Extension_mod_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i    (mQAM_Modulator_Extension_mod_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q    (mQAM_Modulator_Extension_mod_mod_iq_payload_cha_q  ), //o
    .rf_clk                  (rf_clk                                             ), //i
    .rf_resetn               (rf_resetn                                          )  //i
  );
  lookUpMod mod_1 (
    .w_en                              (mod_1_w_en                            ), //i
    .w_addr                            (mod_1_w_addr                          ), //i
    .w_data                            (mod_1_w_data                          ), //i
    .data_flow_unit_data_valid         (_zz_data_flow_unit_data_valid         ), //i
    .data_flow_unit_data_payload       (flowDeMux_1_outputs_3_payload         ), //i
    .data_flow_mod_iq_valid            (mod_1_data_flow_mod_iq_valid          ), //o
    .data_flow_mod_iq_payload_cha_i    (mod_1_data_flow_mod_iq_payload_cha_i  ), //o
    .data_flow_mod_iq_payload_cha_q    (mod_1_data_flow_mod_iq_payload_cha_q  ), //o
    .rf_clk                            (rf_clk                                ), //i
    .rf_resetn                         (rf_resetn                             )  //i
  );
  FlowMux flowMux_1 (
    .inputs_0_valid            (mPSK_Modulator_Extension_mod_mod_iq_valid            ), //i
    .inputs_0_payload_cha_i    (mPSK_Modulator_Extension_mod_mod_iq_payload_cha_i    ), //i
    .inputs_0_payload_cha_q    (mPSK_Modulator_Extension_mod_mod_iq_payload_cha_q    ), //i
    .inputs_1_valid            (mPSK_Modulator_Extension_mod_1_mod_iq_valid          ), //i
    .inputs_1_payload_cha_i    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_cha_i  ), //i
    .inputs_1_payload_cha_q    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_cha_q  ), //i
    .inputs_2_valid            (mQAM_Modulator_Extension_mod_mod_iq_valid            ), //i
    .inputs_2_payload_cha_i    (mQAM_Modulator_Extension_mod_mod_iq_payload_cha_i    ), //i
    .inputs_2_payload_cha_q    (mQAM_Modulator_Extension_mod_mod_iq_payload_cha_q    ), //i
    .inputs_3_valid            (mod_1_data_flow_mod_iq_valid                         ), //i
    .inputs_3_payload_cha_i    (mod_1_data_flow_mod_iq_payload_cha_i                 ), //i
    .inputs_3_payload_cha_q    (mod_1_data_flow_mod_iq_payload_cha_q                 ), //i
    .select_1                  (select_1                                             ), //i
    .output_valid              (flowMux_1_output_valid                               ), //o
    .output_payload_cha_i      (flowMux_1_output_payload_cha_i                       ), //o
    .output_payload_cha_q      (flowMux_1_output_payload_cha_q                       )  //o
  );
  assign _zz_unit_data_valid = flowDeMux_1_outputs_0_valid;
  assign mPSK_Modulator_Extension_mod_unit_data_payload = flowDeMux_1_outputs_0_payload[0:0];
  assign _zz_unit_data_valid_1 = flowDeMux_1_outputs_1_valid;
  assign mPSK_Modulator_Extension_mod_1_unit_data_payload = flowDeMux_1_outputs_1_payload[1:0];
  assign _zz_unit_data_valid_2 = flowDeMux_1_outputs_2_valid;
  assign mQAM_Modulator_Extension_mod_unit_data_payload = flowDeMux_1_outputs_2_payload[3:0];
  assign _zz_data_flow_unit_data_valid = flowDeMux_1_outputs_3_valid;
  assign mod_1_w_en = (w_en == 1'b0);
  assign mod_1_w_addr = _zz_w_addr[7:0];
  assign mod_1_w_data = _zz_w_data[23:0];
  assign data_flow_mod_iq_valid = flowMux_1_output_valid;
  assign data_flow_mod_iq_payload_cha_i = flowMux_1_output_payload_cha_i;
  assign data_flow_mod_iq_payload_cha_q = flowMux_1_output_payload_cha_q;

endmodule

module dataDivDynamic (
  input               base_data_valid,
  output              base_data_ready,
  input      [7:0]    base_data_payload,
  input               enable,
  input      [2:0]    cnt_step,
  input      [2:0]    cnt_limit,
  output              unit_data_valid,
  output     [7:0]    unit_data_payload,
  input               rf_clk,
  input               rf_resetn
);
  wire       [2:0]    _zz_base_cnt;
  reg                 unit_valid;
  reg        [2:0]    base_cnt;
  wire                base_ready;
  reg        [7:0]    base_buffer;
  wire                when_dataDivDynamic_l40;
  wire                base_data_fire;
  wire                when_dataDivDynamic_l47;

  assign _zz_base_cnt = (base_cnt + cnt_step);
  assign base_ready = ((cnt_limit == base_cnt) && enable);
  assign when_dataDivDynamic_l40 = (! enable);
  assign base_data_fire = (base_data_valid && base_data_ready);
  assign when_dataDivDynamic_l47 = (base_cnt == cnt_limit);
  assign base_data_ready = base_ready;
  assign unit_data_payload = base_buffer;
  assign unit_data_valid = unit_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      unit_valid <= 1'b0;
      base_cnt <= 3'b000;
      base_buffer <= 8'h0;
    end else begin
      if(when_dataDivDynamic_l40) begin
        base_cnt <= cnt_limit;
        unit_valid <= 1'b0;
      end else begin
        if(base_data_fire) begin
          base_cnt <= (_zz_base_cnt + 3'b000);
          base_buffer <= base_data_payload;
          unit_valid <= 1'b1;
        end else begin
          if(when_dataDivDynamic_l47) begin
            base_buffer <= (base_buffer >>> cnt_step);
            unit_valid <= 1'b0;
          end else begin
            base_cnt <= (base_cnt + cnt_step);
            base_buffer <= (base_buffer >>> cnt_step);
            unit_valid <= 1'b1;
          end
        end
      end
    end
  end


endmodule

module FlowMux (
  input               inputs_0_valid,
  input      [11:0]   inputs_0_payload_cha_i,
  input      [11:0]   inputs_0_payload_cha_q,
  input               inputs_1_valid,
  input      [11:0]   inputs_1_payload_cha_i,
  input      [11:0]   inputs_1_payload_cha_q,
  input               inputs_2_valid,
  input      [11:0]   inputs_2_payload_cha_i,
  input      [11:0]   inputs_2_payload_cha_q,
  input               inputs_3_valid,
  input      [11:0]   inputs_3_payload_cha_i,
  input      [11:0]   inputs_3_payload_cha_q,
  input      [1:0]    select_1,
  output              output_valid,
  output     [11:0]   output_payload_cha_i,
  output     [11:0]   output_payload_cha_q
);
  reg                 _zz_output_valid;
  reg        [11:0]   _zz_output_payload_cha_i;
  reg        [11:0]   _zz_output_payload_cha_q;

  always @(*) begin
    case(select_1)
      2'b00 : begin
        _zz_output_valid = inputs_0_valid;
        _zz_output_payload_cha_i = inputs_0_payload_cha_i;
        _zz_output_payload_cha_q = inputs_0_payload_cha_q;
      end
      2'b01 : begin
        _zz_output_valid = inputs_1_valid;
        _zz_output_payload_cha_i = inputs_1_payload_cha_i;
        _zz_output_payload_cha_q = inputs_1_payload_cha_q;
      end
      2'b10 : begin
        _zz_output_valid = inputs_2_valid;
        _zz_output_payload_cha_i = inputs_2_payload_cha_i;
        _zz_output_payload_cha_q = inputs_2_payload_cha_q;
      end
      default : begin
        _zz_output_valid = inputs_3_valid;
        _zz_output_payload_cha_i = inputs_3_payload_cha_i;
        _zz_output_payload_cha_q = inputs_3_payload_cha_q;
      end
    endcase
  end

  assign output_valid = _zz_output_valid;
  assign output_payload_cha_i = _zz_output_payload_cha_i;
  assign output_payload_cha_q = _zz_output_payload_cha_q;

endmodule

module lookUpMod (
  input               w_en,
  input      [7:0]    w_addr,
  input      [23:0]   w_data,
  input               data_flow_unit_data_valid,
  input      [7:0]    data_flow_unit_data_payload,
  output reg          data_flow_mod_iq_valid,
  output reg [11:0]   data_flow_mod_iq_payload_cha_i,
  output reg [11:0]   data_flow_mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  reg        [23:0]   _zz_code_map_port1;
  wire       [23:0]   _zz_code_map_port;
  reg        [7:0]    unit_data;
  reg                 unit_valid;
  wire                _zz_data_flow_mod_iq_payload_cha_i;
  wire       [23:0]   _zz_data_flow_mod_iq_payload_cha_i_1;
  wire                when_lookUpMod_l84;
  reg [23:0] code_map [0:255];

  assign _zz_code_map_port = w_data;
  always @(posedge rf_clk) begin
    if(w_en) begin
      code_map[w_addr] <= _zz_code_map_port;
    end
  end

  always @(posedge rf_clk) begin
    if(_zz_data_flow_mod_iq_payload_cha_i) begin
      _zz_code_map_port1 <= code_map[unit_data];
    end
  end

  assign _zz_data_flow_mod_iq_payload_cha_i = (! w_en);
  assign _zz_data_flow_mod_iq_payload_cha_i_1 = _zz_code_map_port1;
  assign when_lookUpMod_l84 = (unit_valid && (! w_en));
  always @(*) begin
    if(when_lookUpMod_l84) begin
      data_flow_mod_iq_payload_cha_i = _zz_data_flow_mod_iq_payload_cha_i_1[23 : 12];
    end else begin
      data_flow_mod_iq_payload_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(when_lookUpMod_l84) begin
      data_flow_mod_iq_payload_cha_q = _zz_data_flow_mod_iq_payload_cha_i_1[11 : 0];
    end else begin
      data_flow_mod_iq_payload_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(when_lookUpMod_l84) begin
      data_flow_mod_iq_valid = 1'b1;
    end else begin
      data_flow_mod_iq_valid = 1'b0;
    end
  end

  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      unit_data <= 8'h0;
      unit_valid <= 1'b0;
    end else begin
      unit_data <= data_flow_unit_data_payload;
      unit_valid <= data_flow_unit_data_valid;
    end
  end


endmodule

module mQAMMod (
  input               unit_data_valid,
  input      [3:0]    unit_data_payload,
  output reg          mod_iq_valid,
  output reg [11:0]   mod_iq_payload_cha_i,
  output reg [11:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  reg        [11:0]   _zz_mod_iq_payload_cha_i;
  reg        [11:0]   _zz_mod_iq_payload_cha_q;
  wire       [11:0]   codeTableI_0;
  wire       [11:0]   codeTableI_1;
  wire       [11:0]   codeTableI_2;
  wire       [11:0]   codeTableI_3;
  wire       [11:0]   codeTableQ_0;
  wire       [11:0]   codeTableQ_1;
  wire       [11:0]   codeTableQ_2;
  wire       [11:0]   codeTableQ_3;
  reg        [3:0]    unit_data;
  reg                 unit_valid;
  wire       [1:0]    data_div_0;
  wire       [1:0]    data_div_1;

  always @(*) begin
    case(data_div_1)
      2'b00 : begin
        _zz_mod_iq_payload_cha_i = codeTableI_0;
      end
      2'b01 : begin
        _zz_mod_iq_payload_cha_i = codeTableI_1;
      end
      2'b10 : begin
        _zz_mod_iq_payload_cha_i = codeTableI_2;
      end
      default : begin
        _zz_mod_iq_payload_cha_i = codeTableI_3;
      end
    endcase
  end

  always @(*) begin
    case(data_div_0)
      2'b00 : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_0;
      end
      2'b01 : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_1;
      end
      2'b10 : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_2;
      end
      default : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_3;
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
  assign data_div_0 = unit_data[1 : 0];
  assign data_div_1 = unit_data[3 : 2];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_i = _zz_mod_iq_payload_cha_i;
    end else begin
      mod_iq_payload_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_q = _zz_mod_iq_payload_cha_q;
    end else begin
      mod_iq_payload_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      unit_data <= 4'b0000;
      unit_valid <= 1'b0;
    end else begin
      unit_data <= unit_data_payload;
      unit_valid <= unit_data_valid;
    end
  end


endmodule

module mPSKMod_1 (
  input               unit_data_valid,
  input      [1:0]    unit_data_payload,
  output reg          mod_iq_valid,
  output reg [11:0]   mod_iq_payload_cha_i,
  output reg [11:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  reg        [23:0]   _zz__zz_mod_iq_0;
  wire       [23:0]   codeTable_0;
  wire       [23:0]   codeTable_1;
  wire       [23:0]   codeTable_2;
  wire       [23:0]   codeTable_3;
  reg        [1:0]    unit_data;
  reg                 unit_valid;
  wire       [23:0]   _zz_mod_iq_0;
  wire       [11:0]   mod_iq_0;
  wire       [11:0]   mod_iq_1;

  always @(*) begin
    case(unit_data)
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
      mod_iq_payload_cha_i = mod_iq_1;
    end else begin
      mod_iq_payload_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_q = mod_iq_0;
    end else begin
      mod_iq_payload_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      unit_data <= 2'b00;
      unit_valid <= 1'b0;
    end else begin
      unit_data <= unit_data_payload;
      unit_valid <= unit_data_valid;
    end
  end


endmodule

module mPSKMod (
  input               unit_data_valid,
  input      [0:0]    unit_data_payload,
  output reg          mod_iq_valid,
  output reg [11:0]   mod_iq_payload_cha_i,
  output reg [11:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  reg        [23:0]   _zz__zz_mod_iq_0;
  wire       [23:0]   codeTable_0;
  wire       [23:0]   codeTable_1;
  reg        [0:0]    unit_data;
  reg                 unit_valid;
  wire       [23:0]   _zz_mod_iq_0;
  wire       [11:0]   mod_iq_0;
  wire       [11:0]   mod_iq_1;

  always @(*) begin
    case(unit_data)
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
      mod_iq_payload_cha_i = mod_iq_1;
    end else begin
      mod_iq_payload_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_q = mod_iq_0;
    end else begin
      mod_iq_payload_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      unit_data <= 1'b0;
      unit_valid <= 1'b0;
    end else begin
      unit_data <= unit_data_payload;
      unit_valid <= unit_data_valid;
    end
  end


endmodule

module FlowDeMux (
  input               input_valid,
  input      [7:0]    input_payload,
  input      [1:0]    select_1,
  output reg          outputs_0_valid,
  output reg [7:0]    outputs_0_payload,
  output reg          outputs_1_valid,
  output reg [7:0]    outputs_1_payload,
  output reg          outputs_2_valid,
  output reg [7:0]    outputs_2_payload,
  output reg          outputs_3_valid,
  output reg [7:0]    outputs_3_payload
);
  wire                when_FlowDeMux_l15;
  wire                when_FlowDeMux_l15_1;
  wire                when_FlowDeMux_l15_2;
  wire                when_FlowDeMux_l15_3;

  assign when_FlowDeMux_l15 = (2'b00 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15) begin
      outputs_0_valid = 1'b0;
    end else begin
      outputs_0_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15) begin
      outputs_0_payload = 8'h0;
    end else begin
      outputs_0_payload = input_payload;
    end
  end

  assign when_FlowDeMux_l15_1 = (2'b01 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15_1) begin
      outputs_1_valid = 1'b0;
    end else begin
      outputs_1_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_1) begin
      outputs_1_payload = 8'h0;
    end else begin
      outputs_1_payload = input_payload;
    end
  end

  assign when_FlowDeMux_l15_2 = (2'b10 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15_2) begin
      outputs_2_valid = 1'b0;
    end else begin
      outputs_2_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_2) begin
      outputs_2_payload = 8'h0;
    end else begin
      outputs_2_payload = input_payload;
    end
  end

  assign when_FlowDeMux_l15_3 = (2'b11 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15_3) begin
      outputs_3_valid = 1'b0;
    end else begin
      outputs_3_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_3) begin
      outputs_3_payload = 8'h0;
    end else begin
      outputs_3_payload = input_payload;
    end
  end


endmodule
