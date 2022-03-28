// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : CordicRotator
// Git hash  : 41d71cf9ab449e73a475f6b0f32b020b0dbe98fe

`timescale 1ns/1ps 

module CordicRotator (
  input      [4:0]    iter_limit,
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
  input               resetn
);
  localparam StateMachineEnum_e0 = 2'd0;
  localparam StateMachineEnum_e1 = 2'd1;
  localparam StateMachineEnum_e2 = 2'd2;
  localparam StateMachineEnum_e3 = 2'd3;

  reg        [31:0]   _zz__zz_1_port0;
  wire       [3:0]    _zz__zz_1_port;
  wire                _zz__zz_1_port_1;
  wire       [3:0]    _zz__zz_result_payload_x_8;
  wire                _zz__zz_result_payload_x_8_1;
  wire       [31:0]   _zz__zz_result_payload_x_1;
  wire       [31:0]   _zz__zz_result_payload_x_1_1;
  wire       [31:0]   _zz__zz_result_payload_x_1_2;
  wire       [31:0]   _zz__zz_result_payload_x_1_3;
  wire       [31:0]   _zz__zz_result_payload_x_2;
  wire       [31:0]   _zz__zz_result_payload_x_2_1;
  wire       [31:0]   _zz__zz_result_payload_x_3;
  wire       [31:0]   _zz__zz_result_payload_x_3_1;
  reg        [4:0]    _zz_result_payload_x;
  reg        [4:0]    _zz_result_payload_x_regNext;
  reg        [31:0]   _zz_result_payload_x_1;
  reg        [31:0]   _zz_result_payload_x_2;
  reg        [31:0]   _zz_result_payload_x_3;
  reg        [31:0]   _zz_result_payload_x_4;
  reg        [31:0]   _zz_result_payload_y;
  reg        [31:0]   _zz_result_payload_z;
  reg                 _zz_result_valid;
  wire       [31:0]   _zz_result_payload_x_5;
  wire       [31:0]   _zz_result_payload_x_6;
  wire       [4:0]    _zz_result_payload_x_7;
  wire       [31:0]   _zz_result_payload_x_8;
  wire                _zz_result_payload_x_9;
  reg                 _zz_raw_data_ready;
  reg                 _zz_2;
  reg        [1:0]    _zz_3;
  reg        [1:0]    _zz_4;
  wire                raw_data_fire;
  wire                when_CordicRotator_l222;
  `ifndef SYNTHESIS
  reg [15:0] _zz_3_string;
  reg [15:0] _zz_4_string;
  `endif

  (* ram_style = "block" *) reg [31:0] _zz_1 [0:15];

  assign _zz__zz_result_payload_x_8 = _zz_result_payload_x_7[3:0];
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
    $readmemb("CordicRotator.sv_toplevel__zz_1.bin",_zz_1);
  end
  always @(posedge clk) begin
    if(_zz__zz_result_payload_x_8_1) begin
      _zz__zz_1_port0 <= _zz_1[_zz__zz_result_payload_x_8];
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(_zz_3)
      StateMachineEnum_e0 : _zz_3_string = "e0";
      StateMachineEnum_e1 : _zz_3_string = "e1";
      StateMachineEnum_e2 : _zz_3_string = "e2";
      StateMachineEnum_e3 : _zz_3_string = "e3";
      default : _zz_3_string = "??";
    endcase
  end
  always @(*) begin
    case(_zz_4)
      StateMachineEnum_e0 : _zz_4_string = "e0";
      StateMachineEnum_e1 : _zz_4_string = "e1";
      StateMachineEnum_e2 : _zz_4_string = "e2";
      StateMachineEnum_e3 : _zz_4_string = "e3";
      default : _zz_4_string = "??";
    endcase
  end
  `endif

  assign _zz_result_payload_x_5 = ($signed(_zz_result_payload_x_1) >>> _zz_result_payload_x_regNext);
  assign _zz_result_payload_x_6 = ($signed(_zz_result_payload_x_2) >>> _zz_result_payload_x_regNext);
  assign _zz_result_payload_x_7 = _zz_result_payload_x;
  assign _zz_result_payload_x_8 = _zz__zz_1_port0[31 : 0];
  assign _zz_result_payload_x_9 = (rotate_mode ? (! _zz_result_payload_x_3[31]) : _zz_result_payload_x_2[31]);
  always @(*) begin
    _zz_2 = 1'b0;
    case(_zz_3)
      StateMachineEnum_e1 : begin
      end
      StateMachineEnum_e2 : begin
      end
      StateMachineEnum_e3 : begin
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
      StateMachineEnum_e1 : begin
        if(raw_data_fire) begin
          _zz_4 = StateMachineEnum_e2;
        end
      end
      StateMachineEnum_e2 : begin
        if(when_CordicRotator_l222) begin
          _zz_4 = StateMachineEnum_e3;
        end
      end
      StateMachineEnum_e3 : begin
        if(result_valid) begin
          _zz_4 = StateMachineEnum_e1;
        end
      end
      default : begin
      end
    endcase
    if(_zz_2) begin
      _zz_4 = StateMachineEnum_e1;
    end
    if(1'b0) begin
      _zz_4 = StateMachineEnum_e0;
    end
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign when_CordicRotator_l222 = (iter_limit <= _zz_result_payload_x);
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_result_payload_x <= 5'h0;
      _zz_result_valid <= 1'b0;
      _zz_raw_data_ready <= 1'b1;
      _zz_3 <= StateMachineEnum_e0;
    end else begin
      _zz_3 <= _zz_4;
      case(_zz_3)
        StateMachineEnum_e1 : begin
          if(raw_data_fire) begin
            _zz_result_payload_x <= (_zz_result_payload_x + 5'h01);
            _zz_raw_data_ready <= 1'b0;
          end
        end
        StateMachineEnum_e2 : begin
          _zz_result_payload_x <= (_zz_result_payload_x + 5'h01);
          _zz_raw_data_ready <= 1'b0;
        end
        StateMachineEnum_e3 : begin
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
      StateMachineEnum_e1 : begin
        if(raw_data_fire) begin
          _zz_result_payload_x_1 <= raw_data_payload_x;
          _zz_result_payload_x_2 <= raw_data_payload_y;
          _zz_result_payload_x_3 <= raw_data_payload_z;
        end
      end
      StateMachineEnum_e2 : begin
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
      StateMachineEnum_e3 : begin
        _zz_result_payload_x_4 <= _zz_result_payload_x_1;
        _zz_result_payload_y <= _zz_result_payload_x_2;
        _zz_result_payload_z <= _zz_result_payload_x_3;
      end
      default : begin
      end
    endcase
  end


endmodule
