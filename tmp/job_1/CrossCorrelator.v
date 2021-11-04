// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : CrossCorrelator
// Git hash  : d56fca2d93dfc76f393b3b10236c69be445a29e8



module CrossCorrelator (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_cha_i,
  input      [15:0]   raw_data_payload_cha_q,
  output              corr_result_valid,
  output     [31:0]   corr_result_payload_cha_i,
  output     [31:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);
  reg        [15:0]   _zz_I_mem_port0;
  reg        [15:0]   _zz_Q_mem_port0;
  wire                corr_core_corr_result_valid;
  wire       [31:0]   corr_core_corr_result_payload_cha_i;
  wire       [31:0]   corr_core_corr_result_payload_cha_q;
  wire       [5:0]    _zz_I_mem_port;
  wire                _zz_I_mem_port_1;
  wire       [5:0]    _zz_iq_cursor_cha_i_1;
  wire                _zz_iq_cursor_cha_i_2;
  wire       [5:0]    _zz_Q_mem_port;
  wire                _zz_Q_mem_port_1;
  wire       [5:0]    _zz_iq_cursor_cha_q_1;
  wire                _zz_iq_cursor_cha_q_2;
  wire       [6:0]    _zz_cnt;
  reg        [6:0]    cnt;
  wire       [15:0]   iq_cursor_cha_i;
  wire       [15:0]   iq_cursor_cha_q;
  wire       [6:0]    _zz_iq_cursor_cha_i;
  wire       [6:0]    _zz_iq_cursor_cha_q;
  (* rom_style = "block" *) reg [15:0] I_mem [0:63];
  (* rom_style = "block" *) reg [15:0] Q_mem [0:63];

  assign _zz_iq_cursor_cha_i_1 = _zz_iq_cursor_cha_i[5:0];
  assign _zz_iq_cursor_cha_q_1 = _zz_iq_cursor_cha_q[5:0];
  assign _zz_cnt = (cnt + 7'h01);
  assign _zz_iq_cursor_cha_i_2 = 1'b1;
  assign _zz_iq_cursor_cha_q_2 = 1'b1;
  initial begin
    $readmemb("CrossCorrelator.v_toplevel_I_mem.bin",I_mem);
  end
  always @(posedge clk) begin
    if(_zz_iq_cursor_cha_i_2) begin
      _zz_I_mem_port0 <= I_mem[_zz_iq_cursor_cha_i_1];
    end
  end

  initial begin
    $readmemb("CrossCorrelator.v_toplevel_Q_mem.bin",Q_mem);
  end
  always @(posedge clk) begin
    if(_zz_iq_cursor_cha_q_2) begin
      _zz_Q_mem_port0 <= Q_mem[_zz_iq_cursor_cha_q_1];
    end
  end

  Correlator corr_core (
    .raw_data_0_valid             (raw_data_valid                       ), //i
    .raw_data_0_payload_cha_i     (raw_data_payload_cha_i               ), //i
    .raw_data_0_payload_cha_q     (raw_data_payload_cha_q               ), //i
    .raw_data_1_valid             (raw_data_valid                       ), //i
    .raw_data_1_payload_cha_i     (iq_cursor_cha_i                      ), //i
    .raw_data_1_payload_cha_q     (iq_cursor_cha_q                      ), //i
    .corr_result_valid            (corr_core_corr_result_valid          ), //o
    .corr_result_payload_cha_i    (corr_core_corr_result_payload_cha_i  ), //o
    .corr_result_payload_cha_q    (corr_core_corr_result_payload_cha_q  ), //o
    .clk                          (clk                                  ), //i
    .reset                        (reset                                )  //i
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
      cnt <= 7'h0;
    end else begin
      if(raw_data_valid) begin
        cnt <= ((7'h40 <= cnt) ? 7'h0 : _zz_cnt);
      end else begin
        cnt <= 7'h0;
      end
    end
  end


endmodule

module Correlator (
  input               raw_data_0_valid,
  input      [15:0]   raw_data_0_payload_cha_i,
  input      [15:0]   raw_data_0_payload_cha_q,
  input               raw_data_1_valid,
  input      [15:0]   raw_data_1_payload_cha_i,
  input      [15:0]   raw_data_1_payload_cha_q,
  output              corr_result_valid,
  output     [31:0]   corr_result_payload_cha_i,
  output     [31:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);
  wire       [31:0]   shiftRegisterE_2_output_1;
  wire       [31:0]   shiftRegisterE_3_output_1;
  wire       [15:0]   _zz_k1;
  wire       [15:0]   _zz_k2;
  wire       [15:0]   _zz_k3;
  wire       [31:0]   _zz_corr_val_i;
  wire       [31:0]   _zz_corr_val_q;
  reg        [31:0]   corr_val_i;
  reg        [31:0]   corr_val_q;
  wire       [31:0]   k1;
  wire       [31:0]   k2;
  wire       [31:0]   k3;
  reg        [31:0]   mul_i;
  reg        [31:0]   mul_q;
  reg                 mul_data_valid;
  reg                 corr_result_valid_1;

  assign _zz_k1 = ($signed(raw_data_0_payload_cha_i) + $signed(raw_data_0_payload_cha_q));
  assign _zz_k2 = ($signed(raw_data_1_payload_cha_q) + $signed(raw_data_1_payload_cha_i));
  assign _zz_k3 = ($signed(raw_data_1_payload_cha_i) - $signed(raw_data_1_payload_cha_q));
  assign _zz_corr_val_i = ($signed(corr_val_i) - $signed(shiftRegisterE_2_output_1));
  assign _zz_corr_val_q = ($signed(corr_val_q) - $signed(shiftRegisterE_3_output_1));
  ShiftRegisterE shiftRegisterE_2 (
    .input_1     (mul_i                      ), //i
    .output_1    (shiftRegisterE_2_output_1  ), //o
    .enable      (mul_data_valid             ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegisterE shiftRegisterE_3 (
    .input_1     (mul_q                      ), //i
    .output_1    (shiftRegisterE_3_output_1  ), //o
    .enable      (mul_data_valid             ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  assign k1 = ($signed(raw_data_1_payload_cha_i) * $signed(_zz_k1));
  assign k2 = ($signed(raw_data_0_payload_cha_i) * $signed(_zz_k2));
  assign k3 = ($signed(raw_data_0_payload_cha_q) * $signed(_zz_k3));
  assign corr_result_payload_cha_i = corr_val_i;
  assign corr_result_payload_cha_q = corr_val_q;
  assign corr_result_valid = corr_result_valid_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      corr_val_i <= 32'h0;
      corr_val_q <= 32'h0;
      mul_i <= 32'h0;
      mul_q <= 32'h0;
      mul_data_valid <= 1'b0;
      corr_result_valid_1 <= 1'b0;
    end else begin
      mul_i <= ($signed(k1) - $signed(k3));
      mul_q <= ($signed(k1) - $signed(k2));
      mul_data_valid <= (raw_data_0_valid && raw_data_1_valid);
      if(mul_data_valid) begin
        corr_result_valid_1 <= 1'b1;
        corr_val_i <= ($signed(_zz_corr_val_i) + $signed(mul_i));
        corr_val_q <= ($signed(_zz_corr_val_q) + $signed(mul_q));
      end else begin
        corr_result_valid_1 <= 1'b0;
      end
    end
  end


endmodule

//ShiftRegisterE replaced by ShiftRegisterE

module ShiftRegisterE (
  input      [31:0]   input_1,
  output     [31:0]   output_1,
  input               enable,
  input               clk,
  input               reset
);
  reg        [31:0]   shift_reg_0;
  reg        [31:0]   shift_reg_1;
  reg        [31:0]   shift_reg_2;
  reg        [31:0]   shift_reg_3;
  reg        [31:0]   shift_reg_4;
  reg        [31:0]   shift_reg_5;
  reg        [31:0]   shift_reg_6;
  reg        [31:0]   shift_reg_7;
  reg        [31:0]   shift_reg_8;
  reg        [31:0]   shift_reg_9;
  reg        [31:0]   shift_reg_10;
  reg        [31:0]   shift_reg_11;
  reg        [31:0]   shift_reg_12;
  reg        [31:0]   shift_reg_13;
  reg        [31:0]   shift_reg_14;
  reg        [31:0]   shift_reg_15;
  reg        [31:0]   shift_reg_16;
  reg        [31:0]   shift_reg_17;
  reg        [31:0]   shift_reg_18;
  reg        [31:0]   shift_reg_19;
  reg        [31:0]   shift_reg_20;
  reg        [31:0]   shift_reg_21;
  reg        [31:0]   shift_reg_22;
  reg        [31:0]   shift_reg_23;
  reg        [31:0]   shift_reg_24;
  reg        [31:0]   shift_reg_25;
  reg        [31:0]   shift_reg_26;
  reg        [31:0]   shift_reg_27;
  reg        [31:0]   shift_reg_28;
  reg        [31:0]   shift_reg_29;
  reg        [31:0]   shift_reg_30;
  reg        [31:0]   shift_reg_31;
  reg        [31:0]   shift_reg_32;
  reg        [31:0]   shift_reg_33;
  reg        [31:0]   shift_reg_34;
  reg        [31:0]   shift_reg_35;
  reg        [31:0]   shift_reg_36;
  reg        [31:0]   shift_reg_37;
  reg        [31:0]   shift_reg_38;
  reg        [31:0]   shift_reg_39;
  reg        [31:0]   shift_reg_40;
  reg        [31:0]   shift_reg_41;
  reg        [31:0]   shift_reg_42;
  reg        [31:0]   shift_reg_43;
  reg        [31:0]   shift_reg_44;
  reg        [31:0]   shift_reg_45;
  reg        [31:0]   shift_reg_46;
  reg        [31:0]   shift_reg_47;
  reg        [31:0]   shift_reg_48;
  reg        [31:0]   shift_reg_49;
  reg        [31:0]   shift_reg_50;
  reg        [31:0]   shift_reg_51;
  reg        [31:0]   shift_reg_52;
  reg        [31:0]   shift_reg_53;
  reg        [31:0]   shift_reg_54;
  reg        [31:0]   shift_reg_55;
  reg        [31:0]   shift_reg_56;
  reg        [31:0]   shift_reg_57;
  reg        [31:0]   shift_reg_58;
  reg        [31:0]   shift_reg_59;
  reg        [31:0]   shift_reg_60;
  reg        [31:0]   shift_reg_61;
  reg        [31:0]   shift_reg_62;
  reg        [31:0]   shift_reg_63;
  reg        [31:0]   shift_reg_64;

  assign output_1 = shift_reg_64;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 32'h0;
      shift_reg_1 <= 32'h0;
      shift_reg_2 <= 32'h0;
      shift_reg_3 <= 32'h0;
      shift_reg_4 <= 32'h0;
      shift_reg_5 <= 32'h0;
      shift_reg_6 <= 32'h0;
      shift_reg_7 <= 32'h0;
      shift_reg_8 <= 32'h0;
      shift_reg_9 <= 32'h0;
      shift_reg_10 <= 32'h0;
      shift_reg_11 <= 32'h0;
      shift_reg_12 <= 32'h0;
      shift_reg_13 <= 32'h0;
      shift_reg_14 <= 32'h0;
      shift_reg_15 <= 32'h0;
      shift_reg_16 <= 32'h0;
      shift_reg_17 <= 32'h0;
      shift_reg_18 <= 32'h0;
      shift_reg_19 <= 32'h0;
      shift_reg_20 <= 32'h0;
      shift_reg_21 <= 32'h0;
      shift_reg_22 <= 32'h0;
      shift_reg_23 <= 32'h0;
      shift_reg_24 <= 32'h0;
      shift_reg_25 <= 32'h0;
      shift_reg_26 <= 32'h0;
      shift_reg_27 <= 32'h0;
      shift_reg_28 <= 32'h0;
      shift_reg_29 <= 32'h0;
      shift_reg_30 <= 32'h0;
      shift_reg_31 <= 32'h0;
      shift_reg_32 <= 32'h0;
      shift_reg_33 <= 32'h0;
      shift_reg_34 <= 32'h0;
      shift_reg_35 <= 32'h0;
      shift_reg_36 <= 32'h0;
      shift_reg_37 <= 32'h0;
      shift_reg_38 <= 32'h0;
      shift_reg_39 <= 32'h0;
      shift_reg_40 <= 32'h0;
      shift_reg_41 <= 32'h0;
      shift_reg_42 <= 32'h0;
      shift_reg_43 <= 32'h0;
      shift_reg_44 <= 32'h0;
      shift_reg_45 <= 32'h0;
      shift_reg_46 <= 32'h0;
      shift_reg_47 <= 32'h0;
      shift_reg_48 <= 32'h0;
      shift_reg_49 <= 32'h0;
      shift_reg_50 <= 32'h0;
      shift_reg_51 <= 32'h0;
      shift_reg_52 <= 32'h0;
      shift_reg_53 <= 32'h0;
      shift_reg_54 <= 32'h0;
      shift_reg_55 <= 32'h0;
      shift_reg_56 <= 32'h0;
      shift_reg_57 <= 32'h0;
      shift_reg_58 <= 32'h0;
      shift_reg_59 <= 32'h0;
      shift_reg_60 <= 32'h0;
      shift_reg_61 <= 32'h0;
      shift_reg_62 <= 32'h0;
      shift_reg_63 <= 32'h0;
      shift_reg_64 <= 32'h0;
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
        shift_reg_32 <= shift_reg_31;
        shift_reg_33 <= shift_reg_32;
        shift_reg_34 <= shift_reg_33;
        shift_reg_35 <= shift_reg_34;
        shift_reg_36 <= shift_reg_35;
        shift_reg_37 <= shift_reg_36;
        shift_reg_38 <= shift_reg_37;
        shift_reg_39 <= shift_reg_38;
        shift_reg_40 <= shift_reg_39;
        shift_reg_41 <= shift_reg_40;
        shift_reg_42 <= shift_reg_41;
        shift_reg_43 <= shift_reg_42;
        shift_reg_44 <= shift_reg_43;
        shift_reg_45 <= shift_reg_44;
        shift_reg_46 <= shift_reg_45;
        shift_reg_47 <= shift_reg_46;
        shift_reg_48 <= shift_reg_47;
        shift_reg_49 <= shift_reg_48;
        shift_reg_50 <= shift_reg_49;
        shift_reg_51 <= shift_reg_50;
        shift_reg_52 <= shift_reg_51;
        shift_reg_53 <= shift_reg_52;
        shift_reg_54 <= shift_reg_53;
        shift_reg_55 <= shift_reg_54;
        shift_reg_56 <= shift_reg_55;
        shift_reg_57 <= shift_reg_56;
        shift_reg_58 <= shift_reg_57;
        shift_reg_59 <= shift_reg_58;
        shift_reg_60 <= shift_reg_59;
        shift_reg_61 <= shift_reg_60;
        shift_reg_62 <= shift_reg_61;
        shift_reg_63 <= shift_reg_62;
        shift_reg_64 <= shift_reg_63;
      end else begin
        shift_reg_0 <= 32'h0;
        shift_reg_1 <= 32'h0;
        shift_reg_2 <= 32'h0;
        shift_reg_3 <= 32'h0;
        shift_reg_4 <= 32'h0;
        shift_reg_5 <= 32'h0;
        shift_reg_6 <= 32'h0;
        shift_reg_7 <= 32'h0;
        shift_reg_8 <= 32'h0;
        shift_reg_9 <= 32'h0;
        shift_reg_10 <= 32'h0;
        shift_reg_11 <= 32'h0;
        shift_reg_12 <= 32'h0;
        shift_reg_13 <= 32'h0;
        shift_reg_14 <= 32'h0;
        shift_reg_15 <= 32'h0;
        shift_reg_16 <= 32'h0;
        shift_reg_17 <= 32'h0;
        shift_reg_18 <= 32'h0;
        shift_reg_19 <= 32'h0;
        shift_reg_20 <= 32'h0;
        shift_reg_21 <= 32'h0;
        shift_reg_22 <= 32'h0;
        shift_reg_23 <= 32'h0;
        shift_reg_24 <= 32'h0;
        shift_reg_25 <= 32'h0;
        shift_reg_26 <= 32'h0;
        shift_reg_27 <= 32'h0;
        shift_reg_28 <= 32'h0;
        shift_reg_29 <= 32'h0;
        shift_reg_30 <= 32'h0;
        shift_reg_31 <= 32'h0;
        shift_reg_32 <= 32'h0;
        shift_reg_33 <= 32'h0;
        shift_reg_34 <= 32'h0;
        shift_reg_35 <= 32'h0;
        shift_reg_36 <= 32'h0;
        shift_reg_37 <= 32'h0;
        shift_reg_38 <= 32'h0;
        shift_reg_39 <= 32'h0;
        shift_reg_40 <= 32'h0;
        shift_reg_41 <= 32'h0;
        shift_reg_42 <= 32'h0;
        shift_reg_43 <= 32'h0;
        shift_reg_44 <= 32'h0;
        shift_reg_45 <= 32'h0;
        shift_reg_46 <= 32'h0;
        shift_reg_47 <= 32'h0;
        shift_reg_48 <= 32'h0;
        shift_reg_49 <= 32'h0;
        shift_reg_50 <= 32'h0;
        shift_reg_51 <= 32'h0;
        shift_reg_52 <= 32'h0;
        shift_reg_53 <= 32'h0;
        shift_reg_54 <= 32'h0;
        shift_reg_55 <= 32'h0;
        shift_reg_56 <= 32'h0;
        shift_reg_57 <= 32'h0;
        shift_reg_58 <= 32'h0;
        shift_reg_59 <= 32'h0;
        shift_reg_60 <= 32'h0;
        shift_reg_61 <= 32'h0;
        shift_reg_62 <= 32'h0;
        shift_reg_63 <= 32'h0;
        shift_reg_64 <= 32'h0;
      end
    end
  end


endmodule
