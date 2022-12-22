// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : GMSKMod
// Git hash  : a4ae68a543610370bf0b0ac0cce890798f851cf2

`timescale 1ns/1ps

module GMSKMod (
  input               unit_data_valid,
  input               unit_data_payload_last,
  input      [0:0]    unit_data_payload_fragment,
  output              mod_iq_valid,
  output              mod_iq_payload_last,
  output     [15:0]   mod_iq_payload_fragment_cha_i,
  output     [15:0]   mod_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);

  reg        [15:0]   _zz_cosTable_port0;
  reg        [15:0]   _zz_sinTable_port0;
  wire                symbol_filter_result_data_valid;
  wire                symbol_filter_result_data_payload_last;
  wire       [11:0]   symbol_filter_result_data_payload_fragment;
  wire       [11:0]   _zz_when_GMSKMod_l111;
  wire       [11:0]   _zz_when_GMSKMod_l113;
  wire       [10:0]   _zz_cosTable_port;
  wire                _zz_cosTable_port_1;
  wire       [10:0]   _zz_mod_iq_payload_fragment_cha_i_1;
  wire                _zz_mod_iq_payload_fragment_cha_i_2;
  wire       [10:0]   _zz_sinTable_port;
  wire                _zz_sinTable_port_1;
  wire       [10:0]   _zz_mod_iq_payload_fragment_cha_q_1;
  wire                _zz_mod_iq_payload_fragment_cha_q_2;
  reg        [11:0]   phi_integral;
  wire       [11:0]   CONST_2PI;
  reg                 mod_valid_next;
  reg                 mod_last_next;
  wire       [11:0]   norm_phi;
  wire       [11:0]   sum_value;
  wire                when_GMSKMod_l111;
  wire                when_GMSKMod_l113;
  reg                 mod_valid_next_regNext;
  wire       [11:0]   _zz_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   _zz_mod_iq_payload_fragment_cha_q;
  reg                 mod_last_next_regNext;
  (* rom_style = "block" *) reg [15:0] cosTable [0:2047];
  (* rom_style = "block" *) reg [15:0] sinTable [0:2047];

  assign _zz_when_GMSKMod_l111 = 12'h648;
  assign _zz_when_GMSKMod_l113 = 12'h0;
  assign _zz_mod_iq_payload_fragment_cha_i_1 = _zz_mod_iq_payload_fragment_cha_i[10:0];
  assign _zz_mod_iq_payload_fragment_cha_q_1 = _zz_mod_iq_payload_fragment_cha_q[10:0];
  assign _zz_mod_iq_payload_fragment_cha_i_2 = 1'b1;
  assign _zz_mod_iq_payload_fragment_cha_q_2 = 1'b1;
  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/GMSKMod.v_toplevel_cosTable.bin",cosTable);
  end
  always @(posedge clk) begin
    if(_zz_mod_iq_payload_fragment_cha_i_2) begin
      _zz_cosTable_port0 <= cosTable[_zz_mod_iq_payload_fragment_cha_i_1];
    end
  end

  initial begin
    $readmemb("/home/missdown/IdeaProjects/MAGI_PROJECT/tmp/job_1/GMSKMod.v_toplevel_sinTable.bin",sinTable);
  end
  always @(posedge clk) begin
    if(_zz_mod_iq_payload_fragment_cha_q_2) begin
      _zz_sinTable_port0 <= sinTable[_zz_mod_iq_payload_fragment_cha_q_1];
    end
  end

  GMSKSymbolFilter symbol_filter (
    .raw_data_valid               (unit_data_valid                                 ), //i
    .raw_data_payload_last        (unit_data_payload_last                          ), //i
    .raw_data_payload_fragment    (unit_data_payload_fragment                      ), //i
    .result_data_valid            (symbol_filter_result_data_valid                 ), //o
    .result_data_payload_last     (symbol_filter_result_data_payload_last          ), //o
    .result_data_payload_fragment (symbol_filter_result_data_payload_fragment[11:0]), //o
    .clk                          (clk                                             ), //i
    .reset                        (reset                                           )  //i
  );
  assign CONST_2PI = 12'h648;
  assign norm_phi = ($signed(symbol_filter_result_data_payload_fragment) >>> 3);
  assign sum_value = ($signed(phi_integral) + $signed(norm_phi));
  assign when_GMSKMod_l111 = ($signed(_zz_when_GMSKMod_l111) < $signed(sum_value));
  assign when_GMSKMod_l113 = ($signed(sum_value) < $signed(_zz_when_GMSKMod_l113));
  assign mod_iq_valid = mod_valid_next_regNext;
  assign _zz_mod_iq_payload_fragment_cha_i = phi_integral;
  assign mod_iq_payload_fragment_cha_i = _zz_cosTable_port0;
  assign _zz_mod_iq_payload_fragment_cha_q = phi_integral;
  assign mod_iq_payload_fragment_cha_q = _zz_sinTable_port0;
  assign mod_iq_payload_last = mod_last_next_regNext;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      phi_integral <= 12'h192;
      mod_valid_next <= 1'b0;
      mod_last_next <= 1'b0;
      mod_valid_next_regNext <= 1'b0;
      mod_last_next_regNext <= 1'b0;
    end else begin
      mod_valid_next <= symbol_filter_result_data_valid;
      if(symbol_filter_result_data_valid) begin
        mod_last_next <= symbol_filter_result_data_payload_last;
      end
      if(mod_last_next) begin
        phi_integral <= 12'h192;
      end else begin
        if(symbol_filter_result_data_valid) begin
          if(when_GMSKMod_l111) begin
            phi_integral <= ($signed(sum_value) - $signed(CONST_2PI));
          end else begin
            if(when_GMSKMod_l113) begin
              phi_integral <= ($signed(sum_value) + $signed(CONST_2PI));
            end else begin
              phi_integral <= sum_value;
            end
          end
        end
      end
      mod_valid_next_regNext <= mod_valid_next;
      mod_last_next_regNext <= mod_last_next;
    end
  end


endmodule

module GMSKSymbolFilter (
  input               raw_data_valid,
  input               raw_data_payload_last,
  input      [0:0]    raw_data_payload_fragment,
  output              result_data_valid,
  output              result_data_payload_last,
  output     [11:0]   result_data_payload_fragment,
  input               clk,
  input               reset
);

  wire       [11:0]   _zz_mixer_cell_0;
  wire       [11:0]   _zz_mixer_cell_1;
  wire       [11:0]   _zz_mixer_cell_2;
  wire       [11:0]   _zz_filtered_data;
  reg                 raw_valid_next;
  reg                 raw_last_next;
  wire       [11:0]   filter_coff_0;
  wire       [11:0]   filter_coff_1;
  wire       [11:0]   filter_coff_2;
  reg        [1:0]    data_buf_0;
  reg        [1:0]    data_buf_1;
  reg        [1:0]    data_buf_2;
  reg        [11:0]   mixer_cell_0;
  reg        [11:0]   mixer_cell_1;
  reg        [11:0]   mixer_cell_2;
  reg        [11:0]   filtered_data;
  reg                 raw_valid_next_regNext;
  reg                 raw_last_next_regNext;

  assign _zz_mixer_cell_0 = 12'h0;
  assign _zz_mixer_cell_1 = 12'h0;
  assign _zz_mixer_cell_2 = 12'h0;
  assign _zz_filtered_data = ($signed(mixer_cell_0) + $signed(mixer_cell_1));
  assign filter_coff_0 = 12'h035;
  assign filter_coff_1 = 12'h2b8;
  assign filter_coff_2 = 12'h035;
  always @(*) begin
    case(data_buf_0)
      2'b01 : begin
        mixer_cell_0 = filter_coff_0;
      end
      2'b10 : begin
        mixer_cell_0 = ($signed(_zz_mixer_cell_0) - $signed(filter_coff_0));
      end
      default : begin
        mixer_cell_0 = 12'h0;
      end
    endcase
  end

  always @(*) begin
    case(data_buf_1)
      2'b01 : begin
        mixer_cell_1 = filter_coff_1;
      end
      2'b10 : begin
        mixer_cell_1 = ($signed(_zz_mixer_cell_1) - $signed(filter_coff_1));
      end
      default : begin
        mixer_cell_1 = 12'h0;
      end
    endcase
  end

  always @(*) begin
    case(data_buf_2)
      2'b01 : begin
        mixer_cell_2 = filter_coff_2;
      end
      2'b10 : begin
        mixer_cell_2 = ($signed(_zz_mixer_cell_2) - $signed(filter_coff_2));
      end
      default : begin
        mixer_cell_2 = 12'h0;
      end
    endcase
  end

  assign result_data_payload_fragment = filtered_data;
  assign result_data_valid = raw_valid_next_regNext;
  assign result_data_payload_last = raw_last_next_regNext;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      raw_valid_next <= 1'b0;
      raw_last_next <= 1'b0;
      data_buf_0 <= 2'b00;
      data_buf_1 <= 2'b00;
      data_buf_2 <= 2'b00;
      filtered_data <= 12'h0;
      raw_valid_next_regNext <= 1'b0;
      raw_last_next_regNext <= 1'b0;
    end else begin
      raw_valid_next <= raw_data_valid;
      if(raw_data_valid) begin
        raw_last_next <= raw_data_payload_last;
      end
      if(raw_last_next) begin
        data_buf_0 <= 2'b00;
        data_buf_1 <= 2'b00;
        data_buf_2 <= 2'b00;
      end else begin
        if(raw_data_valid) begin
          data_buf_0 <= ((raw_data_payload_fragment == 1'b0) ? 2'b10 : 2'b01);
          data_buf_1 <= data_buf_0;
          data_buf_2 <= data_buf_1;
        end
      end
      if(raw_valid_next) begin
        filtered_data <= ($signed(_zz_filtered_data) + $signed(mixer_cell_2));
      end
      raw_valid_next_regNext <= raw_valid_next;
      raw_last_next_regNext <= raw_last_next;
    end
  end


endmodule
