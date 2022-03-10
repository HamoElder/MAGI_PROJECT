// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : ModulatorRTL
// Git hash  : b90f7fc9b0893d6f01a499c7804b365a21d113e6



module ModulatorRTL (
  input               data_flow_unit_data_valid,
  input               data_flow_unit_data_payload_last,
  input      [7:0]    data_flow_unit_data_payload_fragment,
  output              data_flow_mod_iq_valid,
  output              data_flow_mod_iq_payload_last,
  output     [11:0]   data_flow_mod_iq_payload_fragment_cha_i,
  output     [11:0]   data_flow_mod_iq_payload_fragment_cha_q,
  input      [1:0]    w_en,
  input      [31:0]   w_addr,
  input      [31:0]   w_data,
  input      [31:0]   cnt_limit,
  input      [2:0]    select_1,
  input               clk,
  input               reset
);
  wire       [0:0]    mPSK_Modulator_Extension_mod_unit_data_payload_fragment;
  wire       [1:0]    mPSK_Modulator_Extension_mod_1_unit_data_payload_fragment;
  wire       [3:0]    mQAM_Modulator_Extension_mod_unit_data_payload_fragment;
  wire                mod_1_w_en;
  wire       [7:0]    mod_1_w_addr;
  wire       [23:0]   mod_1_w_data;
  wire                mod_2_w_en;
  wire       [6:0]    mod_2_w_addr;
  wire       [23:0]   mod_2_w_data;
  wire       [2:0]    mod_2_cnt_limit;
  wire       [6:0]    mod_2_data_flow_unit_data_payload_fragment;
  wire                flowDeMux_1_outputs_0_valid;
  wire                flowDeMux_1_outputs_0_payload_last;
  wire       [7:0]    flowDeMux_1_outputs_0_payload_fragment;
  wire                flowDeMux_1_outputs_1_valid;
  wire                flowDeMux_1_outputs_1_payload_last;
  wire       [7:0]    flowDeMux_1_outputs_1_payload_fragment;
  wire                flowDeMux_1_outputs_2_valid;
  wire                flowDeMux_1_outputs_2_payload_last;
  wire       [7:0]    flowDeMux_1_outputs_2_payload_fragment;
  wire                flowDeMux_1_outputs_3_valid;
  wire                flowDeMux_1_outputs_3_payload_last;
  wire       [7:0]    flowDeMux_1_outputs_3_payload_fragment;
  wire                flowDeMux_1_outputs_4_valid;
  wire                flowDeMux_1_outputs_4_payload_last;
  wire       [7:0]    flowDeMux_1_outputs_4_payload_fragment;
  wire                mPSK_Modulator_Extension_mod_mod_iq_valid;
  wire                mPSK_Modulator_Extension_mod_mod_iq_payload_last;
  wire       [11:0]   mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q;
  wire                mPSK_Modulator_Extension_mod_1_mod_iq_valid;
  wire                mPSK_Modulator_Extension_mod_1_mod_iq_payload_last;
  wire       [11:0]   mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_q;
  wire                mQAM_Modulator_Extension_mod_mod_iq_valid;
  wire                mQAM_Modulator_Extension_mod_mod_iq_payload_last;
  wire       [11:0]   mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q;
  wire                mod_1_data_flow_mod_iq_valid;
  wire                mod_1_data_flow_mod_iq_payload_last;
  wire       [11:0]   mod_1_data_flow_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   mod_1_data_flow_mod_iq_payload_fragment_cha_q;
  wire                mod_2_data_in_ready;
  wire                mod_2_data_flow_mod_iq_valid;
  wire                mod_2_data_flow_mod_iq_payload_last;
  wire       [11:0]   mod_2_data_flow_mod_iq_payload_fragment_cha_i;
  wire       [11:0]   mod_2_data_flow_mod_iq_payload_fragment_cha_q;
  wire                flowMux_1_output_valid;
  wire                flowMux_1_output_payload_last;
  wire       [11:0]   flowMux_1_output_payload_fragment_cha_i;
  wire       [11:0]   flowMux_1_output_payload_fragment_cha_q;
  wire       [31:0]   _zz_w_addr;
  wire       [31:0]   _zz_w_data;
  wire       [31:0]   _zz_w_addr_1;
  wire       [31:0]   _zz_w_data_1;
  wire       [31:0]   _zz_cnt_limit;
  wire                _zz_unit_data_valid;
  wire                _zz_unit_data_payload_last;
  wire                _zz_unit_data_valid_1;
  wire                _zz_unit_data_payload_last_1;
  wire                _zz_unit_data_valid_2;
  wire                _zz_unit_data_payload_last_2;
  wire                _zz_data_flow_unit_data_valid;
  wire                _zz_data_flow_unit_data_payload_last;
  wire                _zz_data_flow_unit_data_valid_1;
  wire                _zz_data_flow_unit_data_payload_last_1;

  assign _zz_w_addr = w_addr;
  assign _zz_w_data = w_data;
  assign _zz_w_addr_1 = w_addr;
  assign _zz_w_data_1 = w_data;
  assign _zz_cnt_limit = cnt_limit;
  FlowDeMux flowDeMux_1 (
    .input_valid                   (data_flow_unit_data_valid               ), //i
    .input_payload_last            (data_flow_unit_data_payload_last        ), //i
    .input_payload_fragment        (data_flow_unit_data_payload_fragment    ), //i
    .select_1                      (select_1                                ), //i
    .outputs_0_valid               (flowDeMux_1_outputs_0_valid             ), //o
    .outputs_0_payload_last        (flowDeMux_1_outputs_0_payload_last      ), //o
    .outputs_0_payload_fragment    (flowDeMux_1_outputs_0_payload_fragment  ), //o
    .outputs_1_valid               (flowDeMux_1_outputs_1_valid             ), //o
    .outputs_1_payload_last        (flowDeMux_1_outputs_1_payload_last      ), //o
    .outputs_1_payload_fragment    (flowDeMux_1_outputs_1_payload_fragment  ), //o
    .outputs_2_valid               (flowDeMux_1_outputs_2_valid             ), //o
    .outputs_2_payload_last        (flowDeMux_1_outputs_2_payload_last      ), //o
    .outputs_2_payload_fragment    (flowDeMux_1_outputs_2_payload_fragment  ), //o
    .outputs_3_valid               (flowDeMux_1_outputs_3_valid             ), //o
    .outputs_3_payload_last        (flowDeMux_1_outputs_3_payload_last      ), //o
    .outputs_3_payload_fragment    (flowDeMux_1_outputs_3_payload_fragment  ), //o
    .outputs_4_valid               (flowDeMux_1_outputs_4_valid             ), //o
    .outputs_4_payload_last        (flowDeMux_1_outputs_4_payload_last      ), //o
    .outputs_4_payload_fragment    (flowDeMux_1_outputs_4_payload_fragment  )  //o
  );
  mPSKMod mPSK_Modulator_Extension_mod (
    .unit_data_valid                  (_zz_unit_data_valid                                         ), //i
    .unit_data_payload_last           (_zz_unit_data_payload_last                                  ), //i
    .unit_data_payload_fragment       (mPSK_Modulator_Extension_mod_unit_data_payload_fragment     ), //i
    .mod_iq_valid                     (mPSK_Modulator_Extension_mod_mod_iq_valid                   ), //o
    .mod_iq_payload_last              (mPSK_Modulator_Extension_mod_mod_iq_payload_last            ), //o
    .mod_iq_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i  ), //o
    .mod_iq_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q  ), //o
    .clk                              (clk                                                         ), //i
    .reset                            (reset                                                       )  //i
  );
  mPSKMod_1 mPSK_Modulator_Extension_mod_1 (
    .unit_data_valid                  (_zz_unit_data_valid_1                                         ), //i
    .unit_data_payload_last           (_zz_unit_data_payload_last_1                                  ), //i
    .unit_data_payload_fragment       (mPSK_Modulator_Extension_mod_1_unit_data_payload_fragment     ), //i
    .mod_iq_valid                     (mPSK_Modulator_Extension_mod_1_mod_iq_valid                   ), //o
    .mod_iq_payload_last              (mPSK_Modulator_Extension_mod_1_mod_iq_payload_last            ), //o
    .mod_iq_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_i  ), //o
    .mod_iq_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_q  ), //o
    .clk                              (clk                                                           ), //i
    .reset                            (reset                                                         )  //i
  );
  mQAMMod mQAM_Modulator_Extension_mod (
    .unit_data_valid                  (_zz_unit_data_valid_2                                       ), //i
    .unit_data_payload_last           (_zz_unit_data_payload_last_2                                ), //i
    .unit_data_payload_fragment       (mQAM_Modulator_Extension_mod_unit_data_payload_fragment     ), //i
    .mod_iq_valid                     (mQAM_Modulator_Extension_mod_mod_iq_valid                   ), //o
    .mod_iq_payload_last              (mQAM_Modulator_Extension_mod_mod_iq_payload_last            ), //o
    .mod_iq_payload_fragment_cha_i    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i  ), //o
    .mod_iq_payload_fragment_cha_q    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q  ), //o
    .clk                              (clk                                                         ), //i
    .reset                            (reset                                                       )  //i
  );
  lookUpMod mod_1 (
    .w_en                                       (mod_1_w_en                                     ), //i
    .w_addr                                     (mod_1_w_addr                                   ), //i
    .w_data                                     (mod_1_w_data                                   ), //i
    .data_flow_unit_data_valid                  (_zz_data_flow_unit_data_valid                  ), //i
    .data_flow_unit_data_payload_last           (_zz_data_flow_unit_data_payload_last           ), //i
    .data_flow_unit_data_payload_fragment       (flowDeMux_1_outputs_3_payload_fragment         ), //i
    .data_flow_mod_iq_valid                     (mod_1_data_flow_mod_iq_valid                   ), //o
    .data_flow_mod_iq_payload_last              (mod_1_data_flow_mod_iq_payload_last            ), //o
    .data_flow_mod_iq_payload_fragment_cha_i    (mod_1_data_flow_mod_iq_payload_fragment_cha_i  ), //o
    .data_flow_mod_iq_payload_fragment_cha_q    (mod_1_data_flow_mod_iq_payload_fragment_cha_q  ), //o
    .clk                                        (clk                                            ), //i
    .reset                                      (reset                                          )  //i
  );
  lookUpMod_1 mod_2 (
    .w_en                                       (mod_2_w_en                                     ), //i
    .w_addr                                     (mod_2_w_addr                                   ), //i
    .w_data                                     (mod_2_w_data                                   ), //i
    .cnt_limit                                  (mod_2_cnt_limit                                ), //i
    .data_in_ready                              (mod_2_data_in_ready                            ), //o
    .data_flow_unit_data_valid                  (_zz_data_flow_unit_data_valid_1                ), //i
    .data_flow_unit_data_payload_last           (_zz_data_flow_unit_data_payload_last_1         ), //i
    .data_flow_unit_data_payload_fragment       (mod_2_data_flow_unit_data_payload_fragment     ), //i
    .data_flow_mod_iq_valid                     (mod_2_data_flow_mod_iq_valid                   ), //o
    .data_flow_mod_iq_payload_last              (mod_2_data_flow_mod_iq_payload_last            ), //o
    .data_flow_mod_iq_payload_fragment_cha_i    (mod_2_data_flow_mod_iq_payload_fragment_cha_i  ), //o
    .data_flow_mod_iq_payload_fragment_cha_q    (mod_2_data_flow_mod_iq_payload_fragment_cha_q  ), //o
    .clk                                        (clk                                            ), //i
    .reset                                      (reset                                          )  //i
  );
  FlowMux flowMux_1 (
    .inputs_0_valid                     (mPSK_Modulator_Extension_mod_mod_iq_valid                     ), //i
    .inputs_0_payload_last              (mPSK_Modulator_Extension_mod_mod_iq_payload_last              ), //i
    .inputs_0_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i    ), //i
    .inputs_0_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q    ), //i
    .inputs_1_valid                     (mPSK_Modulator_Extension_mod_1_mod_iq_valid                   ), //i
    .inputs_1_payload_last              (mPSK_Modulator_Extension_mod_1_mod_iq_payload_last            ), //i
    .inputs_1_payload_fragment_cha_i    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_i  ), //i
    .inputs_1_payload_fragment_cha_q    (mPSK_Modulator_Extension_mod_1_mod_iq_payload_fragment_cha_q  ), //i
    .inputs_2_valid                     (mQAM_Modulator_Extension_mod_mod_iq_valid                     ), //i
    .inputs_2_payload_last              (mQAM_Modulator_Extension_mod_mod_iq_payload_last              ), //i
    .inputs_2_payload_fragment_cha_i    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_i    ), //i
    .inputs_2_payload_fragment_cha_q    (mQAM_Modulator_Extension_mod_mod_iq_payload_fragment_cha_q    ), //i
    .inputs_3_valid                     (mod_1_data_flow_mod_iq_valid                                  ), //i
    .inputs_3_payload_last              (mod_1_data_flow_mod_iq_payload_last                           ), //i
    .inputs_3_payload_fragment_cha_i    (mod_1_data_flow_mod_iq_payload_fragment_cha_i                 ), //i
    .inputs_3_payload_fragment_cha_q    (mod_1_data_flow_mod_iq_payload_fragment_cha_q                 ), //i
    .inputs_4_valid                     (mod_2_data_flow_mod_iq_valid                                  ), //i
    .inputs_4_payload_last              (mod_2_data_flow_mod_iq_payload_last                           ), //i
    .inputs_4_payload_fragment_cha_i    (mod_2_data_flow_mod_iq_payload_fragment_cha_i                 ), //i
    .inputs_4_payload_fragment_cha_q    (mod_2_data_flow_mod_iq_payload_fragment_cha_q                 ), //i
    .select_1                           (select_1                                                      ), //i
    .output_valid                       (flowMux_1_output_valid                                        ), //o
    .output_payload_last                (flowMux_1_output_payload_last                                 ), //o
    .output_payload_fragment_cha_i      (flowMux_1_output_payload_fragment_cha_i                       ), //o
    .output_payload_fragment_cha_q      (flowMux_1_output_payload_fragment_cha_q                       )  //o
  );
  assign _zz_unit_data_valid = flowDeMux_1_outputs_0_valid;
  assign _zz_unit_data_payload_last = flowDeMux_1_outputs_0_payload_last;
  assign mPSK_Modulator_Extension_mod_unit_data_payload_fragment = flowDeMux_1_outputs_0_payload_fragment[0:0];
  assign _zz_unit_data_valid_1 = flowDeMux_1_outputs_1_valid;
  assign _zz_unit_data_payload_last_1 = flowDeMux_1_outputs_1_payload_last;
  assign mPSK_Modulator_Extension_mod_1_unit_data_payload_fragment = flowDeMux_1_outputs_1_payload_fragment[1:0];
  assign _zz_unit_data_valid_2 = flowDeMux_1_outputs_2_valid;
  assign _zz_unit_data_payload_last_2 = flowDeMux_1_outputs_2_payload_last;
  assign mQAM_Modulator_Extension_mod_unit_data_payload_fragment = flowDeMux_1_outputs_2_payload_fragment[3:0];
  assign _zz_data_flow_unit_data_valid = flowDeMux_1_outputs_3_valid;
  assign _zz_data_flow_unit_data_payload_last = flowDeMux_1_outputs_3_payload_last;
  assign mod_1_w_en = (w_en == 2'b00);
  assign mod_1_w_addr = _zz_w_addr[7:0];
  assign mod_1_w_data = _zz_w_data[23:0];
  assign _zz_data_flow_unit_data_valid_1 = flowDeMux_1_outputs_4_valid;
  assign _zz_data_flow_unit_data_payload_last_1 = flowDeMux_1_outputs_4_payload_last;
  assign mod_2_data_flow_unit_data_payload_fragment = flowDeMux_1_outputs_4_payload_fragment[6:0];
  assign mod_2_w_en = (w_en == 2'b01);
  assign mod_2_w_addr = _zz_w_addr_1[6:0];
  assign mod_2_w_data = _zz_w_data_1[23:0];
  assign mod_2_cnt_limit = _zz_cnt_limit[2:0];
  assign data_flow_mod_iq_valid = flowMux_1_output_valid;
  assign data_flow_mod_iq_payload_last = flowMux_1_output_payload_last;
  assign data_flow_mod_iq_payload_fragment_cha_i = flowMux_1_output_payload_fragment_cha_i;
  assign data_flow_mod_iq_payload_fragment_cha_q = flowMux_1_output_payload_fragment_cha_q;

endmodule

module FlowMux (
  input               inputs_0_valid,
  input               inputs_0_payload_last,
  input      [11:0]   inputs_0_payload_fragment_cha_i,
  input      [11:0]   inputs_0_payload_fragment_cha_q,
  input               inputs_1_valid,
  input               inputs_1_payload_last,
  input      [11:0]   inputs_1_payload_fragment_cha_i,
  input      [11:0]   inputs_1_payload_fragment_cha_q,
  input               inputs_2_valid,
  input               inputs_2_payload_last,
  input      [11:0]   inputs_2_payload_fragment_cha_i,
  input      [11:0]   inputs_2_payload_fragment_cha_q,
  input               inputs_3_valid,
  input               inputs_3_payload_last,
  input      [11:0]   inputs_3_payload_fragment_cha_i,
  input      [11:0]   inputs_3_payload_fragment_cha_q,
  input               inputs_4_valid,
  input               inputs_4_payload_last,
  input      [11:0]   inputs_4_payload_fragment_cha_i,
  input      [11:0]   inputs_4_payload_fragment_cha_q,
  input      [2:0]    select_1,
  output              output_valid,
  output              output_payload_last,
  output     [11:0]   output_payload_fragment_cha_i,
  output     [11:0]   output_payload_fragment_cha_q
);
  reg                 _zz_output_valid;
  reg                 _zz_output_payload_last;
  reg        [11:0]   _zz_output_payload_fragment_cha_i;
  reg        [11:0]   _zz_output_payload_fragment_cha_q;

  always @(*) begin
    case(select_1)
      3'b000 : begin
        _zz_output_valid = inputs_0_valid;
        _zz_output_payload_last = inputs_0_payload_last;
        _zz_output_payload_fragment_cha_i = inputs_0_payload_fragment_cha_i;
        _zz_output_payload_fragment_cha_q = inputs_0_payload_fragment_cha_q;
      end
      3'b001 : begin
        _zz_output_valid = inputs_1_valid;
        _zz_output_payload_last = inputs_1_payload_last;
        _zz_output_payload_fragment_cha_i = inputs_1_payload_fragment_cha_i;
        _zz_output_payload_fragment_cha_q = inputs_1_payload_fragment_cha_q;
      end
      3'b010 : begin
        _zz_output_valid = inputs_2_valid;
        _zz_output_payload_last = inputs_2_payload_last;
        _zz_output_payload_fragment_cha_i = inputs_2_payload_fragment_cha_i;
        _zz_output_payload_fragment_cha_q = inputs_2_payload_fragment_cha_q;
      end
      3'b011 : begin
        _zz_output_valid = inputs_3_valid;
        _zz_output_payload_last = inputs_3_payload_last;
        _zz_output_payload_fragment_cha_i = inputs_3_payload_fragment_cha_i;
        _zz_output_payload_fragment_cha_q = inputs_3_payload_fragment_cha_q;
      end
      default : begin
        _zz_output_valid = inputs_4_valid;
        _zz_output_payload_last = inputs_4_payload_last;
        _zz_output_payload_fragment_cha_i = inputs_4_payload_fragment_cha_i;
        _zz_output_payload_fragment_cha_q = inputs_4_payload_fragment_cha_q;
      end
    endcase
  end

  assign output_valid = _zz_output_valid;
  assign output_payload_last = _zz_output_payload_last;
  assign output_payload_fragment_cha_i = _zz_output_payload_fragment_cha_i;
  assign output_payload_fragment_cha_q = _zz_output_payload_fragment_cha_q;

endmodule

module lookUpMod_1 (
  input               w_en,
  input      [6:0]    w_addr,
  input      [23:0]   w_data,
  input      [2:0]    cnt_limit,
  output              data_in_ready,
  input               data_flow_unit_data_valid,
  input               data_flow_unit_data_payload_last,
  input      [6:0]    data_flow_unit_data_payload_fragment,
  output reg          data_flow_mod_iq_valid,
  output reg          data_flow_mod_iq_payload_last,
  output reg [11:0]   data_flow_mod_iq_payload_fragment_cha_i,
  output reg [11:0]   data_flow_mod_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);
  reg        [23:0]   _zz_code_map_port1;
  wire       [23:0]   _zz_code_map_port;
  wire       [2:0]    _zz__zz_data_in_ready;
  wire       [6:0]    _zz_code_map_port_1;
  wire       [6:0]    _zz__zz_data_flow_mod_iq_payload_fragment_cha_i_2;
  reg                 data_flow_unit_data_payload_regNext_last;
  reg        [6:0]    data_flow_unit_data_payload_regNext_fragment;
  reg                 unit_valid;
  reg                 unit_last;
  reg        [2:0]    _zz_data_in_ready;
  wire                when_lookUpMod_l58;
  wire                when_lookUpMod_l61;
  wire                _zz_data_flow_mod_iq_payload_fragment_cha_i;
  wire       [9:0]    _zz_data_flow_mod_iq_payload_fragment_cha_i_1;
  wire       [23:0]   _zz_data_flow_mod_iq_payload_fragment_cha_i_2;
  wire                when_lookUpMod_l70;
  reg [23:0] code_map [0:127];

  assign _zz__zz_data_in_ready = (_zz_data_in_ready + 3'b001);
  assign _zz__zz_data_flow_mod_iq_payload_fragment_cha_i_2 = _zz_data_flow_mod_iq_payload_fragment_cha_i_1[6:0];
  assign _zz_code_map_port = w_data;
  always @(posedge clk) begin
    if(w_en) begin
      code_map[w_addr] <= _zz_code_map_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_data_flow_mod_iq_payload_fragment_cha_i) begin
      _zz_code_map_port1 <= code_map[_zz__zz_data_flow_mod_iq_payload_fragment_cha_i_2];
    end
  end

  assign when_lookUpMod_l58 = (data_flow_unit_data_valid && data_in_ready);
  assign when_lookUpMod_l61 = (_zz_data_in_ready != 3'b000);
  assign data_in_ready = (_zz_data_in_ready == 3'b000);
  assign _zz_data_flow_mod_iq_payload_fragment_cha_i = (! w_en);
  assign _zz_data_flow_mod_iq_payload_fragment_cha_i_1 = {data_flow_unit_data_payload_regNext_fragment,_zz_data_in_ready};
  assign _zz_data_flow_mod_iq_payload_fragment_cha_i_2 = _zz_code_map_port1;
  assign when_lookUpMod_l70 = ((unit_valid || (_zz_data_in_ready != 3'b000)) && (! w_en));
  always @(*) begin
    if(when_lookUpMod_l70) begin
      data_flow_mod_iq_payload_fragment_cha_i = _zz_data_flow_mod_iq_payload_fragment_cha_i_2[23 : 12];
    end else begin
      data_flow_mod_iq_payload_fragment_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(when_lookUpMod_l70) begin
      data_flow_mod_iq_payload_fragment_cha_q = _zz_data_flow_mod_iq_payload_fragment_cha_i_2[11 : 0];
    end else begin
      data_flow_mod_iq_payload_fragment_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(when_lookUpMod_l70) begin
      data_flow_mod_iq_valid = 1'b1;
    end else begin
      data_flow_mod_iq_valid = 1'b0;
    end
  end

  always @(*) begin
    if(when_lookUpMod_l70) begin
      data_flow_mod_iq_payload_last = unit_last;
    end else begin
      data_flow_mod_iq_payload_last = 1'b0;
    end
  end

  always @(posedge clk) begin
    data_flow_unit_data_payload_regNext_last <= data_flow_unit_data_payload_last;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      data_flow_unit_data_payload_regNext_fragment <= 7'h0;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
      _zz_data_in_ready <= 3'b000;
    end else begin
      data_flow_unit_data_payload_regNext_fragment <= data_flow_unit_data_payload_fragment;
      unit_valid <= data_flow_unit_data_valid;
      unit_last <= data_flow_unit_data_payload_last;
      if(when_lookUpMod_l58) begin
        _zz_data_in_ready <= (_zz_data_in_ready + 3'b001);
      end else begin
        if(when_lookUpMod_l61) begin
          _zz_data_in_ready <= ((_zz_data_in_ready < cnt_limit) ? _zz__zz_data_in_ready : 3'b000);
        end
      end
    end
  end


endmodule

module lookUpMod (
  input               w_en,
  input      [7:0]    w_addr,
  input      [23:0]   w_data,
  input               data_flow_unit_data_valid,
  input               data_flow_unit_data_payload_last,
  input      [7:0]    data_flow_unit_data_payload_fragment,
  output reg          data_flow_mod_iq_valid,
  output reg          data_flow_mod_iq_payload_last,
  output reg [11:0]   data_flow_mod_iq_payload_fragment_cha_i,
  output reg [11:0]   data_flow_mod_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);
  reg        [23:0]   _zz_code_map_port1;
  wire       [23:0]   _zz_code_map_port;
  reg                 data_flow_unit_data_payload_regNext_last;
  reg        [7:0]    data_flow_unit_data_payload_regNext_fragment;
  reg                 unit_valid;
  reg                 unit_last;
  wire                _zz_data_flow_mod_iq_payload_fragment_cha_i;
  wire       [23:0]   _zz_data_flow_mod_iq_payload_fragment_cha_i_1;
  wire                when_lookUpMod_l87;
  reg [23:0] code_map [0:255];

  assign _zz_code_map_port = w_data;
  always @(posedge clk) begin
    if(w_en) begin
      code_map[w_addr] <= _zz_code_map_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_data_flow_mod_iq_payload_fragment_cha_i) begin
      _zz_code_map_port1 <= code_map[data_flow_unit_data_payload_regNext_fragment];
    end
  end

  assign _zz_data_flow_mod_iq_payload_fragment_cha_i = (! w_en);
  assign _zz_data_flow_mod_iq_payload_fragment_cha_i_1 = _zz_code_map_port1;
  assign when_lookUpMod_l87 = (unit_valid && (! w_en));
  always @(*) begin
    if(when_lookUpMod_l87) begin
      data_flow_mod_iq_payload_fragment_cha_i = _zz_data_flow_mod_iq_payload_fragment_cha_i_1[23 : 12];
    end else begin
      data_flow_mod_iq_payload_fragment_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(when_lookUpMod_l87) begin
      data_flow_mod_iq_payload_fragment_cha_q = _zz_data_flow_mod_iq_payload_fragment_cha_i_1[11 : 0];
    end else begin
      data_flow_mod_iq_payload_fragment_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(when_lookUpMod_l87) begin
      data_flow_mod_iq_valid = 1'b1;
    end else begin
      data_flow_mod_iq_valid = 1'b0;
    end
  end

  always @(*) begin
    if(when_lookUpMod_l87) begin
      data_flow_mod_iq_payload_last = unit_last;
    end else begin
      data_flow_mod_iq_payload_last = 1'b0;
    end
  end

  always @(posedge clk) begin
    data_flow_unit_data_payload_regNext_last <= data_flow_unit_data_payload_last;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      data_flow_unit_data_payload_regNext_fragment <= 8'h0;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
    end else begin
      data_flow_unit_data_payload_regNext_fragment <= data_flow_unit_data_payload_fragment;
      unit_valid <= data_flow_unit_data_valid;
      unit_last <= data_flow_unit_data_payload_last;
    end
  end


endmodule

module mQAMMod (
  input               unit_data_valid,
  input               unit_data_payload_last,
  input      [3:0]    unit_data_payload_fragment,
  output reg          mod_iq_valid,
  output reg          mod_iq_payload_last,
  output reg [11:0]   mod_iq_payload_fragment_cha_i,
  output reg [11:0]   mod_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);
  reg        [11:0]   _zz_mod_iq_payload_fragment_cha_i;
  reg        [11:0]   _zz_mod_iq_payload_fragment_cha_q;
  wire       [11:0]   codeTableI_0;
  wire       [11:0]   codeTableI_1;
  wire       [11:0]   codeTableI_2;
  wire       [11:0]   codeTableI_3;
  wire       [11:0]   codeTableQ_0;
  wire       [11:0]   codeTableQ_1;
  wire       [11:0]   codeTableQ_2;
  wire       [11:0]   codeTableQ_3;
  reg                 unit_data_payload_regNext_last;
  reg        [3:0]    unit_data_payload_regNext_fragment;
  reg                 unit_valid;
  reg                 unit_last;
  wire       [1:0]    data_div_0;
  wire       [1:0]    data_div_1;

  always @(*) begin
    case(data_div_1)
      2'b00 : begin
        _zz_mod_iq_payload_fragment_cha_i = codeTableI_0;
      end
      2'b01 : begin
        _zz_mod_iq_payload_fragment_cha_i = codeTableI_1;
      end
      2'b10 : begin
        _zz_mod_iq_payload_fragment_cha_i = codeTableI_2;
      end
      default : begin
        _zz_mod_iq_payload_fragment_cha_i = codeTableI_3;
      end
    endcase
  end

  always @(*) begin
    case(data_div_0)
      2'b00 : begin
        _zz_mod_iq_payload_fragment_cha_q = codeTableQ_0;
      end
      2'b01 : begin
        _zz_mod_iq_payload_fragment_cha_q = codeTableQ_1;
      end
      2'b10 : begin
        _zz_mod_iq_payload_fragment_cha_q = codeTableQ_2;
      end
      default : begin
        _zz_mod_iq_payload_fragment_cha_q = codeTableQ_3;
      end
    endcase
  end

  assign codeTableI_0 = 12'hc35;
  assign codeTableQ_0 = 12'hc35;
  assign codeTableI_1 = 12'hebc;
  assign codeTableQ_1 = 12'hebc;
  assign codeTableI_2 = 12'h3ca;
  assign codeTableQ_2 = 12'h3ca;
  assign codeTableI_3 = 12'h143;
  assign codeTableQ_3 = 12'h143;
  assign data_div_0 = unit_data_payload_regNext_fragment[1 : 0];
  assign data_div_1 = unit_data_payload_regNext_fragment[3 : 2];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_i = _zz_mod_iq_payload_fragment_cha_i;
    end else begin
      mod_iq_payload_fragment_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_q = _zz_mod_iq_payload_fragment_cha_q;
    end else begin
      mod_iq_payload_fragment_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_last = unit_last;
    end else begin
      mod_iq_payload_last = 1'b0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge clk) begin
    unit_data_payload_regNext_last <= unit_data_payload_last;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      unit_data_payload_regNext_fragment <= 4'b0000;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
    end else begin
      unit_data_payload_regNext_fragment <= unit_data_payload_fragment;
      unit_valid <= unit_data_valid;
      unit_last <= unit_data_payload_last;
    end
  end


endmodule

module mPSKMod_1 (
  input               unit_data_valid,
  input               unit_data_payload_last,
  input      [1:0]    unit_data_payload_fragment,
  output reg          mod_iq_valid,
  output reg          mod_iq_payload_last,
  output reg [11:0]   mod_iq_payload_fragment_cha_i,
  output reg [11:0]   mod_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);
  reg        [23:0]   _zz__zz_mod_iq_0;
  wire       [23:0]   codeTable_0;
  wire       [23:0]   codeTable_1;
  wire       [23:0]   codeTable_2;
  wire       [23:0]   codeTable_3;
  reg                 unit_data_payload_regNext_last;
  reg        [1:0]    unit_data_payload_regNext_fragment;
  reg                 unit_valid;
  reg                 unit_last;
  wire       [23:0]   _zz_mod_iq_0;
  wire       [11:0]   mod_iq_0;
  wire       [11:0]   mod_iq_1;

  always @(*) begin
    case(unit_data_payload_regNext_fragment)
      2'b00 : begin
        _zz__zz_mod_iq_0 = codeTable_0;
      end
      2'b01 : begin
        _zz__zz_mod_iq_0 = codeTable_1;
      end
      2'b10 : begin
        _zz__zz_mod_iq_0 = codeTable_2;
      end
      default : begin
        _zz__zz_mod_iq_0 = codeTable_3;
      end
    endcase
  end

  assign codeTable_0 = 24'ha59a59;
  assign codeTable_1 = 24'ha595a7;
  assign codeTable_2 = 24'h5a7a59;
  assign codeTable_3 = 24'h5a75a7;
  assign _zz_mod_iq_0 = _zz__zz_mod_iq_0;
  assign mod_iq_0 = _zz_mod_iq_0[11 : 0];
  assign mod_iq_1 = _zz_mod_iq_0[23 : 12];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_i = mod_iq_1;
    end else begin
      mod_iq_payload_fragment_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_q = mod_iq_0;
    end else begin
      mod_iq_payload_fragment_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_last = unit_last;
    end else begin
      mod_iq_payload_last = 1'b0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge clk) begin
    unit_data_payload_regNext_last <= unit_data_payload_last;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      unit_data_payload_regNext_fragment <= 2'b00;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
    end else begin
      unit_data_payload_regNext_fragment <= unit_data_payload_fragment;
      unit_valid <= unit_data_valid;
      unit_last <= unit_data_payload_last;
    end
  end


endmodule

module mPSKMod (
  input               unit_data_valid,
  input               unit_data_payload_last,
  input      [0:0]    unit_data_payload_fragment,
  output reg          mod_iq_valid,
  output reg          mod_iq_payload_last,
  output reg [11:0]   mod_iq_payload_fragment_cha_i,
  output reg [11:0]   mod_iq_payload_fragment_cha_q,
  input               clk,
  input               reset
);
  reg        [23:0]   _zz__zz_mod_iq_0;
  wire       [23:0]   codeTable_0;
  wire       [23:0]   codeTable_1;
  reg                 unit_data_payload_regNext_last;
  reg        [0:0]    unit_data_payload_regNext_fragment;
  reg                 unit_valid;
  reg                 unit_last;
  wire       [23:0]   _zz_mod_iq_0;
  wire       [11:0]   mod_iq_0;
  wire       [11:0]   mod_iq_1;

  always @(*) begin
    case(unit_data_payload_regNext_fragment)
      1'b0 : begin
        _zz__zz_mod_iq_0 = codeTable_0;
      end
      default : begin
        _zz__zz_mod_iq_0 = codeTable_1;
      end
    endcase
  end

  assign codeTable_0 = 24'h801000;
  assign codeTable_1 = 24'h7ff000;
  assign _zz_mod_iq_0 = _zz__zz_mod_iq_0;
  assign mod_iq_0 = _zz_mod_iq_0[11 : 0];
  assign mod_iq_1 = _zz_mod_iq_0[23 : 12];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_i = mod_iq_1;
    end else begin
      mod_iq_payload_fragment_cha_i = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_fragment_cha_q = mod_iq_0;
    end else begin
      mod_iq_payload_fragment_cha_q = 12'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_last = unit_last;
    end else begin
      mod_iq_payload_last = 1'b0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge clk) begin
    unit_data_payload_regNext_last <= unit_data_payload_last;
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      unit_data_payload_regNext_fragment <= 1'b0;
      unit_valid <= 1'b0;
      unit_last <= 1'b0;
    end else begin
      unit_data_payload_regNext_fragment <= unit_data_payload_fragment;
      unit_valid <= unit_data_valid;
      unit_last <= unit_data_payload_last;
    end
  end


endmodule

module FlowDeMux (
  input               input_valid,
  input               input_payload_last,
  input      [7:0]    input_payload_fragment,
  input      [2:0]    select_1,
  output reg          outputs_0_valid,
  output reg          outputs_0_payload_last,
  output reg [7:0]    outputs_0_payload_fragment,
  output reg          outputs_1_valid,
  output reg          outputs_1_payload_last,
  output reg [7:0]    outputs_1_payload_fragment,
  output reg          outputs_2_valid,
  output reg          outputs_2_payload_last,
  output reg [7:0]    outputs_2_payload_fragment,
  output reg          outputs_3_valid,
  output reg          outputs_3_payload_last,
  output reg [7:0]    outputs_3_payload_fragment,
  output reg          outputs_4_valid,
  output reg          outputs_4_payload_last,
  output reg [7:0]    outputs_4_payload_fragment
);
  wire                when_FlowDeMux_l16;
  wire                when_FlowDeMux_l16_1;
  wire                when_FlowDeMux_l16_2;
  wire                when_FlowDeMux_l16_3;
  wire                when_FlowDeMux_l16_4;

  assign when_FlowDeMux_l16 = (3'b000 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l16) begin
      outputs_0_valid = 1'b0;
    end else begin
      outputs_0_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16) begin
      outputs_0_payload_last = 1'b0;
    end else begin
      outputs_0_payload_last = input_payload_last;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16) begin
      outputs_0_payload_fragment = 8'h0;
    end else begin
      outputs_0_payload_fragment = input_payload_fragment;
    end
  end

  assign when_FlowDeMux_l16_1 = (3'b001 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l16_1) begin
      outputs_1_valid = 1'b0;
    end else begin
      outputs_1_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_1) begin
      outputs_1_payload_last = 1'b0;
    end else begin
      outputs_1_payload_last = input_payload_last;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_1) begin
      outputs_1_payload_fragment = 8'h0;
    end else begin
      outputs_1_payload_fragment = input_payload_fragment;
    end
  end

  assign when_FlowDeMux_l16_2 = (3'b010 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l16_2) begin
      outputs_2_valid = 1'b0;
    end else begin
      outputs_2_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_2) begin
      outputs_2_payload_last = 1'b0;
    end else begin
      outputs_2_payload_last = input_payload_last;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_2) begin
      outputs_2_payload_fragment = 8'h0;
    end else begin
      outputs_2_payload_fragment = input_payload_fragment;
    end
  end

  assign when_FlowDeMux_l16_3 = (3'b011 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l16_3) begin
      outputs_3_valid = 1'b0;
    end else begin
      outputs_3_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_3) begin
      outputs_3_payload_last = 1'b0;
    end else begin
      outputs_3_payload_last = input_payload_last;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_3) begin
      outputs_3_payload_fragment = 8'h0;
    end else begin
      outputs_3_payload_fragment = input_payload_fragment;
    end
  end

  assign when_FlowDeMux_l16_4 = (3'b100 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l16_4) begin
      outputs_4_valid = 1'b0;
    end else begin
      outputs_4_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_4) begin
      outputs_4_payload_last = 1'b0;
    end else begin
      outputs_4_payload_last = input_payload_last;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l16_4) begin
      outputs_4_payload_fragment = 8'h0;
    end else begin
      outputs_4_payload_fragment = input_payload_fragment;
    end
  end


endmodule
