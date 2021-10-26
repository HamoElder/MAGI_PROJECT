// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4IQDemixer



module AxiLite4IQDemixer (
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
  input               if_iq_0_valid,
  input      [31:0]   if_iq_0_payload,
  input               carries_iq_valid,
  input      [15:0]   carries_iq_payload_cha_i,
  input      [15:0]   carries_iq_payload_cha_q,
  output              base_iq_0_valid,
  output     [7:0]    base_iq_0_payload_cha_i,
  output     [7:0]    base_iq_0_payload_cha_q,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               resetn
);
  wire                rfClockArea_demixer_module_base_iq_0_valid;
  wire       [7:0]    rfClockArea_demixer_module_base_iq_0_payload_cha_i;
  wire       [7:0]    rfClockArea_demixer_module_base_iq_0_payload_cha_q;
  wire                rfClockArea_carrier_power_adjustor_adjusted_data_valid;
  wire       [15:0]   rfClockArea_carrier_power_adjustor_adjusted_data_payload_cha_i;
  wire       [15:0]   rfClockArea_carrier_power_adjustor_adjusted_data_payload_cha_q;
  wire       [2:0]    clkCrossing_2_dataOut;
  wire                clkCrossing_3_dataOut;
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
  wire       [2:0]    __shift_bias;
  wire                __shift_dir;
  reg        [2:0]    __shift_bias_driver;
  reg                 __shift_dir_driver;

  IQDemixer rfClockArea_demixer_module (
    .if_iq_0_valid               (if_iq_0_valid                                                   ), //i
    .if_iq_0_payload             (if_iq_0_payload                                                 ), //i
    .carries_iq_valid            (rfClockArea_carrier_power_adjustor_adjusted_data_valid          ), //i
    .carries_iq_payload_cha_i    (rfClockArea_carrier_power_adjustor_adjusted_data_payload_cha_i  ), //i
    .carries_iq_payload_cha_q    (rfClockArea_carrier_power_adjustor_adjusted_data_payload_cha_q  ), //i
    .base_iq_0_valid             (rfClockArea_demixer_module_base_iq_0_valid                      ), //o
    .base_iq_0_payload_cha_i     (rfClockArea_demixer_module_base_iq_0_payload_cha_i              ), //o
    .base_iq_0_payload_cha_q     (rfClockArea_demixer_module_base_iq_0_payload_cha_q              ), //o
    .rf_clk                      (rf_clk                                                          ), //i
    .rf_resetn                   (rf_resetn                                                       )  //i
  );
  PowerAdjustor rfClockArea_carrier_power_adjustor (
    .raw_data_valid                 (carries_iq_valid                                                ), //i
    .raw_data_payload_cha_i         (carries_iq_payload_cha_i                                        ), //i
    .raw_data_payload_cha_q         (carries_iq_payload_cha_q                                        ), //i
    .adjusted_data_valid            (rfClockArea_carrier_power_adjustor_adjusted_data_valid          ), //o
    .adjusted_data_payload_cha_i    (rfClockArea_carrier_power_adjustor_adjusted_data_payload_cha_i  ), //o
    .adjusted_data_payload_cha_q    (rfClockArea_carrier_power_adjustor_adjusted_data_payload_cha_q  ), //o
    .shift_bias                     (clkCrossing_2_dataOut                                           ), //i
    .shift_dir                      (clkCrossing_3_dataOut                                           ), //i
    .rf_clk                         (rf_clk                                                          ), //i
    .rf_resetn                      (rf_resetn                                                       )  //i
  );
  ClkCrossing clkCrossing_2 (
    .dataIn       (__shift_bias           ), //i
    .dataOut      (clkCrossing_2_dataOut  ), //o
    .clk          (clk                    ), //i
    .resetn       (resetn                 ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  ClkCrossing_1 clkCrossing_3 (
    .dataIn       (__shift_dir            ), //i
    .dataOut      (clkCrossing_3_dataOut  ), //o
    .clk          (clk                    ), //i
    .resetn       (resetn                 ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  assign base_iq_0_valid = rfClockArea_demixer_module_base_iq_0_valid;
  assign base_iq_0_payload_cha_i = rfClockArea_demixer_module_base_iq_0_payload_cha_i;
  assign base_iq_0_payload_cha_q = rfClockArea_demixer_module_base_iq_0_payload_cha_q;
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
        readRsp_data[2 : 0] = __shift_bias_driver;
      end
      8'h04 : begin
        readRsp_data[0 : 0] = __shift_dir_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign __shift_bias = __shift_bias_driver;
  assign __shift_dir = __shift_dir_driver;
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      __shift_bias_driver <= 3'b000;
      __shift_dir_driver <= 1'b0;
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
            __shift_bias_driver <= axil4Ctrl_wdata[2 : 0];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            __shift_dir_driver <= axil4Ctrl_wdata[0];
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

module ClkCrossing_1 (
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

module ClkCrossing (
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

module PowerAdjustor (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_cha_i,
  input      [15:0]   raw_data_payload_cha_q,
  output reg          adjusted_data_valid,
  output     [15:0]   adjusted_data_payload_cha_i,
  output     [15:0]   adjusted_data_payload_cha_q,
  input      [2:0]    shift_bias,
  input               shift_dir,
  input               rf_clk,
  input               rf_resetn
);
  reg        [15:0]   shifted_data_cha_i;
  reg        [15:0]   shifted_data_cha_q;

  always @(*) begin
    if(raw_data_valid) begin
      adjusted_data_valid = 1'b1;
    end else begin
      adjusted_data_valid = 1'b0;
    end
  end

  assign adjusted_data_payload_cha_i = shifted_data_cha_i;
  assign adjusted_data_payload_cha_q = shifted_data_cha_q;
  always @(posedge rf_clk) begin
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

module IQDemixer (
  input               if_iq_0_valid,
  input      [31:0]   if_iq_0_payload,
  input               carries_iq_valid,
  input      [15:0]   carries_iq_payload_cha_i,
  input      [15:0]   carries_iq_payload_cha_q,
  output              base_iq_0_valid,
  output     [7:0]    base_iq_0_payload_cha_i,
  output     [7:0]    base_iq_0_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire                iQDemixerCore_1_base_iq_valid;
  wire       [7:0]    iQDemixerCore_1_base_iq_payload_cha_i;
  wire       [7:0]    iQDemixerCore_1_base_iq_payload_cha_q;

  IQDemixerCore iQDemixerCore_1 (
    .if_iq_valid                 (if_iq_0_valid                          ), //i
    .if_iq_payload               (if_iq_0_payload                        ), //i
    .carries_iq_valid            (carries_iq_valid                       ), //i
    .carries_iq_payload_cha_i    (carries_iq_payload_cha_i               ), //i
    .carries_iq_payload_cha_q    (carries_iq_payload_cha_q               ), //i
    .base_iq_valid               (iQDemixerCore_1_base_iq_valid          ), //o
    .base_iq_payload_cha_i       (iQDemixerCore_1_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q       (iQDemixerCore_1_base_iq_payload_cha_q  ), //o
    .rf_clk                      (rf_clk                                 ), //i
    .rf_resetn                   (rf_resetn                              )  //i
  );
  assign base_iq_0_valid = iQDemixerCore_1_base_iq_valid;
  assign base_iq_0_payload_cha_i = iQDemixerCore_1_base_iq_payload_cha_i;
  assign base_iq_0_payload_cha_q = iQDemixerCore_1_base_iq_payload_cha_q;

endmodule

module IQDemixerCore (
  input               if_iq_valid,
  input      [31:0]   if_iq_payload,
  input               carries_iq_valid,
  input      [15:0]   carries_iq_payload_cha_i,
  input      [15:0]   carries_iq_payload_cha_q,
  output              base_iq_valid,
  output     [7:0]    base_iq_payload_cha_i,
  output     [7:0]    base_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [39:0]   _zz_when_SInt_l186;
  wire       [7:0]    _zz__zz_base_i_data_2;
  wire       [7:0]    _zz__zz_base_i_data_2_1;
  wire       [46:0]   _zz__zz_base_i_data_3;
  wire       [7:0]    _zz__zz_base_i_data_4;
  wire       [1:0]    _zz__zz_base_i_data_4_1;
  wire       [6:0]    _zz__zz_base_i_data_4_2;
  wire       [1:0]    _zz_when_SInt_l126;
  wire       [0:0]    _zz_when_SInt_l132;
  wire       [39:0]   _zz_when_SInt_l186_1;
  wire       [7:0]    _zz__zz_base_q_data_2;
  wire       [7:0]    _zz__zz_base_q_data_2_1;
  wire       [46:0]   _zz__zz_base_q_data_3;
  wire       [7:0]    _zz__zz_base_q_data_4;
  wire       [1:0]    _zz__zz_base_q_data_4_1;
  wire       [6:0]    _zz__zz_base_q_data_4_2;
  wire       [1:0]    _zz_when_SInt_l126_1;
  wire       [0:0]    _zz_when_SInt_l132_1;
  reg        [31:0]   if_iq_data;
  reg        [15:0]   carries_i_data;
  reg        [15:0]   carries_q_data;
  reg                 base_iq_valid_1;
  reg        [7:0]    base_i_data;
  reg        [7:0]    base_q_data;
  reg                 iq_en;
  wire       [47:0]   _zz_base_i_data;
  reg        [8:0]    _zz_base_i_data_1;
  wire                when_SInt_l176;
  reg        [7:0]    _zz_base_i_data_2;
  wire                when_SInt_l186;
  wire       [46:0]   _zz_base_i_data_3;
  reg        [7:0]    _zz_base_i_data_4;
  wire                when_UInt_l155;
  reg        [7:0]    _zz_base_i_data_5;
  wire                when_SInt_l125;
  wire                when_SInt_l126;
  wire                when_SInt_l132;
  wire       [47:0]   _zz_base_q_data;
  reg        [8:0]    _zz_base_q_data_1;
  wire                when_SInt_l176_1;
  reg        [7:0]    _zz_base_q_data_2;
  wire                when_SInt_l186_1;
  wire       [46:0]   _zz_base_q_data_3;
  reg        [7:0]    _zz_base_q_data_4;
  wire                when_UInt_l155_1;
  reg        [7:0]    _zz_base_q_data_5;
  wire                when_SInt_l125_1;
  wire                when_SInt_l126_1;
  wire                when_SInt_l132_1;

  assign _zz_when_SInt_l186 = _zz_base_i_data[39 : 0];
  assign _zz__zz_base_i_data_2 = _zz_base_i_data[47 : 40];
  assign _zz__zz_base_i_data_2_1 = 8'h01;
  assign _zz__zz_base_i_data_3 = _zz_base_i_data[46 : 0];
  assign _zz__zz_base_i_data_4_1 = {1'b0,1'b1};
  assign _zz__zz_base_i_data_4 = {6'd0, _zz__zz_base_i_data_4_1};
  assign _zz__zz_base_i_data_4_2 = _zz_base_i_data_3[46 : 40];
  assign _zz_when_SInt_l126 = _zz_base_i_data_1[8 : 7];
  assign _zz_when_SInt_l132 = _zz_base_i_data_1[7 : 7];
  assign _zz_when_SInt_l186_1 = _zz_base_q_data[39 : 0];
  assign _zz__zz_base_q_data_2 = _zz_base_q_data[47 : 40];
  assign _zz__zz_base_q_data_2_1 = 8'h01;
  assign _zz__zz_base_q_data_3 = _zz_base_q_data[46 : 0];
  assign _zz__zz_base_q_data_4_1 = {1'b0,1'b1};
  assign _zz__zz_base_q_data_4 = {6'd0, _zz__zz_base_q_data_4_1};
  assign _zz__zz_base_q_data_4_2 = _zz_base_q_data_3[46 : 40];
  assign _zz_when_SInt_l126_1 = _zz_base_q_data_1[8 : 7];
  assign _zz_when_SInt_l132_1 = _zz_base_q_data_1[7 : 7];
  assign _zz_base_i_data = ($signed(if_iq_data) * $signed(carries_i_data));
  assign when_SInt_l176 = _zz_base_i_data[47];
  assign when_SInt_l186 = (_zz_when_SInt_l186 != 40'h0);
  always @(*) begin
    if(when_SInt_l186) begin
      _zz_base_i_data_2 = ($signed(_zz__zz_base_i_data_2) + $signed(_zz__zz_base_i_data_2_1));
    end else begin
      _zz_base_i_data_2 = _zz_base_i_data[47 : 40];
    end
  end

  always @(*) begin
    if(when_SInt_l176) begin
      _zz_base_i_data_1 = {_zz_base_i_data_2[7],_zz_base_i_data_2};
    end else begin
      _zz_base_i_data_1 = {1'b0,_zz_base_i_data_4};
    end
  end

  assign _zz_base_i_data_3 = _zz__zz_base_i_data_3;
  assign when_UInt_l155 = (_zz_base_i_data_3[39 : 0] != 40'h0);
  always @(*) begin
    if(when_UInt_l155) begin
      _zz_base_i_data_4 = ({1'b0,_zz_base_i_data_3[46 : 40]} + _zz__zz_base_i_data_4);
    end else begin
      _zz_base_i_data_4 = {1'd0, _zz__zz_base_i_data_4_2};
    end
  end

  assign when_SInt_l125 = _zz_base_i_data_1[8];
  assign when_SInt_l126 = (! (_zz_when_SInt_l126 == 2'b11));
  always @(*) begin
    if(when_SInt_l125) begin
      if(when_SInt_l126) begin
        _zz_base_i_data_5 = 8'h80;
      end else begin
        _zz_base_i_data_5 = _zz_base_i_data_1[7 : 0];
      end
    end else begin
      if(when_SInt_l132) begin
        _zz_base_i_data_5 = 8'h7f;
      end else begin
        _zz_base_i_data_5 = _zz_base_i_data_1[7 : 0];
      end
    end
  end

  assign when_SInt_l132 = (_zz_when_SInt_l132 != 1'b0);
  assign _zz_base_q_data = ($signed(if_iq_data) * $signed(carries_q_data));
  assign when_SInt_l176_1 = _zz_base_q_data[47];
  assign when_SInt_l186_1 = (_zz_when_SInt_l186_1 != 40'h0);
  always @(*) begin
    if(when_SInt_l186_1) begin
      _zz_base_q_data_2 = ($signed(_zz__zz_base_q_data_2) + $signed(_zz__zz_base_q_data_2_1));
    end else begin
      _zz_base_q_data_2 = _zz_base_q_data[47 : 40];
    end
  end

  always @(*) begin
    if(when_SInt_l176_1) begin
      _zz_base_q_data_1 = {_zz_base_q_data_2[7],_zz_base_q_data_2};
    end else begin
      _zz_base_q_data_1 = {1'b0,_zz_base_q_data_4};
    end
  end

  assign _zz_base_q_data_3 = _zz__zz_base_q_data_3;
  assign when_UInt_l155_1 = (_zz_base_q_data_3[39 : 0] != 40'h0);
  always @(*) begin
    if(when_UInt_l155_1) begin
      _zz_base_q_data_4 = ({1'b0,_zz_base_q_data_3[46 : 40]} + _zz__zz_base_q_data_4);
    end else begin
      _zz_base_q_data_4 = {1'd0, _zz__zz_base_q_data_4_2};
    end
  end

  assign when_SInt_l125_1 = _zz_base_q_data_1[8];
  assign when_SInt_l126_1 = (! (_zz_when_SInt_l126_1 == 2'b11));
  always @(*) begin
    if(when_SInt_l125_1) begin
      if(when_SInt_l126_1) begin
        _zz_base_q_data_5 = 8'h80;
      end else begin
        _zz_base_q_data_5 = _zz_base_q_data_1[7 : 0];
      end
    end else begin
      if(when_SInt_l132_1) begin
        _zz_base_q_data_5 = 8'h7f;
      end else begin
        _zz_base_q_data_5 = _zz_base_q_data_1[7 : 0];
      end
    end
  end

  assign when_SInt_l132_1 = (_zz_when_SInt_l132_1 != 1'b0);
  assign base_iq_valid = base_iq_valid_1;
  assign base_iq_payload_cha_i = base_i_data;
  assign base_iq_payload_cha_q = base_q_data;
  always @(posedge rf_clk or negedge rf_resetn) begin
    if(!rf_resetn) begin
      if_iq_data <= 32'h0;
      carries_i_data <= 16'h0;
      carries_q_data <= 16'h0;
      base_iq_valid_1 <= 1'b0;
      base_i_data <= 8'h0;
      base_q_data <= 8'h0;
      iq_en <= 1'b0;
    end else begin
      iq_en <= (if_iq_valid && carries_iq_valid);
      if(if_iq_valid) begin
        if_iq_data <= if_iq_payload;
      end
      if(carries_iq_valid) begin
        carries_i_data <= carries_iq_payload_cha_i;
        carries_q_data <= carries_iq_payload_cha_q;
      end
      if(iq_en) begin
        base_iq_valid_1 <= 1'b1;
        base_i_data <= _zz_base_i_data_5;
        base_q_data <= _zz_base_q_data_5;
      end else begin
        base_iq_valid_1 <= 1'b0;
        base_i_data <= 8'h0;
        base_q_data <= 8'h0;
      end
    end
  end


endmodule
