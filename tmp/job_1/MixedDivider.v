// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : MixedDivider
// Git hash  : dcc5c1d5e265e228fb218e1a34c35d9d2f21b6e0



module MixedDivider (
  input               flush,
  input               cmd_valid,
  output              cmd_ready,
  input      [15:0]   cmd_payload_numerator,
  input      [15:0]   cmd_payload_denominator,
  input               cmd_payload_signed,
  output              rsp_valid,
  input               rsp_ready,
  output     [15:0]   rsp_payload_quotient,
  output     [15:0]   rsp_payload_remainder,
  output              rsp_payload_error,
  input               clk,
  input               reset
);
  wire       [15:0]   divider_cmd_payload_numerator;
  wire       [15:0]   divider_cmd_payload_denominator;
  reg        [1:0]    divider_cmd_payload_context;
  wire                divider_cmd_ready;
  wire                divider_rsp_valid;
  wire       [15:0]   divider_rsp_payload_quotient;
  wire       [15:0]   divider_rsp_payload_remainder;
  wire                divider_rsp_payload_error;
  wire       [1:0]    divider_rsp_payload_context;
  wire       [15:0]   _zz_cmd_payload_numerator_1;
  wire       [15:0]   _zz_cmd_payload_numerator_2;
  wire       [15:0]   _zz_cmd_payload_numerator_3;
  wire       [0:0]    _zz_cmd_payload_numerator_4;
  wire       [15:0]   _zz_cmd_payload_denominator_1;
  wire       [15:0]   _zz_cmd_payload_denominator_2;
  wire       [15:0]   _zz_cmd_payload_denominator_3;
  wire       [0:0]    _zz_cmd_payload_denominator_4;
  wire       [16:0]   _zz_rsp_payload_quotient_1;
  wire       [16:0]   _zz_rsp_payload_quotient_2;
  wire       [16:0]   _zz_rsp_payload_quotient_3;
  wire       [16:0]   _zz_rsp_payload_quotient_4;
  wire       [0:0]    _zz_rsp_payload_quotient_5;
  wire       [16:0]   _zz_rsp_payload_remainder_1;
  wire       [16:0]   _zz_rsp_payload_remainder_2;
  wire       [16:0]   _zz_rsp_payload_remainder_3;
  wire       [16:0]   _zz_rsp_payload_remainder_4;
  wire       [0:0]    _zz_rsp_payload_remainder_5;
  wire       [15:0]   _zz_cmd_payload_numerator;
  wire       [15:0]   _zz_cmd_payload_denominator;
  wire                _zz_rsp_payload_quotient;
  wire                _zz_rsp_payload_remainder;

  assign _zz_cmd_payload_numerator_1 = ((_zz_cmd_payload_numerator[15] && cmd_payload_signed) ? _zz_cmd_payload_numerator_2 : _zz_cmd_payload_numerator);
  assign _zz_cmd_payload_numerator_2 = (~ _zz_cmd_payload_numerator);
  assign _zz_cmd_payload_numerator_4 = (_zz_cmd_payload_numerator[15] && cmd_payload_signed);
  assign _zz_cmd_payload_numerator_3 = {15'd0, _zz_cmd_payload_numerator_4};
  assign _zz_cmd_payload_denominator_1 = ((_zz_cmd_payload_denominator[15] && cmd_payload_signed) ? _zz_cmd_payload_denominator_2 : _zz_cmd_payload_denominator);
  assign _zz_cmd_payload_denominator_2 = (~ _zz_cmd_payload_denominator);
  assign _zz_cmd_payload_denominator_4 = (_zz_cmd_payload_denominator[15] && cmd_payload_signed);
  assign _zz_cmd_payload_denominator_3 = {15'd0, _zz_cmd_payload_denominator_4};
  assign _zz_rsp_payload_quotient_1 = _zz_rsp_payload_quotient_2;
  assign _zz_rsp_payload_quotient_2 = _zz_rsp_payload_quotient_3;
  assign _zz_rsp_payload_quotient_3 = ({_zz_rsp_payload_quotient,(_zz_rsp_payload_quotient ? (~ divider_rsp_payload_quotient) : divider_rsp_payload_quotient)} + _zz_rsp_payload_quotient_4);
  assign _zz_rsp_payload_quotient_5 = _zz_rsp_payload_quotient;
  assign _zz_rsp_payload_quotient_4 = {16'd0, _zz_rsp_payload_quotient_5};
  assign _zz_rsp_payload_remainder_1 = _zz_rsp_payload_remainder_2;
  assign _zz_rsp_payload_remainder_2 = _zz_rsp_payload_remainder_3;
  assign _zz_rsp_payload_remainder_3 = ({_zz_rsp_payload_remainder,(_zz_rsp_payload_remainder ? (~ divider_rsp_payload_remainder) : divider_rsp_payload_remainder)} + _zz_rsp_payload_remainder_4);
  assign _zz_rsp_payload_remainder_5 = _zz_rsp_payload_remainder;
  assign _zz_rsp_payload_remainder_4 = {16'd0, _zz_rsp_payload_remainder_5};
  UnsignedDivider divider (
    .flush                      (flush                            ), //i
    .cmd_valid                  (cmd_valid                        ), //i
    .cmd_ready                  (divider_cmd_ready                ), //o
    .cmd_payload_numerator      (divider_cmd_payload_numerator    ), //i
    .cmd_payload_denominator    (divider_cmd_payload_denominator  ), //i
    .cmd_payload_context        (divider_cmd_payload_context      ), //i
    .rsp_valid                  (divider_rsp_valid                ), //o
    .rsp_ready                  (rsp_ready                        ), //i
    .rsp_payload_quotient       (divider_rsp_payload_quotient     ), //o
    .rsp_payload_remainder      (divider_rsp_payload_remainder    ), //o
    .rsp_payload_error          (divider_rsp_payload_error        ), //o
    .rsp_payload_context        (divider_rsp_payload_context      ), //o
    .clk                        (clk                              ), //i
    .reset                      (reset                            )  //i
  );
  assign cmd_ready = divider_cmd_ready;
  assign _zz_cmd_payload_numerator = cmd_payload_numerator;
  assign divider_cmd_payload_numerator = (_zz_cmd_payload_numerator_1 + _zz_cmd_payload_numerator_3);
  assign _zz_cmd_payload_denominator = cmd_payload_denominator;
  assign divider_cmd_payload_denominator = (_zz_cmd_payload_denominator_1 + _zz_cmd_payload_denominator_3);
  always @(*) begin
    divider_cmd_payload_context[0] = (cmd_payload_signed && (cmd_payload_numerator[15] ^ cmd_payload_denominator[15]));
    divider_cmd_payload_context[1] = (cmd_payload_signed && cmd_payload_numerator[15]);
  end

  assign rsp_valid = divider_rsp_valid;
  assign _zz_rsp_payload_quotient = divider_rsp_payload_context[0];
  assign rsp_payload_quotient = _zz_rsp_payload_quotient_1[15:0];
  assign _zz_rsp_payload_remainder = divider_rsp_payload_context[1];
  assign rsp_payload_remainder = _zz_rsp_payload_remainder_1[15:0];
  assign rsp_payload_error = divider_rsp_payload_error;

endmodule

module UnsignedDivider (
  input               flush,
  input               cmd_valid,
  output              cmd_ready,
  input      [15:0]   cmd_payload_numerator,
  input      [15:0]   cmd_payload_denominator,
  input      [1:0]    cmd_payload_context,
  output              rsp_valid,
  input               rsp_ready,
  output     [15:0]   rsp_payload_quotient,
  output     [15:0]   rsp_payload_remainder,
  output              rsp_payload_error,
  output     [1:0]    rsp_payload_context,
  input               clk,
  input               reset
);
  wire       [3:0]    _zz__zz_3;
  wire       [0:0]    _zz__zz_3_1;
  wire       [16:0]   _zz__zz_rsp_payload_quotient_4;
  wire       [16:0]   _zz__zz_rsp_payload_quotient;
  reg        [1:0]    switch_UnsignedDivider_l92;
  reg                 _zz_cmd_ready;
  reg                 _zz_rsp_valid;
  reg                 _zz_1;
  reg                 _zz_2;
  reg        [3:0]    _zz_3;
  reg        [3:0]    _zz_4;
  wire                _zz_5;
  wire                _zz_6;
  reg        [15:0]   _zz_rsp_payload_quotient;
  reg        [15:0]   _zz_rsp_payload_quotient_1;
  reg        [1:0]    _zz_rsp_payload_context;
  reg        [15:0]   _zz_rsp_payload_quotient_2;
  wire       [16:0]   _zz_rsp_payload_quotient_3;
  wire       [16:0]   _zz_rsp_payload_quotient_4;
  wire                cmd_fire;
  wire                when_UnsignedDivider_l112;
  wire                rsp_fire;

  assign _zz__zz_3_1 = _zz_1;
  assign _zz__zz_3 = {3'd0, _zz__zz_3_1};
  assign _zz__zz_rsp_payload_quotient_4 = {1'd0, _zz_rsp_payload_quotient_1};
  assign _zz__zz_rsp_payload_quotient = {_zz_rsp_payload_quotient,(! _zz_rsp_payload_quotient_4[16])};
  always @(*) begin
    _zz_1 = 1'b0;
    case(switch_UnsignedDivider_l92)
      2'b00 : begin
      end
      2'b01 : begin
        _zz_1 = 1'b1;
      end
      2'b10 : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    _zz_2 = 1'b0;
    case(switch_UnsignedDivider_l92)
      2'b00 : begin
        if(cmd_fire) begin
          _zz_2 = 1'b1;
        end
      end
      2'b01 : begin
      end
      2'b10 : begin
      end
      default : begin
      end
    endcase
  end

  assign _zz_5 = (_zz_4 == 4'b1111);
  assign _zz_6 = (_zz_5 && _zz_1);
  always @(*) begin
    _zz_3 = (_zz_4 + _zz__zz_3);
    if(_zz_2) begin
      _zz_3 = 4'b0000;
    end
  end

  assign _zz_rsp_payload_quotient_3 = {_zz_rsp_payload_quotient_2,_zz_rsp_payload_quotient[15]};
  assign _zz_rsp_payload_quotient_4 = (_zz_rsp_payload_quotient_3 - _zz__zz_rsp_payload_quotient_4);
  assign cmd_ready = _zz_cmd_ready;
  assign rsp_valid = _zz_rsp_valid;
  assign rsp_payload_quotient = _zz_rsp_payload_quotient;
  assign rsp_payload_remainder = _zz_rsp_payload_quotient_2;
  assign rsp_payload_context = _zz_rsp_payload_context;
  assign rsp_payload_error = (_zz_rsp_payload_quotient_1 == 16'h0);
  assign cmd_fire = (cmd_valid && cmd_ready);
  assign when_UnsignedDivider_l112 = (! _zz_rsp_payload_quotient_4[16]);
  assign rsp_fire = (rsp_valid && rsp_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      switch_UnsignedDivider_l92 <= 2'b00;
      _zz_cmd_ready <= 1'b0;
      _zz_rsp_valid <= 1'b0;
      _zz_4 <= 4'b0000;
    end else begin
      _zz_4 <= _zz_3;
      case(switch_UnsignedDivider_l92)
        2'b00 : begin
          if(cmd_fire) begin
            switch_UnsignedDivider_l92 <= 2'b01;
            _zz_cmd_ready <= 1'b0;
          end else begin
            _zz_cmd_ready <= 1'b1;
          end
          _zz_rsp_valid <= 1'b0;
        end
        2'b01 : begin
          if(flush) begin
            switch_UnsignedDivider_l92 <= 2'b00;
            _zz_cmd_ready <= 1'b1;
            _zz_rsp_valid <= 1'b0;
          end else begin
            if(_zz_6) begin
              switch_UnsignedDivider_l92 <= 2'b10;
              _zz_rsp_valid <= 1'b1;
            end
          end
        end
        2'b10 : begin
          if(flush) begin
            switch_UnsignedDivider_l92 <= 2'b00;
            _zz_cmd_ready <= 1'b1;
            _zz_rsp_valid <= 1'b0;
          end else begin
            if(rsp_fire) begin
              _zz_rsp_valid <= 1'b0;
              _zz_cmd_ready <= 1'b1;
              switch_UnsignedDivider_l92 <= 2'b00;
            end
          end
        end
        default : begin
          switch_UnsignedDivider_l92 <= 2'b00;
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(switch_UnsignedDivider_l92)
      2'b00 : begin
        if(cmd_fire) begin
          _zz_rsp_payload_quotient_2 <= 16'h0;
          _zz_rsp_payload_quotient <= cmd_payload_numerator;
          _zz_rsp_payload_quotient_1 <= cmd_payload_denominator;
          _zz_rsp_payload_context <= cmd_payload_context;
        end
      end
      2'b01 : begin
        _zz_rsp_payload_quotient <= _zz__zz_rsp_payload_quotient[15:0];
        if(when_UnsignedDivider_l112) begin
          _zz_rsp_payload_quotient_2 <= _zz_rsp_payload_quotient_4[15:0];
        end else begin
          _zz_rsp_payload_quotient_2 <= _zz_rsp_payload_quotient_3[15:0];
        end
      end
      2'b10 : begin
      end
      default : begin
      end
    endcase
  end


endmodule
