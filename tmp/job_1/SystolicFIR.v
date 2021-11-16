// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : SystolicFIR
// Git hash  : d74d505388061bfcc61486ef34047c52cb1446a4



module SystolicFIR (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [15:0]   raw_data_payload_0,
  output              filtered_data_valid,
  output     [23:0]   filtered_data_payload_0,
  input               clk,
  input               reset
);
  wire       [15:0]   systolicCore_21_next_input_data;
  wire       [23:0]   systolicCore_21_next_adder_data;
  wire                systolicCore_21_next_valid;
  wire       [15:0]   systolicCore_22_next_input_data;
  wire       [23:0]   systolicCore_22_next_adder_data;
  wire                systolicCore_22_next_valid;
  wire       [15:0]   systolicCore_23_next_input_data;
  wire       [23:0]   systolicCore_23_next_adder_data;
  wire                systolicCore_23_next_valid;
  wire       [15:0]   systolicCore_24_next_input_data;
  wire       [23:0]   systolicCore_24_next_adder_data;
  wire                systolicCore_24_next_valid;
  wire       [15:0]   systolicCore_25_next_input_data;
  wire       [23:0]   systolicCore_25_next_adder_data;
  wire                systolicCore_25_next_valid;
  wire       [15:0]   systolicCore_26_next_input_data;
  wire       [23:0]   systolicCore_26_next_adder_data;
  wire                systolicCore_26_next_valid;
  wire       [15:0]   systolicCore_27_next_input_data;
  wire       [23:0]   systolicCore_27_next_adder_data;
  wire                systolicCore_27_next_valid;
  wire       [15:0]   systolicCore_28_next_input_data;
  wire       [23:0]   systolicCore_28_next_adder_data;
  wire                systolicCore_28_next_valid;
  wire       [15:0]   systolicCore_29_next_input_data;
  wire       [23:0]   systolicCore_29_next_adder_data;
  wire                systolicCore_29_next_valid;
  wire       [15:0]   systolicCore_30_next_input_data;
  wire       [23:0]   systolicCore_30_next_adder_data;
  wire                systolicCore_30_next_valid;
  wire       [15:0]   systolicCore_31_next_input_data;
  wire       [23:0]   systolicCore_31_next_adder_data;
  wire                systolicCore_31_next_valid;
  wire       [15:0]   systolicCore_32_next_input_data;
  wire       [23:0]   systolicCore_32_next_adder_data;
  wire                systolicCore_32_next_valid;
  wire       [15:0]   systolicCore_33_next_input_data;
  wire       [23:0]   systolicCore_33_next_adder_data;
  wire                systolicCore_33_next_valid;
  wire       [15:0]   systolicCore_34_next_input_data;
  wire       [23:0]   systolicCore_34_next_adder_data;
  wire                systolicCore_34_next_valid;
  wire       [15:0]   systolicCore_35_next_input_data;
  wire       [23:0]   systolicCore_35_next_adder_data;
  wire                systolicCore_35_next_valid;
  wire       [15:0]   systolicCore_36_next_input_data;
  wire       [23:0]   systolicCore_36_next_adder_data;
  wire                systolicCore_36_next_valid;
  wire       [15:0]   systolicCore_37_next_input_data;
  wire       [23:0]   systolicCore_37_next_adder_data;
  wire                systolicCore_37_next_valid;
  wire       [15:0]   systolicCore_38_next_input_data;
  wire       [23:0]   systolicCore_38_next_adder_data;
  wire                systolicCore_38_next_valid;
  wire       [15:0]   systolicCore_39_next_input_data;
  wire       [23:0]   systolicCore_39_next_adder_data;
  wire                systolicCore_39_next_valid;
  wire       [15:0]   systolicCore_40_next_input_data;
  wire       [23:0]   systolicCore_40_next_adder_data;
  wire                systolicCore_40_next_valid;
  wire       [15:0]   systolicCore_41_next_input_data;
  wire       [23:0]   systolicCore_41_next_adder_data;
  wire                systolicCore_41_next_valid;
  wire                filtered_data_valid_vec_0;

  SystolicCore systolicCore_21 (
    .input_data         (raw_data_payload_0               ), //i
    .coff_data          (8'h06                            ), //i
    .adder_data         (24'h0                            ), //i
    .valid              (raw_data_valid                   ), //i
    .next_input_data    (systolicCore_21_next_input_data  ), //o
    .next_adder_data    (systolicCore_21_next_adder_data  ), //o
    .next_valid         (systolicCore_21_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_22 (
    .input_data         (systolicCore_21_next_input_data  ), //i
    .coff_data          (8'h0                             ), //i
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
    .coff_data          (8'hfc                            ), //i
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
    .coff_data          (8'hfd                            ), //i
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
    .coff_data          (8'h05                            ), //i
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
    .coff_data          (8'h06                            ), //i
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
    .coff_data          (8'hfa                            ), //i
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
    .coff_data          (8'hf3                            ), //i
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
    .coff_data          (8'h07                            ), //i
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
    .coff_data          (8'h2c                            ), //i
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
    .coff_data          (8'h40                            ), //i
    .adder_data         (systolicCore_30_next_adder_data  ), //i
    .valid              (systolicCore_30_next_valid       ), //i
    .next_input_data    (systolicCore_31_next_input_data  ), //o
    .next_adder_data    (systolicCore_31_next_adder_data  ), //o
    .next_valid         (systolicCore_31_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_32 (
    .input_data         (systolicCore_31_next_input_data  ), //i
    .coff_data          (8'h2c                            ), //i
    .adder_data         (systolicCore_31_next_adder_data  ), //i
    .valid              (systolicCore_31_next_valid       ), //i
    .next_input_data    (systolicCore_32_next_input_data  ), //o
    .next_adder_data    (systolicCore_32_next_adder_data  ), //o
    .next_valid         (systolicCore_32_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_33 (
    .input_data         (systolicCore_32_next_input_data  ), //i
    .coff_data          (8'h07                            ), //i
    .adder_data         (systolicCore_32_next_adder_data  ), //i
    .valid              (systolicCore_32_next_valid       ), //i
    .next_input_data    (systolicCore_33_next_input_data  ), //o
    .next_adder_data    (systolicCore_33_next_adder_data  ), //o
    .next_valid         (systolicCore_33_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_34 (
    .input_data         (systolicCore_33_next_input_data  ), //i
    .coff_data          (8'hf3                            ), //i
    .adder_data         (systolicCore_33_next_adder_data  ), //i
    .valid              (systolicCore_33_next_valid       ), //i
    .next_input_data    (systolicCore_34_next_input_data  ), //o
    .next_adder_data    (systolicCore_34_next_adder_data  ), //o
    .next_valid         (systolicCore_34_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_35 (
    .input_data         (systolicCore_34_next_input_data  ), //i
    .coff_data          (8'hfa                            ), //i
    .adder_data         (systolicCore_34_next_adder_data  ), //i
    .valid              (systolicCore_34_next_valid       ), //i
    .next_input_data    (systolicCore_35_next_input_data  ), //o
    .next_adder_data    (systolicCore_35_next_adder_data  ), //o
    .next_valid         (systolicCore_35_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_36 (
    .input_data         (systolicCore_35_next_input_data  ), //i
    .coff_data          (8'h06                            ), //i
    .adder_data         (systolicCore_35_next_adder_data  ), //i
    .valid              (systolicCore_35_next_valid       ), //i
    .next_input_data    (systolicCore_36_next_input_data  ), //o
    .next_adder_data    (systolicCore_36_next_adder_data  ), //o
    .next_valid         (systolicCore_36_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_37 (
    .input_data         (systolicCore_36_next_input_data  ), //i
    .coff_data          (8'h05                            ), //i
    .adder_data         (systolicCore_36_next_adder_data  ), //i
    .valid              (systolicCore_36_next_valid       ), //i
    .next_input_data    (systolicCore_37_next_input_data  ), //o
    .next_adder_data    (systolicCore_37_next_adder_data  ), //o
    .next_valid         (systolicCore_37_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_38 (
    .input_data         (systolicCore_37_next_input_data  ), //i
    .coff_data          (8'hfd                            ), //i
    .adder_data         (systolicCore_37_next_adder_data  ), //i
    .valid              (systolicCore_37_next_valid       ), //i
    .next_input_data    (systolicCore_38_next_input_data  ), //o
    .next_adder_data    (systolicCore_38_next_adder_data  ), //o
    .next_valid         (systolicCore_38_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_39 (
    .input_data         (systolicCore_38_next_input_data  ), //i
    .coff_data          (8'hfc                            ), //i
    .adder_data         (systolicCore_38_next_adder_data  ), //i
    .valid              (systolicCore_38_next_valid       ), //i
    .next_input_data    (systolicCore_39_next_input_data  ), //o
    .next_adder_data    (systolicCore_39_next_adder_data  ), //o
    .next_valid         (systolicCore_39_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_40 (
    .input_data         (systolicCore_39_next_input_data  ), //i
    .coff_data          (8'h0                             ), //i
    .adder_data         (systolicCore_39_next_adder_data  ), //i
    .valid              (systolicCore_39_next_valid       ), //i
    .next_input_data    (systolicCore_40_next_input_data  ), //o
    .next_adder_data    (systolicCore_40_next_adder_data  ), //o
    .next_valid         (systolicCore_40_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  SystolicCore systolicCore_41 (
    .input_data         (systolicCore_40_next_input_data  ), //i
    .coff_data          (8'h06                            ), //i
    .adder_data         (systolicCore_40_next_adder_data  ), //i
    .valid              (systolicCore_40_next_valid       ), //i
    .next_input_data    (systolicCore_41_next_input_data  ), //o
    .next_adder_data    (systolicCore_41_next_adder_data  ), //o
    .next_valid         (systolicCore_41_next_valid       ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  assign filtered_data_payload_0 = systolicCore_41_next_adder_data;
  assign filtered_data_valid_vec_0 = systolicCore_41_next_valid;
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

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

//SystolicCore replaced by SystolicCore

module SystolicCore (
  input      [15:0]   input_data,
  input      [7:0]    coff_data,
  input      [23:0]   adder_data,
  input               valid,
  output     [15:0]   next_input_data,
  output     [23:0]   next_adder_data,
  output              next_valid,
  input               clk,
  input               reset
);
  wire       [15:0]   shiftRegister_21_output_1;
  reg        [23:0]   mult;
  reg        [23:0]   next_adder;
  reg                 valid_regNext;

  ShiftRegister shiftRegister_21 (
    .input_1     (input_data                 ), //i
    .output_1    (shiftRegister_21_output_1  ), //o
    .enable      (valid                      ), //i
    .clk         (clk                        ), //i
    .reset       (reset                      )  //i
  );
  assign next_valid = valid_regNext;
  assign next_input_data = shiftRegister_21_output_1;
  assign next_adder_data = next_adder;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      mult <= 24'h0;
      next_adder <= 24'h0;
      valid_regNext <= 1'b0;
    end else begin
      if(valid) begin
        mult <= ($signed(coff_data) * $signed(shiftRegister_21_output_1));
      end
      if(valid) begin
        next_adder <= ($signed(mult) + $signed(adder_data));
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

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

//ShiftRegister replaced by ShiftRegister

module ShiftRegister (
  input      [15:0]   input_1,
  output     [15:0]   output_1,
  input               enable,
  input               clk,
  input               reset
);
  reg        [15:0]   shift_reg_0;
  reg        [15:0]   shift_reg_1;

  assign output_1 = shift_reg_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      shift_reg_0 <= 16'h0;
      shift_reg_1 <= 16'h0;
    end else begin
      if(enable) begin
        shift_reg_0 <= input_1;
        shift_reg_1 <= shift_reg_0;
      end
    end
  end


endmodule
