// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : CDMASpreading
// Git hash  : 67f129201e20f87ae1cc1df1af41955d77102f75



module CDMASpreading (
  input               w_en,
  input      [2:0]    w_addr,
  input      [7:0]    w_data,
  input               clc,
  input      [2:0]    cnt_limit,
  input               base_iq_valid,
  output              base_iq_ready,
  input      [15:0]   base_iq_payload_0_cha_i,
  input      [15:0]   base_iq_payload_0_cha_q,
  input      [15:0]   base_iq_payload_1_cha_i,
  input      [15:0]   base_iq_payload_1_cha_q,
  input      [15:0]   base_iq_payload_2_cha_i,
  input      [15:0]   base_iq_payload_2_cha_q,
  input      [15:0]   base_iq_payload_3_cha_i,
  input      [15:0]   base_iq_payload_3_cha_q,
  input      [15:0]   base_iq_payload_4_cha_i,
  input      [15:0]   base_iq_payload_4_cha_q,
  input      [15:0]   base_iq_payload_5_cha_i,
  input      [15:0]   base_iq_payload_5_cha_q,
  input      [15:0]   base_iq_payload_6_cha_i,
  input      [15:0]   base_iq_payload_6_cha_q,
  input      [15:0]   base_iq_payload_7_cha_i,
  input      [15:0]   base_iq_payload_7_cha_q,
  output              mod_sub_iqs_0_valid,
  output     [15:0]   mod_sub_iqs_0_payload_cha_i,
  output     [15:0]   mod_sub_iqs_0_payload_cha_q,
  output              mod_sub_iqs_1_valid,
  output     [15:0]   mod_sub_iqs_1_payload_cha_i,
  output     [15:0]   mod_sub_iqs_1_payload_cha_q,
  output              mod_sub_iqs_2_valid,
  output     [15:0]   mod_sub_iqs_2_payload_cha_i,
  output     [15:0]   mod_sub_iqs_2_payload_cha_q,
  output              mod_sub_iqs_3_valid,
  output     [15:0]   mod_sub_iqs_3_payload_cha_i,
  output     [15:0]   mod_sub_iqs_3_payload_cha_q,
  output              mod_sub_iqs_4_valid,
  output     [15:0]   mod_sub_iqs_4_payload_cha_i,
  output     [15:0]   mod_sub_iqs_4_payload_cha_q,
  output              mod_sub_iqs_5_valid,
  output     [15:0]   mod_sub_iqs_5_payload_cha_i,
  output     [15:0]   mod_sub_iqs_5_payload_cha_q,
  output              mod_sub_iqs_6_valid,
  output     [15:0]   mod_sub_iqs_6_payload_cha_i,
  output     [15:0]   mod_sub_iqs_6_payload_cha_q,
  output              mod_sub_iqs_7_valid,
  output     [15:0]   mod_sub_iqs_7_payload_cha_i,
  output     [15:0]   mod_sub_iqs_7_payload_cha_q,
  input               clk,
  input               reset
);
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
  reg                 _zz_1;
  reg        [2:0]    cnt;
  reg        [15:0]   flow_iq_data_vec_0_cha_i;
  reg        [15:0]   flow_iq_data_vec_0_cha_q;
  reg        [15:0]   flow_iq_data_vec_1_cha_i;
  reg        [15:0]   flow_iq_data_vec_1_cha_q;
  reg        [15:0]   flow_iq_data_vec_2_cha_i;
  reg        [15:0]   flow_iq_data_vec_2_cha_q;
  reg        [15:0]   flow_iq_data_vec_3_cha_i;
  reg        [15:0]   flow_iq_data_vec_3_cha_q;
  reg        [15:0]   flow_iq_data_vec_4_cha_i;
  reg        [15:0]   flow_iq_data_vec_4_cha_q;
  reg        [15:0]   flow_iq_data_vec_5_cha_i;
  reg        [15:0]   flow_iq_data_vec_5_cha_q;
  reg        [15:0]   flow_iq_data_vec_6_cha_i;
  reg        [15:0]   flow_iq_data_vec_6_cha_q;
  reg        [15:0]   flow_iq_data_vec_7_cha_i;
  reg        [15:0]   flow_iq_data_vec_7_cha_q;
  reg                 flow_iq_valid;
  reg                 _zz_code;
  reg                 _zz_code_1;
  reg                 _zz_code_2;
  reg                 _zz_code_3;
  reg                 _zz_code_4;
  reg                 _zz_code_5;
  reg                 _zz_code_6;
  reg                 _zz_code_7;
  wire                base_iq_fire;
  wire                when_CDMASpreading_l51;
  wire                when_CDMASpreading_l65;
  (* ram_style = "distributed" *) reg [7:0] code_map [0:7];

  assign _zz_cnt = (cnt + 3'b001);
  initial begin
    $readmemb("CDMASpreading.v_toplevel_code_map.bin",code_map);
  end
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
      code_map[w_addr] <= w_data;
    end
  end

  ComputeUnit computeUnit_8 (
    .code                     (_zz_code                            ), //i
    .base_iq_valid            (flow_iq_valid                       ), //i
    .base_iq_payload_cha_i    (flow_iq_data_vec_0_cha_i            ), //i
    .base_iq_payload_cha_q    (flow_iq_data_vec_0_cha_q            ), //i
    .mod_iq_valid             (computeUnit_8_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_8_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_8_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                 ), //i
    .reset                    (reset                               )  //i
  );
  ComputeUnit computeUnit_9 (
    .code                     (_zz_code_1                          ), //i
    .base_iq_valid            (flow_iq_valid                       ), //i
    .base_iq_payload_cha_i    (flow_iq_data_vec_1_cha_i            ), //i
    .base_iq_payload_cha_q    (flow_iq_data_vec_1_cha_q            ), //i
    .mod_iq_valid             (computeUnit_9_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_9_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_9_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                 ), //i
    .reset                    (reset                               )  //i
  );
  ComputeUnit computeUnit_10 (
    .code                     (_zz_code_2                           ), //i
    .base_iq_valid            (flow_iq_valid                        ), //i
    .base_iq_payload_cha_i    (flow_iq_data_vec_2_cha_i             ), //i
    .base_iq_payload_cha_q    (flow_iq_data_vec_2_cha_q             ), //i
    .mod_iq_valid             (computeUnit_10_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_10_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_10_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                  ), //i
    .reset                    (reset                                )  //i
  );
  ComputeUnit computeUnit_11 (
    .code                     (_zz_code_3                           ), //i
    .base_iq_valid            (flow_iq_valid                        ), //i
    .base_iq_payload_cha_i    (flow_iq_data_vec_3_cha_i             ), //i
    .base_iq_payload_cha_q    (flow_iq_data_vec_3_cha_q             ), //i
    .mod_iq_valid             (computeUnit_11_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_11_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_11_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                  ), //i
    .reset                    (reset                                )  //i
  );
  ComputeUnit computeUnit_12 (
    .code                     (_zz_code_4                           ), //i
    .base_iq_valid            (flow_iq_valid                        ), //i
    .base_iq_payload_cha_i    (flow_iq_data_vec_4_cha_i             ), //i
    .base_iq_payload_cha_q    (flow_iq_data_vec_4_cha_q             ), //i
    .mod_iq_valid             (computeUnit_12_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_12_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_12_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                  ), //i
    .reset                    (reset                                )  //i
  );
  ComputeUnit computeUnit_13 (
    .code                     (_zz_code_5                           ), //i
    .base_iq_valid            (flow_iq_valid                        ), //i
    .base_iq_payload_cha_i    (flow_iq_data_vec_5_cha_i             ), //i
    .base_iq_payload_cha_q    (flow_iq_data_vec_5_cha_q             ), //i
    .mod_iq_valid             (computeUnit_13_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_13_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_13_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                  ), //i
    .reset                    (reset                                )  //i
  );
  ComputeUnit computeUnit_14 (
    .code                     (_zz_code_6                           ), //i
    .base_iq_valid            (flow_iq_valid                        ), //i
    .base_iq_payload_cha_i    (flow_iq_data_vec_6_cha_i             ), //i
    .base_iq_payload_cha_q    (flow_iq_data_vec_6_cha_q             ), //i
    .mod_iq_valid             (computeUnit_14_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_14_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_14_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                  ), //i
    .reset                    (reset                                )  //i
  );
  ComputeUnit computeUnit_15 (
    .code                     (_zz_code_7                           ), //i
    .base_iq_valid            (flow_iq_valid                        ), //i
    .base_iq_payload_cha_i    (flow_iq_data_vec_7_cha_i             ), //i
    .base_iq_payload_cha_q    (flow_iq_data_vec_7_cha_q             ), //i
    .mod_iq_valid             (computeUnit_15_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i     (computeUnit_15_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q     (computeUnit_15_mod_iq_payload_cha_q  ), //o
    .clk                      (clk                                  ), //i
    .reset                    (reset                                )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(w_en) begin
      _zz_1 = 1'b1;
    end
  end

  assign mod_sub_iqs_0_valid = computeUnit_8_mod_iq_valid;
  assign mod_sub_iqs_0_payload_cha_i = computeUnit_8_mod_iq_payload_cha_i;
  assign mod_sub_iqs_0_payload_cha_q = computeUnit_8_mod_iq_payload_cha_q;
  assign mod_sub_iqs_1_valid = computeUnit_9_mod_iq_valid;
  assign mod_sub_iqs_1_payload_cha_i = computeUnit_9_mod_iq_payload_cha_i;
  assign mod_sub_iqs_1_payload_cha_q = computeUnit_9_mod_iq_payload_cha_q;
  assign mod_sub_iqs_2_valid = computeUnit_10_mod_iq_valid;
  assign mod_sub_iqs_2_payload_cha_i = computeUnit_10_mod_iq_payload_cha_i;
  assign mod_sub_iqs_2_payload_cha_q = computeUnit_10_mod_iq_payload_cha_q;
  assign mod_sub_iqs_3_valid = computeUnit_11_mod_iq_valid;
  assign mod_sub_iqs_3_payload_cha_i = computeUnit_11_mod_iq_payload_cha_i;
  assign mod_sub_iqs_3_payload_cha_q = computeUnit_11_mod_iq_payload_cha_q;
  assign mod_sub_iqs_4_valid = computeUnit_12_mod_iq_valid;
  assign mod_sub_iqs_4_payload_cha_i = computeUnit_12_mod_iq_payload_cha_i;
  assign mod_sub_iqs_4_payload_cha_q = computeUnit_12_mod_iq_payload_cha_q;
  assign mod_sub_iqs_5_valid = computeUnit_13_mod_iq_valid;
  assign mod_sub_iqs_5_payload_cha_i = computeUnit_13_mod_iq_payload_cha_i;
  assign mod_sub_iqs_5_payload_cha_q = computeUnit_13_mod_iq_payload_cha_q;
  assign mod_sub_iqs_6_valid = computeUnit_14_mod_iq_valid;
  assign mod_sub_iqs_6_payload_cha_i = computeUnit_14_mod_iq_payload_cha_i;
  assign mod_sub_iqs_6_payload_cha_q = computeUnit_14_mod_iq_payload_cha_q;
  assign mod_sub_iqs_7_valid = computeUnit_15_mod_iq_valid;
  assign mod_sub_iqs_7_payload_cha_i = computeUnit_15_mod_iq_payload_cha_i;
  assign mod_sub_iqs_7_payload_cha_q = computeUnit_15_mod_iq_payload_cha_q;
  assign base_iq_fire = (base_iq_valid && base_iq_ready);
  assign when_CDMASpreading_l51 = (base_iq_fire || (cnt != 3'b000));
  assign when_CDMASpreading_l65 = (cnt == 3'b000);
  assign base_iq_ready = ((cnt == 3'b000) && (! clc));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 3'b000;
      flow_iq_valid <= 1'b0;
    end else begin
      if(clc) begin
        cnt <= 3'b000;
      end else begin
        if(when_CDMASpreading_l51) begin
          cnt <= ((cnt == cnt_limit) ? 3'b000 : _zz_cnt);
        end
      end
      if(when_CDMASpreading_l65) begin
        flow_iq_valid <= base_iq_valid;
      end
    end
  end

  always @(posedge clk) begin
    _zz_code <= _zz_code_map_port0[7];
    _zz_code_1 <= _zz_code_map_port1[6];
    _zz_code_2 <= _zz_code_map_port2[5];
    _zz_code_3 <= _zz_code_map_port3[4];
    _zz_code_4 <= _zz_code_map_port4[3];
    _zz_code_5 <= _zz_code_map_port5[2];
    _zz_code_6 <= _zz_code_map_port6[1];
    _zz_code_7 <= _zz_code_map_port7[0];
    if(when_CDMASpreading_l65) begin
      flow_iq_data_vec_0_cha_i <= base_iq_payload_0_cha_i;
      flow_iq_data_vec_0_cha_q <= base_iq_payload_0_cha_q;
      flow_iq_data_vec_1_cha_i <= base_iq_payload_1_cha_i;
      flow_iq_data_vec_1_cha_q <= base_iq_payload_1_cha_q;
      flow_iq_data_vec_2_cha_i <= base_iq_payload_2_cha_i;
      flow_iq_data_vec_2_cha_q <= base_iq_payload_2_cha_q;
      flow_iq_data_vec_3_cha_i <= base_iq_payload_3_cha_i;
      flow_iq_data_vec_3_cha_q <= base_iq_payload_3_cha_q;
      flow_iq_data_vec_4_cha_i <= base_iq_payload_4_cha_i;
      flow_iq_data_vec_4_cha_q <= base_iq_payload_4_cha_q;
      flow_iq_data_vec_5_cha_i <= base_iq_payload_5_cha_i;
      flow_iq_data_vec_5_cha_q <= base_iq_payload_5_cha_q;
      flow_iq_data_vec_6_cha_i <= base_iq_payload_6_cha_i;
      flow_iq_data_vec_6_cha_q <= base_iq_payload_6_cha_q;
      flow_iq_data_vec_7_cha_i <= base_iq_payload_7_cha_i;
      flow_iq_data_vec_7_cha_q <= base_iq_payload_7_cha_q;
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
  input               reset
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
  always @(posedge clk or posedge reset) begin
    if(reset) begin
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
