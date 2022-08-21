// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : StreamFifoCC
// Git hash  : 33a01c0dbb52841aede0155180674064564d3d7a

`timescale 1ns/1ps

module StreamFifoCC (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload,
  output     [5:0]    io_pushOccupancy,
  output     [5:0]    io_popOccupancy,
  input               clkA_clk,
  input               clkA_reset,
  input               clkB_clk
);

  reg        [31:0]   _zz_ram_port1;
  wire       [5:0]    popToPushGray_buffercc_io_dataOut;
  wire                bufferCC_3_io_dataOut;
  wire       [5:0]    pushToPopGray_buffercc_io_dataOut;
  wire       [5:0]    _zz_pushCC_pushPtrGray;
  wire       [4:0]    _zz_ram_port;
  wire       [5:0]    _zz_popCC_popPtrGray;
  wire       [4:0]    _zz_ram_port_1;
  wire                _zz_ram_port_2;
  wire       [4:0]    _zz_io_pop_payload_1;
  wire                _zz_io_pop_payload_2;
  reg                 _zz_1;
  wire       [5:0]    popToPushGray;
  wire       [5:0]    pushToPopGray;
  reg        [5:0]    pushCC_pushPtr;
  wire       [5:0]    pushCC_pushPtrPlus;
  wire                io_push_fire;
  reg        [5:0]    pushCC_pushPtrGray;
  wire       [5:0]    pushCC_popPtrGray;
  wire                pushCC_full;
  wire                io_push_fire_1;
  wire                _zz_io_pushOccupancy;
  wire                _zz_io_pushOccupancy_1;
  wire                _zz_io_pushOccupancy_2;
  wire                _zz_io_pushOccupancy_3;
  wire                _zz_io_pushOccupancy_4;
  wire                clkA_reset_syncronized;
  reg        [5:0]    popCC_popPtr;
  wire       [5:0]    popCC_popPtrPlus;
  wire                io_pop_fire;
  reg        [5:0]    popCC_popPtrGray;
  wire       [5:0]    popCC_pushPtrGray;
  wire                popCC_empty;
  wire                io_pop_fire_1;
  wire       [5:0]    _zz_io_pop_payload;
  wire                io_pop_fire_2;
  wire                _zz_io_popOccupancy;
  wire                _zz_io_popOccupancy_1;
  wire                _zz_io_popOccupancy_2;
  wire                _zz_io_popOccupancy_3;
  wire                _zz_io_popOccupancy_4;
  reg [31:0] ram [0:31];

  assign _zz_pushCC_pushPtrGray = (pushCC_pushPtrPlus >>> 1'b1);
  assign _zz_ram_port = pushCC_pushPtr[4:0];
  assign _zz_popCC_popPtrGray = (popCC_popPtrPlus >>> 1'b1);
  assign _zz_io_pop_payload_1 = _zz_io_pop_payload[4:0];
  assign _zz_io_pop_payload_2 = 1'b1;
  always @(posedge clkA_clk) begin
    if(_zz_1) begin
      ram[_zz_ram_port] <= io_push_payload;
    end
  end

  always @(posedge clkB_clk) begin
    if(_zz_io_pop_payload_2) begin
      _zz_ram_port1 <= ram[_zz_io_pop_payload_1];
    end
  end

  BufferCC popToPushGray_buffercc (
    .io_dataIn  (popToPushGray[5:0]                    ), //i
    .io_dataOut (popToPushGray_buffercc_io_dataOut[5:0]), //o
    .clkA_clk   (clkA_clk                              ), //i
    .clkA_reset (clkA_reset                            )  //i
  );
  BufferCC_1 bufferCC_3 (
    .io_dataIn  (1'b0                 ), //i
    .io_dataOut (bufferCC_3_io_dataOut), //o
    .clkB_clk   (clkB_clk             ), //i
    .clkA_reset (clkA_reset           )  //i
  );
  BufferCC_2 pushToPopGray_buffercc (
    .io_dataIn              (pushToPopGray[5:0]                    ), //i
    .io_dataOut             (pushToPopGray_buffercc_io_dataOut[5:0]), //o
    .clkB_clk               (clkB_clk                              ), //i
    .clkA_reset_syncronized (clkA_reset_syncronized                )  //i
  );
  always @(*) begin
    _zz_1 = 1'b0;
    if(io_push_fire_1) begin
      _zz_1 = 1'b1;
    end
  end

  assign pushCC_pushPtrPlus = (pushCC_pushPtr + 6'h01);
  assign io_push_fire = (io_push_valid && io_push_ready);
  assign pushCC_popPtrGray = popToPushGray_buffercc_io_dataOut;
  assign pushCC_full = ((pushCC_pushPtrGray[5 : 4] == (~ pushCC_popPtrGray[5 : 4])) && (pushCC_pushPtrGray[3 : 0] == pushCC_popPtrGray[3 : 0]));
  assign io_push_ready = (! pushCC_full);
  assign io_push_fire_1 = (io_push_valid && io_push_ready);
  assign _zz_io_pushOccupancy = (pushCC_popPtrGray[1] ^ _zz_io_pushOccupancy_1);
  assign _zz_io_pushOccupancy_1 = (pushCC_popPtrGray[2] ^ _zz_io_pushOccupancy_2);
  assign _zz_io_pushOccupancy_2 = (pushCC_popPtrGray[3] ^ _zz_io_pushOccupancy_3);
  assign _zz_io_pushOccupancy_3 = (pushCC_popPtrGray[4] ^ _zz_io_pushOccupancy_4);
  assign _zz_io_pushOccupancy_4 = pushCC_popPtrGray[5];
  assign io_pushOccupancy = (pushCC_pushPtr - {_zz_io_pushOccupancy_4,{_zz_io_pushOccupancy_3,{_zz_io_pushOccupancy_2,{_zz_io_pushOccupancy_1,{_zz_io_pushOccupancy,(pushCC_popPtrGray[0] ^ _zz_io_pushOccupancy)}}}}});
  assign clkA_reset_syncronized = bufferCC_3_io_dataOut;
  assign popCC_popPtrPlus = (popCC_popPtr + 6'h01);
  assign io_pop_fire = (io_pop_valid && io_pop_ready);
  assign popCC_pushPtrGray = pushToPopGray_buffercc_io_dataOut;
  assign popCC_empty = (popCC_popPtrGray == popCC_pushPtrGray);
  assign io_pop_valid = (! popCC_empty);
  assign io_pop_fire_1 = (io_pop_valid && io_pop_ready);
  assign _zz_io_pop_payload = (io_pop_fire_1 ? popCC_popPtrPlus : popCC_popPtr);
  assign io_pop_payload = _zz_ram_port1;
  assign io_pop_fire_2 = (io_pop_valid && io_pop_ready);
  assign _zz_io_popOccupancy = (popCC_pushPtrGray[1] ^ _zz_io_popOccupancy_1);
  assign _zz_io_popOccupancy_1 = (popCC_pushPtrGray[2] ^ _zz_io_popOccupancy_2);
  assign _zz_io_popOccupancy_2 = (popCC_pushPtrGray[3] ^ _zz_io_popOccupancy_3);
  assign _zz_io_popOccupancy_3 = (popCC_pushPtrGray[4] ^ _zz_io_popOccupancy_4);
  assign _zz_io_popOccupancy_4 = popCC_pushPtrGray[5];
  assign io_popOccupancy = ({_zz_io_popOccupancy_4,{_zz_io_popOccupancy_3,{_zz_io_popOccupancy_2,{_zz_io_popOccupancy_1,{_zz_io_popOccupancy,(popCC_pushPtrGray[0] ^ _zz_io_popOccupancy)}}}}} - popCC_popPtr);
  assign pushToPopGray = pushCC_pushPtrGray;
  assign popToPushGray = popCC_popPtrGray;
  always @(posedge clkA_clk or posedge clkA_reset) begin
    if(clkA_reset) begin
      pushCC_pushPtr <= 6'h0;
      pushCC_pushPtrGray <= 6'h0;
    end else begin
      if(io_push_fire) begin
        pushCC_pushPtrGray <= (_zz_pushCC_pushPtrGray ^ pushCC_pushPtrPlus);
      end
      if(io_push_fire_1) begin
        pushCC_pushPtr <= pushCC_pushPtrPlus;
      end
    end
  end

  always @(posedge clkB_clk or posedge clkA_reset_syncronized) begin
    if(clkA_reset_syncronized) begin
      popCC_popPtr <= 6'h0;
      popCC_popPtrGray <= 6'h0;
    end else begin
      if(io_pop_fire) begin
        popCC_popPtrGray <= (_zz_popCC_popPtrGray ^ popCC_popPtrPlus);
      end
      if(io_pop_fire_2) begin
        popCC_popPtr <= popCC_popPtrPlus;
      end
    end
  end


endmodule

module BufferCC_2 (
  input      [5:0]    io_dataIn,
  output     [5:0]    io_dataOut,
  input               clkB_clk,
  input               clkA_reset_syncronized
);

  (* async_reg = "true" *) reg        [5:0]    buffers_0;
  (* async_reg = "true" *) reg        [5:0]    buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clkB_clk or posedge clkA_reset_syncronized) begin
    if(clkA_reset_syncronized) begin
      buffers_0 <= 6'h0;
      buffers_1 <= 6'h0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC_1 (
  input               io_dataIn,
  output              io_dataOut,
  input               clkB_clk,
  input               clkA_reset
);

  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clkB_clk or posedge clkA_reset) begin
    if(clkA_reset) begin
      buffers_0 <= 1'b1;
      buffers_1 <= 1'b1;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule

module BufferCC (
  input      [5:0]    io_dataIn,
  output     [5:0]    io_dataOut,
  input               clkA_clk,
  input               clkA_reset
);

  (* async_reg = "true" *) reg        [5:0]    buffers_0;
  (* async_reg = "true" *) reg        [5:0]    buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clkA_clk or posedge clkA_reset) begin
    if(clkA_reset) begin
      buffers_0 <= 6'h0;
      buffers_1 <= 6'h0;
    end else begin
      buffers_0 <= io_dataIn;
      buffers_1 <= buffers_0;
    end
  end


endmodule
