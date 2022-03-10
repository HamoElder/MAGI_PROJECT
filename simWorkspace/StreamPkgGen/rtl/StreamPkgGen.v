// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : StreamPkgGen
// Git hash  : b90f7fc9b0893d6f01a499c7804b365a21d113e6



module StreamPkgGen (
  input      [11:0]   slices_limit,
  output     [11:0]   slices_cnt,
  input               raw_data_tvalid,
  output              raw_data_tready,
  input      [31:0]   raw_data_tdata,
  input      [3:0]    raw_data_tstrb,
  input               raw_data_tlast,
  output              pkg_data_valid,
  input               pkg_data_ready,
  output              pkg_data_payload_last,
  output     [7:0]    pkg_data_payload_fragment,
  input               clk,
  input               reset
);
  wire                split_core_raw_data_ready;
  wire                split_core_split_data_valid;
  wire       [7:0]    split_core_split_data_payload;
  wire       [11:0]   _zz_pkg_data_payload_last;
  wire       [11:0]   _zz_pkg_slices_cnt;
  reg        [3:0]    strb_buf;
  reg        [11:0]   pkg_slices_cnt;
  wire                bit_valid;
  reg                 raw_data_last;
  wire                raw_data_stream_fire;
  wire                split_core_split_data_fire;

  assign _zz_pkg_data_payload_last = (slices_limit - 12'h001);
  assign _zz_pkg_slices_cnt = (pkg_slices_cnt + 12'h001);
  StreamPayloadSplit split_core (
    .raw_data_valid        (raw_data_tvalid                ), //i
    .raw_data_ready        (split_core_raw_data_ready      ), //o
    .raw_data_payload      (raw_data_tdata                 ), //i
    .split_data_valid      (split_core_split_data_valid    ), //o
    .split_data_ready      (pkg_data_ready                 ), //i
    .split_data_payload    (split_core_split_data_payload  ), //o
    .clk                   (clk                            ), //i
    .reset                 (reset                          )  //i
  );
  assign bit_valid = strb_buf[0];
  assign raw_data_tready = split_core_raw_data_ready;
  assign pkg_data_valid = (split_core_split_data_valid && bit_valid);
  assign pkg_data_payload_fragment = split_core_split_data_payload;
  assign pkg_data_payload_last = ((pkg_slices_cnt == _zz_pkg_data_payload_last) || (raw_data_last && (strb_buf == 4'b0001)));
  assign raw_data_stream_fire = (raw_data_tvalid && raw_data_tready);
  assign split_core_split_data_fire = (split_core_split_data_valid && pkg_data_ready);
  assign slices_cnt = pkg_slices_cnt;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pkg_slices_cnt <= 12'h0;
      raw_data_last <= 1'b0;
    end else begin
      if(raw_data_stream_fire) begin
        raw_data_last <= raw_data_tlast;
      end else begin
        if(split_core_split_data_fire) begin
          pkg_slices_cnt <= (pkg_data_payload_last ? 12'h0 : _zz_pkg_slices_cnt);
        end
      end
    end
  end

  always @(posedge clk) begin
    if(raw_data_stream_fire) begin
      strb_buf <= raw_data_tstrb;
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
