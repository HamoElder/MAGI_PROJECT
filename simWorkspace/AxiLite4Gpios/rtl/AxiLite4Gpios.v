// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4Gpios
// Git hash  : 7062b2d46bd2847283195a25ed1c22f9f1827302



module AxiLite4Gpios (
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
   inout     [15:0]   gpio_0,
   inout     [15:0]   gpio_1,
  output              interrupt_0,
  output              interrupt_1,
  input               clk,
  input               reset
);
  reg        [15:0]   gpios_2_gpios_read;
  reg        [15:0]   gpios_3_gpios_read;
  wire       [15:0]   gpios_2_gpios_write;
  wire       [15:0]   gpios_2_gpios_writeEnable;
  wire       [15:0]   gpios_2_gpios_read_1;
  wire       [15:0]   gpios_2_interrupt;
  wire       [15:0]   gpios_3_gpios_write;
  wire       [15:0]   gpios_3_gpios_writeEnable;
  wire       [15:0]   gpios_3_gpios_read_1;
  wire       [15:0]   gpios_3_interrupt;
  reg                 _zz_gpio_1;
  reg                 _zz_gpio_1_1;
  reg                 _zz_gpio_1_2;
  reg                 _zz_gpio_1_3;
  reg                 _zz_gpio_1_4;
  reg                 _zz_gpio_1_5;
  reg                 _zz_gpio_1_6;
  reg                 _zz_gpio_1_7;
  reg                 _zz_gpio_1_8;
  reg                 _zz_gpio_1_9;
  reg                 _zz_gpio_1_10;
  reg                 _zz_gpio_1_11;
  reg                 _zz_gpio_1_12;
  reg                 _zz_gpio_1_13;
  reg                 _zz_gpio_1_14;
  reg                 _zz_gpio_1_15;
  reg                 _zz_gpio_0;
  reg                 _zz_gpio_0_1;
  reg                 _zz_gpio_0_2;
  reg                 _zz_gpio_0_3;
  reg                 _zz_gpio_0_4;
  reg                 _zz_gpio_0_5;
  reg                 _zz_gpio_0_6;
  reg                 _zz_gpio_0_7;
  reg                 _zz_gpio_0_8;
  reg                 _zz_gpio_0_9;
  reg                 _zz_gpio_0_10;
  reg                 _zz_gpio_0_11;
  reg                 _zz_gpio_0_12;
  reg                 _zz_gpio_0_13;
  reg                 _zz_gpio_0_14;
  reg                 _zz_gpio_0_15;
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
  reg        [15:0]   gpios_2_gpios_writeEnable_1_driver;
  reg        [15:0]   gpios_2_gpios_write_1_driver;
  reg        [15:0]   gpios_2_ir_high_driver;
  reg        [15:0]   gpios_2_ir_low_driver;
  reg        [15:0]   gpios_2_ir_rise_driver;
  reg        [15:0]   gpios_2_ir_fall_driver;
  wire                when_AxiLite4Gpios_l37;
  wire                when_AxiLite4Gpios_l37_1;
  wire                when_AxiLite4Gpios_l37_2;
  wire                when_AxiLite4Gpios_l37_3;
  wire                when_AxiLite4Gpios_l37_4;
  wire                when_AxiLite4Gpios_l37_5;
  wire                when_AxiLite4Gpios_l37_6;
  wire                when_AxiLite4Gpios_l37_7;
  wire                when_AxiLite4Gpios_l37_8;
  wire                when_AxiLite4Gpios_l37_9;
  wire                when_AxiLite4Gpios_l37_10;
  wire                when_AxiLite4Gpios_l37_11;
  wire                when_AxiLite4Gpios_l37_12;
  wire                when_AxiLite4Gpios_l37_13;
  wire                when_AxiLite4Gpios_l37_14;
  wire                when_AxiLite4Gpios_l37_15;
  reg        [15:0]   gpios_3_gpios_writeEnable_1_driver;
  reg        [15:0]   gpios_3_gpios_write_1_driver;
  reg        [15:0]   gpios_3_ir_high_driver;
  reg        [15:0]   gpios_3_ir_low_driver;
  reg        [15:0]   gpios_3_ir_rise_driver;
  reg        [15:0]   gpios_3_ir_fall_driver;
  wire                when_AxiLite4Gpios_l37_16;
  wire                when_AxiLite4Gpios_l37_17;
  wire                when_AxiLite4Gpios_l37_18;
  wire                when_AxiLite4Gpios_l37_19;
  wire                when_AxiLite4Gpios_l37_20;
  wire                when_AxiLite4Gpios_l37_21;
  wire                when_AxiLite4Gpios_l37_22;
  wire                when_AxiLite4Gpios_l37_23;
  wire                when_AxiLite4Gpios_l37_24;
  wire                when_AxiLite4Gpios_l37_25;
  wire                when_AxiLite4Gpios_l37_26;
  wire                when_AxiLite4Gpios_l37_27;
  wire                when_AxiLite4Gpios_l37_28;
  wire                when_AxiLite4Gpios_l37_29;
  wire                when_AxiLite4Gpios_l37_30;
  wire                when_AxiLite4Gpios_l37_31;

  Gpios gpios_2 (
    .gpios_read             (gpios_2_gpios_read                  ), //i
    .gpios_write            (gpios_2_gpios_write                 ), //o
    .gpios_writeEnable      (gpios_2_gpios_writeEnable           ), //o
    .gpios_write_1          (gpios_2_gpios_write_1_driver        ), //i
    .gpios_read_1           (gpios_2_gpios_read_1                ), //o
    .gpios_writeEnable_1    (gpios_2_gpios_writeEnable_1_driver  ), //i
    .interrupt              (gpios_2_interrupt                   ), //o
    .ir_high                (gpios_2_ir_high_driver              ), //i
    .ir_low                 (gpios_2_ir_low_driver               ), //i
    .ir_rise                (gpios_2_ir_rise_driver              ), //i
    .ir_fall                (gpios_2_ir_fall_driver              ), //i
    .clk                    (clk                                 ), //i
    .reset                  (reset                               )  //i
  );
  Gpios_1 gpios_3 (
    .gpios_read             (gpios_3_gpios_read                  ), //i
    .gpios_write            (gpios_3_gpios_write                 ), //o
    .gpios_writeEnable      (gpios_3_gpios_writeEnable           ), //o
    .gpios_write_1          (gpios_3_gpios_write_1_driver        ), //i
    .gpios_read_1           (gpios_3_gpios_read_1                ), //o
    .gpios_writeEnable_1    (gpios_3_gpios_writeEnable_1_driver  ), //i
    .interrupt              (gpios_3_interrupt                   ), //o
    .ir_high                (gpios_3_ir_high_driver              ), //i
    .ir_low                 (gpios_3_ir_low_driver               ), //i
    .ir_rise                (gpios_3_ir_rise_driver              ), //i
    .ir_fall                (gpios_3_ir_fall_driver              ), //i
    .clk                    (clk                                 ), //i
    .reset                  (reset                               )  //i
  );
  assign gpio_0[0] = _zz_gpio_0_15 ? gpios_2_gpios_write[0] : 1'bz;
  assign gpio_0[1] = _zz_gpio_0_14 ? gpios_2_gpios_write[1] : 1'bz;
  assign gpio_0[2] = _zz_gpio_0_13 ? gpios_2_gpios_write[2] : 1'bz;
  assign gpio_0[3] = _zz_gpio_0_12 ? gpios_2_gpios_write[3] : 1'bz;
  assign gpio_0[4] = _zz_gpio_0_11 ? gpios_2_gpios_write[4] : 1'bz;
  assign gpio_0[5] = _zz_gpio_0_10 ? gpios_2_gpios_write[5] : 1'bz;
  assign gpio_0[6] = _zz_gpio_0_9 ? gpios_2_gpios_write[6] : 1'bz;
  assign gpio_0[7] = _zz_gpio_0_8 ? gpios_2_gpios_write[7] : 1'bz;
  assign gpio_0[8] = _zz_gpio_0_7 ? gpios_2_gpios_write[8] : 1'bz;
  assign gpio_0[9] = _zz_gpio_0_6 ? gpios_2_gpios_write[9] : 1'bz;
  assign gpio_0[10] = _zz_gpio_0_5 ? gpios_2_gpios_write[10] : 1'bz;
  assign gpio_0[11] = _zz_gpio_0_4 ? gpios_2_gpios_write[11] : 1'bz;
  assign gpio_0[12] = _zz_gpio_0_3 ? gpios_2_gpios_write[12] : 1'bz;
  assign gpio_0[13] = _zz_gpio_0_2 ? gpios_2_gpios_write[13] : 1'bz;
  assign gpio_0[14] = _zz_gpio_0_1 ? gpios_2_gpios_write[14] : 1'bz;
  assign gpio_0[15] = _zz_gpio_0 ? gpios_2_gpios_write[15] : 1'bz;
  assign gpio_1[0] = _zz_gpio_1_15 ? gpios_3_gpios_write[0] : 1'bz;
  assign gpio_1[1] = _zz_gpio_1_14 ? gpios_3_gpios_write[1] : 1'bz;
  assign gpio_1[2] = _zz_gpio_1_13 ? gpios_3_gpios_write[2] : 1'bz;
  assign gpio_1[3] = _zz_gpio_1_12 ? gpios_3_gpios_write[3] : 1'bz;
  assign gpio_1[4] = _zz_gpio_1_11 ? gpios_3_gpios_write[4] : 1'bz;
  assign gpio_1[5] = _zz_gpio_1_10 ? gpios_3_gpios_write[5] : 1'bz;
  assign gpio_1[6] = _zz_gpio_1_9 ? gpios_3_gpios_write[6] : 1'bz;
  assign gpio_1[7] = _zz_gpio_1_8 ? gpios_3_gpios_write[7] : 1'bz;
  assign gpio_1[8] = _zz_gpio_1_7 ? gpios_3_gpios_write[8] : 1'bz;
  assign gpio_1[9] = _zz_gpio_1_6 ? gpios_3_gpios_write[9] : 1'bz;
  assign gpio_1[10] = _zz_gpio_1_5 ? gpios_3_gpios_write[10] : 1'bz;
  assign gpio_1[11] = _zz_gpio_1_4 ? gpios_3_gpios_write[11] : 1'bz;
  assign gpio_1[12] = _zz_gpio_1_3 ? gpios_3_gpios_write[12] : 1'bz;
  assign gpio_1[13] = _zz_gpio_1_2 ? gpios_3_gpios_write[13] : 1'bz;
  assign gpio_1[14] = _zz_gpio_1_1 ? gpios_3_gpios_write[14] : 1'bz;
  assign gpio_1[15] = _zz_gpio_1 ? gpios_3_gpios_write[15] : 1'bz;
  always @(*) begin
    _zz_gpio_1 = 1'b0;
    if(when_AxiLite4Gpios_l37_31) begin
      _zz_gpio_1 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_1 = 1'b0;
    if(when_AxiLite4Gpios_l37_30) begin
      _zz_gpio_1_1 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_2 = 1'b0;
    if(when_AxiLite4Gpios_l37_29) begin
      _zz_gpio_1_2 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_3 = 1'b0;
    if(when_AxiLite4Gpios_l37_28) begin
      _zz_gpio_1_3 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_4 = 1'b0;
    if(when_AxiLite4Gpios_l37_27) begin
      _zz_gpio_1_4 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_5 = 1'b0;
    if(when_AxiLite4Gpios_l37_26) begin
      _zz_gpio_1_5 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_6 = 1'b0;
    if(when_AxiLite4Gpios_l37_25) begin
      _zz_gpio_1_6 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_7 = 1'b0;
    if(when_AxiLite4Gpios_l37_24) begin
      _zz_gpio_1_7 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_8 = 1'b0;
    if(when_AxiLite4Gpios_l37_23) begin
      _zz_gpio_1_8 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_9 = 1'b0;
    if(when_AxiLite4Gpios_l37_22) begin
      _zz_gpio_1_9 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_10 = 1'b0;
    if(when_AxiLite4Gpios_l37_21) begin
      _zz_gpio_1_10 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_11 = 1'b0;
    if(when_AxiLite4Gpios_l37_20) begin
      _zz_gpio_1_11 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_12 = 1'b0;
    if(when_AxiLite4Gpios_l37_19) begin
      _zz_gpio_1_12 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_13 = 1'b0;
    if(when_AxiLite4Gpios_l37_18) begin
      _zz_gpio_1_13 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_14 = 1'b0;
    if(when_AxiLite4Gpios_l37_17) begin
      _zz_gpio_1_14 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_1_15 = 1'b0;
    if(when_AxiLite4Gpios_l37_16) begin
      _zz_gpio_1_15 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0 = 1'b0;
    if(when_AxiLite4Gpios_l37_15) begin
      _zz_gpio_0 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_1 = 1'b0;
    if(when_AxiLite4Gpios_l37_14) begin
      _zz_gpio_0_1 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_2 = 1'b0;
    if(when_AxiLite4Gpios_l37_13) begin
      _zz_gpio_0_2 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_3 = 1'b0;
    if(when_AxiLite4Gpios_l37_12) begin
      _zz_gpio_0_3 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_4 = 1'b0;
    if(when_AxiLite4Gpios_l37_11) begin
      _zz_gpio_0_4 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_5 = 1'b0;
    if(when_AxiLite4Gpios_l37_10) begin
      _zz_gpio_0_5 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_6 = 1'b0;
    if(when_AxiLite4Gpios_l37_9) begin
      _zz_gpio_0_6 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_7 = 1'b0;
    if(when_AxiLite4Gpios_l37_8) begin
      _zz_gpio_0_7 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_8 = 1'b0;
    if(when_AxiLite4Gpios_l37_7) begin
      _zz_gpio_0_8 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_9 = 1'b0;
    if(when_AxiLite4Gpios_l37_6) begin
      _zz_gpio_0_9 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_10 = 1'b0;
    if(when_AxiLite4Gpios_l37_5) begin
      _zz_gpio_0_10 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_11 = 1'b0;
    if(when_AxiLite4Gpios_l37_4) begin
      _zz_gpio_0_11 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_12 = 1'b0;
    if(when_AxiLite4Gpios_l37_3) begin
      _zz_gpio_0_12 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_13 = 1'b0;
    if(when_AxiLite4Gpios_l37_2) begin
      _zz_gpio_0_13 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_14 = 1'b0;
    if(when_AxiLite4Gpios_l37_1) begin
      _zz_gpio_0_14 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_15 = 1'b0;
    if(when_AxiLite4Gpios_l37) begin
      _zz_gpio_0_15 = 1'b1;
    end
  end

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
        readRsp_data[15 : 0] = gpios_2_gpios_writeEnable_1_driver;
      end
      8'h04 : begin
        readRsp_data[15 : 0] = gpios_2_gpios_write_1_driver;
      end
      8'h08 : begin
        readRsp_data[15 : 0] = gpios_2_gpios_read_1;
      end
      8'h0c : begin
        readRsp_data[15 : 0] = gpios_2_interrupt;
      end
      8'h10 : begin
        readRsp_data[15 : 0] = gpios_2_ir_high_driver;
      end
      8'h14 : begin
        readRsp_data[15 : 0] = gpios_2_ir_low_driver;
      end
      8'h18 : begin
        readRsp_data[15 : 0] = gpios_2_ir_rise_driver;
      end
      8'h1c : begin
        readRsp_data[15 : 0] = gpios_2_ir_fall_driver;
      end
      8'h20 : begin
        readRsp_data[15 : 0] = gpios_3_gpios_writeEnable_1_driver;
      end
      8'h24 : begin
        readRsp_data[15 : 0] = gpios_3_gpios_write_1_driver;
      end
      8'h28 : begin
        readRsp_data[15 : 0] = gpios_3_gpios_read_1;
      end
      8'h2c : begin
        readRsp_data[15 : 0] = gpios_3_interrupt;
      end
      8'h30 : begin
        readRsp_data[15 : 0] = gpios_3_ir_high_driver;
      end
      8'h34 : begin
        readRsp_data[15 : 0] = gpios_3_ir_low_driver;
      end
      8'h38 : begin
        readRsp_data[15 : 0] = gpios_3_ir_rise_driver;
      end
      8'h3c : begin
        readRsp_data[15 : 0] = gpios_3_ir_fall_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  always @(*) begin
    gpios_2_gpios_read[0] = gpio_0[0];
    gpios_2_gpios_read[1] = gpio_0[1];
    gpios_2_gpios_read[2] = gpio_0[2];
    gpios_2_gpios_read[3] = gpio_0[3];
    gpios_2_gpios_read[4] = gpio_0[4];
    gpios_2_gpios_read[5] = gpio_0[5];
    gpios_2_gpios_read[6] = gpio_0[6];
    gpios_2_gpios_read[7] = gpio_0[7];
    gpios_2_gpios_read[8] = gpio_0[8];
    gpios_2_gpios_read[9] = gpio_0[9];
    gpios_2_gpios_read[10] = gpio_0[10];
    gpios_2_gpios_read[11] = gpio_0[11];
    gpios_2_gpios_read[12] = gpio_0[12];
    gpios_2_gpios_read[13] = gpio_0[13];
    gpios_2_gpios_read[14] = gpio_0[14];
    gpios_2_gpios_read[15] = gpio_0[15];
  end

  assign when_AxiLite4Gpios_l37 = gpios_2_gpios_writeEnable[0];
  assign when_AxiLite4Gpios_l37_1 = gpios_2_gpios_writeEnable[1];
  assign when_AxiLite4Gpios_l37_2 = gpios_2_gpios_writeEnable[2];
  assign when_AxiLite4Gpios_l37_3 = gpios_2_gpios_writeEnable[3];
  assign when_AxiLite4Gpios_l37_4 = gpios_2_gpios_writeEnable[4];
  assign when_AxiLite4Gpios_l37_5 = gpios_2_gpios_writeEnable[5];
  assign when_AxiLite4Gpios_l37_6 = gpios_2_gpios_writeEnable[6];
  assign when_AxiLite4Gpios_l37_7 = gpios_2_gpios_writeEnable[7];
  assign when_AxiLite4Gpios_l37_8 = gpios_2_gpios_writeEnable[8];
  assign when_AxiLite4Gpios_l37_9 = gpios_2_gpios_writeEnable[9];
  assign when_AxiLite4Gpios_l37_10 = gpios_2_gpios_writeEnable[10];
  assign when_AxiLite4Gpios_l37_11 = gpios_2_gpios_writeEnable[11];
  assign when_AxiLite4Gpios_l37_12 = gpios_2_gpios_writeEnable[12];
  assign when_AxiLite4Gpios_l37_13 = gpios_2_gpios_writeEnable[13];
  assign when_AxiLite4Gpios_l37_14 = gpios_2_gpios_writeEnable[14];
  assign when_AxiLite4Gpios_l37_15 = gpios_2_gpios_writeEnable[15];
  assign interrupt_0 = (gpios_2_interrupt != 16'h0);
  always @(*) begin
    gpios_3_gpios_read[0] = gpio_1[0];
    gpios_3_gpios_read[1] = gpio_1[1];
    gpios_3_gpios_read[2] = gpio_1[2];
    gpios_3_gpios_read[3] = gpio_1[3];
    gpios_3_gpios_read[4] = gpio_1[4];
    gpios_3_gpios_read[5] = gpio_1[5];
    gpios_3_gpios_read[6] = gpio_1[6];
    gpios_3_gpios_read[7] = gpio_1[7];
    gpios_3_gpios_read[8] = gpio_1[8];
    gpios_3_gpios_read[9] = gpio_1[9];
    gpios_3_gpios_read[10] = gpio_1[10];
    gpios_3_gpios_read[11] = gpio_1[11];
    gpios_3_gpios_read[12] = gpio_1[12];
    gpios_3_gpios_read[13] = gpio_1[13];
    gpios_3_gpios_read[14] = gpio_1[14];
    gpios_3_gpios_read[15] = gpio_1[15];
  end

  assign when_AxiLite4Gpios_l37_16 = gpios_3_gpios_writeEnable[0];
  assign when_AxiLite4Gpios_l37_17 = gpios_3_gpios_writeEnable[1];
  assign when_AxiLite4Gpios_l37_18 = gpios_3_gpios_writeEnable[2];
  assign when_AxiLite4Gpios_l37_19 = gpios_3_gpios_writeEnable[3];
  assign when_AxiLite4Gpios_l37_20 = gpios_3_gpios_writeEnable[4];
  assign when_AxiLite4Gpios_l37_21 = gpios_3_gpios_writeEnable[5];
  assign when_AxiLite4Gpios_l37_22 = gpios_3_gpios_writeEnable[6];
  assign when_AxiLite4Gpios_l37_23 = gpios_3_gpios_writeEnable[7];
  assign when_AxiLite4Gpios_l37_24 = gpios_3_gpios_writeEnable[8];
  assign when_AxiLite4Gpios_l37_25 = gpios_3_gpios_writeEnable[9];
  assign when_AxiLite4Gpios_l37_26 = gpios_3_gpios_writeEnable[10];
  assign when_AxiLite4Gpios_l37_27 = gpios_3_gpios_writeEnable[11];
  assign when_AxiLite4Gpios_l37_28 = gpios_3_gpios_writeEnable[12];
  assign when_AxiLite4Gpios_l37_29 = gpios_3_gpios_writeEnable[13];
  assign when_AxiLite4Gpios_l37_30 = gpios_3_gpios_writeEnable[14];
  assign when_AxiLite4Gpios_l37_31 = gpios_3_gpios_writeEnable[15];
  assign interrupt_1 = (gpios_3_interrupt != 16'h0);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      gpios_2_gpios_writeEnable_1_driver <= 16'h0;
      gpios_2_gpios_write_1_driver <= 16'h0;
      gpios_2_ir_high_driver <= 16'h0;
      gpios_2_ir_low_driver <= 16'h0;
      gpios_2_ir_rise_driver <= 16'h0;
      gpios_2_ir_fall_driver <= 16'h0;
      gpios_3_gpios_writeEnable_1_driver <= 16'h0;
      gpios_3_gpios_write_1_driver <= 16'h0;
      gpios_3_ir_high_driver <= 16'h0;
      gpios_3_ir_low_driver <= 16'h0;
      gpios_3_ir_rise_driver <= 16'h0;
      gpios_3_ir_fall_driver <= 16'h0;
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
            gpios_2_gpios_writeEnable_1_driver <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            gpios_2_gpios_write_1_driver <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h10 : begin
          if(writeOccur) begin
            gpios_2_ir_high_driver <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h14 : begin
          if(writeOccur) begin
            gpios_2_ir_low_driver <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h18 : begin
          if(writeOccur) begin
            gpios_2_ir_rise_driver <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h1c : begin
          if(writeOccur) begin
            gpios_2_ir_fall_driver <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h20 : begin
          if(writeOccur) begin
            gpios_3_gpios_writeEnable_1_driver <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h24 : begin
          if(writeOccur) begin
            gpios_3_gpios_write_1_driver <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h30 : begin
          if(writeOccur) begin
            gpios_3_ir_high_driver <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h34 : begin
          if(writeOccur) begin
            gpios_3_ir_low_driver <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h38 : begin
          if(writeOccur) begin
            gpios_3_ir_rise_driver <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h3c : begin
          if(writeOccur) begin
            gpios_3_ir_fall_driver <= axil4Ctrl_wdata[15 : 0];
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

module Gpios_1 (
  input      [15:0]   gpios_read,
  output reg [15:0]   gpios_write,
  output reg [15:0]   gpios_writeEnable,
  input      [15:0]   gpios_write_1,
  output reg [15:0]   gpios_read_1,
  input      [15:0]   gpios_writeEnable_1,
  output reg [15:0]   interrupt,
  input      [15:0]   ir_high,
  input      [15:0]   ir_low,
  input      [15:0]   ir_rise,
  input      [15:0]   ir_fall,
  input               clk,
  input               reset
);
  wire       [15:0]   gpios_read_buffercc_io_dataOut;
  wire       [15:0]   syncronized;
  reg        [15:0]   last;
  wire       [15:0]   interrupt_valid;
  function [15:0] zz_interrupt(input dummy);
    begin
      zz_interrupt[0] = 1'b0;
      zz_interrupt[1] = 1'b0;
      zz_interrupt[2] = 1'b0;
      zz_interrupt[3] = 1'b0;
      zz_interrupt[4] = 1'b0;
      zz_interrupt[5] = 1'b0;
      zz_interrupt[6] = 1'b0;
      zz_interrupt[7] = 1'b0;
      zz_interrupt[8] = 1'b0;
      zz_interrupt[9] = 1'b0;
      zz_interrupt[10] = 1'b0;
      zz_interrupt[11] = 1'b0;
      zz_interrupt[12] = 1'b0;
      zz_interrupt[13] = 1'b0;
      zz_interrupt[14] = 1'b0;
      zz_interrupt[15] = 1'b0;
    end
  endfunction
  wire [15:0] _zz_1;

  BufferCC gpios_read_buffercc (
    .io_dataIn     (gpios_read                      ), //i
    .io_dataOut    (gpios_read_buffercc_io_dataOut  ), //o
    .clk           (clk                             ), //i
    .reset         (reset                           )  //i
  );
  assign syncronized = gpios_read_buffercc_io_dataOut;
  always @(*) begin
    gpios_read_1[0] = syncronized[0];
    gpios_read_1[1] = syncronized[1];
    gpios_read_1[2] = syncronized[2];
    gpios_read_1[3] = syncronized[3];
    gpios_read_1[4] = syncronized[4];
    gpios_read_1[5] = syncronized[5];
    gpios_read_1[6] = syncronized[6];
    gpios_read_1[7] = syncronized[7];
    gpios_read_1[8] = syncronized[8];
    gpios_read_1[9] = syncronized[9];
    gpios_read_1[10] = syncronized[10];
    gpios_read_1[11] = syncronized[11];
    gpios_read_1[12] = syncronized[12];
    gpios_read_1[13] = syncronized[13];
    gpios_read_1[14] = syncronized[14];
    gpios_read_1[15] = syncronized[15];
  end

  always @(*) begin
    gpios_write[0] = gpios_write_1[0];
    gpios_write[1] = gpios_write_1[1];
    gpios_write[2] = gpios_write_1[2];
    gpios_write[3] = gpios_write_1[3];
    gpios_write[4] = gpios_write_1[4];
    gpios_write[5] = gpios_write_1[5];
    gpios_write[6] = gpios_write_1[6];
    gpios_write[7] = gpios_write_1[7];
    gpios_write[8] = gpios_write_1[8];
    gpios_write[9] = gpios_write_1[9];
    gpios_write[10] = gpios_write_1[10];
    gpios_write[11] = gpios_write_1[11];
    gpios_write[12] = gpios_write_1[12];
    gpios_write[13] = gpios_write_1[13];
    gpios_write[14] = gpios_write_1[14];
    gpios_write[15] = gpios_write_1[15];
  end

  always @(*) begin
    gpios_writeEnable[0] = gpios_writeEnable_1[0];
    gpios_writeEnable[1] = gpios_writeEnable_1[1];
    gpios_writeEnable[2] = gpios_writeEnable_1[2];
    gpios_writeEnable[3] = gpios_writeEnable_1[3];
    gpios_writeEnable[4] = gpios_writeEnable_1[4];
    gpios_writeEnable[5] = gpios_writeEnable_1[5];
    gpios_writeEnable[6] = gpios_writeEnable_1[6];
    gpios_writeEnable[7] = gpios_writeEnable_1[7];
    gpios_writeEnable[8] = gpios_writeEnable_1[8];
    gpios_writeEnable[9] = gpios_writeEnable_1[9];
    gpios_writeEnable[10] = gpios_writeEnable_1[10];
    gpios_writeEnable[11] = gpios_writeEnable_1[11];
    gpios_writeEnable[12] = gpios_writeEnable_1[12];
    gpios_writeEnable[13] = gpios_writeEnable_1[13];
    gpios_writeEnable[14] = gpios_writeEnable_1[14];
    gpios_writeEnable[15] = gpios_writeEnable_1[15];
  end

  assign interrupt_valid = ((((ir_high & syncronized) | (ir_low & (~ syncronized))) | (ir_rise & (syncronized & (~ last)))) | (ir_fall & ((~ syncronized) & last)));
  assign _zz_1 = zz_interrupt(1'b0);
  always @(*) interrupt = _zz_1;
  always @(posedge clk) begin
    last <= syncronized;
  end


endmodule

module Gpios (
  input      [15:0]   gpios_read,
  output reg [15:0]   gpios_write,
  output reg [15:0]   gpios_writeEnable,
  input      [15:0]   gpios_write_1,
  output reg [15:0]   gpios_read_1,
  input      [15:0]   gpios_writeEnable_1,
  output reg [15:0]   interrupt,
  input      [15:0]   ir_high,
  input      [15:0]   ir_low,
  input      [15:0]   ir_rise,
  input      [15:0]   ir_fall,
  input               clk,
  input               reset
);
  wire       [15:0]   gpios_read_buffercc_io_dataOut;
  wire       [15:0]   syncronized;
  reg        [15:0]   last;
  wire       [15:0]   interrupt_valid;

  BufferCC gpios_read_buffercc (
    .io_dataIn     (gpios_read                      ), //i
    .io_dataOut    (gpios_read_buffercc_io_dataOut  ), //o
    .clk           (clk                             ), //i
    .reset         (reset                           )  //i
  );
  assign syncronized = gpios_read_buffercc_io_dataOut;
  always @(*) begin
    gpios_read_1[0] = syncronized[0];
    gpios_read_1[1] = syncronized[1];
    gpios_read_1[2] = syncronized[2];
    gpios_read_1[3] = syncronized[3];
    gpios_read_1[4] = syncronized[4];
    gpios_read_1[5] = syncronized[5];
    gpios_read_1[6] = syncronized[6];
    gpios_read_1[7] = syncronized[7];
    gpios_read_1[8] = syncronized[8];
    gpios_read_1[9] = syncronized[9];
    gpios_read_1[10] = syncronized[10];
    gpios_read_1[11] = syncronized[11];
    gpios_read_1[12] = syncronized[12];
    gpios_read_1[13] = syncronized[13];
    gpios_read_1[14] = syncronized[14];
    gpios_read_1[15] = syncronized[15];
  end

  always @(*) begin
    gpios_write[0] = gpios_write_1[0];
    gpios_write[1] = gpios_write_1[1];
    gpios_write[2] = gpios_write_1[2];
    gpios_write[3] = gpios_write_1[3];
    gpios_write[4] = gpios_write_1[4];
    gpios_write[5] = gpios_write_1[5];
    gpios_write[6] = gpios_write_1[6];
    gpios_write[7] = gpios_write_1[7];
    gpios_write[8] = gpios_write_1[8];
    gpios_write[9] = gpios_write_1[9];
    gpios_write[10] = gpios_write_1[10];
    gpios_write[11] = gpios_write_1[11];
    gpios_write[12] = gpios_write_1[12];
    gpios_write[13] = gpios_write_1[13];
    gpios_write[14] = gpios_write_1[14];
    gpios_write[15] = gpios_write_1[15];
  end

  always @(*) begin
    gpios_writeEnable[0] = gpios_writeEnable_1[0];
    gpios_writeEnable[1] = gpios_writeEnable_1[1];
    gpios_writeEnable[2] = gpios_writeEnable_1[2];
    gpios_writeEnable[3] = gpios_writeEnable_1[3];
    gpios_writeEnable[4] = gpios_writeEnable_1[4];
    gpios_writeEnable[5] = gpios_writeEnable_1[5];
    gpios_writeEnable[6] = gpios_writeEnable_1[6];
    gpios_writeEnable[7] = gpios_writeEnable_1[7];
    gpios_writeEnable[8] = gpios_writeEnable_1[8];
    gpios_writeEnable[9] = gpios_writeEnable_1[9];
    gpios_writeEnable[10] = gpios_writeEnable_1[10];
    gpios_writeEnable[11] = gpios_writeEnable_1[11];
    gpios_writeEnable[12] = gpios_writeEnable_1[12];
    gpios_writeEnable[13] = gpios_writeEnable_1[13];
    gpios_writeEnable[14] = gpios_writeEnable_1[14];
    gpios_writeEnable[15] = gpios_writeEnable_1[15];
  end

  assign interrupt_valid = ((((ir_high & syncronized) | (ir_low & (~ syncronized))) | (ir_rise & (syncronized & (~ last)))) | (ir_fall & ((~ syncronized) & last)));
  always @(*) begin
    interrupt[0] = interrupt_valid[0];
    interrupt[1] = interrupt_valid[1];
    interrupt[2] = interrupt_valid[2];
    interrupt[3] = interrupt_valid[3];
    interrupt[4] = interrupt_valid[4];
    interrupt[5] = interrupt_valid[5];
    interrupt[6] = interrupt_valid[6];
    interrupt[7] = interrupt_valid[7];
    interrupt[8] = interrupt_valid[8];
    interrupt[9] = interrupt_valid[9];
    interrupt[10] = interrupt_valid[10];
    interrupt[11] = interrupt_valid[11];
    interrupt[12] = interrupt_valid[12];
    interrupt[13] = interrupt_valid[13];
    interrupt[14] = interrupt_valid[14];
    interrupt[15] = interrupt_valid[15];
  end

  always @(posedge clk) begin
    last <= syncronized;
  end


endmodule

//BufferCC replaced by BufferCC

module BufferCC (
  input      [15:0]   io_dataIn,
  output     [15:0]   io_dataOut,
  input               clk,
  input               reset
);
  (* async_reg = "true" *) reg        [15:0]   buffers_0;
  (* async_reg = "true" *) reg        [15:0]   buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    buffers_0 <= io_dataIn;
    buffers_1 <= buffers_0;
  end


endmodule
