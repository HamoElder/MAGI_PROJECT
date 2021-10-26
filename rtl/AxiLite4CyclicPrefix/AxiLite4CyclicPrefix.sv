// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4CyclicPrefix
// Git hash  : 659c258a7d96f66a157e0b95738fe47528256e2a


`define CpStates_binary_sequential_type [1:0]
`define CpStates_binary_sequential_IDLE 2'b00
`define CpStates_binary_sequential_CAPTURE 2'b01
`define CpStates_binary_sequential_CP 2'b10
`define CpStates_binary_sequential_DATA 2'b11


module AxiLite4CyclicPrefix (
  input               axil4Ctrl_awvalid,
  output              axil4Ctrl_awready,
  input      [7:0]    axil4Ctrl_awaddr,
  input      [2:0]    axil4Ctrl_awprot,
  input               axil4Ctrl_wvalid,
  output              axil4Ctrl_wready,
  input      [31:0]   axil4Ctrl_wdata,
  input      [3:0]    axil4Ctrl_wstrb,
  output              axil4Ctrl_bvalid,
  input               axil4Ctrl_bready,
  output     [1:0]    axil4Ctrl_bresp,
  input               axil4Ctrl_arvalid,
  output reg          axil4Ctrl_arready,
  input      [7:0]    axil4Ctrl_araddr,
  input      [2:0]    axil4Ctrl_arprot,
  output              axil4Ctrl_rvalid,
  input               axil4Ctrl_rready,
  output     [31:0]   axil4Ctrl_rdata,
  output     [1:0]    axil4Ctrl_rresp,
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment_cha_i,
  input      [15:0]   raw_data_payload_fragment_cha_q,
  output              result_valid,
  output              result_payload_last,
  output     [15:0]   result_payload_fragment_cha_i,
  output     [15:0]   result_payload_fragment_cha_q,
  input               rf_clk,
  input               rf_resetn,
  input               clk,
  input               resetn
);
  wire                rfClockArea_cp_core_raw_data_ready;
  wire                rfClockArea_cp_core_result_valid;
  wire                rfClockArea_cp_core_result_payload_last;
  wire       [15:0]   rfClockArea_cp_core_result_payload_fragment_cha_i;
  wire       [15:0]   rfClockArea_cp_core_result_payload_fragment_cha_q;
  wire       [4:0]    clkCrossing_2_dataOut;
  wire       [6:0]    clkCrossing_3_dataOut;
  wire                readHaltRequest;
  wire                writeHaltRequest;
  wire                writeJoinEvent_valid;
  wire                writeJoinEvent_ready;
  wire                writeJoinEvent_fire;
  wire       [1:0]    writeRsp_resp;
  wire                writeJoinEvent_translated_valid;
  wire                writeJoinEvent_translated_ready;
  wire       [1:0]    writeJoinEvent_translated_payload_resp;
  wire                _zz_axil4Ctrl_bvalid;
  reg                 _zz_writeJoinEvent_translated_ready;
  wire                _zz_axil4Ctrl_bvalid_1;
  reg                 _zz_axil4Ctrl_bvalid_2;
  reg        [1:0]    _zz_axil4Ctrl_bresp;
  wire                when_Stream_l342;
  wire                axil4Ctrl_ar_readDataStage_valid;
  wire                axil4Ctrl_ar_readDataStage_ready;
  wire       [7:0]    axil4Ctrl_ar_readDataStage_payload_addr;
  wire       [2:0]    axil4Ctrl_ar_readDataStage_payload_prot;
  reg                 axil4Ctrl_ar_rValid;
  reg        [7:0]    axil4Ctrl_ar_rData_addr;
  reg        [2:0]    axil4Ctrl_ar_rData_prot;
  wire                when_Stream_l342_1;
  reg        [31:0]   readRsp_data;
  wire       [1:0]    readRsp_resp;
  wire                _zz_axil4Ctrl_rvalid;
  wire                writeOccur;
  wire                readOccur;
  wire       [4:0]    __cp_len;
  wire       [6:0]    __data_len;
  reg        [4:0]    __cp_len_driver;
  reg        [6:0]    __data_len_driver;

  CyclicPrefix rfClockArea_cp_core (
    .cp_len                             (clkCrossing_2_dataOut                              ), //i
    .data_len                           (clkCrossing_3_dataOut                              ), //i
    .raw_data_valid                     (raw_data_valid                                     ), //i
    .raw_data_ready                     (rfClockArea_cp_core_raw_data_ready                 ), //o
    .raw_data_payload_last              (raw_data_payload_last                              ), //i
    .raw_data_payload_fragment_cha_i    (raw_data_payload_fragment_cha_i                    ), //i
    .raw_data_payload_fragment_cha_q    (raw_data_payload_fragment_cha_q                    ), //i
    .result_valid                       (rfClockArea_cp_core_result_valid                   ), //o
    .result_payload_last                (rfClockArea_cp_core_result_payload_last            ), //o
    .result_payload_fragment_cha_i      (rfClockArea_cp_core_result_payload_fragment_cha_i  ), //o
    .result_payload_fragment_cha_q      (rfClockArea_cp_core_result_payload_fragment_cha_q  ), //o
    .rf_clk                             (rf_clk                                             ), //i
    .rf_resetn                          (rf_resetn                                          )  //i
  );
  ClkCrossing clkCrossing_2 (
    .dataIn       (__cp_len               ), //i
    .dataOut      (clkCrossing_2_dataOut  ), //o
    .clk          (clk                    ), //i
    .resetn       (resetn                 ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  ClkCrossing_1 clkCrossing_3 (
    .dataIn       (__data_len             ), //i
    .dataOut      (clkCrossing_3_dataOut  ), //o
    .clk          (clk                    ), //i
    .resetn       (resetn                 ), //i
    .rf_clk       (rf_clk                 ), //i
    .rf_resetn    (rf_resetn              )  //i
  );
  assign readHaltRequest = 1'b0;
  assign writeHaltRequest = 1'b0;
  assign writeJoinEvent_fire = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign writeJoinEvent_valid = (axil4Ctrl_awvalid && axil4Ctrl_wvalid);
  assign axil4Ctrl_awready = writeJoinEvent_fire;
  assign axil4Ctrl_wready = writeJoinEvent_fire;
  assign writeJoinEvent_translated_valid = writeJoinEvent_valid;
  assign writeJoinEvent_ready = writeJoinEvent_translated_ready;
  assign writeJoinEvent_translated_payload_resp = writeRsp_resp;
  assign _zz_axil4Ctrl_bvalid = (! writeHaltRequest);
  assign writeJoinEvent_translated_ready = (_zz_writeJoinEvent_translated_ready && _zz_axil4Ctrl_bvalid);
  always @(*) begin
    _zz_writeJoinEvent_translated_ready = axil4Ctrl_bready;
    if(when_Stream_l342) begin
      _zz_writeJoinEvent_translated_ready = 1'b1;
    end
  end

  assign when_Stream_l342 = (! _zz_axil4Ctrl_bvalid_1);
  assign _zz_axil4Ctrl_bvalid_1 = _zz_axil4Ctrl_bvalid_2;
  assign axil4Ctrl_bvalid = _zz_axil4Ctrl_bvalid_1;
  assign axil4Ctrl_bresp = _zz_axil4Ctrl_bresp;
  always @(*) begin
    axil4Ctrl_arready = axil4Ctrl_ar_readDataStage_ready;
    if(when_Stream_l342_1) begin
      axil4Ctrl_arready = 1'b1;
    end
  end

  assign when_Stream_l342_1 = (! axil4Ctrl_ar_readDataStage_valid);
  assign axil4Ctrl_ar_readDataStage_valid = axil4Ctrl_ar_rValid;
  assign axil4Ctrl_ar_readDataStage_payload_addr = axil4Ctrl_ar_rData_addr;
  assign axil4Ctrl_ar_readDataStage_payload_prot = axil4Ctrl_ar_rData_prot;
  assign _zz_axil4Ctrl_rvalid = (! readHaltRequest);
  assign axil4Ctrl_ar_readDataStage_ready = (axil4Ctrl_rready && _zz_axil4Ctrl_rvalid);
  assign axil4Ctrl_rvalid = (axil4Ctrl_ar_readDataStage_valid && _zz_axil4Ctrl_rvalid);
  assign axil4Ctrl_rdata = readRsp_data;
  assign axil4Ctrl_rresp = readRsp_resp;
  assign writeRsp_resp = 2'b00;
  assign readRsp_resp = 2'b00;
  always @(*) begin
    readRsp_data = 32'h0;
    case(axil4Ctrl_ar_readDataStage_payload_addr)
      8'h0 : begin
        readRsp_data[4 : 0] = __cp_len_driver;
      end
      8'h04 : begin
        readRsp_data[6 : 0] = __data_len_driver;
      end
      default : begin
      end
    endcase
  end

  assign writeOccur = (writeJoinEvent_valid && writeJoinEvent_ready);
  assign readOccur = (axil4Ctrl_rvalid && axil4Ctrl_rready);
  assign raw_data_ready = rfClockArea_cp_core_raw_data_ready;
  assign result_valid = rfClockArea_cp_core_result_valid;
  assign result_payload_last = rfClockArea_cp_core_result_payload_last;
  assign result_payload_fragment_cha_i = rfClockArea_cp_core_result_payload_fragment_cha_i;
  assign result_payload_fragment_cha_q = rfClockArea_cp_core_result_payload_fragment_cha_q;
  assign __cp_len = __cp_len_driver;
  assign __data_len = __data_len_driver;
  always @(posedge clk) begin
    if(!resetn) begin
      _zz_axil4Ctrl_bvalid_2 <= 1'b0;
      axil4Ctrl_ar_rValid <= 1'b0;
      __cp_len_driver <= 5'h10;
      __data_len_driver <= 7'h40;
    end else begin
      if(_zz_writeJoinEvent_translated_ready) begin
        _zz_axil4Ctrl_bvalid_2 <= (writeJoinEvent_translated_valid && _zz_axil4Ctrl_bvalid);
      end
      if(axil4Ctrl_arready) begin
        axil4Ctrl_ar_rValid <= axil4Ctrl_arvalid;
      end
      case(axil4Ctrl_awaddr)
        8'h0 : begin
          if(writeOccur) begin
            __cp_len_driver <= axil4Ctrl_wdata[4 : 0];
          end
        end
        8'h04 : begin
          if(writeOccur) begin
            __data_len_driver <= axil4Ctrl_wdata[6 : 0];
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    if(_zz_writeJoinEvent_translated_ready) begin
      _zz_axil4Ctrl_bresp <= writeJoinEvent_translated_payload_resp;
    end
    if(axil4Ctrl_arready) begin
      axil4Ctrl_ar_rData_addr <= axil4Ctrl_araddr;
      axil4Ctrl_ar_rData_prot <= axil4Ctrl_arprot;
    end
  end


endmodule

module ClkCrossing_1 (
  input      [6:0]    dataIn,
  output     [6:0]    dataOut,
  input               clk,
  input               resetn,
  input               rf_clk,
  input               rf_resetn
);
  reg        [6:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [6:0]    area_clkO_buf0;
  reg        [6:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge rf_clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module ClkCrossing (
  input      [4:0]    dataIn,
  output     [4:0]    dataOut,
  input               clk,
  input               resetn,
  input               rf_clk,
  input               rf_resetn
);
  reg        [4:0]    area_clkI_reg;
  (* async_reg = "true" *) reg        [4:0]    area_clkO_buf0;
  reg        [4:0]    area_clkO_buf1;

  assign dataOut = area_clkO_buf1;
  always @(posedge clk) begin
    area_clkI_reg <= dataIn;
  end

  always @(posedge rf_clk) begin
    area_clkO_buf0 <= area_clkI_reg;
    area_clkO_buf1 <= area_clkO_buf0;
  end


endmodule

module CyclicPrefix (
  input      [4:0]    cp_len,
  input      [6:0]    data_len,
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [15:0]   raw_data_payload_fragment_cha_i,
  input      [15:0]   raw_data_payload_fragment_cha_q,
  output              result_valid,
  output              result_payload_last,
  output     [15:0]   result_payload_fragment_cha_i,
  output     [15:0]   result_payload_fragment_cha_q,
  input               rf_clk,
  input               rf_resetn
);
  wire                raw_dataFifo_io_push_ready;
  wire                raw_dataFifo_io_pop_valid;
  wire                raw_dataFifo_io_pop_payload_last;
  wire       [15:0]   raw_dataFifo_io_pop_payload_fragment_cha_i;
  wire       [15:0]   raw_dataFifo_io_pop_payload_fragment_cha_q;
  wire       [6:0]    raw_dataFifo_io_occupancy;
  wire       [6:0]    raw_dataFifo_io_availability;
  wire       [6:0]    _zz_when_CyclicPrefix_l61;
  wire       [6:0]    _zz_when_CyclicPrefix_l61_1;
  wire       [6:0]    _zz_when_CyclicPrefix_l61_2;
  reg                 cp_en;
  reg                 fifo_pop_en;
  wire                raw_data_fire;
  reg        `CpStates_binary_sequential_type cp_state;
  wire                when_CyclicPrefix_l54;
  wire                when_CyclicPrefix_l61;
  `ifndef SYNTHESIS
  reg [55:0] cp_state_string;
  `endif


  assign _zz_when_CyclicPrefix_l61 = (_zz_when_CyclicPrefix_l61_1 - 7'h01);
  assign _zz_when_CyclicPrefix_l61_1 = (data_len - _zz_when_CyclicPrefix_l61_2);
  assign _zz_when_CyclicPrefix_l61_2 = {2'd0, cp_len};
  StreamFifo raw_dataFifo (
    .io_push_valid                     (raw_data_valid                              ), //i
    .io_push_ready                     (raw_dataFifo_io_push_ready                  ), //o
    .io_push_payload_last              (raw_data_payload_last                       ), //i
    .io_push_payload_fragment_cha_i    (raw_data_payload_fragment_cha_i             ), //i
    .io_push_payload_fragment_cha_q    (raw_data_payload_fragment_cha_q             ), //i
    .io_pop_valid                      (raw_dataFifo_io_pop_valid                   ), //o
    .io_pop_ready                      (fifo_pop_en                                 ), //i
    .io_pop_payload_last               (raw_dataFifo_io_pop_payload_last            ), //o
    .io_pop_payload_fragment_cha_i     (raw_dataFifo_io_pop_payload_fragment_cha_i  ), //o
    .io_pop_payload_fragment_cha_q     (raw_dataFifo_io_pop_payload_fragment_cha_q  ), //o
    .io_flush                          (1'b0                                        ), //i
    .io_occupancy                      (raw_dataFifo_io_occupancy                   ), //o
    .io_availability                   (raw_dataFifo_io_availability                ), //o
    .rf_clk                            (rf_clk                                      ), //i
    .rf_resetn                         (rf_resetn                                   )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(cp_state)
      `CpStates_binary_sequential_IDLE : cp_state_string = "IDLE   ";
      `CpStates_binary_sequential_CAPTURE : cp_state_string = "CAPTURE";
      `CpStates_binary_sequential_CP : cp_state_string = "CP     ";
      `CpStates_binary_sequential_DATA : cp_state_string = "DATA   ";
      default : cp_state_string = "???????";
    endcase
  end
  `endif

  assign raw_data_ready = raw_dataFifo_io_push_ready;
  assign raw_data_fire = (raw_data_valid && raw_data_ready);
  assign result_valid = (cp_en ? raw_data_fire : (raw_dataFifo_io_pop_valid && fifo_pop_en));
  assign result_payload_fragment_cha_i = (cp_en ? raw_data_payload_fragment_cha_i : raw_dataFifo_io_pop_payload_fragment_cha_i);
  assign result_payload_fragment_cha_q = (cp_en ? raw_data_payload_fragment_cha_q : raw_dataFifo_io_pop_payload_fragment_cha_q);
  assign result_payload_last = (cp_en ? 1'b0 : (raw_dataFifo_io_pop_payload_last && result_valid));
  assign when_CyclicPrefix_l54 = (raw_dataFifo_io_occupancy != 7'h0);
  assign when_CyclicPrefix_l61 = (_zz_when_CyclicPrefix_l61 <= raw_dataFifo_io_occupancy);
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      cp_en <= 1'b0;
      fifo_pop_en <= 1'b0;
      cp_state <= `CpStates_binary_sequential_IDLE;
    end else begin
      case(cp_state)
        `CpStates_binary_sequential_IDLE : begin
          if(when_CyclicPrefix_l54) begin
            cp_state <= `CpStates_binary_sequential_CAPTURE;
          end
          fifo_pop_en <= 1'b0;
          cp_en <= 1'b0;
        end
        `CpStates_binary_sequential_CAPTURE : begin
          if(when_CyclicPrefix_l61) begin
            cp_state <= `CpStates_binary_sequential_CP;
            cp_en <= 1'b1;
          end
        end
        `CpStates_binary_sequential_CP : begin
          if(raw_data_payload_last) begin
            cp_state <= `CpStates_binary_sequential_DATA;
            cp_en <= 1'b0;
            fifo_pop_en <= 1'b1;
          end
        end
        default : begin
          if(raw_dataFifo_io_pop_payload_last) begin
            cp_state <= `CpStates_binary_sequential_IDLE;
            fifo_pop_en <= 1'b0;
          end
        end
      endcase
    end
  end


endmodule

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input               io_push_payload_last,
  input      [15:0]   io_push_payload_fragment_cha_i,
  input      [15:0]   io_push_payload_fragment_cha_q,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [15:0]   io_pop_payload_fragment_cha_i,
  output     [15:0]   io_pop_payload_fragment_cha_q,
  input               io_flush,
  output     [6:0]    io_occupancy,
  output     [6:0]    io_availability,
  input               rf_clk,
  input               rf_resetn
);
  reg        [32:0]   _zz_logic_ram_port0;
  wire       [5:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [5:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [32:0]   _zz_logic_ram_port_1;
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
  wire       [32:0]   _zz_io_pop_payload_last;
  wire       [31:0]   _zz_io_pop_payload_fragment_cha_i;
  wire                when_Stream_l933;
  wire       [5:0]    logic_ptrDif;
  reg [32:0] logic_ram [0:63];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {5'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {5'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {{io_push_payload_fragment_cha_q,io_push_payload_fragment_cha_i},io_push_payload_last};
  always @(posedge rf_clk) begin
    if(_zz__zz_io_pop_payload_last) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge rf_clk) begin
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
  assign _zz_io_pop_payload_last = _zz_logic_ram_port0;
  assign _zz_io_pop_payload_fragment_cha_i = _zz_io_pop_payload_last[32 : 1];
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment_cha_i = _zz_io_pop_payload_fragment_cha_i[15 : 0];
  assign io_pop_payload_fragment_cha_q = _zz_io_pop_payload_fragment_cha_i[31 : 16];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge rf_clk) begin
    if(!rf_resetn) begin
      logic_pushPtr_value <= 6'h0;
      logic_popPtr_value <= 6'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l933) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule
