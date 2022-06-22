// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : DisplayVgaCtrl
// Git hash  : 389c110c98f9bcfa9432a74947228646d7720e23

`timescale 1ns/1ps

module DisplayVgaCtrl (
  output              frameStart,
  input               pixels_valid,
  output              pixels_ready,
  input      [7:0]    pixels_payload_r,
  input      [7:0]    pixels_payload_g,
  input      [7:0]    pixels_payload_b,
  output              vga_vSync,
  output              vga_hSync,
  output              vga_colorEn,
  output     [7:0]    vga_color_r,
  output     [7:0]    vga_color_g,
  output     [7:0]    vga_color_b,
  input               clk,
  input               reset
);

  wire                ctrl_frameStart;
  wire                ctrl_pixels_ready;
  wire                ctrl_vga_vSync;
  wire                ctrl_vga_hSync;
  wire                ctrl_vga_colorEn;
  wire       [7:0]    ctrl_vga_color_r;
  wire       [7:0]    ctrl_vga_color_g;
  wire       [7:0]    ctrl_vga_color_b;

  VgaCtrl ctrl (
    .softReset            (1'b0                 ), //i
    .timings_h_syncStart  (12'h02b              ), //i
    .timings_h_syncEnd    (12'h897              ), //i
    .timings_h_colorStart (12'h0bf              ), //i
    .timings_h_colorEnd   (12'h83f              ), //i
    .timings_h_polarity   (1'b1                 ), //i
    .timings_v_syncStart  (12'h004              ), //i
    .timings_v_syncEnd    (12'h464              ), //i
    .timings_v_colorStart (12'h028              ), //i
    .timings_v_colorEnd   (12'h460              ), //i
    .timings_v_polarity   (1'b1                 ), //i
    .frameStart           (ctrl_frameStart      ), //o
    .pixels_valid         (pixels_valid         ), //i
    .pixels_ready         (ctrl_pixels_ready    ), //o
    .pixels_payload_r     (pixels_payload_r[7:0]), //i
    .pixels_payload_g     (pixels_payload_g[7:0]), //i
    .pixels_payload_b     (pixels_payload_b[7:0]), //i
    .vga_vSync            (ctrl_vga_vSync       ), //o
    .vga_hSync            (ctrl_vga_hSync       ), //o
    .vga_colorEn          (ctrl_vga_colorEn     ), //o
    .vga_color_r          (ctrl_vga_color_r[7:0]), //o
    .vga_color_g          (ctrl_vga_color_g[7:0]), //o
    .vga_color_b          (ctrl_vga_color_b[7:0]), //o
    .clk                  (clk                  ), //i
    .reset                (reset                )  //i
  );
  assign pixels_ready = ctrl_pixels_ready;
  assign frameStart = ctrl_frameStart;
  assign vga_vSync = ctrl_vga_vSync;
  assign vga_hSync = ctrl_vga_hSync;
  assign vga_colorEn = ctrl_vga_colorEn;
  assign vga_color_r = ctrl_vga_color_r;
  assign vga_color_g = ctrl_vga_color_g;
  assign vga_color_b = ctrl_vga_color_b;

endmodule

module VgaCtrl (
  input               softReset,
  input      [11:0]   timings_h_syncStart,
  input      [11:0]   timings_h_syncEnd,
  input      [11:0]   timings_h_colorStart,
  input      [11:0]   timings_h_colorEnd,
  input               timings_h_polarity,
  input      [11:0]   timings_v_syncStart,
  input      [11:0]   timings_v_syncEnd,
  input      [11:0]   timings_v_colorStart,
  input      [11:0]   timings_v_colorEnd,
  input               timings_v_polarity,
  output              frameStart,
  input               pixels_valid,
  output              pixels_ready,
  input      [7:0]    pixels_payload_r,
  input      [7:0]    pixels_payload_g,
  input      [7:0]    pixels_payload_b,
  output              vga_vSync,
  output              vga_hSync,
  output              vga_colorEn,
  output     [7:0]    vga_color_r,
  output     [7:0]    vga_color_g,
  output     [7:0]    vga_color_b,
  input               clk,
  input               reset
);

  wire                pixel_fifo_io_push_ready;
  wire                pixel_fifo_io_pop_valid;
  wire       [7:0]    pixel_fifo_io_pop_payload_r;
  wire       [7:0]    pixel_fifo_io_pop_payload_g;
  wire       [7:0]    pixel_fifo_io_pop_payload_b;
  wire       [6:0]    pixel_fifo_io_occupancy;
  wire       [6:0]    pixel_fifo_io_availability;
  wire       [11:0]   _zz_h_counter;
  wire       [11:0]   _zz_v_counter;
  wire                softReset_1;
  wire                when_VgaCtrl_l17;
  reg        [11:0]   h_counter;
  wire                h_syncStart;
  wire                h_syncEnd;
  wire                h_colorStart;
  wire                h_colorEnd;
  reg                 h_sync;
  reg                 h_colorEn;
  reg        [11:0]   v_counter;
  wire                v_syncStart;
  wire                v_syncEnd;
  wire                v_colorStart;
  wire                v_colorEnd;
  reg                 v_sync;
  reg                 v_colorEn;
  wire                colorEn;

  assign _zz_h_counter = (h_counter + 12'h001);
  assign _zz_v_counter = (v_counter + 12'h001);
  StreamFifo pixel_fifo (
    .io_push_valid     (pixels_valid                    ), //i
    .io_push_ready     (pixel_fifo_io_push_ready        ), //o
    .io_push_payload_r (pixels_payload_r[7:0]           ), //i
    .io_push_payload_g (pixels_payload_g[7:0]           ), //i
    .io_push_payload_b (pixels_payload_b[7:0]           ), //i
    .io_pop_valid      (pixel_fifo_io_pop_valid         ), //o
    .io_pop_ready      (colorEn                         ), //i
    .io_pop_payload_r  (pixel_fifo_io_pop_payload_r[7:0]), //o
    .io_pop_payload_g  (pixel_fifo_io_pop_payload_g[7:0]), //o
    .io_pop_payload_b  (pixel_fifo_io_pop_payload_b[7:0]), //o
    .io_flush          (1'b0                            ), //i
    .io_occupancy      (pixel_fifo_io_occupancy[6:0]    ), //o
    .io_availability   (pixel_fifo_io_availability[6:0] ), //o
    .clk               (clk                             ), //i
    .reset             (reset                           )  //i
  );
  assign softReset_1 = 1'b0;
  assign pixels_ready = pixel_fifo_io_push_ready;
  assign when_VgaCtrl_l17 = 1'b1;
  assign h_syncStart = (h_counter == timings_h_syncStart);
  assign h_syncEnd = (h_counter == timings_h_syncEnd);
  assign h_colorStart = (h_counter == timings_h_colorStart);
  assign h_colorEnd = (h_counter == timings_h_colorEnd);
  assign v_syncStart = (v_counter == timings_v_syncStart);
  assign v_syncEnd = (v_counter == timings_v_syncEnd);
  assign v_colorStart = (v_counter == timings_v_colorStart);
  assign v_colorEnd = (v_counter == timings_v_colorEnd);
  assign colorEn = (h_colorEn && v_colorEn);
  assign frameStart = (v_syncStart && h_syncStart);
  assign vga_hSync = (h_sync ^ timings_h_polarity);
  assign vga_vSync = (v_sync ^ timings_v_polarity);
  assign vga_colorEn = colorEn;
  assign vga_color_r = pixel_fifo_io_pop_payload_r;
  assign vga_color_g = pixel_fifo_io_pop_payload_g;
  assign vga_color_b = pixel_fifo_io_pop_payload_b;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      h_counter <= 12'h0;
      h_sync <= 1'b0;
      h_colorEn <= 1'b0;
      v_counter <= 12'h0;
      v_sync <= 1'b0;
      v_colorEn <= 1'b0;
    end else begin
      if(when_VgaCtrl_l17) begin
        h_counter <= (h_syncEnd ? 12'h0 : _zz_h_counter);
      end
      if(h_syncStart) begin
        h_sync <= 1'b1;
      end
      if(h_syncEnd) begin
        h_sync <= 1'b0;
      end
      if(h_colorStart) begin
        h_colorEn <= 1'b1;
      end
      if(h_colorEnd) begin
        h_colorEn <= 1'b0;
      end
      if(softReset) begin
        h_counter <= 12'h0;
        h_sync <= 1'b0;
        h_colorEn <= 1'b0;
      end
      if(h_syncEnd) begin
        v_counter <= (v_syncEnd ? 12'h0 : _zz_v_counter);
      end
      if(v_syncStart) begin
        v_sync <= 1'b1;
      end
      if(v_syncEnd) begin
        v_sync <= 1'b0;
      end
      if(v_colorStart) begin
        v_colorEn <= 1'b1;
      end
      if(v_colorEnd) begin
        v_colorEn <= 1'b0;
      end
      if(softReset) begin
        v_counter <= 12'h0;
        v_sync <= 1'b0;
        v_colorEn <= 1'b0;
      end
    end
  end


endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input      [7:0]    io_push_payload_r,
  input      [7:0]    io_push_payload_g,
  input      [7:0]    io_push_payload_b,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [7:0]    io_pop_payload_r,
  output     [7:0]    io_pop_payload_g,
  output     [7:0]    io_pop_payload_b,
  input               io_flush,
  output     [6:0]    io_occupancy,
  output     [6:0]    io_availability,
  input               clk,
  input               reset
);

  reg        [23:0]   _zz_logic_ram_port0;
  wire       [5:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [5:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_r;
  wire       [23:0]   _zz_logic_ram_port_1;
  wire       [5:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [5:0]    logic_pushPtr_valueNext;
  reg        [5:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [5:0]    logic_popPtr_valueNext;
  reg        [5:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [23:0]   _zz_io_pop_payload_r;
  wire                when_Stream_l1021;
  wire       [5:0]    logic_ptrDif;
  reg [23:0] logic_ram [0:63];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {5'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {5'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_r = 1'b1;
  assign _zz_logic_ram_port_1 = {io_push_payload_b,{io_push_payload_g,io_push_payload_r}};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_r) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= _zz_logic_ram_port_1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(logic_pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0;
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1;
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 6'h3f);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 6'h0;
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0;
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1;
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 6'h3f);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 6'h0;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign _zz_io_pop_payload_r = _zz_logic_ram_port0;
  assign io_pop_payload_r = _zz_io_pop_payload_r[7 : 0];
  assign io_pop_payload_g = _zz_io_pop_payload_r[15 : 8];
  assign io_pop_payload_b = _zz_io_pop_payload_r[23 : 16];
  assign when_Stream_l1021 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 6'h0;
      logic_popPtr_value <= 6'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l1021) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule
