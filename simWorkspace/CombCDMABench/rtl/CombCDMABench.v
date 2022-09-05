// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : CombCDMABench
// Git hash  : 67899194e2943426e013ff8893c37acadb8b8b7d

`timescale 1ns/1ps

module CombCDMABench (
  input               axil4Ctrl_spread_aw_valid,
  output              axil4Ctrl_spread_aw_ready,
  input      [7:0]    axil4Ctrl_spread_aw_payload_addr,
  input      [2:0]    axil4Ctrl_spread_aw_payload_prot,
  input               axil4Ctrl_spread_w_valid,
  output              axil4Ctrl_spread_w_ready,
  input      [31:0]   axil4Ctrl_spread_w_payload_data,
  input      [3:0]    axil4Ctrl_spread_w_payload_strb,
  output              axil4Ctrl_spread_b_valid,
  input               axil4Ctrl_spread_b_ready,
  output     [1:0]    axil4Ctrl_spread_b_payload_resp,
  input               axil4Ctrl_spread_ar_valid,
  output              axil4Ctrl_spread_ar_ready,
  input      [7:0]    axil4Ctrl_spread_ar_payload_addr,
  input      [2:0]    axil4Ctrl_spread_ar_payload_prot,
  output              axil4Ctrl_spread_r_valid,
  input               axil4Ctrl_spread_r_ready,
  output     [31:0]   axil4Ctrl_spread_r_payload_data,
  output     [1:0]    axil4Ctrl_spread_r_payload_resp,
  input               axil4Ctrl_despread_aw_valid,
  output              axil4Ctrl_despread_aw_ready,
  input      [7:0]    axil4Ctrl_despread_aw_payload_addr,
  input      [2:0]    axil4Ctrl_despread_aw_payload_prot,
  input               axil4Ctrl_despread_w_valid,
  output              axil4Ctrl_despread_w_ready,
  input      [31:0]   axil4Ctrl_despread_w_payload_data,
  input      [3:0]    axil4Ctrl_despread_w_payload_strb,
  output              axil4Ctrl_despread_b_valid,
  input               axil4Ctrl_despread_b_ready,
  output     [1:0]    axil4Ctrl_despread_b_payload_resp,
  input               axil4Ctrl_despread_ar_valid,
  output              axil4Ctrl_despread_ar_ready,
  input      [7:0]    axil4Ctrl_despread_ar_payload_addr,
  input      [2:0]    axil4Ctrl_despread_ar_payload_prot,
  output              axil4Ctrl_despread_r_valid,
  input               axil4Ctrl_despread_r_ready,
  output     [31:0]   axil4Ctrl_despread_r_payload_data,
  output     [1:0]    axil4Ctrl_despread_r_payload_resp,
  input               base_iq_in_valid,
  output              base_iq_in_ready,
  input      [15:0]   base_iq_in_payload_0_cha_i,
  input      [15:0]   base_iq_in_payload_0_cha_q,
  input      [15:0]   base_iq_in_payload_1_cha_i,
  input      [15:0]   base_iq_in_payload_1_cha_q,
  input      [15:0]   base_iq_in_payload_2_cha_i,
  input      [15:0]   base_iq_in_payload_2_cha_q,
  input      [15:0]   base_iq_in_payload_3_cha_i,
  input      [15:0]   base_iq_in_payload_3_cha_q,
  input      [15:0]   base_iq_in_payload_4_cha_i,
  input      [15:0]   base_iq_in_payload_4_cha_q,
  input      [15:0]   base_iq_in_payload_5_cha_i,
  input      [15:0]   base_iq_in_payload_5_cha_q,
  input      [15:0]   base_iq_in_payload_6_cha_i,
  input      [15:0]   base_iq_in_payload_6_cha_q,
  input      [15:0]   base_iq_in_payload_7_cha_i,
  input      [15:0]   base_iq_in_payload_7_cha_q,
  output              base_sub_iqs_0_valid,
  output     [15:0]   base_sub_iqs_0_payload_cha_i,
  output     [15:0]   base_sub_iqs_0_payload_cha_q,
  output              base_sub_iqs_1_valid,
  output     [15:0]   base_sub_iqs_1_payload_cha_i,
  output     [15:0]   base_sub_iqs_1_payload_cha_q,
  output              base_sub_iqs_2_valid,
  output     [15:0]   base_sub_iqs_2_payload_cha_i,
  output     [15:0]   base_sub_iqs_2_payload_cha_q,
  output              base_sub_iqs_3_valid,
  output     [15:0]   base_sub_iqs_3_payload_cha_i,
  output     [15:0]   base_sub_iqs_3_payload_cha_q,
  output              base_sub_iqs_4_valid,
  output     [15:0]   base_sub_iqs_4_payload_cha_i,
  output     [15:0]   base_sub_iqs_4_payload_cha_q,
  output              base_sub_iqs_5_valid,
  output     [15:0]   base_sub_iqs_5_payload_cha_i,
  output     [15:0]   base_sub_iqs_5_payload_cha_q,
  output              base_sub_iqs_6_valid,
  output     [15:0]   base_sub_iqs_6_payload_cha_i,
  output     [15:0]   base_sub_iqs_6_payload_cha_q,
  output              base_sub_iqs_7_valid,
  output     [15:0]   base_sub_iqs_7_payload_cha_i,
  output     [15:0]   base_sub_iqs_7_payload_cha_q,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               reset
);

  wire                cdma_spread_axil4Ctrl_awready;
  wire                cdma_spread_axil4Ctrl_wready;
  wire                cdma_spread_axil4Ctrl_bvalid;
  wire       [1:0]    cdma_spread_axil4Ctrl_bresp;
  wire                cdma_spread_axil4Ctrl_arready;
  wire                cdma_spread_axil4Ctrl_rvalid;
  wire       [31:0]   cdma_spread_axil4Ctrl_rdata;
  wire       [1:0]    cdma_spread_axil4Ctrl_rresp;
  wire                cdma_spread_base_iq_ready;
  wire                cdma_spread_mod_iq_valid;
  wire       [15:0]   cdma_spread_mod_iq_payload_cha_i;
  wire       [15:0]   cdma_spread_mod_iq_payload_cha_q;
  wire                cdma_despread_axil4Ctrl_awready;
  wire                cdma_despread_axil4Ctrl_wready;
  wire                cdma_despread_axil4Ctrl_bvalid;
  wire       [1:0]    cdma_despread_axil4Ctrl_bresp;
  wire                cdma_despread_axil4Ctrl_arready;
  wire                cdma_despread_axil4Ctrl_rvalid;
  wire       [31:0]   cdma_despread_axil4Ctrl_rdata;
  wire       [1:0]    cdma_despread_axil4Ctrl_rresp;
  wire                cdma_despread_mod_iq_ready;
  wire                cdma_despread_base_sub_iqs_0_valid;
  wire       [15:0]   cdma_despread_base_sub_iqs_0_payload_cha_i;
  wire       [15:0]   cdma_despread_base_sub_iqs_0_payload_cha_q;
  wire                cdma_despread_base_sub_iqs_1_valid;
  wire       [15:0]   cdma_despread_base_sub_iqs_1_payload_cha_i;
  wire       [15:0]   cdma_despread_base_sub_iqs_1_payload_cha_q;
  wire                cdma_despread_base_sub_iqs_2_valid;
  wire       [15:0]   cdma_despread_base_sub_iqs_2_payload_cha_i;
  wire       [15:0]   cdma_despread_base_sub_iqs_2_payload_cha_q;
  wire                cdma_despread_base_sub_iqs_3_valid;
  wire       [15:0]   cdma_despread_base_sub_iqs_3_payload_cha_i;
  wire       [15:0]   cdma_despread_base_sub_iqs_3_payload_cha_q;
  wire                cdma_despread_base_sub_iqs_4_valid;
  wire       [15:0]   cdma_despread_base_sub_iqs_4_payload_cha_i;
  wire       [15:0]   cdma_despread_base_sub_iqs_4_payload_cha_q;
  wire                cdma_despread_base_sub_iqs_5_valid;
  wire       [15:0]   cdma_despread_base_sub_iqs_5_payload_cha_i;
  wire       [15:0]   cdma_despread_base_sub_iqs_5_payload_cha_q;
  wire                cdma_despread_base_sub_iqs_6_valid;
  wire       [15:0]   cdma_despread_base_sub_iqs_6_payload_cha_i;
  wire       [15:0]   cdma_despread_base_sub_iqs_6_payload_cha_q;
  wire                cdma_despread_base_sub_iqs_7_valid;
  wire       [15:0]   cdma_despread_base_sub_iqs_7_payload_cha_i;
  wire       [15:0]   cdma_despread_base_sub_iqs_7_payload_cha_q;
  wire                cdma_spread_mod_iq_toStream_valid;
  wire                cdma_spread_mod_iq_toStream_ready;
  wire       [15:0]   cdma_spread_mod_iq_toStream_payload_cha_i;
  wire       [15:0]   cdma_spread_mod_iq_toStream_payload_cha_q;

  AxiLite4CDMASpread cdma_spread (
    .axil4Ctrl_awvalid       (axil4Ctrl_spread_aw_valid             ), //i
    .axil4Ctrl_awready       (cdma_spread_axil4Ctrl_awready         ), //o
    .axil4Ctrl_awaddr        (axil4Ctrl_spread_aw_payload_addr[7:0] ), //i
    .axil4Ctrl_awprot        (axil4Ctrl_spread_aw_payload_prot[2:0] ), //i
    .axil4Ctrl_wvalid        (axil4Ctrl_spread_w_valid              ), //i
    .axil4Ctrl_wready        (cdma_spread_axil4Ctrl_wready          ), //o
    .axil4Ctrl_wdata         (axil4Ctrl_spread_w_payload_data[31:0] ), //i
    .axil4Ctrl_wstrb         (axil4Ctrl_spread_w_payload_strb[3:0]  ), //i
    .axil4Ctrl_bvalid        (cdma_spread_axil4Ctrl_bvalid          ), //o
    .axil4Ctrl_bready        (axil4Ctrl_spread_b_ready              ), //i
    .axil4Ctrl_bresp         (cdma_spread_axil4Ctrl_bresp[1:0]      ), //o
    .axil4Ctrl_arvalid       (axil4Ctrl_spread_ar_valid             ), //i
    .axil4Ctrl_arready       (cdma_spread_axil4Ctrl_arready         ), //o
    .axil4Ctrl_araddr        (axil4Ctrl_spread_ar_payload_addr[7:0] ), //i
    .axil4Ctrl_arprot        (axil4Ctrl_spread_ar_payload_prot[2:0] ), //i
    .axil4Ctrl_rvalid        (cdma_spread_axil4Ctrl_rvalid          ), //o
    .axil4Ctrl_rready        (axil4Ctrl_spread_r_ready              ), //i
    .axil4Ctrl_rdata         (cdma_spread_axil4Ctrl_rdata[31:0]     ), //o
    .axil4Ctrl_rresp         (cdma_spread_axil4Ctrl_rresp[1:0]      ), //o
    .base_iq_valid           (base_iq_in_valid                      ), //i
    .base_iq_ready           (cdma_spread_base_iq_ready             ), //o
    .base_iq_payload_0_cha_i (base_iq_in_payload_0_cha_i[15:0]      ), //i
    .base_iq_payload_0_cha_q (base_iq_in_payload_0_cha_q[15:0]      ), //i
    .base_iq_payload_1_cha_i (base_iq_in_payload_1_cha_i[15:0]      ), //i
    .base_iq_payload_1_cha_q (base_iq_in_payload_1_cha_q[15:0]      ), //i
    .base_iq_payload_2_cha_i (base_iq_in_payload_2_cha_i[15:0]      ), //i
    .base_iq_payload_2_cha_q (base_iq_in_payload_2_cha_q[15:0]      ), //i
    .base_iq_payload_3_cha_i (base_iq_in_payload_3_cha_i[15:0]      ), //i
    .base_iq_payload_3_cha_q (base_iq_in_payload_3_cha_q[15:0]      ), //i
    .base_iq_payload_4_cha_i (base_iq_in_payload_4_cha_i[15:0]      ), //i
    .base_iq_payload_4_cha_q (base_iq_in_payload_4_cha_q[15:0]      ), //i
    .base_iq_payload_5_cha_i (base_iq_in_payload_5_cha_i[15:0]      ), //i
    .base_iq_payload_5_cha_q (base_iq_in_payload_5_cha_q[15:0]      ), //i
    .base_iq_payload_6_cha_i (base_iq_in_payload_6_cha_i[15:0]      ), //i
    .base_iq_payload_6_cha_q (base_iq_in_payload_6_cha_q[15:0]      ), //i
    .base_iq_payload_7_cha_i (base_iq_in_payload_7_cha_i[15:0]      ), //i
    .base_iq_payload_7_cha_q (base_iq_in_payload_7_cha_q[15:0]      ), //i
    .mod_iq_valid            (cdma_spread_mod_iq_valid              ), //o
    .mod_iq_payload_cha_i    (cdma_spread_mod_iq_payload_cha_i[15:0]), //o
    .mod_iq_payload_cha_q    (cdma_spread_mod_iq_payload_cha_q[15:0]), //o
    .rf_clk                  (rf_clk                                ), //i
    .rf_resetn               (rf_resetn                             ), //i
    .clk                     (clk                                   ), //i
    .reset                   (reset                                 )  //i
  );
  AxiLite4CDMADespread cdma_despread (
    .axil4Ctrl_awvalid            (axil4Ctrl_despread_aw_valid                     ), //i
    .axil4Ctrl_awready            (cdma_despread_axil4Ctrl_awready                 ), //o
    .axil4Ctrl_awaddr             (axil4Ctrl_despread_aw_payload_addr[7:0]         ), //i
    .axil4Ctrl_awprot             (axil4Ctrl_despread_aw_payload_prot[2:0]         ), //i
    .axil4Ctrl_wvalid             (axil4Ctrl_despread_w_valid                      ), //i
    .axil4Ctrl_wready             (cdma_despread_axil4Ctrl_wready                  ), //o
    .axil4Ctrl_wdata              (axil4Ctrl_despread_w_payload_data[31:0]         ), //i
    .axil4Ctrl_wstrb              (axil4Ctrl_despread_w_payload_strb[3:0]          ), //i
    .axil4Ctrl_bvalid             (cdma_despread_axil4Ctrl_bvalid                  ), //o
    .axil4Ctrl_bready             (axil4Ctrl_despread_b_ready                      ), //i
    .axil4Ctrl_bresp              (cdma_despread_axil4Ctrl_bresp[1:0]              ), //o
    .axil4Ctrl_arvalid            (axil4Ctrl_despread_ar_valid                     ), //i
    .axil4Ctrl_arready            (cdma_despread_axil4Ctrl_arready                 ), //o
    .axil4Ctrl_araddr             (axil4Ctrl_despread_ar_payload_addr[7:0]         ), //i
    .axil4Ctrl_arprot             (axil4Ctrl_despread_ar_payload_prot[2:0]         ), //i
    .axil4Ctrl_rvalid             (cdma_despread_axil4Ctrl_rvalid                  ), //o
    .axil4Ctrl_rready             (axil4Ctrl_despread_r_ready                      ), //i
    .axil4Ctrl_rdata              (cdma_despread_axil4Ctrl_rdata[31:0]             ), //o
    .axil4Ctrl_rresp              (cdma_despread_axil4Ctrl_rresp[1:0]              ), //o
    .mod_iq_valid                 (cdma_spread_mod_iq_toStream_valid               ), //i
    .mod_iq_ready                 (cdma_despread_mod_iq_ready                      ), //o
    .mod_iq_payload_cha_i         (cdma_spread_mod_iq_toStream_payload_cha_i[15:0] ), //i
    .mod_iq_payload_cha_q         (cdma_spread_mod_iq_toStream_payload_cha_q[15:0] ), //i
    .base_sub_iqs_0_valid         (cdma_despread_base_sub_iqs_0_valid              ), //o
    .base_sub_iqs_0_payload_cha_i (cdma_despread_base_sub_iqs_0_payload_cha_i[15:0]), //o
    .base_sub_iqs_0_payload_cha_q (cdma_despread_base_sub_iqs_0_payload_cha_q[15:0]), //o
    .base_sub_iqs_1_valid         (cdma_despread_base_sub_iqs_1_valid              ), //o
    .base_sub_iqs_1_payload_cha_i (cdma_despread_base_sub_iqs_1_payload_cha_i[15:0]), //o
    .base_sub_iqs_1_payload_cha_q (cdma_despread_base_sub_iqs_1_payload_cha_q[15:0]), //o
    .base_sub_iqs_2_valid         (cdma_despread_base_sub_iqs_2_valid              ), //o
    .base_sub_iqs_2_payload_cha_i (cdma_despread_base_sub_iqs_2_payload_cha_i[15:0]), //o
    .base_sub_iqs_2_payload_cha_q (cdma_despread_base_sub_iqs_2_payload_cha_q[15:0]), //o
    .base_sub_iqs_3_valid         (cdma_despread_base_sub_iqs_3_valid              ), //o
    .base_sub_iqs_3_payload_cha_i (cdma_despread_base_sub_iqs_3_payload_cha_i[15:0]), //o
    .base_sub_iqs_3_payload_cha_q (cdma_despread_base_sub_iqs_3_payload_cha_q[15:0]), //o
    .base_sub_iqs_4_valid         (cdma_despread_base_sub_iqs_4_valid              ), //o
    .base_sub_iqs_4_payload_cha_i (cdma_despread_base_sub_iqs_4_payload_cha_i[15:0]), //o
    .base_sub_iqs_4_payload_cha_q (cdma_despread_base_sub_iqs_4_payload_cha_q[15:0]), //o
    .base_sub_iqs_5_valid         (cdma_despread_base_sub_iqs_5_valid              ), //o
    .base_sub_iqs_5_payload_cha_i (cdma_despread_base_sub_iqs_5_payload_cha_i[15:0]), //o
    .base_sub_iqs_5_payload_cha_q (cdma_despread_base_sub_iqs_5_payload_cha_q[15:0]), //o
    .base_sub_iqs_6_valid         (cdma_despread_base_sub_iqs_6_valid              ), //o
    .base_sub_iqs_6_payload_cha_i (cdma_despread_base_sub_iqs_6_payload_cha_i[15:0]), //o
    .base_sub_iqs_6_payload_cha_q (cdma_despread_base_sub_iqs_6_payload_cha_q[15:0]), //o
    .base_sub_iqs_7_valid         (cdma_despread_base_sub_iqs_7_valid              ), //o
    .base_sub_iqs_7_payload_cha_i (cdma_despread_base_sub_iqs_7_payload_cha_i[15:0]), //o
    .base_sub_iqs_7_payload_cha_q (cdma_despread_base_sub_iqs_7_payload_cha_q[15:0]), //o
    .rf_clk                       (rf_clk                                          ), //i
    .rf_resetn                    (rf_resetn                                       ), //i
    .clk                          (clk                                             ), //i
    .reset                        (reset                                           )  //i
  );
  assign axil4Ctrl_spread_aw_ready = cdma_spread_axil4Ctrl_awready;
  assign axil4Ctrl_spread_w_ready = cdma_spread_axil4Ctrl_wready;
  assign axil4Ctrl_spread_b_valid = cdma_spread_axil4Ctrl_bvalid;
  assign axil4Ctrl_spread_b_payload_resp = cdma_spread_axil4Ctrl_bresp;
  assign axil4Ctrl_spread_ar_ready = cdma_spread_axil4Ctrl_arready;
  assign axil4Ctrl_spread_r_valid = cdma_spread_axil4Ctrl_rvalid;
  assign axil4Ctrl_spread_r_payload_data = cdma_spread_axil4Ctrl_rdata;
  assign axil4Ctrl_spread_r_payload_resp = cdma_spread_axil4Ctrl_rresp;
  assign base_iq_in_ready = cdma_spread_base_iq_ready;
  assign cdma_spread_mod_iq_toStream_valid = cdma_spread_mod_iq_valid;
  assign cdma_spread_mod_iq_toStream_payload_cha_i = cdma_spread_mod_iq_payload_cha_i;
  assign cdma_spread_mod_iq_toStream_payload_cha_q = cdma_spread_mod_iq_payload_cha_q;
  assign cdma_spread_mod_iq_toStream_ready = cdma_despread_mod_iq_ready;
  assign axil4Ctrl_despread_aw_ready = cdma_despread_axil4Ctrl_awready;
  assign axil4Ctrl_despread_w_ready = cdma_despread_axil4Ctrl_wready;
  assign axil4Ctrl_despread_b_valid = cdma_despread_axil4Ctrl_bvalid;
  assign axil4Ctrl_despread_b_payload_resp = cdma_despread_axil4Ctrl_bresp;
  assign axil4Ctrl_despread_ar_ready = cdma_despread_axil4Ctrl_arready;
  assign axil4Ctrl_despread_r_valid = cdma_despread_axil4Ctrl_rvalid;
  assign axil4Ctrl_despread_r_payload_data = cdma_despread_axil4Ctrl_rdata;
  assign axil4Ctrl_despread_r_payload_resp = cdma_despread_axil4Ctrl_rresp;
  assign base_sub_iqs_0_valid = cdma_despread_base_sub_iqs_0_valid;
  assign base_sub_iqs_0_payload_cha_i = cdma_despread_base_sub_iqs_0_payload_cha_i;
  assign base_sub_iqs_0_payload_cha_q = cdma_despread_base_sub_iqs_0_payload_cha_q;
  assign base_sub_iqs_1_valid = cdma_despread_base_sub_iqs_1_valid;
  assign base_sub_iqs_1_payload_cha_i = cdma_despread_base_sub_iqs_1_payload_cha_i;
  assign base_sub_iqs_1_payload_cha_q = cdma_despread_base_sub_iqs_1_payload_cha_q;
  assign base_sub_iqs_2_valid = cdma_despread_base_sub_iqs_2_valid;
  assign base_sub_iqs_2_payload_cha_i = cdma_despread_base_sub_iqs_2_payload_cha_i;
  assign base_sub_iqs_2_payload_cha_q = cdma_despread_base_sub_iqs_2_payload_cha_q;
  assign base_sub_iqs_3_valid = cdma_despread_base_sub_iqs_3_valid;
  assign base_sub_iqs_3_payload_cha_i = cdma_despread_base_sub_iqs_3_payload_cha_i;
  assign base_sub_iqs_3_payload_cha_q = cdma_despread_base_sub_iqs_3_payload_cha_q;
  assign base_sub_iqs_4_valid = cdma_despread_base_sub_iqs_4_valid;
  assign base_sub_iqs_4_payload_cha_i = cdma_despread_base_sub_iqs_4_payload_cha_i;
  assign base_sub_iqs_4_payload_cha_q = cdma_despread_base_sub_iqs_4_payload_cha_q;
  assign base_sub_iqs_5_valid = cdma_despread_base_sub_iqs_5_valid;
  assign base_sub_iqs_5_payload_cha_i = cdma_despread_base_sub_iqs_5_payload_cha_i;
  assign base_sub_iqs_5_payload_cha_q = cdma_despread_base_sub_iqs_5_payload_cha_q;
  assign base_sub_iqs_6_valid = cdma_despread_base_sub_iqs_6_valid;
  assign base_sub_iqs_6_payload_cha_i = cdma_despread_base_sub_iqs_6_payload_cha_i;
  assign base_sub_iqs_6_payload_cha_q = cdma_despread_base_sub_iqs_6_payload_cha_q;
  assign base_sub_iqs_7_valid = cdma_despread_base_sub_iqs_7_valid;
  assign base_sub_iqs_7_payload_cha_i = cdma_despread_base_sub_iqs_7_payload_cha_i;
  assign base_sub_iqs_7_payload_cha_q = cdma_despread_base_sub_iqs_7_payload_cha_q;

endmodule

module AxiLite4CDMADespread (
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
  input               mod_iq_valid,
  output              mod_iq_ready,
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  output              base_sub_iqs_0_valid,
  output     [15:0]   base_sub_iqs_0_payload_cha_i,
  output     [15:0]   base_sub_iqs_0_payload_cha_q,
  output              base_sub_iqs_1_valid,
  output     [15:0]   base_sub_iqs_1_payload_cha_i,
  output     [15:0]   base_sub_iqs_1_payload_cha_q,
  output              base_sub_iqs_2_valid,
  output     [15:0]   base_sub_iqs_2_payload_cha_i,
  output     [15:0]   base_sub_iqs_2_payload_cha_q,
  output              base_sub_iqs_3_valid,
  output     [15:0]   base_sub_iqs_3_payload_cha_i,
  output     [15:0]   base_sub_iqs_3_payload_cha_q,
  output              base_sub_iqs_4_valid,
  output     [15:0]   base_sub_iqs_4_payload_cha_i,
  output     [15:0]   base_sub_iqs_4_payload_cha_q,
  output              base_sub_iqs_5_valid,
  output     [15:0]   base_sub_iqs_5_payload_cha_i,
  output     [15:0]   base_sub_iqs_5_payload_cha_q,
  output              base_sub_iqs_6_valid,
  output     [15:0]   base_sub_iqs_6_payload_cha_i,
  output     [15:0]   base_sub_iqs_6_payload_cha_q,
  output              base_sub_iqs_7_valid,
  output     [15:0]   base_sub_iqs_7_payload_cha_i,
  output     [15:0]   base_sub_iqs_7_payload_cha_q,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               reset
);

  wire                rfClockArea_cdma_despread_mod_iq_ready;
  wire                rfClockArea_cdma_despread_base_sub_iqs_0_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_1_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_2_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_3_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_4_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_5_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_6_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_q;
  wire                rfClockArea_cdma_despread_base_sub_iqs_7_valid;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_q;
  wire                fFSynchronizer_10_dataOut;
  wire                fFSynchronizer_11_dataOut;
  wire       [2:0]    fFSynchronizer_12_dataOut;
  wire       [7:0]    fFSynchronizer_13_dataOut;
  wire       [2:0]    fFSynchronizer_14_dataOut;
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
  wire                cdma_spread_bridge_clc;
  reg                 cdma_spread_bridge_clc_driver;
  reg                 _zz_dataIn;
  reg        [2:0]    _zz_dataIn_1;
  reg        [7:0]    _zz_dataIn_2;
  reg        [2:0]    _zz_dataIn_3;

  CDMADespreading rfClockArea_cdma_despread (
    .w_en                         (fFSynchronizer_11_dataOut                                   ), //i
    .w_addr                       (fFSynchronizer_12_dataOut[2:0]                              ), //i
    .w_data                       (fFSynchronizer_13_dataOut[7:0]                              ), //i
    .clc                          (fFSynchronizer_10_dataOut                                   ), //i
    .cnt_limit                    (fFSynchronizer_14_dataOut[2:0]                              ), //i
    .mod_iq_valid                 (mod_iq_valid                                                ), //i
    .mod_iq_ready                 (rfClockArea_cdma_despread_mod_iq_ready                      ), //o
    .mod_iq_payload_cha_i         (mod_iq_payload_cha_i[15:0]                                  ), //i
    .mod_iq_payload_cha_q         (mod_iq_payload_cha_q[15:0]                                  ), //i
    .base_sub_iqs_0_valid         (rfClockArea_cdma_despread_base_sub_iqs_0_valid              ), //o
    .base_sub_iqs_0_payload_cha_i (rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_i[15:0]), //o
    .base_sub_iqs_0_payload_cha_q (rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_q[15:0]), //o
    .base_sub_iqs_1_valid         (rfClockArea_cdma_despread_base_sub_iqs_1_valid              ), //o
    .base_sub_iqs_1_payload_cha_i (rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_i[15:0]), //o
    .base_sub_iqs_1_payload_cha_q (rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_q[15:0]), //o
    .base_sub_iqs_2_valid         (rfClockArea_cdma_despread_base_sub_iqs_2_valid              ), //o
    .base_sub_iqs_2_payload_cha_i (rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_i[15:0]), //o
    .base_sub_iqs_2_payload_cha_q (rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_q[15:0]), //o
    .base_sub_iqs_3_valid         (rfClockArea_cdma_despread_base_sub_iqs_3_valid              ), //o
    .base_sub_iqs_3_payload_cha_i (rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_i[15:0]), //o
    .base_sub_iqs_3_payload_cha_q (rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_q[15:0]), //o
    .base_sub_iqs_4_valid         (rfClockArea_cdma_despread_base_sub_iqs_4_valid              ), //o
    .base_sub_iqs_4_payload_cha_i (rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_i[15:0]), //o
    .base_sub_iqs_4_payload_cha_q (rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_q[15:0]), //o
    .base_sub_iqs_5_valid         (rfClockArea_cdma_despread_base_sub_iqs_5_valid              ), //o
    .base_sub_iqs_5_payload_cha_i (rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_i[15:0]), //o
    .base_sub_iqs_5_payload_cha_q (rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_q[15:0]), //o
    .base_sub_iqs_6_valid         (rfClockArea_cdma_despread_base_sub_iqs_6_valid              ), //o
    .base_sub_iqs_6_payload_cha_i (rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_i[15:0]), //o
    .base_sub_iqs_6_payload_cha_q (rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_q[15:0]), //o
    .base_sub_iqs_7_valid         (rfClockArea_cdma_despread_base_sub_iqs_7_valid              ), //o
    .base_sub_iqs_7_payload_cha_i (rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_i[15:0]), //o
    .base_sub_iqs_7_payload_cha_q (rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_q[15:0]), //o
    .rf_clk                       (rf_clk                                                      ), //i
    .rf_resetn                    (rf_resetn                                                   )  //i
  );
  FFSynchronizer fFSynchronizer_10 (
    .dataIn    (cdma_spread_bridge_clc   ), //i
    .dataOut   (fFSynchronizer_10_dataOut), //o
    .clk       (clk                      ), //i
    .reset     (reset                    ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer fFSynchronizer_11 (
    .dataIn    (_zz_dataIn               ), //i
    .dataOut   (fFSynchronizer_11_dataOut), //o
    .clk       (clk                      ), //i
    .reset     (reset                    ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_12 (
    .dataIn    (_zz_dataIn_1[2:0]             ), //i
    .dataOut   (fFSynchronizer_12_dataOut[2:0]), //o
    .clk       (clk                           ), //i
    .reset     (reset                         ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  FFSynchronizer_3 fFSynchronizer_13 (
    .dataIn    (_zz_dataIn_2[7:0]             ), //i
    .dataOut   (fFSynchronizer_13_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .reset     (reset                         ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  FFSynchronizer_2 fFSynchronizer_14 (
    .dataIn    (_zz_dataIn_3[2:0]             ), //i
    .dataOut   (fFSynchronizer_14_dataOut[2:0]), //o
    .clk       (clk                           ), //i
    .reset     (reset                         ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  assign mod_iq_ready = rfClockArea_cdma_despread_mod_iq_ready;
  assign base_sub_iqs_0_valid = rfClockArea_cdma_despread_base_sub_iqs_0_valid;
  assign base_sub_iqs_0_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_i;
  assign base_sub_iqs_0_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_0_payload_cha_q;
  assign base_sub_iqs_1_valid = rfClockArea_cdma_despread_base_sub_iqs_1_valid;
  assign base_sub_iqs_1_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_i;
  assign base_sub_iqs_1_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_1_payload_cha_q;
  assign base_sub_iqs_2_valid = rfClockArea_cdma_despread_base_sub_iqs_2_valid;
  assign base_sub_iqs_2_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_i;
  assign base_sub_iqs_2_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_2_payload_cha_q;
  assign base_sub_iqs_3_valid = rfClockArea_cdma_despread_base_sub_iqs_3_valid;
  assign base_sub_iqs_3_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_i;
  assign base_sub_iqs_3_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_3_payload_cha_q;
  assign base_sub_iqs_4_valid = rfClockArea_cdma_despread_base_sub_iqs_4_valid;
  assign base_sub_iqs_4_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_i;
  assign base_sub_iqs_4_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_4_payload_cha_q;
  assign base_sub_iqs_5_valid = rfClockArea_cdma_despread_base_sub_iqs_5_valid;
  assign base_sub_iqs_5_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_i;
  assign base_sub_iqs_5_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_5_payload_cha_q;
  assign base_sub_iqs_6_valid = rfClockArea_cdma_despread_base_sub_iqs_6_valid;
  assign base_sub_iqs_6_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_i;
  assign base_sub_iqs_6_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_6_payload_cha_q;
  assign base_sub_iqs_7_valid = rfClockArea_cdma_despread_base_sub_iqs_7_valid;
  assign base_sub_iqs_7_payload_cha_i = rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_i;
  assign base_sub_iqs_7_payload_cha_q = rfClockArea_cdma_despread_base_sub_iqs_7_payload_cha_q;
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
        readRsp_data[0 : 0] = cdma_spread_bridge_clc_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign cdma_spread_bridge_clc = cdma_spread_bridge_clc_driver;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      cdma_spread_bridge_clc_driver <= 1'b1;
      _zz_dataIn <= 1'b0;
      _zz_dataIn_1 <= 3'b000;
      _zz_dataIn_2 <= 8'h0;
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
            cdma_spread_bridge_clc_driver <= axil4Ctrl_wdata[0];
            _zz_dataIn <= axil4Ctrl_wdata[1];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            _zz_dataIn_1 <= axil4Ctrl_wdata[2 : 0];
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            _zz_dataIn_2 <= axil4Ctrl_wdata[7 : 0];
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
    case(axil4Ctrl_awaddr)
      8'h0c : begin
        if(writeOccur) begin
          _zz_dataIn_3 <= axil4Ctrl_wdata[2 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module AxiLite4CDMASpread (
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
  input               base_iq_valid,
  output              base_iq_ready,
  input      [15:0]   base_iq_payload_0_cha_i,
  input      [15:0]   base_iq_payload_0_cha_q,
  input      [15:0]   base_iq_payload_1_cha_i,
  input      [15:0]   base_iq_payload_1_cha_q,
  input      [15:0]   base_iq_payload_2_cha_i,
  input      [15:0]   base_iq_payload_2_cha_q,
  input      [15:0]   base_iq_payload_3_cha_i,
  input      [15:0]   base_iq_payload_3_cha_q,
  input      [15:0]   base_iq_payload_4_cha_i,
  input      [15:0]   base_iq_payload_4_cha_q,
  input      [15:0]   base_iq_payload_5_cha_i,
  input      [15:0]   base_iq_payload_5_cha_q,
  input      [15:0]   base_iq_payload_6_cha_i,
  input      [15:0]   base_iq_payload_6_cha_q,
  input      [15:0]   base_iq_payload_7_cha_i,
  input      [15:0]   base_iq_payload_7_cha_q,
  output              mod_iq_valid,
  output     [15:0]   mod_iq_payload_cha_i,
  output     [15:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               reset
);

  wire                rfClockArea_cdma_spread_base_iq_ready;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_0_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_1_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_2_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_3_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_4_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_5_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_6_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_q;
  wire                rfClockArea_cdma_spread_mod_sub_iqs_7_valid;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_q;
  wire                rfClockArea_cdma_code_sum_mod_iq_valid;
  wire       [15:0]   rfClockArea_cdma_code_sum_mod_iq_payload_cha_i;
  wire       [15:0]   rfClockArea_cdma_code_sum_mod_iq_payload_cha_q;
  wire                fFSynchronizer_10_dataOut;
  wire                fFSynchronizer_11_dataOut;
  wire       [2:0]    fFSynchronizer_12_dataOut;
  wire       [7:0]    fFSynchronizer_13_dataOut;
  wire       [2:0]    fFSynchronizer_14_dataOut;
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
  wire                cdma_spread_bridge_clc;
  reg                 cdma_spread_bridge_clc_driver;
  reg                 _zz_dataIn;
  reg        [2:0]    _zz_dataIn_1;
  reg        [7:0]    _zz_dataIn_2;
  reg        [2:0]    _zz_dataIn_3;

  CDMASpreading rfClockArea_cdma_spread (
    .w_en                        (fFSynchronizer_11_dataOut                                ), //i
    .w_addr                      (fFSynchronizer_12_dataOut[2:0]                           ), //i
    .w_data                      (fFSynchronizer_13_dataOut[7:0]                           ), //i
    .clc                         (fFSynchronizer_10_dataOut                                ), //i
    .cnt_limit                   (fFSynchronizer_14_dataOut[2:0]                           ), //i
    .base_iq_valid               (base_iq_valid                                            ), //i
    .base_iq_ready               (rfClockArea_cdma_spread_base_iq_ready                    ), //o
    .base_iq_payload_0_cha_i     (base_iq_payload_0_cha_i[15:0]                            ), //i
    .base_iq_payload_0_cha_q     (base_iq_payload_0_cha_q[15:0]                            ), //i
    .base_iq_payload_1_cha_i     (base_iq_payload_1_cha_i[15:0]                            ), //i
    .base_iq_payload_1_cha_q     (base_iq_payload_1_cha_q[15:0]                            ), //i
    .base_iq_payload_2_cha_i     (base_iq_payload_2_cha_i[15:0]                            ), //i
    .base_iq_payload_2_cha_q     (base_iq_payload_2_cha_q[15:0]                            ), //i
    .base_iq_payload_3_cha_i     (base_iq_payload_3_cha_i[15:0]                            ), //i
    .base_iq_payload_3_cha_q     (base_iq_payload_3_cha_q[15:0]                            ), //i
    .base_iq_payload_4_cha_i     (base_iq_payload_4_cha_i[15:0]                            ), //i
    .base_iq_payload_4_cha_q     (base_iq_payload_4_cha_q[15:0]                            ), //i
    .base_iq_payload_5_cha_i     (base_iq_payload_5_cha_i[15:0]                            ), //i
    .base_iq_payload_5_cha_q     (base_iq_payload_5_cha_q[15:0]                            ), //i
    .base_iq_payload_6_cha_i     (base_iq_payload_6_cha_i[15:0]                            ), //i
    .base_iq_payload_6_cha_q     (base_iq_payload_6_cha_q[15:0]                            ), //i
    .base_iq_payload_7_cha_i     (base_iq_payload_7_cha_i[15:0]                            ), //i
    .base_iq_payload_7_cha_q     (base_iq_payload_7_cha_q[15:0]                            ), //i
    .mod_sub_iqs_0_valid         (rfClockArea_cdma_spread_mod_sub_iqs_0_valid              ), //o
    .mod_sub_iqs_0_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_i[15:0]), //o
    .mod_sub_iqs_0_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_q[15:0]), //o
    .mod_sub_iqs_1_valid         (rfClockArea_cdma_spread_mod_sub_iqs_1_valid              ), //o
    .mod_sub_iqs_1_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_i[15:0]), //o
    .mod_sub_iqs_1_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_q[15:0]), //o
    .mod_sub_iqs_2_valid         (rfClockArea_cdma_spread_mod_sub_iqs_2_valid              ), //o
    .mod_sub_iqs_2_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_i[15:0]), //o
    .mod_sub_iqs_2_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_q[15:0]), //o
    .mod_sub_iqs_3_valid         (rfClockArea_cdma_spread_mod_sub_iqs_3_valid              ), //o
    .mod_sub_iqs_3_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_i[15:0]), //o
    .mod_sub_iqs_3_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_q[15:0]), //o
    .mod_sub_iqs_4_valid         (rfClockArea_cdma_spread_mod_sub_iqs_4_valid              ), //o
    .mod_sub_iqs_4_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_i[15:0]), //o
    .mod_sub_iqs_4_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_q[15:0]), //o
    .mod_sub_iqs_5_valid         (rfClockArea_cdma_spread_mod_sub_iqs_5_valid              ), //o
    .mod_sub_iqs_5_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_i[15:0]), //o
    .mod_sub_iqs_5_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_q[15:0]), //o
    .mod_sub_iqs_6_valid         (rfClockArea_cdma_spread_mod_sub_iqs_6_valid              ), //o
    .mod_sub_iqs_6_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_i[15:0]), //o
    .mod_sub_iqs_6_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_q[15:0]), //o
    .mod_sub_iqs_7_valid         (rfClockArea_cdma_spread_mod_sub_iqs_7_valid              ), //o
    .mod_sub_iqs_7_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_i[15:0]), //o
    .mod_sub_iqs_7_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_q[15:0]), //o
    .rf_clk                      (rf_clk                                                   ), //i
    .rf_resetn                   (rf_resetn                                                )  //i
  );
  CodeCompose rfClockArea_cdma_code_sum (
    .mod_sub_iqs_0_valid         (rfClockArea_cdma_spread_mod_sub_iqs_0_valid              ), //i
    .mod_sub_iqs_0_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_i[15:0]), //i
    .mod_sub_iqs_0_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_0_payload_cha_q[15:0]), //i
    .mod_sub_iqs_1_valid         (rfClockArea_cdma_spread_mod_sub_iqs_1_valid              ), //i
    .mod_sub_iqs_1_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_i[15:0]), //i
    .mod_sub_iqs_1_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_1_payload_cha_q[15:0]), //i
    .mod_sub_iqs_2_valid         (rfClockArea_cdma_spread_mod_sub_iqs_2_valid              ), //i
    .mod_sub_iqs_2_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_i[15:0]), //i
    .mod_sub_iqs_2_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_2_payload_cha_q[15:0]), //i
    .mod_sub_iqs_3_valid         (rfClockArea_cdma_spread_mod_sub_iqs_3_valid              ), //i
    .mod_sub_iqs_3_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_i[15:0]), //i
    .mod_sub_iqs_3_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_3_payload_cha_q[15:0]), //i
    .mod_sub_iqs_4_valid         (rfClockArea_cdma_spread_mod_sub_iqs_4_valid              ), //i
    .mod_sub_iqs_4_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_i[15:0]), //i
    .mod_sub_iqs_4_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_4_payload_cha_q[15:0]), //i
    .mod_sub_iqs_5_valid         (rfClockArea_cdma_spread_mod_sub_iqs_5_valid              ), //i
    .mod_sub_iqs_5_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_i[15:0]), //i
    .mod_sub_iqs_5_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_5_payload_cha_q[15:0]), //i
    .mod_sub_iqs_6_valid         (rfClockArea_cdma_spread_mod_sub_iqs_6_valid              ), //i
    .mod_sub_iqs_6_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_i[15:0]), //i
    .mod_sub_iqs_6_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_6_payload_cha_q[15:0]), //i
    .mod_sub_iqs_7_valid         (rfClockArea_cdma_spread_mod_sub_iqs_7_valid              ), //i
    .mod_sub_iqs_7_payload_cha_i (rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_i[15:0]), //i
    .mod_sub_iqs_7_payload_cha_q (rfClockArea_cdma_spread_mod_sub_iqs_7_payload_cha_q[15:0]), //i
    .mod_iq_valid                (rfClockArea_cdma_code_sum_mod_iq_valid                   ), //o
    .mod_iq_payload_cha_i        (rfClockArea_cdma_code_sum_mod_iq_payload_cha_i[15:0]     ), //o
    .mod_iq_payload_cha_q        (rfClockArea_cdma_code_sum_mod_iq_payload_cha_q[15:0]     ), //o
    .rf_clk                      (rf_clk                                                   ), //i
    .rf_resetn                   (rf_resetn                                                )  //i
  );
  FFSynchronizer fFSynchronizer_10 (
    .dataIn    (cdma_spread_bridge_clc   ), //i
    .dataOut   (fFSynchronizer_10_dataOut), //o
    .clk       (clk                      ), //i
    .reset     (reset                    ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer fFSynchronizer_11 (
    .dataIn    (_zz_dataIn               ), //i
    .dataOut   (fFSynchronizer_11_dataOut), //o
    .clk       (clk                      ), //i
    .reset     (reset                    ), //i
    .rf_clk    (rf_clk                   ), //i
    .rf_resetn (rf_resetn                )  //i
  );
  FFSynchronizer_2 fFSynchronizer_12 (
    .dataIn    (_zz_dataIn_1[2:0]             ), //i
    .dataOut   (fFSynchronizer_12_dataOut[2:0]), //o
    .clk       (clk                           ), //i
    .reset     (reset                         ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  FFSynchronizer_3 fFSynchronizer_13 (
    .dataIn    (_zz_dataIn_2[7:0]             ), //i
    .dataOut   (fFSynchronizer_13_dataOut[7:0]), //o
    .clk       (clk                           ), //i
    .reset     (reset                         ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  FFSynchronizer_2 fFSynchronizer_14 (
    .dataIn    (_zz_dataIn_3[2:0]             ), //i
    .dataOut   (fFSynchronizer_14_dataOut[2:0]), //o
    .clk       (clk                           ), //i
    .reset     (reset                         ), //i
    .rf_clk    (rf_clk                        ), //i
    .rf_resetn (rf_resetn                     )  //i
  );
  assign base_iq_ready = rfClockArea_cdma_spread_base_iq_ready;
  assign mod_iq_valid = rfClockArea_cdma_code_sum_mod_iq_valid;
  assign mod_iq_payload_cha_i = rfClockArea_cdma_code_sum_mod_iq_payload_cha_i;
  assign mod_iq_payload_cha_q = rfClockArea_cdma_code_sum_mod_iq_payload_cha_q;
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
        readRsp_data[0 : 0] = cdma_spread_bridge_clc_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign cdma_spread_bridge_clc = cdma_spread_bridge_clc_driver;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      cdma_spread_bridge_clc_driver <= 1'b1;
      _zz_dataIn <= 1'b0;
      _zz_dataIn_1 <= 3'b000;
      _zz_dataIn_2 <= 8'h0;
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
            cdma_spread_bridge_clc_driver <= axil4Ctrl_wdata[0];
            _zz_dataIn <= axil4Ctrl_wdata[1];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            _zz_dataIn_1 <= axil4Ctrl_wdata[2 : 0];
          end
        end
        8'h08 : begin
          if(writeOccur) begin
            _zz_dataIn_2 <= axil4Ctrl_wdata[7 : 0];
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
    case(axil4Ctrl_awaddr)
      8'h0c : begin
        if(writeOccur) begin
          _zz_dataIn_3 <= axil4Ctrl_wdata[2 : 0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer_3 replaced by FFSynchronizer_3

//FFSynchronizer_2 replaced by FFSynchronizer_2

//FFSynchronizer replaced by FFSynchronizer

//FFSynchronizer replaced by FFSynchronizer

module CDMADespreading (
  input               w_en,
  input      [2:0]    w_addr,
  input      [7:0]    w_data,
  input               clc,
  input      [2:0]    cnt_limit,
  input               mod_iq_valid,
  output              mod_iq_ready,
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  output              base_sub_iqs_0_valid,
  output     [15:0]   base_sub_iqs_0_payload_cha_i,
  output     [15:0]   base_sub_iqs_0_payload_cha_q,
  output              base_sub_iqs_1_valid,
  output     [15:0]   base_sub_iqs_1_payload_cha_i,
  output     [15:0]   base_sub_iqs_1_payload_cha_q,
  output              base_sub_iqs_2_valid,
  output     [15:0]   base_sub_iqs_2_payload_cha_i,
  output     [15:0]   base_sub_iqs_2_payload_cha_q,
  output              base_sub_iqs_3_valid,
  output     [15:0]   base_sub_iqs_3_payload_cha_i,
  output     [15:0]   base_sub_iqs_3_payload_cha_q,
  output              base_sub_iqs_4_valid,
  output     [15:0]   base_sub_iqs_4_payload_cha_i,
  output     [15:0]   base_sub_iqs_4_payload_cha_q,
  output              base_sub_iqs_5_valid,
  output     [15:0]   base_sub_iqs_5_payload_cha_i,
  output     [15:0]   base_sub_iqs_5_payload_cha_q,
  output              base_sub_iqs_6_valid,
  output     [15:0]   base_sub_iqs_6_payload_cha_i,
  output     [15:0]   base_sub_iqs_6_payload_cha_q,
  output              base_sub_iqs_7_valid,
  output     [15:0]   base_sub_iqs_7_payload_cha_i,
  output     [15:0]   base_sub_iqs_7_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);

  wire       [7:0]    computeUnit_16_code;
  wire       [7:0]    computeUnit_17_code;
  wire       [7:0]    computeUnit_18_code;
  wire       [7:0]    computeUnit_19_code;
  wire       [7:0]    computeUnit_20_code;
  wire       [7:0]    computeUnit_21_code;
  wire       [7:0]    computeUnit_22_code;
  wire       [7:0]    computeUnit_23_code;
  wire       [7:0]    _zz_code_map_port0;
  wire       [7:0]    _zz_code_map_port1;
  wire       [7:0]    _zz_code_map_port2;
  wire       [7:0]    _zz_code_map_port3;
  wire       [7:0]    _zz_code_map_port4;
  wire       [7:0]    _zz_code_map_port5;
  wire       [7:0]    _zz_code_map_port6;
  wire       [7:0]    _zz_code_map_port7;
  wire                computeUnit_16_base_iq_valid;
  wire       [15:0]   computeUnit_16_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_16_base_iq_payload_cha_q;
  wire                computeUnit_17_base_iq_valid;
  wire       [15:0]   computeUnit_17_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_17_base_iq_payload_cha_q;
  wire                computeUnit_18_base_iq_valid;
  wire       [15:0]   computeUnit_18_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_18_base_iq_payload_cha_q;
  wire                computeUnit_19_base_iq_valid;
  wire       [15:0]   computeUnit_19_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_19_base_iq_payload_cha_q;
  wire                computeUnit_20_base_iq_valid;
  wire       [15:0]   computeUnit_20_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_20_base_iq_payload_cha_q;
  wire                computeUnit_21_base_iq_valid;
  wire       [15:0]   computeUnit_21_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_21_base_iq_payload_cha_q;
  wire                computeUnit_22_base_iq_valid;
  wire       [15:0]   computeUnit_22_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_22_base_iq_payload_cha_q;
  wire                computeUnit_23_base_iq_valid;
  wire       [15:0]   computeUnit_23_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_23_base_iq_payload_cha_q;
  wire       [2:0]    _zz_code_map_port;
  wire       [2:0]    _zz_code;
  wire       [2:0]    _zz_code_map_port_1;
  wire       [2:0]    _zz_code_1;
  wire       [2:0]    _zz_code_map_port_2;
  wire       [2:0]    _zz_code_2;
  wire       [2:0]    _zz_code_map_port_3;
  wire       [2:0]    _zz_code_3;
  wire       [2:0]    _zz_code_map_port_4;
  wire       [2:0]    _zz_code_4;
  wire       [2:0]    _zz_code_map_port_5;
  wire       [2:0]    _zz_code_5;
  wire       [2:0]    _zz_code_map_port_6;
  wire       [2:0]    _zz_code_6;
  wire       [2:0]    _zz_code_map_port_7;
  wire       [2:0]    _zz_code_7;
  reg                 _zz_1;
  (* ram_style = "distributed" *) reg [7:0] code_map [0:7];

  assign _zz_code = 3'b000;
  assign _zz_code_1 = 3'b001;
  assign _zz_code_2 = 3'b010;
  assign _zz_code_3 = 3'b011;
  assign _zz_code_4 = 3'b100;
  assign _zz_code_5 = 3'b101;
  assign _zz_code_6 = 3'b110;
  assign _zz_code_7 = 3'b111;
  initial begin
    $readmemb("/mnt/BackUp/IdeaProjects/MAGI_PROJECT/tmp/job_1/CombCDMABench.v_toplevel_cdma_despread_rfClockArea_cdma_despread_code_map.bin",code_map);
  end
  assign _zz_code_map_port0 = code_map[_zz_code];
  assign _zz_code_map_port1 = code_map[_zz_code_1];
  assign _zz_code_map_port2 = code_map[_zz_code_2];
  assign _zz_code_map_port3 = code_map[_zz_code_3];
  assign _zz_code_map_port4 = code_map[_zz_code_4];
  assign _zz_code_map_port5 = code_map[_zz_code_5];
  assign _zz_code_map_port6 = code_map[_zz_code_6];
  assign _zz_code_map_port7 = code_map[_zz_code_7];
  always @(posedge rf_clk) begin
    if(_zz_1) begin
      code_map[w_addr] <= w_data;
    end
  end

  ComputeUnit_8 computeUnit_16 (
    .code                  (computeUnit_16_code[7:0]                  ), //i
    .mod_iq_valid          (mod_iq_valid                              ), //i
    .mod_iq_payload_cha_i  (mod_iq_payload_cha_i[15:0]                ), //i
    .mod_iq_payload_cha_q  (mod_iq_payload_cha_q[15:0]                ), //i
    .base_iq_valid         (computeUnit_16_base_iq_valid              ), //o
    .base_iq_payload_cha_i (computeUnit_16_base_iq_payload_cha_i[15:0]), //o
    .base_iq_payload_cha_q (computeUnit_16_base_iq_payload_cha_q[15:0]), //o
    .clc                   (clc                                       ), //i
    .cnt_limit             (cnt_limit[2:0]                            ), //i
    .rf_clk                (rf_clk                                    ), //i
    .rf_resetn             (rf_resetn                                 )  //i
  );
  ComputeUnit_8 computeUnit_17 (
    .code                  (computeUnit_17_code[7:0]                  ), //i
    .mod_iq_valid          (mod_iq_valid                              ), //i
    .mod_iq_payload_cha_i  (mod_iq_payload_cha_i[15:0]                ), //i
    .mod_iq_payload_cha_q  (mod_iq_payload_cha_q[15:0]                ), //i
    .base_iq_valid         (computeUnit_17_base_iq_valid              ), //o
    .base_iq_payload_cha_i (computeUnit_17_base_iq_payload_cha_i[15:0]), //o
    .base_iq_payload_cha_q (computeUnit_17_base_iq_payload_cha_q[15:0]), //o
    .clc                   (clc                                       ), //i
    .cnt_limit             (cnt_limit[2:0]                            ), //i
    .rf_clk                (rf_clk                                    ), //i
    .rf_resetn             (rf_resetn                                 )  //i
  );
  ComputeUnit_8 computeUnit_18 (
    .code                  (computeUnit_18_code[7:0]                  ), //i
    .mod_iq_valid          (mod_iq_valid                              ), //i
    .mod_iq_payload_cha_i  (mod_iq_payload_cha_i[15:0]                ), //i
    .mod_iq_payload_cha_q  (mod_iq_payload_cha_q[15:0]                ), //i
    .base_iq_valid         (computeUnit_18_base_iq_valid              ), //o
    .base_iq_payload_cha_i (computeUnit_18_base_iq_payload_cha_i[15:0]), //o
    .base_iq_payload_cha_q (computeUnit_18_base_iq_payload_cha_q[15:0]), //o
    .clc                   (clc                                       ), //i
    .cnt_limit             (cnt_limit[2:0]                            ), //i
    .rf_clk                (rf_clk                                    ), //i
    .rf_resetn             (rf_resetn                                 )  //i
  );
  ComputeUnit_8 computeUnit_19 (
    .code                  (computeUnit_19_code[7:0]                  ), //i
    .mod_iq_valid          (mod_iq_valid                              ), //i
    .mod_iq_payload_cha_i  (mod_iq_payload_cha_i[15:0]                ), //i
    .mod_iq_payload_cha_q  (mod_iq_payload_cha_q[15:0]                ), //i
    .base_iq_valid         (computeUnit_19_base_iq_valid              ), //o
    .base_iq_payload_cha_i (computeUnit_19_base_iq_payload_cha_i[15:0]), //o
    .base_iq_payload_cha_q (computeUnit_19_base_iq_payload_cha_q[15:0]), //o
    .clc                   (clc                                       ), //i
    .cnt_limit             (cnt_limit[2:0]                            ), //i
    .rf_clk                (rf_clk                                    ), //i
    .rf_resetn             (rf_resetn                                 )  //i
  );
  ComputeUnit_8 computeUnit_20 (
    .code                  (computeUnit_20_code[7:0]                  ), //i
    .mod_iq_valid          (mod_iq_valid                              ), //i
    .mod_iq_payload_cha_i  (mod_iq_payload_cha_i[15:0]                ), //i
    .mod_iq_payload_cha_q  (mod_iq_payload_cha_q[15:0]                ), //i
    .base_iq_valid         (computeUnit_20_base_iq_valid              ), //o
    .base_iq_payload_cha_i (computeUnit_20_base_iq_payload_cha_i[15:0]), //o
    .base_iq_payload_cha_q (computeUnit_20_base_iq_payload_cha_q[15:0]), //o
    .clc                   (clc                                       ), //i
    .cnt_limit             (cnt_limit[2:0]                            ), //i
    .rf_clk                (rf_clk                                    ), //i
    .rf_resetn             (rf_resetn                                 )  //i
  );
  ComputeUnit_8 computeUnit_21 (
    .code                  (computeUnit_21_code[7:0]                  ), //i
    .mod_iq_valid          (mod_iq_valid                              ), //i
    .mod_iq_payload_cha_i  (mod_iq_payload_cha_i[15:0]                ), //i
    .mod_iq_payload_cha_q  (mod_iq_payload_cha_q[15:0]                ), //i
    .base_iq_valid         (computeUnit_21_base_iq_valid              ), //o
    .base_iq_payload_cha_i (computeUnit_21_base_iq_payload_cha_i[15:0]), //o
    .base_iq_payload_cha_q (computeUnit_21_base_iq_payload_cha_q[15:0]), //o
    .clc                   (clc                                       ), //i
    .cnt_limit             (cnt_limit[2:0]                            ), //i
    .rf_clk                (rf_clk                                    ), //i
    .rf_resetn             (rf_resetn                                 )  //i
  );
  ComputeUnit_8 computeUnit_22 (
    .code                  (computeUnit_22_code[7:0]                  ), //i
    .mod_iq_valid          (mod_iq_valid                              ), //i
    .mod_iq_payload_cha_i  (mod_iq_payload_cha_i[15:0]                ), //i
    .mod_iq_payload_cha_q  (mod_iq_payload_cha_q[15:0]                ), //i
    .base_iq_valid         (computeUnit_22_base_iq_valid              ), //o
    .base_iq_payload_cha_i (computeUnit_22_base_iq_payload_cha_i[15:0]), //o
    .base_iq_payload_cha_q (computeUnit_22_base_iq_payload_cha_q[15:0]), //o
    .clc                   (clc                                       ), //i
    .cnt_limit             (cnt_limit[2:0]                            ), //i
    .rf_clk                (rf_clk                                    ), //i
    .rf_resetn             (rf_resetn                                 )  //i
  );
  ComputeUnit_8 computeUnit_23 (
    .code                  (computeUnit_23_code[7:0]                  ), //i
    .mod_iq_valid          (mod_iq_valid                              ), //i
    .mod_iq_payload_cha_i  (mod_iq_payload_cha_i[15:0]                ), //i
    .mod_iq_payload_cha_q  (mod_iq_payload_cha_q[15:0]                ), //i
    .base_iq_valid         (computeUnit_23_base_iq_valid              ), //o
    .base_iq_payload_cha_i (computeUnit_23_base_iq_payload_cha_i[15:0]), //o
    .base_iq_payload_cha_q (computeUnit_23_base_iq_payload_cha_q[15:0]), //o
    .clc                   (clc                                       ), //i
    .cnt_limit             (cnt_limit[2:0]                            ), //i
    .rf_clk                (rf_clk                                    ), //i
    .rf_resetn             (rf_resetn                                 )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(w_en) begin
      _zz_1 = 1'b1;
    end
  end

  assign computeUnit_16_code = _zz_code_map_port0;
  assign base_sub_iqs_0_valid = computeUnit_16_base_iq_valid;
  assign base_sub_iqs_0_payload_cha_i = computeUnit_16_base_iq_payload_cha_i;
  assign base_sub_iqs_0_payload_cha_q = computeUnit_16_base_iq_payload_cha_q;
  assign computeUnit_17_code = _zz_code_map_port1;
  assign base_sub_iqs_1_valid = computeUnit_17_base_iq_valid;
  assign base_sub_iqs_1_payload_cha_i = computeUnit_17_base_iq_payload_cha_i;
  assign base_sub_iqs_1_payload_cha_q = computeUnit_17_base_iq_payload_cha_q;
  assign computeUnit_18_code = _zz_code_map_port2;
  assign base_sub_iqs_2_valid = computeUnit_18_base_iq_valid;
  assign base_sub_iqs_2_payload_cha_i = computeUnit_18_base_iq_payload_cha_i;
  assign base_sub_iqs_2_payload_cha_q = computeUnit_18_base_iq_payload_cha_q;
  assign computeUnit_19_code = _zz_code_map_port3;
  assign base_sub_iqs_3_valid = computeUnit_19_base_iq_valid;
  assign base_sub_iqs_3_payload_cha_i = computeUnit_19_base_iq_payload_cha_i;
  assign base_sub_iqs_3_payload_cha_q = computeUnit_19_base_iq_payload_cha_q;
  assign computeUnit_20_code = _zz_code_map_port4;
  assign base_sub_iqs_4_valid = computeUnit_20_base_iq_valid;
  assign base_sub_iqs_4_payload_cha_i = computeUnit_20_base_iq_payload_cha_i;
  assign base_sub_iqs_4_payload_cha_q = computeUnit_20_base_iq_payload_cha_q;
  assign computeUnit_21_code = _zz_code_map_port5;
  assign base_sub_iqs_5_valid = computeUnit_21_base_iq_valid;
  assign base_sub_iqs_5_payload_cha_i = computeUnit_21_base_iq_payload_cha_i;
  assign base_sub_iqs_5_payload_cha_q = computeUnit_21_base_iq_payload_cha_q;
  assign computeUnit_22_code = _zz_code_map_port6;
  assign base_sub_iqs_6_valid = computeUnit_22_base_iq_valid;
  assign base_sub_iqs_6_payload_cha_i = computeUnit_22_base_iq_payload_cha_i;
  assign base_sub_iqs_6_payload_cha_q = computeUnit_22_base_iq_payload_cha_q;
  assign computeUnit_23_code = _zz_code_map_port7;
  assign base_sub_iqs_7_valid = computeUnit_23_base_iq_valid;
  assign base_sub_iqs_7_payload_cha_i = computeUnit_23_base_iq_payload_cha_i;
  assign base_sub_iqs_7_payload_cha_q = computeUnit_23_base_iq_payload_cha_q;
  assign mod_iq_ready = (! clc);

endmodule

//FFSynchronizer_2 replaced by FFSynchronizer_2

module FFSynchronizer_3 (
  input      [7:0]    dataIn,
  output     [7:0]    dataOut,
  input               clk,
  input               reset,
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

module FFSynchronizer_2 (
  input      [2:0]    dataIn,
  output     [2:0]    dataOut,
  input               clk,
  input               reset,
  input               rf_clk,
  input               rf_resetn
);

  reg        [2:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [2:0]    area_clkO_buf0;
  reg        [2:0]    area_clkO_buf1;

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

module FFSynchronizer (
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

module CodeCompose (
  input               mod_sub_iqs_0_valid,
  input      [15:0]   mod_sub_iqs_0_payload_cha_i,
  input      [15:0]   mod_sub_iqs_0_payload_cha_q,
  input               mod_sub_iqs_1_valid,
  input      [15:0]   mod_sub_iqs_1_payload_cha_i,
  input      [15:0]   mod_sub_iqs_1_payload_cha_q,
  input               mod_sub_iqs_2_valid,
  input      [15:0]   mod_sub_iqs_2_payload_cha_i,
  input      [15:0]   mod_sub_iqs_2_payload_cha_q,
  input               mod_sub_iqs_3_valid,
  input      [15:0]   mod_sub_iqs_3_payload_cha_i,
  input      [15:0]   mod_sub_iqs_3_payload_cha_q,
  input               mod_sub_iqs_4_valid,
  input      [15:0]   mod_sub_iqs_4_payload_cha_i,
  input      [15:0]   mod_sub_iqs_4_payload_cha_q,
  input               mod_sub_iqs_5_valid,
  input      [15:0]   mod_sub_iqs_5_payload_cha_i,
  input      [15:0]   mod_sub_iqs_5_payload_cha_q,
  input               mod_sub_iqs_6_valid,
  input      [15:0]   mod_sub_iqs_6_payload_cha_i,
  input      [15:0]   mod_sub_iqs_6_payload_cha_q,
  input               mod_sub_iqs_7_valid,
  input      [15:0]   mod_sub_iqs_7_payload_cha_i,
  input      [15:0]   mod_sub_iqs_7_payload_cha_q,
  output              mod_iq_valid,
  output     [15:0]   mod_iq_payload_cha_i,
  output     [15:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);

  wire       [12:0]   _zz_sub_i_data_vec_0;
  wire       [12:0]   _zz_sub_q_data_vec_0;
  wire       [12:0]   _zz_sub_i_data_vec_1;
  wire       [12:0]   _zz_sub_q_data_vec_1;
  wire       [12:0]   _zz_sub_i_data_vec_2;
  wire       [12:0]   _zz_sub_q_data_vec_2;
  wire       [12:0]   _zz_sub_i_data_vec_3;
  wire       [12:0]   _zz_sub_q_data_vec_3;
  wire       [12:0]   _zz_sub_i_data_vec_4;
  wire       [12:0]   _zz_sub_q_data_vec_4;
  wire       [12:0]   _zz_sub_i_data_vec_5;
  wire       [12:0]   _zz_sub_q_data_vec_5;
  wire       [12:0]   _zz_sub_i_data_vec_6;
  wire       [12:0]   _zz_sub_q_data_vec_6;
  wire       [12:0]   _zz_sub_i_data_vec_7;
  wire       [12:0]   _zz_sub_q_data_vec_7;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_1;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_1_1;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_i_1_2;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_1;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_1_1;
  wire       [15:0]   _zz__zz_mod_iq_payload_cha_q_1_2;
  wire       [15:0]   sub_i_data_vec_0;
  wire       [15:0]   sub_i_data_vec_1;
  wire       [15:0]   sub_i_data_vec_2;
  wire       [15:0]   sub_i_data_vec_3;
  wire       [15:0]   sub_i_data_vec_4;
  wire       [15:0]   sub_i_data_vec_5;
  wire       [15:0]   sub_i_data_vec_6;
  wire       [15:0]   sub_i_data_vec_7;
  wire       [15:0]   sub_q_data_vec_0;
  wire       [15:0]   sub_q_data_vec_1;
  wire       [15:0]   sub_q_data_vec_2;
  wire       [15:0]   sub_q_data_vec_3;
  wire       [15:0]   sub_q_data_vec_4;
  wire       [15:0]   sub_q_data_vec_5;
  wire       [15:0]   sub_q_data_vec_6;
  wire       [15:0]   sub_q_data_vec_7;
  wire                sub_iqs_valid_vec_0;
  wire                sub_iqs_valid_vec_1;
  wire                sub_iqs_valid_vec_2;
  wire                sub_iqs_valid_vec_3;
  wire                sub_iqs_valid_vec_4;
  wire                sub_iqs_valid_vec_5;
  wire                sub_iqs_valid_vec_6;
  wire                sub_iqs_valid_vec_7;
  reg        [15:0]   _zz_mod_iq_payload_cha_i;
  reg        [15:0]   _zz_mod_iq_payload_cha_i_1;
  reg        [15:0]   _zz_mod_iq_payload_cha_q;
  reg        [15:0]   _zz_mod_iq_payload_cha_q_1;
  reg                 _zz_mod_iq_valid;
  reg                 _zz_mod_iq_valid_1;

  assign _zz_sub_i_data_vec_0 = (mod_sub_iqs_0_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_0 = (mod_sub_iqs_0_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_1 = (mod_sub_iqs_1_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_1 = (mod_sub_iqs_1_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_2 = (mod_sub_iqs_2_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_2 = (mod_sub_iqs_2_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_3 = (mod_sub_iqs_3_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_3 = (mod_sub_iqs_3_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_4 = (mod_sub_iqs_4_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_4 = (mod_sub_iqs_4_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_5 = (mod_sub_iqs_5_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_5 = (mod_sub_iqs_5_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_6 = (mod_sub_iqs_6_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_6 = (mod_sub_iqs_6_payload_cha_q >>> 3);
  assign _zz_sub_i_data_vec_7 = (mod_sub_iqs_7_payload_cha_i >>> 3);
  assign _zz_sub_q_data_vec_7 = (mod_sub_iqs_7_payload_cha_q >>> 3);
  assign _zz__zz_mod_iq_payload_cha_i = ($signed(sub_i_data_vec_0) + $signed(sub_i_data_vec_1));
  assign _zz__zz_mod_iq_payload_cha_i_1 = ($signed(sub_i_data_vec_2) + $signed(sub_i_data_vec_3));
  assign _zz__zz_mod_iq_payload_cha_i_1_1 = ($signed(sub_i_data_vec_4) + $signed(sub_i_data_vec_5));
  assign _zz__zz_mod_iq_payload_cha_i_1_2 = ($signed(sub_i_data_vec_6) + $signed(sub_i_data_vec_7));
  assign _zz__zz_mod_iq_payload_cha_q = ($signed(sub_q_data_vec_0) + $signed(sub_q_data_vec_1));
  assign _zz__zz_mod_iq_payload_cha_q_1 = ($signed(sub_q_data_vec_2) + $signed(sub_q_data_vec_3));
  assign _zz__zz_mod_iq_payload_cha_q_1_1 = ($signed(sub_q_data_vec_4) + $signed(sub_q_data_vec_5));
  assign _zz__zz_mod_iq_payload_cha_q_1_2 = ($signed(sub_q_data_vec_6) + $signed(sub_q_data_vec_7));
  assign sub_i_data_vec_0 = {{3{_zz_sub_i_data_vec_0[12]}}, _zz_sub_i_data_vec_0};
  assign sub_q_data_vec_0 = {{3{_zz_sub_q_data_vec_0[12]}}, _zz_sub_q_data_vec_0};
  assign sub_iqs_valid_vec_0 = mod_sub_iqs_0_valid;
  assign sub_i_data_vec_1 = {{3{_zz_sub_i_data_vec_1[12]}}, _zz_sub_i_data_vec_1};
  assign sub_q_data_vec_1 = {{3{_zz_sub_q_data_vec_1[12]}}, _zz_sub_q_data_vec_1};
  assign sub_iqs_valid_vec_1 = mod_sub_iqs_1_valid;
  assign sub_i_data_vec_2 = {{3{_zz_sub_i_data_vec_2[12]}}, _zz_sub_i_data_vec_2};
  assign sub_q_data_vec_2 = {{3{_zz_sub_q_data_vec_2[12]}}, _zz_sub_q_data_vec_2};
  assign sub_iqs_valid_vec_2 = mod_sub_iqs_2_valid;
  assign sub_i_data_vec_3 = {{3{_zz_sub_i_data_vec_3[12]}}, _zz_sub_i_data_vec_3};
  assign sub_q_data_vec_3 = {{3{_zz_sub_q_data_vec_3[12]}}, _zz_sub_q_data_vec_3};
  assign sub_iqs_valid_vec_3 = mod_sub_iqs_3_valid;
  assign sub_i_data_vec_4 = {{3{_zz_sub_i_data_vec_4[12]}}, _zz_sub_i_data_vec_4};
  assign sub_q_data_vec_4 = {{3{_zz_sub_q_data_vec_4[12]}}, _zz_sub_q_data_vec_4};
  assign sub_iqs_valid_vec_4 = mod_sub_iqs_4_valid;
  assign sub_i_data_vec_5 = {{3{_zz_sub_i_data_vec_5[12]}}, _zz_sub_i_data_vec_5};
  assign sub_q_data_vec_5 = {{3{_zz_sub_q_data_vec_5[12]}}, _zz_sub_q_data_vec_5};
  assign sub_iqs_valid_vec_5 = mod_sub_iqs_5_valid;
  assign sub_i_data_vec_6 = {{3{_zz_sub_i_data_vec_6[12]}}, _zz_sub_i_data_vec_6};
  assign sub_q_data_vec_6 = {{3{_zz_sub_q_data_vec_6[12]}}, _zz_sub_q_data_vec_6};
  assign sub_iqs_valid_vec_6 = mod_sub_iqs_6_valid;
  assign sub_i_data_vec_7 = {{3{_zz_sub_i_data_vec_7[12]}}, _zz_sub_i_data_vec_7};
  assign sub_q_data_vec_7 = {{3{_zz_sub_q_data_vec_7[12]}}, _zz_sub_q_data_vec_7};
  assign sub_iqs_valid_vec_7 = mod_sub_iqs_7_valid;
  assign mod_iq_payload_cha_i = ($signed(_zz_mod_iq_payload_cha_i) + $signed(_zz_mod_iq_payload_cha_i_1));
  assign mod_iq_payload_cha_q = ($signed(_zz_mod_iq_payload_cha_q) + $signed(_zz_mod_iq_payload_cha_q_1));
  assign mod_iq_valid = (_zz_mod_iq_valid && _zz_mod_iq_valid_1);
  always @(posedge rf_clk) begin
    _zz_mod_iq_payload_cha_i <= ($signed(_zz__zz_mod_iq_payload_cha_i) + $signed(_zz__zz_mod_iq_payload_cha_i_1));
    _zz_mod_iq_payload_cha_i_1 <= ($signed(_zz__zz_mod_iq_payload_cha_i_1_1) + $signed(_zz__zz_mod_iq_payload_cha_i_1_2));
    _zz_mod_iq_payload_cha_q <= ($signed(_zz__zz_mod_iq_payload_cha_q) + $signed(_zz__zz_mod_iq_payload_cha_q_1));
    _zz_mod_iq_payload_cha_q_1 <= ($signed(_zz__zz_mod_iq_payload_cha_q_1_1) + $signed(_zz__zz_mod_iq_payload_cha_q_1_2));
    _zz_mod_iq_valid <= ((sub_iqs_valid_vec_0 && sub_iqs_valid_vec_1) && (sub_iqs_valid_vec_2 && sub_iqs_valid_vec_3));
    _zz_mod_iq_valid_1 <= ((sub_iqs_valid_vec_4 && sub_iqs_valid_vec_5) && (sub_iqs_valid_vec_6 && sub_iqs_valid_vec_7));
  end


endmodule

module CDMASpreading (
  input               w_en,
  input      [2:0]    w_addr,
  input      [7:0]    w_data,
  input               clc,
  input      [2:0]    cnt_limit,
  input               base_iq_valid,
  output              base_iq_ready,
  input      [15:0]   base_iq_payload_0_cha_i,
  input      [15:0]   base_iq_payload_0_cha_q,
  input      [15:0]   base_iq_payload_1_cha_i,
  input      [15:0]   base_iq_payload_1_cha_q,
  input      [15:0]   base_iq_payload_2_cha_i,
  input      [15:0]   base_iq_payload_2_cha_q,
  input      [15:0]   base_iq_payload_3_cha_i,
  input      [15:0]   base_iq_payload_3_cha_q,
  input      [15:0]   base_iq_payload_4_cha_i,
  input      [15:0]   base_iq_payload_4_cha_q,
  input      [15:0]   base_iq_payload_5_cha_i,
  input      [15:0]   base_iq_payload_5_cha_q,
  input      [15:0]   base_iq_payload_6_cha_i,
  input      [15:0]   base_iq_payload_6_cha_q,
  input      [15:0]   base_iq_payload_7_cha_i,
  input      [15:0]   base_iq_payload_7_cha_q,
  output              mod_sub_iqs_0_valid,
  output     [15:0]   mod_sub_iqs_0_payload_cha_i,
  output     [15:0]   mod_sub_iqs_0_payload_cha_q,
  output              mod_sub_iqs_1_valid,
  output     [15:0]   mod_sub_iqs_1_payload_cha_i,
  output     [15:0]   mod_sub_iqs_1_payload_cha_q,
  output              mod_sub_iqs_2_valid,
  output     [15:0]   mod_sub_iqs_2_payload_cha_i,
  output     [15:0]   mod_sub_iqs_2_payload_cha_q,
  output              mod_sub_iqs_3_valid,
  output     [15:0]   mod_sub_iqs_3_payload_cha_i,
  output     [15:0]   mod_sub_iqs_3_payload_cha_q,
  output              mod_sub_iqs_4_valid,
  output     [15:0]   mod_sub_iqs_4_payload_cha_i,
  output     [15:0]   mod_sub_iqs_4_payload_cha_q,
  output              mod_sub_iqs_5_valid,
  output     [15:0]   mod_sub_iqs_5_payload_cha_i,
  output     [15:0]   mod_sub_iqs_5_payload_cha_q,
  output              mod_sub_iqs_6_valid,
  output     [15:0]   mod_sub_iqs_6_payload_cha_i,
  output     [15:0]   mod_sub_iqs_6_payload_cha_q,
  output              mod_sub_iqs_7_valid,
  output     [15:0]   mod_sub_iqs_7_payload_cha_i,
  output     [15:0]   mod_sub_iqs_7_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);

  wire       [7:0]    _zz_code_map_port0;
  wire       [7:0]    _zz_code_map_port1;
  wire       [7:0]    _zz_code_map_port2;
  wire       [7:0]    _zz_code_map_port3;
  wire       [7:0]    _zz_code_map_port4;
  wire       [7:0]    _zz_code_map_port5;
  wire       [7:0]    _zz_code_map_port6;
  wire       [7:0]    _zz_code_map_port7;
  wire                computeUnit_16_mod_iq_valid;
  wire       [15:0]   computeUnit_16_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_16_mod_iq_payload_cha_q;
  wire                computeUnit_17_mod_iq_valid;
  wire       [15:0]   computeUnit_17_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_17_mod_iq_payload_cha_q;
  wire                computeUnit_18_mod_iq_valid;
  wire       [15:0]   computeUnit_18_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_18_mod_iq_payload_cha_q;
  wire                computeUnit_19_mod_iq_valid;
  wire       [15:0]   computeUnit_19_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_19_mod_iq_payload_cha_q;
  wire                computeUnit_20_mod_iq_valid;
  wire       [15:0]   computeUnit_20_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_20_mod_iq_payload_cha_q;
  wire                computeUnit_21_mod_iq_valid;
  wire       [15:0]   computeUnit_21_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_21_mod_iq_payload_cha_q;
  wire                computeUnit_22_mod_iq_valid;
  wire       [15:0]   computeUnit_22_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_22_mod_iq_payload_cha_q;
  wire                computeUnit_23_mod_iq_valid;
  wire       [15:0]   computeUnit_23_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_23_mod_iq_payload_cha_q;
  wire       [2:0]    _zz_cnt;
  reg                 _zz_1;
  reg        [2:0]    cnt;
  reg        [15:0]   flow_iq_data_vec_0_cha_i;
  reg        [15:0]   flow_iq_data_vec_0_cha_q;
  reg        [15:0]   flow_iq_data_vec_1_cha_i;
  reg        [15:0]   flow_iq_data_vec_1_cha_q;
  reg        [15:0]   flow_iq_data_vec_2_cha_i;
  reg        [15:0]   flow_iq_data_vec_2_cha_q;
  reg        [15:0]   flow_iq_data_vec_3_cha_i;
  reg        [15:0]   flow_iq_data_vec_3_cha_q;
  reg        [15:0]   flow_iq_data_vec_4_cha_i;
  reg        [15:0]   flow_iq_data_vec_4_cha_q;
  reg        [15:0]   flow_iq_data_vec_5_cha_i;
  reg        [15:0]   flow_iq_data_vec_5_cha_q;
  reg        [15:0]   flow_iq_data_vec_6_cha_i;
  reg        [15:0]   flow_iq_data_vec_6_cha_q;
  reg        [15:0]   flow_iq_data_vec_7_cha_i;
  reg        [15:0]   flow_iq_data_vec_7_cha_q;
  reg                 flow_iq_valid;
  reg                 _zz_code;
  reg                 _zz_code_1;
  reg                 _zz_code_2;
  reg                 _zz_code_3;
  reg                 _zz_code_4;
  reg                 _zz_code_5;
  reg                 _zz_code_6;
  reg                 _zz_code_7;
  wire                base_iq_fire;
  wire                when_CDMASpreading_l51;
  wire                when_CDMASpreading_l65;
  (* ram_style = "distributed" *) reg [7:0] code_map [0:7];

  assign _zz_cnt = (cnt + 3'b001);
  initial begin
    $readmemb("/mnt/BackUp/IdeaProjects/MAGI_PROJECT/tmp/job_1/CombCDMABench.v_toplevel_cdma_spread_rfClockArea_cdma_spread_code_map.bin",code_map);
  end
  assign _zz_code_map_port0 = code_map[cnt];
  assign _zz_code_map_port1 = code_map[cnt];
  assign _zz_code_map_port2 = code_map[cnt];
  assign _zz_code_map_port3 = code_map[cnt];
  assign _zz_code_map_port4 = code_map[cnt];
  assign _zz_code_map_port5 = code_map[cnt];
  assign _zz_code_map_port6 = code_map[cnt];
  assign _zz_code_map_port7 = code_map[cnt];
  always @(posedge rf_clk) begin
    if(_zz_1) begin
      code_map[w_addr] <= w_data;
    end
  end

  ComputeUnit computeUnit_16 (
    .code                  (_zz_code                                 ), //i
    .base_iq_valid         (flow_iq_valid                            ), //i
    .base_iq_payload_cha_i (flow_iq_data_vec_0_cha_i[15:0]           ), //i
    .base_iq_payload_cha_q (flow_iq_data_vec_0_cha_q[15:0]           ), //i
    .mod_iq_valid          (computeUnit_16_mod_iq_valid              ), //o
    .mod_iq_payload_cha_i  (computeUnit_16_mod_iq_payload_cha_i[15:0]), //o
    .mod_iq_payload_cha_q  (computeUnit_16_mod_iq_payload_cha_q[15:0]), //o
    .rf_clk                (rf_clk                                   ), //i
    .rf_resetn             (rf_resetn                                )  //i
  );
  ComputeUnit computeUnit_17 (
    .code                  (_zz_code_1                               ), //i
    .base_iq_valid         (flow_iq_valid                            ), //i
    .base_iq_payload_cha_i (flow_iq_data_vec_1_cha_i[15:0]           ), //i
    .base_iq_payload_cha_q (flow_iq_data_vec_1_cha_q[15:0]           ), //i
    .mod_iq_valid          (computeUnit_17_mod_iq_valid              ), //o
    .mod_iq_payload_cha_i  (computeUnit_17_mod_iq_payload_cha_i[15:0]), //o
    .mod_iq_payload_cha_q  (computeUnit_17_mod_iq_payload_cha_q[15:0]), //o
    .rf_clk                (rf_clk                                   ), //i
    .rf_resetn             (rf_resetn                                )  //i
  );
  ComputeUnit computeUnit_18 (
    .code                  (_zz_code_2                               ), //i
    .base_iq_valid         (flow_iq_valid                            ), //i
    .base_iq_payload_cha_i (flow_iq_data_vec_2_cha_i[15:0]           ), //i
    .base_iq_payload_cha_q (flow_iq_data_vec_2_cha_q[15:0]           ), //i
    .mod_iq_valid          (computeUnit_18_mod_iq_valid              ), //o
    .mod_iq_payload_cha_i  (computeUnit_18_mod_iq_payload_cha_i[15:0]), //o
    .mod_iq_payload_cha_q  (computeUnit_18_mod_iq_payload_cha_q[15:0]), //o
    .rf_clk                (rf_clk                                   ), //i
    .rf_resetn             (rf_resetn                                )  //i
  );
  ComputeUnit computeUnit_19 (
    .code                  (_zz_code_3                               ), //i
    .base_iq_valid         (flow_iq_valid                            ), //i
    .base_iq_payload_cha_i (flow_iq_data_vec_3_cha_i[15:0]           ), //i
    .base_iq_payload_cha_q (flow_iq_data_vec_3_cha_q[15:0]           ), //i
    .mod_iq_valid          (computeUnit_19_mod_iq_valid              ), //o
    .mod_iq_payload_cha_i  (computeUnit_19_mod_iq_payload_cha_i[15:0]), //o
    .mod_iq_payload_cha_q  (computeUnit_19_mod_iq_payload_cha_q[15:0]), //o
    .rf_clk                (rf_clk                                   ), //i
    .rf_resetn             (rf_resetn                                )  //i
  );
  ComputeUnit computeUnit_20 (
    .code                  (_zz_code_4                               ), //i
    .base_iq_valid         (flow_iq_valid                            ), //i
    .base_iq_payload_cha_i (flow_iq_data_vec_4_cha_i[15:0]           ), //i
    .base_iq_payload_cha_q (flow_iq_data_vec_4_cha_q[15:0]           ), //i
    .mod_iq_valid          (computeUnit_20_mod_iq_valid              ), //o
    .mod_iq_payload_cha_i  (computeUnit_20_mod_iq_payload_cha_i[15:0]), //o
    .mod_iq_payload_cha_q  (computeUnit_20_mod_iq_payload_cha_q[15:0]), //o
    .rf_clk                (rf_clk                                   ), //i
    .rf_resetn             (rf_resetn                                )  //i
  );
  ComputeUnit computeUnit_21 (
    .code                  (_zz_code_5                               ), //i
    .base_iq_valid         (flow_iq_valid                            ), //i
    .base_iq_payload_cha_i (flow_iq_data_vec_5_cha_i[15:0]           ), //i
    .base_iq_payload_cha_q (flow_iq_data_vec_5_cha_q[15:0]           ), //i
    .mod_iq_valid          (computeUnit_21_mod_iq_valid              ), //o
    .mod_iq_payload_cha_i  (computeUnit_21_mod_iq_payload_cha_i[15:0]), //o
    .mod_iq_payload_cha_q  (computeUnit_21_mod_iq_payload_cha_q[15:0]), //o
    .rf_clk                (rf_clk                                   ), //i
    .rf_resetn             (rf_resetn                                )  //i
  );
  ComputeUnit computeUnit_22 (
    .code                  (_zz_code_6                               ), //i
    .base_iq_valid         (flow_iq_valid                            ), //i
    .base_iq_payload_cha_i (flow_iq_data_vec_6_cha_i[15:0]           ), //i
    .base_iq_payload_cha_q (flow_iq_data_vec_6_cha_q[15:0]           ), //i
    .mod_iq_valid          (computeUnit_22_mod_iq_valid              ), //o
    .mod_iq_payload_cha_i  (computeUnit_22_mod_iq_payload_cha_i[15:0]), //o
    .mod_iq_payload_cha_q  (computeUnit_22_mod_iq_payload_cha_q[15:0]), //o
    .rf_clk                (rf_clk                                   ), //i
    .rf_resetn             (rf_resetn                                )  //i
  );
  ComputeUnit computeUnit_23 (
    .code                  (_zz_code_7                               ), //i
    .base_iq_valid         (flow_iq_valid                            ), //i
    .base_iq_payload_cha_i (flow_iq_data_vec_7_cha_i[15:0]           ), //i
    .base_iq_payload_cha_q (flow_iq_data_vec_7_cha_q[15:0]           ), //i
    .mod_iq_valid          (computeUnit_23_mod_iq_valid              ), //o
    .mod_iq_payload_cha_i  (computeUnit_23_mod_iq_payload_cha_i[15:0]), //o
    .mod_iq_payload_cha_q  (computeUnit_23_mod_iq_payload_cha_q[15:0]), //o
    .rf_clk                (rf_clk                                   ), //i
    .rf_resetn             (rf_resetn                                )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(w_en) begin
      _zz_1 = 1'b1;
    end
  end

  assign mod_sub_iqs_0_valid = computeUnit_16_mod_iq_valid;
  assign mod_sub_iqs_0_payload_cha_i = computeUnit_16_mod_iq_payload_cha_i;
  assign mod_sub_iqs_0_payload_cha_q = computeUnit_16_mod_iq_payload_cha_q;
  assign mod_sub_iqs_1_valid = computeUnit_17_mod_iq_valid;
  assign mod_sub_iqs_1_payload_cha_i = computeUnit_17_mod_iq_payload_cha_i;
  assign mod_sub_iqs_1_payload_cha_q = computeUnit_17_mod_iq_payload_cha_q;
  assign mod_sub_iqs_2_valid = computeUnit_18_mod_iq_valid;
  assign mod_sub_iqs_2_payload_cha_i = computeUnit_18_mod_iq_payload_cha_i;
  assign mod_sub_iqs_2_payload_cha_q = computeUnit_18_mod_iq_payload_cha_q;
  assign mod_sub_iqs_3_valid = computeUnit_19_mod_iq_valid;
  assign mod_sub_iqs_3_payload_cha_i = computeUnit_19_mod_iq_payload_cha_i;
  assign mod_sub_iqs_3_payload_cha_q = computeUnit_19_mod_iq_payload_cha_q;
  assign mod_sub_iqs_4_valid = computeUnit_20_mod_iq_valid;
  assign mod_sub_iqs_4_payload_cha_i = computeUnit_20_mod_iq_payload_cha_i;
  assign mod_sub_iqs_4_payload_cha_q = computeUnit_20_mod_iq_payload_cha_q;
  assign mod_sub_iqs_5_valid = computeUnit_21_mod_iq_valid;
  assign mod_sub_iqs_5_payload_cha_i = computeUnit_21_mod_iq_payload_cha_i;
  assign mod_sub_iqs_5_payload_cha_q = computeUnit_21_mod_iq_payload_cha_q;
  assign mod_sub_iqs_6_valid = computeUnit_22_mod_iq_valid;
  assign mod_sub_iqs_6_payload_cha_i = computeUnit_22_mod_iq_payload_cha_i;
  assign mod_sub_iqs_6_payload_cha_q = computeUnit_22_mod_iq_payload_cha_q;
  assign mod_sub_iqs_7_valid = computeUnit_23_mod_iq_valid;
  assign mod_sub_iqs_7_payload_cha_i = computeUnit_23_mod_iq_payload_cha_i;
  assign mod_sub_iqs_7_payload_cha_q = computeUnit_23_mod_iq_payload_cha_q;
  assign base_iq_fire = (base_iq_valid && base_iq_ready);
  assign when_CDMASpreading_l51 = (base_iq_fire || (cnt != 3'b000));
  assign when_CDMASpreading_l65 = (cnt == 3'b000);
  assign base_iq_ready = ((cnt == 3'b000) && (! clc));
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      cnt <= 3'b000;
      flow_iq_valid <= 1'b0;
    end else begin
      if(clc) begin
        cnt <= 3'b000;
      end else begin
        if(when_CDMASpreading_l51) begin
          cnt <= ((cnt == cnt_limit) ? 3'b000 : _zz_cnt);
        end
      end
      if(when_CDMASpreading_l65) begin
        flow_iq_valid <= base_iq_valid;
      end
    end
  end

  always @(posedge rf_clk) begin
    _zz_code <= _zz_code_map_port0[7];
    _zz_code_1 <= _zz_code_map_port1[6];
    _zz_code_2 <= _zz_code_map_port2[5];
    _zz_code_3 <= _zz_code_map_port3[4];
    _zz_code_4 <= _zz_code_map_port4[3];
    _zz_code_5 <= _zz_code_map_port5[2];
    _zz_code_6 <= _zz_code_map_port6[1];
    _zz_code_7 <= _zz_code_map_port7[0];
    if(when_CDMASpreading_l65) begin
      flow_iq_data_vec_0_cha_i <= base_iq_payload_0_cha_i;
      flow_iq_data_vec_0_cha_q <= base_iq_payload_0_cha_q;
      flow_iq_data_vec_1_cha_i <= base_iq_payload_1_cha_i;
      flow_iq_data_vec_1_cha_q <= base_iq_payload_1_cha_q;
      flow_iq_data_vec_2_cha_i <= base_iq_payload_2_cha_i;
      flow_iq_data_vec_2_cha_q <= base_iq_payload_2_cha_q;
      flow_iq_data_vec_3_cha_i <= base_iq_payload_3_cha_i;
      flow_iq_data_vec_3_cha_q <= base_iq_payload_3_cha_q;
      flow_iq_data_vec_4_cha_i <= base_iq_payload_4_cha_i;
      flow_iq_data_vec_4_cha_q <= base_iq_payload_4_cha_q;
      flow_iq_data_vec_5_cha_i <= base_iq_payload_5_cha_i;
      flow_iq_data_vec_5_cha_q <= base_iq_payload_5_cha_q;
      flow_iq_data_vec_6_cha_i <= base_iq_payload_6_cha_i;
      flow_iq_data_vec_6_cha_q <= base_iq_payload_6_cha_q;
      flow_iq_data_vec_7_cha_i <= base_iq_payload_7_cha_i;
      flow_iq_data_vec_7_cha_q <= base_iq_payload_7_cha_q;
    end
  end


endmodule

//ComputeUnit_8 replaced by ComputeUnit_8

//ComputeUnit_8 replaced by ComputeUnit_8

//ComputeUnit_8 replaced by ComputeUnit_8

//ComputeUnit_8 replaced by ComputeUnit_8

//ComputeUnit_8 replaced by ComputeUnit_8

//ComputeUnit_8 replaced by ComputeUnit_8

//ComputeUnit_8 replaced by ComputeUnit_8

module ComputeUnit_8 (
  input      [7:0]    code,
  input               mod_iq_valid,
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  output              base_iq_valid,
  output     [15:0]   base_iq_payload_cha_i,
  output     [15:0]   base_iq_payload_cha_q,
  input               clc,
  input      [2:0]    cnt_limit,
  input               rf_clk,
  input               rf_resetn
);

  wire       [15:0]   shiftRegister_16_output_1;
  wire       [15:0]   shiftRegister_17_output_1;
  wire       [2:0]    _zz_data_i;
  wire       [15:0]   _zz_data_i_1;
  wire       [2:0]    _zz_data_q;
  wire       [15:0]   _zz_data_q_1;
  wire       [15:0]   _zz_base_i_next;
  wire       [15:0]   _zz_base_q_next;
  wire       [2:0]    _zz_cnt;
  reg        [15:0]   base_i;
  reg        [15:0]   base_q;
  reg        [2:0]    cnt;
  wire       [15:0]   data_i;
  wire       [15:0]   data_q;
  wire       [15:0]   base_i_next;
  wire       [15:0]   base_q_next;
  reg        [15:0]   base_i_next_regNext;
  reg        [15:0]   base_q_next_regNext;
  reg                 _zz_base_iq_valid;

  assign _zz_data_i = (3'b111 - cnt);
  assign _zz_data_i_1 = (- mod_iq_payload_cha_i);
  assign _zz_data_q = (3'b111 - cnt);
  assign _zz_data_q_1 = (- mod_iq_payload_cha_q);
  assign _zz_base_i_next = ($signed(base_i) + $signed(data_i));
  assign _zz_base_q_next = ($signed(base_q) + $signed(data_q));
  assign _zz_cnt = (cnt + 3'b001);
  ShiftRegister shiftRegister_16 (
    .input_1   (data_i[15:0]                   ), //i
    .output_1  (shiftRegister_16_output_1[15:0]), //o
    .enable    (mod_iq_valid                   ), //i
    .clc       (clc                            ), //i
    .rf_clk    (rf_clk                         ), //i
    .rf_resetn (rf_resetn                      )  //i
  );
  ShiftRegister shiftRegister_17 (
    .input_1   (data_q[15:0]                   ), //i
    .output_1  (shiftRegister_17_output_1[15:0]), //o
    .enable    (mod_iq_valid                   ), //i
    .clc       (clc                            ), //i
    .rf_clk    (rf_clk                         ), //i
    .rf_resetn (rf_resetn                      )  //i
  );
  assign data_i = (code[_zz_data_i] ? mod_iq_payload_cha_i : _zz_data_i_1);
  assign data_q = (code[_zz_data_q] ? mod_iq_payload_cha_q : _zz_data_q_1);
  assign base_i_next = ($signed(_zz_base_i_next) - $signed(shiftRegister_16_output_1));
  assign base_q_next = ($signed(_zz_base_q_next) - $signed(shiftRegister_17_output_1));
  assign base_iq_payload_cha_i = base_i_next_regNext;
  assign base_iq_payload_cha_q = base_q_next_regNext;
  assign base_iq_valid = _zz_base_iq_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      base_i <= 16'h0;
      base_q <= 16'h0;
      cnt <= 3'b000;
    end else begin
      if(clc) begin
        base_i <= 16'h0;
        base_q <= 16'h0;
        cnt <= 3'b000;
      end else begin
        if(mod_iq_valid) begin
          base_i <= base_i_next;
          base_q <= base_q_next;
          cnt <= ((cnt == cnt_limit) ? 3'b000 : _zz_cnt);
        end
      end
    end
  end

  always @(posedge rf_clk) begin
    base_i_next_regNext <= base_i_next;
    base_q_next_regNext <= base_q_next;
    _zz_base_iq_valid <= ((cnt == cnt_limit) && mod_iq_valid);
  end


endmodule

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

module ComputeUnit (
  input               code,
  input               base_iq_valid,
  input      [15:0]   base_iq_payload_cha_i,
  input      [15:0]   base_iq_payload_cha_q,
  output              mod_iq_valid,
  output     [15:0]   mod_iq_payload_cha_i,
  output     [15:0]   mod_iq_payload_cha_q,
  input               rf_clk,
  input               rf_resetn
);

  wire       [15:0]   _zz_mod_i;
  wire       [15:0]   _zz_mod_q;
  reg        [15:0]   mod_i;
  reg        [15:0]   mod_q;
  reg                 mod_valid;

  assign _zz_mod_i = (- base_iq_payload_cha_i);
  assign _zz_mod_q = (- base_iq_payload_cha_q);
  assign mod_iq_payload_cha_i = mod_i;
  assign mod_iq_payload_cha_q = mod_q;
  assign mod_iq_valid = mod_valid;
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      mod_i <= 16'h0;
      mod_q <= 16'h0;
      mod_valid <= 1'b0;
    end else begin
      if(base_iq_valid) begin
        mod_i <= (code ? base_iq_payload_cha_i : _zz_mod_i);
        mod_q <= (code ? base_iq_payload_cha_q : _zz_mod_q);
        mod_valid <= 1'b1;
      end else begin
        mod_valid <= 1'b0;
      end
    end
  end


endmodule

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

module ShiftRegister (
  input      [15:0]   input_1,
  output     [15:0]   output_1,
  input               enable,
  input               clc,
  input               rf_clk,
  input               rf_resetn
);

  reg        [15:0]   shift_reg_0;
  reg        [15:0]   shift_reg_1;
  reg        [15:0]   shift_reg_2;
  reg        [15:0]   shift_reg_3;
  reg        [15:0]   shift_reg_4;
  reg        [15:0]   shift_reg_5;
  reg        [15:0]   shift_reg_6;
  reg        [15:0]   shift_reg_7;

  assign output_1 = shift_reg_7;
  always @(posedge rf_clk) begin
    if(clc) begin
      shift_reg_0 <= 16'h0;
      shift_reg_1 <= 16'h0;
      shift_reg_2 <= 16'h0;
      shift_reg_3 <= 16'h0;
      shift_reg_4 <= 16'h0;
      shift_reg_5 <= 16'h0;
      shift_reg_6 <= 16'h0;
      shift_reg_7 <= 16'h0;
    end else begin
      if(enable) begin
        shift_reg_0 <= input_1;
        shift_reg_1 <= shift_reg_0;
        shift_reg_2 <= shift_reg_1;
        shift_reg_3 <= shift_reg_2;
        shift_reg_4 <= shift_reg_3;
        shift_reg_5 <= shift_reg_4;
        shift_reg_6 <= shift_reg_5;
        shift_reg_7 <= shift_reg_6;
      end
    end
  end


endmodule
