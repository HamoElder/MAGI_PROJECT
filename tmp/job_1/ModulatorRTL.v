// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : ModulatorRTL
// Git hash  : 8ea3836c6991c66e54ff283e1ce84688f7fe9417



module ModulatorRTL (
  input               data_flow_unit_data_valid,
  input      [31:0]   data_flow_unit_data_payload,
  output              data_flow_mod_iq_valid,
  output     [15:0]   data_flow_mod_iq_payload_cha_i,
  output     [15:0]   data_flow_mod_iq_payload_cha_q,
  input               w_en,
  input      [10:0]   w_addr,
  input      [31:0]   w_data,
  input      [2:0]    select_1,
  input               clk,
  input               reset
);
  wire       [0:0]    bpsk_mod_unit_data_payload;
  wire       [1:0]    qpsk_mod_unit_data_payload;
  wire       [3:0]    qam16_mod_unit_data_payload;
  wire       [5:0]    qam64_mod_unit_data_payload;
  wire       [10:0]   lookup_mod_data_flow_unit_data_payload;
  wire                flowDeMux_1_outputs_0_valid;
  wire       [31:0]   flowDeMux_1_outputs_0_payload;
  wire                flowDeMux_1_outputs_1_valid;
  wire       [31:0]   flowDeMux_1_outputs_1_payload;
  wire                flowDeMux_1_outputs_2_valid;
  wire       [31:0]   flowDeMux_1_outputs_2_payload;
  wire                flowDeMux_1_outputs_3_valid;
  wire       [31:0]   flowDeMux_1_outputs_3_payload;
  wire                flowDeMux_1_outputs_4_valid;
  wire       [31:0]   flowDeMux_1_outputs_4_payload;
  wire                bpsk_mod_mod_iq_valid;
  wire       [15:0]   bpsk_mod_mod_iq_payload_cha_i;
  wire       [15:0]   bpsk_mod_mod_iq_payload_cha_q;
  wire                qpsk_mod_mod_iq_valid;
  wire       [15:0]   qpsk_mod_mod_iq_payload_cha_i;
  wire       [15:0]   qpsk_mod_mod_iq_payload_cha_q;
  wire                qam16_mod_mod_iq_valid;
  wire       [15:0]   qam16_mod_mod_iq_payload_cha_i;
  wire       [15:0]   qam16_mod_mod_iq_payload_cha_q;
  wire                qam64_mod_mod_iq_valid;
  wire       [15:0]   qam64_mod_mod_iq_payload_cha_i;
  wire       [15:0]   qam64_mod_mod_iq_payload_cha_q;
  wire                lookup_mod_data_flow_mod_iq_valid;
  wire       [15:0]   lookup_mod_data_flow_mod_iq_payload_cha_i;
  wire       [15:0]   lookup_mod_data_flow_mod_iq_payload_cha_q;
  wire                flowMux_1_output_valid;
  wire       [15:0]   flowMux_1_output_payload_cha_i;
  wire       [15:0]   flowMux_1_output_payload_cha_q;
  wire                _zz_unit_data_valid;
  wire                _zz_unit_data_valid_1;
  wire                _zz_unit_data_valid_2;
  wire                _zz_unit_data_valid_3;
  wire                _zz_data_flow_unit_data_valid;

  FlowDeMux flowDeMux_1 (
    .input_valid          (data_flow_unit_data_valid      ), //i
    .input_payload        (data_flow_unit_data_payload    ), //i
    .select_1             (select_1                       ), //i
    .outputs_0_valid      (flowDeMux_1_outputs_0_valid    ), //o
    .outputs_0_payload    (flowDeMux_1_outputs_0_payload  ), //o
    .outputs_1_valid      (flowDeMux_1_outputs_1_valid    ), //o
    .outputs_1_payload    (flowDeMux_1_outputs_1_payload  ), //o
    .outputs_2_valid      (flowDeMux_1_outputs_2_valid    ), //o
    .outputs_2_payload    (flowDeMux_1_outputs_2_payload  ), //o
    .outputs_3_valid      (flowDeMux_1_outputs_3_valid    ), //o
    .outputs_3_payload    (flowDeMux_1_outputs_3_payload  ), //o
    .outputs_4_valid      (flowDeMux_1_outputs_4_valid    ), //o
    .outputs_4_payload    (flowDeMux_1_outputs_4_payload  )  //o
  );
  mPSKMod bpsk_mod (
    .unit_data_valid         (_zz_unit_data_valid            ), //i
    .unit_data_payload       (bpsk_mod_unit_data_payload     ), //i
    .mod_iq_valid            (bpsk_mod_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i    (bpsk_mod_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q    (bpsk_mod_mod_iq_payload_cha_q  ), //o
    .clk                     (clk                            ), //i
    .reset                   (reset                          )  //i
  );
  mPSKMod_1 qpsk_mod (
    .unit_data_valid         (_zz_unit_data_valid_1          ), //i
    .unit_data_payload       (qpsk_mod_unit_data_payload     ), //i
    .mod_iq_valid            (qpsk_mod_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i    (qpsk_mod_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q    (qpsk_mod_mod_iq_payload_cha_q  ), //o
    .clk                     (clk                            ), //i
    .reset                   (reset                          )  //i
  );
  mQAMMod qam16_mod (
    .unit_data_valid         (_zz_unit_data_valid_2           ), //i
    .unit_data_payload       (qam16_mod_unit_data_payload     ), //i
    .mod_iq_valid            (qam16_mod_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i    (qam16_mod_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q    (qam16_mod_mod_iq_payload_cha_q  ), //o
    .clk                     (clk                             ), //i
    .reset                   (reset                           )  //i
  );
  mQAMMod_1 qam64_mod (
    .unit_data_valid         (_zz_unit_data_valid_3           ), //i
    .unit_data_payload       (qam64_mod_unit_data_payload     ), //i
    .mod_iq_valid            (qam64_mod_mod_iq_valid          ), //o
    .mod_iq_payload_cha_i    (qam64_mod_mod_iq_payload_cha_i  ), //o
    .mod_iq_payload_cha_q    (qam64_mod_mod_iq_payload_cha_q  ), //o
    .clk                     (clk                             ), //i
    .reset                   (reset                           )  //i
  );
  LookUpMod lookup_mod (
    .w_en                              (w_en                                       ), //i
    .w_addr                            (w_addr                                     ), //i
    .w_data                            (w_data                                     ), //i
    .data_flow_unit_data_valid         (_zz_data_flow_unit_data_valid              ), //i
    .data_flow_unit_data_payload       (lookup_mod_data_flow_unit_data_payload     ), //i
    .data_flow_mod_iq_valid            (lookup_mod_data_flow_mod_iq_valid          ), //o
    .data_flow_mod_iq_payload_cha_i    (lookup_mod_data_flow_mod_iq_payload_cha_i  ), //o
    .data_flow_mod_iq_payload_cha_q    (lookup_mod_data_flow_mod_iq_payload_cha_q  ), //o
    .clk                               (clk                                        ), //i
    .reset                             (reset                                      )  //i
  );
  FlowMux flowMux_1 (
    .inputs_0_valid            (bpsk_mod_mod_iq_valid                      ), //i
    .inputs_0_payload_cha_i    (bpsk_mod_mod_iq_payload_cha_i              ), //i
    .inputs_0_payload_cha_q    (bpsk_mod_mod_iq_payload_cha_q              ), //i
    .inputs_1_valid            (qpsk_mod_mod_iq_valid                      ), //i
    .inputs_1_payload_cha_i    (qpsk_mod_mod_iq_payload_cha_i              ), //i
    .inputs_1_payload_cha_q    (qpsk_mod_mod_iq_payload_cha_q              ), //i
    .inputs_2_valid            (qam16_mod_mod_iq_valid                     ), //i
    .inputs_2_payload_cha_i    (qam16_mod_mod_iq_payload_cha_i             ), //i
    .inputs_2_payload_cha_q    (qam16_mod_mod_iq_payload_cha_q             ), //i
    .inputs_3_valid            (qam64_mod_mod_iq_valid                     ), //i
    .inputs_3_payload_cha_i    (qam64_mod_mod_iq_payload_cha_i             ), //i
    .inputs_3_payload_cha_q    (qam64_mod_mod_iq_payload_cha_q             ), //i
    .inputs_4_valid            (lookup_mod_data_flow_mod_iq_valid          ), //i
    .inputs_4_payload_cha_i    (lookup_mod_data_flow_mod_iq_payload_cha_i  ), //i
    .inputs_4_payload_cha_q    (lookup_mod_data_flow_mod_iq_payload_cha_q  ), //i
    .select_1                  (select_1                                   ), //i
    .output_valid              (flowMux_1_output_valid                     ), //o
    .output_payload_cha_i      (flowMux_1_output_payload_cha_i             ), //o
    .output_payload_cha_q      (flowMux_1_output_payload_cha_q             )  //o
  );
  assign _zz_unit_data_valid = flowDeMux_1_outputs_0_valid;
  assign bpsk_mod_unit_data_payload = flowDeMux_1_outputs_0_payload[0:0];
  assign _zz_unit_data_valid_1 = flowDeMux_1_outputs_1_valid;
  assign qpsk_mod_unit_data_payload = flowDeMux_1_outputs_1_payload[1:0];
  assign _zz_unit_data_valid_2 = flowDeMux_1_outputs_2_valid;
  assign qam16_mod_unit_data_payload = flowDeMux_1_outputs_2_payload[3:0];
  assign _zz_unit_data_valid_3 = flowDeMux_1_outputs_3_valid;
  assign qam64_mod_unit_data_payload = flowDeMux_1_outputs_3_payload[5:0];
  assign _zz_data_flow_unit_data_valid = flowDeMux_1_outputs_4_valid;
  assign lookup_mod_data_flow_unit_data_payload = flowDeMux_1_outputs_4_payload[10:0];
  assign data_flow_mod_iq_valid = flowMux_1_output_valid;
  assign data_flow_mod_iq_payload_cha_i = flowMux_1_output_payload_cha_i;
  assign data_flow_mod_iq_payload_cha_q = flowMux_1_output_payload_cha_q;

endmodule

module FlowMux (
  input               inputs_0_valid,
  input      [15:0]   inputs_0_payload_cha_i,
  input      [15:0]   inputs_0_payload_cha_q,
  input               inputs_1_valid,
  input      [15:0]   inputs_1_payload_cha_i,
  input      [15:0]   inputs_1_payload_cha_q,
  input               inputs_2_valid,
  input      [15:0]   inputs_2_payload_cha_i,
  input      [15:0]   inputs_2_payload_cha_q,
  input               inputs_3_valid,
  input      [15:0]   inputs_3_payload_cha_i,
  input      [15:0]   inputs_3_payload_cha_q,
  input               inputs_4_valid,
  input      [15:0]   inputs_4_payload_cha_i,
  input      [15:0]   inputs_4_payload_cha_q,
  input      [2:0]    select_1,
  output              output_valid,
  output     [15:0]   output_payload_cha_i,
  output     [15:0]   output_payload_cha_q
);
  reg                 _zz_output_valid;
  reg        [15:0]   _zz_output_payload_cha_i;
  reg        [15:0]   _zz_output_payload_cha_q;

  always @(*) begin
    case(select_1)
      3'b000 : begin
        _zz_output_valid = inputs_0_valid;
        _zz_output_payload_cha_i = inputs_0_payload_cha_i;
        _zz_output_payload_cha_q = inputs_0_payload_cha_q;
      end
      3'b001 : begin
        _zz_output_valid = inputs_1_valid;
        _zz_output_payload_cha_i = inputs_1_payload_cha_i;
        _zz_output_payload_cha_q = inputs_1_payload_cha_q;
      end
      3'b010 : begin
        _zz_output_valid = inputs_2_valid;
        _zz_output_payload_cha_i = inputs_2_payload_cha_i;
        _zz_output_payload_cha_q = inputs_2_payload_cha_q;
      end
      3'b011 : begin
        _zz_output_valid = inputs_3_valid;
        _zz_output_payload_cha_i = inputs_3_payload_cha_i;
        _zz_output_payload_cha_q = inputs_3_payload_cha_q;
      end
      default : begin
        _zz_output_valid = inputs_4_valid;
        _zz_output_payload_cha_i = inputs_4_payload_cha_i;
        _zz_output_payload_cha_q = inputs_4_payload_cha_q;
      end
    endcase
  end

  assign output_valid = _zz_output_valid;
  assign output_payload_cha_i = _zz_output_payload_cha_i;
  assign output_payload_cha_q = _zz_output_payload_cha_q;

endmodule

module LookUpMod (
  input               w_en,
  input      [10:0]   w_addr,
  input      [31:0]   w_data,
  input               data_flow_unit_data_valid,
  input      [10:0]   data_flow_unit_data_payload,
  output reg          data_flow_mod_iq_valid,
  output reg [15:0]   data_flow_mod_iq_payload_cha_i,
  output reg [15:0]   data_flow_mod_iq_payload_cha_q,
  input               clk,
  input               reset
);
  reg        [31:0]   _zz_code_map_port1;
  wire       [31:0]   _zz_code_map_port;
  reg        [10:0]   unit_data;
  reg                 unit_valid;
  wire                _zz_iq_mod_div_0;
  wire       [10:0]   _zz_iq_mod_div_0_1;
  wire       [31:0]   _zz_iq_mod_div_0_2;
  wire       [15:0]   iq_mod_div_0;
  wire       [15:0]   iq_mod_div_1;
  wire                when_lookUpMod_l56;
  reg [31:0] code_map [0:2047];

  assign _zz_code_map_port = w_data;
  always @(posedge clk) begin
    if(w_en) begin
      code_map[w_addr] <= _zz_code_map_port;
    end
  end

  always @(posedge clk) begin
    if(_zz_iq_mod_div_0) begin
      _zz_code_map_port1 <= code_map[_zz_iq_mod_div_0_1];
    end
  end

  assign _zz_iq_mod_div_0 = (! w_en);
  assign _zz_iq_mod_div_0_1 = unit_data;
  assign _zz_iq_mod_div_0_2 = _zz_code_map_port1;
  assign iq_mod_div_0 = _zz_iq_mod_div_0_2[15 : 0];
  assign iq_mod_div_1 = _zz_iq_mod_div_0_2[31 : 16];
  assign when_lookUpMod_l56 = (unit_valid && (! w_en));
  always @(*) begin
    if(when_lookUpMod_l56) begin
      data_flow_mod_iq_payload_cha_i = iq_mod_div_1;
    end else begin
      data_flow_mod_iq_payload_cha_i = 16'h0;
    end
  end

  always @(*) begin
    if(when_lookUpMod_l56) begin
      data_flow_mod_iq_payload_cha_q = iq_mod_div_0;
    end else begin
      data_flow_mod_iq_payload_cha_q = 16'h0;
    end
  end

  always @(*) begin
    if(when_lookUpMod_l56) begin
      data_flow_mod_iq_valid = 1'b1;
    end else begin
      data_flow_mod_iq_valid = 1'b0;
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      unit_data <= 11'h0;
      unit_valid <= 1'b0;
    end else begin
      unit_data <= data_flow_unit_data_payload;
      unit_valid <= data_flow_unit_data_valid;
    end
  end


endmodule

module mQAMMod_1 (
  input               unit_data_valid,
  input      [5:0]    unit_data_payload,
  output reg          mod_iq_valid,
  output reg [15:0]   mod_iq_payload_cha_i,
  output reg [15:0]   mod_iq_payload_cha_q,
  input               clk,
  input               reset
);
  reg        [15:0]   _zz_mod_iq_payload_cha_i;
  reg        [15:0]   _zz_mod_iq_payload_cha_q;
  wire       [15:0]   codeTableI_0;
  wire       [15:0]   codeTableI_1;
  wire       [15:0]   codeTableI_2;
  wire       [15:0]   codeTableI_3;
  wire       [15:0]   codeTableI_4;
  wire       [15:0]   codeTableI_5;
  wire       [15:0]   codeTableQ_0;
  wire       [15:0]   codeTableQ_1;
  wire       [15:0]   codeTableQ_2;
  wire       [15:0]   codeTableQ_3;
  wire       [15:0]   codeTableQ_4;
  wire       [15:0]   codeTableQ_5;
  reg        [5:0]    unit_data;
  reg                 unit_valid;
  wire       [2:0]    data_div_0;
  wire       [2:0]    data_div_1;

  always @(*) begin
    case(data_div_1)
      3'b000 : begin
        _zz_mod_iq_payload_cha_i = codeTableI_0;
      end
      3'b001 : begin
        _zz_mod_iq_payload_cha_i = codeTableI_1;
      end
      3'b010 : begin
        _zz_mod_iq_payload_cha_i = codeTableI_2;
      end
      3'b011 : begin
        _zz_mod_iq_payload_cha_i = codeTableI_3;
      end
      3'b100 : begin
        _zz_mod_iq_payload_cha_i = codeTableI_4;
      end
      default : begin
        _zz_mod_iq_payload_cha_i = codeTableI_5;
      end
    endcase
  end

  always @(*) begin
    case(data_div_0)
      3'b000 : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_0;
      end
      3'b001 : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_1;
      end
      3'b010 : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_2;
      end
      3'b011 : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_3;
      end
      3'b100 : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_4;
      end
      default : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_5;
      end
    endcase
  end

  assign codeTableI_0 = 16'hbae1;
  assign codeTableQ_0 = 16'hbae1;
  assign codeTableI_1 = 16'hcea0;
  assign codeTableQ_1 = 16'hcea0;
  assign codeTableI_2 = 16'hf620;
  assign codeTableQ_2 = 16'hf620;
  assign codeTableI_3 = 16'he260;
  assign codeTableQ_3 = 16'he260;
  assign codeTableI_4 = 16'h451f;
  assign codeTableQ_4 = 16'h451f;
  assign codeTableI_5 = 16'h3160;
  assign codeTableQ_5 = 16'h3160;
  assign data_div_0 = unit_data[2 : 0];
  assign data_div_1 = unit_data[5 : 3];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_i = _zz_mod_iq_payload_cha_i;
    end else begin
      mod_iq_payload_cha_i = 16'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_q = _zz_mod_iq_payload_cha_q;
    end else begin
      mod_iq_payload_cha_q = 16'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      unit_data <= 6'h0;
      unit_valid <= 1'b0;
    end else begin
      unit_data <= unit_data_payload;
      unit_valid <= unit_data_valid;
    end
  end


endmodule

module mQAMMod (
  input               unit_data_valid,
  input      [3:0]    unit_data_payload,
  output reg          mod_iq_valid,
  output reg [15:0]   mod_iq_payload_cha_i,
  output reg [15:0]   mod_iq_payload_cha_q,
  input               clk,
  input               reset
);
  reg        [15:0]   _zz_mod_iq_payload_cha_i;
  reg        [15:0]   _zz_mod_iq_payload_cha_q;
  wire       [15:0]   codeTableI_0;
  wire       [15:0]   codeTableI_1;
  wire       [15:0]   codeTableI_2;
  wire       [15:0]   codeTableI_3;
  wire       [15:0]   codeTableQ_0;
  wire       [15:0]   codeTableQ_1;
  wire       [15:0]   codeTableQ_2;
  wire       [15:0]   codeTableQ_3;
  reg        [3:0]    unit_data;
  reg                 unit_valid;
  wire       [1:0]    data_div_0;
  wire       [1:0]    data_div_1;

  always @(*) begin
    case(data_div_1)
      2'b00 : begin
        _zz_mod_iq_payload_cha_i = codeTableI_0;
      end
      2'b01 : begin
        _zz_mod_iq_payload_cha_i = codeTableI_1;
      end
      2'b10 : begin
        _zz_mod_iq_payload_cha_i = codeTableI_2;
      end
      default : begin
        _zz_mod_iq_payload_cha_i = codeTableI_3;
      end
    endcase
  end

  always @(*) begin
    case(data_div_0)
      2'b00 : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_0;
      end
      2'b01 : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_1;
      end
      2'b10 : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_2;
      end
      default : begin
        _zz_mod_iq_payload_cha_q = codeTableQ_3;
      end
    endcase
  end

  assign codeTableI_0 = 16'hc349;
  assign codeTableQ_0 = 16'hc349;
  assign codeTableI_1 = 16'hebc3;
  assign codeTableQ_1 = 16'hebc3;
  assign codeTableI_2 = 16'h3cb6;
  assign codeTableQ_2 = 16'h3cb6;
  assign codeTableI_3 = 16'h143c;
  assign codeTableQ_3 = 16'h143c;
  assign data_div_0 = unit_data[1 : 0];
  assign data_div_1 = unit_data[3 : 2];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_i = _zz_mod_iq_payload_cha_i;
    end else begin
      mod_iq_payload_cha_i = 16'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_q = _zz_mod_iq_payload_cha_q;
    end else begin
      mod_iq_payload_cha_q = 16'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      unit_data <= 4'b0000;
      unit_valid <= 1'b0;
    end else begin
      unit_data <= unit_data_payload;
      unit_valid <= unit_data_valid;
    end
  end


endmodule

module mPSKMod_1 (
  input               unit_data_valid,
  input      [1:0]    unit_data_payload,
  output reg          mod_iq_valid,
  output reg [15:0]   mod_iq_payload_cha_i,
  output reg [15:0]   mod_iq_payload_cha_q,
  input               clk,
  input               reset
);
  reg        [31:0]   _zz__zz_mod_iq_0;
  wire       [31:0]   codeTable_0;
  wire       [31:0]   codeTable_1;
  wire       [31:0]   codeTable_2;
  wire       [31:0]   codeTable_3;
  reg        [1:0]    unit_data;
  reg                 unit_valid;
  wire       [31:0]   _zz_mod_iq_0;
  wire       [15:0]   mod_iq_0;
  wire       [15:0]   mod_iq_1;

  always @(*) begin
    case(unit_data)
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

  assign codeTable_0 = 32'ha57ea57e;
  assign codeTable_1 = 32'ha57e5a82;
  assign codeTable_2 = 32'h5a82a57e;
  assign codeTable_3 = 32'h5a825a82;
  assign _zz_mod_iq_0 = _zz__zz_mod_iq_0;
  assign mod_iq_0 = _zz_mod_iq_0[15 : 0];
  assign mod_iq_1 = _zz_mod_iq_0[31 : 16];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_i = mod_iq_1;
    end else begin
      mod_iq_payload_cha_i = 16'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_q = mod_iq_0;
    end else begin
      mod_iq_payload_cha_q = 16'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      unit_data <= 2'b00;
      unit_valid <= 1'b0;
    end else begin
      unit_data <= unit_data_payload;
      unit_valid <= unit_data_valid;
    end
  end


endmodule

module mPSKMod (
  input               unit_data_valid,
  input      [0:0]    unit_data_payload,
  output reg          mod_iq_valid,
  output reg [15:0]   mod_iq_payload_cha_i,
  output reg [15:0]   mod_iq_payload_cha_q,
  input               clk,
  input               reset
);
  reg        [31:0]   _zz__zz_mod_iq_0;
  wire       [31:0]   codeTable_0;
  wire       [31:0]   codeTable_1;
  reg        [0:0]    unit_data;
  reg                 unit_valid;
  wire       [31:0]   _zz_mod_iq_0;
  wire       [15:0]   mod_iq_0;
  wire       [15:0]   mod_iq_1;

  always @(*) begin
    case(unit_data)
      1'b0 : begin
        _zz__zz_mod_iq_0 = codeTable_0;
      end
      default : begin
        _zz__zz_mod_iq_0 = codeTable_1;
      end
    endcase
  end

  assign codeTable_0 = 32'h80010000;
  assign codeTable_1 = 32'h7fff0000;
  assign _zz_mod_iq_0 = _zz__zz_mod_iq_0;
  assign mod_iq_0 = _zz_mod_iq_0[15 : 0];
  assign mod_iq_1 = _zz_mod_iq_0[31 : 16];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_i = mod_iq_1;
    end else begin
      mod_iq_payload_cha_i = 16'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_q = mod_iq_0;
    end else begin
      mod_iq_payload_cha_q = 16'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  always @(posedge clk or posedge reset) begin
    if(reset) begin
      unit_data <= 1'b0;
      unit_valid <= 1'b0;
    end else begin
      unit_data <= unit_data_payload;
      unit_valid <= unit_data_valid;
    end
  end


endmodule

module FlowDeMux (
  input               input_valid,
  input      [31:0]   input_payload,
  input      [2:0]    select_1,
  output reg          outputs_0_valid,
  output reg [31:0]   outputs_0_payload,
  output reg          outputs_1_valid,
  output reg [31:0]   outputs_1_payload,
  output reg          outputs_2_valid,
  output reg [31:0]   outputs_2_payload,
  output reg          outputs_3_valid,
  output reg [31:0]   outputs_3_payload,
  output reg          outputs_4_valid,
  output reg [31:0]   outputs_4_payload
);
  wire                when_FlowDeMux_l15;
  wire                when_FlowDeMux_l15_1;
  wire                when_FlowDeMux_l15_2;
  wire                when_FlowDeMux_l15_3;
  wire                when_FlowDeMux_l15_4;

  assign when_FlowDeMux_l15 = (3'b000 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15) begin
      outputs_0_valid = 1'b0;
    end else begin
      outputs_0_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15) begin
      outputs_0_payload = 32'h0;
    end else begin
      outputs_0_payload = input_payload;
    end
  end

  assign when_FlowDeMux_l15_1 = (3'b001 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15_1) begin
      outputs_1_valid = 1'b0;
    end else begin
      outputs_1_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_1) begin
      outputs_1_payload = 32'h0;
    end else begin
      outputs_1_payload = input_payload;
    end
  end

  assign when_FlowDeMux_l15_2 = (3'b010 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15_2) begin
      outputs_2_valid = 1'b0;
    end else begin
      outputs_2_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_2) begin
      outputs_2_payload = 32'h0;
    end else begin
      outputs_2_payload = input_payload;
    end
  end

  assign when_FlowDeMux_l15_3 = (3'b011 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15_3) begin
      outputs_3_valid = 1'b0;
    end else begin
      outputs_3_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_3) begin
      outputs_3_payload = 32'h0;
    end else begin
      outputs_3_payload = input_payload;
    end
  end

  assign when_FlowDeMux_l15_4 = (3'b100 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15_4) begin
      outputs_4_valid = 1'b0;
    end else begin
      outputs_4_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_4) begin
      outputs_4_payload = 32'h0;
    end else begin
      outputs_4_payload = input_payload;
    end
  end


endmodule
