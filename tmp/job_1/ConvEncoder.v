// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : ConvEncoder
// Git hash  : 042e119db55a8dee1226da860b3f6745fa521a3f



module ConvEncoder (
  input               tail_bits_valid,
  input      [2:0]    tail_bits_payload,
  input               raw_data_valid,
  input      [6:0]    raw_data_payload,
  output              coded_data_valid,
  output     [13:0]   coded_data_payload,
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
  reg        [6:0]    raw_data_payload_1;
  reg                 raw_data_valid_1;
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
  wire       [2:0]    _zz_code_vec_0;
  wire       [2:0]    _zz_code_vec_0_1;
  wire       [2:0]    _zz_code_vec_0_2;
  wire       [2:0]    _zz_code_vec_0_3;
  wire       [2:0]    _zz_code_vec_0_4;
  wire       [2:0]    _zz_code_vec_0_5;
  wire       [2:0]    _zz_code_vec_0_6;
  wire       [2:0]    _zz_code_vec_1;
  wire       [2:0]    _zz_code_vec_1_1;
  wire       [2:0]    _zz_code_vec_1_2;
  wire       [2:0]    _zz_code_vec_1_3;
  wire       [2:0]    _zz_code_vec_1_4;
  wire       [2:0]    _zz_code_vec_1_5;
  wire       [2:0]    _zz_code_vec_1_6;

  assign _zz_r_enc_0 = {raw_data_payload_1[0],r_enc_buf};
  assign _zz_r_enc_1 = {raw_data_payload_1[1],r_enc_0};
  assign _zz_r_enc_2 = {raw_data_payload_1[2],r_enc_1};
  assign _zz_r_enc_3 = {raw_data_payload_1[3],r_enc_2};
  assign _zz_r_enc_4 = {raw_data_payload_1[4],r_enc_3};
  assign _zz_r_enc_5 = {raw_data_payload_1[5],r_enc_4};
  assign _zz_r_enc_6 = {raw_data_payload_1[6],r_enc_5};
  assign r_enc_0 = _zz_r_enc_0[3 : 1];
  assign r_enc_1 = _zz_r_enc_1[3 : 1];
  assign r_enc_2 = _zz_r_enc_2[3 : 1];
  assign r_enc_3 = _zz_r_enc_3[3 : 1];
  assign r_enc_4 = _zz_r_enc_4[3 : 1];
  assign r_enc_5 = _zz_r_enc_5[3 : 1];
  assign r_enc_6 = _zz_r_enc_6[3 : 1];
  assign _zz_code_vec_0 = (r_enc_0 & 3'b111);
  always @(*) begin
    code_vec_0[0] = ((_zz_code_vec_0[0] ^ _zz_code_vec_0[1]) ^ _zz_code_vec_0[2]);
    code_vec_0[1] = ((_zz_code_vec_0_1[0] ^ _zz_code_vec_0_1[1]) ^ _zz_code_vec_0_1[2]);
    code_vec_0[2] = ((_zz_code_vec_0_2[0] ^ _zz_code_vec_0_2[1]) ^ _zz_code_vec_0_2[2]);
    code_vec_0[3] = ((_zz_code_vec_0_3[0] ^ _zz_code_vec_0_3[1]) ^ _zz_code_vec_0_3[2]);
    code_vec_0[4] = ((_zz_code_vec_0_4[0] ^ _zz_code_vec_0_4[1]) ^ _zz_code_vec_0_4[2]);
    code_vec_0[5] = ((_zz_code_vec_0_5[0] ^ _zz_code_vec_0_5[1]) ^ _zz_code_vec_0_5[2]);
    code_vec_0[6] = ((_zz_code_vec_0_6[0] ^ _zz_code_vec_0_6[1]) ^ _zz_code_vec_0_6[2]);
  end

  assign _zz_code_vec_0_1 = (r_enc_1 & 3'b111);
  assign _zz_code_vec_0_2 = (r_enc_2 & 3'b111);
  assign _zz_code_vec_0_3 = (r_enc_3 & 3'b111);
  assign _zz_code_vec_0_4 = (r_enc_4 & 3'b111);
  assign _zz_code_vec_0_5 = (r_enc_5 & 3'b111);
  assign _zz_code_vec_0_6 = (r_enc_6 & 3'b111);
  assign _zz_code_vec_1 = (r_enc_0 & 3'b101);
  always @(*) begin
    code_vec_1[0] = ((_zz_code_vec_1[0] ^ _zz_code_vec_1[1]) ^ _zz_code_vec_1[2]);
    code_vec_1[1] = ((_zz_code_vec_1_1[0] ^ _zz_code_vec_1_1[1]) ^ _zz_code_vec_1_1[2]);
    code_vec_1[2] = ((_zz_code_vec_1_2[0] ^ _zz_code_vec_1_2[1]) ^ _zz_code_vec_1_2[2]);
    code_vec_1[3] = ((_zz_code_vec_1_3[0] ^ _zz_code_vec_1_3[1]) ^ _zz_code_vec_1_3[2]);
    code_vec_1[4] = ((_zz_code_vec_1_4[0] ^ _zz_code_vec_1_4[1]) ^ _zz_code_vec_1_4[2]);
    code_vec_1[5] = ((_zz_code_vec_1_5[0] ^ _zz_code_vec_1_5[1]) ^ _zz_code_vec_1_5[2]);
    code_vec_1[6] = ((_zz_code_vec_1_6[0] ^ _zz_code_vec_1_6[1]) ^ _zz_code_vec_1_6[2]);
  end

  assign _zz_code_vec_1_1 = (r_enc_1 & 3'b101);
  assign _zz_code_vec_1_2 = (r_enc_2 & 3'b101);
  assign _zz_code_vec_1_3 = (r_enc_3 & 3'b101);
  assign _zz_code_vec_1_4 = (r_enc_4 & 3'b101);
  assign _zz_code_vec_1_5 = (r_enc_5 & 3'b101);
  assign _zz_code_vec_1_6 = (r_enc_6 & 3'b101);
  assign coded_data_payload = coded_data;
  assign coded_data_valid = coded_data_valid_1;
  always @(posedge clk) begin
    raw_data_payload_1 <= raw_data_payload;
    raw_data_valid_1 <= raw_data_valid;
    if(tail_bits_valid) begin
      r_enc_buf <= tail_bits_payload;
    end else begin
      if(raw_data_valid_1) begin
        r_enc_buf <= r_enc_6;
        coded_data <= {code_vec_0,code_vec_1};
      end
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      coded_data_valid_1 <= 1'b0;
    end else begin
      if(!tail_bits_valid) begin
        if(raw_data_valid_1) begin
          coded_data_valid_1 <= 1'b1;
        end else begin
          coded_data_valid_1 <= 1'b0;
        end
      end
    end
  end


endmodule
