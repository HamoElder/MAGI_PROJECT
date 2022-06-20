// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : AxiLite4ASKSymbolCounter
// Git hash  : 4300383b228876766a219b9dd2dc88cbba246199

`timescale 1ns/1ps

module AxiLite4ASKSymbolCounter (
  input               raw_data_0_valid,
  input      [31:0]   raw_data_0_payload,
  input               raw_data_1_valid,
  input      [31:0]   raw_data_1_payload,
  input               raw_data_2_valid,
  input      [31:0]   raw_data_2_payload,
  input               raw_data_3_valid,
  input      [31:0]   raw_data_3_payload,
  input               raw_data_4_valid,
  input      [31:0]   raw_data_4_payload,
  input               raw_data_5_valid,
  input      [31:0]   raw_data_5_payload,
  input               raw_data_6_valid,
  input      [31:0]   raw_data_6_payload,
  input               raw_data_7_valid,
  input      [31:0]   raw_data_7_payload,
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
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               resetn
);

  wire       [15:0]   aSKSymbolCounter_8_symbol_cnt;
  wire       [15:0]   clkCrossing_32_dataOut;
  wire       [31:0]   clkCrossing_33_dataOut;
  wire       [31:0]   clkCrossing_34_dataOut;
  wire       [15:0]   clkCrossing_35_dataOut;
  wire       [15:0]   aSKSymbolCounter_9_symbol_cnt;
  wire       [15:0]   clkCrossing_36_dataOut;
  wire       [31:0]   clkCrossing_37_dataOut;
  wire       [31:0]   clkCrossing_38_dataOut;
  wire       [15:0]   clkCrossing_39_dataOut;
  wire       [15:0]   aSKSymbolCounter_10_symbol_cnt;
  wire       [15:0]   clkCrossing_40_dataOut;
  wire       [31:0]   clkCrossing_41_dataOut;
  wire       [31:0]   clkCrossing_42_dataOut;
  wire       [15:0]   clkCrossing_43_dataOut;
  wire       [15:0]   aSKSymbolCounter_11_symbol_cnt;
  wire       [15:0]   clkCrossing_44_dataOut;
  wire       [31:0]   clkCrossing_45_dataOut;
  wire       [31:0]   clkCrossing_46_dataOut;
  wire       [15:0]   clkCrossing_47_dataOut;
  wire       [15:0]   aSKSymbolCounter_12_symbol_cnt;
  wire       [15:0]   clkCrossing_48_dataOut;
  wire       [31:0]   clkCrossing_49_dataOut;
  wire       [31:0]   clkCrossing_50_dataOut;
  wire       [15:0]   clkCrossing_51_dataOut;
  wire       [15:0]   aSKSymbolCounter_13_symbol_cnt;
  wire       [15:0]   clkCrossing_52_dataOut;
  wire       [31:0]   clkCrossing_53_dataOut;
  wire       [31:0]   clkCrossing_54_dataOut;
  wire       [15:0]   clkCrossing_55_dataOut;
  wire       [15:0]   aSKSymbolCounter_14_symbol_cnt;
  wire       [15:0]   clkCrossing_56_dataOut;
  wire       [31:0]   clkCrossing_57_dataOut;
  wire       [31:0]   clkCrossing_58_dataOut;
  wire       [15:0]   clkCrossing_59_dataOut;
  wire       [15:0]   aSKSymbolCounter_15_symbol_cnt;
  wire       [15:0]   clkCrossing_60_dataOut;
  wire       [31:0]   clkCrossing_61_dataOut;
  wire       [31:0]   clkCrossing_62_dataOut;
  wire       [15:0]   clkCrossing_63_dataOut;
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
  reg        [31:0]   _zz_readRsp_data;
  reg        [31:0]   _zz_readRsp_data_1;
  reg        [15:0]   _zz_readRsp_data_2;
  reg        [31:0]   _zz_readRsp_data_3;
  reg        [31:0]   _zz_readRsp_data_4;
  reg        [15:0]   _zz_readRsp_data_5;
  reg        [31:0]   _zz_readRsp_data_6;
  reg        [31:0]   _zz_readRsp_data_7;
  reg        [15:0]   _zz_readRsp_data_8;
  reg        [31:0]   _zz_readRsp_data_9;
  reg        [31:0]   _zz_readRsp_data_10;
  reg        [15:0]   _zz_readRsp_data_11;
  reg        [31:0]   _zz_readRsp_data_12;
  reg        [31:0]   _zz_readRsp_data_13;
  reg        [15:0]   _zz_readRsp_data_14;
  reg        [31:0]   _zz_readRsp_data_15;
  reg        [31:0]   _zz_readRsp_data_16;
  reg        [15:0]   _zz_readRsp_data_17;
  reg        [31:0]   _zz_readRsp_data_18;
  reg        [31:0]   _zz_readRsp_data_19;
  reg        [15:0]   _zz_readRsp_data_20;
  reg        [31:0]   _zz_readRsp_data_21;
  reg        [31:0]   _zz_readRsp_data_22;
  reg        [15:0]   _zz_readRsp_data_23;

  ASKSymbolCounter aSKSymbolCounter_8 (
    .raw_data_valid   (raw_data_0_valid                   ), //i
    .raw_data_payload (raw_data_0_payload[31:0]           ), //i
    .pos_threshold    (clkCrossing_33_dataOut[31:0]       ), //i
    .neg_threshold    (clkCrossing_34_dataOut[31:0]       ), //i
    .cnt_limit        (clkCrossing_35_dataOut[15:0]       ), //i
    .symbol_cnt       (aSKSymbolCounter_8_symbol_cnt[15:0]), //o
    .rf_clk           (rf_clk                             ), //i
    .rf_resetn        (rf_resetn                          )  //i
  );
  ClkCrossing clkCrossing_32 (
    .dataIn    (aSKSymbolCounter_8_symbol_cnt[15:0]), //i
    .dataOut   (clkCrossing_32_dataOut[15:0]       ), //o
    .rf_clk    (rf_clk                             ), //i
    .rf_resetn (rf_resetn                          ), //i
    .clk       (clk                                ), //i
    .resetn    (resetn                             )  //i
  );
  ClkCrossing_1 clkCrossing_33 (
    .dataIn    (_zz_readRsp_data[31:0]      ), //i
    .dataOut   (clkCrossing_33_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_1 clkCrossing_34 (
    .dataIn    (_zz_readRsp_data_1[31:0]    ), //i
    .dataOut   (clkCrossing_34_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_3 clkCrossing_35 (
    .dataIn    (_zz_readRsp_data_2[15:0]    ), //i
    .dataOut   (clkCrossing_35_dataOut[15:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ASKSymbolCounter aSKSymbolCounter_9 (
    .raw_data_valid   (raw_data_1_valid                   ), //i
    .raw_data_payload (raw_data_1_payload[31:0]           ), //i
    .pos_threshold    (clkCrossing_37_dataOut[31:0]       ), //i
    .neg_threshold    (clkCrossing_38_dataOut[31:0]       ), //i
    .cnt_limit        (clkCrossing_39_dataOut[15:0]       ), //i
    .symbol_cnt       (aSKSymbolCounter_9_symbol_cnt[15:0]), //o
    .rf_clk           (rf_clk                             ), //i
    .rf_resetn        (rf_resetn                          )  //i
  );
  ClkCrossing clkCrossing_36 (
    .dataIn    (aSKSymbolCounter_9_symbol_cnt[15:0]), //i
    .dataOut   (clkCrossing_36_dataOut[15:0]       ), //o
    .rf_clk    (rf_clk                             ), //i
    .rf_resetn (rf_resetn                          ), //i
    .clk       (clk                                ), //i
    .resetn    (resetn                             )  //i
  );
  ClkCrossing_1 clkCrossing_37 (
    .dataIn    (_zz_readRsp_data_3[31:0]    ), //i
    .dataOut   (clkCrossing_37_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_1 clkCrossing_38 (
    .dataIn    (_zz_readRsp_data_4[31:0]    ), //i
    .dataOut   (clkCrossing_38_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_3 clkCrossing_39 (
    .dataIn    (_zz_readRsp_data_5[15:0]    ), //i
    .dataOut   (clkCrossing_39_dataOut[15:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ASKSymbolCounter aSKSymbolCounter_10 (
    .raw_data_valid   (raw_data_2_valid                    ), //i
    .raw_data_payload (raw_data_2_payload[31:0]            ), //i
    .pos_threshold    (clkCrossing_41_dataOut[31:0]        ), //i
    .neg_threshold    (clkCrossing_42_dataOut[31:0]        ), //i
    .cnt_limit        (clkCrossing_43_dataOut[15:0]        ), //i
    .symbol_cnt       (aSKSymbolCounter_10_symbol_cnt[15:0]), //o
    .rf_clk           (rf_clk                              ), //i
    .rf_resetn        (rf_resetn                           )  //i
  );
  ClkCrossing clkCrossing_40 (
    .dataIn    (aSKSymbolCounter_10_symbol_cnt[15:0]), //i
    .dataOut   (clkCrossing_40_dataOut[15:0]        ), //o
    .rf_clk    (rf_clk                              ), //i
    .rf_resetn (rf_resetn                           ), //i
    .clk       (clk                                 ), //i
    .resetn    (resetn                              )  //i
  );
  ClkCrossing_1 clkCrossing_41 (
    .dataIn    (_zz_readRsp_data_6[31:0]    ), //i
    .dataOut   (clkCrossing_41_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_1 clkCrossing_42 (
    .dataIn    (_zz_readRsp_data_7[31:0]    ), //i
    .dataOut   (clkCrossing_42_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_3 clkCrossing_43 (
    .dataIn    (_zz_readRsp_data_8[15:0]    ), //i
    .dataOut   (clkCrossing_43_dataOut[15:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ASKSymbolCounter aSKSymbolCounter_11 (
    .raw_data_valid   (raw_data_3_valid                    ), //i
    .raw_data_payload (raw_data_3_payload[31:0]            ), //i
    .pos_threshold    (clkCrossing_45_dataOut[31:0]        ), //i
    .neg_threshold    (clkCrossing_46_dataOut[31:0]        ), //i
    .cnt_limit        (clkCrossing_47_dataOut[15:0]        ), //i
    .symbol_cnt       (aSKSymbolCounter_11_symbol_cnt[15:0]), //o
    .rf_clk           (rf_clk                              ), //i
    .rf_resetn        (rf_resetn                           )  //i
  );
  ClkCrossing clkCrossing_44 (
    .dataIn    (aSKSymbolCounter_11_symbol_cnt[15:0]), //i
    .dataOut   (clkCrossing_44_dataOut[15:0]        ), //o
    .rf_clk    (rf_clk                              ), //i
    .rf_resetn (rf_resetn                           ), //i
    .clk       (clk                                 ), //i
    .resetn    (resetn                              )  //i
  );
  ClkCrossing_1 clkCrossing_45 (
    .dataIn    (_zz_readRsp_data_9[31:0]    ), //i
    .dataOut   (clkCrossing_45_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_1 clkCrossing_46 (
    .dataIn    (_zz_readRsp_data_10[31:0]   ), //i
    .dataOut   (clkCrossing_46_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_3 clkCrossing_47 (
    .dataIn    (_zz_readRsp_data_11[15:0]   ), //i
    .dataOut   (clkCrossing_47_dataOut[15:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ASKSymbolCounter aSKSymbolCounter_12 (
    .raw_data_valid   (raw_data_4_valid                    ), //i
    .raw_data_payload (raw_data_4_payload[31:0]            ), //i
    .pos_threshold    (clkCrossing_49_dataOut[31:0]        ), //i
    .neg_threshold    (clkCrossing_50_dataOut[31:0]        ), //i
    .cnt_limit        (clkCrossing_51_dataOut[15:0]        ), //i
    .symbol_cnt       (aSKSymbolCounter_12_symbol_cnt[15:0]), //o
    .rf_clk           (rf_clk                              ), //i
    .rf_resetn        (rf_resetn                           )  //i
  );
  ClkCrossing clkCrossing_48 (
    .dataIn    (aSKSymbolCounter_12_symbol_cnt[15:0]), //i
    .dataOut   (clkCrossing_48_dataOut[15:0]        ), //o
    .rf_clk    (rf_clk                              ), //i
    .rf_resetn (rf_resetn                           ), //i
    .clk       (clk                                 ), //i
    .resetn    (resetn                              )  //i
  );
  ClkCrossing_1 clkCrossing_49 (
    .dataIn    (_zz_readRsp_data_12[31:0]   ), //i
    .dataOut   (clkCrossing_49_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_1 clkCrossing_50 (
    .dataIn    (_zz_readRsp_data_13[31:0]   ), //i
    .dataOut   (clkCrossing_50_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_3 clkCrossing_51 (
    .dataIn    (_zz_readRsp_data_14[15:0]   ), //i
    .dataOut   (clkCrossing_51_dataOut[15:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ASKSymbolCounter aSKSymbolCounter_13 (
    .raw_data_valid   (raw_data_5_valid                    ), //i
    .raw_data_payload (raw_data_5_payload[31:0]            ), //i
    .pos_threshold    (clkCrossing_53_dataOut[31:0]        ), //i
    .neg_threshold    (clkCrossing_54_dataOut[31:0]        ), //i
    .cnt_limit        (clkCrossing_55_dataOut[15:0]        ), //i
    .symbol_cnt       (aSKSymbolCounter_13_symbol_cnt[15:0]), //o
    .rf_clk           (rf_clk                              ), //i
    .rf_resetn        (rf_resetn                           )  //i
  );
  ClkCrossing clkCrossing_52 (
    .dataIn    (aSKSymbolCounter_13_symbol_cnt[15:0]), //i
    .dataOut   (clkCrossing_52_dataOut[15:0]        ), //o
    .rf_clk    (rf_clk                              ), //i
    .rf_resetn (rf_resetn                           ), //i
    .clk       (clk                                 ), //i
    .resetn    (resetn                              )  //i
  );
  ClkCrossing_1 clkCrossing_53 (
    .dataIn    (_zz_readRsp_data_15[31:0]   ), //i
    .dataOut   (clkCrossing_53_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_1 clkCrossing_54 (
    .dataIn    (_zz_readRsp_data_16[31:0]   ), //i
    .dataOut   (clkCrossing_54_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_3 clkCrossing_55 (
    .dataIn    (_zz_readRsp_data_17[15:0]   ), //i
    .dataOut   (clkCrossing_55_dataOut[15:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ASKSymbolCounter aSKSymbolCounter_14 (
    .raw_data_valid   (raw_data_6_valid                    ), //i
    .raw_data_payload (raw_data_6_payload[31:0]            ), //i
    .pos_threshold    (clkCrossing_57_dataOut[31:0]        ), //i
    .neg_threshold    (clkCrossing_58_dataOut[31:0]        ), //i
    .cnt_limit        (clkCrossing_59_dataOut[15:0]        ), //i
    .symbol_cnt       (aSKSymbolCounter_14_symbol_cnt[15:0]), //o
    .rf_clk           (rf_clk                              ), //i
    .rf_resetn        (rf_resetn                           )  //i
  );
  ClkCrossing clkCrossing_56 (
    .dataIn    (aSKSymbolCounter_14_symbol_cnt[15:0]), //i
    .dataOut   (clkCrossing_56_dataOut[15:0]        ), //o
    .rf_clk    (rf_clk                              ), //i
    .rf_resetn (rf_resetn                           ), //i
    .clk       (clk                                 ), //i
    .resetn    (resetn                              )  //i
  );
  ClkCrossing_1 clkCrossing_57 (
    .dataIn    (_zz_readRsp_data_18[31:0]   ), //i
    .dataOut   (clkCrossing_57_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_1 clkCrossing_58 (
    .dataIn    (_zz_readRsp_data_19[31:0]   ), //i
    .dataOut   (clkCrossing_58_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_3 clkCrossing_59 (
    .dataIn    (_zz_readRsp_data_20[15:0]   ), //i
    .dataOut   (clkCrossing_59_dataOut[15:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ASKSymbolCounter aSKSymbolCounter_15 (
    .raw_data_valid   (raw_data_7_valid                    ), //i
    .raw_data_payload (raw_data_7_payload[31:0]            ), //i
    .pos_threshold    (clkCrossing_61_dataOut[31:0]        ), //i
    .neg_threshold    (clkCrossing_62_dataOut[31:0]        ), //i
    .cnt_limit        (clkCrossing_63_dataOut[15:0]        ), //i
    .symbol_cnt       (aSKSymbolCounter_15_symbol_cnt[15:0]), //o
    .rf_clk           (rf_clk                              ), //i
    .rf_resetn        (rf_resetn                           )  //i
  );
  ClkCrossing clkCrossing_60 (
    .dataIn    (aSKSymbolCounter_15_symbol_cnt[15:0]), //i
    .dataOut   (clkCrossing_60_dataOut[15:0]        ), //o
    .rf_clk    (rf_clk                              ), //i
    .rf_resetn (rf_resetn                           ), //i
    .clk       (clk                                 ), //i
    .resetn    (resetn                              )  //i
  );
  ClkCrossing_1 clkCrossing_61 (
    .dataIn    (_zz_readRsp_data_21[31:0]   ), //i
    .dataOut   (clkCrossing_61_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_1 clkCrossing_62 (
    .dataIn    (_zz_readRsp_data_22[31:0]   ), //i
    .dataOut   (clkCrossing_62_dataOut[31:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
  );
  ClkCrossing_3 clkCrossing_63 (
    .dataIn    (_zz_readRsp_data_23[15:0]   ), //i
    .dataOut   (clkCrossing_63_dataOut[15:0]), //o
    .clk       (clk                         ), //i
    .resetn    (resetn                      ), //i
    .rf_clk    (rf_clk                      ), //i
    .rf_resetn (rf_resetn                   )  //i
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
        readRsp_data[31 : 0] = _zz_readRsp_data;
      end
      8'h04 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_1;
      end
      8'h08 : begin
        readRsp_data[15 : 0] = _zz_readRsp_data_2;
      end
      8'h0c : begin
        readRsp_data[15 : 0] = clkCrossing_32_dataOut;
      end
      8'h10 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_3;
      end
      8'h14 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_4;
      end
      8'h18 : begin
        readRsp_data[15 : 0] = _zz_readRsp_data_5;
      end
      8'h1c : begin
        readRsp_data[15 : 0] = clkCrossing_36_dataOut;
      end
      8'h20 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_6;
      end
      8'h24 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_7;
      end
      8'h28 : begin
        readRsp_data[15 : 0] = _zz_readRsp_data_8;
      end
      8'h2c : begin
        readRsp_data[15 : 0] = clkCrossing_40_dataOut;
      end
      8'h30 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_9;
      end
      8'h34 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_10;
      end
      8'h38 : begin
        readRsp_data[15 : 0] = _zz_readRsp_data_11;
      end
      8'h3c : begin
        readRsp_data[15 : 0] = clkCrossing_44_dataOut;
      end
      8'h40 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_12;
      end
      8'h44 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_13;
      end
      8'h48 : begin
        readRsp_data[15 : 0] = _zz_readRsp_data_14;
      end
      8'h4c : begin
        readRsp_data[15 : 0] = clkCrossing_48_dataOut;
      end
      8'h50 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_15;
      end
      8'h54 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_16;
      end
      8'h58 : begin
        readRsp_data[15 : 0] = _zz_readRsp_data_17;
      end
      8'h5c : begin
        readRsp_data[15 : 0] = clkCrossing_52_dataOut;
      end
      8'h60 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_18;
      end
      8'h64 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_19;
      end
      8'h68 : begin
        readRsp_data[15 : 0] = _zz_readRsp_data_20;
      end
      8'h6c : begin
        readRsp_data[15 : 0] = clkCrossing_56_dataOut;
      end
      8'h70 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_21;
      end
      8'h74 : begin
        readRsp_data[31 : 0] = _zz_readRsp_data_22;
      end
      8'h78 : begin
        readRsp_data[15 : 0] = _zz_readRsp_data_23;
      end
      8'h7c : begin
        readRsp_data[15 : 0] = clkCrossing_60_dataOut;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      _zz_readRsp_data <= 32'h0;
      _zz_readRsp_data_1 <= 32'h0;
      _zz_readRsp_data_2 <= 16'h0;
      _zz_readRsp_data_3 <= 32'h0;
      _zz_readRsp_data_4 <= 32'h0;
      _zz_readRsp_data_5 <= 16'h0;
      _zz_readRsp_data_6 <= 32'h0;
      _zz_readRsp_data_7 <= 32'h0;
      _zz_readRsp_data_8 <= 16'h0;
      _zz_readRsp_data_9 <= 32'h0;
      _zz_readRsp_data_10 <= 32'h0;
      _zz_readRsp_data_11 <= 16'h0;
      _zz_readRsp_data_12 <= 32'h0;
      _zz_readRsp_data_13 <= 32'h0;
      _zz_readRsp_data_14 <= 16'h0;
      _zz_readRsp_data_15 <= 32'h0;
      _zz_readRsp_data_16 <= 32'h0;
      _zz_readRsp_data_17 <= 16'h0;
      _zz_readRsp_data_18 <= 32'h0;
      _zz_readRsp_data_19 <= 32'h0;
      _zz_readRsp_data_20 <= 16'h0;
      _zz_readRsp_data_21 <= 32'h0;
      _zz_readRsp_data_22 <= 32'h0;
      _zz_readRsp_data_23 <= 16'h0;
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
            _zz_readRsp_data <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            _zz_readRsp_data_1 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            _zz_readRsp_data_2 <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h10 : begin
          if(writeOccur) begin
            _zz_readRsp_data_3 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h14 : begin
          if(writeOccur) begin
            _zz_readRsp_data_4 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h18 : begin
          if(writeOccur) begin
            _zz_readRsp_data_5 <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h20 : begin
          if(writeOccur) begin
            _zz_readRsp_data_6 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h24 : begin
          if(writeOccur) begin
            _zz_readRsp_data_7 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h28 : begin
          if(writeOccur) begin
            _zz_readRsp_data_8 <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h30 : begin
          if(writeOccur) begin
            _zz_readRsp_data_9 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h34 : begin
          if(writeOccur) begin
            _zz_readRsp_data_10 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h38 : begin
          if(writeOccur) begin
            _zz_readRsp_data_11 <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h40 : begin
          if(writeOccur) begin
            _zz_readRsp_data_12 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h44 : begin
          if(writeOccur) begin
            _zz_readRsp_data_13 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h48 : begin
          if(writeOccur) begin
            _zz_readRsp_data_14 <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h50 : begin
          if(writeOccur) begin
            _zz_readRsp_data_15 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h54 : begin
          if(writeOccur) begin
            _zz_readRsp_data_16 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h58 : begin
          if(writeOccur) begin
            _zz_readRsp_data_17 <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h60 : begin
          if(writeOccur) begin
            _zz_readRsp_data_18 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h64 : begin
          if(writeOccur) begin
            _zz_readRsp_data_19 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h68 : begin
          if(writeOccur) begin
            _zz_readRsp_data_20 <= axil4Ctrl_wdata[15 : 0];
          end
        end
        8'h70 : begin
          if(writeOccur) begin
            _zz_readRsp_data_21 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h74 : begin
          if(writeOccur) begin
            _zz_readRsp_data_22 <= axil4Ctrl_wdata[31 : 0];
          end
        end
        8'h78 : begin
          if(writeOccur) begin
            _zz_readRsp_data_23 <= axil4Ctrl_wdata[15 : 0];
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

//ClkCrossing_3 replaced by ClkCrossing_3

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing replaced by ClkCrossing

//ASKSymbolCounter replaced by ASKSymbolCounter

//ClkCrossing_3 replaced by ClkCrossing_3

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing replaced by ClkCrossing

//ASKSymbolCounter replaced by ASKSymbolCounter

//ClkCrossing_3 replaced by ClkCrossing_3

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing replaced by ClkCrossing

//ASKSymbolCounter replaced by ASKSymbolCounter

//ClkCrossing_3 replaced by ClkCrossing_3

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing replaced by ClkCrossing

//ASKSymbolCounter replaced by ASKSymbolCounter

//ClkCrossing_3 replaced by ClkCrossing_3

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing replaced by ClkCrossing

//ASKSymbolCounter replaced by ASKSymbolCounter

//ClkCrossing_3 replaced by ClkCrossing_3

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing replaced by ClkCrossing

//ASKSymbolCounter replaced by ASKSymbolCounter

//ClkCrossing_3 replaced by ClkCrossing_3

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing_1 replaced by ClkCrossing_1

//ClkCrossing replaced by ClkCrossing

//ASKSymbolCounter replaced by ASKSymbolCounter

module ClkCrossing_3 (
  input      [15:0]   dataIn,
  output     [15:0]   dataOut,
  input               clk,
  input               resetn,
  input               rf_clk,
  input               rf_resetn
);

  reg        [15:0]   area_clkI_reg;
  (* async_reg = "true" *) reg        [15:0]   area_clkO_buf0;
  reg        [15:0]   area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge rf_clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

//ClkCrossing_1 replaced by ClkCrossing_1

module ClkCrossing_1 (
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

module ClkCrossing (
  input      [15:0]   dataIn,
  output     [15:0]   dataOut,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               resetn
);

  reg        [15:0]   area_clkI_reg;
  (* async_reg = "true" *) reg        [15:0]   area_clkO_buf0;
  reg        [15:0]   area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge rf_clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module ASKSymbolCounter (
  input               raw_data_valid,
  input      [31:0]   raw_data_payload,
  input      [31:0]   pos_threshold,
  input      [31:0]   neg_threshold,
  input      [15:0]   cnt_limit,
  output     [15:0]   symbol_cnt,
  input               rf_clk,
  input               rf_resetn
);

  wire       [15:0]   _zz_cnt;
  reg                 raw_valid;
  reg        [31:0]   raw_data;
  reg        [15:0]   cnt;
  reg        [15:0]   symbol_counter;
  reg        [15:0]   symbol_counter_buffer;
  reg                 symbol;
  wire                when_ASKSymbolCounter_l26;
  wire                when_ASKSymbolCounter_l28;
  wire                when_ASKSymbolCounter_l32;
  reg                 symbol_regNext;
  wire                when_ASKSymbolCounter_l35;

  assign _zz_cnt = (cnt + 16'h0001);
  assign when_ASKSymbolCounter_l26 = ($signed(pos_threshold) < $signed(raw_data));
  assign when_ASKSymbolCounter_l28 = ($signed(raw_data) < $signed(neg_threshold));
  assign when_ASKSymbolCounter_l32 = (cnt == cnt_limit);
  assign when_ASKSymbolCounter_l35 = (symbol && (! symbol_regNext));
  assign symbol_cnt = symbol_counter_buffer;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      raw_valid <= 1'b0;
      cnt <= 16'h0;
      symbol_counter <= 16'h0;
      symbol_counter_buffer <= 16'h0;
      symbol <= 1'b0;
    end else begin
      raw_valid <= raw_data_valid;
      if(raw_valid) begin
        if(when_ASKSymbolCounter_l26) begin
          symbol <= 1'b1;
        end else begin
          if(when_ASKSymbolCounter_l28) begin
            symbol <= 1'b0;
          end
        end
        cnt <= ((cnt == cnt_limit) ? 16'h0 : _zz_cnt);
        if(when_ASKSymbolCounter_l32) begin
          symbol_counter_buffer <= symbol_counter;
          symbol_counter <= 16'h0;
        end else begin
          if(when_ASKSymbolCounter_l35) begin
            symbol_counter <= (symbol_counter + 16'h0001);
          end
        end
      end
    end
  end

  always @(posedge rf_clk) begin
    raw_data <= raw_data_payload;
  end

  always @(posedge rf_clk) begin
    symbol_regNext <= symbol;
  end


endmodule
