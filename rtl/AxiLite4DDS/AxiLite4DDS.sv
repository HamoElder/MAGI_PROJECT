// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : AxiLite4DDS
// Git hash  : 43464962f09f36778ab2e1388e0f698ce817f0a6

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
  output     [127:0]  data_0_payload,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               resetn
);

  wire                fFSynchronizer_6_dataOut;
  wire                dDS_1_data_valid;
  wire       [127:0]  dDS_1_data_payload;
  wire                fFSynchronizer_7_dataOut;
  wire       [7:0]    fFSynchronizer_8_dataOut;
  wire       [127:0]  fFSynchronizer_9_dataOut;
  wire                fFSynchronizer_10_dataOut;
  wire       [7:0]    fFSynchronizer_11_dataOut;
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
  wire       [7:0]    _zz_dataIn;
  reg        [127:0]  _zz_dataIn_1;
  reg                 _zz_readRsp_data;
  reg                 _zz_dataIn_2;
  reg        [7:0]    _zz_dataIn_3;
  reg        [31:0]   _zz_dataIn_4;
  reg        [31:0]   _zz_dataIn_5;
  reg        [31:0]   _zz_dataIn_6;
  reg        [31:0]   _zz_dataIn_7;
  reg        [7:0]    _zz_readRsp_data_1;

  FFSynchronizer fFSynchronizer_6 (
    .dataIn    (global_en               ), //i
    .dataOut   (fFSynchronizer_6_dataOut), //o
    .clk       (clk                     ), //i
    .resetn    (resetn                  ), //i
    .rf_clk    (rf_clk                  ), //i
    .rf_resetn (rf_resetn               )  //i
  );
  DDS dDS_1 (
    .data_valid   (dDS_1_data_valid               ), //o
    .data_ready   (data_0_ready                   ), //i
    .data_payload (dDS_1_data_payload[127:0]      ), //o
    .channel_en   (fFSynchronizer_10_dataOut      ), //i
    .sync_en      (fFSynchronizer_6_dataOut       ), //i
    .w_en         (fFSynchronizer_7_dataOut       ), //i
    .w_addr       (fFSynchronizer_8_dataOut[7:0]  ), //i
    .w_data       (fFSynchronizer_9_dataOut[127:0]), //i
    .phase_limit  (fFSynchronizer_11_dataOut[7:0] ), //i
    .rf_clk       (rf_clk                         ), //i
    .rf_resetn    (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_7 (
    .dataIn    (_zz_dataIn_2            ), //i
    .dataOut   (fFSynchronizer_7_dataOut), //o
    .clk       (clk                     ), //i
    .resetn    (resetn                  ), //i
    .rf_clk    (rf_clk                  ), //i
    .rf_resetn (rf_resetn               )  //i
  );
  FFSynchronizer_2 fFSynchronizer_8 (
    .dataIn    (_zz_dataIn[7:0]              ), //i
    .dataOut   (fFSynchronizer_8_dataOut[7:0]), //o
    .clk       (clk                          ), //i
    .resetn    (resetn                       ), //i
    .rf_clk    (rf_clk                       ), //i
    .rf_resetn (rf_resetn                    )  //i
  );
  FFSynchronizer_3 fFSynchronizer_9 (
    .dataIn    (_zz_dataIn_1[127:0]            ), //i
    .dataOut   (fFSynchronizer_9_dataOut[127:0]), //o
    .clk       (clk                            ), //i
    .resetn    (resetn                         ), //i
    .rf_clk    (rf_clk                         ), //i
    .rf_resetn (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_10 (
    .dataIn    (_zz_readRsp_data         ), //i
    .dataOut   (fFSynchronizer_10_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_11 (
    .dataIn    (_zz_readRsp_data_1[7:0]       ), //i
    .dataOut   (fFSynchronizer_11_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
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
      8'h18 : begin
        readRsp_data[7 : 0] = _zz_readRsp_data_1;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign global_en = global_en_driver;
  assign data_0_payload = dDS_1_data_payload;
  assign data_0_valid = dDS_1_data_valid;
  assign _zz_dataIn[7 : 0] = _zz_dataIn_3;
  always @(*) begin
    _zz_dataIn_1[127 : 96] = _zz_dataIn_4;
    _zz_dataIn_1[95 : 64] = _zz_dataIn_5;
    _zz_dataIn_1[63 : 32] = _zz_dataIn_6;
    _zz_dataIn_1[31 : 0] = _zz_dataIn_7;
  end

  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      global_en_driver <= 1'b0;
      _zz_readRsp_data <= 1'b0;
      _zz_dataIn_2 <= 1'b0;
      _zz_dataIn_3 <= 8'h0;
      _zz_dataIn_4 <= 32'h0;
      _zz_dataIn_5 <= 32'h0;
      _zz_dataIn_6 <= 32'h0;
      _zz_dataIn_7 <= 32'h0;
      _zz_readRsp_data_1 <= 8'hff;
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
            _zz_dataIn_2 <= axil4Ctrl_wdata[2];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            _zz_dataIn_3 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            _zz_dataIn_4 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h0c : begin
          if(writeOccur) begin
            _zz_dataIn_5 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h10 : begin
          if(writeOccur) begin
            _zz_dataIn_6 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h14 : begin
          if(writeOccur) begin
            _zz_dataIn_7 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h18 : begin
          if(writeOccur) begin
            _zz_readRsp_data_1 <= axil4Ctrl_wdata[7 : 0];
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

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

module FFSynchronizer_3 (
  input      [127:0]  dataIn,
  output     [127:0]  dataOut,
  input               clk,
  input               resetn,
  input               rf_clk,
  input               rf_resetn
);

  reg        [127:0]  area_clkI_reg;
  (* async_reg = "true" *) reg        [127:0]  area_clkO_buf0;
  reg        [127:0]  area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge rf_clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module FFSynchronizer_2 (
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

//FFSynchronizer replaced by FFSynchronizer

module DDS (
  output              data_valid,
  input               data_ready,
  output     [127:0]  data_payload,
  input               channel_en,
  input               sync_en,
  input               w_en,
  input      [7:0]    w_addr,
  input      [127:0]  w_data,
  input      [7:0]    phase_limit,
  input               rf_clk,
  input               rf_resetn
);

  reg        [127:0]  _zz_mem_port1;
  wire       [127:0]  _zz_mem_port;
  wire                _zz_mem_port_1;
  wire                _zz_data_payload;
  wire                module_en;
  reg        [7:0]    phase_cursor;
  wire                data_fire;
  wire                when_DDS_l70;
  wire                when_DDS_l71;
  reg                 module_en_regNext;
  (* ram_style = "block" *) reg [127:0] mem [0:255];

  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.sv_toplevel_dDS_1_mem.bin",mem);
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
  assign data_fire = (data_valid && data_ready);
  assign when_DDS_l70 = (module_en && data_fire);
  assign when_DDS_l71 = (phase_limit <= phase_cursor);
  assign data_payload = _zz_mem_port1;
  assign data_valid = module_en_regNext;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      phase_cursor <= 8'h0;
      module_en_regNext <= 1'b0;
    end else begin
      if(when_DDS_l70) begin
        if(when_DDS_l71) begin
          phase_cursor <= 8'h0;
        end else begin
          phase_cursor <= (phase_cursor + 8'h01);
        end
      end
      module_en_regNext <= module_en;
    end
  end


endmodule

module FFSynchronizer (
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
