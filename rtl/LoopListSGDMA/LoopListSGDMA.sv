// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : LoopListSGDMA
// Git hash  : 45beed740f640493a6ea4b63775589487bb29649

`timescale 1ns/1ps

module LoopListSGDMA (
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
  output              axi4S2M_awvalid,
  input               axi4S2M_awready,
  output     [31:0]   axi4S2M_awaddr,
  output     [3:0]    axi4S2M_awid,
  output     [7:0]    axi4S2M_awlen,
  output     [2:0]    axi4S2M_awsize,
  output     [1:0]    axi4S2M_awburst,
  output              axi4S2M_wvalid,
  input               axi4S2M_wready,
  output     [31:0]   axi4S2M_wdata,
  output     [3:0]    axi4S2M_wstrb,
  output              axi4S2M_wlast,
  input               axi4S2M_bvalid,
  output              axi4S2M_bready,
  input      [3:0]    axi4S2M_bid,
  input      [1:0]    axi4S2M_bresp,
  output              axi4S2M_arvalid,
  input               axi4S2M_arready,
  output     [31:0]   axi4S2M_araddr,
  output     [3:0]    axi4S2M_arid,
  output     [7:0]    axi4S2M_arlen,
  output     [2:0]    axi4S2M_arsize,
  output     [1:0]    axi4S2M_arburst,
  input               axi4S2M_rvalid,
  output              axi4S2M_rready,
  input      [31:0]   axi4S2M_rdata,
  input      [3:0]    axi4S2M_rid,
  input      [1:0]    axi4S2M_rresp,
  input               axi4S2M_rlast,
  output              axi4M2S_awvalid,
  input               axi4M2S_awready,
  output     [31:0]   axi4M2S_awaddr,
  output     [3:0]    axi4M2S_awid,
  output     [7:0]    axi4M2S_awlen,
  output     [2:0]    axi4M2S_awsize,
  output     [1:0]    axi4M2S_awburst,
  output              axi4M2S_wvalid,
  input               axi4M2S_wready,
  output     [31:0]   axi4M2S_wdata,
  output     [3:0]    axi4M2S_wstrb,
  output              axi4M2S_wlast,
  input               axi4M2S_bvalid,
  output              axi4M2S_bready,
  input      [3:0]    axi4M2S_bid,
  input      [1:0]    axi4M2S_bresp,
  output              axi4M2S_arvalid,
  input               axi4M2S_arready,
  output     [31:0]   axi4M2S_araddr,
  output     [3:0]    axi4M2S_arid,
  output     [7:0]    axi4M2S_arlen,
  output     [2:0]    axi4M2S_arsize,
  output     [1:0]    axi4M2S_arburst,
  input               axi4M2S_rvalid,
  output              axi4M2S_rready,
  input      [31:0]   axi4M2S_rdata,
  input      [3:0]    axi4M2S_rid,
  input      [1:0]    axi4M2S_rresp,
  input               axi4M2S_rlast,
  input               dataS2M_tvalid,
  output              dataS2M_tready,
  input      [31:0]   dataS2M_tdata,
  input      [3:0]    dataS2M_tstrb,
  input      [3:0]    dataS2M_tkeep,
  input               dataS2M_tlast,
  output              dataM2S_tvalid,
  input               dataM2S_tready,
  output     [31:0]   dataM2S_tdata,
  output     [3:0]    dataM2S_tstrb,
  output     [3:0]    dataM2S_tkeep,
  output              dataM2S_tlast,
  input               clk,
  input               resetn
);
  localparam BDMAs2mStates_IDLE = 2'd0;
  localparam BDMAs2mStates_REQ = 2'd1;
  localparam BDMAs2mStates_BURST = 2'd2;
  localparam BDMAs2mStates_DROP = 2'd3;
  localparam BDMAm2sStates_IDLE = 2'd0;
  localparam BDMAm2sStates_BURST = 2'd1;
  localparam BDMAm2sStates_FINAL_1 = 2'd2;

  wire                bdma_core_cchS2M_valid;
  wire                bdma_core_cchM2S_valid;
  reg        [68:0]   _zz_bdma_linked_list_port1;
  wire                bdma_core_axi4S2M_arvalid;
  wire       [31:0]   bdma_core_axi4S2M_araddr;
  wire       [3:0]    bdma_core_axi4S2M_arid;
  wire       [7:0]    bdma_core_axi4S2M_arlen;
  wire       [2:0]    bdma_core_axi4S2M_arsize;
  wire       [1:0]    bdma_core_axi4S2M_arburst;
  wire                bdma_core_axi4S2M_awvalid;
  wire       [31:0]   bdma_core_axi4S2M_awaddr;
  wire       [3:0]    bdma_core_axi4S2M_awid;
  wire       [7:0]    bdma_core_axi4S2M_awlen;
  wire       [2:0]    bdma_core_axi4S2M_awsize;
  wire       [1:0]    bdma_core_axi4S2M_awburst;
  wire                bdma_core_axi4S2M_wvalid;
  wire       [31:0]   bdma_core_axi4S2M_wdata;
  wire       [3:0]    bdma_core_axi4S2M_wstrb;
  wire                bdma_core_axi4S2M_wlast;
  wire                bdma_core_axi4S2M_rready;
  wire                bdma_core_axi4S2M_bready;
  wire                bdma_core_axi4M2S_arvalid;
  wire       [31:0]   bdma_core_axi4M2S_araddr;
  wire       [3:0]    bdma_core_axi4M2S_arid;
  wire       [7:0]    bdma_core_axi4M2S_arlen;
  wire       [2:0]    bdma_core_axi4M2S_arsize;
  wire       [1:0]    bdma_core_axi4M2S_arburst;
  wire                bdma_core_axi4M2S_awvalid;
  wire       [31:0]   bdma_core_axi4M2S_awaddr;
  wire       [3:0]    bdma_core_axi4M2S_awid;
  wire       [7:0]    bdma_core_axi4M2S_awlen;
  wire       [2:0]    bdma_core_axi4M2S_awsize;
  wire       [1:0]    bdma_core_axi4M2S_awburst;
  wire                bdma_core_axi4M2S_wvalid;
  wire       [31:0]   bdma_core_axi4M2S_wdata;
  wire       [3:0]    bdma_core_axi4M2S_wstrb;
  wire                bdma_core_axi4M2S_wlast;
  wire                bdma_core_axi4M2S_rready;
  wire                bdma_core_axi4M2S_bready;
  wire                bdma_core_dataS2M_tready;
  wire                bdma_core_dataM2S_tvalid;
  wire       [31:0]   bdma_core_dataM2S_tdata;
  wire       [3:0]    bdma_core_dataM2S_tstrb;
  wire       [3:0]    bdma_core_dataM2S_tkeep;
  wire                bdma_core_dataM2S_tlast;
  wire                bdma_core_cchS2M_ready;
  wire                bdma_core_cchM2S_ready;
  wire       [1:0]    bdma_core_indicatorS2M;
  wire       [1:0]    bdma_core_indicatorM2S;
  wire                bdma_core_intrS2M;
  wire                bdma_core_intrM2S;
  wire       [68:0]   _zz_bdma_linked_list_port;
  wire                _zz_bdma_linked_list_port_1;
  wire                _zz__zz_sgdma_ctrl_desc_start_addr;
  wire       [3:0]    _zz_bdma_cursor;
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
  wire       [3:0]    bdma_cursor_limit;
  wire                bdma_enable;
  wire       [3:0]    bdma_linked_list_write_addr;
  wire       [31:0]   bdma_linked_list_write_data_desc_start_addr;
  wire       [29:0]   bdma_linked_list_write_data_desc_total_bytes;
  wire       [1:0]    bdma_linked_list_write_data_desc_burst;
  wire       [3:0]    bdma_linked_list_write_data_desc_id;
  wire                bdma_linked_list_write_data_desc_is_s2m;
  wire                bdma_linked_list_write_enable;
  reg                 bdma_enable_driver;
  reg                 bdma_linked_list_write_enable_driver;
  reg        [3:0]    bdma_cursor_limit_driver;
  reg        [3:0]    bdma_linked_list_write_addr_driver;
  reg        [31:0]   bdma_linked_list_write_data_desc_start_addr_driver;
  reg        [29:0]   bdma_linked_list_write_data_desc_total_bytes_driver;
  reg        [3:0]    bdma_linked_list_write_data_desc_id_driver;
  reg        [1:0]    bdma_linked_list_write_data_desc_burst_driver;
  reg                 bdma_linked_list_write_data_desc_is_s2m_driver;
  reg        [3:0]    bdma_cursor;
  reg                 bdma_reset;
  wire       [31:0]   sgdma_ctrl_desc_start_addr;
  wire       [29:0]   sgdma_ctrl_desc_total_bytes;
  wire       [1:0]    sgdma_ctrl_desc_burst;
  wire       [3:0]    sgdma_ctrl_desc_id;
  wire                sgdma_ctrl_desc_is_s2m;
  wire       [68:0]   _zz_sgdma_ctrl_desc_start_addr;
  wire                when_LoopListSGDMA_l98;
  wire                bdma_core_cchS2M_fire;
  wire                bdma_core_cchM2S_fire;
  wire                when_LoopListSGDMA_l100;
  wire                when_LoopListSGDMA_l103;
  reg [68:0] bdma_linked_list [0:15];

  assign _zz_bdma_cursor = (bdma_cursor + 4'b0001);
  assign _zz_bdma_linked_list_port = {bdma_linked_list_write_data_desc_is_s2m,{bdma_linked_list_write_data_desc_id,{bdma_linked_list_write_data_desc_burst,{bdma_linked_list_write_data_desc_total_bytes,bdma_linked_list_write_data_desc_start_addr}}}};
  assign _zz__zz_sgdma_ctrl_desc_start_addr = 1'b1;
  always @(posedge clk) begin
    if(bdma_linked_list_write_enable) begin
      bdma_linked_list[bdma_linked_list_write_addr] <= _zz_bdma_linked_list_port;
    end
  end

  always @(posedge clk) begin
    if(_zz__zz_sgdma_ctrl_desc_start_addr) begin
      _zz_bdma_linked_list_port1 <= bdma_linked_list[bdma_cursor];
    end
  end

  BDMACore bdma_core (
    .axi4S2M_awvalid                 (bdma_core_axi4S2M_awvalid        ), //o
    .axi4S2M_awready                 (axi4S2M_awready                  ), //i
    .axi4S2M_awaddr                  (bdma_core_axi4S2M_awaddr[31:0]   ), //o
    .axi4S2M_awid                    (bdma_core_axi4S2M_awid[3:0]      ), //o
    .axi4S2M_awlen                   (bdma_core_axi4S2M_awlen[7:0]     ), //o
    .axi4S2M_awsize                  (bdma_core_axi4S2M_awsize[2:0]    ), //o
    .axi4S2M_awburst                 (bdma_core_axi4S2M_awburst[1:0]   ), //o
    .axi4S2M_wvalid                  (bdma_core_axi4S2M_wvalid         ), //o
    .axi4S2M_wready                  (axi4S2M_wready                   ), //i
    .axi4S2M_wdata                   (bdma_core_axi4S2M_wdata[31:0]    ), //o
    .axi4S2M_wstrb                   (bdma_core_axi4S2M_wstrb[3:0]     ), //o
    .axi4S2M_wlast                   (bdma_core_axi4S2M_wlast          ), //o
    .axi4S2M_bvalid                  (axi4S2M_bvalid                   ), //i
    .axi4S2M_bready                  (bdma_core_axi4S2M_bready         ), //o
    .axi4S2M_bid                     (axi4S2M_bid[3:0]                 ), //i
    .axi4S2M_bresp                   (axi4S2M_bresp[1:0]               ), //i
    .axi4S2M_arvalid                 (bdma_core_axi4S2M_arvalid        ), //o
    .axi4S2M_arready                 (axi4S2M_arready                  ), //i
    .axi4S2M_araddr                  (bdma_core_axi4S2M_araddr[31:0]   ), //o
    .axi4S2M_arid                    (bdma_core_axi4S2M_arid[3:0]      ), //o
    .axi4S2M_arlen                   (bdma_core_axi4S2M_arlen[7:0]     ), //o
    .axi4S2M_arsize                  (bdma_core_axi4S2M_arsize[2:0]    ), //o
    .axi4S2M_arburst                 (bdma_core_axi4S2M_arburst[1:0]   ), //o
    .axi4S2M_rvalid                  (axi4S2M_rvalid                   ), //i
    .axi4S2M_rready                  (bdma_core_axi4S2M_rready         ), //o
    .axi4S2M_rdata                   (axi4S2M_rdata[31:0]              ), //i
    .axi4S2M_rid                     (axi4S2M_rid[3:0]                 ), //i
    .axi4S2M_rresp                   (axi4S2M_rresp[1:0]               ), //i
    .axi4S2M_rlast                   (axi4S2M_rlast                    ), //i
    .axi4M2S_awvalid                 (bdma_core_axi4M2S_awvalid        ), //o
    .axi4M2S_awready                 (axi4M2S_awready                  ), //i
    .axi4M2S_awaddr                  (bdma_core_axi4M2S_awaddr[31:0]   ), //o
    .axi4M2S_awid                    (bdma_core_axi4M2S_awid[3:0]      ), //o
    .axi4M2S_awlen                   (bdma_core_axi4M2S_awlen[7:0]     ), //o
    .axi4M2S_awsize                  (bdma_core_axi4M2S_awsize[2:0]    ), //o
    .axi4M2S_awburst                 (bdma_core_axi4M2S_awburst[1:0]   ), //o
    .axi4M2S_wvalid                  (bdma_core_axi4M2S_wvalid         ), //o
    .axi4M2S_wready                  (axi4M2S_wready                   ), //i
    .axi4M2S_wdata                   (bdma_core_axi4M2S_wdata[31:0]    ), //o
    .axi4M2S_wstrb                   (bdma_core_axi4M2S_wstrb[3:0]     ), //o
    .axi4M2S_wlast                   (bdma_core_axi4M2S_wlast          ), //o
    .axi4M2S_bvalid                  (axi4M2S_bvalid                   ), //i
    .axi4M2S_bready                  (bdma_core_axi4M2S_bready         ), //o
    .axi4M2S_bid                     (axi4M2S_bid[3:0]                 ), //i
    .axi4M2S_bresp                   (axi4M2S_bresp[1:0]               ), //i
    .axi4M2S_arvalid                 (bdma_core_axi4M2S_arvalid        ), //o
    .axi4M2S_arready                 (axi4M2S_arready                  ), //i
    .axi4M2S_araddr                  (bdma_core_axi4M2S_araddr[31:0]   ), //o
    .axi4M2S_arid                    (bdma_core_axi4M2S_arid[3:0]      ), //o
    .axi4M2S_arlen                   (bdma_core_axi4M2S_arlen[7:0]     ), //o
    .axi4M2S_arsize                  (bdma_core_axi4M2S_arsize[2:0]    ), //o
    .axi4M2S_arburst                 (bdma_core_axi4M2S_arburst[1:0]   ), //o
    .axi4M2S_rvalid                  (axi4M2S_rvalid                   ), //i
    .axi4M2S_rready                  (bdma_core_axi4M2S_rready         ), //o
    .axi4M2S_rdata                   (axi4M2S_rdata[31:0]              ), //i
    .axi4M2S_rid                     (axi4M2S_rid[3:0]                 ), //i
    .axi4M2S_rresp                   (axi4M2S_rresp[1:0]               ), //i
    .axi4M2S_rlast                   (axi4M2S_rlast                    ), //i
    .dataS2M_tvalid                  (dataS2M_tvalid                   ), //i
    .dataS2M_tready                  (bdma_core_dataS2M_tready         ), //o
    .dataS2M_tdata                   (dataS2M_tdata[31:0]              ), //i
    .dataS2M_tstrb                   (dataS2M_tstrb[3:0]               ), //i
    .dataS2M_tkeep                   (dataS2M_tkeep[3:0]               ), //i
    .dataS2M_tlast                   (dataS2M_tlast                    ), //i
    .dataM2S_tvalid                  (bdma_core_dataM2S_tvalid         ), //o
    .dataM2S_tready                  (dataM2S_tready                   ), //i
    .dataM2S_tdata                   (bdma_core_dataM2S_tdata[31:0]    ), //o
    .dataM2S_tstrb                   (bdma_core_dataM2S_tstrb[3:0]     ), //o
    .dataM2S_tkeep                   (bdma_core_dataM2S_tkeep[3:0]     ), //o
    .dataM2S_tlast                   (bdma_core_dataM2S_tlast          ), //o
    .cchS2M_valid                    (bdma_core_cchS2M_valid           ), //i
    .cchS2M_ready                    (bdma_core_cchS2M_ready           ), //o
    .cchS2M_payload_desc_start_addr  (sgdma_ctrl_desc_start_addr[31:0] ), //i
    .cchS2M_payload_desc_total_bytes (sgdma_ctrl_desc_total_bytes[29:0]), //i
    .cchS2M_payload_desc_burst       (sgdma_ctrl_desc_burst[1:0]       ), //i
    .cchS2M_payload_desc_id          (sgdma_ctrl_desc_id[3:0]          ), //i
    .cchS2M_payload_desc_reset       (bdma_reset                       ), //i
    .cchM2S_valid                    (bdma_core_cchM2S_valid           ), //i
    .cchM2S_ready                    (bdma_core_cchM2S_ready           ), //o
    .cchM2S_payload_desc_start_addr  (sgdma_ctrl_desc_start_addr[31:0] ), //i
    .cchM2S_payload_desc_total_bytes (sgdma_ctrl_desc_total_bytes[29:0]), //i
    .cchM2S_payload_desc_burst       (sgdma_ctrl_desc_burst[1:0]       ), //i
    .cchM2S_payload_desc_id          (sgdma_ctrl_desc_id[3:0]          ), //i
    .cchM2S_payload_desc_reset       (bdma_reset                       ), //i
    .indicatorS2M                    (bdma_core_indicatorS2M[1:0]      ), //o
    .indicatorM2S                    (bdma_core_indicatorM2S[1:0]      ), //o
    .intrS2M                         (bdma_core_intrS2M                ), //o
    .intrM2S                         (bdma_core_intrM2S                ), //o
    .clk                             (clk                              ), //i
    .resetn                          (resetn                           )  //i
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
        readRsp_data[0 : 0] = bdma_enable_driver;
        readRsp_data[1 : 1] = bdma_linked_list_write_enable_driver;
      end
      8'h04 : begin
        readRsp_data[3 : 0] = bdma_cursor_limit_driver;
      end
      8'h08 : begin
        readRsp_data[3 : 0] = bdma_linked_list_write_addr_driver;
      end
      8'h0c : begin
        readRsp_data[31 : 0] = bdma_linked_list_write_data_desc_start_addr_driver;
      end
      8'h10 : begin
        readRsp_data[29 : 0] = bdma_linked_list_write_data_desc_total_bytes_driver;
      end
      8'h14 : begin
        readRsp_data[3 : 0] = bdma_linked_list_write_data_desc_id_driver;
      end
      8'h18 : begin
        readRsp_data[1 : 0] = bdma_linked_list_write_data_desc_burst_driver;
      end
      8'h1c : begin
        readRsp_data[0 : 0] = bdma_linked_list_write_data_desc_is_s2m_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign bdma_enable = bdma_enable_driver;
  assign bdma_linked_list_write_enable = bdma_linked_list_write_enable_driver;
  assign bdma_cursor_limit = bdma_cursor_limit_driver;
  assign bdma_linked_list_write_addr = bdma_linked_list_write_addr_driver;
  assign bdma_linked_list_write_data_desc_start_addr = bdma_linked_list_write_data_desc_start_addr_driver;
  assign bdma_linked_list_write_data_desc_total_bytes = bdma_linked_list_write_data_desc_total_bytes_driver;
  assign bdma_linked_list_write_data_desc_id = bdma_linked_list_write_data_desc_id_driver;
  assign bdma_linked_list_write_data_desc_burst = bdma_linked_list_write_data_desc_burst_driver;
  assign bdma_linked_list_write_data_desc_is_s2m = bdma_linked_list_write_data_desc_is_s2m_driver;
  assign _zz_sgdma_ctrl_desc_start_addr = _zz_bdma_linked_list_port1;
  assign sgdma_ctrl_desc_start_addr = _zz_sgdma_ctrl_desc_start_addr[31 : 0];
  assign sgdma_ctrl_desc_total_bytes = _zz_sgdma_ctrl_desc_start_addr[61 : 32];
  assign sgdma_ctrl_desc_burst = _zz_sgdma_ctrl_desc_start_addr[63 : 62];
  assign sgdma_ctrl_desc_id = _zz_sgdma_ctrl_desc_start_addr[67 : 64];
  assign sgdma_ctrl_desc_is_s2m = _zz_sgdma_ctrl_desc_start_addr[68];
  assign when_LoopListSGDMA_l98 = (! bdma_enable);
  assign bdma_core_cchS2M_fire = (bdma_core_cchS2M_valid && bdma_core_cchS2M_ready);
  assign bdma_core_cchM2S_fire = (bdma_core_cchM2S_valid && bdma_core_cchM2S_ready);
  assign when_LoopListSGDMA_l100 = (bdma_core_cchS2M_fire || bdma_core_cchM2S_fire);
  assign when_LoopListSGDMA_l103 = (bdma_core_intrM2S || bdma_core_intrS2M);
  assign bdma_core_cchM2S_valid = (bdma_enable && (! sgdma_ctrl_desc_is_s2m));
  assign bdma_core_cchS2M_valid = (bdma_enable && sgdma_ctrl_desc_is_s2m);
  assign axi4S2M_awvalid = bdma_core_axi4S2M_awvalid;
  assign axi4S2M_awaddr = bdma_core_axi4S2M_awaddr;
  assign axi4S2M_awid = bdma_core_axi4S2M_awid;
  assign axi4S2M_awlen = bdma_core_axi4S2M_awlen;
  assign axi4S2M_awsize = bdma_core_axi4S2M_awsize;
  assign axi4S2M_awburst = bdma_core_axi4S2M_awburst;
  assign axi4S2M_arvalid = bdma_core_axi4S2M_arvalid;
  assign axi4S2M_araddr = bdma_core_axi4S2M_araddr;
  assign axi4S2M_arid = bdma_core_axi4S2M_arid;
  assign axi4S2M_arlen = bdma_core_axi4S2M_arlen;
  assign axi4S2M_arsize = bdma_core_axi4S2M_arsize;
  assign axi4S2M_arburst = bdma_core_axi4S2M_arburst;
  assign axi4S2M_rready = bdma_core_axi4S2M_rready;
  assign axi4S2M_wvalid = bdma_core_axi4S2M_wvalid;
  assign axi4S2M_wdata = bdma_core_axi4S2M_wdata;
  assign axi4S2M_wstrb = bdma_core_axi4S2M_wstrb;
  assign axi4S2M_wlast = bdma_core_axi4S2M_wlast;
  assign axi4S2M_bready = bdma_core_axi4S2M_bready;
  assign axi4M2S_awvalid = bdma_core_axi4M2S_awvalid;
  assign axi4M2S_awaddr = bdma_core_axi4M2S_awaddr;
  assign axi4M2S_awid = bdma_core_axi4M2S_awid;
  assign axi4M2S_awlen = bdma_core_axi4M2S_awlen;
  assign axi4M2S_awsize = bdma_core_axi4M2S_awsize;
  assign axi4M2S_awburst = bdma_core_axi4M2S_awburst;
  assign axi4M2S_arvalid = bdma_core_axi4M2S_arvalid;
  assign axi4M2S_araddr = bdma_core_axi4M2S_araddr;
  assign axi4M2S_arid = bdma_core_axi4M2S_arid;
  assign axi4M2S_arlen = bdma_core_axi4M2S_arlen;
  assign axi4M2S_arsize = bdma_core_axi4M2S_arsize;
  assign axi4M2S_arburst = bdma_core_axi4M2S_arburst;
  assign axi4M2S_rready = bdma_core_axi4M2S_rready;
  assign axi4M2S_wvalid = bdma_core_axi4M2S_wvalid;
  assign axi4M2S_wdata = bdma_core_axi4M2S_wdata;
  assign axi4M2S_wstrb = bdma_core_axi4M2S_wstrb;
  assign axi4M2S_wlast = bdma_core_axi4M2S_wlast;
  assign axi4M2S_bready = bdma_core_axi4M2S_bready;
  assign dataS2M_tready = bdma_core_dataS2M_tready;
  assign dataM2S_tvalid = bdma_core_dataM2S_tvalid;
  assign dataM2S_tdata = bdma_core_dataM2S_tdata;
  assign dataM2S_tstrb = bdma_core_dataM2S_tstrb;
  assign dataM2S_tkeep = bdma_core_dataM2S_tkeep;
  assign dataM2S_tlast = bdma_core_dataM2S_tlast;
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      bdma_enable_driver <= 1'b0;
      bdma_linked_list_write_enable_driver <= 1'b0;
      bdma_cursor_limit_driver <= 4'b0000;
      bdma_linked_list_write_addr_driver <= 4'b0000;
      bdma_linked_list_write_data_desc_start_addr_driver <= 32'h0;
      bdma_linked_list_write_data_desc_total_bytes_driver <= 30'h0;
      bdma_linked_list_write_data_desc_id_driver <= 4'b0000;
      bdma_linked_list_write_data_desc_burst_driver <= 2'b00;
      bdma_linked_list_write_data_desc_is_s2m_driver <= 1'b0;
      bdma_cursor <= 4'b0000;
      bdma_reset <= 1'b0;
    end else begin
      if(_zz_writeJoinEvent_translated_ready) begin
        _zz_axil4Ctrl_bvalid_2 <= (writeJoinEvent_translated_valid && _zz_axil4Ctrl_bvalid);
      end
      if(axil4Ctrl_arready) begin
        axil4Ctrl_ar_rValid <= axil4Ctrl_arvalid;
      end
      if(when_LoopListSGDMA_l98) begin
        bdma_cursor <= 4'b0000;
      end else begin
        if(when_LoopListSGDMA_l100) begin
          bdma_cursor <= ((bdma_cursor == bdma_cursor_limit) ? 4'b0000 : _zz_bdma_cursor);
        end
      end
      if(when_LoopListSGDMA_l103) begin
        bdma_reset <= 1'b1;
      end else begin
        bdma_reset <= 1'b0;
      end
      case(axil4Ctrl_awaddr)
        8'h0 : begin
          if(writeOccur) begin
            bdma_enable_driver <= axil4Ctrl_wdata[0];
            bdma_linked_list_write_enable_driver <= axil4Ctrl_wdata[1];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            bdma_cursor_limit_driver <= axil4Ctrl_wdata[3 : 0];
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            bdma_linked_list_write_addr_driver <= axil4Ctrl_wdata[3 : 0];
          end
        end
        8'h0c : begin
          if(writeOccur) begin
            bdma_linked_list_write_data_desc_start_addr_driver <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h10 : begin
          if(writeOccur) begin
            bdma_linked_list_write_data_desc_total_bytes_driver <= axil4Ctrl_wdata[29 : 0];
          end
        end
        8'h14 : begin
          if(writeOccur) begin
            bdma_linked_list_write_data_desc_id_driver <= axil4Ctrl_wdata[3 : 0];
          end
        end
        8'h18 : begin
          if(writeOccur) begin
            bdma_linked_list_write_data_desc_burst_driver <= axil4Ctrl_wdata[1 : 0];
          end
        end
        8'h1c : begin
          if(writeOccur) begin
            bdma_linked_list_write_data_desc_is_s2m_driver <= axil4Ctrl_wdata[0];
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

module BDMACore (
  output              axi4S2M_awvalid,
  input               axi4S2M_awready,
  output     [31:0]   axi4S2M_awaddr,
  output     [3:0]    axi4S2M_awid,
  output     [7:0]    axi4S2M_awlen,
  output     [2:0]    axi4S2M_awsize,
  output     [1:0]    axi4S2M_awburst,
  output              axi4S2M_wvalid,
  input               axi4S2M_wready,
  output     [31:0]   axi4S2M_wdata,
  output     [3:0]    axi4S2M_wstrb,
  output              axi4S2M_wlast,
  input               axi4S2M_bvalid,
  output              axi4S2M_bready,
  input      [3:0]    axi4S2M_bid,
  input      [1:0]    axi4S2M_bresp,
  output              axi4S2M_arvalid,
  input               axi4S2M_arready,
  output     [31:0]   axi4S2M_araddr,
  output     [3:0]    axi4S2M_arid,
  output     [7:0]    axi4S2M_arlen,
  output     [2:0]    axi4S2M_arsize,
  output     [1:0]    axi4S2M_arburst,
  input               axi4S2M_rvalid,
  output              axi4S2M_rready,
  input      [31:0]   axi4S2M_rdata,
  input      [3:0]    axi4S2M_rid,
  input      [1:0]    axi4S2M_rresp,
  input               axi4S2M_rlast,
  output              axi4M2S_awvalid,
  input               axi4M2S_awready,
  output     [31:0]   axi4M2S_awaddr,
  output     [3:0]    axi4M2S_awid,
  output     [7:0]    axi4M2S_awlen,
  output     [2:0]    axi4M2S_awsize,
  output     [1:0]    axi4M2S_awburst,
  output              axi4M2S_wvalid,
  input               axi4M2S_wready,
  output     [31:0]   axi4M2S_wdata,
  output     [3:0]    axi4M2S_wstrb,
  output              axi4M2S_wlast,
  input               axi4M2S_bvalid,
  output              axi4M2S_bready,
  input      [3:0]    axi4M2S_bid,
  input      [1:0]    axi4M2S_bresp,
  output              axi4M2S_arvalid,
  input               axi4M2S_arready,
  output     [31:0]   axi4M2S_araddr,
  output     [3:0]    axi4M2S_arid,
  output     [7:0]    axi4M2S_arlen,
  output     [2:0]    axi4M2S_arsize,
  output     [1:0]    axi4M2S_arburst,
  input               axi4M2S_rvalid,
  output              axi4M2S_rready,
  input      [31:0]   axi4M2S_rdata,
  input      [3:0]    axi4M2S_rid,
  input      [1:0]    axi4M2S_rresp,
  input               axi4M2S_rlast,
  input               dataS2M_tvalid,
  output              dataS2M_tready,
  input      [31:0]   dataS2M_tdata,
  input      [3:0]    dataS2M_tstrb,
  input      [3:0]    dataS2M_tkeep,
  input               dataS2M_tlast,
  output              dataM2S_tvalid,
  input               dataM2S_tready,
  output     [31:0]   dataM2S_tdata,
  output     [3:0]    dataM2S_tstrb,
  output     [3:0]    dataM2S_tkeep,
  output              dataM2S_tlast,
  input               cchS2M_valid,
  output              cchS2M_ready,
  input      [31:0]   cchS2M_payload_desc_start_addr,
  input      [29:0]   cchS2M_payload_desc_total_bytes,
  input      [1:0]    cchS2M_payload_desc_burst,
  input      [3:0]    cchS2M_payload_desc_id,
  input               cchS2M_payload_desc_reset,
  input               cchM2S_valid,
  output              cchM2S_ready,
  input      [31:0]   cchM2S_payload_desc_start_addr,
  input      [29:0]   cchM2S_payload_desc_total_bytes,
  input      [1:0]    cchM2S_payload_desc_burst,
  input      [3:0]    cchM2S_payload_desc_id,
  input               cchM2S_payload_desc_reset,
  output     [1:0]    indicatorS2M,
  output     [1:0]    indicatorM2S,
  output              intrS2M,
  output              intrM2S,
  input               clk,
  input               resetn
);
  localparam BDMAs2mStates_IDLE = 2'd0;
  localparam BDMAs2mStates_REQ = 2'd1;
  localparam BDMAs2mStates_BURST = 2'd2;
  localparam BDMAs2mStates_DROP = 2'd3;
  localparam BDMAm2sStates_IDLE = 2'd0;
  localparam BDMAm2sStates_BURST = 2'd1;
  localparam BDMAm2sStates_FINAL_1 = 2'd2;

  wire                dma_s2m_core_dma_aw_valid;
  wire       [31:0]   dma_s2m_core_dma_aw_payload_addr;
  wire       [3:0]    dma_s2m_core_dma_aw_payload_id;
  wire       [7:0]    dma_s2m_core_dma_aw_payload_len;
  wire       [2:0]    dma_s2m_core_dma_aw_payload_size;
  wire       [1:0]    dma_s2m_core_dma_aw_payload_burst;
  wire                dma_s2m_core_dma_w_valid;
  wire       [31:0]   dma_s2m_core_dma_w_payload_data;
  wire       [3:0]    dma_s2m_core_dma_w_payload_strb;
  wire                dma_s2m_core_dma_w_payload_last;
  wire                dma_s2m_core_dma_b_ready;
  wire                dma_s2m_core_s2m_data_stream_ready;
  wire       [1:0]    dma_s2m_core_s2m_state;
  wire                dma_s2m_core_s2m_cch_ready;
  wire                dma_s2m_core_s2m_intr;
  wire                dma_m2s_core_dma_ar_valid;
  wire       [31:0]   dma_m2s_core_dma_ar_payload_addr;
  wire       [3:0]    dma_m2s_core_dma_ar_payload_id;
  wire       [7:0]    dma_m2s_core_dma_ar_payload_len;
  wire       [2:0]    dma_m2s_core_dma_ar_payload_size;
  wire       [1:0]    dma_m2s_core_dma_ar_payload_burst;
  wire                dma_m2s_core_dma_r_ready;
  wire                dma_m2s_core_m2s_data_stream_valid;
  wire       [31:0]   dma_m2s_core_m2s_data_stream_payload_data;
  wire       [3:0]    dma_m2s_core_m2s_data_stream_payload_strb;
  wire       [3:0]    dma_m2s_core_m2s_data_stream_payload_keep_;
  wire                dma_m2s_core_m2s_data_stream_payload_last;
  wire       [1:0]    dma_m2s_core_m2s_state;
  wire                dma_m2s_core_m2s_cch_ready;
  wire                dma_m2s_core_m2s_intr;
  `ifndef SYNTHESIS
  reg [39:0] indicatorS2M_string;
  reg [55:0] indicatorM2S_string;
  `endif


  BDMAs2m dma_s2m_core (
    .dma_aw_valid                     (dma_s2m_core_dma_aw_valid             ), //o
    .dma_aw_ready                     (axi4S2M_awready                       ), //i
    .dma_aw_payload_addr              (dma_s2m_core_dma_aw_payload_addr[31:0]), //o
    .dma_aw_payload_id                (dma_s2m_core_dma_aw_payload_id[3:0]   ), //o
    .dma_aw_payload_len               (dma_s2m_core_dma_aw_payload_len[7:0]  ), //o
    .dma_aw_payload_size              (dma_s2m_core_dma_aw_payload_size[2:0] ), //o
    .dma_aw_payload_burst             (dma_s2m_core_dma_aw_payload_burst[1:0]), //o
    .dma_w_valid                      (dma_s2m_core_dma_w_valid              ), //o
    .dma_w_ready                      (axi4S2M_wready                        ), //i
    .dma_w_payload_data               (dma_s2m_core_dma_w_payload_data[31:0] ), //o
    .dma_w_payload_strb               (dma_s2m_core_dma_w_payload_strb[3:0]  ), //o
    .dma_w_payload_last               (dma_s2m_core_dma_w_payload_last       ), //o
    .dma_b_valid                      (axi4S2M_bvalid                        ), //i
    .dma_b_ready                      (dma_s2m_core_dma_b_ready              ), //o
    .dma_b_payload_id                 (axi4S2M_bid[3:0]                      ), //i
    .dma_b_payload_resp               (axi4S2M_bresp[1:0]                    ), //i
    .s2m_data_stream_valid            (dataS2M_tvalid                        ), //i
    .s2m_data_stream_ready            (dma_s2m_core_s2m_data_stream_ready    ), //o
    .s2m_data_stream_payload_data     (dataS2M_tdata[31:0]                   ), //i
    .s2m_data_stream_payload_strb     (dataS2M_tstrb[3:0]                    ), //i
    .s2m_data_stream_payload_keep_    (dataS2M_tkeep[3:0]                    ), //i
    .s2m_data_stream_payload_last     (dataS2M_tlast                         ), //i
    .s2m_state                        (dma_s2m_core_s2m_state[1:0]           ), //o
    .s2m_cch_valid                    (cchS2M_valid                          ), //i
    .s2m_cch_ready                    (dma_s2m_core_s2m_cch_ready            ), //o
    .s2m_cch_payload_desc_start_addr  (cchS2M_payload_desc_start_addr[31:0]  ), //i
    .s2m_cch_payload_desc_total_bytes (cchS2M_payload_desc_total_bytes[29:0] ), //i
    .s2m_cch_payload_desc_burst       (cchS2M_payload_desc_burst[1:0]        ), //i
    .s2m_cch_payload_desc_id          (cchS2M_payload_desc_id[3:0]           ), //i
    .s2m_cch_payload_desc_reset       (cchS2M_payload_desc_reset             ), //i
    .s2m_intr                         (dma_s2m_core_s2m_intr                 ), //o
    .clk                              (clk                                   ), //i
    .resetn                           (resetn                                )  //i
  );
  BDMAm2s dma_m2s_core (
    .dma_ar_valid                     (dma_m2s_core_dma_ar_valid                      ), //o
    .dma_ar_ready                     (axi4M2S_arready                                ), //i
    .dma_ar_payload_addr              (dma_m2s_core_dma_ar_payload_addr[31:0]         ), //o
    .dma_ar_payload_id                (dma_m2s_core_dma_ar_payload_id[3:0]            ), //o
    .dma_ar_payload_len               (dma_m2s_core_dma_ar_payload_len[7:0]           ), //o
    .dma_ar_payload_size              (dma_m2s_core_dma_ar_payload_size[2:0]          ), //o
    .dma_ar_payload_burst             (dma_m2s_core_dma_ar_payload_burst[1:0]         ), //o
    .dma_r_valid                      (axi4M2S_rvalid                                 ), //i
    .dma_r_ready                      (dma_m2s_core_dma_r_ready                       ), //o
    .dma_r_payload_data               (axi4M2S_rdata[31:0]                            ), //i
    .dma_r_payload_id                 (axi4M2S_rid[3:0]                               ), //i
    .dma_r_payload_resp               (axi4M2S_rresp[1:0]                             ), //i
    .dma_r_payload_last               (axi4M2S_rlast                                  ), //i
    .m2s_data_stream_valid            (dma_m2s_core_m2s_data_stream_valid             ), //o
    .m2s_data_stream_ready            (dataM2S_tready                                 ), //i
    .m2s_data_stream_payload_data     (dma_m2s_core_m2s_data_stream_payload_data[31:0]), //o
    .m2s_data_stream_payload_strb     (dma_m2s_core_m2s_data_stream_payload_strb[3:0] ), //o
    .m2s_data_stream_payload_keep_    (dma_m2s_core_m2s_data_stream_payload_keep_[3:0]), //o
    .m2s_data_stream_payload_last     (dma_m2s_core_m2s_data_stream_payload_last      ), //o
    .m2s_state                        (dma_m2s_core_m2s_state[1:0]                    ), //o
    .m2s_cch_valid                    (cchM2S_valid                                   ), //i
    .m2s_cch_ready                    (dma_m2s_core_m2s_cch_ready                     ), //o
    .m2s_cch_payload_desc_start_addr  (cchM2S_payload_desc_start_addr[31:0]           ), //i
    .m2s_cch_payload_desc_total_bytes (cchM2S_payload_desc_total_bytes[29:0]          ), //i
    .m2s_cch_payload_desc_burst       (cchM2S_payload_desc_burst[1:0]                 ), //i
    .m2s_cch_payload_desc_id          (cchM2S_payload_desc_id[3:0]                    ), //i
    .m2s_cch_payload_desc_reset       (cchM2S_payload_desc_reset                      ), //i
    .m2s_intr                         (dma_m2s_core_m2s_intr                          ), //o
    .clk                              (clk                                            ), //i
    .resetn                           (resetn                                         )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(indicatorS2M)
      BDMAs2mStates_IDLE : indicatorS2M_string = "IDLE ";
      BDMAs2mStates_REQ : indicatorS2M_string = "REQ  ";
      BDMAs2mStates_BURST : indicatorS2M_string = "BURST";
      BDMAs2mStates_DROP : indicatorS2M_string = "DROP ";
      default : indicatorS2M_string = "?????";
    endcase
  end
  always @(*) begin
    case(indicatorM2S)
      BDMAm2sStates_IDLE : indicatorM2S_string = "IDLE   ";
      BDMAm2sStates_BURST : indicatorM2S_string = "BURST  ";
      BDMAm2sStates_FINAL_1 : indicatorM2S_string = "FINAL_1";
      default : indicatorM2S_string = "???????";
    endcase
  end
  `endif

  assign axi4S2M_awvalid = dma_s2m_core_dma_aw_valid;
  assign axi4S2M_awaddr = dma_s2m_core_dma_aw_payload_addr;
  assign axi4S2M_awid = dma_s2m_core_dma_aw_payload_id;
  assign axi4S2M_awlen = dma_s2m_core_dma_aw_payload_len;
  assign axi4S2M_awsize = dma_s2m_core_dma_aw_payload_size;
  assign axi4S2M_awburst = dma_s2m_core_dma_aw_payload_burst;
  assign axi4S2M_wvalid = dma_s2m_core_dma_w_valid;
  assign axi4S2M_wdata = dma_s2m_core_dma_w_payload_data;
  assign axi4S2M_wstrb = dma_s2m_core_dma_w_payload_strb;
  assign axi4S2M_wlast = dma_s2m_core_dma_w_payload_last;
  assign axi4S2M_bready = dma_s2m_core_dma_b_ready;
  assign axi4S2M_arvalid = 1'b0;
  assign axi4S2M_araddr = 32'h0;
  assign axi4S2M_rready = 1'b0;
  assign axi4M2S_arvalid = dma_m2s_core_dma_ar_valid;
  assign axi4M2S_araddr = dma_m2s_core_dma_ar_payload_addr;
  assign axi4M2S_arid = dma_m2s_core_dma_ar_payload_id;
  assign axi4M2S_arlen = dma_m2s_core_dma_ar_payload_len;
  assign axi4M2S_arsize = dma_m2s_core_dma_ar_payload_size;
  assign axi4M2S_arburst = dma_m2s_core_dma_ar_payload_burst;
  assign axi4M2S_rready = dma_m2s_core_dma_r_ready;
  assign axi4M2S_awvalid = 1'b0;
  assign axi4M2S_awaddr = 32'h0;
  assign axi4M2S_wvalid = 1'b0;
  assign axi4M2S_wdata = 32'h0;
  assign axi4M2S_bready = 1'b0;
  assign axi4S2M_arid = 4'b0000;
  assign axi4M2S_awid = 4'b0000;
  assign axi4S2M_arlen = 8'h0;
  assign axi4M2S_awlen = 8'h0;
  assign axi4S2M_arsize = 3'b000;
  assign axi4M2S_awsize = 3'b000;
  assign axi4S2M_arburst = 2'b00;
  assign axi4M2S_awburst = 2'b00;
  assign axi4M2S_wstrb = 4'b0000;
  assign axi4M2S_wlast = 1'b0;
  assign dataS2M_tready = dma_s2m_core_s2m_data_stream_ready;
  assign indicatorS2M = dma_s2m_core_s2m_state;
  assign cchS2M_ready = dma_s2m_core_s2m_cch_ready;
  assign intrS2M = dma_s2m_core_s2m_intr;
  assign dataM2S_tvalid = dma_m2s_core_m2s_data_stream_valid;
  assign dataM2S_tdata = dma_m2s_core_m2s_data_stream_payload_data;
  assign dataM2S_tstrb = dma_m2s_core_m2s_data_stream_payload_strb;
  assign dataM2S_tkeep = dma_m2s_core_m2s_data_stream_payload_keep_;
  assign dataM2S_tlast = dma_m2s_core_m2s_data_stream_payload_last;
  assign indicatorM2S = dma_m2s_core_m2s_state;
  assign cchM2S_ready = dma_m2s_core_m2s_cch_ready;
  assign intrM2S = dma_m2s_core_m2s_intr;

endmodule

module BDMAm2s (
  output              dma_ar_valid,
  input               dma_ar_ready,
  output     [31:0]   dma_ar_payload_addr,
  output     [3:0]    dma_ar_payload_id,
  output     [7:0]    dma_ar_payload_len,
  output     [2:0]    dma_ar_payload_size,
  output     [1:0]    dma_ar_payload_burst,
  input               dma_r_valid,
  output              dma_r_ready,
  input      [31:0]   dma_r_payload_data,
  input      [3:0]    dma_r_payload_id,
  input      [1:0]    dma_r_payload_resp,
  input               dma_r_payload_last,
  output              m2s_data_stream_valid,
  input               m2s_data_stream_ready,
  output     [31:0]   m2s_data_stream_payload_data,
  output     [3:0]    m2s_data_stream_payload_strb,
  output     [3:0]    m2s_data_stream_payload_keep_,
  output              m2s_data_stream_payload_last,
  output     [1:0]    m2s_state,
  input               m2s_cch_valid,
  output              m2s_cch_ready,
  input      [31:0]   m2s_cch_payload_desc_start_addr,
  input      [29:0]   m2s_cch_payload_desc_total_bytes,
  input      [1:0]    m2s_cch_payload_desc_burst,
  input      [3:0]    m2s_cch_payload_desc_id,
  input               m2s_cch_payload_desc_reset,
  output              m2s_intr,
  input               clk,
  input               resetn
);
  localparam BDMAm2sStates_IDLE = 2'd0;
  localparam BDMAm2sStates_BURST = 2'd1;
  localparam BDMAm2sStates_FINAL_1 = 2'd2;
  localparam BDMAcchStates_IDLE = 2'd0;
  localparam BDMAcchStates_FIXED_REQ = 2'd1;
  localparam BDMAcchStates_INCR_REQ = 2'd2;
  localparam BDMAcchStates_HALT = 2'd3;

  wire                m2s_ar_fifo_io_pop_ready;
  wire                m2s_ar_fifo_io_push_ready;
  wire                m2s_ar_fifo_io_pop_valid;
  wire       [31:0]   m2s_ar_fifo_io_pop_payload_addr;
  wire       [3:0]    m2s_ar_fifo_io_pop_payload_id;
  wire       [7:0]    m2s_ar_fifo_io_pop_payload_len;
  wire       [2:0]    m2s_ar_fifo_io_pop_payload_size;
  wire       [1:0]    m2s_ar_fifo_io_pop_payload_burst;
  wire       [3:0]    m2s_ar_fifo_io_occupancy;
  wire       [3:0]    m2s_ar_fifo_io_availability;
  wire                m2s_trans_bytes_fifo_io_push_ready;
  wire                m2s_trans_bytes_fifo_io_pop_valid;
  wire       [29:0]   m2s_trans_bytes_fifo_io_pop_payload;
  wire       [3:0]    m2s_trans_bytes_fifo_io_occupancy;
  wire       [3:0]    m2s_trans_bytes_fifo_io_availability;
  wire                m2s_data_fifo_io_push_ready;
  wire                m2s_data_fifo_io_pop_valid;
  wire       [31:0]   m2s_data_fifo_io_pop_payload_data;
  wire       [3:0]    m2s_data_fifo_io_pop_payload_strb;
  wire       [3:0]    m2s_data_fifo_io_pop_payload_keep_;
  wire                m2s_data_fifo_io_pop_payload_last;
  wire       [3:0]    m2s_data_fifo_io_occupancy;
  wire       [3:0]    m2s_data_fifo_io_availability;
  wire                len_pending_fifo_io_push_ready;
  wire                len_pending_fifo_io_pop_valid;
  wire       [7:0]    len_pending_fifo_io_pop_payload;
  wire       [2:0]    len_pending_fifo_io_occupancy;
  wire       [2:0]    len_pending_fifo_io_availability;
  wire                trans_pending_fifo_io_push_ready;
  wire                trans_pending_fifo_io_pop_valid;
  wire       [29:0]   trans_pending_fifo_io_pop_payload;
  wire       [2:0]    trans_pending_fifo_io_occupancy;
  wire       [2:0]    trans_pending_fifo_io_availability;
  wire       [29:0]   _zz_aligned_address;
  wire       [31:0]   _zz_when_BDMAm2s_l97;
  wire       [31:0]   _zz_when_BDMAm2s_l97_1;
  wire       [31:0]   _zz_trans_bytes_cnt;
  wire       [29:0]   _zz_m2s_ar_len;
  wire       [31:0]   _zz_m2s_ar_len_1;
  wire       [31:0]   _zz_m2s_ar_len_2;
  wire       [31:0]   _zz_m2s_ar_len_3;
  wire       [31:0]   _zz_cch_address;
  wire       [31:0]   _zz_when_BDMAm2s_l128;
  wire       [31:0]   _zz_when_BDMAm2s_l128_1;
  wire       [19:0]   _zz_when_BDMAm2s_l132;
  wire       [31:0]   _zz_when_BDMAm2s_l132_1;
  wire       [31:0]   _zz_when_BDMAm2s_l132_2;
  wire       [29:0]   _zz_when_BDMAm2s_l132_3;
  wire       [17:0]   _zz_when_BDMAm2s_l132_4;
  wire       [31:0]   _zz_trans_bytes_cnt_1;
  wire       [19:0]   _zz_when_BDMAm2s_l144;
  wire       [31:0]   _zz_when_BDMAm2s_l144_1;
  wire       [31:0]   _zz_trans_bytes_cnt_2;
  wire       [31:0]   _zz_trans_bytes_cnt_3;
  wire       [31:0]   _zz_trans_bytes_cnt_4;
  wire       [29:0]   _zz_m2s_ar_len_4;
  wire       [31:0]   _zz_m2s_ar_len_5;
  wire       [31:0]   _zz_m2s_ar_len_6;
  wire       [31:0]   _zz_m2s_ar_len_7;
  wire       [2:0]    _zz_m2s_axis_strb_keep;
  wire       [2:0]    _zz_m2s_axis_strb_keep_1;
  wire       [1:0]    _zz_m2s_axis_strb_keep_2;
  wire       [5:0]    _zz_m2s_r_payload;
  wire       [63:0]   _zz_m2s_r_payload_1;
  wire       [5:0]    _zz_m2s_r_payload_2;
  wire       [2:0]    _zz_m2s_axis_strb_keep_3;
  wire       [2:0]    _zz_m2s_axis_strb_keep_4;
  wire       [1:0]    _zz_m2s_axis_strb_keep_5;
  wire       [63:0]   _zz_m2s_axis_payload;
  wire       [5:0]    _zz_m2s_axis_payload_1;
  reg        [1:0]    m2s_cch_state;
  reg        [1:0]    m2s_r_state;
  reg                 cch_ready;
  reg        [29:0]   cch_total_bytes;
  reg        [31:0]   cch_address;
  reg        [1:0]    cch_burst_type;
  reg        [3:0]    cch_id;
  reg        [29:0]   trans_bytes_cnt;
  reg        [7:0]    m2s_ar_len;
  reg                 m2s_ar_valid;
  reg                 m2s_ar_halt_exec;
  wire       [31:0]   aligned_address;
  reg                 cycle_finished;
  reg        [1:0]    m2s_bytes_shift;
  wire                m2s_cch_fire;
  wire                when_BDMAm2s_l81;
  wire                m2s_ar_fifo_io_push_fire;
  wire                m2s_ar_fifo_io_push_fire_1;
  wire                when_BDMAm2s_l97;
  wire                when_BDMAm2s_l111;
  wire                m2s_ar_fifo_io_push_fire_2;
  wire                m2s_ar_fifo_io_push_fire_3;
  wire                when_BDMAm2s_l128;
  wire                when_BDMAm2s_l132;
  wire                when_BDMAm2s_l144;
  wire                when_BDMAm2s_l156;
  wire                dma_ar_fire;
  wire       [3:0]    keep_strb_full;
  reg                 pending_valid;
  reg        [7:0]    len_pending;
  reg        [29:0]   trans_pending;
  wire                dma_ar_fire_1;
  wire                _zz_dma_ar_valid;
  wire                ar_finish;
  reg                 pending_fifo_pop_ready;
  reg                 m2s_r_valve;
  reg        [31:0]   m2s_r_payload;
  reg        [31:0]   m2s_r_residual_payload;
  reg                 m2s_r_req;
  reg                 m2s_r_first;
  reg        [7:0]    m2s_r_len;
  reg                 m2s_r_last_cycle;
  reg        [31:0]   m2s_axis_payload;
  reg        [3:0]    m2s_axis_strb_keep;
  reg                 m2s_axis_valid;
  reg                 m2s_axis_last;
  reg        [1:0]    m2s_axis_low_bytes;
  reg        [29:0]   m2s_axis_trans_bytes;
  wire                len_pending_fifo_io_pop_fire;
  wire                when_BDMAm2s_l264;
  wire                dma_r_fire;
  wire                when_BDMAm2s_l287;
  wire                when_BDMAm2s_l293;
  wire                when_BDMAm2s_l307;
  wire                when_BDMAm2s_l342;
  wire                m2s_data_fifo_io_pop_fire;
  wire                when_BDMAm2s_l344;
  `ifndef SYNTHESIS
  reg [55:0] m2s_state_string;
  reg [71:0] m2s_cch_state_string;
  reg [55:0] m2s_r_state_string;
  `endif


  assign _zz_aligned_address = (cch_address >>> 2);
  assign _zz_when_BDMAm2s_l97 = (_zz_when_BDMAm2s_l97_1 + (cch_address & 32'h00000003));
  assign _zz_when_BDMAm2s_l97_1 = {2'd0, cch_total_bytes};
  assign _zz_trans_bytes_cnt = (32'h00000040 - (cch_address & 32'h00000003));
  assign _zz_m2s_ar_len = (_zz_m2s_ar_len_1 >>> 2);
  assign _zz_m2s_ar_len_1 = (_zz_m2s_ar_len_2 - 32'h00000001);
  assign _zz_m2s_ar_len_2 = (_zz_m2s_ar_len_3 + (cch_address & 32'h00000003));
  assign _zz_m2s_ar_len_3 = {2'd0, trans_bytes_cnt};
  assign _zz_cch_address = {2'd0, trans_bytes_cnt};
  assign _zz_when_BDMAm2s_l128 = (_zz_when_BDMAm2s_l128_1 + (cch_address & 32'h00000003));
  assign _zz_when_BDMAm2s_l128_1 = {2'd0, cch_total_bytes};
  assign _zz_when_BDMAm2s_l132 = (_zz_when_BDMAm2s_l132_1 >>> 12);
  assign _zz_when_BDMAm2s_l132_1 = ((cch_address & 32'h00000fff) + _zz_when_BDMAm2s_l132_2);
  assign _zz_when_BDMAm2s_l132_3 = (cch_total_bytes & 30'h00000fff);
  assign _zz_when_BDMAm2s_l132_2 = {2'd0, _zz_when_BDMAm2s_l132_3};
  assign _zz_when_BDMAm2s_l132_4 = ((cch_total_bytes & 30'h00000fff) >>> 12);
  assign _zz_trans_bytes_cnt_1 = (32'h00001000 - (cch_address & 32'h00000fff));
  assign _zz_when_BDMAm2s_l144 = (_zz_when_BDMAm2s_l144_1 >>> 12);
  assign _zz_when_BDMAm2s_l144_1 = ((cch_address & 32'h00000fff) + 32'h00000040);
  assign _zz_trans_bytes_cnt_2 = (_zz_trans_bytes_cnt_3 & 32'h00000fff);
  assign _zz_trans_bytes_cnt_3 = (32'h00001000 - cch_address);
  assign _zz_trans_bytes_cnt_4 = (32'h00000040 - (cch_address & 32'h00000003));
  assign _zz_m2s_ar_len_4 = (_zz_m2s_ar_len_5 >>> 2);
  assign _zz_m2s_ar_len_5 = (_zz_m2s_ar_len_6 - 32'h00000001);
  assign _zz_m2s_ar_len_6 = (_zz_m2s_ar_len_7 + (cch_address & 32'h00000003));
  assign _zz_m2s_ar_len_7 = {2'd0, trans_bytes_cnt};
  assign _zz_m2s_axis_strb_keep = (3'b100 - _zz_m2s_axis_strb_keep_1);
  assign _zz_m2s_axis_strb_keep_2 = m2s_axis_trans_bytes[1 : 0];
  assign _zz_m2s_axis_strb_keep_1 = {1'd0, _zz_m2s_axis_strb_keep_2};
  assign _zz_m2s_r_payload = (4'b1000 * m2s_bytes_shift);
  assign _zz_m2s_r_payload_1 = ({dma_r_payload_data,m2s_r_residual_payload} >>> _zz_m2s_r_payload_2);
  assign _zz_m2s_r_payload_2 = (4'b1000 * m2s_bytes_shift);
  assign _zz_m2s_axis_strb_keep_3 = (3'b100 - _zz_m2s_axis_strb_keep_4);
  assign _zz_m2s_axis_strb_keep_5 = m2s_axis_trans_bytes[1 : 0];
  assign _zz_m2s_axis_strb_keep_4 = {1'd0, _zz_m2s_axis_strb_keep_5};
  assign _zz_m2s_axis_payload = ({32'h0,m2s_r_residual_payload} >>> _zz_m2s_axis_payload_1);
  assign _zz_m2s_axis_payload_1 = (4'b1000 * m2s_bytes_shift);
  StreamFifo m2s_ar_fifo (
    .io_push_valid         (m2s_ar_valid                         ), //i
    .io_push_ready         (m2s_ar_fifo_io_push_ready            ), //o
    .io_push_payload_addr  (aligned_address[31:0]                ), //i
    .io_push_payload_id    (cch_id[3:0]                          ), //i
    .io_push_payload_len   (m2s_ar_len[7:0]                      ), //i
    .io_push_payload_size  (3'b010                               ), //i
    .io_push_payload_burst (cch_burst_type[1:0]                  ), //i
    .io_pop_valid          (m2s_ar_fifo_io_pop_valid             ), //o
    .io_pop_ready          (m2s_ar_fifo_io_pop_ready             ), //i
    .io_pop_payload_addr   (m2s_ar_fifo_io_pop_payload_addr[31:0]), //o
    .io_pop_payload_id     (m2s_ar_fifo_io_pop_payload_id[3:0]   ), //o
    .io_pop_payload_len    (m2s_ar_fifo_io_pop_payload_len[7:0]  ), //o
    .io_pop_payload_size   (m2s_ar_fifo_io_pop_payload_size[2:0] ), //o
    .io_pop_payload_burst  (m2s_ar_fifo_io_pop_payload_burst[1:0]), //o
    .io_flush              (1'b0                                 ), //i
    .io_occupancy          (m2s_ar_fifo_io_occupancy[3:0]        ), //o
    .io_availability       (m2s_ar_fifo_io_availability[3:0]     ), //o
    .clk                   (clk                                  ), //i
    .resetn                (resetn                               )  //i
  );
  StreamFifo_1 m2s_trans_bytes_fifo (
    .io_push_valid   (m2s_ar_valid                             ), //i
    .io_push_ready   (m2s_trans_bytes_fifo_io_push_ready       ), //o
    .io_push_payload (trans_bytes_cnt[29:0]                    ), //i
    .io_pop_valid    (m2s_trans_bytes_fifo_io_pop_valid        ), //o
    .io_pop_ready    (dma_ar_fire                              ), //i
    .io_pop_payload  (m2s_trans_bytes_fifo_io_pop_payload[29:0]), //o
    .io_flush        (1'b0                                     ), //i
    .io_occupancy    (m2s_trans_bytes_fifo_io_occupancy[3:0]   ), //o
    .io_availability (m2s_trans_bytes_fifo_io_availability[3:0]), //o
    .clk             (clk                                      ), //i
    .resetn          (resetn                                   )  //i
  );
  StreamFifo_7 m2s_data_fifo (
    .io_push_valid         (m2s_axis_valid                         ), //i
    .io_push_ready         (m2s_data_fifo_io_push_ready            ), //o
    .io_push_payload_data  (m2s_axis_payload[31:0]                 ), //i
    .io_push_payload_strb  (m2s_axis_strb_keep[3:0]                ), //i
    .io_push_payload_keep_ (m2s_axis_strb_keep[3:0]                ), //i
    .io_push_payload_last  (m2s_axis_last                          ), //i
    .io_pop_valid          (m2s_data_fifo_io_pop_valid             ), //o
    .io_pop_ready          (m2s_data_stream_ready                  ), //i
    .io_pop_payload_data   (m2s_data_fifo_io_pop_payload_data[31:0]), //o
    .io_pop_payload_strb   (m2s_data_fifo_io_pop_payload_strb[3:0] ), //o
    .io_pop_payload_keep_  (m2s_data_fifo_io_pop_payload_keep_[3:0]), //o
    .io_pop_payload_last   (m2s_data_fifo_io_pop_payload_last      ), //o
    .io_flush              (1'b0                                   ), //i
    .io_occupancy          (m2s_data_fifo_io_occupancy[3:0]        ), //o
    .io_availability       (m2s_data_fifo_io_availability[3:0]     ), //o
    .clk                   (clk                                    ), //i
    .resetn                (resetn                                 )  //i
  );
  StreamFifo_3 len_pending_fifo (
    .io_push_valid   (pending_valid                        ), //i
    .io_push_ready   (len_pending_fifo_io_push_ready       ), //o
    .io_push_payload (len_pending[7:0]                     ), //i
    .io_pop_valid    (len_pending_fifo_io_pop_valid        ), //o
    .io_pop_ready    (pending_fifo_pop_ready               ), //i
    .io_pop_payload  (len_pending_fifo_io_pop_payload[7:0] ), //o
    .io_flush        (1'b0                                 ), //i
    .io_occupancy    (len_pending_fifo_io_occupancy[2:0]   ), //o
    .io_availability (len_pending_fifo_io_availability[2:0]), //o
    .clk             (clk                                  ), //i
    .resetn          (resetn                               )  //i
  );
  StreamFifo_4 trans_pending_fifo (
    .io_push_valid   (pending_valid                          ), //i
    .io_push_ready   (trans_pending_fifo_io_push_ready       ), //o
    .io_push_payload (trans_pending[29:0]                    ), //i
    .io_pop_valid    (trans_pending_fifo_io_pop_valid        ), //o
    .io_pop_ready    (pending_fifo_pop_ready                 ), //i
    .io_pop_payload  (trans_pending_fifo_io_pop_payload[29:0]), //o
    .io_flush        (1'b0                                   ), //i
    .io_occupancy    (trans_pending_fifo_io_occupancy[2:0]   ), //o
    .io_availability (trans_pending_fifo_io_availability[2:0]), //o
    .clk             (clk                                    ), //i
    .resetn          (resetn                                 )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(m2s_state)
      BDMAm2sStates_IDLE : m2s_state_string = "IDLE   ";
      BDMAm2sStates_BURST : m2s_state_string = "BURST  ";
      BDMAm2sStates_FINAL_1 : m2s_state_string = "FINAL_1";
      default : m2s_state_string = "???????";
    endcase
  end
  always @(*) begin
    case(m2s_cch_state)
      BDMAcchStates_IDLE : m2s_cch_state_string = "IDLE     ";
      BDMAcchStates_FIXED_REQ : m2s_cch_state_string = "FIXED_REQ";
      BDMAcchStates_INCR_REQ : m2s_cch_state_string = "INCR_REQ ";
      BDMAcchStates_HALT : m2s_cch_state_string = "HALT     ";
      default : m2s_cch_state_string = "?????????";
    endcase
  end
  always @(*) begin
    case(m2s_r_state)
      BDMAm2sStates_IDLE : m2s_r_state_string = "IDLE   ";
      BDMAm2sStates_BURST : m2s_r_state_string = "BURST  ";
      BDMAm2sStates_FINAL_1 : m2s_r_state_string = "FINAL_1";
      default : m2s_r_state_string = "???????";
    endcase
  end
  `endif

  assign aligned_address = {_zz_aligned_address,2'b00};
  assign m2s_cch_fire = (m2s_cch_valid && m2s_cch_ready);
  assign when_BDMAm2s_l81 = (cch_total_bytes == 30'h0);
  assign m2s_ar_fifo_io_push_fire = (m2s_ar_valid && m2s_ar_fifo_io_push_ready);
  assign m2s_ar_fifo_io_push_fire_1 = (m2s_ar_valid && m2s_ar_fifo_io_push_ready);
  assign when_BDMAm2s_l97 = ((_zz_when_BDMAm2s_l97 <= 32'h00000040) || 1'b0);
  assign when_BDMAm2s_l111 = (cch_total_bytes == 30'h0);
  assign m2s_ar_fifo_io_push_fire_2 = (m2s_ar_valid && m2s_ar_fifo_io_push_ready);
  assign m2s_ar_fifo_io_push_fire_3 = (m2s_ar_valid && m2s_ar_fifo_io_push_ready);
  assign when_BDMAm2s_l128 = ((_zz_when_BDMAm2s_l128 <= 32'h00000040) || 1'b0);
  assign when_BDMAm2s_l132 = ((_zz_when_BDMAm2s_l132 != 20'h0) || (_zz_when_BDMAm2s_l132_4 != 18'h0));
  assign when_BDMAm2s_l144 = (_zz_when_BDMAm2s_l144 != 20'h0);
  assign when_BDMAm2s_l156 = (m2s_cch_payload_desc_reset && cycle_finished);
  assign m2s_cch_ready = cch_ready;
  assign dma_ar_fire = (dma_ar_valid && dma_ar_ready);
  assign keep_strb_full = 4'b1111;
  assign dma_ar_fire_1 = (dma_ar_valid && dma_ar_ready);
  assign _zz_dma_ar_valid = (! (3'b010 <= len_pending_fifo_io_occupancy));
  assign m2s_ar_fifo_io_pop_ready = (dma_ar_ready && _zz_dma_ar_valid);
  assign dma_ar_valid = (m2s_ar_fifo_io_pop_valid && _zz_dma_ar_valid);
  assign dma_ar_payload_addr = m2s_ar_fifo_io_pop_payload_addr;
  assign dma_ar_payload_id = m2s_ar_fifo_io_pop_payload_id;
  assign dma_ar_payload_len = m2s_ar_fifo_io_pop_payload_len;
  assign dma_ar_payload_size = m2s_ar_fifo_io_pop_payload_size;
  assign dma_ar_payload_burst = m2s_ar_fifo_io_pop_payload_burst;
  assign ar_finish = (((! len_pending_fifo_io_pop_valid) && (m2s_cch_state == BDMAcchStates_HALT)) && (! m2s_ar_fifo_io_pop_valid));
  assign len_pending_fifo_io_pop_fire = (len_pending_fifo_io_pop_valid && pending_fifo_pop_ready);
  assign when_BDMAm2s_l264 = (m2s_axis_trans_bytes < 30'h00000004);
  assign dma_r_fire = (dma_r_valid && dma_r_ready);
  assign when_BDMAm2s_l287 = ((! m2s_r_first) && (m2s_r_len == 8'h0));
  assign when_BDMAm2s_l293 = (m2s_r_len == 8'h0);
  assign when_BDMAm2s_l307 = (m2s_axis_trans_bytes != 30'h0);
  assign dma_r_ready = ((4'b0010 < m2s_data_fifo_io_availability) && m2s_r_valve);
  assign m2s_data_stream_valid = m2s_data_fifo_io_pop_valid;
  assign m2s_data_stream_payload_data = m2s_data_fifo_io_pop_payload_data;
  assign m2s_data_stream_payload_strb = m2s_data_fifo_io_pop_payload_strb;
  assign m2s_data_stream_payload_keep_ = m2s_data_fifo_io_pop_payload_keep_;
  assign m2s_data_stream_payload_last = m2s_data_fifo_io_pop_payload_last;
  assign when_BDMAm2s_l342 = (m2s_cch_state == BDMAcchStates_IDLE);
  assign m2s_data_fifo_io_pop_fire = (m2s_data_fifo_io_pop_valid && m2s_data_stream_ready);
  assign when_BDMAm2s_l344 = (m2s_data_fifo_io_pop_payload_last && m2s_data_fifo_io_pop_fire);
  assign m2s_intr = cycle_finished;
  assign m2s_state = m2s_r_state;
  always @(posedge clk) begin
    if(!resetn) begin
      m2s_cch_state <= BDMAcchStates_IDLE;
      m2s_r_state <= BDMAm2sStates_IDLE;
      cch_ready <= 1'b0;
      m2s_ar_valid <= 1'b0;
      m2s_ar_halt_exec <= 1'b0;
      cycle_finished <= 1'b0;
      m2s_bytes_shift <= 2'b00;
      pending_valid <= 1'b0;
      pending_fifo_pop_ready <= 1'b0;
      m2s_r_valve <= 1'b0;
      m2s_r_req <= 1'b0;
      m2s_r_first <= 1'b0;
      m2s_r_last_cycle <= 1'b0;
      m2s_axis_valid <= 1'b0;
      m2s_axis_last <= 1'b0;
      m2s_axis_trans_bytes <= 30'h0;
    end else begin
      case(m2s_cch_state)
        BDMAcchStates_IDLE : begin
          if(m2s_cch_fire) begin
            cch_ready <= 1'b0;
            m2s_bytes_shift <= m2s_cch_payload_desc_start_addr[1 : 0];
            case(m2s_cch_payload_desc_burst)
              2'b00 : begin
                m2s_cch_state <= BDMAcchStates_FIXED_REQ;
              end
              default : begin
                m2s_cch_state <= BDMAcchStates_INCR_REQ;
              end
            endcase
          end else begin
            cch_ready <= 1'b1;
          end
        end
        BDMAcchStates_FIXED_REQ : begin
          if(when_BDMAm2s_l81) begin
            m2s_cch_state <= BDMAcchStates_HALT;
          end else begin
            if(m2s_ar_fifo_io_push_fire) begin
              m2s_ar_halt_exec <= 1'b0;
            end else begin
              m2s_ar_halt_exec <= 1'b1;
            end
          end
          if(m2s_ar_fifo_io_push_fire_1) begin
            m2s_ar_valid <= 1'b0;
          end else begin
            if(m2s_ar_halt_exec) begin
              m2s_ar_valid <= 1'b1;
            end
          end
        end
        BDMAcchStates_INCR_REQ : begin
          if(when_BDMAm2s_l111) begin
            m2s_cch_state <= BDMAcchStates_HALT;
          end else begin
            if(m2s_ar_fifo_io_push_fire_2) begin
              m2s_ar_halt_exec <= 1'b0;
            end else begin
              m2s_ar_halt_exec <= 1'b1;
            end
          end
          if(m2s_ar_fifo_io_push_fire_3) begin
            m2s_ar_valid <= 1'b0;
          end else begin
            if(m2s_ar_halt_exec) begin
              m2s_ar_valid <= 1'b1;
            end
          end
        end
        default : begin
          if(when_BDMAm2s_l156) begin
            m2s_cch_state <= BDMAcchStates_IDLE;
            m2s_bytes_shift <= 2'b00;
          end
        end
      endcase
      if(dma_ar_fire_1) begin
        pending_valid <= 1'b1;
      end else begin
        pending_valid <= 1'b0;
      end
      case(m2s_r_state)
        BDMAm2sStates_IDLE : begin
          if(len_pending_fifo_io_pop_fire) begin
            m2s_r_valve <= 1'b1;
            pending_fifo_pop_ready <= 1'b0;
            m2s_axis_trans_bytes <= (m2s_axis_trans_bytes + trans_pending_fifo_io_pop_payload);
            m2s_r_state <= BDMAm2sStates_BURST;
          end else begin
            m2s_r_valve <= 1'b0;
            pending_fifo_pop_ready <= 1'b1;
          end
          m2s_axis_valid <= 1'b0;
          m2s_axis_last <= 1'b0;
          m2s_r_req <= 1'b0;
          m2s_r_last_cycle <= 1'b0;
        end
        BDMAm2sStates_BURST : begin
          if(m2s_r_req) begin
            if(when_BDMAm2s_l264) begin
              m2s_axis_trans_bytes <= 30'h0;
            end else begin
              m2s_axis_trans_bytes <= (m2s_axis_trans_bytes - 30'h00000004);
            end
            m2s_axis_valid <= 1'b1;
            if(m2s_r_last_cycle) begin
              pending_fifo_pop_ready <= (! ar_finish);
              m2s_r_state <= (ar_finish ? BDMAm2sStates_FINAL_1 : BDMAm2sStates_IDLE);
              m2s_axis_last <= (ar_finish && (m2s_axis_trans_bytes <= 30'h00000004));
            end
          end else begin
            m2s_axis_valid <= 1'b0;
          end
          if(dma_r_fire) begin
            m2s_r_first <= 1'b1;
            if(when_BDMAm2s_l293) begin
              m2s_r_last_cycle <= 1'b1;
              m2s_r_valve <= 1'b0;
              m2s_r_req <= 1'b1;
            end else begin
              m2s_r_req <= m2s_r_first;
            end
          end else begin
            m2s_r_req <= 1'b0;
          end
        end
        default : begin
          m2s_r_first <= 1'b0;
          if(when_BDMAm2s_l307) begin
            m2s_axis_trans_bytes <= 30'h0;
            m2s_axis_last <= 1'b1;
            m2s_axis_valid <= 1'b1;
          end else begin
            m2s_axis_valid <= 1'b0;
            m2s_axis_last <= 1'b0;
          end
          pending_fifo_pop_ready <= 1'b1;
          m2s_r_state <= BDMAm2sStates_IDLE;
        end
      endcase
      if(when_BDMAm2s_l342) begin
        cycle_finished <= 1'b0;
      end else begin
        if(when_BDMAm2s_l344) begin
          cycle_finished <= 1'b1;
        end
      end
    end
  end

  always @(posedge clk) begin
    case(m2s_cch_state)
      BDMAcchStates_IDLE : begin
        if(m2s_cch_fire) begin
          cch_address <= m2s_cch_payload_desc_start_addr;
          cch_total_bytes <= m2s_cch_payload_desc_total_bytes;
          cch_burst_type <= m2s_cch_payload_desc_burst;
          cch_id <= m2s_cch_payload_desc_id;
        end
      end
      BDMAcchStates_FIXED_REQ : begin
        if(!when_BDMAm2s_l81) begin
          if(m2s_ar_fifo_io_push_fire) begin
            cch_total_bytes <= (cch_total_bytes - trans_bytes_cnt);
          end
        end
        if(when_BDMAm2s_l97) begin
          trans_bytes_cnt <= cch_total_bytes;
        end else begin
          trans_bytes_cnt <= _zz_trans_bytes_cnt[29:0];
        end
        m2s_ar_len <= _zz_m2s_ar_len[7:0];
      end
      BDMAcchStates_INCR_REQ : begin
        if(!when_BDMAm2s_l111) begin
          if(m2s_ar_fifo_io_push_fire_2) begin
            cch_address <= (cch_address + _zz_cch_address);
            cch_total_bytes <= (cch_total_bytes - trans_bytes_cnt);
          end
        end
        if(when_BDMAm2s_l128) begin
          if(when_BDMAm2s_l132) begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_1[29:0];
          end else begin
            trans_bytes_cnt <= cch_total_bytes;
          end
        end else begin
          if(when_BDMAm2s_l144) begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_2[29:0];
          end else begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_4[29:0];
          end
        end
        m2s_ar_len <= _zz_m2s_ar_len_4[7:0];
      end
      default : begin
      end
    endcase
    if(dma_ar_fire_1) begin
      len_pending <= dma_ar_payload_len;
      trans_pending <= m2s_trans_bytes_fifo_io_pop_payload;
    end
    case(m2s_r_state)
      BDMAm2sStates_IDLE : begin
        if(len_pending_fifo_io_pop_fire) begin
          m2s_r_len <= len_pending_fifo_io_pop_payload;
        end
      end
      BDMAm2sStates_BURST : begin
        if(m2s_r_req) begin
          if(when_BDMAm2s_l264) begin
            m2s_axis_strb_keep <= (keep_strb_full >>> _zz_m2s_axis_strb_keep);
          end else begin
            m2s_axis_strb_keep <= keep_strb_full;
          end
          m2s_axis_payload <= m2s_r_payload;
        end
        if(dma_r_fire) begin
          m2s_r_len <= (m2s_r_len - 8'h01);
          m2s_r_residual_payload <= dma_r_payload_data;
          if(when_BDMAm2s_l287) begin
            m2s_r_payload <= (dma_r_payload_data >>> _zz_m2s_r_payload);
          end else begin
            m2s_r_payload <= _zz_m2s_r_payload_1[31:0];
          end
        end
      end
      default : begin
        if(when_BDMAm2s_l307) begin
          m2s_axis_strb_keep <= (keep_strb_full >>> _zz_m2s_axis_strb_keep_3[1 : 0]);
          m2s_axis_payload <= _zz_m2s_axis_payload[31:0];
        end
      end
    endcase
  end


endmodule

module BDMAs2m (
  output              dma_aw_valid,
  input               dma_aw_ready,
  output     [31:0]   dma_aw_payload_addr,
  output     [3:0]    dma_aw_payload_id,
  output     [7:0]    dma_aw_payload_len,
  output     [2:0]    dma_aw_payload_size,
  output     [1:0]    dma_aw_payload_burst,
  output              dma_w_valid,
  input               dma_w_ready,
  output     [31:0]   dma_w_payload_data,
  output     [3:0]    dma_w_payload_strb,
  output              dma_w_payload_last,
  input               dma_b_valid,
  output              dma_b_ready,
  input      [3:0]    dma_b_payload_id,
  input      [1:0]    dma_b_payload_resp,
  input               s2m_data_stream_valid,
  output              s2m_data_stream_ready,
  input      [31:0]   s2m_data_stream_payload_data,
  input      [3:0]    s2m_data_stream_payload_strb,
  input      [3:0]    s2m_data_stream_payload_keep_,
  input               s2m_data_stream_payload_last,
  output     [1:0]    s2m_state,
  input               s2m_cch_valid,
  output              s2m_cch_ready,
  input      [31:0]   s2m_cch_payload_desc_start_addr,
  input      [29:0]   s2m_cch_payload_desc_total_bytes,
  input      [1:0]    s2m_cch_payload_desc_burst,
  input      [3:0]    s2m_cch_payload_desc_id,
  input               s2m_cch_payload_desc_reset,
  output              s2m_intr,
  input               clk,
  input               resetn
);
  localparam BDMAs2mStates_IDLE = 2'd0;
  localparam BDMAs2mStates_REQ = 2'd1;
  localparam BDMAs2mStates_BURST = 2'd2;
  localparam BDMAs2mStates_DROP = 2'd3;
  localparam BDMAcchStates_IDLE = 2'd0;
  localparam BDMAcchStates_FIXED_REQ = 2'd1;
  localparam BDMAcchStates_INCR_REQ = 2'd2;
  localparam BDMAcchStates_HALT = 2'd3;

  wire                s2m_aw_fifo_io_pop_ready;
  wire                s2m_aw_fifo_io_push_ready;
  wire                s2m_aw_fifo_io_pop_valid;
  wire       [31:0]   s2m_aw_fifo_io_pop_payload_addr;
  wire       [3:0]    s2m_aw_fifo_io_pop_payload_id;
  wire       [7:0]    s2m_aw_fifo_io_pop_payload_len;
  wire       [2:0]    s2m_aw_fifo_io_pop_payload_size;
  wire       [1:0]    s2m_aw_fifo_io_pop_payload_burst;
  wire       [3:0]    s2m_aw_fifo_io_occupancy;
  wire       [3:0]    s2m_aw_fifo_io_availability;
  wire                s2m_trans_bytes_fifo_io_push_ready;
  wire                s2m_trans_bytes_fifo_io_pop_valid;
  wire       [29:0]   s2m_trans_bytes_fifo_io_pop_payload;
  wire       [3:0]    s2m_trans_bytes_fifo_io_occupancy;
  wire       [3:0]    s2m_trans_bytes_fifo_io_availability;
  wire                s2m_w_fifo_io_push_ready;
  wire                s2m_w_fifo_io_pop_valid;
  wire       [31:0]   s2m_w_fifo_io_pop_payload_data;
  wire       [3:0]    s2m_w_fifo_io_pop_payload_strb;
  wire                s2m_w_fifo_io_pop_payload_last;
  wire       [4:0]    s2m_w_fifo_io_occupancy;
  wire       [4:0]    s2m_w_fifo_io_availability;
  wire                len_pending_fifo_io_push_ready;
  wire                len_pending_fifo_io_pop_valid;
  wire       [7:0]    len_pending_fifo_io_pop_payload;
  wire       [2:0]    len_pending_fifo_io_occupancy;
  wire       [2:0]    len_pending_fifo_io_availability;
  wire                trans_pending_fifo_io_push_ready;
  wire                trans_pending_fifo_io_pop_valid;
  wire       [29:0]   trans_pending_fifo_io_pop_payload;
  wire       [2:0]    trans_pending_fifo_io_occupancy;
  wire       [2:0]    trans_pending_fifo_io_availability;
  wire       [29:0]   _zz_aligned_address;
  wire       [31:0]   _zz_when_BDMAs2m_l102;
  wire       [31:0]   _zz_when_BDMAs2m_l102_1;
  wire       [31:0]   _zz_trans_bytes_cnt;
  wire       [29:0]   _zz_s2m_aw_len;
  wire       [31:0]   _zz_s2m_aw_len_1;
  wire       [31:0]   _zz_s2m_aw_len_2;
  wire       [31:0]   _zz_s2m_aw_len_3;
  wire       [31:0]   _zz_cch_address;
  wire       [31:0]   _zz_when_BDMAs2m_l133;
  wire       [31:0]   _zz_when_BDMAs2m_l133_1;
  wire       [19:0]   _zz_when_BDMAs2m_l137;
  wire       [31:0]   _zz_when_BDMAs2m_l137_1;
  wire       [31:0]   _zz_when_BDMAs2m_l137_2;
  wire       [29:0]   _zz_when_BDMAs2m_l137_3;
  wire       [17:0]   _zz_when_BDMAs2m_l137_4;
  wire       [31:0]   _zz_trans_bytes_cnt_1;
  wire       [19:0]   _zz_when_BDMAs2m_l149;
  wire       [31:0]   _zz_when_BDMAs2m_l149_1;
  wire       [31:0]   _zz_trans_bytes_cnt_2;
  wire       [31:0]   _zz_trans_bytes_cnt_3;
  wire       [31:0]   _zz_trans_bytes_cnt_4;
  wire       [29:0]   _zz_s2m_aw_len_4;
  wire       [31:0]   _zz_s2m_aw_len_5;
  wire       [31:0]   _zz_s2m_aw_len_6;
  wire       [31:0]   _zz_s2m_aw_len_7;
  wire       [1:0]    _zz_s2m_w_final_mask;
  wire       [2:0]    _zz_s2m_w_final_mask_1;
  wire       [2:0]    _zz_s2m_w_final_mask_2;
  wire       [94:0]   _zz_s2m_axis_data;
  wire       [5:0]    _zz_s2m_axis_data_1;
  wire       [6:0]    _zz_s2m_axis_strb_keep;
  wire       [126:0]  _zz_s2m_axis_data_2;
  wire       [5:0]    _zz_s2m_axis_data_3;
  wire       [10:0]   _zz_s2m_axis_strb_keep_1;
  wire       [126:0]  _zz_s2m_axis_data_4;
  wire       [5:0]    _zz_s2m_axis_data_5;
  wire       [10:0]   _zz_s2m_axis_strb_keep_2;
  reg        [1:0]    s2m_cch_state;
  reg        [1:0]    s2m_w_state;
  reg                 cch_ready;
  reg        [29:0]   cch_total_bytes;
  reg        [31:0]   cch_address;
  reg        [1:0]    cch_burst_type;
  reg        [3:0]    cch_id;
  reg        [29:0]   trans_bytes_cnt;
  reg        [7:0]    s2m_aw_len;
  reg                 s2m_aw_valid;
  reg                 s2m_aw_halt_exec;
  wire       [31:0]   aligned_address;
  reg                 cycle_finished;
  reg        [1:0]    s2m_bytes_shift;
  reg        [1:0]    s2m_mask_shift;
  wire                s2m_cch_fire;
  wire                when_BDMAs2m_l86;
  wire                s2m_aw_fifo_io_push_fire;
  wire                s2m_aw_fifo_io_push_fire_1;
  wire                when_BDMAs2m_l102;
  wire                when_BDMAs2m_l116;
  wire                s2m_aw_fifo_io_push_fire_2;
  wire                s2m_aw_fifo_io_push_fire_3;
  wire                when_BDMAs2m_l133;
  wire                when_BDMAs2m_l137;
  wire                when_BDMAs2m_l149;
  wire                when_BDMAs2m_l161;
  wire                dma_aw_fire;
  wire       [3:0]    strb_full;
  reg                 pending_valid;
  reg        [7:0]    len_pending;
  reg        [29:0]   trans_pending;
  wire                dma_aw_fire_1;
  wire                _zz_dma_aw_valid;
  wire                aw_finish;
  reg                 s2m_axis_valve;
  reg        [31:0]   s2m_axis_data;
  reg        [31:0]   s2m_axis_residual_data;
  reg        [3:0]    s2m_axis_strb_keep;
  reg        [3:0]    s2m_axis_residual_strb_keep;
  reg        [29:0]   s2m_axis_trans_bytes;
  reg                 s2m_axis_req;
  reg                 s2m_axis_first;
  reg                 s2m_axis_last_cycle;
  reg                 s2m_axis_final_last;
  reg                 s2m_axis_leak;
  reg        [7:0]    s2m_w_len;
  reg                 s2m_w_last;
  reg        [31:0]   s2m_w_data;
  reg        [3:0]    s2m_w_strb;
  reg                 s2m_w_valid;
  reg        [3:0]    s2m_w_final_mask;
  reg                 pending_fifo_pop_ready;
  wire                dma_aw_fire_2;
  wire                len_pending_fifo_io_pop_fire;
  wire                s2m_data_stream_fire;
  wire                when_BDMAs2m_l271;
  wire                when_BDMAs2m_l274;
  wire                when_BDMAs2m_l326;
  wire                when_BDMAs2m_l331;
  wire                when_BDMAs2m_l345;
  wire                when_BDMAs2m_l349;
  wire                when_BDMAs2m_l357;
  wire                s2m_data_stream_fire_1;
  wire                when_BDMAs2m_l371;
  wire                when_BDMAs2m_l401;
  wire                when_BDMAs2m_l403;
  `ifndef SYNTHESIS
  reg [39:0] s2m_state_string;
  reg [71:0] s2m_cch_state_string;
  reg [39:0] s2m_w_state_string;
  `endif


  assign _zz_aligned_address = (cch_address >>> 2);
  assign _zz_when_BDMAs2m_l102 = (_zz_when_BDMAs2m_l102_1 + (cch_address & 32'h00000003));
  assign _zz_when_BDMAs2m_l102_1 = {2'd0, cch_total_bytes};
  assign _zz_trans_bytes_cnt = (32'h00000040 - (cch_address & 32'h00000003));
  assign _zz_s2m_aw_len = (_zz_s2m_aw_len_1 >>> 2);
  assign _zz_s2m_aw_len_1 = (_zz_s2m_aw_len_2 - 32'h00000001);
  assign _zz_s2m_aw_len_2 = (_zz_s2m_aw_len_3 + (cch_address & 32'h00000003));
  assign _zz_s2m_aw_len_3 = {2'd0, trans_bytes_cnt};
  assign _zz_cch_address = {2'd0, trans_bytes_cnt};
  assign _zz_when_BDMAs2m_l133 = (_zz_when_BDMAs2m_l133_1 + (cch_address & 32'h00000003));
  assign _zz_when_BDMAs2m_l133_1 = {2'd0, cch_total_bytes};
  assign _zz_when_BDMAs2m_l137 = (_zz_when_BDMAs2m_l137_1 >>> 12);
  assign _zz_when_BDMAs2m_l137_1 = ((cch_address & 32'h00000fff) + _zz_when_BDMAs2m_l137_2);
  assign _zz_when_BDMAs2m_l137_3 = (cch_total_bytes & 30'h00000fff);
  assign _zz_when_BDMAs2m_l137_2 = {2'd0, _zz_when_BDMAs2m_l137_3};
  assign _zz_when_BDMAs2m_l137_4 = ((cch_total_bytes & 30'h00000fff) >>> 12);
  assign _zz_trans_bytes_cnt_1 = (32'h00001000 - (cch_address & 32'h00000fff));
  assign _zz_when_BDMAs2m_l149 = (_zz_when_BDMAs2m_l149_1 >>> 12);
  assign _zz_when_BDMAs2m_l149_1 = ((cch_address & 32'h00000fff) + 32'h00000040);
  assign _zz_trans_bytes_cnt_2 = (_zz_trans_bytes_cnt_3 & 32'h00000fff);
  assign _zz_trans_bytes_cnt_3 = (32'h00001000 - cch_address);
  assign _zz_trans_bytes_cnt_4 = (32'h00000040 - (cch_address & 32'h00000003));
  assign _zz_s2m_aw_len_4 = (_zz_s2m_aw_len_5 >>> 2);
  assign _zz_s2m_aw_len_5 = (_zz_s2m_aw_len_6 - 32'h00000001);
  assign _zz_s2m_aw_len_6 = (_zz_s2m_aw_len_7 + (cch_address & 32'h00000003));
  assign _zz_s2m_aw_len_7 = {2'd0, trans_bytes_cnt};
  assign _zz_s2m_w_final_mask_1 = (3'b100 - _zz_s2m_w_final_mask_2);
  assign _zz_s2m_w_final_mask = _zz_s2m_w_final_mask_1[1:0];
  assign _zz_s2m_w_final_mask_2 = {1'd0, s2m_mask_shift};
  assign _zz_s2m_axis_data = ({63'd0,s2m_data_stream_payload_data} <<< _zz_s2m_axis_data_1);
  assign _zz_s2m_axis_data_1 = (4'b1000 * s2m_bytes_shift);
  assign _zz_s2m_axis_strb_keep = ({3'd0,s2m_data_stream_payload_keep_} <<< s2m_bytes_shift);
  assign _zz_s2m_axis_data_2 = ({63'd0,{32'h0,s2m_axis_residual_data}} <<< _zz_s2m_axis_data_3);
  assign _zz_s2m_axis_data_3 = (4'b1000 * s2m_bytes_shift);
  assign _zz_s2m_axis_strb_keep_1 = ({3'd0,{4'b0000,s2m_axis_residual_strb_keep}} <<< s2m_bytes_shift);
  assign _zz_s2m_axis_data_4 = ({63'd0,{s2m_data_stream_payload_data,s2m_axis_residual_data}} <<< _zz_s2m_axis_data_5);
  assign _zz_s2m_axis_data_5 = (4'b1000 * s2m_bytes_shift);
  assign _zz_s2m_axis_strb_keep_2 = ({3'd0,{s2m_data_stream_payload_keep_,s2m_axis_residual_strb_keep}} <<< s2m_bytes_shift);
  StreamFifo s2m_aw_fifo (
    .io_push_valid         (s2m_aw_valid                         ), //i
    .io_push_ready         (s2m_aw_fifo_io_push_ready            ), //o
    .io_push_payload_addr  (aligned_address[31:0]                ), //i
    .io_push_payload_id    (cch_id[3:0]                          ), //i
    .io_push_payload_len   (s2m_aw_len[7:0]                      ), //i
    .io_push_payload_size  (3'b010                               ), //i
    .io_push_payload_burst (cch_burst_type[1:0]                  ), //i
    .io_pop_valid          (s2m_aw_fifo_io_pop_valid             ), //o
    .io_pop_ready          (s2m_aw_fifo_io_pop_ready             ), //i
    .io_pop_payload_addr   (s2m_aw_fifo_io_pop_payload_addr[31:0]), //o
    .io_pop_payload_id     (s2m_aw_fifo_io_pop_payload_id[3:0]   ), //o
    .io_pop_payload_len    (s2m_aw_fifo_io_pop_payload_len[7:0]  ), //o
    .io_pop_payload_size   (s2m_aw_fifo_io_pop_payload_size[2:0] ), //o
    .io_pop_payload_burst  (s2m_aw_fifo_io_pop_payload_burst[1:0]), //o
    .io_flush              (1'b0                                 ), //i
    .io_occupancy          (s2m_aw_fifo_io_occupancy[3:0]        ), //o
    .io_availability       (s2m_aw_fifo_io_availability[3:0]     ), //o
    .clk                   (clk                                  ), //i
    .resetn                (resetn                               )  //i
  );
  StreamFifo_1 s2m_trans_bytes_fifo (
    .io_push_valid   (s2m_aw_valid                             ), //i
    .io_push_ready   (s2m_trans_bytes_fifo_io_push_ready       ), //o
    .io_push_payload (trans_bytes_cnt[29:0]                    ), //i
    .io_pop_valid    (s2m_trans_bytes_fifo_io_pop_valid        ), //o
    .io_pop_ready    (dma_aw_fire                              ), //i
    .io_pop_payload  (s2m_trans_bytes_fifo_io_pop_payload[29:0]), //o
    .io_flush        (1'b0                                     ), //i
    .io_occupancy    (s2m_trans_bytes_fifo_io_occupancy[3:0]   ), //o
    .io_availability (s2m_trans_bytes_fifo_io_availability[3:0]), //o
    .clk             (clk                                      ), //i
    .resetn          (resetn                                   )  //i
  );
  StreamFifo_2 s2m_w_fifo (
    .io_push_valid        (s2m_w_valid                         ), //i
    .io_push_ready        (s2m_w_fifo_io_push_ready            ), //o
    .io_push_payload_data (s2m_w_data[31:0]                    ), //i
    .io_push_payload_strb (s2m_w_strb[3:0]                     ), //i
    .io_push_payload_last (s2m_w_last                          ), //i
    .io_pop_valid         (s2m_w_fifo_io_pop_valid             ), //o
    .io_pop_ready         (dma_w_ready                         ), //i
    .io_pop_payload_data  (s2m_w_fifo_io_pop_payload_data[31:0]), //o
    .io_pop_payload_strb  (s2m_w_fifo_io_pop_payload_strb[3:0] ), //o
    .io_pop_payload_last  (s2m_w_fifo_io_pop_payload_last      ), //o
    .io_flush             (1'b0                                ), //i
    .io_occupancy         (s2m_w_fifo_io_occupancy[4:0]        ), //o
    .io_availability      (s2m_w_fifo_io_availability[4:0]     ), //o
    .clk                  (clk                                 ), //i
    .resetn               (resetn                              )  //i
  );
  StreamFifo_3 len_pending_fifo (
    .io_push_valid   (pending_valid                        ), //i
    .io_push_ready   (len_pending_fifo_io_push_ready       ), //o
    .io_push_payload (len_pending[7:0]                     ), //i
    .io_pop_valid    (len_pending_fifo_io_pop_valid        ), //o
    .io_pop_ready    (pending_fifo_pop_ready               ), //i
    .io_pop_payload  (len_pending_fifo_io_pop_payload[7:0] ), //o
    .io_flush        (1'b0                                 ), //i
    .io_occupancy    (len_pending_fifo_io_occupancy[2:0]   ), //o
    .io_availability (len_pending_fifo_io_availability[2:0]), //o
    .clk             (clk                                  ), //i
    .resetn          (resetn                               )  //i
  );
  StreamFifo_4 trans_pending_fifo (
    .io_push_valid   (pending_valid                          ), //i
    .io_push_ready   (trans_pending_fifo_io_push_ready       ), //o
    .io_push_payload (trans_pending[29:0]                    ), //i
    .io_pop_valid    (trans_pending_fifo_io_pop_valid        ), //o
    .io_pop_ready    (pending_fifo_pop_ready                 ), //i
    .io_pop_payload  (trans_pending_fifo_io_pop_payload[29:0]), //o
    .io_flush        (1'b0                                   ), //i
    .io_occupancy    (trans_pending_fifo_io_occupancy[2:0]   ), //o
    .io_availability (trans_pending_fifo_io_availability[2:0]), //o
    .clk             (clk                                    ), //i
    .resetn          (resetn                                 )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(s2m_state)
      BDMAs2mStates_IDLE : s2m_state_string = "IDLE ";
      BDMAs2mStates_REQ : s2m_state_string = "REQ  ";
      BDMAs2mStates_BURST : s2m_state_string = "BURST";
      BDMAs2mStates_DROP : s2m_state_string = "DROP ";
      default : s2m_state_string = "?????";
    endcase
  end
  always @(*) begin
    case(s2m_cch_state)
      BDMAcchStates_IDLE : s2m_cch_state_string = "IDLE     ";
      BDMAcchStates_FIXED_REQ : s2m_cch_state_string = "FIXED_REQ";
      BDMAcchStates_INCR_REQ : s2m_cch_state_string = "INCR_REQ ";
      BDMAcchStates_HALT : s2m_cch_state_string = "HALT     ";
      default : s2m_cch_state_string = "?????????";
    endcase
  end
  always @(*) begin
    case(s2m_w_state)
      BDMAs2mStates_IDLE : s2m_w_state_string = "IDLE ";
      BDMAs2mStates_REQ : s2m_w_state_string = "REQ  ";
      BDMAs2mStates_BURST : s2m_w_state_string = "BURST";
      BDMAs2mStates_DROP : s2m_w_state_string = "DROP ";
      default : s2m_w_state_string = "?????";
    endcase
  end
  `endif

  assign aligned_address = {_zz_aligned_address,2'b00};
  assign s2m_cch_fire = (s2m_cch_valid && s2m_cch_ready);
  assign when_BDMAs2m_l86 = (cch_total_bytes == 30'h0);
  assign s2m_aw_fifo_io_push_fire = (s2m_aw_valid && s2m_aw_fifo_io_push_ready);
  assign s2m_aw_fifo_io_push_fire_1 = (s2m_aw_valid && s2m_aw_fifo_io_push_ready);
  assign when_BDMAs2m_l102 = ((_zz_when_BDMAs2m_l102 <= 32'h00000040) || 1'b0);
  assign when_BDMAs2m_l116 = (cch_total_bytes == 30'h0);
  assign s2m_aw_fifo_io_push_fire_2 = (s2m_aw_valid && s2m_aw_fifo_io_push_ready);
  assign s2m_aw_fifo_io_push_fire_3 = (s2m_aw_valid && s2m_aw_fifo_io_push_ready);
  assign when_BDMAs2m_l133 = ((_zz_when_BDMAs2m_l133 <= 32'h00000040) || 1'b0);
  assign when_BDMAs2m_l137 = ((_zz_when_BDMAs2m_l137 != 20'h0) || (_zz_when_BDMAs2m_l137_4 != 18'h0));
  assign when_BDMAs2m_l149 = (_zz_when_BDMAs2m_l149 != 20'h0);
  assign when_BDMAs2m_l161 = (s2m_cch_payload_desc_reset && cycle_finished);
  assign s2m_cch_ready = cch_ready;
  assign dma_aw_fire = (dma_aw_valid && dma_aw_ready);
  assign strb_full = 4'b1111;
  assign dma_aw_fire_1 = (dma_aw_valid && dma_aw_ready);
  assign _zz_dma_aw_valid = (! (3'b010 <= len_pending_fifo_io_occupancy));
  assign s2m_aw_fifo_io_pop_ready = (dma_aw_ready && _zz_dma_aw_valid);
  assign dma_aw_valid = (s2m_aw_fifo_io_pop_valid && _zz_dma_aw_valid);
  assign dma_aw_payload_addr = s2m_aw_fifo_io_pop_payload_addr;
  assign dma_aw_payload_id = s2m_aw_fifo_io_pop_payload_id;
  assign dma_aw_payload_len = s2m_aw_fifo_io_pop_payload_len;
  assign dma_aw_payload_size = s2m_aw_fifo_io_pop_payload_size;
  assign dma_aw_payload_burst = s2m_aw_fifo_io_pop_payload_burst;
  assign aw_finish = (((s2m_cch_state == BDMAcchStates_HALT) && (! len_pending_fifo_io_pop_valid)) && (! s2m_aw_fifo_io_pop_valid));
  assign dma_aw_fire_2 = (dma_aw_valid && dma_aw_ready);
  assign len_pending_fifo_io_pop_fire = (len_pending_fifo_io_pop_valid && pending_fifo_pop_ready);
  assign s2m_data_stream_fire = (s2m_data_stream_valid && s2m_data_stream_ready);
  assign when_BDMAs2m_l271 = (s2m_data_stream_fire || s2m_axis_final_last);
  assign when_BDMAs2m_l274 = (s2m_axis_first == 1'b0);
  assign when_BDMAs2m_l326 = (s2m_data_stream_payload_last || s2m_axis_final_last);
  assign when_BDMAs2m_l331 = (s2m_axis_trans_bytes <= 30'h00000004);
  assign when_BDMAs2m_l345 = (s2m_axis_req || s2m_axis_last_cycle);
  assign when_BDMAs2m_l349 = ((s2m_axis_last_cycle && (s2m_w_len == 8'h0)) && aw_finish);
  assign when_BDMAs2m_l357 = (s2m_w_len == 8'h0);
  assign s2m_data_stream_fire_1 = (s2m_data_stream_valid && s2m_data_stream_ready);
  assign when_BDMAs2m_l371 = (s2m_axis_final_last || (s2m_data_stream_payload_last && s2m_data_stream_fire_1));
  assign s2m_data_stream_ready = ((s2m_axis_valve && (5'h02 < s2m_w_fifo_io_availability)) || s2m_axis_leak);
  assign dma_b_ready = 1'b1;
  assign dma_w_valid = s2m_w_fifo_io_pop_valid;
  assign dma_w_payload_data = s2m_w_fifo_io_pop_payload_data;
  assign dma_w_payload_strb = s2m_w_fifo_io_pop_payload_strb;
  assign dma_w_payload_last = s2m_w_fifo_io_pop_payload_last;
  assign when_BDMAs2m_l401 = (s2m_cch_state == BDMAcchStates_IDLE);
  assign when_BDMAs2m_l403 = ((s2m_w_state == BDMAs2mStates_DROP) && aw_finish);
  assign s2m_intr = cycle_finished;
  assign s2m_state = s2m_w_state;
  always @(posedge clk) begin
    if(!resetn) begin
      s2m_cch_state <= BDMAcchStates_IDLE;
      s2m_w_state <= BDMAs2mStates_IDLE;
      cch_ready <= 1'b0;
      s2m_aw_valid <= 1'b0;
      s2m_aw_halt_exec <= 1'b0;
      cycle_finished <= 1'b0;
      s2m_bytes_shift <= 2'b00;
      s2m_mask_shift <= 2'b00;
      pending_valid <= 1'b0;
      s2m_axis_valve <= 1'b0;
      s2m_axis_strb_keep <= 4'b0000;
      s2m_axis_residual_strb_keep <= 4'b0000;
      s2m_axis_trans_bytes <= 30'h0;
      s2m_axis_req <= 1'b0;
      s2m_axis_first <= 1'b0;
      s2m_axis_last_cycle <= 1'b0;
      s2m_axis_final_last <= 1'b0;
      s2m_axis_leak <= 1'b0;
      s2m_w_last <= 1'b0;
      s2m_w_strb <= 4'b0000;
      s2m_w_valid <= 1'b0;
      s2m_w_final_mask <= 4'b0000;
      pending_fifo_pop_ready <= 1'b0;
    end else begin
      case(s2m_cch_state)
        BDMAcchStates_IDLE : begin
          if(s2m_cch_fire) begin
            cch_ready <= 1'b0;
            s2m_bytes_shift <= s2m_cch_payload_desc_start_addr[1 : 0];
            s2m_mask_shift <= (s2m_cch_payload_desc_start_addr[1 : 0] + s2m_cch_payload_desc_total_bytes[1 : 0]);
            case(s2m_cch_payload_desc_burst)
              2'b00 : begin
                s2m_cch_state <= BDMAcchStates_FIXED_REQ;
              end
              default : begin
                s2m_cch_state <= BDMAcchStates_INCR_REQ;
              end
            endcase
          end else begin
            cch_ready <= 1'b1;
          end
        end
        BDMAcchStates_FIXED_REQ : begin
          if(when_BDMAs2m_l86) begin
            s2m_cch_state <= BDMAcchStates_HALT;
          end else begin
            if(s2m_aw_fifo_io_push_fire) begin
              s2m_aw_halt_exec <= 1'b0;
            end else begin
              s2m_aw_halt_exec <= 1'b1;
            end
          end
          if(s2m_aw_fifo_io_push_fire_1) begin
            s2m_aw_valid <= 1'b0;
          end else begin
            if(s2m_aw_halt_exec) begin
              s2m_aw_valid <= 1'b1;
            end
          end
        end
        BDMAcchStates_INCR_REQ : begin
          if(when_BDMAs2m_l116) begin
            s2m_cch_state <= BDMAcchStates_HALT;
          end else begin
            if(s2m_aw_fifo_io_push_fire_2) begin
              s2m_aw_halt_exec <= 1'b0;
            end else begin
              s2m_aw_halt_exec <= 1'b1;
            end
          end
          if(s2m_aw_fifo_io_push_fire_3) begin
            s2m_aw_valid <= 1'b0;
          end else begin
            if(s2m_aw_halt_exec) begin
              s2m_aw_valid <= 1'b1;
            end
          end
        end
        default : begin
          if(when_BDMAs2m_l161) begin
            s2m_cch_state <= BDMAcchStates_IDLE;
            s2m_bytes_shift <= 2'b00;
          end
        end
      endcase
      if(dma_aw_fire_1) begin
        pending_valid <= 1'b1;
      end else begin
        pending_valid <= 1'b0;
      end
      case(s2m_w_state)
        BDMAs2mStates_IDLE : begin
          if(dma_aw_fire_2) begin
            s2m_w_state <= BDMAs2mStates_REQ;
            s2m_w_final_mask <= (strb_full >>> _zz_s2m_w_final_mask);
          end
          s2m_axis_residual_strb_keep <= 4'b0000;
          s2m_axis_strb_keep <= 4'b0000;
          s2m_axis_first <= 1'b0;
          s2m_axis_trans_bytes <= 30'h0;
          s2m_axis_last_cycle <= 1'b0;
          s2m_axis_final_last <= 1'b0;
        end
        BDMAs2mStates_REQ : begin
          if(len_pending_fifo_io_pop_fire) begin
            s2m_axis_trans_bytes <= (s2m_axis_trans_bytes + trans_pending_fifo_io_pop_payload);
            pending_fifo_pop_ready <= 1'b0;
            s2m_w_state <= BDMAs2mStates_BURST;
            s2m_axis_valve <= (! s2m_axis_final_last);
          end else begin
            pending_fifo_pop_ready <= 1'b1;
            s2m_axis_valve <= 1'b0;
          end
          s2m_w_valid <= 1'b0;
          s2m_w_last <= 1'b0;
          s2m_axis_req <= 1'b0;
        end
        BDMAs2mStates_BURST : begin
          if(when_BDMAs2m_l271) begin
            s2m_axis_first <= 1'b1;
            s2m_axis_req <= 1'b1;
            if(when_BDMAs2m_l274) begin
              s2m_axis_strb_keep <= _zz_s2m_axis_strb_keep[3:0];
            end else begin
              if(s2m_axis_final_last) begin
                s2m_axis_strb_keep <= _zz_s2m_axis_strb_keep_1[7 : 4];
              end else begin
                s2m_axis_strb_keep <= _zz_s2m_axis_strb_keep_2[7 : 4];
              end
            end
            if(s2m_axis_final_last) begin
              s2m_axis_residual_strb_keep <= 4'b0000;
            end else begin
              s2m_axis_residual_strb_keep <= s2m_data_stream_payload_keep_;
              s2m_axis_trans_bytes <= (s2m_axis_trans_bytes - 30'h00000004);
            end
            if(when_BDMAs2m_l326) begin
              s2m_axis_last_cycle <= 1'b1;
              s2m_axis_final_last <= 1'b1;
              s2m_axis_valve <= 1'b0;
            end else begin
              if(when_BDMAs2m_l331) begin
                s2m_axis_valve <= 1'b0;
                s2m_axis_last_cycle <= aw_finish;
              end else begin
                s2m_axis_last_cycle <= 1'b0;
              end
            end
          end else begin
            s2m_axis_req <= 1'b0;
          end
          if(when_BDMAs2m_l345) begin
            s2m_w_valid <= 1'b1;
            if(when_BDMAs2m_l349) begin
              s2m_w_strb <= (s2m_axis_strb_keep & s2m_w_final_mask);
            end else begin
              s2m_w_strb <= s2m_axis_strb_keep;
            end
            if(when_BDMAs2m_l357) begin
              s2m_w_last <= 1'b1;
              s2m_w_state <= (aw_finish ? BDMAs2mStates_DROP : BDMAs2mStates_REQ);
              pending_fifo_pop_ready <= (! aw_finish);
            end else begin
              s2m_w_last <= 1'b0;
            end
          end else begin
            s2m_w_valid <= 1'b0;
          end
        end
        default : begin
          s2m_w_valid <= 1'b0;
          if(when_BDMAs2m_l371) begin
            s2m_w_state <= BDMAs2mStates_IDLE;
            s2m_axis_leak <= 1'b0;
          end else begin
            s2m_axis_leak <= 1'b1;
          end
        end
      endcase
      if(when_BDMAs2m_l401) begin
        cycle_finished <= 1'b0;
      end else begin
        if(when_BDMAs2m_l403) begin
          cycle_finished <= 1'b1;
        end
      end
    end
  end

  always @(posedge clk) begin
    case(s2m_cch_state)
      BDMAcchStates_IDLE : begin
        if(s2m_cch_fire) begin
          cch_address <= s2m_cch_payload_desc_start_addr;
          cch_total_bytes <= s2m_cch_payload_desc_total_bytes;
          cch_burst_type <= s2m_cch_payload_desc_burst;
          cch_id <= s2m_cch_payload_desc_id;
        end
      end
      BDMAcchStates_FIXED_REQ : begin
        if(!when_BDMAs2m_l86) begin
          if(s2m_aw_fifo_io_push_fire) begin
            cch_total_bytes <= (cch_total_bytes - trans_bytes_cnt);
          end
        end
        if(when_BDMAs2m_l102) begin
          trans_bytes_cnt <= cch_total_bytes;
        end else begin
          trans_bytes_cnt <= _zz_trans_bytes_cnt[29:0];
        end
        s2m_aw_len <= _zz_s2m_aw_len[7:0];
      end
      BDMAcchStates_INCR_REQ : begin
        if(!when_BDMAs2m_l116) begin
          if(s2m_aw_fifo_io_push_fire_2) begin
            cch_address <= (cch_address + _zz_cch_address);
            cch_total_bytes <= (cch_total_bytes - trans_bytes_cnt);
          end
        end
        if(when_BDMAs2m_l133) begin
          if(when_BDMAs2m_l137) begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_1[29:0];
          end else begin
            trans_bytes_cnt <= cch_total_bytes;
          end
        end else begin
          if(when_BDMAs2m_l149) begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_2[29:0];
          end else begin
            trans_bytes_cnt <= _zz_trans_bytes_cnt_4[29:0];
          end
        end
        s2m_aw_len <= _zz_s2m_aw_len_4[7:0];
      end
      default : begin
      end
    endcase
    if(dma_aw_fire_1) begin
      trans_pending <= s2m_trans_bytes_fifo_io_pop_payload;
      len_pending <= dma_aw_payload_len;
    end
    case(s2m_w_state)
      BDMAs2mStates_IDLE : begin
      end
      BDMAs2mStates_REQ : begin
        if(len_pending_fifo_io_pop_fire) begin
          s2m_w_len <= len_pending_fifo_io_pop_payload;
        end
      end
      BDMAs2mStates_BURST : begin
        if(when_BDMAs2m_l271) begin
          if(when_BDMAs2m_l274) begin
            s2m_axis_data <= _zz_s2m_axis_data[31:0];
          end else begin
            if(s2m_axis_final_last) begin
              s2m_axis_data <= _zz_s2m_axis_data_2[63 : 32];
            end else begin
              s2m_axis_data <= _zz_s2m_axis_data_4[63 : 32];
            end
          end
          if(s2m_axis_final_last) begin
            s2m_axis_residual_data <= 32'h0;
          end else begin
            s2m_axis_residual_data <= s2m_data_stream_payload_data;
          end
        end
        if(when_BDMAs2m_l345) begin
          s2m_w_len <= (s2m_w_len - 8'h01);
          if(when_BDMAs2m_l349) begin
            s2m_w_data <= s2m_axis_data;
          end else begin
            s2m_w_data <= s2m_axis_data;
          end
        end
      end
      default : begin
      end
    endcase
  end


endmodule

//StreamFifo_4 replaced by StreamFifo_4

//StreamFifo_3 replaced by StreamFifo_3

module StreamFifo_7 (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload_data,
  input      [3:0]    io_push_payload_strb,
  input      [3:0]    io_push_payload_keep_,
  input               io_push_payload_last,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload_data,
  output     [3:0]    io_pop_payload_strb,
  output     [3:0]    io_pop_payload_keep_,
  output              io_pop_payload_last,
  input               io_flush,
  output     [3:0]    io_occupancy,
  output     [3:0]    io_availability,
  input               clk,
  input               resetn
);

  reg        [40:0]   _zz_logic_ram_port0;
  wire       [2:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [2:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_data;
  wire       [40:0]   _zz_logic_ram_port_1;
  wire       [2:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [2:0]    logic_pushPtr_valueNext;
  reg        [2:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [2:0]    logic_popPtr_valueNext;
  reg        [2:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [40:0]   _zz_io_pop_payload_data;
  wire                when_Stream_l1021;
  wire       [2:0]    logic_ptrDif;
  reg [40:0] logic_ram [0:7];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {2'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {2'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_data = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_last,{io_push_payload_keep_,{io_push_payload_strb,io_push_payload_data}}};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_data) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(logic_pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0;
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1;
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 3'b111);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 3'b000;
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0;
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1;
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 3'b111);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 3'b000;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_data = _zz_logic_ram_port0;
  assign io_pop_payload_data = _zz_io_pop_payload_data[31 : 0];
  assign io_pop_payload_strb = _zz_io_pop_payload_data[35 : 32];
  assign io_pop_payload_keep_ = _zz_io_pop_payload_data[39 : 36];
  assign io_pop_payload_last = _zz_io_pop_payload_data[40];
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk) begin
    if(!resetn) begin
      logic_pushPtr_value <= 3'b000;
      logic_popPtr_value <= 3'b000;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l1021) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

//StreamFifo_1 replaced by StreamFifo_1

//StreamFifo replaced by StreamFifo

module StreamFifo_4 (
  input               io_push_valid,
  output              io_push_ready,
  input      [29:0]   io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [29:0]   io_pop_payload,
  input               io_flush,
  output     [2:0]    io_occupancy,
  output     [2:0]    io_availability,
  input               clk,
  input               resetn
);

  reg        [29:0]   _zz_logic_ram_port0;
  wire       [1:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [1:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [29:0]   _zz_logic_ram_port_1;
  wire       [1:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [1:0]    logic_pushPtr_valueNext;
  reg        [1:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [1:0]    logic_popPtr_valueNext;
  reg        [1:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire                when_Stream_l1021;
  wire       [1:0]    logic_ptrDif;
  reg [29:0] logic_ram [0:3];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {1'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {1'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_pop_payload = 1'b1;
  assign _zz_logic_ram_port_1 = io_push_payload;
  always @(posedge clk) begin
    if(_zz_io_pop_payload) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(logic_pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0;
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1;
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 2'b11);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 2'b00;
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0;
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1;
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 2'b11);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 2'b00;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign io_pop_payload = _zz_logic_ram_port0;
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk) begin
    if(!resetn) begin
      logic_pushPtr_value <= 2'b00;
      logic_popPtr_value <= 2'b00;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l1021) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module StreamFifo_3 (
  input               io_push_valid,
  output              io_push_ready,
  input      [7:0]    io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [7:0]    io_pop_payload,
  input               io_flush,
  output     [2:0]    io_occupancy,
  output     [2:0]    io_availability,
  input               clk,
  input               resetn
);

  reg        [7:0]    _zz_logic_ram_port0;
  wire       [1:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [1:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [7:0]    _zz_logic_ram_port_1;
  wire       [1:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [1:0]    logic_pushPtr_valueNext;
  reg        [1:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [1:0]    logic_popPtr_valueNext;
  reg        [1:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire                when_Stream_l1021;
  wire       [1:0]    logic_ptrDif;
  reg [7:0] logic_ram [0:3];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {1'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {1'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_pop_payload = 1'b1;
  assign _zz_logic_ram_port_1 = io_push_payload;
  always @(posedge clk) begin
    if(_zz_io_pop_payload) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(logic_pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0;
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1;
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 2'b11);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 2'b00;
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0;
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1;
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 2'b11);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 2'b00;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign io_pop_payload = _zz_logic_ram_port0;
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk) begin
    if(!resetn) begin
      logic_pushPtr_value <= 2'b00;
      logic_popPtr_value <= 2'b00;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l1021) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module StreamFifo_2 (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload_data,
  input      [3:0]    io_push_payload_strb,
  input               io_push_payload_last,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload_data,
  output     [3:0]    io_pop_payload_strb,
  output              io_pop_payload_last,
  input               io_flush,
  output     [4:0]    io_occupancy,
  output     [4:0]    io_availability,
  input               clk,
  input               resetn
);

  reg        [36:0]   _zz_logic_ram_port0;
  wire       [3:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [3:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_data;
  wire       [36:0]   _zz_logic_ram_port_1;
  wire       [3:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [3:0]    logic_pushPtr_valueNext;
  reg        [3:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [3:0]    logic_popPtr_valueNext;
  reg        [3:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [36:0]   _zz_io_pop_payload_data;
  wire                when_Stream_l1021;
  wire       [3:0]    logic_ptrDif;
  reg [36:0] logic_ram [0:15];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {3'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {3'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_data = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_last,{io_push_payload_strb,io_push_payload_data}};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_data) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(logic_pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0;
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1;
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 4'b1111);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 4'b0000;
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0;
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1;
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 4'b1111);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 4'b0000;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_data = _zz_logic_ram_port0;
  assign io_pop_payload_data = _zz_io_pop_payload_data[31 : 0];
  assign io_pop_payload_strb = _zz_io_pop_payload_data[35 : 32];
  assign io_pop_payload_last = _zz_io_pop_payload_data[36];
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk) begin
    if(!resetn) begin
      logic_pushPtr_value <= 4'b0000;
      logic_popPtr_value <= 4'b0000;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l1021) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module StreamFifo_1 (
  input               io_push_valid,
  output              io_push_ready,
  input      [29:0]   io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [29:0]   io_pop_payload,
  input               io_flush,
  output     [3:0]    io_occupancy,
  output     [3:0]    io_availability,
  input               clk,
  input               resetn
);

  reg        [29:0]   _zz_logic_ram_port0;
  wire       [2:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [2:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [29:0]   _zz_logic_ram_port_1;
  wire       [2:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [2:0]    logic_pushPtr_valueNext;
  reg        [2:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [2:0]    logic_popPtr_valueNext;
  reg        [2:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire                when_Stream_l1021;
  wire       [2:0]    logic_ptrDif;
  reg [29:0] logic_ram [0:7];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {2'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {2'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_pop_payload = 1'b1;
  assign _zz_logic_ram_port_1 = io_push_payload;
  always @(posedge clk) begin
    if(_zz_io_pop_payload) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(logic_pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0;
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1;
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 3'b111);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 3'b000;
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0;
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1;
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 3'b111);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 3'b000;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign io_pop_payload = _zz_logic_ram_port0;
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk) begin
    if(!resetn) begin
      logic_pushPtr_value <= 3'b000;
      logic_popPtr_value <= 3'b000;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l1021) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload_addr,
  input      [3:0]    io_push_payload_id,
  input      [7:0]    io_push_payload_len,
  input      [2:0]    io_push_payload_size,
  input      [1:0]    io_push_payload_burst,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload_addr,
  output     [3:0]    io_pop_payload_id,
  output     [7:0]    io_pop_payload_len,
  output     [2:0]    io_pop_payload_size,
  output     [1:0]    io_pop_payload_burst,
  input               io_flush,
  output     [3:0]    io_occupancy,
  output     [3:0]    io_availability,
  input               clk,
  input               resetn
);

  reg        [48:0]   _zz_logic_ram_port0;
  wire       [2:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [2:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_addr;
  wire       [48:0]   _zz_logic_ram_port_1;
  wire       [2:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [2:0]    logic_pushPtr_valueNext;
  reg        [2:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [2:0]    logic_popPtr_valueNext;
  reg        [2:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [48:0]   _zz_io_pop_payload_addr;
  wire                when_Stream_l1021;
  wire       [2:0]    logic_ptrDif;
  reg [48:0] logic_ram [0:7];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {2'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {2'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_addr = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_burst,{io_push_payload_size,{io_push_payload_len,{io_push_payload_id,io_push_payload_addr}}}};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_addr) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(logic_pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0;
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1;
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 3'b111);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 3'b000;
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0;
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1;
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 3'b111);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 3'b000;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_addr = _zz_logic_ram_port0;
  assign io_pop_payload_addr = _zz_io_pop_payload_addr[31 : 0];
  assign io_pop_payload_id = _zz_io_pop_payload_addr[35 : 32];
  assign io_pop_payload_len = _zz_io_pop_payload_addr[43 : 36];
  assign io_pop_payload_size = _zz_io_pop_payload_addr[46 : 44];
  assign io_pop_payload_burst = _zz_io_pop_payload_addr[48 : 47];
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk) begin
    if(!resetn) begin
      logic_pushPtr_value <= 3'b000;
      logic_popPtr_value <= 3'b000;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l1021) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule
