// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4OAMSpinor
// Git hash  : 3aba5ba41129fa76a4728cd47203bcf10e3093cc



module AxiLite4OAMSpinor (
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
  input               base_iqs_valid,
  input      [15:0]   base_iqs_payload_0_cha_i,
  input      [15:0]   base_iqs_payload_0_cha_q,
  input      [15:0]   base_iqs_payload_1_cha_i,
  input      [15:0]   base_iqs_payload_1_cha_q,
  input      [15:0]   base_iqs_payload_2_cha_i,
  input      [15:0]   base_iqs_payload_2_cha_q,
  input      [15:0]   base_iqs_payload_3_cha_i,
  input      [15:0]   base_iqs_payload_3_cha_q,
  input      [15:0]   base_iqs_payload_4_cha_i,
  input      [15:0]   base_iqs_payload_4_cha_q,
  input      [15:0]   base_iqs_payload_5_cha_i,
  input      [15:0]   base_iqs_payload_5_cha_q,
  input      [15:0]   base_iqs_payload_6_cha_i,
  input      [15:0]   base_iqs_payload_6_cha_q,
  input      [15:0]   base_iqs_payload_7_cha_i,
  input      [15:0]   base_iqs_payload_7_cha_q,
  output              mod_iqs_valid,
  output     [31:0]   mod_iqs_payload_0_cha_i,
  output     [31:0]   mod_iqs_payload_0_cha_q,
  output     [31:0]   mod_iqs_payload_1_cha_i,
  output     [31:0]   mod_iqs_payload_1_cha_q,
  output     [31:0]   mod_iqs_payload_2_cha_i,
  output     [31:0]   mod_iqs_payload_2_cha_q,
  output     [31:0]   mod_iqs_payload_3_cha_i,
  output     [31:0]   mod_iqs_payload_3_cha_q,
  output     [31:0]   mod_iqs_payload_4_cha_i,
  output     [31:0]   mod_iqs_payload_4_cha_q,
  output     [31:0]   mod_iqs_payload_5_cha_i,
  output     [31:0]   mod_iqs_payload_5_cha_q,
  output     [31:0]   mod_iqs_payload_6_cha_i,
  output     [31:0]   mod_iqs_payload_6_cha_q,
  output     [31:0]   mod_iqs_payload_7_cha_i,
  output     [31:0]   mod_iqs_payload_7_cha_q,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               resetn
);
  wire                rfClockArea_spin_core_mod_iqs_valid;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_0_cha_i;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_0_cha_q;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_1_cha_i;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_1_cha_q;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_2_cha_i;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_2_cha_q;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_3_cha_i;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_3_cha_q;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_4_cha_i;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_4_cha_q;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_5_cha_i;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_5_cha_q;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_6_cha_i;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_6_cha_q;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_7_cha_i;
  wire       [31:0]   rfClockArea_spin_core_mod_iqs_payload_7_cha_q;
  wire                clkCrossing_4_dataOut;
  wire                clkCrossing_5_dataOut;
  wire       [5:0]    clkCrossing_6_dataOut;
  wire       [15:0]   clkCrossing_7_dataOut;
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
  wire                oam_spinor_bridge_w_sel;
  wire                oam_spinor_bridge_w_en;
  wire       [5:0]    oam_spinor_bridge_w_addr;
  wire       [15:0]   oam_spinor_bridge_w_data;
  reg                 oam_spinor_bridge_w_en_driver;
  reg                 oam_spinor_bridge_w_sel_driver;
  reg        [5:0]    _zz_oam_spinor_bridge_w_addr;
  reg        [15:0]   _zz_oam_spinor_bridge_w_data;

  OAMSpinor rfClockArea_spin_core (
    .base_iqs_valid              (base_iqs_valid                                 ), //i
    .base_iqs_payload_0_cha_i    (base_iqs_payload_0_cha_i                       ), //i
    .base_iqs_payload_0_cha_q    (base_iqs_payload_0_cha_q                       ), //i
    .base_iqs_payload_1_cha_i    (base_iqs_payload_1_cha_i                       ), //i
    .base_iqs_payload_1_cha_q    (base_iqs_payload_1_cha_q                       ), //i
    .base_iqs_payload_2_cha_i    (base_iqs_payload_2_cha_i                       ), //i
    .base_iqs_payload_2_cha_q    (base_iqs_payload_2_cha_q                       ), //i
    .base_iqs_payload_3_cha_i    (base_iqs_payload_3_cha_i                       ), //i
    .base_iqs_payload_3_cha_q    (base_iqs_payload_3_cha_q                       ), //i
    .base_iqs_payload_4_cha_i    (base_iqs_payload_4_cha_i                       ), //i
    .base_iqs_payload_4_cha_q    (base_iqs_payload_4_cha_q                       ), //i
    .base_iqs_payload_5_cha_i    (base_iqs_payload_5_cha_i                       ), //i
    .base_iqs_payload_5_cha_q    (base_iqs_payload_5_cha_q                       ), //i
    .base_iqs_payload_6_cha_i    (base_iqs_payload_6_cha_i                       ), //i
    .base_iqs_payload_6_cha_q    (base_iqs_payload_6_cha_q                       ), //i
    .base_iqs_payload_7_cha_i    (base_iqs_payload_7_cha_i                       ), //i
    .base_iqs_payload_7_cha_q    (base_iqs_payload_7_cha_q                       ), //i
    .mod_iqs_valid               (rfClockArea_spin_core_mod_iqs_valid            ), //o
    .mod_iqs_payload_0_cha_i     (rfClockArea_spin_core_mod_iqs_payload_0_cha_i  ), //o
    .mod_iqs_payload_0_cha_q     (rfClockArea_spin_core_mod_iqs_payload_0_cha_q  ), //o
    .mod_iqs_payload_1_cha_i     (rfClockArea_spin_core_mod_iqs_payload_1_cha_i  ), //o
    .mod_iqs_payload_1_cha_q     (rfClockArea_spin_core_mod_iqs_payload_1_cha_q  ), //o
    .mod_iqs_payload_2_cha_i     (rfClockArea_spin_core_mod_iqs_payload_2_cha_i  ), //o
    .mod_iqs_payload_2_cha_q     (rfClockArea_spin_core_mod_iqs_payload_2_cha_q  ), //o
    .mod_iqs_payload_3_cha_i     (rfClockArea_spin_core_mod_iqs_payload_3_cha_i  ), //o
    .mod_iqs_payload_3_cha_q     (rfClockArea_spin_core_mod_iqs_payload_3_cha_q  ), //o
    .mod_iqs_payload_4_cha_i     (rfClockArea_spin_core_mod_iqs_payload_4_cha_i  ), //o
    .mod_iqs_payload_4_cha_q     (rfClockArea_spin_core_mod_iqs_payload_4_cha_q  ), //o
    .mod_iqs_payload_5_cha_i     (rfClockArea_spin_core_mod_iqs_payload_5_cha_i  ), //o
    .mod_iqs_payload_5_cha_q     (rfClockArea_spin_core_mod_iqs_payload_5_cha_q  ), //o
    .mod_iqs_payload_6_cha_i     (rfClockArea_spin_core_mod_iqs_payload_6_cha_i  ), //o
    .mod_iqs_payload_6_cha_q     (rfClockArea_spin_core_mod_iqs_payload_6_cha_q  ), //o
    .mod_iqs_payload_7_cha_i     (rfClockArea_spin_core_mod_iqs_payload_7_cha_i  ), //o
    .mod_iqs_payload_7_cha_q     (rfClockArea_spin_core_mod_iqs_payload_7_cha_q  ), //o
    .w_sel                       (clkCrossing_5_dataOut                          ), //i
    .w_en                        (clkCrossing_4_dataOut                          ), //i
    .w_addr                      (clkCrossing_6_dataOut                          ), //i
    .w_data                      (clkCrossing_7_dataOut                          ), //i
    .rf_clk                      (rf_clk                                         ), //i
    .rf_resetn                   (rf_resetn                                      )  //i
  );
  ClkCrossing clkCrossing_4 (
    .dataIn       (oam_spinor_bridge_w_en  ), //i
    .dataOut      (clkCrossing_4_dataOut   ), //o
    .clk          (clk                     ), //i
    .resetn       (resetn                  ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing clkCrossing_5 (
    .dataIn       (oam_spinor_bridge_w_sel  ), //i
    .dataOut      (clkCrossing_5_dataOut    ), //o
    .clk          (clk                      ), //i
    .resetn       (resetn                   ), //i
    .rf_clk       (rf_clk                   ), //i
    .rf_resetn    (rf_resetn                )  //i
  );
  ClkCrossing_2 clkCrossing_6 (
    .dataIn       (oam_spinor_bridge_w_addr  ), //i
    .dataOut      (clkCrossing_6_dataOut     ), //o
    .clk          (clk                       ), //i
    .resetn       (resetn                    ), //i
    .rf_clk       (rf_clk                    ), //i
    .rf_resetn    (rf_resetn                 )  //i
  );
  ClkCrossing_3 clkCrossing_7 (
    .dataIn       (oam_spinor_bridge_w_data  ), //i
    .dataOut      (clkCrossing_7_dataOut     ), //o
    .clk          (clk                       ), //i
    .resetn       (resetn                    ), //i
    .rf_clk       (rf_clk                    ), //i
    .rf_resetn    (rf_resetn                 )  //i
  );
  assign mod_iqs_valid = rfClockArea_spin_core_mod_iqs_valid;
  assign mod_iqs_payload_0_cha_i = rfClockArea_spin_core_mod_iqs_payload_0_cha_i;
  assign mod_iqs_payload_0_cha_q = rfClockArea_spin_core_mod_iqs_payload_0_cha_q;
  assign mod_iqs_payload_1_cha_i = rfClockArea_spin_core_mod_iqs_payload_1_cha_i;
  assign mod_iqs_payload_1_cha_q = rfClockArea_spin_core_mod_iqs_payload_1_cha_q;
  assign mod_iqs_payload_2_cha_i = rfClockArea_spin_core_mod_iqs_payload_2_cha_i;
  assign mod_iqs_payload_2_cha_q = rfClockArea_spin_core_mod_iqs_payload_2_cha_q;
  assign mod_iqs_payload_3_cha_i = rfClockArea_spin_core_mod_iqs_payload_3_cha_i;
  assign mod_iqs_payload_3_cha_q = rfClockArea_spin_core_mod_iqs_payload_3_cha_q;
  assign mod_iqs_payload_4_cha_i = rfClockArea_spin_core_mod_iqs_payload_4_cha_i;
  assign mod_iqs_payload_4_cha_q = rfClockArea_spin_core_mod_iqs_payload_4_cha_q;
  assign mod_iqs_payload_5_cha_i = rfClockArea_spin_core_mod_iqs_payload_5_cha_i;
  assign mod_iqs_payload_5_cha_q = rfClockArea_spin_core_mod_iqs_payload_5_cha_q;
  assign mod_iqs_payload_6_cha_i = rfClockArea_spin_core_mod_iqs_payload_6_cha_i;
  assign mod_iqs_payload_6_cha_q = rfClockArea_spin_core_mod_iqs_payload_6_cha_q;
  assign mod_iqs_payload_7_cha_i = rfClockArea_spin_core_mod_iqs_payload_7_cha_i;
  assign mod_iqs_payload_7_cha_q = rfClockArea_spin_core_mod_iqs_payload_7_cha_q;
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
        readRsp_data[0 : 0] = oam_spinor_bridge_w_en_driver;
        readRsp_data[1 : 1] = oam_spinor_bridge_w_sel_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign oam_spinor_bridge_w_en = oam_spinor_bridge_w_en_driver;
  assign oam_spinor_bridge_w_sel = oam_spinor_bridge_w_sel_driver;
  assign oam_spinor_bridge_w_addr = _zz_oam_spinor_bridge_w_addr;
  assign oam_spinor_bridge_w_data = _zz_oam_spinor_bridge_w_data;
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      oam_spinor_bridge_w_en_driver <= 1'b0;
      oam_spinor_bridge_w_sel_driver <= 1'b0;
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
            oam_spinor_bridge_w_en_driver <= axil4Ctrl_wdata[0];
            oam_spinor_bridge_w_sel_driver <= axil4Ctrl_wdata[1];
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
      8'h04 : begin
        if(writeOccur) begin
          _zz_oam_spinor_bridge_w_addr <= axil4Ctrl_wdata[5 : 0];
        end
      end
      8'h08 : begin
        if(writeOccur) begin
          _zz_oam_spinor_bridge_w_data <= axil4Ctrl_wdata[15 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module ClkCrossing_3 (
  input      [15:0]   dataIn,
  output     [15:0]   dataOut,
  input               clk,
  input               resetn,
  input               rf_clk,
  input               rf_resetn
);
  reg        [15:0]   area_clkI_reg;
  (* async_reg = "true" *) reg        [15:0]   area_clkO_buf0;
  reg        [15:0]   area_clkO_buf1;

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
  input      [5:0]    dataIn,
  output     [5:0]    dataOut,
  input               clk,
  input               resetn,
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

module OAMSpinor (
  input               base_iqs_valid,
  input      [15:0]   base_iqs_payload_0_cha_i,
  input      [15:0]   base_iqs_payload_0_cha_q,
  input      [15:0]   base_iqs_payload_1_cha_i,
  input      [15:0]   base_iqs_payload_1_cha_q,
  input      [15:0]   base_iqs_payload_2_cha_i,
  input      [15:0]   base_iqs_payload_2_cha_q,
  input      [15:0]   base_iqs_payload_3_cha_i,
  input      [15:0]   base_iqs_payload_3_cha_q,
  input      [15:0]   base_iqs_payload_4_cha_i,
  input      [15:0]   base_iqs_payload_4_cha_q,
  input      [15:0]   base_iqs_payload_5_cha_i,
  input      [15:0]   base_iqs_payload_5_cha_q,
  input      [15:0]   base_iqs_payload_6_cha_i,
  input      [15:0]   base_iqs_payload_6_cha_q,
  input      [15:0]   base_iqs_payload_7_cha_i,
  input      [15:0]   base_iqs_payload_7_cha_q,
  output              mod_iqs_valid,
  output     [31:0]   mod_iqs_payload_0_cha_i,
  output     [31:0]   mod_iqs_payload_0_cha_q,
  output     [31:0]   mod_iqs_payload_1_cha_i,
  output     [31:0]   mod_iqs_payload_1_cha_q,
  output     [31:0]   mod_iqs_payload_2_cha_i,
  output     [31:0]   mod_iqs_payload_2_cha_q,
  output     [31:0]   mod_iqs_payload_3_cha_i,
  output     [31:0]   mod_iqs_payload_3_cha_q,
  output     [31:0]   mod_iqs_payload_4_cha_i,
  output     [31:0]   mod_iqs_payload_4_cha_q,
  output     [31:0]   mod_iqs_payload_5_cha_i,
  output     [31:0]   mod_iqs_payload_5_cha_q,
  output     [31:0]   mod_iqs_payload_6_cha_i,
  output     [31:0]   mod_iqs_payload_6_cha_q,
  output     [31:0]   mod_iqs_payload_7_cha_i,
  output     [31:0]   mod_iqs_payload_7_cha_q,
  input               w_sel,
  input               w_en,
  input      [5:0]    w_addr,
  input      [15:0]   w_data,
  input               rf_clk,
  input               rf_resetn
);
  wire       [15:0]   oAMSpin_8_shift_i_0;
  wire       [15:0]   oAMSpin_8_shift_i_1;
  wire       [15:0]   oAMSpin_8_shift_i_2;
  wire       [15:0]   oAMSpin_8_shift_i_3;
  wire       [15:0]   oAMSpin_8_shift_i_4;
  wire       [15:0]   oAMSpin_8_shift_i_5;
  wire       [15:0]   oAMSpin_8_shift_i_6;
  wire       [15:0]   oAMSpin_8_shift_i_7;
  wire       [15:0]   oAMSpin_8_shift_q_0;
  wire       [15:0]   oAMSpin_8_shift_q_1;
  wire       [15:0]   oAMSpin_8_shift_q_2;
  wire       [15:0]   oAMSpin_8_shift_q_3;
  wire       [15:0]   oAMSpin_8_shift_q_4;
  wire       [15:0]   oAMSpin_8_shift_q_5;
  wire       [15:0]   oAMSpin_8_shift_q_6;
  wire       [15:0]   oAMSpin_8_shift_q_7;
  wire       [15:0]   oAMSpin_9_shift_i_0;
  wire       [15:0]   oAMSpin_9_shift_i_1;
  wire       [15:0]   oAMSpin_9_shift_i_2;
  wire       [15:0]   oAMSpin_9_shift_i_3;
  wire       [15:0]   oAMSpin_9_shift_i_4;
  wire       [15:0]   oAMSpin_9_shift_i_5;
  wire       [15:0]   oAMSpin_9_shift_i_6;
  wire       [15:0]   oAMSpin_9_shift_i_7;
  wire       [15:0]   oAMSpin_9_shift_q_0;
  wire       [15:0]   oAMSpin_9_shift_q_1;
  wire       [15:0]   oAMSpin_9_shift_q_2;
  wire       [15:0]   oAMSpin_9_shift_q_3;
  wire       [15:0]   oAMSpin_9_shift_q_4;
  wire       [15:0]   oAMSpin_9_shift_q_5;
  wire       [15:0]   oAMSpin_9_shift_q_6;
  wire       [15:0]   oAMSpin_9_shift_q_7;
  wire       [15:0]   oAMSpin_10_shift_i_0;
  wire       [15:0]   oAMSpin_10_shift_i_1;
  wire       [15:0]   oAMSpin_10_shift_i_2;
  wire       [15:0]   oAMSpin_10_shift_i_3;
  wire       [15:0]   oAMSpin_10_shift_i_4;
  wire       [15:0]   oAMSpin_10_shift_i_5;
  wire       [15:0]   oAMSpin_10_shift_i_6;
  wire       [15:0]   oAMSpin_10_shift_i_7;
  wire       [15:0]   oAMSpin_10_shift_q_0;
  wire       [15:0]   oAMSpin_10_shift_q_1;
  wire       [15:0]   oAMSpin_10_shift_q_2;
  wire       [15:0]   oAMSpin_10_shift_q_3;
  wire       [15:0]   oAMSpin_10_shift_q_4;
  wire       [15:0]   oAMSpin_10_shift_q_5;
  wire       [15:0]   oAMSpin_10_shift_q_6;
  wire       [15:0]   oAMSpin_10_shift_q_7;
  wire       [15:0]   oAMSpin_11_shift_i_0;
  wire       [15:0]   oAMSpin_11_shift_i_1;
  wire       [15:0]   oAMSpin_11_shift_i_2;
  wire       [15:0]   oAMSpin_11_shift_i_3;
  wire       [15:0]   oAMSpin_11_shift_i_4;
  wire       [15:0]   oAMSpin_11_shift_i_5;
  wire       [15:0]   oAMSpin_11_shift_i_6;
  wire       [15:0]   oAMSpin_11_shift_i_7;
  wire       [15:0]   oAMSpin_11_shift_q_0;
  wire       [15:0]   oAMSpin_11_shift_q_1;
  wire       [15:0]   oAMSpin_11_shift_q_2;
  wire       [15:0]   oAMSpin_11_shift_q_3;
  wire       [15:0]   oAMSpin_11_shift_q_4;
  wire       [15:0]   oAMSpin_11_shift_q_5;
  wire       [15:0]   oAMSpin_11_shift_q_6;
  wire       [15:0]   oAMSpin_11_shift_q_7;
  wire       [15:0]   oAMSpin_12_shift_i_0;
  wire       [15:0]   oAMSpin_12_shift_i_1;
  wire       [15:0]   oAMSpin_12_shift_i_2;
  wire       [15:0]   oAMSpin_12_shift_i_3;
  wire       [15:0]   oAMSpin_12_shift_i_4;
  wire       [15:0]   oAMSpin_12_shift_i_5;
  wire       [15:0]   oAMSpin_12_shift_i_6;
  wire       [15:0]   oAMSpin_12_shift_i_7;
  wire       [15:0]   oAMSpin_12_shift_q_0;
  wire       [15:0]   oAMSpin_12_shift_q_1;
  wire       [15:0]   oAMSpin_12_shift_q_2;
  wire       [15:0]   oAMSpin_12_shift_q_3;
  wire       [15:0]   oAMSpin_12_shift_q_4;
  wire       [15:0]   oAMSpin_12_shift_q_5;
  wire       [15:0]   oAMSpin_12_shift_q_6;
  wire       [15:0]   oAMSpin_12_shift_q_7;
  wire       [15:0]   oAMSpin_13_shift_i_0;
  wire       [15:0]   oAMSpin_13_shift_i_1;
  wire       [15:0]   oAMSpin_13_shift_i_2;
  wire       [15:0]   oAMSpin_13_shift_i_3;
  wire       [15:0]   oAMSpin_13_shift_i_4;
  wire       [15:0]   oAMSpin_13_shift_i_5;
  wire       [15:0]   oAMSpin_13_shift_i_6;
  wire       [15:0]   oAMSpin_13_shift_i_7;
  wire       [15:0]   oAMSpin_13_shift_q_0;
  wire       [15:0]   oAMSpin_13_shift_q_1;
  wire       [15:0]   oAMSpin_13_shift_q_2;
  wire       [15:0]   oAMSpin_13_shift_q_3;
  wire       [15:0]   oAMSpin_13_shift_q_4;
  wire       [15:0]   oAMSpin_13_shift_q_5;
  wire       [15:0]   oAMSpin_13_shift_q_6;
  wire       [15:0]   oAMSpin_13_shift_q_7;
  wire       [15:0]   oAMSpin_14_shift_i_0;
  wire       [15:0]   oAMSpin_14_shift_i_1;
  wire       [15:0]   oAMSpin_14_shift_i_2;
  wire       [15:0]   oAMSpin_14_shift_i_3;
  wire       [15:0]   oAMSpin_14_shift_i_4;
  wire       [15:0]   oAMSpin_14_shift_i_5;
  wire       [15:0]   oAMSpin_14_shift_i_6;
  wire       [15:0]   oAMSpin_14_shift_i_7;
  wire       [15:0]   oAMSpin_14_shift_q_0;
  wire       [15:0]   oAMSpin_14_shift_q_1;
  wire       [15:0]   oAMSpin_14_shift_q_2;
  wire       [15:0]   oAMSpin_14_shift_q_3;
  wire       [15:0]   oAMSpin_14_shift_q_4;
  wire       [15:0]   oAMSpin_14_shift_q_5;
  wire       [15:0]   oAMSpin_14_shift_q_6;
  wire       [15:0]   oAMSpin_14_shift_q_7;
  wire       [15:0]   oAMSpin_15_shift_i_0;
  wire       [15:0]   oAMSpin_15_shift_i_1;
  wire       [15:0]   oAMSpin_15_shift_i_2;
  wire       [15:0]   oAMSpin_15_shift_i_3;
  wire       [15:0]   oAMSpin_15_shift_i_4;
  wire       [15:0]   oAMSpin_15_shift_i_5;
  wire       [15:0]   oAMSpin_15_shift_i_6;
  wire       [15:0]   oAMSpin_15_shift_i_7;
  wire       [15:0]   oAMSpin_15_shift_q_0;
  wire       [15:0]   oAMSpin_15_shift_q_1;
  wire       [15:0]   oAMSpin_15_shift_q_2;
  wire       [15:0]   oAMSpin_15_shift_q_3;
  wire       [15:0]   oAMSpin_15_shift_q_4;
  wire       [15:0]   oAMSpin_15_shift_q_5;
  wire       [15:0]   oAMSpin_15_shift_q_6;
  wire       [15:0]   oAMSpin_15_shift_q_7;
  wire       [15:0]   _zz_shift_i_map_port1;
  wire       [15:0]   _zz_shift_i_map_port2;
  wire       [15:0]   _zz_shift_i_map_port3;
  wire       [15:0]   _zz_shift_i_map_port4;
  wire       [15:0]   _zz_shift_i_map_port5;
  wire       [15:0]   _zz_shift_i_map_port6;
  wire       [15:0]   _zz_shift_i_map_port7;
  wire       [15:0]   _zz_shift_i_map_port8;
  wire       [15:0]   _zz_shift_i_map_port9;
  wire       [15:0]   _zz_shift_i_map_port10;
  wire       [15:0]   _zz_shift_i_map_port11;
  wire       [15:0]   _zz_shift_i_map_port12;
  wire       [15:0]   _zz_shift_i_map_port13;
  wire       [15:0]   _zz_shift_i_map_port14;
  wire       [15:0]   _zz_shift_i_map_port15;
  wire       [15:0]   _zz_shift_i_map_port16;
  wire       [15:0]   _zz_shift_i_map_port17;
  wire       [15:0]   _zz_shift_i_map_port18;
  wire       [15:0]   _zz_shift_i_map_port19;
  wire       [15:0]   _zz_shift_i_map_port20;
  wire       [15:0]   _zz_shift_i_map_port21;
  wire       [15:0]   _zz_shift_i_map_port22;
  wire       [15:0]   _zz_shift_i_map_port23;
  wire       [15:0]   _zz_shift_i_map_port24;
  wire       [15:0]   _zz_shift_i_map_port25;
  wire       [15:0]   _zz_shift_i_map_port26;
  wire       [15:0]   _zz_shift_i_map_port27;
  wire       [15:0]   _zz_shift_i_map_port28;
  wire       [15:0]   _zz_shift_i_map_port29;
  wire       [15:0]   _zz_shift_i_map_port30;
  wire       [15:0]   _zz_shift_i_map_port31;
  wire       [15:0]   _zz_shift_i_map_port32;
  wire       [15:0]   _zz_shift_i_map_port33;
  wire       [15:0]   _zz_shift_i_map_port34;
  wire       [15:0]   _zz_shift_i_map_port35;
  wire       [15:0]   _zz_shift_i_map_port36;
  wire       [15:0]   _zz_shift_i_map_port37;
  wire       [15:0]   _zz_shift_i_map_port38;
  wire       [15:0]   _zz_shift_i_map_port39;
  wire       [15:0]   _zz_shift_i_map_port40;
  wire       [15:0]   _zz_shift_i_map_port41;
  wire       [15:0]   _zz_shift_i_map_port42;
  wire       [15:0]   _zz_shift_i_map_port43;
  wire       [15:0]   _zz_shift_i_map_port44;
  wire       [15:0]   _zz_shift_i_map_port45;
  wire       [15:0]   _zz_shift_i_map_port46;
  wire       [15:0]   _zz_shift_i_map_port47;
  wire       [15:0]   _zz_shift_i_map_port48;
  wire       [15:0]   _zz_shift_i_map_port49;
  wire       [15:0]   _zz_shift_i_map_port50;
  wire       [15:0]   _zz_shift_i_map_port51;
  wire       [15:0]   _zz_shift_i_map_port52;
  wire       [15:0]   _zz_shift_i_map_port53;
  wire       [15:0]   _zz_shift_i_map_port54;
  wire       [15:0]   _zz_shift_i_map_port55;
  wire       [15:0]   _zz_shift_i_map_port56;
  wire       [15:0]   _zz_shift_i_map_port57;
  wire       [15:0]   _zz_shift_i_map_port58;
  wire       [15:0]   _zz_shift_i_map_port59;
  wire       [15:0]   _zz_shift_i_map_port60;
  wire       [15:0]   _zz_shift_i_map_port61;
  wire       [15:0]   _zz_shift_i_map_port62;
  wire       [15:0]   _zz_shift_i_map_port63;
  wire       [15:0]   _zz_shift_i_map_port64;
  wire       [15:0]   _zz_shift_q_map_port1;
  wire       [15:0]   _zz_shift_q_map_port2;
  wire       [15:0]   _zz_shift_q_map_port3;
  wire       [15:0]   _zz_shift_q_map_port4;
  wire       [15:0]   _zz_shift_q_map_port5;
  wire       [15:0]   _zz_shift_q_map_port6;
  wire       [15:0]   _zz_shift_q_map_port7;
  wire       [15:0]   _zz_shift_q_map_port8;
  wire       [15:0]   _zz_shift_q_map_port9;
  wire       [15:0]   _zz_shift_q_map_port10;
  wire       [15:0]   _zz_shift_q_map_port11;
  wire       [15:0]   _zz_shift_q_map_port12;
  wire       [15:0]   _zz_shift_q_map_port13;
  wire       [15:0]   _zz_shift_q_map_port14;
  wire       [15:0]   _zz_shift_q_map_port15;
  wire       [15:0]   _zz_shift_q_map_port16;
  wire       [15:0]   _zz_shift_q_map_port17;
  wire       [15:0]   _zz_shift_q_map_port18;
  wire       [15:0]   _zz_shift_q_map_port19;
  wire       [15:0]   _zz_shift_q_map_port20;
  wire       [15:0]   _zz_shift_q_map_port21;
  wire       [15:0]   _zz_shift_q_map_port22;
  wire       [15:0]   _zz_shift_q_map_port23;
  wire       [15:0]   _zz_shift_q_map_port24;
  wire       [15:0]   _zz_shift_q_map_port25;
  wire       [15:0]   _zz_shift_q_map_port26;
  wire       [15:0]   _zz_shift_q_map_port27;
  wire       [15:0]   _zz_shift_q_map_port28;
  wire       [15:0]   _zz_shift_q_map_port29;
  wire       [15:0]   _zz_shift_q_map_port30;
  wire       [15:0]   _zz_shift_q_map_port31;
  wire       [15:0]   _zz_shift_q_map_port32;
  wire       [15:0]   _zz_shift_q_map_port33;
  wire       [15:0]   _zz_shift_q_map_port34;
  wire       [15:0]   _zz_shift_q_map_port35;
  wire       [15:0]   _zz_shift_q_map_port36;
  wire       [15:0]   _zz_shift_q_map_port37;
  wire       [15:0]   _zz_shift_q_map_port38;
  wire       [15:0]   _zz_shift_q_map_port39;
  wire       [15:0]   _zz_shift_q_map_port40;
  wire       [15:0]   _zz_shift_q_map_port41;
  wire       [15:0]   _zz_shift_q_map_port42;
  wire       [15:0]   _zz_shift_q_map_port43;
  wire       [15:0]   _zz_shift_q_map_port44;
  wire       [15:0]   _zz_shift_q_map_port45;
  wire       [15:0]   _zz_shift_q_map_port46;
  wire       [15:0]   _zz_shift_q_map_port47;
  wire       [15:0]   _zz_shift_q_map_port48;
  wire       [15:0]   _zz_shift_q_map_port49;
  wire       [15:0]   _zz_shift_q_map_port50;
  wire       [15:0]   _zz_shift_q_map_port51;
  wire       [15:0]   _zz_shift_q_map_port52;
  wire       [15:0]   _zz_shift_q_map_port53;
  wire       [15:0]   _zz_shift_q_map_port54;
  wire       [15:0]   _zz_shift_q_map_port55;
  wire       [15:0]   _zz_shift_q_map_port56;
  wire       [15:0]   _zz_shift_q_map_port57;
  wire       [15:0]   _zz_shift_q_map_port58;
  wire       [15:0]   _zz_shift_q_map_port59;
  wire       [15:0]   _zz_shift_q_map_port60;
  wire       [15:0]   _zz_shift_q_map_port61;
  wire       [15:0]   _zz_shift_q_map_port62;
  wire       [15:0]   _zz_shift_q_map_port63;
  wire       [15:0]   _zz_shift_q_map_port64;
  wire                oAMSpin_8_mod_sub_iqs_valid;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_0_cha_i;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_0_cha_q;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_1_cha_i;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_1_cha_q;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_2_cha_i;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_2_cha_q;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_3_cha_i;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_3_cha_q;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_4_cha_i;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_4_cha_q;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_5_cha_i;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_5_cha_q;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_6_cha_i;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_6_cha_q;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_7_cha_i;
  wire       [31:0]   oAMSpin_8_mod_sub_iqs_payload_7_cha_q;
  wire                oAMSpin_9_mod_sub_iqs_valid;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_0_cha_i;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_0_cha_q;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_1_cha_i;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_1_cha_q;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_2_cha_i;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_2_cha_q;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_3_cha_i;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_3_cha_q;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_4_cha_i;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_4_cha_q;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_5_cha_i;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_5_cha_q;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_6_cha_i;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_6_cha_q;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_7_cha_i;
  wire       [31:0]   oAMSpin_9_mod_sub_iqs_payload_7_cha_q;
  wire                oAMSpin_10_mod_sub_iqs_valid;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_0_cha_i;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_0_cha_q;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_1_cha_i;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_1_cha_q;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_2_cha_i;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_2_cha_q;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_3_cha_i;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_3_cha_q;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_4_cha_i;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_4_cha_q;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_5_cha_i;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_5_cha_q;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_6_cha_i;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_6_cha_q;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_7_cha_i;
  wire       [31:0]   oAMSpin_10_mod_sub_iqs_payload_7_cha_q;
  wire                oAMSpin_11_mod_sub_iqs_valid;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_0_cha_i;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_0_cha_q;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_1_cha_i;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_1_cha_q;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_2_cha_i;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_2_cha_q;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_3_cha_i;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_3_cha_q;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_4_cha_i;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_4_cha_q;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_5_cha_i;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_5_cha_q;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_6_cha_i;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_6_cha_q;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_7_cha_i;
  wire       [31:0]   oAMSpin_11_mod_sub_iqs_payload_7_cha_q;
  wire                oAMSpin_12_mod_sub_iqs_valid;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_0_cha_i;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_0_cha_q;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_1_cha_i;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_1_cha_q;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_2_cha_i;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_2_cha_q;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_3_cha_i;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_3_cha_q;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_4_cha_i;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_4_cha_q;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_5_cha_i;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_5_cha_q;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_6_cha_i;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_6_cha_q;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_7_cha_i;
  wire       [31:0]   oAMSpin_12_mod_sub_iqs_payload_7_cha_q;
  wire                oAMSpin_13_mod_sub_iqs_valid;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_0_cha_i;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_0_cha_q;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_1_cha_i;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_1_cha_q;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_2_cha_i;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_2_cha_q;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_3_cha_i;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_3_cha_q;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_4_cha_i;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_4_cha_q;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_5_cha_i;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_5_cha_q;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_6_cha_i;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_6_cha_q;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_7_cha_i;
  wire       [31:0]   oAMSpin_13_mod_sub_iqs_payload_7_cha_q;
  wire                oAMSpin_14_mod_sub_iqs_valid;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_0_cha_i;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_0_cha_q;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_1_cha_i;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_1_cha_q;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_2_cha_i;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_2_cha_q;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_3_cha_i;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_3_cha_q;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_4_cha_i;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_4_cha_q;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_5_cha_i;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_5_cha_q;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_6_cha_i;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_6_cha_q;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_7_cha_i;
  wire       [31:0]   oAMSpin_14_mod_sub_iqs_payload_7_cha_q;
  wire                oAMSpin_15_mod_sub_iqs_valid;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_0_cha_i;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_0_cha_q;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_1_cha_i;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_1_cha_q;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_2_cha_i;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_2_cha_q;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_3_cha_i;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_3_cha_q;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_4_cha_i;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_4_cha_q;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_5_cha_i;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_5_cha_q;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_6_cha_i;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_6_cha_q;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_7_cha_i;
  wire       [31:0]   oAMSpin_15_mod_sub_iqs_payload_7_cha_q;
  wire                chaCompose_8_mod_iq_valid;
  wire       [31:0]   chaCompose_8_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_8_mod_iq_payload_cha_q;
  wire                chaCompose_9_mod_iq_valid;
  wire       [31:0]   chaCompose_9_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_9_mod_iq_payload_cha_q;
  wire                chaCompose_10_mod_iq_valid;
  wire       [31:0]   chaCompose_10_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_10_mod_iq_payload_cha_q;
  wire                chaCompose_11_mod_iq_valid;
  wire       [31:0]   chaCompose_11_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_11_mod_iq_payload_cha_q;
  wire                chaCompose_12_mod_iq_valid;
  wire       [31:0]   chaCompose_12_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_12_mod_iq_payload_cha_q;
  wire                chaCompose_13_mod_iq_valid;
  wire       [31:0]   chaCompose_13_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_13_mod_iq_payload_cha_q;
  wire                chaCompose_14_mod_iq_valid;
  wire       [31:0]   chaCompose_14_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_14_mod_iq_payload_cha_q;
  wire                chaCompose_15_mod_iq_valid;
  wire       [31:0]   chaCompose_15_mod_iq_payload_cha_i;
  wire       [31:0]   chaCompose_15_mod_iq_payload_cha_q;
  wire       [15:0]   _zz_shift_i_map_port;
  wire       [15:0]   _zz_shift_q_map_port;
  wire       [5:0]    _zz_shift_i_map_port_1;
  wire       [5:0]    _zz_shift_i_0;
  wire       [5:0]    _zz_shift_q_map_port_1;
  wire       [5:0]    _zz_shift_q_0;
  wire       [5:0]    _zz_shift_i_map_port_2;
  wire       [5:0]    _zz_shift_i_1;
  wire       [5:0]    _zz_shift_q_map_port_2;
  wire       [5:0]    _zz_shift_q_1;
  wire       [5:0]    _zz_shift_i_map_port_3;
  wire       [5:0]    _zz_shift_i_2;
  wire       [5:0]    _zz_shift_q_map_port_3;
  wire       [5:0]    _zz_shift_q_2;
  wire       [5:0]    _zz_shift_i_map_port_4;
  wire       [5:0]    _zz_shift_i_3;
  wire       [5:0]    _zz_shift_q_map_port_4;
  wire       [5:0]    _zz_shift_q_3;
  wire       [5:0]    _zz_shift_i_map_port_5;
  wire       [5:0]    _zz_shift_i_4;
  wire       [5:0]    _zz_shift_q_map_port_5;
  wire       [5:0]    _zz_shift_q_4;
  wire       [5:0]    _zz_shift_i_map_port_6;
  wire       [5:0]    _zz_shift_i_5;
  wire       [5:0]    _zz_shift_q_map_port_6;
  wire       [5:0]    _zz_shift_q_5;
  wire       [5:0]    _zz_shift_i_map_port_7;
  wire       [5:0]    _zz_shift_i_6;
  wire       [5:0]    _zz_shift_q_map_port_7;
  wire       [5:0]    _zz_shift_q_6;
  wire       [5:0]    _zz_shift_i_map_port_8;
  wire       [5:0]    _zz_shift_i_7;
  wire       [5:0]    _zz_shift_q_map_port_8;
  wire       [5:0]    _zz_shift_q_7;
  wire       [5:0]    _zz_shift_i_map_port_9;
  wire       [5:0]    _zz_shift_i_0_1;
  wire       [5:0]    _zz_shift_q_map_port_9;
  wire       [5:0]    _zz_shift_q_0_1;
  wire       [5:0]    _zz_shift_i_map_port_10;
  wire       [5:0]    _zz_shift_i_1_1;
  wire       [5:0]    _zz_shift_q_map_port_10;
  wire       [5:0]    _zz_shift_q_1_1;
  wire       [5:0]    _zz_shift_i_map_port_11;
  wire       [5:0]    _zz_shift_i_2_1;
  wire       [5:0]    _zz_shift_q_map_port_11;
  wire       [5:0]    _zz_shift_q_2_1;
  wire       [5:0]    _zz_shift_i_map_port_12;
  wire       [5:0]    _zz_shift_i_3_1;
  wire       [5:0]    _zz_shift_q_map_port_12;
  wire       [5:0]    _zz_shift_q_3_1;
  wire       [5:0]    _zz_shift_i_map_port_13;
  wire       [5:0]    _zz_shift_i_4_1;
  wire       [5:0]    _zz_shift_q_map_port_13;
  wire       [5:0]    _zz_shift_q_4_1;
  wire       [5:0]    _zz_shift_i_map_port_14;
  wire       [5:0]    _zz_shift_i_5_1;
  wire       [5:0]    _zz_shift_q_map_port_14;
  wire       [5:0]    _zz_shift_q_5_1;
  wire       [5:0]    _zz_shift_i_map_port_15;
  wire       [5:0]    _zz_shift_i_6_1;
  wire       [5:0]    _zz_shift_q_map_port_15;
  wire       [5:0]    _zz_shift_q_6_1;
  wire       [5:0]    _zz_shift_i_map_port_16;
  wire       [5:0]    _zz_shift_i_7_1;
  wire       [5:0]    _zz_shift_q_map_port_16;
  wire       [5:0]    _zz_shift_q_7_1;
  wire       [5:0]    _zz_shift_i_map_port_17;
  wire       [5:0]    _zz_shift_i_0_2;
  wire       [5:0]    _zz_shift_q_map_port_17;
  wire       [5:0]    _zz_shift_q_0_2;
  wire       [5:0]    _zz_shift_i_map_port_18;
  wire       [5:0]    _zz_shift_i_1_2;
  wire       [5:0]    _zz_shift_q_map_port_18;
  wire       [5:0]    _zz_shift_q_1_2;
  wire       [5:0]    _zz_shift_i_map_port_19;
  wire       [5:0]    _zz_shift_i_2_2;
  wire       [5:0]    _zz_shift_q_map_port_19;
  wire       [5:0]    _zz_shift_q_2_2;
  wire       [5:0]    _zz_shift_i_map_port_20;
  wire       [5:0]    _zz_shift_i_3_2;
  wire       [5:0]    _zz_shift_q_map_port_20;
  wire       [5:0]    _zz_shift_q_3_2;
  wire       [5:0]    _zz_shift_i_map_port_21;
  wire       [5:0]    _zz_shift_i_4_2;
  wire       [5:0]    _zz_shift_q_map_port_21;
  wire       [5:0]    _zz_shift_q_4_2;
  wire       [5:0]    _zz_shift_i_map_port_22;
  wire       [5:0]    _zz_shift_i_5_2;
  wire       [5:0]    _zz_shift_q_map_port_22;
  wire       [5:0]    _zz_shift_q_5_2;
  wire       [5:0]    _zz_shift_i_map_port_23;
  wire       [5:0]    _zz_shift_i_6_2;
  wire       [5:0]    _zz_shift_q_map_port_23;
  wire       [5:0]    _zz_shift_q_6_2;
  wire       [5:0]    _zz_shift_i_map_port_24;
  wire       [5:0]    _zz_shift_i_7_2;
  wire       [5:0]    _zz_shift_q_map_port_24;
  wire       [5:0]    _zz_shift_q_7_2;
  wire       [5:0]    _zz_shift_i_map_port_25;
  wire       [5:0]    _zz_shift_i_0_3;
  wire       [5:0]    _zz_shift_q_map_port_25;
  wire       [5:0]    _zz_shift_q_0_3;
  wire       [5:0]    _zz_shift_i_map_port_26;
  wire       [5:0]    _zz_shift_i_1_3;
  wire       [5:0]    _zz_shift_q_map_port_26;
  wire       [5:0]    _zz_shift_q_1_3;
  wire       [5:0]    _zz_shift_i_map_port_27;
  wire       [5:0]    _zz_shift_i_2_3;
  wire       [5:0]    _zz_shift_q_map_port_27;
  wire       [5:0]    _zz_shift_q_2_3;
  wire       [5:0]    _zz_shift_i_map_port_28;
  wire       [5:0]    _zz_shift_i_3_3;
  wire       [5:0]    _zz_shift_q_map_port_28;
  wire       [5:0]    _zz_shift_q_3_3;
  wire       [5:0]    _zz_shift_i_map_port_29;
  wire       [5:0]    _zz_shift_i_4_3;
  wire       [5:0]    _zz_shift_q_map_port_29;
  wire       [5:0]    _zz_shift_q_4_3;
  wire       [5:0]    _zz_shift_i_map_port_30;
  wire       [5:0]    _zz_shift_i_5_3;
  wire       [5:0]    _zz_shift_q_map_port_30;
  wire       [5:0]    _zz_shift_q_5_3;
  wire       [5:0]    _zz_shift_i_map_port_31;
  wire       [5:0]    _zz_shift_i_6_3;
  wire       [5:0]    _zz_shift_q_map_port_31;
  wire       [5:0]    _zz_shift_q_6_3;
  wire       [5:0]    _zz_shift_i_map_port_32;
  wire       [5:0]    _zz_shift_i_7_3;
  wire       [5:0]    _zz_shift_q_map_port_32;
  wire       [5:0]    _zz_shift_q_7_3;
  wire       [5:0]    _zz_shift_i_map_port_33;
  wire       [5:0]    _zz_shift_i_0_4;
  wire       [5:0]    _zz_shift_q_map_port_33;
  wire       [5:0]    _zz_shift_q_0_4;
  wire       [5:0]    _zz_shift_i_map_port_34;
  wire       [5:0]    _zz_shift_i_1_4;
  wire       [5:0]    _zz_shift_q_map_port_34;
  wire       [5:0]    _zz_shift_q_1_4;
  wire       [5:0]    _zz_shift_i_map_port_35;
  wire       [5:0]    _zz_shift_i_2_4;
  wire       [5:0]    _zz_shift_q_map_port_35;
  wire       [5:0]    _zz_shift_q_2_4;
  wire       [5:0]    _zz_shift_i_map_port_36;
  wire       [5:0]    _zz_shift_i_3_4;
  wire       [5:0]    _zz_shift_q_map_port_36;
  wire       [5:0]    _zz_shift_q_3_4;
  wire       [5:0]    _zz_shift_i_map_port_37;
  wire       [5:0]    _zz_shift_i_4_4;
  wire       [5:0]    _zz_shift_q_map_port_37;
  wire       [5:0]    _zz_shift_q_4_4;
  wire       [5:0]    _zz_shift_i_map_port_38;
  wire       [5:0]    _zz_shift_i_5_4;
  wire       [5:0]    _zz_shift_q_map_port_38;
  wire       [5:0]    _zz_shift_q_5_4;
  wire       [5:0]    _zz_shift_i_map_port_39;
  wire       [5:0]    _zz_shift_i_6_4;
  wire       [5:0]    _zz_shift_q_map_port_39;
  wire       [5:0]    _zz_shift_q_6_4;
  wire       [5:0]    _zz_shift_i_map_port_40;
  wire       [5:0]    _zz_shift_i_7_4;
  wire       [5:0]    _zz_shift_q_map_port_40;
  wire       [5:0]    _zz_shift_q_7_4;
  wire       [5:0]    _zz_shift_i_map_port_41;
  wire       [5:0]    _zz_shift_i_0_5;
  wire       [5:0]    _zz_shift_q_map_port_41;
  wire       [5:0]    _zz_shift_q_0_5;
  wire       [5:0]    _zz_shift_i_map_port_42;
  wire       [5:0]    _zz_shift_i_1_5;
  wire       [5:0]    _zz_shift_q_map_port_42;
  wire       [5:0]    _zz_shift_q_1_5;
  wire       [5:0]    _zz_shift_i_map_port_43;
  wire       [5:0]    _zz_shift_i_2_5;
  wire       [5:0]    _zz_shift_q_map_port_43;
  wire       [5:0]    _zz_shift_q_2_5;
  wire       [5:0]    _zz_shift_i_map_port_44;
  wire       [5:0]    _zz_shift_i_3_5;
  wire       [5:0]    _zz_shift_q_map_port_44;
  wire       [5:0]    _zz_shift_q_3_5;
  wire       [5:0]    _zz_shift_i_map_port_45;
  wire       [5:0]    _zz_shift_i_4_5;
  wire       [5:0]    _zz_shift_q_map_port_45;
  wire       [5:0]    _zz_shift_q_4_5;
  wire       [5:0]    _zz_shift_i_map_port_46;
  wire       [5:0]    _zz_shift_i_5_5;
  wire       [5:0]    _zz_shift_q_map_port_46;
  wire       [5:0]    _zz_shift_q_5_5;
  wire       [5:0]    _zz_shift_i_map_port_47;
  wire       [5:0]    _zz_shift_i_6_5;
  wire       [5:0]    _zz_shift_q_map_port_47;
  wire       [5:0]    _zz_shift_q_6_5;
  wire       [5:0]    _zz_shift_i_map_port_48;
  wire       [5:0]    _zz_shift_i_7_5;
  wire       [5:0]    _zz_shift_q_map_port_48;
  wire       [5:0]    _zz_shift_q_7_5;
  wire       [5:0]    _zz_shift_i_map_port_49;
  wire       [5:0]    _zz_shift_i_0_6;
  wire       [5:0]    _zz_shift_q_map_port_49;
  wire       [5:0]    _zz_shift_q_0_6;
  wire       [5:0]    _zz_shift_i_map_port_50;
  wire       [5:0]    _zz_shift_i_1_6;
  wire       [5:0]    _zz_shift_q_map_port_50;
  wire       [5:0]    _zz_shift_q_1_6;
  wire       [5:0]    _zz_shift_i_map_port_51;
  wire       [5:0]    _zz_shift_i_2_6;
  wire       [5:0]    _zz_shift_q_map_port_51;
  wire       [5:0]    _zz_shift_q_2_6;
  wire       [5:0]    _zz_shift_i_map_port_52;
  wire       [5:0]    _zz_shift_i_3_6;
  wire       [5:0]    _zz_shift_q_map_port_52;
  wire       [5:0]    _zz_shift_q_3_6;
  wire       [5:0]    _zz_shift_i_map_port_53;
  wire       [5:0]    _zz_shift_i_4_6;
  wire       [5:0]    _zz_shift_q_map_port_53;
  wire       [5:0]    _zz_shift_q_4_6;
  wire       [5:0]    _zz_shift_i_map_port_54;
  wire       [5:0]    _zz_shift_i_5_6;
  wire       [5:0]    _zz_shift_q_map_port_54;
  wire       [5:0]    _zz_shift_q_5_6;
  wire       [5:0]    _zz_shift_i_map_port_55;
  wire       [5:0]    _zz_shift_i_6_6;
  wire       [5:0]    _zz_shift_q_map_port_55;
  wire       [5:0]    _zz_shift_q_6_6;
  wire       [5:0]    _zz_shift_i_map_port_56;
  wire       [5:0]    _zz_shift_i_7_6;
  wire       [5:0]    _zz_shift_q_map_port_56;
  wire       [5:0]    _zz_shift_q_7_6;
  wire       [5:0]    _zz_shift_i_map_port_57;
  wire       [5:0]    _zz_shift_i_0_7;
  wire       [5:0]    _zz_shift_q_map_port_57;
  wire       [5:0]    _zz_shift_q_0_7;
  wire       [5:0]    _zz_shift_i_map_port_58;
  wire       [5:0]    _zz_shift_i_1_7;
  wire       [5:0]    _zz_shift_q_map_port_58;
  wire       [5:0]    _zz_shift_q_1_7;
  wire       [5:0]    _zz_shift_i_map_port_59;
  wire       [5:0]    _zz_shift_i_2_7;
  wire       [5:0]    _zz_shift_q_map_port_59;
  wire       [5:0]    _zz_shift_q_2_7;
  wire       [5:0]    _zz_shift_i_map_port_60;
  wire       [5:0]    _zz_shift_i_3_7;
  wire       [5:0]    _zz_shift_q_map_port_60;
  wire       [5:0]    _zz_shift_q_3_7;
  wire       [5:0]    _zz_shift_i_map_port_61;
  wire       [5:0]    _zz_shift_i_4_7;
  wire       [5:0]    _zz_shift_q_map_port_61;
  wire       [5:0]    _zz_shift_q_4_7;
  wire       [5:0]    _zz_shift_i_map_port_62;
  wire       [5:0]    _zz_shift_i_5_7;
  wire       [5:0]    _zz_shift_q_map_port_62;
  wire       [5:0]    _zz_shift_q_5_7;
  wire       [5:0]    _zz_shift_i_map_port_63;
  wire       [5:0]    _zz_shift_i_6_7;
  wire       [5:0]    _zz_shift_q_map_port_63;
  wire       [5:0]    _zz_shift_q_6_7;
  wire       [5:0]    _zz_shift_i_map_port_64;
  wire       [5:0]    _zz_shift_i_7_7;
  wire       [5:0]    _zz_shift_q_map_port_64;
  wire       [5:0]    _zz_shift_q_7_7;
  reg                 _zz_1;
  reg                 _zz_2;
  wire       [31:0]   mod_sub_iqs_vec_0_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_0_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_1_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_1_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_2_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_2_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_3_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_3_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_4_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_4_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_5_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_5_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_6_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_6_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_7_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_7_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_8_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_8_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_9_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_9_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_10_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_10_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_11_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_11_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_12_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_12_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_13_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_13_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_14_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_14_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_15_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_15_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_16_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_16_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_17_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_17_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_18_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_18_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_19_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_19_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_20_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_20_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_21_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_21_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_22_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_22_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_23_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_23_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_24_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_24_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_25_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_25_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_26_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_26_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_27_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_27_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_28_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_28_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_29_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_29_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_30_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_30_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_31_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_31_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_32_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_32_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_33_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_33_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_34_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_34_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_35_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_35_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_36_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_36_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_37_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_37_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_38_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_38_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_39_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_39_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_40_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_40_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_41_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_41_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_42_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_42_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_43_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_43_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_44_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_44_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_45_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_45_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_46_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_46_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_47_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_47_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_48_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_48_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_49_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_49_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_50_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_50_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_51_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_51_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_52_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_52_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_53_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_53_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_54_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_54_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_55_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_55_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_56_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_56_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_57_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_57_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_58_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_58_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_59_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_59_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_60_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_60_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_61_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_61_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_62_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_62_cha_q;
  wire       [31:0]   mod_sub_iqs_vec_63_cha_i;
  wire       [31:0]   mod_sub_iqs_vec_63_cha_q;
  wire                mod_sub_valid_vec_0;
  wire                mod_sub_valid_vec_1;
  wire                mod_sub_valid_vec_2;
  wire                mod_sub_valid_vec_3;
  wire                mod_sub_valid_vec_4;
  wire                mod_sub_valid_vec_5;
  wire                mod_sub_valid_vec_6;
  wire                mod_sub_valid_vec_7;
  wire                mod_sub_valid_vec_8;
  wire                mod_sub_valid_vec_9;
  wire                mod_sub_valid_vec_10;
  wire                mod_sub_valid_vec_11;
  wire                mod_sub_valid_vec_12;
  wire                mod_sub_valid_vec_13;
  wire                mod_sub_valid_vec_14;
  wire                mod_sub_valid_vec_15;
  wire                mod_sub_valid_vec_16;
  wire                mod_sub_valid_vec_17;
  wire                mod_sub_valid_vec_18;
  wire                mod_sub_valid_vec_19;
  wire                mod_sub_valid_vec_20;
  wire                mod_sub_valid_vec_21;
  wire                mod_sub_valid_vec_22;
  wire                mod_sub_valid_vec_23;
  wire                mod_sub_valid_vec_24;
  wire                mod_sub_valid_vec_25;
  wire                mod_sub_valid_vec_26;
  wire                mod_sub_valid_vec_27;
  wire                mod_sub_valid_vec_28;
  wire                mod_sub_valid_vec_29;
  wire                mod_sub_valid_vec_30;
  wire                mod_sub_valid_vec_31;
  wire                mod_sub_valid_vec_32;
  wire                mod_sub_valid_vec_33;
  wire                mod_sub_valid_vec_34;
  wire                mod_sub_valid_vec_35;
  wire                mod_sub_valid_vec_36;
  wire                mod_sub_valid_vec_37;
  wire                mod_sub_valid_vec_38;
  wire                mod_sub_valid_vec_39;
  wire                mod_sub_valid_vec_40;
  wire                mod_sub_valid_vec_41;
  wire                mod_sub_valid_vec_42;
  wire                mod_sub_valid_vec_43;
  wire                mod_sub_valid_vec_44;
  wire                mod_sub_valid_vec_45;
  wire                mod_sub_valid_vec_46;
  wire                mod_sub_valid_vec_47;
  wire                mod_sub_valid_vec_48;
  wire                mod_sub_valid_vec_49;
  wire                mod_sub_valid_vec_50;
  wire                mod_sub_valid_vec_51;
  wire                mod_sub_valid_vec_52;
  wire                mod_sub_valid_vec_53;
  wire                mod_sub_valid_vec_54;
  wire                mod_sub_valid_vec_55;
  wire                mod_sub_valid_vec_56;
  wire                mod_sub_valid_vec_57;
  wire                mod_sub_valid_vec_58;
  wire                mod_sub_valid_vec_59;
  wire                mod_sub_valid_vec_60;
  wire                mod_sub_valid_vec_61;
  wire                mod_sub_valid_vec_62;
  wire                mod_sub_valid_vec_63;
  wire                mod_iq_valid_vec_0;
  wire                mod_iq_valid_vec_1;
  wire                mod_iq_valid_vec_2;
  wire                mod_iq_valid_vec_3;
  wire                mod_iq_valid_vec_4;
  wire                mod_iq_valid_vec_5;
  wire                mod_iq_valid_vec_6;
  wire                mod_iq_valid_vec_7;
  (* ram_style = "distributed" *) reg [15:0] shift_i_map [0:63];
  (* ram_style = "distributed" *) reg [15:0] shift_q_map [0:63];

  assign _zz_shift_i_map_port = w_data;
  assign _zz_shift_i_0 = 6'h0;
  assign _zz_shift_i_1 = 6'h01;
  assign _zz_shift_i_2 = 6'h02;
  assign _zz_shift_i_3 = 6'h03;
  assign _zz_shift_i_4 = 6'h04;
  assign _zz_shift_i_5 = 6'h05;
  assign _zz_shift_i_6 = 6'h06;
  assign _zz_shift_i_7 = 6'h07;
  assign _zz_shift_i_0_1 = 6'h08;
  assign _zz_shift_i_1_1 = 6'h09;
  assign _zz_shift_i_2_1 = 6'h0a;
  assign _zz_shift_i_3_1 = 6'h0b;
  assign _zz_shift_i_4_1 = 6'h0c;
  assign _zz_shift_i_5_1 = 6'h0d;
  assign _zz_shift_i_6_1 = 6'h0e;
  assign _zz_shift_i_7_1 = 6'h0f;
  assign _zz_shift_i_0_2 = 6'h10;
  assign _zz_shift_i_1_2 = 6'h11;
  assign _zz_shift_i_2_2 = 6'h12;
  assign _zz_shift_i_3_2 = 6'h13;
  assign _zz_shift_i_4_2 = 6'h14;
  assign _zz_shift_i_5_2 = 6'h15;
  assign _zz_shift_i_6_2 = 6'h16;
  assign _zz_shift_i_7_2 = 6'h17;
  assign _zz_shift_i_0_3 = 6'h18;
  assign _zz_shift_i_1_3 = 6'h19;
  assign _zz_shift_i_2_3 = 6'h1a;
  assign _zz_shift_i_3_3 = 6'h1b;
  assign _zz_shift_i_4_3 = 6'h1c;
  assign _zz_shift_i_5_3 = 6'h1d;
  assign _zz_shift_i_6_3 = 6'h1e;
  assign _zz_shift_i_7_3 = 6'h1f;
  assign _zz_shift_i_0_4 = 6'h20;
  assign _zz_shift_i_1_4 = 6'h21;
  assign _zz_shift_i_2_4 = 6'h22;
  assign _zz_shift_i_3_4 = 6'h23;
  assign _zz_shift_i_4_4 = 6'h24;
  assign _zz_shift_i_5_4 = 6'h25;
  assign _zz_shift_i_6_4 = 6'h26;
  assign _zz_shift_i_7_4 = 6'h27;
  assign _zz_shift_i_0_5 = 6'h28;
  assign _zz_shift_i_1_5 = 6'h29;
  assign _zz_shift_i_2_5 = 6'h2a;
  assign _zz_shift_i_3_5 = 6'h2b;
  assign _zz_shift_i_4_5 = 6'h2c;
  assign _zz_shift_i_5_5 = 6'h2d;
  assign _zz_shift_i_6_5 = 6'h2e;
  assign _zz_shift_i_7_5 = 6'h2f;
  assign _zz_shift_i_0_6 = 6'h30;
  assign _zz_shift_i_1_6 = 6'h31;
  assign _zz_shift_i_2_6 = 6'h32;
  assign _zz_shift_i_3_6 = 6'h33;
  assign _zz_shift_i_4_6 = 6'h34;
  assign _zz_shift_i_5_6 = 6'h35;
  assign _zz_shift_i_6_6 = 6'h36;
  assign _zz_shift_i_7_6 = 6'h37;
  assign _zz_shift_i_0_7 = 6'h38;
  assign _zz_shift_i_1_7 = 6'h39;
  assign _zz_shift_i_2_7 = 6'h3a;
  assign _zz_shift_i_3_7 = 6'h3b;
  assign _zz_shift_i_4_7 = 6'h3c;
  assign _zz_shift_i_5_7 = 6'h3d;
  assign _zz_shift_i_6_7 = 6'h3e;
  assign _zz_shift_i_7_7 = 6'h3f;
  assign _zz_shift_q_map_port = w_data;
  assign _zz_shift_q_0 = 6'h0;
  assign _zz_shift_q_1 = 6'h01;
  assign _zz_shift_q_2 = 6'h02;
  assign _zz_shift_q_3 = 6'h03;
  assign _zz_shift_q_4 = 6'h04;
  assign _zz_shift_q_5 = 6'h05;
  assign _zz_shift_q_6 = 6'h06;
  assign _zz_shift_q_7 = 6'h07;
  assign _zz_shift_q_0_1 = 6'h08;
  assign _zz_shift_q_1_1 = 6'h09;
  assign _zz_shift_q_2_1 = 6'h0a;
  assign _zz_shift_q_3_1 = 6'h0b;
  assign _zz_shift_q_4_1 = 6'h0c;
  assign _zz_shift_q_5_1 = 6'h0d;
  assign _zz_shift_q_6_1 = 6'h0e;
  assign _zz_shift_q_7_1 = 6'h0f;
  assign _zz_shift_q_0_2 = 6'h10;
  assign _zz_shift_q_1_2 = 6'h11;
  assign _zz_shift_q_2_2 = 6'h12;
  assign _zz_shift_q_3_2 = 6'h13;
  assign _zz_shift_q_4_2 = 6'h14;
  assign _zz_shift_q_5_2 = 6'h15;
  assign _zz_shift_q_6_2 = 6'h16;
  assign _zz_shift_q_7_2 = 6'h17;
  assign _zz_shift_q_0_3 = 6'h18;
  assign _zz_shift_q_1_3 = 6'h19;
  assign _zz_shift_q_2_3 = 6'h1a;
  assign _zz_shift_q_3_3 = 6'h1b;
  assign _zz_shift_q_4_3 = 6'h1c;
  assign _zz_shift_q_5_3 = 6'h1d;
  assign _zz_shift_q_6_3 = 6'h1e;
  assign _zz_shift_q_7_3 = 6'h1f;
  assign _zz_shift_q_0_4 = 6'h20;
  assign _zz_shift_q_1_4 = 6'h21;
  assign _zz_shift_q_2_4 = 6'h22;
  assign _zz_shift_q_3_4 = 6'h23;
  assign _zz_shift_q_4_4 = 6'h24;
  assign _zz_shift_q_5_4 = 6'h25;
  assign _zz_shift_q_6_4 = 6'h26;
  assign _zz_shift_q_7_4 = 6'h27;
  assign _zz_shift_q_0_5 = 6'h28;
  assign _zz_shift_q_1_5 = 6'h29;
  assign _zz_shift_q_2_5 = 6'h2a;
  assign _zz_shift_q_3_5 = 6'h2b;
  assign _zz_shift_q_4_5 = 6'h2c;
  assign _zz_shift_q_5_5 = 6'h2d;
  assign _zz_shift_q_6_5 = 6'h2e;
  assign _zz_shift_q_7_5 = 6'h2f;
  assign _zz_shift_q_0_6 = 6'h30;
  assign _zz_shift_q_1_6 = 6'h31;
  assign _zz_shift_q_2_6 = 6'h32;
  assign _zz_shift_q_3_6 = 6'h33;
  assign _zz_shift_q_4_6 = 6'h34;
  assign _zz_shift_q_5_6 = 6'h35;
  assign _zz_shift_q_6_6 = 6'h36;
  assign _zz_shift_q_7_6 = 6'h37;
  assign _zz_shift_q_0_7 = 6'h38;
  assign _zz_shift_q_1_7 = 6'h39;
  assign _zz_shift_q_2_7 = 6'h3a;
  assign _zz_shift_q_3_7 = 6'h3b;
  assign _zz_shift_q_4_7 = 6'h3c;
  assign _zz_shift_q_5_7 = 6'h3d;
  assign _zz_shift_q_6_7 = 6'h3e;
  assign _zz_shift_q_7_7 = 6'h3f;
  always @(posedge rf_clk) begin
    if(_zz_2) begin
      shift_i_map[w_addr] <= _zz_shift_i_map_port;
    end
  end

  assign _zz_shift_i_map_port1 = shift_i_map[_zz_shift_i_0];
  assign _zz_shift_i_map_port2 = shift_i_map[_zz_shift_i_1];
  assign _zz_shift_i_map_port3 = shift_i_map[_zz_shift_i_2];
  assign _zz_shift_i_map_port4 = shift_i_map[_zz_shift_i_3];
  assign _zz_shift_i_map_port5 = shift_i_map[_zz_shift_i_4];
  assign _zz_shift_i_map_port6 = shift_i_map[_zz_shift_i_5];
  assign _zz_shift_i_map_port7 = shift_i_map[_zz_shift_i_6];
  assign _zz_shift_i_map_port8 = shift_i_map[_zz_shift_i_7];
  assign _zz_shift_i_map_port9 = shift_i_map[_zz_shift_i_0_1];
  assign _zz_shift_i_map_port10 = shift_i_map[_zz_shift_i_1_1];
  assign _zz_shift_i_map_port11 = shift_i_map[_zz_shift_i_2_1];
  assign _zz_shift_i_map_port12 = shift_i_map[_zz_shift_i_3_1];
  assign _zz_shift_i_map_port13 = shift_i_map[_zz_shift_i_4_1];
  assign _zz_shift_i_map_port14 = shift_i_map[_zz_shift_i_5_1];
  assign _zz_shift_i_map_port15 = shift_i_map[_zz_shift_i_6_1];
  assign _zz_shift_i_map_port16 = shift_i_map[_zz_shift_i_7_1];
  assign _zz_shift_i_map_port17 = shift_i_map[_zz_shift_i_0_2];
  assign _zz_shift_i_map_port18 = shift_i_map[_zz_shift_i_1_2];
  assign _zz_shift_i_map_port19 = shift_i_map[_zz_shift_i_2_2];
  assign _zz_shift_i_map_port20 = shift_i_map[_zz_shift_i_3_2];
  assign _zz_shift_i_map_port21 = shift_i_map[_zz_shift_i_4_2];
  assign _zz_shift_i_map_port22 = shift_i_map[_zz_shift_i_5_2];
  assign _zz_shift_i_map_port23 = shift_i_map[_zz_shift_i_6_2];
  assign _zz_shift_i_map_port24 = shift_i_map[_zz_shift_i_7_2];
  assign _zz_shift_i_map_port25 = shift_i_map[_zz_shift_i_0_3];
  assign _zz_shift_i_map_port26 = shift_i_map[_zz_shift_i_1_3];
  assign _zz_shift_i_map_port27 = shift_i_map[_zz_shift_i_2_3];
  assign _zz_shift_i_map_port28 = shift_i_map[_zz_shift_i_3_3];
  assign _zz_shift_i_map_port29 = shift_i_map[_zz_shift_i_4_3];
  assign _zz_shift_i_map_port30 = shift_i_map[_zz_shift_i_5_3];
  assign _zz_shift_i_map_port31 = shift_i_map[_zz_shift_i_6_3];
  assign _zz_shift_i_map_port32 = shift_i_map[_zz_shift_i_7_3];
  assign _zz_shift_i_map_port33 = shift_i_map[_zz_shift_i_0_4];
  assign _zz_shift_i_map_port34 = shift_i_map[_zz_shift_i_1_4];
  assign _zz_shift_i_map_port35 = shift_i_map[_zz_shift_i_2_4];
  assign _zz_shift_i_map_port36 = shift_i_map[_zz_shift_i_3_4];
  assign _zz_shift_i_map_port37 = shift_i_map[_zz_shift_i_4_4];
  assign _zz_shift_i_map_port38 = shift_i_map[_zz_shift_i_5_4];
  assign _zz_shift_i_map_port39 = shift_i_map[_zz_shift_i_6_4];
  assign _zz_shift_i_map_port40 = shift_i_map[_zz_shift_i_7_4];
  assign _zz_shift_i_map_port41 = shift_i_map[_zz_shift_i_0_5];
  assign _zz_shift_i_map_port42 = shift_i_map[_zz_shift_i_1_5];
  assign _zz_shift_i_map_port43 = shift_i_map[_zz_shift_i_2_5];
  assign _zz_shift_i_map_port44 = shift_i_map[_zz_shift_i_3_5];
  assign _zz_shift_i_map_port45 = shift_i_map[_zz_shift_i_4_5];
  assign _zz_shift_i_map_port46 = shift_i_map[_zz_shift_i_5_5];
  assign _zz_shift_i_map_port47 = shift_i_map[_zz_shift_i_6_5];
  assign _zz_shift_i_map_port48 = shift_i_map[_zz_shift_i_7_5];
  assign _zz_shift_i_map_port49 = shift_i_map[_zz_shift_i_0_6];
  assign _zz_shift_i_map_port50 = shift_i_map[_zz_shift_i_1_6];
  assign _zz_shift_i_map_port51 = shift_i_map[_zz_shift_i_2_6];
  assign _zz_shift_i_map_port52 = shift_i_map[_zz_shift_i_3_6];
  assign _zz_shift_i_map_port53 = shift_i_map[_zz_shift_i_4_6];
  assign _zz_shift_i_map_port54 = shift_i_map[_zz_shift_i_5_6];
  assign _zz_shift_i_map_port55 = shift_i_map[_zz_shift_i_6_6];
  assign _zz_shift_i_map_port56 = shift_i_map[_zz_shift_i_7_6];
  assign _zz_shift_i_map_port57 = shift_i_map[_zz_shift_i_0_7];
  assign _zz_shift_i_map_port58 = shift_i_map[_zz_shift_i_1_7];
  assign _zz_shift_i_map_port59 = shift_i_map[_zz_shift_i_2_7];
  assign _zz_shift_i_map_port60 = shift_i_map[_zz_shift_i_3_7];
  assign _zz_shift_i_map_port61 = shift_i_map[_zz_shift_i_4_7];
  assign _zz_shift_i_map_port62 = shift_i_map[_zz_shift_i_5_7];
  assign _zz_shift_i_map_port63 = shift_i_map[_zz_shift_i_6_7];
  assign _zz_shift_i_map_port64 = shift_i_map[_zz_shift_i_7_7];
  always @(posedge rf_clk) begin
    if(_zz_1) begin
      shift_q_map[w_addr] <= _zz_shift_q_map_port;
    end
  end

  assign _zz_shift_q_map_port1 = shift_q_map[_zz_shift_q_0];
  assign _zz_shift_q_map_port2 = shift_q_map[_zz_shift_q_1];
  assign _zz_shift_q_map_port3 = shift_q_map[_zz_shift_q_2];
  assign _zz_shift_q_map_port4 = shift_q_map[_zz_shift_q_3];
  assign _zz_shift_q_map_port5 = shift_q_map[_zz_shift_q_4];
  assign _zz_shift_q_map_port6 = shift_q_map[_zz_shift_q_5];
  assign _zz_shift_q_map_port7 = shift_q_map[_zz_shift_q_6];
  assign _zz_shift_q_map_port8 = shift_q_map[_zz_shift_q_7];
  assign _zz_shift_q_map_port9 = shift_q_map[_zz_shift_q_0_1];
  assign _zz_shift_q_map_port10 = shift_q_map[_zz_shift_q_1_1];
  assign _zz_shift_q_map_port11 = shift_q_map[_zz_shift_q_2_1];
  assign _zz_shift_q_map_port12 = shift_q_map[_zz_shift_q_3_1];
  assign _zz_shift_q_map_port13 = shift_q_map[_zz_shift_q_4_1];
  assign _zz_shift_q_map_port14 = shift_q_map[_zz_shift_q_5_1];
  assign _zz_shift_q_map_port15 = shift_q_map[_zz_shift_q_6_1];
  assign _zz_shift_q_map_port16 = shift_q_map[_zz_shift_q_7_1];
  assign _zz_shift_q_map_port17 = shift_q_map[_zz_shift_q_0_2];
  assign _zz_shift_q_map_port18 = shift_q_map[_zz_shift_q_1_2];
  assign _zz_shift_q_map_port19 = shift_q_map[_zz_shift_q_2_2];
  assign _zz_shift_q_map_port20 = shift_q_map[_zz_shift_q_3_2];
  assign _zz_shift_q_map_port21 = shift_q_map[_zz_shift_q_4_2];
  assign _zz_shift_q_map_port22 = shift_q_map[_zz_shift_q_5_2];
  assign _zz_shift_q_map_port23 = shift_q_map[_zz_shift_q_6_2];
  assign _zz_shift_q_map_port24 = shift_q_map[_zz_shift_q_7_2];
  assign _zz_shift_q_map_port25 = shift_q_map[_zz_shift_q_0_3];
  assign _zz_shift_q_map_port26 = shift_q_map[_zz_shift_q_1_3];
  assign _zz_shift_q_map_port27 = shift_q_map[_zz_shift_q_2_3];
  assign _zz_shift_q_map_port28 = shift_q_map[_zz_shift_q_3_3];
  assign _zz_shift_q_map_port29 = shift_q_map[_zz_shift_q_4_3];
  assign _zz_shift_q_map_port30 = shift_q_map[_zz_shift_q_5_3];
  assign _zz_shift_q_map_port31 = shift_q_map[_zz_shift_q_6_3];
  assign _zz_shift_q_map_port32 = shift_q_map[_zz_shift_q_7_3];
  assign _zz_shift_q_map_port33 = shift_q_map[_zz_shift_q_0_4];
  assign _zz_shift_q_map_port34 = shift_q_map[_zz_shift_q_1_4];
  assign _zz_shift_q_map_port35 = shift_q_map[_zz_shift_q_2_4];
  assign _zz_shift_q_map_port36 = shift_q_map[_zz_shift_q_3_4];
  assign _zz_shift_q_map_port37 = shift_q_map[_zz_shift_q_4_4];
  assign _zz_shift_q_map_port38 = shift_q_map[_zz_shift_q_5_4];
  assign _zz_shift_q_map_port39 = shift_q_map[_zz_shift_q_6_4];
  assign _zz_shift_q_map_port40 = shift_q_map[_zz_shift_q_7_4];
  assign _zz_shift_q_map_port41 = shift_q_map[_zz_shift_q_0_5];
  assign _zz_shift_q_map_port42 = shift_q_map[_zz_shift_q_1_5];
  assign _zz_shift_q_map_port43 = shift_q_map[_zz_shift_q_2_5];
  assign _zz_shift_q_map_port44 = shift_q_map[_zz_shift_q_3_5];
  assign _zz_shift_q_map_port45 = shift_q_map[_zz_shift_q_4_5];
  assign _zz_shift_q_map_port46 = shift_q_map[_zz_shift_q_5_5];
  assign _zz_shift_q_map_port47 = shift_q_map[_zz_shift_q_6_5];
  assign _zz_shift_q_map_port48 = shift_q_map[_zz_shift_q_7_5];
  assign _zz_shift_q_map_port49 = shift_q_map[_zz_shift_q_0_6];
  assign _zz_shift_q_map_port50 = shift_q_map[_zz_shift_q_1_6];
  assign _zz_shift_q_map_port51 = shift_q_map[_zz_shift_q_2_6];
  assign _zz_shift_q_map_port52 = shift_q_map[_zz_shift_q_3_6];
  assign _zz_shift_q_map_port53 = shift_q_map[_zz_shift_q_4_6];
  assign _zz_shift_q_map_port54 = shift_q_map[_zz_shift_q_5_6];
  assign _zz_shift_q_map_port55 = shift_q_map[_zz_shift_q_6_6];
  assign _zz_shift_q_map_port56 = shift_q_map[_zz_shift_q_7_6];
  assign _zz_shift_q_map_port57 = shift_q_map[_zz_shift_q_0_7];
  assign _zz_shift_q_map_port58 = shift_q_map[_zz_shift_q_1_7];
  assign _zz_shift_q_map_port59 = shift_q_map[_zz_shift_q_2_7];
  assign _zz_shift_q_map_port60 = shift_q_map[_zz_shift_q_3_7];
  assign _zz_shift_q_map_port61 = shift_q_map[_zz_shift_q_4_7];
  assign _zz_shift_q_map_port62 = shift_q_map[_zz_shift_q_5_7];
  assign _zz_shift_q_map_port63 = shift_q_map[_zz_shift_q_6_7];
  assign _zz_shift_q_map_port64 = shift_q_map[_zz_shift_q_7_7];
  OAMSpin oAMSpin_8 (
    .shift_i_0                      (oAMSpin_8_shift_i_0                    ), //i
    .shift_i_1                      (oAMSpin_8_shift_i_1                    ), //i
    .shift_i_2                      (oAMSpin_8_shift_i_2                    ), //i
    .shift_i_3                      (oAMSpin_8_shift_i_3                    ), //i
    .shift_i_4                      (oAMSpin_8_shift_i_4                    ), //i
    .shift_i_5                      (oAMSpin_8_shift_i_5                    ), //i
    .shift_i_6                      (oAMSpin_8_shift_i_6                    ), //i
    .shift_i_7                      (oAMSpin_8_shift_i_7                    ), //i
    .shift_q_0                      (oAMSpin_8_shift_q_0                    ), //i
    .shift_q_1                      (oAMSpin_8_shift_q_1                    ), //i
    .shift_q_2                      (oAMSpin_8_shift_q_2                    ), //i
    .shift_q_3                      (oAMSpin_8_shift_q_3                    ), //i
    .shift_q_4                      (oAMSpin_8_shift_q_4                    ), //i
    .shift_q_5                      (oAMSpin_8_shift_q_5                    ), //i
    .shift_q_6                      (oAMSpin_8_shift_q_6                    ), //i
    .shift_q_7                      (oAMSpin_8_shift_q_7                    ), //i
    .base_iq_valid                  (base_iqs_valid                         ), //i
    .base_iq_payload_cha_i          (base_iqs_payload_0_cha_i               ), //i
    .base_iq_payload_cha_q          (base_iqs_payload_0_cha_q               ), //i
    .mod_sub_iqs_valid              (oAMSpin_8_mod_sub_iqs_valid            ), //o
    .mod_sub_iqs_payload_0_cha_i    (oAMSpin_8_mod_sub_iqs_payload_0_cha_i  ), //o
    .mod_sub_iqs_payload_0_cha_q    (oAMSpin_8_mod_sub_iqs_payload_0_cha_q  ), //o
    .mod_sub_iqs_payload_1_cha_i    (oAMSpin_8_mod_sub_iqs_payload_1_cha_i  ), //o
    .mod_sub_iqs_payload_1_cha_q    (oAMSpin_8_mod_sub_iqs_payload_1_cha_q  ), //o
    .mod_sub_iqs_payload_2_cha_i    (oAMSpin_8_mod_sub_iqs_payload_2_cha_i  ), //o
    .mod_sub_iqs_payload_2_cha_q    (oAMSpin_8_mod_sub_iqs_payload_2_cha_q  ), //o
    .mod_sub_iqs_payload_3_cha_i    (oAMSpin_8_mod_sub_iqs_payload_3_cha_i  ), //o
    .mod_sub_iqs_payload_3_cha_q    (oAMSpin_8_mod_sub_iqs_payload_3_cha_q  ), //o
    .mod_sub_iqs_payload_4_cha_i    (oAMSpin_8_mod_sub_iqs_payload_4_cha_i  ), //o
    .mod_sub_iqs_payload_4_cha_q    (oAMSpin_8_mod_sub_iqs_payload_4_cha_q  ), //o
    .mod_sub_iqs_payload_5_cha_i    (oAMSpin_8_mod_sub_iqs_payload_5_cha_i  ), //o
    .mod_sub_iqs_payload_5_cha_q    (oAMSpin_8_mod_sub_iqs_payload_5_cha_q  ), //o
    .mod_sub_iqs_payload_6_cha_i    (oAMSpin_8_mod_sub_iqs_payload_6_cha_i  ), //o
    .mod_sub_iqs_payload_6_cha_q    (oAMSpin_8_mod_sub_iqs_payload_6_cha_q  ), //o
    .mod_sub_iqs_payload_7_cha_i    (oAMSpin_8_mod_sub_iqs_payload_7_cha_i  ), //o
    .mod_sub_iqs_payload_7_cha_q    (oAMSpin_8_mod_sub_iqs_payload_7_cha_q  ), //o
    .rf_clk                         (rf_clk                                 ), //i
    .rf_resetn                      (rf_resetn                              )  //i
  );
  OAMSpin oAMSpin_9 (
    .shift_i_0                      (oAMSpin_9_shift_i_0                    ), //i
    .shift_i_1                      (oAMSpin_9_shift_i_1                    ), //i
    .shift_i_2                      (oAMSpin_9_shift_i_2                    ), //i
    .shift_i_3                      (oAMSpin_9_shift_i_3                    ), //i
    .shift_i_4                      (oAMSpin_9_shift_i_4                    ), //i
    .shift_i_5                      (oAMSpin_9_shift_i_5                    ), //i
    .shift_i_6                      (oAMSpin_9_shift_i_6                    ), //i
    .shift_i_7                      (oAMSpin_9_shift_i_7                    ), //i
    .shift_q_0                      (oAMSpin_9_shift_q_0                    ), //i
    .shift_q_1                      (oAMSpin_9_shift_q_1                    ), //i
    .shift_q_2                      (oAMSpin_9_shift_q_2                    ), //i
    .shift_q_3                      (oAMSpin_9_shift_q_3                    ), //i
    .shift_q_4                      (oAMSpin_9_shift_q_4                    ), //i
    .shift_q_5                      (oAMSpin_9_shift_q_5                    ), //i
    .shift_q_6                      (oAMSpin_9_shift_q_6                    ), //i
    .shift_q_7                      (oAMSpin_9_shift_q_7                    ), //i
    .base_iq_valid                  (base_iqs_valid                         ), //i
    .base_iq_payload_cha_i          (base_iqs_payload_1_cha_i               ), //i
    .base_iq_payload_cha_q          (base_iqs_payload_1_cha_q               ), //i
    .mod_sub_iqs_valid              (oAMSpin_9_mod_sub_iqs_valid            ), //o
    .mod_sub_iqs_payload_0_cha_i    (oAMSpin_9_mod_sub_iqs_payload_0_cha_i  ), //o
    .mod_sub_iqs_payload_0_cha_q    (oAMSpin_9_mod_sub_iqs_payload_0_cha_q  ), //o
    .mod_sub_iqs_payload_1_cha_i    (oAMSpin_9_mod_sub_iqs_payload_1_cha_i  ), //o
    .mod_sub_iqs_payload_1_cha_q    (oAMSpin_9_mod_sub_iqs_payload_1_cha_q  ), //o
    .mod_sub_iqs_payload_2_cha_i    (oAMSpin_9_mod_sub_iqs_payload_2_cha_i  ), //o
    .mod_sub_iqs_payload_2_cha_q    (oAMSpin_9_mod_sub_iqs_payload_2_cha_q  ), //o
    .mod_sub_iqs_payload_3_cha_i    (oAMSpin_9_mod_sub_iqs_payload_3_cha_i  ), //o
    .mod_sub_iqs_payload_3_cha_q    (oAMSpin_9_mod_sub_iqs_payload_3_cha_q  ), //o
    .mod_sub_iqs_payload_4_cha_i    (oAMSpin_9_mod_sub_iqs_payload_4_cha_i  ), //o
    .mod_sub_iqs_payload_4_cha_q    (oAMSpin_9_mod_sub_iqs_payload_4_cha_q  ), //o
    .mod_sub_iqs_payload_5_cha_i    (oAMSpin_9_mod_sub_iqs_payload_5_cha_i  ), //o
    .mod_sub_iqs_payload_5_cha_q    (oAMSpin_9_mod_sub_iqs_payload_5_cha_q  ), //o
    .mod_sub_iqs_payload_6_cha_i    (oAMSpin_9_mod_sub_iqs_payload_6_cha_i  ), //o
    .mod_sub_iqs_payload_6_cha_q    (oAMSpin_9_mod_sub_iqs_payload_6_cha_q  ), //o
    .mod_sub_iqs_payload_7_cha_i    (oAMSpin_9_mod_sub_iqs_payload_7_cha_i  ), //o
    .mod_sub_iqs_payload_7_cha_q    (oAMSpin_9_mod_sub_iqs_payload_7_cha_q  ), //o
    .rf_clk                         (rf_clk                                 ), //i
    .rf_resetn                      (rf_resetn                              )  //i
  );
  OAMSpin oAMSpin_10 (
    .shift_i_0                      (oAMSpin_10_shift_i_0                    ), //i
    .shift_i_1                      (oAMSpin_10_shift_i_1                    ), //i
    .shift_i_2                      (oAMSpin_10_shift_i_2                    ), //i
    .shift_i_3                      (oAMSpin_10_shift_i_3                    ), //i
    .shift_i_4                      (oAMSpin_10_shift_i_4                    ), //i
    .shift_i_5                      (oAMSpin_10_shift_i_5                    ), //i
    .shift_i_6                      (oAMSpin_10_shift_i_6                    ), //i
    .shift_i_7                      (oAMSpin_10_shift_i_7                    ), //i
    .shift_q_0                      (oAMSpin_10_shift_q_0                    ), //i
    .shift_q_1                      (oAMSpin_10_shift_q_1                    ), //i
    .shift_q_2                      (oAMSpin_10_shift_q_2                    ), //i
    .shift_q_3                      (oAMSpin_10_shift_q_3                    ), //i
    .shift_q_4                      (oAMSpin_10_shift_q_4                    ), //i
    .shift_q_5                      (oAMSpin_10_shift_q_5                    ), //i
    .shift_q_6                      (oAMSpin_10_shift_q_6                    ), //i
    .shift_q_7                      (oAMSpin_10_shift_q_7                    ), //i
    .base_iq_valid                  (base_iqs_valid                          ), //i
    .base_iq_payload_cha_i          (base_iqs_payload_2_cha_i                ), //i
    .base_iq_payload_cha_q          (base_iqs_payload_2_cha_q                ), //i
    .mod_sub_iqs_valid              (oAMSpin_10_mod_sub_iqs_valid            ), //o
    .mod_sub_iqs_payload_0_cha_i    (oAMSpin_10_mod_sub_iqs_payload_0_cha_i  ), //o
    .mod_sub_iqs_payload_0_cha_q    (oAMSpin_10_mod_sub_iqs_payload_0_cha_q  ), //o
    .mod_sub_iqs_payload_1_cha_i    (oAMSpin_10_mod_sub_iqs_payload_1_cha_i  ), //o
    .mod_sub_iqs_payload_1_cha_q    (oAMSpin_10_mod_sub_iqs_payload_1_cha_q  ), //o
    .mod_sub_iqs_payload_2_cha_i    (oAMSpin_10_mod_sub_iqs_payload_2_cha_i  ), //o
    .mod_sub_iqs_payload_2_cha_q    (oAMSpin_10_mod_sub_iqs_payload_2_cha_q  ), //o
    .mod_sub_iqs_payload_3_cha_i    (oAMSpin_10_mod_sub_iqs_payload_3_cha_i  ), //o
    .mod_sub_iqs_payload_3_cha_q    (oAMSpin_10_mod_sub_iqs_payload_3_cha_q  ), //o
    .mod_sub_iqs_payload_4_cha_i    (oAMSpin_10_mod_sub_iqs_payload_4_cha_i  ), //o
    .mod_sub_iqs_payload_4_cha_q    (oAMSpin_10_mod_sub_iqs_payload_4_cha_q  ), //o
    .mod_sub_iqs_payload_5_cha_i    (oAMSpin_10_mod_sub_iqs_payload_5_cha_i  ), //o
    .mod_sub_iqs_payload_5_cha_q    (oAMSpin_10_mod_sub_iqs_payload_5_cha_q  ), //o
    .mod_sub_iqs_payload_6_cha_i    (oAMSpin_10_mod_sub_iqs_payload_6_cha_i  ), //o
    .mod_sub_iqs_payload_6_cha_q    (oAMSpin_10_mod_sub_iqs_payload_6_cha_q  ), //o
    .mod_sub_iqs_payload_7_cha_i    (oAMSpin_10_mod_sub_iqs_payload_7_cha_i  ), //o
    .mod_sub_iqs_payload_7_cha_q    (oAMSpin_10_mod_sub_iqs_payload_7_cha_q  ), //o
    .rf_clk                         (rf_clk                                  ), //i
    .rf_resetn                      (rf_resetn                               )  //i
  );
  OAMSpin oAMSpin_11 (
    .shift_i_0                      (oAMSpin_11_shift_i_0                    ), //i
    .shift_i_1                      (oAMSpin_11_shift_i_1                    ), //i
    .shift_i_2                      (oAMSpin_11_shift_i_2                    ), //i
    .shift_i_3                      (oAMSpin_11_shift_i_3                    ), //i
    .shift_i_4                      (oAMSpin_11_shift_i_4                    ), //i
    .shift_i_5                      (oAMSpin_11_shift_i_5                    ), //i
    .shift_i_6                      (oAMSpin_11_shift_i_6                    ), //i
    .shift_i_7                      (oAMSpin_11_shift_i_7                    ), //i
    .shift_q_0                      (oAMSpin_11_shift_q_0                    ), //i
    .shift_q_1                      (oAMSpin_11_shift_q_1                    ), //i
    .shift_q_2                      (oAMSpin_11_shift_q_2                    ), //i
    .shift_q_3                      (oAMSpin_11_shift_q_3                    ), //i
    .shift_q_4                      (oAMSpin_11_shift_q_4                    ), //i
    .shift_q_5                      (oAMSpin_11_shift_q_5                    ), //i
    .shift_q_6                      (oAMSpin_11_shift_q_6                    ), //i
    .shift_q_7                      (oAMSpin_11_shift_q_7                    ), //i
    .base_iq_valid                  (base_iqs_valid                          ), //i
    .base_iq_payload_cha_i          (base_iqs_payload_3_cha_i                ), //i
    .base_iq_payload_cha_q          (base_iqs_payload_3_cha_q                ), //i
    .mod_sub_iqs_valid              (oAMSpin_11_mod_sub_iqs_valid            ), //o
    .mod_sub_iqs_payload_0_cha_i    (oAMSpin_11_mod_sub_iqs_payload_0_cha_i  ), //o
    .mod_sub_iqs_payload_0_cha_q    (oAMSpin_11_mod_sub_iqs_payload_0_cha_q  ), //o
    .mod_sub_iqs_payload_1_cha_i    (oAMSpin_11_mod_sub_iqs_payload_1_cha_i  ), //o
    .mod_sub_iqs_payload_1_cha_q    (oAMSpin_11_mod_sub_iqs_payload_1_cha_q  ), //o
    .mod_sub_iqs_payload_2_cha_i    (oAMSpin_11_mod_sub_iqs_payload_2_cha_i  ), //o
    .mod_sub_iqs_payload_2_cha_q    (oAMSpin_11_mod_sub_iqs_payload_2_cha_q  ), //o
    .mod_sub_iqs_payload_3_cha_i    (oAMSpin_11_mod_sub_iqs_payload_3_cha_i  ), //o
    .mod_sub_iqs_payload_3_cha_q    (oAMSpin_11_mod_sub_iqs_payload_3_cha_q  ), //o
    .mod_sub_iqs_payload_4_cha_i    (oAMSpin_11_mod_sub_iqs_payload_4_cha_i  ), //o
    .mod_sub_iqs_payload_4_cha_q    (oAMSpin_11_mod_sub_iqs_payload_4_cha_q  ), //o
    .mod_sub_iqs_payload_5_cha_i    (oAMSpin_11_mod_sub_iqs_payload_5_cha_i  ), //o
    .mod_sub_iqs_payload_5_cha_q    (oAMSpin_11_mod_sub_iqs_payload_5_cha_q  ), //o
    .mod_sub_iqs_payload_6_cha_i    (oAMSpin_11_mod_sub_iqs_payload_6_cha_i  ), //o
    .mod_sub_iqs_payload_6_cha_q    (oAMSpin_11_mod_sub_iqs_payload_6_cha_q  ), //o
    .mod_sub_iqs_payload_7_cha_i    (oAMSpin_11_mod_sub_iqs_payload_7_cha_i  ), //o
    .mod_sub_iqs_payload_7_cha_q    (oAMSpin_11_mod_sub_iqs_payload_7_cha_q  ), //o
    .rf_clk                         (rf_clk                                  ), //i
    .rf_resetn                      (rf_resetn                               )  //i
  );
  OAMSpin oAMSpin_12 (
    .shift_i_0                      (oAMSpin_12_shift_i_0                    ), //i
    .shift_i_1                      (oAMSpin_12_shift_i_1                    ), //i
    .shift_i_2                      (oAMSpin_12_shift_i_2                    ), //i
    .shift_i_3                      (oAMSpin_12_shift_i_3                    ), //i
    .shift_i_4                      (oAMSpin_12_shift_i_4                    ), //i
    .shift_i_5                      (oAMSpin_12_shift_i_5                    ), //i
    .shift_i_6                      (oAMSpin_12_shift_i_6                    ), //i
    .shift_i_7                      (oAMSpin_12_shift_i_7                    ), //i
    .shift_q_0                      (oAMSpin_12_shift_q_0                    ), //i
    .shift_q_1                      (oAMSpin_12_shift_q_1                    ), //i
    .shift_q_2                      (oAMSpin_12_shift_q_2                    ), //i
    .shift_q_3                      (oAMSpin_12_shift_q_3                    ), //i
    .shift_q_4                      (oAMSpin_12_shift_q_4                    ), //i
    .shift_q_5                      (oAMSpin_12_shift_q_5                    ), //i
    .shift_q_6                      (oAMSpin_12_shift_q_6                    ), //i
    .shift_q_7                      (oAMSpin_12_shift_q_7                    ), //i
    .base_iq_valid                  (base_iqs_valid                          ), //i
    .base_iq_payload_cha_i          (base_iqs_payload_4_cha_i                ), //i
    .base_iq_payload_cha_q          (base_iqs_payload_4_cha_q                ), //i
    .mod_sub_iqs_valid              (oAMSpin_12_mod_sub_iqs_valid            ), //o
    .mod_sub_iqs_payload_0_cha_i    (oAMSpin_12_mod_sub_iqs_payload_0_cha_i  ), //o
    .mod_sub_iqs_payload_0_cha_q    (oAMSpin_12_mod_sub_iqs_payload_0_cha_q  ), //o
    .mod_sub_iqs_payload_1_cha_i    (oAMSpin_12_mod_sub_iqs_payload_1_cha_i  ), //o
    .mod_sub_iqs_payload_1_cha_q    (oAMSpin_12_mod_sub_iqs_payload_1_cha_q  ), //o
    .mod_sub_iqs_payload_2_cha_i    (oAMSpin_12_mod_sub_iqs_payload_2_cha_i  ), //o
    .mod_sub_iqs_payload_2_cha_q    (oAMSpin_12_mod_sub_iqs_payload_2_cha_q  ), //o
    .mod_sub_iqs_payload_3_cha_i    (oAMSpin_12_mod_sub_iqs_payload_3_cha_i  ), //o
    .mod_sub_iqs_payload_3_cha_q    (oAMSpin_12_mod_sub_iqs_payload_3_cha_q  ), //o
    .mod_sub_iqs_payload_4_cha_i    (oAMSpin_12_mod_sub_iqs_payload_4_cha_i  ), //o
    .mod_sub_iqs_payload_4_cha_q    (oAMSpin_12_mod_sub_iqs_payload_4_cha_q  ), //o
    .mod_sub_iqs_payload_5_cha_i    (oAMSpin_12_mod_sub_iqs_payload_5_cha_i  ), //o
    .mod_sub_iqs_payload_5_cha_q    (oAMSpin_12_mod_sub_iqs_payload_5_cha_q  ), //o
    .mod_sub_iqs_payload_6_cha_i    (oAMSpin_12_mod_sub_iqs_payload_6_cha_i  ), //o
    .mod_sub_iqs_payload_6_cha_q    (oAMSpin_12_mod_sub_iqs_payload_6_cha_q  ), //o
    .mod_sub_iqs_payload_7_cha_i    (oAMSpin_12_mod_sub_iqs_payload_7_cha_i  ), //o
    .mod_sub_iqs_payload_7_cha_q    (oAMSpin_12_mod_sub_iqs_payload_7_cha_q  ), //o
    .rf_clk                         (rf_clk                                  ), //i
    .rf_resetn                      (rf_resetn                               )  //i
  );
  OAMSpin oAMSpin_13 (
    .shift_i_0                      (oAMSpin_13_shift_i_0                    ), //i
    .shift_i_1                      (oAMSpin_13_shift_i_1                    ), //i
    .shift_i_2                      (oAMSpin_13_shift_i_2                    ), //i
    .shift_i_3                      (oAMSpin_13_shift_i_3                    ), //i
    .shift_i_4                      (oAMSpin_13_shift_i_4                    ), //i
    .shift_i_5                      (oAMSpin_13_shift_i_5                    ), //i
    .shift_i_6                      (oAMSpin_13_shift_i_6                    ), //i
    .shift_i_7                      (oAMSpin_13_shift_i_7                    ), //i
    .shift_q_0                      (oAMSpin_13_shift_q_0                    ), //i
    .shift_q_1                      (oAMSpin_13_shift_q_1                    ), //i
    .shift_q_2                      (oAMSpin_13_shift_q_2                    ), //i
    .shift_q_3                      (oAMSpin_13_shift_q_3                    ), //i
    .shift_q_4                      (oAMSpin_13_shift_q_4                    ), //i
    .shift_q_5                      (oAMSpin_13_shift_q_5                    ), //i
    .shift_q_6                      (oAMSpin_13_shift_q_6                    ), //i
    .shift_q_7                      (oAMSpin_13_shift_q_7                    ), //i
    .base_iq_valid                  (base_iqs_valid                          ), //i
    .base_iq_payload_cha_i          (base_iqs_payload_5_cha_i                ), //i
    .base_iq_payload_cha_q          (base_iqs_payload_5_cha_q                ), //i
    .mod_sub_iqs_valid              (oAMSpin_13_mod_sub_iqs_valid            ), //o
    .mod_sub_iqs_payload_0_cha_i    (oAMSpin_13_mod_sub_iqs_payload_0_cha_i  ), //o
    .mod_sub_iqs_payload_0_cha_q    (oAMSpin_13_mod_sub_iqs_payload_0_cha_q  ), //o
    .mod_sub_iqs_payload_1_cha_i    (oAMSpin_13_mod_sub_iqs_payload_1_cha_i  ), //o
    .mod_sub_iqs_payload_1_cha_q    (oAMSpin_13_mod_sub_iqs_payload_1_cha_q  ), //o
    .mod_sub_iqs_payload_2_cha_i    (oAMSpin_13_mod_sub_iqs_payload_2_cha_i  ), //o
    .mod_sub_iqs_payload_2_cha_q    (oAMSpin_13_mod_sub_iqs_payload_2_cha_q  ), //o
    .mod_sub_iqs_payload_3_cha_i    (oAMSpin_13_mod_sub_iqs_payload_3_cha_i  ), //o
    .mod_sub_iqs_payload_3_cha_q    (oAMSpin_13_mod_sub_iqs_payload_3_cha_q  ), //o
    .mod_sub_iqs_payload_4_cha_i    (oAMSpin_13_mod_sub_iqs_payload_4_cha_i  ), //o
    .mod_sub_iqs_payload_4_cha_q    (oAMSpin_13_mod_sub_iqs_payload_4_cha_q  ), //o
    .mod_sub_iqs_payload_5_cha_i    (oAMSpin_13_mod_sub_iqs_payload_5_cha_i  ), //o
    .mod_sub_iqs_payload_5_cha_q    (oAMSpin_13_mod_sub_iqs_payload_5_cha_q  ), //o
    .mod_sub_iqs_payload_6_cha_i    (oAMSpin_13_mod_sub_iqs_payload_6_cha_i  ), //o
    .mod_sub_iqs_payload_6_cha_q    (oAMSpin_13_mod_sub_iqs_payload_6_cha_q  ), //o
    .mod_sub_iqs_payload_7_cha_i    (oAMSpin_13_mod_sub_iqs_payload_7_cha_i  ), //o
    .mod_sub_iqs_payload_7_cha_q    (oAMSpin_13_mod_sub_iqs_payload_7_cha_q  ), //o
    .rf_clk                         (rf_clk                                  ), //i
    .rf_resetn                      (rf_resetn                               )  //i
  );
  OAMSpin oAMSpin_14 (
    .shift_i_0                      (oAMSpin_14_shift_i_0                    ), //i
    .shift_i_1                      (oAMSpin_14_shift_i_1                    ), //i
    .shift_i_2                      (oAMSpin_14_shift_i_2                    ), //i
    .shift_i_3                      (oAMSpin_14_shift_i_3                    ), //i
    .shift_i_4                      (oAMSpin_14_shift_i_4                    ), //i
    .shift_i_5                      (oAMSpin_14_shift_i_5                    ), //i
    .shift_i_6                      (oAMSpin_14_shift_i_6                    ), //i
    .shift_i_7                      (oAMSpin_14_shift_i_7                    ), //i
    .shift_q_0                      (oAMSpin_14_shift_q_0                    ), //i
    .shift_q_1                      (oAMSpin_14_shift_q_1                    ), //i
    .shift_q_2                      (oAMSpin_14_shift_q_2                    ), //i
    .shift_q_3                      (oAMSpin_14_shift_q_3                    ), //i
    .shift_q_4                      (oAMSpin_14_shift_q_4                    ), //i
    .shift_q_5                      (oAMSpin_14_shift_q_5                    ), //i
    .shift_q_6                      (oAMSpin_14_shift_q_6                    ), //i
    .shift_q_7                      (oAMSpin_14_shift_q_7                    ), //i
    .base_iq_valid                  (base_iqs_valid                          ), //i
    .base_iq_payload_cha_i          (base_iqs_payload_6_cha_i                ), //i
    .base_iq_payload_cha_q          (base_iqs_payload_6_cha_q                ), //i
    .mod_sub_iqs_valid              (oAMSpin_14_mod_sub_iqs_valid            ), //o
    .mod_sub_iqs_payload_0_cha_i    (oAMSpin_14_mod_sub_iqs_payload_0_cha_i  ), //o
    .mod_sub_iqs_payload_0_cha_q    (oAMSpin_14_mod_sub_iqs_payload_0_cha_q  ), //o
    .mod_sub_iqs_payload_1_cha_i    (oAMSpin_14_mod_sub_iqs_payload_1_cha_i  ), //o
    .mod_sub_iqs_payload_1_cha_q    (oAMSpin_14_mod_sub_iqs_payload_1_cha_q  ), //o
    .mod_sub_iqs_payload_2_cha_i    (oAMSpin_14_mod_sub_iqs_payload_2_cha_i  ), //o
    .mod_sub_iqs_payload_2_cha_q    (oAMSpin_14_mod_sub_iqs_payload_2_cha_q  ), //o
    .mod_sub_iqs_payload_3_cha_i    (oAMSpin_14_mod_sub_iqs_payload_3_cha_i  ), //o
    .mod_sub_iqs_payload_3_cha_q    (oAMSpin_14_mod_sub_iqs_payload_3_cha_q  ), //o
    .mod_sub_iqs_payload_4_cha_i    (oAMSpin_14_mod_sub_iqs_payload_4_cha_i  ), //o
    .mod_sub_iqs_payload_4_cha_q    (oAMSpin_14_mod_sub_iqs_payload_4_cha_q  ), //o
    .mod_sub_iqs_payload_5_cha_i    (oAMSpin_14_mod_sub_iqs_payload_5_cha_i  ), //o
    .mod_sub_iqs_payload_5_cha_q    (oAMSpin_14_mod_sub_iqs_payload_5_cha_q  ), //o
    .mod_sub_iqs_payload_6_cha_i    (oAMSpin_14_mod_sub_iqs_payload_6_cha_i  ), //o
    .mod_sub_iqs_payload_6_cha_q    (oAMSpin_14_mod_sub_iqs_payload_6_cha_q  ), //o
    .mod_sub_iqs_payload_7_cha_i    (oAMSpin_14_mod_sub_iqs_payload_7_cha_i  ), //o
    .mod_sub_iqs_payload_7_cha_q    (oAMSpin_14_mod_sub_iqs_payload_7_cha_q  ), //o
    .rf_clk                         (rf_clk                                  ), //i
    .rf_resetn                      (rf_resetn                               )  //i
  );
  OAMSpin oAMSpin_15 (
    .shift_i_0                      (oAMSpin_15_shift_i_0                    ), //i
    .shift_i_1                      (oAMSpin_15_shift_i_1                    ), //i
    .shift_i_2                      (oAMSpin_15_shift_i_2                    ), //i
    .shift_i_3                      (oAMSpin_15_shift_i_3                    ), //i
    .shift_i_4                      (oAMSpin_15_shift_i_4                    ), //i
    .shift_i_5                      (oAMSpin_15_shift_i_5                    ), //i
    .shift_i_6                      (oAMSpin_15_shift_i_6                    ), //i
    .shift_i_7                      (oAMSpin_15_shift_i_7                    ), //i
    .shift_q_0                      (oAMSpin_15_shift_q_0                    ), //i
    .shift_q_1                      (oAMSpin_15_shift_q_1                    ), //i
    .shift_q_2                      (oAMSpin_15_shift_q_2                    ), //i
    .shift_q_3                      (oAMSpin_15_shift_q_3                    ), //i
    .shift_q_4                      (oAMSpin_15_shift_q_4                    ), //i
    .shift_q_5                      (oAMSpin_15_shift_q_5                    ), //i
    .shift_q_6                      (oAMSpin_15_shift_q_6                    ), //i
    .shift_q_7                      (oAMSpin_15_shift_q_7                    ), //i
    .base_iq_valid                  (base_iqs_valid                          ), //i
    .base_iq_payload_cha_i          (base_iqs_payload_7_cha_i                ), //i
    .base_iq_payload_cha_q          (base_iqs_payload_7_cha_q                ), //i
    .mod_sub_iqs_valid              (oAMSpin_15_mod_sub_iqs_valid            ), //o
    .mod_sub_iqs_payload_0_cha_i    (oAMSpin_15_mod_sub_iqs_payload_0_cha_i  ), //o
    .mod_sub_iqs_payload_0_cha_q    (oAMSpin_15_mod_sub_iqs_payload_0_cha_q  ), //o
    .mod_sub_iqs_payload_1_cha_i    (oAMSpin_15_mod_sub_iqs_payload_1_cha_i  ), //o
    .mod_sub_iqs_payload_1_cha_q    (oAMSpin_15_mod_sub_iqs_payload_1_cha_q  ), //o
    .mod_sub_iqs_payload_2_cha_i    (oAMSpin_15_mod_sub_iqs_payload_2_cha_i  ), //o
    .mod_sub_iqs_payload_2_cha_q    (oAMSpin_15_mod_sub_iqs_payload_2_cha_q  ), //o
    .mod_sub_iqs_payload_3_cha_i    (oAMSpin_15_mod_sub_iqs_payload_3_cha_i  ), //o
    .mod_sub_iqs_payload_3_cha_q    (oAMSpin_15_mod_sub_iqs_payload_3_cha_q  ), //o
    .mod_sub_iqs_payload_4_cha_i    (oAMSpin_15_mod_sub_iqs_payload_4_cha_i  ), //o
    .mod_sub_iqs_payload_4_cha_q    (oAMSpin_15_mod_sub_iqs_payload_4_cha_q  ), //o
    .mod_sub_iqs_payload_5_cha_i    (oAMSpin_15_mod_sub_iqs_payload_5_cha_i  ), //o
    .mod_sub_iqs_payload_5_cha_q    (oAMSpin_15_mod_sub_iqs_payload_5_cha_q  ), //o
    .mod_sub_iqs_payload_6_cha_i    (oAMSpin_15_mod_sub_iqs_payload_6_cha_i  ), //o
    .mod_sub_iqs_payload_6_cha_q    (oAMSpin_15_mod_sub_iqs_payload_6_cha_q  ), //o
    .mod_sub_iqs_payload_7_cha_i    (oAMSpin_15_mod_sub_iqs_payload_7_cha_i  ), //o
    .mod_sub_iqs_payload_7_cha_q    (oAMSpin_15_mod_sub_iqs_payload_7_cha_q  ), //o
    .rf_clk                         (rf_clk                                  ), //i
    .rf_resetn                      (rf_resetn                               )  //i
  );
  ChaCompose chaCompose_8 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_0                ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_0_cha_i            ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_0_cha_q            ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_8                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_8_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_8_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_16               ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_16_cha_i           ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_16_cha_q           ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_24               ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_24_cha_i           ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_24_cha_q           ), //i
    .mod_sub_iqs_4_valid            (mod_sub_valid_vec_32               ), //i
    .mod_sub_iqs_4_payload_cha_i    (mod_sub_iqs_vec_32_cha_i           ), //i
    .mod_sub_iqs_4_payload_cha_q    (mod_sub_iqs_vec_32_cha_q           ), //i
    .mod_sub_iqs_5_valid            (mod_sub_valid_vec_40               ), //i
    .mod_sub_iqs_5_payload_cha_i    (mod_sub_iqs_vec_40_cha_i           ), //i
    .mod_sub_iqs_5_payload_cha_q    (mod_sub_iqs_vec_40_cha_q           ), //i
    .mod_sub_iqs_6_valid            (mod_sub_valid_vec_48               ), //i
    .mod_sub_iqs_6_payload_cha_i    (mod_sub_iqs_vec_48_cha_i           ), //i
    .mod_sub_iqs_6_payload_cha_q    (mod_sub_iqs_vec_48_cha_q           ), //i
    .mod_sub_iqs_7_valid            (mod_sub_valid_vec_56               ), //i
    .mod_sub_iqs_7_payload_cha_i    (mod_sub_iqs_vec_56_cha_i           ), //i
    .mod_sub_iqs_7_payload_cha_q    (mod_sub_iqs_vec_56_cha_q           ), //i
    .mod_iq_valid                   (chaCompose_8_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_8_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_8_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_9 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_1                ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_1_cha_i            ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_1_cha_q            ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_9                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_9_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_9_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_17               ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_17_cha_i           ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_17_cha_q           ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_25               ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_25_cha_i           ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_25_cha_q           ), //i
    .mod_sub_iqs_4_valid            (mod_sub_valid_vec_33               ), //i
    .mod_sub_iqs_4_payload_cha_i    (mod_sub_iqs_vec_33_cha_i           ), //i
    .mod_sub_iqs_4_payload_cha_q    (mod_sub_iqs_vec_33_cha_q           ), //i
    .mod_sub_iqs_5_valid            (mod_sub_valid_vec_41               ), //i
    .mod_sub_iqs_5_payload_cha_i    (mod_sub_iqs_vec_41_cha_i           ), //i
    .mod_sub_iqs_5_payload_cha_q    (mod_sub_iqs_vec_41_cha_q           ), //i
    .mod_sub_iqs_6_valid            (mod_sub_valid_vec_49               ), //i
    .mod_sub_iqs_6_payload_cha_i    (mod_sub_iqs_vec_49_cha_i           ), //i
    .mod_sub_iqs_6_payload_cha_q    (mod_sub_iqs_vec_49_cha_q           ), //i
    .mod_sub_iqs_7_valid            (mod_sub_valid_vec_57               ), //i
    .mod_sub_iqs_7_payload_cha_i    (mod_sub_iqs_vec_57_cha_i           ), //i
    .mod_sub_iqs_7_payload_cha_q    (mod_sub_iqs_vec_57_cha_q           ), //i
    .mod_iq_valid                   (chaCompose_9_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_9_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_9_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_10 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_2                 ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_2_cha_i             ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_2_cha_q             ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_10                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_10_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_10_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_18                ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_18_cha_i            ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_18_cha_q            ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_26                ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_26_cha_i            ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_26_cha_q            ), //i
    .mod_sub_iqs_4_valid            (mod_sub_valid_vec_34                ), //i
    .mod_sub_iqs_4_payload_cha_i    (mod_sub_iqs_vec_34_cha_i            ), //i
    .mod_sub_iqs_4_payload_cha_q    (mod_sub_iqs_vec_34_cha_q            ), //i
    .mod_sub_iqs_5_valid            (mod_sub_valid_vec_42                ), //i
    .mod_sub_iqs_5_payload_cha_i    (mod_sub_iqs_vec_42_cha_i            ), //i
    .mod_sub_iqs_5_payload_cha_q    (mod_sub_iqs_vec_42_cha_q            ), //i
    .mod_sub_iqs_6_valid            (mod_sub_valid_vec_50                ), //i
    .mod_sub_iqs_6_payload_cha_i    (mod_sub_iqs_vec_50_cha_i            ), //i
    .mod_sub_iqs_6_payload_cha_q    (mod_sub_iqs_vec_50_cha_q            ), //i
    .mod_sub_iqs_7_valid            (mod_sub_valid_vec_58                ), //i
    .mod_sub_iqs_7_payload_cha_i    (mod_sub_iqs_vec_58_cha_i            ), //i
    .mod_sub_iqs_7_payload_cha_q    (mod_sub_iqs_vec_58_cha_q            ), //i
    .mod_iq_valid                   (chaCompose_10_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_10_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_10_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_11 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_3                 ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_3_cha_i             ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_3_cha_q             ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_11                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_11_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_11_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_19                ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_19_cha_i            ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_19_cha_q            ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_27                ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_27_cha_i            ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_27_cha_q            ), //i
    .mod_sub_iqs_4_valid            (mod_sub_valid_vec_35                ), //i
    .mod_sub_iqs_4_payload_cha_i    (mod_sub_iqs_vec_35_cha_i            ), //i
    .mod_sub_iqs_4_payload_cha_q    (mod_sub_iqs_vec_35_cha_q            ), //i
    .mod_sub_iqs_5_valid            (mod_sub_valid_vec_43                ), //i
    .mod_sub_iqs_5_payload_cha_i    (mod_sub_iqs_vec_43_cha_i            ), //i
    .mod_sub_iqs_5_payload_cha_q    (mod_sub_iqs_vec_43_cha_q            ), //i
    .mod_sub_iqs_6_valid            (mod_sub_valid_vec_51                ), //i
    .mod_sub_iqs_6_payload_cha_i    (mod_sub_iqs_vec_51_cha_i            ), //i
    .mod_sub_iqs_6_payload_cha_q    (mod_sub_iqs_vec_51_cha_q            ), //i
    .mod_sub_iqs_7_valid            (mod_sub_valid_vec_59                ), //i
    .mod_sub_iqs_7_payload_cha_i    (mod_sub_iqs_vec_59_cha_i            ), //i
    .mod_sub_iqs_7_payload_cha_q    (mod_sub_iqs_vec_59_cha_q            ), //i
    .mod_iq_valid                   (chaCompose_11_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_11_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_11_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_12 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_4                 ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_4_cha_i             ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_4_cha_q             ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_12                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_12_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_12_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_20                ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_20_cha_i            ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_20_cha_q            ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_28                ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_28_cha_i            ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_28_cha_q            ), //i
    .mod_sub_iqs_4_valid            (mod_sub_valid_vec_36                ), //i
    .mod_sub_iqs_4_payload_cha_i    (mod_sub_iqs_vec_36_cha_i            ), //i
    .mod_sub_iqs_4_payload_cha_q    (mod_sub_iqs_vec_36_cha_q            ), //i
    .mod_sub_iqs_5_valid            (mod_sub_valid_vec_44                ), //i
    .mod_sub_iqs_5_payload_cha_i    (mod_sub_iqs_vec_44_cha_i            ), //i
    .mod_sub_iqs_5_payload_cha_q    (mod_sub_iqs_vec_44_cha_q            ), //i
    .mod_sub_iqs_6_valid            (mod_sub_valid_vec_52                ), //i
    .mod_sub_iqs_6_payload_cha_i    (mod_sub_iqs_vec_52_cha_i            ), //i
    .mod_sub_iqs_6_payload_cha_q    (mod_sub_iqs_vec_52_cha_q            ), //i
    .mod_sub_iqs_7_valid            (mod_sub_valid_vec_60                ), //i
    .mod_sub_iqs_7_payload_cha_i    (mod_sub_iqs_vec_60_cha_i            ), //i
    .mod_sub_iqs_7_payload_cha_q    (mod_sub_iqs_vec_60_cha_q            ), //i
    .mod_iq_valid                   (chaCompose_12_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_12_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_12_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_13 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_5                 ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_5_cha_i             ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_5_cha_q             ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_13                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_13_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_13_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_21                ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_21_cha_i            ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_21_cha_q            ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_29                ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_29_cha_i            ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_29_cha_q            ), //i
    .mod_sub_iqs_4_valid            (mod_sub_valid_vec_37                ), //i
    .mod_sub_iqs_4_payload_cha_i    (mod_sub_iqs_vec_37_cha_i            ), //i
    .mod_sub_iqs_4_payload_cha_q    (mod_sub_iqs_vec_37_cha_q            ), //i
    .mod_sub_iqs_5_valid            (mod_sub_valid_vec_45                ), //i
    .mod_sub_iqs_5_payload_cha_i    (mod_sub_iqs_vec_45_cha_i            ), //i
    .mod_sub_iqs_5_payload_cha_q    (mod_sub_iqs_vec_45_cha_q            ), //i
    .mod_sub_iqs_6_valid            (mod_sub_valid_vec_53                ), //i
    .mod_sub_iqs_6_payload_cha_i    (mod_sub_iqs_vec_53_cha_i            ), //i
    .mod_sub_iqs_6_payload_cha_q    (mod_sub_iqs_vec_53_cha_q            ), //i
    .mod_sub_iqs_7_valid            (mod_sub_valid_vec_61                ), //i
    .mod_sub_iqs_7_payload_cha_i    (mod_sub_iqs_vec_61_cha_i            ), //i
    .mod_sub_iqs_7_payload_cha_q    (mod_sub_iqs_vec_61_cha_q            ), //i
    .mod_iq_valid                   (chaCompose_13_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_13_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_13_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_14 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_6                 ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_6_cha_i             ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_6_cha_q             ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_14                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_14_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_14_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_22                ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_22_cha_i            ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_22_cha_q            ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_30                ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_30_cha_i            ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_30_cha_q            ), //i
    .mod_sub_iqs_4_valid            (mod_sub_valid_vec_38                ), //i
    .mod_sub_iqs_4_payload_cha_i    (mod_sub_iqs_vec_38_cha_i            ), //i
    .mod_sub_iqs_4_payload_cha_q    (mod_sub_iqs_vec_38_cha_q            ), //i
    .mod_sub_iqs_5_valid            (mod_sub_valid_vec_46                ), //i
    .mod_sub_iqs_5_payload_cha_i    (mod_sub_iqs_vec_46_cha_i            ), //i
    .mod_sub_iqs_5_payload_cha_q    (mod_sub_iqs_vec_46_cha_q            ), //i
    .mod_sub_iqs_6_valid            (mod_sub_valid_vec_54                ), //i
    .mod_sub_iqs_6_payload_cha_i    (mod_sub_iqs_vec_54_cha_i            ), //i
    .mod_sub_iqs_6_payload_cha_q    (mod_sub_iqs_vec_54_cha_q            ), //i
    .mod_sub_iqs_7_valid            (mod_sub_valid_vec_62                ), //i
    .mod_sub_iqs_7_payload_cha_i    (mod_sub_iqs_vec_62_cha_i            ), //i
    .mod_sub_iqs_7_payload_cha_q    (mod_sub_iqs_vec_62_cha_q            ), //i
    .mod_iq_valid                   (chaCompose_14_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_14_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_14_mod_iq_payload_cha_q  )  //o
  );
  ChaCompose chaCompose_15 (
    .mod_sub_iqs_0_valid            (mod_sub_valid_vec_7                 ), //i
    .mod_sub_iqs_0_payload_cha_i    (mod_sub_iqs_vec_7_cha_i             ), //i
    .mod_sub_iqs_0_payload_cha_q    (mod_sub_iqs_vec_7_cha_q             ), //i
    .mod_sub_iqs_1_valid            (mod_sub_valid_vec_15                ), //i
    .mod_sub_iqs_1_payload_cha_i    (mod_sub_iqs_vec_15_cha_i            ), //i
    .mod_sub_iqs_1_payload_cha_q    (mod_sub_iqs_vec_15_cha_q            ), //i
    .mod_sub_iqs_2_valid            (mod_sub_valid_vec_23                ), //i
    .mod_sub_iqs_2_payload_cha_i    (mod_sub_iqs_vec_23_cha_i            ), //i
    .mod_sub_iqs_2_payload_cha_q    (mod_sub_iqs_vec_23_cha_q            ), //i
    .mod_sub_iqs_3_valid            (mod_sub_valid_vec_31                ), //i
    .mod_sub_iqs_3_payload_cha_i    (mod_sub_iqs_vec_31_cha_i            ), //i
    .mod_sub_iqs_3_payload_cha_q    (mod_sub_iqs_vec_31_cha_q            ), //i
    .mod_sub_iqs_4_valid            (mod_sub_valid_vec_39                ), //i
    .mod_sub_iqs_4_payload_cha_i    (mod_sub_iqs_vec_39_cha_i            ), //i
    .mod_sub_iqs_4_payload_cha_q    (mod_sub_iqs_vec_39_cha_q            ), //i
    .mod_sub_iqs_5_valid            (mod_sub_valid_vec_47                ), //i
    .mod_sub_iqs_5_payload_cha_i    (mod_sub_iqs_vec_47_cha_i            ), //i
    .mod_sub_iqs_5_payload_cha_q    (mod_sub_iqs_vec_47_cha_q            ), //i
    .mod_sub_iqs_6_valid            (mod_sub_valid_vec_55                ), //i
    .mod_sub_iqs_6_payload_cha_i    (mod_sub_iqs_vec_55_cha_i            ), //i
    .mod_sub_iqs_6_payload_cha_q    (mod_sub_iqs_vec_55_cha_q            ), //i
    .mod_sub_iqs_7_valid            (mod_sub_valid_vec_63                ), //i
    .mod_sub_iqs_7_payload_cha_i    (mod_sub_iqs_vec_63_cha_i            ), //i
    .mod_sub_iqs_7_payload_cha_q    (mod_sub_iqs_vec_63_cha_q            ), //i
    .mod_iq_valid                   (chaCompose_15_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i           (chaCompose_15_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q           (chaCompose_15_mod_iq_payload_cha_q  )  //o
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(w_en) begin
      if(!w_sel) begin
        _zz_1 = 1'b1;
      end
    end
  end

  always @(*) begin
    _zz_2 = 1'b0;
    if(w_en) begin
      if(w_sel) begin
        _zz_2 = 1'b1;
      end
    end
  end

  assign oAMSpin_8_shift_i_0 = _zz_shift_i_map_port1;
  assign oAMSpin_8_shift_q_0 = _zz_shift_q_map_port1;
  assign mod_sub_iqs_vec_0_cha_i = oAMSpin_8_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_0_cha_q = oAMSpin_8_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_0 = oAMSpin_8_mod_sub_iqs_valid;
  assign oAMSpin_8_shift_i_1 = _zz_shift_i_map_port2;
  assign oAMSpin_8_shift_q_1 = _zz_shift_q_map_port2;
  assign mod_sub_iqs_vec_1_cha_i = oAMSpin_8_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_1_cha_q = oAMSpin_8_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_1 = oAMSpin_8_mod_sub_iqs_valid;
  assign oAMSpin_8_shift_i_2 = _zz_shift_i_map_port3;
  assign oAMSpin_8_shift_q_2 = _zz_shift_q_map_port3;
  assign mod_sub_iqs_vec_2_cha_i = oAMSpin_8_mod_sub_iqs_payload_2_cha_i;
  assign mod_sub_iqs_vec_2_cha_q = oAMSpin_8_mod_sub_iqs_payload_2_cha_q;
  assign mod_sub_valid_vec_2 = oAMSpin_8_mod_sub_iqs_valid;
  assign oAMSpin_8_shift_i_3 = _zz_shift_i_map_port4;
  assign oAMSpin_8_shift_q_3 = _zz_shift_q_map_port4;
  assign mod_sub_iqs_vec_3_cha_i = oAMSpin_8_mod_sub_iqs_payload_3_cha_i;
  assign mod_sub_iqs_vec_3_cha_q = oAMSpin_8_mod_sub_iqs_payload_3_cha_q;
  assign mod_sub_valid_vec_3 = oAMSpin_8_mod_sub_iqs_valid;
  assign oAMSpin_8_shift_i_4 = _zz_shift_i_map_port5;
  assign oAMSpin_8_shift_q_4 = _zz_shift_q_map_port5;
  assign mod_sub_iqs_vec_4_cha_i = oAMSpin_8_mod_sub_iqs_payload_4_cha_i;
  assign mod_sub_iqs_vec_4_cha_q = oAMSpin_8_mod_sub_iqs_payload_4_cha_q;
  assign mod_sub_valid_vec_4 = oAMSpin_8_mod_sub_iqs_valid;
  assign oAMSpin_8_shift_i_5 = _zz_shift_i_map_port6;
  assign oAMSpin_8_shift_q_5 = _zz_shift_q_map_port6;
  assign mod_sub_iqs_vec_5_cha_i = oAMSpin_8_mod_sub_iqs_payload_5_cha_i;
  assign mod_sub_iqs_vec_5_cha_q = oAMSpin_8_mod_sub_iqs_payload_5_cha_q;
  assign mod_sub_valid_vec_5 = oAMSpin_8_mod_sub_iqs_valid;
  assign oAMSpin_8_shift_i_6 = _zz_shift_i_map_port7;
  assign oAMSpin_8_shift_q_6 = _zz_shift_q_map_port7;
  assign mod_sub_iqs_vec_6_cha_i = oAMSpin_8_mod_sub_iqs_payload_6_cha_i;
  assign mod_sub_iqs_vec_6_cha_q = oAMSpin_8_mod_sub_iqs_payload_6_cha_q;
  assign mod_sub_valid_vec_6 = oAMSpin_8_mod_sub_iqs_valid;
  assign oAMSpin_8_shift_i_7 = _zz_shift_i_map_port8;
  assign oAMSpin_8_shift_q_7 = _zz_shift_q_map_port8;
  assign mod_sub_iqs_vec_7_cha_i = oAMSpin_8_mod_sub_iqs_payload_7_cha_i;
  assign mod_sub_iqs_vec_7_cha_q = oAMSpin_8_mod_sub_iqs_payload_7_cha_q;
  assign mod_sub_valid_vec_7 = oAMSpin_8_mod_sub_iqs_valid;
  assign oAMSpin_9_shift_i_0 = _zz_shift_i_map_port9;
  assign oAMSpin_9_shift_q_0 = _zz_shift_q_map_port9;
  assign mod_sub_iqs_vec_8_cha_i = oAMSpin_9_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_8_cha_q = oAMSpin_9_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_8 = oAMSpin_9_mod_sub_iqs_valid;
  assign oAMSpin_9_shift_i_1 = _zz_shift_i_map_port10;
  assign oAMSpin_9_shift_q_1 = _zz_shift_q_map_port10;
  assign mod_sub_iqs_vec_9_cha_i = oAMSpin_9_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_9_cha_q = oAMSpin_9_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_9 = oAMSpin_9_mod_sub_iqs_valid;
  assign oAMSpin_9_shift_i_2 = _zz_shift_i_map_port11;
  assign oAMSpin_9_shift_q_2 = _zz_shift_q_map_port11;
  assign mod_sub_iqs_vec_10_cha_i = oAMSpin_9_mod_sub_iqs_payload_2_cha_i;
  assign mod_sub_iqs_vec_10_cha_q = oAMSpin_9_mod_sub_iqs_payload_2_cha_q;
  assign mod_sub_valid_vec_10 = oAMSpin_9_mod_sub_iqs_valid;
  assign oAMSpin_9_shift_i_3 = _zz_shift_i_map_port12;
  assign oAMSpin_9_shift_q_3 = _zz_shift_q_map_port12;
  assign mod_sub_iqs_vec_11_cha_i = oAMSpin_9_mod_sub_iqs_payload_3_cha_i;
  assign mod_sub_iqs_vec_11_cha_q = oAMSpin_9_mod_sub_iqs_payload_3_cha_q;
  assign mod_sub_valid_vec_11 = oAMSpin_9_mod_sub_iqs_valid;
  assign oAMSpin_9_shift_i_4 = _zz_shift_i_map_port13;
  assign oAMSpin_9_shift_q_4 = _zz_shift_q_map_port13;
  assign mod_sub_iqs_vec_12_cha_i = oAMSpin_9_mod_sub_iqs_payload_4_cha_i;
  assign mod_sub_iqs_vec_12_cha_q = oAMSpin_9_mod_sub_iqs_payload_4_cha_q;
  assign mod_sub_valid_vec_12 = oAMSpin_9_mod_sub_iqs_valid;
  assign oAMSpin_9_shift_i_5 = _zz_shift_i_map_port14;
  assign oAMSpin_9_shift_q_5 = _zz_shift_q_map_port14;
  assign mod_sub_iqs_vec_13_cha_i = oAMSpin_9_mod_sub_iqs_payload_5_cha_i;
  assign mod_sub_iqs_vec_13_cha_q = oAMSpin_9_mod_sub_iqs_payload_5_cha_q;
  assign mod_sub_valid_vec_13 = oAMSpin_9_mod_sub_iqs_valid;
  assign oAMSpin_9_shift_i_6 = _zz_shift_i_map_port15;
  assign oAMSpin_9_shift_q_6 = _zz_shift_q_map_port15;
  assign mod_sub_iqs_vec_14_cha_i = oAMSpin_9_mod_sub_iqs_payload_6_cha_i;
  assign mod_sub_iqs_vec_14_cha_q = oAMSpin_9_mod_sub_iqs_payload_6_cha_q;
  assign mod_sub_valid_vec_14 = oAMSpin_9_mod_sub_iqs_valid;
  assign oAMSpin_9_shift_i_7 = _zz_shift_i_map_port16;
  assign oAMSpin_9_shift_q_7 = _zz_shift_q_map_port16;
  assign mod_sub_iqs_vec_15_cha_i = oAMSpin_9_mod_sub_iqs_payload_7_cha_i;
  assign mod_sub_iqs_vec_15_cha_q = oAMSpin_9_mod_sub_iqs_payload_7_cha_q;
  assign mod_sub_valid_vec_15 = oAMSpin_9_mod_sub_iqs_valid;
  assign oAMSpin_10_shift_i_0 = _zz_shift_i_map_port17;
  assign oAMSpin_10_shift_q_0 = _zz_shift_q_map_port17;
  assign mod_sub_iqs_vec_16_cha_i = oAMSpin_10_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_16_cha_q = oAMSpin_10_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_16 = oAMSpin_10_mod_sub_iqs_valid;
  assign oAMSpin_10_shift_i_1 = _zz_shift_i_map_port18;
  assign oAMSpin_10_shift_q_1 = _zz_shift_q_map_port18;
  assign mod_sub_iqs_vec_17_cha_i = oAMSpin_10_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_17_cha_q = oAMSpin_10_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_17 = oAMSpin_10_mod_sub_iqs_valid;
  assign oAMSpin_10_shift_i_2 = _zz_shift_i_map_port19;
  assign oAMSpin_10_shift_q_2 = _zz_shift_q_map_port19;
  assign mod_sub_iqs_vec_18_cha_i = oAMSpin_10_mod_sub_iqs_payload_2_cha_i;
  assign mod_sub_iqs_vec_18_cha_q = oAMSpin_10_mod_sub_iqs_payload_2_cha_q;
  assign mod_sub_valid_vec_18 = oAMSpin_10_mod_sub_iqs_valid;
  assign oAMSpin_10_shift_i_3 = _zz_shift_i_map_port20;
  assign oAMSpin_10_shift_q_3 = _zz_shift_q_map_port20;
  assign mod_sub_iqs_vec_19_cha_i = oAMSpin_10_mod_sub_iqs_payload_3_cha_i;
  assign mod_sub_iqs_vec_19_cha_q = oAMSpin_10_mod_sub_iqs_payload_3_cha_q;
  assign mod_sub_valid_vec_19 = oAMSpin_10_mod_sub_iqs_valid;
  assign oAMSpin_10_shift_i_4 = _zz_shift_i_map_port21;
  assign oAMSpin_10_shift_q_4 = _zz_shift_q_map_port21;
  assign mod_sub_iqs_vec_20_cha_i = oAMSpin_10_mod_sub_iqs_payload_4_cha_i;
  assign mod_sub_iqs_vec_20_cha_q = oAMSpin_10_mod_sub_iqs_payload_4_cha_q;
  assign mod_sub_valid_vec_20 = oAMSpin_10_mod_sub_iqs_valid;
  assign oAMSpin_10_shift_i_5 = _zz_shift_i_map_port22;
  assign oAMSpin_10_shift_q_5 = _zz_shift_q_map_port22;
  assign mod_sub_iqs_vec_21_cha_i = oAMSpin_10_mod_sub_iqs_payload_5_cha_i;
  assign mod_sub_iqs_vec_21_cha_q = oAMSpin_10_mod_sub_iqs_payload_5_cha_q;
  assign mod_sub_valid_vec_21 = oAMSpin_10_mod_sub_iqs_valid;
  assign oAMSpin_10_shift_i_6 = _zz_shift_i_map_port23;
  assign oAMSpin_10_shift_q_6 = _zz_shift_q_map_port23;
  assign mod_sub_iqs_vec_22_cha_i = oAMSpin_10_mod_sub_iqs_payload_6_cha_i;
  assign mod_sub_iqs_vec_22_cha_q = oAMSpin_10_mod_sub_iqs_payload_6_cha_q;
  assign mod_sub_valid_vec_22 = oAMSpin_10_mod_sub_iqs_valid;
  assign oAMSpin_10_shift_i_7 = _zz_shift_i_map_port24;
  assign oAMSpin_10_shift_q_7 = _zz_shift_q_map_port24;
  assign mod_sub_iqs_vec_23_cha_i = oAMSpin_10_mod_sub_iqs_payload_7_cha_i;
  assign mod_sub_iqs_vec_23_cha_q = oAMSpin_10_mod_sub_iqs_payload_7_cha_q;
  assign mod_sub_valid_vec_23 = oAMSpin_10_mod_sub_iqs_valid;
  assign oAMSpin_11_shift_i_0 = _zz_shift_i_map_port25;
  assign oAMSpin_11_shift_q_0 = _zz_shift_q_map_port25;
  assign mod_sub_iqs_vec_24_cha_i = oAMSpin_11_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_24_cha_q = oAMSpin_11_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_24 = oAMSpin_11_mod_sub_iqs_valid;
  assign oAMSpin_11_shift_i_1 = _zz_shift_i_map_port26;
  assign oAMSpin_11_shift_q_1 = _zz_shift_q_map_port26;
  assign mod_sub_iqs_vec_25_cha_i = oAMSpin_11_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_25_cha_q = oAMSpin_11_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_25 = oAMSpin_11_mod_sub_iqs_valid;
  assign oAMSpin_11_shift_i_2 = _zz_shift_i_map_port27;
  assign oAMSpin_11_shift_q_2 = _zz_shift_q_map_port27;
  assign mod_sub_iqs_vec_26_cha_i = oAMSpin_11_mod_sub_iqs_payload_2_cha_i;
  assign mod_sub_iqs_vec_26_cha_q = oAMSpin_11_mod_sub_iqs_payload_2_cha_q;
  assign mod_sub_valid_vec_26 = oAMSpin_11_mod_sub_iqs_valid;
  assign oAMSpin_11_shift_i_3 = _zz_shift_i_map_port28;
  assign oAMSpin_11_shift_q_3 = _zz_shift_q_map_port28;
  assign mod_sub_iqs_vec_27_cha_i = oAMSpin_11_mod_sub_iqs_payload_3_cha_i;
  assign mod_sub_iqs_vec_27_cha_q = oAMSpin_11_mod_sub_iqs_payload_3_cha_q;
  assign mod_sub_valid_vec_27 = oAMSpin_11_mod_sub_iqs_valid;
  assign oAMSpin_11_shift_i_4 = _zz_shift_i_map_port29;
  assign oAMSpin_11_shift_q_4 = _zz_shift_q_map_port29;
  assign mod_sub_iqs_vec_28_cha_i = oAMSpin_11_mod_sub_iqs_payload_4_cha_i;
  assign mod_sub_iqs_vec_28_cha_q = oAMSpin_11_mod_sub_iqs_payload_4_cha_q;
  assign mod_sub_valid_vec_28 = oAMSpin_11_mod_sub_iqs_valid;
  assign oAMSpin_11_shift_i_5 = _zz_shift_i_map_port30;
  assign oAMSpin_11_shift_q_5 = _zz_shift_q_map_port30;
  assign mod_sub_iqs_vec_29_cha_i = oAMSpin_11_mod_sub_iqs_payload_5_cha_i;
  assign mod_sub_iqs_vec_29_cha_q = oAMSpin_11_mod_sub_iqs_payload_5_cha_q;
  assign mod_sub_valid_vec_29 = oAMSpin_11_mod_sub_iqs_valid;
  assign oAMSpin_11_shift_i_6 = _zz_shift_i_map_port31;
  assign oAMSpin_11_shift_q_6 = _zz_shift_q_map_port31;
  assign mod_sub_iqs_vec_30_cha_i = oAMSpin_11_mod_sub_iqs_payload_6_cha_i;
  assign mod_sub_iqs_vec_30_cha_q = oAMSpin_11_mod_sub_iqs_payload_6_cha_q;
  assign mod_sub_valid_vec_30 = oAMSpin_11_mod_sub_iqs_valid;
  assign oAMSpin_11_shift_i_7 = _zz_shift_i_map_port32;
  assign oAMSpin_11_shift_q_7 = _zz_shift_q_map_port32;
  assign mod_sub_iqs_vec_31_cha_i = oAMSpin_11_mod_sub_iqs_payload_7_cha_i;
  assign mod_sub_iqs_vec_31_cha_q = oAMSpin_11_mod_sub_iqs_payload_7_cha_q;
  assign mod_sub_valid_vec_31 = oAMSpin_11_mod_sub_iqs_valid;
  assign oAMSpin_12_shift_i_0 = _zz_shift_i_map_port33;
  assign oAMSpin_12_shift_q_0 = _zz_shift_q_map_port33;
  assign mod_sub_iqs_vec_32_cha_i = oAMSpin_12_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_32_cha_q = oAMSpin_12_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_32 = oAMSpin_12_mod_sub_iqs_valid;
  assign oAMSpin_12_shift_i_1 = _zz_shift_i_map_port34;
  assign oAMSpin_12_shift_q_1 = _zz_shift_q_map_port34;
  assign mod_sub_iqs_vec_33_cha_i = oAMSpin_12_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_33_cha_q = oAMSpin_12_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_33 = oAMSpin_12_mod_sub_iqs_valid;
  assign oAMSpin_12_shift_i_2 = _zz_shift_i_map_port35;
  assign oAMSpin_12_shift_q_2 = _zz_shift_q_map_port35;
  assign mod_sub_iqs_vec_34_cha_i = oAMSpin_12_mod_sub_iqs_payload_2_cha_i;
  assign mod_sub_iqs_vec_34_cha_q = oAMSpin_12_mod_sub_iqs_payload_2_cha_q;
  assign mod_sub_valid_vec_34 = oAMSpin_12_mod_sub_iqs_valid;
  assign oAMSpin_12_shift_i_3 = _zz_shift_i_map_port36;
  assign oAMSpin_12_shift_q_3 = _zz_shift_q_map_port36;
  assign mod_sub_iqs_vec_35_cha_i = oAMSpin_12_mod_sub_iqs_payload_3_cha_i;
  assign mod_sub_iqs_vec_35_cha_q = oAMSpin_12_mod_sub_iqs_payload_3_cha_q;
  assign mod_sub_valid_vec_35 = oAMSpin_12_mod_sub_iqs_valid;
  assign oAMSpin_12_shift_i_4 = _zz_shift_i_map_port37;
  assign oAMSpin_12_shift_q_4 = _zz_shift_q_map_port37;
  assign mod_sub_iqs_vec_36_cha_i = oAMSpin_12_mod_sub_iqs_payload_4_cha_i;
  assign mod_sub_iqs_vec_36_cha_q = oAMSpin_12_mod_sub_iqs_payload_4_cha_q;
  assign mod_sub_valid_vec_36 = oAMSpin_12_mod_sub_iqs_valid;
  assign oAMSpin_12_shift_i_5 = _zz_shift_i_map_port38;
  assign oAMSpin_12_shift_q_5 = _zz_shift_q_map_port38;
  assign mod_sub_iqs_vec_37_cha_i = oAMSpin_12_mod_sub_iqs_payload_5_cha_i;
  assign mod_sub_iqs_vec_37_cha_q = oAMSpin_12_mod_sub_iqs_payload_5_cha_q;
  assign mod_sub_valid_vec_37 = oAMSpin_12_mod_sub_iqs_valid;
  assign oAMSpin_12_shift_i_6 = _zz_shift_i_map_port39;
  assign oAMSpin_12_shift_q_6 = _zz_shift_q_map_port39;
  assign mod_sub_iqs_vec_38_cha_i = oAMSpin_12_mod_sub_iqs_payload_6_cha_i;
  assign mod_sub_iqs_vec_38_cha_q = oAMSpin_12_mod_sub_iqs_payload_6_cha_q;
  assign mod_sub_valid_vec_38 = oAMSpin_12_mod_sub_iqs_valid;
  assign oAMSpin_12_shift_i_7 = _zz_shift_i_map_port40;
  assign oAMSpin_12_shift_q_7 = _zz_shift_q_map_port40;
  assign mod_sub_iqs_vec_39_cha_i = oAMSpin_12_mod_sub_iqs_payload_7_cha_i;
  assign mod_sub_iqs_vec_39_cha_q = oAMSpin_12_mod_sub_iqs_payload_7_cha_q;
  assign mod_sub_valid_vec_39 = oAMSpin_12_mod_sub_iqs_valid;
  assign oAMSpin_13_shift_i_0 = _zz_shift_i_map_port41;
  assign oAMSpin_13_shift_q_0 = _zz_shift_q_map_port41;
  assign mod_sub_iqs_vec_40_cha_i = oAMSpin_13_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_40_cha_q = oAMSpin_13_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_40 = oAMSpin_13_mod_sub_iqs_valid;
  assign oAMSpin_13_shift_i_1 = _zz_shift_i_map_port42;
  assign oAMSpin_13_shift_q_1 = _zz_shift_q_map_port42;
  assign mod_sub_iqs_vec_41_cha_i = oAMSpin_13_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_41_cha_q = oAMSpin_13_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_41 = oAMSpin_13_mod_sub_iqs_valid;
  assign oAMSpin_13_shift_i_2 = _zz_shift_i_map_port43;
  assign oAMSpin_13_shift_q_2 = _zz_shift_q_map_port43;
  assign mod_sub_iqs_vec_42_cha_i = oAMSpin_13_mod_sub_iqs_payload_2_cha_i;
  assign mod_sub_iqs_vec_42_cha_q = oAMSpin_13_mod_sub_iqs_payload_2_cha_q;
  assign mod_sub_valid_vec_42 = oAMSpin_13_mod_sub_iqs_valid;
  assign oAMSpin_13_shift_i_3 = _zz_shift_i_map_port44;
  assign oAMSpin_13_shift_q_3 = _zz_shift_q_map_port44;
  assign mod_sub_iqs_vec_43_cha_i = oAMSpin_13_mod_sub_iqs_payload_3_cha_i;
  assign mod_sub_iqs_vec_43_cha_q = oAMSpin_13_mod_sub_iqs_payload_3_cha_q;
  assign mod_sub_valid_vec_43 = oAMSpin_13_mod_sub_iqs_valid;
  assign oAMSpin_13_shift_i_4 = _zz_shift_i_map_port45;
  assign oAMSpin_13_shift_q_4 = _zz_shift_q_map_port45;
  assign mod_sub_iqs_vec_44_cha_i = oAMSpin_13_mod_sub_iqs_payload_4_cha_i;
  assign mod_sub_iqs_vec_44_cha_q = oAMSpin_13_mod_sub_iqs_payload_4_cha_q;
  assign mod_sub_valid_vec_44 = oAMSpin_13_mod_sub_iqs_valid;
  assign oAMSpin_13_shift_i_5 = _zz_shift_i_map_port46;
  assign oAMSpin_13_shift_q_5 = _zz_shift_q_map_port46;
  assign mod_sub_iqs_vec_45_cha_i = oAMSpin_13_mod_sub_iqs_payload_5_cha_i;
  assign mod_sub_iqs_vec_45_cha_q = oAMSpin_13_mod_sub_iqs_payload_5_cha_q;
  assign mod_sub_valid_vec_45 = oAMSpin_13_mod_sub_iqs_valid;
  assign oAMSpin_13_shift_i_6 = _zz_shift_i_map_port47;
  assign oAMSpin_13_shift_q_6 = _zz_shift_q_map_port47;
  assign mod_sub_iqs_vec_46_cha_i = oAMSpin_13_mod_sub_iqs_payload_6_cha_i;
  assign mod_sub_iqs_vec_46_cha_q = oAMSpin_13_mod_sub_iqs_payload_6_cha_q;
  assign mod_sub_valid_vec_46 = oAMSpin_13_mod_sub_iqs_valid;
  assign oAMSpin_13_shift_i_7 = _zz_shift_i_map_port48;
  assign oAMSpin_13_shift_q_7 = _zz_shift_q_map_port48;
  assign mod_sub_iqs_vec_47_cha_i = oAMSpin_13_mod_sub_iqs_payload_7_cha_i;
  assign mod_sub_iqs_vec_47_cha_q = oAMSpin_13_mod_sub_iqs_payload_7_cha_q;
  assign mod_sub_valid_vec_47 = oAMSpin_13_mod_sub_iqs_valid;
  assign oAMSpin_14_shift_i_0 = _zz_shift_i_map_port49;
  assign oAMSpin_14_shift_q_0 = _zz_shift_q_map_port49;
  assign mod_sub_iqs_vec_48_cha_i = oAMSpin_14_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_48_cha_q = oAMSpin_14_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_48 = oAMSpin_14_mod_sub_iqs_valid;
  assign oAMSpin_14_shift_i_1 = _zz_shift_i_map_port50;
  assign oAMSpin_14_shift_q_1 = _zz_shift_q_map_port50;
  assign mod_sub_iqs_vec_49_cha_i = oAMSpin_14_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_49_cha_q = oAMSpin_14_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_49 = oAMSpin_14_mod_sub_iqs_valid;
  assign oAMSpin_14_shift_i_2 = _zz_shift_i_map_port51;
  assign oAMSpin_14_shift_q_2 = _zz_shift_q_map_port51;
  assign mod_sub_iqs_vec_50_cha_i = oAMSpin_14_mod_sub_iqs_payload_2_cha_i;
  assign mod_sub_iqs_vec_50_cha_q = oAMSpin_14_mod_sub_iqs_payload_2_cha_q;
  assign mod_sub_valid_vec_50 = oAMSpin_14_mod_sub_iqs_valid;
  assign oAMSpin_14_shift_i_3 = _zz_shift_i_map_port52;
  assign oAMSpin_14_shift_q_3 = _zz_shift_q_map_port52;
  assign mod_sub_iqs_vec_51_cha_i = oAMSpin_14_mod_sub_iqs_payload_3_cha_i;
  assign mod_sub_iqs_vec_51_cha_q = oAMSpin_14_mod_sub_iqs_payload_3_cha_q;
  assign mod_sub_valid_vec_51 = oAMSpin_14_mod_sub_iqs_valid;
  assign oAMSpin_14_shift_i_4 = _zz_shift_i_map_port53;
  assign oAMSpin_14_shift_q_4 = _zz_shift_q_map_port53;
  assign mod_sub_iqs_vec_52_cha_i = oAMSpin_14_mod_sub_iqs_payload_4_cha_i;
  assign mod_sub_iqs_vec_52_cha_q = oAMSpin_14_mod_sub_iqs_payload_4_cha_q;
  assign mod_sub_valid_vec_52 = oAMSpin_14_mod_sub_iqs_valid;
  assign oAMSpin_14_shift_i_5 = _zz_shift_i_map_port54;
  assign oAMSpin_14_shift_q_5 = _zz_shift_q_map_port54;
  assign mod_sub_iqs_vec_53_cha_i = oAMSpin_14_mod_sub_iqs_payload_5_cha_i;
  assign mod_sub_iqs_vec_53_cha_q = oAMSpin_14_mod_sub_iqs_payload_5_cha_q;
  assign mod_sub_valid_vec_53 = oAMSpin_14_mod_sub_iqs_valid;
  assign oAMSpin_14_shift_i_6 = _zz_shift_i_map_port55;
  assign oAMSpin_14_shift_q_6 = _zz_shift_q_map_port55;
  assign mod_sub_iqs_vec_54_cha_i = oAMSpin_14_mod_sub_iqs_payload_6_cha_i;
  assign mod_sub_iqs_vec_54_cha_q = oAMSpin_14_mod_sub_iqs_payload_6_cha_q;
  assign mod_sub_valid_vec_54 = oAMSpin_14_mod_sub_iqs_valid;
  assign oAMSpin_14_shift_i_7 = _zz_shift_i_map_port56;
  assign oAMSpin_14_shift_q_7 = _zz_shift_q_map_port56;
  assign mod_sub_iqs_vec_55_cha_i = oAMSpin_14_mod_sub_iqs_payload_7_cha_i;
  assign mod_sub_iqs_vec_55_cha_q = oAMSpin_14_mod_sub_iqs_payload_7_cha_q;
  assign mod_sub_valid_vec_55 = oAMSpin_14_mod_sub_iqs_valid;
  assign oAMSpin_15_shift_i_0 = _zz_shift_i_map_port57;
  assign oAMSpin_15_shift_q_0 = _zz_shift_q_map_port57;
  assign mod_sub_iqs_vec_56_cha_i = oAMSpin_15_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_56_cha_q = oAMSpin_15_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_56 = oAMSpin_15_mod_sub_iqs_valid;
  assign oAMSpin_15_shift_i_1 = _zz_shift_i_map_port58;
  assign oAMSpin_15_shift_q_1 = _zz_shift_q_map_port58;
  assign mod_sub_iqs_vec_57_cha_i = oAMSpin_15_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_57_cha_q = oAMSpin_15_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_57 = oAMSpin_15_mod_sub_iqs_valid;
  assign oAMSpin_15_shift_i_2 = _zz_shift_i_map_port59;
  assign oAMSpin_15_shift_q_2 = _zz_shift_q_map_port59;
  assign mod_sub_iqs_vec_58_cha_i = oAMSpin_15_mod_sub_iqs_payload_2_cha_i;
  assign mod_sub_iqs_vec_58_cha_q = oAMSpin_15_mod_sub_iqs_payload_2_cha_q;
  assign mod_sub_valid_vec_58 = oAMSpin_15_mod_sub_iqs_valid;
  assign oAMSpin_15_shift_i_3 = _zz_shift_i_map_port60;
  assign oAMSpin_15_shift_q_3 = _zz_shift_q_map_port60;
  assign mod_sub_iqs_vec_59_cha_i = oAMSpin_15_mod_sub_iqs_payload_3_cha_i;
  assign mod_sub_iqs_vec_59_cha_q = oAMSpin_15_mod_sub_iqs_payload_3_cha_q;
  assign mod_sub_valid_vec_59 = oAMSpin_15_mod_sub_iqs_valid;
  assign oAMSpin_15_shift_i_4 = _zz_shift_i_map_port61;
  assign oAMSpin_15_shift_q_4 = _zz_shift_q_map_port61;
  assign mod_sub_iqs_vec_60_cha_i = oAMSpin_15_mod_sub_iqs_payload_4_cha_i;
  assign mod_sub_iqs_vec_60_cha_q = oAMSpin_15_mod_sub_iqs_payload_4_cha_q;
  assign mod_sub_valid_vec_60 = oAMSpin_15_mod_sub_iqs_valid;
  assign oAMSpin_15_shift_i_5 = _zz_shift_i_map_port62;
  assign oAMSpin_15_shift_q_5 = _zz_shift_q_map_port62;
  assign mod_sub_iqs_vec_61_cha_i = oAMSpin_15_mod_sub_iqs_payload_5_cha_i;
  assign mod_sub_iqs_vec_61_cha_q = oAMSpin_15_mod_sub_iqs_payload_5_cha_q;
  assign mod_sub_valid_vec_61 = oAMSpin_15_mod_sub_iqs_valid;
  assign oAMSpin_15_shift_i_6 = _zz_shift_i_map_port63;
  assign oAMSpin_15_shift_q_6 = _zz_shift_q_map_port63;
  assign mod_sub_iqs_vec_62_cha_i = oAMSpin_15_mod_sub_iqs_payload_6_cha_i;
  assign mod_sub_iqs_vec_62_cha_q = oAMSpin_15_mod_sub_iqs_payload_6_cha_q;
  assign mod_sub_valid_vec_62 = oAMSpin_15_mod_sub_iqs_valid;
  assign oAMSpin_15_shift_i_7 = _zz_shift_i_map_port64;
  assign oAMSpin_15_shift_q_7 = _zz_shift_q_map_port64;
  assign mod_sub_iqs_vec_63_cha_i = oAMSpin_15_mod_sub_iqs_payload_7_cha_i;
  assign mod_sub_iqs_vec_63_cha_q = oAMSpin_15_mod_sub_iqs_payload_7_cha_q;
  assign mod_sub_valid_vec_63 = oAMSpin_15_mod_sub_iqs_valid;
  assign mod_iqs_payload_0_cha_i = chaCompose_8_mod_iq_payload_cha_i;
  assign mod_iqs_payload_0_cha_q = chaCompose_8_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_0 = chaCompose_8_mod_iq_valid;
  assign mod_iqs_payload_1_cha_i = chaCompose_9_mod_iq_payload_cha_i;
  assign mod_iqs_payload_1_cha_q = chaCompose_9_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_1 = chaCompose_9_mod_iq_valid;
  assign mod_iqs_payload_2_cha_i = chaCompose_10_mod_iq_payload_cha_i;
  assign mod_iqs_payload_2_cha_q = chaCompose_10_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_2 = chaCompose_10_mod_iq_valid;
  assign mod_iqs_payload_3_cha_i = chaCompose_11_mod_iq_payload_cha_i;
  assign mod_iqs_payload_3_cha_q = chaCompose_11_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_3 = chaCompose_11_mod_iq_valid;
  assign mod_iqs_payload_4_cha_i = chaCompose_12_mod_iq_payload_cha_i;
  assign mod_iqs_payload_4_cha_q = chaCompose_12_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_4 = chaCompose_12_mod_iq_valid;
  assign mod_iqs_payload_5_cha_i = chaCompose_13_mod_iq_payload_cha_i;
  assign mod_iqs_payload_5_cha_q = chaCompose_13_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_5 = chaCompose_13_mod_iq_valid;
  assign mod_iqs_payload_6_cha_i = chaCompose_14_mod_iq_payload_cha_i;
  assign mod_iqs_payload_6_cha_q = chaCompose_14_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_6 = chaCompose_14_mod_iq_valid;
  assign mod_iqs_payload_7_cha_i = chaCompose_15_mod_iq_payload_cha_i;
  assign mod_iqs_payload_7_cha_q = chaCompose_15_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_7 = chaCompose_15_mod_iq_valid;
  assign mod_iqs_valid = (((((((mod_iq_valid_vec_0 && mod_iq_valid_vec_1) && mod_iq_valid_vec_2) && mod_iq_valid_vec_3) && mod_iq_valid_vec_4) && mod_iq_valid_vec_5) && mod_iq_valid_vec_6) && mod_iq_valid_vec_7);

endmodule

//ChaCompose replaced by ChaCompose

//ChaCompose replaced by ChaCompose

//ChaCompose replaced by ChaCompose

//ChaCompose replaced by ChaCompose

//ChaCompose replaced by ChaCompose

//ChaCompose replaced by ChaCompose

//ChaCompose replaced by ChaCompose

module ChaCompose (
  input               mod_sub_iqs_0_valid,
  input      [31:0]   mod_sub_iqs_0_payload_cha_i,
  input      [31:0]   mod_sub_iqs_0_payload_cha_q,
  input               mod_sub_iqs_1_valid,
  input      [31:0]   mod_sub_iqs_1_payload_cha_i,
  input      [31:0]   mod_sub_iqs_1_payload_cha_q,
  input               mod_sub_iqs_2_valid,
  input      [31:0]   mod_sub_iqs_2_payload_cha_i,
  input      [31:0]   mod_sub_iqs_2_payload_cha_q,
  input               mod_sub_iqs_3_valid,
  input      [31:0]   mod_sub_iqs_3_payload_cha_i,
  input      [31:0]   mod_sub_iqs_3_payload_cha_q,
  input               mod_sub_iqs_4_valid,
  input      [31:0]   mod_sub_iqs_4_payload_cha_i,
  input      [31:0]   mod_sub_iqs_4_payload_cha_q,
  input               mod_sub_iqs_5_valid,
  input      [31:0]   mod_sub_iqs_5_payload_cha_i,
  input      [31:0]   mod_sub_iqs_5_payload_cha_q,
  input               mod_sub_iqs_6_valid,
  input      [31:0]   mod_sub_iqs_6_payload_cha_i,
  input      [31:0]   mod_sub_iqs_6_payload_cha_q,
  input               mod_sub_iqs_7_valid,
  input      [31:0]   mod_sub_iqs_7_payload_cha_i,
  input      [31:0]   mod_sub_iqs_7_payload_cha_q,
  output              mod_iq_valid,
  output     [31:0]   mod_iq_payload_cha_i,
  output     [31:0]   mod_iq_payload_cha_q
);
  wire       [28:0]   _zz_sub_i_data_vec_0;
  wire       [28:0]   _zz_sub_q_data_vec_0;
  wire       [28:0]   _zz_sub_i_data_vec_1;
  wire       [28:0]   _zz_sub_q_data_vec_1;
  wire       [28:0]   _zz_sub_i_data_vec_2;
  wire       [28:0]   _zz_sub_q_data_vec_2;
  wire       [28:0]   _zz_sub_i_data_vec_3;
  wire       [28:0]   _zz_sub_q_data_vec_3;
  wire       [28:0]   _zz_sub_i_data_vec_4;
  wire       [28:0]   _zz_sub_q_data_vec_4;
  wire       [28:0]   _zz_sub_i_data_vec_5;
  wire       [28:0]   _zz_sub_q_data_vec_5;
  wire       [28:0]   _zz_sub_i_data_vec_6;
  wire       [28:0]   _zz_sub_q_data_vec_6;
  wire       [28:0]   _zz_sub_i_data_vec_7;
  wire       [28:0]   _zz_sub_q_data_vec_7;
  wire       [31:0]   _zz_mod_iq_payload_cha_i;
  wire       [31:0]   _zz_mod_iq_payload_cha_i_1;
  wire       [31:0]   _zz_mod_iq_payload_cha_i_2;
  wire       [31:0]   _zz_mod_iq_payload_cha_i_3;
  wire       [31:0]   _zz_mod_iq_payload_cha_i_4;
  wire       [31:0]   _zz_mod_iq_payload_cha_i_5;
  wire       [31:0]   _zz_mod_iq_payload_cha_q;
  wire       [31:0]   _zz_mod_iq_payload_cha_q_1;
  wire       [31:0]   _zz_mod_iq_payload_cha_q_2;
  wire       [31:0]   _zz_mod_iq_payload_cha_q_3;
  wire       [31:0]   _zz_mod_iq_payload_cha_q_4;
  wire       [31:0]   _zz_mod_iq_payload_cha_q_5;
  wire       [31:0]   sub_i_data_vec_0;
  wire       [31:0]   sub_i_data_vec_1;
  wire       [31:0]   sub_i_data_vec_2;
  wire       [31:0]   sub_i_data_vec_3;
  wire       [31:0]   sub_i_data_vec_4;
  wire       [31:0]   sub_i_data_vec_5;
  wire       [31:0]   sub_i_data_vec_6;
  wire       [31:0]   sub_i_data_vec_7;
  wire       [31:0]   sub_q_data_vec_0;
  wire       [31:0]   sub_q_data_vec_1;
  wire       [31:0]   sub_q_data_vec_2;
  wire       [31:0]   sub_q_data_vec_3;
  wire       [31:0]   sub_q_data_vec_4;
  wire       [31:0]   sub_q_data_vec_5;
  wire       [31:0]   sub_q_data_vec_6;
  wire       [31:0]   sub_q_data_vec_7;
  wire                sub_iqs_valid_vec_0;
  wire                sub_iqs_valid_vec_1;
  wire                sub_iqs_valid_vec_2;
  wire                sub_iqs_valid_vec_3;
  wire                sub_iqs_valid_vec_4;
  wire                sub_iqs_valid_vec_5;
  wire                sub_iqs_valid_vec_6;
  wire                sub_iqs_valid_vec_7;

  assign _zz_sub_i_data_vec_0 = (mod_sub_iqs_0_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_0 = (mod_sub_iqs_0_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_1 = (mod_sub_iqs_1_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_1 = (mod_sub_iqs_1_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_2 = (mod_sub_iqs_2_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_2 = (mod_sub_iqs_2_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_3 = (mod_sub_iqs_3_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_3 = (mod_sub_iqs_3_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_4 = (mod_sub_iqs_4_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_4 = (mod_sub_iqs_4_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_5 = (mod_sub_iqs_5_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_5 = (mod_sub_iqs_5_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_6 = (mod_sub_iqs_6_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_6 = (mod_sub_iqs_6_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_7 = (mod_sub_iqs_7_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_7 = (mod_sub_iqs_7_payload_cha_q >>> 3);
  assign _zz_mod_iq_payload_cha_i = ($signed(_zz_mod_iq_payload_cha_i_1) + $signed(_zz_mod_iq_payload_cha_i_2));
  assign _zz_mod_iq_payload_cha_i_1 = ($signed(sub_i_data_vec_0) + $signed(sub_i_data_vec_1));
  assign _zz_mod_iq_payload_cha_i_2 = ($signed(sub_i_data_vec_2) + $signed(sub_i_data_vec_3));
  assign _zz_mod_iq_payload_cha_i_3 = ($signed(_zz_mod_iq_payload_cha_i_4) + $signed(_zz_mod_iq_payload_cha_i_5));
  assign _zz_mod_iq_payload_cha_i_4 = ($signed(sub_i_data_vec_4) + $signed(sub_i_data_vec_5));
  assign _zz_mod_iq_payload_cha_i_5 = ($signed(sub_i_data_vec_6) + $signed(sub_i_data_vec_7));
  assign _zz_mod_iq_payload_cha_q = ($signed(_zz_mod_iq_payload_cha_q_1) + $signed(_zz_mod_iq_payload_cha_q_2));
  assign _zz_mod_iq_payload_cha_q_1 = ($signed(sub_q_data_vec_0) + $signed(sub_q_data_vec_1));
  assign _zz_mod_iq_payload_cha_q_2 = ($signed(sub_q_data_vec_2) + $signed(sub_q_data_vec_3));
  assign _zz_mod_iq_payload_cha_q_3 = ($signed(_zz_mod_iq_payload_cha_q_4) + $signed(_zz_mod_iq_payload_cha_q_5));
  assign _zz_mod_iq_payload_cha_q_4 = ($signed(sub_q_data_vec_4) + $signed(sub_q_data_vec_5));
  assign _zz_mod_iq_payload_cha_q_5 = ($signed(sub_q_data_vec_6) + $signed(sub_q_data_vec_7));
  assign sub_i_data_vec_0 = {{3{_zz_sub_i_data_vec_0[28]}}, _zz_sub_i_data_vec_0};
  assign sub_q_data_vec_0 = {{3{_zz_sub_q_data_vec_0[28]}}, _zz_sub_q_data_vec_0};
  assign sub_iqs_valid_vec_0 = mod_sub_iqs_0_valid;
  assign sub_i_data_vec_1 = {{3{_zz_sub_i_data_vec_1[28]}}, _zz_sub_i_data_vec_1};
  assign sub_q_data_vec_1 = {{3{_zz_sub_q_data_vec_1[28]}}, _zz_sub_q_data_vec_1};
  assign sub_iqs_valid_vec_1 = mod_sub_iqs_1_valid;
  assign sub_i_data_vec_2 = {{3{_zz_sub_i_data_vec_2[28]}}, _zz_sub_i_data_vec_2};
  assign sub_q_data_vec_2 = {{3{_zz_sub_q_data_vec_2[28]}}, _zz_sub_q_data_vec_2};
  assign sub_iqs_valid_vec_2 = mod_sub_iqs_2_valid;
  assign sub_i_data_vec_3 = {{3{_zz_sub_i_data_vec_3[28]}}, _zz_sub_i_data_vec_3};
  assign sub_q_data_vec_3 = {{3{_zz_sub_q_data_vec_3[28]}}, _zz_sub_q_data_vec_3};
  assign sub_iqs_valid_vec_3 = mod_sub_iqs_3_valid;
  assign sub_i_data_vec_4 = {{3{_zz_sub_i_data_vec_4[28]}}, _zz_sub_i_data_vec_4};
  assign sub_q_data_vec_4 = {{3{_zz_sub_q_data_vec_4[28]}}, _zz_sub_q_data_vec_4};
  assign sub_iqs_valid_vec_4 = mod_sub_iqs_4_valid;
  assign sub_i_data_vec_5 = {{3{_zz_sub_i_data_vec_5[28]}}, _zz_sub_i_data_vec_5};
  assign sub_q_data_vec_5 = {{3{_zz_sub_q_data_vec_5[28]}}, _zz_sub_q_data_vec_5};
  assign sub_iqs_valid_vec_5 = mod_sub_iqs_5_valid;
  assign sub_i_data_vec_6 = {{3{_zz_sub_i_data_vec_6[28]}}, _zz_sub_i_data_vec_6};
  assign sub_q_data_vec_6 = {{3{_zz_sub_q_data_vec_6[28]}}, _zz_sub_q_data_vec_6};
  assign sub_iqs_valid_vec_6 = mod_sub_iqs_6_valid;
  assign sub_i_data_vec_7 = {{3{_zz_sub_i_data_vec_7[28]}}, _zz_sub_i_data_vec_7};
  assign sub_q_data_vec_7 = {{3{_zz_sub_q_data_vec_7[28]}}, _zz_sub_q_data_vec_7};
  assign sub_iqs_valid_vec_7 = mod_sub_iqs_7_valid;
  assign mod_iq_payload_cha_i = ($signed(_zz_mod_iq_payload_cha_i) + $signed(_zz_mod_iq_payload_cha_i_3));
  assign mod_iq_payload_cha_q = ($signed(_zz_mod_iq_payload_cha_q) + $signed(_zz_mod_iq_payload_cha_q_3));
  assign mod_iq_valid = (((sub_iqs_valid_vec_0 && sub_iqs_valid_vec_1) && (sub_iqs_valid_vec_2 && sub_iqs_valid_vec_3)) && ((sub_iqs_valid_vec_4 && sub_iqs_valid_vec_5) && (sub_iqs_valid_vec_6 && sub_iqs_valid_vec_7)));

endmodule

//OAMSpin replaced by OAMSpin

//OAMSpin replaced by OAMSpin

//OAMSpin replaced by OAMSpin

//OAMSpin replaced by OAMSpin

//OAMSpin replaced by OAMSpin

//OAMSpin replaced by OAMSpin

//OAMSpin replaced by OAMSpin

module OAMSpin (
  input      [15:0]   shift_i_0,
  input      [15:0]   shift_i_1,
  input      [15:0]   shift_i_2,
  input      [15:0]   shift_i_3,
  input      [15:0]   shift_i_4,
  input      [15:0]   shift_i_5,
  input      [15:0]   shift_i_6,
  input      [15:0]   shift_i_7,
  input      [15:0]   shift_q_0,
  input      [15:0]   shift_q_1,
  input      [15:0]   shift_q_2,
  input      [15:0]   shift_q_3,
  input      [15:0]   shift_q_4,
  input      [15:0]   shift_q_5,
  input      [15:0]   shift_q_6,
  input      [15:0]   shift_q_7,
  input               base_iq_valid,
  input      [15:0]   base_iq_payload_cha_i,
  input      [15:0]   base_iq_payload_cha_q,
  output              mod_sub_iqs_valid,
  output     [31:0]   mod_sub_iqs_payload_0_cha_i,
  output     [31:0]   mod_sub_iqs_payload_0_cha_q,
  output     [31:0]   mod_sub_iqs_payload_1_cha_i,
  output     [31:0]   mod_sub_iqs_payload_1_cha_q,
  output     [31:0]   mod_sub_iqs_payload_2_cha_i,
  output     [31:0]   mod_sub_iqs_payload_2_cha_q,
  output     [31:0]   mod_sub_iqs_payload_3_cha_i,
  output     [31:0]   mod_sub_iqs_payload_3_cha_q,
  output     [31:0]   mod_sub_iqs_payload_4_cha_i,
  output     [31:0]   mod_sub_iqs_payload_4_cha_q,
  output     [31:0]   mod_sub_iqs_payload_5_cha_i,
  output     [31:0]   mod_sub_iqs_payload_5_cha_q,
  output     [31:0]   mod_sub_iqs_payload_6_cha_i,
  output     [31:0]   mod_sub_iqs_payload_6_cha_q,
  output     [31:0]   mod_sub_iqs_payload_7_cha_i,
  output     [31:0]   mod_sub_iqs_payload_7_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire       [31:0]   _zz_mod_iqs_vec_0_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_0_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_0_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_0_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_1_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_1_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_1_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_1_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_2_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_2_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_2_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_2_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_3_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_3_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_3_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_3_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_4_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_4_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_4_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_4_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_5_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_5_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_5_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_5_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_6_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_6_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_6_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_6_cha_q_1;
  wire       [31:0]   _zz_mod_iqs_vec_7_cha_i;
  wire       [31:0]   _zz_mod_iqs_vec_7_cha_i_1;
  wire       [31:0]   _zz_mod_iqs_vec_7_cha_q;
  wire       [31:0]   _zz_mod_iqs_vec_7_cha_q_1;
  reg        [15:0]   base_iq_buf_cha_i;
  reg        [15:0]   base_iq_buf_cha_q;
  reg                 base_valid_buf;
  reg        [31:0]   mod_iqs_vec_0_cha_i;
  reg        [31:0]   mod_iqs_vec_0_cha_q;
  reg        [31:0]   mod_iqs_vec_1_cha_i;
  reg        [31:0]   mod_iqs_vec_1_cha_q;
  reg        [31:0]   mod_iqs_vec_2_cha_i;
  reg        [31:0]   mod_iqs_vec_2_cha_q;
  reg        [31:0]   mod_iqs_vec_3_cha_i;
  reg        [31:0]   mod_iqs_vec_3_cha_q;
  reg        [31:0]   mod_iqs_vec_4_cha_i;
  reg        [31:0]   mod_iqs_vec_4_cha_q;
  reg        [31:0]   mod_iqs_vec_5_cha_i;
  reg        [31:0]   mod_iqs_vec_5_cha_q;
  reg        [31:0]   mod_iqs_vec_6_cha_i;
  reg        [31:0]   mod_iqs_vec_6_cha_q;
  reg        [31:0]   mod_iqs_vec_7_cha_i;
  reg        [31:0]   mod_iqs_vec_7_cha_q;
  reg                 mod_iqs_valid;

  assign _zz_mod_iqs_vec_0_cha_i = ($signed(shift_i_0) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_0_cha_i_1 = ($signed(shift_q_0) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_0_cha_q = ($signed(shift_q_0) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_0_cha_q_1 = ($signed(shift_i_0) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_1_cha_i = ($signed(shift_i_1) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_1_cha_i_1 = ($signed(shift_q_1) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_1_cha_q = ($signed(shift_q_1) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_1_cha_q_1 = ($signed(shift_i_1) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_2_cha_i = ($signed(shift_i_2) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_2_cha_i_1 = ($signed(shift_q_2) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_2_cha_q = ($signed(shift_q_2) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_2_cha_q_1 = ($signed(shift_i_2) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_3_cha_i = ($signed(shift_i_3) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_3_cha_i_1 = ($signed(shift_q_3) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_3_cha_q = ($signed(shift_q_3) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_3_cha_q_1 = ($signed(shift_i_3) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_4_cha_i = ($signed(shift_i_4) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_4_cha_i_1 = ($signed(shift_q_4) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_4_cha_q = ($signed(shift_q_4) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_4_cha_q_1 = ($signed(shift_i_4) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_5_cha_i = ($signed(shift_i_5) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_5_cha_i_1 = ($signed(shift_q_5) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_5_cha_q = ($signed(shift_q_5) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_5_cha_q_1 = ($signed(shift_i_5) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_6_cha_i = ($signed(shift_i_6) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_6_cha_i_1 = ($signed(shift_q_6) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_6_cha_q = ($signed(shift_q_6) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_6_cha_q_1 = ($signed(shift_i_6) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_7_cha_i = ($signed(shift_i_7) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_7_cha_i_1 = ($signed(shift_q_7) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_7_cha_q = ($signed(shift_q_7) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_7_cha_q_1 = ($signed(shift_i_7) * $signed(base_iq_buf_cha_q));
  assign mod_sub_iqs_payload_0_cha_i = mod_iqs_vec_0_cha_i;
  assign mod_sub_iqs_payload_0_cha_q = mod_iqs_vec_0_cha_q;
  assign mod_sub_iqs_payload_1_cha_i = mod_iqs_vec_1_cha_i;
  assign mod_sub_iqs_payload_1_cha_q = mod_iqs_vec_1_cha_q;
  assign mod_sub_iqs_payload_2_cha_i = mod_iqs_vec_2_cha_i;
  assign mod_sub_iqs_payload_2_cha_q = mod_iqs_vec_2_cha_q;
  assign mod_sub_iqs_payload_3_cha_i = mod_iqs_vec_3_cha_i;
  assign mod_sub_iqs_payload_3_cha_q = mod_iqs_vec_3_cha_q;
  assign mod_sub_iqs_payload_4_cha_i = mod_iqs_vec_4_cha_i;
  assign mod_sub_iqs_payload_4_cha_q = mod_iqs_vec_4_cha_q;
  assign mod_sub_iqs_payload_5_cha_i = mod_iqs_vec_5_cha_i;
  assign mod_sub_iqs_payload_5_cha_q = mod_iqs_vec_5_cha_q;
  assign mod_sub_iqs_payload_6_cha_i = mod_iqs_vec_6_cha_i;
  assign mod_sub_iqs_payload_6_cha_q = mod_iqs_vec_6_cha_q;
  assign mod_sub_iqs_payload_7_cha_i = mod_iqs_vec_7_cha_i;
  assign mod_sub_iqs_payload_7_cha_q = mod_iqs_vec_7_cha_q;
  assign mod_sub_iqs_valid = mod_iqs_valid;
  always @(posedge rf_clk) begin
    base_iq_buf_cha_i <= base_iq_payload_cha_i;
    base_iq_buf_cha_q <= base_iq_payload_cha_q;
    if(base_valid_buf) begin
      mod_iqs_vec_0_cha_i <= ($signed(_zz_mod_iqs_vec_0_cha_i) - $signed(_zz_mod_iqs_vec_0_cha_i_1));
      mod_iqs_vec_0_cha_q <= ($signed(_zz_mod_iqs_vec_0_cha_q) + $signed(_zz_mod_iqs_vec_0_cha_q_1));
      mod_iqs_vec_1_cha_i <= ($signed(_zz_mod_iqs_vec_1_cha_i) - $signed(_zz_mod_iqs_vec_1_cha_i_1));
      mod_iqs_vec_1_cha_q <= ($signed(_zz_mod_iqs_vec_1_cha_q) + $signed(_zz_mod_iqs_vec_1_cha_q_1));
      mod_iqs_vec_2_cha_i <= ($signed(_zz_mod_iqs_vec_2_cha_i) - $signed(_zz_mod_iqs_vec_2_cha_i_1));
      mod_iqs_vec_2_cha_q <= ($signed(_zz_mod_iqs_vec_2_cha_q) + $signed(_zz_mod_iqs_vec_2_cha_q_1));
      mod_iqs_vec_3_cha_i <= ($signed(_zz_mod_iqs_vec_3_cha_i) - $signed(_zz_mod_iqs_vec_3_cha_i_1));
      mod_iqs_vec_3_cha_q <= ($signed(_zz_mod_iqs_vec_3_cha_q) + $signed(_zz_mod_iqs_vec_3_cha_q_1));
      mod_iqs_vec_4_cha_i <= ($signed(_zz_mod_iqs_vec_4_cha_i) - $signed(_zz_mod_iqs_vec_4_cha_i_1));
      mod_iqs_vec_4_cha_q <= ($signed(_zz_mod_iqs_vec_4_cha_q) + $signed(_zz_mod_iqs_vec_4_cha_q_1));
      mod_iqs_vec_5_cha_i <= ($signed(_zz_mod_iqs_vec_5_cha_i) - $signed(_zz_mod_iqs_vec_5_cha_i_1));
      mod_iqs_vec_5_cha_q <= ($signed(_zz_mod_iqs_vec_5_cha_q) + $signed(_zz_mod_iqs_vec_5_cha_q_1));
      mod_iqs_vec_6_cha_i <= ($signed(_zz_mod_iqs_vec_6_cha_i) - $signed(_zz_mod_iqs_vec_6_cha_i_1));
      mod_iqs_vec_6_cha_q <= ($signed(_zz_mod_iqs_vec_6_cha_q) + $signed(_zz_mod_iqs_vec_6_cha_q_1));
      mod_iqs_vec_7_cha_i <= ($signed(_zz_mod_iqs_vec_7_cha_i) - $signed(_zz_mod_iqs_vec_7_cha_i_1));
      mod_iqs_vec_7_cha_q <= ($signed(_zz_mod_iqs_vec_7_cha_q) + $signed(_zz_mod_iqs_vec_7_cha_q_1));
    end else begin
      mod_iqs_vec_0_cha_i <= 32'h0;
      mod_iqs_vec_0_cha_q <= 32'h0;
      mod_iqs_vec_1_cha_i <= 32'h0;
      mod_iqs_vec_1_cha_q <= 32'h0;
      mod_iqs_vec_2_cha_i <= 32'h0;
      mod_iqs_vec_2_cha_q <= 32'h0;
      mod_iqs_vec_3_cha_i <= 32'h0;
      mod_iqs_vec_3_cha_q <= 32'h0;
      mod_iqs_vec_4_cha_i <= 32'h0;
      mod_iqs_vec_4_cha_q <= 32'h0;
      mod_iqs_vec_5_cha_i <= 32'h0;
      mod_iqs_vec_5_cha_q <= 32'h0;
      mod_iqs_vec_6_cha_i <= 32'h0;
      mod_iqs_vec_6_cha_q <= 32'h0;
      mod_iqs_vec_7_cha_i <= 32'h0;
      mod_iqs_vec_7_cha_q <= 32'h0;
    end
  end

  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      base_valid_buf <= 1'b0;
      mod_iqs_valid <= 1'b0;
    end else begin
      base_valid_buf <= base_iq_valid;
      if(base_valid_buf) begin
        mod_iqs_valid <= 1'b1;
      end else begin
        mod_iqs_valid <= 1'b0;
      end
    end
  end


endmodule
