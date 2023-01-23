// Generator : SpinalHDL v1.8.0    git head : 4e3563a282582b41f4eaafc503787757251d23ea
// Component : Correlator
// Git hash  : 17ba3429c74144a7d37c48904a91bdac2e1b784a

`timescale 1ns/1ps

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

  wire       [31:0]   shiftRegister_2_output_1;
  wire       [31:0]   shiftRegister_3_output_1;
  wire       [31:0]   _zz__zz_corr_val_i;
  wire       [31:0]   _zz__zz_corr_val_i_1;
  wire       [31:0]   _zz__zz_corr_val_q;
  wire       [31:0]   _zz__zz_corr_val_q_1;
  wire       [31:0]   _zz_corr_val_i_1;
  wire       [31:0]   _zz_corr_val_q_1;
  reg        [31:0]   corr_val_i;
  reg        [31:0]   corr_val_q;
  reg        [31:0]   _zz_corr_val_i;
  reg        [31:0]   _zz_corr_val_q;
  reg                 _zz_enable;
  reg                 _zz_corr_result_valid;

  assign _zz__zz_corr_val_i = ($signed(raw_data_0_payload_cha_i) * $signed(raw_data_1_payload_cha_i));
  assign _zz__zz_corr_val_i_1 = ($signed(raw_data_0_payload_cha_q) * $signed(raw_data_1_payload_cha_q));
  assign _zz__zz_corr_val_q = ($signed(raw_data_0_payload_cha_q) * $signed(raw_data_1_payload_cha_i));
  assign _zz__zz_corr_val_q_1 = ($signed(raw_data_0_payload_cha_i) * $signed(raw_data_1_payload_cha_q));
  assign _zz_corr_val_i_1 = ($signed(corr_val_i) - $signed(shiftRegister_2_output_1));
  assign _zz_corr_val_q_1 = ($signed(corr_val_q) - $signed(shiftRegister_3_output_1));
  ShiftRegister_1 shiftRegister_2 (
    .input_1  (_zz_corr_val_i[31:0]          ), //i
    .output_1 (shiftRegister_2_output_1[31:0]), //o
    .enable   (_zz_enable                    ), //i
    .clk      (clk                           ), //i
    .reset    (reset                         )  //i
  );
  ShiftRegister_1 shiftRegister_3 (
    .input_1  (_zz_corr_val_q[31:0]          ), //i
    .output_1 (shiftRegister_3_output_1[31:0]), //o
    .enable   (_zz_enable                    ), //i
    .clk      (clk                           ), //i
    .reset    (reset                         )  //i
  );
  assign corr_result_payload_cha_i = corr_val_i; // @[Correlator.scala 83:30]
  assign corr_result_payload_cha_q = corr_val_q; // @[Correlator.scala 84:30]
  assign corr_result_valid = _zz_corr_result_valid; // @[Correlator.scala 85:30]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      corr_val_i <= 32'h0; // @[Data.scala 400:33]
      corr_val_q <= 32'h0; // @[Data.scala 400:33]
      _zz_corr_val_i <= 32'h0; // @[Data.scala 400:33]
      _zz_corr_val_q <= 32'h0; // @[Data.scala 400:33]
      _zz_enable <= 1'b0; // @[Data.scala 400:33]
      _zz_corr_result_valid <= 1'b0; // @[Data.scala 400:33]
    end else begin
      _zz_corr_val_i <= ($signed(_zz__zz_corr_val_i) + $signed(_zz__zz_corr_val_i_1)); // @[Reg.scala 39:30]
      _zz_corr_val_q <= ($signed(_zz__zz_corr_val_q) - $signed(_zz__zz_corr_val_q_1)); // @[Reg.scala 39:30]
      _zz_enable <= (raw_data_0_valid && raw_data_1_valid); // @[Reg.scala 39:30]
      if(_zz_enable) begin
        _zz_corr_result_valid <= 1'b1; // @[Correlator.scala 73:31]
        corr_val_i <= ($signed(_zz_corr_val_i_1) + $signed(_zz_corr_val_i)); // @[Correlator.scala 74:24]
        corr_val_q <= ($signed(_zz_corr_val_q_1) + $signed(_zz_corr_val_q)); // @[Correlator.scala 75:24]
      end else begin
        _zz_corr_result_valid <= 1'b0; // @[Correlator.scala 77:31]
      end
    end
  end


endmodule

//ShiftRegister_1 replaced by ShiftRegister_1

module ShiftRegister_1 (
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

  assign output_1 = shift_reg_3; // @[ShiftRegister.scala 39:15]
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 32'h0; // @[Data.scala 400:33]
      shift_reg_1 <= 32'h0; // @[Data.scala 400:33]
      shift_reg_2 <= 32'h0; // @[Data.scala 400:33]
      shift_reg_3 <= 32'h0; // @[Data.scala 400:33]
    end else begin
      if(enable) begin
        shift_reg_0 <= input_1; // @[ShiftRegister.scala 32:26]
        shift_reg_1 <= shift_reg_0; // @[ShiftRegister.scala 34:32]
        shift_reg_2 <= shift_reg_1; // @[ShiftRegister.scala 34:32]
        shift_reg_3 <= shift_reg_2; // @[ShiftRegister.scala 34:32]
      end
    end
  end


endmodule
