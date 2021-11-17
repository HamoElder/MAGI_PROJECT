// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : StreamPkgGen
// Git hash  : 2ce930f6910cd2adedf6f3cae0cb3061d3a3ed6a



module StreamPkgGen (
  input      [12:0]   slices_limit,
  input               raw_data_valid,
  output              raw_data_ready,
  input      [31:0]   raw_data_payload_data,
  input      [3:0]    raw_data_payload_strb,
  output              pkg_data_valid,
  input               pkg_data_ready,
  output              pkg_data_payload_last,
  output     [7:0]    pkg_data_payload_fragment,
  input               clk,
  input               resetn
);
  wire                split_core_raw_data_ready;
  wire                split_core_split_data_valid;
  wire       [7:0]    split_core_split_data_payload;
  wire       [12:0]   _zz_pkg_slices_cnt;
  reg        [3:0]    strb_buf;
  reg        [12:0]   pkg_slices_cnt;
  wire                bit_valid;
  wire                raw_data_fire;
  wire                split_core_split_data_fire;

  assign _zz_pkg_slices_cnt = (pkg_slices_cnt + 13'h0001);
  StreamPayloadSplit split_core (
    .raw_data_valid        (raw_data_valid                 ), //i
    .raw_data_ready        (split_core_raw_data_ready      ), //o
    .raw_data_payload      (raw_data_payload_data          ), //i
    .split_data_valid      (split_core_split_data_valid    ), //o
    .split_data_ready      (pkg_data_ready                 ), //i
    .split_data_payload    (split_core_split_data_payload  ), //o
    .clk                   (clk                            ), //i
    .resetn                (resetn                         )  //i
  );
  assign bit_valid = strb_buf[0];
  assign raw_data_ready = split_core_raw_data_ready;
  assign pkg_data_valid = (split_core_split_data_valid && bit_valid);
  assign pkg_data_payload_fragment = split_core_split_data_payload;
  assign pkg_data_payload_last = (pkg_slices_cnt == slices_limit);
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign split_core_split_data_fire = (split_core_split_data_valid && pkg_data_ready);
  always @(posedge clk) begin
    if(!resetn) begin
      pkg_slices_cnt <= 13'h0;
    end else begin
      if(!raw_data_fire) begin
        if(split_core_split_data_fire) begin
          pkg_slices_cnt <= ((pkg_slices_cnt == slices_limit) ? 13'h0 : _zz_pkg_slices_cnt);
        end
      end
    end
  end

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
  input               resetn
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
  always @(posedge clk) begin
    if(!resetn) begin
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
