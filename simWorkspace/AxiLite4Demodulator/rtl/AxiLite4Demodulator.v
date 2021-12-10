// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4Demodulator
// Git hash  : 0d864d28435071412e1d4f9bb5a89da4be9b29a7



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
  input      [11:0]   mod_iq_payload_cha_i,
  input      [11:0]   mod_iq_payload_cha_q,
  output              base_data_valid,
  output     [23:0]   base_data_payload,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               reset
);
  wire                rfClockArea_demod_rtl_data_flow_unit_data_valid;
  wire       [23:0]   rfClockArea_demod_rtl_data_flow_unit_data_payload;
  wire                rfClockArea_data_combination_base_data_valid;
  wire       [23:0]   rfClockArea_data_combination_base_data_payload;
  wire       [1:0]    clkCrossing_4_dataOut;
  wire                clkCrossing_5_dataOut;
  wire       [4:0]    clkCrossing_6_dataOut;
  wire       [4:0]    clkCrossing_7_dataOut;
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
  wire       [1:0]    demod_rtl_bridge_select;
  reg        [1:0]    _zz_demod_rtl_bridge_select;
  wire                data_comb_bridge_enable;
  wire       [4:0]    data_comb_bridge_cnt_step;
  wire       [4:0]    data_comb_bridge_cnt_limit;
  reg                 data_comb_bridge_enable_driver;
  reg        [4:0]    data_comb_bridge_cnt_step_driver;
  reg        [4:0]    data_comb_bridge_cnt_limit_driver;

  DemodulatorRTL rfClockArea_demod_rtl (
    .select_1                          (clkCrossing_4_dataOut                              ), //i
    .data_flow_unit_data_valid         (rfClockArea_demod_rtl_data_flow_unit_data_valid    ), //o
    .data_flow_unit_data_payload       (rfClockArea_demod_rtl_data_flow_unit_data_payload  ), //o
    .data_flow_mod_iq_valid            (mod_iq_valid                                       ), //i
    .data_flow_mod_iq_payload_cha_i    (mod_iq_payload_cha_i                               ), //i
    .data_flow_mod_iq_payload_cha_q    (mod_iq_payload_cha_q                               ), //i
    .rf_clk                            (rf_clk                                             ), //i
    .rf_resetn                         (rf_resetn                                          )  //i
  );
  dataCombination rfClockArea_data_combination (
    .unit_data_valid      (_zz_unit_data_valid                                ), //i
    .unit_data_payload    (rfClockArea_demod_rtl_data_flow_unit_data_payload  ), //i
    .base_data_valid      (rfClockArea_data_combination_base_data_valid       ), //o
    .base_data_payload    (rfClockArea_data_combination_base_data_payload     ), //o
    .enable               (clkCrossing_5_dataOut                              ), //i
    .cnt_step             (clkCrossing_6_dataOut                              ), //i
    .cnt_limit            (clkCrossing_7_dataOut                              ), //i
    .rf_clk               (rf_clk                                             ), //i
    .rf_resetn            (rf_resetn                                          )  //i
  );
  ClkCrossing clkCrossing_4 (
    .dataIn       (demod_rtl_bridge_select  ), //i
    .dataOut      (clkCrossing_4_dataOut    ), //o
    .clk          (clk                      ), //i
    .reset        (reset                    ), //i
    .rf_clk       (rf_clk                   ), //i
    .rf_resetn    (rf_resetn                )  //i
  );
  ClkCrossing_1 clkCrossing_5 (
    .dataIn       (data_comb_bridge_enable  ), //i
    .dataOut      (clkCrossing_5_dataOut    ), //o
    .clk          (clk                      ), //i
    .reset        (reset                    ), //i
    .rf_clk       (rf_clk                   ), //i
    .rf_resetn    (rf_resetn                )  //i
  );
  ClkCrossing_2 clkCrossing_6 (
    .dataIn       (data_comb_bridge_cnt_step  ), //i
    .dataOut      (clkCrossing_6_dataOut      ), //o
    .clk          (clk                        ), //i
    .reset        (reset                      ), //i
    .rf_clk       (rf_clk                     ), //i
    .rf_resetn    (rf_resetn                  )  //i
  );
  ClkCrossing_2 clkCrossing_7 (
    .dataIn       (data_comb_bridge_cnt_limit  ), //i
    .dataOut      (clkCrossing_7_dataOut       ), //o
    .clk          (clk                         ), //i
    .reset        (reset                       ), //i
    .rf_clk       (rf_clk                      ), //i
    .rf_resetn    (rf_resetn                   )  //i
  );
  assign _zz_unit_data_valid = rfClockArea_demod_rtl_data_flow_unit_data_valid;
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
  assign demod_rtl_bridge_select = _zz_demod_rtl_bridge_select;
  assign data_comb_bridge_enable = data_comb_bridge_enable_driver;
  assign data_comb_bridge_cnt_step = data_comb_bridge_cnt_step_driver;
  assign data_comb_bridge_cnt_limit = data_comb_bridge_cnt_limit_driver;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      _zz_demod_rtl_bridge_select <= 2'b00;
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
        8'h10 : begin
          if(writeOccur) begin
            _zz_demod_rtl_bridge_select <= axil4Ctrl_wdata[1 : 0];
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

//ClkCrossing_2 replaced by ClkCrossing_2

module ClkCrossing_2 (
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

module ClkCrossing_1 (
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

module ClkCrossing (
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
        end
      end
    end
  end


endmodule

module DemodulatorRTL (
  input      [1:0]    select_1,
  output              data_flow_unit_data_valid,
  output     [23:0]   data_flow_unit_data_payload,
  input               data_flow_mod_iq_valid,
  input      [11:0]   data_flow_mod_iq_payload_cha_i,
  input      [11:0]   data_flow_mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire                flowDeMux_1_outputs_0_valid;
  wire       [11:0]   flowDeMux_1_outputs_0_payload_cha_i;
  wire       [11:0]   flowDeMux_1_outputs_0_payload_cha_q;
  wire                flowDeMux_1_outputs_1_valid;
  wire       [11:0]   flowDeMux_1_outputs_1_payload_cha_i;
  wire       [11:0]   flowDeMux_1_outputs_1_payload_cha_q;
  wire                flowDeMux_1_outputs_2_valid;
  wire       [11:0]   flowDeMux_1_outputs_2_payload_cha_i;
  wire       [11:0]   flowDeMux_1_outputs_2_payload_cha_q;
  wire                demod_unit_data_valid;
  wire       [23:0]   demod_unit_data_payload;
  wire                demod_1_unit_data_valid;
  wire       [23:0]   demod_1_unit_data_payload;
  wire                demod_2_unit_data_valid;
  wire       [23:0]   demod_2_unit_data_payload;
  wire                flowMux_1_output_valid;
  wire       [23:0]   flowMux_1_output_payload;

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
    .outputs_2_payload_cha_q    (flowDeMux_1_outputs_2_payload_cha_q  )  //o
  );
  IQDemod demod (
    .unit_data_valid         (demod_unit_data_valid                ), //o
    .unit_data_payload       (demod_unit_data_payload              ), //o
    .mod_iq_valid            (flowDeMux_1_outputs_0_valid          ), //i
    .mod_iq_payload_cha_i    (flowDeMux_1_outputs_0_payload_cha_i  ), //i
    .mod_iq_payload_cha_q    (flowDeMux_1_outputs_0_payload_cha_q  ), //i
    .rf_clk                  (rf_clk                               ), //i
    .rf_resetn               (rf_resetn                            )  //i
  );
  IQDemod_1 demod_1 (
    .unit_data_valid         (demod_1_unit_data_valid              ), //o
    .unit_data_payload       (demod_1_unit_data_payload            ), //o
    .mod_iq_valid            (flowDeMux_1_outputs_1_valid          ), //i
    .mod_iq_payload_cha_i    (flowDeMux_1_outputs_1_payload_cha_i  ), //i
    .mod_iq_payload_cha_q    (flowDeMux_1_outputs_1_payload_cha_q  ), //i
    .rf_clk                  (rf_clk                               ), //i
    .rf_resetn               (rf_resetn                            )  //i
  );
  IQDemod_2 demod_2 (
    .unit_data_valid         (demod_2_unit_data_valid              ), //o
    .unit_data_payload       (demod_2_unit_data_payload            ), //o
    .mod_iq_valid            (flowDeMux_1_outputs_2_valid          ), //i
    .mod_iq_payload_cha_i    (flowDeMux_1_outputs_2_payload_cha_i  ), //i
    .mod_iq_payload_cha_q    (flowDeMux_1_outputs_2_payload_cha_q  ), //i
    .rf_clk                  (rf_clk                               ), //i
    .rf_resetn               (rf_resetn                            )  //i
  );
  FlowMux flowMux_1 (
    .inputs_0_valid      (demod_unit_data_valid      ), //i
    .inputs_0_payload    (demod_unit_data_payload    ), //i
    .inputs_1_valid      (demod_1_unit_data_valid    ), //i
    .inputs_1_payload    (demod_1_unit_data_payload  ), //i
    .inputs_2_valid      (demod_2_unit_data_valid    ), //i
    .inputs_2_payload    (demod_2_unit_data_payload  ), //i
    .select_1            (select_1                   ), //i
    .output_valid        (flowMux_1_output_valid     ), //o
    .output_payload      (flowMux_1_output_payload   )  //o
  );
  assign data_flow_unit_data_valid = flowMux_1_output_valid;
  assign data_flow_unit_data_payload = flowMux_1_output_payload;

endmodule

module FlowMux (
  input               inputs_0_valid,
  input      [23:0]   inputs_0_payload,
  input               inputs_1_valid,
  input      [23:0]   inputs_1_payload,
  input               inputs_2_valid,
  input      [23:0]   inputs_2_payload,
  input      [1:0]    select_1,
  output              output_valid,
  output     [23:0]   output_payload
);
  reg                 _zz_output_valid;
  reg        [23:0]   _zz_output_payload;

  always @(*) begin
    case(select_1)
      2'b00 : begin
        _zz_output_valid = inputs_0_valid;
        _zz_output_payload = inputs_0_payload;
      end
      2'b01 : begin
        _zz_output_valid = inputs_1_valid;
        _zz_output_payload = inputs_1_payload;
      end
      default : begin
        _zz_output_valid = inputs_2_valid;
        _zz_output_payload = inputs_2_payload;
      end
    endcase
  end

  assign output_valid = _zz_output_valid;
  assign output_payload = _zz_output_payload;

endmodule

module IQDemod_2 (
  output              unit_data_valid,
  output     [23:0]   unit_data_payload,
  input               mod_iq_valid,
  input      [11:0]   mod_iq_payload_cha_i,
  input      [11:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [11:0]   _zz_comp_cmp_i;
  wire       [11:0]   _zz_comp_cmp_q;
  wire       [11:0]   _zz_comp_cmp_i_1;
  wire       [11:0]   _zz_comp_cmp_q_1;
  wire       [11:0]   _zz_comp_cmp_i_2;
  wire       [11:0]   _zz_comp_cmp_q_2;
  wire       [3:0]    _zz_unit_data_payload;
  reg        [11:0]   demod_data_i;
  reg                 demod_valid_i;
  reg        [11:0]   demod_data_q;
  reg                 demod_valid_q;
  reg        [2:0]    comp_cmp_i;
  reg        [2:0]    comp_cmp_q;
  reg        [2:0]    compTable_i;
  reg        [2:0]    codeTable_q;
  reg                 demod_valid;
  reg        [1:0]    unit_data_i;
  reg        [1:0]    unit_data_q;
  reg                 unit_valid;

  assign _zz_comp_cmp_i = 12'hd78;
  assign _zz_comp_cmp_q = 12'hd78;
  assign _zz_comp_cmp_i_1 = 12'hfff;
  assign _zz_comp_cmp_q_1 = 12'hfff;
  assign _zz_comp_cmp_i_2 = 12'h286;
  assign _zz_comp_cmp_q_2 = 12'h286;
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

  assign unit_data_payload = {20'd0, _zz_unit_data_payload};
  assign unit_data_valid = unit_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      demod_data_i <= 12'h0;
      demod_valid_i <= 1'b0;
      demod_data_q <= 12'h0;
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
  output     [23:0]   unit_data_payload,
  input               mod_iq_valid,
  input      [11:0]   mod_iq_payload_cha_i,
  input      [11:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [11:0]   _zz_comp_cmp_i;
  wire       [11:0]   _zz_comp_cmp_q;
  wire       [1:0]    _zz_unit_data_payload;
  reg        [11:0]   demod_data_i;
  reg                 demod_valid_i;
  reg        [11:0]   demod_data_q;
  reg                 demod_valid_q;
  wire       [0:0]    comp_cmp_i;
  wire       [0:0]    comp_cmp_q;
  reg        [0:0]    compTable_i;
  reg        [0:0]    codeTable_q;
  reg                 demod_valid;
  reg        [0:0]    unit_data_i;
  reg        [0:0]    unit_data_q;
  reg                 unit_valid;

  assign _zz_comp_cmp_i = 12'h0;
  assign _zz_comp_cmp_q = 12'h0;
  assign _zz_unit_data_payload = {unit_data_i,unit_data_q};
  assign comp_cmp_i[0] = ($signed(_zz_comp_cmp_i) < $signed(demod_data_i));
  assign comp_cmp_q[0] = ($signed(_zz_comp_cmp_q) < $signed(demod_data_q));
  assign unit_data_payload = {22'd0, _zz_unit_data_payload};
  assign unit_data_valid = unit_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      demod_data_i <= 12'h0;
      demod_valid_i <= 1'b0;
      demod_data_q <= 12'h0;
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
  output     [23:0]   unit_data_payload,
  input               mod_iq_valid,
  input      [11:0]   mod_iq_payload_cha_i,
  input      [11:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [11:0]   _zz_comp_cmp_i;
  reg        [11:0]   demod_data_i;
  reg                 demod_valid_i;
  wire       [0:0]    comp_cmp_i;
  reg        [0:0]    compTable_i;
  reg                 demod_valid;
  reg        [0:0]    unit_data_i;
  reg                 unit_valid;

  assign _zz_comp_cmp_i = 12'h0;
  assign comp_cmp_i[0] = ($signed(_zz_comp_cmp_i) < $signed(demod_data_i));
  assign unit_data_payload = {23'd0, unit_data_i};
  assign unit_data_valid = unit_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      demod_data_i <= 12'h0;
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
  input      [11:0]   input_payload_cha_i,
  input      [11:0]   input_payload_cha_q,
  input      [1:0]    select_1,
  output reg          outputs_0_valid,
  output reg [11:0]   outputs_0_payload_cha_i,
  output reg [11:0]   outputs_0_payload_cha_q,
  output reg          outputs_1_valid,
  output reg [11:0]   outputs_1_payload_cha_i,
  output reg [11:0]   outputs_1_payload_cha_q,
  output reg          outputs_2_valid,
  output reg [11:0]   outputs_2_payload_cha_i,
  output reg [11:0]   outputs_2_payload_cha_q
);
  wire                when_FlowDeMux_l15;
  wire                when_FlowDeMux_l15_1;
  wire                when_FlowDeMux_l15_2;

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
      outputs_0_payload_cha_i = 12'h0;
    end else begin
      outputs_0_payload_cha_i = input_payload_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15) begin
      outputs_0_payload_cha_q = 12'h0;
    end else begin
      outputs_0_payload_cha_q = input_payload_cha_q;
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
      outputs_1_payload_cha_i = 12'h0;
    end else begin
      outputs_1_payload_cha_i = input_payload_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_1) begin
      outputs_1_payload_cha_q = 12'h0;
    end else begin
      outputs_1_payload_cha_q = input_payload_cha_q;
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
      outputs_2_payload_cha_i = 12'h0;
    end else begin
      outputs_2_payload_cha_i = input_payload_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_2) begin
      outputs_2_payload_cha_q = 12'h0;
    end else begin
      outputs_2_payload_cha_q = input_payload_cha_q;
    end
  end


endmodule
