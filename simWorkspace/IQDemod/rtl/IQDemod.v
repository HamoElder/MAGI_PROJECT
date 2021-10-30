// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : IQDemod
// Git hash  : 8ea3836c6991c66e54ff283e1ce84688f7fe9417



module IQDemod (
  output              unit_data_valid,
  output     [7:0]    unit_data_payload,
  input               mod_iq_valid,
  input      [15:0]   mod_iq_payload_cha_i,
  input      [15:0]   mod_iq_payload_cha_q,
  input               clk,
  input               reset
);
  wire       [15:0]   _zz_comp_cmp_i;
  wire       [15:0]   _zz_comp_cmp_q;
  wire       [1:0]    _zz_unit_data_payload;
  reg        [15:0]   demod_data_i;
  reg                 demod_valid_i;
  reg        [15:0]   demod_data_q;
  reg                 demod_valid_q;
  wire       [0:0]    comp_cmp_i;
  wire       [0:0]    comp_cmp_q;
  reg        [0:0]    compTable_i;
  reg        [0:0]    codeTable_q;
  reg                 demod_valid;
  reg        [0:0]    unit_data_i;
  reg        [0:0]    unit_data_q;
  reg                 unit_valid;

  assign _zz_comp_cmp_i = 16'h0;
  assign _zz_comp_cmp_q = 16'h0;
  assign _zz_unit_data_payload = {unit_data_i,unit_data_q};
  assign comp_cmp_i[0] = ($signed(_zz_comp_cmp_i) < $signed(demod_data_i));
  assign comp_cmp_q[0] = ($signed(_zz_comp_cmp_q) < $signed(demod_data_q));
  assign unit_data_payload = {6'd0, _zz_unit_data_payload};
  assign unit_data_valid = unit_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      demod_data_i <= 16'h0;
      demod_valid_i <= 1'b0;
      demod_data_q <= 16'h0;
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
