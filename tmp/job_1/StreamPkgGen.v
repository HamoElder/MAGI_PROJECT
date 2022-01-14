// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : StreamPkgGen
// Git hash  : c01c821a2fd6d83111571270407d38ebecc6ff05



module StreamPkgGen (
  input      [11:0]   slices_limit,
  output     [11:0]   slices_cnt,
  input               raw_data_stream_valid,
  output              raw_data_stream_ready,
  input               raw_data_stream_payload_last,
  input      [31:0]   raw_data_stream_payload_fragment_data,
  input      [3:0]    raw_data_stream_payload_fragment_strb,
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
  wire       [11:0]   _zz_pkg_slices_cnt_1;
  reg        [3:0]    strb_buf;
  reg        [11:0]   pkg_slices_cnt;
  wire                bit_valid;
  wire                raw_data_stream_fire;
  wire                split_core_split_data_fire;

  assign _zz_pkg_data_payload_last = (slices_limit - 12'h001);
  assign _zz_pkg_slices_cnt = (slices_limit - 12'h001);
  assign _zz_pkg_slices_cnt_1 = (pkg_slices_cnt + 12'h001);
  StreamPayloadSplit split_core (
    .raw_data_valid        (raw_data_stream_valid                  ), //i
    .raw_data_ready        (split_core_raw_data_ready              ), //o
    .raw_data_payload      (raw_data_stream_payload_fragment_data  ), //i
    .split_data_valid      (split_core_split_data_valid            ), //o
    .split_data_ready      (pkg_data_ready                         ), //i
    .split_data_payload    (split_core_split_data_payload          ), //o
    .clk                   (clk                                    ), //i
    .reset                 (reset                                  )  //i
  );
  assign bit_valid = strb_buf[0];
  assign raw_data_stream_ready = split_core_raw_data_ready;
  assign pkg_data_valid = (split_core_split_data_valid && bit_valid);
  assign pkg_data_payload_fragment = split_core_split_data_payload;
  assign pkg_data_payload_last = (pkg_slices_cnt == _zz_pkg_data_payload_last);
  assign raw_data_stream_fire = (raw_data_stream_valid && raw_data_stream_ready);
  assign split_core_split_data_fire = (split_core_split_data_valid && pkg_data_ready);
  assign slices_cnt = pkg_slices_cnt;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      pkg_slices_cnt <= 12'h0;
    end else begin
      if(!raw_data_stream_fire) begin
        if(split_core_split_data_fire) begin
          pkg_slices_cnt <= ((pkg_slices_cnt == _zz_pkg_slices_cnt) ? 12'h0 : _zz_pkg_slices_cnt_1);
        end
      end
    end
  end

  always @(posedge clk) begin
    if(raw_data_stream_fire) begin
      strb_buf <= raw_data_stream_payload_fragment_strb;
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
