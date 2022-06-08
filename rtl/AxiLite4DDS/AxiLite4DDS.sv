// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : AxiLite4DDS
// Git hash  : fe8ed706a25b5cda33f96062d5bdc80425e016eb

`timescale 1ns/1ps

module AxiLite4DDS (
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
  output              data_0_valid,
  input               data_0_ready,
  output     [31:0]   data_0_payload,
  output              data_1_valid,
  input               data_1_ready,
  output     [31:0]   data_1_payload,
  output              data_2_valid,
  input               data_2_ready,
  output     [31:0]   data_2_payload,
  output              data_3_valid,
  input               data_3_ready,
  output     [31:0]   data_3_payload,
  input               sysref,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               resetn
);

  wire                clkCrossing_21_dataOut;
  wire                dDS_4_data_valid;
  wire       [31:0]   dDS_4_data_payload;
  wire                clkCrossing_22_dataOut;
  wire       [7:0]    clkCrossing_23_dataOut;
  wire       [31:0]   clkCrossing_24_dataOut;
  wire                clkCrossing_25_dataOut;
  wire       [7:0]    clkCrossing_26_dataOut;
  wire                dDS_5_data_valid;
  wire       [31:0]   dDS_5_data_payload;
  wire                clkCrossing_27_dataOut;
  wire       [7:0]    clkCrossing_28_dataOut;
  wire       [31:0]   clkCrossing_29_dataOut;
  wire                clkCrossing_30_dataOut;
  wire       [7:0]    clkCrossing_31_dataOut;
  wire                dDS_6_data_valid;
  wire       [31:0]   dDS_6_data_payload;
  wire                clkCrossing_32_dataOut;
  wire       [7:0]    clkCrossing_33_dataOut;
  wire       [31:0]   clkCrossing_34_dataOut;
  wire                clkCrossing_35_dataOut;
  wire       [7:0]    clkCrossing_36_dataOut;
  wire                dDS_7_data_valid;
  wire       [31:0]   dDS_7_data_payload;
  wire                clkCrossing_37_dataOut;
  wire       [7:0]    clkCrossing_38_dataOut;
  wire       [31:0]   clkCrossing_39_dataOut;
  wire                clkCrossing_40_dataOut;
  wire       [7:0]    clkCrossing_41_dataOut;
  wire                global_en;
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
  wire                when_Stream_l368;
  wire                readDataStage_valid;
  wire                readDataStage_ready;
  wire       [7:0]    readDataStage_payload_addr;
  wire       [2:0]    readDataStage_payload_prot;
  reg                 axil4Ctrl_ar_rValid;
  reg        [7:0]    axil4Ctrl_ar_rData_addr;
  reg        [2:0]    axil4Ctrl_ar_rData_prot;
  wire                when_Stream_l368_1;
  reg        [31:0]   readRsp_data;
  wire       [1:0]    readRsp_resp;
  wire                _zz_axil4Ctrl_rvalid;
  wire                writeOccur;
  wire                readOccur;
  reg                 global_en_driver;
  reg                 _zz_readRsp_data;
  reg                 _zz_dataIn;
  reg        [7:0]    _zz_dataIn_1;
  reg        [31:0]   _zz_dataIn_2;
  reg        [7:0]    _zz_readRsp_data_1;
  reg                 _zz_readRsp_data_2;
  reg                 _zz_dataIn_3;
  reg        [7:0]    _zz_dataIn_4;
  reg        [31:0]   _zz_dataIn_5;
  reg        [7:0]    _zz_readRsp_data_3;
  reg                 _zz_readRsp_data_4;
  reg                 _zz_dataIn_6;
  reg        [7:0]    _zz_dataIn_7;
  reg        [31:0]   _zz_dataIn_8;
  reg        [7:0]    _zz_readRsp_data_5;
  reg                 _zz_readRsp_data_6;
  reg                 _zz_dataIn_9;
  reg        [7:0]    _zz_dataIn_10;
  reg        [31:0]   _zz_dataIn_11;
  reg        [7:0]    _zz_readRsp_data_7;

  ClkCrossing clkCrossing_21 (
    .dataIn    (global_en             ), //i
    .dataOut   (clkCrossing_21_dataOut), //o
    .clk       (clk                   ), //i
    .resetn    (resetn                ), //i
    .rf_clk    (rf_clk                ), //i
    .rf_resetn (rf_resetn             )  //i
  );
  DDS dDS_4 (
    .data_valid   (dDS_4_data_valid            ), //o
    .data_ready   (data_0_ready                ), //i
    .data_payload (dDS_4_data_payload[31:0]    ), //o
    .channel_en   (clkCrossing_25_dataOut      ), //i
    .sync_en      (clkCrossing_21_dataOut      ), //i
    .w_en         (clkCrossing_22_dataOut      ), //i
    .w_addr       (clkCrossing_23_dataOut[7:0] ), //i
    .w_data       (clkCrossing_24_dataOut[31:0]), //i
    .phase_limit  (clkCrossing_26_dataOut[7:0] ), //i
    .sysref       (sysref                      ), //i
    .rf_clk       (rf_clk                      ), //i
    .rf_resetn    (rf_resetn                   )  //i
  );
  ClkCrossing clkCrossing_22 (
    .dataIn    (_zz_dataIn            ), //i
    .dataOut   (clkCrossing_22_dataOut), //o
    .clk       (clk                   ), //i
    .resetn    (resetn                ), //i
    .rf_clk    (rf_clk                ), //i
    .rf_resetn (rf_resetn             )  //i
  );
  ClkCrossing_2 clkCrossing_23 (
    .dataIn    (_zz_dataIn_1[7:0]          ), //i
    .dataOut   (clkCrossing_23_dataOut[7:0]), //o
    .clk       (clk                        ), //i
    .resetn    (resetn                     ), //i
    .rf_clk    (rf_clk                     ), //i
    .rf_resetn (rf_resetn                  )  //i
  );
  ClkCrossing_3 clkCrossing_24 (
    .dataIn    (_zz_dataIn_2[31:0]          ), //i
    .dataOut   (clkCrossing_24_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing clkCrossing_25 (
    .dataIn    (_zz_readRsp_data      ), //i
    .dataOut   (clkCrossing_25_dataOut), //o
    .clk       (clk                   ), //i
    .resetn    (resetn                ), //i
    .rf_clk    (rf_clk                ), //i
    .rf_resetn (rf_resetn             )  //i
  );
  ClkCrossing_2 clkCrossing_26 (
    .dataIn    (_zz_readRsp_data_1[7:0]    ), //i
    .dataOut   (clkCrossing_26_dataOut[7:0]), //o
    .clk       (clk                        ), //i
    .resetn    (resetn                     ), //i
    .rf_clk    (rf_clk                     ), //i
    .rf_resetn (rf_resetn                  )  //i
  );
  DDS_1 dDS_5 (
    .data_valid   (dDS_5_data_valid            ), //o
    .data_ready   (data_1_ready                ), //i
    .data_payload (dDS_5_data_payload[31:0]    ), //o
    .channel_en   (clkCrossing_30_dataOut      ), //i
    .sync_en      (clkCrossing_21_dataOut      ), //i
    .w_en         (clkCrossing_27_dataOut      ), //i
    .w_addr       (clkCrossing_28_dataOut[7:0] ), //i
    .w_data       (clkCrossing_29_dataOut[31:0]), //i
    .phase_limit  (clkCrossing_31_dataOut[7:0] ), //i
    .sysref       (sysref                      ), //i
    .rf_clk       (rf_clk                      ), //i
    .rf_resetn    (rf_resetn                   )  //i
  );
  ClkCrossing clkCrossing_27 (
    .dataIn    (_zz_dataIn_3          ), //i
    .dataOut   (clkCrossing_27_dataOut), //o
    .clk       (clk                   ), //i
    .resetn    (resetn                ), //i
    .rf_clk    (rf_clk                ), //i
    .rf_resetn (rf_resetn             )  //i
  );
  ClkCrossing_2 clkCrossing_28 (
    .dataIn    (_zz_dataIn_4[7:0]          ), //i
    .dataOut   (clkCrossing_28_dataOut[7:0]), //o
    .clk       (clk                        ), //i
    .resetn    (resetn                     ), //i
    .rf_clk    (rf_clk                     ), //i
    .rf_resetn (rf_resetn                  )  //i
  );
  ClkCrossing_3 clkCrossing_29 (
    .dataIn    (_zz_dataIn_5[31:0]          ), //i
    .dataOut   (clkCrossing_29_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing clkCrossing_30 (
    .dataIn    (_zz_readRsp_data_2    ), //i
    .dataOut   (clkCrossing_30_dataOut), //o
    .clk       (clk                   ), //i
    .resetn    (resetn                ), //i
    .rf_clk    (rf_clk                ), //i
    .rf_resetn (rf_resetn             )  //i
  );
  ClkCrossing_2 clkCrossing_31 (
    .dataIn    (_zz_readRsp_data_3[7:0]    ), //i
    .dataOut   (clkCrossing_31_dataOut[7:0]), //o
    .clk       (clk                        ), //i
    .resetn    (resetn                     ), //i
    .rf_clk    (rf_clk                     ), //i
    .rf_resetn (rf_resetn                  )  //i
  );
  DDS_2 dDS_6 (
    .data_valid   (dDS_6_data_valid            ), //o
    .data_ready   (data_2_ready                ), //i
    .data_payload (dDS_6_data_payload[31:0]    ), //o
    .channel_en   (clkCrossing_35_dataOut      ), //i
    .sync_en      (clkCrossing_21_dataOut      ), //i
    .w_en         (clkCrossing_32_dataOut      ), //i
    .w_addr       (clkCrossing_33_dataOut[7:0] ), //i
    .w_data       (clkCrossing_34_dataOut[31:0]), //i
    .phase_limit  (clkCrossing_36_dataOut[7:0] ), //i
    .sysref       (sysref                      ), //i
    .rf_clk       (rf_clk                      ), //i
    .rf_resetn    (rf_resetn                   )  //i
  );
  ClkCrossing clkCrossing_32 (
    .dataIn    (_zz_dataIn_6          ), //i
    .dataOut   (clkCrossing_32_dataOut), //o
    .clk       (clk                   ), //i
    .resetn    (resetn                ), //i
    .rf_clk    (rf_clk                ), //i
    .rf_resetn (rf_resetn             )  //i
  );
  ClkCrossing_2 clkCrossing_33 (
    .dataIn    (_zz_dataIn_7[7:0]          ), //i
    .dataOut   (clkCrossing_33_dataOut[7:0]), //o
    .clk       (clk                        ), //i
    .resetn    (resetn                     ), //i
    .rf_clk    (rf_clk                     ), //i
    .rf_resetn (rf_resetn                  )  //i
  );
  ClkCrossing_3 clkCrossing_34 (
    .dataIn    (_zz_dataIn_8[31:0]          ), //i
    .dataOut   (clkCrossing_34_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing clkCrossing_35 (
    .dataIn    (_zz_readRsp_data_4    ), //i
    .dataOut   (clkCrossing_35_dataOut), //o
    .clk       (clk                   ), //i
    .resetn    (resetn                ), //i
    .rf_clk    (rf_clk                ), //i
    .rf_resetn (rf_resetn             )  //i
  );
  ClkCrossing_2 clkCrossing_36 (
    .dataIn    (_zz_readRsp_data_5[7:0]    ), //i
    .dataOut   (clkCrossing_36_dataOut[7:0]), //o
    .clk       (clk                        ), //i
    .resetn    (resetn                     ), //i
    .rf_clk    (rf_clk                     ), //i
    .rf_resetn (rf_resetn                  )  //i
  );
  DDS_3 dDS_7 (
    .data_valid   (dDS_7_data_valid            ), //o
    .data_ready   (data_3_ready                ), //i
    .data_payload (dDS_7_data_payload[31:0]    ), //o
    .channel_en   (clkCrossing_40_dataOut      ), //i
    .sync_en      (clkCrossing_21_dataOut      ), //i
    .w_en         (clkCrossing_37_dataOut      ), //i
    .w_addr       (clkCrossing_38_dataOut[7:0] ), //i
    .w_data       (clkCrossing_39_dataOut[31:0]), //i
    .phase_limit  (clkCrossing_41_dataOut[7:0] ), //i
    .sysref       (sysref                      ), //i
    .rf_clk       (rf_clk                      ), //i
    .rf_resetn    (rf_resetn                   )  //i
  );
  ClkCrossing clkCrossing_37 (
    .dataIn    (_zz_dataIn_9          ), //i
    .dataOut   (clkCrossing_37_dataOut), //o
    .clk       (clk                   ), //i
    .resetn    (resetn                ), //i
    .rf_clk    (rf_clk                ), //i
    .rf_resetn (rf_resetn             )  //i
  );
  ClkCrossing_2 clkCrossing_38 (
    .dataIn    (_zz_dataIn_10[7:0]         ), //i
    .dataOut   (clkCrossing_38_dataOut[7:0]), //o
    .clk       (clk                        ), //i
    .resetn    (resetn                     ), //i
    .rf_clk    (rf_clk                     ), //i
    .rf_resetn (rf_resetn                  )  //i
  );
  ClkCrossing_3 clkCrossing_39 (
    .dataIn    (_zz_dataIn_11[31:0]         ), //i
    .dataOut   (clkCrossing_39_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing clkCrossing_40 (
    .dataIn    (_zz_readRsp_data_6    ), //i
    .dataOut   (clkCrossing_40_dataOut), //o
    .clk       (clk                   ), //i
    .resetn    (resetn                ), //i
    .rf_clk    (rf_clk                ), //i
    .rf_resetn (rf_resetn             )  //i
  );
  ClkCrossing_2 clkCrossing_41 (
    .dataIn    (_zz_readRsp_data_7[7:0]    ), //i
    .dataOut   (clkCrossing_41_dataOut[7:0]), //o
    .clk       (clk                        ), //i
    .resetn    (resetn                     ), //i
    .rf_clk    (rf_clk                     ), //i
    .rf_resetn (rf_resetn                  )  //i
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
    if(when_Stream_l368) begin
      _zz_writeJoinEvent_translated_ready = 1'b1;
    end
  end

  assign when_Stream_l368 = (! _zz_axil4Ctrl_bvalid_1);
  assign _zz_axil4Ctrl_bvalid_1 = _zz_axil4Ctrl_bvalid_2;
  assign axil4Ctrl_bvalid = _zz_axil4Ctrl_bvalid_1;
  assign axil4Ctrl_bresp = _zz_axil4Ctrl_bresp;
  always @(*) begin
    axil4Ctrl_arready = readDataStage_ready;
    if(when_Stream_l368_1) begin
      axil4Ctrl_arready = 1'b1;
    end
  end

  assign when_Stream_l368_1 = (! readDataStage_valid);
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
        readRsp_data[0 : 0] = global_en_driver;
        readRsp_data[1 : 1] = _zz_readRsp_data;
      end
      8'h0c : begin
        readRsp_data[7 : 0] = _zz_readRsp_data_1;
      end
      8'h20 : begin
        readRsp_data[1 : 1] = _zz_readRsp_data_2;
      end
      8'h2c : begin
        readRsp_data[7 : 0] = _zz_readRsp_data_3;
      end
      8'h40 : begin
        readRsp_data[1 : 1] = _zz_readRsp_data_4;
      end
      8'h4c : begin
        readRsp_data[7 : 0] = _zz_readRsp_data_5;
      end
      8'h60 : begin
        readRsp_data[1 : 1] = _zz_readRsp_data_6;
      end
      8'h6c : begin
        readRsp_data[7 : 0] = _zz_readRsp_data_7;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign global_en = global_en_driver;
  assign data_0_payload = dDS_4_data_payload;
  assign data_0_valid = dDS_4_data_valid;
  assign data_1_payload = dDS_5_data_payload;
  assign data_1_valid = dDS_5_data_valid;
  assign data_2_payload = dDS_6_data_payload;
  assign data_2_valid = dDS_6_data_valid;
  assign data_3_payload = dDS_7_data_payload;
  assign data_3_valid = dDS_7_data_valid;
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      global_en_driver <= 1'b0;
      _zz_readRsp_data <= 1'b0;
      _zz_dataIn <= 1'b0;
      _zz_dataIn_1 <= 8'h0;
      _zz_dataIn_2 <= 32'h0;
      _zz_readRsp_data_1 <= 8'hff;
      _zz_readRsp_data_2 <= 1'b0;
      _zz_dataIn_3 <= 1'b0;
      _zz_dataIn_4 <= 8'h0;
      _zz_dataIn_5 <= 32'h0;
      _zz_readRsp_data_3 <= 8'hff;
      _zz_readRsp_data_4 <= 1'b0;
      _zz_dataIn_6 <= 1'b0;
      _zz_dataIn_7 <= 8'h0;
      _zz_dataIn_8 <= 32'h0;
      _zz_readRsp_data_5 <= 8'hff;
      _zz_readRsp_data_6 <= 1'b0;
      _zz_dataIn_9 <= 1'b0;
      _zz_dataIn_10 <= 8'h0;
      _zz_dataIn_11 <= 32'h0;
      _zz_readRsp_data_7 <= 8'hff;
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
            global_en_driver <= axil4Ctrl_wdata[0];
            _zz_readRsp_data <= axil4Ctrl_wdata[1];
            _zz_dataIn <= axil4Ctrl_wdata[2];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            _zz_dataIn_1 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            _zz_dataIn_2 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h0c : begin
          if(writeOccur) begin
            _zz_readRsp_data_1 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'h20 : begin
          if(writeOccur) begin
            _zz_readRsp_data_2 <= axil4Ctrl_wdata[1];
            _zz_dataIn_3 <= axil4Ctrl_wdata[2];
          end
        end
        8'h24 : begin
          if(writeOccur) begin
            _zz_dataIn_4 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'h28 : begin
          if(writeOccur) begin
            _zz_dataIn_5 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h2c : begin
          if(writeOccur) begin
            _zz_readRsp_data_3 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'h40 : begin
          if(writeOccur) begin
            _zz_readRsp_data_4 <= axil4Ctrl_wdata[1];
            _zz_dataIn_6 <= axil4Ctrl_wdata[2];
          end
        end
        8'h44 : begin
          if(writeOccur) begin
            _zz_dataIn_7 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'h48 : begin
          if(writeOccur) begin
            _zz_dataIn_8 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h4c : begin
          if(writeOccur) begin
            _zz_readRsp_data_5 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'h60 : begin
          if(writeOccur) begin
            _zz_readRsp_data_6 <= axil4Ctrl_wdata[1];
            _zz_dataIn_9 <= axil4Ctrl_wdata[2];
          end
        end
        8'h64 : begin
          if(writeOccur) begin
            _zz_dataIn_10 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'h68 : begin
          if(writeOccur) begin
            _zz_dataIn_11 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h6c : begin
          if(writeOccur) begin
            _zz_readRsp_data_7 <= axil4Ctrl_wdata[7 : 0];
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

//ClkCrossing replaced by ClkCrossing

//ClkCrossing_3 replaced by ClkCrossing_3

//ClkCrossing_2 replaced by ClkCrossing_2

//ClkCrossing replaced by ClkCrossing

module DDS_3 (
  output              data_valid,
  input               data_ready,
  output     [31:0]   data_payload,
  input               channel_en,
  input               sync_en,
  input               w_en,
  input      [7:0]    w_addr,
  input      [31:0]   w_data,
  input      [7:0]    phase_limit,
  input               sysref,
  input               rf_clk,
  input               rf_resetn
);

  reg        [31:0]   _zz_mem_port1;
  wire       [31:0]   _zz_mem_port;
  wire                _zz_mem_port_1;
  wire                _zz_data_payload;
  wire                module_en;
  reg        [7:0]    phase_cursor;
  wire                when_DDS_l58;
  wire                data_fire;
  wire                when_DDS_l57;
  reg                 module_en_regNext;
  (* ram_style = "block" *) reg [31:0] mem [0:255];

  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.sv_toplevel_dDS_7_mem.bin",mem);
  end
  always @(posedge rf_clk) begin
    if(w_en) begin
      mem[w_addr] <= _zz_mem_port;
    end
  end

  always @(posedge rf_clk) begin
    if(_zz_data_payload) begin
      _zz_mem_port1 <= mem[phase_cursor];
    end
  end

  assign module_en = (sync_en && channel_en);
  assign when_DDS_l58 = (phase_limit <= phase_cursor);
  assign data_fire = (data_valid && data_ready);
  assign when_DDS_l57 = (module_en && data_fire);
  assign data_payload = _zz_mem_port1;
  assign data_valid = module_en_regNext;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      phase_cursor <= 8'h0;
      module_en_regNext <= 1'b0;
    end else begin
      if(sysref) begin
        phase_cursor <= 8'h0;
      end else begin
        if(when_DDS_l57) begin
          if(when_DDS_l58) begin
            phase_cursor <= 8'h0;
          end else begin
            phase_cursor <= (phase_cursor + 8'h01);
          end
        end
      end
      module_en_regNext <= module_en;
    end
  end


endmodule

//ClkCrossing_2 replaced by ClkCrossing_2

//ClkCrossing replaced by ClkCrossing

//ClkCrossing_3 replaced by ClkCrossing_3

//ClkCrossing_2 replaced by ClkCrossing_2

//ClkCrossing replaced by ClkCrossing

module DDS_2 (
  output              data_valid,
  input               data_ready,
  output     [31:0]   data_payload,
  input               channel_en,
  input               sync_en,
  input               w_en,
  input      [7:0]    w_addr,
  input      [31:0]   w_data,
  input      [7:0]    phase_limit,
  input               sysref,
  input               rf_clk,
  input               rf_resetn
);

  reg        [31:0]   _zz_mem_port1;
  wire       [31:0]   _zz_mem_port;
  wire                _zz_mem_port_1;
  wire                _zz_data_payload;
  wire                module_en;
  reg        [7:0]    phase_cursor;
  wire                when_DDS_l58;
  wire                data_fire;
  wire                when_DDS_l57;
  reg                 module_en_regNext;
  (* ram_style = "block" *) reg [31:0] mem [0:255];

  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.sv_toplevel_dDS_6_mem.bin",mem);
  end
  always @(posedge rf_clk) begin
    if(w_en) begin
      mem[w_addr] <= _zz_mem_port;
    end
  end

  always @(posedge rf_clk) begin
    if(_zz_data_payload) begin
      _zz_mem_port1 <= mem[phase_cursor];
    end
  end

  assign module_en = (sync_en && channel_en);
  assign when_DDS_l58 = (phase_limit <= phase_cursor);
  assign data_fire = (data_valid && data_ready);
  assign when_DDS_l57 = (module_en && data_fire);
  assign data_payload = _zz_mem_port1;
  assign data_valid = module_en_regNext;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      phase_cursor <= 8'h0;
      module_en_regNext <= 1'b0;
    end else begin
      if(sysref) begin
        phase_cursor <= 8'h0;
      end else begin
        if(when_DDS_l57) begin
          if(when_DDS_l58) begin
            phase_cursor <= 8'h0;
          end else begin
            phase_cursor <= (phase_cursor + 8'h01);
          end
        end
      end
      module_en_regNext <= module_en;
    end
  end


endmodule

//ClkCrossing_2 replaced by ClkCrossing_2

//ClkCrossing replaced by ClkCrossing

//ClkCrossing_3 replaced by ClkCrossing_3

//ClkCrossing_2 replaced by ClkCrossing_2

//ClkCrossing replaced by ClkCrossing

module DDS_1 (
  output              data_valid,
  input               data_ready,
  output     [31:0]   data_payload,
  input               channel_en,
  input               sync_en,
  input               w_en,
  input      [7:0]    w_addr,
  input      [31:0]   w_data,
  input      [7:0]    phase_limit,
  input               sysref,
  input               rf_clk,
  input               rf_resetn
);

  reg        [31:0]   _zz_mem_port1;
  wire       [31:0]   _zz_mem_port;
  wire                _zz_mem_port_1;
  wire                _zz_data_payload;
  wire                module_en;
  reg        [7:0]    phase_cursor;
  wire                when_DDS_l58;
  wire                data_fire;
  wire                when_DDS_l57;
  reg                 module_en_regNext;
  (* ram_style = "block" *) reg [31:0] mem [0:255];

  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.sv_toplevel_dDS_5_mem.bin",mem);
  end
  always @(posedge rf_clk) begin
    if(w_en) begin
      mem[w_addr] <= _zz_mem_port;
    end
  end

  always @(posedge rf_clk) begin
    if(_zz_data_payload) begin
      _zz_mem_port1 <= mem[phase_cursor];
    end
  end

  assign module_en = (sync_en && channel_en);
  assign when_DDS_l58 = (phase_limit <= phase_cursor);
  assign data_fire = (data_valid && data_ready);
  assign when_DDS_l57 = (module_en && data_fire);
  assign data_payload = _zz_mem_port1;
  assign data_valid = module_en_regNext;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      phase_cursor <= 8'h0;
      module_en_regNext <= 1'b0;
    end else begin
      if(sysref) begin
        phase_cursor <= 8'h0;
      end else begin
        if(when_DDS_l57) begin
          if(when_DDS_l58) begin
            phase_cursor <= 8'h0;
          end else begin
            phase_cursor <= (phase_cursor + 8'h01);
          end
        end
      end
      module_en_regNext <= module_en;
    end
  end


endmodule

//ClkCrossing_2 replaced by ClkCrossing_2

//ClkCrossing replaced by ClkCrossing

module ClkCrossing_3 (
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

module ClkCrossing_2 (
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

//ClkCrossing replaced by ClkCrossing

module DDS (
  output              data_valid,
  input               data_ready,
  output     [31:0]   data_payload,
  input               channel_en,
  input               sync_en,
  input               w_en,
  input      [7:0]    w_addr,
  input      [31:0]   w_data,
  input      [7:0]    phase_limit,
  input               sysref,
  input               rf_clk,
  input               rf_resetn
);

  reg        [31:0]   _zz_mem_port1;
  wire       [31:0]   _zz_mem_port;
  wire                _zz_mem_port_1;
  wire                _zz_data_payload;
  wire                module_en;
  reg        [7:0]    phase_cursor;
  wire                when_DDS_l58;
  wire                data_fire;
  wire                when_DDS_l57;
  reg                 module_en_regNext;
  (* ram_style = "block" *) reg [31:0] mem [0:255];

  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.sv_toplevel_dDS_4_mem.bin",mem);
  end
  always @(posedge rf_clk) begin
    if(w_en) begin
      mem[w_addr] <= _zz_mem_port;
    end
  end

  always @(posedge rf_clk) begin
    if(_zz_data_payload) begin
      _zz_mem_port1 <= mem[phase_cursor];
    end
  end

  assign module_en = (sync_en && channel_en);
  assign when_DDS_l58 = (phase_limit <= phase_cursor);
  assign data_fire = (data_valid && data_ready);
  assign when_DDS_l57 = (module_en && data_fire);
  assign data_payload = _zz_mem_port1;
  assign data_valid = module_en_regNext;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      phase_cursor <= 8'h0;
      module_en_regNext <= 1'b0;
    end else begin
      if(sysref) begin
        phase_cursor <= 8'h0;
      end else begin
        if(when_DDS_l57) begin
          if(when_DDS_l58) begin
            phase_cursor <= 8'h0;
          end else begin
            phase_cursor <= (phase_cursor + 8'h01);
          end
        end
      end
      module_en_regNext <= module_en;
    end
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
