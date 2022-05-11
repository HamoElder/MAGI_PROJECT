// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : MIMOTransmitter
// Git hash  : a61652a25e7e73fd6a89f26f1edce017e805a730

`timescale 1ns/1ps

module MIMOTransmitter (
  input               base_iqs_valid,
  input      [11:0]   base_iqs_payload_0_cha_i,
  input      [11:0]   base_iqs_payload_0_cha_q,
  input      [11:0]   base_iqs_payload_1_cha_i,
  input      [11:0]   base_iqs_payload_1_cha_q,
  output              mod_iqs_valid,
  output     [23:0]   mod_iqs_payload_0_cha_i,
  output     [23:0]   mod_iqs_payload_0_cha_q,
  output     [23:0]   mod_iqs_payload_1_cha_i,
  output     [23:0]   mod_iqs_payload_1_cha_q,
  input               w_sel,
  input               w_en,
  input      [1:0]    w_addr,
  input      [11:0]   w_data,
  input               clk,
  input               resetn
);

  wire       [11:0]   mIMOTransmitterUnit_2_shift_i_0;
  wire       [11:0]   mIMOTransmitterUnit_2_shift_i_1;
  wire       [11:0]   mIMOTransmitterUnit_2_shift_q_0;
  wire       [11:0]   mIMOTransmitterUnit_2_shift_q_1;
  wire       [11:0]   mIMOTransmitterUnit_3_shift_i_0;
  wire       [11:0]   mIMOTransmitterUnit_3_shift_i_1;
  wire       [11:0]   mIMOTransmitterUnit_3_shift_q_0;
  wire       [11:0]   mIMOTransmitterUnit_3_shift_q_1;
  wire       [11:0]   _zz_shift_i_map_port1;
  wire       [11:0]   _zz_shift_i_map_port2;
  wire       [11:0]   _zz_shift_i_map_port3;
  wire       [11:0]   _zz_shift_i_map_port4;
  wire       [11:0]   _zz_shift_q_map_port1;
  wire       [11:0]   _zz_shift_q_map_port2;
  wire       [11:0]   _zz_shift_q_map_port3;
  wire       [11:0]   _zz_shift_q_map_port4;
  wire                mIMOTransmitterUnit_2_mod_sub_iqs_valid;
  wire       [23:0]   mIMOTransmitterUnit_2_mod_sub_iqs_payload_0_cha_i;
  wire       [23:0]   mIMOTransmitterUnit_2_mod_sub_iqs_payload_0_cha_q;
  wire       [23:0]   mIMOTransmitterUnit_2_mod_sub_iqs_payload_1_cha_i;
  wire       [23:0]   mIMOTransmitterUnit_2_mod_sub_iqs_payload_1_cha_q;
  wire                mIMOTransmitterUnit_3_mod_sub_iqs_valid;
  wire       [23:0]   mIMOTransmitterUnit_3_mod_sub_iqs_payload_0_cha_i;
  wire       [23:0]   mIMOTransmitterUnit_3_mod_sub_iqs_payload_0_cha_q;
  wire       [23:0]   mIMOTransmitterUnit_3_mod_sub_iqs_payload_1_cha_i;
  wire       [23:0]   mIMOTransmitterUnit_3_mod_sub_iqs_payload_1_cha_q;
  wire                chaCompose_2_mod_iq_valid;
  wire       [23:0]   chaCompose_2_mod_iq_payload_cha_i;
  wire       [23:0]   chaCompose_2_mod_iq_payload_cha_q;
  wire                chaCompose_3_mod_iq_valid;
  wire       [23:0]   chaCompose_3_mod_iq_payload_cha_i;
  wire       [23:0]   chaCompose_3_mod_iq_payload_cha_q;
  wire       [11:0]   _zz_shift_i_map_port;
  wire       [11:0]   _zz_shift_q_map_port;
  wire       [1:0]    _zz_shift_i_map_port_1;
  wire       [1:0]    _zz_shift_i_0;
  wire       [1:0]    _zz_shift_q_map_port_1;
  wire       [1:0]    _zz_shift_q_0;
  wire       [1:0]    _zz_shift_i_map_port_2;
  wire       [1:0]    _zz_shift_i_1;
  wire       [1:0]    _zz_shift_q_map_port_2;
  wire       [1:0]    _zz_shift_q_1;
  wire       [1:0]    _zz_shift_i_map_port_3;
  wire       [1:0]    _zz_shift_i_0_1;
  wire       [1:0]    _zz_shift_q_map_port_3;
  wire       [1:0]    _zz_shift_q_0_1;
  wire       [1:0]    _zz_shift_i_map_port_4;
  wire       [1:0]    _zz_shift_i_1_1;
  wire       [1:0]    _zz_shift_q_map_port_4;
  wire       [1:0]    _zz_shift_q_1_1;
  reg                 _zz_1;
  reg                 _zz_2;
  wire       [23:0]   mod_sub_iqs_vec_0_cha_i;
  wire       [23:0]   mod_sub_iqs_vec_0_cha_q;
  wire       [23:0]   mod_sub_iqs_vec_1_cha_i;
  wire       [23:0]   mod_sub_iqs_vec_1_cha_q;
  wire       [23:0]   mod_sub_iqs_vec_2_cha_i;
  wire       [23:0]   mod_sub_iqs_vec_2_cha_q;
  wire       [23:0]   mod_sub_iqs_vec_3_cha_i;
  wire       [23:0]   mod_sub_iqs_vec_3_cha_q;
  wire                mod_sub_valid_vec_0;
  wire                mod_sub_valid_vec_1;
  wire                mod_sub_valid_vec_2;
  wire                mod_sub_valid_vec_3;
  wire                mod_iq_valid_vec_0;
  wire                mod_iq_valid_vec_1;
  (* ram_style = "distributed" *) reg [11:0] shift_i_map [0:3];
  (* ram_style = "distributed" *) reg [11:0] shift_q_map [0:3];

  assign _zz_shift_i_map_port = w_data;
  assign _zz_shift_i_0 = 2'b00;
  assign _zz_shift_i_1 = 2'b01;
  assign _zz_shift_i_0_1 = 2'b10;
  assign _zz_shift_i_1_1 = 2'b11;
  assign _zz_shift_q_map_port = w_data;
  assign _zz_shift_q_0 = 2'b00;
  assign _zz_shift_q_1 = 2'b01;
  assign _zz_shift_q_0_1 = 2'b10;
  assign _zz_shift_q_1_1 = 2'b11;
  always @(posedge clk) begin
    if(_zz_2) begin
      shift_i_map[w_addr] <= _zz_shift_i_map_port;
    end
  end

  assign _zz_shift_i_map_port1 = shift_i_map[_zz_shift_i_0];
  assign _zz_shift_i_map_port2 = shift_i_map[_zz_shift_i_1];
  assign _zz_shift_i_map_port3 = shift_i_map[_zz_shift_i_0_1];
  assign _zz_shift_i_map_port4 = shift_i_map[_zz_shift_i_1_1];
  always @(posedge clk) begin
    if(_zz_1) begin
      shift_q_map[w_addr] <= _zz_shift_q_map_port;
    end
  end

  assign _zz_shift_q_map_port1 = shift_q_map[_zz_shift_q_0];
  assign _zz_shift_q_map_port2 = shift_q_map[_zz_shift_q_1];
  assign _zz_shift_q_map_port3 = shift_q_map[_zz_shift_q_0_1];
  assign _zz_shift_q_map_port4 = shift_q_map[_zz_shift_q_1_1];
  MIMOTransmitterUnit mIMOTransmitterUnit_2 (
    .shift_i_0                   (mIMOTransmitterUnit_2_shift_i_0[11:0]                  ), //i
    .shift_i_1                   (mIMOTransmitterUnit_2_shift_i_1[11:0]                  ), //i
    .shift_q_0                   (mIMOTransmitterUnit_2_shift_q_0[11:0]                  ), //i
    .shift_q_1                   (mIMOTransmitterUnit_2_shift_q_1[11:0]                  ), //i
    .base_iq_valid               (base_iqs_valid                                         ), //i
    .base_iq_payload_cha_i       (base_iqs_payload_0_cha_i[11:0]                         ), //i
    .base_iq_payload_cha_q       (base_iqs_payload_0_cha_q[11:0]                         ), //i
    .mod_sub_iqs_valid           (mIMOTransmitterUnit_2_mod_sub_iqs_valid                ), //o
    .mod_sub_iqs_payload_0_cha_i (mIMOTransmitterUnit_2_mod_sub_iqs_payload_0_cha_i[23:0]), //o
    .mod_sub_iqs_payload_0_cha_q (mIMOTransmitterUnit_2_mod_sub_iqs_payload_0_cha_q[23:0]), //o
    .mod_sub_iqs_payload_1_cha_i (mIMOTransmitterUnit_2_mod_sub_iqs_payload_1_cha_i[23:0]), //o
    .mod_sub_iqs_payload_1_cha_q (mIMOTransmitterUnit_2_mod_sub_iqs_payload_1_cha_q[23:0]), //o
    .clk                         (clk                                                    ), //i
    .resetn                      (resetn                                                 )  //i
  );
  MIMOTransmitterUnit mIMOTransmitterUnit_3 (
    .shift_i_0                   (mIMOTransmitterUnit_3_shift_i_0[11:0]                  ), //i
    .shift_i_1                   (mIMOTransmitterUnit_3_shift_i_1[11:0]                  ), //i
    .shift_q_0                   (mIMOTransmitterUnit_3_shift_q_0[11:0]                  ), //i
    .shift_q_1                   (mIMOTransmitterUnit_3_shift_q_1[11:0]                  ), //i
    .base_iq_valid               (base_iqs_valid                                         ), //i
    .base_iq_payload_cha_i       (base_iqs_payload_1_cha_i[11:0]                         ), //i
    .base_iq_payload_cha_q       (base_iqs_payload_1_cha_q[11:0]                         ), //i
    .mod_sub_iqs_valid           (mIMOTransmitterUnit_3_mod_sub_iqs_valid                ), //o
    .mod_sub_iqs_payload_0_cha_i (mIMOTransmitterUnit_3_mod_sub_iqs_payload_0_cha_i[23:0]), //o
    .mod_sub_iqs_payload_0_cha_q (mIMOTransmitterUnit_3_mod_sub_iqs_payload_0_cha_q[23:0]), //o
    .mod_sub_iqs_payload_1_cha_i (mIMOTransmitterUnit_3_mod_sub_iqs_payload_1_cha_i[23:0]), //o
    .mod_sub_iqs_payload_1_cha_q (mIMOTransmitterUnit_3_mod_sub_iqs_payload_1_cha_q[23:0]), //o
    .clk                         (clk                                                    ), //i
    .resetn                      (resetn                                                 )  //i
  );
  ChaCompose chaCompose_2 (
    .mod_sub_iqs_0_valid         (mod_sub_valid_vec_0                    ), //i
    .mod_sub_iqs_0_payload_cha_i (mod_sub_iqs_vec_0_cha_i[23:0]          ), //i
    .mod_sub_iqs_0_payload_cha_q (mod_sub_iqs_vec_0_cha_q[23:0]          ), //i
    .mod_sub_iqs_1_valid         (mod_sub_valid_vec_2                    ), //i
    .mod_sub_iqs_1_payload_cha_i (mod_sub_iqs_vec_2_cha_i[23:0]          ), //i
    .mod_sub_iqs_1_payload_cha_q (mod_sub_iqs_vec_2_cha_q[23:0]          ), //i
    .mod_iq_valid                (chaCompose_2_mod_iq_valid              ), //o
    .mod_iq_payload_cha_i        (chaCompose_2_mod_iq_payload_cha_i[23:0]), //o
    .mod_iq_payload_cha_q        (chaCompose_2_mod_iq_payload_cha_q[23:0])  //o
  );
  ChaCompose chaCompose_3 (
    .mod_sub_iqs_0_valid         (mod_sub_valid_vec_1                    ), //i
    .mod_sub_iqs_0_payload_cha_i (mod_sub_iqs_vec_1_cha_i[23:0]          ), //i
    .mod_sub_iqs_0_payload_cha_q (mod_sub_iqs_vec_1_cha_q[23:0]          ), //i
    .mod_sub_iqs_1_valid         (mod_sub_valid_vec_3                    ), //i
    .mod_sub_iqs_1_payload_cha_i (mod_sub_iqs_vec_3_cha_i[23:0]          ), //i
    .mod_sub_iqs_1_payload_cha_q (mod_sub_iqs_vec_3_cha_q[23:0]          ), //i
    .mod_iq_valid                (chaCompose_3_mod_iq_valid              ), //o
    .mod_iq_payload_cha_i        (chaCompose_3_mod_iq_payload_cha_i[23:0]), //o
    .mod_iq_payload_cha_q        (chaCompose_3_mod_iq_payload_cha_q[23:0])  //o
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(w_en) begin
      if(!w_sel) begin
        _zz_1 = 1'b1;
      end
    end
  end

  always @(*) begin
    _zz_2 = 1'b0;
    if(w_en) begin
      if(w_sel) begin
        _zz_2 = 1'b1;
      end
    end
  end

  assign mIMOTransmitterUnit_2_shift_i_0 = _zz_shift_i_map_port1;
  assign mIMOTransmitterUnit_2_shift_q_0 = _zz_shift_q_map_port1;
  assign mod_sub_iqs_vec_0_cha_i = mIMOTransmitterUnit_2_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_0_cha_q = mIMOTransmitterUnit_2_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_0 = mIMOTransmitterUnit_2_mod_sub_iqs_valid;
  assign mIMOTransmitterUnit_2_shift_i_1 = _zz_shift_i_map_port2;
  assign mIMOTransmitterUnit_2_shift_q_1 = _zz_shift_q_map_port2;
  assign mod_sub_iqs_vec_1_cha_i = mIMOTransmitterUnit_2_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_1_cha_q = mIMOTransmitterUnit_2_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_1 = mIMOTransmitterUnit_2_mod_sub_iqs_valid;
  assign mIMOTransmitterUnit_3_shift_i_0 = _zz_shift_i_map_port3;
  assign mIMOTransmitterUnit_3_shift_q_0 = _zz_shift_q_map_port3;
  assign mod_sub_iqs_vec_2_cha_i = mIMOTransmitterUnit_3_mod_sub_iqs_payload_0_cha_i;
  assign mod_sub_iqs_vec_2_cha_q = mIMOTransmitterUnit_3_mod_sub_iqs_payload_0_cha_q;
  assign mod_sub_valid_vec_2 = mIMOTransmitterUnit_3_mod_sub_iqs_valid;
  assign mIMOTransmitterUnit_3_shift_i_1 = _zz_shift_i_map_port4;
  assign mIMOTransmitterUnit_3_shift_q_1 = _zz_shift_q_map_port4;
  assign mod_sub_iqs_vec_3_cha_i = mIMOTransmitterUnit_3_mod_sub_iqs_payload_1_cha_i;
  assign mod_sub_iqs_vec_3_cha_q = mIMOTransmitterUnit_3_mod_sub_iqs_payload_1_cha_q;
  assign mod_sub_valid_vec_3 = mIMOTransmitterUnit_3_mod_sub_iqs_valid;
  assign mod_iqs_payload_0_cha_i = chaCompose_2_mod_iq_payload_cha_i;
  assign mod_iqs_payload_0_cha_q = chaCompose_2_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_0 = chaCompose_2_mod_iq_valid;
  assign mod_iqs_payload_1_cha_i = chaCompose_3_mod_iq_payload_cha_i;
  assign mod_iqs_payload_1_cha_q = chaCompose_3_mod_iq_payload_cha_q;
  assign mod_iq_valid_vec_1 = chaCompose_3_mod_iq_valid;
  assign mod_iqs_valid = (mod_iq_valid_vec_0 && mod_iq_valid_vec_1);

endmodule

//ChaCompose replaced by ChaCompose

module ChaCompose (
  input               mod_sub_iqs_0_valid,
  input      [23:0]   mod_sub_iqs_0_payload_cha_i,
  input      [23:0]   mod_sub_iqs_0_payload_cha_q,
  input               mod_sub_iqs_1_valid,
  input      [23:0]   mod_sub_iqs_1_payload_cha_i,
  input      [23:0]   mod_sub_iqs_1_payload_cha_q,
  output              mod_iq_valid,
  output     [23:0]   mod_iq_payload_cha_i,
  output     [23:0]   mod_iq_payload_cha_q
);

  wire       [22:0]   _zz_sub_i_data_vec_0;
  wire       [22:0]   _zz_sub_q_data_vec_0;
  wire       [22:0]   _zz_sub_i_data_vec_1;
  wire       [22:0]   _zz_sub_q_data_vec_1;
  wire       [23:0]   sub_i_data_vec_0;
  wire       [23:0]   sub_i_data_vec_1;
  wire       [23:0]   sub_q_data_vec_0;
  wire       [23:0]   sub_q_data_vec_1;
  wire                sub_iqs_valid_vec_0;
  wire                sub_iqs_valid_vec_1;

  assign _zz_sub_i_data_vec_0 = (mod_sub_iqs_0_payload_cha_i >>> 1);
  assign _zz_sub_q_data_vec_0 = (mod_sub_iqs_0_payload_cha_q >>> 1);
  assign _zz_sub_i_data_vec_1 = (mod_sub_iqs_1_payload_cha_i >>> 1);
  assign _zz_sub_q_data_vec_1 = (mod_sub_iqs_1_payload_cha_q >>> 1);
  assign sub_i_data_vec_0 = {{1{_zz_sub_i_data_vec_0[22]}}, _zz_sub_i_data_vec_0};
  assign sub_q_data_vec_0 = {{1{_zz_sub_q_data_vec_0[22]}}, _zz_sub_q_data_vec_0};
  assign sub_iqs_valid_vec_0 = mod_sub_iqs_0_valid;
  assign sub_i_data_vec_1 = {{1{_zz_sub_i_data_vec_1[22]}}, _zz_sub_i_data_vec_1};
  assign sub_q_data_vec_1 = {{1{_zz_sub_q_data_vec_1[22]}}, _zz_sub_q_data_vec_1};
  assign sub_iqs_valid_vec_1 = mod_sub_iqs_1_valid;
  assign mod_iq_payload_cha_i = ($signed(sub_i_data_vec_0) + $signed(sub_i_data_vec_1));
  assign mod_iq_payload_cha_q = ($signed(sub_q_data_vec_0) + $signed(sub_q_data_vec_1));
  assign mod_iq_valid = (sub_iqs_valid_vec_0 && sub_iqs_valid_vec_1);

endmodule

//MIMOTransmitterUnit replaced by MIMOTransmitterUnit

module MIMOTransmitterUnit (
  input      [11:0]   shift_i_0,
  input      [11:0]   shift_i_1,
  input      [11:0]   shift_q_0,
  input      [11:0]   shift_q_1,
  input               base_iq_valid,
  input      [11:0]   base_iq_payload_cha_i,
  input      [11:0]   base_iq_payload_cha_q,
  output              mod_sub_iqs_valid,
  output     [23:0]   mod_sub_iqs_payload_0_cha_i,
  output     [23:0]   mod_sub_iqs_payload_0_cha_q,
  output     [23:0]   mod_sub_iqs_payload_1_cha_i,
  output     [23:0]   mod_sub_iqs_payload_1_cha_q,
  input               clk,
  input               resetn
);

  wire       [23:0]   _zz_mod_iqs_vec_0_cha_i;
  wire       [23:0]   _zz_mod_iqs_vec_0_cha_i_1;
  wire       [23:0]   _zz_mod_iqs_vec_0_cha_q;
  wire       [23:0]   _zz_mod_iqs_vec_0_cha_q_1;
  wire       [23:0]   _zz_mod_iqs_vec_1_cha_i;
  wire       [23:0]   _zz_mod_iqs_vec_1_cha_i_1;
  wire       [23:0]   _zz_mod_iqs_vec_1_cha_q;
  wire       [23:0]   _zz_mod_iqs_vec_1_cha_q_1;
  reg        [11:0]   base_iq_buf_cha_i;
  reg        [11:0]   base_iq_buf_cha_q;
  reg                 base_valid_buf;
  reg        [23:0]   mod_iqs_vec_0_cha_i;
  reg        [23:0]   mod_iqs_vec_0_cha_q;
  reg        [23:0]   mod_iqs_vec_1_cha_i;
  reg        [23:0]   mod_iqs_vec_1_cha_q;
  reg                 mod_iqs_valid;

  assign _zz_mod_iqs_vec_0_cha_i = ($signed(shift_i_0) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_0_cha_i_1 = ($signed(shift_q_0) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_0_cha_q = ($signed(shift_q_0) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_0_cha_q_1 = ($signed(shift_i_0) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_1_cha_i = ($signed(shift_i_1) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_1_cha_i_1 = ($signed(shift_q_1) * $signed(base_iq_buf_cha_q));
  assign _zz_mod_iqs_vec_1_cha_q = ($signed(shift_q_1) * $signed(base_iq_buf_cha_i));
  assign _zz_mod_iqs_vec_1_cha_q_1 = ($signed(shift_i_1) * $signed(base_iq_buf_cha_q));
  assign mod_sub_iqs_payload_0_cha_i = mod_iqs_vec_0_cha_i;
  assign mod_sub_iqs_payload_0_cha_q = mod_iqs_vec_0_cha_q;
  assign mod_sub_iqs_payload_1_cha_i = mod_iqs_vec_1_cha_i;
  assign mod_sub_iqs_payload_1_cha_q = mod_iqs_vec_1_cha_q;
  assign mod_sub_iqs_valid = mod_iqs_valid;
  always @(posedge clk) begin
    base_iq_buf_cha_i <= base_iq_payload_cha_i;
    base_iq_buf_cha_q <= base_iq_payload_cha_q;
    if(base_valid_buf) begin
      mod_iqs_vec_0_cha_i <= ($signed(_zz_mod_iqs_vec_0_cha_i) - $signed(_zz_mod_iqs_vec_0_cha_i_1));
      mod_iqs_vec_0_cha_q <= ($signed(_zz_mod_iqs_vec_0_cha_q) + $signed(_zz_mod_iqs_vec_0_cha_q_1));
      mod_iqs_vec_1_cha_i <= ($signed(_zz_mod_iqs_vec_1_cha_i) - $signed(_zz_mod_iqs_vec_1_cha_i_1));
      mod_iqs_vec_1_cha_q <= ($signed(_zz_mod_iqs_vec_1_cha_q) + $signed(_zz_mod_iqs_vec_1_cha_q_1));
    end else begin
      mod_iqs_vec_0_cha_i <= 24'h0;
      mod_iqs_vec_0_cha_q <= 24'h0;
      mod_iqs_vec_1_cha_i <= 24'h0;
      mod_iqs_vec_1_cha_q <= 24'h0;
    end
  end

  always @(posedge clk) begin
    if(!resetn) begin
      base_valid_buf <= 1'b0;
      mod_iqs_valid <= 1'b0;
    end else begin
      base_valid_buf <= base_iq_valid;
      if(base_valid_buf) begin
        mod_iqs_valid <= 1'b1;
      end else begin
        mod_iqs_valid <= 1'b0;
      end
    end
  end


endmodule
