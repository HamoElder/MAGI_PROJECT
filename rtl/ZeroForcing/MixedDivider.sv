// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : MixedDivider
// Git hash  : 090aef073dde5541acfdebf275d47dcc675b45b6



module MixedDivider (
  input               io_flush,
  input               io_cmd_valid,
  output              io_cmd_ready,
  input      [15:0]   io_cmd_payload_numerator,
  input      [15:0]   io_cmd_payload_denominator,
  input               io_cmd_payload_signed,
  output              io_rsp_valid,
  input               io_rsp_ready,
  output     [15:0]   io_rsp_payload_quotient,
  output     [15:0]   io_rsp_payload_remainder,
  output              io_rsp_payload_error,
  input               clk,
  input               reset
);
  wire       [15:0]   divider_io_cmd_payload_numerator;
  wire       [15:0]   divider_io_cmd_payload_denominator;
  reg        [1:0]    divider_io_cmd_payload_context;
  wire                divider_io_cmd_ready;
  wire                divider_io_rsp_valid;
  wire       [15:0]   divider_io_rsp_payload_quotient;
  wire       [15:0]   divider_io_rsp_payload_remainder;
  wire                divider_io_rsp_payload_error;
  wire       [1:0]    divider_io_rsp_payload_context;
  wire       [15:0]   _zz_io_cmd_payload_numerator_1;
  wire       [15:0]   _zz_io_cmd_payload_numerator_2;
  wire       [15:0]   _zz_io_cmd_payload_numerator_3;
  wire       [0:0]    _zz_io_cmd_payload_numerator_4;
  wire       [15:0]   _zz_io_cmd_payload_denominator_1;
  wire       [15:0]   _zz_io_cmd_payload_denominator_2;
  wire       [15:0]   _zz_io_cmd_payload_denominator_3;
  wire       [0:0]    _zz_io_cmd_payload_denominator_4;
  wire       [16:0]   _zz_io_rsp_payload_quotient_1;
  wire       [16:0]   _zz_io_rsp_payload_quotient_2;
  wire       [16:0]   _zz_io_rsp_payload_quotient_3;
  wire       [16:0]   _zz_io_rsp_payload_quotient_4;
  wire       [0:0]    _zz_io_rsp_payload_quotient_5;
  wire       [16:0]   _zz_io_rsp_payload_remainder_1;
  wire       [16:0]   _zz_io_rsp_payload_remainder_2;
  wire       [16:0]   _zz_io_rsp_payload_remainder_3;
  wire       [16:0]   _zz_io_rsp_payload_remainder_4;
  wire       [0:0]    _zz_io_rsp_payload_remainder_5;
  wire       [15:0]   _zz_io_cmd_payload_numerator;
  wire       [15:0]   _zz_io_cmd_payload_denominator;
  wire                _zz_io_rsp_payload_quotient;
  wire                _zz_io_rsp_payload_remainder;

  assign _zz_io_cmd_payload_numerator_1 = ((_zz_io_cmd_payload_numerator[15] && io_cmd_payload_signed) ? _zz_io_cmd_payload_numerator_2 : _zz_io_cmd_payload_numerator);
  assign _zz_io_cmd_payload_numerator_2 = (~ _zz_io_cmd_payload_numerator);
  assign _zz_io_cmd_payload_numerator_4 = (_zz_io_cmd_payload_numerator[15] && io_cmd_payload_signed);
  assign _zz_io_cmd_payload_numerator_3 = {15'd0, _zz_io_cmd_payload_numerator_4};
  assign _zz_io_cmd_payload_denominator_1 = ((_zz_io_cmd_payload_denominator[15] && io_cmd_payload_signed) ? _zz_io_cmd_payload_denominator_2 : _zz_io_cmd_payload_denominator);
  assign _zz_io_cmd_payload_denominator_2 = (~ _zz_io_cmd_payload_denominator);
  assign _zz_io_cmd_payload_denominator_4 = (_zz_io_cmd_payload_denominator[15] && io_cmd_payload_signed);
  assign _zz_io_cmd_payload_denominator_3 = {15'd0, _zz_io_cmd_payload_denominator_4};
  assign _zz_io_rsp_payload_quotient_1 = _zz_io_rsp_payload_quotient_2;
  assign _zz_io_rsp_payload_quotient_2 = _zz_io_rsp_payload_quotient_3;
  assign _zz_io_rsp_payload_quotient_3 = ({_zz_io_rsp_payload_quotient,(_zz_io_rsp_payload_quotient ? (~ divider_io_rsp_payload_quotient) : divider_io_rsp_payload_quotient)} + _zz_io_rsp_payload_quotient_4);
  assign _zz_io_rsp_payload_quotient_5 = _zz_io_rsp_payload_quotient;
  assign _zz_io_rsp_payload_quotient_4 = {16'd0, _zz_io_rsp_payload_quotient_5};
  assign _zz_io_rsp_payload_remainder_1 = _zz_io_rsp_payload_remainder_2;
  assign _zz_io_rsp_payload_remainder_2 = _zz_io_rsp_payload_remainder_3;
  assign _zz_io_rsp_payload_remainder_3 = ({_zz_io_rsp_payload_remainder,(_zz_io_rsp_payload_remainder ? (~ divider_io_rsp_payload_remainder) : divider_io_rsp_payload_remainder)} + _zz_io_rsp_payload_remainder_4);
  assign _zz_io_rsp_payload_remainder_5 = _zz_io_rsp_payload_remainder;
  assign _zz_io_rsp_payload_remainder_4 = {16'd0, _zz_io_rsp_payload_remainder_5};
  UnsignedDivider divider (
    .io_flush                      (io_flush                            ), //i
    .io_cmd_valid                  (io_cmd_valid                        ), //i
    .io_cmd_ready                  (divider_io_cmd_ready                ), //o
    .io_cmd_payload_numerator      (divider_io_cmd_payload_numerator    ), //i
    .io_cmd_payload_denominator    (divider_io_cmd_payload_denominator  ), //i
    .io_cmd_payload_context        (divider_io_cmd_payload_context      ), //i
    .io_rsp_valid                  (divider_io_rsp_valid                ), //o
    .io_rsp_ready                  (io_rsp_ready                        ), //i
    .io_rsp_payload_quotient       (divider_io_rsp_payload_quotient     ), //o
    .io_rsp_payload_remainder      (divider_io_rsp_payload_remainder    ), //o
    .io_rsp_payload_error          (divider_io_rsp_payload_error        ), //o
    .io_rsp_payload_context        (divider_io_rsp_payload_context      ), //o
    .clk                           (clk                                 ), //i
    .reset                         (reset                               )  //i
  );
  assign io_cmd_ready = divider_io_cmd_ready;
  assign _zz_io_cmd_payload_numerator = io_cmd_payload_numerator;
  assign divider_io_cmd_payload_numerator = (_zz_io_cmd_payload_numerator_1 + _zz_io_cmd_payload_numerator_3);
  assign _zz_io_cmd_payload_denominator = io_cmd_payload_denominator;
  assign divider_io_cmd_payload_denominator = (_zz_io_cmd_payload_denominator_1 + _zz_io_cmd_payload_denominator_3);
  always @(*) begin
    divider_io_cmd_payload_context[0] = (io_cmd_payload_signed && (io_cmd_payload_numerator[15] ^ io_cmd_payload_denominator[15]));
    divider_io_cmd_payload_context[1] = (io_cmd_payload_signed && io_cmd_payload_numerator[15]);
  end

  assign io_rsp_valid = divider_io_rsp_valid;
  assign _zz_io_rsp_payload_quotient = divider_io_rsp_payload_context[0];
  assign io_rsp_payload_quotient = _zz_io_rsp_payload_quotient_1[15:0];
  assign _zz_io_rsp_payload_remainder = divider_io_rsp_payload_context[1];
  assign io_rsp_payload_remainder = _zz_io_rsp_payload_remainder_1[15:0];
  assign io_rsp_payload_error = divider_io_rsp_payload_error;

endmodule

module UnsignedDivider (
  input               io_flush,
  input               io_cmd_valid,
  output              io_cmd_ready,
  input      [15:0]   io_cmd_payload_numerator,
  input      [15:0]   io_cmd_payload_denominator,
  input      [1:0]    io_cmd_payload_context,
  output              io_rsp_valid,
  input               io_rsp_ready,
  output     [15:0]   io_rsp_payload_quotient,
  output     [15:0]   io_rsp_payload_remainder,
  output              io_rsp_payload_error,
  output     [1:0]    io_rsp_payload_context,
  input               clk,
  input               reset
);
  wire       [3:0]    _zz_counter_valueNext;
  wire       [0:0]    _zz_counter_valueNext_1;
  wire       [16:0]   _zz_remainderMinusDenominator;
  wire       [16:0]   _zz_numerator;
  reg                 done;
  reg                 waitRsp;
  reg                 counter_willIncrement;
  reg                 counter_willClear;
  reg        [3:0]    counter_valueNext;
  reg        [3:0]    counter_value;
  wire                counter_willOverflowIfInc;
  wire                counter_willOverflow;
  reg        [15:0]   numerator;
  reg        [15:0]   remainder;
  wire       [16:0]   remainderShifted;
  wire       [16:0]   remainderMinusDenominator;
  wire                when_Divider_l108;
  wire                when_Divider_l127;

  assign _zz_counter_valueNext_1 = counter_willIncrement;
  assign _zz_counter_valueNext = {3'd0, _zz_counter_valueNext_1};
  assign _zz_remainderMinusDenominator = {1'd0, io_cmd_payload_denominator};
  assign _zz_numerator = {numerator,(! remainderMinusDenominator[16])};
  always @(*) begin
    counter_willIncrement = 1'b0;
    if(!done) begin
      counter_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    counter_willClear = 1'b0;
    if(done) begin
      if(when_Divider_l108) begin
        counter_willClear = 1'b1;
      end
    end
  end

  assign counter_willOverflowIfInc = (counter_value == 4'b1111);
  assign counter_willOverflow = (counter_willOverflowIfInc && counter_willIncrement);
  always @(*) begin
    counter_valueNext = (counter_value + _zz_counter_valueNext);
    if(counter_willClear) begin
      counter_valueNext = 4'b0000;
    end
  end

  assign remainderShifted = {remainder,numerator[15]};
  assign remainderMinusDenominator = (remainderShifted - _zz_remainderMinusDenominator);
  assign io_cmd_ready = 1'b0;
  assign io_rsp_valid = waitRsp;
  assign io_rsp_payload_quotient = numerator;
  assign io_rsp_payload_remainder = remainder;
  assign io_rsp_payload_context = io_cmd_payload_context;
  assign io_rsp_payload_error = (io_cmd_payload_denominator == 16'h0);
  assign when_Divider_l108 = ((! waitRsp) || io_rsp_ready);
  assign when_Divider_l127 = (! remainderMinusDenominator[16]);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      done <= 1'b1;
      waitRsp <= 1'b0;
      counter_value <= 4'b0000;
    end else begin
      counter_value <= counter_valueNext;
      if(io_rsp_ready) begin
        waitRsp <= 1'b0;
      end
      if(done) begin
        if(when_Divider_l108) begin
          done <= (! io_cmd_valid);
        end
      end else begin
        if(counter_willOverflowIfInc) begin
          done <= 1'b1;
          waitRsp <= 1'b1;
        end
      end
      if(io_flush) begin
        done <= 1'b1;
        waitRsp <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(done) begin
      if(when_Divider_l108) begin
        remainder <= 16'h0;
        numerator <= io_cmd_payload_numerator;
      end
    end else begin
      remainder <= remainderShifted[15:0];
      numerator <= _zz_numerator[15:0];
      if(when_Divider_l127) begin
        remainder <= remainderMinusDenominator[15:0];
      end
    end
  end


endmodule
