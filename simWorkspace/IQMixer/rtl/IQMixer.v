// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : IQMixer
// Git hash  : 8ea3836c6991c66e54ff283e1ce84688f7fe9417



module IQMixer (
  input               base_iq_0_valid,
  input      [15:0]   base_iq_0_payload_cha_i,
  input      [15:0]   base_iq_0_payload_cha_q,
  input               carries_iq_valid,
  input      [15:0]   carries_iq_payload_cha_i,
  input      [15:0]   carries_iq_payload_cha_q,
  output              if_iq_0_valid,
  output     [31:0]   if_iq_0_payload,
  input               clk,
  input               reset
);
  wire                iQMixerCore_1_if_iq_valid;
  wire       [31:0]   iQMixerCore_1_if_iq_payload;

  IQMixerCore iQMixerCore_1 (
    .base_iq_valid               (base_iq_0_valid              ), //i
    .base_iq_payload_cha_i       (base_iq_0_payload_cha_i      ), //i
    .base_iq_payload_cha_q       (base_iq_0_payload_cha_q      ), //i
    .carrier_iq_valid            (carries_iq_valid             ), //i
    .carrier_iq_payload_cha_i    (carries_iq_payload_cha_i     ), //i
    .carrier_iq_payload_cha_q    (carries_iq_payload_cha_q     ), //i
    .if_iq_valid                 (iQMixerCore_1_if_iq_valid    ), //o
    .if_iq_payload               (iQMixerCore_1_if_iq_payload  ), //o
    .clk                         (clk                          ), //i
    .reset                       (reset                        )  //i
  );
  assign if_iq_0_valid = iQMixerCore_1_if_iq_valid;
  assign if_iq_0_payload = iQMixerCore_1_if_iq_payload;

endmodule

module IQMixerCore (
  input               base_iq_valid,
  input      [15:0]   base_iq_payload_cha_i,
  input      [15:0]   base_iq_payload_cha_q,
  input               carrier_iq_valid,
  input      [15:0]   carrier_iq_payload_cha_i,
  input      [15:0]   carrier_iq_payload_cha_q,
  output              if_iq_valid,
  output     [31:0]   if_iq_payload,
  input               clk,
  input               reset
);
  reg        [15:0]   base_i_data;
  reg        [15:0]   base_q_data;
  reg        [15:0]   carrier_i_data;
  reg        [15:0]   carrier_q_data;
  reg                 if_iq_valid_1;
  reg        [31:0]   if_i_data;
  reg        [31:0]   if_q_data;
  reg        [31:0]   if_iq_data;
  reg                 iq_en;

  assign if_iq_valid = if_iq_valid_1;
  assign if_iq_payload = if_iq_data;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      base_i_data <= 16'h0;
      base_q_data <= 16'h0;
      carrier_i_data <= 16'h0;
      carrier_q_data <= 16'h0;
      if_iq_valid_1 <= 1'b0;
      if_i_data <= 32'h0;
      if_q_data <= 32'h0;
      if_iq_data <= 32'h0;
      iq_en <= 1'b0;
    end else begin
      iq_en <= (base_iq_valid && carrier_iq_valid);
      if(base_iq_valid) begin
        base_i_data <= base_iq_payload_cha_i;
        base_q_data <= base_iq_payload_cha_q;
      end
      if(carrier_iq_valid) begin
        carrier_i_data <= carrier_iq_payload_cha_i;
        carrier_q_data <= carrier_iq_payload_cha_q;
      end
      if(iq_en) begin
        if_iq_valid_1 <= 1'b1;
        if_iq_data <= ($signed(if_i_data) + $signed(if_q_data));
        if_i_data <= ($signed(base_i_data) * $signed(carrier_i_data));
        if_q_data <= ($signed(base_q_data) * $signed(carrier_q_data));
      end else begin
        if_iq_valid_1 <= 1'b0;
        if_i_data <= 32'h0;
        if_q_data <= 32'h0;
      end
    end
  end


endmodule
