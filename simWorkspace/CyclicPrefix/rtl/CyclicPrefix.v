// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : CyclicPrefix
// Git hash  : 659c258a7d96f66a157e0b95738fe47528256e2a


`define CpStates_binary_sequential_type [1:0]
`define CpStates_binary_sequential_IDLE 2'b00
`define CpStates_binary_sequential_CAPTURE 2'b01
`define CpStates_binary_sequential_CP 2'b10
`define CpStates_binary_sequential_DATA 2'b11


module CyclicPrefix (
  input      [1:0]    cp_len,
  input      [3:0]    data_len,
  input               raw_data_valid,
  output              raw_data_ready,
  input               raw_data_payload_last,
  input      [31:0]   raw_data_payload_fragment_cha_i,
  input      [31:0]   raw_data_payload_fragment_cha_q,
  output              result_valid,
  output              result_payload_last,
  output     [31:0]   result_payload_fragment_cha_i,
  output     [31:0]   result_payload_fragment_cha_q,
  input               clk,
  input               reset
);
  wire                raw_dataFifo_io_push_ready;
  wire                raw_dataFifo_io_pop_valid;
  wire                raw_dataFifo_io_pop_payload_last;
  wire       [31:0]   raw_dataFifo_io_pop_payload_fragment_cha_i;
  wire       [31:0]   raw_dataFifo_io_pop_payload_fragment_cha_q;
  wire       [3:0]    raw_dataFifo_io_occupancy;
  wire       [3:0]    raw_dataFifo_io_availability;
  wire       [3:0]    _zz_when_CyclicPrefix_l61;
  wire       [3:0]    _zz_when_CyclicPrefix_l61_1;
  wire       [3:0]    _zz_when_CyclicPrefix_l61_2;
  reg                 cp_en;
  reg                 fifo_pop_en;
  wire                raw_data_fire;
  reg        `CpStates_binary_sequential_type cp_state;
  wire                when_CyclicPrefix_l54;
  wire                when_CyclicPrefix_l61;
  `ifndef SYNTHESIS
  reg [55:0] cp_state_string;
  `endif


  assign _zz_when_CyclicPrefix_l61 = (_zz_when_CyclicPrefix_l61_1 - 4'b0001);
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
    .clk                               (clk                                         ), //i
    .reset                             (reset                                       )  //i
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
  assign when_CyclicPrefix_l54 = (raw_dataFifo_io_occupancy != 4'b0000);
  assign when_CyclicPrefix_l61 = (_zz_when_CyclicPrefix_l61 <= raw_dataFifo_io_occupancy);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
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
  input      [31:0]   io_push_payload_fragment_cha_i,
  input      [31:0]   io_push_payload_fragment_cha_q,
  output              io_pop_valid,
  input               io_pop_ready,
  output              io_pop_payload_last,
  output     [31:0]   io_pop_payload_fragment_cha_i,
  output     [31:0]   io_pop_payload_fragment_cha_q,
  input               io_flush,
  output     [3:0]    io_occupancy,
  output     [3:0]    io_availability,
  input               clk,
  input               reset
);
  reg        [64:0]   _zz_logic_ram_port0;
  wire       [2:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [2:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz__zz_io_pop_payload_last;
  wire       [64:0]   _zz_logic_ram_port_1;
  wire       [2:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [2:0]    logic_pushPtr_valueNext;
  reg        [2:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [2:0]    logic_popPtr_valueNext;
  reg        [2:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire       [64:0]   _zz_io_pop_payload_last;
  wire       [63:0]   _zz_io_pop_payload_fragment_cha_i;
  wire                when_Stream_l933;
  wire       [2:0]    logic_ptrDif;
  reg [64:0] logic_ram [0:7];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {2'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {2'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz__zz_io_pop_payload_last = 1'b1;
  assign _zz_logic_ram_port_1 = {{io_push_payload_fragment_cha_q,io_push_payload_fragment_cha_i},io_push_payload_last};
  always @(posedge clk) begin
    if(_zz__zz_io_pop_payload_last) begin
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

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 3'b111);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 3'b000;
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

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 3'b111);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 3'b000;
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
  assign _zz_io_pop_payload_fragment_cha_i = _zz_io_pop_payload_last[64 : 1];
  assign io_pop_payload_last = _zz_io_pop_payload_last[0];
  assign io_pop_payload_fragment_cha_i = _zz_io_pop_payload_fragment_cha_i[31 : 0];
  assign io_pop_payload_fragment_cha_q = _zz_io_pop_payload_fragment_cha_i[63 : 32];
  assign when_Stream_l933 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_pushPtr_value <= 3'b000;
      logic_popPtr_value <= 3'b000;
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
