// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : ConvEncoder
// Git hash  : d47a2b4b2826148d75a008bb36a10246b9e9f377

`timescale 1ns/1ps

module ConvEncoder (
  input               tail_bits_valid,
  input      [2:0]    tail_bits_payload,
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [6:0]    raw_data_payload_fragment,
  output              coded_data_valid,
  output              coded_data_payload_last,
  output     [13:0]   coded_data_payload_fragment,
  input               clk,
  input               reset
);

  wire       [3:0]    _zz_r_enc_0;
  wire       [3:0]    _zz_r_enc_1;
  wire       [3:0]    _zz_r_enc_2;
  wire       [3:0]    _zz_r_enc_3;
  wire       [3:0]    _zz_r_enc_4;
  wire       [3:0]    _zz_r_enc_5;
  wire       [3:0]    _zz_r_enc_6;
  reg        [13:0]   coded_data;
  reg                 coded_data_valid_1;
  reg        [2:0]    r_enc_buf;
  wire       [2:0]    r_enc_0;
  wire       [2:0]    r_enc_1;
  wire       [2:0]    r_enc_2;
  wire       [2:0]    r_enc_3;
  wire       [2:0]    r_enc_4;
  wire       [2:0]    r_enc_5;
  wire       [2:0]    r_enc_6;
  reg        [6:0]    code_vec_0;
  reg        [6:0]    code_vec_1;
  wire                raw_data_fire;
  reg                 raw_data_payload_last_regNext;

  assign _zz_r_enc_0 = {raw_data_payload_fragment[0],r_enc_buf};
  assign _zz_r_enc_1 = {raw_data_payload_fragment[1],r_enc_0};
  assign _zz_r_enc_2 = {raw_data_payload_fragment[2],r_enc_1};
  assign _zz_r_enc_3 = {raw_data_payload_fragment[3],r_enc_2};
  assign _zz_r_enc_4 = {raw_data_payload_fragment[4],r_enc_3};
  assign _zz_r_enc_5 = {raw_data_payload_fragment[5],r_enc_4};
  assign _zz_r_enc_6 = {raw_data_payload_fragment[6],r_enc_5};
  assign r_enc_0 = _zz_r_enc_0[3 : 1];
  assign r_enc_1 = _zz_r_enc_1[3 : 1];
  assign r_enc_2 = _zz_r_enc_2[3 : 1];
  assign r_enc_3 = _zz_r_enc_3[3 : 1];
  assign r_enc_4 = _zz_r_enc_4[3 : 1];
  assign r_enc_5 = _zz_r_enc_5[3 : 1];
  assign r_enc_6 = _zz_r_enc_6[3 : 1];
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign raw_data_ready = (! tail_bits_valid);
  always @(*) begin
    code_vec_0[0] = ((r_enc_0[0] ^ r_enc_0[1]) ^ r_enc_0[2]);
    code_vec_0[1] = ((r_enc_1[0] ^ r_enc_1[1]) ^ r_enc_1[2]);
    code_vec_0[2] = ((r_enc_2[0] ^ r_enc_2[1]) ^ r_enc_2[2]);
    code_vec_0[3] = ((r_enc_3[0] ^ r_enc_3[1]) ^ r_enc_3[2]);
    code_vec_0[4] = ((r_enc_4[0] ^ r_enc_4[1]) ^ r_enc_4[2]);
    code_vec_0[5] = ((r_enc_5[0] ^ r_enc_5[1]) ^ r_enc_5[2]);
    code_vec_0[6] = ((r_enc_6[0] ^ r_enc_6[1]) ^ r_enc_6[2]);
  end

  always @(*) begin
    code_vec_1[0] = (r_enc_0[0] ^ r_enc_0[2]);
    code_vec_1[1] = (r_enc_1[0] ^ r_enc_1[2]);
    code_vec_1[2] = (r_enc_2[0] ^ r_enc_2[2]);
    code_vec_1[3] = (r_enc_3[0] ^ r_enc_3[2]);
    code_vec_1[4] = (r_enc_4[0] ^ r_enc_4[2]);
    code_vec_1[5] = (r_enc_5[0] ^ r_enc_5[2]);
    code_vec_1[6] = (r_enc_6[0] ^ r_enc_6[2]);
  end

  assign coded_data_payload_fragment = coded_data;
  assign coded_data_valid = coded_data_valid_1;
  assign coded_data_payload_last = raw_data_payload_last_regNext;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      coded_data_valid_1 <= 1'b0;
      r_enc_buf <= 3'b000;
      raw_data_payload_last_regNext <= 1'b0;
    end else begin
      if(tail_bits_valid) begin
        r_enc_buf <= tail_bits_payload;
        coded_data_valid_1 <= 1'b0;
      end else begin
        if(raw_data_fire) begin
          r_enc_buf <= r_enc_6;
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
