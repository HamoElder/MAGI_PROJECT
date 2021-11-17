// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : StreamPkgGen
// Git hash  : 0b3d102b123e19b8186911f4a98533f63c818f48



module StreamPkgGen (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [31:0]   raw_data_payload_data,
  input      [3:0]    raw_data_payload_strb,
  output              pkg_data_valid,
  input               pkg_data_ready,
  output     [7:0]    pkg_data_payload,
  input               clk,
  input               reset
);
  wire                split_core_raw_data_ready;
  wire                split_core_split_data_valid;
  wire       [7:0]    split_core_split_data_payload;
  reg        [3:0]    strb_buf;
  wire                bit_valid;
  wire                raw_data_fire;
  wire                split_core_split_data_fire;

  StreamPayloadSplit split_core (
    .raw_data_valid        (raw_data_valid                 ), //i
    .raw_data_ready        (split_core_raw_data_ready      ), //o
    .raw_data_payload      (raw_data_payload_data          ), //i
    .split_data_valid      (split_core_split_data_valid    ), //o
    .split_data_ready      (pkg_data_ready                 ), //i
    .split_data_payload    (split_core_split_data_payload  ), //o
    .clk                   (clk                            ), //i
    .reset                 (reset                          )  //i
  );
  assign bit_valid = strb_buf[0];
  assign raw_data_ready = split_core_raw_data_ready;
  assign pkg_data_valid = (split_core_split_data_valid && bit_valid);
  assign pkg_data_payload = split_core_split_data_payload;
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign split_core_split_data_fire = (split_core_split_data_valid && pkg_data_ready);
  always @(posedge clk) begin
    if(raw_data_fire) begin
      strb_buf <= raw_data_payload_strb;
    end else begin
      if(split_core_split_data_fire) begin
        strb_buf <= (strb_buf >>> 1);
      end
    end
  end


endmodule

module StreamPayloadSplit (
  input               raw_data_valid,
  output              raw_data_ready,
  input      [31:0]   raw_data_payload,
  output              split_data_valid,
  input               split_data_ready,
  output     [7:0]    split_data_payload,
  input               clk,
  input               reset
);
  reg        [2:0]    cnt;
  reg        [31:0]   data_buf;
  wire                raw_data_fire;
  wire                split_data_fire;

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign split_data_fire = (split_data_valid && split_data_ready);
  assign raw_data_ready = (cnt == 3'b000);
  assign split_data_valid = (cnt != 3'b000);
  assign split_data_payload = data_buf[7:0];
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      cnt <= 3'b000;
    end else begin
      if(raw_data_fire) begin
        cnt <= 3'b100;
      end else begin
        if(split_data_fire) begin
          cnt <= (cnt - 3'b001);
        end
      end
    end
  end

  always @(posedge clk) begin
    if(raw_data_fire) begin
      data_buf <= raw_data_payload;
    end else begin
      if(split_data_fire) begin
        data_buf <= (data_buf >>> 8);
      end
    end
  end


endmodule
