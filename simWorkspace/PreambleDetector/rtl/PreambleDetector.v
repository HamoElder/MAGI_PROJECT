// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : PreambleDetector
// Git hash  : 1f5632c8ce5efe58018928592807f632002415cc

`timescale 1ns/1ps 

module PreambleDetector (
  input      [7:0]    min_plateau,
  output              pkg_detected,
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              raw_data_out_valid,
  output     [11:0]   raw_data_out_payload_cha_i,
  output     [11:0]   raw_data_out_payload_cha_q,
  input               clk,
  input               reset
);

  wire                powerMeter_1_power_result_valid;
  wire       [23:0]   powerMeter_1_power_result_payload_cha_i;
  wire       [23:0]   powerMeter_1_power_result_payload_cha_q;
  wire                crossCorrelator_1_corr_result_valid;
  wire       [35:0]   crossCorrelator_1_corr_result_payload_cha_i;
  wire       [35:0]   crossCorrelator_1_corr_result_payload_cha_q;
  wire       [23:0]   _zz__zz_gate_pkg_det;
  wire       [23:0]   _zz__zz_gate_pkg_det_1;
  wire       [23:0]   _zz__zz_gate_pkg_det_2;
  wire       [23:0]   _zz__zz_gate_pkg_det_3;
  wire       [0:0]    _zz__zz_gate_pkg_det_4;
  wire       [23:0]   _zz__zz_gate_pkg_det_5;
  wire       [23:0]   _zz__zz_gate_pkg_det_6;
  wire       [23:0]   _zz__zz_gate_pkg_det_7;
  wire       [23:0]   _zz__zz_gate_pkg_det_8;
  wire       [0:0]    _zz__zz_gate_pkg_det_9;
  wire       [35:0]   _zz_gate_pkg_det_1;
  wire       [22:0]   _zz_gate_pkg_det_2;
  wire       [22:0]   _zz_gate_pkg_det_3;
  wire       [22:0]   _zz_gate_pkg_det_4;
  wire       [21:0]   _zz_gate_pkg_det_5;
  wire       [35:0]   _zz_prod_avg_mag;
  wire       [35:0]   _zz_prod_avg_mag_1;
  wire       [35:0]   _zz_prod_avg_mag_2;
  wire       [35:0]   _zz_prod_avg_mag_3;
  wire       [0:0]    _zz_prod_avg_mag_4;
  wire       [35:0]   _zz_prod_avg_mag_5;
  wire       [35:0]   _zz_prod_avg_mag_6;
  wire       [35:0]   _zz_prod_avg_mag_7;
  wire       [35:0]   _zz_prod_avg_mag_8;
  wire       [0:0]    _zz_prod_avg_mag_9;
  reg                 gate_pkg_det;
  reg        [35:0]   prod_avg_mag;
  reg        [7:0]    plateau_cnt;
  wire       [23:0]   _zz_gate_pkg_det;
  wire                when_PreambleDetector_l64;

  assign _zz__zz_gate_pkg_det = (_zz__zz_gate_pkg_det_1 + _zz__zz_gate_pkg_det_3);
  assign _zz__zz_gate_pkg_det_1 = (powerMeter_1_power_result_payload_cha_i[23] ? _zz__zz_gate_pkg_det_2 : powerMeter_1_power_result_payload_cha_i);
  assign _zz__zz_gate_pkg_det_2 = (~ powerMeter_1_power_result_payload_cha_i);
  assign _zz__zz_gate_pkg_det_4 = powerMeter_1_power_result_payload_cha_i[23];
  assign _zz__zz_gate_pkg_det_3 = {23'd0, _zz__zz_gate_pkg_det_4};
  assign _zz__zz_gate_pkg_det_5 = (_zz__zz_gate_pkg_det_6 + _zz__zz_gate_pkg_det_8);
  assign _zz__zz_gate_pkg_det_6 = (powerMeter_1_power_result_payload_cha_q[23] ? _zz__zz_gate_pkg_det_7 : powerMeter_1_power_result_payload_cha_q);
  assign _zz__zz_gate_pkg_det_7 = (~ powerMeter_1_power_result_payload_cha_q);
  assign _zz__zz_gate_pkg_det_9 = powerMeter_1_power_result_payload_cha_q[23];
  assign _zz__zz_gate_pkg_det_8 = {23'd0, _zz__zz_gate_pkg_det_9};
  assign _zz_gate_pkg_det_2 = (_zz_gate_pkg_det_3 + _zz_gate_pkg_det_4);
  assign _zz_gate_pkg_det_1 = {13'd0, _zz_gate_pkg_det_2};
  assign _zz_gate_pkg_det_3 = (_zz_gate_pkg_det >>> 1);
  assign _zz_gate_pkg_det_5 = (_zz_gate_pkg_det >>> 2);
  assign _zz_gate_pkg_det_4 = {1'd0, _zz_gate_pkg_det_5};
  assign _zz_prod_avg_mag = (_zz_prod_avg_mag_1 + _zz_prod_avg_mag_3);
  assign _zz_prod_avg_mag_1 = (crossCorrelator_1_corr_result_payload_cha_i[35] ? _zz_prod_avg_mag_2 : crossCorrelator_1_corr_result_payload_cha_i);
  assign _zz_prod_avg_mag_2 = (~ crossCorrelator_1_corr_result_payload_cha_i);
  assign _zz_prod_avg_mag_4 = crossCorrelator_1_corr_result_payload_cha_i[35];
  assign _zz_prod_avg_mag_3 = {35'd0, _zz_prod_avg_mag_4};
  assign _zz_prod_avg_mag_5 = (_zz_prod_avg_mag_6 + _zz_prod_avg_mag_8);
  assign _zz_prod_avg_mag_6 = (crossCorrelator_1_corr_result_payload_cha_q[35] ? _zz_prod_avg_mag_7 : crossCorrelator_1_corr_result_payload_cha_q);
  assign _zz_prod_avg_mag_7 = (~ crossCorrelator_1_corr_result_payload_cha_q);
  assign _zz_prod_avg_mag_9 = crossCorrelator_1_corr_result_payload_cha_q[35];
  assign _zz_prod_avg_mag_8 = {35'd0, _zz_prod_avg_mag_9};
  PowerMeter powerMeter_1 (
    .raw_data_valid                (raw_data_valid                                 ), //i
    .raw_data_payload_cha_i        (raw_data_payload_cha_i[11:0]                   ), //i
    .raw_data_payload_cha_q        (raw_data_payload_cha_q[11:0]                   ), //i
    .power_result_valid            (powerMeter_1_power_result_valid                ), //o
    .power_result_payload_cha_i    (powerMeter_1_power_result_payload_cha_i[23:0]  ), //o
    .power_result_payload_cha_q    (powerMeter_1_power_result_payload_cha_q[23:0]  ), //o
    .clk                           (clk                                            ), //i
    .reset                         (reset                                          )  //i
  );
  CrossCorrelator crossCorrelator_1 (
    .raw_data_valid               (raw_data_valid                                     ), //i
    .raw_data_payload_cha_i       (raw_data_payload_cha_i[11:0]                       ), //i
    .raw_data_payload_cha_q       (raw_data_payload_cha_q[11:0]                       ), //i
    .corr_result_valid            (crossCorrelator_1_corr_result_valid                ), //o
    .corr_result_payload_cha_i    (crossCorrelator_1_corr_result_payload_cha_i[35:0]  ), //o
    .corr_result_payload_cha_q    (crossCorrelator_1_corr_result_payload_cha_q[35:0]  ), //o
    .clk                          (clk                                                ), //i
    .reset                        (reset                                              )  //i
  );
  assign _zz_gate_pkg_det = (_zz__zz_gate_pkg_det + _zz__zz_gate_pkg_det_5);
  assign when_PreambleDetector_l64 = (plateau_cnt < 8'hff);
  assign raw_data_out_valid = raw_data_valid;
  assign raw_data_out_payload_cha_i = raw_data_payload_cha_i;
  assign raw_data_out_payload_cha_q = raw_data_payload_cha_q;
  assign pkg_detected = ((min_plateau <= plateau_cnt) && gate_pkg_det);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      gate_pkg_det <= 1'b0;
      prod_avg_mag <= 36'h0;
      plateau_cnt <= 8'h0;
    end else begin
      if(powerMeter_1_power_result_valid) begin
        gate_pkg_det <= (_zz_gate_pkg_det_1 < prod_avg_mag);
      end else begin
        gate_pkg_det <= 1'b0;
      end
      if(gate_pkg_det) begin
        if(when_PreambleDetector_l64) begin
          plateau_cnt <= (plateau_cnt + 8'h01);
        end
      end else begin
        plateau_cnt <= 8'h0;
      end
      if(crossCorrelator_1_corr_result_valid) begin
        prod_avg_mag <= (_zz_prod_avg_mag + _zz_prod_avg_mag_5);
      end else begin
        prod_avg_mag <= 36'h0;
      end
    end
  end


endmodule

module CrossCorrelator (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              corr_result_valid,
  output     [35:0]   corr_result_payload_cha_i,
  output     [35:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);

  reg        [11:0]   _zz_I_mem_port0;
  reg        [11:0]   _zz_Q_mem_port0;
  wire                corr_core_corr_result_valid;
  wire       [35:0]   corr_core_corr_result_payload_cha_i;
  wire       [35:0]   corr_core_corr_result_payload_cha_q;
  wire       [3:0]    _zz_I_mem_port;
  wire                _zz_I_mem_port_1;
  wire       [3:0]    _zz_iq_cursor_cha_i_1;
  wire                _zz_iq_cursor_cha_i_2;
  wire       [3:0]    _zz_Q_mem_port;
  wire                _zz_Q_mem_port_1;
  wire       [3:0]    _zz_iq_cursor_cha_q_1;
  wire                _zz_iq_cursor_cha_q_2;
  wire       [4:0]    _zz_cnt;
  reg        [4:0]    cnt;
  wire       [11:0]   iq_cursor_cha_i;
  wire       [11:0]   iq_cursor_cha_q;
  wire       [4:0]    _zz_iq_cursor_cha_i;
  wire       [4:0]    _zz_iq_cursor_cha_q;
  (* rom_style = "block" *) reg [11:0] I_mem [0:15];
  (* rom_style = "block" *) reg [11:0] Q_mem [0:15];

  assign _zz_iq_cursor_cha_i_1 = _zz_iq_cursor_cha_i[3:0];
  assign _zz_iq_cursor_cha_q_1 = _zz_iq_cursor_cha_q[3:0];
  assign _zz_cnt = (cnt + 5'h01);
  assign _zz_iq_cursor_cha_i_2 = 1'b1;
  assign _zz_iq_cursor_cha_q_2 = 1'b1;
  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/./simWorkspace/PreambleDetector/rtl/PreambleDetector.v_toplevel_crossCorrelator_1_I_mem.bin",I_mem);
  end
  always @(posedge clk) begin
    if(_zz_iq_cursor_cha_i_2) begin
      _zz_I_mem_port0 <= I_mem[_zz_iq_cursor_cha_i_1];
    end
  end

  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/./simWorkspace/PreambleDetector/rtl/PreambleDetector.v_toplevel_crossCorrelator_1_Q_mem.bin",Q_mem);
  end
  always @(posedge clk) begin
    if(_zz_iq_cursor_cha_q_2) begin
      _zz_Q_mem_port0 <= Q_mem[_zz_iq_cursor_cha_q_1];
    end
  end

  Correlator corr_core (
    .raw_data_0_valid             (raw_data_valid                             ), //i
    .raw_data_0_payload_cha_i     (raw_data_payload_cha_i[11:0]               ), //i
    .raw_data_0_payload_cha_q     (raw_data_payload_cha_q[11:0]               ), //i
    .raw_data_1_valid             (raw_data_valid                             ), //i
    .raw_data_1_payload_cha_i     (iq_cursor_cha_i[11:0]                      ), //i
    .raw_data_1_payload_cha_q     (iq_cursor_cha_q[11:0]                      ), //i
    .corr_result_valid            (corr_core_corr_result_valid                ), //o
    .corr_result_payload_cha_i    (corr_core_corr_result_payload_cha_i[35:0]  ), //o
    .corr_result_payload_cha_q    (corr_core_corr_result_payload_cha_q[35:0]  ), //o
    .clk                          (clk                                        ), //i
    .reset                        (reset                                      )  //i
  );
  assign _zz_iq_cursor_cha_i = cnt;
  assign iq_cursor_cha_i = _zz_I_mem_port0;
  assign _zz_iq_cursor_cha_q = cnt;
  assign iq_cursor_cha_q = _zz_Q_mem_port0;
  assign corr_result_valid = corr_core_corr_result_valid;
  assign corr_result_payload_cha_i = corr_core_corr_result_payload_cha_i;
  assign corr_result_payload_cha_q = corr_core_corr_result_payload_cha_q;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 5'h0;
    end else begin
      if(raw_data_valid) begin
        cnt <= ((5'h0f <= cnt) ? 5'h0 : _zz_cnt);
      end else begin
        cnt <= 5'h0;
      end
    end
  end


endmodule

module PowerMeter (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload_cha_i,
  input      [11:0]   raw_data_payload_cha_q,
  output              power_result_valid,
  output     [23:0]   power_result_payload_cha_i,
  output     [23:0]   power_result_payload_cha_q,
  input               clk,
  input               reset
);

  wire       [19:0]   shiftRegister_4_output_1;
  wire       [19:0]   shiftRegister_5_output_1;
  wire       [23:0]   _zz_power_val_i;
  wire       [23:0]   _zz_power_val_i_1;
  wire       [23:0]   _zz_power_val_i_2;
  wire       [23:0]   _zz_power_val_q;
  wire       [23:0]   _zz_power_val_q_1;
  wire       [23:0]   _zz_power_val_q_2;
  reg        [23:0]   power_val_cha_i;
  reg        [23:0]   power_val_cha_q;
  reg        [23:0]   power_val_i;
  reg        [23:0]   power_val_q;
  wire       [23:0]   sq_i;
  wire       [23:0]   sq_q;
  reg        [23:0]   sq_i_regNext;
  wire       [19:0]   power_cal_i;
  reg        [23:0]   sq_q_regNext;
  wire       [19:0]   power_cal_q;
  reg                 power_cal_valid;
  reg                 power_result_valid_1;

  assign _zz_power_val_i = ($signed(power_val_i) - $signed(_zz_power_val_i_1));
  assign _zz_power_val_i_1 = {{4{shiftRegister_4_output_1[19]}}, shiftRegister_4_output_1};
  assign _zz_power_val_i_2 = {{4{power_cal_i[19]}}, power_cal_i};
  assign _zz_power_val_q = ($signed(power_val_q) - $signed(_zz_power_val_q_1));
  assign _zz_power_val_q_1 = {{4{shiftRegister_5_output_1[19]}}, shiftRegister_5_output_1};
  assign _zz_power_val_q_2 = {{4{power_cal_q[19]}}, power_cal_q};
  ShiftRegister_2 shiftRegister_4 (
    .input_1     (power_cal_i[19:0]               ), //i
    .output_1    (shiftRegister_4_output_1[19:0]  ), //o
    .enable      (power_cal_valid                 ), //i
    .clk         (clk                             ), //i
    .reset       (reset                           )  //i
  );
  ShiftRegister_2 shiftRegister_5 (
    .input_1     (power_cal_q[19:0]               ), //i
    .output_1    (shiftRegister_5_output_1[19:0]  ), //o
    .enable      (power_cal_valid                 ), //i
    .clk         (clk                             ), //i
    .reset       (reset                           )  //i
  );
  assign sq_i = ($signed(raw_data_payload_cha_i) * $signed(raw_data_payload_cha_i));
  assign sq_q = ($signed(raw_data_payload_cha_q) * $signed(raw_data_payload_cha_q));
  assign power_cal_i = (sq_i_regNext >>> 4);
  assign power_cal_q = (sq_q_regNext >>> 4);
  assign power_result_payload_cha_i = power_val_cha_i;
  assign power_result_payload_cha_q = power_val_cha_q;
  assign power_result_valid = power_result_valid_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      power_val_i <= 24'h0;
      power_val_q <= 24'h0;
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
        power_val_i <= 24'h0;
        power_val_q <= 24'h0;
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

module Correlator (
  input               raw_data_0_valid,
  input      [11:0]   raw_data_0_payload_cha_i,
  input      [11:0]   raw_data_0_payload_cha_q,
  input               raw_data_1_valid,
  input      [11:0]   raw_data_1_payload_cha_i,
  input      [11:0]   raw_data_1_payload_cha_q,
  output              corr_result_valid,
  output     [35:0]   corr_result_payload_cha_i,
  output     [35:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);

  wire       [23:0]   shiftRegister_4_output_1;
  wire       [23:0]   shiftRegister_5_output_1;
  wire       [23:0]   _zz__zz_corr_val_i;
  wire       [23:0]   _zz__zz_corr_val_i_1;
  wire       [23:0]   _zz__zz_corr_val_q;
  wire       [23:0]   _zz__zz_corr_val_q_1;
  wire       [35:0]   _zz_corr_val_i_1;
  wire       [35:0]   _zz_corr_val_i_2;
  wire       [35:0]   _zz_corr_val_i_3;
  wire       [35:0]   _zz_corr_val_q_1;
  wire       [35:0]   _zz_corr_val_q_2;
  wire       [35:0]   _zz_corr_val_q_3;
  reg        [35:0]   corr_val_i;
  reg        [35:0]   corr_val_q;
  reg        [23:0]   _zz_corr_val_i;
  reg        [23:0]   _zz_corr_val_q;
  reg                 _zz_enable;
  reg                 _zz_corr_result_valid;

  assign _zz__zz_corr_val_i = ($signed(raw_data_0_payload_cha_i) * $signed(raw_data_1_payload_cha_i));
  assign _zz__zz_corr_val_i_1 = ($signed(raw_data_0_payload_cha_q) * $signed(raw_data_1_payload_cha_q));
  assign _zz__zz_corr_val_q = ($signed(raw_data_0_payload_cha_q) * $signed(raw_data_1_payload_cha_i));
  assign _zz__zz_corr_val_q_1 = ($signed(raw_data_0_payload_cha_i) * $signed(raw_data_1_payload_cha_q));
  assign _zz_corr_val_i_1 = ($signed(corr_val_i) - $signed(_zz_corr_val_i_2));
  assign _zz_corr_val_i_2 = {{12{shiftRegister_4_output_1[23]}}, shiftRegister_4_output_1};
  assign _zz_corr_val_i_3 = {{12{_zz_corr_val_i[23]}}, _zz_corr_val_i};
  assign _zz_corr_val_q_1 = ($signed(corr_val_q) - $signed(_zz_corr_val_q_2));
  assign _zz_corr_val_q_2 = {{12{shiftRegister_5_output_1[23]}}, shiftRegister_5_output_1};
  assign _zz_corr_val_q_3 = {{12{_zz_corr_val_q[23]}}, _zz_corr_val_q};
  ShiftRegister shiftRegister_4 (
    .input_1     (_zz_corr_val_i[23:0]            ), //i
    .output_1    (shiftRegister_4_output_1[23:0]  ), //o
    .enable      (_zz_enable                      ), //i
    .clk         (clk                             ), //i
    .reset       (reset                           )  //i
  );
  ShiftRegister shiftRegister_5 (
    .input_1     (_zz_corr_val_q[23:0]            ), //i
    .output_1    (shiftRegister_5_output_1[23:0]  ), //o
    .enable      (_zz_enable                      ), //i
    .clk         (clk                             ), //i
    .reset       (reset                           )  //i
  );
  assign corr_result_payload_cha_i = corr_val_i;
  assign corr_result_payload_cha_q = corr_val_q;
  assign corr_result_valid = _zz_corr_result_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      corr_val_i <= 36'h0;
      corr_val_q <= 36'h0;
      _zz_corr_val_i <= 24'h0;
      _zz_corr_val_q <= 24'h0;
      _zz_enable <= 1'b0;
      _zz_corr_result_valid <= 1'b0;
    end else begin
      _zz_corr_val_i <= ($signed(_zz__zz_corr_val_i) + $signed(_zz__zz_corr_val_i_1));
      _zz_corr_val_q <= ($signed(_zz__zz_corr_val_q) - $signed(_zz__zz_corr_val_q_1));
      _zz_enable <= (raw_data_0_valid && raw_data_1_valid);
      if(_zz_enable) begin
        _zz_corr_result_valid <= 1'b1;
        corr_val_i <= ($signed(_zz_corr_val_i_1) + $signed(_zz_corr_val_i_3));
        corr_val_q <= ($signed(_zz_corr_val_q_1) + $signed(_zz_corr_val_q_3));
      end else begin
        _zz_corr_result_valid <= 1'b0;
      end
    end
  end


endmodule

//ShiftRegister_2 replaced by ShiftRegister_2

module ShiftRegister_2 (
  input      [19:0]   input_1,
  output     [19:0]   output_1,
  input               enable,
  input               clk,
  input               reset
);

  reg        [19:0]   shift_reg_0;
  reg        [19:0]   shift_reg_1;
  reg        [19:0]   shift_reg_2;
  reg        [19:0]   shift_reg_3;
  reg        [19:0]   shift_reg_4;
  reg        [19:0]   shift_reg_5;
  reg        [19:0]   shift_reg_6;
  reg        [19:0]   shift_reg_7;
  reg        [19:0]   shift_reg_8;
  reg        [19:0]   shift_reg_9;
  reg        [19:0]   shift_reg_10;
  reg        [19:0]   shift_reg_11;
  reg        [19:0]   shift_reg_12;
  reg        [19:0]   shift_reg_13;
  reg        [19:0]   shift_reg_14;
  reg        [19:0]   shift_reg_15;

  assign output_1 = shift_reg_15;
  always @(posedge clk) begin
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
    end
  end


endmodule

//ShiftRegister replaced by ShiftRegister

module ShiftRegister (
  input      [23:0]   input_1,
  output     [23:0]   output_1,
  input               enable,
  input               clk,
  input               reset
);

  reg        [23:0]   shift_reg_0;
  reg        [23:0]   shift_reg_1;
  reg        [23:0]   shift_reg_2;
  reg        [23:0]   shift_reg_3;
  reg        [23:0]   shift_reg_4;
  reg        [23:0]   shift_reg_5;
  reg        [23:0]   shift_reg_6;
  reg        [23:0]   shift_reg_7;
  reg        [23:0]   shift_reg_8;
  reg        [23:0]   shift_reg_9;
  reg        [23:0]   shift_reg_10;
  reg        [23:0]   shift_reg_11;
  reg        [23:0]   shift_reg_12;
  reg        [23:0]   shift_reg_13;
  reg        [23:0]   shift_reg_14;
  reg        [23:0]   shift_reg_15;
  reg        [23:0]   shift_reg_16;

  assign output_1 = shift_reg_16;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 24'h0;
      shift_reg_1 <= 24'h0;
      shift_reg_2 <= 24'h0;
      shift_reg_3 <= 24'h0;
      shift_reg_4 <= 24'h0;
      shift_reg_5 <= 24'h0;
      shift_reg_6 <= 24'h0;
      shift_reg_7 <= 24'h0;
      shift_reg_8 <= 24'h0;
      shift_reg_9 <= 24'h0;
      shift_reg_10 <= 24'h0;
      shift_reg_11 <= 24'h0;
      shift_reg_12 <= 24'h0;
      shift_reg_13 <= 24'h0;
      shift_reg_14 <= 24'h0;
      shift_reg_15 <= 24'h0;
      shift_reg_16 <= 24'h0;
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
      end
    end
  end


endmodule
