// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : StreamPayloadUnite
// Git hash  : 8096539601639817b14f806164427f8ddd4d6b02



module StreamPayloadUnite (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [7:0]    raw_data_payload,
  output              unite_data_valid,
  input               unite_data_ready,
  output     [31:0]   unite_data_payload,
  input               clk,
  input               reset
);
  wire       [39:0]   _zz_data_buf;
  reg        [2:0]    cnt;
  reg        [31:0]   data_buf;
  wire                raw_data_fire;
  wire                unite_data_fire;

  assign _zz_data_buf = {raw_data_payload,data_buf};
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign unite_data_fire = (unite_data_valid && unite_data_ready);
  assign raw_data_ready = (cnt != 3'b000);
  assign unite_data_valid = (cnt == 3'b000);
  assign unite_data_payload = data_buf;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 3'b100;
    end else begin
      if(raw_data_fire) begin
        cnt <= (cnt - 3'b001);
      end else begin
        if(unite_data_fire) begin
          cnt <= 3'b100;
        end
      end
    end
  end

  always @(posedge clk) begin
    if(raw_data_fire) begin
      data_buf <= _zz_data_buf[39 : 8];
    end
  end


endmodule
