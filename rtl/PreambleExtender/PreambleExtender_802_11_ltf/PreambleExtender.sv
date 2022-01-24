// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : PreambleExtender
// Git hash  : e700e7347423171eccd7b05bac962965acefbb15


`define PreambleExtenderStates_binary_sequential_type [1:0]
`define PreambleExtenderStates_binary_sequential_IDLE 2'b00
`define PreambleExtenderStates_binary_sequential_PREAMBLE 2'b01
`define PreambleExtenderStates_binary_sequential_DATA 2'b10


module PreambleExtender_802_11_ltf (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment_cha_i,
  input      [15:0]   raw_data_payload_fragment_cha_q,
  output              preamble_data_valid,
  input               preamble_data_ready,
  output              preamble_data_payload_last,
  output     [15:0]   preamble_data_payload_fragment_cha_i,
  output     [15:0]   preamble_data_payload_fragment_cha_q,
  input               clk,
  input               resetn
);
  reg        [15:0]   _zz_I_mem_port0;
  reg        [15:0]   _zz_I_mem_port1;
  reg        [15:0]   _zz_Q_mem_port0;
  reg        [15:0]   _zz_Q_mem_port1;
  wire       [7:0]    _zz_I_mem_port;
  wire                _zz_I_mem_port_1;
  wire       [7:0]    _zz_Q_mem_port;
  wire                _zz_Q_mem_port_1;
  wire       [7:0]    _zz_I_mem_port_2;
  wire                _zz_I_mem_port_3;
  wire       [7:0]    _zz_Q_mem_port_2;
  wire                _zz_Q_mem_port_3;
  wire       [7:0]    _zz_preamble_data_i_2;
  wire                _zz_preamble_data_i_3;
  wire       [7:0]    _zz_preamble_data_q_2;
  wire                _zz_preamble_data_q_3;
  wire       [7:0]    _zz_preamble_data_i_4;
  wire                _zz_preamble_data_i_5;
  wire       [7:0]    _zz_preamble_data_q_4;
  wire                _zz_preamble_data_q_5;
  reg        [8:0]    cnt;
  reg                 raw_ready;
  reg        [15:0]   preamble_data_i;
  reg        [15:0]   preamble_data_q;
  reg                 preamble_valid;
  reg                 preamble_last;
  reg        `PreambleExtenderStates_binary_sequential_type preamble_states;
  wire                when_PreambleExtender_l58;
  wire       [8:0]    _zz_preamble_data_i;
  wire       [8:0]    _zz_preamble_data_q;
  wire       [8:0]    _zz_preamble_data_i_1;
  wire       [8:0]    _zz_preamble_data_q_1;
  wire                when_PreambleExtender_l72;
  wire                raw_data_fire;
  wire                raw_data_fire_1;
  wire                when_PreambleExtender_l86;
  `ifndef SYNTHESIS
  reg [63:0] preamble_states_string;
  `endif

  (* rom_style = "block" *) reg [15:0] I_mem [0:159];
  (* rom_style = "block" *) reg [15:0] Q_mem [0:159];

  assign _zz_preamble_data_i_2 = _zz_preamble_data_i[7:0];
  assign _zz_preamble_data_q_2 = _zz_preamble_data_q[7:0];
  assign _zz_preamble_data_i_4 = _zz_preamble_data_i_1[7:0];
  assign _zz_preamble_data_q_4 = _zz_preamble_data_q_1[7:0];
  assign _zz_preamble_data_i_3 = 1'b1;
  assign _zz_preamble_data_i_5 = 1'b1;
  assign _zz_preamble_data_q_3 = 1'b1;
  assign _zz_preamble_data_q_5 = 1'b1;
  initial begin
    $readmemb("PreambleExtender.sv_toplevel_I_mem.bin",I_mem);
  end
  always @(posedge clk) begin
    if(_zz_preamble_data_i_3) begin
      _zz_I_mem_port0 <= I_mem[_zz_preamble_data_i_2];
    end
  end

  always @(posedge clk) begin
    if(_zz_preamble_data_i_5) begin
      _zz_I_mem_port1 <= I_mem[_zz_preamble_data_i_4];
    end
  end

  initial begin
    $readmemb("PreambleExtender.sv_toplevel_Q_mem.bin",Q_mem);
  end
  always @(posedge clk) begin
    if(_zz_preamble_data_q_3) begin
      _zz_Q_mem_port0 <= Q_mem[_zz_preamble_data_q_2];
    end
  end

  always @(posedge clk) begin
    if(_zz_preamble_data_q_5) begin
      _zz_Q_mem_port1 <= Q_mem[_zz_preamble_data_q_4];
    end
  end

  `ifndef SYNTHESIS
  always @(*) begin
    case(preamble_states)
      `PreambleExtenderStates_binary_sequential_IDLE : preamble_states_string = "IDLE    ";
      `PreambleExtenderStates_binary_sequential_PREAMBLE : preamble_states_string = "PREAMBLE";
      `PreambleExtenderStates_binary_sequential_DATA : preamble_states_string = "DATA    ";
      default : preamble_states_string = "????????";
    endcase
  end
  `endif

  assign when_PreambleExtender_l58 = (raw_data_valid && preamble_data_ready);
  assign _zz_preamble_data_i = cnt;
  assign _zz_preamble_data_q = cnt;
  assign _zz_preamble_data_i_1 = cnt;
  assign _zz_preamble_data_q_1 = cnt;
  assign when_PreambleExtender_l72 = (9'h0a0 <= cnt);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign raw_data_fire_1 = (raw_data_valid && raw_data_ready);
  assign when_PreambleExtender_l86 = (raw_data_payload_last && raw_data_fire_1);
  assign raw_data_ready = (raw_ready && preamble_data_ready);
  assign preamble_data_valid = preamble_valid;
  assign preamble_data_payload_fragment_cha_i = preamble_data_i;
  assign preamble_data_payload_fragment_cha_q = preamble_data_q;
  assign preamble_data_payload_last = preamble_last;
  always @(posedge clk) begin
    if(!resetn) begin
      cnt <= 9'h0;
      raw_ready <= 1'b0;
      preamble_valid <= 1'b0;
      preamble_last <= 1'b0;
      preamble_states <= `PreambleExtenderStates_binary_sequential_IDLE;
    end else begin
      case(preamble_states)
        `PreambleExtenderStates_binary_sequential_IDLE : begin
          cnt <= 9'h0;
          raw_ready <= 1'b0;
          preamble_valid <= 1'b0;
          preamble_last <= 1'b0;
          if(when_PreambleExtender_l58) begin
            cnt <= (cnt + 9'h001);
            preamble_states <= `PreambleExtenderStates_binary_sequential_PREAMBLE;
          end
        end
        `PreambleExtenderStates_binary_sequential_PREAMBLE : begin
          if(preamble_data_ready) begin
            cnt <= (cnt + 9'h001);
          end
          preamble_valid <= 1'b1;
          if(when_PreambleExtender_l72) begin
            raw_ready <= 1'b1;
            preamble_states <= `PreambleExtenderStates_binary_sequential_DATA;
          end
        end
        default : begin
          if(raw_data_fire) begin
            preamble_valid <= 1'b1;
          end else begin
            preamble_valid <= 1'b0;
          end
          if(when_PreambleExtender_l86) begin
            preamble_states <= `PreambleExtenderStates_binary_sequential_IDLE;
            preamble_last <= 1'b1;
          end else begin
            preamble_last <= 1'b0;
          end
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(preamble_states)
      `PreambleExtenderStates_binary_sequential_IDLE : begin
        preamble_data_i <= _zz_I_mem_port0;
        preamble_data_q <= _zz_Q_mem_port0;
      end
      `PreambleExtenderStates_binary_sequential_PREAMBLE : begin
        preamble_data_i <= _zz_I_mem_port1;
        preamble_data_q <= _zz_Q_mem_port1;
      end
      default : begin
        if(raw_data_fire) begin
          preamble_data_i <= raw_data_payload_fragment_cha_i;
          preamble_data_q <= raw_data_payload_fragment_cha_q;
        end
      end
    endcase
  end


endmodule
