// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : CordicRotator
// Git hash  : cf8112ca4b6fbc647e801d7a00f410aa23474696


`define StateMachineEnum_binary_sequential_type [1:0]
`define StateMachineEnum_binary_sequential_e0 2'b00
`define StateMachineEnum_binary_sequential_e1 2'b01
`define StateMachineEnum_binary_sequential_e2 2'b10
`define StateMachineEnum_binary_sequential_e3 2'b11


module CordicRotator (
  input      [4:0]    iter_limit,
  input               rotate_mode,
  input      [1:0]    x_u,
  input               w_en,
  input      [7:0]    w_addr,
  input      [31:0]   w_data,
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
  reg        [31:0]   _zz__zz_1_port1;
  wire       [3:0]    _zz__zz_1_port;
  wire       [31:0]   _zz__zz_1_port_1;
  wire       [3:0]    _zz__zz_1_port_2;
  wire                _zz__zz_1_port_3;
  wire       [3:0]    _zz__zz_result_payload_x_8;
  wire                _zz__zz_result_payload_x_8_1;
  wire       [31:0]   _zz__zz_result_payload_x_9;
  wire       [31:0]   _zz__zz_result_payload_x_9_1;
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
  reg        `StateMachineEnum_binary_sequential_type _zz_3;
  reg        `StateMachineEnum_binary_sequential_type _zz_4;
  wire                raw_data_fire;
  wire                when_CordicRotator_l212;
  `ifndef SYNTHESIS
  reg [15:0] _zz_3_string;
  reg [15:0] _zz_4_string;
  `endif

  (* ram_style = "block" *) reg [31:0] _zz_1 [0:15];

  assign _zz__zz_1_port = w_addr[3:0];
  assign _zz__zz_result_payload_x_8 = _zz_result_payload_x_7[3:0];
  assign _zz__zz_result_payload_x_9 = 32'h0;
  assign _zz__zz_result_payload_x_9_1 = 32'h0;
  assign _zz__zz_result_payload_x_1 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_6));
  assign _zz__zz_result_payload_x_1_1 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_6));
  assign _zz__zz_result_payload_x_1_2 = ($signed(_zz_result_payload_x_1) + $signed(_zz_result_payload_x_6));
  assign _zz__zz_result_payload_x_1_3 = ($signed(_zz_result_payload_x_1) - $signed(_zz_result_payload_x_6));
  assign _zz__zz_result_payload_x_2 = ($signed(_zz_result_payload_x_2) + $signed(_zz_result_payload_x_5));
  assign _zz__zz_result_payload_x_2_1 = ($signed(_zz_result_payload_x_2) - $signed(_zz_result_payload_x_5));
  assign _zz__zz_result_payload_x_3 = ($signed(_zz_result_payload_x_3) - $signed(_zz_result_payload_x_8));
  assign _zz__zz_result_payload_x_3_1 = ($signed(_zz_result_payload_x_3) + $signed(_zz_result_payload_x_8));
  assign _zz__zz_1_port_1 = w_data;
  assign _zz__zz_result_payload_x_8_1 = 1'b1;
  initial begin
    $readmemb("CordicRotator.v_toplevel__zz_1.bin",_zz_1);
  end
  always @(posedge clk) begin
    if(w_en) begin
      _zz_1[_zz__zz_1_port] <= _zz__zz_1_port_1;
    end
  end

  always @(posedge clk) begin
    if(_zz__zz_result_payload_x_8_1) begin
      _zz__zz_1_port1 <= _zz_1[_zz__zz_result_payload_x_8];
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
  assign _zz_result_payload_x_8 = _zz__zz_1_port1[31 : 0];
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
