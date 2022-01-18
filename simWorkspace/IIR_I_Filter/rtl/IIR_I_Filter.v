// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : IIR_I_Filter
// Git hash  : 3aba5ba41129fa76a4728cd47203bcf10e3093cc



module IIR_I_Filter (
  input               clc,
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_0,
  output              filtered_data_valid,
  output     [20:0]   filtered_data_payload_0,
  input               clk,
  input               reset
);
  wire                fir_x_filtered_data_valid;
  wire       [18:0]   fir_x_filtered_data_payload_0;
  wire                fir_y_filtered_data_valid;
  wire       [20:0]   fir_y_filtered_data_payload_0;
  wire       [20:0]   _zz_filtered_data_payload_0;
  reg        [18:0]   _zz_raw_data_payload_0;

  assign _zz_filtered_data_payload_0 = {{2{fir_x_filtered_data_payload_0[18]}}, fir_x_filtered_data_payload_0};
  TransposeFIR fir_x (
    .raw_data_valid             (raw_data_valid                 ), //i
    .raw_data_payload_0         (raw_data_payload_0             ), //i
    .filtered_data_valid        (fir_x_filtered_data_valid      ), //o
    .filtered_data_payload_0    (fir_x_filtered_data_payload_0  ), //o
    .clc                        (clc                            ), //i
    .clk                        (clk                            ), //i
    .reset                      (reset                          )  //i
  );
  TransposeFIR_1 fir_y (
    .raw_data_valid             (fir_x_filtered_data_valid      ), //i
    .raw_data_payload_0         (_zz_raw_data_payload_0         ), //i
    .filtered_data_valid        (fir_y_filtered_data_valid      ), //o
    .filtered_data_payload_0    (fir_y_filtered_data_payload_0  ), //o
    .clc                        (clc                            ), //i
    .clk                        (clk                            ), //i
    .reset                      (reset                          )  //i
  );
  assign filtered_data_payload_0 = ($signed(_zz_filtered_data_payload_0) + $signed(fir_y_filtered_data_payload_0));
  assign filtered_data_valid = fir_x_filtered_data_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_raw_data_payload_0 <= 19'h0;
    end else begin
      _zz_raw_data_payload_0 <= filtered_data_payload_0[18:0];
      if(clc) begin
        _zz_raw_data_payload_0 <= 19'h0;
      end
    end
  end


endmodule

module TransposeFIR_1 (
  input               raw_data_valid,
  input      [18:0]   raw_data_payload_0,
  output              filtered_data_valid,
  output     [20:0]   filtered_data_payload_0,
  input               clc,
  input               clk,
  input               reset
);
  wire       [20:0]   transposeCore_7_next_adder_data;
  wire       [20:0]   transposeCore_8_next_adder_data;
  wire       [20:0]   transposeCore_9_next_adder_data;
  reg        [1:0]    coff_mem_0;
  reg        [1:0]    coff_mem_1;
  reg        [1:0]    coff_mem_2;
  wire                filtered_data_valid_vec_0;

  TransposeCore_4 transposeCore_7 (
    .input_data         (raw_data_payload_0               ), //i
    .coff_data          (coff_mem_0                       ), //i
    .adder_data         (21'h0                            ), //i
    .valid              (raw_data_valid                   ), //i
    .clc                (clc                              ), //i
    .next_adder_data    (transposeCore_7_next_adder_data  ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  TransposeCore_4 transposeCore_8 (
    .input_data         (raw_data_payload_0               ), //i
    .coff_data          (coff_mem_1                       ), //i
    .adder_data         (transposeCore_7_next_adder_data  ), //i
    .valid              (raw_data_valid                   ), //i
    .clc                (clc                              ), //i
    .next_adder_data    (transposeCore_8_next_adder_data  ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  TransposeCore_4 transposeCore_9 (
    .input_data         (raw_data_payload_0               ), //i
    .coff_data          (coff_mem_2                       ), //i
    .adder_data         (transposeCore_8_next_adder_data  ), //i
    .valid              (raw_data_valid                   ), //i
    .clc                (clc                              ), //i
    .next_adder_data    (transposeCore_9_next_adder_data  ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  assign filtered_data_payload_0 = transposeCore_9_next_adder_data;
  assign filtered_data_valid_vec_0 = raw_data_valid;
  assign filtered_data_valid = filtered_data_valid_vec_0;
  always @(posedge clk) begin
    coff_mem_0 <= 2'b11;
    coff_mem_1 <= 2'b00;
    coff_mem_2 <= 2'b01;
  end


endmodule

module TransposeFIR (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload_0,
  output              filtered_data_valid,
  output     [18:0]   filtered_data_payload_0,
  input               clc,
  input               clk,
  input               reset
);
  wire       [18:0]   transposeCore_7_next_adder_data;
  wire       [18:0]   transposeCore_8_next_adder_data;
  wire       [18:0]   transposeCore_9_next_adder_data;
  wire       [18:0]   transposeCore_10_next_adder_data;
  reg        [2:0]    coff_mem_0;
  reg        [2:0]    coff_mem_1;
  reg        [2:0]    coff_mem_2;
  reg        [2:0]    coff_mem_3;
  wire                filtered_data_valid_vec_0;

  TransposeCore transposeCore_7 (
    .input_data         (raw_data_payload_0               ), //i
    .coff_data          (coff_mem_0                       ), //i
    .adder_data         (19'h0                            ), //i
    .valid              (raw_data_valid                   ), //i
    .clc                (clc                              ), //i
    .next_adder_data    (transposeCore_7_next_adder_data  ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  TransposeCore transposeCore_8 (
    .input_data         (raw_data_payload_0               ), //i
    .coff_data          (coff_mem_1                       ), //i
    .adder_data         (transposeCore_7_next_adder_data  ), //i
    .valid              (raw_data_valid                   ), //i
    .clc                (clc                              ), //i
    .next_adder_data    (transposeCore_8_next_adder_data  ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  TransposeCore transposeCore_9 (
    .input_data         (raw_data_payload_0               ), //i
    .coff_data          (coff_mem_2                       ), //i
    .adder_data         (transposeCore_8_next_adder_data  ), //i
    .valid              (raw_data_valid                   ), //i
    .clc                (clc                              ), //i
    .next_adder_data    (transposeCore_9_next_adder_data  ), //o
    .clk                (clk                              ), //i
    .reset              (reset                            )  //i
  );
  TransposeCore transposeCore_10 (
    .input_data         (raw_data_payload_0                ), //i
    .coff_data          (coff_mem_3                        ), //i
    .adder_data         (transposeCore_9_next_adder_data   ), //i
    .valid              (raw_data_valid                    ), //i
    .clc                (clc                               ), //i
    .next_adder_data    (transposeCore_10_next_adder_data  ), //o
    .clk                (clk                               ), //i
    .reset              (reset                             )  //i
  );
  assign filtered_data_payload_0 = transposeCore_10_next_adder_data;
  assign filtered_data_valid_vec_0 = raw_data_valid;
  assign filtered_data_valid = filtered_data_valid_vec_0;
  always @(posedge clk) begin
    coff_mem_0 <= 3'b011;
    coff_mem_1 <= 3'b010;
    coff_mem_2 <= 3'b010;
    coff_mem_3 <= 3'b011;
  end


endmodule

//TransposeCore_4 replaced by TransposeCore_4

//TransposeCore_4 replaced by TransposeCore_4

module TransposeCore_4 (
  input      [18:0]   input_data,
  input      [1:0]    coff_data,
  input      [20:0]   adder_data,
  input               valid,
  input               clc,
  output     [20:0]   next_adder_data,
  input               clk,
  input               reset
);
  wire       [20:0]   _zz_next_adder_data;
  reg        [20:0]   previous_adder_data;

  assign _zz_next_adder_data = ($signed(input_data) * $signed(coff_data));
  assign next_adder_data = ($signed(_zz_next_adder_data) + $signed(previous_adder_data));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      previous_adder_data <= 21'h0;
    end else begin
      if(clc) begin
        previous_adder_data <= 21'h0;
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

module TransposeCore (
  input      [15:0]   input_data,
  input      [2:0]    coff_data,
  input      [18:0]   adder_data,
  input               valid,
  input               clc,
  output     [18:0]   next_adder_data,
  input               clk,
  input               reset
);
  wire       [18:0]   _zz_next_adder_data;
  reg        [18:0]   previous_adder_data;

  assign _zz_next_adder_data = ($signed(input_data) * $signed(coff_data));
  assign next_adder_data = ($signed(_zz_next_adder_data) + $signed(previous_adder_data));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
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
