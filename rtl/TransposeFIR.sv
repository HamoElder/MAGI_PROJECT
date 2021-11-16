// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : TransposeFIR
// Git hash  : d74d505388061bfcc61486ef34047c52cb1446a4



module TransposeFIR (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [15:0]   raw_data_payload_0,
  output              filtered_data_valid,
  output     [23:0]   filtered_data_payload_0,
  input               clk,
  input               resetn
);
  wire       [23:0]   transposeCore_21_next_adder_data;
  wire       [23:0]   transposeCore_22_next_adder_data;
  wire       [23:0]   transposeCore_23_next_adder_data;
  wire       [23:0]   transposeCore_24_next_adder_data;
  wire       [23:0]   transposeCore_25_next_adder_data;
  wire       [23:0]   transposeCore_26_next_adder_data;
  wire       [23:0]   transposeCore_27_next_adder_data;
  wire       [23:0]   transposeCore_28_next_adder_data;
  wire       [23:0]   transposeCore_29_next_adder_data;
  wire       [23:0]   transposeCore_30_next_adder_data;
  wire       [23:0]   transposeCore_31_next_adder_data;
  wire       [23:0]   transposeCore_32_next_adder_data;
  wire       [23:0]   transposeCore_33_next_adder_data;
  wire       [23:0]   transposeCore_34_next_adder_data;
  wire       [23:0]   transposeCore_35_next_adder_data;
  wire       [23:0]   transposeCore_36_next_adder_data;
  wire       [23:0]   transposeCore_37_next_adder_data;
  wire       [23:0]   transposeCore_38_next_adder_data;
  wire       [23:0]   transposeCore_39_next_adder_data;
  wire       [23:0]   transposeCore_40_next_adder_data;
  wire       [23:0]   transposeCore_41_next_adder_data;
  reg        [7:0]    coff_mem_0;
  reg        [7:0]    coff_mem_1;
  reg        [7:0]    coff_mem_2;
  reg        [7:0]    coff_mem_3;
  reg        [7:0]    coff_mem_4;
  reg        [7:0]    coff_mem_5;
  reg        [7:0]    coff_mem_6;
  reg        [7:0]    coff_mem_7;
  reg        [7:0]    coff_mem_8;
  reg        [7:0]    coff_mem_9;
  reg        [7:0]    coff_mem_10;
  reg        [7:0]    coff_mem_11;
  reg        [7:0]    coff_mem_12;
  reg        [7:0]    coff_mem_13;
  reg        [7:0]    coff_mem_14;
  reg        [7:0]    coff_mem_15;
  reg        [7:0]    coff_mem_16;
  reg        [7:0]    coff_mem_17;
  reg        [7:0]    coff_mem_18;
  reg        [7:0]    coff_mem_19;
  reg        [7:0]    coff_mem_20;
  wire                filtered_data_valid_vec_0;

  TransposeCore transposeCore_21 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_0                        ), //i
    .adder_data         (24'h0                             ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_21_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_22 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_1                        ), //i
    .adder_data         (transposeCore_21_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_22_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_23 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_2                        ), //i
    .adder_data         (transposeCore_22_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_23_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_24 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_3                        ), //i
    .adder_data         (transposeCore_23_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_24_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_25 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_4                        ), //i
    .adder_data         (transposeCore_24_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_25_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_26 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_5                        ), //i
    .adder_data         (transposeCore_25_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_26_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_27 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_6                        ), //i
    .adder_data         (transposeCore_26_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_27_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_28 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_7                        ), //i
    .adder_data         (transposeCore_27_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_28_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_29 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_8                        ), //i
    .adder_data         (transposeCore_28_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_29_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_30 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_9                        ), //i
    .adder_data         (transposeCore_29_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_30_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_31 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_10                       ), //i
    .adder_data         (transposeCore_30_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_31_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_32 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_11                       ), //i
    .adder_data         (transposeCore_31_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_32_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_33 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_12                       ), //i
    .adder_data         (transposeCore_32_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_33_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_34 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_13                       ), //i
    .adder_data         (transposeCore_33_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_34_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_35 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_14                       ), //i
    .adder_data         (transposeCore_34_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_35_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_36 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_15                       ), //i
    .adder_data         (transposeCore_35_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_36_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_37 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_16                       ), //i
    .adder_data         (transposeCore_36_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_37_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_38 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_17                       ), //i
    .adder_data         (transposeCore_37_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_38_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_39 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_18                       ), //i
    .adder_data         (transposeCore_38_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_39_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_40 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_19                       ), //i
    .adder_data         (transposeCore_39_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_40_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_41 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_20                       ), //i
    .adder_data         (transposeCore_40_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .next_adder_data    (transposeCore_41_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  assign filtered_data_payload_0 = transposeCore_41_next_adder_data;
  assign filtered_data_valid_vec_0 = raw_data_valid;
  assign filtered_data_valid = filtered_data_valid_vec_0;
  assign raw_data_ready = 1'b1;
  always @(posedge clk) begin
    coff_mem_0 <= 8'h06;
    coff_mem_1 <= 8'h0;
    coff_mem_2 <= 8'hfc;
    coff_mem_3 <= 8'hfd;
    coff_mem_4 <= 8'h05;
    coff_mem_5 <= 8'h06;
    coff_mem_6 <= 8'hfa;
    coff_mem_7 <= 8'hf3;
    coff_mem_8 <= 8'h07;
    coff_mem_9 <= 8'h2c;
    coff_mem_10 <= 8'h40;
    coff_mem_11 <= 8'h2c;
    coff_mem_12 <= 8'h07;
    coff_mem_13 <= 8'hf3;
    coff_mem_14 <= 8'hfa;
    coff_mem_15 <= 8'h06;
    coff_mem_16 <= 8'h05;
    coff_mem_17 <= 8'hfd;
    coff_mem_18 <= 8'hfc;
    coff_mem_19 <= 8'h0;
    coff_mem_20 <= 8'h06;
  end


endmodule

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

module TransposeCore (
  input      [15:0]   input_data,
  input      [7:0]    coff_data,
  input      [23:0]   adder_data,
  input               valid,
  output     [23:0]   next_adder_data,
  input               clk,
  input               resetn
);
  wire       [23:0]   _zz_next_adder_data;
  reg        [23:0]   previous_adder_data;

  assign _zz_next_adder_data = ($signed(input_data) * $signed(coff_data));
  assign next_adder_data = ($signed(_zz_next_adder_data) + $signed(previous_adder_data));
  always @(posedge clk) begin
    if(!resetn) begin
      previous_adder_data <= 24'h0;
    end else begin
      if(valid) begin
        previous_adder_data <= adder_data;
      end
    end
  end


endmodule
