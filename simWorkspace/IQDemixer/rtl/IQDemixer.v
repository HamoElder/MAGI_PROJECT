// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : IQDemixer
// Git hash  : 8ea3836c6991c66e54ff283e1ce84688f7fe9417



module IQDemixer (
  input               if_iq_0_valid,
  input      [15:0]   if_iq_0_payload,
  input               carries_iq_valid,
  input      [15:0]   carries_iq_payload_cha_i,
  input      [15:0]   carries_iq_payload_cha_q,
  output              base_iq_0_valid,
  output     [15:0]   base_iq_0_payload_cha_i,
  output     [15:0]   base_iq_0_payload_cha_q,
  input               clk,
  input               reset
);
  wire                iQDemixerCore_1_base_iq_valid;
  wire       [15:0]   iQDemixerCore_1_base_iq_payload_cha_i;
  wire       [15:0]   iQDemixerCore_1_base_iq_payload_cha_q;

  IQDemixerCore iQDemixerCore_1 (
    .if_iq_valid                 (if_iq_0_valid                          ), //i
    .if_iq_payload               (if_iq_0_payload                        ), //i
    .carries_iq_valid            (carries_iq_valid                       ), //i
    .carries_iq_payload_cha_i    (carries_iq_payload_cha_i               ), //i
    .carries_iq_payload_cha_q    (carries_iq_payload_cha_q               ), //i
    .base_iq_valid               (iQDemixerCore_1_base_iq_valid          ), //o
    .base_iq_payload_cha_i       (iQDemixerCore_1_base_iq_payload_cha_i  ), //o
    .base_iq_payload_cha_q       (iQDemixerCore_1_base_iq_payload_cha_q  ), //o
    .clk                         (clk                                    ), //i
    .reset                       (reset                                  )  //i
  );
  assign base_iq_0_valid = iQDemixerCore_1_base_iq_valid;
  assign base_iq_0_payload_cha_i = iQDemixerCore_1_base_iq_payload_cha_i;
  assign base_iq_0_payload_cha_q = iQDemixerCore_1_base_iq_payload_cha_q;

endmodule

module IQDemixerCore (
  input               if_iq_valid,
  input      [15:0]   if_iq_payload,
  input               carries_iq_valid,
  input      [15:0]   carries_iq_payload_cha_i,
  input      [15:0]   carries_iq_payload_cha_q,
  output              base_iq_valid,
  output     [15:0]   base_iq_payload_cha_i,
  output     [15:0]   base_iq_payload_cha_q,
  input               clk,
  input               reset
);
  wire       [15:0]   _zz_when_SInt_l186;
  wire       [15:0]   _zz__zz_base_i_data_2;
  wire       [15:0]   _zz__zz_base_i_data_2_1;
  wire       [30:0]   _zz__zz_base_i_data_3;
  wire       [15:0]   _zz__zz_base_i_data_4;
  wire       [1:0]    _zz__zz_base_i_data_4_1;
  wire       [14:0]   _zz__zz_base_i_data_4_2;
  wire       [1:0]    _zz_when_SInt_l126;
  wire       [0:0]    _zz_when_SInt_l132;
  wire       [15:0]   _zz_when_SInt_l186_1;
  wire       [15:0]   _zz__zz_base_q_data_2;
  wire       [15:0]   _zz__zz_base_q_data_2_1;
  wire       [30:0]   _zz__zz_base_q_data_3;
  wire       [15:0]   _zz__zz_base_q_data_4;
  wire       [1:0]    _zz__zz_base_q_data_4_1;
  wire       [14:0]   _zz__zz_base_q_data_4_2;
  wire       [1:0]    _zz_when_SInt_l126_1;
  wire       [0:0]    _zz_when_SInt_l132_1;
  reg        [15:0]   if_iq_data;
  reg        [15:0]   carries_i_data;
  reg        [15:0]   carries_q_data;
  reg                 base_iq_valid_1;
  reg        [15:0]   base_i_data;
  reg        [15:0]   base_q_data;
  reg                 iq_en;
  wire       [31:0]   _zz_base_i_data;
  reg        [16:0]   _zz_base_i_data_1;
  wire                when_SInt_l176;
  reg        [15:0]   _zz_base_i_data_2;
  wire                when_SInt_l186;
  wire       [30:0]   _zz_base_i_data_3;
  reg        [15:0]   _zz_base_i_data_4;
  wire                when_UInt_l155;
  reg        [15:0]   _zz_base_i_data_5;
  wire                when_SInt_l125;
  wire                when_SInt_l126;
  wire                when_SInt_l132;
  wire       [31:0]   _zz_base_q_data;
  reg        [16:0]   _zz_base_q_data_1;
  wire                when_SInt_l176_1;
  reg        [15:0]   _zz_base_q_data_2;
  wire                when_SInt_l186_1;
  wire       [30:0]   _zz_base_q_data_3;
  reg        [15:0]   _zz_base_q_data_4;
  wire                when_UInt_l155_1;
  reg        [15:0]   _zz_base_q_data_5;
  wire                when_SInt_l125_1;
  wire                when_SInt_l126_1;
  wire                when_SInt_l132_1;

  assign _zz_when_SInt_l186 = _zz_base_i_data[15 : 0];
  assign _zz__zz_base_i_data_2 = _zz_base_i_data[31 : 16];
  assign _zz__zz_base_i_data_2_1 = 16'h0001;
  assign _zz__zz_base_i_data_3 = _zz_base_i_data[30 : 0];
  assign _zz__zz_base_i_data_4_1 = {1'b0,1'b1};
  assign _zz__zz_base_i_data_4 = {14'd0, _zz__zz_base_i_data_4_1};
  assign _zz__zz_base_i_data_4_2 = _zz_base_i_data_3[30 : 16];
  assign _zz_when_SInt_l126 = _zz_base_i_data_1[16 : 15];
  assign _zz_when_SInt_l132 = _zz_base_i_data_1[15 : 15];
  assign _zz_when_SInt_l186_1 = _zz_base_q_data[15 : 0];
  assign _zz__zz_base_q_data_2 = _zz_base_q_data[31 : 16];
  assign _zz__zz_base_q_data_2_1 = 16'h0001;
  assign _zz__zz_base_q_data_3 = _zz_base_q_data[30 : 0];
  assign _zz__zz_base_q_data_4_1 = {1'b0,1'b1};
  assign _zz__zz_base_q_data_4 = {14'd0, _zz__zz_base_q_data_4_1};
  assign _zz__zz_base_q_data_4_2 = _zz_base_q_data_3[30 : 16];
  assign _zz_when_SInt_l126_1 = _zz_base_q_data_1[16 : 15];
  assign _zz_when_SInt_l132_1 = _zz_base_q_data_1[15 : 15];
  assign _zz_base_i_data = ($signed(if_iq_data) * $signed(carries_i_data));
  assign when_SInt_l176 = _zz_base_i_data[31];
  assign when_SInt_l186 = (_zz_when_SInt_l186 != 16'h0);
  always @(*) begin
    if(when_SInt_l186) begin
      _zz_base_i_data_2 = ($signed(_zz__zz_base_i_data_2) + $signed(_zz__zz_base_i_data_2_1));
    end else begin
      _zz_base_i_data_2 = _zz_base_i_data[31 : 16];
    end
  end

  always @(*) begin
    if(when_SInt_l176) begin
      _zz_base_i_data_1 = {_zz_base_i_data_2[15],_zz_base_i_data_2};
    end else begin
      _zz_base_i_data_1 = {1'b0,_zz_base_i_data_4};
    end
  end

  assign _zz_base_i_data_3 = _zz__zz_base_i_data_3;
  assign when_UInt_l155 = (_zz_base_i_data_3[15 : 0] != 16'h0);
  always @(*) begin
    if(when_UInt_l155) begin
      _zz_base_i_data_4 = ({1'b0,_zz_base_i_data_3[30 : 16]} + _zz__zz_base_i_data_4);
    end else begin
      _zz_base_i_data_4 = {1'd0, _zz__zz_base_i_data_4_2};
    end
  end

  assign when_SInt_l125 = _zz_base_i_data_1[16];
  assign when_SInt_l126 = (! (_zz_when_SInt_l126 == 2'b11));
  always @(*) begin
    if(when_SInt_l125) begin
      if(when_SInt_l126) begin
        _zz_base_i_data_5 = 16'h8000;
      end else begin
        _zz_base_i_data_5 = _zz_base_i_data_1[15 : 0];
      end
    end else begin
      if(when_SInt_l132) begin
        _zz_base_i_data_5 = 16'h7fff;
      end else begin
        _zz_base_i_data_5 = _zz_base_i_data_1[15 : 0];
      end
    end
  end

  assign when_SInt_l132 = (_zz_when_SInt_l132 != 1'b0);
  assign _zz_base_q_data = ($signed(if_iq_data) * $signed(carries_q_data));
  assign when_SInt_l176_1 = _zz_base_q_data[31];
  assign when_SInt_l186_1 = (_zz_when_SInt_l186_1 != 16'h0);
  always @(*) begin
    if(when_SInt_l186_1) begin
      _zz_base_q_data_2 = ($signed(_zz__zz_base_q_data_2) + $signed(_zz__zz_base_q_data_2_1));
    end else begin
      _zz_base_q_data_2 = _zz_base_q_data[31 : 16];
    end
  end

  always @(*) begin
    if(when_SInt_l176_1) begin
      _zz_base_q_data_1 = {_zz_base_q_data_2[15],_zz_base_q_data_2};
    end else begin
      _zz_base_q_data_1 = {1'b0,_zz_base_q_data_4};
    end
  end

  assign _zz_base_q_data_3 = _zz__zz_base_q_data_3;
  assign when_UInt_l155_1 = (_zz_base_q_data_3[15 : 0] != 16'h0);
  always @(*) begin
    if(when_UInt_l155_1) begin
      _zz_base_q_data_4 = ({1'b0,_zz_base_q_data_3[30 : 16]} + _zz__zz_base_q_data_4);
    end else begin
      _zz_base_q_data_4 = {1'd0, _zz__zz_base_q_data_4_2};
    end
  end

  assign when_SInt_l125_1 = _zz_base_q_data_1[16];
  assign when_SInt_l126_1 = (! (_zz_when_SInt_l126_1 == 2'b11));
  always @(*) begin
    if(when_SInt_l125_1) begin
      if(when_SInt_l126_1) begin
        _zz_base_q_data_5 = 16'h8000;
      end else begin
        _zz_base_q_data_5 = _zz_base_q_data_1[15 : 0];
      end
    end else begin
      if(when_SInt_l132_1) begin
        _zz_base_q_data_5 = 16'h7fff;
      end else begin
        _zz_base_q_data_5 = _zz_base_q_data_1[15 : 0];
      end
    end
  end

  assign when_SInt_l132_1 = (_zz_when_SInt_l132_1 != 1'b0);
  assign base_iq_valid = base_iq_valid_1;
  assign base_iq_payload_cha_i = base_i_data;
  assign base_iq_payload_cha_q = base_q_data;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      if_iq_data <= 16'h0;
      carries_i_data <= 16'h0;
      carries_q_data <= 16'h0;
      base_iq_valid_1 <= 1'b0;
      base_i_data <= 16'h0;
      base_q_data <= 16'h0;
      iq_en <= 1'b0;
    end else begin
      iq_en <= (if_iq_valid && carries_iq_valid);
      if(if_iq_valid) begin
        if_iq_data <= if_iq_payload;
      end
      if(carries_iq_valid) begin
        carries_i_data <= carries_iq_payload_cha_i;
        carries_q_data <= carries_iq_payload_cha_q;
      end
      if(iq_en) begin
        base_iq_valid_1 <= 1'b1;
        base_i_data <= _zz_base_i_data_5;
        base_q_data <= _zz_base_q_data_5;
      end else begin
        base_iq_valid_1 <= 1'b0;
        base_i_data <= 16'h0;
        base_q_data <= 16'h0;
      end
    end
  end


endmodule
