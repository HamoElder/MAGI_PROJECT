// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AD9361Interface
// Git hash  : 0cd018b79100e2862d569815e96aa168603c6c8b



module AD9361Interface (
  input               dac_data_valid,
  output              dac_data_ready,
  input      [11:0]   dac_data_payload_0_cha_i,
  input      [11:0]   dac_data_payload_0_cha_q,
  input      [11:0]   dac_data_payload_1_cha_i,
  input      [11:0]   dac_data_payload_1_cha_q,
  input               dac_t1_mod,
  output reg          adc_data_valid,
  output reg [11:0]   adc_data_payload_0_cha_i,
  output reg [11:0]   adc_data_payload_0_cha_q,
  output reg [11:0]   adc_data_payload_1_cha_i,
  output reg [11:0]   adc_data_payload_1_cha_q,
  input               adc_r1_mod,
  output reg          adc_status,
  input               rx_if_frame_p,
  input               rx_if_frame_n,
  input      [5:0]    rx_if_data_p,
  input      [5:0]    rx_if_data_n,
  input               rx_data_clk_p,
  input               rx_data_clk_n,
  output              tx_if_frame_p,
  output              tx_if_frame_n,
  output              tx_fb_clk_p,
  output              tx_fb_clk_n,
  output reg [5:0]    tx_if_data_p,
  output reg [5:0]    tx_if_data_n,
  output              data_clk,
  input               resetn
);
  wire                iBUFDS_1_I;
  wire                iBUFDS_1_IB;
  wire                iBUFDS_2_I;
  wire                iBUFDS_2_IB;
  wire                iBUFDS_3_I;
  wire                iBUFDS_3_IB;
  wire                iBUFDS_4_I;
  wire                iBUFDS_4_IB;
  wire                iBUFDS_5_I;
  wire                iBUFDS_5_IB;
  wire                iBUFDS_6_I;
  wire                iBUFDS_6_IB;
  wire                oDDR_1_D1;
  wire                oDDR_1_D2;
  wire                oDDR_2_D1;
  wire                oDDR_2_D2;
  wire                oDDR_3_D1;
  wire                oDDR_3_D2;
  wire                oDDR_4_D1;
  wire                oDDR_4_D2;
  wire                oDDR_5_D1;
  wire                oDDR_5_D2;
  wire                oDDR_6_D1;
  wire                oDDR_6_D2;
  wire                iBUFGDS_1_O;
  wire                bUFG_1_O;
  wire                iBUFDS_1_O;
  wire                iDDR_1_Q1;
  wire                iDDR_1_Q2;
  wire                iBUFDS_2_O;
  wire                iDDR_2_Q1;
  wire                iDDR_2_Q2;
  wire                iBUFDS_3_O;
  wire                iDDR_3_Q1;
  wire                iDDR_3_Q2;
  wire                iBUFDS_4_O;
  wire                iDDR_4_Q1;
  wire                iDDR_4_Q2;
  wire                iBUFDS_5_O;
  wire                iDDR_5_Q1;
  wire                iDDR_5_Q2;
  wire                iBUFDS_6_O;
  wire                iDDR_6_Q1;
  wire                iDDR_6_Q2;
  wire                iBUFDS_7_O;
  wire                rxClockArea_iddr_frame_Q1;
  wire                rxClockArea_iddr_frame_Q2;
  wire                oDDR_1_Q;
  wire                oBUFDS_1_O;
  wire                oBUFDS_1_OB;
  wire                oDDR_2_Q;
  wire                oBUFDS_2_O;
  wire                oBUFDS_2_OB;
  wire                oDDR_3_Q;
  wire                oBUFDS_3_O;
  wire                oBUFDS_3_OB;
  wire                oDDR_4_Q;
  wire                oBUFDS_4_O;
  wire                oBUFDS_4_OB;
  wire                oDDR_5_Q;
  wire                oBUFDS_5_O;
  wire                oBUFDS_5_OB;
  wire                oDDR_6_Q;
  wire                oBUFDS_6_O;
  wire                oBUFDS_6_OB;
  wire                txClockArea_tx_frame_oddr_Q;
  wire                txClockArea_tx_frame_obuf_O;
  wire                txClockArea_tx_frame_obuf_OB;
  wire                txClockArea_tx_clk_oddr_Q;
  wire                txClockArea_tx_clk_obuf_O;
  wire                txClockArea_tx_clk_obuf_OB;
  reg        [5:0]    rxClockArea_rx_data_p_s;
  reg        [5:0]    rxClockArea_rx_data_n_s;
  wire                rxClockArea_rx_frame_p_s;
  wire                rxClockArea_rx_frame_n_s;
  reg        [5:0]    rxClockArea_rx_data_n;
  reg                 rxClockArea_rx_frame_n;
  reg        [11:0]   rxClockArea_rx_data;
  reg        [1:0]    rxClockArea_rx_frame;
  reg        [1:0]    rxClockArea_rx_frame_d;
  reg        [11:0]   rxClockArea_rx_data_d;
  wire       [3:0]    rxClockArea_rx_frame_comb;
  reg                 rxClockArea_rx_valid_r1;
  reg                 rxClockArea_rx_error_r1;
  reg        [11:0]   rxClockArea_rx_data_i_r1;
  reg        [11:0]   rxClockArea_rx_data_q_r1;
  wire                when_AD9361Interface_l102;
  reg                 rxClockArea_rx_error_r2;
  reg                 rxClockArea_rx_valid_r2;
  reg        [11:0]   rxClockArea_rx_data_i0_r2;
  reg        [11:0]   rxClockArea_rx_data_q0_r2;
  reg        [11:0]   rxClockArea_rx_data_i1_r2;
  reg        [11:0]   rxClockArea_rx_data_q1_r2;
  wire                when_AD9361Interface_l118;
  wire                when_AD9361Interface_l123;
  reg        [2:0]    txClockArea_tx_data_cnt;
  reg        [11:0]   txClockArea_tx_data_i0_d;
  reg        [11:0]   txClockArea_tx_data_q0_d;
  reg        [11:0]   txClockArea_tx_data_i1_d;
  reg        [11:0]   txClockArea_tx_data_q1_d;
  reg                 txClockArea_tx_frame;
  reg        [5:0]    txClockArea_tx_data_p;
  reg        [5:0]    txClockArea_tx_data_n;
  wire       [3:0]    txClockArea_tx_data_sel;
  wire                dac_data_fire;
  wire                when_AD9361Interface_l177;
  wire                txClockArea_tx_frame_buf;
  wire                txClockArea_tx_clk_buf;

  IBUFGDS iBUFGDS_1 (
    .I     (rx_data_clk_p  ), //i
    .IB    (rx_data_clk_n  ), //i
    .O     (iBUFGDS_1_O    )  //o
  );
  BUFG bUFG_1 (
    .I    (iBUFGDS_1_O  ), //i
    .O    (bUFG_1_O     )  //o
  );
  IBUFDS iBUFDS_1 (
    .I     (iBUFDS_1_I   ), //i
    .IB    (iBUFDS_1_IB  ), //i
    .O     (iBUFDS_1_O   )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) iDDR_1 (
    .CE    (1'b1        ), //i
    .R     (1'b0        ), //i
    .S     (1'b0        ), //i
    .C     (bUFG_1_O    ), //i
    .D     (iBUFDS_1_O  ), //i
    .Q1    (iDDR_1_Q1   ), //o
    .Q2    (iDDR_1_Q2   )  //o
  );
  IBUFDS iBUFDS_2 (
    .I     (iBUFDS_2_I   ), //i
    .IB    (iBUFDS_2_IB  ), //i
    .O     (iBUFDS_2_O   )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) iDDR_2 (
    .CE    (1'b1        ), //i
    .R     (1'b0        ), //i
    .S     (1'b0        ), //i
    .C     (bUFG_1_O    ), //i
    .D     (iBUFDS_2_O  ), //i
    .Q1    (iDDR_2_Q1   ), //o
    .Q2    (iDDR_2_Q2   )  //o
  );
  IBUFDS iBUFDS_3 (
    .I     (iBUFDS_3_I   ), //i
    .IB    (iBUFDS_3_IB  ), //i
    .O     (iBUFDS_3_O   )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) iDDR_3 (
    .CE    (1'b1        ), //i
    .R     (1'b0        ), //i
    .S     (1'b0        ), //i
    .C     (bUFG_1_O    ), //i
    .D     (iBUFDS_3_O  ), //i
    .Q1    (iDDR_3_Q1   ), //o
    .Q2    (iDDR_3_Q2   )  //o
  );
  IBUFDS iBUFDS_4 (
    .I     (iBUFDS_4_I   ), //i
    .IB    (iBUFDS_4_IB  ), //i
    .O     (iBUFDS_4_O   )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) iDDR_4 (
    .CE    (1'b1        ), //i
    .R     (1'b0        ), //i
    .S     (1'b0        ), //i
    .C     (bUFG_1_O    ), //i
    .D     (iBUFDS_4_O  ), //i
    .Q1    (iDDR_4_Q1   ), //o
    .Q2    (iDDR_4_Q2   )  //o
  );
  IBUFDS iBUFDS_5 (
    .I     (iBUFDS_5_I   ), //i
    .IB    (iBUFDS_5_IB  ), //i
    .O     (iBUFDS_5_O   )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) iDDR_5 (
    .CE    (1'b1        ), //i
    .R     (1'b0        ), //i
    .S     (1'b0        ), //i
    .C     (bUFG_1_O    ), //i
    .D     (iBUFDS_5_O  ), //i
    .Q1    (iDDR_5_Q1   ), //o
    .Q2    (iDDR_5_Q2   )  //o
  );
  IBUFDS iBUFDS_6 (
    .I     (iBUFDS_6_I   ), //i
    .IB    (iBUFDS_6_IB  ), //i
    .O     (iBUFDS_6_O   )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) iDDR_6 (
    .CE    (1'b1        ), //i
    .R     (1'b0        ), //i
    .S     (1'b0        ), //i
    .C     (bUFG_1_O    ), //i
    .D     (iBUFDS_6_O  ), //i
    .Q1    (iDDR_6_Q1   ), //o
    .Q2    (iDDR_6_Q2   )  //o
  );
  IBUFDS iBUFDS_7 (
    .I     (rx_if_frame_p  ), //i
    .IB    (rx_if_frame_n  ), //i
    .O     (iBUFDS_7_O     )  //o
  );
  IDDR #(
    .DDR_CLK_EDGE("SAME_EDGE_PIPELINED"),
    .INIT_Q1(0),
    .INIT_Q2(0),
    .SRTYPE("ASYNC") 
  ) rxClockArea_iddr_frame (
    .CE    (1'b1                       ), //i
    .R     (1'b0                       ), //i
    .S     (1'b0                       ), //i
    .C     (bUFG_1_O                   ), //i
    .D     (iBUFDS_7_O                 ), //i
    .Q1    (rxClockArea_iddr_frame_Q1  ), //o
    .Q2    (rxClockArea_iddr_frame_Q2  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) oDDR_1 (
    .CE    (1'b1       ), //i
    .R     (1'b0       ), //i
    .S     (1'b0       ), //i
    .C     (bUFG_1_O   ), //i
    .D1    (oDDR_1_D1  ), //i
    .D2    (oDDR_1_D2  ), //i
    .Q     (oDDR_1_Q   )  //o
  );
  OBUFDS oBUFDS_1 (
    .I     (oDDR_1_Q     ), //i
    .O     (oBUFDS_1_O   ), //o
    .OB    (oBUFDS_1_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) oDDR_2 (
    .CE    (1'b1       ), //i
    .R     (1'b0       ), //i
    .S     (1'b0       ), //i
    .C     (bUFG_1_O   ), //i
    .D1    (oDDR_2_D1  ), //i
    .D2    (oDDR_2_D2  ), //i
    .Q     (oDDR_2_Q   )  //o
  );
  OBUFDS oBUFDS_2 (
    .I     (oDDR_2_Q     ), //i
    .O     (oBUFDS_2_O   ), //o
    .OB    (oBUFDS_2_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) oDDR_3 (
    .CE    (1'b1       ), //i
    .R     (1'b0       ), //i
    .S     (1'b0       ), //i
    .C     (bUFG_1_O   ), //i
    .D1    (oDDR_3_D1  ), //i
    .D2    (oDDR_3_D2  ), //i
    .Q     (oDDR_3_Q   )  //o
  );
  OBUFDS oBUFDS_3 (
    .I     (oDDR_3_Q     ), //i
    .O     (oBUFDS_3_O   ), //o
    .OB    (oBUFDS_3_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) oDDR_4 (
    .CE    (1'b1       ), //i
    .R     (1'b0       ), //i
    .S     (1'b0       ), //i
    .C     (bUFG_1_O   ), //i
    .D1    (oDDR_4_D1  ), //i
    .D2    (oDDR_4_D2  ), //i
    .Q     (oDDR_4_Q   )  //o
  );
  OBUFDS oBUFDS_4 (
    .I     (oDDR_4_Q     ), //i
    .O     (oBUFDS_4_O   ), //o
    .OB    (oBUFDS_4_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) oDDR_5 (
    .CE    (1'b1       ), //i
    .R     (1'b0       ), //i
    .S     (1'b0       ), //i
    .C     (bUFG_1_O   ), //i
    .D1    (oDDR_5_D1  ), //i
    .D2    (oDDR_5_D2  ), //i
    .Q     (oDDR_5_Q   )  //o
  );
  OBUFDS oBUFDS_5 (
    .I     (oDDR_5_Q     ), //i
    .O     (oBUFDS_5_O   ), //o
    .OB    (oBUFDS_5_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) oDDR_6 (
    .CE    (1'b1       ), //i
    .R     (1'b0       ), //i
    .S     (1'b0       ), //i
    .C     (bUFG_1_O   ), //i
    .D1    (oDDR_6_D1  ), //i
    .D2    (oDDR_6_D2  ), //i
    .Q     (oDDR_6_Q   )  //o
  );
  OBUFDS oBUFDS_6 (
    .I     (oDDR_6_Q     ), //i
    .O     (oBUFDS_6_O   ), //o
    .OB    (oBUFDS_6_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) txClockArea_tx_frame_oddr (
    .CE    (1'b1                         ), //i
    .R     (1'b0                         ), //i
    .S     (1'b0                         ), //i
    .C     (bUFG_1_O                     ), //i
    .D1    (txClockArea_tx_frame         ), //i
    .D2    (txClockArea_tx_frame         ), //i
    .Q     (txClockArea_tx_frame_oddr_Q  )  //o
  );
  OBUFDS txClockArea_tx_frame_obuf (
    .I     (txClockArea_tx_frame_buf      ), //i
    .O     (txClockArea_tx_frame_obuf_O   ), //o
    .OB    (txClockArea_tx_frame_obuf_OB  )  //o
  );
  ODDR #(
    .DDR_CLK_EDGE("SAME_EDGE"),
    .INIT(0),
    .SRTYPE("ASYNC") 
  ) txClockArea_tx_clk_oddr (
    .CE    (1'b1                       ), //i
    .R     (1'b0                       ), //i
    .S     (1'b0                       ), //i
    .C     (bUFG_1_O                   ), //i
    .D1    (1'b0                       ), //i
    .D2    (1'b1                       ), //i
    .Q     (txClockArea_tx_clk_oddr_Q  )  //o
  );
  OBUFDS txClockArea_tx_clk_obuf (
    .I     (txClockArea_tx_clk_buf      ), //i
    .O     (txClockArea_tx_clk_obuf_O   ), //o
    .OB    (txClockArea_tx_clk_obuf_OB  )  //o
  );
  assign iBUFDS_1_I = rx_if_data_p[0];
  assign iBUFDS_1_IB = rx_if_data_n[0];
  always @(*) begin
    rxClockArea_rx_data_p_s[0] = iDDR_1_Q1;
    rxClockArea_rx_data_p_s[1] = iDDR_2_Q1;
    rxClockArea_rx_data_p_s[2] = iDDR_3_Q1;
    rxClockArea_rx_data_p_s[3] = iDDR_4_Q1;
    rxClockArea_rx_data_p_s[4] = iDDR_5_Q1;
    rxClockArea_rx_data_p_s[5] = iDDR_6_Q1;
  end

  always @(*) begin
    rxClockArea_rx_data_n_s[0] = iDDR_1_Q2;
    rxClockArea_rx_data_n_s[1] = iDDR_2_Q2;
    rxClockArea_rx_data_n_s[2] = iDDR_3_Q2;
    rxClockArea_rx_data_n_s[3] = iDDR_4_Q2;
    rxClockArea_rx_data_n_s[4] = iDDR_5_Q2;
    rxClockArea_rx_data_n_s[5] = iDDR_6_Q2;
  end

  assign iBUFDS_2_I = rx_if_data_p[1];
  assign iBUFDS_2_IB = rx_if_data_n[1];
  assign iBUFDS_3_I = rx_if_data_p[2];
  assign iBUFDS_3_IB = rx_if_data_n[2];
  assign iBUFDS_4_I = rx_if_data_p[3];
  assign iBUFDS_4_IB = rx_if_data_n[3];
  assign iBUFDS_5_I = rx_if_data_p[4];
  assign iBUFDS_5_IB = rx_if_data_n[4];
  assign iBUFDS_6_I = rx_if_data_p[5];
  assign iBUFDS_6_IB = rx_if_data_n[5];
  assign rxClockArea_rx_frame_p_s = rxClockArea_iddr_frame_Q1;
  assign rxClockArea_rx_frame_n_s = rxClockArea_iddr_frame_Q2;
  assign rxClockArea_rx_frame_comb = {rxClockArea_rx_frame_d,rxClockArea_rx_frame};
  assign when_AD9361Interface_l102 = (rxClockArea_rx_frame_comb == 4'b1100);
  assign when_AD9361Interface_l118 = (rxClockArea_rx_frame_comb == 4'b1111);
  assign when_AD9361Interface_l123 = (rxClockArea_rx_frame_comb == 4'b0000);
  always @(*) begin
    if(adc_r1_mod) begin
      adc_data_valid = rxClockArea_rx_valid_r1;
    end else begin
      adc_data_valid = rxClockArea_rx_valid_r2;
    end
  end

  always @(*) begin
    if(adc_r1_mod) begin
      adc_data_payload_0_cha_i = rxClockArea_rx_data_i_r1;
    end else begin
      adc_data_payload_0_cha_i = rxClockArea_rx_data_i0_r2;
    end
  end

  always @(*) begin
    if(adc_r1_mod) begin
      adc_data_payload_0_cha_q = rxClockArea_rx_data_q_r1;
    end else begin
      adc_data_payload_0_cha_q = rxClockArea_rx_data_q0_r2;
    end
  end

  always @(*) begin
    if(adc_r1_mod) begin
      adc_data_payload_1_cha_i = 12'h0;
    end else begin
      adc_data_payload_1_cha_i = rxClockArea_rx_data_i1_r2;
    end
  end

  always @(*) begin
    if(adc_r1_mod) begin
      adc_data_payload_1_cha_q = 12'h0;
    end else begin
      adc_data_payload_1_cha_q = rxClockArea_rx_data_q1_r2;
    end
  end

  always @(*) begin
    if(adc_r1_mod) begin
      adc_status = (! rxClockArea_rx_error_r1);
    end else begin
      adc_status = (! rxClockArea_rx_error_r2);
    end
  end

  assign txClockArea_tx_data_sel = {{txClockArea_tx_data_cnt[2],dac_t1_mod},txClockArea_tx_data_cnt[1 : 0]};
  assign dac_data_fire = (dac_data_valid && dac_data_ready);
  assign when_AD9361Interface_l177 = txClockArea_tx_data_cnt[2];
  assign dac_data_ready = (txClockArea_tx_data_cnt == 3'b000);
  assign oDDR_1_D1 = txClockArea_tx_data_p[0];
  assign oDDR_1_D2 = txClockArea_tx_data_n[0];
  always @(*) begin
    tx_if_data_p[0] = oBUFDS_1_O;
    tx_if_data_p[1] = oBUFDS_2_O;
    tx_if_data_p[2] = oBUFDS_3_O;
    tx_if_data_p[3] = oBUFDS_4_O;
    tx_if_data_p[4] = oBUFDS_5_O;
    tx_if_data_p[5] = oBUFDS_6_O;
  end

  always @(*) begin
    tx_if_data_n[0] = oBUFDS_1_OB;
    tx_if_data_n[1] = oBUFDS_2_OB;
    tx_if_data_n[2] = oBUFDS_3_OB;
    tx_if_data_n[3] = oBUFDS_4_OB;
    tx_if_data_n[4] = oBUFDS_5_OB;
    tx_if_data_n[5] = oBUFDS_6_OB;
  end

  assign oDDR_2_D1 = txClockArea_tx_data_p[1];
  assign oDDR_2_D2 = txClockArea_tx_data_n[1];
  assign oDDR_3_D1 = txClockArea_tx_data_p[2];
  assign oDDR_3_D2 = txClockArea_tx_data_n[2];
  assign oDDR_4_D1 = txClockArea_tx_data_p[3];
  assign oDDR_4_D2 = txClockArea_tx_data_n[3];
  assign oDDR_5_D1 = txClockArea_tx_data_p[4];
  assign oDDR_5_D2 = txClockArea_tx_data_n[4];
  assign oDDR_6_D1 = txClockArea_tx_data_p[5];
  assign oDDR_6_D2 = txClockArea_tx_data_n[5];
  assign txClockArea_tx_frame_buf = txClockArea_tx_frame_oddr_Q;
  assign tx_if_frame_p = txClockArea_tx_frame_obuf_O;
  assign tx_if_frame_n = txClockArea_tx_frame_obuf_OB;
  assign txClockArea_tx_clk_buf = txClockArea_tx_clk_oddr_Q;
  assign tx_fb_clk_p = txClockArea_tx_clk_obuf_O;
  assign tx_fb_clk_n = txClockArea_tx_clk_obuf_OB;
  assign data_clk = bUFG_1_O;
  always @(posedge bUFG_1_O) begin
    if(!resetn) begin
      rxClockArea_rx_data_n <= 6'h0;
      rxClockArea_rx_frame_n <= 1'b0;
      rxClockArea_rx_data <= 12'h0;
      rxClockArea_rx_frame <= 2'b00;
      rxClockArea_rx_frame_d <= 2'b00;
      rxClockArea_rx_data_d <= 12'h0;
      rxClockArea_rx_valid_r1 <= 1'b0;
      rxClockArea_rx_error_r1 <= 1'b0;
      rxClockArea_rx_error_r2 <= 1'b0;
      rxClockArea_rx_valid_r2 <= 1'b0;
      txClockArea_tx_data_cnt <= 3'b000;
      txClockArea_tx_data_i0_d <= 12'h0;
      txClockArea_tx_data_q0_d <= 12'h0;
      txClockArea_tx_data_i1_d <= 12'h0;
      txClockArea_tx_data_q1_d <= 12'h0;
    end else begin
      rxClockArea_rx_data_n <= rxClockArea_rx_data_n_s;
      rxClockArea_rx_frame_n <= rxClockArea_rx_frame_n_s;
      rxClockArea_rx_data <= {rxClockArea_rx_data_n,rxClockArea_rx_data_p_s};
      rxClockArea_rx_frame <= {rxClockArea_rx_frame_n,rxClockArea_rx_frame_p_s};
      rxClockArea_rx_frame_d <= rxClockArea_rx_frame;
      rxClockArea_rx_data_d <= rxClockArea_rx_data;
      rxClockArea_rx_valid_r1 <= (rxClockArea_rx_frame_comb == 4'b1100);
      if(when_AD9361Interface_l102) begin
        rxClockArea_rx_error_r1 <= (! ((rxClockArea_rx_frame_comb == 4'b1100) || (rxClockArea_rx_frame_comb == 4'b0011)));
      end
      rxClockArea_rx_error_r2 <= (! ((((rxClockArea_rx_frame_comb == 4'b1111) || (rxClockArea_rx_frame_comb == 4'b1100)) || (rxClockArea_rx_frame_comb == 4'b0000)) || (rxClockArea_rx_frame_comb == 4'b0011)));
      rxClockArea_rx_valid_r2 <= (rxClockArea_rx_frame_comb == 4'b0000);
      if(dac_data_fire) begin
        txClockArea_tx_data_cnt <= 3'b100;
        txClockArea_tx_data_i0_d <= dac_data_payload_0_cha_i;
        txClockArea_tx_data_q0_d <= dac_data_payload_0_cha_q;
        txClockArea_tx_data_i1_d <= dac_data_payload_1_cha_i;
        txClockArea_tx_data_q1_d <= dac_data_payload_1_cha_q;
      end else begin
        if(when_AD9361Interface_l177) begin
          txClockArea_tx_data_cnt <= (txClockArea_tx_data_cnt + 3'b001);
        end
      end
    end
  end

  always @(posedge bUFG_1_O) begin
    if(when_AD9361Interface_l102) begin
      rxClockArea_rx_data_i_r1 <= {rxClockArea_rx_data_d[11 : 6],rxClockArea_rx_data[11 : 6]};
      rxClockArea_rx_data_q_r1 <= {rxClockArea_rx_data_d[5 : 0],rxClockArea_rx_data[5 : 0]};
    end
    if(when_AD9361Interface_l118) begin
      rxClockArea_rx_data_i0_r2 <= {rxClockArea_rx_data_d[11 : 6],rxClockArea_rx_data[11 : 6]};
      rxClockArea_rx_data_q0_r2 <= {rxClockArea_rx_data_d[5 : 0],rxClockArea_rx_data[5 : 0]};
    end
    if(when_AD9361Interface_l123) begin
      rxClockArea_rx_data_i1_r2 <= {rxClockArea_rx_data_d[11 : 6],rxClockArea_rx_data[11 : 6]};
      rxClockArea_rx_data_q1_r2 <= {rxClockArea_rx_data_d[5 : 0],rxClockArea_rx_data[5 : 0]};
    end
    if(!dac_data_fire) begin
      if(when_AD9361Interface_l177) begin
        case(txClockArea_tx_data_sel)
          4'b1101 : begin
            txClockArea_tx_frame <= 1'b0;
            txClockArea_tx_data_p <= txClockArea_tx_data_i0_d[5 : 0];
            txClockArea_tx_data_n <= txClockArea_tx_data_q0_d[5 : 0];
          end
          4'b1100 : begin
            txClockArea_tx_frame <= 1'b1;
            txClockArea_tx_data_p <= txClockArea_tx_data_i0_d[11 : 6];
            txClockArea_tx_data_n <= txClockArea_tx_data_q0_d[11 : 6];
          end
          4'b1011 : begin
            txClockArea_tx_frame <= 1'b0;
            txClockArea_tx_data_p <= txClockArea_tx_data_i1_d[5 : 0];
            txClockArea_tx_data_n <= txClockArea_tx_data_q1_d[5 : 0];
          end
          4'b1010 : begin
            txClockArea_tx_frame <= 1'b0;
            txClockArea_tx_data_p <= txClockArea_tx_data_i1_d[11 : 6];
            txClockArea_tx_data_n <= txClockArea_tx_data_q1_d[11 : 6];
          end
          4'b1001 : begin
            txClockArea_tx_frame <= 1'b1;
            txClockArea_tx_data_p <= txClockArea_tx_data_i0_d[5 : 0];
            txClockArea_tx_data_n <= txClockArea_tx_data_q0_d[5 : 0];
          end
          4'b1000 : begin
            txClockArea_tx_frame <= 1'b1;
            txClockArea_tx_data_p <= txClockArea_tx_data_i0_d[11 : 6];
            txClockArea_tx_data_n <= txClockArea_tx_data_q0_d[11 : 6];
          end
          default : begin
            txClockArea_tx_frame <= 1'b0;
            txClockArea_tx_data_p <= 6'h0;
            txClockArea_tx_data_n <= 6'h0;
          end
        endcase
      end else begin
        txClockArea_tx_frame <= 1'b0;
        txClockArea_tx_data_p <= 6'h0;
        txClockArea_tx_data_n <= 6'h0;
      end
    end
  end


endmodule
