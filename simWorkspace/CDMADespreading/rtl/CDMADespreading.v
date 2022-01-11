// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : CDMADespreading
// Git hash  : 67f129201e20f87ae1cc1df1af41955d77102f75



module CDMADespreading (
  input               w_en,
  input      [2:0]    w_addr,
  input      [7:0]    w_data,
  input               clc,
  input      [2:0]    cnt_limit,
  input               mod_iq_valid,
  output              mod_iq_ready,
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  output              base_sub_iqs_0_valid,
  output     [15:0]   base_sub_iqs_0_payload_cha_i,
  output     [15:0]   base_sub_iqs_0_payload_cha_q,
  output              base_sub_iqs_1_valid,
  output     [15:0]   base_sub_iqs_1_payload_cha_i,
  output     [15:0]   base_sub_iqs_1_payload_cha_q,
  output              base_sub_iqs_2_valid,
  output     [15:0]   base_sub_iqs_2_payload_cha_i,
  output     [15:0]   base_sub_iqs_2_payload_cha_q,
  output              base_sub_iqs_3_valid,
  output     [15:0]   base_sub_iqs_3_payload_cha_i,
  output     [15:0]   base_sub_iqs_3_payload_cha_q,
  output              base_sub_iqs_4_valid,
  output     [15:0]   base_sub_iqs_4_payload_cha_i,
  output     [15:0]   base_sub_iqs_4_payload_cha_q,
  output              base_sub_iqs_5_valid,
  output     [15:0]   base_sub_iqs_5_payload_cha_i,
  output     [15:0]   base_sub_iqs_5_payload_cha_q,
  output              base_sub_iqs_6_valid,
  output     [15:0]   base_sub_iqs_6_payload_cha_i,
  output     [15:0]   base_sub_iqs_6_payload_cha_q,
  output              base_sub_iqs_7_valid,
  output     [15:0]   base_sub_iqs_7_payload_cha_i,
  output     [15:0]   base_sub_iqs_7_payload_cha_q,
  input               clk,
  input               reset
);
  wire       [7:0]    computeUnit_8_code;
  wire       [7:0]    computeUnit_9_code;
  wire       [7:0]    computeUnit_10_code;
  wire       [7:0]    computeUnit_11_code;
  wire       [7:0]    computeUnit_12_code;
  wire       [7:0]    computeUnit_13_code;
  wire       [7:0]    computeUnit_14_code;
  wire       [7:0]    computeUnit_15_code;
  wire       [7:0]    _zz_code_map_port0;
  wire       [7:0]    _zz_code_map_port1;
  wire       [7:0]    _zz_code_map_port2;
  wire       [7:0]    _zz_code_map_port3;
  wire       [7:0]    _zz_code_map_port4;
  wire       [7:0]    _zz_code_map_port5;
  wire       [7:0]    _zz_code_map_port6;
  wire       [7:0]    _zz_code_map_port7;
  wire                computeUnit_8_base_iq_valid;
  wire       [15:0]   computeUnit_8_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_8_base_iq_payload_cha_q;
  wire                computeUnit_9_base_iq_valid;
  wire       [15:0]   computeUnit_9_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_9_base_iq_payload_cha_q;
  wire                computeUnit_10_base_iq_valid;
  wire       [15:0]   computeUnit_10_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_10_base_iq_payload_cha_q;
  wire                computeUnit_11_base_iq_valid;
  wire       [15:0]   computeUnit_11_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_11_base_iq_payload_cha_q;
  wire                computeUnit_12_base_iq_valid;
  wire       [15:0]   computeUnit_12_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_12_base_iq_payload_cha_q;
  wire                computeUnit_13_base_iq_valid;
  wire       [15:0]   computeUnit_13_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_13_base_iq_payload_cha_q;
  wire                computeUnit_14_base_iq_valid;
  wire       [15:0]   computeUnit_14_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_14_base_iq_payload_cha_q;
  wire                computeUnit_15_base_iq_valid;
  wire       [15:0]   computeUnit_15_base_iq_payload_cha_i;
  wire       [15:0]   computeUnit_15_base_iq_payload_cha_q;
  wire       [2:0]    _zz_code_map_port;
  wire       [2:0]    _zz_code;
  wire       [2:0]    _zz_code_map_port_1;
  wire       [2:0]    _zz_code_1;
  wire       [2:0]    _zz_code_map_port_2;
  wire       [2:0]    _zz_code_2;
  wire       [2:0]    _zz_code_map_port_3;
  wire       [2:0]    _zz_code_3;
  wire       [2:0]    _zz_code_map_port_4;
  wire       [2:0]    _zz_code_4;
  wire       [2:0]    _zz_code_map_port_5;
  wire       [2:0]    _zz_code_5;
  wire       [2:0]    _zz_code_map_port_6;
  wire       [2:0]    _zz_code_6;
  wire       [2:0]    _zz_code_map_port_7;
  wire       [2:0]    _zz_code_7;
  reg                 _zz_1;
  (* ram_style = "distributed" *) reg [7:0] code_map [0:7];

  assign _zz_code = 3'b000;
  assign _zz_code_1 = 3'b001;
  assign _zz_code_2 = 3'b010;
  assign _zz_code_3 = 3'b011;
  assign _zz_code_4 = 3'b100;
  assign _zz_code_5 = 3'b101;
  assign _zz_code_6 = 3'b110;
  assign _zz_code_7 = 3'b111;
  initial begin
    $readmemb("CDMADespreading.v_toplevel_code_map.bin",code_map);
  end
  assign _zz_code_map_port0 = code_map[_zz_code];
  assign _zz_code_map_port1 = code_map[_zz_code_1];
  assign _zz_code_map_port2 = code_map[_zz_code_2];
  assign _zz_code_map_port3 = code_map[_zz_code_3];
  assign _zz_code_map_port4 = code_map[_zz_code_4];
  assign _zz_code_map_port5 = code_map[_zz_code_5];
  assign _zz_code_map_port6 = code_map[_zz_code_6];
  assign _zz_code_map_port7 = code_map[_zz_code_7];
  always @(posedge clk) begin
    if(_zz_1) begin
      code_map[w_addr] <= w_data;
    end
  end

  ComputeUnit computeUnit_8 (
    .code                     (computeUnit_8_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                         ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                 ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                 ), //i
    .base_iq_valid            (computeUnit_8_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_8_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_8_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                  ), //i
    .cnt_limit                (cnt_limit                            ), //i
    .clk                      (clk                                  ), //i
    .reset                    (reset                                )  //i
  );
  ComputeUnit computeUnit_9 (
    .code                     (computeUnit_9_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                         ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                 ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                 ), //i
    .base_iq_valid            (computeUnit_9_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_9_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_9_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                  ), //i
    .cnt_limit                (cnt_limit                            ), //i
    .clk                      (clk                                  ), //i
    .reset                    (reset                                )  //i
  );
  ComputeUnit computeUnit_10 (
    .code                     (computeUnit_10_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                          ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                  ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                  ), //i
    .base_iq_valid            (computeUnit_10_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_10_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_10_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                   ), //i
    .cnt_limit                (cnt_limit                             ), //i
    .clk                      (clk                                   ), //i
    .reset                    (reset                                 )  //i
  );
  ComputeUnit computeUnit_11 (
    .code                     (computeUnit_11_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                          ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                  ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                  ), //i
    .base_iq_valid            (computeUnit_11_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_11_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_11_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                   ), //i
    .cnt_limit                (cnt_limit                             ), //i
    .clk                      (clk                                   ), //i
    .reset                    (reset                                 )  //i
  );
  ComputeUnit computeUnit_12 (
    .code                     (computeUnit_12_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                          ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                  ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                  ), //i
    .base_iq_valid            (computeUnit_12_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_12_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_12_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                   ), //i
    .cnt_limit                (cnt_limit                             ), //i
    .clk                      (clk                                   ), //i
    .reset                    (reset                                 )  //i
  );
  ComputeUnit computeUnit_13 (
    .code                     (computeUnit_13_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                          ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                  ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                  ), //i
    .base_iq_valid            (computeUnit_13_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_13_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_13_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                   ), //i
    .cnt_limit                (cnt_limit                             ), //i
    .clk                      (clk                                   ), //i
    .reset                    (reset                                 )  //i
  );
  ComputeUnit computeUnit_14 (
    .code                     (computeUnit_14_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                          ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                  ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                  ), //i
    .base_iq_valid            (computeUnit_14_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_14_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_14_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                   ), //i
    .cnt_limit                (cnt_limit                             ), //i
    .clk                      (clk                                   ), //i
    .reset                    (reset                                 )  //i
  );
  ComputeUnit computeUnit_15 (
    .code                     (computeUnit_15_code                   ), //i
    .mod_iq_valid             (mod_iq_valid                          ), //i
    .mod_iq_payload_cha_i     (mod_iq_payload_cha_i                  ), //i
    .mod_iq_payload_cha_q     (mod_iq_payload_cha_q                  ), //i
    .base_iq_valid            (computeUnit_15_base_iq_valid          ), //o
    .base_iq_payload_cha_i    (computeUnit_15_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q    (computeUnit_15_base_iq_payload_cha_q  ), //o
    .clc                      (clc                                   ), //i
    .cnt_limit                (cnt_limit                             ), //i
    .clk                      (clk                                   ), //i
    .reset                    (reset                                 )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(w_en) begin
      _zz_1 = 1'b1;
    end
  end

  assign computeUnit_8_code = _zz_code_map_port0;
  assign base_sub_iqs_0_valid = computeUnit_8_base_iq_valid;
  assign base_sub_iqs_0_payload_cha_i = computeUnit_8_base_iq_payload_cha_i;
  assign base_sub_iqs_0_payload_cha_q = computeUnit_8_base_iq_payload_cha_q;
  assign computeUnit_9_code = _zz_code_map_port1;
  assign base_sub_iqs_1_valid = computeUnit_9_base_iq_valid;
  assign base_sub_iqs_1_payload_cha_i = computeUnit_9_base_iq_payload_cha_i;
  assign base_sub_iqs_1_payload_cha_q = computeUnit_9_base_iq_payload_cha_q;
  assign computeUnit_10_code = _zz_code_map_port2;
  assign base_sub_iqs_2_valid = computeUnit_10_base_iq_valid;
  assign base_sub_iqs_2_payload_cha_i = computeUnit_10_base_iq_payload_cha_i;
  assign base_sub_iqs_2_payload_cha_q = computeUnit_10_base_iq_payload_cha_q;
  assign computeUnit_11_code = _zz_code_map_port3;
  assign base_sub_iqs_3_valid = computeUnit_11_base_iq_valid;
  assign base_sub_iqs_3_payload_cha_i = computeUnit_11_base_iq_payload_cha_i;
  assign base_sub_iqs_3_payload_cha_q = computeUnit_11_base_iq_payload_cha_q;
  assign computeUnit_12_code = _zz_code_map_port4;
  assign base_sub_iqs_4_valid = computeUnit_12_base_iq_valid;
  assign base_sub_iqs_4_payload_cha_i = computeUnit_12_base_iq_payload_cha_i;
  assign base_sub_iqs_4_payload_cha_q = computeUnit_12_base_iq_payload_cha_q;
  assign computeUnit_13_code = _zz_code_map_port5;
  assign base_sub_iqs_5_valid = computeUnit_13_base_iq_valid;
  assign base_sub_iqs_5_payload_cha_i = computeUnit_13_base_iq_payload_cha_i;
  assign base_sub_iqs_5_payload_cha_q = computeUnit_13_base_iq_payload_cha_q;
  assign computeUnit_14_code = _zz_code_map_port6;
  assign base_sub_iqs_6_valid = computeUnit_14_base_iq_valid;
  assign base_sub_iqs_6_payload_cha_i = computeUnit_14_base_iq_payload_cha_i;
  assign base_sub_iqs_6_payload_cha_q = computeUnit_14_base_iq_payload_cha_q;
  assign computeUnit_15_code = _zz_code_map_port7;
  assign base_sub_iqs_7_valid = computeUnit_15_base_iq_valid;
  assign base_sub_iqs_7_payload_cha_i = computeUnit_15_base_iq_payload_cha_i;
  assign base_sub_iqs_7_payload_cha_q = computeUnit_15_base_iq_payload_cha_q;
  assign mod_iq_ready = (! clc);

endmodule

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

//ComputeUnit replaced by ComputeUnit

module ComputeUnit (
  input      [7:0]    code,
  input               mod_iq_valid,
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  output              base_iq_valid,
  output     [15:0]   base_iq_payload_cha_i,
  output     [15:0]   base_iq_payload_cha_q,
  input               clc,
  input      [2:0]    cnt_limit,
  input               clk,
  input               reset
);
  wire       [15:0]   shiftRegister_16_output_1;
  wire       [15:0]   shiftRegister_17_output_1;
  wire       [15:0]   _zz_data_i;
  wire       [15:0]   _zz_data_q;
  wire       [15:0]   _zz_base_i_next;
  wire       [15:0]   _zz_base_q_next;
  wire       [2:0]    _zz_cnt;
  reg        [15:0]   base_i;
  reg        [15:0]   base_q;
  reg        [2:0]    cnt;
  wire       [15:0]   data_i;
  wire       [15:0]   data_q;
  wire       [15:0]   base_i_next;
  wire       [15:0]   base_q_next;
  reg        [15:0]   base_i_next_regNext;
  reg        [15:0]   base_q_next_regNext;
  reg                 _zz_base_iq_valid;

  assign _zz_data_i = (- mod_iq_payload_cha_i);
  assign _zz_data_q = (- mod_iq_payload_cha_q);
  assign _zz_base_i_next = ($signed(base_i) + $signed(data_i));
  assign _zz_base_q_next = ($signed(base_q) + $signed(data_q));
  assign _zz_cnt = (cnt + 3'b001);
  ShiftRegister shiftRegister_16 (
    .input_1     (data_i                     ), //i
    .output_1    (shiftRegister_16_output_1  ), //o
    .enable      (mod_iq_valid               ), //i
    .clc         (clc                        ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegister shiftRegister_17 (
    .input_1     (data_q                     ), //i
    .output_1    (shiftRegister_17_output_1  ), //o
    .enable      (mod_iq_valid               ), //i
    .clc         (clc                        ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  assign data_i = (code[cnt] ? mod_iq_payload_cha_i : _zz_data_i);
  assign data_q = (code[cnt] ? mod_iq_payload_cha_q : _zz_data_q);
  assign base_i_next = ($signed(_zz_base_i_next) - $signed(shiftRegister_16_output_1));
  assign base_q_next = ($signed(_zz_base_q_next) - $signed(shiftRegister_17_output_1));
  assign base_iq_payload_cha_i = base_i_next_regNext;
  assign base_iq_payload_cha_q = base_q_next_regNext;
  assign base_iq_valid = _zz_base_iq_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      base_i <= 16'h0;
      base_q <= 16'h0;
      cnt <= 3'b000;
    end else begin
      if(clc) begin
        base_i <= 16'h0;
        base_q <= 16'h0;
        cnt <= 3'b000;
      end else begin
        if(mod_iq_valid) begin
          base_i <= base_i_next;
          base_q <= base_q_next;
          cnt <= ((cnt == cnt_limit) ? 3'b000 : _zz_cnt);
        end
      end
    end
  end

  always @(posedge clk) begin
    base_i_next_regNext <= base_i_next;
    base_q_next_regNext <= base_q_next;
    _zz_base_iq_valid <= ((cnt == cnt_limit) && mod_iq_valid);
  end


endmodule

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

module ShiftRegister (
  input      [15:0]   input_1,
  output     [15:0]   output_1,
  input               enable,
  input               clc,
  input               clk,
  input               reset
);
  reg        [15:0]   shift_reg_0;
  reg        [15:0]   shift_reg_1;
  reg        [15:0]   shift_reg_2;
  reg        [15:0]   shift_reg_3;
  reg        [15:0]   shift_reg_4;
  reg        [15:0]   shift_reg_5;
  reg        [15:0]   shift_reg_6;
  reg        [15:0]   shift_reg_7;

  assign output_1 = shift_reg_7;
  always @(posedge clk) begin
    if(clc) begin
      shift_reg_0 <= 16'h0;
      shift_reg_1 <= 16'h0;
      shift_reg_2 <= 16'h0;
      shift_reg_3 <= 16'h0;
      shift_reg_4 <= 16'h0;
      shift_reg_5 <= 16'h0;
      shift_reg_6 <= 16'h0;
      shift_reg_7 <= 16'h0;
    end else begin
      if(enable) begin
        shift_reg_0 <= input_1;
        shift_reg_1 <= shift_reg_0;
        shift_reg_2 <= shift_reg_1;
        shift_reg_3 <= shift_reg_2;
        shift_reg_4 <= shift_reg_3;
        shift_reg_5 <= shift_reg_4;
        shift_reg_6 <= shift_reg_5;
        shift_reg_7 <= shift_reg_6;
      end
    end
  end


endmodule
