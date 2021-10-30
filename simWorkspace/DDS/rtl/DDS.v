// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : DDS
// Git hash  : 8ea3836c6991c66e54ff283e1ce84688f7fe9417



module DDS (
  output              data_valid,
  output     [15:0]   data_payload,
  output              phase_valid,
  output     [9:0]    phase_payload,
  input               channel_en,
  input               sync_en,
  input      [9:0]    phase_limit,
  input      [9:0]    phase_offset,
  input      [9:0]    phase_inc,
  input               clk,
  input               reset
);
  reg        [15:0]   _zz_mem_port0;
  wire       [9:0]    _zz_phase_cursor;
  wire                _zz_mem_port;
  wire                _zz_data_payload;
  wire                module_en;
  reg        [9:0]    phase_cursor;
  wire                when_DDS_l53;
  reg                 valid_o_buf;
  reg        [9:0]    _zz_phase_payload;
  (* ram_style = "block" *) reg [15:0] mem [0:1023];

  assign _zz_phase_cursor = (phase_cursor + phase_inc);
  assign _zz_data_payload = 1'b1;
  initial begin
    $readmemb("DDS.v_toplevel_mem.bin",mem);
  end
  always @(posedge clk) begin
    if(_zz_data_payload) begin
      _zz_mem_port0 <= mem[phase_cursor];
    end
  end

  assign module_en = (sync_en && channel_en);
  assign when_DDS_l53 = (phase_limit <= phase_cursor);
  assign data_payload = _zz_mem_port0;
  assign data_valid = valid_o_buf;
  assign phase_valid = valid_o_buf;
  assign phase_payload = _zz_phase_payload;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      phase_cursor <= 10'h0;
      valid_o_buf <= 1'b0;
      _zz_phase_payload <= 10'h0;
    end else begin
      if(module_en) begin
        if(when_DDS_l53) begin
          phase_cursor <= 10'h0;
        end else begin
          phase_cursor <= (_zz_phase_cursor + phase_offset);
        end
      end
      if(module_en) begin
        _zz_phase_payload <= phase_cursor;
      end
      if(module_en) begin
        valid_o_buf <= 1'b1;
      end else begin
        valid_o_buf <= 1'b0;
      end
    end
  end


endmodule
