// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : IntegratorCIC
// Git hash  : b8bc632afebda2199fd2f2f17fdc0daeea256ecc



module IntegratorCIC (
  input               raw_data_valid,
  input      [11:0]   raw_data_payload,
  output              filtered_data_valid,
  output     [20:0]   filtered_data_payload,
  input               clk,
  input               reset
);
  wire       [4:0]    _zz_internal_en;
  wire       [20:0]   _zz_internal_data_vec_0;
  reg        [11:0]   raw_data_buf;
  reg        [20:0]   internal_data_vec_0;
  reg        [20:0]   internal_data_vec_1;
  reg        [20:0]   internal_data_vec_2;
  reg        [3:0]    internal_en;
  wire                when_IntegratorCIC_l22;
  wire                when_IntegratorCIC_l27;
  wire                when_IntegratorCIC_l27_1;

  assign _zz_internal_en = {internal_en,raw_data_valid};
  assign _zz_internal_data_vec_0 = {{9{raw_data_buf[11]}}, raw_data_buf};
  assign when_IntegratorCIC_l22 = internal_en[0];
  assign when_IntegratorCIC_l27 = internal_en[1];
  assign when_IntegratorCIC_l27_1 = internal_en[2];
  assign filtered_data_valid = internal_en[3];
  assign filtered_data_payload = internal_data_vec_2;
  always @(posedge clk) begin
    raw_data_buf <= raw_data_payload;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      internal_data_vec_0 <= 21'h0;
      internal_data_vec_1 <= 21'h0;
      internal_data_vec_2 <= 21'h0;
      internal_en <= 4'b0000;
    end else begin
      internal_en <= _zz_internal_en[3:0];
      if(when_IntegratorCIC_l22) begin
        internal_data_vec_0 <= ($signed(internal_data_vec_0) + $signed(_zz_internal_data_vec_0));
      end
      if(when_IntegratorCIC_l27) begin
        internal_data_vec_1 <= ($signed(internal_data_vec_1) + $signed(internal_data_vec_0));
      end
      if(when_IntegratorCIC_l27_1) begin
        internal_data_vec_2 <= ($signed(internal_data_vec_2) + $signed(internal_data_vec_1));
      end
    end
  end


endmodule
