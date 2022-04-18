// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : TX
// Git hash  : a56428541ec2887602f54ea433a81addc291a333

`timescale 1ns/1ps 

module TX (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              rf_data_valid,
  input               rf_data_ready,
  output     [11:0]   rf_data_payload_cha_i,
  output     [11:0]   rf_data_payload_cha_q,
  input               div_enable,
  input      [3:0]    div_cnt_step,
  input      [3:0]    div_cnt_limit,
  input      [1:0]    mod_method_select,
  input               clk,
  input               reset
);

  wire                phy_tx_information_gen_raw_data_valid;
  wire                phy_tx_information_gen_result_data_queueWithAvailability_io_pop_ready;
  wire                phy_tx_padder_raw_data_valid;
  wire                phy_tx_padder_result_data_queueWithAvailability_io_pop_ready;
  wire                phy_tx_crc_raw_data_valid;
  wire                phy_tx_crc_result_data_queueWithAvailability_io_pop_ready;
  wire                phy_tx_encoder_raw_data_valid;
  wire                phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_ready;
  wire                phy_tx_scrambler_raw_data_valid;
  wire                phy_tx_scrambler_result_data_queueWithAvailability_io_pop_ready;
  wire                mod_data_div_base_data_valid;
  wire       [7:0]    mod_rtl_data_flow_unit_data_payload_fragment;
  wire                mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_ready;
  wire                phy_header_extender_raw_data_valid;
  wire                phy_header_extender_result_data_queueWithAvailability_io_pop_ready;
  wire                phy_tx_oversampling_raw_data_valid;
  wire                phy_tx_filter_result_data_queueWithAvailability_io_pop_ready;
  wire                stf_preamble_adder_raw_data_valid;
  wire                phy_tx_information_gen_raw_data_ready;
  wire                phy_tx_information_gen_result_data_valid;
  wire                phy_tx_information_gen_result_data_payload_last;
  wire       [7:0]    phy_tx_information_gen_result_data_payload_fragment;
  wire                phy_tx_information_gen_pkg_size_valid;
  wire       [7:0]    phy_tx_information_gen_pkg_size_payload;
  wire                phy_tx_information_gen_result_data_queueWithAvailability_io_push_ready;
  wire                phy_tx_information_gen_result_data_queueWithAvailability_io_pop_valid;
  wire                phy_tx_information_gen_result_data_queueWithAvailability_io_pop_payload_last;
  wire       [7:0]    phy_tx_information_gen_result_data_queueWithAvailability_io_pop_payload_fragment;
  wire       [5:0]    phy_tx_information_gen_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_information_gen_result_data_queueWithAvailability_io_availability;
  wire                phy_tx_padder_raw_data_ready;
  wire                phy_tx_padder_result_data_valid;
  wire                phy_tx_padder_result_data_payload_last;
  wire       [7:0]    phy_tx_padder_result_data_payload_fragment;
  wire                phy_tx_padder_result_data_queueWithAvailability_io_push_ready;
  wire                phy_tx_padder_result_data_queueWithAvailability_io_pop_valid;
  wire                phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_last;
  wire       [7:0]    phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_fragment;
  wire       [5:0]    phy_tx_padder_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_padder_result_data_queueWithAvailability_io_availability;
  wire                phy_tx_crc_raw_data_ready;
  wire                phy_tx_crc_result_data_valid;
  wire                phy_tx_crc_result_data_payload_last;
  wire       [7:0]    phy_tx_crc_result_data_payload_fragment;
  wire                phy_tx_crc_result_data_queueWithAvailability_io_push_ready;
  wire                phy_tx_crc_result_data_queueWithAvailability_io_pop_valid;
  wire                phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_last;
  wire       [7:0]    phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_fragment;
  wire       [5:0]    phy_tx_crc_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_crc_result_data_queueWithAvailability_io_availability;
  wire                phy_tx_encoder_raw_data_ready;
  wire                phy_tx_encoder_result_data_valid;
  wire                phy_tx_encoder_result_data_payload_last;
  wire       [15:0]   phy_tx_encoder_result_data_payload_fragment;
  wire                phy_tx_puncher_raw_data_ready;
  wire                phy_tx_puncher_punched_data_valid;
  wire                phy_tx_puncher_punched_data_payload_last;
  wire       [15:0]   phy_tx_puncher_punched_data_payload_fragment;
  wire                phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_push_ready;
  wire                phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid;
  wire                phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_last;
  wire       [15:0]   phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_fragment;
  wire       [5:0]    phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_availability;
  wire                phy_tx_scrambler_raw_data_ready;
  wire                phy_tx_scrambler_result_data_valid;
  wire                phy_tx_scrambler_result_data_payload_last;
  wire       [15:0]   phy_tx_scrambler_result_data_payload_fragment;
  wire                phy_tx_scrambler_result_data_queueWithAvailability_io_push_ready;
  wire                phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid;
  wire                phy_tx_scrambler_result_data_queueWithAvailability_io_pop_payload_last;
  wire       [15:0]   phy_tx_scrambler_result_data_queueWithAvailability_io_pop_payload_fragment;
  wire       [5:0]    phy_tx_scrambler_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_scrambler_result_data_queueWithAvailability_io_availability;
  wire                mod_data_div_base_data_ready;
  wire                mod_data_div_unit_data_valid;
  wire                mod_data_div_unit_data_payload_last;
  wire       [15:0]   mod_data_div_unit_data_payload_fragment;
  wire                mod_rtl_data_flow_mod_iq_valid;
  wire                mod_rtl_data_flow_mod_iq_payload_last;
  wire       [11:0]   mod_rtl_data_flow_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   mod_rtl_data_flow_mod_iq_payload_fragment_cha_q;
  wire                mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_push_ready;
  wire                mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid;
  wire                mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_last;
  wire       [11:0]   mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_i;
  wire       [11:0]   mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_q;
  wire       [5:0]    mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_occupancy;
  wire       [5:0]    mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_availability;
  wire                phy_header_extender_pkg_size_ready;
  wire                phy_header_extender_raw_data_ready;
  wire                phy_header_extender_result_data_valid;
  wire                phy_header_extender_result_data_payload_last;
  wire       [11:0]   phy_header_extender_result_data_payload_fragment_cha_i;
  wire       [11:0]   phy_header_extender_result_data_payload_fragment_cha_q;
  wire                phy_header_extender_result_data_queueWithAvailability_io_push_ready;
  wire                phy_header_extender_result_data_queueWithAvailability_io_pop_valid;
  wire                phy_header_extender_result_data_queueWithAvailability_io_pop_payload_last;
  wire       [11:0]   phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment_cha_i;
  wire       [11:0]   phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment_cha_q;
  wire       [5:0]    phy_header_extender_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_header_extender_result_data_queueWithAvailability_io_availability;
  wire                phy_tx_oversampling_raw_data_ready;
  wire                phy_tx_oversampling_result_data_valid;
  wire                phy_tx_oversampling_result_data_payload_last;
  wire       [11:0]   phy_tx_oversampling_result_data_payload_fragment_cha_i;
  wire       [11:0]   phy_tx_oversampling_result_data_payload_fragment_cha_q;
  wire                phy_tx_filter_raw_data_ready;
  wire                phy_tx_filter_result_data_valid;
  wire                phy_tx_filter_result_data_payload_last;
  wire       [11:0]   phy_tx_filter_result_data_payload_fragment_cha_i;
  wire       [11:0]   phy_tx_filter_result_data_payload_fragment_cha_q;
  wire                phy_tx_filter_result_data_queueWithAvailability_io_push_ready;
  wire                phy_tx_filter_result_data_queueWithAvailability_io_pop_valid;
  wire                phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_last;
  wire       [11:0]   phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_fragment_cha_i;
  wire       [11:0]   phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_fragment_cha_q;
  wire       [5:0]    phy_tx_filter_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_filter_result_data_queueWithAvailability_io_availability;
  wire                stf_preamble_adder_raw_data_ready;
  wire                stf_preamble_adder_preamble_data_valid;
  wire                stf_preamble_adder_preamble_data_payload_last;
  wire       [11:0]   stf_preamble_adder_preamble_data_payload_fragment_cha_i;
  wire       [11:0]   stf_preamble_adder_preamble_data_payload_fragment_cha_q;
  wire                phy_tx_front_raw_data_ready;
  wire                phy_tx_front_result_data_valid;
  wire       [11:0]   phy_tx_front_result_data_payload_cha_i;
  wire       [11:0]   phy_tx_front_result_data_payload_cha_q;
  wire                phy_tx_front_result_data_queueWithAvailability_io_push_ready;
  wire                phy_tx_front_result_data_queueWithAvailability_io_pop_valid;
  wire       [11:0]   phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_i;
  wire       [11:0]   phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_q;
  wire       [5:0]    phy_tx_front_result_data_queueWithAvailability_io_occupancy;
  wire       [5:0]    phy_tx_front_result_data_queueWithAvailability_io_availability;
  reg        [8:0]    pipeline_halt;
  wire                _zz_raw_data_ready;
  wire                _zz_io_pop_ready;
  wire                _zz_io_pop_ready_1;
  wire                _zz_io_pop_ready_2;
  wire                phy_tx_puncher_punched_data_toStream_valid;
  wire                phy_tx_puncher_punched_data_toStream_ready;
  wire                phy_tx_puncher_punched_data_toStream_payload_last;
  wire       [15:0]   phy_tx_puncher_punched_data_toStream_payload_fragment;
  wire                _zz_io_pop_ready_3;
  wire                _zz_io_pop_ready_4;
  wire                _zz_data_flow_unit_data_valid;
  wire                _zz_data_flow_unit_data_payload_last;
  wire                mod_rtl_data_flow_mod_iq_toStream_valid;
  wire                mod_rtl_data_flow_mod_iq_toStream_ready;
  wire                mod_rtl_data_flow_mod_iq_toStream_payload_last;
  wire       [11:0]   mod_rtl_data_flow_mod_iq_toStream_payload_fragment_cha_i;
  wire       [11:0]   mod_rtl_data_flow_mod_iq_toStream_payload_fragment_cha_q;
  wire                _zz_io_pop_ready_5;
  wire                _zz_io_pop_ready_6;
  wire                _zz_io_pop_ready_7;

  PhyPkgInformationGen phy_tx_information_gen (
    .raw_data_valid                  (phy_tx_information_gen_raw_data_valid                                   ), //i
    .raw_data_ready                  (phy_tx_information_gen_raw_data_ready                                   ), //o
    .raw_data_payload_last           (raw_data_payload_last                                                   ), //i
    .raw_data_payload_fragment       (raw_data_payload_fragment[7:0]                                          ), //i
    .result_data_valid               (phy_tx_information_gen_result_data_valid                                ), //o
    .result_data_ready               (phy_tx_information_gen_result_data_queueWithAvailability_io_push_ready  ), //i
    .result_data_payload_last        (phy_tx_information_gen_result_data_payload_last                         ), //o
    .result_data_payload_fragment    (phy_tx_information_gen_result_data_payload_fragment[7:0]                ), //o
    .pkg_size_valid                  (phy_tx_information_gen_pkg_size_valid                                   ), //o
    .pkg_size_ready                  (phy_header_extender_pkg_size_ready                                      ), //i
    .pkg_size_payload                (phy_tx_information_gen_pkg_size_payload[7:0]                            ), //o
    .clk                             (clk                                                                     ), //i
    .reset                           (reset                                                                   )  //i
  );
  StreamFifo_2 phy_tx_information_gen_result_data_queueWithAvailability (
    .io_push_valid               (phy_tx_information_gen_result_data_valid                                               ), //i
    .io_push_ready               (phy_tx_information_gen_result_data_queueWithAvailability_io_push_ready                 ), //o
    .io_push_payload_last        (phy_tx_information_gen_result_data_payload_last                                        ), //i
    .io_push_payload_fragment    (phy_tx_information_gen_result_data_payload_fragment[7:0]                               ), //i
    .io_pop_valid                (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_valid                  ), //o
    .io_pop_ready                (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_ready                  ), //i
    .io_pop_payload_last         (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_payload_last           ), //o
    .io_pop_payload_fragment     (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //o
    .io_flush                    (1'b0                                                                                   ), //i
    .io_occupancy                (phy_tx_information_gen_result_data_queueWithAvailability_io_occupancy[5:0]             ), //o
    .io_availability             (phy_tx_information_gen_result_data_queueWithAvailability_io_availability[5:0]          ), //o
    .clk                         (clk                                                                                    ), //i
    .reset                       (reset                                                                                  )  //i
  );
  PhyTxPadder phy_tx_padder (
    .raw_data_valid                  (phy_tx_padder_raw_data_valid                                                           ), //i
    .raw_data_ready                  (phy_tx_padder_raw_data_ready                                                           ), //o
    .raw_data_payload_last           (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_payload_last           ), //i
    .raw_data_payload_fragment       (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //i
    .result_data_valid               (phy_tx_padder_result_data_valid                                                        ), //o
    .result_data_ready               (phy_tx_padder_result_data_queueWithAvailability_io_push_ready                          ), //i
    .result_data_payload_last        (phy_tx_padder_result_data_payload_last                                                 ), //o
    .result_data_payload_fragment    (phy_tx_padder_result_data_payload_fragment[7:0]                                        ), //o
    .clk                             (clk                                                                                    ), //i
    .reset                           (reset                                                                                  )  //i
  );
  StreamFifo_2 phy_tx_padder_result_data_queueWithAvailability (
    .io_push_valid               (phy_tx_padder_result_data_valid                                               ), //i
    .io_push_ready               (phy_tx_padder_result_data_queueWithAvailability_io_push_ready                 ), //o
    .io_push_payload_last        (phy_tx_padder_result_data_payload_last                                        ), //i
    .io_push_payload_fragment    (phy_tx_padder_result_data_payload_fragment[7:0]                               ), //i
    .io_pop_valid                (phy_tx_padder_result_data_queueWithAvailability_io_pop_valid                  ), //o
    .io_pop_ready                (phy_tx_padder_result_data_queueWithAvailability_io_pop_ready                  ), //i
    .io_pop_payload_last         (phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_last           ), //o
    .io_pop_payload_fragment     (phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //o
    .io_flush                    (1'b0                                                                          ), //i
    .io_occupancy                (phy_tx_padder_result_data_queueWithAvailability_io_occupancy[5:0]             ), //o
    .io_availability             (phy_tx_padder_result_data_queueWithAvailability_io_availability[5:0]          ), //o
    .clk                         (clk                                                                           ), //i
    .reset                       (reset                                                                         )  //i
  );
  PhyTxCrc phy_tx_crc (
    .raw_data_valid                  (phy_tx_crc_raw_data_valid                                                     ), //i
    .raw_data_ready                  (phy_tx_crc_raw_data_ready                                                     ), //o
    .raw_data_payload_last           (phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_last           ), //i
    .raw_data_payload_fragment       (phy_tx_padder_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //i
    .result_data_valid               (phy_tx_crc_result_data_valid                                                  ), //o
    .result_data_ready               (phy_tx_crc_result_data_queueWithAvailability_io_push_ready                    ), //i
    .result_data_payload_last        (phy_tx_crc_result_data_payload_last                                           ), //o
    .result_data_payload_fragment    (phy_tx_crc_result_data_payload_fragment[7:0]                                  ), //o
    .clk                             (clk                                                                           ), //i
    .reset                           (reset                                                                         )  //i
  );
  StreamFifo_2 phy_tx_crc_result_data_queueWithAvailability (
    .io_push_valid               (phy_tx_crc_result_data_valid                                               ), //i
    .io_push_ready               (phy_tx_crc_result_data_queueWithAvailability_io_push_ready                 ), //o
    .io_push_payload_last        (phy_tx_crc_result_data_payload_last                                        ), //i
    .io_push_payload_fragment    (phy_tx_crc_result_data_payload_fragment[7:0]                               ), //i
    .io_pop_valid                (phy_tx_crc_result_data_queueWithAvailability_io_pop_valid                  ), //o
    .io_pop_ready                (phy_tx_crc_result_data_queueWithAvailability_io_pop_ready                  ), //i
    .io_pop_payload_last         (phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_last           ), //o
    .io_pop_payload_fragment     (phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //o
    .io_flush                    (1'b0                                                                       ), //i
    .io_occupancy                (phy_tx_crc_result_data_queueWithAvailability_io_occupancy[5:0]             ), //o
    .io_availability             (phy_tx_crc_result_data_queueWithAvailability_io_availability[5:0]          ), //o
    .clk                         (clk                                                                        ), //i
    .reset                       (reset                                                                      )  //i
  );
  PhyTxEncoder phy_tx_encoder (
    .raw_data_valid                  (phy_tx_encoder_raw_data_valid                                              ), //i
    .raw_data_ready                  (phy_tx_encoder_raw_data_ready                                              ), //o
    .raw_data_payload_last           (phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_last           ), //i
    .raw_data_payload_fragment       (phy_tx_crc_result_data_queueWithAvailability_io_pop_payload_fragment[7:0]  ), //i
    .result_data_valid               (phy_tx_encoder_result_data_valid                                           ), //o
    .result_data_ready               (phy_tx_puncher_raw_data_ready                                              ), //i
    .result_data_payload_last        (phy_tx_encoder_result_data_payload_last                                    ), //o
    .result_data_payload_fragment    (phy_tx_encoder_result_data_payload_fragment[15:0]                          ), //o
    .clk                             (clk                                                                        ), //i
    .reset                           (reset                                                                      )  //i
  );
  Puncturing phy_tx_puncher (
    .raw_data_valid                   (phy_tx_encoder_result_data_valid                    ), //i
    .raw_data_ready                   (phy_tx_puncher_raw_data_ready                       ), //o
    .raw_data_payload_last            (phy_tx_encoder_result_data_payload_last             ), //i
    .raw_data_payload_fragment        (phy_tx_encoder_result_data_payload_fragment[15:0]   ), //i
    .punched_data_valid               (phy_tx_puncher_punched_data_valid                   ), //o
    .punched_data_payload_last        (phy_tx_puncher_punched_data_payload_last            ), //o
    .punched_data_payload_fragment    (phy_tx_puncher_punched_data_payload_fragment[15:0]  ), //o
    .clk                              (clk                                                 ), //i
    .reset                            (reset                                               )  //i
  );
  StreamFifo_5 phy_tx_puncher_punched_data_toStream_queueWithAvailability (
    .io_push_valid               (phy_tx_puncher_punched_data_toStream_valid                                                ), //i
    .io_push_ready               (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_push_ready                  ), //o
    .io_push_payload_last        (phy_tx_puncher_punched_data_toStream_payload_last                                         ), //i
    .io_push_payload_fragment    (phy_tx_puncher_punched_data_toStream_payload_fragment[15:0]                               ), //i
    .io_pop_valid                (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid                   ), //o
    .io_pop_ready                (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_ready                   ), //i
    .io_pop_payload_last         (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_last            ), //o
    .io_pop_payload_fragment     (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_fragment[15:0]  ), //o
    .io_flush                    (1'b0                                                                                      ), //i
    .io_occupancy                (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_occupancy[5:0]              ), //o
    .io_availability             (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_availability[5:0]           ), //o
    .clk                         (clk                                                                                       ), //i
    .reset                       (reset                                                                                     )  //i
  );
  PhyTxScrambler phy_tx_scrambler (
    .raw_data_valid                  (phy_tx_scrambler_raw_data_valid                                                           ), //i
    .raw_data_ready                  (phy_tx_scrambler_raw_data_ready                                                           ), //o
    .raw_data_payload_last           (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_last            ), //i
    .raw_data_payload_fragment       (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_payload_fragment[15:0]  ), //i
    .result_data_valid               (phy_tx_scrambler_result_data_valid                                                        ), //o
    .result_data_ready               (phy_tx_scrambler_result_data_queueWithAvailability_io_push_ready                          ), //i
    .result_data_payload_last        (phy_tx_scrambler_result_data_payload_last                                                 ), //o
    .result_data_payload_fragment    (phy_tx_scrambler_result_data_payload_fragment[15:0]                                       ), //o
    .clk                             (clk                                                                                       ), //i
    .reset                           (reset                                                                                     )  //i
  );
  StreamFifo_5 phy_tx_scrambler_result_data_queueWithAvailability (
    .io_push_valid               (phy_tx_scrambler_result_data_valid                                                ), //i
    .io_push_ready               (phy_tx_scrambler_result_data_queueWithAvailability_io_push_ready                  ), //o
    .io_push_payload_last        (phy_tx_scrambler_result_data_payload_last                                         ), //i
    .io_push_payload_fragment    (phy_tx_scrambler_result_data_payload_fragment[15:0]                               ), //i
    .io_pop_valid                (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid                   ), //o
    .io_pop_ready                (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_ready                   ), //i
    .io_pop_payload_last         (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_payload_last            ), //o
    .io_pop_payload_fragment     (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_payload_fragment[15:0]  ), //o
    .io_flush                    (1'b0                                                                              ), //i
    .io_occupancy                (phy_tx_scrambler_result_data_queueWithAvailability_io_occupancy[5:0]              ), //o
    .io_availability             (phy_tx_scrambler_result_data_queueWithAvailability_io_availability[5:0]           ), //o
    .clk                         (clk                                                                               ), //i
    .reset                       (reset                                                                             )  //i
  );
  dataDivDynamic mod_data_div (
    .base_data_valid               (mod_data_div_base_data_valid                                                      ), //i
    .base_data_ready               (mod_data_div_base_data_ready                                                      ), //o
    .base_data_payload_last        (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_payload_last            ), //i
    .base_data_payload_fragment    (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_payload_fragment[15:0]  ), //i
    .enable                        (div_enable                                                                        ), //i
    .cnt_step                      (div_cnt_step[3:0]                                                                 ), //i
    .cnt_limit                     (div_cnt_limit[3:0]                                                                ), //i
    .unit_data_valid               (mod_data_div_unit_data_valid                                                      ), //o
    .unit_data_payload_last        (mod_data_div_unit_data_payload_last                                               ), //o
    .unit_data_payload_fragment    (mod_data_div_unit_data_payload_fragment[15:0]                                     ), //o
    .clk                           (clk                                                                               ), //i
    .reset                         (reset                                                                             )  //i
  );
  ModulatorRTL mod_rtl (
    .data_flow_unit_data_valid                  (_zz_data_flow_unit_data_valid                          ), //i
    .data_flow_unit_data_payload_last           (_zz_data_flow_unit_data_payload_last                   ), //i
    .data_flow_unit_data_payload_fragment       (mod_rtl_data_flow_unit_data_payload_fragment[7:0]      ), //i
    .data_flow_mod_iq_valid                     (mod_rtl_data_flow_mod_iq_valid                         ), //o
    .data_flow_mod_iq_payload_last              (mod_rtl_data_flow_mod_iq_payload_last                  ), //o
    .data_flow_mod_iq_payload_fragment_cha_i    (mod_rtl_data_flow_mod_iq_payload_fragment_cha_i[11:0]  ), //o
    .data_flow_mod_iq_payload_fragment_cha_q    (mod_rtl_data_flow_mod_iq_payload_fragment_cha_q[11:0]  ), //o
    .select_1                                   (mod_method_select[1:0]                                 ), //i
    .clk                                        (clk                                                    ), //i
    .reset                                      (reset                                                  )  //i
  );
  StreamFifo_7 mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability (
    .io_push_valid                     (mod_rtl_data_flow_mod_iq_toStream_valid                                                      ), //i
    .io_push_ready                     (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_push_ready                        ), //o
    .io_push_payload_last              (mod_rtl_data_flow_mod_iq_toStream_payload_last                                               ), //i
    .io_push_payload_fragment_cha_i    (mod_rtl_data_flow_mod_iq_toStream_payload_fragment_cha_i[11:0]                               ), //i
    .io_push_payload_fragment_cha_q    (mod_rtl_data_flow_mod_iq_toStream_payload_fragment_cha_q[11:0]                               ), //i
    .io_pop_valid                      (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid                         ), //o
    .io_pop_ready                      (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_ready                         ), //i
    .io_pop_payload_last               (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_last                  ), //o
    .io_pop_payload_fragment_cha_i     (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_i[11:0]  ), //o
    .io_pop_payload_fragment_cha_q     (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_q[11:0]  ), //o
    .io_flush                          (1'b0                                                                                         ), //i
    .io_occupancy                      (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_occupancy[5:0]                    ), //o
    .io_availability                   (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_availability[5:0]                 ), //o
    .clk                               (clk                                                                                          ), //i
    .reset                             (reset                                                                                        )  //i
  );
  PhyHeaderExtender phy_header_extender (
    .mod_method                            (mod_method_select[1:0]                                                                       ), //i
    .pkg_size_valid                        (phy_tx_information_gen_pkg_size_valid                                                        ), //i
    .pkg_size_ready                        (phy_header_extender_pkg_size_ready                                                           ), //o
    .pkg_size_payload                      (phy_tx_information_gen_pkg_size_payload[7:0]                                                 ), //i
    .raw_data_valid                        (phy_header_extender_raw_data_valid                                                           ), //i
    .raw_data_ready                        (phy_header_extender_raw_data_ready                                                           ), //o
    .raw_data_payload_last                 (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_last                  ), //i
    .raw_data_payload_fragment_cha_i       (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_i[11:0]  ), //i
    .raw_data_payload_fragment_cha_q       (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_payload_fragment_cha_q[11:0]  ), //i
    .result_data_valid                     (phy_header_extender_result_data_valid                                                        ), //o
    .result_data_ready                     (phy_header_extender_result_data_queueWithAvailability_io_push_ready                          ), //i
    .result_data_payload_last              (phy_header_extender_result_data_payload_last                                                 ), //o
    .result_data_payload_fragment_cha_i    (phy_header_extender_result_data_payload_fragment_cha_i[11:0]                                 ), //o
    .result_data_payload_fragment_cha_q    (phy_header_extender_result_data_payload_fragment_cha_q[11:0]                                 ), //o
    .clk                                   (clk                                                                                          ), //i
    .reset                                 (reset                                                                                        )  //i
  );
  StreamFifo_7 phy_header_extender_result_data_queueWithAvailability (
    .io_push_valid                     (phy_header_extender_result_data_valid                                                      ), //i
    .io_push_ready                     (phy_header_extender_result_data_queueWithAvailability_io_push_ready                        ), //o
    .io_push_payload_last              (phy_header_extender_result_data_payload_last                                               ), //i
    .io_push_payload_fragment_cha_i    (phy_header_extender_result_data_payload_fragment_cha_i[11:0]                               ), //i
    .io_push_payload_fragment_cha_q    (phy_header_extender_result_data_payload_fragment_cha_q[11:0]                               ), //i
    .io_pop_valid                      (phy_header_extender_result_data_queueWithAvailability_io_pop_valid                         ), //o
    .io_pop_ready                      (phy_header_extender_result_data_queueWithAvailability_io_pop_ready                         ), //i
    .io_pop_payload_last               (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_last                  ), //o
    .io_pop_payload_fragment_cha_i     (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment_cha_i[11:0]  ), //o
    .io_pop_payload_fragment_cha_q     (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment_cha_q[11:0]  ), //o
    .io_flush                          (1'b0                                                                                       ), //i
    .io_occupancy                      (phy_header_extender_result_data_queueWithAvailability_io_occupancy[5:0]                    ), //o
    .io_availability                   (phy_header_extender_result_data_queueWithAvailability_io_availability[5:0]                 ), //o
    .clk                               (clk                                                                                        ), //i
    .reset                             (reset                                                                                      )  //i
  );
  PhyTxOverSampling phy_tx_oversampling (
    .raw_data_valid                        (phy_tx_oversampling_raw_data_valid                                                         ), //i
    .raw_data_ready                        (phy_tx_oversampling_raw_data_ready                                                         ), //o
    .raw_data_payload_last                 (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_last                  ), //i
    .raw_data_payload_fragment_cha_i       (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment_cha_i[11:0]  ), //i
    .raw_data_payload_fragment_cha_q       (phy_header_extender_result_data_queueWithAvailability_io_pop_payload_fragment_cha_q[11:0]  ), //i
    .result_data_valid                     (phy_tx_oversampling_result_data_valid                                                      ), //o
    .result_data_ready                     (phy_tx_filter_raw_data_ready                                                               ), //i
    .result_data_payload_last              (phy_tx_oversampling_result_data_payload_last                                               ), //o
    .result_data_payload_fragment_cha_i    (phy_tx_oversampling_result_data_payload_fragment_cha_i[11:0]                               ), //o
    .result_data_payload_fragment_cha_q    (phy_tx_oversampling_result_data_payload_fragment_cha_q[11:0]                               ), //o
    .clk                                   (clk                                                                                        ), //i
    .reset                                 (reset                                                                                      )  //i
  );
  PhyTxFilter phy_tx_filter (
    .raw_data_valid                        (phy_tx_oversampling_result_data_valid                          ), //i
    .raw_data_ready                        (phy_tx_filter_raw_data_ready                                   ), //o
    .raw_data_payload_last                 (phy_tx_oversampling_result_data_payload_last                   ), //i
    .raw_data_payload_fragment_cha_i       (phy_tx_oversampling_result_data_payload_fragment_cha_i[11:0]   ), //i
    .raw_data_payload_fragment_cha_q       (phy_tx_oversampling_result_data_payload_fragment_cha_q[11:0]   ), //i
    .result_data_valid                     (phy_tx_filter_result_data_valid                                ), //o
    .result_data_ready                     (phy_tx_filter_result_data_queueWithAvailability_io_push_ready  ), //i
    .result_data_payload_last              (phy_tx_filter_result_data_payload_last                         ), //o
    .result_data_payload_fragment_cha_i    (phy_tx_filter_result_data_payload_fragment_cha_i[11:0]         ), //o
    .result_data_payload_fragment_cha_q    (phy_tx_filter_result_data_payload_fragment_cha_q[11:0]         ), //o
    .clk                                   (clk                                                            ), //i
    .reset                                 (reset                                                          )  //i
  );
  StreamFifo_7 phy_tx_filter_result_data_queueWithAvailability (
    .io_push_valid                     (phy_tx_filter_result_data_valid                                                      ), //i
    .io_push_ready                     (phy_tx_filter_result_data_queueWithAvailability_io_push_ready                        ), //o
    .io_push_payload_last              (phy_tx_filter_result_data_payload_last                                               ), //i
    .io_push_payload_fragment_cha_i    (phy_tx_filter_result_data_payload_fragment_cha_i[11:0]                               ), //i
    .io_push_payload_fragment_cha_q    (phy_tx_filter_result_data_payload_fragment_cha_q[11:0]                               ), //i
    .io_pop_valid                      (phy_tx_filter_result_data_queueWithAvailability_io_pop_valid                         ), //o
    .io_pop_ready                      (phy_tx_filter_result_data_queueWithAvailability_io_pop_ready                         ), //i
    .io_pop_payload_last               (phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_last                  ), //o
    .io_pop_payload_fragment_cha_i     (phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_fragment_cha_i[11:0]  ), //o
    .io_pop_payload_fragment_cha_q     (phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_fragment_cha_q[11:0]  ), //o
    .io_flush                          (1'b0                                                                                 ), //i
    .io_occupancy                      (phy_tx_filter_result_data_queueWithAvailability_io_occupancy[5:0]                    ), //o
    .io_availability                   (phy_tx_filter_result_data_queueWithAvailability_io_availability[5:0]                 ), //o
    .clk                               (clk                                                                                  ), //i
    .reset                             (reset                                                                                )  //i
  );
  PreambleExtender stf_preamble_adder (
    .raw_data_valid                          (stf_preamble_adder_raw_data_valid                                                    ), //i
    .raw_data_ready                          (stf_preamble_adder_raw_data_ready                                                    ), //o
    .raw_data_payload_last                   (phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_last                  ), //i
    .raw_data_payload_fragment_cha_i         (phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_fragment_cha_i[11:0]  ), //i
    .raw_data_payload_fragment_cha_q         (phy_tx_filter_result_data_queueWithAvailability_io_pop_payload_fragment_cha_q[11:0]  ), //i
    .preamble_data_valid                     (stf_preamble_adder_preamble_data_valid                                               ), //o
    .preamble_data_ready                     (phy_tx_front_raw_data_ready                                                          ), //i
    .preamble_data_payload_last              (stf_preamble_adder_preamble_data_payload_last                                        ), //o
    .preamble_data_payload_fragment_cha_i    (stf_preamble_adder_preamble_data_payload_fragment_cha_i[11:0]                        ), //o
    .preamble_data_payload_fragment_cha_q    (stf_preamble_adder_preamble_data_payload_fragment_cha_q[11:0]                        ), //o
    .clk                                     (clk                                                                                  ), //i
    .reset                                   (reset                                                                                )  //i
  );
  PhyTxICFront phy_tx_front (
    .raw_data_valid                     (stf_preamble_adder_preamble_data_valid                         ), //i
    .raw_data_ready                     (phy_tx_front_raw_data_ready                                    ), //o
    .raw_data_payload_last              (stf_preamble_adder_preamble_data_payload_last                  ), //i
    .raw_data_payload_fragment_cha_i    (stf_preamble_adder_preamble_data_payload_fragment_cha_i[11:0]  ), //i
    .raw_data_payload_fragment_cha_q    (stf_preamble_adder_preamble_data_payload_fragment_cha_q[11:0]  ), //i
    .result_data_valid                  (phy_tx_front_result_data_valid                                 ), //o
    .result_data_ready                  (phy_tx_front_result_data_queueWithAvailability_io_push_ready   ), //i
    .result_data_payload_cha_i          (phy_tx_front_result_data_payload_cha_i[11:0]                   ), //o
    .result_data_payload_cha_q          (phy_tx_front_result_data_payload_cha_q[11:0]                   )  //o
  );
  StreamFifo_10 phy_tx_front_result_data_queueWithAvailability (
    .io_push_valid            (phy_tx_front_result_data_valid                                             ), //i
    .io_push_ready            (phy_tx_front_result_data_queueWithAvailability_io_push_ready               ), //o
    .io_push_payload_cha_i    (phy_tx_front_result_data_payload_cha_i[11:0]                               ), //i
    .io_push_payload_cha_q    (phy_tx_front_result_data_payload_cha_q[11:0]                               ), //i
    .io_pop_valid             (phy_tx_front_result_data_queueWithAvailability_io_pop_valid                ), //o
    .io_pop_ready             (rf_data_ready                                                              ), //i
    .io_pop_payload_cha_i     (phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_i[11:0]  ), //o
    .io_pop_payload_cha_q     (phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_q[11:0]  ), //o
    .io_flush                 (1'b0                                                                       ), //i
    .io_occupancy             (phy_tx_front_result_data_queueWithAvailability_io_occupancy[5:0]           ), //o
    .io_availability          (phy_tx_front_result_data_queueWithAvailability_io_availability[5:0]        ), //o
    .clk                      (clk                                                                        ), //i
    .reset                    (reset                                                                      )  //i
  );
  assign _zz_raw_data_ready = (! pipeline_halt[0]);
  assign raw_data_ready = (phy_tx_information_gen_raw_data_ready && _zz_raw_data_ready);
  assign phy_tx_information_gen_raw_data_valid = (raw_data_valid && _zz_raw_data_ready);
  always @(*) begin
    pipeline_halt[0] = (phy_tx_information_gen_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[1] = (phy_tx_padder_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[2] = (phy_tx_crc_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[3] = (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[4] = (phy_tx_scrambler_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[5] = (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[6] = (phy_header_extender_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[7] = (phy_tx_filter_result_data_queueWithAvailability_io_availability < 6'h12);
    pipeline_halt[8] = (phy_tx_front_result_data_queueWithAvailability_io_availability < 6'h12);
  end

  assign _zz_io_pop_ready = (! pipeline_halt[1]);
  assign phy_tx_information_gen_result_data_queueWithAvailability_io_pop_ready = (phy_tx_padder_raw_data_ready && _zz_io_pop_ready);
  assign phy_tx_padder_raw_data_valid = (phy_tx_information_gen_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready);
  assign _zz_io_pop_ready_1 = (! pipeline_halt[2]);
  assign phy_tx_padder_result_data_queueWithAvailability_io_pop_ready = (phy_tx_crc_raw_data_ready && _zz_io_pop_ready_1);
  assign phy_tx_crc_raw_data_valid = (phy_tx_padder_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_1);
  assign _zz_io_pop_ready_2 = (! pipeline_halt[3]);
  assign phy_tx_crc_result_data_queueWithAvailability_io_pop_ready = (phy_tx_encoder_raw_data_ready && _zz_io_pop_ready_2);
  assign phy_tx_encoder_raw_data_valid = (phy_tx_crc_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_2);
  assign phy_tx_puncher_punched_data_toStream_valid = phy_tx_puncher_punched_data_valid;
  assign phy_tx_puncher_punched_data_toStream_payload_last = phy_tx_puncher_punched_data_payload_last;
  assign phy_tx_puncher_punched_data_toStream_payload_fragment = phy_tx_puncher_punched_data_payload_fragment;
  assign phy_tx_puncher_punched_data_toStream_ready = phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_push_ready;
  assign _zz_io_pop_ready_3 = (! pipeline_halt[4]);
  assign phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_ready = (phy_tx_scrambler_raw_data_ready && _zz_io_pop_ready_3);
  assign phy_tx_scrambler_raw_data_valid = (phy_tx_puncher_punched_data_toStream_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_3);
  assign _zz_io_pop_ready_4 = (! pipeline_halt[5]);
  assign phy_tx_scrambler_result_data_queueWithAvailability_io_pop_ready = (mod_data_div_base_data_ready && _zz_io_pop_ready_4);
  assign mod_data_div_base_data_valid = (phy_tx_scrambler_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_4);
  assign _zz_data_flow_unit_data_valid = mod_data_div_unit_data_valid;
  assign _zz_data_flow_unit_data_payload_last = mod_data_div_unit_data_payload_last;
  assign mod_rtl_data_flow_unit_data_payload_fragment = mod_data_div_unit_data_payload_fragment[7:0];
  assign mod_rtl_data_flow_mod_iq_toStream_valid = mod_rtl_data_flow_mod_iq_valid;
  assign mod_rtl_data_flow_mod_iq_toStream_payload_last = mod_rtl_data_flow_mod_iq_payload_last;
  assign mod_rtl_data_flow_mod_iq_toStream_payload_fragment_cha_i = mod_rtl_data_flow_mod_iq_payload_fragment_cha_i;
  assign mod_rtl_data_flow_mod_iq_toStream_payload_fragment_cha_q = mod_rtl_data_flow_mod_iq_payload_fragment_cha_q;
  assign mod_rtl_data_flow_mod_iq_toStream_ready = mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_push_ready;
  assign _zz_io_pop_ready_5 = (! pipeline_halt[6]);
  assign mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_ready = (phy_header_extender_raw_data_ready && _zz_io_pop_ready_5);
  assign phy_header_extender_raw_data_valid = (mod_rtl_data_flow_mod_iq_toStream_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_5);
  assign _zz_io_pop_ready_6 = (! pipeline_halt[7]);
  assign phy_header_extender_result_data_queueWithAvailability_io_pop_ready = (phy_tx_oversampling_raw_data_ready && _zz_io_pop_ready_6);
  assign phy_tx_oversampling_raw_data_valid = (phy_header_extender_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_6);
  assign _zz_io_pop_ready_7 = (! pipeline_halt[8]);
  assign phy_tx_filter_result_data_queueWithAvailability_io_pop_ready = (stf_preamble_adder_raw_data_ready && _zz_io_pop_ready_7);
  assign stf_preamble_adder_raw_data_valid = (phy_tx_filter_result_data_queueWithAvailability_io_pop_valid && _zz_io_pop_ready_7);
  assign rf_data_valid = phy_tx_front_result_data_queueWithAvailability_io_pop_valid;
  assign rf_data_payload_cha_i = phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_i;
  assign rf_data_payload_cha_q = phy_tx_front_result_data_queueWithAvailability_io_pop_payload_cha_q;

endmodule

module StreamFifo_10 (
  input               io_push_valid,
  output              io_push_ready,
  input      [11:0]   io_push_payload_cha_i,
  input      [11:0]   io_push_payload_cha_q,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [11:0]   io_pop_payload_cha_i,
  output     [11:0]   io_pop_payload_cha_q,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [23:0]   _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_cha_i;
  wire       [23:0]   _zz_logic_ram_port_1;
  wire       [4:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [4:0]    logic_pushPtr_valueNext;
  reg        [4:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [4:0]    logic_popPtr_valueNext;
  reg        [4:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [23:0]   _zz_io_pop_payload_cha_i;
  wire                when_Stream_l954;
  wire       [4:0]    logic_ptrDif;
  reg [23:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_cha_i = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_cha_q,io_push_payload_cha_i};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_cha_i) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 5'h1f);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 5'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 5'h1f);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 5'h0;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_cha_i = _zz_logic_ram_port0;
  assign io_pop_payload_cha_i = _zz_io_pop_payload_cha_i[11 : 0];
  assign io_pop_payload_cha_q = _zz_io_pop_payload_cha_i[23 : 12];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module PhyTxICFront (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [11:0]   raw_data_payload_fragment_cha_i,
  input      [11:0]   raw_data_payload_fragment_cha_q,
  output              result_data_valid,
  input               result_data_ready,
  output     [11:0]   result_data_payload_cha_i,
  output     [11:0]   result_data_payload_cha_q
);


  assign raw_data_ready = result_data_ready;
  assign result_data_payload_cha_i = (raw_data_valid ? raw_data_payload_fragment_cha_i : 12'h0);
  assign result_data_payload_cha_q = (raw_data_valid ? raw_data_payload_fragment_cha_q : 12'h0);
  assign result_data_valid = raw_data_valid;

endmodule

module PreambleExtender (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [11:0]   raw_data_payload_fragment_cha_i,
  input      [11:0]   raw_data_payload_fragment_cha_q,
  output              preamble_data_valid,
  input               preamble_data_ready,
  output              preamble_data_payload_last,
  output     [11:0]   preamble_data_payload_fragment_cha_i,
  output     [11:0]   preamble_data_payload_fragment_cha_q,
  input               clk,
  input               reset
);
  localparam PreambleExtenderStates_IDLE = 2'd0;
  localparam PreambleExtenderStates_PREAMBLE = 2'd1;
  localparam PreambleExtenderStates_DATA = 2'd2;

  reg        [11:0]   _zz_I_mem_port0;
  reg        [11:0]   _zz_I_mem_port1;
  reg        [11:0]   _zz_Q_mem_port0;
  reg        [11:0]   _zz_Q_mem_port1;
  wire                _zz_I_mem_port;
  wire                _zz_Q_mem_port;
  wire                _zz_I_mem_port_1;
  wire                _zz_Q_mem_port_1;
  wire                _zz_preamble_data_i;
  wire                _zz_preamble_data_q;
  wire       [3:0]    _zz_cnt;
  wire                _zz_preamble_data_i_1;
  wire                _zz_preamble_data_q_1;
  reg        [3:0]    cnt;
  reg        [4:0]    repeatCnt;
  reg                 raw_ready;
  reg        [11:0]   preamble_data_i;
  reg        [11:0]   preamble_data_q;
  reg                 preamble_valid;
  reg                 preamble_last;
  reg        [1:0]    preamble_states;
  wire                when_PreambleExtender_l60;
  wire                when_PreambleExtender_l74;
  wire                when_PreambleExtender_l76;
  wire                raw_data_fire;
  wire                raw_data_fire_1;
  wire                when_PreambleExtender_l91;
  `ifndef SYNTHESIS
  reg [63:0] preamble_states_string;
  `endif

  (* rom_style = "block" *) reg [11:0] I_mem [0:15];
  (* rom_style = "block" *) reg [11:0] Q_mem [0:15];

  assign _zz_cnt = (cnt + 4'b0001);
  assign _zz_preamble_data_i = 1'b1;
  assign _zz_preamble_data_i_1 = 1'b1;
  assign _zz_preamble_data_q = 1'b1;
  assign _zz_preamble_data_q_1 = 1'b1;
  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/./simWorkspace/TX/rtl/TX.v_toplevel_stf_preamble_adder_I_mem.bin",I_mem);
  end
  always @(posedge clk) begin
    if(_zz_preamble_data_i) begin
      _zz_I_mem_port0 <= I_mem[cnt];
    end
  end

  always @(posedge clk) begin
    if(_zz_preamble_data_i_1) begin
      _zz_I_mem_port1 <= I_mem[cnt];
    end
  end

  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/./simWorkspace/TX/rtl/TX.v_toplevel_stf_preamble_adder_Q_mem.bin",Q_mem);
  end
  always @(posedge clk) begin
    if(_zz_preamble_data_q) begin
      _zz_Q_mem_port0 <= Q_mem[cnt];
    end
  end

  always @(posedge clk) begin
    if(_zz_preamble_data_q_1) begin
      _zz_Q_mem_port1 <= Q_mem[cnt];
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(preamble_states)
      PreambleExtenderStates_IDLE : preamble_states_string = "IDLE    ";
      PreambleExtenderStates_PREAMBLE : preamble_states_string = "PREAMBLE";
      PreambleExtenderStates_DATA : preamble_states_string = "DATA    ";
      default : preamble_states_string = "????????";
    endcase
  end
  `endif

  assign when_PreambleExtender_l60 = (raw_data_valid && preamble_data_ready);
  assign when_PreambleExtender_l74 = (cnt == 4'b1111);
  assign when_PreambleExtender_l76 = (repeatCnt == 5'h09);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign when_PreambleExtender_l91 = (raw_data_fire_1 && raw_data_payload_last);
  assign raw_data_ready = (raw_ready && preamble_data_ready);
  assign preamble_data_valid = preamble_valid;
  assign preamble_data_payload_fragment_cha_i = preamble_data_i;
  assign preamble_data_payload_fragment_cha_q = preamble_data_q;
  assign preamble_data_payload_last = preamble_last;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 4'b0000;
      repeatCnt <= 5'h0;
      raw_ready <= 1'b0;
      preamble_valid <= 1'b0;
      preamble_last <= 1'b0;
      preamble_states <= PreambleExtenderStates_IDLE;
    end else begin
      case(preamble_states)
        PreambleExtenderStates_IDLE : begin
          cnt <= 4'b0000;
          repeatCnt <= 5'h0;
          raw_ready <= 1'b0;
          preamble_valid <= 1'b0;
          preamble_last <= 1'b0;
          if(when_PreambleExtender_l60) begin
            cnt <= (cnt + 4'b0001);
            preamble_states <= PreambleExtenderStates_PREAMBLE;
          end
        end
        PreambleExtenderStates_PREAMBLE : begin
          if(preamble_data_ready) begin
            cnt <= ((cnt == 4'b1111) ? 4'b0000 : _zz_cnt);
          end
          preamble_valid <= 1'b1;
          if(when_PreambleExtender_l74) begin
            repeatCnt <= (repeatCnt + 5'h01);
            if(when_PreambleExtender_l76) begin
              raw_ready <= 1'b1;
              preamble_states <= PreambleExtenderStates_DATA;
            end
          end
        end
        default : begin
          if(raw_data_fire) begin
            preamble_valid <= 1'b1;
          end else begin
            preamble_valid <= 1'b0;
          end
          if(when_PreambleExtender_l91) begin
            preamble_states <= PreambleExtenderStates_IDLE;
            preamble_last <= 1'b1;
          end else begin
            preamble_last <= 1'b0;
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(preamble_states)
      PreambleExtenderStates_IDLE : begin
        preamble_data_i <= _zz_I_mem_port0;
        preamble_data_q <= _zz_Q_mem_port0;
      end
      PreambleExtenderStates_PREAMBLE : begin
        preamble_data_i <= _zz_I_mem_port1;
        preamble_data_q <= _zz_Q_mem_port1;
      end
      default : begin
        if(raw_data_fire) begin
          preamble_data_i <= raw_data_payload_fragment_cha_i;
          preamble_data_q <= raw_data_payload_fragment_cha_q;
        end
      end
    endcase
  end


endmodule

//StreamFifo_7 replaced by StreamFifo_7

module PhyTxFilter (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [11:0]   raw_data_payload_fragment_cha_i,
  input      [11:0]   raw_data_payload_fragment_cha_q,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [11:0]   result_data_payload_fragment_cha_i,
  output     [11:0]   result_data_payload_fragment_cha_q,
  input               clk,
  input               reset
);

  wire                fir_filter_iq_raw_data_valid;
  wire       [11:0]   fir_filter_iq_raw_data_payload_0;
  wire       [11:0]   fir_filter_iq_raw_data_payload_1;
  wire                fir_filter_iq_filtered_data_valid;
  wire       [18:0]   fir_filter_iq_filtered_data_payload_0;
  wire       [18:0]   fir_filter_iq_filtered_data_payload_1;
  wire       [11:0]   _zz_raw_data_payload_0;
  wire       [11:0]   _zz_raw_data_payload_1;
  reg                 last_padding;
  wire                raw_data_fire;
  wire                when_PhyTx_l218;
  wire                result_data_fire;
  wire                when_PhyTx_l220;
  reg                 raw_data_payload_last_delay_1;
  reg                 raw_data_payload_last_delay_2;
  reg                 raw_data_payload_last_delay_3;
  reg                 raw_data_payload_last_delay_4;
  reg                 raw_data_payload_last_delay_5;
  reg                 raw_data_payload_last_delay_6;
  reg                 raw_data_payload_last_delay_7;
  reg                 raw_data_payload_last_delay_8;
  reg                 raw_data_payload_last_delay_9;
  reg                 raw_data_payload_last_delay_10;
  reg                 raw_data_payload_last_delay_11;
  reg                 raw_data_payload_last_delay_12;
  reg                 raw_data_payload_last_delay_13;
  reg                 raw_data_payload_last_delay_14;
  reg                 raw_data_payload_last_delay_15;
  reg                 raw_data_payload_last_delay_16;
  reg                 raw_data_payload_last_delay_17;
  reg                 raw_data_payload_last_delay_18;
  reg                 raw_data_payload_last_delay_19;
  reg                 raw_data_payload_last_delay_20;
  reg                 raw_data_payload_last_delay_21;
  reg                 raw_data_payload_last_delay_22;
  reg                 raw_data_payload_last_delay_23;
  reg                 raw_data_payload_last_delay_24;
  reg                 raw_data_payload_last_delay_25;

  assign _zz_raw_data_payload_0 = 12'h0;
  assign _zz_raw_data_payload_1 = 12'h0;
  TransposeFIR fir_filter_iq (
    .raw_data_valid             (fir_filter_iq_raw_data_valid                 ), //i
    .raw_data_payload_0         (fir_filter_iq_raw_data_payload_0[11:0]       ), //i
    .raw_data_payload_1         (fir_filter_iq_raw_data_payload_1[11:0]       ), //i
    .filtered_data_valid        (fir_filter_iq_filtered_data_valid            ), //o
    .filtered_data_payload_0    (fir_filter_iq_filtered_data_payload_0[18:0]  ), //o
    .filtered_data_payload_1    (fir_filter_iq_filtered_data_payload_1[18:0]  ), //o
    .clk                        (clk                                          ), //i
    .reset                      (reset                                        )  //i
  );
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l218 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l220 = (result_data_fire && result_data_payload_last);
  assign raw_data_ready = ((! last_padding) && result_data_ready);
  assign fir_filter_iq_raw_data_valid = (raw_data_valid || last_padding);
  assign fir_filter_iq_raw_data_payload_0 = (last_padding ? _zz_raw_data_payload_0 : raw_data_payload_fragment_cha_i);
  assign fir_filter_iq_raw_data_payload_1 = (last_padding ? _zz_raw_data_payload_1 : raw_data_payload_fragment_cha_q);
  assign result_data_valid = fir_filter_iq_filtered_data_valid;
  assign result_data_payload_fragment_cha_i = (fir_filter_iq_filtered_data_payload_0 >>> 7);
  assign result_data_payload_fragment_cha_q = (fir_filter_iq_filtered_data_payload_1 >>> 7);
  assign result_data_payload_last = raw_data_payload_last_delay_25;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      last_padding <= 1'b0;
      raw_data_payload_last_delay_1 <= 1'b0;
      raw_data_payload_last_delay_2 <= 1'b0;
      raw_data_payload_last_delay_3 <= 1'b0;
      raw_data_payload_last_delay_4 <= 1'b0;
      raw_data_payload_last_delay_5 <= 1'b0;
      raw_data_payload_last_delay_6 <= 1'b0;
      raw_data_payload_last_delay_7 <= 1'b0;
      raw_data_payload_last_delay_8 <= 1'b0;
      raw_data_payload_last_delay_9 <= 1'b0;
      raw_data_payload_last_delay_10 <= 1'b0;
      raw_data_payload_last_delay_11 <= 1'b0;
      raw_data_payload_last_delay_12 <= 1'b0;
      raw_data_payload_last_delay_13 <= 1'b0;
      raw_data_payload_last_delay_14 <= 1'b0;
      raw_data_payload_last_delay_15 <= 1'b0;
      raw_data_payload_last_delay_16 <= 1'b0;
      raw_data_payload_last_delay_17 <= 1'b0;
      raw_data_payload_last_delay_18 <= 1'b0;
      raw_data_payload_last_delay_19 <= 1'b0;
      raw_data_payload_last_delay_20 <= 1'b0;
      raw_data_payload_last_delay_21 <= 1'b0;
      raw_data_payload_last_delay_22 <= 1'b0;
      raw_data_payload_last_delay_23 <= 1'b0;
      raw_data_payload_last_delay_24 <= 1'b0;
      raw_data_payload_last_delay_25 <= 1'b0;
    end else begin
      if(when_PhyTx_l218) begin
        last_padding <= 1'b1;
      end else begin
        if(when_PhyTx_l220) begin
          last_padding <= 1'b0;
        end
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_1 <= raw_data_payload_last;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_2 <= raw_data_payload_last_delay_1;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_3 <= raw_data_payload_last_delay_2;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_4 <= raw_data_payload_last_delay_3;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_5 <= raw_data_payload_last_delay_4;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_6 <= raw_data_payload_last_delay_5;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_7 <= raw_data_payload_last_delay_6;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_8 <= raw_data_payload_last_delay_7;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_9 <= raw_data_payload_last_delay_8;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_10 <= raw_data_payload_last_delay_9;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_11 <= raw_data_payload_last_delay_10;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_12 <= raw_data_payload_last_delay_11;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_13 <= raw_data_payload_last_delay_12;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_14 <= raw_data_payload_last_delay_13;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_15 <= raw_data_payload_last_delay_14;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_16 <= raw_data_payload_last_delay_15;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_17 <= raw_data_payload_last_delay_16;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_18 <= raw_data_payload_last_delay_17;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_19 <= raw_data_payload_last_delay_18;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_20 <= raw_data_payload_last_delay_19;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_21 <= raw_data_payload_last_delay_20;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_22 <= raw_data_payload_last_delay_21;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_23 <= raw_data_payload_last_delay_22;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_24 <= raw_data_payload_last_delay_23;
      end
      if(fir_filter_iq_raw_data_valid) begin
        raw_data_payload_last_delay_25 <= raw_data_payload_last_delay_24;
      end
    end
  end


endmodule

module PhyTxOverSampling (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [11:0]   raw_data_payload_fragment_cha_i,
  input      [11:0]   raw_data_payload_fragment_cha_q,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [11:0]   result_data_payload_fragment_cha_i,
  output     [11:0]   result_data_payload_fragment_cha_q,
  input               clk,
  input               reset
);

  wire       [2:0]    _zz_cnt;
  wire       [11:0]   _zz_result_data_payload_fragment_cha_i;
  wire       [11:0]   _zz_result_data_payload_fragment_cha_q;
  reg        [2:0]    cnt;
  reg                 raw_last;
  wire                raw_data_fire;
  wire                result_data_fire;

  assign _zz_cnt = (cnt + 3'b001);
  assign _zz_result_data_payload_fragment_cha_i = 12'h0;
  assign _zz_result_data_payload_fragment_cha_q = 12'h0;
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign raw_data_ready = (result_data_ready && (cnt == 3'b000));
  assign result_data_valid = (raw_data_valid || (cnt != 3'b000));
  assign result_data_payload_last = (raw_last && (cnt == 3'b111));
  assign result_data_payload_fragment_cha_i = ((cnt == 3'b000) ? raw_data_payload_fragment_cha_i : _zz_result_data_payload_fragment_cha_i);
  assign result_data_payload_fragment_cha_q = ((cnt == 3'b000) ? raw_data_payload_fragment_cha_q : _zz_result_data_payload_fragment_cha_q);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 3'b000;
      raw_last <= 1'b0;
    end else begin
      if(raw_data_fire) begin
        raw_last <= raw_data_payload_last;
      end
      if(result_data_fire) begin
        cnt <= ((cnt == 3'b111) ? 3'b000 : _zz_cnt);
      end
    end
  end


endmodule

//StreamFifo_7 replaced by StreamFifo_7

module PhyHeaderExtender (
  input      [1:0]    mod_method,
  input               pkg_size_valid,
  output              pkg_size_ready,
  input      [7:0]    pkg_size_payload,
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [11:0]   raw_data_payload_fragment_cha_i,
  input      [11:0]   raw_data_payload_fragment_cha_q,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [11:0]   result_data_payload_fragment_cha_i,
  output reg [11:0]   result_data_payload_fragment_cha_q,
  input               clk,
  input               reset
);
  localparam PhyTxHeaderStatus_IDLE = 2'd0;
  localparam PhyTxHeaderStatus_SDF = 2'd1;
  localparam PhyTxHeaderStatus_HEADER = 2'd2;
  localparam PhyTxHeaderStatus_DATA = 2'd3;

  wire       [11:0]   _zz_header_mod_array_port2;
  wire       [0:0]    _zz_header_mod_array_port;
  wire       [11:0]   _zz_header_mod_array_port_1;
  wire       [11:0]   _zz_header_mod_array_port_2;
  wire                _zz_header_mod_array_port_3;
  wire       [0:0]    _zz_header_mod_array_port_4;
  wire       [11:0]   _zz_header_mod_array_port_5;
  wire       [11:0]   _zz_header_mod_array_port_6;
  wire                _zz_header_mod_array_port_7;
  reg        [11:0]   _zz_result_data_payload_fragment_cha_i_1;
  wire       [2:0]    _zz_result_data_payload_fragment_cha_i_2;
  wire       [3:0]    _zz__zz_result_data_payload_fragment_cha_i;
  reg        [1:0]    header_status;
  wire       [11:0]   sdf_i_vec_0;
  wire       [11:0]   sdf_i_vec_1;
  wire       [11:0]   sdf_i_vec_2;
  wire       [11:0]   sdf_i_vec_3;
  wire       [11:0]   sdf_i_vec_4;
  wire       [11:0]   sdf_i_vec_5;
  reg        [4:0]    counter;
  reg                 pkg_size_ready_1;
  reg        [7:0]    pkg_size_payload_1;
  wire       [9:0]    method_size;
  wire                when_PhyTx_l325;
  wire                pkg_size_fire;
  wire                result_data_fire;
  wire                when_PhyTx_l336;
  wire                result_data_fire_1;
  wire                when_PhyTx_l348;
  wire       [0:0]    _zz_result_data_payload_fragment_cha_i;
  wire                result_data_fire_2;
  wire                when_PhyTx_l359;
  `ifndef SYNTHESIS
  reg [47:0] header_status_string;
  `endif

  (* ram_style = "distributed" *) reg [11:0] header_mod_array [0:1];

  assign _zz_header_mod_array_port_2 = 12'h801;
  assign _zz_header_mod_array_port_6 = 12'h7ff;
  assign _zz_result_data_payload_fragment_cha_i_2 = counter[2:0];
  assign _zz__zz_result_data_payload_fragment_cha_i = counter[3:0];
  assign _zz_header_mod_array_port = 1'b0;
  assign _zz_header_mod_array_port_1 = _zz_header_mod_array_port_2;
  assign _zz_header_mod_array_port_3 = 1'b1;
  assign _zz_header_mod_array_port_4 = 1'b1;
  assign _zz_header_mod_array_port_5 = _zz_header_mod_array_port_6;
  assign _zz_header_mod_array_port_7 = 1'b1;
  always @(posedge clk) begin
    if(_zz_header_mod_array_port_3) begin
      header_mod_array[_zz_header_mod_array_port] <= _zz_header_mod_array_port_1;
    end
  end

  always @(posedge clk) begin
    if(_zz_header_mod_array_port_7) begin
      header_mod_array[_zz_header_mod_array_port_4] <= _zz_header_mod_array_port_5;
    end
  end

  assign _zz_header_mod_array_port2 = header_mod_array[_zz_result_data_payload_fragment_cha_i];
  always @(*) begin
    case(_zz_result_data_payload_fragment_cha_i_2)
      3'b000 : _zz_result_data_payload_fragment_cha_i_1 = sdf_i_vec_0;
      3'b001 : _zz_result_data_payload_fragment_cha_i_1 = sdf_i_vec_1;
      3'b010 : _zz_result_data_payload_fragment_cha_i_1 = sdf_i_vec_2;
      3'b011 : _zz_result_data_payload_fragment_cha_i_1 = sdf_i_vec_3;
      3'b100 : _zz_result_data_payload_fragment_cha_i_1 = sdf_i_vec_4;
      default : _zz_result_data_payload_fragment_cha_i_1 = sdf_i_vec_5;
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(header_status)
      PhyTxHeaderStatus_IDLE : header_status_string = "IDLE  ";
      PhyTxHeaderStatus_SDF : header_status_string = "SDF   ";
      PhyTxHeaderStatus_HEADER : header_status_string = "HEADER";
      PhyTxHeaderStatus_DATA : header_status_string = "DATA  ";
      default : header_status_string = "??????";
    endcase
  end
  `endif

  assign sdf_i_vec_0 = 12'h801;
  assign sdf_i_vec_1 = 12'h7ff;
  assign sdf_i_vec_2 = 12'h801;
  assign sdf_i_vec_3 = 12'h7ff;
  assign sdf_i_vec_4 = 12'h801;
  assign sdf_i_vec_5 = 12'h7ff;
  always @(*) begin
    raw_data_ready = 1'b0;
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_SDF : begin
      end
      PhyTxHeaderStatus_HEADER : begin
      end
      default : begin
        raw_data_ready = result_data_ready;
      end
    endcase
  end

  always @(*) begin
    result_data_valid = 1'b0;
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_SDF : begin
        result_data_valid = 1'b1;
      end
      PhyTxHeaderStatus_HEADER : begin
        result_data_valid = 1'b1;
      end
      default : begin
        result_data_valid = raw_data_valid;
      end
    endcase
  end

  always @(*) begin
    result_data_payload_last = 1'b0;
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_SDF : begin
      end
      PhyTxHeaderStatus_HEADER : begin
      end
      default : begin
        result_data_payload_last = raw_data_payload_last;
      end
    endcase
  end

  always @(*) begin
    result_data_payload_fragment_cha_i = 12'h0;
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_SDF : begin
        result_data_payload_fragment_cha_i = _zz_result_data_payload_fragment_cha_i_1;
      end
      PhyTxHeaderStatus_HEADER : begin
        result_data_payload_fragment_cha_i = _zz_header_mod_array_port2;
      end
      default : begin
        result_data_payload_fragment_cha_i = raw_data_payload_fragment_cha_i;
      end
    endcase
  end

  always @(*) begin
    result_data_payload_fragment_cha_q = 12'h0;
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_SDF : begin
      end
      PhyTxHeaderStatus_HEADER : begin
      end
      default : begin
        result_data_payload_fragment_cha_q = raw_data_payload_fragment_cha_q;
      end
    endcase
  end

  assign method_size = {mod_method,pkg_size_payload_1};
  assign when_PhyTx_l325 = (raw_data_valid && pkg_size_valid);
  assign pkg_size_fire = (pkg_size_valid && pkg_size_ready);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l336 = (counter == 5'h05);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l348 = (counter == 5'h0);
  assign _zz_result_data_payload_fragment_cha_i = method_size[_zz__zz_result_data_payload_fragment_cha_i];
  assign result_data_fire_2 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l359 = (result_data_fire_2 && result_data_payload_last);
  assign pkg_size_ready = pkg_size_ready_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      header_status <= PhyTxHeaderStatus_IDLE;
      counter <= 5'h0;
      pkg_size_ready_1 <= 1'b0;
    end else begin
      case(header_status)
        PhyTxHeaderStatus_IDLE : begin
          if(when_PhyTx_l325) begin
            header_status <= PhyTxHeaderStatus_SDF;
            pkg_size_ready_1 <= 1'b1;
          end
        end
        PhyTxHeaderStatus_SDF : begin
          if(pkg_size_fire) begin
            pkg_size_ready_1 <= 1'b0;
          end
          if(result_data_fire) begin
            if(when_PhyTx_l336) begin
              header_status <= PhyTxHeaderStatus_HEADER;
              counter <= 5'h09;
            end else begin
              counter <= (counter + 5'h01);
            end
          end
        end
        PhyTxHeaderStatus_HEADER : begin
          if(result_data_fire_1) begin
            if(when_PhyTx_l348) begin
              header_status <= PhyTxHeaderStatus_DATA;
              counter <= 5'h0;
            end else begin
              counter <= (counter - 5'h01);
            end
          end
        end
        default : begin
          if(when_PhyTx_l359) begin
            header_status <= PhyTxHeaderStatus_IDLE;
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(header_status)
      PhyTxHeaderStatus_IDLE : begin
      end
      PhyTxHeaderStatus_SDF : begin
        if(pkg_size_fire) begin
          pkg_size_payload_1 <= pkg_size_payload;
        end
      end
      PhyTxHeaderStatus_HEADER : begin
      end
      default : begin
      end
    endcase
  end


endmodule

module StreamFifo_7 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [11:0]   io_push_payload_fragment_cha_i,
  input      [11:0]   io_push_payload_fragment_cha_q,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [11:0]   io_pop_payload_fragment_cha_i,
  output     [11:0]   io_pop_payload_fragment_cha_q,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [24:0]   _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [24:0]   _zz_logic_ram_port_1;
  wire       [4:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [4:0]    logic_pushPtr_valueNext;
  reg        [4:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [4:0]    logic_popPtr_valueNext;
  reg        [4:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [24:0]   _zz_io_pop_payload_last;
  wire       [23:0]   _zz_io_pop_payload_fragment_cha_i;
  wire                when_Stream_l954;
  wire       [4:0]    logic_ptrDif;
  reg [24:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {{io_push_payload_fragment_cha_q,io_push_payload_fragment_cha_i},io_push_payload_last};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_last) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 5'h1f);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 5'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 5'h1f);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 5'h0;
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
  assign _zz_io_pop_payload_fragment_cha_i = _zz_io_pop_payload_last[24 : 1];
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment_cha_i = _zz_io_pop_payload_fragment_cha_i[11 : 0];
  assign io_pop_payload_fragment_cha_q = _zz_io_pop_payload_fragment_cha_i[23 : 12];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module ModulatorRTL (
  input               data_flow_unit_data_valid,
  input               data_flow_unit_data_payload_last,
  input      [7:0]    data_flow_unit_data_payload_fragment,
  output              data_flow_mod_iq_valid,
  output              data_flow_mod_iq_payload_last,
  output     [11:0]   data_flow_mod_iq_payload_fragment_cha_i,
  output     [11:0]   data_flow_mod_iq_payload_fragment_cha_q,
  input      [1:0]    select_1,
  input               clk,
  input               reset
);

  wire       [0:0]    mPSK_Modulator_Extension_mod_unit_data_payload_fragment;
  wire       [1:0]    mPSK_Modulator_Extension_mod_1_unit_data_payload_fragment;
  wire       [3:0]    mQAM_Modulator_Extension_mod_unit_data_payload_fragment;
  wire                flowDeMux_1_outputs_0_valid;
  wire                flowDeMux_1_outputs_0_payload_last;
  wire       [7:0]    flowDeMux_1_outputs_0_payload_fragment;
  wire                flowDeMux_1_outputs_1_valid;
  wire                flowDeMux_1_outputs_1_payload_last;
  wire       [7:0]    flowDeMux_1_outputs_1_payload_fragment;
  wire                flowDeMux_1_outputs_2_valid;
  wire                flowDeMux_1_outputs_2_payload_last;
  wire       [7:0]    flowDeMux_1_outputs_2_payload_fragment;
  wire                mPSK_Modulator_Extension_mod_mod_iq_valid;
  wire                mPSK_Modulator_Extension_mod_mod_iq_payload_last;
  wire       [11:0]   mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q;
  wire                mPSK_Modulator_Extension_mod_1_mod_iq_valid;
  wire                mPSK_Modulator_Extension_mod_1_mod_iq_payload_last;
  wire       [11:0]   mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_q;
  wire                mQAM_Modulator_Extension_mod_mod_iq_valid;
  wire                mQAM_Modulator_Extension_mod_mod_iq_payload_last;
  wire       [11:0]   mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q;
  wire                flowMux_1_output_valid;
  wire                flowMux_1_output_payload_last;
  wire       [11:0]   flowMux_1_output_payload_fragment_cha_i;
  wire       [11:0]   flowMux_1_output_payload_fragment_cha_q;
  wire                _zz_unit_data_valid;
  wire                _zz_unit_data_payload_last;
  wire                _zz_unit_data_valid_1;
  wire                _zz_unit_data_payload_last_1;
  wire                _zz_unit_data_valid_2;
  wire                _zz_unit_data_payload_last_2;

  FlowDeMux flowDeMux_1 (
    .input_valid                   (data_flow_unit_data_valid                    ), //i
    .input_payload_last            (data_flow_unit_data_payload_last             ), //i
    .input_payload_fragment        (data_flow_unit_data_payload_fragment[7:0]    ), //i
    .select_1                      (select_1[1:0]                                ), //i
    .outputs_0_valid               (flowDeMux_1_outputs_0_valid                  ), //o
    .outputs_0_payload_last        (flowDeMux_1_outputs_0_payload_last           ), //o
    .outputs_0_payload_fragment    (flowDeMux_1_outputs_0_payload_fragment[7:0]  ), //o
    .outputs_1_valid               (flowDeMux_1_outputs_1_valid                  ), //o
    .outputs_1_payload_last        (flowDeMux_1_outputs_1_payload_last           ), //o
    .outputs_1_payload_fragment    (flowDeMux_1_outputs_1_payload_fragment[7:0]  ), //o
    .outputs_2_valid               (flowDeMux_1_outputs_2_valid                  ), //o
    .outputs_2_payload_last        (flowDeMux_1_outputs_2_payload_last           ), //o
    .outputs_2_payload_fragment    (flowDeMux_1_outputs_2_payload_fragment[7:0]  )  //o
  );
  mPSKMod mPSK_Modulator_Extension_mod (
    .unit_data_valid                  (_zz_unit_data_valid                                               ), //i
    .unit_data_payload_last           (_zz_unit_data_payload_last                                        ), //i
    .unit_data_payload_fragment       (mPSK_Modulator_Extension_mod_unit_data_payload_fragment           ), //i
    .mod_iq_valid                     (mPSK_Modulator_Extension_mod_mod_iq_valid                         ), //o
    .mod_iq_payload_last              (mPSK_Modulator_Extension_mod_mod_iq_payload_last                  ), //o
    .mod_iq_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i[11:0]  ), //o
    .mod_iq_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q[11:0]  ), //o
    .clk                              (clk                                                               ), //i
    .reset                            (reset                                                             )  //i
  );
  mPSKMod_1 mPSK_Modulator_Extension_mod_1 (
    .unit_data_valid                  (_zz_unit_data_valid_1                                               ), //i
    .unit_data_payload_last           (_zz_unit_data_payload_last_1                                        ), //i
    .unit_data_payload_fragment       (mPSK_Modulator_Extension_mod_1_unit_data_payload_fragment[1:0]      ), //i
    .mod_iq_valid                     (mPSK_Modulator_Extension_mod_1_mod_iq_valid                         ), //o
    .mod_iq_payload_last              (mPSK_Modulator_Extension_mod_1_mod_iq_payload_last                  ), //o
    .mod_iq_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_i[11:0]  ), //o
    .mod_iq_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_q[11:0]  ), //o
    .clk                              (clk                                                                 ), //i
    .reset                            (reset                                                               )  //i
  );
  mQAMMod mQAM_Modulator_Extension_mod (
    .unit_data_valid                  (_zz_unit_data_valid_2                                             ), //i
    .unit_data_payload_last           (_zz_unit_data_payload_last_2                                      ), //i
    .unit_data_payload_fragment       (mQAM_Modulator_Extension_mod_unit_data_payload_fragment[3:0]      ), //i
    .mod_iq_valid                     (mQAM_Modulator_Extension_mod_mod_iq_valid                         ), //o
    .mod_iq_payload_last              (mQAM_Modulator_Extension_mod_mod_iq_payload_last                  ), //o
    .mod_iq_payload_fragment_cha_i    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i[11:0]  ), //o
    .mod_iq_payload_fragment_cha_q    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q[11:0]  ), //o
    .clk                              (clk                                                               ), //i
    .reset                            (reset                                                             )  //i
  );
  FlowMux flowMux_1 (
    .inputs_0_valid                     (mPSK_Modulator_Extension_mod_mod_iq_valid                           ), //i
    .inputs_0_payload_last              (mPSK_Modulator_Extension_mod_mod_iq_payload_last                    ), //i
    .inputs_0_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i[11:0]    ), //i
    .inputs_0_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q[11:0]    ), //i
    .inputs_1_valid                     (mPSK_Modulator_Extension_mod_1_mod_iq_valid                         ), //i
    .inputs_1_payload_last              (mPSK_Modulator_Extension_mod_1_mod_iq_payload_last                  ), //i
    .inputs_1_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_i[11:0]  ), //i
    .inputs_1_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_q[11:0]  ), //i
    .inputs_2_valid                     (mQAM_Modulator_Extension_mod_mod_iq_valid                           ), //i
    .inputs_2_payload_last              (mQAM_Modulator_Extension_mod_mod_iq_payload_last                    ), //i
    .inputs_2_payload_fragment_cha_i    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i[11:0]    ), //i
    .inputs_2_payload_fragment_cha_q    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q[11:0]    ), //i
    .select_1                           (select_1[1:0]                                                       ), //i
    .output_valid                       (flowMux_1_output_valid                                              ), //o
    .output_payload_last                (flowMux_1_output_payload_last                                       ), //o
    .output_payload_fragment_cha_i      (flowMux_1_output_payload_fragment_cha_i[11:0]                       ), //o
    .output_payload_fragment_cha_q      (flowMux_1_output_payload_fragment_cha_q[11:0]                       )  //o
  );
  assign _zz_unit_data_valid = flowDeMux_1_outputs_0_valid;
  assign _zz_unit_data_payload_last = flowDeMux_1_outputs_0_payload_last;
  assign mPSK_Modulator_Extension_mod_unit_data_payload_fragment = flowDeMux_1_outputs_0_payload_fragment[0:0];
  assign _zz_unit_data_valid_1 = flowDeMux_1_outputs_1_valid;
  assign _zz_unit_data_payload_last_1 = flowDeMux_1_outputs_1_payload_last;
  assign mPSK_Modulator_Extension_mod_1_unit_data_payload_fragment = flowDeMux_1_outputs_1_payload_fragment[1:0];
  assign _zz_unit_data_valid_2 = flowDeMux_1_outputs_2_valid;
  assign _zz_unit_data_payload_last_2 = flowDeMux_1_outputs_2_payload_last;
  assign mQAM_Modulator_Extension_mod_unit_data_payload_fragment = flowDeMux_1_outputs_2_payload_fragment[3:0];
  assign data_flow_mod_iq_valid = flowMux_1_output_valid;
  assign data_flow_mod_iq_payload_last = flowMux_1_output_payload_last;
  assign data_flow_mod_iq_payload_fragment_cha_i = flowMux_1_output_payload_fragment_cha_i;
  assign data_flow_mod_iq_payload_fragment_cha_q = flowMux_1_output_payload_fragment_cha_q;

endmodule

module dataDivDynamic (
  input               base_data_valid,
  output              base_data_ready,
  input               base_data_payload_last,
  input      [15:0]   base_data_payload_fragment,
  input               enable,
  input      [3:0]    cnt_step,
  input      [3:0]    cnt_limit,
  output              unit_data_valid,
  output              unit_data_payload_last,
  output     [15:0]   unit_data_payload_fragment,
  input               clk,
  input               reset
);

  wire       [3:0]    _zz_base_cnt;
  reg                 unit_valid;
  reg                 base_last;
  reg        [3:0]    base_cnt;
  wire                base_ready;
  reg        [15:0]   base_buffer;
  reg                 loaded;
  wire                when_dataDivDynamic_l42;
  wire                base_data_fire;
  wire                when_dataDivDynamic_l52;

  assign _zz_base_cnt = (base_cnt + cnt_step);
  assign base_ready = ((cnt_limit == base_cnt) && enable);
  assign when_dataDivDynamic_l42 = (! enable);
  assign base_data_fire = (base_data_valid && base_data_ready);
  assign when_dataDivDynamic_l52 = (base_cnt == cnt_limit);
  assign base_data_ready = base_ready;
  assign unit_data_payload_fragment = base_buffer;
  assign unit_data_payload_last = (base_last && (base_cnt == cnt_limit));
  assign unit_data_valid = unit_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      unit_valid <= 1'b0;
      base_last <= 1'b0;
      base_cnt <= 4'b0000;
      base_buffer <= 16'h0;
      loaded <= 1'b0;
    end else begin
      if(when_dataDivDynamic_l42) begin
        base_cnt <= cnt_limit;
        unit_valid <= 1'b0;
        loaded <= 1'b0;
      end else begin
        if(base_data_fire) begin
          base_cnt <= (_zz_base_cnt + 4'b0000);
          base_buffer <= base_data_payload_fragment;
          base_last <= base_data_payload_last;
          unit_valid <= 1'b1;
          loaded <= 1'b1;
        end else begin
          if(when_dataDivDynamic_l52) begin
            base_buffer <= (base_buffer >>> cnt_step);
            unit_valid <= 1'b0;
            loaded <= 1'b0;
          end else begin
            if(loaded) begin
              base_cnt <= (base_cnt + cnt_step);
              base_buffer <= (base_buffer >>> cnt_step);
              unit_valid <= 1'b1;
            end
          end
        end
      end
    end
  end


endmodule

//StreamFifo_5 replaced by StreamFifo_5

module PhyTxScrambler (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [15:0]   result_data_payload_fragment,
  input               clk,
  input               reset
);
  localparam PhyTxScramblerStatus_IDLE = 2'd0;
  localparam PhyTxScramblerStatus_SCRAMBLING = 2'd1;
  localparam PhyTxScramblerStatus_FINAL_1 = 2'd2;

  reg                 scrambler_1_init_state_valid;
  reg                 scrambler_1_scram_data_ready;
  wire                scrambler_1_scram_data_valid;
  wire       [15:0]   scrambler_1_scram_data_payload;
  reg        [1:0]    scrambler_status;
  wire                raw_data_fire;
  wire                when_PhyTx_l144;
  wire                raw_data_fire_1;
  `ifndef SYNTHESIS
  reg [79:0] scrambler_status_string;
  `endif


  Scrambler scrambler_1 (
    .init_state_valid      (scrambler_1_init_state_valid          ), //i
    .init_state_payload    (7'h7f                                 ), //i
    .scram_data_valid      (scrambler_1_scram_data_valid          ), //o
    .scram_data_ready      (scrambler_1_scram_data_ready          ), //i
    .scram_data_payload    (scrambler_1_scram_data_payload[15:0]  ), //o
    .clk                   (clk                                   ), //i
    .reset                 (reset                                 )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(scrambler_status)
      PhyTxScramblerStatus_IDLE : scrambler_status_string = "IDLE      ";
      PhyTxScramblerStatus_SCRAMBLING : scrambler_status_string = "SCRAMBLING";
      PhyTxScramblerStatus_FINAL_1 : scrambler_status_string = "FINAL_1   ";
      default : scrambler_status_string = "??????????";
    endcase
  end
  `endif

  always @(*) begin
    result_data_valid = 1'b0;
    case(scrambler_status)
      PhyTxScramblerStatus_IDLE : begin
      end
      PhyTxScramblerStatus_SCRAMBLING : begin
        result_data_valid = (scrambler_1_scram_data_valid && raw_data_valid);
      end
      default : begin
      end
    endcase
  end

  assign result_data_payload_fragment = (scrambler_1_scram_data_payload ^ raw_data_payload_fragment);
  assign result_data_payload_last = raw_data_payload_last;
  always @(*) begin
    raw_data_ready = 1'b0;
    case(scrambler_status)
      PhyTxScramblerStatus_IDLE : begin
      end
      PhyTxScramblerStatus_SCRAMBLING : begin
        raw_data_ready = result_data_ready;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    case(scrambler_status)
      PhyTxScramblerStatus_IDLE : begin
        if(raw_data_valid) begin
          scrambler_1_init_state_valid = 1'b0;
        end else begin
          scrambler_1_init_state_valid = 1'b1;
        end
      end
      PhyTxScramblerStatus_SCRAMBLING : begin
        scrambler_1_init_state_valid = 1'b0;
      end
      default : begin
        scrambler_1_init_state_valid = 1'b1;
      end
    endcase
  end

  always @(*) begin
    case(scrambler_status)
      PhyTxScramblerStatus_IDLE : begin
        if(raw_data_valid) begin
          scrambler_1_scram_data_ready = 1'b1;
        end else begin
          scrambler_1_scram_data_ready = 1'b0;
        end
      end
      PhyTxScramblerStatus_SCRAMBLING : begin
        scrambler_1_scram_data_ready = raw_data_fire_1;
      end
      default : begin
        scrambler_1_scram_data_ready = 1'b0;
      end
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l144 = (raw_data_fire && raw_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      scrambler_status <= PhyTxScramblerStatus_IDLE;
    end else begin
      case(scrambler_status)
        PhyTxScramblerStatus_IDLE : begin
          if(raw_data_valid) begin
            scrambler_status <= PhyTxScramblerStatus_SCRAMBLING;
          end
        end
        PhyTxScramblerStatus_SCRAMBLING : begin
          if(when_PhyTx_l144) begin
            scrambler_status <= PhyTxScramblerStatus_FINAL_1;
          end
        end
        default : begin
          scrambler_status <= PhyTxScramblerStatus_IDLE;
        end
      endcase
    end
  end


endmodule

module StreamFifo_5 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [15:0]   io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [15:0]   io_pop_payload_fragment,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [16:0]   _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [16:0]   _zz_logic_ram_port_1;
  wire       [4:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [4:0]    logic_pushPtr_valueNext;
  reg        [4:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [4:0]    logic_popPtr_valueNext;
  reg        [4:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [16:0]   _zz_io_pop_payload_last;
  wire                when_Stream_l954;
  wire       [4:0]    logic_ptrDif;
  reg [16:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_fragment,io_push_payload_last};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_last) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 5'h1f);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 5'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 5'h1f);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 5'h0;
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
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[16 : 1];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module Puncturing (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output              punched_data_valid,
  output              punched_data_payload_last,
  output     [15:0]   punched_data_payload_fragment,
  input               clk,
  input               reset
);

  wire       [4:0]    _zz_punched_data_payload_fragment;
  wire       [0:0]    _zz_punched_data_payload_fragment_1;
  wire                _zz_punched_data_payload_fragment_2;
  reg        [15:0]   raw_data_fragment;
  reg                 raw_data_valid_1;
  reg                 raw_data_last;

  assign _zz_punched_data_payload_fragment = {{{{raw_data_fragment[15],raw_data_fragment[7]},raw_data_fragment[14]},raw_data_fragment[6]},raw_data_fragment[13]};
  assign _zz_punched_data_payload_fragment_1 = raw_data_fragment[5];
  assign _zz_punched_data_payload_fragment_2 = raw_data_fragment[12];
  assign raw_data_ready = 1'b1;
  assign punched_data_valid = raw_data_valid_1;
  assign punched_data_payload_last = raw_data_last;
  assign punched_data_payload_fragment = {{{{{{{{{{{_zz_punched_data_payload_fragment,_zz_punched_data_payload_fragment_1},_zz_punched_data_payload_fragment_2},raw_data_fragment[4]},raw_data_fragment[11]},raw_data_fragment[3]},raw_data_fragment[10]},raw_data_fragment[2]},raw_data_fragment[9]},raw_data_fragment[1]},raw_data_fragment[8]},raw_data_fragment[0]};
  always @(posedge clk) begin
    raw_data_fragment <= raw_data_payload_fragment;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      raw_data_valid_1 <= 1'b0;
      raw_data_last <= 1'b0;
    end else begin
      raw_data_valid_1 <= raw_data_valid;
      raw_data_last <= raw_data_payload_last;
    end
  end


endmodule

module PhyTxEncoder (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [15:0]   result_data_payload_fragment,
  input               clk,
  input               reset
);

  reg                 phy_tx_encoder_raw_data_valid;
  reg                 phy_tx_encoder_raw_data_payload_last;
  reg        [7:0]    phy_tx_encoder_raw_data_payload_fragment;
  wire                phy_tx_encoder_raw_data_ready;
  wire                phy_tx_encoder_coded_data_valid;
  wire                phy_tx_encoder_coded_data_payload_last;
  wire       [15:0]   phy_tx_encoder_coded_data_payload_fragment;
  reg                 emitEncoding;
  wire                raw_data_fire;
  wire                when_PhyTx_l96;
  wire                phy_tx_encoder_raw_data_fire;
  wire                when_PhyTx_l96_1;
  wire                phy_tx_encoder_coded_data_toStream_valid;
  wire                phy_tx_encoder_coded_data_toStream_ready;
  wire                phy_tx_encoder_coded_data_toStream_payload_last;
  wire       [15:0]   phy_tx_encoder_coded_data_toStream_payload_fragment;

  ConvEncoder phy_tx_encoder (
    .tail_bits_valid                (1'b0                                              ), //i
    .tail_bits_payload              (7'h0                                              ), //i
    .raw_data_valid                 (phy_tx_encoder_raw_data_valid                     ), //i
    .raw_data_ready                 (phy_tx_encoder_raw_data_ready                     ), //o
    .raw_data_payload_last          (phy_tx_encoder_raw_data_payload_last              ), //i
    .raw_data_payload_fragment      (phy_tx_encoder_raw_data_payload_fragment[7:0]     ), //i
    .coded_data_valid               (phy_tx_encoder_coded_data_valid                   ), //o
    .coded_data_payload_last        (phy_tx_encoder_coded_data_payload_last            ), //o
    .coded_data_payload_fragment    (phy_tx_encoder_coded_data_payload_fragment[15:0]  ), //o
    .clk                            (clk                                               ), //i
    .reset                          (reset                                             )  //i
  );
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l96 = (raw_data_fire && raw_data_payload_last);
  assign phy_tx_encoder_raw_data_fire = (phy_tx_encoder_raw_data_valid && phy_tx_encoder_raw_data_ready);
  assign when_PhyTx_l96_1 = (phy_tx_encoder_raw_data_fire && phy_tx_encoder_raw_data_payload_last);
  always @(*) begin
    if(emitEncoding) begin
      raw_data_ready = 1'b0;
    end else begin
      raw_data_ready = phy_tx_encoder_raw_data_ready;
    end
  end

  always @(*) begin
    if(emitEncoding) begin
      phy_tx_encoder_raw_data_valid = 1'b1;
    end else begin
      phy_tx_encoder_raw_data_valid = raw_data_valid;
    end
  end

  always @(*) begin
    if(emitEncoding) begin
      phy_tx_encoder_raw_data_payload_fragment = 8'h0;
    end else begin
      phy_tx_encoder_raw_data_payload_fragment = raw_data_payload_fragment;
    end
  end

  always @(*) begin
    if(emitEncoding) begin
      phy_tx_encoder_raw_data_payload_last = 1'b1;
    end else begin
      phy_tx_encoder_raw_data_payload_last = 1'b0;
    end
  end

  assign phy_tx_encoder_coded_data_toStream_valid = phy_tx_encoder_coded_data_valid;
  assign phy_tx_encoder_coded_data_toStream_payload_last = phy_tx_encoder_coded_data_payload_last;
  assign phy_tx_encoder_coded_data_toStream_payload_fragment = phy_tx_encoder_coded_data_payload_fragment;
  assign result_data_valid = phy_tx_encoder_coded_data_toStream_valid;
  assign phy_tx_encoder_coded_data_toStream_ready = result_data_ready;
  assign result_data_payload_last = phy_tx_encoder_coded_data_toStream_payload_last;
  assign result_data_payload_fragment = phy_tx_encoder_coded_data_toStream_payload_fragment;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      emitEncoding <= 1'b0;
    end else begin
      if(when_PhyTx_l96) begin
        emitEncoding <= 1'b1;
      end
      if(when_PhyTx_l96_1) begin
        emitEncoding <= 1'b0;
      end
    end
  end


endmodule

//StreamFifo_2 replaced by StreamFifo_2

module PhyTxCrc (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [7:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);

  wire                crc_1_flush;
  wire       [31:0]   crc_1_result;
  wire       [31:0]   crc_1_resultNext;
  reg        [7:0]    _zz_result_data_payload_fragment;
  reg                 emitCrc;
  wire                raw_data_fire;
  wire                when_PhyTx_l33;
  wire                result_data_fire;
  wire                when_PhyTx_l33_1;
  reg        [1:0]    counter;
  wire                raw_data_fire_1;
  wire                result_data_fire_1;
  wire                when_PhyTx_l40;
  wire                when_PhyTx_l48;

  Crc crc_1 (
    .flush            (crc_1_flush                     ), //i
    .input_valid      (raw_data_fire_1                 ), //i
    .input_payload    (raw_data_payload_fragment[7:0]  ), //i
    .result           (crc_1_result[31:0]              ), //o
    .resultNext       (crc_1_resultNext[31:0]          ), //o
    .clk              (clk                             ), //i
    .reset            (reset                           )  //i
  );
  always @(*) begin
    case(counter)
      2'b00 : _zz_result_data_payload_fragment = crc_1_result[7 : 0];
      2'b01 : _zz_result_data_payload_fragment = crc_1_result[15 : 8];
      2'b10 : _zz_result_data_payload_fragment = crc_1_result[23 : 16];
      default : _zz_result_data_payload_fragment = crc_1_result[31 : 24];
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l33 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l33_1 = (result_data_fire && result_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign crc_1_flush = (result_data_fire_1 && result_data_payload_last);
  always @(*) begin
    result_data_payload_last = 1'b0;
    if(!when_PhyTx_l40) begin
      if(when_PhyTx_l48) begin
        result_data_payload_last = 1'b1;
      end
    end
  end

  assign when_PhyTx_l40 = (! emitCrc);
  always @(*) begin
    if(when_PhyTx_l40) begin
      result_data_valid = raw_data_valid;
    end else begin
      result_data_valid = 1'b1;
    end
  end

  always @(*) begin
    if(when_PhyTx_l40) begin
      result_data_payload_fragment = raw_data_payload_fragment;
    end else begin
      result_data_payload_fragment = _zz_result_data_payload_fragment;
    end
  end

  always @(*) begin
    if(when_PhyTx_l40) begin
      raw_data_ready = result_data_ready;
    end else begin
      raw_data_ready = 1'b0;
    end
  end

  assign when_PhyTx_l48 = (counter == 2'b11);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      emitCrc <= 1'b0;
      counter <= 2'b00;
    end else begin
      if(when_PhyTx_l33) begin
        emitCrc <= 1'b1;
      end
      if(when_PhyTx_l33_1) begin
        emitCrc <= 1'b0;
      end
      if(!when_PhyTx_l40) begin
        if(when_PhyTx_l48) begin
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

//StreamFifo_2 replaced by StreamFifo_2

module PhyTxPadder (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [7:0]    result_data_payload_fragment,
  input               clk,
  input               reset
);

  reg        [2:0]    counter;
  wire                ok;
  wire                raw_data_fire;
  reg                 raw_data_payload_first;
  wire                fill;
  wire                result_data_fire;
  wire                when_PhyTx_l72;
  wire                result_data_fire_1;
  wire                when_PhyTx_l75;
  wire                _zz_raw_data_ready;
  wire                when_PhyTx_l79;

  assign ok = (counter == 3'b111);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign fill = ((counter != 3'b000) && raw_data_payload_first);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTx_l72 = ((! ok) && result_data_fire);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_PhyTx_l75 = (result_data_fire_1 && result_data_payload_last);
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
    if(when_PhyTx_l79) begin
      result_data_payload_last = 1'b0;
    end
    if(fill) begin
      result_data_payload_last = ok;
    end
  end

  always @(*) begin
    result_data_payload_fragment = raw_data_payload_fragment;
    if(fill) begin
      result_data_payload_fragment = 8'h0;
    end
  end

  assign when_PhyTx_l79 = (! ok);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      counter <= 3'b000;
      raw_data_payload_first <= 1'b1;
    end else begin
      if(raw_data_fire) begin
        raw_data_payload_first <= raw_data_payload_last;
      end
      if(when_PhyTx_l72) begin
        counter <= (counter + 3'b001);
      end
      if(when_PhyTx_l75) begin
        counter <= 3'b000;
      end
    end
  end


endmodule

module StreamFifo_2 (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [7:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [7:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [5:0]    io_occupancy,
  output     [5:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [8:0]    _zz_logic_ram_port0;
  wire       [4:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [4:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [8:0]    _zz_logic_ram_port_1;
  wire       [4:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [4:0]    logic_pushPtr_valueNext;
  reg        [4:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [4:0]    logic_popPtr_valueNext;
  reg        [4:0]    logic_popPtr_value;
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
  wire                when_Stream_l954;
  wire       [4:0]    logic_ptrDif;
  reg [8:0] logic_ram [0:31];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {4'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {4'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_fragment,io_push_payload_last};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_last) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 5'h1f);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 5'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 5'h1f);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 5'h0;
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
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[8 : 1];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 5'h0;
      logic_popPtr_value <= 5'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

module PhyPkgInformationGen (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [7:0]    result_data_payload_fragment,
  output              pkg_size_valid,
  input               pkg_size_ready,
  output     [7:0]    pkg_size_payload,
  input               clk,
  input               reset
);

  wire                dataFifo_io_push_valid;
  wire                dataFifo_io_push_ready;
  wire                dataFifo_io_pop_valid;
  wire                dataFifo_io_pop_payload_last;
  wire       [7:0]    dataFifo_io_pop_payload_fragment;
  wire       [7:0]    dataFifo_io_occupancy;
  wire       [7:0]    dataFifo_io_availability;
  wire                pkg_size_fifo_io_push_ready;
  wire                pkg_size_fifo_io_pop_valid;
  wire       [7:0]    pkg_size_fifo_io_pop_payload;
  wire       [4:0]    pkg_size_fifo_io_occupancy;
  wire       [4:0]    pkg_size_fifo_io_availability;
  reg        [7:0]    pkg_size_cnt;
  wire                _zz_raw_data_ready;
  wire                raw_data_fire;
  wire                when_PhyTx_l265;
  wire                raw_data_fire_1;
  reg                 pkg_size_valid_1;
  reg        [7:0]    pkg_size_payload_1;
  wire                raw_data_fire_2;
  wire                when_PhyTx_l272;
  wire                raw_data_fire_3;

  StreamFifo dataFifo (
    .io_push_valid               (dataFifo_io_push_valid                 ), //i
    .io_push_ready               (dataFifo_io_push_ready                 ), //o
    .io_push_payload_last        (raw_data_payload_last                  ), //i
    .io_push_payload_fragment    (raw_data_payload_fragment[7:0]         ), //i
    .io_pop_valid                (dataFifo_io_pop_valid                  ), //o
    .io_pop_ready                (result_data_ready                      ), //i
    .io_pop_payload_last         (dataFifo_io_pop_payload_last           ), //o
    .io_pop_payload_fragment     (dataFifo_io_pop_payload_fragment[7:0]  ), //o
    .io_flush                    (1'b0                                   ), //i
    .io_occupancy                (dataFifo_io_occupancy[7:0]             ), //o
    .io_availability             (dataFifo_io_availability[7:0]          ), //o
    .clk                         (clk                                    ), //i
    .reset                       (reset                                  )  //i
  );
  StreamFifo_1 pkg_size_fifo (
    .io_push_valid      (pkg_size_valid_1                    ), //i
    .io_push_ready      (pkg_size_fifo_io_push_ready         ), //o
    .io_push_payload    (pkg_size_payload_1[7:0]             ), //i
    .io_pop_valid       (pkg_size_fifo_io_pop_valid          ), //o
    .io_pop_ready       (pkg_size_ready                      ), //i
    .io_pop_payload     (pkg_size_fifo_io_pop_payload[7:0]   ), //o
    .io_flush           (1'b0                                ), //i
    .io_occupancy       (pkg_size_fifo_io_occupancy[4:0]     ), //o
    .io_availability    (pkg_size_fifo_io_availability[4:0]  ), //o
    .clk                (clk                                 ), //i
    .reset              (reset                               )  //i
  );
  assign _zz_raw_data_ready = (! (! pkg_size_fifo_io_push_ready));
  assign raw_data_ready = (dataFifo_io_push_ready && _zz_raw_data_ready);
  assign dataFifo_io_push_valid = (raw_data_valid && _zz_raw_data_ready);
  assign result_data_valid = dataFifo_io_pop_valid;
  assign result_data_payload_last = dataFifo_io_pop_payload_last;
  assign result_data_payload_fragment = dataFifo_io_pop_payload_fragment;
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l265 = (raw_data_fire && raw_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign raw_data_fire_2 = (raw_data_valid && raw_data_ready);
  assign when_PhyTx_l272 = (raw_data_fire_2 && raw_data_payload_last);
  assign raw_data_fire_3 = (raw_data_valid && raw_data_ready);
  assign pkg_size_valid = pkg_size_fifo_io_pop_valid;
  assign pkg_size_payload = pkg_size_fifo_io_pop_payload;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pkg_size_cnt <= 8'h0;
      pkg_size_valid_1 <= 1'b0;
      pkg_size_payload_1 <= 8'h0;
    end else begin
      if(!when_PhyTx_l265) begin
        if(raw_data_fire_1) begin
          pkg_size_cnt <= (pkg_size_cnt + 8'h01);
        end
      end
      if(when_PhyTx_l272) begin
        pkg_size_valid_1 <= 1'b1;
        pkg_size_payload_1 <= (pkg_size_cnt + 8'h01);
        pkg_size_cnt <= 8'h0;
      end else begin
        if(raw_data_fire_3) begin
          pkg_size_cnt <= (pkg_size_cnt + 8'h01);
          pkg_size_valid_1 <= 1'b0;
        end else begin
          pkg_size_valid_1 <= 1'b0;
        end
      end
    end
  end


endmodule

module TransposeFIR (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_0,
  input      [11:0]   raw_data_payload_1,
  output              filtered_data_valid,
  output     [18:0]   filtered_data_payload_0,
  output     [18:0]   filtered_data_payload_1,
  input               clk,
  input               reset
);

  wire       [18:0]   transposeCore_66_next_adder_data;
  wire       [18:0]   transposeCore_67_next_adder_data;
  wire       [18:0]   transposeCore_68_next_adder_data;
  wire       [18:0]   transposeCore_69_next_adder_data;
  wire       [18:0]   transposeCore_70_next_adder_data;
  wire       [18:0]   transposeCore_71_next_adder_data;
  wire       [18:0]   transposeCore_72_next_adder_data;
  wire       [18:0]   transposeCore_73_next_adder_data;
  wire       [18:0]   transposeCore_74_next_adder_data;
  wire       [18:0]   transposeCore_75_next_adder_data;
  wire       [18:0]   transposeCore_76_next_adder_data;
  wire       [18:0]   transposeCore_77_next_adder_data;
  wire       [18:0]   transposeCore_78_next_adder_data;
  wire       [18:0]   transposeCore_79_next_adder_data;
  wire       [18:0]   transposeCore_80_next_adder_data;
  wire       [18:0]   transposeCore_81_next_adder_data;
  wire       [18:0]   transposeCore_82_next_adder_data;
  wire       [18:0]   transposeCore_83_next_adder_data;
  wire       [18:0]   transposeCore_84_next_adder_data;
  wire       [18:0]   transposeCore_85_next_adder_data;
  wire       [18:0]   transposeCore_86_next_adder_data;
  wire       [18:0]   transposeCore_87_next_adder_data;
  wire       [18:0]   transposeCore_88_next_adder_data;
  wire       [18:0]   transposeCore_89_next_adder_data;
  wire       [18:0]   transposeCore_90_next_adder_data;
  wire       [18:0]   transposeCore_91_next_adder_data;
  wire       [18:0]   transposeCore_92_next_adder_data;
  wire       [18:0]   transposeCore_93_next_adder_data;
  wire       [18:0]   transposeCore_94_next_adder_data;
  wire       [18:0]   transposeCore_95_next_adder_data;
  wire       [18:0]   transposeCore_96_next_adder_data;
  wire       [18:0]   transposeCore_97_next_adder_data;
  wire       [18:0]   transposeCore_98_next_adder_data;
  wire       [18:0]   transposeCore_99_next_adder_data;
  wire       [18:0]   transposeCore_100_next_adder_data;
  wire       [18:0]   transposeCore_101_next_adder_data;
  wire       [18:0]   transposeCore_102_next_adder_data;
  wire       [18:0]   transposeCore_103_next_adder_data;
  wire       [18:0]   transposeCore_104_next_adder_data;
  wire       [18:0]   transposeCore_105_next_adder_data;
  wire       [18:0]   transposeCore_106_next_adder_data;
  wire       [18:0]   transposeCore_107_next_adder_data;
  wire       [18:0]   transposeCore_108_next_adder_data;
  wire       [18:0]   transposeCore_109_next_adder_data;
  wire       [18:0]   transposeCore_110_next_adder_data;
  wire       [18:0]   transposeCore_111_next_adder_data;
  wire       [18:0]   transposeCore_112_next_adder_data;
  wire       [18:0]   transposeCore_113_next_adder_data;
  wire       [18:0]   transposeCore_114_next_adder_data;
  wire       [18:0]   transposeCore_115_next_adder_data;
  wire       [18:0]   transposeCore_116_next_adder_data;
  wire       [18:0]   transposeCore_117_next_adder_data;
  wire       [18:0]   transposeCore_118_next_adder_data;
  wire       [18:0]   transposeCore_119_next_adder_data;
  wire       [18:0]   transposeCore_120_next_adder_data;
  wire       [18:0]   transposeCore_121_next_adder_data;
  wire       [18:0]   transposeCore_122_next_adder_data;
  wire       [18:0]   transposeCore_123_next_adder_data;
  wire       [18:0]   transposeCore_124_next_adder_data;
  wire       [18:0]   transposeCore_125_next_adder_data;
  wire       [18:0]   transposeCore_126_next_adder_data;
  wire       [18:0]   transposeCore_127_next_adder_data;
  wire       [18:0]   transposeCore_128_next_adder_data;
  wire       [18:0]   transposeCore_129_next_adder_data;
  wire       [18:0]   transposeCore_130_next_adder_data;
  wire       [18:0]   transposeCore_131_next_adder_data;
  reg        [6:0]    coff_mem_0;
  reg        [6:0]    coff_mem_1;
  reg        [6:0]    coff_mem_2;
  reg        [6:0]    coff_mem_3;
  reg        [6:0]    coff_mem_4;
  reg        [6:0]    coff_mem_5;
  reg        [6:0]    coff_mem_6;
  reg        [6:0]    coff_mem_7;
  reg        [6:0]    coff_mem_8;
  reg        [6:0]    coff_mem_9;
  reg        [6:0]    coff_mem_10;
  reg        [6:0]    coff_mem_11;
  reg        [6:0]    coff_mem_12;
  reg        [6:0]    coff_mem_13;
  reg        [6:0]    coff_mem_14;
  reg        [6:0]    coff_mem_15;
  reg        [6:0]    coff_mem_16;
  reg        [6:0]    coff_mem_17;
  reg        [6:0]    coff_mem_18;
  reg        [6:0]    coff_mem_19;
  reg        [6:0]    coff_mem_20;
  reg        [6:0]    coff_mem_21;
  reg        [6:0]    coff_mem_22;
  reg        [6:0]    coff_mem_23;
  reg        [6:0]    coff_mem_24;
  reg        [6:0]    coff_mem_25;
  reg        [6:0]    coff_mem_26;
  reg        [6:0]    coff_mem_27;
  reg        [6:0]    coff_mem_28;
  reg        [6:0]    coff_mem_29;
  reg        [6:0]    coff_mem_30;
  reg        [6:0]    coff_mem_31;
  reg        [6:0]    coff_mem_32;
  wire                filtered_data_valid_vec_0;
  wire                filtered_data_valid_vec_1;

  TransposeCore transposeCore_66 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_0[6:0]                         ), //i
    .adder_data         (19'h0                                   ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_66_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_67 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_1[6:0]                         ), //i
    .adder_data         (transposeCore_66_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_67_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_68 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_2[6:0]                         ), //i
    .adder_data         (transposeCore_67_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_68_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_69 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_3[6:0]                         ), //i
    .adder_data         (transposeCore_68_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_69_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_70 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_4[6:0]                         ), //i
    .adder_data         (transposeCore_69_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_70_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_71 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_5[6:0]                         ), //i
    .adder_data         (transposeCore_70_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_71_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_72 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_6[6:0]                         ), //i
    .adder_data         (transposeCore_71_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_72_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_73 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_7[6:0]                         ), //i
    .adder_data         (transposeCore_72_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_73_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_74 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_8[6:0]                         ), //i
    .adder_data         (transposeCore_73_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_74_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_75 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_9[6:0]                         ), //i
    .adder_data         (transposeCore_74_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_75_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_76 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_10[6:0]                        ), //i
    .adder_data         (transposeCore_75_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_76_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_77 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_11[6:0]                        ), //i
    .adder_data         (transposeCore_76_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_77_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_78 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_12[6:0]                        ), //i
    .adder_data         (transposeCore_77_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_78_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_79 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_13[6:0]                        ), //i
    .adder_data         (transposeCore_78_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_79_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_80 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_14[6:0]                        ), //i
    .adder_data         (transposeCore_79_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_80_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_81 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_15[6:0]                        ), //i
    .adder_data         (transposeCore_80_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_81_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_82 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_16[6:0]                        ), //i
    .adder_data         (transposeCore_81_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_82_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_83 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_17[6:0]                        ), //i
    .adder_data         (transposeCore_82_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_83_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_84 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_18[6:0]                        ), //i
    .adder_data         (transposeCore_83_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_84_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_85 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_19[6:0]                        ), //i
    .adder_data         (transposeCore_84_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_85_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_86 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_20[6:0]                        ), //i
    .adder_data         (transposeCore_85_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_86_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_87 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_21[6:0]                        ), //i
    .adder_data         (transposeCore_86_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_87_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_88 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_22[6:0]                        ), //i
    .adder_data         (transposeCore_87_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_88_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_89 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_23[6:0]                        ), //i
    .adder_data         (transposeCore_88_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_89_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_90 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_24[6:0]                        ), //i
    .adder_data         (transposeCore_89_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_90_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_91 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_25[6:0]                        ), //i
    .adder_data         (transposeCore_90_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_91_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_92 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_26[6:0]                        ), //i
    .adder_data         (transposeCore_91_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_92_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_93 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_27[6:0]                        ), //i
    .adder_data         (transposeCore_92_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_93_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_94 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_28[6:0]                        ), //i
    .adder_data         (transposeCore_93_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_94_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_95 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_29[6:0]                        ), //i
    .adder_data         (transposeCore_94_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_95_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_96 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_30[6:0]                        ), //i
    .adder_data         (transposeCore_95_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_96_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_97 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_31[6:0]                        ), //i
    .adder_data         (transposeCore_96_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_97_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_98 (
    .input_data         (raw_data_payload_0[11:0]                ), //i
    .coff_data          (coff_mem_32[6:0]                        ), //i
    .adder_data         (transposeCore_97_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_98_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_99 (
    .input_data         (raw_data_payload_1[11:0]                ), //i
    .coff_data          (coff_mem_0[6:0]                         ), //i
    .adder_data         (19'h0                                   ), //i
    .valid              (raw_data_valid                          ), //i
    .next_adder_data    (transposeCore_99_next_adder_data[18:0]  ), //o
    .clk                (clk                                     ), //i
    .reset              (reset                                   )  //i
  );
  TransposeCore transposeCore_100 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_1[6:0]                          ), //i
    .adder_data         (transposeCore_99_next_adder_data[18:0]   ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_100_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_101 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_2[6:0]                          ), //i
    .adder_data         (transposeCore_100_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_101_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_102 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_3[6:0]                          ), //i
    .adder_data         (transposeCore_101_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_102_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_103 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_4[6:0]                          ), //i
    .adder_data         (transposeCore_102_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_103_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_104 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_5[6:0]                          ), //i
    .adder_data         (transposeCore_103_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_104_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_105 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_6[6:0]                          ), //i
    .adder_data         (transposeCore_104_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_105_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_106 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_7[6:0]                          ), //i
    .adder_data         (transposeCore_105_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_106_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_107 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_8[6:0]                          ), //i
    .adder_data         (transposeCore_106_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_107_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_108 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_9[6:0]                          ), //i
    .adder_data         (transposeCore_107_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_108_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_109 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_10[6:0]                         ), //i
    .adder_data         (transposeCore_108_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_109_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_110 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_11[6:0]                         ), //i
    .adder_data         (transposeCore_109_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_110_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_111 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_12[6:0]                         ), //i
    .adder_data         (transposeCore_110_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_111_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_112 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_13[6:0]                         ), //i
    .adder_data         (transposeCore_111_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_112_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_113 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_14[6:0]                         ), //i
    .adder_data         (transposeCore_112_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_113_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_114 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_15[6:0]                         ), //i
    .adder_data         (transposeCore_113_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_114_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_115 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_16[6:0]                         ), //i
    .adder_data         (transposeCore_114_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_115_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_116 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_17[6:0]                         ), //i
    .adder_data         (transposeCore_115_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_116_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_117 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_18[6:0]                         ), //i
    .adder_data         (transposeCore_116_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_117_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_118 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_19[6:0]                         ), //i
    .adder_data         (transposeCore_117_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_118_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_119 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_20[6:0]                         ), //i
    .adder_data         (transposeCore_118_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_119_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_120 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_21[6:0]                         ), //i
    .adder_data         (transposeCore_119_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_120_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_121 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_22[6:0]                         ), //i
    .adder_data         (transposeCore_120_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_121_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_122 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_23[6:0]                         ), //i
    .adder_data         (transposeCore_121_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_122_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_123 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_24[6:0]                         ), //i
    .adder_data         (transposeCore_122_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_123_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_124 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_25[6:0]                         ), //i
    .adder_data         (transposeCore_123_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_124_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_125 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_26[6:0]                         ), //i
    .adder_data         (transposeCore_124_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_125_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_126 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_27[6:0]                         ), //i
    .adder_data         (transposeCore_125_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_126_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_127 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_28[6:0]                         ), //i
    .adder_data         (transposeCore_126_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_127_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_128 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_29[6:0]                         ), //i
    .adder_data         (transposeCore_127_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_128_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_129 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_30[6:0]                         ), //i
    .adder_data         (transposeCore_128_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_129_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_130 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_31[6:0]                         ), //i
    .adder_data         (transposeCore_129_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_130_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  TransposeCore transposeCore_131 (
    .input_data         (raw_data_payload_1[11:0]                 ), //i
    .coff_data          (coff_mem_32[6:0]                         ), //i
    .adder_data         (transposeCore_130_next_adder_data[18:0]  ), //i
    .valid              (raw_data_valid                           ), //i
    .next_adder_data    (transposeCore_131_next_adder_data[18:0]  ), //o
    .clk                (clk                                      ), //i
    .reset              (reset                                    )  //i
  );
  assign filtered_data_payload_0 = transposeCore_98_next_adder_data;
  assign filtered_data_valid_vec_0 = raw_data_valid;
  assign filtered_data_payload_1 = transposeCore_131_next_adder_data;
  assign filtered_data_valid_vec_1 = raw_data_valid;
  assign filtered_data_valid = (filtered_data_valid_vec_0 && filtered_data_valid_vec_1);
  always @(posedge clk) begin
    coff_mem_0 <= 7'h03;
    coff_mem_1 <= 7'h01;
    coff_mem_2 <= 7'h7e;
    coff_mem_3 <= 7'h7c;
    coff_mem_4 <= 7'h79;
    coff_mem_5 <= 7'h77;
    coff_mem_6 <= 7'h77;
    coff_mem_7 <= 7'h79;
    coff_mem_8 <= 7'h7d;
    coff_mem_9 <= 7'h02;
    coff_mem_10 <= 7'h0a;
    coff_mem_11 <= 7'h13;
    coff_mem_12 <= 7'h1c;
    coff_mem_13 <= 7'h24;
    coff_mem_14 <= 7'h2b;
    coff_mem_15 <= 7'h30;
    coff_mem_16 <= 7'h31;
    coff_mem_17 <= 7'h30;
    coff_mem_18 <= 7'h2b;
    coff_mem_19 <= 7'h24;
    coff_mem_20 <= 7'h1c;
    coff_mem_21 <= 7'h13;
    coff_mem_22 <= 7'h0a;
    coff_mem_23 <= 7'h02;
    coff_mem_24 <= 7'h7d;
    coff_mem_25 <= 7'h79;
    coff_mem_26 <= 7'h77;
    coff_mem_27 <= 7'h77;
    coff_mem_28 <= 7'h79;
    coff_mem_29 <= 7'h7c;
    coff_mem_30 <= 7'h7e;
    coff_mem_31 <= 7'h01;
    coff_mem_32 <= 7'h03;
  end


endmodule

module FlowMux (
  input               inputs_0_valid,
  input               inputs_0_payload_last,
  input      [11:0]   inputs_0_payload_fragment_cha_i,
  input      [11:0]   inputs_0_payload_fragment_cha_q,
  input               inputs_1_valid,
  input               inputs_1_payload_last,
  input      [11:0]   inputs_1_payload_fragment_cha_i,
  input      [11:0]   inputs_1_payload_fragment_cha_q,
  input               inputs_2_valid,
  input               inputs_2_payload_last,
  input      [11:0]   inputs_2_payload_fragment_cha_i,
  input      [11:0]   inputs_2_payload_fragment_cha_q,
  input      [1:0]    select_1,
  output              output_valid,
  output              output_payload_last,
  output     [11:0]   output_payload_fragment_cha_i,
  output     [11:0]   output_payload_fragment_cha_q
);

  reg                 _zz_output_valid;
  reg                 _zz_output_payload_last;
  reg        [11:0]   _zz_output_payload_fragment_cha_i;
  reg        [11:0]   _zz_output_payload_fragment_cha_q;

  always @(*) begin
    case(select_1)
      2'b00 : begin
        _zz_output_valid = inputs_0_valid;
        _zz_output_payload_last = inputs_0_payload_last;
        _zz_output_payload_fragment_cha_i = inputs_0_payload_fragment_cha_i;
        _zz_output_payload_fragment_cha_q = inputs_0_payload_fragment_cha_q;
      end
      2'b01 : begin
        _zz_output_valid = inputs_1_valid;
        _zz_output_payload_last = inputs_1_payload_last;
        _zz_output_payload_fragment_cha_i = inputs_1_payload_fragment_cha_i;
        _zz_output_payload_fragment_cha_q = inputs_1_payload_fragment_cha_q;
      end
      default : begin
        _zz_output_valid = inputs_2_valid;
        _zz_output_payload_last = inputs_2_payload_last;
        _zz_output_payload_fragment_cha_i = inputs_2_payload_fragment_cha_i;
        _zz_output_payload_fragment_cha_q = inputs_2_payload_fragment_cha_q;
      end
    endcase
  end

  assign output_valid = _zz_output_valid;
  assign output_payload_last = _zz_output_payload_last;
  assign output_payload_fragment_cha_i = _zz_output_payload_fragment_cha_i;
  assign output_payload_fragment_cha_q = _zz_output_payload_fragment_cha_q;

endmodule

module mQAMMod (
  input               unit_data_valid,
  input               unit_data_payload_last,
  input      [3:0]    unit_data_payload_fragment,
  output reg          mod_iq_valid,
  output reg          mod_iq_payload_last,
  output reg [11:0]   mod_iq_payload_fragment_cha_i,
  output reg [11:0]   mod_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);

  reg        [11:0]   _zz_mod_iq_payload_fragment_cha_i;
  wire       [1:0]    _zz_mod_iq_payload_fragment_cha_i_1;
  reg        [11:0]   _zz_mod_iq_payload_fragment_cha_q;
  wire       [1:0]    _zz_mod_iq_payload_fragment_cha_q_1;
  wire       [11:0]   codeTableI_0;
  wire       [11:0]   codeTableI_1;
  wire       [11:0]   codeTableI_2;
  wire       [11:0]   codeTableI_3;
  wire       [11:0]   codeTableQ_0;
  wire       [11:0]   codeTableQ_1;
  wire       [11:0]   codeTableQ_2;
  wire       [11:0]   codeTableQ_3;
  reg                 unit_data_payload_regNext_last;
  reg        [3:0]    unit_data_payload_regNext_fragment;
  reg                 unit_valid;
  reg                 unit_last;
  wire       [1:0]    data_div_0;
  wire       [1:0]    data_div_1;

  assign _zz_mod_iq_payload_fragment_cha_i_1 = data_div_1;
  assign _zz_mod_iq_payload_fragment_cha_q_1 = data_div_0;
  always @(*) begin
    case(_zz_mod_iq_payload_fragment_cha_i_1)
      2'b00 : _zz_mod_iq_payload_fragment_cha_i = codeTableI_0;
      2'b01 : _zz_mod_iq_payload_fragment_cha_i = codeTableI_1;
      2'b10 : _zz_mod_iq_payload_fragment_cha_i = codeTableI_2;
      default : _zz_mod_iq_payload_fragment_cha_i = codeTableI_3;
    endcase
  end

  always @(*) begin
    case(_zz_mod_iq_payload_fragment_cha_q_1)
      2'b00 : _zz_mod_iq_payload_fragment_cha_q = codeTableQ_0;
      2'b01 : _zz_mod_iq_payload_fragment_cha_q = codeTableQ_1;
      2'b10 : _zz_mod_iq_payload_fragment_cha_q = codeTableQ_2;
      default : _zz_mod_iq_payload_fragment_cha_q = codeTableQ_3;
    endcase
  end

  assign codeTableI_0 = 12'hc35;
  assign codeTableQ_0 = 12'hc35;
  assign codeTableI_1 = 12'hebc;
  assign codeTableQ_1 = 12'hebc;
  assign codeTableI_2 = 12'h3ca;
  assign codeTableQ_2 = 12'h3ca;
  assign codeTableI_3 = 12'h143;
  assign codeTableQ_3 = 12'h143;
  assign data_div_0 = unit_data_payload_regNext_fragment[1 : 0];
  assign data_div_1 = unit_data_payload_regNext_fragment[3 : 2];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_i = _zz_mod_iq_payload_fragment_cha_i;
    end else begin
      mod_iq_payload_fragment_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_q = _zz_mod_iq_payload_fragment_cha_q;
    end else begin
      mod_iq_payload_fragment_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_last = unit_last;
    end else begin
      mod_iq_payload_last = 1'b0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge clk) begin
    unit_data_payload_regNext_last <= unit_data_payload_last;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      unit_data_payload_regNext_fragment <= 4'b0000;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
    end else begin
      unit_data_payload_regNext_fragment <= unit_data_payload_fragment;
      unit_valid <= unit_data_valid;
      unit_last <= unit_data_payload_last;
    end
  end


endmodule

module mPSKMod_1 (
  input               unit_data_valid,
  input               unit_data_payload_last,
  input      [1:0]    unit_data_payload_fragment,
  output reg          mod_iq_valid,
  output reg          mod_iq_payload_last,
  output reg [11:0]   mod_iq_payload_fragment_cha_i,
  output reg [11:0]   mod_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);

  reg        [23:0]   _zz__zz_mod_iq_0;
  wire       [1:0]    _zz__zz_mod_iq_0_1;
  wire       [23:0]   codeTable_0;
  wire       [23:0]   codeTable_1;
  wire       [23:0]   codeTable_2;
  wire       [23:0]   codeTable_3;
  reg                 unit_data_payload_regNext_last;
  reg        [1:0]    unit_data_payload_regNext_fragment;
  reg                 unit_valid;
  reg                 unit_last;
  wire       [23:0]   _zz_mod_iq_0;
  wire       [11:0]   mod_iq_0;
  wire       [11:0]   mod_iq_1;

  assign _zz__zz_mod_iq_0_1 = unit_data_payload_regNext_fragment;
  always @(*) begin
    case(_zz__zz_mod_iq_0_1)
      2'b00 : _zz__zz_mod_iq_0 = codeTable_0;
      2'b01 : _zz__zz_mod_iq_0 = codeTable_1;
      2'b10 : _zz__zz_mod_iq_0 = codeTable_2;
      default : _zz__zz_mod_iq_0 = codeTable_3;
    endcase
  end

  assign codeTable_0 = 24'ha59a59;
  assign codeTable_1 = 24'ha595a7;
  assign codeTable_2 = 24'h5a7a59;
  assign codeTable_3 = 24'h5a75a7;
  assign _zz_mod_iq_0 = _zz__zz_mod_iq_0;
  assign mod_iq_0 = _zz_mod_iq_0[11 : 0];
  assign mod_iq_1 = _zz_mod_iq_0[23 : 12];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_i = mod_iq_1;
    end else begin
      mod_iq_payload_fragment_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_q = mod_iq_0;
    end else begin
      mod_iq_payload_fragment_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_last = unit_last;
    end else begin
      mod_iq_payload_last = 1'b0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge clk) begin
    unit_data_payload_regNext_last <= unit_data_payload_last;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      unit_data_payload_regNext_fragment <= 2'b00;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
    end else begin
      unit_data_payload_regNext_fragment <= unit_data_payload_fragment;
      unit_valid <= unit_data_valid;
      unit_last <= unit_data_payload_last;
    end
  end


endmodule

module mPSKMod (
  input               unit_data_valid,
  input               unit_data_payload_last,
  input      [0:0]    unit_data_payload_fragment,
  output reg          mod_iq_valid,
  output reg          mod_iq_payload_last,
  output reg [11:0]   mod_iq_payload_fragment_cha_i,
  output reg [11:0]   mod_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);

  reg        [23:0]   _zz__zz_mod_iq_0;
  wire       [0:0]    _zz__zz_mod_iq_0_1;
  wire       [23:0]   codeTable_0;
  wire       [23:0]   codeTable_1;
  reg                 unit_data_payload_regNext_last;
  reg        [0:0]    unit_data_payload_regNext_fragment;
  reg                 unit_valid;
  reg                 unit_last;
  wire       [23:0]   _zz_mod_iq_0;
  wire       [11:0]   mod_iq_0;
  wire       [11:0]   mod_iq_1;

  assign _zz__zz_mod_iq_0_1 = unit_data_payload_regNext_fragment;
  always @(*) begin
    case(_zz__zz_mod_iq_0_1)
      1'b0 : _zz__zz_mod_iq_0 = codeTable_0;
      default : _zz__zz_mod_iq_0 = codeTable_1;
    endcase
  end

  assign codeTable_0 = 24'h801000;
  assign codeTable_1 = 24'h7ff000;
  assign _zz_mod_iq_0 = _zz__zz_mod_iq_0;
  assign mod_iq_0 = _zz_mod_iq_0[11 : 0];
  assign mod_iq_1 = _zz_mod_iq_0[23 : 12];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_i = mod_iq_1;
    end else begin
      mod_iq_payload_fragment_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_q = mod_iq_0;
    end else begin
      mod_iq_payload_fragment_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_last = unit_last;
    end else begin
      mod_iq_payload_last = 1'b0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge clk) begin
    unit_data_payload_regNext_last <= unit_data_payload_last;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      unit_data_payload_regNext_fragment <= 1'b0;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
    end else begin
      unit_data_payload_regNext_fragment <= unit_data_payload_fragment;
      unit_valid <= unit_data_valid;
      unit_last <= unit_data_payload_last;
    end
  end


endmodule

module FlowDeMux (
  input               input_valid,
  input               input_payload_last,
  input      [7:0]    input_payload_fragment,
  input      [1:0]    select_1,
  output reg          outputs_0_valid,
  output reg          outputs_0_payload_last,
  output reg [7:0]    outputs_0_payload_fragment,
  output reg          outputs_1_valid,
  output reg          outputs_1_payload_last,
  output reg [7:0]    outputs_1_payload_fragment,
  output reg          outputs_2_valid,
  output reg          outputs_2_payload_last,
  output reg [7:0]    outputs_2_payload_fragment
);

  wire                when_FlowDeMux_l16;
  wire                when_FlowDeMux_l16_1;
  wire                when_FlowDeMux_l16_2;

  assign when_FlowDeMux_l16 = (2'b00 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l16) begin
      outputs_0_valid = 1'b0;
    end else begin
      outputs_0_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16) begin
      outputs_0_payload_last = 1'b0;
    end else begin
      outputs_0_payload_last = input_payload_last;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16) begin
      outputs_0_payload_fragment = 8'h0;
    end else begin
      outputs_0_payload_fragment = input_payload_fragment;
    end
  end

  assign when_FlowDeMux_l16_1 = (2'b01 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l16_1) begin
      outputs_1_valid = 1'b0;
    end else begin
      outputs_1_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_1) begin
      outputs_1_payload_last = 1'b0;
    end else begin
      outputs_1_payload_last = input_payload_last;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_1) begin
      outputs_1_payload_fragment = 8'h0;
    end else begin
      outputs_1_payload_fragment = input_payload_fragment;
    end
  end

  assign when_FlowDeMux_l16_2 = (2'b10 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l16_2) begin
      outputs_2_valid = 1'b0;
    end else begin
      outputs_2_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_2) begin
      outputs_2_payload_last = 1'b0;
    end else begin
      outputs_2_payload_last = input_payload_last;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_2) begin
      outputs_2_payload_fragment = 8'h0;
    end else begin
      outputs_2_payload_fragment = input_payload_fragment;
    end
  end


endmodule

module Scrambler (
  input               init_state_valid,
  input      [6:0]    init_state_payload,
  output              scram_data_valid,
  input               scram_data_ready,
  output     [15:0]   scram_data_payload,
  input               clk,
  input               reset
);

  wire       [7:0]    _zz_r_scr_0;
  wire       [7:0]    _zz_r_scr_1;
  wire       [7:0]    _zz_r_scr_2;
  wire       [7:0]    _zz_r_scr_3;
  wire       [7:0]    _zz_r_scr_4;
  wire       [7:0]    _zz_r_scr_5;
  wire       [7:0]    _zz_r_scr_6;
  wire       [7:0]    _zz_r_scr_7;
  wire       [7:0]    _zz_r_scr_8;
  wire       [7:0]    _zz_r_scr_9;
  wire       [7:0]    _zz_r_scr_10;
  wire       [7:0]    _zz_r_scr_11;
  wire       [7:0]    _zz_r_scr_12;
  wire       [7:0]    _zz_r_scr_13;
  wire       [7:0]    _zz_r_scr_14;
  wire       [7:0]    _zz_r_scr_15;
  wire       [0:0]    _zz_scram_data;
  wire       [4:0]    _zz_scram_data_1;
  reg        [6:0]    scram_state;
  wire       [6:0]    r_scr_0;
  wire       [6:0]    r_scr_1;
  wire       [6:0]    r_scr_2;
  wire       [6:0]    r_scr_3;
  wire       [6:0]    r_scr_4;
  wire       [6:0]    r_scr_5;
  wire       [6:0]    r_scr_6;
  wire       [6:0]    r_scr_7;
  wire       [6:0]    r_scr_8;
  wire       [6:0]    r_scr_9;
  wire       [6:0]    r_scr_10;
  wire       [6:0]    r_scr_11;
  wire       [6:0]    r_scr_12;
  wire       [6:0]    r_scr_13;
  wire       [6:0]    r_scr_14;
  wire       [6:0]    r_scr_15;
  wire                feed_back_0;
  wire                feed_back_1;
  wire                feed_back_2;
  wire                feed_back_3;
  wire                feed_back_4;
  wire                feed_back_5;
  wire                feed_back_6;
  wire                feed_back_7;
  wire                feed_back_8;
  wire                feed_back_9;
  wire                feed_back_10;
  wire                feed_back_11;
  wire                feed_back_12;
  wire                feed_back_13;
  wire                feed_back_14;
  wire                feed_back_15;
  reg                 scram_valid;
  reg        [15:0]   scram_data;

  assign _zz_r_scr_0 = {scram_state,feed_back_0};
  assign _zz_r_scr_1 = {r_scr_0,feed_back_1};
  assign _zz_r_scr_2 = {r_scr_1,feed_back_2};
  assign _zz_r_scr_3 = {r_scr_2,feed_back_3};
  assign _zz_r_scr_4 = {r_scr_3,feed_back_4};
  assign _zz_r_scr_5 = {r_scr_4,feed_back_5};
  assign _zz_r_scr_6 = {r_scr_5,feed_back_6};
  assign _zz_r_scr_7 = {r_scr_6,feed_back_7};
  assign _zz_r_scr_8 = {r_scr_7,feed_back_8};
  assign _zz_r_scr_9 = {r_scr_8,feed_back_9};
  assign _zz_r_scr_10 = {r_scr_9,feed_back_10};
  assign _zz_r_scr_11 = {r_scr_10,feed_back_11};
  assign _zz_r_scr_12 = {r_scr_11,feed_back_12};
  assign _zz_r_scr_13 = {r_scr_12,feed_back_13};
  assign _zz_r_scr_14 = {r_scr_13,feed_back_14};
  assign _zz_r_scr_15 = {r_scr_14,feed_back_15};
  assign _zz_scram_data = feed_back_5;
  assign _zz_scram_data_1 = {feed_back_4,{feed_back_3,{feed_back_2,{feed_back_1,feed_back_0}}}};
  assign feed_back_0 = (scram_state[6] ^ scram_state[3]);
  assign r_scr_0 = _zz_r_scr_0[6:0];
  assign feed_back_1 = (r_scr_0[6] ^ r_scr_0[3]);
  assign r_scr_1 = _zz_r_scr_1[6:0];
  assign feed_back_2 = (r_scr_1[6] ^ r_scr_1[3]);
  assign r_scr_2 = _zz_r_scr_2[6:0];
  assign feed_back_3 = (r_scr_2[6] ^ r_scr_2[3]);
  assign r_scr_3 = _zz_r_scr_3[6:0];
  assign feed_back_4 = (r_scr_3[6] ^ r_scr_3[3]);
  assign r_scr_4 = _zz_r_scr_4[6:0];
  assign feed_back_5 = (r_scr_4[6] ^ r_scr_4[3]);
  assign r_scr_5 = _zz_r_scr_5[6:0];
  assign feed_back_6 = (r_scr_5[6] ^ r_scr_5[3]);
  assign r_scr_6 = _zz_r_scr_6[6:0];
  assign feed_back_7 = (r_scr_6[6] ^ r_scr_6[3]);
  assign r_scr_7 = _zz_r_scr_7[6:0];
  assign feed_back_8 = (r_scr_7[6] ^ r_scr_7[3]);
  assign r_scr_8 = _zz_r_scr_8[6:0];
  assign feed_back_9 = (r_scr_8[6] ^ r_scr_8[3]);
  assign r_scr_9 = _zz_r_scr_9[6:0];
  assign feed_back_10 = (r_scr_9[6] ^ r_scr_9[3]);
  assign r_scr_10 = _zz_r_scr_10[6:0];
  assign feed_back_11 = (r_scr_10[6] ^ r_scr_10[3]);
  assign r_scr_11 = _zz_r_scr_11[6:0];
  assign feed_back_12 = (r_scr_11[6] ^ r_scr_11[3]);
  assign r_scr_12 = _zz_r_scr_12[6:0];
  assign feed_back_13 = (r_scr_12[6] ^ r_scr_12[3]);
  assign r_scr_13 = _zz_r_scr_13[6:0];
  assign feed_back_14 = (r_scr_13[6] ^ r_scr_13[3]);
  assign r_scr_14 = _zz_r_scr_14[6:0];
  assign feed_back_15 = (r_scr_14[6] ^ r_scr_14[3]);
  assign r_scr_15 = _zz_r_scr_15[6:0];
  assign scram_data_payload = scram_data;
  assign scram_data_valid = scram_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      scram_valid <= 1'b0;
    end else begin
      if(init_state_valid) begin
        scram_valid <= 1'b0;
      end else begin
        if(scram_data_ready) begin
          scram_valid <= 1'b1;
        end
      end
    end
  end

  always @(posedge clk) begin
    if(init_state_valid) begin
      scram_state <= init_state_payload;
    end else begin
      if(scram_data_ready) begin
        scram_state <= r_scr_15;
        scram_data <= {feed_back_15,{feed_back_14,{feed_back_13,{feed_back_12,{feed_back_11,{feed_back_10,{feed_back_9,{feed_back_8,{feed_back_7,{feed_back_6,{_zz_scram_data,_zz_scram_data_1}}}}}}}}}}};
      end
    end
  end


endmodule

module ConvEncoder (
  input               tail_bits_valid,
  input      [6:0]    tail_bits_payload,
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [7:0]    raw_data_payload_fragment,
  output              coded_data_valid,
  output              coded_data_payload_last,
  output     [15:0]   coded_data_payload_fragment,
  input               clk,
  input               reset
);

  wire       [7:0]    _zz_r_enc_0;
  wire       [7:0]    _zz_r_enc_1;
  wire       [7:0]    _zz_r_enc_2;
  wire       [7:0]    _zz_r_enc_3;
  wire       [7:0]    _zz_r_enc_4;
  wire       [7:0]    _zz_r_enc_5;
  wire       [7:0]    _zz_r_enc_6;
  wire       [7:0]    _zz_r_enc_7;
  reg        [15:0]   coded_data;
  reg                 coded_data_valid_1;
  reg        [6:0]    r_enc_buf;
  wire       [6:0]    r_enc_0;
  wire       [6:0]    r_enc_1;
  wire       [6:0]    r_enc_2;
  wire       [6:0]    r_enc_3;
  wire       [6:0]    r_enc_4;
  wire       [6:0]    r_enc_5;
  wire       [6:0]    r_enc_6;
  wire       [6:0]    r_enc_7;
  reg        [7:0]    code_vec_0;
  reg        [7:0]    code_vec_1;
  wire                raw_data_fire;
  reg                 raw_data_payload_last_regNext;

  assign _zz_r_enc_0 = {raw_data_payload_fragment[0],r_enc_buf};
  assign _zz_r_enc_1 = {raw_data_payload_fragment[1],r_enc_0};
  assign _zz_r_enc_2 = {raw_data_payload_fragment[2],r_enc_1};
  assign _zz_r_enc_3 = {raw_data_payload_fragment[3],r_enc_2};
  assign _zz_r_enc_4 = {raw_data_payload_fragment[4],r_enc_3};
  assign _zz_r_enc_5 = {raw_data_payload_fragment[5],r_enc_4};
  assign _zz_r_enc_6 = {raw_data_payload_fragment[6],r_enc_5};
  assign _zz_r_enc_7 = {raw_data_payload_fragment[7],r_enc_6};
  assign r_enc_0 = _zz_r_enc_0[7 : 1];
  assign r_enc_1 = _zz_r_enc_1[7 : 1];
  assign r_enc_2 = _zz_r_enc_2[7 : 1];
  assign r_enc_3 = _zz_r_enc_3[7 : 1];
  assign r_enc_4 = _zz_r_enc_4[7 : 1];
  assign r_enc_5 = _zz_r_enc_5[7 : 1];
  assign r_enc_6 = _zz_r_enc_6[7 : 1];
  assign r_enc_7 = _zz_r_enc_7[7 : 1];
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign raw_data_ready = (! tail_bits_valid);
  always @(*) begin
    code_vec_0[0] = ((((r_enc_0[0] ^ r_enc_0[1]) ^ r_enc_0[3]) ^ r_enc_0[4]) ^ r_enc_0[6]);
    code_vec_0[1] = ((((r_enc_1[0] ^ r_enc_1[1]) ^ r_enc_1[3]) ^ r_enc_1[4]) ^ r_enc_1[6]);
    code_vec_0[2] = ((((r_enc_2[0] ^ r_enc_2[1]) ^ r_enc_2[3]) ^ r_enc_2[4]) ^ r_enc_2[6]);
    code_vec_0[3] = ((((r_enc_3[0] ^ r_enc_3[1]) ^ r_enc_3[3]) ^ r_enc_3[4]) ^ r_enc_3[6]);
    code_vec_0[4] = ((((r_enc_4[0] ^ r_enc_4[1]) ^ r_enc_4[3]) ^ r_enc_4[4]) ^ r_enc_4[6]);
    code_vec_0[5] = ((((r_enc_5[0] ^ r_enc_5[1]) ^ r_enc_5[3]) ^ r_enc_5[4]) ^ r_enc_5[6]);
    code_vec_0[6] = ((((r_enc_6[0] ^ r_enc_6[1]) ^ r_enc_6[3]) ^ r_enc_6[4]) ^ r_enc_6[6]);
    code_vec_0[7] = ((((r_enc_7[0] ^ r_enc_7[1]) ^ r_enc_7[3]) ^ r_enc_7[4]) ^ r_enc_7[6]);
  end

  always @(*) begin
    code_vec_1[0] = ((((r_enc_0[0] ^ r_enc_0[3]) ^ r_enc_0[4]) ^ r_enc_0[5]) ^ r_enc_0[6]);
    code_vec_1[1] = ((((r_enc_1[0] ^ r_enc_1[3]) ^ r_enc_1[4]) ^ r_enc_1[5]) ^ r_enc_1[6]);
    code_vec_1[2] = ((((r_enc_2[0] ^ r_enc_2[3]) ^ r_enc_2[4]) ^ r_enc_2[5]) ^ r_enc_2[6]);
    code_vec_1[3] = ((((r_enc_3[0] ^ r_enc_3[3]) ^ r_enc_3[4]) ^ r_enc_3[5]) ^ r_enc_3[6]);
    code_vec_1[4] = ((((r_enc_4[0] ^ r_enc_4[3]) ^ r_enc_4[4]) ^ r_enc_4[5]) ^ r_enc_4[6]);
    code_vec_1[5] = ((((r_enc_5[0] ^ r_enc_5[3]) ^ r_enc_5[4]) ^ r_enc_5[5]) ^ r_enc_5[6]);
    code_vec_1[6] = ((((r_enc_6[0] ^ r_enc_6[3]) ^ r_enc_6[4]) ^ r_enc_6[5]) ^ r_enc_6[6]);
    code_vec_1[7] = ((((r_enc_7[0] ^ r_enc_7[3]) ^ r_enc_7[4]) ^ r_enc_7[5]) ^ r_enc_7[6]);
  end

  assign coded_data_payload_fragment = coded_data;
  assign coded_data_valid = coded_data_valid_1;
  assign coded_data_payload_last = raw_data_payload_last_regNext;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      coded_data_valid_1 <= 1'b0;
      r_enc_buf <= 7'h0;
      raw_data_payload_last_regNext <= 1'b0;
    end else begin
      if(tail_bits_valid) begin
        r_enc_buf <= tail_bits_payload;
      end else begin
        if(raw_data_fire) begin
          r_enc_buf <= r_enc_7;
          coded_data_valid_1 <= 1'b1;
        end else begin
          coded_data_valid_1 <= 1'b0;
        end
      end
      raw_data_payload_last_regNext <= raw_data_payload_last;
    end
  end

  always @(posedge clk) begin
    if(!tail_bits_valid) begin
      if(raw_data_fire) begin
        coded_data <= {code_vec_0,code_vec_1};
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
  input               clk,
  input               reset
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
  always @(posedge clk or posedge reset) begin
    if(reset) begin
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

module StreamFifo_1 (
  input               io_push_valid,
  output              io_push_ready,
  input      [7:0]    io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [7:0]    io_pop_payload,
  input               io_flush,
  output     [4:0]    io_occupancy,
  output     [4:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [7:0]    _zz_logic_ram_port0;
  wire       [3:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [3:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [7:0]    _zz_logic_ram_port_1;
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
  wire                when_Stream_l954;
  wire       [3:0]    logic_ptrDif;
  reg [7:0] logic_ram [0:15];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {3'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {3'd0, _zz_logic_popPtr_valueNext_1};
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
  assign io_pop_payload = _zz_logic_ram_port0;
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 4'b0000;
      logic_popPtr_value <= 4'b0000;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
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
  input               io_push_payload_last,
  input      [7:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [7:0]    io_pop_payload_fragment,
  input               io_flush,
  output reg [7:0]    io_occupancy,
  output reg [7:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [8:0]    _zz_logic_ram_port0;
  wire       [7:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [7:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [8:0]    _zz_logic_ram_port_1;
  wire       [7:0]    _zz_io_occupancy;
  wire       [7:0]    _zz_io_availability;
  wire       [7:0]    _zz_io_availability_1;
  wire       [7:0]    _zz_io_availability_2;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [7:0]    logic_pushPtr_valueNext;
  reg        [7:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [7:0]    logic_popPtr_valueNext;
  reg        [7:0]    logic_popPtr_value;
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
  wire                when_Stream_l954;
  wire       [7:0]    logic_ptrDif;
  reg [8:0] logic_ram [0:128];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {7'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {7'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_occupancy = (8'h81 + logic_ptrDif);
  assign _zz_io_availability = (8'h81 + _zz_io_availability_1);
  assign _zz_io_availability_1 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_availability_2 = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_fragment,io_push_payload_last};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_last) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 8'h80);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    if(logic_pushPtr_willOverflow) begin
      logic_pushPtr_valueNext = 8'h0;
    end else begin
      logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    end
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 8'h0;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 8'h80);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    if(logic_popPtr_willOverflow) begin
      logic_popPtr_valueNext = 8'h0;
    end else begin
      logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    end
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 8'h0;
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
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[8 : 1];
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  always @(*) begin
    if(logic_ptrMatch) begin
      io_occupancy = (logic_risingOccupancy ? 8'h81 : 8'h0);
    end else begin
      io_occupancy = ((logic_popPtr_value < logic_pushPtr_value) ? logic_ptrDif : _zz_io_occupancy);
    end
  end

  always @(*) begin
    if(logic_ptrMatch) begin
      io_availability = (logic_risingOccupancy ? 8'h0 : 8'h81);
    end else begin
      io_availability = ((logic_popPtr_value < logic_pushPtr_value) ? _zz_io_availability : _zz_io_availability_2);
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 8'h0;
      logic_popPtr_value <= 8'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

module TransposeCore (
  input      [11:0]   input_data,
  input      [6:0]    coff_data,
  input      [18:0]   adder_data,
  input               valid,
  output     [18:0]   next_adder_data,
  input               clk,
  input               reset
);

  wire       [18:0]   _zz_next_adder_data;
  reg        [18:0]   previous_adder_data;

  assign _zz_next_adder_data = ($signed(input_data) * $signed(coff_data));
  assign next_adder_data = ($signed(_zz_next_adder_data) + $signed(previous_adder_data));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      previous_adder_data <= 19'h0;
    end else begin
      if(valid) begin
        previous_adder_data <= adder_data;
      end
    end
  end


endmodule
