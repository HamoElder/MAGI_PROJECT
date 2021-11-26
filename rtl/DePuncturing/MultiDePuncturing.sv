// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : MultiDePuncturing
// Git hash  : 616fad15fe5ffca6ff3029d1c4ff1ae83e7f5242



module MultiDePuncturing (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output              de_punched_data_valid,
  input               de_punched_data_ready,
  output              de_punched_data_payload_last,
  output     [1:0]    de_punched_data_payload_fragment_data,
  output     [1:0]    de_punched_data_payload_fragment_indicate,
  input      [0:0]    sel,
  input               clk,
  input               resetn
);
  wire       [11:0]   dePuncturing_3_raw_data_payload_fragment;
  wire                streamDemux_1_io_input_ready;
  wire                streamDemux_1_io_outputs_0_valid;
  wire                streamDemux_1_io_outputs_0_payload_last;
  wire       [15:0]   streamDemux_1_io_outputs_0_payload_fragment;
  wire                streamDemux_1_io_outputs_1_valid;
  wire                streamDemux_1_io_outputs_1_payload_last;
  wire       [15:0]   streamDemux_1_io_outputs_1_payload_fragment;
  wire                dePuncturing_2_raw_data_ready;
  wire                dePuncturing_2_de_punched_data_valid;
  wire                dePuncturing_2_de_punched_data_payload_last;
  wire       [1:0]    dePuncturing_2_de_punched_data_payload_fragment_data;
  wire       [1:0]    dePuncturing_2_de_punched_data_payload_fragment_indicate;
  wire                dePuncturing_3_raw_data_ready;
  wire                dePuncturing_3_de_punched_data_valid;
  wire                dePuncturing_3_de_punched_data_payload_last;
  wire       [1:0]    dePuncturing_3_de_punched_data_payload_fragment_data;
  wire       [1:0]    dePuncturing_3_de_punched_data_payload_fragment_indicate;
  wire                streamMux_1_io_inputs_0_ready;
  wire                streamMux_1_io_inputs_1_ready;
  wire                streamMux_1_io_output_valid;
  wire                streamMux_1_io_output_payload_last;
  wire       [1:0]    streamMux_1_io_output_payload_fragment_data;
  wire       [1:0]    streamMux_1_io_output_payload_fragment_indicate;

  StreamDemux streamDemux_1 (
    .io_select                        (sel                                          ), //i
    .io_input_valid                   (raw_data_valid                               ), //i
    .io_input_ready                   (streamDemux_1_io_input_ready                 ), //o
    .io_input_payload_last            (raw_data_payload_last                        ), //i
    .io_input_payload_fragment        (raw_data_payload_fragment                    ), //i
    .io_outputs_0_valid               (streamDemux_1_io_outputs_0_valid             ), //o
    .io_outputs_0_ready               (dePuncturing_2_raw_data_ready                ), //i
    .io_outputs_0_payload_last        (streamDemux_1_io_outputs_0_payload_last      ), //o
    .io_outputs_0_payload_fragment    (streamDemux_1_io_outputs_0_payload_fragment  ), //o
    .io_outputs_1_valid               (streamDemux_1_io_outputs_1_valid             ), //o
    .io_outputs_1_ready               (dePuncturing_3_raw_data_ready                ), //i
    .io_outputs_1_payload_last        (streamDemux_1_io_outputs_1_payload_last      ), //o
    .io_outputs_1_payload_fragment    (streamDemux_1_io_outputs_1_payload_fragment  )  //o
  );
  DePuncturing dePuncturing_2 (
    .raw_data_valid                               (streamDemux_1_io_outputs_0_valid                          ), //i
    .raw_data_ready                               (dePuncturing_2_raw_data_ready                             ), //o
    .raw_data_payload_last                        (streamDemux_1_io_outputs_0_payload_last                   ), //i
    .raw_data_payload_fragment                    (streamDemux_1_io_outputs_0_payload_fragment               ), //i
    .de_punched_data_valid                        (dePuncturing_2_de_punched_data_valid                      ), //o
    .de_punched_data_ready                        (streamMux_1_io_inputs_0_ready                             ), //i
    .de_punched_data_payload_last                 (dePuncturing_2_de_punched_data_payload_last               ), //o
    .de_punched_data_payload_fragment_data        (dePuncturing_2_de_punched_data_payload_fragment_data      ), //o
    .de_punched_data_payload_fragment_indicate    (dePuncturing_2_de_punched_data_payload_fragment_indicate  ), //o
    .clk                                          (clk                                                       ), //i
    .resetn                                       (resetn                                                    )  //i
  );
  DePuncturing_1 dePuncturing_3 (
    .raw_data_valid                               (streamDemux_1_io_outputs_1_valid                          ), //i
    .raw_data_ready                               (dePuncturing_3_raw_data_ready                             ), //o
    .raw_data_payload_last                        (streamDemux_1_io_outputs_1_payload_last                   ), //i
    .raw_data_payload_fragment                    (dePuncturing_3_raw_data_payload_fragment                  ), //i
    .de_punched_data_valid                        (dePuncturing_3_de_punched_data_valid                      ), //o
    .de_punched_data_ready                        (streamMux_1_io_inputs_1_ready                             ), //i
    .de_punched_data_payload_last                 (dePuncturing_3_de_punched_data_payload_last               ), //o
    .de_punched_data_payload_fragment_data        (dePuncturing_3_de_punched_data_payload_fragment_data      ), //o
    .de_punched_data_payload_fragment_indicate    (dePuncturing_3_de_punched_data_payload_fragment_indicate  ), //o
    .clk                                          (clk                                                       ), //i
    .resetn                                       (resetn                                                    )  //i
  );
  StreamMux streamMux_1 (
    .io_select                                (sel                                                       ), //i
    .io_inputs_0_valid                        (dePuncturing_2_de_punched_data_valid                      ), //i
    .io_inputs_0_ready                        (streamMux_1_io_inputs_0_ready                             ), //o
    .io_inputs_0_payload_last                 (dePuncturing_2_de_punched_data_payload_last               ), //i
    .io_inputs_0_payload_fragment_data        (dePuncturing_2_de_punched_data_payload_fragment_data      ), //i
    .io_inputs_0_payload_fragment_indicate    (dePuncturing_2_de_punched_data_payload_fragment_indicate  ), //i
    .io_inputs_1_valid                        (dePuncturing_3_de_punched_data_valid                      ), //i
    .io_inputs_1_ready                        (streamMux_1_io_inputs_1_ready                             ), //o
    .io_inputs_1_payload_last                 (dePuncturing_3_de_punched_data_payload_last               ), //i
    .io_inputs_1_payload_fragment_data        (dePuncturing_3_de_punched_data_payload_fragment_data      ), //i
    .io_inputs_1_payload_fragment_indicate    (dePuncturing_3_de_punched_data_payload_fragment_indicate  ), //i
    .io_output_valid                          (streamMux_1_io_output_valid                               ), //o
    .io_output_ready                          (de_punched_data_ready                                     ), //i
    .io_output_payload_last                   (streamMux_1_io_output_payload_last                        ), //o
    .io_output_payload_fragment_data          (streamMux_1_io_output_payload_fragment_data               ), //o
    .io_output_payload_fragment_indicate      (streamMux_1_io_output_payload_fragment_indicate           )  //o
  );
  assign raw_data_ready = streamDemux_1_io_input_ready;
  assign dePuncturing_3_raw_data_payload_fragment = streamDemux_1_io_outputs_1_payload_fragment[11:0];
  assign de_punched_data_valid = streamMux_1_io_output_valid;
  assign de_punched_data_payload_last = streamMux_1_io_output_payload_last;
  assign de_punched_data_payload_fragment_data = streamMux_1_io_output_payload_fragment_data;
  assign de_punched_data_payload_fragment_indicate = streamMux_1_io_output_payload_fragment_indicate;

endmodule

module StreamMux (
  input      [0:0]    io_select,
  input               io_inputs_0_valid,
  output              io_inputs_0_ready,
  input               io_inputs_0_payload_last,
  input      [1:0]    io_inputs_0_payload_fragment_data,
  input      [1:0]    io_inputs_0_payload_fragment_indicate,
  input               io_inputs_1_valid,
  output              io_inputs_1_ready,
  input               io_inputs_1_payload_last,
  input      [1:0]    io_inputs_1_payload_fragment_data,
  input      [1:0]    io_inputs_1_payload_fragment_indicate,
  output              io_output_valid,
  input               io_output_ready,
  output              io_output_payload_last,
  output     [1:0]    io_output_payload_fragment_data,
  output     [1:0]    io_output_payload_fragment_indicate
);
  reg                 _zz_io_output_valid;
  reg                 _zz_io_output_payload_last;
  reg        [1:0]    _zz_io_output_payload_fragment_data;
  reg        [1:0]    _zz_io_output_payload_fragment_indicate;

  always @(*) begin
    case(io_select)
      1'b0 : begin
        _zz_io_output_valid = io_inputs_0_valid;
        _zz_io_output_payload_last = io_inputs_0_payload_last;
        _zz_io_output_payload_fragment_data = io_inputs_0_payload_fragment_data;
        _zz_io_output_payload_fragment_indicate = io_inputs_0_payload_fragment_indicate;
      end
      default : begin
        _zz_io_output_valid = io_inputs_1_valid;
        _zz_io_output_payload_last = io_inputs_1_payload_last;
        _zz_io_output_payload_fragment_data = io_inputs_1_payload_fragment_data;
        _zz_io_output_payload_fragment_indicate = io_inputs_1_payload_fragment_indicate;
      end
    endcase
  end

  assign io_inputs_0_ready = ((io_select == 1'b0) && io_output_ready);
  assign io_inputs_1_ready = ((io_select == 1'b1) && io_output_ready);
  assign io_output_valid = _zz_io_output_valid;
  assign io_output_payload_last = _zz_io_output_payload_last;
  assign io_output_payload_fragment_data = _zz_io_output_payload_fragment_data;
  assign io_output_payload_fragment_indicate = _zz_io_output_payload_fragment_indicate;

endmodule

module DePuncturing_1 (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [11:0]   raw_data_payload_fragment,
  output              de_punched_data_valid,
  input               de_punched_data_ready,
  output              de_punched_data_payload_last,
  output     [1:0]    de_punched_data_payload_fragment_data,
  output     [1:0]    de_punched_data_payload_fragment_indicate,
  input               clk,
  input               resetn
);
  reg        [1:0]    _zz_switch_Misc_l200;
  wire       [2:0]    _zz_switch_Misc_l200_1;
  wire       [3:0]    _zz_mask_cnt;
  reg        [1:0]    _zz_switch_Misc_l200_1_1;
  wire       [2:0]    _zz_switch_Misc_l200_1_2;
  reg        [1:0]    _zz_de_punched_data_payload_fragment_indicate;
  wire       [2:0]    _zz_de_punched_data_payload_fragment_indicate_1;
  wire       [1:0]    mask_rom_0;
  wire       [1:0]    mask_rom_1;
  wire       [1:0]    mask_rom_2;
  wire       [1:0]    mask_rom_3;
  wire       [1:0]    mask_rom_4;
  wire       [1:0]    mask_rom_5;
  wire       [1:0]    mask_rom_6;
  wire       [1:0]    mask_rom_7;
  reg        [3:0]    mask_cnt;
  reg        [3:0]    cnt;
  reg        [11:0]   raw_data_fragment;
  reg                 raw_data_last;
  wire                when_DePuncturing_l52;
  wire       [1:0]    switch_Misc_l200;
  reg        [11:0]   _zz_raw_data_fragment;
  wire                raw_data_fire;
  wire                de_punched_data_fire;
  wire       [1:0]    switch_Misc_l200_1;
  wire       [0:0]    _zz_de_punched_data_payload_fragment_data;
  reg        [1:0]    _zz_de_punched_data_payload_fragment_data_1;

  assign _zz_switch_Misc_l200_1 = mask_cnt[2:0];
  assign _zz_mask_cnt = (mask_cnt + 4'b0001);
  assign _zz_switch_Misc_l200_1_2 = mask_cnt[2:0];
  assign _zz_de_punched_data_payload_fragment_indicate_1 = mask_cnt[2:0];
  always @(*) begin
    case(_zz_switch_Misc_l200_1)
      3'b000 : begin
        _zz_switch_Misc_l200 = mask_rom_0;
      end
      3'b001 : begin
        _zz_switch_Misc_l200 = mask_rom_1;
      end
      3'b010 : begin
        _zz_switch_Misc_l200 = mask_rom_2;
      end
      3'b011 : begin
        _zz_switch_Misc_l200 = mask_rom_3;
      end
      3'b100 : begin
        _zz_switch_Misc_l200 = mask_rom_4;
      end
      3'b101 : begin
        _zz_switch_Misc_l200 = mask_rom_5;
      end
      3'b110 : begin
        _zz_switch_Misc_l200 = mask_rom_6;
      end
      default : begin
        _zz_switch_Misc_l200 = mask_rom_7;
      end
    endcase
  end

  always @(*) begin
    case(_zz_switch_Misc_l200_1_2)
      3'b000 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_0;
      end
      3'b001 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_1;
      end
      3'b010 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_2;
      end
      3'b011 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_3;
      end
      3'b100 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_4;
      end
      3'b101 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_5;
      end
      3'b110 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_6;
      end
      default : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_7;
      end
    endcase
  end

  always @(*) begin
    case(_zz_de_punched_data_payload_fragment_indicate_1)
      3'b000 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_0;
      end
      3'b001 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_1;
      end
      3'b010 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_2;
      end
      3'b011 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_3;
      end
      3'b100 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_4;
      end
      3'b101 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_5;
      end
      3'b110 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_6;
      end
      default : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_7;
      end
    endcase
  end

  assign mask_rom_0 = 2'b11;
  assign mask_rom_1 = 2'b01;
  assign mask_rom_2 = 2'b11;
  assign mask_rom_3 = 2'b01;
  assign mask_rom_4 = 2'b11;
  assign mask_rom_5 = 2'b01;
  assign mask_rom_6 = 2'b11;
  assign mask_rom_7 = 2'b01;
  assign when_DePuncturing_l52 = (raw_data_last && (cnt == 4'b0000));
  assign switch_Misc_l200 = _zz_switch_Misc_l200;
  always @(*) begin
    case(switch_Misc_l200)
      2'b11 : begin
        _zz_raw_data_fragment = (raw_data_fragment >>> 2);
      end
      2'b01 : begin
        _zz_raw_data_fragment = (raw_data_fragment >>> 1);
      end
      default : begin
        _zz_raw_data_fragment = raw_data_fragment;
      end
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign de_punched_data_fire = (de_punched_data_valid && de_punched_data_ready);
  assign switch_Misc_l200_1 = _zz_switch_Misc_l200_1_1;
  assign _zz_de_punched_data_payload_fragment_data = raw_data_fragment[0 : 0];
  always @(*) begin
    case(switch_Misc_l200_1)
      2'b11 : begin
        _zz_de_punched_data_payload_fragment_data_1 = {raw_data_fragment[1 : 1],_zz_de_punched_data_payload_fragment_data};
      end
      2'b01 : begin
        _zz_de_punched_data_payload_fragment_data_1 = {1'b0,_zz_de_punched_data_payload_fragment_data};
      end
      default : begin
        _zz_de_punched_data_payload_fragment_data_1 = 2'b00;
      end
    endcase
  end

  assign de_punched_data_payload_fragment_data = _zz_de_punched_data_payload_fragment_data_1;
  assign de_punched_data_payload_fragment_indicate = _zz_de_punched_data_payload_fragment_indicate;
  assign de_punched_data_valid = (cnt != 4'b0000);
  assign de_punched_data_payload_last = ((cnt == 4'b0001) && raw_data_last);
  assign raw_data_ready = ((cnt == 4'b0000) && (! raw_data_last));
  always @(posedge clk) begin
    if(!resetn) begin
      mask_cnt <= 4'b0000;
      cnt <= 4'b0000;
      raw_data_last <= 1'b0;
    end else begin
      if(when_DePuncturing_l52) begin
        mask_cnt <= 4'b0000;
        cnt <= 4'b0000;
        raw_data_last <= 1'b0;
      end else begin
        if(raw_data_fire) begin
          raw_data_last <= raw_data_payload_last;
          cnt <= 4'b1000;
        end else begin
          if(de_punched_data_fire) begin
            cnt <= (cnt - 4'b0001);
            mask_cnt <= ((mask_cnt == 4'b0111) ? 4'b0000 : _zz_mask_cnt);
          end
        end
      end
    end
  end

  always @(posedge clk) begin
    if(!when_DePuncturing_l52) begin
      if(raw_data_fire) begin
        raw_data_fragment <= raw_data_payload_fragment;
      end else begin
        if(de_punched_data_fire) begin
          raw_data_fragment <= _zz_raw_data_fragment;
        end
      end
    end
  end


endmodule

module DePuncturing (
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment,
  output              de_punched_data_valid,
  input               de_punched_data_ready,
  output              de_punched_data_payload_last,
  output     [1:0]    de_punched_data_payload_fragment_data,
  output     [1:0]    de_punched_data_payload_fragment_indicate,
  input               clk,
  input               resetn
);
  reg        [1:0]    _zz_switch_Misc_l200;
  wire       [2:0]    _zz_switch_Misc_l200_1;
  wire       [3:0]    _zz_mask_cnt;
  reg        [1:0]    _zz_switch_Misc_l200_1_1;
  wire       [2:0]    _zz_switch_Misc_l200_1_2;
  reg        [1:0]    _zz_de_punched_data_payload_fragment_indicate;
  wire       [2:0]    _zz_de_punched_data_payload_fragment_indicate_1;
  wire       [1:0]    mask_rom_0;
  wire       [1:0]    mask_rom_1;
  wire       [1:0]    mask_rom_2;
  wire       [1:0]    mask_rom_3;
  wire       [1:0]    mask_rom_4;
  wire       [1:0]    mask_rom_5;
  wire       [1:0]    mask_rom_6;
  wire       [1:0]    mask_rom_7;
  reg        [3:0]    mask_cnt;
  reg        [3:0]    cnt;
  reg        [15:0]   raw_data_fragment;
  reg                 raw_data_last;
  wire                when_DePuncturing_l52;
  wire       [1:0]    switch_Misc_l200;
  reg        [15:0]   _zz_raw_data_fragment;
  wire                raw_data_fire;
  wire                de_punched_data_fire;
  wire       [1:0]    switch_Misc_l200_1;
  reg        [1:0]    _zz_de_punched_data_payload_fragment_data;

  assign _zz_switch_Misc_l200_1 = mask_cnt[2:0];
  assign _zz_mask_cnt = (mask_cnt + 4'b0001);
  assign _zz_switch_Misc_l200_1_2 = mask_cnt[2:0];
  assign _zz_de_punched_data_payload_fragment_indicate_1 = mask_cnt[2:0];
  always @(*) begin
    case(_zz_switch_Misc_l200_1)
      3'b000 : begin
        _zz_switch_Misc_l200 = mask_rom_0;
      end
      3'b001 : begin
        _zz_switch_Misc_l200 = mask_rom_1;
      end
      3'b010 : begin
        _zz_switch_Misc_l200 = mask_rom_2;
      end
      3'b011 : begin
        _zz_switch_Misc_l200 = mask_rom_3;
      end
      3'b100 : begin
        _zz_switch_Misc_l200 = mask_rom_4;
      end
      3'b101 : begin
        _zz_switch_Misc_l200 = mask_rom_5;
      end
      3'b110 : begin
        _zz_switch_Misc_l200 = mask_rom_6;
      end
      default : begin
        _zz_switch_Misc_l200 = mask_rom_7;
      end
    endcase
  end

  always @(*) begin
    case(_zz_switch_Misc_l200_1_2)
      3'b000 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_0;
      end
      3'b001 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_1;
      end
      3'b010 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_2;
      end
      3'b011 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_3;
      end
      3'b100 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_4;
      end
      3'b101 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_5;
      end
      3'b110 : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_6;
      end
      default : begin
        _zz_switch_Misc_l200_1_1 = mask_rom_7;
      end
    endcase
  end

  always @(*) begin
    case(_zz_de_punched_data_payload_fragment_indicate_1)
      3'b000 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_0;
      end
      3'b001 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_1;
      end
      3'b010 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_2;
      end
      3'b011 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_3;
      end
      3'b100 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_4;
      end
      3'b101 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_5;
      end
      3'b110 : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_6;
      end
      default : begin
        _zz_de_punched_data_payload_fragment_indicate = mask_rom_7;
      end
    endcase
  end

  assign mask_rom_0 = 2'b11;
  assign mask_rom_1 = 2'b11;
  assign mask_rom_2 = 2'b11;
  assign mask_rom_3 = 2'b11;
  assign mask_rom_4 = 2'b11;
  assign mask_rom_5 = 2'b11;
  assign mask_rom_6 = 2'b11;
  assign mask_rom_7 = 2'b11;
  assign when_DePuncturing_l52 = (raw_data_last && (cnt == 4'b0000));
  assign switch_Misc_l200 = _zz_switch_Misc_l200;
  always @(*) begin
    case(switch_Misc_l200)
      2'b11 : begin
        _zz_raw_data_fragment = (raw_data_fragment >>> 2);
      end
      default : begin
        _zz_raw_data_fragment = raw_data_fragment;
      end
    endcase
  end

  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign de_punched_data_fire = (de_punched_data_valid && de_punched_data_ready);
  assign switch_Misc_l200_1 = _zz_switch_Misc_l200_1_1;
  always @(*) begin
    case(switch_Misc_l200_1)
      2'b11 : begin
        _zz_de_punched_data_payload_fragment_data = {raw_data_fragment[1 : 1],raw_data_fragment[0 : 0]};
      end
      default : begin
        _zz_de_punched_data_payload_fragment_data = 2'b00;
      end
    endcase
  end

  assign de_punched_data_payload_fragment_data = _zz_de_punched_data_payload_fragment_data;
  assign de_punched_data_payload_fragment_indicate = _zz_de_punched_data_payload_fragment_indicate;
  assign de_punched_data_valid = (cnt != 4'b0000);
  assign de_punched_data_payload_last = ((cnt == 4'b0001) && raw_data_last);
  assign raw_data_ready = ((cnt == 4'b0000) && (! raw_data_last));
  always @(posedge clk) begin
    if(!resetn) begin
      mask_cnt <= 4'b0000;
      cnt <= 4'b0000;
      raw_data_last <= 1'b0;
    end else begin
      if(when_DePuncturing_l52) begin
        mask_cnt <= 4'b0000;
        cnt <= 4'b0000;
        raw_data_last <= 1'b0;
      end else begin
        if(raw_data_fire) begin
          raw_data_last <= raw_data_payload_last;
          cnt <= 4'b1000;
        end else begin
          if(de_punched_data_fire) begin
            cnt <= (cnt - 4'b0001);
            mask_cnt <= ((mask_cnt == 4'b0111) ? 4'b0000 : _zz_mask_cnt);
          end
        end
      end
    end
  end

  always @(posedge clk) begin
    if(!when_DePuncturing_l52) begin
      if(raw_data_fire) begin
        raw_data_fragment <= raw_data_payload_fragment;
      end else begin
        if(de_punched_data_fire) begin
          raw_data_fragment <= _zz_raw_data_fragment;
        end
      end
    end
  end


endmodule

module StreamDemux (
  input      [0:0]    io_select,
  input               io_input_valid,
  output reg          io_input_ready,
  input               io_input_payload_last,
  input      [15:0]   io_input_payload_fragment,
  output reg          io_outputs_0_valid,
  input               io_outputs_0_ready,
  output              io_outputs_0_payload_last,
  output     [15:0]   io_outputs_0_payload_fragment,
  output reg          io_outputs_1_valid,
  input               io_outputs_1_ready,
  output              io_outputs_1_payload_last,
  output     [15:0]   io_outputs_1_payload_fragment
);
  wire                when_Stream_l745;
  wire                when_Stream_l745_1;

  always @(*) begin
    io_input_ready = 1'b0;
    if(!when_Stream_l745) begin
      io_input_ready = io_outputs_0_ready;
    end
    if(!when_Stream_l745_1) begin
      io_input_ready = io_outputs_1_ready;
    end
  end

  assign io_outputs_0_payload_last = io_input_payload_last;
  assign io_outputs_0_payload_fragment = io_input_payload_fragment;
  assign when_Stream_l745 = (1'b0 != io_select);
  always @(*) begin
    if(when_Stream_l745) begin
      io_outputs_0_valid = 1'b0;
    end else begin
      io_outputs_0_valid = io_input_valid;
    end
  end

  assign io_outputs_1_payload_last = io_input_payload_last;
  assign io_outputs_1_payload_fragment = io_input_payload_fragment;
  assign when_Stream_l745_1 = (1'b1 != io_select);
  always @(*) begin
    if(when_Stream_l745_1) begin
      io_outputs_1_valid = 1'b0;
    end else begin
      io_outputs_1_valid = io_input_valid;
    end
  end


endmodule
