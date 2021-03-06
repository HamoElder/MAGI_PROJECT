// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : PhaseRotator
// Git hash  : 091c6d7bc62eb6f554a6976e328986567b758dcb



module PhaseRotator (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_cha_i,
  input      [15:0]   raw_data_payload_cha_q,
  input               phiCorrect_valid,
  input      [31:0]   phiCorrect_payload,
  output              rotated_data_valid,
  output     [15:0]   rotated_data_payload_cha_i,
  output     [15:0]   rotated_data_payload_cha_q,
  input               clk,
  input               reset
);
  wire       [31:0]   cordic_pipeline_core_raw_data_payload_x;
  wire       [31:0]   cordic_pipeline_core_raw_data_payload_y;
  wire                shiftRegister_1_clc;
  wire                cordic_pipeline_core_raw_data_ready;
  wire                cordic_pipeline_core_result_valid;
  wire       [31:0]   cordic_pipeline_core_result_payload_x;
  wire       [31:0]   cordic_pipeline_core_result_payload_y;
  wire       [31:0]   cordic_pipeline_core_result_payload_z;
  wire                shiftRegister_1_output_1;
  wire       [31:0]   _zz_when_PhaseRotator_l47;
  wire       [31:0]   _zz_phiNext;
  wire       [31:0]   _zz_phiNext_1;
  wire       [31:0]   _zz_when_PhaseRotator_l50;
  wire       [32:0]   _zz__zz_when_SInt_l332_2;
  wire       [32:0]   _zz__zz_when_SInt_l332_2_1;
  wire       [15:0]   _zz_when_SInt_l186;
  wire       [16:0]   _zz__zz_rotated_x_raw_3;
  wire       [16:0]   _zz__zz_rotated_x_raw_3_1;
  wire       [32:0]   _zz__zz_rotated_x_raw;
  wire       [32:0]   _zz__zz_rotated_x_raw_1;
  wire       [32:0]   _zz__zz_rotated_x_raw_2;
  wire       [1:0]    _zz_when_SInt_l126;
  wire       [0:0]    _zz_when_SInt_l132;
  wire       [32:0]   _zz__zz_when_SInt_l332_5;
  wire       [32:0]   _zz__zz_when_SInt_l332_5_1;
  wire       [15:0]   _zz_when_SInt_l186_1;
  wire       [16:0]   _zz__zz_rotated_y_raw_3;
  wire       [16:0]   _zz__zz_rotated_y_raw_3_1;
  wire       [32:0]   _zz__zz_rotated_y_raw;
  wire       [32:0]   _zz__zz_rotated_y_raw_1;
  wire       [32:0]   _zz__zz_rotated_y_raw_2;
  wire       [1:0]    _zz_when_SInt_l126_1;
  wire       [0:0]    _zz_when_SInt_l132_1;
  wire       [15:0]   _zz_rotated_data_payload_cha_i;
  wire       [15:0]   _zz_rotated_data_payload_cha_q;
  reg                 xy_symbol;
  reg        [31:0]   phi;
  reg        [31:0]   phiNext;
  reg        [31:0]   phiCorrect;
  wire       [31:0]   math_pi;
  wire       [31:0]   math_pi_2;
  wire       [31:0]   neg_math_pi_2;
  wire                when_PhaseRotator_l47;
  wire                when_PhaseRotator_l50;
  reg        [16:0]   _zz_rotated_x_raw;
  wire       [31:0]   _zz_rotated_x_raw_1;
  wire       [31:0]   _zz_when_SInt_l332;
  wire       [31:0]   _zz_when_SInt_l332_1;
  wire       [32:0]   _zz_when_SInt_l332_2;
  wire       [31:0]   _zz_rotated_x_raw_2;
  wire                when_SInt_l332;
  reg        [16:0]   _zz_rotated_x_raw_3;
  wire                when_SInt_l186;
  reg        [15:0]   rotated_x_raw;
  wire                when_SInt_l125;
  wire                when_SInt_l126;
  wire                when_SInt_l132;
  reg        [16:0]   _zz_rotated_y_raw;
  wire       [31:0]   _zz_rotated_y_raw_1;
  wire       [31:0]   _zz_when_SInt_l332_3;
  wire       [31:0]   _zz_when_SInt_l332_4;
  wire       [32:0]   _zz_when_SInt_l332_5;
  wire       [31:0]   _zz_rotated_y_raw_2;
  wire                when_SInt_l332_1;
  reg        [16:0]   _zz_rotated_y_raw_3;
  wire                when_SInt_l186_1;
  reg        [15:0]   rotated_y_raw;
  wire                when_SInt_l125_1;
  wire                when_SInt_l126_1;
  wire                when_SInt_l132_1;

  assign _zz_when_PhaseRotator_l47 = ($signed(phi) + $signed(phiCorrect));
  assign _zz_phiNext = ($signed(phi) - $signed(math_pi));
  assign _zz_phiNext_1 = ($signed(phi) + $signed(math_pi));
  assign _zz_when_PhaseRotator_l50 = ($signed(phi) + $signed(phiCorrect));
  assign _zz__zz_when_SInt_l332_2 = {_zz_when_SInt_l332_1[31],_zz_when_SInt_l332_1};
  assign _zz__zz_when_SInt_l332_2_1 = {_zz_when_SInt_l332[31],_zz_when_SInt_l332};
  assign _zz_when_SInt_l186 = _zz_when_SInt_l332_2[15 : 0];
  assign _zz__zz_rotated_x_raw_3 = _zz_when_SInt_l332_2[32 : 16];
  assign _zz__zz_rotated_x_raw_3_1 = 17'h00001;
  assign _zz__zz_rotated_x_raw = ($signed(_zz__zz_rotated_x_raw_1) + $signed(_zz__zz_rotated_x_raw_2));
  assign _zz__zz_rotated_x_raw_1 = {_zz_rotated_x_raw_2[31],_zz_rotated_x_raw_2};
  assign _zz__zz_rotated_x_raw_2 = {_zz_rotated_x_raw_1[31],_zz_rotated_x_raw_1};
  assign _zz_when_SInt_l126 = _zz_rotated_x_raw[16 : 15];
  assign _zz_when_SInt_l132 = _zz_rotated_x_raw[15 : 15];
  assign _zz__zz_when_SInt_l332_5 = {_zz_when_SInt_l332_4[31],_zz_when_SInt_l332_4};
  assign _zz__zz_when_SInt_l332_5_1 = {_zz_when_SInt_l332_3[31],_zz_when_SInt_l332_3};
  assign _zz_when_SInt_l186_1 = _zz_when_SInt_l332_5[15 : 0];
  assign _zz__zz_rotated_y_raw_3 = _zz_when_SInt_l332_5[32 : 16];
  assign _zz__zz_rotated_y_raw_3_1 = 17'h00001;
  assign _zz__zz_rotated_y_raw = ($signed(_zz__zz_rotated_y_raw_1) + $signed(_zz__zz_rotated_y_raw_2));
  assign _zz__zz_rotated_y_raw_1 = {_zz_rotated_y_raw_2[31],_zz_rotated_y_raw_2};
  assign _zz__zz_rotated_y_raw_2 = {_zz_rotated_y_raw_1[31],_zz_rotated_y_raw_1};
  assign _zz_when_SInt_l126_1 = _zz_rotated_y_raw[16 : 15];
  assign _zz_when_SInt_l132_1 = _zz_rotated_y_raw[15 : 15];
  assign _zz_rotated_data_payload_cha_i = (- rotated_x_raw);
  assign _zz_rotated_data_payload_cha_q = (- rotated_y_raw);
  CordicRotator cordic_pipeline_core (
    .rotate_mode           (1'b1                                     ), //i
    .x_u                   (2'b00                                    ), //i
    .raw_data_valid        (raw_data_valid                           ), //i
    .raw_data_ready        (cordic_pipeline_core_raw_data_ready      ), //o
    .raw_data_payload_x    (cordic_pipeline_core_raw_data_payload_x  ), //i
    .raw_data_payload_y    (cordic_pipeline_core_raw_data_payload_y  ), //i
    .raw_data_payload_z    (phi                                      ), //i
    .result_valid          (cordic_pipeline_core_result_valid        ), //o
    .result_payload_x      (cordic_pipeline_core_result_payload_x    ), //o
    .result_payload_y      (cordic_pipeline_core_result_payload_y    ), //o
    .result_payload_z      (cordic_pipeline_core_result_payload_z    ), //o
    .clk                   (clk                                      ), //i
    .reset                 (reset                                    )  //i
  );
  ShiftRegister shiftRegister_1 (
    .input_1     (xy_symbol                 ), //i
    .output_1    (shiftRegister_1_output_1  ), //o
    .enable      (raw_data_valid            ), //i
    .clc         (shiftRegister_1_clc       ), //i
    .clk         (clk                       ), //i
    .reset       (reset                     )  //i
  );
  assign shiftRegister_1_clc = (! raw_data_valid);
  assign math_pi = 32'h0003243f;
  assign math_pi_2 = 32'h0001921f;
  assign neg_math_pi_2 = 32'hfffe6de1;
  assign when_PhaseRotator_l47 = ($signed(math_pi_2) < $signed(_zz_when_PhaseRotator_l47));
  always @(*) begin
    if(when_PhaseRotator_l47) begin
      phiNext = ($signed(_zz_phiNext) + $signed(phiCorrect));
    end else begin
      if(when_PhaseRotator_l50) begin
        phiNext = ($signed(_zz_phiNext_1) + $signed(phiCorrect));
      end else begin
        phiNext = ($signed(phi) + $signed(phiCorrect));
      end
    end
  end

  assign when_PhaseRotator_l50 = ($signed(_zz_when_PhaseRotator_l50) < $signed(neg_math_pi_2));
  assign cordic_pipeline_core_raw_data_payload_x = {raw_data_payload_cha_i,16'h0};
  assign cordic_pipeline_core_raw_data_payload_y = {raw_data_payload_cha_q,16'h0};
  assign _zz_rotated_x_raw_1 = {{16'h0,1'b1},15'h0};
  assign _zz_when_SInt_l332 = {17'h1ffff,15'h0};
  assign _zz_when_SInt_l332_1 = cordic_pipeline_core_result_payload_x[31 : 0];
  assign _zz_when_SInt_l332_2 = ($signed(_zz__zz_when_SInt_l332_2) + $signed(_zz__zz_when_SInt_l332_2_1));
  assign _zz_rotated_x_raw_2 = cordic_pipeline_core_result_payload_x[31 : 0];
  assign when_SInt_l332 = _zz_when_SInt_l332_2[32];
  assign when_SInt_l186 = (_zz_when_SInt_l186 != 16'h0);
  always @(*) begin
    if(when_SInt_l186) begin
      _zz_rotated_x_raw_3 = ($signed(_zz__zz_rotated_x_raw_3) + $signed(_zz__zz_rotated_x_raw_3_1));
    end else begin
      _zz_rotated_x_raw_3 = _zz_when_SInt_l332_2[32 : 16];
    end
  end

  always @(*) begin
    if(when_SInt_l332) begin
      _zz_rotated_x_raw = _zz_rotated_x_raw_3;
    end else begin
      _zz_rotated_x_raw = (_zz__zz_rotated_x_raw >>> 16);
    end
  end

  assign when_SInt_l125 = _zz_rotated_x_raw[16];
  assign when_SInt_l126 = (! (_zz_when_SInt_l126 == 2'b11));
  always @(*) begin
    if(when_SInt_l125) begin
      if(when_SInt_l126) begin
        rotated_x_raw = 16'h8000;
      end else begin
        rotated_x_raw = _zz_rotated_x_raw[15 : 0];
      end
    end else begin
      if(when_SInt_l132) begin
        rotated_x_raw = 16'h7fff;
      end else begin
        rotated_x_raw = _zz_rotated_x_raw[15 : 0];
      end
    end
  end

  assign when_SInt_l132 = (_zz_when_SInt_l132 != 1'b0);
  assign _zz_rotated_y_raw_1 = {{16'h0,1'b1},15'h0};
  assign _zz_when_SInt_l332_3 = {17'h1ffff,15'h0};
  assign _zz_when_SInt_l332_4 = cordic_pipeline_core_result_payload_y[31 : 0];
  assign _zz_when_SInt_l332_5 = ($signed(_zz__zz_when_SInt_l332_5) + $signed(_zz__zz_when_SInt_l332_5_1));
  assign _zz_rotated_y_raw_2 = cordic_pipeline_core_result_payload_y[31 : 0];
  assign when_SInt_l332_1 = _zz_when_SInt_l332_5[32];
  assign when_SInt_l186_1 = (_zz_when_SInt_l186_1 != 16'h0);
  always @(*) begin
    if(when_SInt_l186_1) begin
      _zz_rotated_y_raw_3 = ($signed(_zz__zz_rotated_y_raw_3) + $signed(_zz__zz_rotated_y_raw_3_1));
    end else begin
      _zz_rotated_y_raw_3 = _zz_when_SInt_l332_5[32 : 16];
    end
  end

  always @(*) begin
    if(when_SInt_l332_1) begin
      _zz_rotated_y_raw = _zz_rotated_y_raw_3;
    end else begin
      _zz_rotated_y_raw = (_zz__zz_rotated_y_raw >>> 16);
    end
  end

  assign when_SInt_l125_1 = _zz_rotated_y_raw[16];
  assign when_SInt_l126_1 = (! (_zz_when_SInt_l126_1 == 2'b11));
  always @(*) begin
    if(when_SInt_l125_1) begin
      if(when_SInt_l126_1) begin
        rotated_y_raw = 16'h8000;
      end else begin
        rotated_y_raw = _zz_rotated_y_raw[15 : 0];
      end
    end else begin
      if(when_SInt_l132_1) begin
        rotated_y_raw = 16'h7fff;
      end else begin
        rotated_y_raw = _zz_rotated_y_raw[15 : 0];
      end
    end
  end

  assign when_SInt_l132_1 = (_zz_when_SInt_l132_1 != 1'b0);
  assign rotated_data_valid = cordic_pipeline_core_result_valid;
  assign rotated_data_payload_cha_i = (shiftRegister_1_output_1 ? rotated_x_raw : _zz_rotated_data_payload_cha_i);
  assign rotated_data_payload_cha_q = (shiftRegister_1_output_1 ? rotated_y_raw : _zz_rotated_data_payload_cha_q);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      xy_symbol <= 1'b0;
      phiCorrect <= 32'h0;
    end else begin
      if(phiCorrect_valid) begin
        phiCorrect <= phiCorrect_payload;
      end
      if(when_PhaseRotator_l47) begin
        xy_symbol <= (! xy_symbol);
      end else begin
        if(when_PhaseRotator_l50) begin
          xy_symbol <= (! xy_symbol);
        end
      end
    end
  end

  always @(posedge clk) begin
    if(raw_data_valid) begin
      phi <= phiNext;
    end else begin
      phi <= 32'h0;
    end
  end


endmodule

module ShiftRegister (
  input               input_1,
  output              output_1,
  input               enable,
  input               clc,
  input               clk,
  input               reset
);
  reg                 shift_reg_0;
  reg                 shift_reg_1;
  reg                 shift_reg_2;
  reg                 shift_reg_3;
  reg                 shift_reg_4;
  reg                 shift_reg_5;
  reg                 shift_reg_6;
  reg                 shift_reg_7;
  reg                 shift_reg_8;
  reg                 shift_reg_9;
  reg                 shift_reg_10;
  reg                 shift_reg_11;
  reg                 shift_reg_12;
  reg                 shift_reg_13;
  reg                 shift_reg_14;
  reg                 shift_reg_15;

  assign output_1 = shift_reg_15;
  always @(posedge clk) begin
    if(clc) begin
      shift_reg_0 <= 1'b0;
      shift_reg_1 <= 1'b0;
      shift_reg_2 <= 1'b0;
      shift_reg_3 <= 1'b0;
      shift_reg_4 <= 1'b0;
      shift_reg_5 <= 1'b0;
      shift_reg_6 <= 1'b0;
      shift_reg_7 <= 1'b0;
      shift_reg_8 <= 1'b0;
      shift_reg_9 <= 1'b0;
      shift_reg_10 <= 1'b0;
      shift_reg_11 <= 1'b0;
      shift_reg_12 <= 1'b0;
      shift_reg_13 <= 1'b0;
      shift_reg_14 <= 1'b0;
      shift_reg_15 <= 1'b0;
    end else begin
      shift_reg_0 <= input_1;
      shift_reg_1 <= shift_reg_0;
      shift_reg_2 <= shift_reg_1;
      shift_reg_3 <= shift_reg_2;
      shift_reg_4 <= shift_reg_3;
      shift_reg_5 <= shift_reg_4;
      shift_reg_6 <= shift_reg_5;
      shift_reg_7 <= shift_reg_6;
      shift_reg_8 <= shift_reg_7;
      shift_reg_9 <= shift_reg_8;
      shift_reg_10 <= shift_reg_9;
      shift_reg_11 <= shift_reg_10;
      shift_reg_12 <= shift_reg_11;
      shift_reg_13 <= shift_reg_12;
      shift_reg_14 <= shift_reg_13;
      shift_reg_15 <= shift_reg_14;
    end
  end


endmodule

module CordicRotator (
  input               rotate_mode,
  input      [1:0]    x_u,
  input               raw_data_valid,
  output              raw_data_ready,
  input      [31:0]   raw_data_payload_x,
  input      [31:0]   raw_data_payload_y,
  input      [31:0]   raw_data_payload_z,
  output              result_valid,
  output     [31:0]   result_payload_x,
  output     [31:0]   result_payload_y,
  output     [31:0]   result_payload_z,
  input               clk,
  input               reset
);
  wire       [31:0]   _zz__zz_result_payload_x_1;
  wire       [31:0]   _zz__zz_result_payload_x_1_1;
  wire       [31:0]   _zz__zz_result_payload_x_1_2;
  wire       [31:0]   _zz__zz_result_payload_x_1_3;
  wire       [31:0]   _zz__zz_result_payload_x_17;
  wire       [31:0]   _zz__zz_result_payload_x_17_1;
  wire       [31:0]   _zz__zz_result_payload_x_32;
  wire       [31:0]   _zz__zz_result_payload_x_32_1;
  wire       [31:0]   _zz__zz_result_payload_x_2;
  wire       [31:0]   _zz__zz_result_payload_x_2_1;
  wire       [31:0]   _zz__zz_result_payload_x_2_2;
  wire       [31:0]   _zz__zz_result_payload_x_2_3;
  wire       [31:0]   _zz__zz_result_payload_x_18;
  wire       [31:0]   _zz__zz_result_payload_x_18_1;
  wire       [31:0]   _zz__zz_result_payload_x_33;
  wire       [31:0]   _zz__zz_result_payload_x_33_1;
  wire       [31:0]   _zz__zz_result_payload_x_3;
  wire       [31:0]   _zz__zz_result_payload_x_3_1;
  wire       [31:0]   _zz__zz_result_payload_x_3_2;
  wire       [31:0]   _zz__zz_result_payload_x_3_3;
  wire       [31:0]   _zz__zz_result_payload_x_19;
  wire       [31:0]   _zz__zz_result_payload_x_19_1;
  wire       [31:0]   _zz__zz_result_payload_x_34;
  wire       [31:0]   _zz__zz_result_payload_x_34_1;
  wire       [31:0]   _zz__zz_result_payload_x_4;
  wire       [31:0]   _zz__zz_result_payload_x_4_1;
  wire       [31:0]   _zz__zz_result_payload_x_4_2;
  wire       [31:0]   _zz__zz_result_payload_x_4_3;
  wire       [31:0]   _zz__zz_result_payload_x_20;
  wire       [31:0]   _zz__zz_result_payload_x_20_1;
  wire       [31:0]   _zz__zz_result_payload_x_35;
  wire       [31:0]   _zz__zz_result_payload_x_35_1;
  wire       [31:0]   _zz__zz_result_payload_x_5;
  wire       [31:0]   _zz__zz_result_payload_x_5_1;
  wire       [31:0]   _zz__zz_result_payload_x_5_2;
  wire       [31:0]   _zz__zz_result_payload_x_5_3;
  wire       [31:0]   _zz__zz_result_payload_x_21;
  wire       [31:0]   _zz__zz_result_payload_x_21_1;
  wire       [31:0]   _zz__zz_result_payload_x_36;
  wire       [31:0]   _zz__zz_result_payload_x_36_1;
  wire       [31:0]   _zz__zz_result_payload_x_6;
  wire       [31:0]   _zz__zz_result_payload_x_6_1;
  wire       [31:0]   _zz__zz_result_payload_x_6_2;
  wire       [31:0]   _zz__zz_result_payload_x_6_3;
  wire       [31:0]   _zz__zz_result_payload_x_22;
  wire       [31:0]   _zz__zz_result_payload_x_22_1;
  wire       [31:0]   _zz__zz_result_payload_x_37;
  wire       [31:0]   _zz__zz_result_payload_x_37_1;
  wire       [31:0]   _zz__zz_result_payload_x_7;
  wire       [31:0]   _zz__zz_result_payload_x_7_1;
  wire       [31:0]   _zz__zz_result_payload_x_7_2;
  wire       [31:0]   _zz__zz_result_payload_x_7_3;
  wire       [31:0]   _zz__zz_result_payload_x_23;
  wire       [31:0]   _zz__zz_result_payload_x_23_1;
  wire       [31:0]   _zz__zz_result_payload_x_38;
  wire       [31:0]   _zz__zz_result_payload_x_38_1;
  wire       [31:0]   _zz__zz_result_payload_x_8;
  wire       [31:0]   _zz__zz_result_payload_x_8_1;
  wire       [31:0]   _zz__zz_result_payload_x_8_2;
  wire       [31:0]   _zz__zz_result_payload_x_8_3;
  wire       [31:0]   _zz__zz_result_payload_x_24;
  wire       [31:0]   _zz__zz_result_payload_x_24_1;
  wire       [31:0]   _zz__zz_result_payload_x_39;
  wire       [31:0]   _zz__zz_result_payload_x_39_1;
  wire       [31:0]   _zz__zz_result_payload_x_9;
  wire       [31:0]   _zz__zz_result_payload_x_9_1;
  wire       [31:0]   _zz__zz_result_payload_x_9_2;
  wire       [31:0]   _zz__zz_result_payload_x_9_3;
  wire       [31:0]   _zz__zz_result_payload_x_25;
  wire       [31:0]   _zz__zz_result_payload_x_25_1;
  wire       [31:0]   _zz__zz_result_payload_x_40;
  wire       [31:0]   _zz__zz_result_payload_x_40_1;
  wire       [31:0]   _zz__zz_result_payload_x_10;
  wire       [31:0]   _zz__zz_result_payload_x_10_1;
  wire       [31:0]   _zz__zz_result_payload_x_10_2;
  wire       [31:0]   _zz__zz_result_payload_x_10_3;
  wire       [31:0]   _zz__zz_result_payload_x_26;
  wire       [31:0]   _zz__zz_result_payload_x_26_1;
  wire       [31:0]   _zz__zz_result_payload_x_41;
  wire       [31:0]   _zz__zz_result_payload_x_41_1;
  wire       [31:0]   _zz__zz_result_payload_x_11;
  wire       [31:0]   _zz__zz_result_payload_x_11_1;
  wire       [31:0]   _zz__zz_result_payload_x_11_2;
  wire       [31:0]   _zz__zz_result_payload_x_11_3;
  wire       [31:0]   _zz__zz_result_payload_x_27;
  wire       [31:0]   _zz__zz_result_payload_x_27_1;
  wire       [31:0]   _zz__zz_result_payload_x_42;
  wire       [31:0]   _zz__zz_result_payload_x_42_1;
  wire       [31:0]   _zz__zz_result_payload_x_12;
  wire       [31:0]   _zz__zz_result_payload_x_12_1;
  wire       [31:0]   _zz__zz_result_payload_x_12_2;
  wire       [31:0]   _zz__zz_result_payload_x_12_3;
  wire       [31:0]   _zz__zz_result_payload_x_28;
  wire       [31:0]   _zz__zz_result_payload_x_28_1;
  wire       [31:0]   _zz__zz_result_payload_x_43;
  wire       [31:0]   _zz__zz_result_payload_x_43_1;
  wire       [31:0]   _zz__zz_result_payload_x_13;
  wire       [31:0]   _zz__zz_result_payload_x_13_1;
  wire       [31:0]   _zz__zz_result_payload_x_13_2;
  wire       [31:0]   _zz__zz_result_payload_x_13_3;
  wire       [31:0]   _zz__zz_result_payload_x_29;
  wire       [31:0]   _zz__zz_result_payload_x_29_1;
  wire       [31:0]   _zz__zz_result_payload_x_44;
  wire       [31:0]   _zz__zz_result_payload_x_44_1;
  wire       [31:0]   _zz__zz_result_payload_x_14;
  wire       [31:0]   _zz__zz_result_payload_x_14_1;
  wire       [31:0]   _zz__zz_result_payload_x_14_2;
  wire       [31:0]   _zz__zz_result_payload_x_14_3;
  wire       [31:0]   _zz__zz_result_payload_x_30;
  wire       [31:0]   _zz__zz_result_payload_x_30_1;
  wire       [31:0]   _zz__zz_result_payload_x_45;
  wire       [31:0]   _zz__zz_result_payload_x_45_1;
  wire       [31:0]   _zz__zz_result_payload_x_15;
  wire       [31:0]   _zz__zz_result_payload_x_15_1;
  wire       [31:0]   _zz__zz_result_payload_x_15_2;
  wire       [31:0]   _zz__zz_result_payload_x_15_3;
  wire       [31:0]   _zz__zz_result_payload_y;
  wire       [31:0]   _zz__zz_result_payload_y_1;
  wire       [31:0]   _zz__zz_result_payload_z;
  wire       [31:0]   _zz__zz_result_payload_z_1;
  reg        [31:0]   _zz_result_payload_x;
  reg        [31:0]   _zz_result_payload_x_1;
  reg        [31:0]   _zz_result_payload_x_2;
  reg        [31:0]   _zz_result_payload_x_3;
  reg        [31:0]   _zz_result_payload_x_4;
  reg        [31:0]   _zz_result_payload_x_5;
  reg        [31:0]   _zz_result_payload_x_6;
  reg        [31:0]   _zz_result_payload_x_7;
  reg        [31:0]   _zz_result_payload_x_8;
  reg        [31:0]   _zz_result_payload_x_9;
  reg        [31:0]   _zz_result_payload_x_10;
  reg        [31:0]   _zz_result_payload_x_11;
  reg        [31:0]   _zz_result_payload_x_12;
  reg        [31:0]   _zz_result_payload_x_13;
  reg        [31:0]   _zz_result_payload_x_14;
  reg        [31:0]   _zz_result_payload_x_15;
  reg        [31:0]   _zz_result_payload_x_16;
  reg        [31:0]   _zz_result_payload_x_17;
  reg        [31:0]   _zz_result_payload_x_18;
  reg        [31:0]   _zz_result_payload_x_19;
  reg        [31:0]   _zz_result_payload_x_20;
  reg        [31:0]   _zz_result_payload_x_21;
  reg        [31:0]   _zz_result_payload_x_22;
  reg        [31:0]   _zz_result_payload_x_23;
  reg        [31:0]   _zz_result_payload_x_24;
  reg        [31:0]   _zz_result_payload_x_25;
  reg        [31:0]   _zz_result_payload_x_26;
  reg        [31:0]   _zz_result_payload_x_27;
  reg        [31:0]   _zz_result_payload_x_28;
  reg        [31:0]   _zz_result_payload_x_29;
  reg        [31:0]   _zz_result_payload_x_30;
  reg        [31:0]   _zz_result_payload_y;
  reg        [31:0]   _zz_result_payload_x_31;
  reg        [31:0]   _zz_result_payload_x_32;
  reg        [31:0]   _zz_result_payload_x_33;
  reg        [31:0]   _zz_result_payload_x_34;
  reg        [31:0]   _zz_result_payload_x_35;
  reg        [31:0]   _zz_result_payload_x_36;
  reg        [31:0]   _zz_result_payload_x_37;
  reg        [31:0]   _zz_result_payload_x_38;
  reg        [31:0]   _zz_result_payload_x_39;
  reg        [31:0]   _zz_result_payload_x_40;
  reg        [31:0]   _zz_result_payload_x_41;
  reg        [31:0]   _zz_result_payload_x_42;
  reg        [31:0]   _zz_result_payload_x_43;
  reg        [31:0]   _zz_result_payload_x_44;
  reg        [31:0]   _zz_result_payload_x_45;
  reg        [31:0]   _zz_result_payload_z;
  reg                 _zz_result_valid;
  reg                 _zz_result_valid_1;
  reg                 _zz_result_valid_2;
  reg                 _zz_result_valid_3;
  reg                 _zz_result_valid_4;
  reg                 _zz_result_valid_5;
  reg                 _zz_result_valid_6;
  reg                 _zz_result_valid_7;
  reg                 _zz_result_valid_8;
  reg                 _zz_result_valid_9;
  reg                 _zz_result_valid_10;
  reg                 _zz_result_valid_11;
  reg                 _zz_result_valid_12;
  reg                 _zz_result_valid_13;
  reg                 _zz_result_valid_14;
  reg                 _zz_result_valid_15;
  reg        [31:0]   _zz_result_payload_x_46;
  reg        [31:0]   _zz_result_payload_x_47;
  reg        [31:0]   _zz_result_payload_x_48;
  reg        [31:0]   _zz_result_payload_x_49;
  reg        [31:0]   _zz_result_payload_x_50;
  reg        [31:0]   _zz_result_payload_x_51;
  reg        [31:0]   _zz_result_payload_x_52;
  reg        [31:0]   _zz_result_payload_x_53;
  reg        [31:0]   _zz_result_payload_x_54;
  reg        [31:0]   _zz_result_payload_x_55;
  reg        [31:0]   _zz_result_payload_x_56;
  reg        [31:0]   _zz_result_payload_x_57;
  reg        [31:0]   _zz_result_payload_x_58;
  reg        [31:0]   _zz_result_payload_x_59;
  reg        [31:0]   _zz_result_payload_z_1;
  wire                raw_data_fire;
  wire                _zz_result_payload_x_60;
  wire       [31:0]   _zz_result_payload_x_61;
  wire       [31:0]   _zz_result_payload_x_62;
  wire                _zz_result_payload_x_63;
  wire       [31:0]   _zz_result_payload_x_64;
  wire       [31:0]   _zz_result_payload_x_65;
  wire                _zz_result_payload_x_66;
  wire       [31:0]   _zz_result_payload_x_67;
  wire       [31:0]   _zz_result_payload_x_68;
  wire                _zz_result_payload_x_69;
  wire       [31:0]   _zz_result_payload_x_70;
  wire       [31:0]   _zz_result_payload_x_71;
  wire                _zz_result_payload_x_72;
  wire       [31:0]   _zz_result_payload_x_73;
  wire       [31:0]   _zz_result_payload_x_74;
  wire                _zz_result_payload_x_75;
  wire       [31:0]   _zz_result_payload_x_76;
  wire       [31:0]   _zz_result_payload_x_77;
  wire                _zz_result_payload_x_78;
  wire       [31:0]   _zz_result_payload_x_79;
  wire       [31:0]   _zz_result_payload_x_80;
  wire                _zz_result_payload_x_81;
  wire       [31:0]   _zz_result_payload_x_82;
  wire       [31:0]   _zz_result_payload_x_83;
  wire                _zz_result_payload_x_84;
  wire       [31:0]   _zz_result_payload_x_85;
  wire       [31:0]   _zz_result_payload_x_86;
  wire                _zz_result_payload_x_87;
  wire       [31:0]   _zz_result_payload_x_88;
  wire       [31:0]   _zz_result_payload_x_89;
  wire                _zz_result_payload_x_90;
  wire       [31:0]   _zz_result_payload_x_91;
  wire       [31:0]   _zz_result_payload_x_92;
  wire                _zz_result_payload_x_93;
  wire       [31:0]   _zz_result_payload_x_94;
  wire       [31:0]   _zz_result_payload_x_95;
  wire                _zz_result_payload_x_96;
  wire       [31:0]   _zz_result_payload_x_97;
  wire       [31:0]   _zz_result_payload_x_98;
  wire                _zz_result_payload_x_99;
  wire       [31:0]   _zz_result_payload_x_100;
  wire       [31:0]   _zz_result_payload_x_101;
  wire                _zz_result_payload_x_102;
  wire       [31:0]   _zz_result_payload_y_1;
  wire       [31:0]   _zz_result_payload_x_103;

  assign _zz__zz_result_payload_x_1 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_1_1 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_1_2 = ($signed(_zz_result_payload_x) + $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_1_3 = ($signed(_zz_result_payload_x) - $signed(_zz_result_payload_x_62));
  assign _zz__zz_result_payload_x_17 = ($signed(_zz_result_payload_x_16) + $signed(_zz_result_payload_x_61));
  assign _zz__zz_result_payload_x_17_1 = ($signed(_zz_result_payload_x_16) - $signed(_zz_result_payload_x_61));
  assign _zz__zz_result_payload_x_32 = ($signed(_zz_result_payload_x_31) - $signed(_zz_result_payload_x_46));
  assign _zz__zz_result_payload_x_32_1 = ($signed(_zz_result_payload_x_31) + $signed(_zz_result_payload_x_46));
  assign _zz__zz_result_payload_x_2 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_2_1 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_2_2 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_2_3 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_65));
  assign _zz__zz_result_payload_x_18 = ($signed(_zz_result_payload_x_17) + $signed(_zz_result_payload_x_64));
  assign _zz__zz_result_payload_x_18_1 = ($signed(_zz_result_payload_x_17) - $signed(_zz_result_payload_x_64));
  assign _zz__zz_result_payload_x_33 = ($signed(_zz_result_payload_x_32) - $signed(_zz_result_payload_x_47));
  assign _zz__zz_result_payload_x_33_1 = ($signed(_zz_result_payload_x_32) + $signed(_zz_result_payload_x_47));
  assign _zz__zz_result_payload_x_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_3_1 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_3_2 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_3_3 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_68));
  assign _zz__zz_result_payload_x_19 = ($signed(_zz_result_payload_x_18) + $signed(_zz_result_payload_x_67));
  assign _zz__zz_result_payload_x_19_1 = ($signed(_zz_result_payload_x_18) - $signed(_zz_result_payload_x_67));
  assign _zz__zz_result_payload_x_34 = ($signed(_zz_result_payload_x_33) - $signed(_zz_result_payload_x_48));
  assign _zz__zz_result_payload_x_34_1 = ($signed(_zz_result_payload_x_33) + $signed(_zz_result_payload_x_48));
  assign _zz__zz_result_payload_x_4 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_4_1 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_4_2 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_4_3 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_71));
  assign _zz__zz_result_payload_x_20 = ($signed(_zz_result_payload_x_19) + $signed(_zz_result_payload_x_70));
  assign _zz__zz_result_payload_x_20_1 = ($signed(_zz_result_payload_x_19) - $signed(_zz_result_payload_x_70));
  assign _zz__zz_result_payload_x_35 = ($signed(_zz_result_payload_x_34) - $signed(_zz_result_payload_x_49));
  assign _zz__zz_result_payload_x_35_1 = ($signed(_zz_result_payload_x_34) + $signed(_zz_result_payload_x_49));
  assign _zz__zz_result_payload_x_5 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_5_1 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_5_2 = ($signed(_zz_result_payload_x_4) + $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_5_3 = ($signed(_zz_result_payload_x_4) - $signed(_zz_result_payload_x_74));
  assign _zz__zz_result_payload_x_21 = ($signed(_zz_result_payload_x_20) + $signed(_zz_result_payload_x_73));
  assign _zz__zz_result_payload_x_21_1 = ($signed(_zz_result_payload_x_20) - $signed(_zz_result_payload_x_73));
  assign _zz__zz_result_payload_x_36 = ($signed(_zz_result_payload_x_35) - $signed(_zz_result_payload_x_50));
  assign _zz__zz_result_payload_x_36_1 = ($signed(_zz_result_payload_x_35) + $signed(_zz_result_payload_x_50));
  assign _zz__zz_result_payload_x_6 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_6_1 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_6_2 = ($signed(_zz_result_payload_x_5) + $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_6_3 = ($signed(_zz_result_payload_x_5) - $signed(_zz_result_payload_x_77));
  assign _zz__zz_result_payload_x_22 = ($signed(_zz_result_payload_x_21) + $signed(_zz_result_payload_x_76));
  assign _zz__zz_result_payload_x_22_1 = ($signed(_zz_result_payload_x_21) - $signed(_zz_result_payload_x_76));
  assign _zz__zz_result_payload_x_37 = ($signed(_zz_result_payload_x_36) - $signed(_zz_result_payload_x_51));
  assign _zz__zz_result_payload_x_37_1 = ($signed(_zz_result_payload_x_36) + $signed(_zz_result_payload_x_51));
  assign _zz__zz_result_payload_x_7 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_7_1 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_7_2 = ($signed(_zz_result_payload_x_6) + $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_7_3 = ($signed(_zz_result_payload_x_6) - $signed(_zz_result_payload_x_80));
  assign _zz__zz_result_payload_x_23 = ($signed(_zz_result_payload_x_22) + $signed(_zz_result_payload_x_79));
  assign _zz__zz_result_payload_x_23_1 = ($signed(_zz_result_payload_x_22) - $signed(_zz_result_payload_x_79));
  assign _zz__zz_result_payload_x_38 = ($signed(_zz_result_payload_x_37) - $signed(_zz_result_payload_x_52));
  assign _zz__zz_result_payload_x_38_1 = ($signed(_zz_result_payload_x_37) + $signed(_zz_result_payload_x_52));
  assign _zz__zz_result_payload_x_8 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_8_1 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_8_2 = ($signed(_zz_result_payload_x_7) + $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_8_3 = ($signed(_zz_result_payload_x_7) - $signed(_zz_result_payload_x_83));
  assign _zz__zz_result_payload_x_24 = ($signed(_zz_result_payload_x_23) + $signed(_zz_result_payload_x_82));
  assign _zz__zz_result_payload_x_24_1 = ($signed(_zz_result_payload_x_23) - $signed(_zz_result_payload_x_82));
  assign _zz__zz_result_payload_x_39 = ($signed(_zz_result_payload_x_38) - $signed(_zz_result_payload_x_53));
  assign _zz__zz_result_payload_x_39_1 = ($signed(_zz_result_payload_x_38) + $signed(_zz_result_payload_x_53));
  assign _zz__zz_result_payload_x_9 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_9_1 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_9_2 = ($signed(_zz_result_payload_x_8) + $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_9_3 = ($signed(_zz_result_payload_x_8) - $signed(_zz_result_payload_x_86));
  assign _zz__zz_result_payload_x_25 = ($signed(_zz_result_payload_x_24) + $signed(_zz_result_payload_x_85));
  assign _zz__zz_result_payload_x_25_1 = ($signed(_zz_result_payload_x_24) - $signed(_zz_result_payload_x_85));
  assign _zz__zz_result_payload_x_40 = ($signed(_zz_result_payload_x_39) - $signed(_zz_result_payload_x_54));
  assign _zz__zz_result_payload_x_40_1 = ($signed(_zz_result_payload_x_39) + $signed(_zz_result_payload_x_54));
  assign _zz__zz_result_payload_x_10 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_10_1 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_10_2 = ($signed(_zz_result_payload_x_9) + $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_10_3 = ($signed(_zz_result_payload_x_9) - $signed(_zz_result_payload_x_89));
  assign _zz__zz_result_payload_x_26 = ($signed(_zz_result_payload_x_25) + $signed(_zz_result_payload_x_88));
  assign _zz__zz_result_payload_x_26_1 = ($signed(_zz_result_payload_x_25) - $signed(_zz_result_payload_x_88));
  assign _zz__zz_result_payload_x_41 = ($signed(_zz_result_payload_x_40) - $signed(_zz_result_payload_x_55));
  assign _zz__zz_result_payload_x_41_1 = ($signed(_zz_result_payload_x_40) + $signed(_zz_result_payload_x_55));
  assign _zz__zz_result_payload_x_11 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_11_1 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_11_2 = ($signed(_zz_result_payload_x_10) + $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_11_3 = ($signed(_zz_result_payload_x_10) - $signed(_zz_result_payload_x_92));
  assign _zz__zz_result_payload_x_27 = ($signed(_zz_result_payload_x_26) + $signed(_zz_result_payload_x_91));
  assign _zz__zz_result_payload_x_27_1 = ($signed(_zz_result_payload_x_26) - $signed(_zz_result_payload_x_91));
  assign _zz__zz_result_payload_x_42 = ($signed(_zz_result_payload_x_41) - $signed(_zz_result_payload_x_56));
  assign _zz__zz_result_payload_x_42_1 = ($signed(_zz_result_payload_x_41) + $signed(_zz_result_payload_x_56));
  assign _zz__zz_result_payload_x_12 = ($signed(_zz_result_payload_x_11) - $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_12_1 = ($signed(_zz_result_payload_x_11) + $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_12_2 = ($signed(_zz_result_payload_x_11) + $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_12_3 = ($signed(_zz_result_payload_x_11) - $signed(_zz_result_payload_x_95));
  assign _zz__zz_result_payload_x_28 = ($signed(_zz_result_payload_x_27) + $signed(_zz_result_payload_x_94));
  assign _zz__zz_result_payload_x_28_1 = ($signed(_zz_result_payload_x_27) - $signed(_zz_result_payload_x_94));
  assign _zz__zz_result_payload_x_43 = ($signed(_zz_result_payload_x_42) - $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_43_1 = ($signed(_zz_result_payload_x_42) + $signed(_zz_result_payload_x_57));
  assign _zz__zz_result_payload_x_13 = ($signed(_zz_result_payload_x_12) - $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_13_1 = ($signed(_zz_result_payload_x_12) + $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_13_2 = ($signed(_zz_result_payload_x_12) + $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_13_3 = ($signed(_zz_result_payload_x_12) - $signed(_zz_result_payload_x_98));
  assign _zz__zz_result_payload_x_29 = ($signed(_zz_result_payload_x_28) + $signed(_zz_result_payload_x_97));
  assign _zz__zz_result_payload_x_29_1 = ($signed(_zz_result_payload_x_28) - $signed(_zz_result_payload_x_97));
  assign _zz__zz_result_payload_x_44 = ($signed(_zz_result_payload_x_43) - $signed(_zz_result_payload_x_58));
  assign _zz__zz_result_payload_x_44_1 = ($signed(_zz_result_payload_x_43) + $signed(_zz_result_payload_x_58));
  assign _zz__zz_result_payload_x_14 = ($signed(_zz_result_payload_x_13) - $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_14_1 = ($signed(_zz_result_payload_x_13) + $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_14_2 = ($signed(_zz_result_payload_x_13) + $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_14_3 = ($signed(_zz_result_payload_x_13) - $signed(_zz_result_payload_x_101));
  assign _zz__zz_result_payload_x_30 = ($signed(_zz_result_payload_x_29) + $signed(_zz_result_payload_x_100));
  assign _zz__zz_result_payload_x_30_1 = ($signed(_zz_result_payload_x_29) - $signed(_zz_result_payload_x_100));
  assign _zz__zz_result_payload_x_45 = ($signed(_zz_result_payload_x_44) - $signed(_zz_result_payload_x_59));
  assign _zz__zz_result_payload_x_45_1 = ($signed(_zz_result_payload_x_44) + $signed(_zz_result_payload_x_59));
  assign _zz__zz_result_payload_x_15 = ($signed(_zz_result_payload_x_14) - $signed(_zz_result_payload_x_103));
  assign _zz__zz_result_payload_x_15_1 = ($signed(_zz_result_payload_x_14) + $signed(_zz_result_payload_x_103));
  assign _zz__zz_result_payload_x_15_2 = ($signed(_zz_result_payload_x_14) + $signed(_zz_result_payload_x_103));
  assign _zz__zz_result_payload_x_15_3 = ($signed(_zz_result_payload_x_14) - $signed(_zz_result_payload_x_103));
  assign _zz__zz_result_payload_y = ($signed(_zz_result_payload_x_30) + $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_y_1 = ($signed(_zz_result_payload_x_30) - $signed(_zz_result_payload_y_1));
  assign _zz__zz_result_payload_z = ($signed(_zz_result_payload_x_45) - $signed(_zz_result_payload_z_1));
  assign _zz__zz_result_payload_z_1 = ($signed(_zz_result_payload_x_45) + $signed(_zz_result_payload_z_1));
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign _zz_result_payload_x_60 = (rotate_mode ? (! _zz_result_payload_x_31[31]) : _zz_result_payload_x_16[31]);
  assign _zz_result_payload_x_61 = ($signed(_zz_result_payload_x) >>> 0);
  assign _zz_result_payload_x_62 = ($signed(_zz_result_payload_x_16) >>> 0);
  assign _zz_result_payload_x_63 = (rotate_mode ? (! _zz_result_payload_x_32[31]) : _zz_result_payload_x_17[31]);
  assign _zz_result_payload_x_64 = ($signed(_zz_result_payload_x_1) >>> 1);
  assign _zz_result_payload_x_65 = ($signed(_zz_result_payload_x_17) >>> 1);
  assign _zz_result_payload_x_66 = (rotate_mode ? (! _zz_result_payload_x_33[31]) : _zz_result_payload_x_18[31]);
  assign _zz_result_payload_x_67 = ($signed(_zz_result_payload_x_2) >>> 2);
  assign _zz_result_payload_x_68 = ($signed(_zz_result_payload_x_18) >>> 2);
  assign _zz_result_payload_x_69 = (rotate_mode ? (! _zz_result_payload_x_34[31]) : _zz_result_payload_x_19[31]);
  assign _zz_result_payload_x_70 = ($signed(_zz_result_payload_x_3) >>> 3);
  assign _zz_result_payload_x_71 = ($signed(_zz_result_payload_x_19) >>> 3);
  assign _zz_result_payload_x_72 = (rotate_mode ? (! _zz_result_payload_x_35[31]) : _zz_result_payload_x_20[31]);
  assign _zz_result_payload_x_73 = ($signed(_zz_result_payload_x_4) >>> 4);
  assign _zz_result_payload_x_74 = ($signed(_zz_result_payload_x_20) >>> 4);
  assign _zz_result_payload_x_75 = (rotate_mode ? (! _zz_result_payload_x_36[31]) : _zz_result_payload_x_21[31]);
  assign _zz_result_payload_x_76 = ($signed(_zz_result_payload_x_5) >>> 5);
  assign _zz_result_payload_x_77 = ($signed(_zz_result_payload_x_21) >>> 5);
  assign _zz_result_payload_x_78 = (rotate_mode ? (! _zz_result_payload_x_37[31]) : _zz_result_payload_x_22[31]);
  assign _zz_result_payload_x_79 = ($signed(_zz_result_payload_x_6) >>> 6);
  assign _zz_result_payload_x_80 = ($signed(_zz_result_payload_x_22) >>> 6);
  assign _zz_result_payload_x_81 = (rotate_mode ? (! _zz_result_payload_x_38[31]) : _zz_result_payload_x_23[31]);
  assign _zz_result_payload_x_82 = ($signed(_zz_result_payload_x_7) >>> 7);
  assign _zz_result_payload_x_83 = ($signed(_zz_result_payload_x_23) >>> 7);
  assign _zz_result_payload_x_84 = (rotate_mode ? (! _zz_result_payload_x_39[31]) : _zz_result_payload_x_24[31]);
  assign _zz_result_payload_x_85 = ($signed(_zz_result_payload_x_8) >>> 8);
  assign _zz_result_payload_x_86 = ($signed(_zz_result_payload_x_24) >>> 8);
  assign _zz_result_payload_x_87 = (rotate_mode ? (! _zz_result_payload_x_40[31]) : _zz_result_payload_x_25[31]);
  assign _zz_result_payload_x_88 = ($signed(_zz_result_payload_x_9) >>> 9);
  assign _zz_result_payload_x_89 = ($signed(_zz_result_payload_x_25) >>> 9);
  assign _zz_result_payload_x_90 = (rotate_mode ? (! _zz_result_payload_x_41[31]) : _zz_result_payload_x_26[31]);
  assign _zz_result_payload_x_91 = ($signed(_zz_result_payload_x_10) >>> 10);
  assign _zz_result_payload_x_92 = ($signed(_zz_result_payload_x_26) >>> 10);
  assign _zz_result_payload_x_93 = (rotate_mode ? (! _zz_result_payload_x_42[31]) : _zz_result_payload_x_27[31]);
  assign _zz_result_payload_x_94 = ($signed(_zz_result_payload_x_11) >>> 11);
  assign _zz_result_payload_x_95 = ($signed(_zz_result_payload_x_27) >>> 11);
  assign _zz_result_payload_x_96 = (rotate_mode ? (! _zz_result_payload_x_43[31]) : _zz_result_payload_x_28[31]);
  assign _zz_result_payload_x_97 = ($signed(_zz_result_payload_x_12) >>> 12);
  assign _zz_result_payload_x_98 = ($signed(_zz_result_payload_x_28) >>> 12);
  assign _zz_result_payload_x_99 = (rotate_mode ? (! _zz_result_payload_x_44[31]) : _zz_result_payload_x_29[31]);
  assign _zz_result_payload_x_100 = ($signed(_zz_result_payload_x_13) >>> 13);
  assign _zz_result_payload_x_101 = ($signed(_zz_result_payload_x_29) >>> 13);
  assign _zz_result_payload_x_102 = (rotate_mode ? (! _zz_result_payload_x_45[31]) : _zz_result_payload_x_30[31]);
  assign _zz_result_payload_y_1 = ($signed(_zz_result_payload_x_14) >>> 14);
  assign _zz_result_payload_x_103 = ($signed(_zz_result_payload_x_30) >>> 14);
  assign result_valid = _zz_result_valid_15;
  assign result_payload_x = _zz_result_payload_x_15;
  assign result_payload_y = _zz_result_payload_y;
  assign result_payload_z = _zz_result_payload_z;
  assign raw_data_ready = 1'b1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_result_valid <= 1'b0;
      _zz_result_valid_1 <= 1'b0;
      _zz_result_valid_2 <= 1'b0;
      _zz_result_valid_3 <= 1'b0;
      _zz_result_valid_4 <= 1'b0;
      _zz_result_valid_5 <= 1'b0;
      _zz_result_valid_6 <= 1'b0;
      _zz_result_valid_7 <= 1'b0;
      _zz_result_valid_8 <= 1'b0;
      _zz_result_valid_9 <= 1'b0;
      _zz_result_valid_10 <= 1'b0;
      _zz_result_valid_11 <= 1'b0;
      _zz_result_valid_12 <= 1'b0;
      _zz_result_valid_13 <= 1'b0;
      _zz_result_valid_14 <= 1'b0;
      _zz_result_valid_15 <= 1'b0;
    end else begin
      if(raw_data_fire) begin
        _zz_result_valid <= 1'b1;
      end else begin
        _zz_result_valid <= 1'b0;
      end
      _zz_result_valid_1 <= _zz_result_valid;
      _zz_result_valid_2 <= _zz_result_valid_1;
      _zz_result_valid_3 <= _zz_result_valid_2;
      _zz_result_valid_4 <= _zz_result_valid_3;
      _zz_result_valid_5 <= _zz_result_valid_4;
      _zz_result_valid_6 <= _zz_result_valid_5;
      _zz_result_valid_7 <= _zz_result_valid_6;
      _zz_result_valid_8 <= _zz_result_valid_7;
      _zz_result_valid_9 <= _zz_result_valid_8;
      _zz_result_valid_10 <= _zz_result_valid_9;
      _zz_result_valid_11 <= _zz_result_valid_10;
      _zz_result_valid_12 <= _zz_result_valid_11;
      _zz_result_valid_13 <= _zz_result_valid_12;
      _zz_result_valid_14 <= _zz_result_valid_13;
      _zz_result_valid_15 <= _zz_result_valid_14;
    end
  end

  always @(posedge clk) begin
    _zz_result_payload_x_46 <= 32'h0000c90f;
    _zz_result_payload_x_47 <= 32'h000076b1;
    _zz_result_payload_x_48 <= 32'h00003eb6;
    _zz_result_payload_x_49 <= 32'h00001fd5;
    _zz_result_payload_x_50 <= 32'h00000ffa;
    _zz_result_payload_x_51 <= 32'h000007ff;
    _zz_result_payload_x_52 <= 32'h000003ff;
    _zz_result_payload_x_53 <= 32'h000001ff;
    _zz_result_payload_x_54 <= 32'h000000ff;
    _zz_result_payload_x_55 <= 32'h0000007f;
    _zz_result_payload_x_56 <= 32'h0000003f;
    _zz_result_payload_x_57 <= 32'h0000001f;
    _zz_result_payload_x_58 <= 32'h0000000f;
    _zz_result_payload_x_59 <= 32'h00000007;
    _zz_result_payload_z_1 <= 32'h00000003;
    if(raw_data_fire) begin
      _zz_result_payload_x <= raw_data_payload_x;
      _zz_result_payload_x_16 <= raw_data_payload_y;
      _zz_result_payload_x_31 <= raw_data_payload_z;
    end
    if(_zz_result_valid) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_60 ? _zz__zz_result_payload_x_1 : _zz__zz_result_payload_x_1_1);
        end
        2'b10 : begin
          _zz_result_payload_x_1 <= (_zz_result_payload_x_60 ? _zz__zz_result_payload_x_1_2 : _zz__zz_result_payload_x_1_3);
        end
        default : begin
          _zz_result_payload_x_1 <= _zz_result_payload_x;
        end
      endcase
      _zz_result_payload_x_17 <= (_zz_result_payload_x_60 ? _zz__zz_result_payload_x_17 : _zz__zz_result_payload_x_17_1);
      _zz_result_payload_x_32 <= (_zz_result_payload_x_60 ? _zz__zz_result_payload_x_32 : _zz__zz_result_payload_x_32_1);
    end
    if(_zz_result_valid_1) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_63 ? _zz__zz_result_payload_x_2 : _zz__zz_result_payload_x_2_1);
        end
        2'b10 : begin
          _zz_result_payload_x_2 <= (_zz_result_payload_x_63 ? _zz__zz_result_payload_x_2_2 : _zz__zz_result_payload_x_2_3);
        end
        default : begin
          _zz_result_payload_x_2 <= _zz_result_payload_x_1;
        end
      endcase
      _zz_result_payload_x_18 <= (_zz_result_payload_x_63 ? _zz__zz_result_payload_x_18 : _zz__zz_result_payload_x_18_1);
      _zz_result_payload_x_33 <= (_zz_result_payload_x_63 ? _zz__zz_result_payload_x_33 : _zz__zz_result_payload_x_33_1);
    end
    if(_zz_result_valid_2) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_66 ? _zz__zz_result_payload_x_3 : _zz__zz_result_payload_x_3_1);
        end
        2'b10 : begin
          _zz_result_payload_x_3 <= (_zz_result_payload_x_66 ? _zz__zz_result_payload_x_3_2 : _zz__zz_result_payload_x_3_3);
        end
        default : begin
          _zz_result_payload_x_3 <= _zz_result_payload_x_2;
        end
      endcase
      _zz_result_payload_x_19 <= (_zz_result_payload_x_66 ? _zz__zz_result_payload_x_19 : _zz__zz_result_payload_x_19_1);
      _zz_result_payload_x_34 <= (_zz_result_payload_x_66 ? _zz__zz_result_payload_x_34 : _zz__zz_result_payload_x_34_1);
    end
    if(_zz_result_valid_3) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_69 ? _zz__zz_result_payload_x_4 : _zz__zz_result_payload_x_4_1);
        end
        2'b10 : begin
          _zz_result_payload_x_4 <= (_zz_result_payload_x_69 ? _zz__zz_result_payload_x_4_2 : _zz__zz_result_payload_x_4_3);
        end
        default : begin
          _zz_result_payload_x_4 <= _zz_result_payload_x_3;
        end
      endcase
      _zz_result_payload_x_20 <= (_zz_result_payload_x_69 ? _zz__zz_result_payload_x_20 : _zz__zz_result_payload_x_20_1);
      _zz_result_payload_x_35 <= (_zz_result_payload_x_69 ? _zz__zz_result_payload_x_35 : _zz__zz_result_payload_x_35_1);
    end
    if(_zz_result_valid_4) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_72 ? _zz__zz_result_payload_x_5 : _zz__zz_result_payload_x_5_1);
        end
        2'b10 : begin
          _zz_result_payload_x_5 <= (_zz_result_payload_x_72 ? _zz__zz_result_payload_x_5_2 : _zz__zz_result_payload_x_5_3);
        end
        default : begin
          _zz_result_payload_x_5 <= _zz_result_payload_x_4;
        end
      endcase
      _zz_result_payload_x_21 <= (_zz_result_payload_x_72 ? _zz__zz_result_payload_x_21 : _zz__zz_result_payload_x_21_1);
      _zz_result_payload_x_36 <= (_zz_result_payload_x_72 ? _zz__zz_result_payload_x_36 : _zz__zz_result_payload_x_36_1);
    end
    if(_zz_result_valid_5) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_75 ? _zz__zz_result_payload_x_6 : _zz__zz_result_payload_x_6_1);
        end
        2'b10 : begin
          _zz_result_payload_x_6 <= (_zz_result_payload_x_75 ? _zz__zz_result_payload_x_6_2 : _zz__zz_result_payload_x_6_3);
        end
        default : begin
          _zz_result_payload_x_6 <= _zz_result_payload_x_5;
        end
      endcase
      _zz_result_payload_x_22 <= (_zz_result_payload_x_75 ? _zz__zz_result_payload_x_22 : _zz__zz_result_payload_x_22_1);
      _zz_result_payload_x_37 <= (_zz_result_payload_x_75 ? _zz__zz_result_payload_x_37 : _zz__zz_result_payload_x_37_1);
    end
    if(_zz_result_valid_6) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_78 ? _zz__zz_result_payload_x_7 : _zz__zz_result_payload_x_7_1);
        end
        2'b10 : begin
          _zz_result_payload_x_7 <= (_zz_result_payload_x_78 ? _zz__zz_result_payload_x_7_2 : _zz__zz_result_payload_x_7_3);
        end
        default : begin
          _zz_result_payload_x_7 <= _zz_result_payload_x_6;
        end
      endcase
      _zz_result_payload_x_23 <= (_zz_result_payload_x_78 ? _zz__zz_result_payload_x_23 : _zz__zz_result_payload_x_23_1);
      _zz_result_payload_x_38 <= (_zz_result_payload_x_78 ? _zz__zz_result_payload_x_38 : _zz__zz_result_payload_x_38_1);
    end
    if(_zz_result_valid_7) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_81 ? _zz__zz_result_payload_x_8 : _zz__zz_result_payload_x_8_1);
        end
        2'b10 : begin
          _zz_result_payload_x_8 <= (_zz_result_payload_x_81 ? _zz__zz_result_payload_x_8_2 : _zz__zz_result_payload_x_8_3);
        end
        default : begin
          _zz_result_payload_x_8 <= _zz_result_payload_x_7;
        end
      endcase
      _zz_result_payload_x_24 <= (_zz_result_payload_x_81 ? _zz__zz_result_payload_x_24 : _zz__zz_result_payload_x_24_1);
      _zz_result_payload_x_39 <= (_zz_result_payload_x_81 ? _zz__zz_result_payload_x_39 : _zz__zz_result_payload_x_39_1);
    end
    if(_zz_result_valid_8) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_84 ? _zz__zz_result_payload_x_9 : _zz__zz_result_payload_x_9_1);
        end
        2'b10 : begin
          _zz_result_payload_x_9 <= (_zz_result_payload_x_84 ? _zz__zz_result_payload_x_9_2 : _zz__zz_result_payload_x_9_3);
        end
        default : begin
          _zz_result_payload_x_9 <= _zz_result_payload_x_8;
        end
      endcase
      _zz_result_payload_x_25 <= (_zz_result_payload_x_84 ? _zz__zz_result_payload_x_25 : _zz__zz_result_payload_x_25_1);
      _zz_result_payload_x_40 <= (_zz_result_payload_x_84 ? _zz__zz_result_payload_x_40 : _zz__zz_result_payload_x_40_1);
    end
    if(_zz_result_valid_9) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_87 ? _zz__zz_result_payload_x_10 : _zz__zz_result_payload_x_10_1);
        end
        2'b10 : begin
          _zz_result_payload_x_10 <= (_zz_result_payload_x_87 ? _zz__zz_result_payload_x_10_2 : _zz__zz_result_payload_x_10_3);
        end
        default : begin
          _zz_result_payload_x_10 <= _zz_result_payload_x_9;
        end
      endcase
      _zz_result_payload_x_26 <= (_zz_result_payload_x_87 ? _zz__zz_result_payload_x_26 : _zz__zz_result_payload_x_26_1);
      _zz_result_payload_x_41 <= (_zz_result_payload_x_87 ? _zz__zz_result_payload_x_41 : _zz__zz_result_payload_x_41_1);
    end
    if(_zz_result_valid_10) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_90 ? _zz__zz_result_payload_x_11 : _zz__zz_result_payload_x_11_1);
        end
        2'b10 : begin
          _zz_result_payload_x_11 <= (_zz_result_payload_x_90 ? _zz__zz_result_payload_x_11_2 : _zz__zz_result_payload_x_11_3);
        end
        default : begin
          _zz_result_payload_x_11 <= _zz_result_payload_x_10;
        end
      endcase
      _zz_result_payload_x_27 <= (_zz_result_payload_x_90 ? _zz__zz_result_payload_x_27 : _zz__zz_result_payload_x_27_1);
      _zz_result_payload_x_42 <= (_zz_result_payload_x_90 ? _zz__zz_result_payload_x_42 : _zz__zz_result_payload_x_42_1);
    end
    if(_zz_result_valid_11) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_12 <= (_zz_result_payload_x_93 ? _zz__zz_result_payload_x_12 : _zz__zz_result_payload_x_12_1);
        end
        2'b10 : begin
          _zz_result_payload_x_12 <= (_zz_result_payload_x_93 ? _zz__zz_result_payload_x_12_2 : _zz__zz_result_payload_x_12_3);
        end
        default : begin
          _zz_result_payload_x_12 <= _zz_result_payload_x_11;
        end
      endcase
      _zz_result_payload_x_28 <= (_zz_result_payload_x_93 ? _zz__zz_result_payload_x_28 : _zz__zz_result_payload_x_28_1);
      _zz_result_payload_x_43 <= (_zz_result_payload_x_93 ? _zz__zz_result_payload_x_43 : _zz__zz_result_payload_x_43_1);
    end
    if(_zz_result_valid_12) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_13 <= (_zz_result_payload_x_96 ? _zz__zz_result_payload_x_13 : _zz__zz_result_payload_x_13_1);
        end
        2'b10 : begin
          _zz_result_payload_x_13 <= (_zz_result_payload_x_96 ? _zz__zz_result_payload_x_13_2 : _zz__zz_result_payload_x_13_3);
        end
        default : begin
          _zz_result_payload_x_13 <= _zz_result_payload_x_12;
        end
      endcase
      _zz_result_payload_x_29 <= (_zz_result_payload_x_96 ? _zz__zz_result_payload_x_29 : _zz__zz_result_payload_x_29_1);
      _zz_result_payload_x_44 <= (_zz_result_payload_x_96 ? _zz__zz_result_payload_x_44 : _zz__zz_result_payload_x_44_1);
    end
    if(_zz_result_valid_13) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_14 <= (_zz_result_payload_x_99 ? _zz__zz_result_payload_x_14 : _zz__zz_result_payload_x_14_1);
        end
        2'b10 : begin
          _zz_result_payload_x_14 <= (_zz_result_payload_x_99 ? _zz__zz_result_payload_x_14_2 : _zz__zz_result_payload_x_14_3);
        end
        default : begin
          _zz_result_payload_x_14 <= _zz_result_payload_x_13;
        end
      endcase
      _zz_result_payload_x_30 <= (_zz_result_payload_x_99 ? _zz__zz_result_payload_x_30 : _zz__zz_result_payload_x_30_1);
      _zz_result_payload_x_45 <= (_zz_result_payload_x_99 ? _zz__zz_result_payload_x_45 : _zz__zz_result_payload_x_45_1);
    end
    if(_zz_result_valid_14) begin
      case(x_u)
        2'b00 : begin
          _zz_result_payload_x_15 <= (_zz_result_payload_x_102 ? _zz__zz_result_payload_x_15 : _zz__zz_result_payload_x_15_1);
        end
        2'b10 : begin
          _zz_result_payload_x_15 <= (_zz_result_payload_x_102 ? _zz__zz_result_payload_x_15_2 : _zz__zz_result_payload_x_15_3);
        end
        default : begin
          _zz_result_payload_x_15 <= _zz_result_payload_x_14;
        end
      endcase
      _zz_result_payload_y <= (_zz_result_payload_x_102 ? _zz__zz_result_payload_y : _zz__zz_result_payload_y_1);
      _zz_result_payload_z <= (_zz_result_payload_x_102 ? _zz__zz_result_payload_z : _zz__zz_result_payload_z_1);
    end
  end


endmodule
