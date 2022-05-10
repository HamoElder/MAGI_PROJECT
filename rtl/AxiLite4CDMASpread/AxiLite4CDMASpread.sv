// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : AxiLite4CDMASpread
// Git hash  : f36ce92a0a16f353bfe80375963e5ab8ed1c93a7

`timescale 1ns/1ps 

module AxiLite4CDMASpread (
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
  input      [11:0]   base_iq_payload_0_cha_i,
  input      [11:0]   base_iq_payload_0_cha_q,
  output              mod_iq_valid,
  output     [11:0]   mod_iq_payload_cha_i,
  output     [11:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               resetn
);

  wire                rfClockArea_cdma_spread_base_iq_ready;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_0_valid;
  wire       [11:0]   rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_i;
  wire       [11:0]   rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_q;
  wire                rfClockArea_cdma_code_sum_mod_iq_valid;
  wire       [11:0]   rfClockArea_cdma_code_sum_mod_iq_payload_cha_i;
  wire       [11:0]   rfClockArea_cdma_code_sum_mod_iq_payload_cha_q;
  wire                clkCrossing_5_dataOut;
  wire                clkCrossing_6_dataOut;
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
  wire                cdma_spread_bridge_clc;
  reg                 cdma_spread_bridge_clc_driver;
  reg                 _zz_dataIn;
  reg        [7:0]    _zz_dataIn_1;
  reg        [2:0]    _zz_dataIn_2;

  CDMASpreading rfClockArea_cdma_spread (
    .w_en                           (clkCrossing_6_dataOut                                      ), //i
    .w_data                         (clkCrossing_8_dataOut[7:0]                                 ), //i
    .clc                            (clkCrossing_5_dataOut                                      ), //i
    .cnt_limit                      (clkCrossing_9_dataOut[2:0]                                 ), //i
    .base_iq_valid                  (base_iq_valid                                              ), //i
    .base_iq_ready                  (rfClockArea_cdma_spread_base_iq_ready                      ), //o
    .base_iq_payload_0_cha_i        (base_iq_payload_0_cha_i[11:0]                              ), //i
    .base_iq_payload_0_cha_q        (base_iq_payload_0_cha_q[11:0]                              ), //i
    .mod_sub_iqs_0_valid            (rfClockArea_cdma_spread_mod_sub_iqs_0_valid                ), //o
    .mod_sub_iqs_0_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_i[11:0]  ), //o
    .mod_sub_iqs_0_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_q[11:0]  ), //o
    .rf_clk                         (rf_clk                                                     ), //i
    .rf_resetn                      (rf_resetn                                                  )  //i
  );
  CodeCompose rfClockArea_cdma_code_sum (
    .mod_sub_iqs_0_valid            (rfClockArea_cdma_spread_mod_sub_iqs_0_valid                ), //i
    .mod_sub_iqs_0_payload_cha_i    (rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_i[11:0]  ), //i
    .mod_sub_iqs_0_payload_cha_q    (rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_q[11:0]  ), //i
    .mod_iq_valid                   (rfClockArea_cdma_code_sum_mod_iq_valid                     ), //o
    .mod_iq_payload_cha_i           (rfClockArea_cdma_code_sum_mod_iq_payload_cha_i[11:0]       ), //o
    .mod_iq_payload_cha_q           (rfClockArea_cdma_code_sum_mod_iq_payload_cha_q[11:0]       )  //o
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
    .clk          (clk        ), //i
    .resetn       (resetn     ), //i
    .rf_clk       (rf_clk     ), //i
    .rf_resetn    (rf_resetn  )  //i
  );
  ClkCrossing_3 clkCrossing_8 (
    .dataIn       (_zz_dataIn_1[7:0]           ), //i
    .dataOut      (clkCrossing_8_dataOut[7:0]  ), //o
    .clk          (clk                         ), //i
    .resetn       (resetn                      ), //i
    .rf_clk       (rf_clk                      ), //i
    .rf_resetn    (rf_resetn                   )  //i
  );
  ClkCrossing_4 clkCrossing_9 (
    .dataIn       (_zz_dataIn_2[2:0]           ), //i
    .dataOut      (clkCrossing_9_dataOut[2:0]  ), //o
    .clk          (clk                         ), //i
    .resetn       (resetn                      ), //i
    .rf_clk       (rf_clk                      ), //i
    .rf_resetn    (rf_resetn                   )  //i
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
      _zz_dataIn_1 <= 8'h0;
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
        8'h08 : begin
          if(writeOccur) begin
            _zz_dataIn_1 <= axil4Ctrl_wdata[7 : 0];
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
          _zz_dataIn_2 <= axil4Ctrl_wdata[2 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module ClkCrossing_4 (
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
  input               clk,
  input               resetn,
  input               rf_clk,
  input               rf_resetn
);



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

module CodeCompose (
  input               mod_sub_iqs_0_valid,
  input      [11:0]   mod_sub_iqs_0_payload_cha_i,
  input      [11:0]   mod_sub_iqs_0_payload_cha_q,
  output              mod_iq_valid,
  output     [11:0]   mod_iq_payload_cha_i,
  output     [11:0]   mod_iq_payload_cha_q
);

  wire       [11:0]   sub_i_data_vec_0;
  wire       [11:0]   sub_q_data_vec_0;
  wire                sub_iqs_valid_vec_0;

  assign sub_i_data_vec_0 = (mod_sub_iqs_0_payload_cha_i >>> 0);
  assign sub_q_data_vec_0 = (mod_sub_iqs_0_payload_cha_q >>> 0);
  assign sub_iqs_valid_vec_0 = mod_sub_iqs_0_valid;
  assign mod_iq_payload_cha_i = sub_i_data_vec_0;
  assign mod_iq_payload_cha_q = sub_q_data_vec_0;
  assign mod_iq_valid = sub_iqs_valid_vec_0;

endmodule

module CDMASpreading (
  input               w_en,
  input      [7:0]    w_data,
  input               clc,
  input      [2:0]    cnt_limit,
  input               base_iq_valid,
  output              base_iq_ready,
  input      [11:0]   base_iq_payload_0_cha_i,
  input      [11:0]   base_iq_payload_0_cha_q,
  output              mod_sub_iqs_0_valid,
  output     [11:0]   mod_sub_iqs_0_payload_cha_i,
  output     [11:0]   mod_sub_iqs_0_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);

  wire                computeUnit_1_mod_iq_valid;
  wire       [11:0]   computeUnit_1_mod_iq_payload_cha_i;
  wire       [11:0]   computeUnit_1_mod_iq_payload_cha_q;
  wire       [2:0]    _zz_cnt;
  reg                 when_Phase_l623;
  reg        [2:0]    cnt;
  reg        [11:0]   flow_iq_data_vec_0_cha_i;
  reg        [11:0]   flow_iq_data_vec_0_cha_q;
  reg                 flow_iq_valid;
  reg                 _zz_code;
  wire                base_iq_fire;
  wire                when_CDMASpreading_l51;
  wire                when_CDMASpreading_l65;
  wire       [7:0]    _zz_code_1;
  reg        [7:0]    _zz_code_2;

  assign _zz_cnt = (cnt + 3'b001);
  ComputeUnit computeUnit_1 (
    .code                     (_zz_code                                  ), //i
    .base_iq_valid            (flow_iq_valid                             ), //i
    .base_iq_payload_cha_i    (flow_iq_data_vec_0_cha_i[11:0]            ), //i
    .base_iq_payload_cha_q    (flow_iq_data_vec_0_cha_q[11:0]            ), //i
    .mod_iq_valid             (computeUnit_1_mod_iq_valid                ), //o
    .mod_iq_payload_cha_i     (computeUnit_1_mod_iq_payload_cha_i[11:0]  ), //o
    .mod_iq_payload_cha_q     (computeUnit_1_mod_iq_payload_cha_q[11:0]  ), //o
    .rf_clk                   (rf_clk                                    ), //i
    .rf_resetn                (rf_resetn                                 )  //i
  );
  always @(*) begin
    when_Phase_l623 = 1'b0;
    if(w_en) begin
      when_Phase_l623 = 1'b1;
    end
  end

  assign mod_sub_iqs_0_valid = computeUnit_1_mod_iq_valid;
  assign mod_sub_iqs_0_payload_cha_i = computeUnit_1_mod_iq_payload_cha_i;
  assign mod_sub_iqs_0_payload_cha_q = computeUnit_1_mod_iq_payload_cha_q;
  assign base_iq_fire = (base_iq_valid && base_iq_ready);
  assign when_CDMASpreading_l51 = (base_iq_fire || (cnt != 3'b000));
  assign when_CDMASpreading_l65 = (cnt == 3'b000);
  assign base_iq_ready = ((cnt == 3'b000) && (! clc));
  assign _zz_code_1 = _zz_code_2;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      cnt <= 3'b000;
      flow_iq_valid <= 1'b0;
    end else begin
      if(clc) begin
        cnt <= 3'b000;
      end else begin
        if(when_CDMASpreading_l51) begin
          cnt <= ((cnt == cnt_limit) ? 3'b000 : _zz_cnt);
        end
      end
      if(when_CDMASpreading_l65) begin
        flow_iq_valid <= base_iq_valid;
      end
    end
  end

  always @(posedge rf_clk) begin
    _zz_code <= _zz_code_1[7];
    if(when_CDMASpreading_l65) begin
      flow_iq_data_vec_0_cha_i <= base_iq_payload_0_cha_i;
      flow_iq_data_vec_0_cha_q <= base_iq_payload_0_cha_q;
    end
    if(when_Phase_l623) begin
      _zz_code_2 <= w_data;
    end
  end


endmodule

module ComputeUnit (
  input               code,
  input               base_iq_valid,
  input      [11:0]   base_iq_payload_cha_i,
  input      [11:0]   base_iq_payload_cha_q,
  output              mod_iq_valid,
  output     [11:0]   mod_iq_payload_cha_i,
  output     [11:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);

  wire       [11:0]   _zz_mod_i;
  wire       [11:0]   _zz_mod_q;
  reg        [11:0]   mod_i;
  reg        [11:0]   mod_q;
  reg                 mod_valid;

  assign _zz_mod_i = (- base_iq_payload_cha_i);
  assign _zz_mod_q = (- base_iq_payload_cha_q);
  assign mod_iq_payload_cha_i = mod_i;
  assign mod_iq_payload_cha_q = mod_q;
  assign mod_iq_valid = mod_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      mod_i <= 12'h0;
      mod_q <= 12'h0;
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
