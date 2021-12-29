// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : CDMA
// Git hash  : 29da342c555586b76586cf26611dd22f432165eb



module CDMA (
  input               w_en,
  input      [31:0]   w_addr,
  input      [7:0]    w_data,
  input               clc,
  input      [2:0]    cnt_limit,
  input               base_iq_valid,
  input      [15:0]   base_iq_payload_cha_i,
  input      [15:0]   base_iq_payload_cha_q,
  output              mod_iq_0_valid,
  output     [15:0]   mod_iq_0_payload_cha_i,
  output     [15:0]   mod_iq_0_payload_cha_q,
  output              mod_iq_1_valid,
  output     [15:0]   mod_iq_1_payload_cha_i,
  output     [15:0]   mod_iq_1_payload_cha_q,
  output              mod_iq_2_valid,
  output     [15:0]   mod_iq_2_payload_cha_i,
  output     [15:0]   mod_iq_2_payload_cha_q,
  output              mod_iq_3_valid,
  output     [15:0]   mod_iq_3_payload_cha_i,
  output     [15:0]   mod_iq_3_payload_cha_q,
  output              mod_iq_4_valid,
  output     [15:0]   mod_iq_4_payload_cha_i,
  output     [15:0]   mod_iq_4_payload_cha_q,
  output              mod_iq_5_valid,
  output     [15:0]   mod_iq_5_payload_cha_i,
  output     [15:0]   mod_iq_5_payload_cha_q,
  output              mod_iq_6_valid,
  output     [15:0]   mod_iq_6_payload_cha_i,
  output     [15:0]   mod_iq_6_payload_cha_q,
  output              mod_iq_7_valid,
  output     [15:0]   mod_iq_7_payload_cha_i,
  output     [15:0]   mod_iq_7_payload_cha_q,
  input               clk,
  input               resetn
);
  wire                computeUnit_8_code;
  wire                computeUnit_9_code;
  wire                computeUnit_10_code;
  wire                computeUnit_11_code;
  wire                computeUnit_12_code;
  wire                computeUnit_13_code;
  wire                computeUnit_14_code;
  wire                computeUnit_15_code;
  wire       [7:0]    _zz_code_map_port0;
  wire       [7:0]    _zz_code_map_port1;
  wire       [7:0]    _zz_code_map_port2;
  wire       [7:0]    _zz_code_map_port3;
  wire       [7:0]    _zz_code_map_port4;
  wire       [7:0]    _zz_code_map_port5;
  wire       [7:0]    _zz_code_map_port6;
  wire       [7:0]    _zz_code_map_port7;
  wire                computeUnit_8_mod_iq_valid;
  wire       [15:0]   computeUnit_8_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_8_mod_iq_payload_cha_q;
  wire                computeUnit_9_mod_iq_valid;
  wire       [15:0]   computeUnit_9_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_9_mod_iq_payload_cha_q;
  wire                computeUnit_10_mod_iq_valid;
  wire       [15:0]   computeUnit_10_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_10_mod_iq_payload_cha_q;
  wire                computeUnit_11_mod_iq_valid;
  wire       [15:0]   computeUnit_11_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_11_mod_iq_payload_cha_q;
  wire                computeUnit_12_mod_iq_valid;
  wire       [15:0]   computeUnit_12_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_12_mod_iq_payload_cha_q;
  wire                computeUnit_13_mod_iq_valid;
  wire       [15:0]   computeUnit_13_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_13_mod_iq_payload_cha_q;
  wire                computeUnit_14_mod_iq_valid;
  wire       [15:0]   computeUnit_14_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_14_mod_iq_payload_cha_q;
  wire                computeUnit_15_mod_iq_valid;
  wire       [15:0]   computeUnit_15_mod_iq_payload_cha_i;
  wire       [15:0]   computeUnit_15_mod_iq_payload_cha_q;
  wire       [2:0]    _zz_cnt;
  wire       [2:0]    _zz_code_map_port;
  reg                 _zz_1;
  reg        [2:0]    cnt;
  (* ram_style = "distributed" *) reg [7:0] code_map [0:7];

  assign _zz_cnt = (cnt + 3'b001);
  assign _zz_code_map_port = w_addr[2:0];
  assign _zz_code_map_port0 = code_map[cnt];
  assign _zz_code_map_port1 = code_map[cnt];
  assign _zz_code_map_port2 = code_map[cnt];
  assign _zz_code_map_port3 = code_map[cnt];
  assign _zz_code_map_port4 = code_map[cnt];
  assign _zz_code_map_port5 = code_map[cnt];
  assign _zz_code_map_port6 = code_map[cnt];
  assign _zz_code_map_port7 = code_map[cnt];
  always @(posedge clk) begin
    if(_zz_1) begin
      code_map[_zz_code_map_port] <= w_data;
    end
  end

  ComputeUnit computeUnit_8 (
    .code                     (computeUnit_8_code                  ), //i
    .base_iq_valid            (base_iq_valid                       ), //i
    .base_iq_payload_cha_i    (base_iq_payload_cha_i               ), //i
    .base_iq_payload_cha_q    (base_iq_payload_cha_q               ), //i
    .mod_iq_valid             (computeUnit_8_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_8_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_8_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                 ), //i
    .resetn                   (resetn                              )  //i
  );
  ComputeUnit computeUnit_9 (
    .code                     (computeUnit_9_code                  ), //i
    .base_iq_valid            (base_iq_valid                       ), //i
    .base_iq_payload_cha_i    (base_iq_payload_cha_i               ), //i
    .base_iq_payload_cha_q    (base_iq_payload_cha_q               ), //i
    .mod_iq_valid             (computeUnit_9_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_9_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_9_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                 ), //i
    .resetn                   (resetn                              )  //i
  );
  ComputeUnit computeUnit_10 (
    .code                     (computeUnit_10_code                  ), //i
    .base_iq_valid            (base_iq_valid                        ), //i
    .base_iq_payload_cha_i    (base_iq_payload_cha_i                ), //i
    .base_iq_payload_cha_q    (base_iq_payload_cha_q                ), //i
    .mod_iq_valid             (computeUnit_10_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_10_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_10_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                  ), //i
    .resetn                   (resetn                               )  //i
  );
  ComputeUnit computeUnit_11 (
    .code                     (computeUnit_11_code                  ), //i
    .base_iq_valid            (base_iq_valid                        ), //i
    .base_iq_payload_cha_i    (base_iq_payload_cha_i                ), //i
    .base_iq_payload_cha_q    (base_iq_payload_cha_q                ), //i
    .mod_iq_valid             (computeUnit_11_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_11_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_11_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                  ), //i
    .resetn                   (resetn                               )  //i
  );
  ComputeUnit computeUnit_12 (
    .code                     (computeUnit_12_code                  ), //i
    .base_iq_valid            (base_iq_valid                        ), //i
    .base_iq_payload_cha_i    (base_iq_payload_cha_i                ), //i
    .base_iq_payload_cha_q    (base_iq_payload_cha_q                ), //i
    .mod_iq_valid             (computeUnit_12_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_12_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_12_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                  ), //i
    .resetn                   (resetn                               )  //i
  );
  ComputeUnit computeUnit_13 (
    .code                     (computeUnit_13_code                  ), //i
    .base_iq_valid            (base_iq_valid                        ), //i
    .base_iq_payload_cha_i    (base_iq_payload_cha_i                ), //i
    .base_iq_payload_cha_q    (base_iq_payload_cha_q                ), //i
    .mod_iq_valid             (computeUnit_13_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_13_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_13_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                  ), //i
    .resetn                   (resetn                               )  //i
  );
  ComputeUnit computeUnit_14 (
    .code                     (computeUnit_14_code                  ), //i
    .base_iq_valid            (base_iq_valid                        ), //i
    .base_iq_payload_cha_i    (base_iq_payload_cha_i                ), //i
    .base_iq_payload_cha_q    (base_iq_payload_cha_q                ), //i
    .mod_iq_valid             (computeUnit_14_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_14_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_14_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                  ), //i
    .resetn                   (resetn                               )  //i
  );
  ComputeUnit computeUnit_15 (
    .code                     (computeUnit_15_code                  ), //i
    .base_iq_valid            (base_iq_valid                        ), //i
    .base_iq_payload_cha_i    (base_iq_payload_cha_i                ), //i
    .base_iq_payload_cha_q    (base_iq_payload_cha_q                ), //i
    .mod_iq_valid             (computeUnit_15_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_15_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_15_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                  ), //i
    .resetn                   (resetn                               )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(w_en) begin
      _zz_1 = 1'b1;
    end
  end

  assign computeUnit_8_code = _zz_code_map_port0[0];
  assign mod_iq_0_valid = computeUnit_8_mod_iq_valid;
  assign mod_iq_0_payload_cha_i = computeUnit_8_mod_iq_payload_cha_i;
  assign mod_iq_0_payload_cha_q = computeUnit_8_mod_iq_payload_cha_q;
  assign computeUnit_9_code = _zz_code_map_port1[1];
  assign mod_iq_1_valid = computeUnit_9_mod_iq_valid;
  assign mod_iq_1_payload_cha_i = computeUnit_9_mod_iq_payload_cha_i;
  assign mod_iq_1_payload_cha_q = computeUnit_9_mod_iq_payload_cha_q;
  assign computeUnit_10_code = _zz_code_map_port2[2];
  assign mod_iq_2_valid = computeUnit_10_mod_iq_valid;
  assign mod_iq_2_payload_cha_i = computeUnit_10_mod_iq_payload_cha_i;
  assign mod_iq_2_payload_cha_q = computeUnit_10_mod_iq_payload_cha_q;
  assign computeUnit_11_code = _zz_code_map_port3[3];
  assign mod_iq_3_valid = computeUnit_11_mod_iq_valid;
  assign mod_iq_3_payload_cha_i = computeUnit_11_mod_iq_payload_cha_i;
  assign mod_iq_3_payload_cha_q = computeUnit_11_mod_iq_payload_cha_q;
  assign computeUnit_12_code = _zz_code_map_port4[4];
  assign mod_iq_4_valid = computeUnit_12_mod_iq_valid;
  assign mod_iq_4_payload_cha_i = computeUnit_12_mod_iq_payload_cha_i;
  assign mod_iq_4_payload_cha_q = computeUnit_12_mod_iq_payload_cha_q;
  assign computeUnit_13_code = _zz_code_map_port5[5];
  assign mod_iq_5_valid = computeUnit_13_mod_iq_valid;
  assign mod_iq_5_payload_cha_i = computeUnit_13_mod_iq_payload_cha_i;
  assign mod_iq_5_payload_cha_q = computeUnit_13_mod_iq_payload_cha_q;
  assign computeUnit_14_code = _zz_code_map_port6[6];
  assign mod_iq_6_valid = computeUnit_14_mod_iq_valid;
  assign mod_iq_6_payload_cha_i = computeUnit_14_mod_iq_payload_cha_i;
  assign mod_iq_6_payload_cha_q = computeUnit_14_mod_iq_payload_cha_q;
  assign computeUnit_15_code = _zz_code_map_port7[7];
  assign mod_iq_7_valid = computeUnit_15_mod_iq_valid;
  assign mod_iq_7_payload_cha_i = computeUnit_15_mod_iq_payload_cha_i;
  assign mod_iq_7_payload_cha_q = computeUnit_15_mod_iq_payload_cha_q;
  always @(posedge clk) begin
    if(!resetn) begin
      cnt <= 3'b000;
    end else begin
      if(clc) begin
        cnt <= 3'b000;
      end else begin
        if(base_iq_valid) begin
          cnt <= ((cnt == cnt_limit) ? 3'b000 : _zz_cnt);
        end
      end
    end
  end


endmodule

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

module ComputeUnit (
  input               code,
  input               base_iq_valid,
  input      [15:0]   base_iq_payload_cha_i,
  input      [15:0]   base_iq_payload_cha_q,
  output              mod_iq_valid,
  output     [15:0]   mod_iq_payload_cha_i,
  output     [15:0]   mod_iq_payload_cha_q,
  input               clk,
  input               resetn
);
  wire       [15:0]   _zz_mod_i;
  wire       [15:0]   _zz_mod_q;
  reg        [15:0]   mod_i;
  reg        [15:0]   mod_q;
  reg                 mod_valid;

  assign _zz_mod_i = (- base_iq_payload_cha_i);
  assign _zz_mod_q = (- base_iq_payload_cha_q);
  assign mod_iq_payload_cha_i = mod_i;
  assign mod_iq_payload_cha_q = mod_q;
  assign mod_iq_valid = mod_valid;
  always @(posedge clk) begin
    if(!resetn) begin
      mod_i <= 16'h0;
      mod_q <= 16'h0;
      mod_valid <= 1'b0;
    end else begin
      if(base_iq_valid) begin
        mod_i <= (code ? base_iq_payload_cha_i : _zz_mod_i);
        mod_q <= (code ? base_iq_payload_cha_q : _zz_mod_q);
        mod_valid <= 1'b1;
      end else begin
        mod_valid <= 1'b0;
      end
    end
  end


endmodule
