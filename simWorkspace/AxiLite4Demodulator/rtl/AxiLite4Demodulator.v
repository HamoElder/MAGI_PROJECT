// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4Demodulator
// Git hash  : 8ea3836c6991c66e54ff283e1ce84688f7fe9417



module AxiLite4Demodulator (
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
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  output              base_data_valid,
  output     [23:0]   base_data_payload,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               reset
);
  wire       [23:0]   rfClockArea_data_combination_unit_data_payload;
  wire                rfClockArea_demod_rtl_data_flow_unit_data_valid;
  wire       [11:0]   rfClockArea_demod_rtl_data_flow_unit_data_payload;
  wire                rfClockArea_data_combination_base_data_valid;
  wire       [23:0]   rfClockArea_data_combination_base_data_payload;
  wire                clkCrossing_9_dataOut;
  wire       [1:0]    clkCrossing_10_dataOut;
  wire       [2:0]    clkCrossing_11_dataOut;
  wire       [5:0]    clkCrossing_12_dataOut;
  wire       [31:0]   clkCrossing_13_dataOut;
  wire       [2:0]    clkCrossing_14_dataOut;
  wire                clkCrossing_15_dataOut;
  wire       [4:0]    clkCrossing_16_dataOut;
  wire       [4:0]    clkCrossing_17_dataOut;
  wire                _zz_unit_data_valid;
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
  wire                demod_rtl_bridge_w_en;
  wire       [1:0]    demod_rtl_bridge_w_sel;
  wire       [2:0]    demod_rtl_bridge_iq_shift;
  wire       [5:0]    demod_rtl_bridge_w_addr;
  wire       [31:0]   demod_rtl_bridge_w_data;
  wire       [2:0]    demod_rtl_bridge_select;
  reg                 demod_rtl_bridge_w_en_driver;
  reg        [1:0]    demod_rtl_bridge_w_sel_driver;
  reg        [2:0]    demod_rtl_bridge_iq_shift_driver;
  reg        [5:0]    _zz_demod_rtl_bridge_w_addr;
  reg        [31:0]   _zz_demod_rtl_bridge_w_data;
  reg        [2:0]    _zz_demod_rtl_bridge_select;
  wire                data_comb_bridge_enable;
  wire       [4:0]    data_comb_bridge_cnt_step;
  wire       [4:0]    data_comb_bridge_cnt_limit;
  reg                 data_comb_bridge_enable_driver;
  reg        [4:0]    data_comb_bridge_cnt_step_driver;
  reg        [4:0]    data_comb_bridge_cnt_limit_driver;

  DemodulatorRTL rfClockArea_demod_rtl (
    .w_en                              (clkCrossing_9_dataOut                              ), //i
    .w_addr                            (clkCrossing_12_dataOut                             ), //i
    .w_data                            (clkCrossing_13_dataOut                             ), //i
    .w_sel                             (clkCrossing_10_dataOut                             ), //i
    .iq_shift                          (clkCrossing_11_dataOut                             ), //i
    .select_1                          (clkCrossing_14_dataOut                             ), //i
    .data_flow_unit_data_valid         (rfClockArea_demod_rtl_data_flow_unit_data_valid    ), //o
    .data_flow_unit_data_payload       (rfClockArea_demod_rtl_data_flow_unit_data_payload  ), //o
    .data_flow_mod_iq_valid            (mod_iq_valid                                       ), //i
    .data_flow_mod_iq_payload_cha_i    (mod_iq_payload_cha_i                               ), //i
    .data_flow_mod_iq_payload_cha_q    (mod_iq_payload_cha_q                               ), //i
    .rf_clk                            (rf_clk                                             ), //i
    .rf_resetn                         (rf_resetn                                          )  //i
  );
  dataCombination rfClockArea_data_combination (
    .unit_data_valid      (_zz_unit_data_valid                             ), //i
    .unit_data_payload    (rfClockArea_data_combination_unit_data_payload  ), //i
    .base_data_valid      (rfClockArea_data_combination_base_data_valid    ), //o
    .base_data_payload    (rfClockArea_data_combination_base_data_payload  ), //o
    .enable               (clkCrossing_15_dataOut                          ), //i
    .cnt_step             (clkCrossing_16_dataOut                          ), //i
    .cnt_limit            (clkCrossing_17_dataOut                          ), //i
    .rf_clk               (rf_clk                                          ), //i
    .rf_resetn            (rf_resetn                                       )  //i
  );
  ClkCrossing clkCrossing_9 (
    .dataIn       (demod_rtl_bridge_w_en  ), //i
    .dataOut      (clkCrossing_9_dataOut  ), //o
    .clk          (clk                    ), //i
    .reset        (reset                  ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  ClkCrossing_1 clkCrossing_10 (
    .dataIn       (demod_rtl_bridge_w_sel  ), //i
    .dataOut      (clkCrossing_10_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_2 clkCrossing_11 (
    .dataIn       (demod_rtl_bridge_iq_shift  ), //i
    .dataOut      (clkCrossing_11_dataOut     ), //o
    .clk          (clk                        ), //i
    .reset        (reset                      ), //i
    .rf_clk       (rf_clk                     ), //i
    .rf_resetn    (rf_resetn                  )  //i
  );
  ClkCrossing_3 clkCrossing_12 (
    .dataIn       (demod_rtl_bridge_w_addr  ), //i
    .dataOut      (clkCrossing_12_dataOut   ), //o
    .clk          (clk                      ), //i
    .reset        (reset                    ), //i
    .rf_clk       (rf_clk                   ), //i
    .rf_resetn    (rf_resetn                )  //i
  );
  ClkCrossing_4 clkCrossing_13 (
    .dataIn       (demod_rtl_bridge_w_data  ), //i
    .dataOut      (clkCrossing_13_dataOut   ), //o
    .clk          (clk                      ), //i
    .reset        (reset                    ), //i
    .rf_clk       (rf_clk                   ), //i
    .rf_resetn    (rf_resetn                )  //i
  );
  ClkCrossing_2 clkCrossing_14 (
    .dataIn       (demod_rtl_bridge_select  ), //i
    .dataOut      (clkCrossing_14_dataOut   ), //o
    .clk          (clk                      ), //i
    .reset        (reset                    ), //i
    .rf_clk       (rf_clk                   ), //i
    .rf_resetn    (rf_resetn                )  //i
  );
  ClkCrossing clkCrossing_15 (
    .dataIn       (data_comb_bridge_enable  ), //i
    .dataOut      (clkCrossing_15_dataOut   ), //o
    .clk          (clk                      ), //i
    .reset        (reset                    ), //i
    .rf_clk       (rf_clk                   ), //i
    .rf_resetn    (rf_resetn                )  //i
  );
  ClkCrossing_7 clkCrossing_16 (
    .dataIn       (data_comb_bridge_cnt_step  ), //i
    .dataOut      (clkCrossing_16_dataOut     ), //o
    .clk          (clk                        ), //i
    .reset        (reset                      ), //i
    .rf_clk       (rf_clk                     ), //i
    .rf_resetn    (rf_resetn                  )  //i
  );
  ClkCrossing_7 clkCrossing_17 (
    .dataIn       (data_comb_bridge_cnt_limit  ), //i
    .dataOut      (clkCrossing_17_dataOut      ), //o
    .clk          (clk                         ), //i
    .reset        (reset                       ), //i
    .rf_clk       (rf_clk                      ), //i
    .rf_resetn    (rf_resetn                   )  //i
  );
  assign _zz_unit_data_valid = rfClockArea_demod_rtl_data_flow_unit_data_valid;
  assign rfClockArea_data_combination_unit_data_payload = {12'd0, rfClockArea_demod_rtl_data_flow_unit_data_payload};
  assign base_data_payload = rfClockArea_data_combination_base_data_payload;
  assign base_data_valid = rfClockArea_data_combination_base_data_valid;
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
        readRsp_data[0 : 0] = demod_rtl_bridge_w_en_driver;
        readRsp_data[2 : 1] = demod_rtl_bridge_w_sel_driver;
      end
      8'h04 : begin
        readRsp_data[2 : 0] = demod_rtl_bridge_iq_shift_driver;
      end
      8'h20 : begin
        readRsp_data[0 : 0] = data_comb_bridge_enable_driver;
      end
      8'h24 : begin
        readRsp_data[4 : 0] = data_comb_bridge_cnt_step_driver;
      end
      8'h28 : begin
        readRsp_data[4 : 0] = data_comb_bridge_cnt_limit_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign demod_rtl_bridge_w_en = demod_rtl_bridge_w_en_driver;
  assign demod_rtl_bridge_w_sel = demod_rtl_bridge_w_sel_driver;
  assign demod_rtl_bridge_iq_shift = demod_rtl_bridge_iq_shift_driver;
  assign demod_rtl_bridge_w_addr = _zz_demod_rtl_bridge_w_addr;
  assign demod_rtl_bridge_w_data = _zz_demod_rtl_bridge_w_data;
  assign demod_rtl_bridge_select = _zz_demod_rtl_bridge_select;
  assign data_comb_bridge_enable = data_comb_bridge_enable_driver;
  assign data_comb_bridge_cnt_step = data_comb_bridge_cnt_step_driver;
  assign data_comb_bridge_cnt_limit = data_comb_bridge_cnt_limit_driver;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      demod_rtl_bridge_w_en_driver <= 1'b0;
      demod_rtl_bridge_w_sel_driver <= 2'b00;
      demod_rtl_bridge_iq_shift_driver <= 3'b000;
      _zz_demod_rtl_bridge_w_addr <= 6'h0;
      _zz_demod_rtl_bridge_w_data <= 32'h0;
      _zz_demod_rtl_bridge_select <= 3'b000;
      data_comb_bridge_enable_driver <= 1'b0;
      data_comb_bridge_cnt_step_driver <= 5'h0;
      data_comb_bridge_cnt_limit_driver <= 5'h0;
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
            demod_rtl_bridge_w_en_driver <= axil4Ctrl_wdata[0];
            demod_rtl_bridge_w_sel_driver <= axil4Ctrl_wdata[2 : 1];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            demod_rtl_bridge_iq_shift_driver <= axil4Ctrl_wdata[2 : 0];
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            _zz_demod_rtl_bridge_w_addr <= axil4Ctrl_wdata[5 : 0];
          end
        end
        8'h0c : begin
          if(writeOccur) begin
            _zz_demod_rtl_bridge_w_data <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h10 : begin
          if(writeOccur) begin
            _zz_demod_rtl_bridge_select <= axil4Ctrl_wdata[2 : 0];
          end
        end
        8'h20 : begin
          if(writeOccur) begin
            data_comb_bridge_enable_driver <= axil4Ctrl_wdata[0];
          end
        end
        8'h24 : begin
          if(writeOccur) begin
            data_comb_bridge_cnt_step_driver <= axil4Ctrl_wdata[4 : 0];
          end
        end
        8'h28 : begin
          if(writeOccur) begin
            data_comb_bridge_cnt_limit_driver <= axil4Ctrl_wdata[4 : 0];
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

//ClkCrossing_7 replaced by ClkCrossing_7

module ClkCrossing_7 (
  input      [4:0]    dataIn,
  output     [4:0]    dataOut,
  input               clk,
  input               reset,
  input               rf_clk,
  input               rf_resetn
);
  reg        [4:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [4:0]    area_clkO_buf0;
  reg        [4:0]    area_clkO_buf1;

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

//ClkCrossing_2 replaced by ClkCrossing_2

module ClkCrossing_4 (
  input      [31:0]   dataIn,
  output     [31:0]   dataOut,
  input               clk,
  input               reset,
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
  input      [5:0]    dataIn,
  output     [5:0]    dataOut,
  input               clk,
  input               reset,
  input               rf_clk,
  input               rf_resetn
);
  reg        [5:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [5:0]    area_clkO_buf0;
  reg        [5:0]    area_clkO_buf1;

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

module ClkCrossing_1 (
  input      [1:0]    dataIn,
  output     [1:0]    dataOut,
  input               clk,
  input               reset,
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

module dataCombination (
  input               unit_data_valid,
  input      [23:0]   unit_data_payload,
  output              base_data_valid,
  output     [23:0]   base_data_payload,
  input               enable,
  input      [4:0]    cnt_step,
  input      [4:0]    cnt_limit,
  input               rf_clk,
  input               rf_resetn
);
  wire       [4:0]    _zz_base_cnt;
  wire       [54:0]   _zz_base_data_buffer;
  wire       [54:0]   _zz_base_data_buffer_1;
  wire       [54:0]   _zz_base_data_buffer_2;
  wire       [4:0]    _zz_base_cnt_1;
  wire       [54:0]   _zz_base_data_buffer_3;
  reg        [4:0]    base_cnt;
  reg        [23:0]   unit_data_buffer;
  reg                 unit_data_valid_1;
  reg        [23:0]   base_data_buffer;
  reg                 base_data_valid_1;
  wire                when_dataCombination_l40;

  assign _zz_base_cnt = (base_cnt + cnt_step);
  assign _zz_base_data_buffer = (_zz_base_data_buffer_1 | _zz_base_data_buffer_2);
  assign _zz_base_data_buffer_1 = ({31'd0,base_data_buffer} <<< cnt_step);
  assign _zz_base_data_buffer_2 = {31'd0, unit_data_buffer};
  assign _zz_base_cnt_1 = (base_cnt + cnt_step);
  assign _zz_base_data_buffer_3 = ({31'd0,base_data_buffer} <<< cnt_step);
  assign when_dataCombination_l40 = (! enable);
  assign base_data_payload = base_data_buffer;
  assign base_data_valid = base_data_valid_1;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      base_cnt <= 5'h0;
      unit_data_buffer <= 24'h0;
      unit_data_valid_1 <= 1'b0;
      base_data_buffer <= 24'h0;
      base_data_valid_1 <= 1'b0;
    end else begin
      unit_data_buffer <= unit_data_payload;
      unit_data_valid_1 <= unit_data_valid;
      if(when_dataCombination_l40) begin
        base_cnt <= 5'h0;
        base_data_valid_1 <= 1'b0;
      end else begin
        if(unit_data_valid_1) begin
          base_data_valid_1 <= (base_cnt == cnt_limit);
          base_cnt <= ((base_cnt == cnt_limit) ? 5'h0 : _zz_base_cnt);
          base_data_buffer <= _zz_base_data_buffer[23:0];
        end else begin
          base_data_valid_1 <= (base_cnt == cnt_limit);
          base_cnt <= ((base_cnt == cnt_limit) ? 5'h0 : _zz_base_cnt_1);
          base_data_buffer <= _zz_base_data_buffer_3[23:0];
        end
      end
    end
  end


endmodule

module DemodulatorRTL (
  input               w_en,
  input      [5:0]    w_addr,
  input      [31:0]   w_data,
  input      [1:0]    w_sel,
  input      [2:0]    iq_shift,
  input      [2:0]    select_1,
  output              data_flow_unit_data_valid,
  output     [11:0]   data_flow_unit_data_payload,
  input               data_flow_mod_iq_valid,
  input      [15:0]   data_flow_mod_iq_payload_cha_i,
  input      [15:0]   data_flow_mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire                flowDeMux_1_outputs_0_valid;
  wire       [15:0]   flowDeMux_1_outputs_0_payload_cha_i;
  wire       [15:0]   flowDeMux_1_outputs_0_payload_cha_q;
  wire                flowDeMux_1_outputs_1_valid;
  wire       [15:0]   flowDeMux_1_outputs_1_payload_cha_i;
  wire       [15:0]   flowDeMux_1_outputs_1_payload_cha_q;
  wire                flowDeMux_1_outputs_2_valid;
  wire       [15:0]   flowDeMux_1_outputs_2_payload_cha_i;
  wire       [15:0]   flowDeMux_1_outputs_2_payload_cha_q;
  wire                flowDeMux_1_outputs_3_valid;
  wire       [15:0]   flowDeMux_1_outputs_3_payload_cha_i;
  wire       [15:0]   flowDeMux_1_outputs_3_payload_cha_q;
  wire                flowDeMux_1_outputs_4_valid;
  wire       [15:0]   flowDeMux_1_outputs_4_payload_cha_i;
  wire       [15:0]   flowDeMux_1_outputs_4_payload_cha_q;
  wire                bpsk_demod_unit_data_valid;
  wire       [11:0]   bpsk_demod_unit_data_payload;
  wire                qpsk_demod_unit_data_valid;
  wire       [11:0]   qpsk_demod_unit_data_payload;
  wire                qam16_demod_unit_data_valid;
  wire       [11:0]   qam16_demod_unit_data_payload;
  wire                qam64_demod_unit_data_valid;
  wire       [11:0]   qam64_demod_unit_data_payload;
  wire                lookup_demod_data_flow_unit_data_valid;
  wire       [11:0]   lookup_demod_data_flow_unit_data_payload;
  wire                flowMux_1_output_valid;
  wire       [11:0]   flowMux_1_output_payload;

  FlowDeMux flowDeMux_1 (
    .input_valid                (data_flow_mod_iq_valid               ), //i
    .input_payload_cha_i        (data_flow_mod_iq_payload_cha_i       ), //i
    .input_payload_cha_q        (data_flow_mod_iq_payload_cha_q       ), //i
    .select_1                   (select_1                             ), //i
    .outputs_0_valid            (flowDeMux_1_outputs_0_valid          ), //o
    .outputs_0_payload_cha_i    (flowDeMux_1_outputs_0_payload_cha_i  ), //o
    .outputs_0_payload_cha_q    (flowDeMux_1_outputs_0_payload_cha_q  ), //o
    .outputs_1_valid            (flowDeMux_1_outputs_1_valid          ), //o
    .outputs_1_payload_cha_i    (flowDeMux_1_outputs_1_payload_cha_i  ), //o
    .outputs_1_payload_cha_q    (flowDeMux_1_outputs_1_payload_cha_q  ), //o
    .outputs_2_valid            (flowDeMux_1_outputs_2_valid          ), //o
    .outputs_2_payload_cha_i    (flowDeMux_1_outputs_2_payload_cha_i  ), //o
    .outputs_2_payload_cha_q    (flowDeMux_1_outputs_2_payload_cha_q  ), //o
    .outputs_3_valid            (flowDeMux_1_outputs_3_valid          ), //o
    .outputs_3_payload_cha_i    (flowDeMux_1_outputs_3_payload_cha_i  ), //o
    .outputs_3_payload_cha_q    (flowDeMux_1_outputs_3_payload_cha_q  ), //o
    .outputs_4_valid            (flowDeMux_1_outputs_4_valid          ), //o
    .outputs_4_payload_cha_i    (flowDeMux_1_outputs_4_payload_cha_i  ), //o
    .outputs_4_payload_cha_q    (flowDeMux_1_outputs_4_payload_cha_q  )  //o
  );
  IQDemod bpsk_demod (
    .unit_data_valid         (bpsk_demod_unit_data_valid           ), //o
    .unit_data_payload       (bpsk_demod_unit_data_payload         ), //o
    .mod_iq_valid            (flowDeMux_1_outputs_0_valid          ), //i
    .mod_iq_payload_cha_i    (flowDeMux_1_outputs_0_payload_cha_i  ), //i
    .mod_iq_payload_cha_q    (flowDeMux_1_outputs_0_payload_cha_q  ), //i
    .rf_clk                  (rf_clk                               ), //i
    .rf_resetn               (rf_resetn                            )  //i
  );
  IQDemod_1 qpsk_demod (
    .unit_data_valid         (qpsk_demod_unit_data_valid           ), //o
    .unit_data_payload       (qpsk_demod_unit_data_payload         ), //o
    .mod_iq_valid            (flowDeMux_1_outputs_1_valid          ), //i
    .mod_iq_payload_cha_i    (flowDeMux_1_outputs_1_payload_cha_i  ), //i
    .mod_iq_payload_cha_q    (flowDeMux_1_outputs_1_payload_cha_q  ), //i
    .rf_clk                  (rf_clk                               ), //i
    .rf_resetn               (rf_resetn                            )  //i
  );
  IQDemod_2 qam16_demod (
    .unit_data_valid         (qam16_demod_unit_data_valid          ), //o
    .unit_data_payload       (qam16_demod_unit_data_payload        ), //o
    .mod_iq_valid            (flowDeMux_1_outputs_2_valid          ), //i
    .mod_iq_payload_cha_i    (flowDeMux_1_outputs_2_payload_cha_i  ), //i
    .mod_iq_payload_cha_q    (flowDeMux_1_outputs_2_payload_cha_q  ), //i
    .rf_clk                  (rf_clk                               ), //i
    .rf_resetn               (rf_resetn                            )  //i
  );
  IQDemod_3 qam64_demod (
    .unit_data_valid         (qam64_demod_unit_data_valid          ), //o
    .unit_data_payload       (qam64_demod_unit_data_payload        ), //o
    .mod_iq_valid            (flowDeMux_1_outputs_3_valid          ), //i
    .mod_iq_payload_cha_i    (flowDeMux_1_outputs_3_payload_cha_i  ), //i
    .mod_iq_payload_cha_q    (flowDeMux_1_outputs_3_payload_cha_q  ), //i
    .rf_clk                  (rf_clk                               ), //i
    .rf_resetn               (rf_resetn                            )  //i
  );
  lookUpDemod lookup_demod (
    .w_en                              (w_en                                      ), //i
    .w_addr                            (w_addr                                    ), //i
    .w_data                            (w_data                                    ), //i
    .w_sel                             (w_sel                                     ), //i
    .iq_shift                          (iq_shift                                  ), //i
    .data_flow_unit_data_valid         (lookup_demod_data_flow_unit_data_valid    ), //o
    .data_flow_unit_data_payload       (lookup_demod_data_flow_unit_data_payload  ), //o
    .data_flow_mod_iq_valid            (flowDeMux_1_outputs_4_valid               ), //i
    .data_flow_mod_iq_payload_cha_i    (flowDeMux_1_outputs_4_payload_cha_i       ), //i
    .data_flow_mod_iq_payload_cha_q    (flowDeMux_1_outputs_4_payload_cha_q       ), //i
    .rf_clk                            (rf_clk                                    ), //i
    .rf_resetn                         (rf_resetn                                 )  //i
  );
  FlowMux flowMux_1 (
    .inputs_0_valid      (bpsk_demod_unit_data_valid                ), //i
    .inputs_0_payload    (bpsk_demod_unit_data_payload              ), //i
    .inputs_1_valid      (qpsk_demod_unit_data_valid                ), //i
    .inputs_1_payload    (qpsk_demod_unit_data_payload              ), //i
    .inputs_2_valid      (qam16_demod_unit_data_valid               ), //i
    .inputs_2_payload    (qam16_demod_unit_data_payload             ), //i
    .inputs_3_valid      (qam64_demod_unit_data_valid               ), //i
    .inputs_3_payload    (qam64_demod_unit_data_payload             ), //i
    .inputs_4_valid      (lookup_demod_data_flow_unit_data_valid    ), //i
    .inputs_4_payload    (lookup_demod_data_flow_unit_data_payload  ), //i
    .select_1            (select_1                                  ), //i
    .output_valid        (flowMux_1_output_valid                    ), //o
    .output_payload      (flowMux_1_output_payload                  )  //o
  );
  assign data_flow_unit_data_valid = flowMux_1_output_valid;
  assign data_flow_unit_data_payload = flowMux_1_output_payload;

endmodule

module FlowMux (
  input               inputs_0_valid,
  input      [11:0]   inputs_0_payload,
  input               inputs_1_valid,
  input      [11:0]   inputs_1_payload,
  input               inputs_2_valid,
  input      [11:0]   inputs_2_payload,
  input               inputs_3_valid,
  input      [11:0]   inputs_3_payload,
  input               inputs_4_valid,
  input      [11:0]   inputs_4_payload,
  input      [2:0]    select_1,
  output              output_valid,
  output     [11:0]   output_payload
);
  reg                 _zz_output_valid;
  reg        [11:0]   _zz_output_payload;

  always @(*) begin
    case(select_1)
      3'b000 : begin
        _zz_output_valid = inputs_0_valid;
        _zz_output_payload = inputs_0_payload;
      end
      3'b001 : begin
        _zz_output_valid = inputs_1_valid;
        _zz_output_payload = inputs_1_payload;
      end
      3'b010 : begin
        _zz_output_valid = inputs_2_valid;
        _zz_output_payload = inputs_2_payload;
      end
      3'b011 : begin
        _zz_output_valid = inputs_3_valid;
        _zz_output_payload = inputs_3_payload;
      end
      default : begin
        _zz_output_valid = inputs_4_valid;
        _zz_output_payload = inputs_4_payload;
      end
    endcase
  end

  assign output_valid = _zz_output_valid;
  assign output_payload = _zz_output_payload;

endmodule

module lookUpDemod (
  input               w_en,
  input      [5:0]    w_addr,
  input      [31:0]   w_data,
  input      [1:0]    w_sel,
  input      [2:0]    iq_shift,
  output              data_flow_unit_data_valid,
  output     [11:0]   data_flow_unit_data_payload,
  input               data_flow_mod_iq_valid,
  input      [15:0]   data_flow_mod_iq_payload_cha_i,
  input      [15:0]   data_flow_mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [12:0]   _zz_data_flow_unit_data_payload;
  wire       [12:0]   _zz_data_flow_unit_data_payload_1;
  wire       [12:0]   _zz_data_flow_unit_data_payload_2;
  reg        [15:0]   demod_data_i;
  reg        [15:0]   demod_data_q;
  reg                 demod_valid_iq;
  reg        [15:0]   comp_mem_i_0;
  reg        [15:0]   comp_mem_i_1;
  reg        [15:0]   comp_mem_i_2;
  reg        [15:0]   comp_mem_i_3;
  reg        [15:0]   comp_mem_i_4;
  reg        [15:0]   comp_mem_i_5;
  reg        [15:0]   comp_mem_i_6;
  reg        [15:0]   comp_mem_i_7;
  reg        [15:0]   comp_mem_i_8;
  reg        [15:0]   comp_mem_i_9;
  reg        [15:0]   comp_mem_i_10;
  reg        [15:0]   comp_mem_i_11;
  reg        [15:0]   comp_mem_i_12;
  reg        [15:0]   comp_mem_i_13;
  reg        [15:0]   comp_mem_i_14;
  reg        [15:0]   comp_mem_i_15;
  reg        [15:0]   comp_mem_i_16;
  reg        [15:0]   comp_mem_i_17;
  reg        [15:0]   comp_mem_i_18;
  reg        [15:0]   comp_mem_i_19;
  reg        [15:0]   comp_mem_i_20;
  reg        [15:0]   comp_mem_i_21;
  reg        [15:0]   comp_mem_i_22;
  reg        [15:0]   comp_mem_i_23;
  reg        [15:0]   comp_mem_i_24;
  reg        [15:0]   comp_mem_i_25;
  reg        [15:0]   comp_mem_i_26;
  reg        [15:0]   comp_mem_i_27;
  reg        [15:0]   comp_mem_i_28;
  reg        [15:0]   comp_mem_i_29;
  reg        [15:0]   comp_mem_i_30;
  reg        [15:0]   comp_mem_i_31;
  reg        [15:0]   comp_mem_i_32;
  reg        [15:0]   comp_mem_i_33;
  reg        [15:0]   comp_mem_i_34;
  reg        [15:0]   comp_mem_i_35;
  reg        [15:0]   comp_mem_i_36;
  reg        [15:0]   comp_mem_i_37;
  reg        [15:0]   comp_mem_i_38;
  reg        [15:0]   comp_mem_i_39;
  reg        [15:0]   comp_mem_i_40;
  reg        [15:0]   comp_mem_i_41;
  reg        [15:0]   comp_mem_i_42;
  reg        [15:0]   comp_mem_i_43;
  reg        [15:0]   comp_mem_i_44;
  reg        [15:0]   comp_mem_i_45;
  reg        [15:0]   comp_mem_i_46;
  reg        [15:0]   comp_mem_i_47;
  reg        [15:0]   comp_mem_i_48;
  reg        [15:0]   comp_mem_i_49;
  reg        [15:0]   comp_mem_i_50;
  reg        [15:0]   comp_mem_i_51;
  reg        [15:0]   comp_mem_i_52;
  reg        [15:0]   comp_mem_i_53;
  reg        [15:0]   comp_mem_i_54;
  reg        [15:0]   comp_mem_i_55;
  reg        [15:0]   comp_mem_i_56;
  reg        [15:0]   comp_mem_i_57;
  reg        [15:0]   comp_mem_i_58;
  reg        [15:0]   comp_mem_i_59;
  reg        [15:0]   comp_mem_i_60;
  reg        [15:0]   comp_mem_i_61;
  reg        [15:0]   comp_mem_i_62;
  reg        [15:0]   comp_mem_q_0;
  reg        [15:0]   comp_mem_q_1;
  reg        [15:0]   comp_mem_q_2;
  reg        [15:0]   comp_mem_q_3;
  reg        [15:0]   comp_mem_q_4;
  reg        [15:0]   comp_mem_q_5;
  reg        [15:0]   comp_mem_q_6;
  reg        [15:0]   comp_mem_q_7;
  reg        [15:0]   comp_mem_q_8;
  reg        [15:0]   comp_mem_q_9;
  reg        [15:0]   comp_mem_q_10;
  reg        [15:0]   comp_mem_q_11;
  reg        [15:0]   comp_mem_q_12;
  reg        [15:0]   comp_mem_q_13;
  reg        [15:0]   comp_mem_q_14;
  reg        [15:0]   comp_mem_q_15;
  reg        [15:0]   comp_mem_q_16;
  reg        [15:0]   comp_mem_q_17;
  reg        [15:0]   comp_mem_q_18;
  reg        [15:0]   comp_mem_q_19;
  reg        [15:0]   comp_mem_q_20;
  reg        [15:0]   comp_mem_q_21;
  reg        [15:0]   comp_mem_q_22;
  reg        [15:0]   comp_mem_q_23;
  reg        [15:0]   comp_mem_q_24;
  reg        [15:0]   comp_mem_q_25;
  reg        [15:0]   comp_mem_q_26;
  reg        [15:0]   comp_mem_q_27;
  reg        [15:0]   comp_mem_q_28;
  reg        [15:0]   comp_mem_q_29;
  reg        [15:0]   comp_mem_q_30;
  reg        [15:0]   comp_mem_q_31;
  reg        [15:0]   comp_mem_q_32;
  reg        [15:0]   comp_mem_q_33;
  reg        [15:0]   comp_mem_q_34;
  reg        [15:0]   comp_mem_q_35;
  reg        [15:0]   comp_mem_q_36;
  reg        [15:0]   comp_mem_q_37;
  reg        [15:0]   comp_mem_q_38;
  reg        [15:0]   comp_mem_q_39;
  reg        [15:0]   comp_mem_q_40;
  reg        [15:0]   comp_mem_q_41;
  reg        [15:0]   comp_mem_q_42;
  reg        [15:0]   comp_mem_q_43;
  reg        [15:0]   comp_mem_q_44;
  reg        [15:0]   comp_mem_q_45;
  reg        [15:0]   comp_mem_q_46;
  reg        [15:0]   comp_mem_q_47;
  reg        [15:0]   comp_mem_q_48;
  reg        [15:0]   comp_mem_q_49;
  reg        [15:0]   comp_mem_q_50;
  reg        [15:0]   comp_mem_q_51;
  reg        [15:0]   comp_mem_q_52;
  reg        [15:0]   comp_mem_q_53;
  reg        [15:0]   comp_mem_q_54;
  reg        [15:0]   comp_mem_q_55;
  reg        [15:0]   comp_mem_q_56;
  reg        [15:0]   comp_mem_q_57;
  reg        [15:0]   comp_mem_q_58;
  reg        [15:0]   comp_mem_q_59;
  reg        [15:0]   comp_mem_q_60;
  reg        [15:0]   comp_mem_q_61;
  reg        [15:0]   comp_mem_q_62;
  reg        [5:0]    code_mem_i_0;
  reg        [5:0]    code_mem_i_1;
  reg        [5:0]    code_mem_i_2;
  reg        [5:0]    code_mem_i_3;
  reg        [5:0]    code_mem_i_4;
  reg        [5:0]    code_mem_i_5;
  reg        [5:0]    code_mem_i_6;
  reg        [5:0]    code_mem_i_7;
  reg        [5:0]    code_mem_i_8;
  reg        [5:0]    code_mem_i_9;
  reg        [5:0]    code_mem_i_10;
  reg        [5:0]    code_mem_i_11;
  reg        [5:0]    code_mem_i_12;
  reg        [5:0]    code_mem_i_13;
  reg        [5:0]    code_mem_i_14;
  reg        [5:0]    code_mem_i_15;
  reg        [5:0]    code_mem_i_16;
  reg        [5:0]    code_mem_i_17;
  reg        [5:0]    code_mem_i_18;
  reg        [5:0]    code_mem_i_19;
  reg        [5:0]    code_mem_i_20;
  reg        [5:0]    code_mem_i_21;
  reg        [5:0]    code_mem_i_22;
  reg        [5:0]    code_mem_i_23;
  reg        [5:0]    code_mem_i_24;
  reg        [5:0]    code_mem_i_25;
  reg        [5:0]    code_mem_i_26;
  reg        [5:0]    code_mem_i_27;
  reg        [5:0]    code_mem_i_28;
  reg        [5:0]    code_mem_i_29;
  reg        [5:0]    code_mem_i_30;
  reg        [5:0]    code_mem_i_31;
  reg        [5:0]    code_mem_i_32;
  reg        [5:0]    code_mem_i_33;
  reg        [5:0]    code_mem_i_34;
  reg        [5:0]    code_mem_i_35;
  reg        [5:0]    code_mem_i_36;
  reg        [5:0]    code_mem_i_37;
  reg        [5:0]    code_mem_i_38;
  reg        [5:0]    code_mem_i_39;
  reg        [5:0]    code_mem_i_40;
  reg        [5:0]    code_mem_i_41;
  reg        [5:0]    code_mem_i_42;
  reg        [5:0]    code_mem_i_43;
  reg        [5:0]    code_mem_i_44;
  reg        [5:0]    code_mem_i_45;
  reg        [5:0]    code_mem_i_46;
  reg        [5:0]    code_mem_i_47;
  reg        [5:0]    code_mem_i_48;
  reg        [5:0]    code_mem_i_49;
  reg        [5:0]    code_mem_i_50;
  reg        [5:0]    code_mem_i_51;
  reg        [5:0]    code_mem_i_52;
  reg        [5:0]    code_mem_i_53;
  reg        [5:0]    code_mem_i_54;
  reg        [5:0]    code_mem_i_55;
  reg        [5:0]    code_mem_i_56;
  reg        [5:0]    code_mem_i_57;
  reg        [5:0]    code_mem_i_58;
  reg        [5:0]    code_mem_i_59;
  reg        [5:0]    code_mem_i_60;
  reg        [5:0]    code_mem_i_61;
  reg        [5:0]    code_mem_i_62;
  reg        [5:0]    code_mem_i_63;
  reg        [5:0]    code_mem_q_0;
  reg        [5:0]    code_mem_q_1;
  reg        [5:0]    code_mem_q_2;
  reg        [5:0]    code_mem_q_3;
  reg        [5:0]    code_mem_q_4;
  reg        [5:0]    code_mem_q_5;
  reg        [5:0]    code_mem_q_6;
  reg        [5:0]    code_mem_q_7;
  reg        [5:0]    code_mem_q_8;
  reg        [5:0]    code_mem_q_9;
  reg        [5:0]    code_mem_q_10;
  reg        [5:0]    code_mem_q_11;
  reg        [5:0]    code_mem_q_12;
  reg        [5:0]    code_mem_q_13;
  reg        [5:0]    code_mem_q_14;
  reg        [5:0]    code_mem_q_15;
  reg        [5:0]    code_mem_q_16;
  reg        [5:0]    code_mem_q_17;
  reg        [5:0]    code_mem_q_18;
  reg        [5:0]    code_mem_q_19;
  reg        [5:0]    code_mem_q_20;
  reg        [5:0]    code_mem_q_21;
  reg        [5:0]    code_mem_q_22;
  reg        [5:0]    code_mem_q_23;
  reg        [5:0]    code_mem_q_24;
  reg        [5:0]    code_mem_q_25;
  reg        [5:0]    code_mem_q_26;
  reg        [5:0]    code_mem_q_27;
  reg        [5:0]    code_mem_q_28;
  reg        [5:0]    code_mem_q_29;
  reg        [5:0]    code_mem_q_30;
  reg        [5:0]    code_mem_q_31;
  reg        [5:0]    code_mem_q_32;
  reg        [5:0]    code_mem_q_33;
  reg        [5:0]    code_mem_q_34;
  reg        [5:0]    code_mem_q_35;
  reg        [5:0]    code_mem_q_36;
  reg        [5:0]    code_mem_q_37;
  reg        [5:0]    code_mem_q_38;
  reg        [5:0]    code_mem_q_39;
  reg        [5:0]    code_mem_q_40;
  reg        [5:0]    code_mem_q_41;
  reg        [5:0]    code_mem_q_42;
  reg        [5:0]    code_mem_q_43;
  reg        [5:0]    code_mem_q_44;
  reg        [5:0]    code_mem_q_45;
  reg        [5:0]    code_mem_q_46;
  reg        [5:0]    code_mem_q_47;
  reg        [5:0]    code_mem_q_48;
  reg        [5:0]    code_mem_q_49;
  reg        [5:0]    code_mem_q_50;
  reg        [5:0]    code_mem_q_51;
  reg        [5:0]    code_mem_q_52;
  reg        [5:0]    code_mem_q_53;
  reg        [5:0]    code_mem_q_54;
  reg        [5:0]    code_mem_q_55;
  reg        [5:0]    code_mem_q_56;
  reg        [5:0]    code_mem_q_57;
  reg        [5:0]    code_mem_q_58;
  reg        [5:0]    code_mem_q_59;
  reg        [5:0]    code_mem_q_60;
  reg        [5:0]    code_mem_q_61;
  reg        [5:0]    code_mem_q_62;
  reg        [5:0]    code_mem_q_63;
  wire       [63:0]   _zz_1;
  wire       [31:0]   _zz_comp_mem_i_0;
  wire       [63:0]   _zz_2;
  wire       [31:0]   _zz_code_mem_i_0;
  wire       [63:0]   _zz_3;
  wire       [31:0]   _zz_comp_mem_q_0;
  wire       [63:0]   _zz_4;
  wire       [31:0]   _zz_code_mem_q_0;
  reg        [62:0]   comp_cmp_i;
  reg        [62:0]   comp_cmp_q;
  reg        [62:0]   compTable_i;
  reg        [62:0]   compTable_q;
  reg                 demod_valid;
  reg        [5:0]    unit_data_i;
  reg        [5:0]    unit_data_q;
  reg                 unit_valid;

  assign _zz_data_flow_unit_data_payload = (_zz_data_flow_unit_data_payload_1 | _zz_data_flow_unit_data_payload_2);
  assign _zz_data_flow_unit_data_payload_1 = ({7'd0,unit_data_i} <<< iq_shift);
  assign _zz_data_flow_unit_data_payload_2 = {7'd0, unit_data_q};
  assign _zz_1 = ({63'd0,1'b1} <<< w_addr);
  assign _zz_comp_mem_i_0 = w_data;
  assign _zz_2 = ({63'd0,1'b1} <<< w_addr);
  assign _zz_code_mem_i_0 = w_data;
  assign _zz_3 = ({63'd0,1'b1} <<< w_addr);
  assign _zz_comp_mem_q_0 = w_data;
  assign _zz_4 = ({63'd0,1'b1} <<< w_addr);
  assign _zz_code_mem_q_0 = w_data;
  always @(*) begin
    comp_cmp_i[0] = ($signed(comp_mem_i_0) < $signed(demod_data_i));
    comp_cmp_i[1] = ($signed(comp_mem_i_1) < $signed(demod_data_i));
    comp_cmp_i[2] = ($signed(comp_mem_i_2) < $signed(demod_data_i));
    comp_cmp_i[3] = ($signed(comp_mem_i_3) < $signed(demod_data_i));
    comp_cmp_i[4] = ($signed(comp_mem_i_4) < $signed(demod_data_i));
    comp_cmp_i[5] = ($signed(comp_mem_i_5) < $signed(demod_data_i));
    comp_cmp_i[6] = ($signed(comp_mem_i_6) < $signed(demod_data_i));
    comp_cmp_i[7] = ($signed(comp_mem_i_7) < $signed(demod_data_i));
    comp_cmp_i[8] = ($signed(comp_mem_i_8) < $signed(demod_data_i));
    comp_cmp_i[9] = ($signed(comp_mem_i_9) < $signed(demod_data_i));
    comp_cmp_i[10] = ($signed(comp_mem_i_10) < $signed(demod_data_i));
    comp_cmp_i[11] = ($signed(comp_mem_i_11) < $signed(demod_data_i));
    comp_cmp_i[12] = ($signed(comp_mem_i_12) < $signed(demod_data_i));
    comp_cmp_i[13] = ($signed(comp_mem_i_13) < $signed(demod_data_i));
    comp_cmp_i[14] = ($signed(comp_mem_i_14) < $signed(demod_data_i));
    comp_cmp_i[15] = ($signed(comp_mem_i_15) < $signed(demod_data_i));
    comp_cmp_i[16] = ($signed(comp_mem_i_16) < $signed(demod_data_i));
    comp_cmp_i[17] = ($signed(comp_mem_i_17) < $signed(demod_data_i));
    comp_cmp_i[18] = ($signed(comp_mem_i_18) < $signed(demod_data_i));
    comp_cmp_i[19] = ($signed(comp_mem_i_19) < $signed(demod_data_i));
    comp_cmp_i[20] = ($signed(comp_mem_i_20) < $signed(demod_data_i));
    comp_cmp_i[21] = ($signed(comp_mem_i_21) < $signed(demod_data_i));
    comp_cmp_i[22] = ($signed(comp_mem_i_22) < $signed(demod_data_i));
    comp_cmp_i[23] = ($signed(comp_mem_i_23) < $signed(demod_data_i));
    comp_cmp_i[24] = ($signed(comp_mem_i_24) < $signed(demod_data_i));
    comp_cmp_i[25] = ($signed(comp_mem_i_25) < $signed(demod_data_i));
    comp_cmp_i[26] = ($signed(comp_mem_i_26) < $signed(demod_data_i));
    comp_cmp_i[27] = ($signed(comp_mem_i_27) < $signed(demod_data_i));
    comp_cmp_i[28] = ($signed(comp_mem_i_28) < $signed(demod_data_i));
    comp_cmp_i[29] = ($signed(comp_mem_i_29) < $signed(demod_data_i));
    comp_cmp_i[30] = ($signed(comp_mem_i_30) < $signed(demod_data_i));
    comp_cmp_i[31] = ($signed(comp_mem_i_31) < $signed(demod_data_i));
    comp_cmp_i[32] = ($signed(comp_mem_i_32) < $signed(demod_data_i));
    comp_cmp_i[33] = ($signed(comp_mem_i_33) < $signed(demod_data_i));
    comp_cmp_i[34] = ($signed(comp_mem_i_34) < $signed(demod_data_i));
    comp_cmp_i[35] = ($signed(comp_mem_i_35) < $signed(demod_data_i));
    comp_cmp_i[36] = ($signed(comp_mem_i_36) < $signed(demod_data_i));
    comp_cmp_i[37] = ($signed(comp_mem_i_37) < $signed(demod_data_i));
    comp_cmp_i[38] = ($signed(comp_mem_i_38) < $signed(demod_data_i));
    comp_cmp_i[39] = ($signed(comp_mem_i_39) < $signed(demod_data_i));
    comp_cmp_i[40] = ($signed(comp_mem_i_40) < $signed(demod_data_i));
    comp_cmp_i[41] = ($signed(comp_mem_i_41) < $signed(demod_data_i));
    comp_cmp_i[42] = ($signed(comp_mem_i_42) < $signed(demod_data_i));
    comp_cmp_i[43] = ($signed(comp_mem_i_43) < $signed(demod_data_i));
    comp_cmp_i[44] = ($signed(comp_mem_i_44) < $signed(demod_data_i));
    comp_cmp_i[45] = ($signed(comp_mem_i_45) < $signed(demod_data_i));
    comp_cmp_i[46] = ($signed(comp_mem_i_46) < $signed(demod_data_i));
    comp_cmp_i[47] = ($signed(comp_mem_i_47) < $signed(demod_data_i));
    comp_cmp_i[48] = ($signed(comp_mem_i_48) < $signed(demod_data_i));
    comp_cmp_i[49] = ($signed(comp_mem_i_49) < $signed(demod_data_i));
    comp_cmp_i[50] = ($signed(comp_mem_i_50) < $signed(demod_data_i));
    comp_cmp_i[51] = ($signed(comp_mem_i_51) < $signed(demod_data_i));
    comp_cmp_i[52] = ($signed(comp_mem_i_52) < $signed(demod_data_i));
    comp_cmp_i[53] = ($signed(comp_mem_i_53) < $signed(demod_data_i));
    comp_cmp_i[54] = ($signed(comp_mem_i_54) < $signed(demod_data_i));
    comp_cmp_i[55] = ($signed(comp_mem_i_55) < $signed(demod_data_i));
    comp_cmp_i[56] = ($signed(comp_mem_i_56) < $signed(demod_data_i));
    comp_cmp_i[57] = ($signed(comp_mem_i_57) < $signed(demod_data_i));
    comp_cmp_i[58] = ($signed(comp_mem_i_58) < $signed(demod_data_i));
    comp_cmp_i[59] = ($signed(comp_mem_i_59) < $signed(demod_data_i));
    comp_cmp_i[60] = ($signed(comp_mem_i_60) < $signed(demod_data_i));
    comp_cmp_i[61] = ($signed(comp_mem_i_61) < $signed(demod_data_i));
    comp_cmp_i[62] = ($signed(comp_mem_i_62) < $signed(demod_data_i));
  end

  always @(*) begin
    comp_cmp_q[0] = ($signed(comp_mem_q_0) < $signed(demod_data_q));
    comp_cmp_q[1] = ($signed(comp_mem_q_1) < $signed(demod_data_q));
    comp_cmp_q[2] = ($signed(comp_mem_q_2) < $signed(demod_data_q));
    comp_cmp_q[3] = ($signed(comp_mem_q_3) < $signed(demod_data_q));
    comp_cmp_q[4] = ($signed(comp_mem_q_4) < $signed(demod_data_q));
    comp_cmp_q[5] = ($signed(comp_mem_q_5) < $signed(demod_data_q));
    comp_cmp_q[6] = ($signed(comp_mem_q_6) < $signed(demod_data_q));
    comp_cmp_q[7] = ($signed(comp_mem_q_7) < $signed(demod_data_q));
    comp_cmp_q[8] = ($signed(comp_mem_q_8) < $signed(demod_data_q));
    comp_cmp_q[9] = ($signed(comp_mem_q_9) < $signed(demod_data_q));
    comp_cmp_q[10] = ($signed(comp_mem_q_10) < $signed(demod_data_q));
    comp_cmp_q[11] = ($signed(comp_mem_q_11) < $signed(demod_data_q));
    comp_cmp_q[12] = ($signed(comp_mem_q_12) < $signed(demod_data_q));
    comp_cmp_q[13] = ($signed(comp_mem_q_13) < $signed(demod_data_q));
    comp_cmp_q[14] = ($signed(comp_mem_q_14) < $signed(demod_data_q));
    comp_cmp_q[15] = ($signed(comp_mem_q_15) < $signed(demod_data_q));
    comp_cmp_q[16] = ($signed(comp_mem_q_16) < $signed(demod_data_q));
    comp_cmp_q[17] = ($signed(comp_mem_q_17) < $signed(demod_data_q));
    comp_cmp_q[18] = ($signed(comp_mem_q_18) < $signed(demod_data_q));
    comp_cmp_q[19] = ($signed(comp_mem_q_19) < $signed(demod_data_q));
    comp_cmp_q[20] = ($signed(comp_mem_q_20) < $signed(demod_data_q));
    comp_cmp_q[21] = ($signed(comp_mem_q_21) < $signed(demod_data_q));
    comp_cmp_q[22] = ($signed(comp_mem_q_22) < $signed(demod_data_q));
    comp_cmp_q[23] = ($signed(comp_mem_q_23) < $signed(demod_data_q));
    comp_cmp_q[24] = ($signed(comp_mem_q_24) < $signed(demod_data_q));
    comp_cmp_q[25] = ($signed(comp_mem_q_25) < $signed(demod_data_q));
    comp_cmp_q[26] = ($signed(comp_mem_q_26) < $signed(demod_data_q));
    comp_cmp_q[27] = ($signed(comp_mem_q_27) < $signed(demod_data_q));
    comp_cmp_q[28] = ($signed(comp_mem_q_28) < $signed(demod_data_q));
    comp_cmp_q[29] = ($signed(comp_mem_q_29) < $signed(demod_data_q));
    comp_cmp_q[30] = ($signed(comp_mem_q_30) < $signed(demod_data_q));
    comp_cmp_q[31] = ($signed(comp_mem_q_31) < $signed(demod_data_q));
    comp_cmp_q[32] = ($signed(comp_mem_q_32) < $signed(demod_data_q));
    comp_cmp_q[33] = ($signed(comp_mem_q_33) < $signed(demod_data_q));
    comp_cmp_q[34] = ($signed(comp_mem_q_34) < $signed(demod_data_q));
    comp_cmp_q[35] = ($signed(comp_mem_q_35) < $signed(demod_data_q));
    comp_cmp_q[36] = ($signed(comp_mem_q_36) < $signed(demod_data_q));
    comp_cmp_q[37] = ($signed(comp_mem_q_37) < $signed(demod_data_q));
    comp_cmp_q[38] = ($signed(comp_mem_q_38) < $signed(demod_data_q));
    comp_cmp_q[39] = ($signed(comp_mem_q_39) < $signed(demod_data_q));
    comp_cmp_q[40] = ($signed(comp_mem_q_40) < $signed(demod_data_q));
    comp_cmp_q[41] = ($signed(comp_mem_q_41) < $signed(demod_data_q));
    comp_cmp_q[42] = ($signed(comp_mem_q_42) < $signed(demod_data_q));
    comp_cmp_q[43] = ($signed(comp_mem_q_43) < $signed(demod_data_q));
    comp_cmp_q[44] = ($signed(comp_mem_q_44) < $signed(demod_data_q));
    comp_cmp_q[45] = ($signed(comp_mem_q_45) < $signed(demod_data_q));
    comp_cmp_q[46] = ($signed(comp_mem_q_46) < $signed(demod_data_q));
    comp_cmp_q[47] = ($signed(comp_mem_q_47) < $signed(demod_data_q));
    comp_cmp_q[48] = ($signed(comp_mem_q_48) < $signed(demod_data_q));
    comp_cmp_q[49] = ($signed(comp_mem_q_49) < $signed(demod_data_q));
    comp_cmp_q[50] = ($signed(comp_mem_q_50) < $signed(demod_data_q));
    comp_cmp_q[51] = ($signed(comp_mem_q_51) < $signed(demod_data_q));
    comp_cmp_q[52] = ($signed(comp_mem_q_52) < $signed(demod_data_q));
    comp_cmp_q[53] = ($signed(comp_mem_q_53) < $signed(demod_data_q));
    comp_cmp_q[54] = ($signed(comp_mem_q_54) < $signed(demod_data_q));
    comp_cmp_q[55] = ($signed(comp_mem_q_55) < $signed(demod_data_q));
    comp_cmp_q[56] = ($signed(comp_mem_q_56) < $signed(demod_data_q));
    comp_cmp_q[57] = ($signed(comp_mem_q_57) < $signed(demod_data_q));
    comp_cmp_q[58] = ($signed(comp_mem_q_58) < $signed(demod_data_q));
    comp_cmp_q[59] = ($signed(comp_mem_q_59) < $signed(demod_data_q));
    comp_cmp_q[60] = ($signed(comp_mem_q_60) < $signed(demod_data_q));
    comp_cmp_q[61] = ($signed(comp_mem_q_61) < $signed(demod_data_q));
    comp_cmp_q[62] = ($signed(comp_mem_q_62) < $signed(demod_data_q));
  end

  assign data_flow_unit_data_payload = _zz_data_flow_unit_data_payload[11:0];
  assign data_flow_unit_data_valid = unit_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      demod_data_i <= 16'h0;
      demod_data_q <= 16'h0;
      demod_valid_iq <= 1'b0;
      compTable_i <= 63'h0;
      compTable_q <= 63'h0;
      demod_valid <= 1'b0;
      unit_valid <= 1'b0;
    end else begin
      demod_data_i <= data_flow_mod_iq_payload_cha_i;
      demod_data_q <= data_flow_mod_iq_payload_cha_q;
      demod_valid_iq <= (data_flow_mod_iq_valid && (! w_en));
      compTable_i <= comp_cmp_i;
      compTable_q <= comp_cmp_q;
      demod_valid <= demod_valid_iq;
      if(demod_valid) begin
        unit_valid <= 1'b1;
      end else begin
        unit_valid <= 1'b0;
      end
    end
  end

  always @(posedge rf_clk) begin
    if(w_en) begin
      case(w_sel)
        2'b00 : begin
          if(_zz_1[0]) begin
            comp_mem_i_0 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[1]) begin
            comp_mem_i_1 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[2]) begin
            comp_mem_i_2 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[3]) begin
            comp_mem_i_3 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[4]) begin
            comp_mem_i_4 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[5]) begin
            comp_mem_i_5 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[6]) begin
            comp_mem_i_6 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[7]) begin
            comp_mem_i_7 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[8]) begin
            comp_mem_i_8 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[9]) begin
            comp_mem_i_9 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[10]) begin
            comp_mem_i_10 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[11]) begin
            comp_mem_i_11 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[12]) begin
            comp_mem_i_12 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[13]) begin
            comp_mem_i_13 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[14]) begin
            comp_mem_i_14 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[15]) begin
            comp_mem_i_15 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[16]) begin
            comp_mem_i_16 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[17]) begin
            comp_mem_i_17 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[18]) begin
            comp_mem_i_18 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[19]) begin
            comp_mem_i_19 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[20]) begin
            comp_mem_i_20 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[21]) begin
            comp_mem_i_21 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[22]) begin
            comp_mem_i_22 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[23]) begin
            comp_mem_i_23 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[24]) begin
            comp_mem_i_24 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[25]) begin
            comp_mem_i_25 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[26]) begin
            comp_mem_i_26 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[27]) begin
            comp_mem_i_27 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[28]) begin
            comp_mem_i_28 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[29]) begin
            comp_mem_i_29 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[30]) begin
            comp_mem_i_30 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[31]) begin
            comp_mem_i_31 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[32]) begin
            comp_mem_i_32 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[33]) begin
            comp_mem_i_33 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[34]) begin
            comp_mem_i_34 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[35]) begin
            comp_mem_i_35 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[36]) begin
            comp_mem_i_36 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[37]) begin
            comp_mem_i_37 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[38]) begin
            comp_mem_i_38 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[39]) begin
            comp_mem_i_39 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[40]) begin
            comp_mem_i_40 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[41]) begin
            comp_mem_i_41 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[42]) begin
            comp_mem_i_42 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[43]) begin
            comp_mem_i_43 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[44]) begin
            comp_mem_i_44 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[45]) begin
            comp_mem_i_45 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[46]) begin
            comp_mem_i_46 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[47]) begin
            comp_mem_i_47 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[48]) begin
            comp_mem_i_48 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[49]) begin
            comp_mem_i_49 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[50]) begin
            comp_mem_i_50 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[51]) begin
            comp_mem_i_51 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[52]) begin
            comp_mem_i_52 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[53]) begin
            comp_mem_i_53 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[54]) begin
            comp_mem_i_54 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[55]) begin
            comp_mem_i_55 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[56]) begin
            comp_mem_i_56 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[57]) begin
            comp_mem_i_57 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[58]) begin
            comp_mem_i_58 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[59]) begin
            comp_mem_i_59 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[60]) begin
            comp_mem_i_60 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[61]) begin
            comp_mem_i_61 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[62]) begin
            comp_mem_i_62 <= _zz_comp_mem_i_0[15:0];
          end
        end
        2'b01 : begin
          if(_zz_2[0]) begin
            code_mem_i_0 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[1]) begin
            code_mem_i_1 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[2]) begin
            code_mem_i_2 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[3]) begin
            code_mem_i_3 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[4]) begin
            code_mem_i_4 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[5]) begin
            code_mem_i_5 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[6]) begin
            code_mem_i_6 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[7]) begin
            code_mem_i_7 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[8]) begin
            code_mem_i_8 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[9]) begin
            code_mem_i_9 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[10]) begin
            code_mem_i_10 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[11]) begin
            code_mem_i_11 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[12]) begin
            code_mem_i_12 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[13]) begin
            code_mem_i_13 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[14]) begin
            code_mem_i_14 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[15]) begin
            code_mem_i_15 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[16]) begin
            code_mem_i_16 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[17]) begin
            code_mem_i_17 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[18]) begin
            code_mem_i_18 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[19]) begin
            code_mem_i_19 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[20]) begin
            code_mem_i_20 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[21]) begin
            code_mem_i_21 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[22]) begin
            code_mem_i_22 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[23]) begin
            code_mem_i_23 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[24]) begin
            code_mem_i_24 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[25]) begin
            code_mem_i_25 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[26]) begin
            code_mem_i_26 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[27]) begin
            code_mem_i_27 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[28]) begin
            code_mem_i_28 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[29]) begin
            code_mem_i_29 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[30]) begin
            code_mem_i_30 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[31]) begin
            code_mem_i_31 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[32]) begin
            code_mem_i_32 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[33]) begin
            code_mem_i_33 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[34]) begin
            code_mem_i_34 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[35]) begin
            code_mem_i_35 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[36]) begin
            code_mem_i_36 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[37]) begin
            code_mem_i_37 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[38]) begin
            code_mem_i_38 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[39]) begin
            code_mem_i_39 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[40]) begin
            code_mem_i_40 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[41]) begin
            code_mem_i_41 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[42]) begin
            code_mem_i_42 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[43]) begin
            code_mem_i_43 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[44]) begin
            code_mem_i_44 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[45]) begin
            code_mem_i_45 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[46]) begin
            code_mem_i_46 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[47]) begin
            code_mem_i_47 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[48]) begin
            code_mem_i_48 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[49]) begin
            code_mem_i_49 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[50]) begin
            code_mem_i_50 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[51]) begin
            code_mem_i_51 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[52]) begin
            code_mem_i_52 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[53]) begin
            code_mem_i_53 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[54]) begin
            code_mem_i_54 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[55]) begin
            code_mem_i_55 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[56]) begin
            code_mem_i_56 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[57]) begin
            code_mem_i_57 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[58]) begin
            code_mem_i_58 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[59]) begin
            code_mem_i_59 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[60]) begin
            code_mem_i_60 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[61]) begin
            code_mem_i_61 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[62]) begin
            code_mem_i_62 <= _zz_code_mem_i_0[5:0];
          end
          if(_zz_2[63]) begin
            code_mem_i_63 <= _zz_code_mem_i_0[5:0];
          end
        end
        2'b10 : begin
          if(_zz_3[0]) begin
            comp_mem_q_0 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[1]) begin
            comp_mem_q_1 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[2]) begin
            comp_mem_q_2 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[3]) begin
            comp_mem_q_3 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[4]) begin
            comp_mem_q_4 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[5]) begin
            comp_mem_q_5 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[6]) begin
            comp_mem_q_6 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[7]) begin
            comp_mem_q_7 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[8]) begin
            comp_mem_q_8 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[9]) begin
            comp_mem_q_9 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[10]) begin
            comp_mem_q_10 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[11]) begin
            comp_mem_q_11 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[12]) begin
            comp_mem_q_12 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[13]) begin
            comp_mem_q_13 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[14]) begin
            comp_mem_q_14 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[15]) begin
            comp_mem_q_15 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[16]) begin
            comp_mem_q_16 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[17]) begin
            comp_mem_q_17 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[18]) begin
            comp_mem_q_18 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[19]) begin
            comp_mem_q_19 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[20]) begin
            comp_mem_q_20 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[21]) begin
            comp_mem_q_21 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[22]) begin
            comp_mem_q_22 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[23]) begin
            comp_mem_q_23 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[24]) begin
            comp_mem_q_24 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[25]) begin
            comp_mem_q_25 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[26]) begin
            comp_mem_q_26 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[27]) begin
            comp_mem_q_27 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[28]) begin
            comp_mem_q_28 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[29]) begin
            comp_mem_q_29 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[30]) begin
            comp_mem_q_30 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[31]) begin
            comp_mem_q_31 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[32]) begin
            comp_mem_q_32 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[33]) begin
            comp_mem_q_33 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[34]) begin
            comp_mem_q_34 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[35]) begin
            comp_mem_q_35 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[36]) begin
            comp_mem_q_36 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[37]) begin
            comp_mem_q_37 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[38]) begin
            comp_mem_q_38 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[39]) begin
            comp_mem_q_39 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[40]) begin
            comp_mem_q_40 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[41]) begin
            comp_mem_q_41 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[42]) begin
            comp_mem_q_42 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[43]) begin
            comp_mem_q_43 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[44]) begin
            comp_mem_q_44 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[45]) begin
            comp_mem_q_45 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[46]) begin
            comp_mem_q_46 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[47]) begin
            comp_mem_q_47 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[48]) begin
            comp_mem_q_48 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[49]) begin
            comp_mem_q_49 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[50]) begin
            comp_mem_q_50 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[51]) begin
            comp_mem_q_51 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[52]) begin
            comp_mem_q_52 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[53]) begin
            comp_mem_q_53 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[54]) begin
            comp_mem_q_54 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[55]) begin
            comp_mem_q_55 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[56]) begin
            comp_mem_q_56 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[57]) begin
            comp_mem_q_57 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[58]) begin
            comp_mem_q_58 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[59]) begin
            comp_mem_q_59 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[60]) begin
            comp_mem_q_60 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[61]) begin
            comp_mem_q_61 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[62]) begin
            comp_mem_q_62 <= _zz_comp_mem_q_0[15:0];
          end
        end
        default : begin
          if(_zz_4[0]) begin
            code_mem_q_0 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[1]) begin
            code_mem_q_1 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[2]) begin
            code_mem_q_2 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[3]) begin
            code_mem_q_3 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[4]) begin
            code_mem_q_4 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[5]) begin
            code_mem_q_5 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[6]) begin
            code_mem_q_6 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[7]) begin
            code_mem_q_7 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[8]) begin
            code_mem_q_8 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[9]) begin
            code_mem_q_9 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[10]) begin
            code_mem_q_10 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[11]) begin
            code_mem_q_11 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[12]) begin
            code_mem_q_12 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[13]) begin
            code_mem_q_13 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[14]) begin
            code_mem_q_14 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[15]) begin
            code_mem_q_15 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[16]) begin
            code_mem_q_16 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[17]) begin
            code_mem_q_17 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[18]) begin
            code_mem_q_18 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[19]) begin
            code_mem_q_19 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[20]) begin
            code_mem_q_20 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[21]) begin
            code_mem_q_21 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[22]) begin
            code_mem_q_22 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[23]) begin
            code_mem_q_23 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[24]) begin
            code_mem_q_24 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[25]) begin
            code_mem_q_25 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[26]) begin
            code_mem_q_26 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[27]) begin
            code_mem_q_27 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[28]) begin
            code_mem_q_28 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[29]) begin
            code_mem_q_29 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[30]) begin
            code_mem_q_30 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[31]) begin
            code_mem_q_31 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[32]) begin
            code_mem_q_32 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[33]) begin
            code_mem_q_33 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[34]) begin
            code_mem_q_34 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[35]) begin
            code_mem_q_35 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[36]) begin
            code_mem_q_36 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[37]) begin
            code_mem_q_37 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[38]) begin
            code_mem_q_38 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[39]) begin
            code_mem_q_39 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[40]) begin
            code_mem_q_40 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[41]) begin
            code_mem_q_41 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[42]) begin
            code_mem_q_42 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[43]) begin
            code_mem_q_43 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[44]) begin
            code_mem_q_44 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[45]) begin
            code_mem_q_45 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[46]) begin
            code_mem_q_46 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[47]) begin
            code_mem_q_47 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[48]) begin
            code_mem_q_48 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[49]) begin
            code_mem_q_49 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[50]) begin
            code_mem_q_50 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[51]) begin
            code_mem_q_51 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[52]) begin
            code_mem_q_52 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[53]) begin
            code_mem_q_53 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[54]) begin
            code_mem_q_54 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[55]) begin
            code_mem_q_55 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[56]) begin
            code_mem_q_56 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[57]) begin
            code_mem_q_57 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[58]) begin
            code_mem_q_58 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[59]) begin
            code_mem_q_59 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[60]) begin
            code_mem_q_60 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[61]) begin
            code_mem_q_61 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[62]) begin
            code_mem_q_62 <= _zz_code_mem_q_0[5:0];
          end
          if(_zz_4[63]) begin
            code_mem_q_63 <= _zz_code_mem_q_0[5:0];
          end
        end
      endcase
    end
    if(demod_valid) begin
      case(compTable_i)
        63'h0 : begin
          unit_data_i <= code_mem_i_0;
        end
        63'h0000000000000001 : begin
          unit_data_i <= code_mem_i_1;
        end
        63'h0000000000000003 : begin
          unit_data_i <= code_mem_i_2;
        end
        63'h0000000000000007 : begin
          unit_data_i <= code_mem_i_3;
        end
        63'h000000000000000f : begin
          unit_data_i <= code_mem_i_4;
        end
        63'h000000000000001f : begin
          unit_data_i <= code_mem_i_5;
        end
        63'h000000000000003f : begin
          unit_data_i <= code_mem_i_6;
        end
        63'h000000000000007f : begin
          unit_data_i <= code_mem_i_7;
        end
        63'h00000000000000ff : begin
          unit_data_i <= code_mem_i_8;
        end
        63'h00000000000001ff : begin
          unit_data_i <= code_mem_i_9;
        end
        63'h00000000000003ff : begin
          unit_data_i <= code_mem_i_10;
        end
        63'h00000000000007ff : begin
          unit_data_i <= code_mem_i_11;
        end
        63'h0000000000000fff : begin
          unit_data_i <= code_mem_i_12;
        end
        63'h0000000000001fff : begin
          unit_data_i <= code_mem_i_13;
        end
        63'h0000000000003fff : begin
          unit_data_i <= code_mem_i_14;
        end
        63'h0000000000007fff : begin
          unit_data_i <= code_mem_i_15;
        end
        63'h000000000000ffff : begin
          unit_data_i <= code_mem_i_16;
        end
        63'h000000000001ffff : begin
          unit_data_i <= code_mem_i_17;
        end
        63'h000000000003ffff : begin
          unit_data_i <= code_mem_i_18;
        end
        63'h000000000007ffff : begin
          unit_data_i <= code_mem_i_19;
        end
        63'h00000000000fffff : begin
          unit_data_i <= code_mem_i_20;
        end
        63'h00000000001fffff : begin
          unit_data_i <= code_mem_i_21;
        end
        63'h00000000003fffff : begin
          unit_data_i <= code_mem_i_22;
        end
        63'h00000000007fffff : begin
          unit_data_i <= code_mem_i_23;
        end
        63'h0000000000ffffff : begin
          unit_data_i <= code_mem_i_24;
        end
        63'h0000000001ffffff : begin
          unit_data_i <= code_mem_i_25;
        end
        63'h0000000003ffffff : begin
          unit_data_i <= code_mem_i_26;
        end
        63'h0000000007ffffff : begin
          unit_data_i <= code_mem_i_27;
        end
        63'h000000000fffffff : begin
          unit_data_i <= code_mem_i_28;
        end
        63'h000000001fffffff : begin
          unit_data_i <= code_mem_i_29;
        end
        63'h000000003fffffff : begin
          unit_data_i <= code_mem_i_30;
        end
        63'h000000007fffffff : begin
          unit_data_i <= code_mem_i_31;
        end
        63'h0 : begin
          unit_data_i <= code_mem_i_32;
        end
        63'h0000000000000001 : begin
          unit_data_i <= code_mem_i_33;
        end
        63'h0000000000000003 : begin
          unit_data_i <= code_mem_i_34;
        end
        63'h0000000000000007 : begin
          unit_data_i <= code_mem_i_35;
        end
        63'h000000000000000f : begin
          unit_data_i <= code_mem_i_36;
        end
        63'h000000000000001f : begin
          unit_data_i <= code_mem_i_37;
        end
        63'h000000000000003f : begin
          unit_data_i <= code_mem_i_38;
        end
        63'h000000000000007f : begin
          unit_data_i <= code_mem_i_39;
        end
        63'h00000000000000ff : begin
          unit_data_i <= code_mem_i_40;
        end
        63'h00000000000001ff : begin
          unit_data_i <= code_mem_i_41;
        end
        63'h00000000000003ff : begin
          unit_data_i <= code_mem_i_42;
        end
        63'h00000000000007ff : begin
          unit_data_i <= code_mem_i_43;
        end
        63'h0000000000000fff : begin
          unit_data_i <= code_mem_i_44;
        end
        63'h0000000000001fff : begin
          unit_data_i <= code_mem_i_45;
        end
        63'h0000000000003fff : begin
          unit_data_i <= code_mem_i_46;
        end
        63'h0000000000007fff : begin
          unit_data_i <= code_mem_i_47;
        end
        63'h000000000000ffff : begin
          unit_data_i <= code_mem_i_48;
        end
        63'h000000000001ffff : begin
          unit_data_i <= code_mem_i_49;
        end
        63'h000000000003ffff : begin
          unit_data_i <= code_mem_i_50;
        end
        63'h000000000007ffff : begin
          unit_data_i <= code_mem_i_51;
        end
        63'h00000000000fffff : begin
          unit_data_i <= code_mem_i_52;
        end
        63'h00000000001fffff : begin
          unit_data_i <= code_mem_i_53;
        end
        63'h00000000003fffff : begin
          unit_data_i <= code_mem_i_54;
        end
        63'h00000000007fffff : begin
          unit_data_i <= code_mem_i_55;
        end
        63'h0000000000ffffff : begin
          unit_data_i <= code_mem_i_56;
        end
        63'h0000000001ffffff : begin
          unit_data_i <= code_mem_i_57;
        end
        63'h0000000003ffffff : begin
          unit_data_i <= code_mem_i_58;
        end
        63'h0000000007ffffff : begin
          unit_data_i <= code_mem_i_59;
        end
        63'h000000000fffffff : begin
          unit_data_i <= code_mem_i_60;
        end
        63'h000000001fffffff : begin
          unit_data_i <= code_mem_i_61;
        end
        63'h000000003fffffff : begin
          unit_data_i <= code_mem_i_62;
        end
        63'h000000007fffffff : begin
          unit_data_i <= code_mem_i_63;
        end
        default : begin
        end
      endcase
      case(compTable_q)
        63'h0 : begin
          unit_data_q <= code_mem_q_0;
        end
        63'h0000000000000001 : begin
          unit_data_q <= code_mem_q_1;
        end
        63'h0000000000000003 : begin
          unit_data_q <= code_mem_q_2;
        end
        63'h0000000000000007 : begin
          unit_data_q <= code_mem_q_3;
        end
        63'h000000000000000f : begin
          unit_data_q <= code_mem_q_4;
        end
        63'h000000000000001f : begin
          unit_data_q <= code_mem_q_5;
        end
        63'h000000000000003f : begin
          unit_data_q <= code_mem_q_6;
        end
        63'h000000000000007f : begin
          unit_data_q <= code_mem_q_7;
        end
        63'h00000000000000ff : begin
          unit_data_q <= code_mem_q_8;
        end
        63'h00000000000001ff : begin
          unit_data_q <= code_mem_q_9;
        end
        63'h00000000000003ff : begin
          unit_data_q <= code_mem_q_10;
        end
        63'h00000000000007ff : begin
          unit_data_q <= code_mem_q_11;
        end
        63'h0000000000000fff : begin
          unit_data_q <= code_mem_q_12;
        end
        63'h0000000000001fff : begin
          unit_data_q <= code_mem_q_13;
        end
        63'h0000000000003fff : begin
          unit_data_q <= code_mem_q_14;
        end
        63'h0000000000007fff : begin
          unit_data_q <= code_mem_q_15;
        end
        63'h000000000000ffff : begin
          unit_data_q <= code_mem_q_16;
        end
        63'h000000000001ffff : begin
          unit_data_q <= code_mem_q_17;
        end
        63'h000000000003ffff : begin
          unit_data_q <= code_mem_q_18;
        end
        63'h000000000007ffff : begin
          unit_data_q <= code_mem_q_19;
        end
        63'h00000000000fffff : begin
          unit_data_q <= code_mem_q_20;
        end
        63'h00000000001fffff : begin
          unit_data_q <= code_mem_q_21;
        end
        63'h00000000003fffff : begin
          unit_data_q <= code_mem_q_22;
        end
        63'h00000000007fffff : begin
          unit_data_q <= code_mem_q_23;
        end
        63'h0000000000ffffff : begin
          unit_data_q <= code_mem_q_24;
        end
        63'h0000000001ffffff : begin
          unit_data_q <= code_mem_q_25;
        end
        63'h0000000003ffffff : begin
          unit_data_q <= code_mem_q_26;
        end
        63'h0000000007ffffff : begin
          unit_data_q <= code_mem_q_27;
        end
        63'h000000000fffffff : begin
          unit_data_q <= code_mem_q_28;
        end
        63'h000000001fffffff : begin
          unit_data_q <= code_mem_q_29;
        end
        63'h000000003fffffff : begin
          unit_data_q <= code_mem_q_30;
        end
        63'h000000007fffffff : begin
          unit_data_q <= code_mem_q_31;
        end
        63'h0 : begin
          unit_data_q <= code_mem_q_32;
        end
        63'h0000000000000001 : begin
          unit_data_q <= code_mem_q_33;
        end
        63'h0000000000000003 : begin
          unit_data_q <= code_mem_q_34;
        end
        63'h0000000000000007 : begin
          unit_data_q <= code_mem_q_35;
        end
        63'h000000000000000f : begin
          unit_data_q <= code_mem_q_36;
        end
        63'h000000000000001f : begin
          unit_data_q <= code_mem_q_37;
        end
        63'h000000000000003f : begin
          unit_data_q <= code_mem_q_38;
        end
        63'h000000000000007f : begin
          unit_data_q <= code_mem_q_39;
        end
        63'h00000000000000ff : begin
          unit_data_q <= code_mem_q_40;
        end
        63'h00000000000001ff : begin
          unit_data_q <= code_mem_q_41;
        end
        63'h00000000000003ff : begin
          unit_data_q <= code_mem_q_42;
        end
        63'h00000000000007ff : begin
          unit_data_q <= code_mem_q_43;
        end
        63'h0000000000000fff : begin
          unit_data_q <= code_mem_q_44;
        end
        63'h0000000000001fff : begin
          unit_data_q <= code_mem_q_45;
        end
        63'h0000000000003fff : begin
          unit_data_q <= code_mem_q_46;
        end
        63'h0000000000007fff : begin
          unit_data_q <= code_mem_q_47;
        end
        63'h000000000000ffff : begin
          unit_data_q <= code_mem_q_48;
        end
        63'h000000000001ffff : begin
          unit_data_q <= code_mem_q_49;
        end
        63'h000000000003ffff : begin
          unit_data_q <= code_mem_q_50;
        end
        63'h000000000007ffff : begin
          unit_data_q <= code_mem_q_51;
        end
        63'h00000000000fffff : begin
          unit_data_q <= code_mem_q_52;
        end
        63'h00000000001fffff : begin
          unit_data_q <= code_mem_q_53;
        end
        63'h00000000003fffff : begin
          unit_data_q <= code_mem_q_54;
        end
        63'h00000000007fffff : begin
          unit_data_q <= code_mem_q_55;
        end
        63'h0000000000ffffff : begin
          unit_data_q <= code_mem_q_56;
        end
        63'h0000000001ffffff : begin
          unit_data_q <= code_mem_q_57;
        end
        63'h0000000003ffffff : begin
          unit_data_q <= code_mem_q_58;
        end
        63'h0000000007ffffff : begin
          unit_data_q <= code_mem_q_59;
        end
        63'h000000000fffffff : begin
          unit_data_q <= code_mem_q_60;
        end
        63'h000000001fffffff : begin
          unit_data_q <= code_mem_q_61;
        end
        63'h000000003fffffff : begin
          unit_data_q <= code_mem_q_62;
        end
        63'h000000007fffffff : begin
          unit_data_q <= code_mem_q_63;
        end
        default : begin
        end
      endcase
    end else begin
      unit_data_i <= 6'h0;
      unit_data_q <= 6'h0;
    end
  end


endmodule

module IQDemod_3 (
  output              unit_data_valid,
  output     [11:0]   unit_data_payload,
  input               mod_iq_valid,
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [15:0]   _zz_comp_cmp_i;
  wire       [15:0]   _zz_comp_cmp_q;
  wire       [15:0]   _zz_comp_cmp_i_1;
  wire       [15:0]   _zz_comp_cmp_q_1;
  wire       [15:0]   _zz_comp_cmp_i_2;
  wire       [15:0]   _zz_comp_cmp_q_2;
  wire       [15:0]   _zz_comp_cmp_i_3;
  wire       [15:0]   _zz_comp_cmp_q_3;
  wire       [15:0]   _zz_comp_cmp_i_4;
  wire       [15:0]   _zz_comp_cmp_q_4;
  wire       [5:0]    _zz_unit_data_payload;
  reg        [15:0]   demod_data_i;
  reg                 demod_valid_i;
  reg        [15:0]   demod_data_q;
  reg                 demod_valid_q;
  reg        [4:0]    comp_cmp_i;
  reg        [4:0]    comp_cmp_q;
  reg        [4:0]    compTable_i;
  reg        [4:0]    codeTable_q;
  reg                 demod_valid;
  reg        [2:0]    unit_data_i;
  reg        [2:0]    unit_data_q;
  reg                 unit_valid;

  assign _zz_comp_cmp_i = 16'hc4c0;
  assign _zz_comp_cmp_q = 16'hc4c0;
  assign _zz_comp_cmp_i_1 = 16'hd880;
  assign _zz_comp_cmp_q_1 = 16'hd880;
  assign _zz_comp_cmp_i_2 = 16'hec40;
  assign _zz_comp_cmp_q_2 = 16'hec40;
  assign _zz_comp_cmp_i_3 = 16'h0;
  assign _zz_comp_cmp_q_3 = 16'h0;
  assign _zz_comp_cmp_i_4 = 16'h13c0;
  assign _zz_comp_cmp_q_4 = 16'h13c0;
  assign _zz_unit_data_payload = {unit_data_i,unit_data_q};
  always @(*) begin
    comp_cmp_i[0] = ($signed(_zz_comp_cmp_i) < $signed(demod_data_i));
    comp_cmp_i[1] = ($signed(_zz_comp_cmp_i_1) < $signed(demod_data_i));
    comp_cmp_i[2] = ($signed(_zz_comp_cmp_i_2) < $signed(demod_data_i));
    comp_cmp_i[3] = ($signed(_zz_comp_cmp_i_3) < $signed(demod_data_i));
    comp_cmp_i[4] = ($signed(_zz_comp_cmp_i_4) < $signed(demod_data_i));
  end

  always @(*) begin
    comp_cmp_q[0] = ($signed(_zz_comp_cmp_q) < $signed(demod_data_q));
    comp_cmp_q[1] = ($signed(_zz_comp_cmp_q_1) < $signed(demod_data_q));
    comp_cmp_q[2] = ($signed(_zz_comp_cmp_q_2) < $signed(demod_data_q));
    comp_cmp_q[3] = ($signed(_zz_comp_cmp_q_3) < $signed(demod_data_q));
    comp_cmp_q[4] = ($signed(_zz_comp_cmp_q_4) < $signed(demod_data_q));
  end

  assign unit_data_payload = {6'd0, _zz_unit_data_payload};
  assign unit_data_valid = unit_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      demod_data_i <= 16'h0;
      demod_valid_i <= 1'b0;
      demod_data_q <= 16'h0;
      demod_valid_q <= 1'b0;
      compTable_i <= 5'h0;
      codeTable_q <= 5'h0;
      demod_valid <= 1'b0;
      unit_valid <= 1'b0;
    end else begin
      demod_data_i <= mod_iq_payload_cha_i;
      demod_valid_i <= mod_iq_valid;
      demod_data_q <= mod_iq_payload_cha_q;
      demod_valid_q <= mod_iq_valid;
      compTable_i <= comp_cmp_i;
      codeTable_q <= comp_cmp_q;
      demod_valid <= (demod_valid_i && demod_valid_q);
      if(demod_valid) begin
        unit_valid <= 1'b1;
      end else begin
        unit_valid <= 1'b0;
      end
    end
  end

  always @(posedge rf_clk) begin
    if(demod_valid) begin
      case(compTable_i)
        5'h0 : begin
          unit_data_i <= 3'b000;
        end
        5'h01 : begin
          unit_data_i <= 3'b001;
        end
        5'h03 : begin
          unit_data_i <= 3'b010;
        end
        5'h07 : begin
          unit_data_i <= 3'b011;
        end
        5'h0f : begin
          unit_data_i <= 3'b100;
        end
        5'h1f : begin
          unit_data_i <= 3'b101;
        end
        default : begin
        end
      endcase
      case(codeTable_q)
        5'h0 : begin
          unit_data_q <= 3'b000;
        end
        5'h01 : begin
          unit_data_q <= 3'b001;
        end
        5'h03 : begin
          unit_data_q <= 3'b010;
        end
        5'h07 : begin
          unit_data_q <= 3'b011;
        end
        5'h0f : begin
          unit_data_q <= 3'b100;
        end
        5'h1f : begin
          unit_data_q <= 3'b101;
        end
        default : begin
        end
      endcase
    end else begin
      unit_data_i <= 3'b000;
      unit_data_q <= 3'b000;
    end
  end


endmodule

module IQDemod_2 (
  output              unit_data_valid,
  output     [11:0]   unit_data_payload,
  input               mod_iq_valid,
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [15:0]   _zz_comp_cmp_i;
  wire       [15:0]   _zz_comp_cmp_q;
  wire       [15:0]   _zz_comp_cmp_i_1;
  wire       [15:0]   _zz_comp_cmp_q_1;
  wire       [15:0]   _zz_comp_cmp_i_2;
  wire       [15:0]   _zz_comp_cmp_q_2;
  wire       [3:0]    _zz_unit_data_payload;
  reg        [15:0]   demod_data_i;
  reg                 demod_valid_i;
  reg        [15:0]   demod_data_q;
  reg                 demod_valid_q;
  reg        [2:0]    comp_cmp_i;
  reg        [2:0]    comp_cmp_q;
  reg        [2:0]    compTable_i;
  reg        [2:0]    codeTable_q;
  reg                 demod_valid;
  reg        [1:0]    unit_data_i;
  reg        [1:0]    unit_data_q;
  reg                 unit_valid;

  assign _zz_comp_cmp_i = 16'hd786;
  assign _zz_comp_cmp_q = 16'hd786;
  assign _zz_comp_cmp_i_1 = 16'hffff;
  assign _zz_comp_cmp_q_1 = 16'hffff;
  assign _zz_comp_cmp_i_2 = 16'h2879;
  assign _zz_comp_cmp_q_2 = 16'h2879;
  assign _zz_unit_data_payload = {unit_data_i,unit_data_q};
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

  assign unit_data_payload = {8'd0, _zz_unit_data_payload};
  assign unit_data_valid = unit_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      demod_data_i <= 16'h0;
      demod_valid_i <= 1'b0;
      demod_data_q <= 16'h0;
      demod_valid_q <= 1'b0;
      compTable_i <= 3'b000;
      codeTable_q <= 3'b000;
      demod_valid <= 1'b0;
      unit_valid <= 1'b0;
    end else begin
      demod_data_i <= mod_iq_payload_cha_i;
      demod_valid_i <= mod_iq_valid;
      demod_data_q <= mod_iq_payload_cha_q;
      demod_valid_q <= mod_iq_valid;
      compTable_i <= comp_cmp_i;
      codeTable_q <= comp_cmp_q;
      demod_valid <= (demod_valid_i && demod_valid_q);
      if(demod_valid) begin
        unit_valid <= 1'b1;
      end else begin
        unit_valid <= 1'b0;
      end
    end
  end

  always @(posedge rf_clk) begin
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
  output     [11:0]   unit_data_payload,
  input               mod_iq_valid,
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [15:0]   _zz_comp_cmp_i;
  wire       [15:0]   _zz_comp_cmp_q;
  wire       [1:0]    _zz_unit_data_payload;
  reg        [15:0]   demod_data_i;
  reg                 demod_valid_i;
  reg        [15:0]   demod_data_q;
  reg                 demod_valid_q;
  wire       [0:0]    comp_cmp_i;
  wire       [0:0]    comp_cmp_q;
  reg        [0:0]    compTable_i;
  reg        [0:0]    codeTable_q;
  reg                 demod_valid;
  reg        [0:0]    unit_data_i;
  reg        [0:0]    unit_data_q;
  reg                 unit_valid;

  assign _zz_comp_cmp_i = 16'h0;
  assign _zz_comp_cmp_q = 16'h0;
  assign _zz_unit_data_payload = {unit_data_i,unit_data_q};
  assign comp_cmp_i[0] = ($signed(_zz_comp_cmp_i) < $signed(demod_data_i));
  assign comp_cmp_q[0] = ($signed(_zz_comp_cmp_q) < $signed(demod_data_q));
  assign unit_data_payload = {10'd0, _zz_unit_data_payload};
  assign unit_data_valid = unit_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      demod_data_i <= 16'h0;
      demod_valid_i <= 1'b0;
      demod_data_q <= 16'h0;
      demod_valid_q <= 1'b0;
      compTable_i <= 1'b0;
      codeTable_q <= 1'b0;
      demod_valid <= 1'b0;
      unit_valid <= 1'b0;
    end else begin
      demod_data_i <= mod_iq_payload_cha_i;
      demod_valid_i <= mod_iq_valid;
      demod_data_q <= mod_iq_payload_cha_q;
      demod_valid_q <= mod_iq_valid;
      compTable_i <= comp_cmp_i;
      codeTable_q <= comp_cmp_q;
      demod_valid <= (demod_valid_i && demod_valid_q);
      if(demod_valid) begin
        unit_valid <= 1'b1;
      end else begin
        unit_valid <= 1'b0;
      end
    end
  end

  always @(posedge rf_clk) begin
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
  output     [11:0]   unit_data_payload,
  input               mod_iq_valid,
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [15:0]   _zz_comp_cmp_i;
  reg        [15:0]   demod_data_i;
  reg                 demod_valid_i;
  wire       [0:0]    comp_cmp_i;
  reg        [0:0]    compTable_i;
  reg                 demod_valid;
  reg        [0:0]    unit_data_i;
  reg                 unit_valid;

  assign _zz_comp_cmp_i = 16'h0;
  assign comp_cmp_i[0] = ($signed(_zz_comp_cmp_i) < $signed(demod_data_i));
  assign unit_data_payload = {11'd0, unit_data_i};
  assign unit_data_valid = unit_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      demod_data_i <= 16'h0;
      demod_valid_i <= 1'b0;
      compTable_i <= 1'b0;
      unit_valid <= 1'b0;
    end else begin
      demod_data_i <= mod_iq_payload_cha_i;
      demod_valid_i <= mod_iq_valid;
      compTable_i <= comp_cmp_i;
      if(demod_valid) begin
        unit_valid <= 1'b1;
      end else begin
        unit_valid <= 1'b0;
      end
    end
  end

  always @(posedge rf_clk) begin
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
  input      [15:0]   input_payload_cha_i,
  input      [15:0]   input_payload_cha_q,
  input      [2:0]    select_1,
  output reg          outputs_0_valid,
  output reg [15:0]   outputs_0_payload_cha_i,
  output reg [15:0]   outputs_0_payload_cha_q,
  output reg          outputs_1_valid,
  output reg [15:0]   outputs_1_payload_cha_i,
  output reg [15:0]   outputs_1_payload_cha_q,
  output reg          outputs_2_valid,
  output reg [15:0]   outputs_2_payload_cha_i,
  output reg [15:0]   outputs_2_payload_cha_q,
  output reg          outputs_3_valid,
  output reg [15:0]   outputs_3_payload_cha_i,
  output reg [15:0]   outputs_3_payload_cha_q,
  output reg          outputs_4_valid,
  output reg [15:0]   outputs_4_payload_cha_i,
  output reg [15:0]   outputs_4_payload_cha_q
);
  wire                when_FlowDeMux_l15;
  wire                when_FlowDeMux_l15_1;
  wire                when_FlowDeMux_l15_2;
  wire                when_FlowDeMux_l15_3;
  wire                when_FlowDeMux_l15_4;

  assign when_FlowDeMux_l15 = (3'b000 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15) begin
      outputs_0_valid = 1'b0;
    end else begin
      outputs_0_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15) begin
      outputs_0_payload_cha_i = 16'h0;
    end else begin
      outputs_0_payload_cha_i = input_payload_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15) begin
      outputs_0_payload_cha_q = 16'h0;
    end else begin
      outputs_0_payload_cha_q = input_payload_cha_q;
    end
  end

  assign when_FlowDeMux_l15_1 = (3'b001 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15_1) begin
      outputs_1_valid = 1'b0;
    end else begin
      outputs_1_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_1) begin
      outputs_1_payload_cha_i = 16'h0;
    end else begin
      outputs_1_payload_cha_i = input_payload_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_1) begin
      outputs_1_payload_cha_q = 16'h0;
    end else begin
      outputs_1_payload_cha_q = input_payload_cha_q;
    end
  end

  assign when_FlowDeMux_l15_2 = (3'b010 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15_2) begin
      outputs_2_valid = 1'b0;
    end else begin
      outputs_2_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_2) begin
      outputs_2_payload_cha_i = 16'h0;
    end else begin
      outputs_2_payload_cha_i = input_payload_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_2) begin
      outputs_2_payload_cha_q = 16'h0;
    end else begin
      outputs_2_payload_cha_q = input_payload_cha_q;
    end
  end

  assign when_FlowDeMux_l15_3 = (3'b011 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15_3) begin
      outputs_3_valid = 1'b0;
    end else begin
      outputs_3_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_3) begin
      outputs_3_payload_cha_i = 16'h0;
    end else begin
      outputs_3_payload_cha_i = input_payload_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_3) begin
      outputs_3_payload_cha_q = 16'h0;
    end else begin
      outputs_3_payload_cha_q = input_payload_cha_q;
    end
  end

  assign when_FlowDeMux_l15_4 = (3'b100 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15_4) begin
      outputs_4_valid = 1'b0;
    end else begin
      outputs_4_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_4) begin
      outputs_4_payload_cha_i = 16'h0;
    end else begin
      outputs_4_payload_cha_i = input_payload_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_4) begin
      outputs_4_payload_cha_q = 16'h0;
    end else begin
      outputs_4_payload_cha_q = input_payload_cha_q;
    end
  end


endmodule
