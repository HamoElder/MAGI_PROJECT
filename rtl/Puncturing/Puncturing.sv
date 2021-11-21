// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Puncturing
// Git hash  : 20f2bbecaafb9bca8a0b2f811067904083589e4b



module Puncturing (
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
