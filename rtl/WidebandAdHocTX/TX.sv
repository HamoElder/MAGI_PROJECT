// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : TX
// Git hash  : 17ba3429c74144a7d37c48904a91bdac2e1b784a

`timescale 1ns/1ps

module TX (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [1:0]    result_data_payload_fragment,
  input               block_msg_ctrl_valid,
  output              block_msg_ctrl_ready,
  input      [1:0]    block_msg_ctrl_payload_pkg_type,
  input      [19:0]   block_msg_ctrl_payload_pkg_length,
  input      [15:0]   block_msg_ctrl_payload_rnti_scramble,
  input               clk,
  input               resetn
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PSCH = 2'd2;
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;

  wire                tx_crc_extender_raw_data_ready;
  wire                tx_crc_extender_result_data_valid;
  wire                tx_crc_extender_result_data_payload_last;
  wire       [0:0]    tx_crc_extender_result_data_payload_fragment;
  wire                tx_crc_extender_block_msg_ctrl_in_ready;
  wire                tx_crc_extender_block_msg_ctrl_out_valid;
  wire       [1:0]    tx_crc_extender_block_msg_ctrl_out_payload_pkg_type;
  wire       [19:0]   tx_crc_extender_block_msg_ctrl_out_payload_pkg_length;
  wire       [15:0]   tx_crc_extender_block_msg_ctrl_out_payload_rnti_scramble;
  wire                code_block_segment_raw_data_ready;
  wire                code_block_segment_result_data_valid;
  wire                code_block_segment_result_data_payload_last;
  wire       [1:0]    code_block_segment_result_data_payload_fragment;
  wire                code_block_segment_block_msg_ctrl_ready;
  wire                code_block_segment_segment_msg_ctrl_valid;
  wire       [1:0]    code_block_segment_segment_msg_ctrl_payload_segment_type;
  wire       [12:0]   code_block_segment_segment_msg_ctrl_payload_segment_length;
  wire       [0:0]    code_block_segment_segment_msg_ctrl_payload_segment_code_type;
  `ifndef SYNTHESIS
  reg [31:0] block_msg_ctrl_payload_pkg_type_string;
  `endif


  TxCrcAttachment tx_crc_extender (
    .raw_data_valid                           (raw_data_valid                                                ), //i
    .raw_data_ready                           (tx_crc_extender_raw_data_ready                                ), //o
    .raw_data_payload_last                    (raw_data_payload_last                                         ), //i
    .raw_data_payload_fragment                (raw_data_payload_fragment                                     ), //i
    .result_data_valid                        (tx_crc_extender_result_data_valid                             ), //o
    .result_data_ready                        (code_block_segment_raw_data_ready                             ), //i
    .result_data_payload_last                 (tx_crc_extender_result_data_payload_last                      ), //o
    .result_data_payload_fragment             (tx_crc_extender_result_data_payload_fragment                  ), //o
    .block_msg_ctrl_in_valid                  (block_msg_ctrl_valid                                          ), //i
    .block_msg_ctrl_in_ready                  (tx_crc_extender_block_msg_ctrl_in_ready                       ), //o
    .block_msg_ctrl_in_payload_pkg_type       (block_msg_ctrl_payload_pkg_type[1:0]                          ), //i
    .block_msg_ctrl_in_payload_pkg_length     (block_msg_ctrl_payload_pkg_length[19:0]                       ), //i
    .block_msg_ctrl_in_payload_rnti_scramble  (block_msg_ctrl_payload_rnti_scramble[15:0]                    ), //i
    .block_msg_ctrl_out_valid                 (tx_crc_extender_block_msg_ctrl_out_valid                      ), //o
    .block_msg_ctrl_out_ready                 (code_block_segment_block_msg_ctrl_ready                       ), //i
    .block_msg_ctrl_out_payload_pkg_type      (tx_crc_extender_block_msg_ctrl_out_payload_pkg_type[1:0]      ), //o
    .block_msg_ctrl_out_payload_pkg_length    (tx_crc_extender_block_msg_ctrl_out_payload_pkg_length[19:0]   ), //o
    .block_msg_ctrl_out_payload_rnti_scramble (tx_crc_extender_block_msg_ctrl_out_payload_rnti_scramble[15:0]), //o
    .clk                                      (clk                                                           ), //i
    .resetn                                   (resetn                                                        )  //i
  );
  CrcBlockSegmentation code_block_segment (
    .raw_data_valid                             (tx_crc_extender_result_data_valid                               ), //i
    .raw_data_ready                             (code_block_segment_raw_data_ready                               ), //o
    .raw_data_payload_last                      (tx_crc_extender_result_data_payload_last                        ), //i
    .raw_data_payload_fragment                  (tx_crc_extender_result_data_payload_fragment                    ), //i
    .result_data_valid                          (code_block_segment_result_data_valid                            ), //o
    .result_data_ready                          (result_data_ready                                               ), //i
    .result_data_payload_last                   (code_block_segment_result_data_payload_last                     ), //o
    .result_data_payload_fragment               (code_block_segment_result_data_payload_fragment[1:0]            ), //o
    .block_msg_ctrl_valid                       (tx_crc_extender_block_msg_ctrl_out_valid                        ), //i
    .block_msg_ctrl_ready                       (code_block_segment_block_msg_ctrl_ready                         ), //o
    .block_msg_ctrl_payload_pkg_type            (tx_crc_extender_block_msg_ctrl_out_payload_pkg_type[1:0]        ), //i
    .block_msg_ctrl_payload_pkg_length          (tx_crc_extender_block_msg_ctrl_out_payload_pkg_length[19:0]     ), //i
    .block_msg_ctrl_payload_rnti_scramble       (tx_crc_extender_block_msg_ctrl_out_payload_rnti_scramble[15:0]  ), //i
    .segment_msg_ctrl_valid                     (code_block_segment_segment_msg_ctrl_valid                       ), //o
    .segment_msg_ctrl_ready                     (1'b1                                                            ), //i
    .segment_msg_ctrl_payload_segment_type      (code_block_segment_segment_msg_ctrl_payload_segment_type[1:0]   ), //o
    .segment_msg_ctrl_payload_segment_length    (code_block_segment_segment_msg_ctrl_payload_segment_length[12:0]), //o
    .segment_msg_ctrl_payload_segment_code_type (code_block_segment_segment_msg_ctrl_payload_segment_code_type   ), //o
    .clk                                        (clk                                                             ), //i
    .resetn                                     (resetn                                                          )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(block_msg_ctrl_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_ctrl_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_ctrl_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : block_msg_ctrl_payload_pkg_type_string = "PSCH";
      default : block_msg_ctrl_payload_pkg_type_string = "????";
    endcase
  end
  `endif

  assign block_msg_ctrl_ready = tx_crc_extender_block_msg_ctrl_in_ready;
  assign raw_data_ready = tx_crc_extender_raw_data_ready;
  assign result_data_valid = code_block_segment_result_data_valid;
  assign result_data_payload_last = code_block_segment_result_data_payload_last;
  assign result_data_payload_fragment = code_block_segment_result_data_payload_fragment;

endmodule

module CrcBlockSegmentation (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [1:0]    result_data_payload_fragment,
  input               block_msg_ctrl_valid,
  output              block_msg_ctrl_ready,
  input      [1:0]    block_msg_ctrl_payload_pkg_type,
  input      [19:0]   block_msg_ctrl_payload_pkg_length,
  input      [15:0]   block_msg_ctrl_payload_rnti_scramble,
  output              segment_msg_ctrl_valid,
  input               segment_msg_ctrl_ready,
  output     [1:0]    segment_msg_ctrl_payload_segment_type,
  output     [12:0]   segment_msg_ctrl_payload_segment_length,
  output     [0:0]    segment_msg_ctrl_payload_segment_code_type,
  input               clk,
  input               resetn
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PSCH = 2'd2;
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;
  localparam BLockSegmentStatus_IDLE = 1'd0;
  localparam BLockSegmentStatus_BYPASS = 1'd1;

  wire                data_fifo_io_pop_ready;
  wire                msg_fifo_io_pop_ready;
  wire                streamDemux_3_io_input_valid;
  wire                streamDemux_4_io_input_valid;
  wire                data_fifo_io_push_ready;
  wire                data_fifo_io_pop_valid;
  wire                data_fifo_io_pop_payload_last;
  wire       [0:0]    data_fifo_io_pop_payload_fragment;
  wire       [4:0]    data_fifo_io_occupancy;
  wire       [4:0]    data_fifo_io_availability;
  wire                msg_fifo_io_push_ready;
  wire                msg_fifo_io_pop_valid;
  wire       [1:0]    msg_fifo_io_pop_payload_pkg_type;
  wire       [19:0]   msg_fifo_io_pop_payload_pkg_length;
  wire       [15:0]   msg_fifo_io_pop_payload_rnti_scramble;
  wire       [2:0]    msg_fifo_io_occupancy;
  wire       [2:0]    msg_fifo_io_availability;
  wire                broadcast_channel_segment_raw_data_ready;
  wire                broadcast_channel_segment_block_msg_ready;
  wire                broadcast_channel_segment_result_data_valid;
  wire                broadcast_channel_segment_result_data_payload_last;
  wire       [1:0]    broadcast_channel_segment_result_data_payload_fragment;
  wire                broadcast_channel_segment_segment_msg_valid;
  wire       [1:0]    broadcast_channel_segment_segment_msg_payload_segment_type;
  wire       [12:0]   broadcast_channel_segment_segment_msg_payload_segment_length;
  wire       [0:0]    broadcast_channel_segment_segment_msg_payload_segment_code_type;
  wire                control_channel_segment_raw_data_ready;
  wire                control_channel_segment_block_msg_ready;
  wire                control_channel_segment_result_data_valid;
  wire                control_channel_segment_result_data_payload_last;
  wire       [1:0]    control_channel_segment_result_data_payload_fragment;
  wire                control_channel_segment_segment_msg_valid;
  wire       [1:0]    control_channel_segment_segment_msg_payload_segment_type;
  wire       [12:0]   control_channel_segment_segment_msg_payload_segment_length;
  wire       [0:0]    control_channel_segment_segment_msg_payload_segment_code_type;
  wire                shared_channel_segment_raw_data_ready;
  wire                shared_channel_segment_block_msg_ready;
  wire                shared_channel_segment_result_data_valid;
  wire                shared_channel_segment_result_data_payload_last;
  wire       [1:0]    shared_channel_segment_result_data_payload_fragment;
  wire                shared_channel_segment_segment_msg_valid;
  wire       [1:0]    shared_channel_segment_segment_msg_payload_segment_type;
  wire       [12:0]   shared_channel_segment_segment_msg_payload_segment_length;
  wire       [0:0]    shared_channel_segment_segment_msg_payload_segment_code_type;
  wire                streamDemux_3_io_input_ready;
  wire                streamDemux_3_io_outputs_0_valid;
  wire                streamDemux_3_io_outputs_0_payload_last;
  wire       [0:0]    streamDemux_3_io_outputs_0_payload_fragment;
  wire                streamDemux_3_io_outputs_1_valid;
  wire                streamDemux_3_io_outputs_1_payload_last;
  wire       [0:0]    streamDemux_3_io_outputs_1_payload_fragment;
  wire                streamDemux_3_io_outputs_2_valid;
  wire                streamDemux_3_io_outputs_2_payload_last;
  wire       [0:0]    streamDemux_3_io_outputs_2_payload_fragment;
  wire                streamDemux_4_io_input_ready;
  wire                streamDemux_4_io_outputs_0_valid;
  wire       [1:0]    streamDemux_4_io_outputs_0_payload_pkg_type;
  wire       [19:0]   streamDemux_4_io_outputs_0_payload_pkg_length;
  wire       [15:0]   streamDemux_4_io_outputs_0_payload_rnti_scramble;
  wire                streamDemux_4_io_outputs_1_valid;
  wire       [1:0]    streamDemux_4_io_outputs_1_payload_pkg_type;
  wire       [19:0]   streamDemux_4_io_outputs_1_payload_pkg_length;
  wire       [15:0]   streamDemux_4_io_outputs_1_payload_rnti_scramble;
  wire                streamDemux_4_io_outputs_2_valid;
  wire       [1:0]    streamDemux_4_io_outputs_2_payload_pkg_type;
  wire       [19:0]   streamDemux_4_io_outputs_2_payload_pkg_length;
  wire       [15:0]   streamDemux_4_io_outputs_2_payload_rnti_scramble;
  wire                streamMux_3_io_inputs_0_ready;
  wire                streamMux_3_io_inputs_1_ready;
  wire                streamMux_3_io_inputs_2_ready;
  wire                streamMux_3_io_output_valid;
  wire                streamMux_3_io_output_payload_last;
  wire       [1:0]    streamMux_3_io_output_payload_fragment;
  wire                streamMux_4_io_inputs_0_ready;
  wire                streamMux_4_io_inputs_1_ready;
  wire                streamMux_4_io_inputs_2_ready;
  wire                streamMux_4_io_output_valid;
  wire       [1:0]    streamMux_4_io_output_payload_segment_type;
  wire       [12:0]   streamMux_4_io_output_payload_segment_length;
  wire       [0:0]    streamMux_4_io_output_payload_segment_code_type;
  reg        [1:0]    sel_cha;
  reg        [0:0]    state;
  wire                result_data_fire;
  wire                when_PhyTX_l500;
  wire                _zz_io_pop_ready;
  wire                _zz_io_pop_ready_1;
  wire       [1:0]    _zz_io_input_payload_pkg_type;
  `ifndef SYNTHESIS
  reg [31:0] block_msg_ctrl_payload_pkg_type_string;
  reg [31:0] segment_msg_ctrl_payload_segment_type_string;
  reg [151:0] segment_msg_ctrl_payload_segment_code_type_string;
  reg [47:0] state_string;
  reg [31:0] _zz_io_input_payload_pkg_type_string;
  `endif


  StreamFifo data_fifo (
    .io_push_valid            (raw_data_valid                   ), //i
    .io_push_ready            (data_fifo_io_push_ready          ), //o
    .io_push_payload_last     (raw_data_payload_last            ), //i
    .io_push_payload_fragment (raw_data_payload_fragment        ), //i
    .io_pop_valid             (data_fifo_io_pop_valid           ), //o
    .io_pop_ready             (data_fifo_io_pop_ready           ), //i
    .io_pop_payload_last      (data_fifo_io_pop_payload_last    ), //o
    .io_pop_payload_fragment  (data_fifo_io_pop_payload_fragment), //o
    .io_flush                 (1'b0                             ), //i
    .io_occupancy             (data_fifo_io_occupancy[4:0]      ), //o
    .io_availability          (data_fifo_io_availability[4:0]   ), //o
    .clk                      (clk                              ), //i
    .resetn                   (resetn                           )  //i
  );
  StreamFifo_1 msg_fifo (
    .io_push_valid                 (block_msg_ctrl_valid                       ), //i
    .io_push_ready                 (msg_fifo_io_push_ready                     ), //o
    .io_push_payload_pkg_type      (block_msg_ctrl_payload_pkg_type[1:0]       ), //i
    .io_push_payload_pkg_length    (block_msg_ctrl_payload_pkg_length[19:0]    ), //i
    .io_push_payload_rnti_scramble (block_msg_ctrl_payload_rnti_scramble[15:0] ), //i
    .io_pop_valid                  (msg_fifo_io_pop_valid                      ), //o
    .io_pop_ready                  (msg_fifo_io_pop_ready                      ), //i
    .io_pop_payload_pkg_type       (msg_fifo_io_pop_payload_pkg_type[1:0]      ), //o
    .io_pop_payload_pkg_length     (msg_fifo_io_pop_payload_pkg_length[19:0]   ), //o
    .io_pop_payload_rnti_scramble  (msg_fifo_io_pop_payload_rnti_scramble[15:0]), //o
    .io_flush                      (1'b0                                       ), //i
    .io_occupancy                  (msg_fifo_io_occupancy[2:0]                 ), //o
    .io_availability               (msg_fifo_io_availability[2:0]              ), //o
    .clk                           (clk                                        ), //i
    .resetn                        (resetn                                     )  //i
  );
  PBCHCrcAttachment broadcast_channel_segment (
    .raw_data_valid                        (streamDemux_3_io_outputs_0_valid                                  ), //i
    .raw_data_ready                        (broadcast_channel_segment_raw_data_ready                          ), //o
    .raw_data_payload_last                 (streamDemux_3_io_outputs_0_payload_last                           ), //i
    .raw_data_payload_fragment             (streamDemux_3_io_outputs_0_payload_fragment                       ), //i
    .block_msg_valid                       (streamDemux_4_io_outputs_0_valid                                  ), //i
    .block_msg_ready                       (broadcast_channel_segment_block_msg_ready                         ), //o
    .block_msg_payload_pkg_type            (streamDemux_4_io_outputs_0_payload_pkg_type[1:0]                  ), //i
    .block_msg_payload_pkg_length          (streamDemux_4_io_outputs_0_payload_pkg_length[19:0]               ), //i
    .block_msg_payload_rnti_scramble       (streamDemux_4_io_outputs_0_payload_rnti_scramble[15:0]            ), //i
    .result_data_valid                     (broadcast_channel_segment_result_data_valid                       ), //o
    .result_data_ready                     (streamMux_3_io_inputs_0_ready                                     ), //i
    .result_data_payload_last              (broadcast_channel_segment_result_data_payload_last                ), //o
    .result_data_payload_fragment          (broadcast_channel_segment_result_data_payload_fragment[1:0]       ), //o
    .segment_msg_valid                     (broadcast_channel_segment_segment_msg_valid                       ), //o
    .segment_msg_ready                     (streamMux_4_io_inputs_0_ready                                     ), //i
    .segment_msg_payload_segment_type      (broadcast_channel_segment_segment_msg_payload_segment_type[1:0]   ), //o
    .segment_msg_payload_segment_length    (broadcast_channel_segment_segment_msg_payload_segment_length[12:0]), //o
    .segment_msg_payload_segment_code_type (broadcast_channel_segment_segment_msg_payload_segment_code_type   ), //o
    .clk                                   (clk                                                               ), //i
    .resetn                                (resetn                                                            )  //i
  );
  PCCHCrcAttachment control_channel_segment (
    .raw_data_valid                        (streamDemux_3_io_outputs_1_valid                                ), //i
    .raw_data_ready                        (control_channel_segment_raw_data_ready                          ), //o
    .raw_data_payload_last                 (streamDemux_3_io_outputs_1_payload_last                         ), //i
    .raw_data_payload_fragment             (streamDemux_3_io_outputs_1_payload_fragment                     ), //i
    .block_msg_valid                       (streamDemux_4_io_outputs_1_valid                                ), //i
    .block_msg_ready                       (control_channel_segment_block_msg_ready                         ), //o
    .block_msg_payload_pkg_type            (streamDemux_4_io_outputs_1_payload_pkg_type[1:0]                ), //i
    .block_msg_payload_pkg_length          (streamDemux_4_io_outputs_1_payload_pkg_length[19:0]             ), //i
    .block_msg_payload_rnti_scramble       (streamDemux_4_io_outputs_1_payload_rnti_scramble[15:0]          ), //i
    .result_data_valid                     (control_channel_segment_result_data_valid                       ), //o
    .result_data_ready                     (streamMux_3_io_inputs_1_ready                                   ), //i
    .result_data_payload_last              (control_channel_segment_result_data_payload_last                ), //o
    .result_data_payload_fragment          (control_channel_segment_result_data_payload_fragment[1:0]       ), //o
    .segment_msg_valid                     (control_channel_segment_segment_msg_valid                       ), //o
    .segment_msg_ready                     (streamMux_4_io_inputs_1_ready                                   ), //i
    .segment_msg_payload_segment_type      (control_channel_segment_segment_msg_payload_segment_type[1:0]   ), //o
    .segment_msg_payload_segment_length    (control_channel_segment_segment_msg_payload_segment_length[12:0]), //o
    .segment_msg_payload_segment_code_type (control_channel_segment_segment_msg_payload_segment_code_type   ), //o
    .clk                                   (clk                                                             ), //i
    .resetn                                (resetn                                                          )  //i
  );
  PSCHCrcAttachment shared_channel_segment (
    .raw_data_valid                        (streamDemux_3_io_outputs_2_valid                               ), //i
    .raw_data_ready                        (shared_channel_segment_raw_data_ready                          ), //o
    .raw_data_payload_last                 (streamDemux_3_io_outputs_2_payload_last                        ), //i
    .raw_data_payload_fragment             (streamDemux_3_io_outputs_2_payload_fragment                    ), //i
    .block_msg_valid                       (streamDemux_4_io_outputs_2_valid                               ), //i
    .block_msg_ready                       (shared_channel_segment_block_msg_ready                         ), //o
    .block_msg_payload_pkg_type            (streamDemux_4_io_outputs_2_payload_pkg_type[1:0]               ), //i
    .block_msg_payload_pkg_length          (streamDemux_4_io_outputs_2_payload_pkg_length[19:0]            ), //i
    .block_msg_payload_rnti_scramble       (streamDemux_4_io_outputs_2_payload_rnti_scramble[15:0]         ), //i
    .result_data_valid                     (shared_channel_segment_result_data_valid                       ), //o
    .result_data_ready                     (streamMux_3_io_inputs_2_ready                                  ), //i
    .result_data_payload_last              (shared_channel_segment_result_data_payload_last                ), //o
    .result_data_payload_fragment          (shared_channel_segment_result_data_payload_fragment[1:0]       ), //o
    .segment_msg_valid                     (shared_channel_segment_segment_msg_valid                       ), //o
    .segment_msg_ready                     (streamMux_4_io_inputs_2_ready                                  ), //i
    .segment_msg_payload_segment_type      (shared_channel_segment_segment_msg_payload_segment_type[1:0]   ), //o
    .segment_msg_payload_segment_length    (shared_channel_segment_segment_msg_payload_segment_length[12:0]), //o
    .segment_msg_payload_segment_code_type (shared_channel_segment_segment_msg_payload_segment_code_type   ), //o
    .clk                                   (clk                                                            ), //i
    .resetn                                (resetn                                                         )  //i
  );
  StreamDemux_1 streamDemux_3 (
    .io_select                     (sel_cha[1:0]                               ), //i
    .io_input_valid                (streamDemux_3_io_input_valid               ), //i
    .io_input_ready                (streamDemux_3_io_input_ready               ), //o
    .io_input_payload_last         (data_fifo_io_pop_payload_last              ), //i
    .io_input_payload_fragment     (data_fifo_io_pop_payload_fragment          ), //i
    .io_outputs_0_valid            (streamDemux_3_io_outputs_0_valid           ), //o
    .io_outputs_0_ready            (broadcast_channel_segment_raw_data_ready   ), //i
    .io_outputs_0_payload_last     (streamDemux_3_io_outputs_0_payload_last    ), //o
    .io_outputs_0_payload_fragment (streamDemux_3_io_outputs_0_payload_fragment), //o
    .io_outputs_1_valid            (streamDemux_3_io_outputs_1_valid           ), //o
    .io_outputs_1_ready            (control_channel_segment_raw_data_ready     ), //i
    .io_outputs_1_payload_last     (streamDemux_3_io_outputs_1_payload_last    ), //o
    .io_outputs_1_payload_fragment (streamDemux_3_io_outputs_1_payload_fragment), //o
    .io_outputs_2_valid            (streamDemux_3_io_outputs_2_valid           ), //o
    .io_outputs_2_ready            (shared_channel_segment_raw_data_ready      ), //i
    .io_outputs_2_payload_last     (streamDemux_3_io_outputs_2_payload_last    ), //o
    .io_outputs_2_payload_fragment (streamDemux_3_io_outputs_2_payload_fragment)  //o
  );
  StreamDemux_2 streamDemux_4 (
    .io_select                          (sel_cha[1:0]                                          ), //i
    .io_input_valid                     (streamDemux_4_io_input_valid                          ), //i
    .io_input_ready                     (streamDemux_4_io_input_ready                          ), //o
    .io_input_payload_pkg_type          (_zz_io_input_payload_pkg_type[1:0]                    ), //i
    .io_input_payload_pkg_length        (msg_fifo_io_pop_payload_pkg_length[19:0]              ), //i
    .io_input_payload_rnti_scramble     (msg_fifo_io_pop_payload_rnti_scramble[15:0]           ), //i
    .io_outputs_0_valid                 (streamDemux_4_io_outputs_0_valid                      ), //o
    .io_outputs_0_ready                 (broadcast_channel_segment_block_msg_ready             ), //i
    .io_outputs_0_payload_pkg_type      (streamDemux_4_io_outputs_0_payload_pkg_type[1:0]      ), //o
    .io_outputs_0_payload_pkg_length    (streamDemux_4_io_outputs_0_payload_pkg_length[19:0]   ), //o
    .io_outputs_0_payload_rnti_scramble (streamDemux_4_io_outputs_0_payload_rnti_scramble[15:0]), //o
    .io_outputs_1_valid                 (streamDemux_4_io_outputs_1_valid                      ), //o
    .io_outputs_1_ready                 (control_channel_segment_block_msg_ready               ), //i
    .io_outputs_1_payload_pkg_type      (streamDemux_4_io_outputs_1_payload_pkg_type[1:0]      ), //o
    .io_outputs_1_payload_pkg_length    (streamDemux_4_io_outputs_1_payload_pkg_length[19:0]   ), //o
    .io_outputs_1_payload_rnti_scramble (streamDemux_4_io_outputs_1_payload_rnti_scramble[15:0]), //o
    .io_outputs_2_valid                 (streamDemux_4_io_outputs_2_valid                      ), //o
    .io_outputs_2_ready                 (shared_channel_segment_block_msg_ready                ), //i
    .io_outputs_2_payload_pkg_type      (streamDemux_4_io_outputs_2_payload_pkg_type[1:0]      ), //o
    .io_outputs_2_payload_pkg_length    (streamDemux_4_io_outputs_2_payload_pkg_length[19:0]   ), //o
    .io_outputs_2_payload_rnti_scramble (streamDemux_4_io_outputs_2_payload_rnti_scramble[15:0])  //o
  );
  StreamMux_1 streamMux_3 (
    .io_select                    (sel_cha[1:0]                                               ), //i
    .io_inputs_0_valid            (broadcast_channel_segment_result_data_valid                ), //i
    .io_inputs_0_ready            (streamMux_3_io_inputs_0_ready                              ), //o
    .io_inputs_0_payload_last     (broadcast_channel_segment_result_data_payload_last         ), //i
    .io_inputs_0_payload_fragment (broadcast_channel_segment_result_data_payload_fragment[1:0]), //i
    .io_inputs_1_valid            (control_channel_segment_result_data_valid                  ), //i
    .io_inputs_1_ready            (streamMux_3_io_inputs_1_ready                              ), //o
    .io_inputs_1_payload_last     (control_channel_segment_result_data_payload_last           ), //i
    .io_inputs_1_payload_fragment (control_channel_segment_result_data_payload_fragment[1:0]  ), //i
    .io_inputs_2_valid            (shared_channel_segment_result_data_valid                   ), //i
    .io_inputs_2_ready            (streamMux_3_io_inputs_2_ready                              ), //o
    .io_inputs_2_payload_last     (shared_channel_segment_result_data_payload_last            ), //i
    .io_inputs_2_payload_fragment (shared_channel_segment_result_data_payload_fragment[1:0]   ), //i
    .io_output_valid              (streamMux_3_io_output_valid                                ), //o
    .io_output_ready              (result_data_ready                                          ), //i
    .io_output_payload_last       (streamMux_3_io_output_payload_last                         ), //o
    .io_output_payload_fragment   (streamMux_3_io_output_payload_fragment[1:0]                )  //o
  );
  StreamMux_2 streamMux_4 (
    .io_select                             (sel_cha[1:0]                                                      ), //i
    .io_inputs_0_valid                     (broadcast_channel_segment_segment_msg_valid                       ), //i
    .io_inputs_0_ready                     (streamMux_4_io_inputs_0_ready                                     ), //o
    .io_inputs_0_payload_segment_type      (broadcast_channel_segment_segment_msg_payload_segment_type[1:0]   ), //i
    .io_inputs_0_payload_segment_length    (broadcast_channel_segment_segment_msg_payload_segment_length[12:0]), //i
    .io_inputs_0_payload_segment_code_type (broadcast_channel_segment_segment_msg_payload_segment_code_type   ), //i
    .io_inputs_1_valid                     (control_channel_segment_segment_msg_valid                         ), //i
    .io_inputs_1_ready                     (streamMux_4_io_inputs_1_ready                                     ), //o
    .io_inputs_1_payload_segment_type      (control_channel_segment_segment_msg_payload_segment_type[1:0]     ), //i
    .io_inputs_1_payload_segment_length    (control_channel_segment_segment_msg_payload_segment_length[12:0]  ), //i
    .io_inputs_1_payload_segment_code_type (control_channel_segment_segment_msg_payload_segment_code_type     ), //i
    .io_inputs_2_valid                     (shared_channel_segment_segment_msg_valid                          ), //i
    .io_inputs_2_ready                     (streamMux_4_io_inputs_2_ready                                     ), //o
    .io_inputs_2_payload_segment_type      (shared_channel_segment_segment_msg_payload_segment_type[1:0]      ), //i
    .io_inputs_2_payload_segment_length    (shared_channel_segment_segment_msg_payload_segment_length[12:0]   ), //i
    .io_inputs_2_payload_segment_code_type (shared_channel_segment_segment_msg_payload_segment_code_type      ), //i
    .io_output_valid                       (streamMux_4_io_output_valid                                       ), //o
    .io_output_ready                       (segment_msg_ctrl_ready                                            ), //i
    .io_output_payload_segment_type        (streamMux_4_io_output_payload_segment_type[1:0]                   ), //o
    .io_output_payload_segment_length      (streamMux_4_io_output_payload_segment_length[12:0]                ), //o
    .io_output_payload_segment_code_type   (streamMux_4_io_output_payload_segment_code_type                   )  //o
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(block_msg_ctrl_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_ctrl_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_ctrl_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : block_msg_ctrl_payload_pkg_type_string = "PSCH";
      default : block_msg_ctrl_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_msg_ctrl_payload_segment_type)
      PhysicalChannel_PBCH : segment_msg_ctrl_payload_segment_type_string = "PBCH";
      PhysicalChannel_PCCH : segment_msg_ctrl_payload_segment_type_string = "PCCH";
      PhysicalChannel_PSCH : segment_msg_ctrl_payload_segment_type_string = "PSCH";
      default : segment_msg_ctrl_payload_segment_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_msg_ctrl_payload_segment_code_type)
      ChannelCodingMethod_Turbo : segment_msg_ctrl_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_msg_ctrl_payload_segment_code_type_string = "TailedConvolutional";
      default : segment_msg_ctrl_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(state)
      BLockSegmentStatus_IDLE : state_string = "IDLE  ";
      BLockSegmentStatus_BYPASS : state_string = "BYPASS";
      default : state_string = "??????";
    endcase
  end
  always @(*) begin
    case(_zz_io_input_payload_pkg_type)
      PhysicalChannel_PBCH : _zz_io_input_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : _zz_io_input_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : _zz_io_input_payload_pkg_type_string = "PSCH";
      default : _zz_io_input_payload_pkg_type_string = "????";
    endcase
  end
  `endif

  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTX_l500 = (result_data_fire && result_data_payload_last);
  assign raw_data_ready = data_fifo_io_push_ready;
  assign block_msg_ctrl_ready = msg_fifo_io_push_ready;
  assign _zz_io_pop_ready = (! (state == BLockSegmentStatus_IDLE));
  assign data_fifo_io_pop_ready = (streamDemux_3_io_input_ready && _zz_io_pop_ready);
  assign streamDemux_3_io_input_valid = (data_fifo_io_pop_valid && _zz_io_pop_ready);
  assign _zz_io_pop_ready_1 = (! (state == BLockSegmentStatus_IDLE));
  assign msg_fifo_io_pop_ready = (streamDemux_4_io_input_ready && _zz_io_pop_ready_1);
  assign _zz_io_input_payload_pkg_type = msg_fifo_io_pop_payload_pkg_type;
  assign streamDemux_4_io_input_valid = (msg_fifo_io_pop_valid && _zz_io_pop_ready_1);
  assign result_data_valid = streamMux_3_io_output_valid;
  assign result_data_payload_last = streamMux_3_io_output_payload_last;
  assign result_data_payload_fragment = streamMux_3_io_output_payload_fragment;
  assign segment_msg_ctrl_valid = streamMux_4_io_output_valid;
  assign segment_msg_ctrl_payload_segment_type = streamMux_4_io_output_payload_segment_type;
  assign segment_msg_ctrl_payload_segment_length = streamMux_4_io_output_payload_segment_length;
  assign segment_msg_ctrl_payload_segment_code_type = streamMux_4_io_output_payload_segment_code_type;
  always @(posedge clk) begin
    if(!resetn) begin
      state <= BLockSegmentStatus_IDLE;
    end else begin
      case(state)
        BLockSegmentStatus_IDLE : begin
          if(msg_fifo_io_pop_valid) begin
            state <= BLockSegmentStatus_BYPASS;
          end
        end
        default : begin
          if(when_PhyTX_l500) begin
            state <= BLockSegmentStatus_IDLE;
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(state)
      BLockSegmentStatus_IDLE : begin
        if(msg_fifo_io_pop_valid) begin
          sel_cha <= msg_fifo_io_pop_payload_pkg_type;
        end
      end
      default : begin
      end
    endcase
  end


endmodule

module TxCrcAttachment (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output              result_data_valid,
  input               result_data_ready,
  output              result_data_payload_last,
  output     [0:0]    result_data_payload_fragment,
  input               block_msg_ctrl_in_valid,
  output              block_msg_ctrl_in_ready,
  input      [1:0]    block_msg_ctrl_in_payload_pkg_type,
  input      [19:0]   block_msg_ctrl_in_payload_pkg_length,
  input      [15:0]   block_msg_ctrl_in_payload_rnti_scramble,
  output              block_msg_ctrl_out_valid,
  input               block_msg_ctrl_out_ready,
  output     [1:0]    block_msg_ctrl_out_payload_pkg_type,
  output     [19:0]   block_msg_ctrl_out_payload_pkg_length,
  output     [15:0]   block_msg_ctrl_out_payload_rnti_scramble,
  input               clk,
  input               resetn
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PSCH = 2'd2;

  wire       [0:0]    streamDemux_3_io_select;
  wire                streamDemux_3_io_input_valid;
  wire       [0:0]    streamMux_3_io_select;
  wire                crc24a_core_raw_data_ready;
  wire                crc24a_core_result_data_valid;
  wire                crc24a_core_result_data_payload_last;
  wire       [0:0]    crc24a_core_result_data_payload_fragment;
  wire                crc16_core_raw_data_ready;
  wire                crc16_core_result_data_valid;
  wire                crc16_core_result_data_payload_last;
  wire       [0:0]    crc16_core_result_data_payload_fragment;
  wire                streamDemux_3_io_input_ready;
  wire                streamDemux_3_io_outputs_0_valid;
  wire                streamDemux_3_io_outputs_0_payload_last;
  wire       [0:0]    streamDemux_3_io_outputs_0_payload_fragment;
  wire                streamDemux_3_io_outputs_1_valid;
  wire                streamDemux_3_io_outputs_1_payload_last;
  wire       [0:0]    streamDemux_3_io_outputs_1_payload_fragment;
  wire                streamMux_3_io_inputs_0_ready;
  wire                streamMux_3_io_inputs_1_ready;
  wire                streamMux_3_io_output_valid;
  wire                streamMux_3_io_output_payload_last;
  wire       [0:0]    streamMux_3_io_output_payload_fragment;
  wire       [19:0]   _zz_message_pkg_length;
  wire       [4:0]    _zz_message_pkg_length_1;
  reg                 ctrl_in_enable;
  reg        [1:0]    message_pkg_type;
  reg        [19:0]   message_pkg_length;
  reg        [15:0]   message_rnti_scramble;
  reg                 ctrl_out_valid;
  wire                block_msg_ctrl_in_fire;
  wire                result_data_fire;
  wire                when_PhyTX_l109;
  wire                block_msg_ctrl_out_fire;
  wire                path_sel;
  reg                 crc_raw_halt;
  wire                block_msg_ctrl_out_fire_1;
  wire                raw_data_fire;
  wire                when_PhyTX_l125;
  wire                _zz_raw_data_ready;
  `ifndef SYNTHESIS
  reg [31:0] block_msg_ctrl_in_payload_pkg_type_string;
  reg [31:0] block_msg_ctrl_out_payload_pkg_type_string;
  reg [31:0] message_pkg_type_string;
  `endif


  assign _zz_message_pkg_length_1 = ((block_msg_ctrl_in_payload_pkg_type == PhysicalChannel_PCCH) ? 5'h10 : 5'h18);
  assign _zz_message_pkg_length = {15'd0, _zz_message_pkg_length_1};
  TxCrcUnit crc24a_core (
    .raw_data_valid               (streamDemux_3_io_outputs_0_valid           ), //i
    .raw_data_ready               (crc24a_core_raw_data_ready                 ), //o
    .raw_data_payload_last        (streamDemux_3_io_outputs_0_payload_last    ), //i
    .raw_data_payload_fragment    (streamDemux_3_io_outputs_0_payload_fragment), //i
    .result_data_valid            (crc24a_core_result_data_valid              ), //o
    .result_data_ready            (streamMux_3_io_inputs_0_ready              ), //i
    .result_data_payload_last     (crc24a_core_result_data_payload_last       ), //o
    .result_data_payload_fragment (crc24a_core_result_data_payload_fragment   ), //o
    .clk                          (clk                                        ), //i
    .resetn                       (resetn                                     )  //i
  );
  TxCrcUnit_1 crc16_core (
    .raw_data_valid               (streamDemux_3_io_outputs_1_valid           ), //i
    .raw_data_ready               (crc16_core_raw_data_ready                  ), //o
    .raw_data_payload_last        (streamDemux_3_io_outputs_1_payload_last    ), //i
    .raw_data_payload_fragment    (streamDemux_3_io_outputs_1_payload_fragment), //i
    .result_data_valid            (crc16_core_result_data_valid               ), //o
    .result_data_ready            (streamMux_3_io_inputs_1_ready              ), //i
    .result_data_payload_last     (crc16_core_result_data_payload_last        ), //o
    .result_data_payload_fragment (crc16_core_result_data_payload_fragment    ), //o
    .clk                          (clk                                        ), //i
    .resetn                       (resetn                                     )  //i
  );
  StreamDemux streamDemux_3 (
    .io_select                     (streamDemux_3_io_select                    ), //i
    .io_input_valid                (streamDemux_3_io_input_valid               ), //i
    .io_input_ready                (streamDemux_3_io_input_ready               ), //o
    .io_input_payload_last         (raw_data_payload_last                      ), //i
    .io_input_payload_fragment     (raw_data_payload_fragment                  ), //i
    .io_outputs_0_valid            (streamDemux_3_io_outputs_0_valid           ), //o
    .io_outputs_0_ready            (crc24a_core_raw_data_ready                 ), //i
    .io_outputs_0_payload_last     (streamDemux_3_io_outputs_0_payload_last    ), //o
    .io_outputs_0_payload_fragment (streamDemux_3_io_outputs_0_payload_fragment), //o
    .io_outputs_1_valid            (streamDemux_3_io_outputs_1_valid           ), //o
    .io_outputs_1_ready            (crc16_core_raw_data_ready                  ), //i
    .io_outputs_1_payload_last     (streamDemux_3_io_outputs_1_payload_last    ), //o
    .io_outputs_1_payload_fragment (streamDemux_3_io_outputs_1_payload_fragment)  //o
  );
  StreamMux streamMux_3 (
    .io_select                    (streamMux_3_io_select                   ), //i
    .io_inputs_0_valid            (crc24a_core_result_data_valid           ), //i
    .io_inputs_0_ready            (streamMux_3_io_inputs_0_ready           ), //o
    .io_inputs_0_payload_last     (crc24a_core_result_data_payload_last    ), //i
    .io_inputs_0_payload_fragment (crc24a_core_result_data_payload_fragment), //i
    .io_inputs_1_valid            (crc16_core_result_data_valid            ), //i
    .io_inputs_1_ready            (streamMux_3_io_inputs_1_ready           ), //o
    .io_inputs_1_payload_last     (crc16_core_result_data_payload_last     ), //i
    .io_inputs_1_payload_fragment (crc16_core_result_data_payload_fragment ), //i
    .io_output_valid              (streamMux_3_io_output_valid             ), //o
    .io_output_ready              (result_data_ready                       ), //i
    .io_output_payload_last       (streamMux_3_io_output_payload_last      ), //o
    .io_output_payload_fragment   (streamMux_3_io_output_payload_fragment  )  //o
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(block_msg_ctrl_in_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_ctrl_in_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_ctrl_in_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : block_msg_ctrl_in_payload_pkg_type_string = "PSCH";
      default : block_msg_ctrl_in_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(block_msg_ctrl_out_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_ctrl_out_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_ctrl_out_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : block_msg_ctrl_out_payload_pkg_type_string = "PSCH";
      default : block_msg_ctrl_out_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(message_pkg_type)
      PhysicalChannel_PBCH : message_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : message_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : message_pkg_type_string = "PSCH";
      default : message_pkg_type_string = "????";
    endcase
  end
  `endif

  assign block_msg_ctrl_in_fire = (block_msg_ctrl_in_valid && block_msg_ctrl_in_ready);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTX_l109 = (result_data_fire && result_data_payload_last);
  assign block_msg_ctrl_out_fire = (block_msg_ctrl_out_valid && block_msg_ctrl_out_ready);
  assign block_msg_ctrl_in_ready = (ctrl_in_enable && block_msg_ctrl_out_ready);
  assign block_msg_ctrl_out_payload_pkg_type = message_pkg_type;
  assign block_msg_ctrl_out_payload_pkg_length = message_pkg_length;
  assign block_msg_ctrl_out_payload_rnti_scramble = message_rnti_scramble;
  assign block_msg_ctrl_out_valid = ctrl_out_valid;
  assign path_sel = (message_pkg_type == PhysicalChannel_PCCH);
  assign block_msg_ctrl_out_fire_1 = (block_msg_ctrl_out_valid && block_msg_ctrl_out_ready);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTX_l125 = (raw_data_fire && raw_data_payload_last);
  assign _zz_raw_data_ready = (! crc_raw_halt);
  assign raw_data_ready = (streamDemux_3_io_input_ready && _zz_raw_data_ready);
  assign streamDemux_3_io_input_valid = (raw_data_valid && _zz_raw_data_ready);
  assign streamDemux_3_io_select = path_sel;
  assign streamMux_3_io_select = path_sel;
  assign result_data_valid = streamMux_3_io_output_valid;
  assign result_data_payload_last = streamMux_3_io_output_payload_last;
  assign result_data_payload_fragment = streamMux_3_io_output_payload_fragment;
  always @(posedge clk) begin
    if(!resetn) begin
      ctrl_in_enable <= 1'b1;
      ctrl_out_valid <= 1'b0;
      crc_raw_halt <= 1'b1;
    end else begin
      if(block_msg_ctrl_in_fire) begin
        ctrl_in_enable <= 1'b0;
        ctrl_out_valid <= 1'b1;
      end else begin
        if(when_PhyTX_l109) begin
          ctrl_in_enable <= 1'b1;
        end
        if(block_msg_ctrl_out_fire) begin
          ctrl_out_valid <= 1'b0;
        end
      end
      if(block_msg_ctrl_out_fire_1) begin
        crc_raw_halt <= 1'b0;
      end else begin
        if(when_PhyTX_l125) begin
          crc_raw_halt <= 1'b1;
        end
      end
    end
  end

  always @(posedge clk) begin
    if(block_msg_ctrl_in_fire) begin
      message_pkg_type <= block_msg_ctrl_in_payload_pkg_type;
      message_pkg_length <= (block_msg_ctrl_in_payload_pkg_length + _zz_message_pkg_length);
      message_rnti_scramble <= block_msg_ctrl_in_payload_rnti_scramble;
    end
  end


endmodule

module StreamMux_2 (
  input      [1:0]    io_select,
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input      [1:0]    io_inputs_0_payload_segment_type,
  input      [12:0]   io_inputs_0_payload_segment_length,
  input      [0:0]    io_inputs_0_payload_segment_code_type,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input      [1:0]    io_inputs_1_payload_segment_type,
  input      [12:0]   io_inputs_1_payload_segment_length,
  input      [0:0]    io_inputs_1_payload_segment_code_type,
  input               io_inputs_2_valid,
  output              io_inputs_2_ready,
  input      [1:0]    io_inputs_2_payload_segment_type,
  input      [12:0]   io_inputs_2_payload_segment_length,
  input      [0:0]    io_inputs_2_payload_segment_code_type,
  output              io_output_valid,
  input               io_output_ready,
  output     [1:0]    io_output_payload_segment_type,
  output     [12:0]   io_output_payload_segment_length,
  output     [0:0]    io_output_payload_segment_code_type
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PSCH = 2'd2;
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;

  reg        [1:0]    _zz__zz_io_output_payload_segment_type;
  reg        [0:0]    _zz__zz_io_output_payload_segment_code_type;
  reg                 _zz_io_output_valid;
  reg        [12:0]   _zz_io_output_payload_segment_length;
  wire       [1:0]    _zz_io_output_payload_segment_type;
  wire       [0:0]    _zz_io_output_payload_segment_code_type;
  `ifndef SYNTHESIS
  reg [31:0] io_inputs_0_payload_segment_type_string;
  reg [151:0] io_inputs_0_payload_segment_code_type_string;
  reg [31:0] io_inputs_1_payload_segment_type_string;
  reg [151:0] io_inputs_1_payload_segment_code_type_string;
  reg [31:0] io_inputs_2_payload_segment_type_string;
  reg [151:0] io_inputs_2_payload_segment_code_type_string;
  reg [31:0] io_output_payload_segment_type_string;
  reg [151:0] io_output_payload_segment_code_type_string;
  reg [31:0] _zz_io_output_payload_segment_type_string;
  reg [151:0] _zz_io_output_payload_segment_code_type_string;
  `endif


  always @(*) begin
    case(io_select)
      2'b00 : begin
        _zz__zz_io_output_payload_segment_type = io_inputs_0_payload_segment_type;
        _zz__zz_io_output_payload_segment_code_type = io_inputs_0_payload_segment_code_type;
        _zz_io_output_valid = io_inputs_0_valid;
        _zz_io_output_payload_segment_length = io_inputs_0_payload_segment_length;
      end
      2'b01 : begin
        _zz__zz_io_output_payload_segment_type = io_inputs_1_payload_segment_type;
        _zz__zz_io_output_payload_segment_code_type = io_inputs_1_payload_segment_code_type;
        _zz_io_output_valid = io_inputs_1_valid;
        _zz_io_output_payload_segment_length = io_inputs_1_payload_segment_length;
      end
      default : begin
        _zz__zz_io_output_payload_segment_type = io_inputs_2_payload_segment_type;
        _zz__zz_io_output_payload_segment_code_type = io_inputs_2_payload_segment_code_type;
        _zz_io_output_valid = io_inputs_2_valid;
        _zz_io_output_payload_segment_length = io_inputs_2_payload_segment_length;
      end
    endcase
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(io_inputs_0_payload_segment_type)
      PhysicalChannel_PBCH : io_inputs_0_payload_segment_type_string = "PBCH";
      PhysicalChannel_PCCH : io_inputs_0_payload_segment_type_string = "PCCH";
      PhysicalChannel_PSCH : io_inputs_0_payload_segment_type_string = "PSCH";
      default : io_inputs_0_payload_segment_type_string = "????";
    endcase
  end
  always @(*) begin
    case(io_inputs_0_payload_segment_code_type)
      ChannelCodingMethod_Turbo : io_inputs_0_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : io_inputs_0_payload_segment_code_type_string = "TailedConvolutional";
      default : io_inputs_0_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(io_inputs_1_payload_segment_type)
      PhysicalChannel_PBCH : io_inputs_1_payload_segment_type_string = "PBCH";
      PhysicalChannel_PCCH : io_inputs_1_payload_segment_type_string = "PCCH";
      PhysicalChannel_PSCH : io_inputs_1_payload_segment_type_string = "PSCH";
      default : io_inputs_1_payload_segment_type_string = "????";
    endcase
  end
  always @(*) begin
    case(io_inputs_1_payload_segment_code_type)
      ChannelCodingMethod_Turbo : io_inputs_1_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : io_inputs_1_payload_segment_code_type_string = "TailedConvolutional";
      default : io_inputs_1_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(io_inputs_2_payload_segment_type)
      PhysicalChannel_PBCH : io_inputs_2_payload_segment_type_string = "PBCH";
      PhysicalChannel_PCCH : io_inputs_2_payload_segment_type_string = "PCCH";
      PhysicalChannel_PSCH : io_inputs_2_payload_segment_type_string = "PSCH";
      default : io_inputs_2_payload_segment_type_string = "????";
    endcase
  end
  always @(*) begin
    case(io_inputs_2_payload_segment_code_type)
      ChannelCodingMethod_Turbo : io_inputs_2_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : io_inputs_2_payload_segment_code_type_string = "TailedConvolutional";
      default : io_inputs_2_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(io_output_payload_segment_type)
      PhysicalChannel_PBCH : io_output_payload_segment_type_string = "PBCH";
      PhysicalChannel_PCCH : io_output_payload_segment_type_string = "PCCH";
      PhysicalChannel_PSCH : io_output_payload_segment_type_string = "PSCH";
      default : io_output_payload_segment_type_string = "????";
    endcase
  end
  always @(*) begin
    case(io_output_payload_segment_code_type)
      ChannelCodingMethod_Turbo : io_output_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : io_output_payload_segment_code_type_string = "TailedConvolutional";
      default : io_output_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(_zz_io_output_payload_segment_type)
      PhysicalChannel_PBCH : _zz_io_output_payload_segment_type_string = "PBCH";
      PhysicalChannel_PCCH : _zz_io_output_payload_segment_type_string = "PCCH";
      PhysicalChannel_PSCH : _zz_io_output_payload_segment_type_string = "PSCH";
      default : _zz_io_output_payload_segment_type_string = "????";
    endcase
  end
  always @(*) begin
    case(_zz_io_output_payload_segment_code_type)
      ChannelCodingMethod_Turbo : _zz_io_output_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : _zz_io_output_payload_segment_code_type_string = "TailedConvolutional";
      default : _zz_io_output_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  `endif

  assign io_inputs_0_ready = ((io_select == 2'b00) && io_output_ready);
  assign io_inputs_1_ready = ((io_select == 2'b01) && io_output_ready);
  assign io_inputs_2_ready = ((io_select == 2'b10) && io_output_ready);
  assign _zz_io_output_payload_segment_type = _zz__zz_io_output_payload_segment_type;
  assign _zz_io_output_payload_segment_code_type = _zz__zz_io_output_payload_segment_code_type;
  assign io_output_valid = _zz_io_output_valid;
  assign io_output_payload_segment_type = _zz_io_output_payload_segment_type;
  assign io_output_payload_segment_length = _zz_io_output_payload_segment_length;
  assign io_output_payload_segment_code_type = _zz_io_output_payload_segment_code_type;

endmodule

module StreamMux_1 (
  input      [1:0]    io_select,
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input               io_inputs_0_payload_last,
  input      [1:0]    io_inputs_0_payload_fragment,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input               io_inputs_1_payload_last,
  input      [1:0]    io_inputs_1_payload_fragment,
  input               io_inputs_2_valid,
  output              io_inputs_2_ready,
  input               io_inputs_2_payload_last,
  input      [1:0]    io_inputs_2_payload_fragment,
  output              io_output_valid,
  input               io_output_ready,
  output              io_output_payload_last,
  output     [1:0]    io_output_payload_fragment
);

  reg                 _zz_io_output_valid;
  reg                 _zz_io_output_payload_last;
  reg        [1:0]    _zz_io_output_payload_fragment;

  always @(*) begin
    case(io_select)
      2'b00 : begin
        _zz_io_output_valid = io_inputs_0_valid;
        _zz_io_output_payload_last = io_inputs_0_payload_last;
        _zz_io_output_payload_fragment = io_inputs_0_payload_fragment;
      end
      2'b01 : begin
        _zz_io_output_valid = io_inputs_1_valid;
        _zz_io_output_payload_last = io_inputs_1_payload_last;
        _zz_io_output_payload_fragment = io_inputs_1_payload_fragment;
      end
      default : begin
        _zz_io_output_valid = io_inputs_2_valid;
        _zz_io_output_payload_last = io_inputs_2_payload_last;
        _zz_io_output_payload_fragment = io_inputs_2_payload_fragment;
      end
    endcase
  end

  assign io_inputs_0_ready = ((io_select == 2'b00) && io_output_ready);
  assign io_inputs_1_ready = ((io_select == 2'b01) && io_output_ready);
  assign io_inputs_2_ready = ((io_select == 2'b10) && io_output_ready);
  assign io_output_valid = _zz_io_output_valid;
  assign io_output_payload_last = _zz_io_output_payload_last;
  assign io_output_payload_fragment = _zz_io_output_payload_fragment;

endmodule

module StreamDemux_2 (
  input      [1:0]    io_select,
  input               io_input_valid,
  output reg          io_input_ready,
  input      [1:0]    io_input_payload_pkg_type,
  input      [19:0]   io_input_payload_pkg_length,
  input      [15:0]   io_input_payload_rnti_scramble,
  output reg          io_outputs_0_valid,
  input               io_outputs_0_ready,
  output     [1:0]    io_outputs_0_payload_pkg_type,
  output     [19:0]   io_outputs_0_payload_pkg_length,
  output     [15:0]   io_outputs_0_payload_rnti_scramble,
  output reg          io_outputs_1_valid,
  input               io_outputs_1_ready,
  output     [1:0]    io_outputs_1_payload_pkg_type,
  output     [19:0]   io_outputs_1_payload_pkg_length,
  output     [15:0]   io_outputs_1_payload_rnti_scramble,
  output reg          io_outputs_2_valid,
  input               io_outputs_2_ready,
  output     [1:0]    io_outputs_2_payload_pkg_type,
  output     [19:0]   io_outputs_2_payload_pkg_length,
  output     [15:0]   io_outputs_2_payload_rnti_scramble
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PSCH = 2'd2;

  wire                when_Stream_l827;
  wire                when_Stream_l827_1;
  wire                when_Stream_l827_2;
  `ifndef SYNTHESIS
  reg [31:0] io_input_payload_pkg_type_string;
  reg [31:0] io_outputs_0_payload_pkg_type_string;
  reg [31:0] io_outputs_1_payload_pkg_type_string;
  reg [31:0] io_outputs_2_payload_pkg_type_string;
  `endif


  `ifndef SYNTHESIS
  always @(*) begin
    case(io_input_payload_pkg_type)
      PhysicalChannel_PBCH : io_input_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : io_input_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : io_input_payload_pkg_type_string = "PSCH";
      default : io_input_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(io_outputs_0_payload_pkg_type)
      PhysicalChannel_PBCH : io_outputs_0_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : io_outputs_0_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : io_outputs_0_payload_pkg_type_string = "PSCH";
      default : io_outputs_0_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(io_outputs_1_payload_pkg_type)
      PhysicalChannel_PBCH : io_outputs_1_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : io_outputs_1_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : io_outputs_1_payload_pkg_type_string = "PSCH";
      default : io_outputs_1_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(io_outputs_2_payload_pkg_type)
      PhysicalChannel_PBCH : io_outputs_2_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : io_outputs_2_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : io_outputs_2_payload_pkg_type_string = "PSCH";
      default : io_outputs_2_payload_pkg_type_string = "????";
    endcase
  end
  `endif

  always @(*) begin
    io_input_ready = 1'b0;
    if(!when_Stream_l827) begin
      io_input_ready = io_outputs_0_ready;
    end
    if(!when_Stream_l827_1) begin
      io_input_ready = io_outputs_1_ready;
    end
    if(!when_Stream_l827_2) begin
      io_input_ready = io_outputs_2_ready;
    end
  end

  assign io_outputs_0_payload_pkg_type = io_input_payload_pkg_type;
  assign io_outputs_0_payload_pkg_length = io_input_payload_pkg_length;
  assign io_outputs_0_payload_rnti_scramble = io_input_payload_rnti_scramble;
  assign when_Stream_l827 = (2'b00 != io_select);
  always @(*) begin
    if(when_Stream_l827) begin
      io_outputs_0_valid = 1'b0;
    end else begin
      io_outputs_0_valid = io_input_valid;
    end
  end

  assign io_outputs_1_payload_pkg_type = io_input_payload_pkg_type;
  assign io_outputs_1_payload_pkg_length = io_input_payload_pkg_length;
  assign io_outputs_1_payload_rnti_scramble = io_input_payload_rnti_scramble;
  assign when_Stream_l827_1 = (2'b01 != io_select);
  always @(*) begin
    if(when_Stream_l827_1) begin
      io_outputs_1_valid = 1'b0;
    end else begin
      io_outputs_1_valid = io_input_valid;
    end
  end

  assign io_outputs_2_payload_pkg_type = io_input_payload_pkg_type;
  assign io_outputs_2_payload_pkg_length = io_input_payload_pkg_length;
  assign io_outputs_2_payload_rnti_scramble = io_input_payload_rnti_scramble;
  assign when_Stream_l827_2 = (2'b10 != io_select);
  always @(*) begin
    if(when_Stream_l827_2) begin
      io_outputs_2_valid = 1'b0;
    end else begin
      io_outputs_2_valid = io_input_valid;
    end
  end


endmodule

module StreamDemux_1 (
  input      [1:0]    io_select,
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [0:0]    io_input_payload_fragment,
  output reg          io_outputs_0_valid,
  input               io_outputs_0_ready,
  output              io_outputs_0_payload_last,
  output     [0:0]    io_outputs_0_payload_fragment,
  output reg          io_outputs_1_valid,
  input               io_outputs_1_ready,
  output              io_outputs_1_payload_last,
  output     [0:0]    io_outputs_1_payload_fragment,
  output reg          io_outputs_2_valid,
  input               io_outputs_2_ready,
  output              io_outputs_2_payload_last,
  output     [0:0]    io_outputs_2_payload_fragment
);

  wire                when_Stream_l827;
  wire                when_Stream_l827_1;
  wire                when_Stream_l827_2;

  always @(*) begin
    io_input_ready = 1'b0;
    if(!when_Stream_l827) begin
      io_input_ready = io_outputs_0_ready;
    end
    if(!when_Stream_l827_1) begin
      io_input_ready = io_outputs_1_ready;
    end
    if(!when_Stream_l827_2) begin
      io_input_ready = io_outputs_2_ready;
    end
  end

  assign io_outputs_0_payload_last = io_input_payload_last;
  assign io_outputs_0_payload_fragment = io_input_payload_fragment;
  assign when_Stream_l827 = (2'b00 != io_select);
  always @(*) begin
    if(when_Stream_l827) begin
      io_outputs_0_valid = 1'b0;
    end else begin
      io_outputs_0_valid = io_input_valid;
    end
  end

  assign io_outputs_1_payload_last = io_input_payload_last;
  assign io_outputs_1_payload_fragment = io_input_payload_fragment;
  assign when_Stream_l827_1 = (2'b01 != io_select);
  always @(*) begin
    if(when_Stream_l827_1) begin
      io_outputs_1_valid = 1'b0;
    end else begin
      io_outputs_1_valid = io_input_valid;
    end
  end

  assign io_outputs_2_payload_last = io_input_payload_last;
  assign io_outputs_2_payload_fragment = io_input_payload_fragment;
  assign when_Stream_l827_2 = (2'b10 != io_select);
  always @(*) begin
    if(when_Stream_l827_2) begin
      io_outputs_2_valid = 1'b0;
    end else begin
      io_outputs_2_valid = io_input_valid;
    end
  end


endmodule

module PSCHCrcAttachment (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  input               block_msg_valid,
  output              block_msg_ready,
  input      [1:0]    block_msg_payload_pkg_type,
  input      [19:0]   block_msg_payload_pkg_length,
  input      [15:0]   block_msg_payload_rnti_scramble,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [1:0]    result_data_payload_fragment,
  output              segment_msg_valid,
  input               segment_msg_ready,
  output     [1:0]    segment_msg_payload_segment_type,
  output     [12:0]   segment_msg_payload_segment_length,
  output     [0:0]    segment_msg_payload_segment_code_type,
  input               clk,
  input               resetn
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PSCH = 2'd2;
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;
  localparam PSCHCrcAttachmentStatus_IDLE = 3'd0;
  localparam PSCHCrcAttachmentStatus_CALC_NUM = 3'd1;
  localparam PSCHCrcAttachmentStatus_CALC_K_C = 3'd2;
  localparam PSCHCrcAttachmentStatus_MATCH_SIZE = 3'd3;
  localparam PSCHCrcAttachmentStatus_CTRL_EMIT = 3'd4;
  localparam PSCHCrcAttachmentStatus_ZERO_PADDING = 3'd5;
  localparam PSCHCrcAttachmentStatus_BYPASS = 3'd6;
  localparam PSCHCrcAttachmentStatus_CRC_PADDING = 3'd7;

  wire                unsigned_divider_cmd_ready;
  wire                unsigned_divider_rsp_valid;
  wire       [19:0]   unsigned_divider_rsp_payload_quotient;
  wire       [12:0]   unsigned_divider_rsp_payload_remainder;
  wire                unsigned_divider_rsp_payload_error;
  wire       [9:0]    _zz_code_block_resized;
  wire       [9:0]    _zz_code_block_resized_1;
  wire       [0:0]    _zz_code_block_resized_2;
  wire       [8:0]    _zz_code_block_resized_3;
  wire       [8:0]    _zz_code_block_resized_4;
  wire       [0:0]    _zz_code_block_resized_5;
  wire       [7:0]    _zz_code_block_resized_6;
  wire       [7:0]    _zz_code_block_resized_7;
  wire       [0:0]    _zz_code_block_resized_8;
  wire       [6:0]    _zz_code_block_resized_9;
  wire       [6:0]    _zz_code_block_resized_10;
  wire       [0:0]    _zz_code_block_resized_11;
  wire       [7:0]    _zz_segment_num;
  wire       [7:0]    _zz_segment_num_1;
  wire       [0:0]    _zz_segment_num_2;
  wire       [19:0]   _zz_zero_padding_cnt;
  wire       [19:0]   _zz_numerator;
  wire       [19:0]   _zz_numerator_1;
  wire       [11:0]   _zz_numerator_2;
  wire       [19:0]   _zz_numerator_3;
  wire       [10:0]   _zz_numerator_4;
  reg        [2:0]    state;
  reg        [1:0]    segment_message_segment_type;
  reg        [12:0]   segment_message_segment_length;
  reg        [0:0]    segment_message_segment_code_type;
  reg                 block_msg_enable;
  reg        [12:0]   zero_padding_cnt;
  reg        [7:0]    C;
  reg        [19:0]   B_full;
  reg        [7:0]    Cp;
  reg        [7:0]    Cn;
  reg        [12:0]   Kp;
  reg        [12:0]   Kn;
  reg        [19:0]   numerator;
  reg        [12:0]   denominator;
  reg                 divide_enable;
  reg        [12:0]   code_block_resized;
  wire       [3:0]    switch_PhyTX_l344;
  wire       [7:0]    segment_num;
  wire                block_msg_fire;
  wire                when_PhyTX_l363;
  wire                when_PhyTX_l367;
  wire                unsigned_divider_cmd_fire;
  wire                unsigned_divider_rsp_fire;
  wire                unsigned_divider_cmd_fire_1;
  wire                unsigned_divider_rsp_fire_1;
  wire                segment_msg_fire;
  wire                result_data_fire;
  wire                when_PhyTX_l438;
  wire                result_data_fire_1;
  wire                when_PhyTX_l447;
  `ifndef SYNTHESIS
  reg [31:0] block_msg_payload_pkg_type_string;
  reg [31:0] segment_msg_payload_segment_type_string;
  reg [151:0] segment_msg_payload_segment_code_type_string;
  reg [95:0] state_string;
  reg [31:0] segment_message_segment_type_string;
  reg [151:0] segment_message_segment_code_type_string;
  `endif


  assign _zz_code_block_resized = (segment_message_segment_length[12 : 3] + _zz_code_block_resized_1);
  assign _zz_code_block_resized_2 = (segment_message_segment_length[2 : 0] != 3'b000);
  assign _zz_code_block_resized_1 = {9'd0, _zz_code_block_resized_2};
  assign _zz_code_block_resized_3 = (segment_message_segment_length[12 : 4] + _zz_code_block_resized_4);
  assign _zz_code_block_resized_5 = (segment_message_segment_length[3 : 0] != 4'b0000);
  assign _zz_code_block_resized_4 = {8'd0, _zz_code_block_resized_5};
  assign _zz_code_block_resized_6 = (segment_message_segment_length[12 : 5] + _zz_code_block_resized_7);
  assign _zz_code_block_resized_8 = (segment_message_segment_length[4 : 0] != 5'h0);
  assign _zz_code_block_resized_7 = {7'd0, _zz_code_block_resized_8};
  assign _zz_code_block_resized_9 = (segment_message_segment_length[12 : 6] + _zz_code_block_resized_10);
  assign _zz_code_block_resized_11 = (segment_message_segment_length[5 : 0] != 6'h0);
  assign _zz_code_block_resized_10 = {6'd0, _zz_code_block_resized_11};
  assign _zz_segment_num = unsigned_divider_rsp_payload_quotient[7:0];
  assign _zz_segment_num_2 = (unsigned_divider_rsp_payload_remainder != 13'h0);
  assign _zz_segment_num_1 = {7'd0, _zz_segment_num_2};
  assign _zz_zero_padding_cnt = (20'h00028 - block_msg_payload_pkg_length);
  assign _zz_numerator = (numerator + _zz_numerator_1);
  assign _zz_numerator_2 = ({4'd0,segment_num} <<< 4);
  assign _zz_numerator_1 = {8'd0, _zz_numerator_2};
  assign _zz_numerator_4 = ({3'd0,segment_num} <<< 3);
  assign _zz_numerator_3 = {9'd0, _zz_numerator_4};
  UnsignedDivider unsigned_divider (
    .flush                   (1'b0                                        ), //i
    .cmd_valid               (divide_enable                               ), //i
    .cmd_ready               (unsigned_divider_cmd_ready                  ), //o
    .cmd_payload_numerator   (numerator[19:0]                             ), //i
    .cmd_payload_denominator (denominator[12:0]                           ), //i
    .rsp_valid               (unsigned_divider_rsp_valid                  ), //o
    .rsp_ready               (1'b1                                        ), //i
    .rsp_payload_quotient    (unsigned_divider_rsp_payload_quotient[19:0] ), //o
    .rsp_payload_remainder   (unsigned_divider_rsp_payload_remainder[12:0]), //o
    .rsp_payload_error       (unsigned_divider_rsp_payload_error          ), //o
    .clk                     (clk                                         ), //i
    .resetn                  (resetn                                      )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(block_msg_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : block_msg_payload_pkg_type_string = "PSCH";
      default : block_msg_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_msg_payload_segment_type)
      PhysicalChannel_PBCH : segment_msg_payload_segment_type_string = "PBCH";
      PhysicalChannel_PCCH : segment_msg_payload_segment_type_string = "PCCH";
      PhysicalChannel_PSCH : segment_msg_payload_segment_type_string = "PSCH";
      default : segment_msg_payload_segment_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_msg_payload_segment_code_type)
      ChannelCodingMethod_Turbo : segment_msg_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_msg_payload_segment_code_type_string = "TailedConvolutional";
      default : segment_msg_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(state)
      PSCHCrcAttachmentStatus_IDLE : state_string = "IDLE        ";
      PSCHCrcAttachmentStatus_CALC_NUM : state_string = "CALC_NUM    ";
      PSCHCrcAttachmentStatus_CALC_K_C : state_string = "CALC_K_C    ";
      PSCHCrcAttachmentStatus_MATCH_SIZE : state_string = "MATCH_SIZE  ";
      PSCHCrcAttachmentStatus_CTRL_EMIT : state_string = "CTRL_EMIT   ";
      PSCHCrcAttachmentStatus_ZERO_PADDING : state_string = "ZERO_PADDING";
      PSCHCrcAttachmentStatus_BYPASS : state_string = "BYPASS      ";
      PSCHCrcAttachmentStatus_CRC_PADDING : state_string = "CRC_PADDING ";
      default : state_string = "????????????";
    endcase
  end
  always @(*) begin
    case(segment_message_segment_type)
      PhysicalChannel_PBCH : segment_message_segment_type_string = "PBCH";
      PhysicalChannel_PCCH : segment_message_segment_type_string = "PCCH";
      PhysicalChannel_PSCH : segment_message_segment_type_string = "PSCH";
      default : segment_message_segment_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_message_segment_code_type)
      ChannelCodingMethod_Turbo : segment_message_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_message_segment_code_type_string = "TailedConvolutional";
      default : segment_message_segment_code_type_string = "???????????????????";
    endcase
  end
  `endif

  assign switch_PhyTX_l344 = (segment_message_segment_length >>> 9);
  always @(*) begin
    case(switch_PhyTX_l344)
      4'b0000 : begin
        code_block_resized = {_zz_code_block_resized,3'b000};
      end
      4'b0001 : begin
        code_block_resized = {_zz_code_block_resized_3,4'b0000};
      end
      4'b0010 : begin
        code_block_resized = {_zz_code_block_resized_6,5'h0};
      end
      default : begin
        code_block_resized = {_zz_code_block_resized_9,6'h0};
      end
    endcase
  end

  assign segment_num = (_zz_segment_num + _zz_segment_num_1);
  assign block_msg_fire = (block_msg_valid && block_msg_ready);
  assign when_PhyTX_l363 = (block_msg_payload_pkg_length < 20'h00028);
  assign when_PhyTX_l367 = (block_msg_payload_pkg_length <= 20'h01800);
  always @(*) begin
    case(state)
      PSCHCrcAttachmentStatus_IDLE : begin
        result_data_valid = 1'b0;
      end
      PSCHCrcAttachmentStatus_CALC_NUM : begin
        result_data_valid = 1'b0;
      end
      PSCHCrcAttachmentStatus_CALC_K_C : begin
        result_data_valid = 1'b0;
      end
      PSCHCrcAttachmentStatus_MATCH_SIZE : begin
        result_data_valid = 1'b0;
      end
      PSCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_valid = 1'b0;
      end
      PSCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_valid = 1'b1;
      end
      PSCHCrcAttachmentStatus_BYPASS : begin
        result_data_valid = raw_data_valid;
      end
      default : begin
        result_data_valid = 1'b0;
      end
    endcase
  end

  always @(*) begin
    case(state)
      PSCHCrcAttachmentStatus_IDLE : begin
        result_data_payload_last = 1'b0;
      end
      PSCHCrcAttachmentStatus_CALC_NUM : begin
        result_data_payload_last = 1'b0;
      end
      PSCHCrcAttachmentStatus_CALC_K_C : begin
        result_data_payload_last = 1'b0;
      end
      PSCHCrcAttachmentStatus_MATCH_SIZE : begin
        result_data_payload_last = 1'b0;
      end
      PSCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_payload_last = 1'b0;
      end
      PSCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_payload_last = 1'b0;
      end
      PSCHCrcAttachmentStatus_BYPASS : begin
        result_data_payload_last = ((C == 8'h01) ? raw_data_payload_last : 1'b0);
      end
      default : begin
        result_data_payload_last = 1'b0;
      end
    endcase
  end

  always @(*) begin
    case(state)
      PSCHCrcAttachmentStatus_IDLE : begin
        result_data_payload_fragment = 2'b00;
      end
      PSCHCrcAttachmentStatus_CALC_NUM : begin
        result_data_payload_fragment = 2'b00;
      end
      PSCHCrcAttachmentStatus_CALC_K_C : begin
        result_data_payload_fragment = 2'b00;
      end
      PSCHCrcAttachmentStatus_MATCH_SIZE : begin
        result_data_payload_fragment = 2'b00;
      end
      PSCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_payload_fragment = 2'b00;
      end
      PSCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_payload_fragment = 2'b00;
      end
      PSCHCrcAttachmentStatus_BYPASS : begin
        result_data_payload_fragment = {1'b1,raw_data_payload_fragment};
      end
      default : begin
        result_data_payload_fragment = 2'b00;
      end
    endcase
  end

  assign unsigned_divider_cmd_fire = (divide_enable && unsigned_divider_cmd_ready);
  assign unsigned_divider_rsp_fire = (unsigned_divider_rsp_valid && 1'b1);
  assign unsigned_divider_cmd_fire_1 = (divide_enable && unsigned_divider_cmd_ready);
  assign unsigned_divider_rsp_fire_1 = (unsigned_divider_rsp_valid && 1'b1);
  assign segment_msg_fire = (segment_msg_valid && segment_msg_ready);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTX_l438 = (zero_padding_cnt == 13'h0001);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_PhyTX_l447 = (result_data_fire_1 && result_data_payload_last);
  assign block_msg_ready = (block_msg_enable && segment_msg_ready);
  assign segment_msg_valid = (state == PSCHCrcAttachmentStatus_CTRL_EMIT);
  assign segment_msg_payload_segment_type = segment_message_segment_type;
  assign segment_msg_payload_segment_length = segment_message_segment_length;
  assign segment_msg_payload_segment_code_type = segment_message_segment_code_type;
  assign raw_data_ready = (state == PSCHCrcAttachmentStatus_BYPASS);
  always @(posedge clk) begin
    if(!resetn) begin
      state <= PSCHCrcAttachmentStatus_IDLE;
      block_msg_enable <= 1'b0;
      divide_enable <= 1'b0;
    end else begin
      case(state)
        PSCHCrcAttachmentStatus_IDLE : begin
          if(block_msg_fire) begin
            if(when_PhyTX_l363) begin
              state <= PSCHCrcAttachmentStatus_CTRL_EMIT;
            end else begin
              if(when_PhyTX_l367) begin
                state <= PSCHCrcAttachmentStatus_MATCH_SIZE;
              end else begin
                state <= PSCHCrcAttachmentStatus_CALC_NUM;
                divide_enable <= 1'b1;
              end
            end
            block_msg_enable <= 1'b0;
          end else begin
            block_msg_enable <= 1'b1;
          end
        end
        PSCHCrcAttachmentStatus_CALC_NUM : begin
          if(unsigned_divider_cmd_fire) begin
            divide_enable <= 1'b0;
          end
          if(unsigned_divider_rsp_fire) begin
            state <= PSCHCrcAttachmentStatus_CALC_K_C;
            divide_enable <= 1'b1;
          end
        end
        PSCHCrcAttachmentStatus_CALC_K_C : begin
          if(unsigned_divider_cmd_fire_1) begin
            divide_enable <= 1'b0;
          end
          if(unsigned_divider_rsp_fire_1) begin
            state <= PSCHCrcAttachmentStatus_MATCH_SIZE;
          end
        end
        PSCHCrcAttachmentStatus_MATCH_SIZE : begin
          state <= PSCHCrcAttachmentStatus_CTRL_EMIT;
        end
        PSCHCrcAttachmentStatus_CTRL_EMIT : begin
          if(segment_msg_fire) begin
            state <= ((zero_padding_cnt == 13'h0) ? PSCHCrcAttachmentStatus_BYPASS : PSCHCrcAttachmentStatus_ZERO_PADDING);
          end
        end
        PSCHCrcAttachmentStatus_ZERO_PADDING : begin
          if(result_data_fire) begin
            if(when_PhyTX_l438) begin
              state <= PSCHCrcAttachmentStatus_BYPASS;
            end
          end
        end
        PSCHCrcAttachmentStatus_BYPASS : begin
          if(when_PhyTX_l447) begin
            state <= ((C == 8'h01) ? PSCHCrcAttachmentStatus_IDLE : PSCHCrcAttachmentStatus_CRC_PADDING);
            block_msg_enable <= 1'b1;
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(state)
      PSCHCrcAttachmentStatus_IDLE : begin
        if(block_msg_fire) begin
          if(when_PhyTX_l363) begin
            zero_padding_cnt <= _zz_zero_padding_cnt[12:0];
            segment_message_segment_length <= 13'h0028;
          end else begin
            if(when_PhyTX_l367) begin
              segment_message_segment_length <= block_msg_payload_pkg_length[12:0];
            end
          end
        end
        segment_message_segment_type <= block_msg_payload_pkg_type;
        segment_message_segment_code_type <= ChannelCodingMethod_Turbo;
        numerator <= block_msg_payload_pkg_length;
        denominator <= 13'h17e8;
        C <= 8'h01;
      end
      PSCHCrcAttachmentStatus_CALC_NUM : begin
        if(unsigned_divider_rsp_fire) begin
          C <= segment_num;
          numerator <= (_zz_numerator + _zz_numerator_3);
          denominator <= {5'd0, segment_num};
        end
      end
      PSCHCrcAttachmentStatus_CALC_K_C : begin
        if(unsigned_divider_cmd_fire_1) begin
          B_full <= numerator;
        end
      end
      PSCHCrcAttachmentStatus_MATCH_SIZE : begin
        segment_message_segment_length <= code_block_resized;
        zero_padding_cnt <= (code_block_resized - segment_message_segment_length);
      end
      PSCHCrcAttachmentStatus_CTRL_EMIT : begin
      end
      PSCHCrcAttachmentStatus_ZERO_PADDING : begin
        if(result_data_fire) begin
          zero_padding_cnt <= (zero_padding_cnt - 13'h0001);
        end
      end
      PSCHCrcAttachmentStatus_BYPASS : begin
      end
      default : begin
      end
    endcase
  end


endmodule

module PCCHCrcAttachment (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  input               block_msg_valid,
  output              block_msg_ready,
  input      [1:0]    block_msg_payload_pkg_type,
  input      [19:0]   block_msg_payload_pkg_length,
  input      [15:0]   block_msg_payload_rnti_scramble,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [1:0]    result_data_payload_fragment,
  output              segment_msg_valid,
  input               segment_msg_ready,
  output     [1:0]    segment_msg_payload_segment_type,
  output     [12:0]   segment_msg_payload_segment_length,
  output     [0:0]    segment_msg_payload_segment_code_type,
  input               clk,
  input               resetn
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PSCH = 2'd2;
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;
  localparam PCCHCrcAttachmentStatus_IDLE = 3'd0;
  localparam PCCHCrcAttachmentStatus_CTRL_EMIT = 3'd1;
  localparam PCCHCrcAttachmentStatus_ZERO_PADDING = 3'd2;
  localparam PCCHCrcAttachmentStatus_BYPASS = 3'd3;
  localparam PCCHCrcAttachmentStatus_SCRAMBLE = 3'd4;

  wire       [3:0]    _zz_xor_bit;
  wire       [12:0]   _zz_xor_bit_1;
  wire       [19:0]   _zz_zero_padding_cnt;
  reg        [2:0]    state;
  reg        [1:0]    segment_message_segment_type;
  reg        [12:0]   segment_message_segment_length;
  reg        [0:0]    segment_message_segment_code_type;
  reg                 block_msg_enable;
  reg        [12:0]   zero_padding_cnt;
  reg        [15:0]   rnti;
  wire       [0:0]    xor_bit;
  wire                block_msg_fire;
  wire                when_PhyTX_l236;
  wire                segment_msg_fire;
  wire                result_data_fire;
  wire                when_PhyTX_l267;
  wire                result_data_fire_1;
  wire                when_PhyTX_l277;
  wire                result_data_fire_2;
  wire                when_PhyTX_l287;
  wire                result_data_fire_3;
  `ifndef SYNTHESIS
  reg [31:0] block_msg_payload_pkg_type_string;
  reg [31:0] segment_msg_payload_segment_type_string;
  reg [151:0] segment_msg_payload_segment_code_type_string;
  reg [95:0] state_string;
  reg [31:0] segment_message_segment_type_string;
  reg [151:0] segment_message_segment_code_type_string;
  `endif


  assign _zz_xor_bit_1 = (segment_message_segment_length - 13'h0001);
  assign _zz_xor_bit = _zz_xor_bit_1[3:0];
  assign _zz_zero_padding_cnt = (20'h00028 - block_msg_payload_pkg_length);
  `ifndef SYNTHESIS
  always @(*) begin
    case(block_msg_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : block_msg_payload_pkg_type_string = "PSCH";
      default : block_msg_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_msg_payload_segment_type)
      PhysicalChannel_PBCH : segment_msg_payload_segment_type_string = "PBCH";
      PhysicalChannel_PCCH : segment_msg_payload_segment_type_string = "PCCH";
      PhysicalChannel_PSCH : segment_msg_payload_segment_type_string = "PSCH";
      default : segment_msg_payload_segment_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_msg_payload_segment_code_type)
      ChannelCodingMethod_Turbo : segment_msg_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_msg_payload_segment_code_type_string = "TailedConvolutional";
      default : segment_msg_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(state)
      PCCHCrcAttachmentStatus_IDLE : state_string = "IDLE        ";
      PCCHCrcAttachmentStatus_CTRL_EMIT : state_string = "CTRL_EMIT   ";
      PCCHCrcAttachmentStatus_ZERO_PADDING : state_string = "ZERO_PADDING";
      PCCHCrcAttachmentStatus_BYPASS : state_string = "BYPASS      ";
      PCCHCrcAttachmentStatus_SCRAMBLE : state_string = "SCRAMBLE    ";
      default : state_string = "????????????";
    endcase
  end
  always @(*) begin
    case(segment_message_segment_type)
      PhysicalChannel_PBCH : segment_message_segment_type_string = "PBCH";
      PhysicalChannel_PCCH : segment_message_segment_type_string = "PCCH";
      PhysicalChannel_PSCH : segment_message_segment_type_string = "PSCH";
      default : segment_message_segment_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_message_segment_code_type)
      ChannelCodingMethod_Turbo : segment_message_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_message_segment_code_type_string = "TailedConvolutional";
      default : segment_message_segment_code_type_string = "???????????????????";
    endcase
  end
  `endif

  assign xor_bit = rnti[_zz_xor_bit];
  assign block_msg_fire = (block_msg_valid && block_msg_ready);
  assign when_PhyTX_l236 = (block_msg_payload_pkg_length < 20'h00028);
  always @(*) begin
    case(state)
      PCCHCrcAttachmentStatus_IDLE : begin
        result_data_valid = 1'b0;
      end
      PCCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_valid = 1'b0;
      end
      PCCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_valid = 1'b1;
      end
      PCCHCrcAttachmentStatus_BYPASS : begin
        result_data_valid = raw_data_valid;
      end
      default : begin
        result_data_valid = raw_data_valid;
      end
    endcase
  end

  always @(*) begin
    case(state)
      PCCHCrcAttachmentStatus_IDLE : begin
        result_data_payload_last = 1'b0;
      end
      PCCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_payload_last = 1'b0;
      end
      PCCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_payload_last = 1'b0;
      end
      PCCHCrcAttachmentStatus_BYPASS : begin
        result_data_payload_last = 1'b0;
      end
      default : begin
        result_data_payload_last = raw_data_payload_last;
      end
    endcase
  end

  always @(*) begin
    case(state)
      PCCHCrcAttachmentStatus_IDLE : begin
        result_data_payload_fragment = 2'b00;
      end
      PCCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_payload_fragment = 2'b00;
      end
      PCCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_payload_fragment = 2'b00;
      end
      PCCHCrcAttachmentStatus_BYPASS : begin
        result_data_payload_fragment = {1'b1,raw_data_payload_fragment};
      end
      default : begin
        result_data_payload_fragment = {1'b1,(raw_data_payload_fragment ^ xor_bit)};
      end
    endcase
  end

  assign segment_msg_fire = (segment_msg_valid && segment_msg_ready);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTX_l267 = (zero_padding_cnt == 13'h0001);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_PhyTX_l277 = (segment_message_segment_length == 13'h0010);
  assign result_data_fire_2 = (result_data_valid && result_data_ready);
  assign when_PhyTX_l287 = (result_data_fire_2 && result_data_payload_last);
  assign result_data_fire_3 = (result_data_valid && result_data_ready);
  assign block_msg_ready = (block_msg_enable && segment_msg_ready);
  assign segment_msg_valid = (state == PCCHCrcAttachmentStatus_CTRL_EMIT);
  assign segment_msg_payload_segment_type = segment_message_segment_type;
  assign segment_msg_payload_segment_length = segment_message_segment_length;
  assign segment_msg_payload_segment_code_type = segment_message_segment_code_type;
  assign raw_data_ready = ((state == PCCHCrcAttachmentStatus_BYPASS) || (state == PCCHCrcAttachmentStatus_SCRAMBLE));
  always @(posedge clk) begin
    if(!resetn) begin
      state <= PCCHCrcAttachmentStatus_IDLE;
      block_msg_enable <= 1'b1;
      zero_padding_cnt <= 13'h0;
      rnti <= 16'h0;
    end else begin
      case(state)
        PCCHCrcAttachmentStatus_IDLE : begin
          if(block_msg_fire) begin
            if(when_PhyTX_l236) begin
              zero_padding_cnt <= _zz_zero_padding_cnt[12:0];
            end else begin
              zero_padding_cnt <= 13'h0;
            end
            state <= PCCHCrcAttachmentStatus_CTRL_EMIT;
            block_msg_enable <= 1'b0;
          end else begin
            block_msg_enable <= 1'b1;
          end
          rnti <= block_msg_payload_rnti_scramble;
        end
        PCCHCrcAttachmentStatus_CTRL_EMIT : begin
          if(segment_msg_fire) begin
            state <= ((zero_padding_cnt == 13'h0) ? PCCHCrcAttachmentStatus_BYPASS : PCCHCrcAttachmentStatus_ZERO_PADDING);
          end
        end
        PCCHCrcAttachmentStatus_ZERO_PADDING : begin
          if(result_data_fire) begin
            zero_padding_cnt <= (zero_padding_cnt - 13'h0001);
            if(when_PhyTX_l267) begin
              state <= PCCHCrcAttachmentStatus_BYPASS;
            end
          end
        end
        PCCHCrcAttachmentStatus_BYPASS : begin
          if(result_data_fire_1) begin
            if(when_PhyTX_l277) begin
              state <= PCCHCrcAttachmentStatus_SCRAMBLE;
            end
          end
        end
        default : begin
          if(when_PhyTX_l287) begin
            state <= PCCHCrcAttachmentStatus_IDLE;
            block_msg_enable <= 1'b1;
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(state)
      PCCHCrcAttachmentStatus_IDLE : begin
        if(block_msg_fire) begin
          if(when_PhyTX_l236) begin
            segment_message_segment_length <= 13'h0028;
          end else begin
            segment_message_segment_length <= block_msg_payload_pkg_length[12:0];
          end
        end
        segment_message_segment_type <= block_msg_payload_pkg_type;
        segment_message_segment_code_type <= ChannelCodingMethod_TailedConvolutional;
      end
      PCCHCrcAttachmentStatus_CTRL_EMIT : begin
      end
      PCCHCrcAttachmentStatus_ZERO_PADDING : begin
        if(result_data_fire) begin
          segment_message_segment_length <= (segment_message_segment_length - 13'h0001);
        end
      end
      PCCHCrcAttachmentStatus_BYPASS : begin
        if(result_data_fire_1) begin
          segment_message_segment_length <= (segment_message_segment_length - 13'h0001);
        end
      end
      default : begin
        if(result_data_fire_3) begin
          segment_message_segment_length <= (segment_message_segment_length - 13'h0001);
        end
      end
    endcase
  end


endmodule

module PBCHCrcAttachment (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  input               block_msg_valid,
  output              block_msg_ready,
  input      [1:0]    block_msg_payload_pkg_type,
  input      [19:0]   block_msg_payload_pkg_length,
  input      [15:0]   block_msg_payload_rnti_scramble,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [1:0]    result_data_payload_fragment,
  output              segment_msg_valid,
  input               segment_msg_ready,
  output     [1:0]    segment_msg_payload_segment_type,
  output     [12:0]   segment_msg_payload_segment_length,
  output     [0:0]    segment_msg_payload_segment_code_type,
  input               clk,
  input               resetn
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PSCH = 2'd2;
  localparam ChannelCodingMethod_Turbo = 1'd0;
  localparam ChannelCodingMethod_TailedConvolutional = 1'd1;
  localparam PBCHCrcAttachmentStatus_IDLE = 2'd0;
  localparam PBCHCrcAttachmentStatus_CTRL_EMIT = 2'd1;
  localparam PBCHCrcAttachmentStatus_ZERO_PADDING = 2'd2;
  localparam PBCHCrcAttachmentStatus_BYPASS = 2'd3;

  wire       [19:0]   _zz_zero_padding_cnt;
  reg        [1:0]    state;
  reg        [1:0]    segment_message_segment_type;
  reg        [12:0]   segment_message_segment_length;
  reg        [0:0]    segment_message_segment_code_type;
  reg                 block_msg_enable;
  reg        [12:0]   zero_padding_cnt;
  wire                block_msg_fire;
  wire                when_PhyTX_l159;
  wire                segment_msg_fire;
  wire                result_data_fire;
  wire                when_PhyTX_l189;
  wire                result_data_fire_1;
  wire                when_PhyTX_l198;
  `ifndef SYNTHESIS
  reg [31:0] block_msg_payload_pkg_type_string;
  reg [31:0] segment_msg_payload_segment_type_string;
  reg [151:0] segment_msg_payload_segment_code_type_string;
  reg [95:0] state_string;
  reg [31:0] segment_message_segment_type_string;
  reg [151:0] segment_message_segment_code_type_string;
  `endif


  assign _zz_zero_padding_cnt = (20'h00028 - block_msg_payload_pkg_length);
  `ifndef SYNTHESIS
  always @(*) begin
    case(block_msg_payload_pkg_type)
      PhysicalChannel_PBCH : block_msg_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : block_msg_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : block_msg_payload_pkg_type_string = "PSCH";
      default : block_msg_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_msg_payload_segment_type)
      PhysicalChannel_PBCH : segment_msg_payload_segment_type_string = "PBCH";
      PhysicalChannel_PCCH : segment_msg_payload_segment_type_string = "PCCH";
      PhysicalChannel_PSCH : segment_msg_payload_segment_type_string = "PSCH";
      default : segment_msg_payload_segment_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_msg_payload_segment_code_type)
      ChannelCodingMethod_Turbo : segment_msg_payload_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_msg_payload_segment_code_type_string = "TailedConvolutional";
      default : segment_msg_payload_segment_code_type_string = "???????????????????";
    endcase
  end
  always @(*) begin
    case(state)
      PBCHCrcAttachmentStatus_IDLE : state_string = "IDLE        ";
      PBCHCrcAttachmentStatus_CTRL_EMIT : state_string = "CTRL_EMIT   ";
      PBCHCrcAttachmentStatus_ZERO_PADDING : state_string = "ZERO_PADDING";
      PBCHCrcAttachmentStatus_BYPASS : state_string = "BYPASS      ";
      default : state_string = "????????????";
    endcase
  end
  always @(*) begin
    case(segment_message_segment_type)
      PhysicalChannel_PBCH : segment_message_segment_type_string = "PBCH";
      PhysicalChannel_PCCH : segment_message_segment_type_string = "PCCH";
      PhysicalChannel_PSCH : segment_message_segment_type_string = "PSCH";
      default : segment_message_segment_type_string = "????";
    endcase
  end
  always @(*) begin
    case(segment_message_segment_code_type)
      ChannelCodingMethod_Turbo : segment_message_segment_code_type_string = "Turbo              ";
      ChannelCodingMethod_TailedConvolutional : segment_message_segment_code_type_string = "TailedConvolutional";
      default : segment_message_segment_code_type_string = "???????????????????";
    endcase
  end
  `endif

  assign block_msg_fire = (block_msg_valid && block_msg_ready);
  assign when_PhyTX_l159 = (block_msg_payload_pkg_length < 20'h00028);
  always @(*) begin
    case(state)
      PBCHCrcAttachmentStatus_IDLE : begin
        result_data_valid = 1'b0;
      end
      PBCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_valid = 1'b0;
      end
      PBCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_valid = 1'b1;
      end
      default : begin
        result_data_valid = raw_data_valid;
      end
    endcase
  end

  always @(*) begin
    case(state)
      PBCHCrcAttachmentStatus_IDLE : begin
        result_data_payload_last = 1'b0;
      end
      PBCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_payload_last = 1'b0;
      end
      PBCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_payload_last = 1'b0;
      end
      default : begin
        result_data_payload_last = raw_data_payload_last;
      end
    endcase
  end

  always @(*) begin
    case(state)
      PBCHCrcAttachmentStatus_IDLE : begin
        result_data_payload_fragment = 2'b00;
      end
      PBCHCrcAttachmentStatus_CTRL_EMIT : begin
        result_data_payload_fragment = 2'b00;
      end
      PBCHCrcAttachmentStatus_ZERO_PADDING : begin
        result_data_payload_fragment = 2'b00;
      end
      default : begin
        result_data_payload_fragment = {1'b1,raw_data_payload_fragment};
      end
    endcase
  end

  assign segment_msg_fire = (segment_msg_valid && segment_msg_ready);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTX_l189 = (zero_padding_cnt == 13'h0001);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign when_PhyTX_l198 = (result_data_fire_1 && result_data_payload_last);
  assign block_msg_ready = (block_msg_enable && segment_msg_ready);
  assign segment_msg_valid = (state == PBCHCrcAttachmentStatus_CTRL_EMIT);
  assign segment_msg_payload_segment_type = segment_message_segment_type;
  assign segment_msg_payload_segment_length = segment_message_segment_length;
  assign segment_msg_payload_segment_code_type = segment_message_segment_code_type;
  assign raw_data_ready = (state == PBCHCrcAttachmentStatus_BYPASS);
  always @(posedge clk) begin
    if(!resetn) begin
      state <= PBCHCrcAttachmentStatus_IDLE;
      block_msg_enable <= 1'b1;
      zero_padding_cnt <= 13'h0;
    end else begin
      case(state)
        PBCHCrcAttachmentStatus_IDLE : begin
          if(block_msg_fire) begin
            if(when_PhyTX_l159) begin
              zero_padding_cnt <= _zz_zero_padding_cnt[12:0];
            end else begin
              zero_padding_cnt <= 13'h0;
            end
            state <= PBCHCrcAttachmentStatus_CTRL_EMIT;
            block_msg_enable <= 1'b0;
          end else begin
            block_msg_enable <= 1'b1;
          end
        end
        PBCHCrcAttachmentStatus_CTRL_EMIT : begin
          if(segment_msg_fire) begin
            state <= ((zero_padding_cnt == 13'h0) ? PBCHCrcAttachmentStatus_BYPASS : PBCHCrcAttachmentStatus_ZERO_PADDING);
          end
        end
        PBCHCrcAttachmentStatus_ZERO_PADDING : begin
          if(result_data_fire) begin
            zero_padding_cnt <= (zero_padding_cnt - 13'h0001);
            if(when_PhyTX_l189) begin
              state <= PBCHCrcAttachmentStatus_BYPASS;
            end
          end
        end
        default : begin
          if(when_PhyTX_l198) begin
            state <= PBCHCrcAttachmentStatus_IDLE;
            block_msg_enable <= 1'b1;
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(state)
      PBCHCrcAttachmentStatus_IDLE : begin
        if(block_msg_fire) begin
          if(when_PhyTX_l159) begin
            segment_message_segment_length <= 13'h0028;
          end else begin
            segment_message_segment_length <= block_msg_payload_pkg_length[12:0];
          end
        end
        segment_message_segment_type <= block_msg_payload_pkg_type;
        segment_message_segment_code_type <= ChannelCodingMethod_Turbo;
      end
      PBCHCrcAttachmentStatus_CTRL_EMIT : begin
      end
      PBCHCrcAttachmentStatus_ZERO_PADDING : begin
      end
      default : begin
      end
    endcase
  end


endmodule

module StreamFifo_1 (
  input               io_push_valid,
  output              io_push_ready,
  input      [1:0]    io_push_payload_pkg_type,
  input      [19:0]   io_push_payload_pkg_length,
  input      [15:0]   io_push_payload_rnti_scramble,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [1:0]    io_pop_payload_pkg_type,
  output     [19:0]   io_pop_payload_pkg_length,
  output     [15:0]   io_pop_payload_rnti_scramble,
  input               io_flush,
  output     [2:0]    io_occupancy,
  output     [2:0]    io_availability,
  input               clk,
  input               resetn
);
  localparam PhysicalChannel_PBCH = 2'd0;
  localparam PhysicalChannel_PCCH = 2'd1;
  localparam PhysicalChannel_PSCH = 2'd2;

  reg        [37:0]   _zz_logic_ram_port0;
  wire       [1:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [1:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_pkg_type_1;
  wire       [37:0]   _zz_logic_ram_port_1;
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
  wire       [1:0]    _zz_io_pop_payload_pkg_type;
  wire       [37:0]   _zz_io_pop_payload_pkg_type_1;
  wire       [1:0]    _zz_io_pop_payload_pkg_type_2;
  wire                when_Stream_l1021;
  wire       [1:0]    logic_ptrDif;
  `ifndef SYNTHESIS
  reg [31:0] io_push_payload_pkg_type_string;
  reg [31:0] io_pop_payload_pkg_type_string;
  reg [31:0] _zz_io_pop_payload_pkg_type_string;
  reg [31:0] _zz_io_pop_payload_pkg_type_2_string;
  `endif

  reg [37:0] logic_ram [0:3];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {1'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {1'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_pkg_type_1 = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_rnti_scramble,{io_push_payload_pkg_length,io_push_payload_pkg_type}};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_pkg_type_1) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(io_push_payload_pkg_type)
      PhysicalChannel_PBCH : io_push_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : io_push_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : io_push_payload_pkg_type_string = "PSCH";
      default : io_push_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(io_pop_payload_pkg_type)
      PhysicalChannel_PBCH : io_pop_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : io_pop_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : io_pop_payload_pkg_type_string = "PSCH";
      default : io_pop_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(_zz_io_pop_payload_pkg_type)
      PhysicalChannel_PBCH : _zz_io_pop_payload_pkg_type_string = "PBCH";
      PhysicalChannel_PCCH : _zz_io_pop_payload_pkg_type_string = "PCCH";
      PhysicalChannel_PSCH : _zz_io_pop_payload_pkg_type_string = "PSCH";
      default : _zz_io_pop_payload_pkg_type_string = "????";
    endcase
  end
  always @(*) begin
    case(_zz_io_pop_payload_pkg_type_2)
      PhysicalChannel_PBCH : _zz_io_pop_payload_pkg_type_2_string = "PBCH";
      PhysicalChannel_PCCH : _zz_io_pop_payload_pkg_type_2_string = "PCCH";
      PhysicalChannel_PSCH : _zz_io_pop_payload_pkg_type_2_string = "PSCH";
      default : _zz_io_pop_payload_pkg_type_2_string = "????";
    endcase
  end
  `endif

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
  assign _zz_io_pop_payload_pkg_type_1 = _zz_logic_ram_port0;
  assign _zz_io_pop_payload_pkg_type_2 = _zz_io_pop_payload_pkg_type_1[1 : 0];
  assign _zz_io_pop_payload_pkg_type = _zz_io_pop_payload_pkg_type_2;
  assign io_pop_payload_pkg_type = _zz_io_pop_payload_pkg_type;
  assign io_pop_payload_pkg_length = _zz_io_pop_payload_pkg_type_1[21 : 2];
  assign io_pop_payload_rnti_scramble = _zz_io_pop_payload_pkg_type_1[37 : 22];
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

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [0:0]    io_push_payload_fragment,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [0:0]    io_pop_payload_fragment,
  input               io_flush,
  output     [4:0]    io_occupancy,
  output     [4:0]    io_availability,
  input               clk,
  input               resetn
);

  reg        [1:0]    _zz_logic_ram_port0;
  wire       [3:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [3:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [1:0]    _zz_logic_ram_port_1;
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
  wire       [1:0]    _zz_io_pop_payload_last;
  wire                when_Stream_l1021;
  wire       [3:0]    logic_ptrDif;
  reg [1:0] logic_ram [0:15];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {3'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {3'd0, _zz_logic_popPtr_valueNext_1};
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
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment = _zz_io_pop_payload_last[1 : 1];
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

module StreamMux (
  input      [0:0]    io_select,
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input               io_inputs_0_payload_last,
  input      [0:0]    io_inputs_0_payload_fragment,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input               io_inputs_1_payload_last,
  input      [0:0]    io_inputs_1_payload_fragment,
  output              io_output_valid,
  input               io_output_ready,
  output              io_output_payload_last,
  output     [0:0]    io_output_payload_fragment
);

  reg                 _zz_io_output_valid;
  reg                 _zz_io_output_payload_last;
  reg        [0:0]    _zz_io_output_payload_fragment;

  always @(*) begin
    case(io_select)
      1'b0 : begin
        _zz_io_output_valid = io_inputs_0_valid;
        _zz_io_output_payload_last = io_inputs_0_payload_last;
        _zz_io_output_payload_fragment = io_inputs_0_payload_fragment;
      end
      default : begin
        _zz_io_output_valid = io_inputs_1_valid;
        _zz_io_output_payload_last = io_inputs_1_payload_last;
        _zz_io_output_payload_fragment = io_inputs_1_payload_fragment;
      end
    endcase
  end

  assign io_inputs_0_ready = ((io_select == 1'b0) && io_output_ready);
  assign io_inputs_1_ready = ((io_select == 1'b1) && io_output_ready);
  assign io_output_valid = _zz_io_output_valid;
  assign io_output_payload_last = _zz_io_output_payload_last;
  assign io_output_payload_fragment = _zz_io_output_payload_fragment;

endmodule

module StreamDemux (
  input      [0:0]    io_select,
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [0:0]    io_input_payload_fragment,
  output reg          io_outputs_0_valid,
  input               io_outputs_0_ready,
  output              io_outputs_0_payload_last,
  output     [0:0]    io_outputs_0_payload_fragment,
  output reg          io_outputs_1_valid,
  input               io_outputs_1_ready,
  output              io_outputs_1_payload_last,
  output     [0:0]    io_outputs_1_payload_fragment
);

  wire                when_Stream_l827;
  wire                when_Stream_l827_1;

  always @(*) begin
    io_input_ready = 1'b0;
    if(!when_Stream_l827) begin
      io_input_ready = io_outputs_0_ready;
    end
    if(!when_Stream_l827_1) begin
      io_input_ready = io_outputs_1_ready;
    end
  end

  assign io_outputs_0_payload_last = io_input_payload_last;
  assign io_outputs_0_payload_fragment = io_input_payload_fragment;
  assign when_Stream_l827 = (1'b0 != io_select);
  always @(*) begin
    if(when_Stream_l827) begin
      io_outputs_0_valid = 1'b0;
    end else begin
      io_outputs_0_valid = io_input_valid;
    end
  end

  assign io_outputs_1_payload_last = io_input_payload_last;
  assign io_outputs_1_payload_fragment = io_input_payload_fragment;
  assign when_Stream_l827_1 = (1'b1 != io_select);
  always @(*) begin
    if(when_Stream_l827_1) begin
      io_outputs_1_valid = 1'b0;
    end else begin
      io_outputs_1_valid = io_input_valid;
    end
  end


endmodule

module TxCrcUnit_1 (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [0:0]    result_data_payload_fragment,
  input               clk,
  input               resetn
);

  wire                crc_core_flush;
  wire       [15:0]   crc_core_result;
  wire       [15:0]   crc_core_resultNext;
  reg        [0:0]    _zz_result_data_payload_fragment;
  reg                 emitCrc;
  wire                raw_data_fire;
  wire                when_PhyTX_l48;
  wire                result_data_fire;
  wire                when_PhyTX_l48_1;
  reg        [3:0]    counter;
  wire                raw_data_fire_1;
  wire                result_data_fire_1;
  wire                when_PhyTX_l58;
  wire                when_PhyTX_l70;

  Crc_1 crc_core (
    .flush         (crc_core_flush           ), //i
    .input_valid   (raw_data_fire_1          ), //i
    .input_payload (raw_data_payload_fragment), //i
    .result        (crc_core_result[15:0]    ), //o
    .resultNext    (crc_core_resultNext[15:0]), //o
    .clk           (clk                      ), //i
    .resetn        (resetn                   )  //i
  );
  always @(*) begin
    case(counter)
      4'b0000 : _zz_result_data_payload_fragment = crc_core_result[0 : 0];
      4'b0001 : _zz_result_data_payload_fragment = crc_core_result[1 : 1];
      4'b0010 : _zz_result_data_payload_fragment = crc_core_result[2 : 2];
      4'b0011 : _zz_result_data_payload_fragment = crc_core_result[3 : 3];
      4'b0100 : _zz_result_data_payload_fragment = crc_core_result[4 : 4];
      4'b0101 : _zz_result_data_payload_fragment = crc_core_result[5 : 5];
      4'b0110 : _zz_result_data_payload_fragment = crc_core_result[6 : 6];
      4'b0111 : _zz_result_data_payload_fragment = crc_core_result[7 : 7];
      4'b1000 : _zz_result_data_payload_fragment = crc_core_result[8 : 8];
      4'b1001 : _zz_result_data_payload_fragment = crc_core_result[9 : 9];
      4'b1010 : _zz_result_data_payload_fragment = crc_core_result[10 : 10];
      4'b1011 : _zz_result_data_payload_fragment = crc_core_result[11 : 11];
      4'b1100 : _zz_result_data_payload_fragment = crc_core_result[12 : 12];
      4'b1101 : _zz_result_data_payload_fragment = crc_core_result[13 : 13];
      4'b1110 : _zz_result_data_payload_fragment = crc_core_result[14 : 14];
      default : _zz_result_data_payload_fragment = crc_core_result[15 : 15];
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTX_l48 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTX_l48_1 = (result_data_fire && result_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign crc_core_flush = (result_data_fire_1 && result_data_payload_last);
  always @(*) begin
    result_data_payload_last = 1'b0;
    if(!when_PhyTX_l58) begin
      if(when_PhyTX_l70) begin
        result_data_payload_last = 1'b1;
      end
    end
  end

  assign when_PhyTX_l58 = (! emitCrc);
  always @(*) begin
    if(when_PhyTX_l58) begin
      result_data_valid = raw_data_valid;
    end else begin
      result_data_valid = 1'b1;
    end
  end

  always @(*) begin
    if(when_PhyTX_l58) begin
      result_data_payload_fragment = raw_data_payload_fragment;
    end else begin
      result_data_payload_fragment = _zz_result_data_payload_fragment;
    end
  end

  always @(*) begin
    if(when_PhyTX_l58) begin
      raw_data_ready = result_data_ready;
    end else begin
      raw_data_ready = 1'b0;
    end
  end

  assign when_PhyTX_l70 = (counter == 4'b0000);
  always @(posedge clk) begin
    if(!resetn) begin
      emitCrc <= 1'b0;
      counter <= 4'b1111;
    end else begin
      if(when_PhyTX_l48) begin
        emitCrc <= 1'b1;
      end
      if(when_PhyTX_l48_1) begin
        emitCrc <= 1'b0;
      end
      if(when_PhyTX_l58) begin
        counter <= 4'b1111;
      end else begin
        if(when_PhyTX_l70) begin
          if(result_data_ready) begin
            emitCrc <= 1'b0;
          end
        end
        if(result_data_ready) begin
          counter <= (counter - 4'b0001);
        end
      end
    end
  end


endmodule

module TxCrcUnit (
  input               raw_data_valid,
  output reg          raw_data_ready,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output reg          result_data_valid,
  input               result_data_ready,
  output reg          result_data_payload_last,
  output reg [0:0]    result_data_payload_fragment,
  input               clk,
  input               resetn
);

  wire                crc_core_flush;
  wire       [23:0]   crc_core_result;
  wire       [23:0]   crc_core_resultNext;
  reg        [0:0]    _zz_result_data_payload_fragment;
  reg                 emitCrc;
  wire                raw_data_fire;
  wire                when_PhyTX_l48;
  wire                result_data_fire;
  wire                when_PhyTX_l48_1;
  reg        [4:0]    counter;
  wire                raw_data_fire_1;
  wire                result_data_fire_1;
  wire                when_PhyTX_l58;
  wire                when_PhyTX_l70;

  Crc crc_core (
    .flush         (crc_core_flush           ), //i
    .input_valid   (raw_data_fire_1          ), //i
    .input_payload (raw_data_payload_fragment), //i
    .result        (crc_core_result[23:0]    ), //o
    .resultNext    (crc_core_resultNext[23:0]), //o
    .clk           (clk                      ), //i
    .resetn        (resetn                   )  //i
  );
  always @(*) begin
    case(counter)
      5'b00000 : _zz_result_data_payload_fragment = crc_core_result[0 : 0];
      5'b00001 : _zz_result_data_payload_fragment = crc_core_result[1 : 1];
      5'b00010 : _zz_result_data_payload_fragment = crc_core_result[2 : 2];
      5'b00011 : _zz_result_data_payload_fragment = crc_core_result[3 : 3];
      5'b00100 : _zz_result_data_payload_fragment = crc_core_result[4 : 4];
      5'b00101 : _zz_result_data_payload_fragment = crc_core_result[5 : 5];
      5'b00110 : _zz_result_data_payload_fragment = crc_core_result[6 : 6];
      5'b00111 : _zz_result_data_payload_fragment = crc_core_result[7 : 7];
      5'b01000 : _zz_result_data_payload_fragment = crc_core_result[8 : 8];
      5'b01001 : _zz_result_data_payload_fragment = crc_core_result[9 : 9];
      5'b01010 : _zz_result_data_payload_fragment = crc_core_result[10 : 10];
      5'b01011 : _zz_result_data_payload_fragment = crc_core_result[11 : 11];
      5'b01100 : _zz_result_data_payload_fragment = crc_core_result[12 : 12];
      5'b01101 : _zz_result_data_payload_fragment = crc_core_result[13 : 13];
      5'b01110 : _zz_result_data_payload_fragment = crc_core_result[14 : 14];
      5'b01111 : _zz_result_data_payload_fragment = crc_core_result[15 : 15];
      5'b10000 : _zz_result_data_payload_fragment = crc_core_result[16 : 16];
      5'b10001 : _zz_result_data_payload_fragment = crc_core_result[17 : 17];
      5'b10010 : _zz_result_data_payload_fragment = crc_core_result[18 : 18];
      5'b10011 : _zz_result_data_payload_fragment = crc_core_result[19 : 19];
      5'b10100 : _zz_result_data_payload_fragment = crc_core_result[20 : 20];
      5'b10101 : _zz_result_data_payload_fragment = crc_core_result[21 : 21];
      5'b10110 : _zz_result_data_payload_fragment = crc_core_result[22 : 22];
      default : _zz_result_data_payload_fragment = crc_core_result[23 : 23];
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_PhyTX_l48 = (raw_data_fire && raw_data_payload_last);
  assign result_data_fire = (result_data_valid && result_data_ready);
  assign when_PhyTX_l48_1 = (result_data_fire && result_data_payload_last);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign result_data_fire_1 = (result_data_valid && result_data_ready);
  assign crc_core_flush = (result_data_fire_1 && result_data_payload_last);
  always @(*) begin
    result_data_payload_last = 1'b0;
    if(!when_PhyTX_l58) begin
      if(when_PhyTX_l70) begin
        result_data_payload_last = 1'b1;
      end
    end
  end

  assign when_PhyTX_l58 = (! emitCrc);
  always @(*) begin
    if(when_PhyTX_l58) begin
      result_data_valid = raw_data_valid;
    end else begin
      result_data_valid = 1'b1;
    end
  end

  always @(*) begin
    if(when_PhyTX_l58) begin
      result_data_payload_fragment = raw_data_payload_fragment;
    end else begin
      result_data_payload_fragment = _zz_result_data_payload_fragment;
    end
  end

  always @(*) begin
    if(when_PhyTX_l58) begin
      raw_data_ready = result_data_ready;
    end else begin
      raw_data_ready = 1'b0;
    end
  end

  assign when_PhyTX_l70 = (counter == 5'h0);
  always @(posedge clk) begin
    if(!resetn) begin
      emitCrc <= 1'b0;
      counter <= 5'h17;
    end else begin
      if(when_PhyTX_l48) begin
        emitCrc <= 1'b1;
      end
      if(when_PhyTX_l48_1) begin
        emitCrc <= 1'b0;
      end
      if(when_PhyTX_l58) begin
        counter <= 5'h17;
      end else begin
        if(when_PhyTX_l70) begin
          if(result_data_ready) begin
            emitCrc <= 1'b0;
          end
        end
        if(result_data_ready) begin
          counter <= (counter - 5'h01);
        end
      end
    end
  end


endmodule

module UnsignedDivider (
  input               flush,
  input               cmd_valid,
  output              cmd_ready,
  input      [19:0]   cmd_payload_numerator,
  input      [12:0]   cmd_payload_denominator,
  output              rsp_valid,
  input               rsp_ready,
  output     [19:0]   rsp_payload_quotient,
  output     [12:0]   rsp_payload_remainder,
  output              rsp_payload_error,
  input               clk,
  input               resetn
);

  wire       [4:0]    _zz__zz_3;
  wire       [0:0]    _zz__zz_3_1;
  wire       [13:0]   _zz__zz_rsp_payload_quotient_4;
  wire       [20:0]   _zz__zz_rsp_payload_quotient;
  reg        [1:0]    switch_UnsignedDivider_l92;
  reg                 _zz_cmd_ready;
  reg                 _zz_rsp_valid;
  reg                 _zz_1;
  reg                 _zz_2;
  reg        [4:0]    _zz_3;
  reg        [4:0]    _zz_4;
  wire                _zz_5;
  wire                _zz_6;
  reg        [19:0]   _zz_rsp_payload_quotient;
  reg        [12:0]   _zz_rsp_payload_quotient_1;
  reg        [12:0]   _zz_rsp_payload_quotient_2;
  wire       [13:0]   _zz_rsp_payload_quotient_3;
  wire       [13:0]   _zz_rsp_payload_quotient_4;
  wire                cmd_fire;
  wire                when_UnsignedDivider_l112;
  wire                rsp_fire;

  assign _zz__zz_3_1 = _zz_1;
  assign _zz__zz_3 = {4'd0, _zz__zz_3_1};
  assign _zz__zz_rsp_payload_quotient_4 = {1'd0, _zz_rsp_payload_quotient_1};
  assign _zz__zz_rsp_payload_quotient = {_zz_rsp_payload_quotient,(! _zz_rsp_payload_quotient_4[13])};
  always @(*) begin
    _zz_1 = 1'b0;
    case(switch_UnsignedDivider_l92)
      2'b00 : begin
      end
      2'b01 : begin
        _zz_1 = 1'b1;
      end
      2'b10 : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    _zz_2 = 1'b0;
    case(switch_UnsignedDivider_l92)
      2'b00 : begin
        if(cmd_fire) begin
          _zz_2 = 1'b1;
        end
      end
      2'b01 : begin
      end
      2'b10 : begin
      end
      default : begin
      end
    endcase
  end

  assign _zz_5 = (_zz_4 == 5'h13);
  assign _zz_6 = (_zz_5 && _zz_1);
  always @(*) begin
    if(_zz_6) begin
      _zz_3 = 5'h0;
    end else begin
      _zz_3 = (_zz_4 + _zz__zz_3);
    end
    if(_zz_2) begin
      _zz_3 = 5'h0;
    end
  end

  assign _zz_rsp_payload_quotient_3 = {_zz_rsp_payload_quotient_2,_zz_rsp_payload_quotient[19]};
  assign _zz_rsp_payload_quotient_4 = (_zz_rsp_payload_quotient_3 - _zz__zz_rsp_payload_quotient_4);
  assign cmd_ready = _zz_cmd_ready;
  assign rsp_valid = _zz_rsp_valid;
  assign rsp_payload_quotient = _zz_rsp_payload_quotient;
  assign rsp_payload_remainder = _zz_rsp_payload_quotient_2;
  assign rsp_payload_error = (_zz_rsp_payload_quotient_1 == 13'h0);
  assign cmd_fire = (cmd_valid && cmd_ready);
  assign when_UnsignedDivider_l112 = (! _zz_rsp_payload_quotient_4[13]);
  assign rsp_fire = (rsp_valid && rsp_ready);
  always @(posedge clk) begin
    if(!resetn) begin
      switch_UnsignedDivider_l92 <= 2'b00;
      _zz_cmd_ready <= 1'b0;
      _zz_rsp_valid <= 1'b0;
      _zz_4 <= 5'h0;
    end else begin
      _zz_4 <= _zz_3;
      case(switch_UnsignedDivider_l92)
        2'b00 : begin
          if(cmd_fire) begin
            switch_UnsignedDivider_l92 <= 2'b01;
            _zz_cmd_ready <= 1'b0;
          end else begin
            _zz_cmd_ready <= 1'b1;
          end
          _zz_rsp_valid <= 1'b0;
        end
        2'b01 : begin
          if(flush) begin
            switch_UnsignedDivider_l92 <= 2'b00;
            _zz_cmd_ready <= 1'b1;
            _zz_rsp_valid <= 1'b0;
          end else begin
            if(_zz_6) begin
              switch_UnsignedDivider_l92 <= 2'b10;
              _zz_rsp_valid <= 1'b1;
            end
          end
        end
        2'b10 : begin
          if(flush) begin
            switch_UnsignedDivider_l92 <= 2'b00;
            _zz_cmd_ready <= 1'b1;
            _zz_rsp_valid <= 1'b0;
          end else begin
            if(rsp_fire) begin
              _zz_rsp_valid <= 1'b0;
              _zz_cmd_ready <= 1'b1;
              switch_UnsignedDivider_l92 <= 2'b00;
            end
          end
        end
        default : begin
          switch_UnsignedDivider_l92 <= 2'b00;
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(switch_UnsignedDivider_l92)
      2'b00 : begin
        if(cmd_fire) begin
          _zz_rsp_payload_quotient_2 <= 13'h0;
          _zz_rsp_payload_quotient <= cmd_payload_numerator;
          _zz_rsp_payload_quotient_1 <= cmd_payload_denominator;
        end
      end
      2'b01 : begin
        _zz_rsp_payload_quotient <= _zz__zz_rsp_payload_quotient[19:0];
        if(when_UnsignedDivider_l112) begin
          _zz_rsp_payload_quotient_2 <= _zz_rsp_payload_quotient_4[12:0];
        end else begin
          _zz_rsp_payload_quotient_2 <= _zz_rsp_payload_quotient_3[12:0];
        end
      end
      2'b10 : begin
      end
      default : begin
      end
    endcase
  end


endmodule

module Crc_1 (
  input               flush,
  input               input_valid,
  input      [0:0]    input_payload,
  output     [15:0]   result,
  output     [15:0]   resultNext,
  input               clk,
  input               resetn
);

  wire       [15:0]   _zz_state_1;
  reg        [15:0]   state_1;
  reg        [15:0]   state;
  wire       [15:0]   stateXor;
  wire       [15:0]   accXor;

  assign _zz_state_1 = (state <<< 1);
  always @(*) begin
    state_1 = state;
    state_1 = (_zz_state_1 ^ ((input_payload[0] ^ state[15]) ? 16'h1021 : 16'h0));
  end

  assign stateXor = (state ^ 16'h0);
  assign accXor = (state_1 ^ 16'h0);
  assign result = stateXor;
  assign resultNext = accXor;
  always @(posedge clk) begin
    if(!resetn) begin
      state <= 16'h0;
    end else begin
      if(flush) begin
        state <= 16'h0;
      end else begin
        if(input_valid) begin
          state <= state_1;
        end
      end
    end
  end


endmodule

module Crc (
  input               flush,
  input               input_valid,
  input      [0:0]    input_payload,
  output     [23:0]   result,
  output     [23:0]   resultNext,
  input               clk,
  input               resetn
);

  wire       [23:0]   _zz_state_1;
  reg        [23:0]   state_1;
  reg        [23:0]   state;
  wire       [23:0]   stateXor;
  wire       [23:0]   accXor;

  assign _zz_state_1 = (state <<< 1);
  always @(*) begin
    state_1 = state;
    state_1 = (_zz_state_1 ^ ((input_payload[0] ^ state[23]) ? 24'h864cfb : 24'h0));
  end

  assign stateXor = (state ^ 24'h0);
  assign accXor = (state_1 ^ 24'h0);
  assign result = stateXor;
  assign resultNext = accXor;
  always @(posedge clk) begin
    if(!resetn) begin
      state <= 24'h0;
    end else begin
      if(flush) begin
        state <= 24'h0;
      end else begin
        if(input_valid) begin
          state <= state_1;
        end
      end
    end
  end


endmodule
