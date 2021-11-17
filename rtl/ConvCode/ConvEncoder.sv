// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : ConvEncoder
// Git hash  : 2ce930f6910cd2adedf6f3cae0cb3061d3a3ed6a



module ConvEncoder (
  input               tail_bits_valid,
  input      [6:0]    tail_bits_payload,
  input               raw_data_valid,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output              coded_data_valid,
  output              coded_data_payload_last,
  output     [1:0]    coded_data_payload_fragment,
  input               clk,
  input               resetn
);
  wire       [7:0]    _zz_r_enc_0;
  reg        [0:0]    raw_data_payload;
  reg                 raw_data_valid_1;
  reg                 raw_data_last;
  reg        [1:0]    coded_data;
  reg                 coded_data_valid_1;
  reg        [6:0]    r_enc_buf;
  wire       [6:0]    r_enc_0;
  wire       [0:0]    code_vec_0;
  wire       [0:0]    code_vec_1;
  reg                 raw_data_last_regNext;

  assign _zz_r_enc_0 = {raw_data_payload[0],r_enc_buf};
  assign r_enc_0 = _zz_r_enc_0[7 : 1];
  assign code_vec_0[0] = ((((r_enc_0[0] ^ r_enc_0[1]) ^ r_enc_0[3]) ^ r_enc_0[4]) ^ r_enc_0[6]);
  assign code_vec_1[0] = ((((r_enc_0[0] ^ r_enc_0[3]) ^ r_enc_0[4]) ^ r_enc_0[5]) ^ r_enc_0[6]);
  assign coded_data_payload_fragment = coded_data;
  assign coded_data_valid = coded_data_valid_1;
  assign coded_data_payload_last = raw_data_last_regNext;
  always @(posedge clk) begin
    raw_data_payload <= raw_data_payload_fragment;
    if(tail_bits_valid) begin
      r_enc_buf <= tail_bits_payload;
    end else begin
      if(raw_data_valid_1) begin
        r_enc_buf <= r_enc_0;
        coded_data <= {code_vec_0,code_vec_1};
      end
    end
  end

  always @(posedge clk) begin
    if(!resetn) begin
      raw_data_valid_1 <= 1'b0;
      raw_data_last <= 1'b0;
      coded_data_valid_1 <= 1'b0;
      raw_data_last_regNext <= 1'b0;
    end else begin
      raw_data_valid_1 <= raw_data_valid;
      raw_data_last <= raw_data_payload_last;
      if(!tail_bits_valid) begin
        if(raw_data_valid_1) begin
          coded_data_valid_1 <= 1'b1;
        end else begin
          coded_data_valid_1 <= 1'b0;
        end
      end
      raw_data_last_regNext <= raw_data_last;
    end
  end


endmodule
