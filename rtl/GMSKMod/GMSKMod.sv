// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : GMSKMod
// Git hash  : 43464962f09f36778ab2e1388e0f698ce817f0a6

`timescale 1ns/1ps

module GMSKMod (
  input               data_flow_unit_data_valid,
  input               data_flow_unit_data_payload_last,
  input      [0:0]    data_flow_unit_data_payload_fragment,
  output              data_flow_mod_iq_valid,
  output              data_flow_mod_iq_payload_last,
  output     [15:0]   data_flow_mod_iq_payload_fragment_cha_i,
  output     [15:0]   data_flow_mod_iq_payload_fragment_cha_q,
  input               clk,
  input               resetn
);

  wire                symbol_filter_result_data_valid;
  wire       [11:0]   symbol_filter_result_data_payload;
  reg        [11:0]   phi_integral;

  GMSKSymbolFilter symbol_filter (
    .raw_data_valid      (data_flow_unit_data_valid              ), //i
    .raw_data_payload    (data_flow_unit_data_payload_fragment   ), //i
    .result_data_valid   (symbol_filter_result_data_valid        ), //o
    .result_data_payload (symbol_filter_result_data_payload[11:0]), //o
    .clc                 (1'b0                                   ), //i
    .clk                 (clk                                    ), //i
    .resetn              (resetn                                 )  //i
  );
  assign data_flow_mod_iq_valid = symbol_filter_result_data_valid;
  assign data_flow_mod_iq_payload_fragment_cha_i = {{4{phi_integral[11]}}, phi_integral};
  assign data_flow_mod_iq_payload_fragment_cha_q = 16'h0;
  assign data_flow_mod_iq_payload_last = 1'b0;
  always @(posedge clk) begin
    if(!resetn) begin
      phi_integral <= 12'h0;
    end else begin
      if(symbol_filter_result_data_valid) begin
        phi_integral <= ($signed(phi_integral) + $signed(symbol_filter_result_data_payload));
      end
    end
  end


endmodule

module GMSKSymbolFilter (
  input               raw_data_valid,
  input      [0:0]    raw_data_payload,
  output              result_data_valid,
  output     [11:0]   result_data_payload,
  input               clc,
  input               clk,
  input               resetn
);

  wire       [11:0]   _zz_mixer_cell_0;
  wire       [11:0]   _zz_mixer_cell_1;
  wire       [11:0]   _zz_mixer_cell_2;
  wire       [11:0]   _zz_filtered_data;
  wire       [11:0]   filter_coff_0;
  wire       [11:0]   filter_coff_1;
  wire       [11:0]   filter_coff_2;
  reg        [1:0]    data_buf_0;
  reg        [1:0]    data_buf_1;
  reg        [1:0]    data_buf_2;
  reg        [11:0]   mixer_cell_0;
  reg        [11:0]   mixer_cell_1;
  reg        [11:0]   mixer_cell_2;
  reg        [11:0]   filtered_data;
  reg                 filtered_valid;

  assign _zz_mixer_cell_0 = 12'h0;
  assign _zz_mixer_cell_1 = 12'h0;
  assign _zz_mixer_cell_2 = 12'h0;
  assign _zz_filtered_data = ($signed(mixer_cell_0) + $signed(mixer_cell_1));
  assign filter_coff_0 = 12'h01a;
  assign filter_coff_1 = 12'h15c;
  assign filter_coff_2 = 12'h01a;
  always @(*) begin
    case(data_buf_0)
      2'b01 : begin
        mixer_cell_0 = filter_coff_0;
      end
      2'b10 : begin
        mixer_cell_0 = ($signed(_zz_mixer_cell_0) - $signed(filter_coff_0));
      end
      default : begin
        mixer_cell_0 = 12'h0;
      end
    endcase
  end

  always @(*) begin
    case(data_buf_1)
      2'b01 : begin
        mixer_cell_1 = filter_coff_1;
      end
      2'b10 : begin
        mixer_cell_1 = ($signed(_zz_mixer_cell_1) - $signed(filter_coff_1));
      end
      default : begin
        mixer_cell_1 = 12'h0;
      end
    endcase
  end

  always @(*) begin
    case(data_buf_2)
      2'b01 : begin
        mixer_cell_2 = filter_coff_2;
      end
      2'b10 : begin
        mixer_cell_2 = ($signed(_zz_mixer_cell_2) - $signed(filter_coff_2));
      end
      default : begin
        mixer_cell_2 = 12'h0;
      end
    endcase
  end

  assign result_data_payload = filtered_data;
  assign result_data_valid = filtered_valid;
  always @(posedge clk) begin
    if(!resetn) begin
      data_buf_0 <= 2'b00;
      data_buf_1 <= 2'b00;
      data_buf_2 <= 2'b00;
      filtered_data <= 12'h0;
      filtered_valid <= 1'b0;
    end else begin
      if(clc) begin
        data_buf_0 <= 2'b00;
        data_buf_1 <= 2'b00;
        data_buf_2 <= 2'b00;
      end else begin
        if(raw_data_valid) begin
          data_buf_0 <= ((raw_data_payload == 1'b0) ? 2'b10 : 2'b01);
          data_buf_1 <= data_buf_0;
          data_buf_2 <= data_buf_1;
        end
      end
      if(raw_data_valid) begin
        filtered_valid <= 1'b1;
        filtered_data <= ($signed(_zz_filtered_data) + $signed(mixer_cell_2));
      end else begin
        filtered_valid <= 1'b0;
      end
    end
  end


endmodule
