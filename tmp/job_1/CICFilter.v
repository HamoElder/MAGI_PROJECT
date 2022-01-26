// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : CICFilter
// Git hash  : b8bc632afebda2199fd2f2f17fdc0daeea256ecc



module CICFilter (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload,
  output              filtered_data_valid,
  output     [16:0]   filtered_data_payload,
  input               clk,
  input               reset
);
  wire       [20:0]   decimator_1_in_payload;
  wire                integrator_result_data_valid;
  wire       [16:0]   integrator_result_data_payload;
  wire                decimator_1_out_valid;
  wire       [20:0]   decimator_1_out_payload;
  wire                combor_result_data_valid;
  wire       [16:0]   combor_result_data_payload;
  wire                _zz_in_valid;

  CICIntegrator integrator (
    .raw_data_valid         (raw_data_valid                  ), //i
    .raw_data_payload       (raw_data_payload                ), //i
    .result_data_valid      (integrator_result_data_valid    ), //o
    .result_data_payload    (integrator_result_data_payload  ), //o
    .clk                    (clk                             ), //i
    .reset                  (reset                           )  //i
  );
  Decimator decimator_1 (
    .in_valid       (_zz_in_valid             ), //i
    .in_payload     (decimator_1_in_payload   ), //i
    .out_valid      (decimator_1_out_valid    ), //o
    .out_payload    (decimator_1_out_payload  ), //o
    .clk            (clk                      ), //i
    .reset          (reset                    )  //i
  );
  CICComb combor (
    .raw_data_valid         (decimator_1_out_valid       ), //i
    .raw_data_payload       (decimator_1_out_payload     ), //i
    .result_data_valid      (combor_result_data_valid    ), //o
    .result_data_payload    (combor_result_data_payload  ), //o
    .clk                    (clk                         ), //i
    .reset                  (reset                       )  //i
  );
  assign _zz_in_valid = integrator_result_data_valid;
  assign decimator_1_in_payload = {{4{integrator_result_data_payload[16]}}, integrator_result_data_payload};
  assign filtered_data_valid = combor_result_data_valid;
  assign filtered_data_payload = combor_result_data_payload;

endmodule

module CICComb (
  input               raw_data_valid,
  input      [20:0]   raw_data_payload,
  output              result_data_valid,
  output     [16:0]   result_data_payload,
  input               clk,
  input               reset
);
  wire       [16:0]   internal_data_vec_0;
  wire       [16:0]   internal_data_vec_1;
  wire       [16:0]   internal_data_vec_2;
  reg        [16:0]   delay_data_vec_0;
  reg        [16:0]   delay_data_vec_1;
  reg        [16:0]   delay_data_vec_2;
  reg        [16:0]   pipe_data_vec_0;
  reg        [16:0]   pipe_data_vec_1;
  reg        [16:0]   pipe_data_vec_2;
  reg        [16:0]   result_data_payload_1;
  reg                 result_data_valid_1;

  assign internal_data_vec_0 = ($signed(pipe_data_vec_0) - $signed(delay_data_vec_0));
  assign internal_data_vec_1 = ($signed(pipe_data_vec_1) - $signed(delay_data_vec_1));
  assign internal_data_vec_2 = ($signed(pipe_data_vec_2) - $signed(delay_data_vec_2));
  assign result_data_valid = result_data_valid_1;
  assign result_data_payload = result_data_payload_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      delay_data_vec_0 <= 17'h0;
      delay_data_vec_1 <= 17'h0;
      delay_data_vec_2 <= 17'h0;
      pipe_data_vec_0 <= 17'h0;
      pipe_data_vec_1 <= 17'h0;
      pipe_data_vec_2 <= 17'h0;
      result_data_payload_1 <= 17'h0;
      result_data_valid_1 <= 1'b0;
    end else begin
      if(raw_data_valid) begin
        delay_data_vec_0 <= pipe_data_vec_0;
        pipe_data_vec_0 <= raw_data_payload[16:0];
      end
      if(raw_data_valid) begin
        delay_data_vec_1 <= pipe_data_vec_1;
        pipe_data_vec_1 <= internal_data_vec_0;
      end
      if(raw_data_valid) begin
        delay_data_vec_2 <= pipe_data_vec_2;
        pipe_data_vec_2 <= internal_data_vec_1;
      end
      if(raw_data_valid) begin
        result_data_valid_1 <= 1'b1;
        result_data_payload_1 <= internal_data_vec_2;
      end else begin
        result_data_valid_1 <= 1'b0;
      end
    end
  end


endmodule

module Decimator (
  input               in_valid,
  input      [20:0]   in_payload,
  output              out_valid,
  output     [20:0]   out_payload,
  input               clk,
  input               reset
);
  wire       [2:0]    _zz_cnt;
  reg        [2:0]    cnt;
  reg        [20:0]   out_data;
  reg                 out_valid_1;
  wire                when_Decimator_l22;

  assign _zz_cnt = (cnt + 3'b001);
  assign when_Decimator_l22 = (cnt == 3'b100);
  assign out_payload = out_data;
  assign out_valid = out_valid_1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 3'b000;
      out_valid_1 <= 1'b0;
    end else begin
      if(in_valid) begin
        cnt <= ((cnt == 3'b100) ? 3'b000 : _zz_cnt);
      end
      if(in_valid) begin
        if(when_Decimator_l22) begin
          out_valid_1 <= 1'b1;
        end else begin
          out_valid_1 <= 1'b0;
        end
      end else begin
        out_valid_1 <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(in_valid) begin
      if(when_Decimator_l22) begin
        out_data <= in_payload;
      end
    end
  end


endmodule

module CICIntegrator (
  input               raw_data_valid,
  input      [15:0]   raw_data_payload,
  output              result_data_valid,
  output     [16:0]   result_data_payload,
  input               clk,
  input               reset
);
  wire       [4:0]    _zz_internal_en;
  wire       [16:0]   _zz_internal_data_vec_0;
  reg        [15:0]   raw_data_buf;
  reg        [16:0]   internal_data_vec_0;
  reg        [16:0]   internal_data_vec_1;
  reg        [16:0]   internal_data_vec_2;
  reg        [3:0]    internal_en;
  wire                when_CICIntegrator_l22;
  wire                when_CICIntegrator_l27;
  wire                when_CICIntegrator_l27_1;

  assign _zz_internal_en = {internal_en,raw_data_valid};
  assign _zz_internal_data_vec_0 = {{1{raw_data_buf[15]}}, raw_data_buf};
  assign when_CICIntegrator_l22 = internal_en[0];
  assign when_CICIntegrator_l27 = internal_en[1];
  assign when_CICIntegrator_l27_1 = internal_en[2];
  assign result_data_valid = internal_en[3];
  assign result_data_payload = internal_data_vec_2;
  always @(posedge clk) begin
    raw_data_buf <= raw_data_payload;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      internal_data_vec_0 <= 17'h0;
      internal_data_vec_1 <= 17'h0;
      internal_data_vec_2 <= 17'h0;
      internal_en <= 4'b0000;
    end else begin
      internal_en <= _zz_internal_en[3:0];
      if(when_CICIntegrator_l22) begin
        internal_data_vec_0 <= ($signed(internal_data_vec_0) + $signed(_zz_internal_data_vec_0));
      end
      if(when_CICIntegrator_l27) begin
        internal_data_vec_1 <= ($signed(internal_data_vec_1) + $signed(internal_data_vec_0));
      end
      if(when_CICIntegrator_l27_1) begin
        internal_data_vec_2 <= ($signed(internal_data_vec_2) + $signed(internal_data_vec_1));
      end
    end
  end


endmodule
