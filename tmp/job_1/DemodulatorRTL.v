// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : DemodulatorRTL
// Git hash  : 0d864d28435071412e1d4f9bb5a89da4be9b29a7



module DemodulatorRTL (
  input      [1:0]    select_1,
  output              data_flow_unit_data_valid,
  output     [11:0]   data_flow_unit_data_payload,
  input               data_flow_mod_iq_valid,
  input      [11:0]   data_flow_mod_iq_payload_cha_i,
  input      [11:0]   data_flow_mod_iq_payload_cha_q,
  input               clk,
  input               reset
);
  wire                flowDeMux_1_outputs_0_valid;
  wire       [11:0]   flowDeMux_1_outputs_0_payload_cha_i;
  wire       [11:0]   flowDeMux_1_outputs_0_payload_cha_q;
  wire                flowDeMux_1_outputs_1_valid;
  wire       [11:0]   flowDeMux_1_outputs_1_payload_cha_i;
  wire       [11:0]   flowDeMux_1_outputs_1_payload_cha_q;
  wire                flowDeMux_1_outputs_2_valid;
  wire       [11:0]   flowDeMux_1_outputs_2_payload_cha_i;
  wire       [11:0]   flowDeMux_1_outputs_2_payload_cha_q;
  wire                demod_unit_data_valid;
  wire       [11:0]   demod_unit_data_payload;
  wire                demod_1_unit_data_valid;
  wire       [11:0]   demod_1_unit_data_payload;
  wire                demod_2_unit_data_valid;
  wire       [11:0]   demod_2_unit_data_payload;
  wire                flowMux_1_output_valid;
  wire       [11:0]   flowMux_1_output_payload;

  FlowDeMux flowDeMux_1 (
    .input_valid                (data_flow_mod_iq_valid               ), //i
    .input_payload_cha_i        (data_flow_mod_iq_payload_cha_i       ), //i
    .input_payload_cha_q        (data_flow_mod_iq_payload_cha_q       ), //i
    .select_1                   (select_1                             ), //i
    .outputs_0_valid            (flowDeMux_1_outputs_0_valid          ), //o
    .outputs_0_payload_cha_i    (flowDeMux_1_outputs_0_payload_cha_i  ), //o
    .outputs_0_payload_cha_q    (flowDeMux_1_outputs_0_payload_cha_q  ), //o
    .outputs_1_valid            (flowDeMux_1_outputs_1_valid          ), //o
    .outputs_1_payload_cha_i    (flowDeMux_1_outputs_1_payload_cha_i  ), //o
    .outputs_1_payload_cha_q    (flowDeMux_1_outputs_1_payload_cha_q  ), //o
    .outputs_2_valid            (flowDeMux_1_outputs_2_valid          ), //o
    .outputs_2_payload_cha_i    (flowDeMux_1_outputs_2_payload_cha_i  ), //o
    .outputs_2_payload_cha_q    (flowDeMux_1_outputs_2_payload_cha_q  )  //o
  );
  IQDemod demod (
    .unit_data_valid         (demod_unit_data_valid                ), //o
    .unit_data_payload       (demod_unit_data_payload              ), //o
    .mod_iq_valid            (flowDeMux_1_outputs_0_valid          ), //i
    .mod_iq_payload_cha_i    (flowDeMux_1_outputs_0_payload_cha_i  ), //i
    .mod_iq_payload_cha_q    (flowDeMux_1_outputs_0_payload_cha_q  ), //i
    .clk                     (clk                                  ), //i
    .reset                   (reset                                )  //i
  );
  IQDemod_1 demod_1 (
    .unit_data_valid         (demod_1_unit_data_valid              ), //o
    .unit_data_payload       (demod_1_unit_data_payload            ), //o
    .mod_iq_valid            (flowDeMux_1_outputs_1_valid          ), //i
    .mod_iq_payload_cha_i    (flowDeMux_1_outputs_1_payload_cha_i  ), //i
    .mod_iq_payload_cha_q    (flowDeMux_1_outputs_1_payload_cha_q  ), //i
    .clk                     (clk                                  ), //i
    .reset                   (reset                                )  //i
  );
  IQDemod_2 demod_2 (
    .unit_data_valid         (demod_2_unit_data_valid              ), //o
    .unit_data_payload       (demod_2_unit_data_payload            ), //o
    .mod_iq_valid            (flowDeMux_1_outputs_2_valid          ), //i
    .mod_iq_payload_cha_i    (flowDeMux_1_outputs_2_payload_cha_i  ), //i
    .mod_iq_payload_cha_q    (flowDeMux_1_outputs_2_payload_cha_q  ), //i
    .clk                     (clk                                  ), //i
    .reset                   (reset                                )  //i
  );
  FlowMux flowMux_1 (
    .inputs_0_valid      (demod_unit_data_valid      ), //i
    .inputs_0_payload    (demod_unit_data_payload    ), //i
    .inputs_1_valid      (demod_1_unit_data_valid    ), //i
    .inputs_1_payload    (demod_1_unit_data_payload  ), //i
    .inputs_2_valid      (demod_2_unit_data_valid    ), //i
    .inputs_2_payload    (demod_2_unit_data_payload  ), //i
    .select_1            (select_1                   ), //i
    .output_valid        (flowMux_1_output_valid     ), //o
    .output_payload      (flowMux_1_output_payload   )  //o
  );
  assign data_flow_unit_data_valid = flowMux_1_output_valid;
  assign data_flow_unit_data_payload = flowMux_1_output_payload;

endmodule

module FlowMux (
  input               inputs_0_valid,
  input      [11:0]   inputs_0_payload,
  input               inputs_1_valid,
  input      [11:0]   inputs_1_payload,
  input               inputs_2_valid,
  input      [11:0]   inputs_2_payload,
  input      [1:0]    select_1,
  output              output_valid,
  output     [11:0]   output_payload
);
  reg                 _zz_output_valid;
  reg        [11:0]   _zz_output_payload;

  always @(*) begin
    case(select_1)
      2'b00 : begin
        _zz_output_valid = inputs_0_valid;
        _zz_output_payload = inputs_0_payload;
      end
      2'b01 : begin
        _zz_output_valid = inputs_1_valid;
        _zz_output_payload = inputs_1_payload;
      end
      default : begin
        _zz_output_valid = inputs_2_valid;
        _zz_output_payload = inputs_2_payload;
      end
    endcase
  end

  assign output_valid = _zz_output_valid;
  assign output_payload = _zz_output_payload;

endmodule

module IQDemod_2 (
  output              unit_data_valid,
  output     [11:0]   unit_data_payload,
  input               mod_iq_valid,
  input      [11:0]   mod_iq_payload_cha_i,
  input      [11:0]   mod_iq_payload_cha_q,
  input               clk,
  input               reset
);
  wire       [11:0]   _zz_comp_cmp_i;
  wire       [11:0]   _zz_comp_cmp_q;
  wire       [11:0]   _zz_comp_cmp_i_1;
  wire       [11:0]   _zz_comp_cmp_q_1;
  wire       [11:0]   _zz_comp_cmp_i_2;
  wire       [11:0]   _zz_comp_cmp_q_2;
  wire       [3:0]    _zz_unit_data_payload;
  reg        [11:0]   demod_data_i;
  reg                 demod_valid_i;
  reg        [11:0]   demod_data_q;
  reg                 demod_valid_q;
  reg        [2:0]    comp_cmp_i;
  reg        [2:0]    comp_cmp_q;
  reg        [2:0]    compTable_i;
  reg        [2:0]    codeTable_q;
  reg                 demod_valid;
  reg        [1:0]    unit_data_i;
  reg        [1:0]    unit_data_q;
  reg                 unit_valid;

  assign _zz_comp_cmp_i = 12'hd78;
  assign _zz_comp_cmp_q = 12'hd78;
  assign _zz_comp_cmp_i_1 = 12'hfff;
  assign _zz_comp_cmp_q_1 = 12'hfff;
  assign _zz_comp_cmp_i_2 = 12'h286;
  assign _zz_comp_cmp_q_2 = 12'h286;
  assign _zz_unit_data_payload = {unit_data_i,unit_data_q};
  always @(*) begin
    comp_cmp_i[0] = ($signed(_zz_comp_cmp_i) < $signed(demod_data_i));
    comp_cmp_i[1] = ($signed(_zz_comp_cmp_i_1) < $signed(demod_data_i));
    comp_cmp_i[2] = ($signed(_zz_comp_cmp_i_2) < $signed(demod_data_i));
  end

  always @(*) begin
    comp_cmp_q[0] = ($signed(_zz_comp_cmp_q) < $signed(demod_data_q));
    comp_cmp_q[1] = ($signed(_zz_comp_cmp_q_1) < $signed(demod_data_q));
    comp_cmp_q[2] = ($signed(_zz_comp_cmp_q_2) < $signed(demod_data_q));
  end

  assign unit_data_payload = {8'd0, _zz_unit_data_payload};
  assign unit_data_valid = unit_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      demod_data_i <= 12'h0;
      demod_valid_i <= 1'b0;
      demod_data_q <= 12'h0;
      demod_valid_q <= 1'b0;
      compTable_i <= 3'b000;
      codeTable_q <= 3'b000;
      demod_valid <= 1'b0;
      unit_valid <= 1'b0;
    end else begin
      demod_data_i <= mod_iq_payload_cha_i;
      demod_valid_i <= mod_iq_valid;
      demod_data_q <= mod_iq_payload_cha_q;
      demod_valid_q <= mod_iq_valid;
      compTable_i <= comp_cmp_i;
      codeTable_q <= comp_cmp_q;
      demod_valid <= (demod_valid_i && demod_valid_q);
      if(demod_valid) begin
        unit_valid <= 1'b1;
      end else begin
        unit_valid <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(demod_valid) begin
      case(compTable_i)
        3'b000 : begin
          unit_data_i <= 2'b00;
        end
        3'b001 : begin
          unit_data_i <= 2'b01;
        end
        3'b011 : begin
          unit_data_i <= 2'b11;
        end
        3'b111 : begin
          unit_data_i <= 2'b10;
        end
        default : begin
        end
      endcase
      case(codeTable_q)
        3'b000 : begin
          unit_data_q <= 2'b00;
        end
        3'b001 : begin
          unit_data_q <= 2'b01;
        end
        3'b011 : begin
          unit_data_q <= 2'b11;
        end
        3'b111 : begin
          unit_data_q <= 2'b10;
        end
        default : begin
        end
      endcase
    end else begin
      unit_data_i <= 2'b00;
      unit_data_q <= 2'b00;
    end
  end


endmodule

module IQDemod_1 (
  output              unit_data_valid,
  output     [11:0]   unit_data_payload,
  input               mod_iq_valid,
  input      [11:0]   mod_iq_payload_cha_i,
  input      [11:0]   mod_iq_payload_cha_q,
  input               clk,
  input               reset
);
  wire       [11:0]   _zz_comp_cmp_i;
  wire       [11:0]   _zz_comp_cmp_q;
  wire       [1:0]    _zz_unit_data_payload;
  reg        [11:0]   demod_data_i;
  reg                 demod_valid_i;
  reg        [11:0]   demod_data_q;
  reg                 demod_valid_q;
  wire       [0:0]    comp_cmp_i;
  wire       [0:0]    comp_cmp_q;
  reg        [0:0]    compTable_i;
  reg        [0:0]    codeTable_q;
  reg                 demod_valid;
  reg        [0:0]    unit_data_i;
  reg        [0:0]    unit_data_q;
  reg                 unit_valid;

  assign _zz_comp_cmp_i = 12'h0;
  assign _zz_comp_cmp_q = 12'h0;
  assign _zz_unit_data_payload = {unit_data_i,unit_data_q};
  assign comp_cmp_i[0] = ($signed(_zz_comp_cmp_i) < $signed(demod_data_i));
  assign comp_cmp_q[0] = ($signed(_zz_comp_cmp_q) < $signed(demod_data_q));
  assign unit_data_payload = {10'd0, _zz_unit_data_payload};
  assign unit_data_valid = unit_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      demod_data_i <= 12'h0;
      demod_valid_i <= 1'b0;
      demod_data_q <= 12'h0;
      demod_valid_q <= 1'b0;
      compTable_i <= 1'b0;
      codeTable_q <= 1'b0;
      demod_valid <= 1'b0;
      unit_valid <= 1'b0;
    end else begin
      demod_data_i <= mod_iq_payload_cha_i;
      demod_valid_i <= mod_iq_valid;
      demod_data_q <= mod_iq_payload_cha_q;
      demod_valid_q <= mod_iq_valid;
      compTable_i <= comp_cmp_i;
      codeTable_q <= comp_cmp_q;
      demod_valid <= (demod_valid_i && demod_valid_q);
      if(demod_valid) begin
        unit_valid <= 1'b1;
      end else begin
        unit_valid <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(demod_valid) begin
      case(compTable_i)
        1'b0 : begin
          unit_data_i <= 1'b0;
        end
        default : begin
          unit_data_i <= 1'b1;
        end
      endcase
      case(codeTable_q)
        1'b0 : begin
          unit_data_q <= 1'b0;
        end
        default : begin
          unit_data_q <= 1'b1;
        end
      endcase
    end else begin
      unit_data_i <= 1'b0;
      unit_data_q <= 1'b0;
    end
  end


endmodule

module IQDemod (
  output              unit_data_valid,
  output     [11:0]   unit_data_payload,
  input               mod_iq_valid,
  input      [11:0]   mod_iq_payload_cha_i,
  input      [11:0]   mod_iq_payload_cha_q,
  input               clk,
  input               reset
);
  wire       [11:0]   _zz_comp_cmp_i;
  reg        [11:0]   demod_data_i;
  reg                 demod_valid_i;
  wire       [0:0]    comp_cmp_i;
  reg        [0:0]    compTable_i;
  reg                 demod_valid;
  reg        [0:0]    unit_data_i;
  reg                 unit_valid;

  assign _zz_comp_cmp_i = 12'h0;
  assign comp_cmp_i[0] = ($signed(_zz_comp_cmp_i) < $signed(demod_data_i));
  assign unit_data_payload = {11'd0, unit_data_i};
  assign unit_data_valid = unit_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      demod_data_i <= 12'h0;
      demod_valid_i <= 1'b0;
      compTable_i <= 1'b0;
      unit_valid <= 1'b0;
    end else begin
      demod_data_i <= mod_iq_payload_cha_i;
      demod_valid_i <= mod_iq_valid;
      compTable_i <= comp_cmp_i;
      if(demod_valid) begin
        unit_valid <= 1'b1;
      end else begin
        unit_valid <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    demod_valid <= demod_valid_i;
    if(demod_valid) begin
      case(compTable_i)
        1'b0 : begin
          unit_data_i <= 1'b0;
        end
        default : begin
          unit_data_i <= 1'b1;
        end
      endcase
    end else begin
      unit_data_i <= 1'b0;
    end
  end


endmodule

module FlowDeMux (
  input               input_valid,
  input      [11:0]   input_payload_cha_i,
  input      [11:0]   input_payload_cha_q,
  input      [1:0]    select_1,
  output reg          outputs_0_valid,
  output reg [11:0]   outputs_0_payload_cha_i,
  output reg [11:0]   outputs_0_payload_cha_q,
  output reg          outputs_1_valid,
  output reg [11:0]   outputs_1_payload_cha_i,
  output reg [11:0]   outputs_1_payload_cha_q,
  output reg          outputs_2_valid,
  output reg [11:0]   outputs_2_payload_cha_i,
  output reg [11:0]   outputs_2_payload_cha_q
);
  wire                when_FlowDeMux_l15;
  wire                when_FlowDeMux_l15_1;
  wire                when_FlowDeMux_l15_2;

  assign when_FlowDeMux_l15 = (2'b00 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15) begin
      outputs_0_valid = 1'b0;
    end else begin
      outputs_0_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15) begin
      outputs_0_payload_cha_i = 12'h0;
    end else begin
      outputs_0_payload_cha_i = input_payload_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15) begin
      outputs_0_payload_cha_q = 12'h0;
    end else begin
      outputs_0_payload_cha_q = input_payload_cha_q;
    end
  end

  assign when_FlowDeMux_l15_1 = (2'b01 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15_1) begin
      outputs_1_valid = 1'b0;
    end else begin
      outputs_1_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_1) begin
      outputs_1_payload_cha_i = 12'h0;
    end else begin
      outputs_1_payload_cha_i = input_payload_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_1) begin
      outputs_1_payload_cha_q = 12'h0;
    end else begin
      outputs_1_payload_cha_q = input_payload_cha_q;
    end
  end

  assign when_FlowDeMux_l15_2 = (2'b10 != select_1);
  always @(*) begin
    if(when_FlowDeMux_l15_2) begin
      outputs_2_valid = 1'b0;
    end else begin
      outputs_2_valid = input_valid;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_2) begin
      outputs_2_payload_cha_i = 12'h0;
    end else begin
      outputs_2_payload_cha_i = input_payload_cha_i;
    end
  end

  always @(*) begin
    if(when_FlowDeMux_l15_2) begin
      outputs_2_payload_cha_q = 12'h0;
    end else begin
      outputs_2_payload_cha_q = input_payload_cha_q;
    end
  end


endmodule
