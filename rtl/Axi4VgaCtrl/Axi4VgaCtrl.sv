// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : Axi4VgaCtrl
// Git hash  : b4854519b9981ad4d90b9c6743c51cbef5656810

`timescale 1ns/1ps 

module Axi4VgaCtrl (
  output              axi_ar_valid,
  input               axi_ar_ready,
  output     [31:0]   axi_ar_payload_addr,
  output     [7:0]    axi_ar_payload_len,
  output     [2:0]    axi_ar_payload_size,
  output     [3:0]    axi_ar_payload_cache,
  output     [2:0]    axi_ar_payload_prot,
  input               axi_r_valid,
  output              axi_r_ready,
  input      [31:0]   axi_r_payload_data,
  input               axi_r_payload_last,
  input               axi4Ctrl_awvalid,
  output              axi4Ctrl_awready,
  input      [7:0]    axi4Ctrl_awaddr,
  input      [2:0]    axi4Ctrl_awprot,
  input               axi4Ctrl_wvalid,
  output              axi4Ctrl_wready,
  input      [31:0]   axi4Ctrl_wdata,
  input      [3:0]    axi4Ctrl_wstrb,
  output              axi4Ctrl_bvalid,
  input               axi4Ctrl_bready,
  output     [1:0]    axi4Ctrl_bresp,
  input               axi4Ctrl_arvalid,
  output reg          axi4Ctrl_arready,
  input      [7:0]    axi4Ctrl_araddr,
  input      [2:0]    axi4Ctrl_arprot,
  output              axi4Ctrl_rvalid,
  input               axi4Ctrl_rready,
  output     [31:0]   axi4Ctrl_rdata,
  output     [1:0]    axi4Ctrl_rresp,
  output              vga_vSync,
  output              vga_hSync,
  output              vga_colorEn,
  output     [4:0]    vga_color_r,
  output     [5:0]    vga_color_g,
  output     [4:0]    vga_color_b,
  input               clk,
  input               resetn,
  input               vga_clk,
  input               vga_resetn
);

  wire                dma_io_start;
  reg                 dma_io_frame_ready;
  wire                vga_ctrl_io_softReset;
  wire                vga_ctrl_io_pixels_valid;
  wire                dma_io_busy;
  wire                dma_io_mem_cmd_valid;
  wire       [24:0]   dma_io_mem_cmd_payload;
  wire                dma_io_frame_valid;
  wire                dma_io_frame_payload_last;
  wire       [4:0]    dma_io_frame_payload_fragment_r;
  wire       [5:0]    dma_io_frame_payload_fragment_g;
  wire       [4:0]    dma_io_frame_payload_fragment_b;
  wire                run_buffercc_io_dataOut;
  wire                vga_ctrl_io_frameStart;
  wire                vga_ctrl_io_pixels_ready;
  wire                vga_ctrl_io_vga_vSync;
  wire                vga_ctrl_io_vga_hSync;
  wire                vga_ctrl_io_vga_colorEn;
  wire       [4:0]    vga_ctrl_io_vga_color_r;
  wire       [5:0]    vga_ctrl_io_vga_color_g;
  wire       [4:0]    vga_ctrl_io_vga_color_b;
  wire                vga_ctrl_io_error;
  wire                pulseCCByToggle_1_io_pulseOut;
  wire                readHaltRequest;
  wire                writeHaltRequest;
  wire                writeJoinEvent_valid;
  wire                writeJoinEvent_ready;
  wire                writeJoinEvent_fire;
  wire       [1:0]    writeRsp_resp;
  wire                writeJoinEvent_translated_valid;
  wire                writeJoinEvent_translated_ready;
  wire       [1:0]    writeJoinEvent_translated_payload_resp;
  wire                _zz_axi4Ctrl_bvalid;
  reg                 _zz_writeJoinEvent_translated_ready;
  wire                _zz_axi4Ctrl_bvalid_1;
  reg                 _zz_axi4Ctrl_bvalid_2;
  reg        [1:0]    _zz_axi4Ctrl_bresp;
  wire                when_Stream_l342;
  wire                readDataStage_valid;
  wire                readDataStage_ready;
  wire       [7:0]    readDataStage_payload_addr;
  wire       [2:0]    readDataStage_payload_prot;
  reg                 axi4Ctrl_ar_rValid;
  reg        [7:0]    axi4Ctrl_ar_rData_addr;
  reg        [2:0]    axi4Ctrl_ar_rData_prot;
  wire                when_Stream_l342_1;
  reg        [31:0]   readRsp_data;
  wire       [1:0]    readRsp_resp;
  wire                _zz_axi4Ctrl_rvalid;
  wire                writeOccur;
  wire                readOccur;
  reg                 run;
  reg        [14:0]   _zz_io_size;
  reg        [24:0]   _zz_io_base;
  wire                vga_run;
  reg                 vga_run_regNext;
  reg                 when_Stream_l408;
  reg                 _zz_dma_io_frame_translated_thrown_ready;
  reg                 _zz_when_VgaCtrl_l228;
  wire                dma_io_frame_fire;
  wire                dma_io_frame_fire_1;
  reg                 dma_io_frame_payload_first;
  wire                when_VgaCtrl_l216;
  wire                dma_io_frame_translated_valid;
  reg                 dma_io_frame_translated_ready;
  wire       [4:0]    dma_io_frame_translated_payload_r;
  wire       [5:0]    dma_io_frame_translated_payload_g;
  wire       [4:0]    dma_io_frame_translated_payload_b;
  reg                 dma_io_frame_translated_thrown_valid;
  wire                dma_io_frame_translated_thrown_ready;
  wire       [4:0]    dma_io_frame_translated_thrown_payload_r;
  wire       [5:0]    dma_io_frame_translated_thrown_payload_g;
  wire       [4:0]    dma_io_frame_translated_thrown_payload_b;
  wire                _zz_dma_io_frame_translated_thrown_ready_1;
  wire                dma_io_frame_fire_2;
  wire                when_VgaCtrl_l223;
  wire                when_VgaCtrl_l227;
  wire                when_VgaCtrl_l228;
  wire                when_Axi4VgaCtrl_l61;
  reg        [11:0]   _zz_io_timings_h_syncStart;
  reg        [11:0]   _zz_io_timings_h_syncEnd;
  reg        [11:0]   _zz_io_timings_h_colorStart;
  reg        [11:0]   _zz_io_timings_h_colorEnd;
  reg        [11:0]   _zz_io_timings_v_syncStart;
  reg        [11:0]   _zz_io_timings_v_syncEnd;
  reg        [11:0]   _zz_io_timings_v_colorStart;
  reg        [11:0]   _zz_io_timings_v_colorEnd;
  reg                 _zz_io_timings_h_polarity;
  reg                 _zz_io_timings_v_polarity;

  VideoDMA dma (
    .io_start                       (dma_io_start                          ), //i
    .io_busy                        (dma_io_busy                           ), //o
    .io_base                        (_zz_io_base[24:0]                     ), //i
    .io_size                        (_zz_io_size[14:0]                     ), //i
    .io_mem_cmd_valid               (dma_io_mem_cmd_valid                  ), //o
    .io_mem_cmd_ready               (axi_ar_ready                          ), //i
    .io_mem_cmd_payload             (dma_io_mem_cmd_payload[24:0]          ), //o
    .io_mem_rsp_valid               (axi_r_valid                           ), //i
    .io_mem_rsp_payload_last        (axi_r_payload_last                    ), //i
    .io_mem_rsp_payload_fragment    (axi_r_payload_data[31:0]              ), //i
    .io_frame_valid                 (dma_io_frame_valid                    ), //o
    .io_frame_ready                 (dma_io_frame_ready                    ), //i
    .io_frame_payload_last          (dma_io_frame_payload_last             ), //o
    .io_frame_payload_fragment_r    (dma_io_frame_payload_fragment_r[4:0]  ), //o
    .io_frame_payload_fragment_g    (dma_io_frame_payload_fragment_g[5:0]  ), //o
    .io_frame_payload_fragment_b    (dma_io_frame_payload_fragment_b[4:0]  ), //o
    .clk                            (clk                                   ), //i
    .resetn                         (resetn                                ), //i
    .vga_clk                        (vga_clk                               ), //i
    .vga_resetn                     (vga_resetn                            )  //i
  );
  BufferCC_6 run_buffercc (
    .io_dataIn     (run                      ), //i
    .io_dataOut    (run_buffercc_io_dataOut  ), //o
    .vga_clk       (vga_clk                  ), //i
    .vga_resetn    (vga_resetn               )  //i
  );
  VgaCtrl vga_ctrl (
    .io_softReset               (vga_ctrl_io_softReset                          ), //i
    .io_timings_h_syncStart     (_zz_io_timings_h_syncStart[11:0]               ), //i
    .io_timings_h_syncEnd       (_zz_io_timings_h_syncEnd[11:0]                 ), //i
    .io_timings_h_colorStart    (_zz_io_timings_h_colorStart[11:0]              ), //i
    .io_timings_h_colorEnd      (_zz_io_timings_h_colorEnd[11:0]                ), //i
    .io_timings_h_polarity      (_zz_io_timings_h_polarity                      ), //i
    .io_timings_v_syncStart     (_zz_io_timings_v_syncStart[11:0]               ), //i
    .io_timings_v_syncEnd       (_zz_io_timings_v_syncEnd[11:0]                 ), //i
    .io_timings_v_colorStart    (_zz_io_timings_v_colorStart[11:0]              ), //i
    .io_timings_v_colorEnd      (_zz_io_timings_v_colorEnd[11:0]                ), //i
    .io_timings_v_polarity      (_zz_io_timings_v_polarity                      ), //i
    .io_frameStart              (vga_ctrl_io_frameStart                         ), //o
    .io_pixels_valid            (vga_ctrl_io_pixels_valid                       ), //i
    .io_pixels_ready            (vga_ctrl_io_pixels_ready                       ), //o
    .io_pixels_payload_r        (dma_io_frame_translated_thrown_payload_r[4:0]  ), //i
    .io_pixels_payload_g        (dma_io_frame_translated_thrown_payload_g[5:0]  ), //i
    .io_pixels_payload_b        (dma_io_frame_translated_thrown_payload_b[4:0]  ), //i
    .io_vga_vSync               (vga_ctrl_io_vga_vSync                          ), //o
    .io_vga_hSync               (vga_ctrl_io_vga_hSync                          ), //o
    .io_vga_colorEn             (vga_ctrl_io_vga_colorEn                        ), //o
    .io_vga_color_r             (vga_ctrl_io_vga_color_r[4:0]                   ), //o
    .io_vga_color_g             (vga_ctrl_io_vga_color_g[5:0]                   ), //o
    .io_vga_color_b             (vga_ctrl_io_vga_color_b[4:0]                   ), //o
    .io_error                   (vga_ctrl_io_error                              ), //o
    .vga_clk                    (vga_clk                                        ), //i
    .vga_resetn                 (vga_resetn                                     )  //i
  );
  PulseCCByToggle pulseCCByToggle_1 (
    .io_pulseIn     (vga_ctrl_io_frameStart         ), //i
    .io_pulseOut    (pulseCCByToggle_1_io_pulseOut  ), //o
    .vga_clk        (vga_clk                        ), //i
    .vga_resetn     (vga_resetn                     ), //i
    .clk            (clk                            )  //i
  );
  assign readHaltRequest = 1'b0;
  assign writeHaltRequest = 1'b0;
  assign writeJoinEvent_fire = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign writeJoinEvent_valid = (axi4Ctrl_awvalid && axi4Ctrl_wvalid);
  assign axi4Ctrl_awready = writeJoinEvent_fire;
  assign axi4Ctrl_wready = writeJoinEvent_fire;
  assign writeJoinEvent_translated_valid = writeJoinEvent_valid;
  assign writeJoinEvent_ready = writeJoinEvent_translated_ready;
  assign writeJoinEvent_translated_payload_resp = writeRsp_resp;
  assign _zz_axi4Ctrl_bvalid = (! writeHaltRequest);
  assign writeJoinEvent_translated_ready = (_zz_writeJoinEvent_translated_ready && _zz_axi4Ctrl_bvalid);
  always @(*) begin
    _zz_writeJoinEvent_translated_ready = axi4Ctrl_bready;
    if(when_Stream_l342) begin
      _zz_writeJoinEvent_translated_ready = 1'b1;
    end
  end

  assign when_Stream_l342 = (! _zz_axi4Ctrl_bvalid_1);
  assign _zz_axi4Ctrl_bvalid_1 = _zz_axi4Ctrl_bvalid_2;
  assign axi4Ctrl_bvalid = _zz_axi4Ctrl_bvalid_1;
  assign axi4Ctrl_bresp = _zz_axi4Ctrl_bresp;
  always @(*) begin
    axi4Ctrl_arready = readDataStage_ready;
    if(when_Stream_l342_1) begin
      axi4Ctrl_arready = 1'b1;
    end
  end

  assign when_Stream_l342_1 = (! readDataStage_valid);
  assign readDataStage_valid = axi4Ctrl_ar_rValid;
  assign readDataStage_payload_addr = axi4Ctrl_ar_rData_addr;
  assign readDataStage_payload_prot = axi4Ctrl_ar_rData_prot;
  assign _zz_axi4Ctrl_rvalid = (! readHaltRequest);
  assign readDataStage_ready = (axi4Ctrl_rready && _zz_axi4Ctrl_rvalid);
  assign axi4Ctrl_rvalid = (readDataStage_valid && _zz_axi4Ctrl_rvalid);
  assign axi4Ctrl_rdata = readRsp_data;
  assign axi4Ctrl_rresp = readRsp_resp;
  assign writeRsp_resp = 2'b00;
  assign readRsp_resp = 2'b00;
  always @(*) begin
    readRsp_data = 32'h0;
    case(readDataStage_payload_addr)
      8'h0 : begin
        readRsp_data[0 : 0] = run;
        readRsp_data[1 : 1] = dma_io_busy;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axi4Ctrl_rvalid && axi4Ctrl_rready);
  assign axi_ar_valid = dma_io_mem_cmd_valid;
  assign axi_ar_payload_addr = ({7'd0,dma_io_mem_cmd_payload} <<< 7);
  assign axi_ar_payload_len = 8'h1f;
  assign axi_ar_payload_size = 3'b010;
  assign axi_ar_payload_cache = 4'b1111;
  assign axi_ar_payload_prot = 3'b010;
  assign axi_r_ready = 1'b1;
  assign vga_run = run_buffercc_io_dataOut;
  assign dma_io_frame_fire = (dma_io_frame_valid && dma_io_frame_ready);
  assign dma_io_frame_fire_1 = (dma_io_frame_valid && dma_io_frame_ready);
  assign when_VgaCtrl_l216 = (dma_io_frame_fire && dma_io_frame_payload_first);
  assign dma_io_frame_translated_valid = dma_io_frame_valid;
  always @(*) begin
    dma_io_frame_ready = dma_io_frame_translated_ready;
    if(when_Axi4VgaCtrl_l61) begin
      dma_io_frame_ready = 1'b1;
    end
  end

  assign dma_io_frame_translated_payload_r = dma_io_frame_payload_fragment_r;
  assign dma_io_frame_translated_payload_g = dma_io_frame_payload_fragment_g;
  assign dma_io_frame_translated_payload_b = dma_io_frame_payload_fragment_b;
  always @(*) begin
    dma_io_frame_translated_thrown_valid = dma_io_frame_translated_valid;
    if(when_Stream_l408) begin
      dma_io_frame_translated_thrown_valid = 1'b0;
    end
  end

  always @(*) begin
    dma_io_frame_translated_ready = dma_io_frame_translated_thrown_ready;
    if(when_Stream_l408) begin
      dma_io_frame_translated_ready = 1'b1;
    end
  end

  assign dma_io_frame_translated_thrown_payload_r = dma_io_frame_translated_payload_r;
  assign dma_io_frame_translated_thrown_payload_g = dma_io_frame_translated_payload_g;
  assign dma_io_frame_translated_thrown_payload_b = dma_io_frame_translated_payload_b;
  assign _zz_dma_io_frame_translated_thrown_ready_1 = (! _zz_dma_io_frame_translated_thrown_ready);
  assign dma_io_frame_translated_thrown_ready = (vga_ctrl_io_pixels_ready && _zz_dma_io_frame_translated_thrown_ready_1);
  assign vga_ctrl_io_pixels_valid = (dma_io_frame_translated_thrown_valid && _zz_dma_io_frame_translated_thrown_ready_1);
  assign dma_io_frame_fire_2 = (dma_io_frame_valid && dma_io_frame_ready);
  assign when_VgaCtrl_l223 = (dma_io_frame_fire_2 && dma_io_frame_payload_last);
  assign when_VgaCtrl_l227 = ((! _zz_dma_io_frame_translated_thrown_ready) && (! when_Stream_l408));
  assign when_VgaCtrl_l228 = ((vga_ctrl_io_error || (vga_run && (! vga_run_regNext))) || ((_zz_when_VgaCtrl_l228 && dma_io_frame_valid) && (! dma_io_frame_payload_first)));
  assign when_Axi4VgaCtrl_l61 = (! vga_run);
  assign vga_ctrl_io_softReset = (! vga_run);
  assign vga_vSync = vga_ctrl_io_vga_vSync;
  assign vga_hSync = vga_ctrl_io_vga_hSync;
  assign vga_colorEn = vga_ctrl_io_vga_colorEn;
  assign vga_color_r = vga_ctrl_io_vga_color_r;
  assign vga_color_g = vga_ctrl_io_vga_color_g;
  assign vga_color_b = vga_ctrl_io_vga_color_b;
  assign dma_io_start = (pulseCCByToggle_1_io_pulseOut && run);
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axi4Ctrl_bvalid_2 <= 1'b0;
      axi4Ctrl_ar_rValid <= 1'b0;
      run <= 1'b0;
      _zz_io_timings_h_polarity <= 1'b0;
      _zz_io_timings_v_polarity <= 1'b0;
    end else begin
      if(_zz_writeJoinEvent_translated_ready) begin
        _zz_axi4Ctrl_bvalid_2 <= (writeJoinEvent_translated_valid && _zz_axi4Ctrl_bvalid);
      end
      if(axi4Ctrl_arready) begin
        axi4Ctrl_ar_rValid <= axi4Ctrl_arvalid;
      end
      case(axi4Ctrl_awaddr)
        8'h0 : begin
          if(writeOccur) begin
            run <= axi4Ctrl_wdata[0];
          end
        end
        8'h60 : begin
          if(writeOccur) begin
            _zz_io_timings_h_polarity <= axi4Ctrl_wdata[0];
            _zz_io_timings_v_polarity <= axi4Ctrl_wdata[1];
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    if(_zz_writeJoinEvent_translated_ready) begin
      _zz_axi4Ctrl_bresp <= writeJoinEvent_translated_payload_resp;
    end
    if(axi4Ctrl_arready) begin
      axi4Ctrl_ar_rData_addr <= axi4Ctrl_araddr;
      axi4Ctrl_ar_rData_prot <= axi4Ctrl_arprot;
    end
    case(axi4Ctrl_awaddr)
      8'h04 : begin
        if(writeOccur) begin
          _zz_io_size <= axi4Ctrl_wdata[21 : 7];
        end
      end
      8'h08 : begin
        if(writeOccur) begin
          _zz_io_base <= axi4Ctrl_wdata[31 : 7];
        end
      end
      8'h40 : begin
        if(writeOccur) begin
          _zz_io_timings_h_syncStart <= axi4Ctrl_wdata[11 : 0];
        end
      end
      8'h44 : begin
        if(writeOccur) begin
          _zz_io_timings_h_syncEnd <= axi4Ctrl_wdata[11 : 0];
        end
      end
      8'h48 : begin
        if(writeOccur) begin
          _zz_io_timings_h_colorStart <= axi4Ctrl_wdata[11 : 0];
        end
      end
      8'h4c : begin
        if(writeOccur) begin
          _zz_io_timings_h_colorEnd <= axi4Ctrl_wdata[11 : 0];
        end
      end
      8'h50 : begin
        if(writeOccur) begin
          _zz_io_timings_v_syncStart <= axi4Ctrl_wdata[11 : 0];
        end
      end
      8'h54 : begin
        if(writeOccur) begin
          _zz_io_timings_v_syncEnd <= axi4Ctrl_wdata[11 : 0];
        end
      end
      8'h58 : begin
        if(writeOccur) begin
          _zz_io_timings_v_colorStart <= axi4Ctrl_wdata[11 : 0];
        end
      end
      8'h5c : begin
        if(writeOccur) begin
          _zz_io_timings_v_colorEnd <= axi4Ctrl_wdata[11 : 0];
        end
      end
      default : begin
      end
    endcase
  end

  always @(posedge vga_clk) begin
    vga_run_regNext <= vga_run;
    if(vga_ctrl_io_frameStart) begin
      _zz_when_VgaCtrl_l228 <= 1'b1;
    end
    if(when_VgaCtrl_l216) begin
      _zz_when_VgaCtrl_l228 <= 1'b0;
    end
  end

  always @(posedge vga_clk) begin
    if(!vga_resetn) begin
      when_Stream_l408 <= 1'b0;
      _zz_dma_io_frame_translated_thrown_ready <= 1'b0;
      dma_io_frame_payload_first <= 1'b1;
    end else begin
      if(dma_io_frame_fire_1) begin
        dma_io_frame_payload_first <= dma_io_frame_payload_last;
      end
      if(vga_ctrl_io_frameStart) begin
        _zz_dma_io_frame_translated_thrown_ready <= 1'b0;
      end
      if(when_VgaCtrl_l223) begin
        when_Stream_l408 <= 1'b0;
        _zz_dma_io_frame_translated_thrown_ready <= when_Stream_l408;
      end
      if(when_VgaCtrl_l227) begin
        if(when_VgaCtrl_l228) begin
          when_Stream_l408 <= 1'b1;
        end
      end
    end
  end


endmodule

module PulseCCByToggle (
  input               io_pulseIn,
  output              io_pulseOut,
  input               vga_clk,
  input               vga_resetn,
  input               clk
);

  wire                bufferCC_7_io_dataOut;
  wire                inArea_target_buffercc_io_dataOut;
  reg                 inArea_target;
  wire                vga_resetn_syncronized;
  wire                outArea_target;
  reg                 outArea_target_regNext;

  BufferCC_4 bufferCC_7 (
    .io_dataIn     (1'b1                   ), //i
    .io_dataOut    (bufferCC_7_io_dataOut  ), //o
    .clk           (clk                    ), //i
    .vga_resetn    (vga_resetn             )  //i
  );
  BufferCC_5 inArea_target_buffercc (
    .io_dataIn                 (inArea_target                      ), //i
    .io_dataOut                (inArea_target_buffercc_io_dataOut  ), //o
    .clk                       (clk                                ), //i
    .vga_resetn_syncronized    (vga_resetn_syncronized             )  //i
  );
  assign vga_resetn_syncronized = bufferCC_7_io_dataOut;
  assign outArea_target = inArea_target_buffercc_io_dataOut;
  assign io_pulseOut = (outArea_target ^ outArea_target_regNext);
  always @(posedge vga_clk) begin
    if(!vga_resetn) begin
      inArea_target <= 1'b0;
    end else begin
      if(io_pulseIn) begin
        inArea_target <= (! inArea_target);
      end
    end
  end

  always @(posedge clk) begin
    if(!vga_resetn_syncronized) begin
      outArea_target_regNext <= 1'b0;
    end else begin
      outArea_target_regNext <= outArea_target;
    end
  end


endmodule

module VgaCtrl (
  input               io_softReset,
  input      [11:0]   io_timings_h_syncStart,
  input      [11:0]   io_timings_h_syncEnd,
  input      [11:0]   io_timings_h_colorStart,
  input      [11:0]   io_timings_h_colorEnd,
  input               io_timings_h_polarity,
  input      [11:0]   io_timings_v_syncStart,
  input      [11:0]   io_timings_v_syncEnd,
  input      [11:0]   io_timings_v_colorStart,
  input      [11:0]   io_timings_v_colorEnd,
  input               io_timings_v_polarity,
  output              io_frameStart,
  input               io_pixels_valid,
  output              io_pixels_ready,
  input      [4:0]    io_pixels_payload_r,
  input      [5:0]    io_pixels_payload_g,
  input      [4:0]    io_pixels_payload_b,
  output              io_vga_vSync,
  output              io_vga_hSync,
  output              io_vga_colorEn,
  output     [4:0]    io_vga_color_r,
  output     [5:0]    io_vga_color_g,
  output     [4:0]    io_vga_color_b,
  output              io_error,
  input               vga_clk,
  input               vga_resetn
);

  wire                when_VgaCtrl_l181;
  reg        [11:0]   h_counter;
  wire                h_syncStart;
  wire                h_syncEnd;
  wire                h_colorStart;
  wire                h_colorEnd;
  reg                 h_sync;
  reg                 h_colorEn;
  reg        [11:0]   v_counter;
  wire                v_syncStart;
  wire                v_syncEnd;
  wire                v_colorStart;
  wire                v_colorEnd;
  reg                 v_sync;
  reg                 v_colorEn;
  wire                colorEn;

  assign when_VgaCtrl_l181 = 1'b1;
  assign h_syncStart = (h_counter == io_timings_h_syncStart);
  assign h_syncEnd = (h_counter == io_timings_h_syncEnd);
  assign h_colorStart = (h_counter == io_timings_h_colorStart);
  assign h_colorEnd = (h_counter == io_timings_h_colorEnd);
  assign v_syncStart = (v_counter == io_timings_v_syncStart);
  assign v_syncEnd = (v_counter == io_timings_v_syncEnd);
  assign v_colorStart = (v_counter == io_timings_v_colorStart);
  assign v_colorEnd = (v_counter == io_timings_v_colorEnd);
  assign colorEn = (h_colorEn && v_colorEn);
  assign io_pixels_ready = colorEn;
  assign io_error = (colorEn && (! io_pixels_valid));
  assign io_frameStart = (v_syncStart && h_syncStart);
  assign io_vga_hSync = (h_sync ^ io_timings_h_polarity);
  assign io_vga_vSync = (v_sync ^ io_timings_v_polarity);
  assign io_vga_colorEn = colorEn;
  assign io_vga_color_r = io_pixels_payload_r;
  assign io_vga_color_g = io_pixels_payload_g;
  assign io_vga_color_b = io_pixels_payload_b;
  always @(posedge vga_clk) begin
    if(!vga_resetn) begin
      h_counter <= 12'h0;
      h_sync <= 1'b0;
      h_colorEn <= 1'b0;
      v_counter <= 12'h0;
      v_sync <= 1'b0;
      v_colorEn <= 1'b0;
    end else begin
      if(when_VgaCtrl_l181) begin
        h_counter <= (h_counter + 12'h001);
        if(h_syncEnd) begin
          h_counter <= 12'h0;
        end
      end
      if(h_syncStart) begin
        h_sync <= 1'b1;
      end
      if(h_syncEnd) begin
        h_sync <= 1'b0;
      end
      if(h_colorStart) begin
        h_colorEn <= 1'b1;
      end
      if(h_colorEnd) begin
        h_colorEn <= 1'b0;
      end
      if(io_softReset) begin
        h_counter <= 12'h0;
        h_sync <= 1'b0;
        h_colorEn <= 1'b0;
      end
      if(h_syncEnd) begin
        v_counter <= (v_counter + 12'h001);
        if(v_syncEnd) begin
          v_counter <= 12'h0;
        end
      end
      if(v_syncStart) begin
        v_sync <= 1'b1;
      end
      if(v_syncEnd) begin
        v_sync <= 1'b0;
      end
      if(v_colorStart) begin
        v_colorEn <= 1'b1;
      end
      if(v_colorEnd) begin
        v_colorEn <= 1'b0;
      end
      if(io_softReset) begin
        v_counter <= 12'h0;
        v_sync <= 1'b0;
        v_colorEn <= 1'b0;
      end
    end
  end


endmodule

module BufferCC_6 (
  input               io_dataIn,
  output              io_dataOut,
  input               vga_clk,
  input               vga_resetn
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge vga_clk) begin
    buffers_0 <= io_dataIn;
    buffers_1 <= buffers_0;
  end


endmodule

module VideoDMA (
  input               io_start,
  output              io_busy,
  input      [24:0]   io_base,
  input      [14:0]   io_size,
  output reg          io_mem_cmd_valid,
  input               io_mem_cmd_ready,
  output     [24:0]   io_mem_cmd_payload,
  input               io_mem_rsp_valid,
  input               io_mem_rsp_payload_last,
  input      [31:0]   io_mem_rsp_payload_fragment,
  output              io_frame_valid,
  input               io_frame_ready,
  output              io_frame_payload_last,
  output     [4:0]    io_frame_payload_fragment_r,
  output     [5:0]    io_frame_payload_fragment_g,
  output     [4:0]    io_frame_payload_fragment_b,
  input               clk,
  input               resetn,
  input               vga_clk,
  input               vga_resetn
);

  wire                rspArea_fifo_io_push_ready;
  wire                rspArea_fifo_io_pop_valid;
  wire                rspArea_fifo_io_pop_payload_last;
  wire       [31:0]   rspArea_fifo_io_pop_payload_fragment;
  wire       [9:0]    rspArea_fifo_io_pushOccupancy;
  wire       [9:0]    rspArea_fifo_io_popOccupancy;
  wire       [4:0]    rspArea_frameClockArea_popCmdGray_buffercc_io_dataOut;
  wire       [24:0]   _zz_io_mem_cmd_payload;
  wire       [4:0]    _zz_rspArea_frameClockArea_popBeatCounter_valueNext;
  wire       [0:0]    _zz_rspArea_frameClockArea_popBeatCounter_valueNext_1;
  reg        [15:0]   _zz__zz_io_frame_payload_fragment_r_1;
  reg        [7:0]    _zz_pendingMemRsp;
  reg        [7:0]    _zz_pendingMemRsp_1;
  wire                io_mem_cmd_fire;
  wire                when_Utils_l615;
  reg                 pendingMemCmd_incrementIt;
  reg                 pendingMemCmd_decrementIt;
  wire       [2:0]    pendingMemCmd_valueNext;
  reg        [2:0]    pendingMemCmd_value;
  wire                pendingMemCmd_willOverflowIfInc;
  wire                pendingMemCmd_willOverflow;
  reg        [2:0]    pendingMemCmd_finalIncrement;
  wire                when_Utils_l640;
  wire                when_Utils_l642;
  wire                io_mem_cmd_fire_1;
  reg        [7:0]    pendingMemRsp;
  wire       [7:0]    _zz_pendingMemRsp_2;
  wire                toManyPendingCmd;
  wire                toManyPendingRsp;
  reg                 isActive;
  reg                 cmdActive;
  reg        [14:0]   memCmdCounter;
  wire                memCmdLast;
  wire                when_VideoDMA_l94;
  wire                when_VideoDMA_l102;
  wire                when_VideoDMA_l104;
  wire                when_VideoDMA_l108;
  wire                io_mem_cmd_fire_2;
  wire                memRsp_valid;
  wire                memRsp_payload_last;
  wire       [31:0]   memRsp_payload_fragment;
  wire                fifoPop_valid;
  wire                fifoPop_ready;
  wire                fifoPop_payload_last;
  wire       [31:0]   fifoPop_payload_fragment;
  wire                memRsp_toStream_valid;
  wire                memRsp_toStream_ready;
  wire                memRsp_toStream_payload_last;
  wire       [31:0]   memRsp_toStream_payload_fragment;
  reg                 rspArea_frameClockArea_popBeatCounter_willIncrement;
  wire                rspArea_frameClockArea_popBeatCounter_willClear;
  reg        [4:0]    rspArea_frameClockArea_popBeatCounter_valueNext;
  reg        [4:0]    rspArea_frameClockArea_popBeatCounter_value;
  wire                rspArea_frameClockArea_popBeatCounter_willOverflowIfInc;
  wire                rspArea_frameClockArea_popBeatCounter_willOverflow;
  wire                rspArea_fifo_io_pop_fire;
  reg        [4:0]    rspArea_frameClockArea_popCmdGray;
  reg                 _zz_when_Utils_l385;
  wire       [4:0]    _zz_when_Utils_l385_1;
  reg                 _zz_when_Utils_l385_2;
  reg                 _zz_when_Utils_l385_3;
  reg                 _zz_when_Utils_l385_4;
  reg                 _zz_when_Utils_l385_5;
  wire                when_Utils_l385;
  wire                when_Utils_l385_1;
  wire                when_Utils_l385_2;
  wire                when_Utils_l385_3;
  wire                when_Utils_l385_4;
  wire       [4:0]    rspArea_popCmdGray;
  wire                io_mem_cmd_fire_3;
  reg        [4:0]    rspArea_pushCmdGray;
  reg                 _zz_when_Utils_l385_6;
  wire       [4:0]    _zz_when_Utils_l385_7;
  reg                 _zz_when_Utils_l385_8;
  reg                 _zz_when_Utils_l385_9;
  reg                 _zz_when_Utils_l385_10;
  reg                 _zz_when_Utils_l385_11;
  wire                when_Utils_l385_5;
  wire                when_Utils_l385_6;
  wire                when_Utils_l385_7;
  wire                when_Utils_l385_8;
  wire                when_Utils_l385_9;
  wire                io_frame_fire;
  reg                 _zz_io_frame_payload_last;
  reg        [0:0]    _zz_io_frame_payload_last_1;
  reg        [0:0]    _zz_io_frame_payload_last_2;
  wire                _zz_io_frame_payload_last_3;
  wire       [31:0]   _zz_io_frame_payload_fragment_r;
  wire       [15:0]   _zz_io_frame_payload_fragment_r_1;

  assign _zz_io_mem_cmd_payload = {10'd0, memCmdCounter};
  assign _zz_rspArea_frameClockArea_popBeatCounter_valueNext_1 = rspArea_frameClockArea_popBeatCounter_willIncrement;
  assign _zz_rspArea_frameClockArea_popBeatCounter_valueNext = {4'd0, _zz_rspArea_frameClockArea_popBeatCounter_valueNext_1};
  StreamFifoCC rspArea_fifo (
    .io_push_valid               (memRsp_toStream_valid                       ), //i
    .io_push_ready               (rspArea_fifo_io_push_ready                  ), //o
    .io_push_payload_last        (memRsp_toStream_payload_last                ), //i
    .io_push_payload_fragment    (memRsp_toStream_payload_fragment[31:0]      ), //i
    .io_pop_valid                (rspArea_fifo_io_pop_valid                   ), //o
    .io_pop_ready                (fifoPop_ready                               ), //i
    .io_pop_payload_last         (rspArea_fifo_io_pop_payload_last            ), //o
    .io_pop_payload_fragment     (rspArea_fifo_io_pop_payload_fragment[31:0]  ), //o
    .io_pushOccupancy            (rspArea_fifo_io_pushOccupancy[9:0]          ), //o
    .io_popOccupancy             (rspArea_fifo_io_popOccupancy[9:0]           ), //o
    .clk                         (clk                                         ), //i
    .resetn                      (resetn                                      ), //i
    .vga_clk                     (vga_clk                                     )  //i
  );
  BufferCC_3 rspArea_frameClockArea_popCmdGray_buffercc (
    .io_dataIn     (rspArea_frameClockArea_popCmdGray[4:0]                      ), //i
    .io_dataOut    (rspArea_frameClockArea_popCmdGray_buffercc_io_dataOut[4:0]  ), //o
    .clk           (clk                                                         ), //i
    .resetn        (resetn                                                      )  //i
  );
  always @(*) begin
    case(_zz_io_frame_payload_last_2)
      1'b0 : _zz__zz_io_frame_payload_fragment_r_1 = _zz_io_frame_payload_fragment_r[15 : 0];
      default : _zz__zz_io_frame_payload_fragment_r_1 = _zz_io_frame_payload_fragment_r[31 : 16];
    endcase
  end

  always @(*) begin
    _zz_pendingMemRsp = _zz_pendingMemRsp_1;
    if(io_mem_rsp_valid) begin
      _zz_pendingMemRsp = (_zz_pendingMemRsp_1 - 8'h01);
    end
  end

  always @(*) begin
    _zz_pendingMemRsp_1 = _zz_pendingMemRsp_2;
    if(io_mem_cmd_fire_1) begin
      _zz_pendingMemRsp_1 = (_zz_pendingMemRsp_2 + 8'h20);
    end
  end

  assign io_mem_cmd_fire = (io_mem_cmd_valid && io_mem_cmd_ready);
  assign when_Utils_l615 = (io_mem_rsp_valid && io_mem_rsp_payload_last);
  always @(*) begin
    pendingMemCmd_incrementIt = 1'b0;
    if(io_mem_cmd_fire) begin
      pendingMemCmd_incrementIt = 1'b1;
    end
  end

  always @(*) begin
    pendingMemCmd_decrementIt = 1'b0;
    if(when_Utils_l615) begin
      pendingMemCmd_decrementIt = 1'b1;
    end
  end

  assign pendingMemCmd_willOverflowIfInc = ((pendingMemCmd_value == 3'b111) && (! pendingMemCmd_decrementIt));
  assign pendingMemCmd_willOverflow = (pendingMemCmd_willOverflowIfInc && pendingMemCmd_incrementIt);
  assign when_Utils_l640 = (pendingMemCmd_incrementIt && (! pendingMemCmd_decrementIt));
  always @(*) begin
    if(when_Utils_l640) begin
      pendingMemCmd_finalIncrement = 3'b001;
    end else begin
      if(when_Utils_l642) begin
        pendingMemCmd_finalIncrement = 3'b111;
      end else begin
        pendingMemCmd_finalIncrement = 3'b000;
      end
    end
  end

  assign when_Utils_l642 = ((! pendingMemCmd_incrementIt) && pendingMemCmd_decrementIt);
  assign pendingMemCmd_valueNext = (pendingMemCmd_value + pendingMemCmd_finalIncrement);
  assign io_mem_cmd_fire_1 = (io_mem_cmd_valid && io_mem_cmd_ready);
  assign _zz_pendingMemRsp_2 = pendingMemRsp;
  assign toManyPendingCmd = (3'b110 < pendingMemCmd_value);
  assign io_busy = isActive;
  assign memCmdLast = (memCmdCounter == io_size);
  always @(*) begin
    io_mem_cmd_valid = 1'b0;
    if(!when_VideoDMA_l94) begin
      if(cmdActive) begin
        if(when_VideoDMA_l102) begin
          io_mem_cmd_valid = 1'b1;
        end
      end
    end
  end

  assign io_mem_cmd_payload = (io_base + _zz_io_mem_cmd_payload);
  assign when_VideoDMA_l94 = (! isActive);
  assign when_VideoDMA_l102 = ((! toManyPendingCmd) && (! toManyPendingRsp));
  assign when_VideoDMA_l104 = (memCmdLast && io_mem_cmd_ready);
  assign when_VideoDMA_l108 = (pendingMemRsp == 8'h0);
  assign io_mem_cmd_fire_2 = (io_mem_cmd_valid && io_mem_cmd_ready);
  assign memRsp_valid = io_mem_rsp_valid;
  assign memRsp_payload_last = ((! cmdActive) && (pendingMemRsp == 8'h01));
  assign memRsp_payload_fragment = io_mem_rsp_payload_fragment;
  assign memRsp_toStream_valid = memRsp_valid;
  assign memRsp_toStream_payload_last = memRsp_payload_last;
  assign memRsp_toStream_payload_fragment = memRsp_payload_fragment;
  assign memRsp_toStream_ready = rspArea_fifo_io_push_ready;
  assign fifoPop_valid = rspArea_fifo_io_pop_valid;
  assign fifoPop_payload_last = rspArea_fifo_io_pop_payload_last;
  assign fifoPop_payload_fragment = rspArea_fifo_io_pop_payload_fragment;
  always @(*) begin
    rspArea_frameClockArea_popBeatCounter_willIncrement = 1'b0;
    if(rspArea_fifo_io_pop_fire) begin
      rspArea_frameClockArea_popBeatCounter_willIncrement = 1'b1;
    end
  end

  assign rspArea_frameClockArea_popBeatCounter_willClear = 1'b0;
  assign rspArea_frameClockArea_popBeatCounter_willOverflowIfInc = (rspArea_frameClockArea_popBeatCounter_value == 5'h1f);
  assign rspArea_frameClockArea_popBeatCounter_willOverflow = (rspArea_frameClockArea_popBeatCounter_willOverflowIfInc && rspArea_frameClockArea_popBeatCounter_willIncrement);
  always @(*) begin
    rspArea_frameClockArea_popBeatCounter_valueNext = (rspArea_frameClockArea_popBeatCounter_value + _zz_rspArea_frameClockArea_popBeatCounter_valueNext);
    if(rspArea_frameClockArea_popBeatCounter_willClear) begin
      rspArea_frameClockArea_popBeatCounter_valueNext = 5'h0;
    end
  end

  assign rspArea_fifo_io_pop_fire = (rspArea_fifo_io_pop_valid && fifoPop_ready);
  assign _zz_when_Utils_l385_1 = {1'b1,{rspArea_frameClockArea_popCmdGray[2 : 0],_zz_when_Utils_l385}};
  always @(*) begin
    _zz_when_Utils_l385_2 = _zz_when_Utils_l385_3;
    if(when_Utils_l385_3) begin
      _zz_when_Utils_l385_2 = 1'b1;
    end
  end

  always @(*) begin
    _zz_when_Utils_l385_3 = _zz_when_Utils_l385_4;
    if(when_Utils_l385_2) begin
      _zz_when_Utils_l385_3 = 1'b1;
    end
  end

  always @(*) begin
    _zz_when_Utils_l385_4 = _zz_when_Utils_l385_5;
    if(when_Utils_l385_1) begin
      _zz_when_Utils_l385_4 = 1'b1;
    end
  end

  always @(*) begin
    _zz_when_Utils_l385_5 = 1'b0;
    if(when_Utils_l385) begin
      _zz_when_Utils_l385_5 = 1'b1;
    end
  end

  assign when_Utils_l385 = (_zz_when_Utils_l385_1[0] && (! 1'b0));
  assign when_Utils_l385_1 = (_zz_when_Utils_l385_1[1] && (! _zz_when_Utils_l385_5));
  assign when_Utils_l385_2 = (_zz_when_Utils_l385_1[2] && (! _zz_when_Utils_l385_4));
  assign when_Utils_l385_3 = (_zz_when_Utils_l385_1[3] && (! _zz_when_Utils_l385_3));
  assign when_Utils_l385_4 = (_zz_when_Utils_l385_1[4] && (! _zz_when_Utils_l385_2));
  assign rspArea_popCmdGray = rspArea_frameClockArea_popCmdGray_buffercc_io_dataOut;
  assign io_mem_cmd_fire_3 = (io_mem_cmd_valid && io_mem_cmd_ready);
  assign _zz_when_Utils_l385_7 = {1'b1,{rspArea_pushCmdGray[2 : 0],_zz_when_Utils_l385_6}};
  always @(*) begin
    _zz_when_Utils_l385_8 = _zz_when_Utils_l385_9;
    if(when_Utils_l385_8) begin
      _zz_when_Utils_l385_8 = 1'b1;
    end
  end

  always @(*) begin
    _zz_when_Utils_l385_9 = _zz_when_Utils_l385_10;
    if(when_Utils_l385_7) begin
      _zz_when_Utils_l385_9 = 1'b1;
    end
  end

  always @(*) begin
    _zz_when_Utils_l385_10 = _zz_when_Utils_l385_11;
    if(when_Utils_l385_6) begin
      _zz_when_Utils_l385_10 = 1'b1;
    end
  end

  always @(*) begin
    _zz_when_Utils_l385_11 = 1'b0;
    if(when_Utils_l385_5) begin
      _zz_when_Utils_l385_11 = 1'b1;
    end
  end

  assign when_Utils_l385_5 = (_zz_when_Utils_l385_7[0] && (! 1'b0));
  assign when_Utils_l385_6 = (_zz_when_Utils_l385_7[1] && (! _zz_when_Utils_l385_11));
  assign when_Utils_l385_7 = (_zz_when_Utils_l385_7[2] && (! _zz_when_Utils_l385_10));
  assign when_Utils_l385_8 = (_zz_when_Utils_l385_7[3] && (! _zz_when_Utils_l385_9));
  assign when_Utils_l385_9 = (_zz_when_Utils_l385_7[4] && (! _zz_when_Utils_l385_8));
  assign toManyPendingRsp = ((rspArea_pushCmdGray[4 : 3] == (~ rspArea_popCmdGray[4 : 3])) && (rspArea_pushCmdGray[2 : 0] == rspArea_popCmdGray[2 : 0]));
  assign io_frame_fire = (io_frame_valid && io_frame_ready);
  always @(*) begin
    _zz_io_frame_payload_last = 1'b0;
    if(io_frame_fire) begin
      _zz_io_frame_payload_last = 1'b1;
    end
  end

  assign _zz_io_frame_payload_last_3 = (_zz_io_frame_payload_last_2 == 1'b1);
  always @(*) begin
    _zz_io_frame_payload_last_1 = (_zz_io_frame_payload_last_2 + _zz_io_frame_payload_last);
    if(1'b0) begin
      _zz_io_frame_payload_last_1 = 1'b0;
    end
  end

  assign io_frame_valid = fifoPop_valid;
  assign _zz_io_frame_payload_fragment_r = fifoPop_payload_fragment;
  assign _zz_io_frame_payload_fragment_r_1 = _zz__zz_io_frame_payload_fragment_r_1;
  assign io_frame_payload_fragment_r = _zz_io_frame_payload_fragment_r_1[4 : 0];
  assign io_frame_payload_fragment_g = _zz_io_frame_payload_fragment_r_1[10 : 5];
  assign io_frame_payload_fragment_b = _zz_io_frame_payload_fragment_r_1[15 : 11];
  assign io_frame_payload_last = (fifoPop_payload_last && _zz_io_frame_payload_last_3);
  assign fifoPop_ready = (io_frame_ready && _zz_io_frame_payload_last_3);
  always @(posedge clk) begin
    if(!resetn) begin
      pendingMemCmd_value <= 3'b000;
      pendingMemRsp <= 8'h0;
      isActive <= 1'b0;
      cmdActive <= 1'b0;
      rspArea_pushCmdGray <= 5'h0;
      _zz_when_Utils_l385_6 <= 1'b1;
    end else begin
      pendingMemCmd_value <= pendingMemCmd_valueNext;
      pendingMemRsp <= _zz_pendingMemRsp;
      if(when_VideoDMA_l94) begin
        if(io_start) begin
          isActive <= 1'b1;
          cmdActive <= 1'b1;
        end
      end else begin
        if(cmdActive) begin
          if(when_VideoDMA_l102) begin
            if(when_VideoDMA_l104) begin
              cmdActive <= 1'b0;
            end
          end
        end else begin
          if(when_VideoDMA_l108) begin
            isActive <= 1'b0;
          end
        end
      end
      if(io_mem_cmd_fire_3) begin
        if(when_Utils_l385_5) begin
          rspArea_pushCmdGray[0] <= (! rspArea_pushCmdGray[0]);
        end
        if(when_Utils_l385_6) begin
          rspArea_pushCmdGray[1] <= (! rspArea_pushCmdGray[1]);
        end
        if(when_Utils_l385_7) begin
          rspArea_pushCmdGray[2] <= (! rspArea_pushCmdGray[2]);
        end
        if(when_Utils_l385_8) begin
          rspArea_pushCmdGray[3] <= (! rspArea_pushCmdGray[3]);
        end
        if(when_Utils_l385_9) begin
          rspArea_pushCmdGray[4] <= (! rspArea_pushCmdGray[4]);
        end
        _zz_when_Utils_l385_6 <= (! _zz_when_Utils_l385_6);
      end
    end
  end

  always @(posedge clk) begin
    if(when_VideoDMA_l94) begin
      if(io_start) begin
        memCmdCounter <= 15'h0;
      end
    end
    if(io_mem_cmd_fire_2) begin
      memCmdCounter <= (memCmdCounter + 15'h0001);
    end
  end

  always @(posedge vga_clk) begin
    if(!vga_resetn) begin
      rspArea_frameClockArea_popBeatCounter_value <= 5'h0;
      rspArea_frameClockArea_popCmdGray <= 5'h0;
      _zz_when_Utils_l385 <= 1'b1;
      _zz_io_frame_payload_last_2 <= 1'b0;
    end else begin
      rspArea_frameClockArea_popBeatCounter_value <= rspArea_frameClockArea_popBeatCounter_valueNext;
      if(rspArea_frameClockArea_popBeatCounter_willOverflow) begin
        if(when_Utils_l385) begin
          rspArea_frameClockArea_popCmdGray[0] <= (! rspArea_frameClockArea_popCmdGray[0]);
        end
        if(when_Utils_l385_1) begin
          rspArea_frameClockArea_popCmdGray[1] <= (! rspArea_frameClockArea_popCmdGray[1]);
        end
        if(when_Utils_l385_2) begin
          rspArea_frameClockArea_popCmdGray[2] <= (! rspArea_frameClockArea_popCmdGray[2]);
        end
        if(when_Utils_l385_3) begin
          rspArea_frameClockArea_popCmdGray[3] <= (! rspArea_frameClockArea_popCmdGray[3]);
        end
        if(when_Utils_l385_4) begin
          rspArea_frameClockArea_popCmdGray[4] <= (! rspArea_frameClockArea_popCmdGray[4]);
        end
        _zz_when_Utils_l385 <= (! _zz_when_Utils_l385);
      end
      _zz_io_frame_payload_last_2 <= _zz_io_frame_payload_last_1;
    end
  end


endmodule

module BufferCC_5 (
  input               io_dataIn,
  output              io_dataOut,
  input               clk,
  input               vga_resetn_syncronized
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    if(!vga_resetn_syncronized) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_4 (
  input               io_dataIn,
  output              io_dataOut,
  input               clk,
  input               vga_resetn
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk or negedge vga_resetn) begin
    if(!vga_resetn) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_3 (
  input      [4:0]    io_dataIn,
  output     [4:0]    io_dataOut,
  input               clk,
  input               resetn
);

  (* async_reg = "true" *) reg        [4:0]    buffers_0;
  (* async_reg = "true" *) reg        [4:0]    buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    buffers_0 <= io_dataIn;
    buffers_1 <= buffers_0;
  end


endmodule

module StreamFifoCC (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [31:0]   io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [31:0]   io_pop_payload_fragment,
  output     [9:0]    io_pushOccupancy,
  output     [9:0]    io_popOccupancy,
  input               clk,
  input               resetn,
  input               vga_clk
);

  reg        [32:0]   _zz_ram_port1;
  wire       [9:0]    popToPushGray_buffercc_io_dataOut;
  wire                bufferCC_7_io_dataOut;
  wire       [9:0]    pushToPopGray_buffercc_io_dataOut;
  wire       [9:0]    _zz_pushCC_pushPtrGray;
  wire       [8:0]    _zz_ram_port;
  wire       [32:0]   _zz_ram_port_1;
  wire                _zz_io_pushOccupancy_9;
  wire       [9:0]    _zz_popCC_popPtrGray;
  wire       [8:0]    _zz_ram_port_2;
  wire                _zz_ram_port_3;
  wire       [8:0]    _zz__zz_io_pop_payload_last_1;
  wire                _zz__zz_io_pop_payload_last_1_1;
  wire                _zz_io_popOccupancy_9;
  reg                 _zz_1;
  wire       [9:0]    popToPushGray;
  wire       [9:0]    pushToPopGray;
  reg        [9:0]    pushCC_pushPtr;
  wire       [9:0]    pushCC_pushPtrPlus;
  wire                io_push_fire;
  reg        [9:0]    pushCC_pushPtrGray;
  wire       [9:0]    pushCC_popPtrGray;
  wire                pushCC_full;
  wire                io_push_fire_1;
  wire                _zz_io_pushOccupancy;
  wire                _zz_io_pushOccupancy_1;
  wire                _zz_io_pushOccupancy_2;
  wire                _zz_io_pushOccupancy_3;
  wire                _zz_io_pushOccupancy_4;
  wire                _zz_io_pushOccupancy_5;
  wire                _zz_io_pushOccupancy_6;
  wire                _zz_io_pushOccupancy_7;
  wire                _zz_io_pushOccupancy_8;
  wire                resetn_syncronized;
  reg        [9:0]    popCC_popPtr;
  wire       [9:0]    popCC_popPtrPlus;
  wire                io_pop_fire;
  reg        [9:0]    popCC_popPtrGray;
  wire       [9:0]    popCC_pushPtrGray;
  wire                popCC_empty;
  wire                io_pop_fire_1;
  wire       [9:0]    _zz_io_pop_payload_last;
  wire       [32:0]   _zz_io_pop_payload_last_1;
  wire                io_pop_fire_2;
  wire                _zz_io_popOccupancy;
  wire                _zz_io_popOccupancy_1;
  wire                _zz_io_popOccupancy_2;
  wire                _zz_io_popOccupancy_3;
  wire                _zz_io_popOccupancy_4;
  wire                _zz_io_popOccupancy_5;
  wire                _zz_io_popOccupancy_6;
  wire                _zz_io_popOccupancy_7;
  wire                _zz_io_popOccupancy_8;
  reg [32:0] ram [0:511];

  assign _zz_pushCC_pushPtrGray = (pushCC_pushPtrPlus >>> 1'b1);
  assign _zz_ram_port = pushCC_pushPtr[8:0];
  assign _zz_popCC_popPtrGray = (popCC_popPtrPlus >>> 1'b1);
  assign _zz__zz_io_pop_payload_last_1 = _zz_io_pop_payload_last[8:0];
  assign _zz_ram_port_1 = {io_push_payload_fragment,io_push_payload_last};
  assign _zz__zz_io_pop_payload_last_1_1 = 1'b1;
  assign _zz_io_pushOccupancy_9 = pushCC_popPtrGray[0];
  assign _zz_io_popOccupancy_9 = (popCC_pushPtrGray[0] ^ _zz_io_popOccupancy);
  always @(posedge clk) begin
    if(_zz_1) begin
      ram[_zz_ram_port] <= _zz_ram_port_1;
    end
  end

  always @(posedge vga_clk) begin
    if(_zz__zz_io_pop_payload_last_1_1) begin
      _zz_ram_port1 <= ram[_zz__zz_io_pop_payload_last_1];
    end
  end

  BufferCC popToPushGray_buffercc (
    .io_dataIn     (popToPushGray[9:0]                      ), //i
    .io_dataOut    (popToPushGray_buffercc_io_dataOut[9:0]  ), //o
    .clk           (clk                                     ), //i
    .resetn        (resetn                                  )  //i
  );
  BufferCC_1 bufferCC_7 (
    .io_dataIn     (1'b1                   ), //i
    .io_dataOut    (bufferCC_7_io_dataOut  ), //o
    .vga_clk       (vga_clk                ), //i
    .resetn        (resetn                 )  //i
  );
  BufferCC_2 pushToPopGray_buffercc (
    .io_dataIn             (pushToPopGray[9:0]                      ), //i
    .io_dataOut            (pushToPopGray_buffercc_io_dataOut[9:0]  ), //o
    .vga_clk               (vga_clk                                 ), //i
    .resetn_syncronized    (resetn_syncronized                      )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(io_push_fire_1) begin
      _zz_1 = 1'b1;
    end
  end

  assign pushCC_pushPtrPlus = (pushCC_pushPtr + 10'h001);
  assign io_push_fire = (io_push_valid && io_push_ready);
  assign pushCC_popPtrGray = popToPushGray_buffercc_io_dataOut;
  assign pushCC_full = ((pushCC_pushPtrGray[9 : 8] == (~ pushCC_popPtrGray[9 : 8])) && (pushCC_pushPtrGray[7 : 0] == pushCC_popPtrGray[7 : 0]));
  assign io_push_ready = (! pushCC_full);
  assign io_push_fire_1 = (io_push_valid && io_push_ready);
  assign _zz_io_pushOccupancy = (pushCC_popPtrGray[1] ^ _zz_io_pushOccupancy_1);
  assign _zz_io_pushOccupancy_1 = (pushCC_popPtrGray[2] ^ _zz_io_pushOccupancy_2);
  assign _zz_io_pushOccupancy_2 = (pushCC_popPtrGray[3] ^ _zz_io_pushOccupancy_3);
  assign _zz_io_pushOccupancy_3 = (pushCC_popPtrGray[4] ^ _zz_io_pushOccupancy_4);
  assign _zz_io_pushOccupancy_4 = (pushCC_popPtrGray[5] ^ _zz_io_pushOccupancy_5);
  assign _zz_io_pushOccupancy_5 = (pushCC_popPtrGray[6] ^ _zz_io_pushOccupancy_6);
  assign _zz_io_pushOccupancy_6 = (pushCC_popPtrGray[7] ^ _zz_io_pushOccupancy_7);
  assign _zz_io_pushOccupancy_7 = (pushCC_popPtrGray[8] ^ _zz_io_pushOccupancy_8);
  assign _zz_io_pushOccupancy_8 = pushCC_popPtrGray[9];
  assign io_pushOccupancy = (pushCC_pushPtr - {_zz_io_pushOccupancy_8,{_zz_io_pushOccupancy_7,{_zz_io_pushOccupancy_6,{_zz_io_pushOccupancy_5,{_zz_io_pushOccupancy_4,{_zz_io_pushOccupancy_3,{_zz_io_pushOccupancy_2,{_zz_io_pushOccupancy_1,{_zz_io_pushOccupancy,(_zz_io_pushOccupancy_9 ^ _zz_io_pushOccupancy)}}}}}}}}});
  assign resetn_syncronized = bufferCC_7_io_dataOut;
  assign popCC_popPtrPlus = (popCC_popPtr + 10'h001);
  assign io_pop_fire = (io_pop_valid && io_pop_ready);
  assign popCC_pushPtrGray = pushToPopGray_buffercc_io_dataOut;
  assign popCC_empty = (popCC_popPtrGray == popCC_pushPtrGray);
  assign io_pop_valid = (! popCC_empty);
  assign io_pop_fire_1 = (io_pop_valid && io_pop_ready);
  assign _zz_io_pop_payload_last = (io_pop_fire_1 ? popCC_popPtrPlus : popCC_popPtr);
  assign _zz_io_pop_payload_last_1 = _zz_ram_port1;
  assign io_pop_payload_last = _zz_io_pop_payload_last_1[0];
  assign io_pop_payload_fragment = _zz_io_pop_payload_last_1[32 : 1];
  assign io_pop_fire_2 = (io_pop_valid && io_pop_ready);
  assign _zz_io_popOccupancy = (popCC_pushPtrGray[1] ^ _zz_io_popOccupancy_1);
  assign _zz_io_popOccupancy_1 = (popCC_pushPtrGray[2] ^ _zz_io_popOccupancy_2);
  assign _zz_io_popOccupancy_2 = (popCC_pushPtrGray[3] ^ _zz_io_popOccupancy_3);
  assign _zz_io_popOccupancy_3 = (popCC_pushPtrGray[4] ^ _zz_io_popOccupancy_4);
  assign _zz_io_popOccupancy_4 = (popCC_pushPtrGray[5] ^ _zz_io_popOccupancy_5);
  assign _zz_io_popOccupancy_5 = (popCC_pushPtrGray[6] ^ _zz_io_popOccupancy_6);
  assign _zz_io_popOccupancy_6 = (popCC_pushPtrGray[7] ^ _zz_io_popOccupancy_7);
  assign _zz_io_popOccupancy_7 = (popCC_pushPtrGray[8] ^ _zz_io_popOccupancy_8);
  assign _zz_io_popOccupancy_8 = popCC_pushPtrGray[9];
  assign io_popOccupancy = ({_zz_io_popOccupancy_8,{_zz_io_popOccupancy_7,{_zz_io_popOccupancy_6,{_zz_io_popOccupancy_5,{_zz_io_popOccupancy_4,{_zz_io_popOccupancy_3,{_zz_io_popOccupancy_2,{_zz_io_popOccupancy_1,{_zz_io_popOccupancy,_zz_io_popOccupancy_9}}}}}}}}} - popCC_popPtr);
  assign pushToPopGray = pushCC_pushPtrGray;
  assign popToPushGray = popCC_popPtrGray;
  always @(posedge clk) begin
    if(!resetn) begin
      pushCC_pushPtr <= 10'h0;
      pushCC_pushPtrGray <= 10'h0;
    end else begin
      if(io_push_fire) begin
        pushCC_pushPtrGray <= (_zz_pushCC_pushPtrGray ^ pushCC_pushPtrPlus);
      end
      if(io_push_fire_1) begin
        pushCC_pushPtr <= pushCC_pushPtrPlus;
      end
    end
  end

  always @(posedge vga_clk) begin
    if(!resetn_syncronized) begin
      popCC_popPtr <= 10'h0;
      popCC_popPtrGray <= 10'h0;
    end else begin
      if(io_pop_fire) begin
        popCC_popPtrGray <= (_zz_popCC_popPtrGray ^ popCC_popPtrPlus);
      end
      if(io_pop_fire_2) begin
        popCC_popPtr <= popCC_popPtrPlus;
      end
    end
  end


endmodule

module BufferCC_2 (
  input      [9:0]    io_dataIn,
  output     [9:0]    io_dataOut,
  input               vga_clk,
  input               resetn_syncronized
);

  (* async_reg = "true" *) reg        [9:0]    buffers_0;
  (* async_reg = "true" *) reg        [9:0]    buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge vga_clk) begin
    if(!resetn_syncronized) begin
      buffers_0 <= 10'h0;
      buffers_1 <= 10'h0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_1 (
  input               io_dataIn,
  output              io_dataOut,
  input               vga_clk,
  input               resetn
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge vga_clk or negedge resetn) begin
    if(!resetn) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC (
  input      [9:0]    io_dataIn,
  output     [9:0]    io_dataOut,
  input               clk,
  input               resetn
);

  (* async_reg = "true" *) reg        [9:0]    buffers_0;
  (* async_reg = "true" *) reg        [9:0]    buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    if(!resetn) begin
      buffers_0 <= 10'h0;
      buffers_1 <= 10'h0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule
