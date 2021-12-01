// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : JtagAxi4Debugger
// Git hash  : 8f3c532b10de88268de60b069cff9cfa96273852


`define JtagState_binary_sequential_type [3:0]
`define JtagState_binary_sequential_RESET 4'b0000
`define JtagState_binary_sequential_IDLE 4'b0001
`define JtagState_binary_sequential_IR_SELECT 4'b0010
`define JtagState_binary_sequential_IR_CAPTURE 4'b0011
`define JtagState_binary_sequential_IR_SHIFT 4'b0100
`define JtagState_binary_sequential_IR_EXIT1 4'b0101
`define JtagState_binary_sequential_IR_PAUSE 4'b0110
`define JtagState_binary_sequential_IR_EXIT2 4'b0111
`define JtagState_binary_sequential_IR_UPDATE 4'b1000
`define JtagState_binary_sequential_DR_SELECT 4'b1001
`define JtagState_binary_sequential_DR_CAPTURE 4'b1010
`define JtagState_binary_sequential_DR_SHIFT 4'b1011
`define JtagState_binary_sequential_DR_EXIT1 4'b1100
`define JtagState_binary_sequential_DR_PAUSE 4'b1101
`define JtagState_binary_sequential_DR_EXIT2 4'b1110
`define JtagState_binary_sequential_DR_UPDATE 4'b1111


module JtagAxi4Debugger (
  input               io_jtag_tms,
  input               io_jtag_tdi,
  output              io_jtag_tdo,
  input               io_jtag_tck,
  output              io_axi_aw_valid,
  input               io_axi_aw_ready,
  output     [31:0]   io_axi_aw_payload_addr,
  output     [2:0]    io_axi_aw_payload_size,
  output              io_axi_w_valid,
  input               io_axi_w_ready,
  output     [31:0]   io_axi_w_payload_data,
  output     [3:0]    io_axi_w_payload_strb,
  output              io_axi_w_payload_last,
  input               io_axi_b_valid,
  output              io_axi_b_ready,
  output              io_axi_ar_valid,
  input               io_axi_ar_ready,
  output     [31:0]   io_axi_ar_payload_addr,
  output     [2:0]    io_axi_ar_payload_size,
  input               io_axi_r_valid,
  output              io_axi_r_ready,
  input      [31:0]   io_axi_r_payload_data,
  input               io_axi_r_payload_last,
  input               clk,
  input               resetn
);
  wire       [31:0]   debugger_io_mem_rsp_payload;
  wire                debugger_io_mem_cmd_fork_io_outputs_0_ready;
  reg                 debugger_io_mem_cmd_fork_io_outputs_1_ready;
  wire                jtagBridge_1_io_jtag_tdo;
  wire                jtagBridge_1_io_remote_cmd_valid;
  wire                jtagBridge_1_io_remote_cmd_payload_last;
  wire       [0:0]    jtagBridge_1_io_remote_cmd_payload_fragment;
  wire                jtagBridge_1_io_remote_rsp_ready;
  wire                debugger_io_remote_cmd_ready;
  wire                debugger_io_remote_rsp_valid;
  wire                debugger_io_remote_rsp_payload_error;
  wire       [31:0]   debugger_io_remote_rsp_payload_data;
  wire                debugger_io_mem_cmd_valid;
  wire       [31:0]   debugger_io_mem_cmd_payload_address;
  wire       [31:0]   debugger_io_mem_cmd_payload_data;
  wire                debugger_io_mem_cmd_payload_wr;
  wire       [1:0]    debugger_io_mem_cmd_payload_size;
  wire                debugger_io_mem_cmd_fork_io_input_ready;
  wire                debugger_io_mem_cmd_fork_io_outputs_0_valid;
  wire       [31:0]   debugger_io_mem_cmd_fork_io_outputs_0_payload_address;
  wire       [31:0]   debugger_io_mem_cmd_fork_io_outputs_0_payload_data;
  wire                debugger_io_mem_cmd_fork_io_outputs_0_payload_wr;
  wire       [1:0]    debugger_io_mem_cmd_fork_io_outputs_0_payload_size;
  wire                debugger_io_mem_cmd_fork_io_outputs_1_valid;
  wire       [31:0]   debugger_io_mem_cmd_fork_io_outputs_1_payload_address;
  wire       [31:0]   debugger_io_mem_cmd_fork_io_outputs_1_payload_data;
  wire                debugger_io_mem_cmd_fork_io_outputs_1_payload_wr;
  wire       [1:0]    debugger_io_mem_cmd_fork_io_outputs_1_payload_size;
  wire       [5:0]    _zz_io_mem_rsp_payload_1;
  wire       [6:0]    _zz_io_axi_w_payload_strb_1;
  wire                _zz_io_axi_aw_valid;
  wire       [31:0]   _zz_io_axi_aw_payload_addr;
  wire       [2:0]    _zz_io_axi_aw_payload_size;
  wire                _zz_io_axi_aw_valid_1;
  wire                when_Stream_l408;
  reg                 debugger_io_mem_cmd_fork_io_outputs_1_thrown_valid;
  wire                debugger_io_mem_cmd_fork_io_outputs_1_thrown_ready;
  wire       [31:0]   debugger_io_mem_cmd_fork_io_outputs_1_thrown_payload_address;
  wire       [31:0]   debugger_io_mem_cmd_fork_io_outputs_1_thrown_payload_data;
  wire                debugger_io_mem_cmd_fork_io_outputs_1_thrown_payload_wr;
  wire       [1:0]    debugger_io_mem_cmd_fork_io_outputs_1_thrown_payload_size;
  reg        [3:0]    _zz_io_axi_w_payload_strb;
  reg                 _zz_1;
  wire                debugger_io_mem_cmd_fork_io_outputs_0_fire;
  reg                 _zz_when_Stream_l342;
  reg        [1:0]    _zz_io_mem_rsp_payload;
  wire                when_Stream_l342;

  assign _zz_io_mem_rsp_payload_1 = (_zz_io_mem_rsp_payload * 4'b1000);
  assign _zz_io_axi_w_payload_strb_1 = ({3'd0,_zz_io_axi_w_payload_strb} <<< debugger_io_mem_cmd_fork_io_outputs_1_thrown_payload_address[1 : 0]);
  JtagBridge jtagBridge_1 (
    .io_jtag_tms                       (io_jtag_tms                                  ), //i
    .io_jtag_tdi                       (io_jtag_tdi                                  ), //i
    .io_jtag_tdo                       (jtagBridge_1_io_jtag_tdo                     ), //o
    .io_jtag_tck                       (io_jtag_tck                                  ), //i
    .io_remote_cmd_valid               (jtagBridge_1_io_remote_cmd_valid             ), //o
    .io_remote_cmd_ready               (debugger_io_remote_cmd_ready                 ), //i
    .io_remote_cmd_payload_last        (jtagBridge_1_io_remote_cmd_payload_last      ), //o
    .io_remote_cmd_payload_fragment    (jtagBridge_1_io_remote_cmd_payload_fragment  ), //o
    .io_remote_rsp_valid               (debugger_io_remote_rsp_valid                 ), //i
    .io_remote_rsp_ready               (jtagBridge_1_io_remote_rsp_ready             ), //o
    .io_remote_rsp_payload_error       (debugger_io_remote_rsp_payload_error         ), //i
    .io_remote_rsp_payload_data        (debugger_io_remote_rsp_payload_data          ), //i
    .clk                               (clk                                          ), //i
    .resetn                            (resetn                                       )  //i
  );
  SystemDebugger debugger (
    .io_remote_cmd_valid               (jtagBridge_1_io_remote_cmd_valid             ), //i
    .io_remote_cmd_ready               (debugger_io_remote_cmd_ready                 ), //o
    .io_remote_cmd_payload_last        (jtagBridge_1_io_remote_cmd_payload_last      ), //i
    .io_remote_cmd_payload_fragment    (jtagBridge_1_io_remote_cmd_payload_fragment  ), //i
    .io_remote_rsp_valid               (debugger_io_remote_rsp_valid                 ), //o
    .io_remote_rsp_ready               (jtagBridge_1_io_remote_rsp_ready             ), //i
    .io_remote_rsp_payload_error       (debugger_io_remote_rsp_payload_error         ), //o
    .io_remote_rsp_payload_data        (debugger_io_remote_rsp_payload_data          ), //o
    .io_mem_cmd_valid                  (debugger_io_mem_cmd_valid                    ), //o
    .io_mem_cmd_ready                  (debugger_io_mem_cmd_fork_io_input_ready      ), //i
    .io_mem_cmd_payload_address        (debugger_io_mem_cmd_payload_address          ), //o
    .io_mem_cmd_payload_data           (debugger_io_mem_cmd_payload_data             ), //o
    .io_mem_cmd_payload_wr             (debugger_io_mem_cmd_payload_wr               ), //o
    .io_mem_cmd_payload_size           (debugger_io_mem_cmd_payload_size             ), //o
    .io_mem_rsp_valid                  (io_axi_r_valid                               ), //i
    .io_mem_rsp_payload                (debugger_io_mem_rsp_payload                  ), //i
    .clk                               (clk                                          ), //i
    .resetn                            (resetn                                       )  //i
  );
  StreamFork debugger_io_mem_cmd_fork (
    .io_input_valid                  (debugger_io_mem_cmd_valid                              ), //i
    .io_input_ready                  (debugger_io_mem_cmd_fork_io_input_ready                ), //o
    .io_input_payload_address        (debugger_io_mem_cmd_payload_address                    ), //i
    .io_input_payload_data           (debugger_io_mem_cmd_payload_data                       ), //i
    .io_input_payload_wr             (debugger_io_mem_cmd_payload_wr                         ), //i
    .io_input_payload_size           (debugger_io_mem_cmd_payload_size                       ), //i
    .io_outputs_0_valid              (debugger_io_mem_cmd_fork_io_outputs_0_valid            ), //o
    .io_outputs_0_ready              (debugger_io_mem_cmd_fork_io_outputs_0_ready            ), //i
    .io_outputs_0_payload_address    (debugger_io_mem_cmd_fork_io_outputs_0_payload_address  ), //o
    .io_outputs_0_payload_data       (debugger_io_mem_cmd_fork_io_outputs_0_payload_data     ), //o
    .io_outputs_0_payload_wr         (debugger_io_mem_cmd_fork_io_outputs_0_payload_wr       ), //o
    .io_outputs_0_payload_size       (debugger_io_mem_cmd_fork_io_outputs_0_payload_size     ), //o
    .io_outputs_1_valid              (debugger_io_mem_cmd_fork_io_outputs_1_valid            ), //o
    .io_outputs_1_ready              (debugger_io_mem_cmd_fork_io_outputs_1_ready            ), //i
    .io_outputs_1_payload_address    (debugger_io_mem_cmd_fork_io_outputs_1_payload_address  ), //o
    .io_outputs_1_payload_data       (debugger_io_mem_cmd_fork_io_outputs_1_payload_data     ), //o
    .io_outputs_1_payload_wr         (debugger_io_mem_cmd_fork_io_outputs_1_payload_wr       ), //o
    .io_outputs_1_payload_size       (debugger_io_mem_cmd_fork_io_outputs_1_payload_size     ), //o
    .clk                             (clk                                                    ), //i
    .resetn                          (resetn                                                 )  //i
  );
  assign io_jtag_tdo = jtagBridge_1_io_jtag_tdo;
  assign when_Stream_l408 = (! debugger_io_mem_cmd_fork_io_outputs_1_payload_wr);
  always @(*) begin
    debugger_io_mem_cmd_fork_io_outputs_1_thrown_valid = debugger_io_mem_cmd_fork_io_outputs_1_valid;
    if(when_Stream_l408) begin
      debugger_io_mem_cmd_fork_io_outputs_1_thrown_valid = 1'b0;
    end
  end

  always @(*) begin
    debugger_io_mem_cmd_fork_io_outputs_1_ready = debugger_io_mem_cmd_fork_io_outputs_1_thrown_ready;
    if(when_Stream_l408) begin
      debugger_io_mem_cmd_fork_io_outputs_1_ready = 1'b1;
    end
  end

  assign debugger_io_mem_cmd_fork_io_outputs_1_thrown_payload_address = debugger_io_mem_cmd_fork_io_outputs_1_payload_address;
  assign debugger_io_mem_cmd_fork_io_outputs_1_thrown_payload_data = debugger_io_mem_cmd_fork_io_outputs_1_payload_data;
  assign debugger_io_mem_cmd_fork_io_outputs_1_thrown_payload_wr = debugger_io_mem_cmd_fork_io_outputs_1_payload_wr;
  assign debugger_io_mem_cmd_fork_io_outputs_1_thrown_payload_size = debugger_io_mem_cmd_fork_io_outputs_1_payload_size;
  assign _zz_io_axi_aw_valid = debugger_io_mem_cmd_fork_io_outputs_0_valid;
  assign _zz_io_axi_aw_valid_1 = debugger_io_mem_cmd_fork_io_outputs_0_payload_wr;
  assign _zz_io_axi_aw_payload_addr = debugger_io_mem_cmd_fork_io_outputs_0_payload_address;
  assign _zz_io_axi_aw_payload_size = {1'd0, debugger_io_mem_cmd_fork_io_outputs_0_payload_size};
  always @(*) begin
    case(debugger_io_mem_cmd_fork_io_outputs_1_thrown_payload_size)
      2'b00 : begin
        _zz_io_axi_w_payload_strb = 4'b0001;
      end
      2'b01 : begin
        _zz_io_axi_w_payload_strb = 4'b0011;
      end
      default : begin
        _zz_io_axi_w_payload_strb = 4'b1111;
      end
    endcase
  end

  assign debugger_io_mem_cmd_fork_io_outputs_0_fire = (debugger_io_mem_cmd_fork_io_outputs_0_valid && debugger_io_mem_cmd_fork_io_outputs_0_ready);
  always @(*) begin
    _zz_1 = io_axi_r_valid;
    if(when_Stream_l342) begin
      _zz_1 = 1'b1;
    end
  end

  assign when_Stream_l342 = (! _zz_when_Stream_l342);
  assign debugger_io_mem_cmd_fork_io_outputs_0_ready = (_zz_io_axi_aw_valid_1 ? io_axi_aw_ready : io_axi_ar_ready);
  assign debugger_io_mem_cmd_fork_io_outputs_1_thrown_ready = io_axi_w_ready;
  assign debugger_io_mem_rsp_payload = (io_axi_r_payload_data >>> _zz_io_mem_rsp_payload_1);
  assign io_axi_aw_valid = (_zz_io_axi_aw_valid && _zz_io_axi_aw_valid_1);
  assign io_axi_aw_payload_addr = _zz_io_axi_aw_payload_addr;
  assign io_axi_aw_payload_size = _zz_io_axi_aw_payload_size;
  assign io_axi_w_valid = debugger_io_mem_cmd_fork_io_outputs_1_thrown_valid;
  assign io_axi_w_payload_data = debugger_io_mem_cmd_fork_io_outputs_1_thrown_payload_data;
  assign io_axi_w_payload_strb = _zz_io_axi_w_payload_strb_1[3:0];
  assign io_axi_w_payload_last = 1'b1;
  assign io_axi_b_ready = 1'b1;
  assign io_axi_ar_valid = (_zz_io_axi_aw_valid && (! _zz_io_axi_aw_valid_1));
  assign io_axi_ar_payload_addr = _zz_io_axi_aw_payload_addr;
  assign io_axi_ar_payload_size = _zz_io_axi_aw_payload_size;
  assign io_axi_r_ready = 1'b1;
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_when_Stream_l342 <= 1'b0;
    end else begin
      if(_zz_1) begin
        _zz_when_Stream_l342 <= (debugger_io_mem_cmd_fork_io_outputs_0_fire && (! debugger_io_mem_cmd_fork_io_outputs_0_payload_wr));
      end
    end
  end

  always @(posedge clk) begin
    if(_zz_1) begin
      _zz_io_mem_rsp_payload <= debugger_io_mem_cmd_fork_io_outputs_0_payload_address[1 : 0];
    end
  end


endmodule

module StreamFork (
  input               io_input_valid,
  output reg          io_input_ready,
  input      [31:0]   io_input_payload_address,
  input      [31:0]   io_input_payload_data,
  input               io_input_payload_wr,
  input      [1:0]    io_input_payload_size,
  output              io_outputs_0_valid,
  input               io_outputs_0_ready,
  output     [31:0]   io_outputs_0_payload_address,
  output     [31:0]   io_outputs_0_payload_data,
  output              io_outputs_0_payload_wr,
  output     [1:0]    io_outputs_0_payload_size,
  output              io_outputs_1_valid,
  input               io_outputs_1_ready,
  output     [31:0]   io_outputs_1_payload_address,
  output     [31:0]   io_outputs_1_payload_data,
  output              io_outputs_1_payload_wr,
  output     [1:0]    io_outputs_1_payload_size,
  input               clk,
  input               resetn
);
  reg                 _zz_io_outputs_0_valid;
  reg                 _zz_io_outputs_1_valid;
  wire                when_Stream_l806;
  wire                when_Stream_l806_1;
  wire                io_outputs_0_fire;
  wire                io_outputs_1_fire;

  always @(*) begin
    io_input_ready = 1'b1;
    if(when_Stream_l806) begin
      io_input_ready = 1'b0;
    end
    if(when_Stream_l806_1) begin
      io_input_ready = 1'b0;
    end
  end

  assign when_Stream_l806 = ((! io_outputs_0_ready) && _zz_io_outputs_0_valid);
  assign when_Stream_l806_1 = ((! io_outputs_1_ready) && _zz_io_outputs_1_valid);
  assign io_outputs_0_valid = (io_input_valid && _zz_io_outputs_0_valid);
  assign io_outputs_0_payload_address = io_input_payload_address;
  assign io_outputs_0_payload_data = io_input_payload_data;
  assign io_outputs_0_payload_wr = io_input_payload_wr;
  assign io_outputs_0_payload_size = io_input_payload_size;
  assign io_outputs_0_fire = (io_outputs_0_valid && io_outputs_0_ready);
  assign io_outputs_1_valid = (io_input_valid && _zz_io_outputs_1_valid);
  assign io_outputs_1_payload_address = io_input_payload_address;
  assign io_outputs_1_payload_data = io_input_payload_data;
  assign io_outputs_1_payload_wr = io_input_payload_wr;
  assign io_outputs_1_payload_size = io_input_payload_size;
  assign io_outputs_1_fire = (io_outputs_1_valid && io_outputs_1_ready);
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_io_outputs_0_valid <= 1'b1;
      _zz_io_outputs_1_valid <= 1'b1;
    end else begin
      if(io_outputs_0_fire) begin
        _zz_io_outputs_0_valid <= 1'b0;
      end
      if(io_outputs_1_fire) begin
        _zz_io_outputs_1_valid <= 1'b0;
      end
      if(io_input_ready) begin
        _zz_io_outputs_0_valid <= 1'b1;
        _zz_io_outputs_1_valid <= 1'b1;
      end
    end
  end


endmodule

module SystemDebugger (
  input               io_remote_cmd_valid,
  output              io_remote_cmd_ready,
  input               io_remote_cmd_payload_last,
  input      [0:0]    io_remote_cmd_payload_fragment,
  output              io_remote_rsp_valid,
  input               io_remote_rsp_ready,
  output              io_remote_rsp_payload_error,
  output     [31:0]   io_remote_rsp_payload_data,
  output              io_mem_cmd_valid,
  input               io_mem_cmd_ready,
  output     [31:0]   io_mem_cmd_payload_address,
  output     [31:0]   io_mem_cmd_payload_data,
  output              io_mem_cmd_payload_wr,
  output     [1:0]    io_mem_cmd_payload_size,
  input               io_mem_rsp_valid,
  input      [31:0]   io_mem_rsp_payload,
  input               clk,
  input               resetn
);
  reg        [66:0]   dispatcher_dataShifter;
  reg                 dispatcher_dataLoaded;
  reg        [7:0]    dispatcher_headerShifter;
  wire       [7:0]    dispatcher_header;
  reg                 dispatcher_headerLoaded;
  reg        [2:0]    dispatcher_counter;
  wire                when_Fragment_l346;
  wire                when_Fragment_l349;
  wire       [66:0]   _zz_io_mem_cmd_payload_address;
  wire                io_mem_cmd_isStall;
  wire                when_Fragment_l372;

  assign dispatcher_header = dispatcher_headerShifter[7 : 0];
  assign when_Fragment_l346 = (dispatcher_headerLoaded == 1'b0);
  assign when_Fragment_l349 = (dispatcher_counter == 3'b111);
  assign io_remote_cmd_ready = (! dispatcher_dataLoaded);
  assign _zz_io_mem_cmd_payload_address = dispatcher_dataShifter[66 : 0];
  assign io_mem_cmd_payload_address = _zz_io_mem_cmd_payload_address[31 : 0];
  assign io_mem_cmd_payload_data = _zz_io_mem_cmd_payload_address[63 : 32];
  assign io_mem_cmd_payload_wr = _zz_io_mem_cmd_payload_address[64];
  assign io_mem_cmd_payload_size = _zz_io_mem_cmd_payload_address[66 : 65];
  assign io_mem_cmd_valid = (dispatcher_dataLoaded && (dispatcher_header == 8'h0));
  assign io_mem_cmd_isStall = (io_mem_cmd_valid && (! io_mem_cmd_ready));
  assign when_Fragment_l372 = ((dispatcher_headerLoaded && dispatcher_dataLoaded) && (! io_mem_cmd_isStall));
  assign io_remote_rsp_valid = io_mem_rsp_valid;
  assign io_remote_rsp_payload_error = 1'b0;
  assign io_remote_rsp_payload_data = io_mem_rsp_payload;
  always @(posedge clk) begin
    if(!resetn) begin
      dispatcher_dataLoaded <= 1'b0;
      dispatcher_headerLoaded <= 1'b0;
      dispatcher_counter <= 3'b000;
    end else begin
      if(io_remote_cmd_valid) begin
        if(when_Fragment_l346) begin
          dispatcher_counter <= (dispatcher_counter + 3'b001);
          if(when_Fragment_l349) begin
            dispatcher_headerLoaded <= 1'b1;
          end
        end
        if(io_remote_cmd_payload_last) begin
          dispatcher_headerLoaded <= 1'b1;
          dispatcher_dataLoaded <= 1'b1;
          dispatcher_counter <= 3'b000;
        end
      end
      if(when_Fragment_l372) begin
        dispatcher_headerLoaded <= 1'b0;
        dispatcher_dataLoaded <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(io_remote_cmd_valid) begin
      if(when_Fragment_l346) begin
        dispatcher_headerShifter <= ({io_remote_cmd_payload_fragment,dispatcher_headerShifter} >>> 1);
      end else begin
        dispatcher_dataShifter <= ({io_remote_cmd_payload_fragment,dispatcher_dataShifter} >>> 1);
      end
    end
  end


endmodule

module JtagBridge (
  input               io_jtag_tms,
  input               io_jtag_tdi,
  output              io_jtag_tdo,
  input               io_jtag_tck,
  output              io_remote_cmd_valid,
  input               io_remote_cmd_ready,
  output              io_remote_cmd_payload_last,
  output     [0:0]    io_remote_cmd_payload_fragment,
  input               io_remote_rsp_valid,
  output              io_remote_rsp_ready,
  input               io_remote_rsp_payload_error,
  input      [31:0]   io_remote_rsp_payload_data,
  input               clk,
  input               resetn
);
  wire                flowCCByToggle_1_io_input_payload_last;
  wire                flowCCByToggle_1_io_output_valid;
  wire                flowCCByToggle_1_io_output_payload_last;
  wire       [0:0]    flowCCByToggle_1_io_output_payload_fragment;
  wire       [1:0]    _zz_jtag_tap_instructionShift;
  wire                system_cmd_valid;
  wire                system_cmd_payload_last;
  wire       [0:0]    system_cmd_payload_fragment;
  (* async_reg = "true" *) reg                 system_rsp_valid;
  (* async_reg = "true" *) reg                 system_rsp_payload_error;
  (* async_reg = "true" *) reg        [31:0]   system_rsp_payload_data;
  wire                io_remote_rsp_fire;
  wire       `JtagState_binary_sequential_type jtag_tap_fsm_stateNext;
  reg        `JtagState_binary_sequential_type jtag_tap_fsm_state = `JtagState_binary_sequential_RESET;
  reg        `JtagState_binary_sequential_type _zz_jtag_tap_fsm_stateNext;
  reg        [3:0]    jtag_tap_instruction;
  reg        [3:0]    jtag_tap_instructionShift;
  reg                 jtag_tap_bypass;
  reg                 jtag_tap_tdoUnbufferd;
  reg                 jtag_tap_tdoDr;
  wire                jtag_tap_tdoIr;
  reg                 jtag_tap_tdoUnbufferd_regNext;
  wire                _zz_1;
  reg        [31:0]   _zz_jtag_tap_tdoDr;
  wire                when_JtagTap_l112;
  wire                _zz_io_input_valid;
  wire                _zz_io_input_valid_1;
  wire       [0:0]    _zz_io_input_payload_fragment;
  reg                 _zz_io_input_valid_2;
  reg                 _zz_io_input_payload_fragment_1;
  wire                _zz_2;
  reg        [33:0]   _zz_jtag_tap_tdoDr_1;
  `ifndef SYNTHESIS
  reg [79:0] jtag_tap_fsm_stateNext_string;
  reg [79:0] jtag_tap_fsm_state_string;
  reg [79:0] _zz_jtag_tap_fsm_stateNext_string;
  `endif


  assign _zz_jtag_tap_instructionShift = 2'b01;
  FlowCCByToggle flowCCByToggle_1 (
    .io_input_valid                (_zz_io_input_valid_2                         ), //i
    .io_input_payload_last         (flowCCByToggle_1_io_input_payload_last       ), //i
    .io_input_payload_fragment     (_zz_io_input_payload_fragment                ), //i
    .io_output_valid               (flowCCByToggle_1_io_output_valid             ), //o
    .io_output_payload_last        (flowCCByToggle_1_io_output_payload_last      ), //o
    .io_output_payload_fragment    (flowCCByToggle_1_io_output_payload_fragment  ), //o
    .io_jtag_tck                   (io_jtag_tck                                  ), //i
    .clk                           (clk                                          ), //i
    .resetn                        (resetn                                       )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(jtag_tap_fsm_stateNext)
      `JtagState_binary_sequential_RESET : jtag_tap_fsm_stateNext_string = "RESET     ";
      `JtagState_binary_sequential_IDLE : jtag_tap_fsm_stateNext_string = "IDLE      ";
      `JtagState_binary_sequential_IR_SELECT : jtag_tap_fsm_stateNext_string = "IR_SELECT ";
      `JtagState_binary_sequential_IR_CAPTURE : jtag_tap_fsm_stateNext_string = "IR_CAPTURE";
      `JtagState_binary_sequential_IR_SHIFT : jtag_tap_fsm_stateNext_string = "IR_SHIFT  ";
      `JtagState_binary_sequential_IR_EXIT1 : jtag_tap_fsm_stateNext_string = "IR_EXIT1  ";
      `JtagState_binary_sequential_IR_PAUSE : jtag_tap_fsm_stateNext_string = "IR_PAUSE  ";
      `JtagState_binary_sequential_IR_EXIT2 : jtag_tap_fsm_stateNext_string = "IR_EXIT2  ";
      `JtagState_binary_sequential_IR_UPDATE : jtag_tap_fsm_stateNext_string = "IR_UPDATE ";
      `JtagState_binary_sequential_DR_SELECT : jtag_tap_fsm_stateNext_string = "DR_SELECT ";
      `JtagState_binary_sequential_DR_CAPTURE : jtag_tap_fsm_stateNext_string = "DR_CAPTURE";
      `JtagState_binary_sequential_DR_SHIFT : jtag_tap_fsm_stateNext_string = "DR_SHIFT  ";
      `JtagState_binary_sequential_DR_EXIT1 : jtag_tap_fsm_stateNext_string = "DR_EXIT1  ";
      `JtagState_binary_sequential_DR_PAUSE : jtag_tap_fsm_stateNext_string = "DR_PAUSE  ";
      `JtagState_binary_sequential_DR_EXIT2 : jtag_tap_fsm_stateNext_string = "DR_EXIT2  ";
      `JtagState_binary_sequential_DR_UPDATE : jtag_tap_fsm_stateNext_string = "DR_UPDATE ";
      default : jtag_tap_fsm_stateNext_string = "??????????";
    endcase
  end
  always @(*) begin
    case(jtag_tap_fsm_state)
      `JtagState_binary_sequential_RESET : jtag_tap_fsm_state_string = "RESET     ";
      `JtagState_binary_sequential_IDLE : jtag_tap_fsm_state_string = "IDLE      ";
      `JtagState_binary_sequential_IR_SELECT : jtag_tap_fsm_state_string = "IR_SELECT ";
      `JtagState_binary_sequential_IR_CAPTURE : jtag_tap_fsm_state_string = "IR_CAPTURE";
      `JtagState_binary_sequential_IR_SHIFT : jtag_tap_fsm_state_string = "IR_SHIFT  ";
      `JtagState_binary_sequential_IR_EXIT1 : jtag_tap_fsm_state_string = "IR_EXIT1  ";
      `JtagState_binary_sequential_IR_PAUSE : jtag_tap_fsm_state_string = "IR_PAUSE  ";
      `JtagState_binary_sequential_IR_EXIT2 : jtag_tap_fsm_state_string = "IR_EXIT2  ";
      `JtagState_binary_sequential_IR_UPDATE : jtag_tap_fsm_state_string = "IR_UPDATE ";
      `JtagState_binary_sequential_DR_SELECT : jtag_tap_fsm_state_string = "DR_SELECT ";
      `JtagState_binary_sequential_DR_CAPTURE : jtag_tap_fsm_state_string = "DR_CAPTURE";
      `JtagState_binary_sequential_DR_SHIFT : jtag_tap_fsm_state_string = "DR_SHIFT  ";
      `JtagState_binary_sequential_DR_EXIT1 : jtag_tap_fsm_state_string = "DR_EXIT1  ";
      `JtagState_binary_sequential_DR_PAUSE : jtag_tap_fsm_state_string = "DR_PAUSE  ";
      `JtagState_binary_sequential_DR_EXIT2 : jtag_tap_fsm_state_string = "DR_EXIT2  ";
      `JtagState_binary_sequential_DR_UPDATE : jtag_tap_fsm_state_string = "DR_UPDATE ";
      default : jtag_tap_fsm_state_string = "??????????";
    endcase
  end
  always @(*) begin
    case(_zz_jtag_tap_fsm_stateNext)
      `JtagState_binary_sequential_RESET : _zz_jtag_tap_fsm_stateNext_string = "RESET     ";
      `JtagState_binary_sequential_IDLE : _zz_jtag_tap_fsm_stateNext_string = "IDLE      ";
      `JtagState_binary_sequential_IR_SELECT : _zz_jtag_tap_fsm_stateNext_string = "IR_SELECT ";
      `JtagState_binary_sequential_IR_CAPTURE : _zz_jtag_tap_fsm_stateNext_string = "IR_CAPTURE";
      `JtagState_binary_sequential_IR_SHIFT : _zz_jtag_tap_fsm_stateNext_string = "IR_SHIFT  ";
      `JtagState_binary_sequential_IR_EXIT1 : _zz_jtag_tap_fsm_stateNext_string = "IR_EXIT1  ";
      `JtagState_binary_sequential_IR_PAUSE : _zz_jtag_tap_fsm_stateNext_string = "IR_PAUSE  ";
      `JtagState_binary_sequential_IR_EXIT2 : _zz_jtag_tap_fsm_stateNext_string = "IR_EXIT2  ";
      `JtagState_binary_sequential_IR_UPDATE : _zz_jtag_tap_fsm_stateNext_string = "IR_UPDATE ";
      `JtagState_binary_sequential_DR_SELECT : _zz_jtag_tap_fsm_stateNext_string = "DR_SELECT ";
      `JtagState_binary_sequential_DR_CAPTURE : _zz_jtag_tap_fsm_stateNext_string = "DR_CAPTURE";
      `JtagState_binary_sequential_DR_SHIFT : _zz_jtag_tap_fsm_stateNext_string = "DR_SHIFT  ";
      `JtagState_binary_sequential_DR_EXIT1 : _zz_jtag_tap_fsm_stateNext_string = "DR_EXIT1  ";
      `JtagState_binary_sequential_DR_PAUSE : _zz_jtag_tap_fsm_stateNext_string = "DR_PAUSE  ";
      `JtagState_binary_sequential_DR_EXIT2 : _zz_jtag_tap_fsm_stateNext_string = "DR_EXIT2  ";
      `JtagState_binary_sequential_DR_UPDATE : _zz_jtag_tap_fsm_stateNext_string = "DR_UPDATE ";
      default : _zz_jtag_tap_fsm_stateNext_string = "??????????";
    endcase
  end
  `endif

  assign io_remote_cmd_valid = system_cmd_valid;
  assign io_remote_cmd_payload_last = system_cmd_payload_last;
  assign io_remote_cmd_payload_fragment = system_cmd_payload_fragment;
  assign io_remote_rsp_fire = (io_remote_rsp_valid && io_remote_rsp_ready);
  assign io_remote_rsp_ready = 1'b1;
  always @(*) begin
    case(jtag_tap_fsm_state)
      `JtagState_binary_sequential_IDLE : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_DR_SELECT : `JtagState_binary_sequential_IDLE);
      end
      `JtagState_binary_sequential_IR_SELECT : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_RESET : `JtagState_binary_sequential_IR_CAPTURE);
      end
      `JtagState_binary_sequential_IR_CAPTURE : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_IR_EXIT1 : `JtagState_binary_sequential_IR_SHIFT);
      end
      `JtagState_binary_sequential_IR_SHIFT : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_IR_EXIT1 : `JtagState_binary_sequential_IR_SHIFT);
      end
      `JtagState_binary_sequential_IR_EXIT1 : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_IR_UPDATE : `JtagState_binary_sequential_IR_PAUSE);
      end
      `JtagState_binary_sequential_IR_PAUSE : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_IR_EXIT2 : `JtagState_binary_sequential_IR_PAUSE);
      end
      `JtagState_binary_sequential_IR_EXIT2 : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_IR_UPDATE : `JtagState_binary_sequential_IR_SHIFT);
      end
      `JtagState_binary_sequential_IR_UPDATE : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_DR_SELECT : `JtagState_binary_sequential_IDLE);
      end
      `JtagState_binary_sequential_DR_SELECT : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_IR_SELECT : `JtagState_binary_sequential_DR_CAPTURE);
      end
      `JtagState_binary_sequential_DR_CAPTURE : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_DR_EXIT1 : `JtagState_binary_sequential_DR_SHIFT);
      end
      `JtagState_binary_sequential_DR_SHIFT : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_DR_EXIT1 : `JtagState_binary_sequential_DR_SHIFT);
      end
      `JtagState_binary_sequential_DR_EXIT1 : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_DR_UPDATE : `JtagState_binary_sequential_DR_PAUSE);
      end
      `JtagState_binary_sequential_DR_PAUSE : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_DR_EXIT2 : `JtagState_binary_sequential_DR_PAUSE);
      end
      `JtagState_binary_sequential_DR_EXIT2 : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_DR_UPDATE : `JtagState_binary_sequential_DR_SHIFT);
      end
      `JtagState_binary_sequential_DR_UPDATE : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_DR_SELECT : `JtagState_binary_sequential_IDLE);
      end
      default : begin
        _zz_jtag_tap_fsm_stateNext = (io_jtag_tms ? `JtagState_binary_sequential_RESET : `JtagState_binary_sequential_IDLE);
      end
    endcase
  end

  assign jtag_tap_fsm_stateNext = _zz_jtag_tap_fsm_stateNext;
  always @(*) begin
    jtag_tap_tdoUnbufferd = jtag_tap_bypass;
    case(jtag_tap_fsm_state)
      `JtagState_binary_sequential_IR_SHIFT : begin
        jtag_tap_tdoUnbufferd = jtag_tap_tdoIr;
      end
      `JtagState_binary_sequential_DR_SHIFT : begin
        jtag_tap_tdoUnbufferd = jtag_tap_tdoDr;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    jtag_tap_tdoDr = 1'b0;
    if(_zz_1) begin
      jtag_tap_tdoDr = _zz_jtag_tap_tdoDr[0];
    end
    if(_zz_io_input_valid) begin
      jtag_tap_tdoDr = 1'b0;
    end
    if(_zz_2) begin
      jtag_tap_tdoDr = _zz_jtag_tap_tdoDr_1[0];
    end
  end

  assign jtag_tap_tdoIr = jtag_tap_instructionShift[0];
  assign io_jtag_tdo = jtag_tap_tdoUnbufferd_regNext;
  assign _zz_1 = (jtag_tap_instruction == 4'b0001);
  assign when_JtagTap_l112 = (jtag_tap_fsm_state == `JtagState_binary_sequential_RESET);
  assign _zz_io_input_payload_fragment[0] = _zz_io_input_payload_fragment_1;
  assign flowCCByToggle_1_io_input_payload_last = (! (_zz_io_input_valid && _zz_io_input_valid_1));
  assign system_cmd_valid = flowCCByToggle_1_io_output_valid;
  assign system_cmd_payload_last = flowCCByToggle_1_io_output_payload_last;
  assign system_cmd_payload_fragment = flowCCByToggle_1_io_output_payload_fragment;
  assign _zz_io_input_valid = (jtag_tap_instruction == 4'b0010);
  assign _zz_io_input_valid_1 = (jtag_tap_fsm_state == `JtagState_binary_sequential_DR_SHIFT);
  assign _zz_2 = (jtag_tap_instruction == 4'b0011);
  always @(posedge clk) begin
    if(io_remote_cmd_valid) begin
      system_rsp_valid <= 1'b0;
    end
    if(io_remote_rsp_fire) begin
      system_rsp_valid <= 1'b1;
      system_rsp_payload_error <= io_remote_rsp_payload_error;
      system_rsp_payload_data <= io_remote_rsp_payload_data;
    end
  end

  always @(posedge io_jtag_tck) begin
    jtag_tap_fsm_state <= jtag_tap_fsm_stateNext;
    jtag_tap_bypass <= io_jtag_tdi;
    case(jtag_tap_fsm_state)
      `JtagState_binary_sequential_IR_CAPTURE : begin
        jtag_tap_instructionShift <= {2'd0, _zz_jtag_tap_instructionShift};
      end
      `JtagState_binary_sequential_IR_SHIFT : begin
        jtag_tap_instructionShift <= ({io_jtag_tdi,jtag_tap_instructionShift} >>> 1);
      end
      `JtagState_binary_sequential_IR_UPDATE : begin
        jtag_tap_instruction <= jtag_tap_instructionShift;
      end
      `JtagState_binary_sequential_DR_SHIFT : begin
        jtag_tap_instructionShift <= ({io_jtag_tdi,jtag_tap_instructionShift} >>> 1);
      end
      default : begin
      end
    endcase
    if(_zz_1) begin
      if((jtag_tap_fsm_state == `JtagState_binary_sequential_DR_SHIFT)) begin
        _zz_jtag_tap_tdoDr <= ({io_jtag_tdi,_zz_jtag_tap_tdoDr} >>> 1);
      end
    end
    if((jtag_tap_fsm_state == `JtagState_binary_sequential_DR_CAPTURE)) begin
      _zz_jtag_tap_tdoDr <= 32'h10001fff;
    end
    if(when_JtagTap_l112) begin
      jtag_tap_instruction <= 4'b0001;
    end
    _zz_io_input_valid_2 <= (_zz_io_input_valid && _zz_io_input_valid_1);
    _zz_io_input_payload_fragment_1 <= io_jtag_tdi;
    if(_zz_2) begin
      if((jtag_tap_fsm_state == `JtagState_binary_sequential_DR_CAPTURE)) begin
        _zz_jtag_tap_tdoDr_1 <= {{system_rsp_payload_data,system_rsp_payload_error},system_rsp_valid};
      end
      if((jtag_tap_fsm_state == `JtagState_binary_sequential_DR_SHIFT)) begin
        _zz_jtag_tap_tdoDr_1 <= ({io_jtag_tdi,_zz_jtag_tap_tdoDr_1} >>> 1);
      end
    end
  end

  always @(negedge io_jtag_tck) begin
    jtag_tap_tdoUnbufferd_regNext <= jtag_tap_tdoUnbufferd;
  end


endmodule

module FlowCCByToggle (
  input               io_input_valid,
  input               io_input_payload_last,
  input      [0:0]    io_input_payload_fragment,
  output              io_output_valid,
  output              io_output_payload_last,
  output     [0:0]    io_output_payload_fragment,
  input               io_jtag_tck,
  input               clk,
  input               resetn
);
  wire                inputArea_target_buffercc_io_dataOut;
  wire                outHitSignal;
  reg                 inputArea_target = 0;
  reg                 inputArea_data_last;
  reg        [0:0]    inputArea_data_fragment;
  wire                outputArea_target;
  reg                 outputArea_hit;
  wire                outputArea_flow_valid;
  wire                outputArea_flow_payload_last;
  wire       [0:0]    outputArea_flow_payload_fragment;
  reg                 outputArea_flow_m2sPipe_valid;
  reg                 outputArea_flow_m2sPipe_payload_last;
  reg        [0:0]    outputArea_flow_m2sPipe_payload_fragment;

  BufferCC inputArea_target_buffercc (
    .io_dataIn     (inputArea_target                      ), //i
    .io_dataOut    (inputArea_target_buffercc_io_dataOut  ), //o
    .clk           (clk                                   ), //i
    .resetn        (resetn                                )  //i
  );
  assign outputArea_target = inputArea_target_buffercc_io_dataOut;
  assign outputArea_flow_valid = (outputArea_target != outputArea_hit);
  assign outputArea_flow_payload_last = inputArea_data_last;
  assign outputArea_flow_payload_fragment = inputArea_data_fragment;
  assign io_output_valid = outputArea_flow_m2sPipe_valid;
  assign io_output_payload_last = outputArea_flow_m2sPipe_payload_last;
  assign io_output_payload_fragment = outputArea_flow_m2sPipe_payload_fragment;
  always @(posedge io_jtag_tck) begin
    if(io_input_valid) begin
      inputArea_target <= (! inputArea_target);
      inputArea_data_last <= io_input_payload_last;
      inputArea_data_fragment <= io_input_payload_fragment;
    end
  end

  always @(posedge clk) begin
    outputArea_hit <= outputArea_target;
    if(outputArea_flow_valid) begin
      outputArea_flow_m2sPipe_payload_last <= outputArea_flow_payload_last;
      outputArea_flow_m2sPipe_payload_fragment <= outputArea_flow_payload_fragment;
    end
  end

  always @(posedge clk) begin
    if(!resetn) begin
      outputArea_flow_m2sPipe_valid <= 1'b0;
    end else begin
      outputArea_flow_m2sPipe_valid <= outputArea_flow_valid;
    end
  end


endmodule

module BufferCC (
  input               io_dataIn,
  output              io_dataOut,
  input               clk,
  input               resetn
);
  (* async_reg = "true" *) reg                 buffers_0;
  (* async_reg = "true" *) reg                 buffers_1;

  assign io_dataOut = buffers_1;
  always @(posedge clk) begin
    buffers_0 <= io_dataIn;
    buffers_1 <= buffers_0;
  end


endmodule
