// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : PowerMeter
// Git hash  : d56fca2d93dfc76f393b3b10236c69be445a29e8



module PowerMeter (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_cha_i,
  input      [15:0]   raw_data_payload_cha_q,
  output              power_result_valid,
  output     [15:0]   power_result_payload_cha_i,
  output     [15:0]   power_result_payload_cha_q,
  input               clk,
  input               reset
);
  wire       [10:0]   shiftRegisterE_2_output_1;
  wire       [10:0]   shiftRegisterE_3_output_1;
  wire       [32:0]   _zz__zz_when_SInt_l332_2;
  wire       [32:0]   _zz__zz_when_SInt_l332_2_1;
  wire       [20:0]   _zz_when_SInt_l186;
  wire       [11:0]   _zz__zz_power_cal_i_3;
  wire       [11:0]   _zz__zz_power_cal_i_3_1;
  wire       [32:0]   _zz__zz_power_cal_i;
  wire       [32:0]   _zz__zz_power_cal_i_1;
  wire       [32:0]   _zz__zz_power_cal_i_2;
  wire       [1:0]    _zz_when_SInt_l126;
  wire       [0:0]    _zz_when_SInt_l132;
  wire       [32:0]   _zz__zz_when_SInt_l332_5;
  wire       [32:0]   _zz__zz_when_SInt_l332_5_1;
  wire       [20:0]   _zz_when_SInt_l186_1;
  wire       [11:0]   _zz__zz_power_cal_q_3;
  wire       [11:0]   _zz__zz_power_cal_q_3_1;
  wire       [32:0]   _zz__zz_power_cal_q;
  wire       [32:0]   _zz__zz_power_cal_q_1;
  wire       [32:0]   _zz__zz_power_cal_q_2;
  wire       [1:0]    _zz_when_SInt_l126_1;
  wire       [0:0]    _zz_when_SInt_l132_1;
  wire       [15:0]   _zz_power_val_i;
  wire       [15:0]   _zz_power_val_i_1;
  wire       [15:0]   _zz_power_val_i_2;
  wire       [15:0]   _zz_power_val_q;
  wire       [15:0]   _zz_power_val_q_1;
  wire       [15:0]   _zz_power_val_q_2;
  reg        [15:0]   power_val_cha_i;
  reg        [15:0]   power_val_cha_q;
  reg        [15:0]   power_val_i;
  reg        [15:0]   power_val_q;
  wire       [31:0]   sq_i;
  wire       [31:0]   sq_q;
  reg        [31:0]   sq_i_regNext;
  reg        [11:0]   _zz_power_cal_i;
  wire       [31:0]   _zz_power_cal_i_1;
  wire       [31:0]   _zz_when_SInt_l332;
  wire       [31:0]   _zz_when_SInt_l332_1;
  wire       [32:0]   _zz_when_SInt_l332_2;
  wire       [31:0]   _zz_power_cal_i_2;
  wire                when_SInt_l332;
  reg        [11:0]   _zz_power_cal_i_3;
  wire                when_SInt_l186;
  reg        [10:0]   power_cal_i;
  wire                when_SInt_l125;
  wire                when_SInt_l126;
  wire                when_SInt_l132;
  reg        [31:0]   sq_q_regNext;
  reg        [11:0]   _zz_power_cal_q;
  wire       [31:0]   _zz_power_cal_q_1;
  wire       [31:0]   _zz_when_SInt_l332_3;
  wire       [31:0]   _zz_when_SInt_l332_4;
  wire       [32:0]   _zz_when_SInt_l332_5;
  wire       [31:0]   _zz_power_cal_q_2;
  wire                when_SInt_l332_1;
  reg        [11:0]   _zz_power_cal_q_3;
  wire                when_SInt_l186_1;
  reg        [10:0]   power_cal_q;
  wire                when_SInt_l125_1;
  wire                when_SInt_l126_1;
  wire                when_SInt_l132_1;
  reg                 power_cal_valid;
  reg                 power_result_valid_1;

  assign _zz__zz_when_SInt_l332_2 = {_zz_when_SInt_l332_1[31],_zz_when_SInt_l332_1};
  assign _zz__zz_when_SInt_l332_2_1 = {_zz_when_SInt_l332[31],_zz_when_SInt_l332};
  assign _zz_when_SInt_l186 = _zz_when_SInt_l332_2[20 : 0];
  assign _zz__zz_power_cal_i_3 = _zz_when_SInt_l332_2[32 : 21];
  assign _zz__zz_power_cal_i_3_1 = 12'h001;
  assign _zz__zz_power_cal_i = ($signed(_zz__zz_power_cal_i_1) + $signed(_zz__zz_power_cal_i_2));
  assign _zz__zz_power_cal_i_1 = {_zz_power_cal_i_2[31],_zz_power_cal_i_2};
  assign _zz__zz_power_cal_i_2 = {_zz_power_cal_i_1[31],_zz_power_cal_i_1};
  assign _zz_when_SInt_l126 = _zz_power_cal_i[11 : 10];
  assign _zz_when_SInt_l132 = _zz_power_cal_i[10 : 10];
  assign _zz__zz_when_SInt_l332_5 = {_zz_when_SInt_l332_4[31],_zz_when_SInt_l332_4};
  assign _zz__zz_when_SInt_l332_5_1 = {_zz_when_SInt_l332_3[31],_zz_when_SInt_l332_3};
  assign _zz_when_SInt_l186_1 = _zz_when_SInt_l332_5[20 : 0];
  assign _zz__zz_power_cal_q_3 = _zz_when_SInt_l332_5[32 : 21];
  assign _zz__zz_power_cal_q_3_1 = 12'h001;
  assign _zz__zz_power_cal_q = ($signed(_zz__zz_power_cal_q_1) + $signed(_zz__zz_power_cal_q_2));
  assign _zz__zz_power_cal_q_1 = {_zz_power_cal_q_2[31],_zz_power_cal_q_2};
  assign _zz__zz_power_cal_q_2 = {_zz_power_cal_q_1[31],_zz_power_cal_q_1};
  assign _zz_when_SInt_l126_1 = _zz_power_cal_q[11 : 10];
  assign _zz_when_SInt_l132_1 = _zz_power_cal_q[10 : 10];
  assign _zz_power_val_i = ($signed(power_val_i) - $signed(_zz_power_val_i_1));
  assign _zz_power_val_i_1 = {{5{shiftRegisterE_2_output_1[10]}}, shiftRegisterE_2_output_1};
  assign _zz_power_val_i_2 = {{5{power_cal_i[10]}}, power_cal_i};
  assign _zz_power_val_q = ($signed(power_val_q) - $signed(_zz_power_val_q_1));
  assign _zz_power_val_q_1 = {{5{shiftRegisterE_3_output_1[10]}}, shiftRegisterE_3_output_1};
  assign _zz_power_val_q_2 = {{5{power_cal_q[10]}}, power_cal_q};
  ShiftRegisterE shiftRegisterE_2 (
    .input_1     (power_cal_i                ), //i
    .output_1    (shiftRegisterE_2_output_1  ), //o
    .enable      (power_cal_valid            ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegisterE shiftRegisterE_3 (
    .input_1     (power_cal_q                ), //i
    .output_1    (shiftRegisterE_3_output_1  ), //o
    .enable      (power_cal_valid            ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  assign sq_i = ($signed(raw_data_payload_cha_i) * $signed(raw_data_payload_cha_i));
  assign sq_q = ($signed(raw_data_payload_cha_q) * $signed(raw_data_payload_cha_q));
  assign _zz_power_cal_i_1 = {{11'h0,1'b1},20'h0};
  assign _zz_when_SInt_l332 = {12'hfff,20'h0};
  assign _zz_when_SInt_l332_1 = sq_i_regNext[31 : 0];
  assign _zz_when_SInt_l332_2 = ($signed(_zz__zz_when_SInt_l332_2) + $signed(_zz__zz_when_SInt_l332_2_1));
  assign _zz_power_cal_i_2 = sq_i_regNext[31 : 0];
  assign when_SInt_l332 = _zz_when_SInt_l332_2[32];
  assign when_SInt_l186 = (_zz_when_SInt_l186 != 21'h0);
  always @(*) begin
    if(when_SInt_l186) begin
      _zz_power_cal_i_3 = ($signed(_zz__zz_power_cal_i_3) + $signed(_zz__zz_power_cal_i_3_1));
    end else begin
      _zz_power_cal_i_3 = _zz_when_SInt_l332_2[32 : 21];
    end
  end

  always @(*) begin
    if(when_SInt_l332) begin
      _zz_power_cal_i = _zz_power_cal_i_3;
    end else begin
      _zz_power_cal_i = (_zz__zz_power_cal_i >>> 21);
    end
  end

  assign when_SInt_l125 = _zz_power_cal_i[11];
  assign when_SInt_l126 = (! (_zz_when_SInt_l126 == 2'b11));
  always @(*) begin
    if(when_SInt_l125) begin
      if(when_SInt_l126) begin
        power_cal_i = 11'h400;
      end else begin
        power_cal_i = _zz_power_cal_i[10 : 0];
      end
    end else begin
      if(when_SInt_l132) begin
        power_cal_i = 11'h3ff;
      end else begin
        power_cal_i = _zz_power_cal_i[10 : 0];
      end
    end
  end

  assign when_SInt_l132 = (_zz_when_SInt_l132 != 1'b0);
  assign _zz_power_cal_q_1 = {{11'h0,1'b1},20'h0};
  assign _zz_when_SInt_l332_3 = {12'hfff,20'h0};
  assign _zz_when_SInt_l332_4 = sq_q_regNext[31 : 0];
  assign _zz_when_SInt_l332_5 = ($signed(_zz__zz_when_SInt_l332_5) + $signed(_zz__zz_when_SInt_l332_5_1));
  assign _zz_power_cal_q_2 = sq_q_regNext[31 : 0];
  assign when_SInt_l332_1 = _zz_when_SInt_l332_5[32];
  assign when_SInt_l186_1 = (_zz_when_SInt_l186_1 != 21'h0);
  always @(*) begin
    if(when_SInt_l186_1) begin
      _zz_power_cal_q_3 = ($signed(_zz__zz_power_cal_q_3) + $signed(_zz__zz_power_cal_q_3_1));
    end else begin
      _zz_power_cal_q_3 = _zz_when_SInt_l332_5[32 : 21];
    end
  end

  always @(*) begin
    if(when_SInt_l332_1) begin
      _zz_power_cal_q = _zz_power_cal_q_3;
    end else begin
      _zz_power_cal_q = (_zz__zz_power_cal_q >>> 21);
    end
  end

  assign when_SInt_l125_1 = _zz_power_cal_q[11];
  assign when_SInt_l126_1 = (! (_zz_when_SInt_l126_1 == 2'b11));
  always @(*) begin
    if(when_SInt_l125_1) begin
      if(when_SInt_l126_1) begin
        power_cal_q = 11'h400;
      end else begin
        power_cal_q = _zz_power_cal_q[10 : 0];
      end
    end else begin
      if(when_SInt_l132_1) begin
        power_cal_q = 11'h3ff;
      end else begin
        power_cal_q = _zz_power_cal_q[10 : 0];
      end
    end
  end

  assign when_SInt_l132_1 = (_zz_when_SInt_l132_1 != 1'b0);
  assign power_result_payload_cha_i = power_val_cha_i;
  assign power_result_payload_cha_q = power_val_cha_q;
  assign power_result_valid = power_result_valid_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      power_val_i <= 16'h0;
      power_val_q <= 16'h0;
      power_cal_valid <= 1'b0;
      power_result_valid_1 <= 1'b0;
    end else begin
      power_cal_valid <= raw_data_valid;
      if(power_cal_valid) begin
        power_val_i <= ($signed(_zz_power_val_i) + $signed(_zz_power_val_i_2));
        power_val_q <= ($signed(_zz_power_val_q) + $signed(_zz_power_val_q_2));
        power_result_valid_1 <= 1'b1;
      end else begin
        power_result_valid_1 <= 1'b0;
        power_val_i <= 16'h0;
        power_val_q <= 16'h0;
      end
    end
  end

  always @(posedge clk) begin
    power_val_cha_i <= power_val_i;
    power_val_cha_q <= power_val_q;
    sq_i_regNext <= sq_i;
    sq_q_regNext <= sq_q;
  end


endmodule

//ShiftRegisterE replaced by ShiftRegisterE

module ShiftRegisterE (
  input      [10:0]   input_1,
  output     [10:0]   output_1,
  input               enable,
  input               clk,
  input               reset
);
  reg        [10:0]   shift_reg_0;
  reg        [10:0]   shift_reg_1;
  reg        [10:0]   shift_reg_2;
  reg        [10:0]   shift_reg_3;
  reg        [10:0]   shift_reg_4;
  reg        [10:0]   shift_reg_5;
  reg        [10:0]   shift_reg_6;
  reg        [10:0]   shift_reg_7;
  reg        [10:0]   shift_reg_8;
  reg        [10:0]   shift_reg_9;
  reg        [10:0]   shift_reg_10;
  reg        [10:0]   shift_reg_11;
  reg        [10:0]   shift_reg_12;
  reg        [10:0]   shift_reg_13;
  reg        [10:0]   shift_reg_14;
  reg        [10:0]   shift_reg_15;
  reg        [10:0]   shift_reg_16;
  reg        [10:0]   shift_reg_17;
  reg        [10:0]   shift_reg_18;
  reg        [10:0]   shift_reg_19;
  reg        [10:0]   shift_reg_20;
  reg        [10:0]   shift_reg_21;
  reg        [10:0]   shift_reg_22;
  reg        [10:0]   shift_reg_23;
  reg        [10:0]   shift_reg_24;
  reg        [10:0]   shift_reg_25;
  reg        [10:0]   shift_reg_26;
  reg        [10:0]   shift_reg_27;
  reg        [10:0]   shift_reg_28;
  reg        [10:0]   shift_reg_29;
  reg        [10:0]   shift_reg_30;
  reg        [10:0]   shift_reg_31;

  assign output_1 = shift_reg_31;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 11'h0;
      shift_reg_1 <= 11'h0;
      shift_reg_2 <= 11'h0;
      shift_reg_3 <= 11'h0;
      shift_reg_4 <= 11'h0;
      shift_reg_5 <= 11'h0;
      shift_reg_6 <= 11'h0;
      shift_reg_7 <= 11'h0;
      shift_reg_8 <= 11'h0;
      shift_reg_9 <= 11'h0;
      shift_reg_10 <= 11'h0;
      shift_reg_11 <= 11'h0;
      shift_reg_12 <= 11'h0;
      shift_reg_13 <= 11'h0;
      shift_reg_14 <= 11'h0;
      shift_reg_15 <= 11'h0;
      shift_reg_16 <= 11'h0;
      shift_reg_17 <= 11'h0;
      shift_reg_18 <= 11'h0;
      shift_reg_19 <= 11'h0;
      shift_reg_20 <= 11'h0;
      shift_reg_21 <= 11'h0;
      shift_reg_22 <= 11'h0;
      shift_reg_23 <= 11'h0;
      shift_reg_24 <= 11'h0;
      shift_reg_25 <= 11'h0;
      shift_reg_26 <= 11'h0;
      shift_reg_27 <= 11'h0;
      shift_reg_28 <= 11'h0;
      shift_reg_29 <= 11'h0;
      shift_reg_30 <= 11'h0;
      shift_reg_31 <= 11'h0;
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
        shift_reg_8 <= shift_reg_7;
        shift_reg_9 <= shift_reg_8;
        shift_reg_10 <= shift_reg_9;
        shift_reg_11 <= shift_reg_10;
        shift_reg_12 <= shift_reg_11;
        shift_reg_13 <= shift_reg_12;
        shift_reg_14 <= shift_reg_13;
        shift_reg_15 <= shift_reg_14;
        shift_reg_16 <= shift_reg_15;
        shift_reg_17 <= shift_reg_16;
        shift_reg_18 <= shift_reg_17;
        shift_reg_19 <= shift_reg_18;
        shift_reg_20 <= shift_reg_19;
        shift_reg_21 <= shift_reg_20;
        shift_reg_22 <= shift_reg_21;
        shift_reg_23 <= shift_reg_22;
        shift_reg_24 <= shift_reg_23;
        shift_reg_25 <= shift_reg_24;
        shift_reg_26 <= shift_reg_25;
        shift_reg_27 <= shift_reg_26;
        shift_reg_28 <= shift_reg_27;
        shift_reg_29 <= shift_reg_28;
        shift_reg_30 <= shift_reg_29;
        shift_reg_31 <= shift_reg_30;
      end else begin
        shift_reg_0 <= 11'h0;
        shift_reg_1 <= 11'h0;
        shift_reg_2 <= 11'h0;
        shift_reg_3 <= 11'h0;
        shift_reg_4 <= 11'h0;
        shift_reg_5 <= 11'h0;
        shift_reg_6 <= 11'h0;
        shift_reg_7 <= 11'h0;
        shift_reg_8 <= 11'h0;
        shift_reg_9 <= 11'h0;
        shift_reg_10 <= 11'h0;
        shift_reg_11 <= 11'h0;
        shift_reg_12 <= 11'h0;
        shift_reg_13 <= 11'h0;
        shift_reg_14 <= 11'h0;
        shift_reg_15 <= 11'h0;
        shift_reg_16 <= 11'h0;
        shift_reg_17 <= 11'h0;
        shift_reg_18 <= 11'h0;
        shift_reg_19 <= 11'h0;
        shift_reg_20 <= 11'h0;
        shift_reg_21 <= 11'h0;
        shift_reg_22 <= 11'h0;
        shift_reg_23 <= 11'h0;
        shift_reg_24 <= 11'h0;
        shift_reg_25 <= 11'h0;
        shift_reg_26 <= 11'h0;
        shift_reg_27 <= 11'h0;
        shift_reg_28 <= 11'h0;
        shift_reg_29 <= 11'h0;
        shift_reg_30 <= 11'h0;
        shift_reg_31 <= 11'h0;
      end
    end
  end


endmodule
