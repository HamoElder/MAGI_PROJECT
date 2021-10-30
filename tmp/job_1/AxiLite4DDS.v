// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4DDS
// Git hash  : 8ea3836c6991c66e54ff283e1ce84688f7fe9417



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
  output     [23:0]   data_0_payload,
  output              data_1_valid,
  output     [23:0]   data_1_payload,
  output              phase_0_valid,
  output     [9:0]    phase_0_payload,
  output              phase_1_valid,
  output     [9:0]    phase_1_payload,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               reset
);
  wire                clkCrossing_15_dataOut;
  wire                dDS_2_data_valid;
  wire       [23:0]   dDS_2_data_payload;
  wire                dDS_2_phase_valid;
  wire       [9:0]    dDS_2_phase_payload;
  wire                clkCrossing_16_dataOut;
  wire       [9:0]    clkCrossing_17_dataOut;
  wire       [23:0]   clkCrossing_18_dataOut;
  wire       [9:0]    clkCrossing_19_dataOut;
  wire       [9:0]    clkCrossing_20_dataOut;
  wire                clkCrossing_21_dataOut;
  wire       [9:0]    clkCrossing_22_dataOut;
  wire                dDS_3_data_valid;
  wire       [23:0]   dDS_3_data_payload;
  wire                dDS_3_phase_valid;
  wire       [9:0]    dDS_3_phase_payload;
  wire                clkCrossing_23_dataOut;
  wire       [9:0]    clkCrossing_24_dataOut;
  wire       [23:0]   clkCrossing_25_dataOut;
  wire       [9:0]    clkCrossing_26_dataOut;
  wire       [9:0]    clkCrossing_27_dataOut;
  wire                clkCrossing_28_dataOut;
  wire       [9:0]    clkCrossing_29_dataOut;
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
  reg                 global_en_driver;
  reg                 _zz_readRsp_data;
  reg                 _zz_dataIn;
  reg        [9:0]    _zz_dataIn_1;
  reg        [23:0]   _zz_dataIn_2;
  reg        [9:0]    _zz_readRsp_data_1;
  reg        [9:0]    _zz_readRsp_data_2;
  reg        [9:0]    _zz_readRsp_data_3;
  reg                 _zz_readRsp_data_4;
  reg                 _zz_dataIn_3;
  reg        [9:0]    _zz_dataIn_4;
  reg        [23:0]   _zz_dataIn_5;
  reg        [9:0]    _zz_readRsp_data_5;
  reg        [9:0]    _zz_readRsp_data_6;
  reg        [9:0]    _zz_readRsp_data_7;

  ClkCrossing clkCrossing_15 (
    .dataIn       (global_en               ), //i
    .dataOut      (clkCrossing_15_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  DDS dDS_2 (
    .data_valid       (dDS_2_data_valid        ), //o
    .data_payload     (dDS_2_data_payload      ), //o
    .phase_valid      (dDS_2_phase_valid       ), //o
    .phase_payload    (dDS_2_phase_payload     ), //o
    .channel_en       (clkCrossing_21_dataOut  ), //i
    .sync_en          (clkCrossing_15_dataOut  ), //i
    .w_en             (clkCrossing_16_dataOut  ), //i
    .w_addr           (clkCrossing_17_dataOut  ), //i
    .w_data           (clkCrossing_18_dataOut  ), //i
    .phase_limit      (clkCrossing_22_dataOut  ), //i
    .phase_offset     (clkCrossing_19_dataOut  ), //i
    .phase_inc        (clkCrossing_20_dataOut  ), //i
    .rf_clk           (rf_clk                  ), //i
    .rf_resetn        (rf_resetn               )  //i
  );
  ClkCrossing clkCrossing_16 (
    .dataIn       (_zz_dataIn              ), //i
    .dataOut      (clkCrossing_16_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_2 clkCrossing_17 (
    .dataIn       (_zz_dataIn_1            ), //i
    .dataOut      (clkCrossing_17_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_3 clkCrossing_18 (
    .dataIn       (_zz_dataIn_2            ), //i
    .dataOut      (clkCrossing_18_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_2 clkCrossing_19 (
    .dataIn       (_zz_readRsp_data_2      ), //i
    .dataOut      (clkCrossing_19_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_2 clkCrossing_20 (
    .dataIn       (_zz_readRsp_data_3      ), //i
    .dataOut      (clkCrossing_20_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing clkCrossing_21 (
    .dataIn       (_zz_readRsp_data        ), //i
    .dataOut      (clkCrossing_21_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_2 clkCrossing_22 (
    .dataIn       (_zz_readRsp_data_1      ), //i
    .dataOut      (clkCrossing_22_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  DDS_1 dDS_3 (
    .data_valid       (dDS_3_data_valid        ), //o
    .data_payload     (dDS_3_data_payload      ), //o
    .phase_valid      (dDS_3_phase_valid       ), //o
    .phase_payload    (dDS_3_phase_payload     ), //o
    .channel_en       (clkCrossing_28_dataOut  ), //i
    .sync_en          (clkCrossing_15_dataOut  ), //i
    .w_en             (clkCrossing_23_dataOut  ), //i
    .w_addr           (clkCrossing_24_dataOut  ), //i
    .w_data           (clkCrossing_25_dataOut  ), //i
    .phase_limit      (clkCrossing_29_dataOut  ), //i
    .phase_offset     (clkCrossing_26_dataOut  ), //i
    .phase_inc        (clkCrossing_27_dataOut  ), //i
    .rf_clk           (rf_clk                  ), //i
    .rf_resetn        (rf_resetn               )  //i
  );
  ClkCrossing clkCrossing_23 (
    .dataIn       (_zz_dataIn_3            ), //i
    .dataOut      (clkCrossing_23_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_2 clkCrossing_24 (
    .dataIn       (_zz_dataIn_4            ), //i
    .dataOut      (clkCrossing_24_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_3 clkCrossing_25 (
    .dataIn       (_zz_dataIn_5            ), //i
    .dataOut      (clkCrossing_25_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_2 clkCrossing_26 (
    .dataIn       (_zz_readRsp_data_6      ), //i
    .dataOut      (clkCrossing_26_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_2 clkCrossing_27 (
    .dataIn       (_zz_readRsp_data_7      ), //i
    .dataOut      (clkCrossing_27_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing clkCrossing_28 (
    .dataIn       (_zz_readRsp_data_4      ), //i
    .dataOut      (clkCrossing_28_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
  );
  ClkCrossing_2 clkCrossing_29 (
    .dataIn       (_zz_readRsp_data_5      ), //i
    .dataOut      (clkCrossing_29_dataOut  ), //o
    .clk          (clk                     ), //i
    .reset        (reset                   ), //i
    .rf_clk       (rf_clk                  ), //i
    .rf_resetn    (rf_resetn               )  //i
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
        readRsp_data[0 : 0] = global_en_driver;
        readRsp_data[1 : 1] = _zz_readRsp_data;
      end
      8'h0c : begin
        readRsp_data[9 : 0] = _zz_readRsp_data_1;
      end
      8'h10 : begin
        readRsp_data[9 : 0] = _zz_readRsp_data_2;
      end
      8'h14 : begin
        readRsp_data[9 : 0] = _zz_readRsp_data_3;
      end
      8'h20 : begin
        readRsp_data[1 : 1] = _zz_readRsp_data_4;
      end
      8'h2c : begin
        readRsp_data[9 : 0] = _zz_readRsp_data_5;
      end
      8'h30 : begin
        readRsp_data[9 : 0] = _zz_readRsp_data_6;
      end
      8'h34 : begin
        readRsp_data[9 : 0] = _zz_readRsp_data_7;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign global_en = global_en_driver;
  assign data_0_payload = dDS_2_data_payload;
  assign data_0_valid = dDS_2_data_valid;
  assign phase_0_payload = dDS_2_phase_payload;
  assign phase_0_valid = dDS_2_phase_valid;
  assign data_1_payload = dDS_3_data_payload;
  assign data_1_valid = dDS_3_data_valid;
  assign phase_1_payload = dDS_3_phase_payload;
  assign phase_1_valid = dDS_3_phase_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      global_en_driver <= 1'b0;
      _zz_readRsp_data <= 1'b0;
      _zz_dataIn <= 1'b0;
      _zz_dataIn_1 <= 10'h0;
      _zz_dataIn_2 <= 24'h0;
      _zz_readRsp_data_1 <= 10'h3ff;
      _zz_readRsp_data_2 <= 10'h0;
      _zz_readRsp_data_3 <= 10'h001;
      _zz_readRsp_data_4 <= 1'b0;
      _zz_dataIn_3 <= 1'b0;
      _zz_dataIn_4 <= 10'h0;
      _zz_dataIn_5 <= 24'h0;
      _zz_readRsp_data_5 <= 10'h3ff;
      _zz_readRsp_data_6 <= 10'h0;
      _zz_readRsp_data_7 <= 10'h001;
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
            _zz_dataIn_1 <= axil4Ctrl_wdata[9 : 0];
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            _zz_dataIn_2 <= axil4Ctrl_wdata[23 : 0];
          end
        end
        8'h0c : begin
          if(writeOccur) begin
            _zz_readRsp_data_1 <= axil4Ctrl_wdata[9 : 0];
          end
        end
        8'h10 : begin
          if(writeOccur) begin
            _zz_readRsp_data_2 <= axil4Ctrl_wdata[9 : 0];
          end
        end
        8'h14 : begin
          if(writeOccur) begin
            _zz_readRsp_data_3 <= axil4Ctrl_wdata[9 : 0];
          end
        end
        8'h20 : begin
          if(writeOccur) begin
            _zz_readRsp_data_4 <= axil4Ctrl_wdata[1];
            _zz_dataIn_3 <= axil4Ctrl_wdata[2];
          end
        end
        8'h24 : begin
          if(writeOccur) begin
            _zz_dataIn_4 <= axil4Ctrl_wdata[9 : 0];
          end
        end
        8'h28 : begin
          if(writeOccur) begin
            _zz_dataIn_5 <= axil4Ctrl_wdata[23 : 0];
          end
        end
        8'h2c : begin
          if(writeOccur) begin
            _zz_readRsp_data_5 <= axil4Ctrl_wdata[9 : 0];
          end
        end
        8'h30 : begin
          if(writeOccur) begin
            _zz_readRsp_data_6 <= axil4Ctrl_wdata[9 : 0];
          end
        end
        8'h34 : begin
          if(writeOccur) begin
            _zz_readRsp_data_7 <= axil4Ctrl_wdata[9 : 0];
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

//ClkCrossing_2 replaced by ClkCrossing_2

//ClkCrossing_2 replaced by ClkCrossing_2

//ClkCrossing_3 replaced by ClkCrossing_3

//ClkCrossing_2 replaced by ClkCrossing_2

//ClkCrossing replaced by ClkCrossing

module DDS_1 (
  output              data_valid,
  output     [23:0]   data_payload,
  output              phase_valid,
  output     [9:0]    phase_payload,
  input               channel_en,
  input               sync_en,
  input               w_en,
  input      [9:0]    w_addr,
  input      [23:0]   w_data,
  input      [9:0]    phase_limit,
  input      [9:0]    phase_offset,
  input      [9:0]    phase_inc,
  input               rf_clk,
  input               rf_resetn
);
  reg        [23:0]   _zz_mem_port1;
  wire       [9:0]    _zz_phase_cursor;
  wire       [23:0]   _zz_mem_port;
  wire                _zz_mem_port_1;
  wire                _zz_data_payload;
  wire                module_en;
  reg        [9:0]    phase_cursor;
  wire                when_DDS_l53;
  reg                 valid_o_buf;
  reg        [9:0]    _zz_phase_payload;
  (* ram_style = "block" *) reg [23:0] mem [0:1023];

  assign _zz_phase_cursor = (phase_cursor + phase_inc);
  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.v_toplevel_dDS_3_mem.bin",mem);
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
  assign when_DDS_l53 = (phase_limit <= phase_cursor);
  assign data_payload = _zz_mem_port1;
  assign data_valid = valid_o_buf;
  assign phase_valid = valid_o_buf;
  assign phase_payload = _zz_phase_payload;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      phase_cursor <= 10'h0;
      valid_o_buf <= 1'b0;
      _zz_phase_payload <= 10'h0;
    end else begin
      if(module_en) begin
        if(when_DDS_l53) begin
          phase_cursor <= 10'h0;
        end else begin
          phase_cursor <= (_zz_phase_cursor + phase_offset);
        end
      end
      if(module_en) begin
        _zz_phase_payload <= phase_cursor;
      end
      if(module_en) begin
        valid_o_buf <= 1'b1;
      end else begin
        valid_o_buf <= 1'b0;
      end
    end
  end


endmodule

//ClkCrossing_2 replaced by ClkCrossing_2

//ClkCrossing replaced by ClkCrossing

//ClkCrossing_2 replaced by ClkCrossing_2

//ClkCrossing_2 replaced by ClkCrossing_2

module ClkCrossing_3 (
  input      [23:0]   dataIn,
  output     [23:0]   dataOut,
  input               clk,
  input               reset,
  input               rf_clk,
  input               rf_resetn
);
  reg        [23:0]   area_clkI_reg;
  (* async_reg = "true" *) reg        [23:0]   area_clkO_buf0;
  reg        [23:0]   area_clkO_buf1;

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
  input      [9:0]    dataIn,
  output     [9:0]    dataOut,
  input               clk,
  input               reset,
  input               rf_clk,
  input               rf_resetn
);
  reg        [9:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [9:0]    area_clkO_buf0;
  reg        [9:0]    area_clkO_buf1;

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
  output     [23:0]   data_payload,
  output              phase_valid,
  output     [9:0]    phase_payload,
  input               channel_en,
  input               sync_en,
  input               w_en,
  input      [9:0]    w_addr,
  input      [23:0]   w_data,
  input      [9:0]    phase_limit,
  input      [9:0]    phase_offset,
  input      [9:0]    phase_inc,
  input               rf_clk,
  input               rf_resetn
);
  reg        [23:0]   _zz_mem_port1;
  wire       [9:0]    _zz_phase_cursor;
  wire       [23:0]   _zz_mem_port;
  wire                _zz_mem_port_1;
  wire                _zz_data_payload;
  wire                module_en;
  reg        [9:0]    phase_cursor;
  wire                when_DDS_l53;
  reg                 valid_o_buf;
  reg        [9:0]    _zz_phase_payload;
  (* ram_style = "block" *) reg [23:0] mem [0:1023];

  assign _zz_phase_cursor = (phase_cursor + phase_inc);
  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.v_toplevel_dDS_2_mem.bin",mem);
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
  assign when_DDS_l53 = (phase_limit <= phase_cursor);
  assign data_payload = _zz_mem_port1;
  assign data_valid = valid_o_buf;
  assign phase_valid = valid_o_buf;
  assign phase_payload = _zz_phase_payload;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      phase_cursor <= 10'h0;
      valid_o_buf <= 1'b0;
      _zz_phase_payload <= 10'h0;
    end else begin
      if(module_en) begin
        if(when_DDS_l53) begin
          phase_cursor <= 10'h0;
        end else begin
          phase_cursor <= (_zz_phase_cursor + phase_offset);
        end
      end
      if(module_en) begin
        _zz_phase_payload <= phase_cursor;
      end
      if(module_en) begin
        valid_o_buf <= 1'b1;
      end else begin
        valid_o_buf <= 1'b0;
      end
    end
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
