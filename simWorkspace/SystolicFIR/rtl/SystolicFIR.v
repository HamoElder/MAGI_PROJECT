// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : SystolicFIR
// Git hash  : 664a1f7772b4fc387f607a4a9afa4ff906ad7794



module SystolicFIR (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [11:0]   raw_data_payload_0,
  output              filtered_data_valid,
  output     [28:0]   filtered_data_payload_0,
  input               clk,
  input               reset
);
  wire       [28:0]   systolicCore_16_input_data;
  wire       [28:0]   systolicCore_16_next_input_data;
  wire       [28:0]   systolicCore_16_next_adder_data;
  wire                systolicCore_16_next_valid;
  wire       [28:0]   systolicCore_17_next_input_data;
  wire       [28:0]   systolicCore_17_next_adder_data;
  wire                systolicCore_17_next_valid;
  wire       [28:0]   systolicCore_18_next_input_data;
  wire       [28:0]   systolicCore_18_next_adder_data;
  wire                systolicCore_18_next_valid;
  wire       [28:0]   systolicCore_19_next_input_data;
  wire       [28:0]   systolicCore_19_next_adder_data;
  wire                systolicCore_19_next_valid;
  wire       [28:0]   systolicCore_20_next_input_data;
  wire       [28:0]   systolicCore_20_next_adder_data;
  wire                systolicCore_20_next_valid;
  wire       [28:0]   systolicCore_21_next_input_data;
  wire       [28:0]   systolicCore_21_next_adder_data;
  wire                systolicCore_21_next_valid;
  wire       [28:0]   systolicCore_22_next_input_data;
  wire       [28:0]   systolicCore_22_next_adder_data;
  wire                systolicCore_22_next_valid;
  wire       [28:0]   systolicCore_23_next_input_data;
  wire       [28:0]   systolicCore_23_next_adder_data;
  wire                systolicCore_23_next_valid;
  wire       [28:0]   systolicCore_24_next_input_data;
  wire       [28:0]   systolicCore_24_next_adder_data;
  wire                systolicCore_24_next_valid;
  wire       [28:0]   systolicCore_25_next_input_data;
  wire       [28:0]   systolicCore_25_next_adder_data;
  wire                systolicCore_25_next_valid;
  wire       [28:0]   systolicCore_26_next_input_data;
  wire       [28:0]   systolicCore_26_next_adder_data;
  wire                systolicCore_26_next_valid;
  wire       [28:0]   systolicCore_27_next_input_data;
  wire       [28:0]   systolicCore_27_next_adder_data;
  wire                systolicCore_27_next_valid;
  wire       [28:0]   systolicCore_28_next_input_data;
  wire       [28:0]   systolicCore_28_next_adder_data;
  wire                systolicCore_28_next_valid;
  wire       [28:0]   systolicCore_29_next_input_data;
  wire       [28:0]   systolicCore_29_next_adder_data;
  wire                systolicCore_29_next_valid;
  wire       [28:0]   systolicCore_30_next_input_data;
  wire       [28:0]   systolicCore_30_next_adder_data;
  wire                systolicCore_30_next_valid;
  wire       [28:0]   systolicCore_31_next_input_data;
  wire       [28:0]   systolicCore_31_next_adder_data;
  wire                systolicCore_31_next_valid;
  wire                filtered_data_valid_vec_0;

  SystolicCore systolicCore_16 (
    .input_data         (systolicCore_16_input_data       ), //i
    .coff_data          (9'h00b                           ), //i
    .adder_data         (29'h0                            ), //i
    .valid              (raw_data_valid                   ), //i
    .next_input_data    (systolicCore_16_next_input_data  ), //o
    .next_adder_data    (systolicCore_16_next_adder_data  ), //o
    .next_valid         (systolicCore_16_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_17 (
    .input_data         (systolicCore_16_next_input_data  ), //i
    .coff_data          (9'h01f                           ), //i
    .adder_data         (systolicCore_16_next_adder_data  ), //i
    .valid              (systolicCore_16_next_valid       ), //i
    .next_input_data    (systolicCore_17_next_input_data  ), //o
    .next_adder_data    (systolicCore_17_next_adder_data  ), //o
    .next_valid         (systolicCore_17_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_18 (
    .input_data         (systolicCore_17_next_input_data  ), //i
    .coff_data          (9'h03f                           ), //i
    .adder_data         (systolicCore_17_next_adder_data  ), //i
    .valid              (systolicCore_17_next_valid       ), //i
    .next_input_data    (systolicCore_18_next_input_data  ), //o
    .next_adder_data    (systolicCore_18_next_adder_data  ), //o
    .next_valid         (systolicCore_18_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_19 (
    .input_data         (systolicCore_18_next_input_data  ), //i
    .coff_data          (9'h068                           ), //i
    .adder_data         (systolicCore_18_next_adder_data  ), //i
    .valid              (systolicCore_18_next_valid       ), //i
    .next_input_data    (systolicCore_19_next_input_data  ), //o
    .next_adder_data    (systolicCore_19_next_adder_data  ), //o
    .next_valid         (systolicCore_19_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_20 (
    .input_data         (systolicCore_19_next_input_data  ), //i
    .coff_data          (9'h098                           ), //i
    .adder_data         (systolicCore_19_next_adder_data  ), //i
    .valid              (systolicCore_19_next_valid       ), //i
    .next_input_data    (systolicCore_20_next_input_data  ), //o
    .next_adder_data    (systolicCore_20_next_adder_data  ), //o
    .next_valid         (systolicCore_20_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_21 (
    .input_data         (systolicCore_20_next_input_data  ), //i
    .coff_data          (9'h0c6                           ), //i
    .adder_data         (systolicCore_20_next_adder_data  ), //i
    .valid              (systolicCore_20_next_valid       ), //i
    .next_input_data    (systolicCore_21_next_input_data  ), //o
    .next_adder_data    (systolicCore_21_next_adder_data  ), //o
    .next_valid         (systolicCore_21_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_22 (
    .input_data         (systolicCore_21_next_input_data  ), //i
    .coff_data          (9'h0eb                           ), //i
    .adder_data         (systolicCore_21_next_adder_data  ), //i
    .valid              (systolicCore_21_next_valid       ), //i
    .next_input_data    (systolicCore_22_next_input_data  ), //o
    .next_adder_data    (systolicCore_22_next_adder_data  ), //o
    .next_valid         (systolicCore_22_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_23 (
    .input_data         (systolicCore_22_next_input_data  ), //i
    .coff_data          (9'h0ff                           ), //i
    .adder_data         (systolicCore_22_next_adder_data  ), //i
    .valid              (systolicCore_22_next_valid       ), //i
    .next_input_data    (systolicCore_23_next_input_data  ), //o
    .next_adder_data    (systolicCore_23_next_adder_data  ), //o
    .next_valid         (systolicCore_23_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_24 (
    .input_data         (systolicCore_23_next_input_data  ), //i
    .coff_data          (9'h0ff                           ), //i
    .adder_data         (systolicCore_23_next_adder_data  ), //i
    .valid              (systolicCore_23_next_valid       ), //i
    .next_input_data    (systolicCore_24_next_input_data  ), //o
    .next_adder_data    (systolicCore_24_next_adder_data  ), //o
    .next_valid         (systolicCore_24_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_25 (
    .input_data         (systolicCore_24_next_input_data  ), //i
    .coff_data          (9'h0eb                           ), //i
    .adder_data         (systolicCore_24_next_adder_data  ), //i
    .valid              (systolicCore_24_next_valid       ), //i
    .next_input_data    (systolicCore_25_next_input_data  ), //o
    .next_adder_data    (systolicCore_25_next_adder_data  ), //o
    .next_valid         (systolicCore_25_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_26 (
    .input_data         (systolicCore_25_next_input_data  ), //i
    .coff_data          (9'h0c6                           ), //i
    .adder_data         (systolicCore_25_next_adder_data  ), //i
    .valid              (systolicCore_25_next_valid       ), //i
    .next_input_data    (systolicCore_26_next_input_data  ), //o
    .next_adder_data    (systolicCore_26_next_adder_data  ), //o
    .next_valid         (systolicCore_26_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_27 (
    .input_data         (systolicCore_26_next_input_data  ), //i
    .coff_data          (9'h098                           ), //i
    .adder_data         (systolicCore_26_next_adder_data  ), //i
    .valid              (systolicCore_26_next_valid       ), //i
    .next_input_data    (systolicCore_27_next_input_data  ), //o
    .next_adder_data    (systolicCore_27_next_adder_data  ), //o
    .next_valid         (systolicCore_27_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_28 (
    .input_data         (systolicCore_27_next_input_data  ), //i
    .coff_data          (9'h068                           ), //i
    .adder_data         (systolicCore_27_next_adder_data  ), //i
    .valid              (systolicCore_27_next_valid       ), //i
    .next_input_data    (systolicCore_28_next_input_data  ), //o
    .next_adder_data    (systolicCore_28_next_adder_data  ), //o
    .next_valid         (systolicCore_28_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_29 (
    .input_data         (systolicCore_28_next_input_data  ), //i
    .coff_data          (9'h03f                           ), //i
    .adder_data         (systolicCore_28_next_adder_data  ), //i
    .valid              (systolicCore_28_next_valid       ), //i
    .next_input_data    (systolicCore_29_next_input_data  ), //o
    .next_adder_data    (systolicCore_29_next_adder_data  ), //o
    .next_valid         (systolicCore_29_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_30 (
    .input_data         (systolicCore_29_next_input_data  ), //i
    .coff_data          (9'h01f                           ), //i
    .adder_data         (systolicCore_29_next_adder_data  ), //i
    .valid              (systolicCore_29_next_valid       ), //i
    .next_input_data    (systolicCore_30_next_input_data  ), //o
    .next_adder_data    (systolicCore_30_next_adder_data  ), //o
    .next_valid         (systolicCore_30_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_31 (
    .input_data         (systolicCore_30_next_input_data  ), //i
    .coff_data          (9'h00b                           ), //i
    .adder_data         (systolicCore_30_next_adder_data  ), //i
    .valid              (systolicCore_30_next_valid       ), //i
    .next_input_data    (systolicCore_31_next_input_data  ), //o
    .next_adder_data    (systolicCore_31_next_adder_data  ), //o
    .next_valid         (systolicCore_31_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  assign systolicCore_16_input_data = {{17{raw_data_payload_0[11]}}, raw_data_payload_0};
  assign filtered_data_payload_0 = systolicCore_31_next_adder_data;
  assign filtered_data_valid_vec_0 = systolicCore_31_next_valid;
  assign filtered_data_valid = filtered_data_valid_vec_0;
  assign raw_data_ready = 1'b1;

endmodule

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

module SystolicCore (
  input      [28:0]   input_data,
  input      [8:0]    coff_data,
  input      [28:0]   adder_data,
  input               valid,
  output     [28:0]   next_input_data,
  output     [28:0]   next_adder_data,
  output              next_valid,
  input               clk,
  input               reset
);
  wire       [28:0]   shiftRegister_16_output_1;
  wire       [37:0]   _zz_next_adder;
  reg        [37:0]   mult;
  reg        [37:0]   next_adder;
  reg                 valid_regNext;

  assign _zz_next_adder = {{9{adder_data[28]}}, adder_data};
  ShiftRegister shiftRegister_16 (
    .input_1     (input_data                 ), //i
    .output_1    (shiftRegister_16_output_1  ), //o
    .enable      (valid                      ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  assign next_valid = valid_regNext;
  assign next_input_data = shiftRegister_16_output_1;
  assign next_adder_data = next_adder[28:0];
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      mult <= 38'h0;
      next_adder <= 38'h0;
      valid_regNext <= 1'b0;
    end else begin
      if(valid) begin
        mult <= ($signed(coff_data) * $signed(shiftRegister_16_output_1));
      end
      if(valid) begin
        next_adder <= ($signed(mult) + $signed(_zz_next_adder));
      end
      valid_regNext <= valid;
    end
  end


endmodule

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

module ShiftRegister (
  input      [28:0]   input_1,
  output     [28:0]   output_1,
  input               enable,
  input               clk,
  input               reset
);
  reg        [28:0]   shift_reg_0;
  reg        [28:0]   shift_reg_1;

  assign output_1 = shift_reg_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 29'h0;
      shift_reg_1 <= 29'h0;
    end else begin
      if(enable) begin
        shift_reg_0 <= input_1;
        shift_reg_1 <= shift_reg_0;
      end
    end
  end


endmodule
