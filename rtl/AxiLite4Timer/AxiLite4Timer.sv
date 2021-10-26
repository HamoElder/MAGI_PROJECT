// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4Timer



module AxiLite4Timer (
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
  output              timer_interrupt,
  output              oc,
  output              oc_n,
  input               clk,
  input               resetn
);
  wire                timer_module_interrupt;
  wire       [15:0]   timer_module_value;
  wire                timer_module_oc;
  wire                timer_module_oc_n;
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
  reg                 timer_module_enable_driver;
  reg                 timer_module_interrupt_en_driver;
  reg                 timer_module_interrupt_polarity_driver;
  reg        [15:0]   _zz_period;
  reg        [15:0]   _zz_reload_val;
  reg        [3:0]    _zz_divider_A_limit;
  reg        [15:0]   _zz_divider_B_limit;
  reg                 _zz_interrupt_clc;
  reg                 timer_module_oc_en_driver;
  reg        [15:0]   _zz_oc_compare_val;

  Timer timer_module (
    .enable                (timer_module_enable_driver              ), //i
    .period                (_zz_period                              ), //i
    .reload_val            (_zz_reload_val                          ), //i
    .divider_A_limit       (_zz_divider_A_limit                     ), //i
    .divider_B_limit       (_zz_divider_B_limit                     ), //i
    .interrupt_en          (timer_module_interrupt_en_driver        ), //i
    .interrupt_polarity    (timer_module_interrupt_polarity_driver  ), //i
    .interrupt             (timer_module_interrupt                  ), //o
    .interrupt_clc         (_zz_interrupt_clc                       ), //i
    .value                 (timer_module_value                      ), //o
    .oc_en                 (timer_module_oc_en_driver               ), //i
    .oc                    (timer_module_oc                         ), //o
    .oc_n                  (timer_module_oc_n                       ), //o
    .oc_compare_val        (_zz_oc_compare_val                      ), //i
    .clk                   (clk                                     ), //i
    .resetn                (resetn                                  )  //i
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
        readRsp_data[0 : 0] = timer_module_enable_driver;
        readRsp_data[1 : 1] = timer_module_interrupt_en_driver;
        readRsp_data[2 : 2] = timer_module_interrupt_polarity_driver;
        readRsp_data[4 : 4] = timer_module_oc_en_driver;
      end
      8'h14 : begin
        readRsp_data[15 : 0] = timer_module_value;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign timer_interrupt = timer_module_interrupt;
  assign oc = timer_module_oc;
  assign oc_n = timer_module_oc_n;
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      timer_module_enable_driver <= 1'b0;
      timer_module_interrupt_en_driver <= 1'b0;
      timer_module_interrupt_polarity_driver <= 1'b1;
      _zz_period <= 16'h0;
      _zz_reload_val <= 16'h0;
      _zz_divider_A_limit <= 4'b0000;
      _zz_divider_B_limit <= 16'h0;
      _zz_interrupt_clc <= 1'b0;
      timer_module_oc_en_driver <= 1'b0;
      _zz_oc_compare_val <= 16'h0;
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
            timer_module_enable_driver <= axil4Ctrl_wdata[0];
            timer_module_interrupt_en_driver <= axil4Ctrl_wdata[1];
            timer_module_interrupt_polarity_driver <= axil4Ctrl_wdata[2];
            timer_module_oc_en_driver <= axil4Ctrl_wdata[4];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            _zz_period <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            _zz_reload_val <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h0c : begin
          if(writeOccur) begin
            _zz_divider_A_limit <= axil4Ctrl_wdata[3 : 0];
          end
        end
        8'h10 : begin
          if(writeOccur) begin
            _zz_divider_B_limit <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h18 : begin
          if(writeOccur) begin
            _zz_interrupt_clc <= axil4Ctrl_wdata[0];
          end
        end
        8'h2c : begin
          if(writeOccur) begin
            _zz_oc_compare_val <= axil4Ctrl_wdata[15 : 0];
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

module Timer (
  input               enable,
  input      [15:0]   period,
  input      [15:0]   reload_val,
  input      [3:0]    divider_A_limit,
  input      [15:0]   divider_B_limit,
  input               interrupt_en,
  input               interrupt_polarity,
  output reg          interrupt,
  input               interrupt_clc,
  output     [15:0]   value,
  input               oc_en,
  output              oc,
  output              oc_n,
  input      [15:0]   oc_compare_val,
  input               clk,
  input               resetn
);
  wire                clock_divider_A_full;
  wire                clock_divider_B_full;
  wire                outputCompare_1_oc;
  wire                outputCompare_1_oc_n;
  wire       [15:0]   _zz_timer_counter;
  wire       [0:0]    _zz_timer_counter_1;
  wire       [15:0]   _zz_timer_counter_2;
  wire       [0:0]    _zz_timer_counter_3;
  reg        [15:0]   timer_counter;
  wire                limit;
  wire                when_Timer_l141;
  wire                when_Timer_l143;
  wire                when_Timer_l147;

  assign _zz_timer_counter_1 = clock_divider_B_full;
  assign _zz_timer_counter = {15'd0, _zz_timer_counter_1};
  assign _zz_timer_counter_3 = clock_divider_B_full;
  assign _zz_timer_counter_2 = {15'd0, _zz_timer_counter_3};
  preClockDivider clock_divider_A (
    .enable    (enable                ), //i
    .limit     (divider_A_limit       ), //i
    .step      (1'b1                  ), //i
    .full      (clock_divider_A_full  ), //o
    .clk       (clk                   ), //i
    .resetn    (resetn                )  //i
  );
  preClockDivider_1 clock_divider_B (
    .enable    (enable                ), //i
    .limit     (divider_B_limit       ), //i
    .step      (clock_divider_A_full  ), //i
    .full      (clock_divider_B_full  ), //o
    .clk       (clk                   ), //i
    .resetn    (resetn                )  //i
  );
  outputCompare outputCompare_1 (
    .enable         (oc_en                 ), //i
    .oc             (outputCompare_1_oc    ), //o
    .oc_n           (outputCompare_1_oc_n  ), //o
    .timer_value    (timer_counter         ), //i
    .compare_val    (oc_compare_val        )  //i
  );
  assign limit = (enable ? (timer_counter == period) : 1'b0);
  assign when_Timer_l141 = (interrupt_clc || (! enable));
  assign when_Timer_l143 = (! limit);
  assign when_Timer_l147 = (limit || (! enable));
  always @(*) begin
    if(interrupt_en) begin
      interrupt = (limit ? interrupt_polarity : (! interrupt_polarity));
    end else begin
      interrupt = (! interrupt_polarity);
    end
  end

  assign value = timer_counter;
  assign oc = outputCompare_1_oc;
  assign oc_n = outputCompare_1_oc_n;
  always @(posedge clk) begin
    if(interrupt_en) begin
      if(when_Timer_l141) begin
        timer_counter <= reload_val;
      end else begin
        if(when_Timer_l143) begin
          timer_counter <= (timer_counter + _zz_timer_counter);
        end
      end
    end else begin
      if(when_Timer_l147) begin
        timer_counter <= reload_val;
      end else begin
        timer_counter <= (timer_counter + _zz_timer_counter_2);
      end
    end
  end


endmodule

module outputCompare (
  input               enable,
  output reg          oc,
  output              oc_n,
  input      [15:0]   timer_value,
  input      [15:0]   compare_val
);

  always @(*) begin
    if(enable) begin
      oc = (timer_value < compare_val);
    end else begin
      oc = 1'b0;
    end
  end

  assign oc_n = (! oc);

endmodule

module preClockDivider_1 (
  input               enable,
  input      [15:0]   limit,
  input               step,
  output              full,
  input               clk,
  input               resetn
);
  wire       [15:0]   _zz_divider_counter;
  wire       [0:0]    _zz_divider_counter_1;
  reg        [15:0]   divider_counter;
  wire                when_Timer_l27;

  assign _zz_divider_counter_1 = step;
  assign _zz_divider_counter = {15'd0, _zz_divider_counter_1};
  assign when_Timer_l27 = (full || (! enable));
  assign full = (enable ? (divider_counter == limit) : 1'b0);
  always @(posedge clk) begin
    if(when_Timer_l27) begin
      divider_counter <= 16'h0;
    end else begin
      divider_counter <= (divider_counter + _zz_divider_counter);
    end
  end


endmodule

module preClockDivider (
  input               enable,
  input      [3:0]    limit,
  input               step,
  output              full,
  input               clk,
  input               resetn
);
  wire       [3:0]    _zz_divider_counter;
  wire       [0:0]    _zz_divider_counter_1;
  reg        [3:0]    divider_counter;
  wire                when_Timer_l27;

  assign _zz_divider_counter_1 = step;
  assign _zz_divider_counter = {3'd0, _zz_divider_counter_1};
  assign when_Timer_l27 = (full || (! enable));
  assign full = (enable ? (divider_counter == limit) : 1'b0);
  always @(posedge clk) begin
    if(when_Timer_l27) begin
      divider_counter <= 4'b0000;
    end else begin
      divider_counter <= (divider_counter + _zz_divider_counter);
    end
  end


endmodule
