// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : IIR_I
// Git hash  : b50f8eedfee0ae5b23a664070b7c6bea62d4901e



module IIR_I (
  input               clc,
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_0,
  input      [15:0]   raw_data_payload_1,
  output              filtered_data_valid,
  output     [18:0]   filtered_data_payload_0,
  output     [18:0]   filtered_data_payload_1,
  input               clk,
  input               resetn
);
  wire                fir_x_filtered_data_valid;
  wire       [18:0]   fir_x_filtered_data_payload_0;
  wire       [18:0]   fir_x_filtered_data_payload_1;
  wire                fir_y_filtered_data_valid;
  wire       [31:0]   fir_y_filtered_data_payload_0;
  wire       [31:0]   fir_y_filtered_data_payload_1;
  wire       [31:0]   _zz_filtered_data_payload_0;
  wire       [31:0]   _zz_filtered_data_payload_0_1;
  wire       [31:0]   _zz_filtered_data_payload_1;
  wire       [31:0]   _zz_filtered_data_payload_1_1;
  reg        [18:0]   filtered_data_payload_0_regNext;
  reg        [18:0]   filtered_data_payload_1_regNext;

  assign _zz_filtered_data_payload_0 = ($signed(_zz_filtered_data_payload_0_1) + $signed(fir_y_filtered_data_payload_0));
  assign _zz_filtered_data_payload_0_1 = {{13{fir_x_filtered_data_payload_0[18]}}, fir_x_filtered_data_payload_0};
  assign _zz_filtered_data_payload_1 = ($signed(_zz_filtered_data_payload_1_1) + $signed(fir_y_filtered_data_payload_1));
  assign _zz_filtered_data_payload_1_1 = {{13{fir_x_filtered_data_payload_1[18]}}, fir_x_filtered_data_payload_1};
  TransposeFIR fir_x (
    .raw_data_valid             (raw_data_valid                 ), //i
    .raw_data_payload_0         (raw_data_payload_0             ), //i
    .raw_data_payload_1         (raw_data_payload_1             ), //i
    .filtered_data_valid        (fir_x_filtered_data_valid      ), //o
    .filtered_data_payload_0    (fir_x_filtered_data_payload_0  ), //o
    .filtered_data_payload_1    (fir_x_filtered_data_payload_1  ), //o
    .clc                        (clc                            ), //i
    .clk                        (clk                            ), //i
    .resetn                     (resetn                         )  //i
  );
  TransposeFIR_1 fir_y (
    .raw_data_valid             (raw_data_valid                   ), //i
    .raw_data_payload_0         (filtered_data_payload_0_regNext  ), //i
    .raw_data_payload_1         (filtered_data_payload_1_regNext  ), //i
    .filtered_data_valid        (fir_y_filtered_data_valid        ), //o
    .filtered_data_payload_0    (fir_y_filtered_data_payload_0    ), //o
    .filtered_data_payload_1    (fir_y_filtered_data_payload_1    ), //o
    .clc                        (clc                              ), //i
    .clk                        (clk                              ), //i
    .resetn                     (resetn                           )  //i
  );
  assign filtered_data_payload_0 = _zz_filtered_data_payload_0[18:0];
  assign filtered_data_payload_1 = _zz_filtered_data_payload_1[18:0];
  assign filtered_data_valid = fir_x_filtered_data_valid;
  always @(posedge clk) begin
    filtered_data_payload_0_regNext <= filtered_data_payload_0;
    filtered_data_payload_1_regNext <= filtered_data_payload_1;
  end


endmodule

module TransposeFIR_1 (
  input               raw_data_valid,
  input      [18:0]   raw_data_payload_0,
  input      [18:0]   raw_data_payload_1,
  output              filtered_data_valid,
  output     [31:0]   filtered_data_payload_0,
  output     [31:0]   filtered_data_payload_1,
  input               clc,
  input               clk,
  input               resetn
);
  wire       [31:0]   transposeCore_16_next_adder_data;
  wire       [31:0]   transposeCore_17_next_adder_data;
  wire       [31:0]   transposeCore_18_next_adder_data;
  wire       [31:0]   transposeCore_19_next_adder_data;
  wire       [31:0]   transposeCore_20_next_adder_data;
  wire       [31:0]   transposeCore_21_next_adder_data;
  wire       [31:0]   transposeCore_22_next_adder_data;
  wire       [31:0]   transposeCore_23_next_adder_data;
  reg        [12:0]   coff_mem_0;
  reg        [12:0]   coff_mem_1;
  reg        [12:0]   coff_mem_2;
  reg        [12:0]   coff_mem_3;
  wire                filtered_data_valid_vec_0;
  wire                filtered_data_valid_vec_1;

  TransposeCore_8 transposeCore_16 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_0                        ), //i
    .adder_data         (32'h0                             ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_16_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore_8 transposeCore_17 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_1                        ), //i
    .adder_data         (transposeCore_16_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_17_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore_8 transposeCore_18 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_2                        ), //i
    .adder_data         (transposeCore_17_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_18_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore_8 transposeCore_19 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_3                        ), //i
    .adder_data         (transposeCore_18_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_19_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore_8 transposeCore_20 (
    .input_data         (raw_data_payload_1                ), //i
    .coff_data          (coff_mem_0                        ), //i
    .adder_data         (32'h0                             ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_20_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore_8 transposeCore_21 (
    .input_data         (raw_data_payload_1                ), //i
    .coff_data          (coff_mem_1                        ), //i
    .adder_data         (transposeCore_20_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_21_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore_8 transposeCore_22 (
    .input_data         (raw_data_payload_1                ), //i
    .coff_data          (coff_mem_2                        ), //i
    .adder_data         (transposeCore_21_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_22_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore_8 transposeCore_23 (
    .input_data         (raw_data_payload_1                ), //i
    .coff_data          (coff_mem_3                        ), //i
    .adder_data         (transposeCore_22_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_23_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  assign filtered_data_payload_0 = transposeCore_19_next_adder_data;
  assign filtered_data_valid_vec_0 = raw_data_valid;
  assign filtered_data_payload_1 = transposeCore_23_next_adder_data;
  assign filtered_data_valid_vec_1 = raw_data_valid;
  assign filtered_data_valid = filtered_data_valid_vec_0;
  always @(posedge clk) begin
    coff_mem_0 <= 13'h0400;
    coff_mem_1 <= 13'h15d4;
    coff_mem_2 <= 13'h08bd;
    coff_mem_3 <= 13'h1d79;
  end


endmodule

module TransposeFIR (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_0,
  input      [15:0]   raw_data_payload_1,
  output              filtered_data_valid,
  output     [18:0]   filtered_data_payload_0,
  output     [18:0]   filtered_data_payload_1,
  input               clc,
  input               clk,
  input               resetn
);
  wire       [18:0]   transposeCore_16_next_adder_data;
  wire       [18:0]   transposeCore_17_next_adder_data;
  wire       [18:0]   transposeCore_18_next_adder_data;
  wire       [18:0]   transposeCore_19_next_adder_data;
  wire       [18:0]   transposeCore_20_next_adder_data;
  wire       [18:0]   transposeCore_21_next_adder_data;
  wire       [18:0]   transposeCore_22_next_adder_data;
  wire       [18:0]   transposeCore_23_next_adder_data;
  reg        [2:0]    coff_mem_0;
  reg        [2:0]    coff_mem_1;
  reg        [2:0]    coff_mem_2;
  reg        [2:0]    coff_mem_3;
  wire                filtered_data_valid_vec_0;
  wire                filtered_data_valid_vec_1;

  TransposeCore transposeCore_16 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_0                        ), //i
    .adder_data         (19'h0                             ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_16_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_17 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_1                        ), //i
    .adder_data         (transposeCore_16_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_17_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_18 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_2                        ), //i
    .adder_data         (transposeCore_17_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_18_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_19 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_3                        ), //i
    .adder_data         (transposeCore_18_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_19_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_20 (
    .input_data         (raw_data_payload_1                ), //i
    .coff_data          (coff_mem_0                        ), //i
    .adder_data         (19'h0                             ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_20_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_21 (
    .input_data         (raw_data_payload_1                ), //i
    .coff_data          (coff_mem_1                        ), //i
    .adder_data         (transposeCore_20_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_21_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_22 (
    .input_data         (raw_data_payload_1                ), //i
    .coff_data          (coff_mem_2                        ), //i
    .adder_data         (transposeCore_21_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_22_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  TransposeCore transposeCore_23 (
    .input_data         (raw_data_payload_1                ), //i
    .coff_data          (coff_mem_3                        ), //i
    .adder_data         (transposeCore_22_next_adder_data  ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_23_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .resetn             (resetn                            )  //i
  );
  assign filtered_data_payload_0 = transposeCore_19_next_adder_data;
  assign filtered_data_valid_vec_0 = raw_data_valid;
  assign filtered_data_payload_1 = transposeCore_23_next_adder_data;
  assign filtered_data_valid_vec_1 = raw_data_valid;
  assign filtered_data_valid = filtered_data_valid_vec_0;
  always @(posedge clk) begin
    coff_mem_0 <= 3'b011;
    coff_mem_1 <= 3'b010;
    coff_mem_2 <= 3'b010;
    coff_mem_3 <= 3'b011;
  end


endmodule

//TransposeCore_8 replaced by TransposeCore_8

//TransposeCore_8 replaced by TransposeCore_8

//TransposeCore_8 replaced by TransposeCore_8

//TransposeCore_8 replaced by TransposeCore_8

//TransposeCore_8 replaced by TransposeCore_8

//TransposeCore_8 replaced by TransposeCore_8

//TransposeCore_8 replaced by TransposeCore_8

module TransposeCore_8 (
  input      [18:0]   input_data,
  input      [12:0]   coff_data,
  input      [31:0]   adder_data,
  input               valid,
  input               clc,
  output     [31:0]   next_adder_data,
  input               clk,
  input               resetn
);
  wire       [31:0]   _zz_next_adder_data;
  reg        [31:0]   previous_adder_data;

  assign _zz_next_adder_data = ($signed(input_data) * $signed(coff_data));
  assign next_adder_data = ($signed(_zz_next_adder_data) + $signed(previous_adder_data));
  always @(posedge clk) begin
    if(!resetn) begin
      previous_adder_data <= 32'h0;
    end else begin
      if(clc) begin
        previous_adder_data <= 32'h0;
      end else begin
        if(valid) begin
          previous_adder_data <= adder_data;
        end
      end
    end
  end


endmodule

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

//TransposeCore replaced by TransposeCore

module TransposeCore (
  input      [15:0]   input_data,
  input      [2:0]    coff_data,
  input      [18:0]   adder_data,
  input               valid,
  input               clc,
  output     [18:0]   next_adder_data,
  input               clk,
  input               resetn
);
  wire       [18:0]   _zz_next_adder_data;
  reg        [18:0]   previous_adder_data;

  assign _zz_next_adder_data = ($signed(input_data) * $signed(coff_data));
  assign next_adder_data = ($signed(_zz_next_adder_data) + $signed(previous_adder_data));
  always @(posedge clk) begin
    if(!resetn) begin
      previous_adder_data <= 19'h0;
    end else begin
      if(clc) begin
        previous_adder_data <= 19'h0;
      end else begin
        if(valid) begin
          previous_adder_data <= adder_data;
        end
      end
    end
  end


endmodule
