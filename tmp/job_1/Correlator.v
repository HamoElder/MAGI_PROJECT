// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : Correlator
// Git hash  : d56fca2d93dfc76f393b3b10236c69be445a29e8



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

  assign output_1 = shift_reg_3;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 32'h0;
      shift_reg_1 <= 32'h0;
      shift_reg_2 <= 32'h0;
      shift_reg_3 <= 32'h0;
    end else begin
      if(enable) begin
        shift_reg_0 <= input_1;
        shift_reg_1 <= shift_reg_0;
        shift_reg_2 <= shift_reg_1;
        shift_reg_3 <= shift_reg_2;
      end else begin
        shift_reg_0 <= 32'h0;
        shift_reg_1 <= 32'h0;
        shift_reg_2 <= 32'h0;
        shift_reg_3 <= 32'h0;
      end
    end
  end


endmodule
