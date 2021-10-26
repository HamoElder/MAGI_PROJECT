// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4RTC



module AxiLite4RTC (
  input               axi_aclk,
  input               axi_aresetn,
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
  output              intr
);
  wire       [0:0]    _zz_axiClockArea_rtc_mod_clockDividerSync_step;
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
  wire                axiClockArea_rtc_mod_TICK_EN;
  wire                axiClockArea_rtc_mod_TICK_RESET;
  wire       [31:0]   axiClockArea_rtc_mod_PRELOAD_TIMESTAMP;
  wire       [31:0]   axiClockArea_rtc_mod_DIV_LIMIT_ASYNC;
  wire       [31:0]   axiClockArea_rtc_mod_DIV_LIMIT_SYNC;
  reg        [31:0]   axiClockArea_rtc_mod_CLOCK_JIFFIES;
  reg        [31:0]   axiClockArea_rtc_mod_INTERNAL_TIMING;
  reg        [31:0]   axiClockArea_rtc_mod_UNIX_TIMESTAMP;
  wire                axiClockArea_rtc_mod_ALARM_EN;
  wire                axiClockArea_rtc_mod_ALARM_POLARITY;
  wire       [31:0]   axiClockArea_rtc_mod_ALARM_STAMP;
  reg                 axiClockArea_rtc_mod_RTC_ALARM;
  reg        [31:0]   axiClockArea_rtc_mod_clockDividerAsync_PreDivideCounter;
  wire       [31:0]   axiClockArea_rtc_mod_clockDividerAsync_limit;
  wire                axiClockArea_rtc_mod_clockDividerAsync_full;
  wire       [31:0]   axiClockArea_rtc_mod_clockDividerAsync_step;
  reg        [31:0]   axiClockArea_rtc_mod_clockDividerSync_PreDivideCounter;
  wire       [31:0]   axiClockArea_rtc_mod_clockDividerSync_limit;
  wire                axiClockArea_rtc_mod_clockDividerSync_full;
  wire       [31:0]   axiClockArea_rtc_mod_clockDividerSync_step;
  wire                when_RTC_l73;
  wire                when_RTC_l79;
  reg                 axiClockArea_rtc_mod_TICK_EN_driver;
  reg                 axiClockArea_rtc_mod_TICK_RESET_driver;
  reg                 axiClockArea_rtc_mod_ALARM_EN_driver;
  reg                 axiClockArea_rtc_mod_ALARM_POLARITY_driver;
  reg        [31:0]   axiClockArea_rtc_mod_PRELOAD_TIMESTAMP_driver;
  reg        [31:0]   axiClockArea_rtc_mod_DIV_LIMIT_ASYNC_driver;
  reg        [31:0]   axiClockArea_rtc_mod_DIV_LIMIT_SYNC_driver;
  reg        [31:0]   axiClockArea_rtc_mod_ALARM_STAMP_driver;

  assign _zz_axiClockArea_rtc_mod_clockDividerSync_step = axiClockArea_rtc_mod_clockDividerAsync_full;
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
        readRsp_data[0 : 0] = axiClockArea_rtc_mod_TICK_EN_driver;
        readRsp_data[1 : 1] = axiClockArea_rtc_mod_TICK_RESET_driver;
        readRsp_data[2 : 2] = axiClockArea_rtc_mod_ALARM_EN_driver;
        readRsp_data[3 : 3] = axiClockArea_rtc_mod_ALARM_POLARITY_driver;
      end
      8'h04 : begin
        readRsp_data[31 : 0] = axiClockArea_rtc_mod_PRELOAD_TIMESTAMP_driver;
      end
      8'h08 : begin
        readRsp_data[31 : 0] = axiClockArea_rtc_mod_DIV_LIMIT_ASYNC_driver;
      end
      8'h0c : begin
        readRsp_data[31 : 0] = axiClockArea_rtc_mod_DIV_LIMIT_SYNC_driver;
      end
      8'h10 : begin
        readRsp_data[31 : 0] = axiClockArea_rtc_mod_UNIX_TIMESTAMP;
      end
      8'h14 : begin
        readRsp_data[31 : 0] = axiClockArea_rtc_mod_INTERNAL_TIMING;
      end
      8'h18 : begin
        readRsp_data[31 : 0] = axiClockArea_rtc_mod_CLOCK_JIFFIES;
      end
      8'h1c : begin
        readRsp_data[31 : 0] = axiClockArea_rtc_mod_ALARM_STAMP_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign axiClockArea_rtc_mod_clockDividerAsync_full = (axiClockArea_rtc_mod_clockDividerAsync_limit == axiClockArea_rtc_mod_clockDividerAsync_PreDivideCounter);
  assign axiClockArea_rtc_mod_clockDividerSync_full = (axiClockArea_rtc_mod_clockDividerSync_limit == axiClockArea_rtc_mod_clockDividerSync_PreDivideCounter);
  assign axiClockArea_rtc_mod_clockDividerAsync_limit = axiClockArea_rtc_mod_DIV_LIMIT_ASYNC;
  assign axiClockArea_rtc_mod_clockDividerAsync_step = 32'h00000001;
  assign axiClockArea_rtc_mod_clockDividerSync_limit = axiClockArea_rtc_mod_DIV_LIMIT_SYNC;
  assign axiClockArea_rtc_mod_clockDividerSync_step = {31'd0, _zz_axiClockArea_rtc_mod_clockDividerSync_step};
  assign when_RTC_l73 = (axiClockArea_rtc_mod_clockDividerAsync_full && axiClockArea_rtc_mod_TICK_EN);
  assign when_RTC_l79 = (axiClockArea_rtc_mod_clockDividerSync_full && axiClockArea_rtc_mod_TICK_EN);
  always @(*) begin
    if(axiClockArea_rtc_mod_ALARM_EN) begin
      axiClockArea_rtc_mod_RTC_ALARM = ((axiClockArea_rtc_mod_ALARM_STAMP <= axiClockArea_rtc_mod_UNIX_TIMESTAMP) ? axiClockArea_rtc_mod_ALARM_POLARITY : (! axiClockArea_rtc_mod_ALARM_POLARITY));
    end else begin
      axiClockArea_rtc_mod_RTC_ALARM = (! axiClockArea_rtc_mod_ALARM_POLARITY);
    end
  end

  assign axiClockArea_rtc_mod_TICK_EN = axiClockArea_rtc_mod_TICK_EN_driver;
  assign axiClockArea_rtc_mod_TICK_RESET = axiClockArea_rtc_mod_TICK_RESET_driver;
  assign axiClockArea_rtc_mod_ALARM_EN = axiClockArea_rtc_mod_ALARM_EN_driver;
  assign axiClockArea_rtc_mod_ALARM_POLARITY = axiClockArea_rtc_mod_ALARM_POLARITY_driver;
  assign axiClockArea_rtc_mod_PRELOAD_TIMESTAMP = axiClockArea_rtc_mod_PRELOAD_TIMESTAMP_driver;
  assign axiClockArea_rtc_mod_DIV_LIMIT_ASYNC = axiClockArea_rtc_mod_DIV_LIMIT_ASYNC_driver;
  assign axiClockArea_rtc_mod_DIV_LIMIT_SYNC = axiClockArea_rtc_mod_DIV_LIMIT_SYNC_driver;
  assign axiClockArea_rtc_mod_ALARM_STAMP = axiClockArea_rtc_mod_ALARM_STAMP_driver;
  assign intr = axiClockArea_rtc_mod_RTC_ALARM;
  always @(posedge axi_aclk) begin
    if(!axi_aresetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      axiClockArea_rtc_mod_CLOCK_JIFFIES <= 32'h0;
      axiClockArea_rtc_mod_INTERNAL_TIMING <= 32'h0;
      axiClockArea_rtc_mod_UNIX_TIMESTAMP <= 32'h0;
      axiClockArea_rtc_mod_clockDividerAsync_PreDivideCounter <= 32'h0;
      axiClockArea_rtc_mod_clockDividerSync_PreDivideCounter <= 32'h0;
      axiClockArea_rtc_mod_TICK_EN_driver <= 1'b0;
      axiClockArea_rtc_mod_TICK_RESET_driver <= 1'b0;
      axiClockArea_rtc_mod_ALARM_EN_driver <= 1'b0;
      axiClockArea_rtc_mod_ALARM_POLARITY_driver <= 1'b1;
      axiClockArea_rtc_mod_PRELOAD_TIMESTAMP_driver <= 32'h0;
      axiClockArea_rtc_mod_DIV_LIMIT_ASYNC_driver <= 32'h0000270f;
      axiClockArea_rtc_mod_DIV_LIMIT_SYNC_driver <= 32'h0000270f;
      axiClockArea_rtc_mod_ALARM_STAMP_driver <= 32'h0;
    end else begin
      if(_zz_writeJoinEvent_translated_ready) begin
        _zz_axil4Ctrl_bvalid_2 <= (writeJoinEvent_translated_valid && _zz_axil4Ctrl_bvalid);
      end
      if(axil4Ctrl_arready) begin
        axil4Ctrl_ar_rValid <= axil4Ctrl_arvalid;
      end
      if(axiClockArea_rtc_mod_clockDividerAsync_full) begin
        axiClockArea_rtc_mod_clockDividerAsync_PreDivideCounter <= 32'h0;
      end else begin
        axiClockArea_rtc_mod_clockDividerAsync_PreDivideCounter <= (axiClockArea_rtc_mod_clockDividerAsync_PreDivideCounter + axiClockArea_rtc_mod_clockDividerAsync_step);
      end
      if(axiClockArea_rtc_mod_clockDividerSync_full) begin
        axiClockArea_rtc_mod_clockDividerSync_PreDivideCounter <= 32'h0;
      end else begin
        axiClockArea_rtc_mod_clockDividerSync_PreDivideCounter <= (axiClockArea_rtc_mod_clockDividerSync_PreDivideCounter + axiClockArea_rtc_mod_clockDividerSync_step);
      end
      if(axiClockArea_rtc_mod_TICK_EN) begin
        axiClockArea_rtc_mod_CLOCK_JIFFIES <= (axiClockArea_rtc_mod_CLOCK_JIFFIES + 32'h00000001);
      end else begin
        axiClockArea_rtc_mod_CLOCK_JIFFIES <= 32'h0;
      end
      if(when_RTC_l73) begin
        axiClockArea_rtc_mod_INTERNAL_TIMING <= (axiClockArea_rtc_mod_INTERNAL_TIMING + 32'h00000001);
      end else begin
        if(axiClockArea_rtc_mod_TICK_RESET) begin
          axiClockArea_rtc_mod_INTERNAL_TIMING <= 32'h0;
        end
      end
      if(when_RTC_l79) begin
        axiClockArea_rtc_mod_UNIX_TIMESTAMP <= (axiClockArea_rtc_mod_UNIX_TIMESTAMP + 32'h00000001);
      end else begin
        if(axiClockArea_rtc_mod_TICK_RESET) begin
          axiClockArea_rtc_mod_UNIX_TIMESTAMP <= axiClockArea_rtc_mod_PRELOAD_TIMESTAMP;
        end
      end
      case(axil4Ctrl_awaddr)
        8'h0 : begin
          if(writeOccur) begin
            axiClockArea_rtc_mod_TICK_EN_driver <= axil4Ctrl_wdata[0];
            axiClockArea_rtc_mod_TICK_RESET_driver <= axil4Ctrl_wdata[1];
            axiClockArea_rtc_mod_ALARM_EN_driver <= axil4Ctrl_wdata[2];
            axiClockArea_rtc_mod_ALARM_POLARITY_driver <= axil4Ctrl_wdata[3];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            axiClockArea_rtc_mod_PRELOAD_TIMESTAMP_driver <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            axiClockArea_rtc_mod_DIV_LIMIT_ASYNC_driver <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h0c : begin
          if(writeOccur) begin
            axiClockArea_rtc_mod_DIV_LIMIT_SYNC_driver <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h1c : begin
          if(writeOccur) begin
            axiClockArea_rtc_mod_ALARM_STAMP_driver <= axil4Ctrl_wdata[31 : 0];
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge axi_aclk) begin
    if(_zz_writeJoinEvent_translated_ready) begin
      _zz_axil4Ctrl_bresp <= writeJoinEvent_translated_payload_resp;
    end
    if(axil4Ctrl_arready) begin
      axil4Ctrl_ar_rData_addr <= axil4Ctrl_araddr;
      axil4Ctrl_ar_rData_prot <= axil4Ctrl_arprot;
    end
  end


endmodule
