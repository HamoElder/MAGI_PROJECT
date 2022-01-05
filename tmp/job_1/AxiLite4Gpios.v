// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4Gpios
// Git hash  : 67f403718c502e5cb33f2f26427ce9da17cc58dc



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
   inout     [13:0]   gpio_0,
  output              interrupt_0,
  input               clk,
  input               reset
);
  reg        [13:0]   gpios_1_gpios_read;
  wire       [13:0]   gpios_1_gpios_write;
  wire       [13:0]   gpios_1_gpios_writeEnable;
  wire       [13:0]   gpios_1_gpios_read_1;
  wire       [13:0]   gpios_1_interrupt;
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
  reg        [13:0]   gpios_1_gpios_writeEnable_1_driver;
  reg        [13:0]   gpios_1_gpios_write_1_driver;
  reg        [13:0]   gpios_1_ir_high_driver;
  reg        [13:0]   gpios_1_ir_low_driver;
  reg        [13:0]   gpios_1_ir_rise_driver;
  reg        [13:0]   gpios_1_ir_fall_driver;
  wire                when_AxiLite4Gpios_l38;
  wire                when_AxiLite4Gpios_l38_1;
  wire                when_AxiLite4Gpios_l38_2;
  wire                when_AxiLite4Gpios_l38_3;
  wire                when_AxiLite4Gpios_l38_4;
  wire                when_AxiLite4Gpios_l38_5;
  wire                when_AxiLite4Gpios_l38_6;
  wire                when_AxiLite4Gpios_l38_7;
  wire                when_AxiLite4Gpios_l38_8;
  wire                when_AxiLite4Gpios_l38_9;
  wire                when_AxiLite4Gpios_l38_10;
  wire                when_AxiLite4Gpios_l38_11;
  wire                when_AxiLite4Gpios_l38_12;
  wire                when_AxiLite4Gpios_l38_13;

  Gpios gpios_1 (
    .gpios_read             (gpios_1_gpios_read                  ), //i
    .gpios_write            (gpios_1_gpios_write                 ), //o
    .gpios_writeEnable      (gpios_1_gpios_writeEnable           ), //o
    .gpios_write_1          (gpios_1_gpios_write_1_driver        ), //i
    .gpios_read_1           (gpios_1_gpios_read_1                ), //o
    .gpios_writeEnable_1    (gpios_1_gpios_writeEnable_1_driver  ), //i
    .interrupt              (gpios_1_interrupt                   ), //o
    .ir_high                (gpios_1_ir_high_driver              ), //i
    .ir_low                 (gpios_1_ir_low_driver               ), //i
    .ir_rise                (gpios_1_ir_rise_driver              ), //i
    .ir_fall                (gpios_1_ir_fall_driver              ), //i
    .clk                    (clk                                 ), //i
    .reset                  (reset                               )  //i
  );
  assign gpio_0[0] = _zz_gpio_0_13 ? gpios_1_gpios_write[0] : 1'bz;
  assign gpio_0[1] = _zz_gpio_0_12 ? gpios_1_gpios_write[1] : 1'bz;
  assign gpio_0[2] = _zz_gpio_0_11 ? gpios_1_gpios_write[2] : 1'bz;
  assign gpio_0[3] = _zz_gpio_0_10 ? gpios_1_gpios_write[3] : 1'bz;
  assign gpio_0[4] = _zz_gpio_0_9 ? gpios_1_gpios_write[4] : 1'bz;
  assign gpio_0[5] = _zz_gpio_0_8 ? gpios_1_gpios_write[5] : 1'bz;
  assign gpio_0[6] = _zz_gpio_0_7 ? gpios_1_gpios_write[6] : 1'bz;
  assign gpio_0[7] = _zz_gpio_0_6 ? gpios_1_gpios_write[7] : 1'bz;
  assign gpio_0[8] = _zz_gpio_0_5 ? gpios_1_gpios_write[8] : 1'bz;
  assign gpio_0[9] = _zz_gpio_0_4 ? gpios_1_gpios_write[9] : 1'bz;
  assign gpio_0[10] = _zz_gpio_0_3 ? gpios_1_gpios_write[10] : 1'bz;
  assign gpio_0[11] = _zz_gpio_0_2 ? gpios_1_gpios_write[11] : 1'bz;
  assign gpio_0[12] = _zz_gpio_0_1 ? gpios_1_gpios_write[12] : 1'bz;
  assign gpio_0[13] = _zz_gpio_0 ? gpios_1_gpios_write[13] : 1'bz;
  always @(*) begin
    _zz_gpio_0 = 1'b0;
    if(when_AxiLite4Gpios_l38_13) begin
      _zz_gpio_0 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_1 = 1'b0;
    if(when_AxiLite4Gpios_l38_12) begin
      _zz_gpio_0_1 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_2 = 1'b0;
    if(when_AxiLite4Gpios_l38_11) begin
      _zz_gpio_0_2 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_3 = 1'b0;
    if(when_AxiLite4Gpios_l38_10) begin
      _zz_gpio_0_3 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_4 = 1'b0;
    if(when_AxiLite4Gpios_l38_9) begin
      _zz_gpio_0_4 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_5 = 1'b0;
    if(when_AxiLite4Gpios_l38_8) begin
      _zz_gpio_0_5 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_6 = 1'b0;
    if(when_AxiLite4Gpios_l38_7) begin
      _zz_gpio_0_6 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_7 = 1'b0;
    if(when_AxiLite4Gpios_l38_6) begin
      _zz_gpio_0_7 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_8 = 1'b0;
    if(when_AxiLite4Gpios_l38_5) begin
      _zz_gpio_0_8 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_9 = 1'b0;
    if(when_AxiLite4Gpios_l38_4) begin
      _zz_gpio_0_9 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_10 = 1'b0;
    if(when_AxiLite4Gpios_l38_3) begin
      _zz_gpio_0_10 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_11 = 1'b0;
    if(when_AxiLite4Gpios_l38_2) begin
      _zz_gpio_0_11 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_12 = 1'b0;
    if(when_AxiLite4Gpios_l38_1) begin
      _zz_gpio_0_12 = 1'b1;
    end
  end

  always @(*) begin
    _zz_gpio_0_13 = 1'b0;
    if(when_AxiLite4Gpios_l38) begin
      _zz_gpio_0_13 = 1'b1;
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
        readRsp_data[13 : 0] = gpios_1_gpios_writeEnable_1_driver;
      end
      8'h04 : begin
        readRsp_data[13 : 0] = gpios_1_gpios_write_1_driver;
      end
      8'h08 : begin
        readRsp_data[13 : 0] = gpios_1_gpios_read_1;
      end
      8'h0c : begin
        readRsp_data[13 : 0] = gpios_1_interrupt;
      end
      8'h10 : begin
        readRsp_data[13 : 0] = gpios_1_ir_high_driver;
      end
      8'h14 : begin
        readRsp_data[13 : 0] = gpios_1_ir_low_driver;
      end
      8'h18 : begin
        readRsp_data[13 : 0] = gpios_1_ir_rise_driver;
      end
      8'h1c : begin
        readRsp_data[13 : 0] = gpios_1_ir_fall_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  always @(*) begin
    gpios_1_gpios_read[0] = gpio_0[0];
    gpios_1_gpios_read[1] = gpio_0[1];
    gpios_1_gpios_read[2] = gpio_0[2];
    gpios_1_gpios_read[3] = gpio_0[3];
    gpios_1_gpios_read[4] = gpio_0[4];
    gpios_1_gpios_read[5] = gpio_0[5];
    gpios_1_gpios_read[6] = gpio_0[6];
    gpios_1_gpios_read[7] = gpio_0[7];
    gpios_1_gpios_read[8] = gpio_0[8];
    gpios_1_gpios_read[9] = gpio_0[9];
    gpios_1_gpios_read[10] = gpio_0[10];
    gpios_1_gpios_read[11] = gpio_0[11];
    gpios_1_gpios_read[12] = gpio_0[12];
    gpios_1_gpios_read[13] = gpio_0[13];
  end

  assign when_AxiLite4Gpios_l38 = gpios_1_gpios_writeEnable[0];
  assign when_AxiLite4Gpios_l38_1 = gpios_1_gpios_writeEnable[1];
  assign when_AxiLite4Gpios_l38_2 = gpios_1_gpios_writeEnable[2];
  assign when_AxiLite4Gpios_l38_3 = gpios_1_gpios_writeEnable[3];
  assign when_AxiLite4Gpios_l38_4 = gpios_1_gpios_writeEnable[4];
  assign when_AxiLite4Gpios_l38_5 = gpios_1_gpios_writeEnable[5];
  assign when_AxiLite4Gpios_l38_6 = gpios_1_gpios_writeEnable[6];
  assign when_AxiLite4Gpios_l38_7 = gpios_1_gpios_writeEnable[7];
  assign when_AxiLite4Gpios_l38_8 = gpios_1_gpios_writeEnable[8];
  assign when_AxiLite4Gpios_l38_9 = gpios_1_gpios_writeEnable[9];
  assign when_AxiLite4Gpios_l38_10 = gpios_1_gpios_writeEnable[10];
  assign when_AxiLite4Gpios_l38_11 = gpios_1_gpios_writeEnable[11];
  assign when_AxiLite4Gpios_l38_12 = gpios_1_gpios_writeEnable[12];
  assign when_AxiLite4Gpios_l38_13 = gpios_1_gpios_writeEnable[13];
  assign interrupt_0 = (gpios_1_interrupt != 14'h0);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      gpios_1_gpios_writeEnable_1_driver <= 14'h0;
      gpios_1_gpios_write_1_driver <= 14'h0;
      gpios_1_ir_high_driver <= 14'h0;
      gpios_1_ir_low_driver <= 14'h0;
      gpios_1_ir_rise_driver <= 14'h0;
      gpios_1_ir_fall_driver <= 14'h0;
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
            gpios_1_gpios_writeEnable_1_driver <= axil4Ctrl_wdata[13 : 0];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            gpios_1_gpios_write_1_driver <= axil4Ctrl_wdata[13 : 0];
          end
        end
        8'h10 : begin
          if(writeOccur) begin
            gpios_1_ir_high_driver <= axil4Ctrl_wdata[13 : 0];
          end
        end
        8'h14 : begin
          if(writeOccur) begin
            gpios_1_ir_low_driver <= axil4Ctrl_wdata[13 : 0];
          end
        end
        8'h18 : begin
          if(writeOccur) begin
            gpios_1_ir_rise_driver <= axil4Ctrl_wdata[13 : 0];
          end
        end
        8'h1c : begin
          if(writeOccur) begin
            gpios_1_ir_fall_driver <= axil4Ctrl_wdata[13 : 0];
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

module Gpios (
  input      [13:0]   gpios_read,
  output reg [13:0]   gpios_write,
  output reg [13:0]   gpios_writeEnable,
  input      [13:0]   gpios_write_1,
  output reg [13:0]   gpios_read_1,
  input      [13:0]   gpios_writeEnable_1,
  output reg [13:0]   interrupt,
  input      [13:0]   ir_high,
  input      [13:0]   ir_low,
  input      [13:0]   ir_rise,
  input      [13:0]   ir_fall,
  input               clk,
  input               reset
);
  wire       [13:0]   gpios_read_buffercc_io_dataOut;
  wire       [13:0]   syncronized;
  reg        [13:0]   last;
  wire       [13:0]   interrupt_valid;
  function [13:0] zz_interrupt(input dummy);
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
    end
  endfunction
  wire [13:0] _zz_1;

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
  end

  assign interrupt_valid = ((((ir_high & syncronized) | (ir_low & (~ syncronized))) | (ir_rise & (syncronized & (~ last)))) | (ir_fall & ((~ syncronized) & last)));
  assign _zz_1 = zz_interrupt(1'b0);
  always @(*) interrupt = _zz_1;
  always @(posedge clk) begin
    last <= syncronized;
  end


endmodule

module BufferCC (
  input      [13:0]   io_dataIn,
  output     [13:0]   io_dataOut,
  input               clk,
  input               reset
);
  (* async_reg = "true" *) reg        [13:0]   buffers_0;
  (* async_reg = "true" *) reg        [13:0]   buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    buffers_0 <= io_dataIn;
    buffers_1 <= buffers_0;
  end


endmodule
