// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : MultiPuncturing
// Git hash  : 20f2bbecaafb9bca8a0b2f811067904083589e4b



module MultiPuncturing (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output              punched_data_valid,
  output              punched_data_payload_last,
  output     [15:0]   punched_data_payload_fragment,
  input      [0:0]    sel,
  input               clk,
  input               resetn
);
  wire       [15:0]   flowMux_1_inputs_1_payload_fragment;
  wire                streamDemux_1_io_input_ready;
  wire                streamDemux_1_io_outputs_0_valid;
  wire                streamDemux_1_io_outputs_0_payload_last;
  wire       [15:0]   streamDemux_1_io_outputs_0_payload_fragment;
  wire                streamDemux_1_io_outputs_1_valid;
  wire                streamDemux_1_io_outputs_1_payload_last;
  wire       [15:0]   streamDemux_1_io_outputs_1_payload_fragment;
  wire                puncturing_2_raw_data_ready;
  wire                puncturing_2_punched_data_valid;
  wire                puncturing_2_punched_data_payload_last;
  wire       [15:0]   puncturing_2_punched_data_payload_fragment;
  wire                puncturing_3_raw_data_ready;
  wire                puncturing_3_punched_data_valid;
  wire                puncturing_3_punched_data_payload_last;
  wire       [11:0]   puncturing_3_punched_data_payload_fragment;
  wire                flowMux_1_output_valid;
  wire                flowMux_1_output_payload_last;
  wire       [15:0]   flowMux_1_output_payload_fragment;
  wire                _zz_inputs_0_valid;
  wire                _zz_inputs_0_payload_last;
  wire                _zz_inputs_1_valid;
  wire                _zz_inputs_1_payload_last;

  StreamDemux streamDemux_1 (
    .io_select                        (sel                                          ), //i
    .io_input_valid                   (raw_data_valid                               ), //i
    .io_input_ready                   (streamDemux_1_io_input_ready                 ), //o
    .io_input_payload_last            (raw_data_payload_last                        ), //i
    .io_input_payload_fragment        (raw_data_payload_fragment                    ), //i
    .io_outputs_0_valid               (streamDemux_1_io_outputs_0_valid             ), //o
    .io_outputs_0_ready               (puncturing_2_raw_data_ready                  ), //i
    .io_outputs_0_payload_last        (streamDemux_1_io_outputs_0_payload_last      ), //o
    .io_outputs_0_payload_fragment    (streamDemux_1_io_outputs_0_payload_fragment  ), //o
    .io_outputs_1_valid               (streamDemux_1_io_outputs_1_valid             ), //o
    .io_outputs_1_ready               (puncturing_3_raw_data_ready                  ), //i
    .io_outputs_1_payload_last        (streamDemux_1_io_outputs_1_payload_last      ), //o
    .io_outputs_1_payload_fragment    (streamDemux_1_io_outputs_1_payload_fragment  )  //o
  );
  Puncturing puncturing_2 (
    .raw_data_valid                   (streamDemux_1_io_outputs_0_valid             ), //i
    .raw_data_ready                   (puncturing_2_raw_data_ready                  ), //o
    .raw_data_payload_last            (streamDemux_1_io_outputs_0_payload_last      ), //i
    .raw_data_payload_fragment        (streamDemux_1_io_outputs_0_payload_fragment  ), //i
    .punched_data_valid               (puncturing_2_punched_data_valid              ), //o
    .punched_data_payload_last        (puncturing_2_punched_data_payload_last       ), //o
    .punched_data_payload_fragment    (puncturing_2_punched_data_payload_fragment   ), //o
    .clk                              (clk                                          ), //i
    .resetn                           (resetn                                       )  //i
  );
  Puncturing_1 puncturing_3 (
    .raw_data_valid                   (streamDemux_1_io_outputs_1_valid             ), //i
    .raw_data_ready                   (puncturing_3_raw_data_ready                  ), //o
    .raw_data_payload_last            (streamDemux_1_io_outputs_1_payload_last      ), //i
    .raw_data_payload_fragment        (streamDemux_1_io_outputs_1_payload_fragment  ), //i
    .punched_data_valid               (puncturing_3_punched_data_valid              ), //o
    .punched_data_payload_last        (puncturing_3_punched_data_payload_last       ), //o
    .punched_data_payload_fragment    (puncturing_3_punched_data_payload_fragment   ), //o
    .clk                              (clk                                          ), //i
    .resetn                           (resetn                                       )  //i
  );
  FlowMux flowMux_1 (
    .inputs_0_valid               (_zz_inputs_0_valid                          ), //i
    .inputs_0_payload_last        (_zz_inputs_0_payload_last                   ), //i
    .inputs_0_payload_fragment    (puncturing_2_punched_data_payload_fragment  ), //i
    .inputs_1_valid               (_zz_inputs_1_valid                          ), //i
    .inputs_1_payload_last        (_zz_inputs_1_payload_last                   ), //i
    .inputs_1_payload_fragment    (flowMux_1_inputs_1_payload_fragment         ), //i
    .select_1                     (sel                                         ), //i
    .output_valid                 (flowMux_1_output_valid                      ), //o
    .output_payload_last          (flowMux_1_output_payload_last               ), //o
    .output_payload_fragment      (flowMux_1_output_payload_fragment           )  //o
  );
  assign raw_data_ready = streamDemux_1_io_input_ready;
  assign _zz_inputs_0_valid = puncturing_2_punched_data_valid;
  assign _zz_inputs_0_payload_last = puncturing_2_punched_data_payload_last;
  assign _zz_inputs_1_valid = puncturing_3_punched_data_valid;
  assign _zz_inputs_1_payload_last = puncturing_3_punched_data_payload_last;
  assign flowMux_1_inputs_1_payload_fragment = {4'd0, puncturing_3_punched_data_payload_fragment};
  assign punched_data_valid = flowMux_1_output_valid;
  assign punched_data_payload_last = flowMux_1_output_payload_last;
  assign punched_data_payload_fragment = flowMux_1_output_payload_fragment;

endmodule

module FlowMux (
  input               inputs_0_valid,
  input               inputs_0_payload_last,
  input      [15:0]   inputs_0_payload_fragment,
  input               inputs_1_valid,
  input               inputs_1_payload_last,
  input      [15:0]   inputs_1_payload_fragment,
  input      [0:0]    select_1,
  output              output_valid,
  output              output_payload_last,
  output     [15:0]   output_payload_fragment
);
  reg                 _zz_output_valid;
  reg                 _zz_output_payload_last;
  reg        [15:0]   _zz_output_payload_fragment;

  always @(*) begin
    case(select_1)
      1'b0 : begin
        _zz_output_valid = inputs_0_valid;
        _zz_output_payload_last = inputs_0_payload_last;
        _zz_output_payload_fragment = inputs_0_payload_fragment;
      end
      default : begin
        _zz_output_valid = inputs_1_valid;
        _zz_output_payload_last = inputs_1_payload_last;
        _zz_output_payload_fragment = inputs_1_payload_fragment;
      end
    endcase
  end

  assign output_valid = _zz_output_valid;
  assign output_payload_last = _zz_output_payload_last;
  assign output_payload_fragment = _zz_output_payload_fragment;

endmodule

module Puncturing_1 (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output              punched_data_valid,
  output              punched_data_payload_last,
  output     [11:0]   punched_data_payload_fragment,
  input               clk,
  input               resetn
);
  wire                _zz_punched_data_payload_fragment;
  wire       [0:0]    _zz_punched_data_payload_fragment_1;
  wire       [0:0]    _zz_punched_data_payload_fragment_2;
  reg        [15:0]   raw_data_fragment;
  reg                 raw_data_valid_1;
  reg                 raw_data_last;

  assign _zz_punched_data_payload_fragment = raw_data_fragment[9];
  assign _zz_punched_data_payload_fragment_1 = raw_data_fragment[1];
  assign _zz_punched_data_payload_fragment_2 = raw_data_fragment[8];
  assign raw_data_ready = 1'b1;
  assign punched_data_valid = raw_data_valid_1;
  assign punched_data_payload_last = raw_data_last;
  assign punched_data_payload_fragment = {raw_data_fragment[15],{raw_data_fragment[7],{raw_data_fragment[14],{raw_data_fragment[13],{raw_data_fragment[5],{raw_data_fragment[12],{raw_data_fragment[11],{raw_data_fragment[3],{raw_data_fragment[10],{_zz_punched_data_payload_fragment,{_zz_punched_data_payload_fragment_1,_zz_punched_data_payload_fragment_2}}}}}}}}}}};
  always @(posedge clk) begin
    raw_data_fragment <= raw_data_payload_fragment;
  end

  always @(posedge clk) begin
    if(!resetn) begin
      raw_data_valid_1 <= 1'b0;
      raw_data_last <= 1'b0;
    end else begin
      raw_data_valid_1 <= raw_data_valid;
      raw_data_last <= raw_data_payload_last;
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
  input               resetn
);
  wire                _zz_punched_data_payload_fragment;
  wire       [0:0]    _zz_punched_data_payload_fragment_1;
  wire       [4:0]    _zz_punched_data_payload_fragment_2;
  reg        [15:0]   raw_data_fragment;
  reg                 raw_data_valid_1;
  reg                 raw_data_last;

  assign _zz_punched_data_payload_fragment = raw_data_fragment[3];
  assign _zz_punched_data_payload_fragment_1 = raw_data_fragment[10];
  assign _zz_punched_data_payload_fragment_2 = {raw_data_fragment[2],{raw_data_fragment[9],{raw_data_fragment[1],{raw_data_fragment[8],raw_data_fragment[0]}}}};
  assign raw_data_ready = 1'b1;
  assign punched_data_valid = raw_data_valid_1;
  assign punched_data_payload_last = raw_data_last;
  assign punched_data_payload_fragment = {raw_data_fragment[15],{raw_data_fragment[7],{raw_data_fragment[14],{raw_data_fragment[6],{raw_data_fragment[13],{raw_data_fragment[5],{raw_data_fragment[12],{raw_data_fragment[4],{raw_data_fragment[11],{_zz_punched_data_payload_fragment,{_zz_punched_data_payload_fragment_1,_zz_punched_data_payload_fragment_2}}}}}}}}}}};
  always @(posedge clk) begin
    raw_data_fragment <= raw_data_payload_fragment;
  end

  always @(posedge clk) begin
    if(!resetn) begin
      raw_data_valid_1 <= 1'b0;
      raw_data_last <= 1'b0;
    end else begin
      raw_data_valid_1 <= raw_data_valid;
      raw_data_last <= raw_data_payload_last;
    end
  end


endmodule

module StreamDemux (
  input      [0:0]    io_select,
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [15:0]   io_input_payload_fragment,
  output reg          io_outputs_0_valid,
  input               io_outputs_0_ready,
  output              io_outputs_0_payload_last,
  output     [15:0]   io_outputs_0_payload_fragment,
  output reg          io_outputs_1_valid,
  input               io_outputs_1_ready,
  output              io_outputs_1_payload_last,
  output     [15:0]   io_outputs_1_payload_fragment
);
  wire                when_Stream_l745;
  wire                when_Stream_l745_1;

  always @(*) begin
    io_input_ready = 1'b0;
    if(!when_Stream_l745) begin
      io_input_ready = io_outputs_0_ready;
    end
    if(!when_Stream_l745_1) begin
      io_input_ready = io_outputs_1_ready;
    end
  end

  assign io_outputs_0_payload_last = io_input_payload_last;
  assign io_outputs_0_payload_fragment = io_input_payload_fragment;
  assign when_Stream_l745 = (1'b0 != io_select);
  always @(*) begin
    if(when_Stream_l745) begin
      io_outputs_0_valid = 1'b0;
    end else begin
      io_outputs_0_valid = io_input_valid;
    end
  end

  assign io_outputs_1_payload_last = io_input_payload_last;
  assign io_outputs_1_payload_fragment = io_input_payload_fragment;
  assign when_Stream_l745_1 = (1'b1 != io_select);
  always @(*) begin
    if(when_Stream_l745_1) begin
      io_outputs_1_valid = 1'b0;
    end else begin
      io_outputs_1_valid = io_input_valid;
    end
  end


endmodule
