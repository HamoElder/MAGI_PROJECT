// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : AxiLite4DDS
// Git hash  : 8effc9780907e8d7f5019b63949cb0ba27674787

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
  output              data_4_valid,
  input               data_4_ready,
  output     [31:0]   data_4_payload,
  output              data_5_valid,
  input               data_5_ready,
  output     [31:0]   data_5_payload,
  output              data_6_valid,
  input               data_6_ready,
  output     [31:0]   data_6_payload,
  output              data_7_valid,
  input               data_7_ready,
  output     [31:0]   data_7_payload,
  input               sysref,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               resetn
);

  wire                fFSynchronizer_41_dataOut;
  wire                dDS_8_data_valid;
  wire       [31:0]   dDS_8_data_payload;
  wire                fFSynchronizer_42_dataOut;
  wire       [7:0]    fFSynchronizer_43_dataOut;
  wire       [31:0]   fFSynchronizer_44_dataOut;
  wire                fFSynchronizer_45_dataOut;
  wire       [7:0]    fFSynchronizer_46_dataOut;
  wire                dDS_9_data_valid;
  wire       [31:0]   dDS_9_data_payload;
  wire                fFSynchronizer_47_dataOut;
  wire       [7:0]    fFSynchronizer_48_dataOut;
  wire       [31:0]   fFSynchronizer_49_dataOut;
  wire                fFSynchronizer_50_dataOut;
  wire       [7:0]    fFSynchronizer_51_dataOut;
  wire                dDS_10_data_valid;
  wire       [31:0]   dDS_10_data_payload;
  wire                fFSynchronizer_52_dataOut;
  wire       [7:0]    fFSynchronizer_53_dataOut;
  wire       [31:0]   fFSynchronizer_54_dataOut;
  wire                fFSynchronizer_55_dataOut;
  wire       [7:0]    fFSynchronizer_56_dataOut;
  wire                dDS_11_data_valid;
  wire       [31:0]   dDS_11_data_payload;
  wire                fFSynchronizer_57_dataOut;
  wire       [7:0]    fFSynchronizer_58_dataOut;
  wire       [31:0]   fFSynchronizer_59_dataOut;
  wire                fFSynchronizer_60_dataOut;
  wire       [7:0]    fFSynchronizer_61_dataOut;
  wire                dDS_12_data_valid;
  wire       [31:0]   dDS_12_data_payload;
  wire                fFSynchronizer_62_dataOut;
  wire       [7:0]    fFSynchronizer_63_dataOut;
  wire       [31:0]   fFSynchronizer_64_dataOut;
  wire                fFSynchronizer_65_dataOut;
  wire       [7:0]    fFSynchronizer_66_dataOut;
  wire                dDS_13_data_valid;
  wire       [31:0]   dDS_13_data_payload;
  wire                fFSynchronizer_67_dataOut;
  wire       [7:0]    fFSynchronizer_68_dataOut;
  wire       [31:0]   fFSynchronizer_69_dataOut;
  wire                fFSynchronizer_70_dataOut;
  wire       [7:0]    fFSynchronizer_71_dataOut;
  wire                dDS_14_data_valid;
  wire       [31:0]   dDS_14_data_payload;
  wire                fFSynchronizer_72_dataOut;
  wire       [7:0]    fFSynchronizer_73_dataOut;
  wire       [31:0]   fFSynchronizer_74_dataOut;
  wire                fFSynchronizer_75_dataOut;
  wire       [7:0]    fFSynchronizer_76_dataOut;
  wire                dDS_15_data_valid;
  wire       [31:0]   dDS_15_data_payload;
  wire                fFSynchronizer_77_dataOut;
  wire       [7:0]    fFSynchronizer_78_dataOut;
  wire       [31:0]   fFSynchronizer_79_dataOut;
  wire                fFSynchronizer_80_dataOut;
  wire       [7:0]    fFSynchronizer_81_dataOut;
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
  reg                 sysref_regNext;
  reg                 _zz_readRsp_data;
  reg                 _zz_dataIn;
  reg        [7:0]    _zz_dataIn_1;
  reg        [31:0]   _zz_dataIn_2;
  reg        [7:0]    _zz_readRsp_data_1;
  reg                 sysref_regNext_1;
  reg                 _zz_readRsp_data_2;
  reg                 _zz_dataIn_3;
  reg        [7:0]    _zz_dataIn_4;
  reg        [31:0]   _zz_dataIn_5;
  reg        [7:0]    _zz_readRsp_data_3;
  reg                 sysref_regNext_2;
  reg                 _zz_readRsp_data_4;
  reg                 _zz_dataIn_6;
  reg        [7:0]    _zz_dataIn_7;
  reg        [31:0]   _zz_dataIn_8;
  reg        [7:0]    _zz_readRsp_data_5;
  reg                 sysref_regNext_3;
  reg                 _zz_readRsp_data_6;
  reg                 _zz_dataIn_9;
  reg        [7:0]    _zz_dataIn_10;
  reg        [31:0]   _zz_dataIn_11;
  reg        [7:0]    _zz_readRsp_data_7;
  reg                 sysref_regNext_4;
  reg                 _zz_readRsp_data_8;
  reg                 _zz_dataIn_12;
  reg        [7:0]    _zz_dataIn_13;
  reg        [31:0]   _zz_dataIn_14;
  reg        [7:0]    _zz_readRsp_data_9;
  reg                 sysref_regNext_5;
  reg                 _zz_readRsp_data_10;
  reg                 _zz_dataIn_15;
  reg        [7:0]    _zz_dataIn_16;
  reg        [31:0]   _zz_dataIn_17;
  reg        [7:0]    _zz_readRsp_data_11;
  reg                 sysref_regNext_6;
  reg                 _zz_readRsp_data_12;
  reg                 _zz_dataIn_18;
  reg        [7:0]    _zz_dataIn_19;
  reg        [31:0]   _zz_dataIn_20;
  reg        [7:0]    _zz_readRsp_data_13;
  reg                 sysref_regNext_7;
  reg                 _zz_readRsp_data_14;
  reg                 _zz_dataIn_21;
  reg        [7:0]    _zz_dataIn_22;
  reg        [31:0]   _zz_dataIn_23;
  reg        [7:0]    _zz_readRsp_data_15;

  FFSynchronizer fFSynchronizer_41 (
    .dataIn    (global_en                ), //i
    .dataOut   (fFSynchronizer_41_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  DDS dDS_8 (
    .data_valid   (dDS_8_data_valid               ), //o
    .data_ready   (data_0_ready                   ), //i
    .data_payload (dDS_8_data_payload[31:0]       ), //o
    .channel_en   (fFSynchronizer_45_dataOut      ), //i
    .sync_en      (fFSynchronizer_41_dataOut      ), //i
    .w_en         (fFSynchronizer_42_dataOut      ), //i
    .w_addr       (fFSynchronizer_43_dataOut[7:0] ), //i
    .w_data       (fFSynchronizer_44_dataOut[31:0]), //i
    .phase_limit  (fFSynchronizer_46_dataOut[7:0] ), //i
    .sysref       (sysref_regNext                 ), //i
    .rf_clk       (rf_clk                         ), //i
    .rf_resetn    (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_42 (
    .dataIn    (_zz_dataIn               ), //i
    .dataOut   (fFSynchronizer_42_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_43 (
    .dataIn    (_zz_dataIn_1[7:0]             ), //i
    .dataOut   (fFSynchronizer_43_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  FFSynchronizer_3 fFSynchronizer_44 (
    .dataIn    (_zz_dataIn_2[31:0]             ), //i
    .dataOut   (fFSynchronizer_44_dataOut[31:0]), //o
    .clk       (clk                            ), //i
    .resetn    (resetn                         ), //i
    .rf_clk    (rf_clk                         ), //i
    .rf_resetn (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_45 (
    .dataIn    (_zz_readRsp_data         ), //i
    .dataOut   (fFSynchronizer_45_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_46 (
    .dataIn    (_zz_readRsp_data_1[7:0]       ), //i
    .dataOut   (fFSynchronizer_46_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  DDS_1 dDS_9 (
    .data_valid   (dDS_9_data_valid               ), //o
    .data_ready   (data_1_ready                   ), //i
    .data_payload (dDS_9_data_payload[31:0]       ), //o
    .channel_en   (fFSynchronizer_50_dataOut      ), //i
    .sync_en      (fFSynchronizer_41_dataOut      ), //i
    .w_en         (fFSynchronizer_47_dataOut      ), //i
    .w_addr       (fFSynchronizer_48_dataOut[7:0] ), //i
    .w_data       (fFSynchronizer_49_dataOut[31:0]), //i
    .phase_limit  (fFSynchronizer_51_dataOut[7:0] ), //i
    .sysref       (sysref_regNext_1               ), //i
    .rf_clk       (rf_clk                         ), //i
    .rf_resetn    (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_47 (
    .dataIn    (_zz_dataIn_3             ), //i
    .dataOut   (fFSynchronizer_47_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_48 (
    .dataIn    (_zz_dataIn_4[7:0]             ), //i
    .dataOut   (fFSynchronizer_48_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  FFSynchronizer_3 fFSynchronizer_49 (
    .dataIn    (_zz_dataIn_5[31:0]             ), //i
    .dataOut   (fFSynchronizer_49_dataOut[31:0]), //o
    .clk       (clk                            ), //i
    .resetn    (resetn                         ), //i
    .rf_clk    (rf_clk                         ), //i
    .rf_resetn (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_50 (
    .dataIn    (_zz_readRsp_data_2       ), //i
    .dataOut   (fFSynchronizer_50_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_51 (
    .dataIn    (_zz_readRsp_data_3[7:0]       ), //i
    .dataOut   (fFSynchronizer_51_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  DDS_2 dDS_10 (
    .data_valid   (dDS_10_data_valid              ), //o
    .data_ready   (data_2_ready                   ), //i
    .data_payload (dDS_10_data_payload[31:0]      ), //o
    .channel_en   (fFSynchronizer_55_dataOut      ), //i
    .sync_en      (fFSynchronizer_41_dataOut      ), //i
    .w_en         (fFSynchronizer_52_dataOut      ), //i
    .w_addr       (fFSynchronizer_53_dataOut[7:0] ), //i
    .w_data       (fFSynchronizer_54_dataOut[31:0]), //i
    .phase_limit  (fFSynchronizer_56_dataOut[7:0] ), //i
    .sysref       (sysref_regNext_2               ), //i
    .rf_clk       (rf_clk                         ), //i
    .rf_resetn    (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_52 (
    .dataIn    (_zz_dataIn_6             ), //i
    .dataOut   (fFSynchronizer_52_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_53 (
    .dataIn    (_zz_dataIn_7[7:0]             ), //i
    .dataOut   (fFSynchronizer_53_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  FFSynchronizer_3 fFSynchronizer_54 (
    .dataIn    (_zz_dataIn_8[31:0]             ), //i
    .dataOut   (fFSynchronizer_54_dataOut[31:0]), //o
    .clk       (clk                            ), //i
    .resetn    (resetn                         ), //i
    .rf_clk    (rf_clk                         ), //i
    .rf_resetn (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_55 (
    .dataIn    (_zz_readRsp_data_4       ), //i
    .dataOut   (fFSynchronizer_55_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_56 (
    .dataIn    (_zz_readRsp_data_5[7:0]       ), //i
    .dataOut   (fFSynchronizer_56_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  DDS_3 dDS_11 (
    .data_valid   (dDS_11_data_valid              ), //o
    .data_ready   (data_3_ready                   ), //i
    .data_payload (dDS_11_data_payload[31:0]      ), //o
    .channel_en   (fFSynchronizer_60_dataOut      ), //i
    .sync_en      (fFSynchronizer_41_dataOut      ), //i
    .w_en         (fFSynchronizer_57_dataOut      ), //i
    .w_addr       (fFSynchronizer_58_dataOut[7:0] ), //i
    .w_data       (fFSynchronizer_59_dataOut[31:0]), //i
    .phase_limit  (fFSynchronizer_61_dataOut[7:0] ), //i
    .sysref       (sysref_regNext_3               ), //i
    .rf_clk       (rf_clk                         ), //i
    .rf_resetn    (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_57 (
    .dataIn    (_zz_dataIn_9             ), //i
    .dataOut   (fFSynchronizer_57_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_58 (
    .dataIn    (_zz_dataIn_10[7:0]            ), //i
    .dataOut   (fFSynchronizer_58_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  FFSynchronizer_3 fFSynchronizer_59 (
    .dataIn    (_zz_dataIn_11[31:0]            ), //i
    .dataOut   (fFSynchronizer_59_dataOut[31:0]), //o
    .clk       (clk                            ), //i
    .resetn    (resetn                         ), //i
    .rf_clk    (rf_clk                         ), //i
    .rf_resetn (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_60 (
    .dataIn    (_zz_readRsp_data_6       ), //i
    .dataOut   (fFSynchronizer_60_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_61 (
    .dataIn    (_zz_readRsp_data_7[7:0]       ), //i
    .dataOut   (fFSynchronizer_61_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  DDS_4 dDS_12 (
    .data_valid   (dDS_12_data_valid              ), //o
    .data_ready   (data_4_ready                   ), //i
    .data_payload (dDS_12_data_payload[31:0]      ), //o
    .channel_en   (fFSynchronizer_65_dataOut      ), //i
    .sync_en      (fFSynchronizer_41_dataOut      ), //i
    .w_en         (fFSynchronizer_62_dataOut      ), //i
    .w_addr       (fFSynchronizer_63_dataOut[7:0] ), //i
    .w_data       (fFSynchronizer_64_dataOut[31:0]), //i
    .phase_limit  (fFSynchronizer_66_dataOut[7:0] ), //i
    .sysref       (sysref_regNext_4               ), //i
    .rf_clk       (rf_clk                         ), //i
    .rf_resetn    (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_62 (
    .dataIn    (_zz_dataIn_12            ), //i
    .dataOut   (fFSynchronizer_62_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_63 (
    .dataIn    (_zz_dataIn_13[7:0]            ), //i
    .dataOut   (fFSynchronizer_63_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  FFSynchronizer_3 fFSynchronizer_64 (
    .dataIn    (_zz_dataIn_14[31:0]            ), //i
    .dataOut   (fFSynchronizer_64_dataOut[31:0]), //o
    .clk       (clk                            ), //i
    .resetn    (resetn                         ), //i
    .rf_clk    (rf_clk                         ), //i
    .rf_resetn (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_65 (
    .dataIn    (_zz_readRsp_data_8       ), //i
    .dataOut   (fFSynchronizer_65_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_66 (
    .dataIn    (_zz_readRsp_data_9[7:0]       ), //i
    .dataOut   (fFSynchronizer_66_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  DDS_5 dDS_13 (
    .data_valid   (dDS_13_data_valid              ), //o
    .data_ready   (data_5_ready                   ), //i
    .data_payload (dDS_13_data_payload[31:0]      ), //o
    .channel_en   (fFSynchronizer_70_dataOut      ), //i
    .sync_en      (fFSynchronizer_41_dataOut      ), //i
    .w_en         (fFSynchronizer_67_dataOut      ), //i
    .w_addr       (fFSynchronizer_68_dataOut[7:0] ), //i
    .w_data       (fFSynchronizer_69_dataOut[31:0]), //i
    .phase_limit  (fFSynchronizer_71_dataOut[7:0] ), //i
    .sysref       (sysref_regNext_5               ), //i
    .rf_clk       (rf_clk                         ), //i
    .rf_resetn    (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_67 (
    .dataIn    (_zz_dataIn_15            ), //i
    .dataOut   (fFSynchronizer_67_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_68 (
    .dataIn    (_zz_dataIn_16[7:0]            ), //i
    .dataOut   (fFSynchronizer_68_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  FFSynchronizer_3 fFSynchronizer_69 (
    .dataIn    (_zz_dataIn_17[31:0]            ), //i
    .dataOut   (fFSynchronizer_69_dataOut[31:0]), //o
    .clk       (clk                            ), //i
    .resetn    (resetn                         ), //i
    .rf_clk    (rf_clk                         ), //i
    .rf_resetn (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_70 (
    .dataIn    (_zz_readRsp_data_10      ), //i
    .dataOut   (fFSynchronizer_70_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_71 (
    .dataIn    (_zz_readRsp_data_11[7:0]      ), //i
    .dataOut   (fFSynchronizer_71_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  DDS_6 dDS_14 (
    .data_valid   (dDS_14_data_valid              ), //o
    .data_ready   (data_6_ready                   ), //i
    .data_payload (dDS_14_data_payload[31:0]      ), //o
    .channel_en   (fFSynchronizer_75_dataOut      ), //i
    .sync_en      (fFSynchronizer_41_dataOut      ), //i
    .w_en         (fFSynchronizer_72_dataOut      ), //i
    .w_addr       (fFSynchronizer_73_dataOut[7:0] ), //i
    .w_data       (fFSynchronizer_74_dataOut[31:0]), //i
    .phase_limit  (fFSynchronizer_76_dataOut[7:0] ), //i
    .sysref       (sysref_regNext_6               ), //i
    .rf_clk       (rf_clk                         ), //i
    .rf_resetn    (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_72 (
    .dataIn    (_zz_dataIn_18            ), //i
    .dataOut   (fFSynchronizer_72_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_73 (
    .dataIn    (_zz_dataIn_19[7:0]            ), //i
    .dataOut   (fFSynchronizer_73_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  FFSynchronizer_3 fFSynchronizer_74 (
    .dataIn    (_zz_dataIn_20[31:0]            ), //i
    .dataOut   (fFSynchronizer_74_dataOut[31:0]), //o
    .clk       (clk                            ), //i
    .resetn    (resetn                         ), //i
    .rf_clk    (rf_clk                         ), //i
    .rf_resetn (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_75 (
    .dataIn    (_zz_readRsp_data_12      ), //i
    .dataOut   (fFSynchronizer_75_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_76 (
    .dataIn    (_zz_readRsp_data_13[7:0]      ), //i
    .dataOut   (fFSynchronizer_76_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  DDS_7 dDS_15 (
    .data_valid   (dDS_15_data_valid              ), //o
    .data_ready   (data_7_ready                   ), //i
    .data_payload (dDS_15_data_payload[31:0]      ), //o
    .channel_en   (fFSynchronizer_80_dataOut      ), //i
    .sync_en      (fFSynchronizer_41_dataOut      ), //i
    .w_en         (fFSynchronizer_77_dataOut      ), //i
    .w_addr       (fFSynchronizer_78_dataOut[7:0] ), //i
    .w_data       (fFSynchronizer_79_dataOut[31:0]), //i
    .phase_limit  (fFSynchronizer_81_dataOut[7:0] ), //i
    .sysref       (sysref_regNext_7               ), //i
    .rf_clk       (rf_clk                         ), //i
    .rf_resetn    (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_77 (
    .dataIn    (_zz_dataIn_21            ), //i
    .dataOut   (fFSynchronizer_77_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_78 (
    .dataIn    (_zz_dataIn_22[7:0]            ), //i
    .dataOut   (fFSynchronizer_78_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .resetn    (resetn                        ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  FFSynchronizer_3 fFSynchronizer_79 (
    .dataIn    (_zz_dataIn_23[31:0]            ), //i
    .dataOut   (fFSynchronizer_79_dataOut[31:0]), //o
    .clk       (clk                            ), //i
    .resetn    (resetn                         ), //i
    .rf_clk    (rf_clk                         ), //i
    .rf_resetn (rf_resetn                      )  //i
  );
  FFSynchronizer fFSynchronizer_80 (
    .dataIn    (_zz_readRsp_data_14      ), //i
    .dataOut   (fFSynchronizer_80_dataOut), //o
    .clk       (clk                      ), //i
    .resetn    (resetn                   ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_81 (
    .dataIn    (_zz_readRsp_data_15[7:0]      ), //i
    .dataOut   (fFSynchronizer_81_dataOut[7:0]), //o
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
      8'h80 : begin
        readRsp_data[1 : 1] = _zz_readRsp_data_8;
      end
      8'h8c : begin
        readRsp_data[7 : 0] = _zz_readRsp_data_9;
      end
      8'ha0 : begin
        readRsp_data[1 : 1] = _zz_readRsp_data_10;
      end
      8'hac : begin
        readRsp_data[7 : 0] = _zz_readRsp_data_11;
      end
      8'hc0 : begin
        readRsp_data[1 : 1] = _zz_readRsp_data_12;
      end
      8'hcc : begin
        readRsp_data[7 : 0] = _zz_readRsp_data_13;
      end
      8'he0 : begin
        readRsp_data[1 : 1] = _zz_readRsp_data_14;
      end
      8'hec : begin
        readRsp_data[7 : 0] = _zz_readRsp_data_15;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign global_en = global_en_driver;
  assign data_0_payload = dDS_8_data_payload;
  assign data_0_valid = dDS_8_data_valid;
  assign data_1_payload = dDS_9_data_payload;
  assign data_1_valid = dDS_9_data_valid;
  assign data_2_payload = dDS_10_data_payload;
  assign data_2_valid = dDS_10_data_valid;
  assign data_3_payload = dDS_11_data_payload;
  assign data_3_valid = dDS_11_data_valid;
  assign data_4_payload = dDS_12_data_payload;
  assign data_4_valid = dDS_12_data_valid;
  assign data_5_payload = dDS_13_data_payload;
  assign data_5_valid = dDS_13_data_valid;
  assign data_6_payload = dDS_14_data_payload;
  assign data_6_valid = dDS_14_data_valid;
  assign data_7_payload = dDS_15_data_payload;
  assign data_7_valid = dDS_15_data_valid;
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
      _zz_readRsp_data_8 <= 1'b0;
      _zz_dataIn_12 <= 1'b0;
      _zz_dataIn_13 <= 8'h0;
      _zz_dataIn_14 <= 32'h0;
      _zz_readRsp_data_9 <= 8'hff;
      _zz_readRsp_data_10 <= 1'b0;
      _zz_dataIn_15 <= 1'b0;
      _zz_dataIn_16 <= 8'h0;
      _zz_dataIn_17 <= 32'h0;
      _zz_readRsp_data_11 <= 8'hff;
      _zz_readRsp_data_12 <= 1'b0;
      _zz_dataIn_18 <= 1'b0;
      _zz_dataIn_19 <= 8'h0;
      _zz_dataIn_20 <= 32'h0;
      _zz_readRsp_data_13 <= 8'hff;
      _zz_readRsp_data_14 <= 1'b0;
      _zz_dataIn_21 <= 1'b0;
      _zz_dataIn_22 <= 8'h0;
      _zz_dataIn_23 <= 32'h0;
      _zz_readRsp_data_15 <= 8'hff;
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
        8'h80 : begin
          if(writeOccur) begin
            _zz_readRsp_data_8 <= axil4Ctrl_wdata[1];
            _zz_dataIn_12 <= axil4Ctrl_wdata[2];
          end
        end
        8'h84 : begin
          if(writeOccur) begin
            _zz_dataIn_13 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'h88 : begin
          if(writeOccur) begin
            _zz_dataIn_14 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h8c : begin
          if(writeOccur) begin
            _zz_readRsp_data_9 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'ha0 : begin
          if(writeOccur) begin
            _zz_readRsp_data_10 <= axil4Ctrl_wdata[1];
            _zz_dataIn_15 <= axil4Ctrl_wdata[2];
          end
        end
        8'ha4 : begin
          if(writeOccur) begin
            _zz_dataIn_16 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'ha8 : begin
          if(writeOccur) begin
            _zz_dataIn_17 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'hac : begin
          if(writeOccur) begin
            _zz_readRsp_data_11 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'hc0 : begin
          if(writeOccur) begin
            _zz_readRsp_data_12 <= axil4Ctrl_wdata[1];
            _zz_dataIn_18 <= axil4Ctrl_wdata[2];
          end
        end
        8'hc4 : begin
          if(writeOccur) begin
            _zz_dataIn_19 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'hc8 : begin
          if(writeOccur) begin
            _zz_dataIn_20 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'hcc : begin
          if(writeOccur) begin
            _zz_readRsp_data_13 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'he0 : begin
          if(writeOccur) begin
            _zz_readRsp_data_14 <= axil4Ctrl_wdata[1];
            _zz_dataIn_21 <= axil4Ctrl_wdata[2];
          end
        end
        8'he4 : begin
          if(writeOccur) begin
            _zz_dataIn_22 <= axil4Ctrl_wdata[7 : 0];
          end
        end
        8'he8 : begin
          if(writeOccur) begin
            _zz_dataIn_23 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'hec : begin
          if(writeOccur) begin
            _zz_readRsp_data_15 <= axil4Ctrl_wdata[7 : 0];
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

  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      sysref_regNext <= 1'b0;
      sysref_regNext_1 <= 1'b0;
      sysref_regNext_2 <= 1'b0;
      sysref_regNext_3 <= 1'b0;
      sysref_regNext_4 <= 1'b0;
      sysref_regNext_5 <= 1'b0;
      sysref_regNext_6 <= 1'b0;
      sysref_regNext_7 <= 1'b0;
    end else begin
      sysref_regNext <= sysref;
      sysref_regNext_1 <= sysref;
      sysref_regNext_2 <= sysref;
      sysref_regNext_3 <= sysref;
      sysref_regNext_4 <= sysref;
      sysref_regNext_5 <= sysref;
      sysref_regNext_6 <= sysref;
      sysref_regNext_7 <= sysref;
    end
  end


endmodule

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

//FFSynchronizer_3 replaced by FFSynchronizer_3

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

module DDS_7 (
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
  reg                 sysref_regNext;
  wire                when_DDS_l55;
  wire                when_DDS_l58;
  wire                data_fire;
  wire                when_DDS_l57;
  reg                 module_en_regNext;
  (* ram_style = "block" *) reg [31:0] mem [0:255];

  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.sv_toplevel_dDS_15_mem.bin",mem);
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
  assign when_DDS_l55 = (sysref && (! sysref_regNext));
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
      if(when_DDS_l55) begin
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

  always @(posedge rf_clk) begin
    sysref_regNext <= sysref;
  end


endmodule

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

//FFSynchronizer_3 replaced by FFSynchronizer_3

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

module DDS_6 (
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
  reg                 sysref_regNext;
  wire                when_DDS_l55;
  wire                when_DDS_l58;
  wire                data_fire;
  wire                when_DDS_l57;
  reg                 module_en_regNext;
  (* ram_style = "block" *) reg [31:0] mem [0:255];

  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.sv_toplevel_dDS_14_mem.bin",mem);
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
  assign when_DDS_l55 = (sysref && (! sysref_regNext));
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
      if(when_DDS_l55) begin
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

  always @(posedge rf_clk) begin
    sysref_regNext <= sysref;
  end


endmodule

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

//FFSynchronizer_3 replaced by FFSynchronizer_3

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

module DDS_5 (
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
  reg                 sysref_regNext;
  wire                when_DDS_l55;
  wire                when_DDS_l58;
  wire                data_fire;
  wire                when_DDS_l57;
  reg                 module_en_regNext;
  (* ram_style = "block" *) reg [31:0] mem [0:255];

  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.sv_toplevel_dDS_13_mem.bin",mem);
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
  assign when_DDS_l55 = (sysref && (! sysref_regNext));
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
      if(when_DDS_l55) begin
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

  always @(posedge rf_clk) begin
    sysref_regNext <= sysref;
  end


endmodule

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

//FFSynchronizer_3 replaced by FFSynchronizer_3

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

module DDS_4 (
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
  reg                 sysref_regNext;
  wire                when_DDS_l55;
  wire                when_DDS_l58;
  wire                data_fire;
  wire                when_DDS_l57;
  reg                 module_en_regNext;
  (* ram_style = "block" *) reg [31:0] mem [0:255];

  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.sv_toplevel_dDS_12_mem.bin",mem);
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
  assign when_DDS_l55 = (sysref && (! sysref_regNext));
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
      if(when_DDS_l55) begin
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

  always @(posedge rf_clk) begin
    sysref_regNext <= sysref;
  end


endmodule

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

//FFSynchronizer_3 replaced by FFSynchronizer_3

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

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
  reg                 sysref_regNext;
  wire                when_DDS_l55;
  wire                when_DDS_l58;
  wire                data_fire;
  wire                when_DDS_l57;
  reg                 module_en_regNext;
  (* ram_style = "block" *) reg [31:0] mem [0:255];

  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.sv_toplevel_dDS_11_mem.bin",mem);
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
  assign when_DDS_l55 = (sysref && (! sysref_regNext));
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
      if(when_DDS_l55) begin
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

  always @(posedge rf_clk) begin
    sysref_regNext <= sysref;
  end


endmodule

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

//FFSynchronizer_3 replaced by FFSynchronizer_3

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

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
  reg                 sysref_regNext;
  wire                when_DDS_l55;
  wire                when_DDS_l58;
  wire                data_fire;
  wire                when_DDS_l57;
  reg                 module_en_regNext;
  (* ram_style = "block" *) reg [31:0] mem [0:255];

  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.sv_toplevel_dDS_10_mem.bin",mem);
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
  assign when_DDS_l55 = (sysref && (! sysref_regNext));
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
      if(when_DDS_l55) begin
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

  always @(posedge rf_clk) begin
    sysref_regNext <= sysref;
  end


endmodule

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

//FFSynchronizer_3 replaced by FFSynchronizer_3

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

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
  reg                 sysref_regNext;
  wire                when_DDS_l55;
  wire                when_DDS_l58;
  wire                data_fire;
  wire                when_DDS_l57;
  reg                 module_en_regNext;
  (* ram_style = "block" *) reg [31:0] mem [0:255];

  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.sv_toplevel_dDS_9_mem.bin",mem);
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
  assign when_DDS_l55 = (sysref && (! sysref_regNext));
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
      if(when_DDS_l55) begin
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

  always @(posedge rf_clk) begin
    sysref_regNext <= sysref;
  end


endmodule

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

module FFSynchronizer_3 (
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
  reg                 sysref_regNext;
  wire                when_DDS_l55;
  wire                when_DDS_l58;
  wire                data_fire;
  wire                when_DDS_l57;
  reg                 module_en_regNext;
  (* ram_style = "block" *) reg [31:0] mem [0:255];

  assign _zz_mem_port = w_data;
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("AxiLite4DDS.sv_toplevel_dDS_8_mem.bin",mem);
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
  assign when_DDS_l55 = (sysref && (! sysref_regNext));
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
      if(when_DDS_l55) begin
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

  always @(posedge rf_clk) begin
    sysref_regNext <= sysref;
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
