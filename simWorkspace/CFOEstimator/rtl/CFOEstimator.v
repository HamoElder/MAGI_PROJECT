// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : CFOEstimator
// Git hash  : cf8112ca4b6fbc647e801d7a00f410aa23474696


`define StateMachineEnum_binary_sequential_type [1:0]
`define StateMachineEnum_binary_sequential_e0 2'b00
`define StateMachineEnum_binary_sequential_e1 2'b01
`define StateMachineEnum_binary_sequential_e2 2'b10
`define StateMachineEnum_binary_sequential_e3 2'b11


module CFOEstimator (
  input               rotated_data_valid,
  input      [15:0]   rotated_data_payload_cha_i,
  input      [15:0]   rotated_data_payload_cha_q,
  output              delta_phi_valid,
  output     [15:0]   delta_phi_payload,
  input               clk,
  input               reset
);
  wire                auto_corr_core_corr_result_valid;
  wire       [31:0]   auto_corr_core_corr_result_payload_cha_i;
  wire       [31:0]   auto_corr_core_corr_result_payload_cha_q;
  wire                cordic_core_raw_data_ready;
  wire                cordic_core_result_valid;
  wire       [15:0]   cordic_core_result_payload_x;
  wire       [15:0]   cordic_core_result_payload_y;
  wire       [15:0]   cordic_core_result_payload_z;
  wire       [32:0]   _zz__zz_delta_phi_payload_5;
  wire       [32:0]   _zz__zz_delta_phi_payload_5_1;
  wire       [15:0]   _zz_when_SInt_l186;
  wire       [16:0]   _zz__zz_delta_phi_payload_7;
  wire       [16:0]   _zz__zz_delta_phi_payload_7_1;
  wire       [32:0]   _zz__zz_delta_phi_payload_1;
  wire       [32:0]   _zz__zz_delta_phi_payload_1_1;
  wire       [32:0]   _zz__zz_delta_phi_payload_1_2;
  wire       [1:0]    _zz_when_SInt_l126;
  wire       [0:0]    _zz_when_SInt_l132;
  wire       [4:0]    _zz_impluse_cnt;
  wire       [15:0]   scale;
  reg        [4:0]    impluse_cnt;
  wire       [31:0]   _zz_delta_phi_payload;
  reg        [16:0]   _zz_delta_phi_payload_1;
  wire       [31:0]   _zz_delta_phi_payload_2;
  wire       [31:0]   _zz_delta_phi_payload_3;
  wire       [31:0]   _zz_delta_phi_payload_4;
  wire       [32:0]   _zz_delta_phi_payload_5;
  wire       [31:0]   _zz_delta_phi_payload_6;
  wire                when_SInt_l332;
  reg        [16:0]   _zz_delta_phi_payload_7;
  wire                when_SInt_l186;
  reg        [15:0]   _zz_delta_phi_payload_8;
  wire                when_SInt_l125;
  wire                when_SInt_l126;
  wire                when_SInt_l132;

  assign _zz__zz_delta_phi_payload_5 = {_zz_delta_phi_payload_4[31],_zz_delta_phi_payload_4};
  assign _zz__zz_delta_phi_payload_5_1 = {_zz_delta_phi_payload_3[31],_zz_delta_phi_payload_3};
  assign _zz_when_SInt_l186 = _zz_delta_phi_payload_5[15 : 0];
  assign _zz__zz_delta_phi_payload_7 = _zz_delta_phi_payload_5[32 : 16];
  assign _zz__zz_delta_phi_payload_7_1 = 17'h00001;
  assign _zz__zz_delta_phi_payload_1 = ($signed(_zz__zz_delta_phi_payload_1_1) + $signed(_zz__zz_delta_phi_payload_1_2));
  assign _zz__zz_delta_phi_payload_1_1 = {_zz_delta_phi_payload_6[31],_zz_delta_phi_payload_6};
  assign _zz__zz_delta_phi_payload_1_2 = {_zz_delta_phi_payload_2[31],_zz_delta_phi_payload_2};
  assign _zz_when_SInt_l126 = _zz_delta_phi_payload_1[16 : 15];
  assign _zz_when_SInt_l132 = _zz_delta_phi_payload_1[15 : 15];
  assign _zz_impluse_cnt = (impluse_cnt + 5'h01);
  AutoCorrelator auto_corr_core (
    .raw_data_valid               (rotated_data_valid                        ), //i
    .raw_data_payload_cha_i       (rotated_data_payload_cha_i                ), //i
    .raw_data_payload_cha_q       (rotated_data_payload_cha_q                ), //i
    .corr_result_valid            (auto_corr_core_corr_result_valid          ), //o
    .corr_result_payload_cha_i    (auto_corr_core_corr_result_payload_cha_i  ), //o
    .corr_result_payload_cha_q    (auto_corr_core_corr_result_payload_cha_q  ), //o
    .clk                          (clk                                       ), //i
    .reset                        (reset                                     )  //i
  );
  CordicRotator cordic_core (
    .iter_limit            (5'h0f                             ), //i
    .rotate_mode           (1'b0                              ), //i
    .x_u                   (2'b00                             ), //i
    .raw_data_valid        (auto_corr_core_corr_result_valid  ), //i
    .raw_data_ready        (cordic_core_raw_data_ready        ), //o
    .raw_data_payload_x    (16'hfc00                          ), //i
    .raw_data_payload_y    (16'h0400                          ), //i
    .raw_data_payload_z    (16'h0                             ), //i
    .result_valid          (cordic_core_result_valid          ), //o
    .result_payload_x      (cordic_core_result_payload_x      ), //o
    .result_payload_y      (cordic_core_result_payload_y      ), //o
    .result_payload_z      (cordic_core_result_payload_z      ), //o
    .clk                   (clk                               ), //i
    .reset                 (reset                             )  //i
  );
  assign scale = 16'h0002;
  assign delta_phi_valid = (cordic_core_result_valid && (impluse_cnt == 5'h10));
  assign _zz_delta_phi_payload = ($signed(cordic_core_result_payload_z) * $signed(scale));
  assign _zz_delta_phi_payload_2 = {{16'h0,1'b1},15'h0};
  assign _zz_delta_phi_payload_3 = {17'h1ffff,15'h0};
  assign _zz_delta_phi_payload_4 = _zz_delta_phi_payload[31 : 0];
  assign _zz_delta_phi_payload_5 = ($signed(_zz__zz_delta_phi_payload_5) + $signed(_zz__zz_delta_phi_payload_5_1));
  assign _zz_delta_phi_payload_6 = _zz_delta_phi_payload[31 : 0];
  assign when_SInt_l332 = _zz_delta_phi_payload_5[32];
  assign when_SInt_l186 = (_zz_when_SInt_l186 != 16'h0);
  always @(*) begin
    if(when_SInt_l186) begin
      _zz_delta_phi_payload_7 = ($signed(_zz__zz_delta_phi_payload_7) + $signed(_zz__zz_delta_phi_payload_7_1));
    end else begin
      _zz_delta_phi_payload_7 = _zz_delta_phi_payload_5[32 : 16];
    end
  end

  always @(*) begin
    if(when_SInt_l332) begin
      _zz_delta_phi_payload_1 = _zz_delta_phi_payload_7;
    end else begin
      _zz_delta_phi_payload_1 = (_zz__zz_delta_phi_payload_1 >>> 16);
    end
  end

  assign when_SInt_l125 = _zz_delta_phi_payload_1[16];
  assign when_SInt_l126 = (! (_zz_when_SInt_l126 == 2'b11));
  always @(*) begin
    if(when_SInt_l125) begin
      if(when_SInt_l126) begin
        _zz_delta_phi_payload_8 = 16'h8000;
      end else begin
        _zz_delta_phi_payload_8 = _zz_delta_phi_payload_1[15 : 0];
      end
    end else begin
      if(when_SInt_l132) begin
        _zz_delta_phi_payload_8 = 16'h7fff;
      end else begin
        _zz_delta_phi_payload_8 = _zz_delta_phi_payload_1[15 : 0];
      end
    end
  end

  assign when_SInt_l132 = (_zz_when_SInt_l132 != 1'b0);
  assign delta_phi_payload = (- _zz_delta_phi_payload_8);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      impluse_cnt <= 5'h0;
    end else begin
      if(rotated_data_valid) begin
        impluse_cnt <= ((impluse_cnt == 5'h10) ? 5'h0 : _zz_impluse_cnt);
      end else begin
        impluse_cnt <= 5'h0;
      end
    end
  end


endmodule

module CordicRotator (
  input      [4:0]    iter_limit,
  input               rotate_mode,
  input      [1:0]    x_u,
  input               raw_data_valid,
  output              raw_data_ready,
  input      [15:0]   raw_data_payload_x,
  input      [15:0]   raw_data_payload_y,
  input      [15:0]   raw_data_payload_z,
  output              result_valid,
  output     [15:0]   result_payload_x,
  output     [15:0]   result_payload_y,
  output     [15:0]   result_payload_z,
  input               clk,
  input               reset
);
  reg        [15:0]   _zz__zz_1_port0;
  wire       [3:0]    _zz__zz_1_port;
  wire                _zz__zz_1_port_1;
  wire       [3:0]    _zz__zz_result_payload_x_8;
  wire                _zz__zz_result_payload_x_8_1;
  wire       [15:0]   _zz__zz_result_payload_x_9;
  wire       [15:0]   _zz__zz_result_payload_x_9_1;
  wire       [15:0]   _zz__zz_result_payload_x_1;
  wire       [15:0]   _zz__zz_result_payload_x_1_1;
  wire       [15:0]   _zz__zz_result_payload_x_1_2;
  wire       [15:0]   _zz__zz_result_payload_x_1_3;
  wire       [15:0]   _zz__zz_result_payload_x_2;
  wire       [15:0]   _zz__zz_result_payload_x_2_1;
  wire       [15:0]   _zz__zz_result_payload_x_3;
  wire       [15:0]   _zz__zz_result_payload_x_3_1;
  reg        [4:0]    _zz_result_payload_x;
  reg        [4:0]    _zz_result_payload_x_regNext;
  reg        [15:0]   _zz_result_payload_x_1;
  reg        [15:0]   _zz_result_payload_x_2;
  reg        [15:0]   _zz_result_payload_x_3;
  reg        [15:0]   _zz_result_payload_x_4;
  reg        [15:0]   _zz_result_payload_y;
  reg        [15:0]   _zz_result_payload_z;
  reg                 _zz_result_valid;
  wire       [15:0]   _zz_result_payload_x_5;
  wire       [15:0]   _zz_result_payload_x_6;
  wire       [4:0]    _zz_result_payload_x_7;
  wire       [15:0]   _zz_result_payload_x_8;
  wire                _zz_result_payload_x_9;
  reg                 _zz_raw_data_ready;
  reg                 _zz_2;
  reg        `StateMachineEnum_binary_sequential_type _zz_3;
  reg        `StateMachineEnum_binary_sequential_type _zz_4;
  wire                raw_data_fire;
  wire                when_CordicRotator_l212;
  `ifndef SYNTHESIS
  reg [15:0] _zz_3_string;
  reg [15:0] _zz_4_string;
  `endif

  (* ram_style = "block" *) reg [15:0] _zz_1 [0:15];

  assign _zz__zz_result_payload_x_8 = _zz_result_payload_x_7[3:0];
  assign _zz__zz_result_payload_x_9 = 16'h0;
  assign _zz__zz_result_payload_x_9_1 = 16'h0;
  assign _zz__zz_result_payload_x_1 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_6));
  assign _zz__zz_result_payload_x_1_1 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_6));
  assign _zz__zz_result_payload_x_1_2 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_6));
  assign _zz__zz_result_payload_x_1_3 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_6));
  assign _zz__zz_result_payload_x_2 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_5));
  assign _zz__zz_result_payload_x_2_1 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_5));
  assign _zz__zz_result_payload_x_3 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_8));
  assign _zz__zz_result_payload_x_3_1 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_8));
  assign _zz__zz_result_payload_x_8_1 = 1'b1;
  initial begin
    $readmemb("CFOEstimator.v_toplevel_cordic_core__zz_1.bin",_zz_1);
  end
  always @(posedge clk) begin
    if(_zz__zz_result_payload_x_8_1) begin
      _zz__zz_1_port0 <= _zz_1[_zz__zz_result_payload_x_8];
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(_zz_3)
      `StateMachineEnum_binary_sequential_e0 : _zz_3_string = "e0";
      `StateMachineEnum_binary_sequential_e1 : _zz_3_string = "e1";
      `StateMachineEnum_binary_sequential_e2 : _zz_3_string = "e2";
      `StateMachineEnum_binary_sequential_e3 : _zz_3_string = "e3";
      default : _zz_3_string = "??";
    endcase
  end
  always @(*) begin
    case(_zz_4)
      `StateMachineEnum_binary_sequential_e0 : _zz_4_string = "e0";
      `StateMachineEnum_binary_sequential_e1 : _zz_4_string = "e1";
      `StateMachineEnum_binary_sequential_e2 : _zz_4_string = "e2";
      `StateMachineEnum_binary_sequential_e3 : _zz_4_string = "e3";
      default : _zz_4_string = "??";
    endcase
  end
  `endif

  assign _zz_result_payload_x_5 = ($signed(_zz_result_payload_x_1) >>> _zz_result_payload_x_regNext);
  assign _zz_result_payload_x_6 = ($signed(_zz_result_payload_x_2) >>> _zz_result_payload_x_regNext);
  assign _zz_result_payload_x_7 = _zz_result_payload_x;
  assign _zz_result_payload_x_8 = _zz__zz_1_port0[15 : 0];
  assign _zz_result_payload_x_9 = (rotate_mode ? ($signed(_zz__zz_result_payload_x_9) <= $signed(_zz_result_payload_x_3)) : ($signed(_zz_result_payload_x_2) < $signed(_zz__zz_result_payload_x_9_1)));
  always @(*) begin
    _zz_2 = 1'b0;
    case(_zz_3)
      `StateMachineEnum_binary_sequential_e1 : begin
      end
      `StateMachineEnum_binary_sequential_e2 : begin
      end
      `StateMachineEnum_binary_sequential_e3 : begin
      end
      default : begin
        _zz_2 = 1'b1;
      end
    endcase
  end

  assign raw_data_ready = _zz_raw_data_ready;
  assign result_payload_x = _zz_result_payload_x_4;
  assign result_payload_y = _zz_result_payload_y;
  assign result_payload_z = _zz_result_payload_z;
  assign result_valid = _zz_result_valid;
  always @(*) begin
    _zz_4 = _zz_3;
    case(_zz_3)
      `StateMachineEnum_binary_sequential_e1 : begin
        if(raw_data_fire) begin
          _zz_4 = `StateMachineEnum_binary_sequential_e2;
        end
      end
      `StateMachineEnum_binary_sequential_e2 : begin
        if(when_CordicRotator_l212) begin
          _zz_4 = `StateMachineEnum_binary_sequential_e3;
        end
      end
      `StateMachineEnum_binary_sequential_e3 : begin
        if(result_valid) begin
          _zz_4 = `StateMachineEnum_binary_sequential_e1;
        end
      end
      default : begin
      end
    endcase
    if(_zz_2) begin
      _zz_4 = `StateMachineEnum_binary_sequential_e1;
    end
    if(1'b0) begin
      _zz_4 = `StateMachineEnum_binary_sequential_e0;
    end
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_CordicRotator_l212 = (iter_limit <= _zz_result_payload_x);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_result_payload_x <= 5'h0;
      _zz_result_valid <= 1'b0;
      _zz_raw_data_ready <= 1'b1;
      _zz_3 <= `StateMachineEnum_binary_sequential_e0;
    end else begin
      _zz_3 <= _zz_4;
      case(_zz_3)
        `StateMachineEnum_binary_sequential_e1 : begin
          if(raw_data_fire) begin
            _zz_result_payload_x <= (_zz_result_payload_x + 5'h01);
            _zz_raw_data_ready <= 1'b0;
          end
        end
        `StateMachineEnum_binary_sequential_e2 : begin
          _zz_result_payload_x <= (_zz_result_payload_x + 5'h01);
          _zz_raw_data_ready <= 1'b0;
        end
        `StateMachineEnum_binary_sequential_e3 : begin
          _zz_result_payload_x <= 5'h0;
          if(result_valid) begin
            _zz_result_valid <= 1'b0;
            _zz_raw_data_ready <= 1'b1;
          end else begin
            _zz_result_valid <= 1'b1;
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    _zz_result_payload_x_regNext <= _zz_result_payload_x;
    case(_zz_3)
      `StateMachineEnum_binary_sequential_e1 : begin
        if(raw_data_fire) begin
          _zz_result_payload_x_1 <= raw_data_payload_x;
          _zz_result_payload_x_2 <= raw_data_payload_y;
          _zz_result_payload_x_3 <= raw_data_payload_z;
        end
      end
      `StateMachineEnum_binary_sequential_e2 : begin
        case(x_u)
          2'b00 : begin
            _zz_result_payload_x_1 <= (_zz_result_payload_x_9 ? _zz__zz_result_payload_x_1 : _zz__zz_result_payload_x_1_1);
          end
          2'b10 : begin
            _zz_result_payload_x_1 <= (_zz_result_payload_x_9 ? _zz__zz_result_payload_x_1_2 : _zz__zz_result_payload_x_1_3);
          end
          default : begin
            _zz_result_payload_x_1 <= _zz_result_payload_x_1;
          end
        endcase
        _zz_result_payload_x_2 <= (_zz_result_payload_x_9 ? _zz__zz_result_payload_x_2 : _zz__zz_result_payload_x_2_1);
        _zz_result_payload_x_3 <= (_zz_result_payload_x_9 ? _zz__zz_result_payload_x_3 : _zz__zz_result_payload_x_3_1);
      end
      `StateMachineEnum_binary_sequential_e3 : begin
        _zz_result_payload_x_4 <= _zz_result_payload_x_1;
        _zz_result_payload_y <= _zz_result_payload_x_2;
        _zz_result_payload_z <= _zz_result_payload_x_3;
      end
      default : begin
      end
    endcase
  end


endmodule

module AutoCorrelator (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_cha_i,
  input      [15:0]   raw_data_payload_cha_q,
  output              corr_result_valid,
  output     [31:0]   corr_result_payload_cha_i,
  output     [31:0]   corr_result_payload_cha_q,
  input               clk,
  input               reset
);
  wire                shiftRegisterE_3_output_valid;
  wire       [15:0]   shiftRegisterE_3_output_payload_cha_i;
  wire       [15:0]   shiftRegisterE_3_output_payload_cha_q;
  wire                corr_core_corr_result_valid;
  wire       [31:0]   corr_core_corr_result_payload_cha_i;
  wire       [31:0]   corr_core_corr_result_payload_cha_q;

  ShiftRegisterE_2 shiftRegisterE_3 (
    .input_valid             (raw_data_valid                         ), //i
    .input_payload_cha_i     (raw_data_payload_cha_i                 ), //i
    .input_payload_cha_q     (raw_data_payload_cha_q                 ), //i
    .output_valid            (shiftRegisterE_3_output_valid          ), //o
    .output_payload_cha_i    (shiftRegisterE_3_output_payload_cha_i  ), //o
    .output_payload_cha_q    (shiftRegisterE_3_output_payload_cha_q  ), //o
    .enable                  (raw_data_valid                         ), //i
    .clk                     (clk                                    ), //i
    .reset                   (reset                                  )  //i
  );
  Correlator corr_core (
    .raw_data_0_valid             (raw_data_valid                         ), //i
    .raw_data_0_payload_cha_i     (raw_data_payload_cha_i                 ), //i
    .raw_data_0_payload_cha_q     (raw_data_payload_cha_q                 ), //i
    .raw_data_1_valid             (shiftRegisterE_3_output_valid          ), //i
    .raw_data_1_payload_cha_i     (shiftRegisterE_3_output_payload_cha_i  ), //i
    .raw_data_1_payload_cha_q     (shiftRegisterE_3_output_payload_cha_q  ), //i
    .corr_result_valid            (corr_core_corr_result_valid            ), //o
    .corr_result_payload_cha_i    (corr_core_corr_result_payload_cha_i    ), //o
    .corr_result_payload_cha_q    (corr_core_corr_result_payload_cha_q    ), //o
    .clk                          (clk                                    ), //i
    .reset                        (reset                                  )  //i
  );
  assign corr_result_valid = corr_core_corr_result_valid;
  assign corr_result_payload_cha_i = corr_core_corr_result_payload_cha_i;
  assign corr_result_payload_cha_q = corr_core_corr_result_payload_cha_q;

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
  wire       [31:0]   shiftRegisterE_3_output_1;
  wire       [31:0]   shiftRegisterE_4_output_1;
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
  assign _zz_corr_val_i = ($signed(corr_val_i) - $signed(shiftRegisterE_3_output_1));
  assign _zz_corr_val_q = ($signed(corr_val_q) - $signed(shiftRegisterE_4_output_1));
  ShiftRegisterE shiftRegisterE_3 (
    .input_1     (mul_i                      ), //i
    .output_1    (shiftRegisterE_3_output_1  ), //o
    .enable      (mul_data_valid             ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  ShiftRegisterE shiftRegisterE_4 (
    .input_1     (mul_q                      ), //i
    .output_1    (shiftRegisterE_4_output_1  ), //o
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

module ShiftRegisterE_2 (
  input               input_valid,
  input      [15:0]   input_payload_cha_i,
  input      [15:0]   input_payload_cha_q,
  output              output_valid,
  output     [15:0]   output_payload_cha_i,
  output     [15:0]   output_payload_cha_q,
  input               enable,
  input               clk,
  input               reset
);
  reg                 shift_reg_0_valid;
  reg        [15:0]   shift_reg_0_payload_cha_i;
  reg        [15:0]   shift_reg_0_payload_cha_q;
  reg                 shift_reg_1_valid;
  reg        [15:0]   shift_reg_1_payload_cha_i;
  reg        [15:0]   shift_reg_1_payload_cha_q;
  reg                 shift_reg_2_valid;
  reg        [15:0]   shift_reg_2_payload_cha_i;
  reg        [15:0]   shift_reg_2_payload_cha_q;
  reg                 shift_reg_3_valid;
  reg        [15:0]   shift_reg_3_payload_cha_i;
  reg        [15:0]   shift_reg_3_payload_cha_q;
  reg                 shift_reg_4_valid;
  reg        [15:0]   shift_reg_4_payload_cha_i;
  reg        [15:0]   shift_reg_4_payload_cha_q;
  reg                 shift_reg_5_valid;
  reg        [15:0]   shift_reg_5_payload_cha_i;
  reg        [15:0]   shift_reg_5_payload_cha_q;
  reg                 shift_reg_6_valid;
  reg        [15:0]   shift_reg_6_payload_cha_i;
  reg        [15:0]   shift_reg_6_payload_cha_q;
  reg                 shift_reg_7_valid;
  reg        [15:0]   shift_reg_7_payload_cha_i;
  reg        [15:0]   shift_reg_7_payload_cha_q;
  reg                 shift_reg_8_valid;
  reg        [15:0]   shift_reg_8_payload_cha_i;
  reg        [15:0]   shift_reg_8_payload_cha_q;
  reg                 shift_reg_9_valid;
  reg        [15:0]   shift_reg_9_payload_cha_i;
  reg        [15:0]   shift_reg_9_payload_cha_q;
  reg                 shift_reg_10_valid;
  reg        [15:0]   shift_reg_10_payload_cha_i;
  reg        [15:0]   shift_reg_10_payload_cha_q;
  reg                 shift_reg_11_valid;
  reg        [15:0]   shift_reg_11_payload_cha_i;
  reg        [15:0]   shift_reg_11_payload_cha_q;
  reg                 shift_reg_12_valid;
  reg        [15:0]   shift_reg_12_payload_cha_i;
  reg        [15:0]   shift_reg_12_payload_cha_q;
  reg                 shift_reg_13_valid;
  reg        [15:0]   shift_reg_13_payload_cha_i;
  reg        [15:0]   shift_reg_13_payload_cha_q;
  reg                 shift_reg_14_valid;
  reg        [15:0]   shift_reg_14_payload_cha_i;
  reg        [15:0]   shift_reg_14_payload_cha_q;
  reg                 shift_reg_15_valid;
  reg        [15:0]   shift_reg_15_payload_cha_i;
  reg        [15:0]   shift_reg_15_payload_cha_q;

  assign output_valid = shift_reg_15_valid;
  assign output_payload_cha_i = shift_reg_15_payload_cha_i;
  assign output_payload_cha_q = shift_reg_15_payload_cha_q;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0_valid <= 1'b0;
      shift_reg_0_payload_cha_i <= 16'h0;
      shift_reg_0_payload_cha_q <= 16'h0;
      shift_reg_1_valid <= 1'b0;
      shift_reg_1_payload_cha_i <= 16'h0;
      shift_reg_1_payload_cha_q <= 16'h0;
      shift_reg_2_valid <= 1'b0;
      shift_reg_2_payload_cha_i <= 16'h0;
      shift_reg_2_payload_cha_q <= 16'h0;
      shift_reg_3_valid <= 1'b0;
      shift_reg_3_payload_cha_i <= 16'h0;
      shift_reg_3_payload_cha_q <= 16'h0;
      shift_reg_4_valid <= 1'b0;
      shift_reg_4_payload_cha_i <= 16'h0;
      shift_reg_4_payload_cha_q <= 16'h0;
      shift_reg_5_valid <= 1'b0;
      shift_reg_5_payload_cha_i <= 16'h0;
      shift_reg_5_payload_cha_q <= 16'h0;
      shift_reg_6_valid <= 1'b0;
      shift_reg_6_payload_cha_i <= 16'h0;
      shift_reg_6_payload_cha_q <= 16'h0;
      shift_reg_7_valid <= 1'b0;
      shift_reg_7_payload_cha_i <= 16'h0;
      shift_reg_7_payload_cha_q <= 16'h0;
      shift_reg_8_valid <= 1'b0;
      shift_reg_8_payload_cha_i <= 16'h0;
      shift_reg_8_payload_cha_q <= 16'h0;
      shift_reg_9_valid <= 1'b0;
      shift_reg_9_payload_cha_i <= 16'h0;
      shift_reg_9_payload_cha_q <= 16'h0;
      shift_reg_10_valid <= 1'b0;
      shift_reg_10_payload_cha_i <= 16'h0;
      shift_reg_10_payload_cha_q <= 16'h0;
      shift_reg_11_valid <= 1'b0;
      shift_reg_11_payload_cha_i <= 16'h0;
      shift_reg_11_payload_cha_q <= 16'h0;
      shift_reg_12_valid <= 1'b0;
      shift_reg_12_payload_cha_i <= 16'h0;
      shift_reg_12_payload_cha_q <= 16'h0;
      shift_reg_13_valid <= 1'b0;
      shift_reg_13_payload_cha_i <= 16'h0;
      shift_reg_13_payload_cha_q <= 16'h0;
      shift_reg_14_valid <= 1'b0;
      shift_reg_14_payload_cha_i <= 16'h0;
      shift_reg_14_payload_cha_q <= 16'h0;
      shift_reg_15_valid <= 1'b0;
      shift_reg_15_payload_cha_i <= 16'h0;
      shift_reg_15_payload_cha_q <= 16'h0;
    end else begin
      if(enable) begin
        shift_reg_0_valid <= input_valid;
        shift_reg_0_payload_cha_i <= input_payload_cha_i;
        shift_reg_0_payload_cha_q <= input_payload_cha_q;
        shift_reg_1_valid <= shift_reg_0_valid;
        shift_reg_1_payload_cha_i <= shift_reg_0_payload_cha_i;
        shift_reg_1_payload_cha_q <= shift_reg_0_payload_cha_q;
        shift_reg_2_valid <= shift_reg_1_valid;
        shift_reg_2_payload_cha_i <= shift_reg_1_payload_cha_i;
        shift_reg_2_payload_cha_q <= shift_reg_1_payload_cha_q;
        shift_reg_3_valid <= shift_reg_2_valid;
        shift_reg_3_payload_cha_i <= shift_reg_2_payload_cha_i;
        shift_reg_3_payload_cha_q <= shift_reg_2_payload_cha_q;
        shift_reg_4_valid <= shift_reg_3_valid;
        shift_reg_4_payload_cha_i <= shift_reg_3_payload_cha_i;
        shift_reg_4_payload_cha_q <= shift_reg_3_payload_cha_q;
        shift_reg_5_valid <= shift_reg_4_valid;
        shift_reg_5_payload_cha_i <= shift_reg_4_payload_cha_i;
        shift_reg_5_payload_cha_q <= shift_reg_4_payload_cha_q;
        shift_reg_6_valid <= shift_reg_5_valid;
        shift_reg_6_payload_cha_i <= shift_reg_5_payload_cha_i;
        shift_reg_6_payload_cha_q <= shift_reg_5_payload_cha_q;
        shift_reg_7_valid <= shift_reg_6_valid;
        shift_reg_7_payload_cha_i <= shift_reg_6_payload_cha_i;
        shift_reg_7_payload_cha_q <= shift_reg_6_payload_cha_q;
        shift_reg_8_valid <= shift_reg_7_valid;
        shift_reg_8_payload_cha_i <= shift_reg_7_payload_cha_i;
        shift_reg_8_payload_cha_q <= shift_reg_7_payload_cha_q;
        shift_reg_9_valid <= shift_reg_8_valid;
        shift_reg_9_payload_cha_i <= shift_reg_8_payload_cha_i;
        shift_reg_9_payload_cha_q <= shift_reg_8_payload_cha_q;
        shift_reg_10_valid <= shift_reg_9_valid;
        shift_reg_10_payload_cha_i <= shift_reg_9_payload_cha_i;
        shift_reg_10_payload_cha_q <= shift_reg_9_payload_cha_q;
        shift_reg_11_valid <= shift_reg_10_valid;
        shift_reg_11_payload_cha_i <= shift_reg_10_payload_cha_i;
        shift_reg_11_payload_cha_q <= shift_reg_10_payload_cha_q;
        shift_reg_12_valid <= shift_reg_11_valid;
        shift_reg_12_payload_cha_i <= shift_reg_11_payload_cha_i;
        shift_reg_12_payload_cha_q <= shift_reg_11_payload_cha_q;
        shift_reg_13_valid <= shift_reg_12_valid;
        shift_reg_13_payload_cha_i <= shift_reg_12_payload_cha_i;
        shift_reg_13_payload_cha_q <= shift_reg_12_payload_cha_q;
        shift_reg_14_valid <= shift_reg_13_valid;
        shift_reg_14_payload_cha_i <= shift_reg_13_payload_cha_i;
        shift_reg_14_payload_cha_q <= shift_reg_13_payload_cha_q;
        shift_reg_15_valid <= shift_reg_14_valid;
        shift_reg_15_payload_cha_i <= shift_reg_14_payload_cha_i;
        shift_reg_15_payload_cha_q <= shift_reg_14_payload_cha_q;
      end else begin
        shift_reg_0_valid <= 1'b0;
        shift_reg_0_payload_cha_i <= 16'h0;
        shift_reg_0_payload_cha_q <= 16'h0;
        shift_reg_1_valid <= 1'b0;
        shift_reg_1_payload_cha_i <= 16'h0;
        shift_reg_1_payload_cha_q <= 16'h0;
        shift_reg_2_valid <= 1'b0;
        shift_reg_2_payload_cha_i <= 16'h0;
        shift_reg_2_payload_cha_q <= 16'h0;
        shift_reg_3_valid <= 1'b0;
        shift_reg_3_payload_cha_i <= 16'h0;
        shift_reg_3_payload_cha_q <= 16'h0;
        shift_reg_4_valid <= 1'b0;
        shift_reg_4_payload_cha_i <= 16'h0;
        shift_reg_4_payload_cha_q <= 16'h0;
        shift_reg_5_valid <= 1'b0;
        shift_reg_5_payload_cha_i <= 16'h0;
        shift_reg_5_payload_cha_q <= 16'h0;
        shift_reg_6_valid <= 1'b0;
        shift_reg_6_payload_cha_i <= 16'h0;
        shift_reg_6_payload_cha_q <= 16'h0;
        shift_reg_7_valid <= 1'b0;
        shift_reg_7_payload_cha_i <= 16'h0;
        shift_reg_7_payload_cha_q <= 16'h0;
        shift_reg_8_valid <= 1'b0;
        shift_reg_8_payload_cha_i <= 16'h0;
        shift_reg_8_payload_cha_q <= 16'h0;
        shift_reg_9_valid <= 1'b0;
        shift_reg_9_payload_cha_i <= 16'h0;
        shift_reg_9_payload_cha_q <= 16'h0;
        shift_reg_10_valid <= 1'b0;
        shift_reg_10_payload_cha_i <= 16'h0;
        shift_reg_10_payload_cha_q <= 16'h0;
        shift_reg_11_valid <= 1'b0;
        shift_reg_11_payload_cha_i <= 16'h0;
        shift_reg_11_payload_cha_q <= 16'h0;
        shift_reg_12_valid <= 1'b0;
        shift_reg_12_payload_cha_i <= 16'h0;
        shift_reg_12_payload_cha_q <= 16'h0;
        shift_reg_13_valid <= 1'b0;
        shift_reg_13_payload_cha_i <= 16'h0;
        shift_reg_13_payload_cha_q <= 16'h0;
        shift_reg_14_valid <= 1'b0;
        shift_reg_14_payload_cha_i <= 16'h0;
        shift_reg_14_payload_cha_q <= 16'h0;
        shift_reg_15_valid <= 1'b0;
        shift_reg_15_payload_cha_i <= 16'h0;
        shift_reg_15_payload_cha_q <= 16'h0;
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

  assign output_1 = shift_reg_15;
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
      end
    end
  end


endmodule
