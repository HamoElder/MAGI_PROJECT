// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : StreamMac
// Git hash  : 1b04ce4c07117ede1ed6ce66b8cd8d68cd272b80

`timescale 1ns/1ps

module StreamMac (
  input               trans_data_tvalid,
  output              trans_data_tready,
  input      [31:0]   trans_data_tdata,
  input      [3:0]    trans_data_tkeep,
  input               trans_data_tlast,
  output              phyTxInterface_valid,
  input               phyTxInterface_ready,
  output              phyTxInterface_payload_last,
  output     [7:0]    phyTxInterface_payload_fragment_data,
  input               eth_clk,
  input               eth_reset,
  input               clk,
  input               resetn
);

  wire                eth_to_core_fifoCc_io_push_valid;
  wire       [31:0]   eth_to_core_fifoCc_io_push_payload_data;
  wire       [3:0]    eth_to_core_fifoCc_io_push_payload_keep_;
  wire                eth_to_core_fifoCc_io_push_payload_last;
  wire                eth_to_core_fifoCc_io_pop_ready;
  wire       [10:0]   stream_package_gen_slices_cnt;
  wire                stream_package_gen_raw_data_tready;
  wire                stream_package_gen_pkg_data_valid;
  wire                stream_package_gen_pkg_data_payload_last;
  wire       [7:0]    stream_package_gen_pkg_data_payload_fragment;
  wire                core_to_eth_fifoCc_io_push_ready;
  wire                core_to_eth_fifoCc_io_pop_valid;
  wire                core_to_eth_fifoCc_io_pop_payload_last;
  wire       [7:0]    core_to_eth_fifoCc_io_pop_payload_fragment_data;
  wire       [6:0]    core_to_eth_fifoCc_io_pushOccupancy;
  wire       [6:0]    core_to_eth_fifoCc_io_popOccupancy;
  wire                eth_to_core_fifoCc_io_push_ready;
  wire                eth_to_core_fifoCc_io_pop_valid;
  wire       [31:0]   eth_to_core_fifoCc_io_pop_payload_data;
  wire       [3:0]    eth_to_core_fifoCc_io_pop_payload_keep_;
  wire                eth_to_core_fifoCc_io_pop_payload_last;
  wire       [6:0]    eth_to_core_fifoCc_io_pushOccupancy;
  wire       [6:0]    eth_to_core_fifoCc_io_popOccupancy;
  wire                ethClockArea_transmitter_raw_data_ready;
  wire                ethClockArea_transmitter_result_data_valid;
  wire                ethClockArea_transmitter_result_data_payload_last;
  wire       [7:0]    ethClockArea_transmitter_result_data_payload_fragment_data;

  StreamPkgGen stream_package_gen (
    .slices_limit              (11'h5dc                                          ), //i
    .slices_cnt                (stream_package_gen_slices_cnt[10:0]              ), //o
    .raw_data_tvalid           (trans_data_tvalid                                ), //i
    .raw_data_tready           (stream_package_gen_raw_data_tready               ), //o
    .raw_data_tdata            (trans_data_tdata[31:0]                           ), //i
    .raw_data_tkeep            (trans_data_tkeep[3:0]                            ), //i
    .raw_data_tlast            (trans_data_tlast                                 ), //i
    .pkg_data_valid            (stream_package_gen_pkg_data_valid                ), //o
    .pkg_data_ready            (core_to_eth_fifoCc_io_push_ready                 ), //i
    .pkg_data_payload_last     (stream_package_gen_pkg_data_payload_last         ), //o
    .pkg_data_payload_fragment (stream_package_gen_pkg_data_payload_fragment[7:0]), //o
    .clk                       (clk                                              ), //i
    .resetn                    (resetn                                           )  //i
  );
  StreamFifoCC core_to_eth_fifoCc (
    .io_push_valid                 (stream_package_gen_pkg_data_valid                   ), //i
    .io_push_ready                 (core_to_eth_fifoCc_io_push_ready                    ), //o
    .io_push_payload_last          (stream_package_gen_pkg_data_payload_last            ), //i
    .io_push_payload_fragment_data (stream_package_gen_pkg_data_payload_fragment[7:0]   ), //i
    .io_pop_valid                  (core_to_eth_fifoCc_io_pop_valid                     ), //o
    .io_pop_ready                  (ethClockArea_transmitter_raw_data_ready             ), //i
    .io_pop_payload_last           (core_to_eth_fifoCc_io_pop_payload_last              ), //o
    .io_pop_payload_fragment_data  (core_to_eth_fifoCc_io_pop_payload_fragment_data[7:0]), //o
    .io_pushOccupancy              (core_to_eth_fifoCc_io_pushOccupancy[6:0]            ), //o
    .io_popOccupancy               (core_to_eth_fifoCc_io_popOccupancy[6:0]             ), //o
    .clk                           (clk                                                 ), //i
    .resetn                        (resetn                                              ), //i
    .eth_clk                       (eth_clk                                             )  //i
  );
  StreamFifoCC_1 eth_to_core_fifoCc (
    .io_push_valid         (eth_to_core_fifoCc_io_push_valid             ), //i
    .io_push_ready         (eth_to_core_fifoCc_io_push_ready             ), //o
    .io_push_payload_data  (eth_to_core_fifoCc_io_push_payload_data[31:0]), //i
    .io_push_payload_keep_ (eth_to_core_fifoCc_io_push_payload_keep_[3:0]), //i
    .io_push_payload_last  (eth_to_core_fifoCc_io_push_payload_last      ), //i
    .io_pop_valid          (eth_to_core_fifoCc_io_pop_valid              ), //o
    .io_pop_ready          (eth_to_core_fifoCc_io_pop_ready              ), //i
    .io_pop_payload_data   (eth_to_core_fifoCc_io_pop_payload_data[31:0] ), //o
    .io_pop_payload_keep_  (eth_to_core_fifoCc_io_pop_payload_keep_[3:0] ), //o
    .io_pop_payload_last   (eth_to_core_fifoCc_io_pop_payload_last       ), //o
    .io_pushOccupancy      (eth_to_core_fifoCc_io_pushOccupancy[6:0]     ), //o
    .io_popOccupancy       (eth_to_core_fifoCc_io_popOccupancy[6:0]      ), //o
    .eth_clk               (eth_clk                                      ), //i
    .eth_reset             (eth_reset                                    ), //i
    .clk                   (clk                                          )  //i
  );
  MacTx ethClockArea_transmitter (
    .raw_data_valid                    (core_to_eth_fifoCc_io_pop_valid                                ), //i
    .raw_data_ready                    (ethClockArea_transmitter_raw_data_ready                        ), //o
    .raw_data_payload_last             (core_to_eth_fifoCc_io_pop_payload_last                         ), //i
    .raw_data_payload_fragment_data    (core_to_eth_fifoCc_io_pop_payload_fragment_data[7:0]           ), //i
    .result_data_valid                 (ethClockArea_transmitter_result_data_valid                     ), //o
    .result_data_ready                 (phyTxInterface_ready                                           ), //i
    .result_data_payload_last          (ethClockArea_transmitter_result_data_payload_last              ), //o
    .result_data_payload_fragment_data (ethClockArea_transmitter_result_data_payload_fragment_data[7:0]), //o
    .eth_clk                           (eth_clk                                                        ), //i
    .eth_reset                         (eth_reset                                                      )  //i
  );
  assign trans_data_tready = stream_package_gen_raw_data_tready;
  assign phyTxInterface_valid = ethClockArea_transmitter_result_data_valid;
  assign phyTxInterface_payload_last = ethClockArea_transmitter_result_data_payload_last;
  assign phyTxInterface_payload_fragment_data = ethClockArea_transmitter_result_data_payload_fragment_data;

endmodule

module MacTx (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment_data,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [7:0]    result_data_payload_fragment_data,
  input               eth_clk,
  input               eth_reset
);

  wire                mac_tx_padder_raw_data_ready;
  wire                mac_tx_padder_result_data_valid;
  wire                mac_tx_padder_result_data_payload_last;
  wire       [7:0]    mac_tx_padder_result_data_payload_fragment_data;
  wire                mac_crc_adder_raw_data_ready;
  wire                mac_crc_adder_result_data_valid;
  wire                mac_crc_adder_result_data_payload_last;
  wire       [7:0]    mac_crc_adder_result_data_payload_fragment_data;
  wire                mac_preamble_adder_raw_data_ready;
  wire                mac_preamble_adder_result_data_valid;
  wire                mac_preamble_adder_result_data_payload_last;
  wire       [7:0]    mac_preamble_adder_result_data_payload_fragment_data;
  wire                mac_aligned_raw_data_ready;
  wire                mac_aligned_result_data_valid;
  wire                mac_aligned_result_data_payload_last;
  wire       [7:0]    mac_aligned_result_data_payload_fragment_data;

  MacTxPadder mac_tx_padder (
    .raw_data_valid                    (raw_data_valid                                      ), //i
    .raw_data_ready                    (mac_tx_padder_raw_data_ready                        ), //o
    .raw_data_payload_last             (raw_data_payload_last                               ), //i
    .raw_data_payload_fragment_data    (raw_data_payload_fragment_data[7:0]                 ), //i
    .result_data_valid                 (mac_tx_padder_result_data_valid                     ), //o
    .result_data_ready                 (mac_crc_adder_raw_data_ready                        ), //i
    .result_data_payload_last          (mac_tx_padder_result_data_payload_last              ), //o
    .result_data_payload_fragment_data (mac_tx_padder_result_data_payload_fragment_data[7:0]), //o
    .eth_clk                           (eth_clk                                             ), //i
    .eth_reset                         (eth_reset                                           )  //i
  );
  MacTxCrc mac_crc_adder (
    .raw_data_valid                    (mac_tx_padder_result_data_valid                     ), //i
    .raw_data_ready                    (mac_crc_adder_raw_data_ready                        ), //o
    .raw_data_payload_last             (mac_tx_padder_result_data_payload_last              ), //i
    .raw_data_payload_fragment_data    (mac_tx_padder_result_data_payload_fragment_data[7:0]), //i
    .result_data_valid                 (mac_crc_adder_result_data_valid                     ), //o
    .result_data_ready                 (mac_preamble_adder_raw_data_ready                   ), //i
    .result_data_payload_last          (mac_crc_adder_result_data_payload_last              ), //o
    .result_data_payload_fragment_data (mac_crc_adder_result_data_payload_fragment_data[7:0]), //o
    .eth_clk                           (eth_clk                                             ), //i
    .eth_reset                         (eth_reset                                           )  //i
  );
  MacTxHeader mac_preamble_adder (
    .raw_data_valid                    (mac_crc_adder_result_data_valid                          ), //i
    .raw_data_ready                    (mac_preamble_adder_raw_data_ready                        ), //o
    .raw_data_payload_last             (mac_crc_adder_result_data_payload_last                   ), //i
    .raw_data_payload_fragment_data    (mac_crc_adder_result_data_payload_fragment_data[7:0]     ), //i
    .result_data_valid                 (mac_preamble_adder_result_data_valid                     ), //o
    .result_data_ready                 (mac_aligned_raw_data_ready                               ), //i
    .result_data_payload_last          (mac_preamble_adder_result_data_payload_last              ), //o
    .result_data_payload_fragment_data (mac_preamble_adder_result_data_payload_fragment_data[7:0]), //o
    .eth_clk                           (eth_clk                                                  ), //i
    .eth_reset                         (eth_reset                                                )  //i
  );
  MacTxAligner mac_aligned (
    .raw_data_valid                    (mac_preamble_adder_result_data_valid                     ), //i
    .raw_data_ready                    (mac_aligned_raw_data_ready                               ), //o
    .raw_data_payload_last             (mac_preamble_adder_result_data_payload_last              ), //i
    .raw_data_payload_fragment_data    (mac_preamble_adder_result_data_payload_fragment_data[7:0]), //i
    .result_data_valid                 (mac_aligned_result_data_valid                            ), //o
    .result_data_ready                 (result_data_ready                                        ), //i
    .result_data_payload_last          (mac_aligned_result_data_payload_last                     ), //o
    .result_data_payload_fragment_data (mac_aligned_result_data_payload_fragment_data[7:0]       ), //o
    .eth_clk                           (eth_clk                                                  ), //i
    .eth_reset                         (eth_reset                                                )  //i
  );
  assign raw_data_ready = mac_tx_padder_raw_data_ready;
  assign result_data_valid = mac_aligned_result_data_valid;
  assign result_data_payload_last = mac_aligned_result_data_payload_last;
  assign result_data_payload_fragment_data = mac_aligned_result_data_payload_fragment_data;

endmodule

module StreamFifoCC_1 (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload_data,
  input      [3:0]    io_push_payload_keep_,
  input               io_push_payload_last,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload_data,
  output     [3:0]    io_pop_payload_keep_,
  output              io_pop_payload_last,
  output     [6:0]    io_pushOccupancy,
  output     [6:0]    io_popOccupancy,
  input               eth_clk,
  input               eth_reset,
  input               clk
);

  reg        [36:0]   _zz_ram_port1;
  wire       [6:0]    popToPushGray_buffercc_io_dataOut;
  wire                bufferCC_6_io_dataOut;
  wire       [6:0]    pushToPopGray_buffercc_io_dataOut;
  wire       [6:0]    _zz_pushCC_pushPtrGray;
  wire       [5:0]    _zz_ram_port;
  wire       [36:0]   _zz_ram_port_1;
  wire       [6:0]    _zz_popCC_popPtrGray;
  wire       [5:0]    _zz_ram_port_2;
  wire                _zz_ram_port_3;
  wire       [5:0]    _zz__zz_io_pop_payload_data_1;
  wire                _zz__zz_io_pop_payload_data_1_1;
  reg                 _zz_1;
  wire       [6:0]    popToPushGray;
  wire       [6:0]    pushToPopGray;
  reg        [6:0]    pushCC_pushPtr;
  wire       [6:0]    pushCC_pushPtrPlus;
  wire                io_push_fire;
  reg        [6:0]    pushCC_pushPtrGray;
  wire       [6:0]    pushCC_popPtrGray;
  wire                pushCC_full;
  wire                io_push_fire_1;
  wire                _zz_io_pushOccupancy;
  wire                _zz_io_pushOccupancy_1;
  wire                _zz_io_pushOccupancy_2;
  wire                _zz_io_pushOccupancy_3;
  wire                _zz_io_pushOccupancy_4;
  wire                _zz_io_pushOccupancy_5;
  wire                toplevel_eth_reset_syncronized;
  reg        [6:0]    popCC_popPtr;
  wire       [6:0]    popCC_popPtrPlus;
  wire                io_pop_fire;
  reg        [6:0]    popCC_popPtrGray;
  wire       [6:0]    popCC_pushPtrGray;
  wire                popCC_empty;
  wire                io_pop_fire_1;
  wire       [6:0]    _zz_io_pop_payload_data;
  wire       [36:0]   _zz_io_pop_payload_data_1;
  wire                io_pop_fire_2;
  wire                _zz_io_popOccupancy;
  wire                _zz_io_popOccupancy_1;
  wire                _zz_io_popOccupancy_2;
  wire                _zz_io_popOccupancy_3;
  wire                _zz_io_popOccupancy_4;
  wire                _zz_io_popOccupancy_5;
  reg [36:0] ram [0:63];

  assign _zz_pushCC_pushPtrGray = (pushCC_pushPtrPlus >>> 1'b1);
  assign _zz_ram_port = pushCC_pushPtr[5:0];
  assign _zz_popCC_popPtrGray = (popCC_popPtrPlus >>> 1'b1);
  assign _zz__zz_io_pop_payload_data_1 = _zz_io_pop_payload_data[5:0];
  assign _zz_ram_port_1 = {io_push_payload_last,{io_push_payload_keep_,io_push_payload_data}};
  assign _zz__zz_io_pop_payload_data_1_1 = 1'b1;
  always @(posedge eth_clk) begin
    if(_zz_1) begin
      ram[_zz_ram_port] <= _zz_ram_port_1;
    end
  end

  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_data_1_1) begin
      _zz_ram_port1 <= ram[_zz__zz_io_pop_payload_data_1];
    end
  end

  BufferCC_3 popToPushGray_buffercc (
    .io_dataIn  (popToPushGray[6:0]                    ), //i
    .io_dataOut (popToPushGray_buffercc_io_dataOut[6:0]), //o
    .eth_clk    (eth_clk                               ), //i
    .eth_reset  (eth_reset                             )  //i
  );
  BufferCC_4 bufferCC_6 (
    .io_dataIn  (1'b1                 ), //i
    .io_dataOut (bufferCC_6_io_dataOut), //o
    .clk        (clk                  ), //i
    .eth_reset  (eth_reset            )  //i
  );
  BufferCC_5 pushToPopGray_buffercc (
    .io_dataIn                      (pushToPopGray[6:0]                    ), //i
    .io_dataOut                     (pushToPopGray_buffercc_io_dataOut[6:0]), //o
    .clk                            (clk                                   ), //i
    .toplevel_eth_reset_syncronized (toplevel_eth_reset_syncronized        )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(io_push_fire_1) begin
      _zz_1 = 1'b1;
    end
  end

  assign pushCC_pushPtrPlus = (pushCC_pushPtr + 7'h01);
  assign io_push_fire = (io_push_valid && io_push_ready);
  assign pushCC_popPtrGray = popToPushGray_buffercc_io_dataOut;
  assign pushCC_full = ((pushCC_pushPtrGray[6 : 5] == (~ pushCC_popPtrGray[6 : 5])) && (pushCC_pushPtrGray[4 : 0] == pushCC_popPtrGray[4 : 0]));
  assign io_push_ready = (! pushCC_full);
  assign io_push_fire_1 = (io_push_valid && io_push_ready);
  assign _zz_io_pushOccupancy = (pushCC_popPtrGray[1] ^ _zz_io_pushOccupancy_1);
  assign _zz_io_pushOccupancy_1 = (pushCC_popPtrGray[2] ^ _zz_io_pushOccupancy_2);
  assign _zz_io_pushOccupancy_2 = (pushCC_popPtrGray[3] ^ _zz_io_pushOccupancy_3);
  assign _zz_io_pushOccupancy_3 = (pushCC_popPtrGray[4] ^ _zz_io_pushOccupancy_4);
  assign _zz_io_pushOccupancy_4 = (pushCC_popPtrGray[5] ^ _zz_io_pushOccupancy_5);
  assign _zz_io_pushOccupancy_5 = pushCC_popPtrGray[6];
  assign io_pushOccupancy = (pushCC_pushPtr - {_zz_io_pushOccupancy_5,{_zz_io_pushOccupancy_4,{_zz_io_pushOccupancy_3,{_zz_io_pushOccupancy_2,{_zz_io_pushOccupancy_1,{_zz_io_pushOccupancy,(pushCC_popPtrGray[0] ^ _zz_io_pushOccupancy)}}}}}});
  assign toplevel_eth_reset_syncronized = bufferCC_6_io_dataOut;
  assign popCC_popPtrPlus = (popCC_popPtr + 7'h01);
  assign io_pop_fire = (io_pop_valid && io_pop_ready);
  assign popCC_pushPtrGray = pushToPopGray_buffercc_io_dataOut;
  assign popCC_empty = (popCC_popPtrGray == popCC_pushPtrGray);
  assign io_pop_valid = (! popCC_empty);
  assign io_pop_fire_1 = (io_pop_valid && io_pop_ready);
  assign _zz_io_pop_payload_data = (io_pop_fire_1 ? popCC_popPtrPlus : popCC_popPtr);
  assign _zz_io_pop_payload_data_1 = _zz_ram_port1;
  assign io_pop_payload_data = _zz_io_pop_payload_data_1[31 : 0];
  assign io_pop_payload_keep_ = _zz_io_pop_payload_data_1[35 : 32];
  assign io_pop_payload_last = _zz_io_pop_payload_data_1[36];
  assign io_pop_fire_2 = (io_pop_valid && io_pop_ready);
  assign _zz_io_popOccupancy = (popCC_pushPtrGray[1] ^ _zz_io_popOccupancy_1);
  assign _zz_io_popOccupancy_1 = (popCC_pushPtrGray[2] ^ _zz_io_popOccupancy_2);
  assign _zz_io_popOccupancy_2 = (popCC_pushPtrGray[3] ^ _zz_io_popOccupancy_3);
  assign _zz_io_popOccupancy_3 = (popCC_pushPtrGray[4] ^ _zz_io_popOccupancy_4);
  assign _zz_io_popOccupancy_4 = (popCC_pushPtrGray[5] ^ _zz_io_popOccupancy_5);
  assign _zz_io_popOccupancy_5 = popCC_pushPtrGray[6];
  assign io_popOccupancy = ({_zz_io_popOccupancy_5,{_zz_io_popOccupancy_4,{_zz_io_popOccupancy_3,{_zz_io_popOccupancy_2,{_zz_io_popOccupancy_1,{_zz_io_popOccupancy,(popCC_pushPtrGray[0] ^ _zz_io_popOccupancy)}}}}}} - popCC_popPtr);
  assign pushToPopGray = pushCC_pushPtrGray;
  assign popToPushGray = popCC_popPtrGray;
  always @(posedge eth_clk) begin
    if(eth_reset) begin
      pushCC_pushPtr <= 7'h0;
      pushCC_pushPtrGray <= 7'h0;
    end else begin
      if(io_push_fire) begin
        pushCC_pushPtrGray <= (_zz_pushCC_pushPtrGray ^ pushCC_pushPtrPlus);
      end
      if(io_push_fire_1) begin
        pushCC_pushPtr <= pushCC_pushPtrPlus;
      end
    end
  end

  always @(posedge clk) begin
    if(!toplevel_eth_reset_syncronized) begin
      popCC_popPtr <= 7'h0;
      popCC_popPtrGray <= 7'h0;
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

module StreamFifoCC (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [7:0]    io_push_payload_fragment_data,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [7:0]    io_pop_payload_fragment_data,
  output     [6:0]    io_pushOccupancy,
  output     [6:0]    io_popOccupancy,
  input               clk,
  input               resetn,
  input               eth_clk
);

  reg        [8:0]    _zz_ram_port1;
  wire       [6:0]    popToPushGray_buffercc_io_dataOut;
  wire                bufferCC_6_io_dataOut;
  wire       [6:0]    pushToPopGray_buffercc_io_dataOut;
  wire       [6:0]    _zz_pushCC_pushPtrGray;
  wire       [5:0]    _zz_ram_port;
  wire       [8:0]    _zz_ram_port_1;
  wire       [6:0]    _zz_popCC_popPtrGray;
  wire       [5:0]    _zz_ram_port_2;
  wire                _zz_ram_port_3;
  wire       [5:0]    _zz__zz_io_pop_payload_last_1;
  wire                _zz__zz_io_pop_payload_last_1_1;
  wire       [7:0]    _zz_io_pop_payload_fragment_data;
  reg                 _zz_1;
  wire       [6:0]    popToPushGray;
  wire       [6:0]    pushToPopGray;
  reg        [6:0]    pushCC_pushPtr;
  wire       [6:0]    pushCC_pushPtrPlus;
  wire                io_push_fire;
  reg        [6:0]    pushCC_pushPtrGray;
  wire       [6:0]    pushCC_popPtrGray;
  wire                pushCC_full;
  wire                io_push_fire_1;
  wire                _zz_io_pushOccupancy;
  wire                _zz_io_pushOccupancy_1;
  wire                _zz_io_pushOccupancy_2;
  wire                _zz_io_pushOccupancy_3;
  wire                _zz_io_pushOccupancy_4;
  wire                _zz_io_pushOccupancy_5;
  wire                resetn_syncronized;
  reg        [6:0]    popCC_popPtr;
  wire       [6:0]    popCC_popPtrPlus;
  wire                io_pop_fire;
  reg        [6:0]    popCC_popPtrGray;
  wire       [6:0]    popCC_pushPtrGray;
  wire                popCC_empty;
  wire                io_pop_fire_1;
  wire       [6:0]    _zz_io_pop_payload_last;
  wire       [8:0]    _zz_io_pop_payload_last_1;
  wire                io_pop_fire_2;
  wire                _zz_io_popOccupancy;
  wire                _zz_io_popOccupancy_1;
  wire                _zz_io_popOccupancy_2;
  wire                _zz_io_popOccupancy_3;
  wire                _zz_io_popOccupancy_4;
  wire                _zz_io_popOccupancy_5;
  reg [8:0] ram [0:63];

  assign _zz_pushCC_pushPtrGray = (pushCC_pushPtrPlus >>> 1'b1);
  assign _zz_ram_port = pushCC_pushPtr[5:0];
  assign _zz_popCC_popPtrGray = (popCC_popPtrPlus >>> 1'b1);
  assign _zz__zz_io_pop_payload_last_1 = _zz_io_pop_payload_last[5:0];
  assign _zz_io_pop_payload_fragment_data = _zz_io_pop_payload_last_1[8 : 1];
  assign _zz_ram_port_1 = {io_push_payload_fragment_data,io_push_payload_last};
  assign _zz__zz_io_pop_payload_last_1_1 = 1'b1;
  always @(posedge clk) begin
    if(_zz_1) begin
      ram[_zz_ram_port] <= _zz_ram_port_1;
    end
  end

  always @(posedge eth_clk) begin
    if(_zz__zz_io_pop_payload_last_1_1) begin
      _zz_ram_port1 <= ram[_zz__zz_io_pop_payload_last_1];
    end
  end

  BufferCC popToPushGray_buffercc (
    .io_dataIn  (popToPushGray[6:0]                    ), //i
    .io_dataOut (popToPushGray_buffercc_io_dataOut[6:0]), //o
    .clk        (clk                                   ), //i
    .resetn     (resetn                                )  //i
  );
  BufferCC_1 bufferCC_6 (
    .io_dataIn  (1'b0                 ), //i
    .io_dataOut (bufferCC_6_io_dataOut), //o
    .eth_clk    (eth_clk              ), //i
    .resetn     (resetn               )  //i
  );
  BufferCC_2 pushToPopGray_buffercc (
    .io_dataIn          (pushToPopGray[6:0]                    ), //i
    .io_dataOut         (pushToPopGray_buffercc_io_dataOut[6:0]), //o
    .eth_clk            (eth_clk                               ), //i
    .resetn_syncronized (resetn_syncronized                    )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(io_push_fire_1) begin
      _zz_1 = 1'b1;
    end
  end

  assign pushCC_pushPtrPlus = (pushCC_pushPtr + 7'h01);
  assign io_push_fire = (io_push_valid && io_push_ready);
  assign pushCC_popPtrGray = popToPushGray_buffercc_io_dataOut;
  assign pushCC_full = ((pushCC_pushPtrGray[6 : 5] == (~ pushCC_popPtrGray[6 : 5])) && (pushCC_pushPtrGray[4 : 0] == pushCC_popPtrGray[4 : 0]));
  assign io_push_ready = (! pushCC_full);
  assign io_push_fire_1 = (io_push_valid && io_push_ready);
  assign _zz_io_pushOccupancy = (pushCC_popPtrGray[1] ^ _zz_io_pushOccupancy_1);
  assign _zz_io_pushOccupancy_1 = (pushCC_popPtrGray[2] ^ _zz_io_pushOccupancy_2);
  assign _zz_io_pushOccupancy_2 = (pushCC_popPtrGray[3] ^ _zz_io_pushOccupancy_3);
  assign _zz_io_pushOccupancy_3 = (pushCC_popPtrGray[4] ^ _zz_io_pushOccupancy_4);
  assign _zz_io_pushOccupancy_4 = (pushCC_popPtrGray[5] ^ _zz_io_pushOccupancy_5);
  assign _zz_io_pushOccupancy_5 = pushCC_popPtrGray[6];
  assign io_pushOccupancy = (pushCC_pushPtr - {_zz_io_pushOccupancy_5,{_zz_io_pushOccupancy_4,{_zz_io_pushOccupancy_3,{_zz_io_pushOccupancy_2,{_zz_io_pushOccupancy_1,{_zz_io_pushOccupancy,(pushCC_popPtrGray[0] ^ _zz_io_pushOccupancy)}}}}}});
  assign resetn_syncronized = bufferCC_6_io_dataOut;
  assign popCC_popPtrPlus = (popCC_popPtr + 7'h01);
  assign io_pop_fire = (io_pop_valid && io_pop_ready);
  assign popCC_pushPtrGray = pushToPopGray_buffercc_io_dataOut;
  assign popCC_empty = (popCC_popPtrGray == popCC_pushPtrGray);
  assign io_pop_valid = (! popCC_empty);
  assign io_pop_fire_1 = (io_pop_valid && io_pop_ready);
  assign _zz_io_pop_payload_last = (io_pop_fire_1 ? popCC_popPtrPlus : popCC_popPtr);
  assign _zz_io_pop_payload_last_1 = _zz_ram_port1;
  assign io_pop_payload_last = _zz_io_pop_payload_last_1[0];
  assign io_pop_payload_fragment_data = _zz_io_pop_payload_fragment_data[7 : 0];
  assign io_pop_fire_2 = (io_pop_valid && io_pop_ready);
  assign _zz_io_popOccupancy = (popCC_pushPtrGray[1] ^ _zz_io_popOccupancy_1);
  assign _zz_io_popOccupancy_1 = (popCC_pushPtrGray[2] ^ _zz_io_popOccupancy_2);
  assign _zz_io_popOccupancy_2 = (popCC_pushPtrGray[3] ^ _zz_io_popOccupancy_3);
  assign _zz_io_popOccupancy_3 = (popCC_pushPtrGray[4] ^ _zz_io_popOccupancy_4);
  assign _zz_io_popOccupancy_4 = (popCC_pushPtrGray[5] ^ _zz_io_popOccupancy_5);
  assign _zz_io_popOccupancy_5 = popCC_pushPtrGray[6];
  assign io_popOccupancy = ({_zz_io_popOccupancy_5,{_zz_io_popOccupancy_4,{_zz_io_popOccupancy_3,{_zz_io_popOccupancy_2,{_zz_io_popOccupancy_1,{_zz_io_popOccupancy,(popCC_pushPtrGray[0] ^ _zz_io_popOccupancy)}}}}}} - popCC_popPtr);
  assign pushToPopGray = pushCC_pushPtrGray;
  assign popToPushGray = popCC_popPtrGray;
  always @(posedge clk) begin
    if(!resetn) begin
      pushCC_pushPtr <= 7'h0;
      pushCC_pushPtrGray <= 7'h0;
    end else begin
      if(io_push_fire) begin
        pushCC_pushPtrGray <= (_zz_pushCC_pushPtrGray ^ pushCC_pushPtrPlus);
      end
      if(io_push_fire_1) begin
        pushCC_pushPtr <= pushCC_pushPtrPlus;
      end
    end
  end

  always @(posedge eth_clk) begin
    if(resetn_syncronized) begin
      popCC_popPtr <= 7'h0;
      popCC_popPtrGray <= 7'h0;
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

module StreamPkgGen (
  input      [10:0]   slices_limit,
  output     [10:0]   slices_cnt,
  input               raw_data_tvalid,
  output              raw_data_tready,
  input      [31:0]   raw_data_tdata,
  input      [3:0]    raw_data_tkeep,
  input               raw_data_tlast,
  output              pkg_data_valid,
  input               pkg_data_ready,
  output              pkg_data_payload_last,
  output     [7:0]    pkg_data_payload_fragment,
  input               clk,
  input               resetn
);

  wire                split_core_raw_data_ready;
  wire                split_core_split_data_valid;
  wire       [7:0]    split_core_split_data_payload;
  wire       [10:0]   _zz_pkg_data_payload_last;
  wire       [10:0]   _zz_pkg_slices_cnt;
  reg        [3:0]    bit_valid_buf;
  reg        [10:0]   pkg_slices_cnt;
  wire                bit_valid;
  reg                 raw_data_last;
  wire                raw_data_stream_fire;
  wire                split_core_split_data_fire;

  assign _zz_pkg_data_payload_last = (slices_limit - 11'h001);
  assign _zz_pkg_slices_cnt = (pkg_slices_cnt + 11'h001);
  StreamPayloadSplit split_core (
    .raw_data_valid     (raw_data_tvalid                   ), //i
    .raw_data_ready     (split_core_raw_data_ready         ), //o
    .raw_data_payload   (raw_data_tdata[31:0]              ), //i
    .split_data_valid   (split_core_split_data_valid       ), //o
    .split_data_ready   (pkg_data_ready                    ), //i
    .split_data_payload (split_core_split_data_payload[7:0]), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  assign bit_valid = bit_valid_buf[0];
  assign raw_data_tready = split_core_raw_data_ready;
  assign pkg_data_valid = (split_core_split_data_valid && bit_valid);
  assign pkg_data_payload_fragment = split_core_split_data_payload;
  assign pkg_data_payload_last = ((pkg_slices_cnt == _zz_pkg_data_payload_last) || (raw_data_last && (bit_valid_buf == 4'b0001)));
  assign raw_data_stream_fire = (raw_data_tvalid && raw_data_tready);
  assign split_core_split_data_fire = (split_core_split_data_valid && pkg_data_ready);
  assign slices_cnt = pkg_slices_cnt;
  always @(posedge clk) begin
    if(!resetn) begin
      pkg_slices_cnt <= 11'h0;
      raw_data_last <= 1'b0;
    end else begin
      if(raw_data_stream_fire) begin
        raw_data_last <= raw_data_tlast;
      end else begin
        if(split_core_split_data_fire) begin
          pkg_slices_cnt <= (pkg_data_payload_last ? 11'h0 : _zz_pkg_slices_cnt);
        end
      end
    end
  end

  always @(posedge clk) begin
    if(raw_data_stream_fire) begin
      bit_valid_buf <= raw_data_tkeep;
    end else begin
      if(split_core_split_data_fire) begin
        bit_valid_buf <= (bit_valid_buf >>> 1);
      end
    end
  end


endmodule

module MacTxAligner (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment_data,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [7:0]    result_data_payload_fragment_data,
  input               eth_clk,
  input               eth_reset
);

  wire                data_fifo_io_pop_ready;
  wire                data_fifo_io_push_ready;
  wire                data_fifo_io_pop_valid;
  wire                data_fifo_io_pop_payload_last;
  wire       [7:0]    data_fifo_io_pop_payload_fragment_data;
  wire       [10:0]   data_fifo_io_occupancy;
  wire       [10:0]   data_fifo_io_availability;
  reg        [4:0]    cnt;
  wire                raw_data_fire;
  wire                result_data_fire;
  wire                when_MacTx_l116;
  wire                result_data_fire_1;
  wire                when_MacTx_l120;
  wire                _zz_result_data_valid;

  StreamFifo data_fifo (
    .io_push_valid                 (raw_data_valid                             ), //i
    .io_push_ready                 (data_fifo_io_push_ready                    ), //o
    .io_push_payload_last          (raw_data_payload_last                      ), //i
    .io_push_payload_fragment_data (raw_data_payload_fragment_data[7:0]        ), //i
    .io_pop_valid                  (data_fifo_io_pop_valid                     ), //o
    .io_pop_ready                  (data_fifo_io_pop_ready                     ), //i
    .io_pop_payload_last           (data_fifo_io_pop_payload_last              ), //o
    .io_pop_payload_fragment_data  (data_fifo_io_pop_payload_fragment_data[7:0]), //o
    .io_flush                      (1'b0                                       ), //i
    .io_occupancy                  (data_fifo_io_occupancy[10:0]               ), //o
    .io_availability               (data_fifo_io_availability[10:0]            ), //o
    .eth_clk                       (eth_clk                                    ), //i
    .eth_reset                     (eth_reset                                  )  //i
  );
  assign raw_data_ready = data_fifo_io_push_ready;
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_MacTx_l116 = ((raw_data_fire && raw_data_payload_last) && (result_data_fire && result_data_payload_last));
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_MacTx_l120 = (result_data_fire_1 && result_data_payload_last);
  assign _zz_result_data_valid = (! (cnt == 5'h0));
  assign data_fifo_io_pop_ready = (result_data_ready && _zz_result_data_valid);
  assign result_data_valid = (data_fifo_io_pop_valid && _zz_result_data_valid);
  assign result_data_payload_last = data_fifo_io_pop_payload_last;
  assign result_data_payload_fragment_data = data_fifo_io_pop_payload_fragment_data;
  always @(posedge eth_clk) begin
    if(eth_reset) begin
      cnt <= 5'h0;
    end else begin
      if(when_MacTx_l116) begin
        cnt <= cnt;
      end else begin
        if(raw_data_payload_last) begin
          cnt <= (cnt + 5'h01);
        end else begin
          if(when_MacTx_l120) begin
            cnt <= (cnt - 5'h01);
          end
        end
      end
    end
  end


endmodule

module MacTxHeader (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment_data,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [7:0]    result_data_payload_fragment_data,
  input               eth_clk,
  input               eth_reset
);

  reg        [7:0]    _zz_result_data_payload_fragment_data;
  wire       [2:0]    _zz_result_data_payload_fragment_data_1;
  wire       [63:0]   header;
  reg        [3:0]    header_cnt;
  wire                when_MacTx_l55;
  wire                result_data_fire;
  wire                result_data_fire_1;
  wire                when_MacTx_l64;

  assign _zz_result_data_payload_fragment_data_1 = header_cnt[2:0];
  always @(*) begin
    case(_zz_result_data_payload_fragment_data_1)
      3'b000 : _zz_result_data_payload_fragment_data = header[63 : 56];
      3'b001 : _zz_result_data_payload_fragment_data = header[55 : 48];
      3'b010 : _zz_result_data_payload_fragment_data = header[47 : 40];
      3'b011 : _zz_result_data_payload_fragment_data = header[39 : 32];
      3'b100 : _zz_result_data_payload_fragment_data = header[31 : 24];
      3'b101 : _zz_result_data_payload_fragment_data = header[23 : 16];
      3'b110 : _zz_result_data_payload_fragment_data = header[15 : 8];
      default : _zz_result_data_payload_fragment_data = header[7 : 0];
    endcase
  end

  assign header = 64'h55555555555555d5;
  assign when_MacTx_l55 = (header_cnt < 4'b1000);
  always @(*) begin
    if(when_MacTx_l55) begin
      result_data_payload_fragment_data = _zz_result_data_payload_fragment_data;
    end else begin
      result_data_payload_fragment_data = raw_data_payload_fragment_data;
    end
  end

  assign result_data_fire = (result_data_valid && result_data_ready);
  always @(*) begin
    if(when_MacTx_l55) begin
      result_data_valid = 1'b1;
    end else begin
      result_data_valid = raw_data_valid;
    end
  end

  always @(*) begin
    if(when_MacTx_l55) begin
      result_data_payload_last = 1'b0;
    end else begin
      result_data_payload_last = raw_data_payload_last;
    end
  end

  always @(*) begin
    if(when_MacTx_l55) begin
      raw_data_ready = 1'b0;
    end else begin
      raw_data_ready = result_data_ready;
    end
  end

  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_MacTx_l64 = (result_data_fire_1 && result_data_payload_last);
  always @(posedge eth_clk) begin
    if(eth_reset) begin
      header_cnt <= 4'b0000;
    end else begin
      if(when_MacTx_l55) begin
        if(result_data_fire) begin
          header_cnt <= (header_cnt + 4'b0001);
        end
      end else begin
        if(when_MacTx_l64) begin
          header_cnt <= 4'b0000;
        end
      end
    end
  end


endmodule

module MacTxCrc (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment_data,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [7:0]    result_data_payload_fragment_data,
  input               eth_clk,
  input               eth_reset
);

  wire                crc_1_flush;
  wire       [31:0]   crc_1_result;
  wire       [31:0]   crc_1_resultNext;
  reg        [7:0]    _zz_result_data_payload_fragment_data;
  reg                 emitCrc;
  wire                raw_data_fire;
  wire                when_MacTx_l16;
  wire                result_data_fire;
  wire                when_MacTx_l16_1;
  reg        [1:0]    counter;
  wire                raw_data_fire_1;
  wire                result_data_fire_1;
  wire                when_MacTx_l23;
  wire                when_MacTx_l31;

  Crc crc_1 (
    .flush         (crc_1_flush                        ), //i
    .input_valid   (raw_data_fire_1                    ), //i
    .input_payload (raw_data_payload_fragment_data[7:0]), //i
    .result        (crc_1_result[31:0]                 ), //o
    .resultNext    (crc_1_resultNext[31:0]             ), //o
    .eth_clk       (eth_clk                            ), //i
    .eth_reset     (eth_reset                          )  //i
  );
  always @(*) begin
    case(counter)
      2'b00 : _zz_result_data_payload_fragment_data = crc_1_result[7 : 0];
      2'b01 : _zz_result_data_payload_fragment_data = crc_1_result[15 : 8];
      2'b10 : _zz_result_data_payload_fragment_data = crc_1_result[23 : 16];
      default : _zz_result_data_payload_fragment_data = crc_1_result[31 : 24];
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_MacTx_l16 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_MacTx_l16_1 = (result_data_fire && result_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign crc_1_flush = (result_data_fire_1 && result_data_payload_last);
  always @(*) begin
    result_data_payload_last = 1'b0;
    if(!when_MacTx_l23) begin
      if(when_MacTx_l31) begin
        result_data_payload_last = 1'b1;
      end
    end
  end

  assign when_MacTx_l23 = (! emitCrc);
  always @(*) begin
    if(when_MacTx_l23) begin
      result_data_valid = raw_data_valid;
    end else begin
      result_data_valid = 1'b1;
    end
  end

  always @(*) begin
    if(when_MacTx_l23) begin
      result_data_payload_fragment_data = raw_data_payload_fragment_data;
    end else begin
      result_data_payload_fragment_data = _zz_result_data_payload_fragment_data;
    end
  end

  always @(*) begin
    if(when_MacTx_l23) begin
      raw_data_ready = result_data_ready;
    end else begin
      raw_data_ready = 1'b0;
    end
  end

  assign when_MacTx_l31 = (counter == 2'b11);
  always @(posedge eth_clk) begin
    if(eth_reset) begin
      emitCrc <= 1'b0;
      counter <= 2'b00;
    end else begin
      if(when_MacTx_l16) begin
        emitCrc <= 1'b1;
      end
      if(when_MacTx_l16_1) begin
        emitCrc <= 1'b0;
      end
      if(!when_MacTx_l23) begin
        if(when_MacTx_l31) begin
          if(result_data_ready) begin
            emitCrc <= 1'b0;
          end
        end
        if(result_data_ready) begin
          counter <= (counter + 2'b01);
        end
      end
    end
  end


endmodule

module MacTxPadder (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment_data,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [7:0]    result_data_payload_fragment_data,
  input               eth_clk,
  input               eth_reset
);

  reg        [5:0]    counter;
  wire                ok;
  wire                raw_data_fire;
  reg                 raw_data_payload_first;
  wire                fill;
  wire                result_data_fire;
  wire                when_MacTx_l87;
  wire                result_data_fire_1;
  wire                when_MacTx_l90;
  wire                _zz_raw_data_ready;
  wire                when_MacTx_l94;

  assign ok = (counter == 6'h3b);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign fill = ((counter != 6'h0) && raw_data_payload_first);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_MacTx_l87 = ((! ok) && result_data_fire);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_MacTx_l90 = (result_data_fire_1 && result_data_payload_last);
  assign _zz_raw_data_ready = (! fill);
  assign raw_data_ready = (result_data_ready && _zz_raw_data_ready);
  always @(*) begin
    result_data_valid = (raw_data_valid && _zz_raw_data_ready);
    if(fill) begin
      result_data_valid = 1'b1;
    end
  end

  always @(*) begin
    result_data_payload_last = raw_data_payload_last;
    if(when_MacTx_l94) begin
      result_data_payload_last = 1'b0;
    end
    if(fill) begin
      result_data_payload_last = ok;
    end
  end

  always @(*) begin
    result_data_payload_fragment_data = raw_data_payload_fragment_data;
    if(fill) begin
      result_data_payload_fragment_data = 8'h0;
    end
  end

  assign when_MacTx_l94 = (! ok);
  always @(posedge eth_clk) begin
    if(eth_reset) begin
      counter <= 6'h0;
      raw_data_payload_first <= 1'b1;
    end else begin
      if(raw_data_fire) begin
        raw_data_payload_first <= raw_data_payload_last;
      end
      if(when_MacTx_l87) begin
        counter <= (counter + 6'h01);
      end
      if(when_MacTx_l90) begin
        counter <= 6'h0;
      end
    end
  end


endmodule

module BufferCC_5 (
  input      [6:0]    io_dataIn,
  output     [6:0]    io_dataOut,
  input               clk,
  input               toplevel_eth_reset_syncronized
);

  (* async_reg = "true" *) reg        [6:0]    buffers_0;
  (* async_reg = "true" *) reg        [6:0]    buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    if(!toplevel_eth_reset_syncronized) begin
      buffers_0 <= 7'h0;
      buffers_1 <= 7'h0;
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
  input               eth_reset
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk or posedge eth_reset) begin
    if(eth_reset) begin
      buffers_0 <= 1'b0;
      buffers_1 <= 1'b0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_3 (
  input      [6:0]    io_dataIn,
  output     [6:0]    io_dataOut,
  input               eth_clk,
  input               eth_reset
);

  (* async_reg = "true" *) reg        [6:0]    buffers_0;
  (* async_reg = "true" *) reg        [6:0]    buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge eth_clk) begin
    if(eth_reset) begin
      buffers_0 <= 7'h0;
      buffers_1 <= 7'h0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_2 (
  input      [6:0]    io_dataIn,
  output     [6:0]    io_dataOut,
  input               eth_clk,
  input               resetn_syncronized
);

  (* async_reg = "true" *) reg        [6:0]    buffers_0;
  (* async_reg = "true" *) reg        [6:0]    buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge eth_clk) begin
    if(resetn_syncronized) begin
      buffers_0 <= 7'h0;
      buffers_1 <= 7'h0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_1 (
  input               io_dataIn,
  output              io_dataOut,
  input               eth_clk,
  input               resetn
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge eth_clk or negedge resetn) begin
    if(!resetn) begin
      buffers_0 <= 1'b1;
      buffers_1 <= 1'b1;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC (
  input      [6:0]    io_dataIn,
  output     [6:0]    io_dataOut,
  input               clk,
  input               resetn
);

  (* async_reg = "true" *) reg        [6:0]    buffers_0;
  (* async_reg = "true" *) reg        [6:0]    buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    if(!resetn) begin
      buffers_0 <= 7'h0;
      buffers_1 <= 7'h0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module StreamPayloadSplit (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [31:0]   raw_data_payload,
  output              split_data_valid,
  input               split_data_ready,
  output     [7:0]    split_data_payload,
  input               clk,
  input               resetn
);

  reg        [2:0]    cnt;
  reg        [31:0]   data_buf;
  wire                raw_data_fire;
  wire                split_data_fire;

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign split_data_fire = (split_data_valid && split_data_ready);
  assign raw_data_ready = (cnt == 3'b000);
  assign split_data_valid = (cnt != 3'b000);
  assign split_data_payload = data_buf[7:0];
  always @(posedge clk) begin
    if(!resetn) begin
      cnt <= 3'b000;
    end else begin
      if(raw_data_fire) begin
        cnt <= 3'b100;
      end else begin
        if(split_data_fire) begin
          cnt <= (cnt - 3'b001);
        end
      end
    end
  end

  always @(posedge clk) begin
    if(raw_data_fire) begin
      data_buf <= raw_data_payload;
    end else begin
      if(split_data_fire) begin
        data_buf <= (data_buf >>> 8);
      end
    end
  end


endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [7:0]    io_push_payload_fragment_data,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [7:0]    io_pop_payload_fragment_data,
  input               io_flush,
  output reg [10:0]   io_occupancy,
  output reg [10:0]   io_availability,
  input               eth_clk,
  input               eth_reset
);

  reg        [8:0]    _zz_logic_ram_port0;
  wire       [10:0]   _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [10:0]   _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [7:0]    _zz_io_pop_payload_fragment_data;
  wire       [8:0]    _zz_logic_ram_port_1;
  wire       [10:0]   _zz_io_occupancy;
  wire       [10:0]   _zz_io_availability;
  wire       [10:0]   _zz_io_availability_1;
  wire       [10:0]   _zz_io_availability_2;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [10:0]   logic_pushPtr_valueNext;
  reg        [10:0]   logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [10:0]   logic_popPtr_valueNext;
  reg        [10:0]   logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [8:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l1021;
  wire       [10:0]   logic_ptrDif;
  reg [8:0] logic_ram [0:1599];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {10'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {10'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_pop_payload_fragment_data = _zz_io_pop_payload_last[8 : 1];
  assign _zz_io_occupancy = (11'h640 + logic_ptrDif);
  assign _zz_io_availability = (11'h640 + _zz_io_availability_1);
  assign _zz_io_availability_1 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_availability_2 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_fragment_data,io_push_payload_last};
  always @(posedge eth_clk) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge eth_clk) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 11'h63f);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 11'h0;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 11'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 11'h63f);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 11'h0;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 11'h0;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment_data = _zz_io_pop_payload_fragment_data[7 : 0];
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 11'h640 : 11'h0);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 11'h0 : 11'h640);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

  always @(posedge eth_clk) begin
    if(eth_reset) begin
      logic_pushPtr_value <= 11'h0;
      logic_popPtr_value <= 11'h0;
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

module Crc (
  input               flush,
  input               input_valid,
  input      [7:0]    input_payload,
  output     [31:0]   result,
  output     [31:0]   resultNext,
  input               eth_clk,
  input               eth_reset
);

  wire       [31:0]   _zz_state_1;
  wire       [31:0]   _zz_state_2;
  wire       [31:0]   _zz_state_3;
  wire       [31:0]   _zz_state_4;
  wire       [31:0]   _zz_state_5;
  wire       [31:0]   _zz_state_6;
  wire       [31:0]   _zz_state_7;
  wire       [31:0]   _zz_state_8;
  wire                _zz_result;
  wire       [0:0]    _zz_result_1;
  wire       [20:0]   _zz_result_2;
  wire                _zz_result_3;
  wire       [0:0]    _zz_result_4;
  wire       [9:0]    _zz_result_5;
  wire                _zz_resultNext;
  wire       [0:0]    _zz_resultNext_1;
  wire       [20:0]   _zz_resultNext_2;
  wire                _zz_resultNext_3;
  wire       [0:0]    _zz_resultNext_4;
  wire       [9:0]    _zz_resultNext_5;
  reg        [31:0]   state_8;
  reg        [31:0]   state_7;
  reg        [31:0]   state_6;
  reg        [31:0]   state_5;
  reg        [31:0]   state_4;
  reg        [31:0]   state_3;
  reg        [31:0]   state_2;
  reg        [31:0]   state_1;
  reg        [31:0]   state;
  wire       [31:0]   stateXor;
  wire       [31:0]   accXor;

  assign _zz_state_1 = (state <<< 1);
  assign _zz_state_2 = (state_1 <<< 1);
  assign _zz_state_3 = (state_2 <<< 1);
  assign _zz_state_4 = (state_3 <<< 1);
  assign _zz_state_5 = (state_4 <<< 1);
  assign _zz_state_6 = (state_5 <<< 1);
  assign _zz_state_7 = (state_6 <<< 1);
  assign _zz_state_8 = (state_7 <<< 1);
  assign _zz_result = stateXor[9];
  assign _zz_result_1 = stateXor[10];
  assign _zz_result_2 = {stateXor[11],{stateXor[12],{stateXor[13],{stateXor[14],{stateXor[15],{stateXor[16],{stateXor[17],{stateXor[18],{stateXor[19],{_zz_result_3,{_zz_result_4,_zz_result_5}}}}}}}}}}};
  assign _zz_result_3 = stateXor[20];
  assign _zz_result_4 = stateXor[21];
  assign _zz_result_5 = {stateXor[22],{stateXor[23],{stateXor[24],{stateXor[25],{stateXor[26],{stateXor[27],{stateXor[28],{stateXor[29],{stateXor[30],stateXor[31]}}}}}}}}};
  assign _zz_resultNext = accXor[9];
  assign _zz_resultNext_1 = accXor[10];
  assign _zz_resultNext_2 = {accXor[11],{accXor[12],{accXor[13],{accXor[14],{accXor[15],{accXor[16],{accXor[17],{accXor[18],{accXor[19],{_zz_resultNext_3,{_zz_resultNext_4,_zz_resultNext_5}}}}}}}}}}};
  assign _zz_resultNext_3 = accXor[20];
  assign _zz_resultNext_4 = accXor[21];
  assign _zz_resultNext_5 = {accXor[22],{accXor[23],{accXor[24],{accXor[25],{accXor[26],{accXor[27],{accXor[28],{accXor[29],{accXor[30],accXor[31]}}}}}}}}};
  always @(*) begin
    state_8 = state_7;
    state_8 = (_zz_state_8 ^ ((input_payload[7] ^ state_7[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_7 = state_6;
    state_7 = (_zz_state_7 ^ ((input_payload[6] ^ state_6[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_6 = state_5;
    state_6 = (_zz_state_6 ^ ((input_payload[5] ^ state_5[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_5 = state_4;
    state_5 = (_zz_state_5 ^ ((input_payload[4] ^ state_4[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_4 = state_3;
    state_4 = (_zz_state_4 ^ ((input_payload[3] ^ state_3[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_3 = state_2;
    state_3 = (_zz_state_3 ^ ((input_payload[2] ^ state_2[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_2 = state_1;
    state_2 = (_zz_state_2 ^ ((input_payload[1] ^ state_1[31]) ? 32'h04c11db7 : 32'h0));
  end

  always @(*) begin
    state_1 = state;
    state_1 = (_zz_state_1 ^ ((input_payload[0] ^ state[31]) ? 32'h04c11db7 : 32'h0));
  end

  assign stateXor = (state ^ 32'hffffffff);
  assign accXor = (state_8 ^ 32'hffffffff);
  assign result = {stateXor[0],{stateXor[1],{stateXor[2],{stateXor[3],{stateXor[4],{stateXor[5],{stateXor[6],{stateXor[7],{stateXor[8],{_zz_result,{_zz_result_1,_zz_result_2}}}}}}}}}}};
  assign resultNext = {accXor[0],{accXor[1],{accXor[2],{accXor[3],{accXor[4],{accXor[5],{accXor[6],{accXor[7],{accXor[8],{_zz_resultNext,{_zz_resultNext_1,_zz_resultNext_2}}}}}}}}}}};
  always @(posedge eth_clk) begin
    if(eth_reset) begin
      state <= 32'hffffffff;
    end else begin
      if(flush) begin
        state <= 32'hffffffff;
      end else begin
        if(input_valid) begin
          state <= state_8;
        end
      end
    end
  end


endmodule
