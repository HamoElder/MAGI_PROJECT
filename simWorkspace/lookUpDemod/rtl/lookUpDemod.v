// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : lookUpDemod
// Git hash  : 8ea3836c6991c66e54ff283e1ce84688f7fe9417



module lookUpDemod (
  input               w_en,
  input      [3:0]    w_addr,
  input      [31:0]   w_data,
  input      [1:0]    w_sel,
  input      [1:0]    iq_shift,
  output              data_flow_unit_data_valid,
  output     [7:0]    data_flow_unit_data_payload,
  input               data_flow_mod_iq_valid,
  input      [15:0]   data_flow_mod_iq_payload_cha_i,
  input      [15:0]   data_flow_mod_iq_payload_cha_q,
  input               clk,
  input               reset
);
  wire       [6:0]    _zz_data_flow_unit_data_payload;
  wire       [6:0]    _zz_data_flow_unit_data_payload_1;
  wire       [6:0]    _zz_data_flow_unit_data_payload_2;
  reg        [15:0]   demod_data_i;
  reg        [15:0]   demod_data_q;
  reg                 demod_valid_iq;
  reg        [15:0]   comp_mem_i_0;
  reg        [15:0]   comp_mem_i_1;
  reg        [15:0]   comp_mem_i_2;
  reg        [15:0]   comp_mem_i_3;
  reg        [15:0]   comp_mem_i_4;
  reg        [15:0]   comp_mem_i_5;
  reg        [15:0]   comp_mem_i_6;
  reg        [15:0]   comp_mem_i_7;
  reg        [15:0]   comp_mem_i_8;
  reg        [15:0]   comp_mem_i_9;
  reg        [15:0]   comp_mem_i_10;
  reg        [15:0]   comp_mem_i_11;
  reg        [15:0]   comp_mem_i_12;
  reg        [15:0]   comp_mem_i_13;
  reg        [15:0]   comp_mem_i_14;
  reg        [15:0]   comp_mem_q_0;
  reg        [15:0]   comp_mem_q_1;
  reg        [15:0]   comp_mem_q_2;
  reg        [15:0]   comp_mem_q_3;
  reg        [15:0]   comp_mem_q_4;
  reg        [15:0]   comp_mem_q_5;
  reg        [15:0]   comp_mem_q_6;
  reg        [15:0]   comp_mem_q_7;
  reg        [15:0]   comp_mem_q_8;
  reg        [15:0]   comp_mem_q_9;
  reg        [15:0]   comp_mem_q_10;
  reg        [15:0]   comp_mem_q_11;
  reg        [15:0]   comp_mem_q_12;
  reg        [15:0]   comp_mem_q_13;
  reg        [15:0]   comp_mem_q_14;
  reg        [3:0]    code_mem_i_0;
  reg        [3:0]    code_mem_i_1;
  reg        [3:0]    code_mem_i_2;
  reg        [3:0]    code_mem_i_3;
  reg        [3:0]    code_mem_i_4;
  reg        [3:0]    code_mem_i_5;
  reg        [3:0]    code_mem_i_6;
  reg        [3:0]    code_mem_i_7;
  reg        [3:0]    code_mem_i_8;
  reg        [3:0]    code_mem_i_9;
  reg        [3:0]    code_mem_i_10;
  reg        [3:0]    code_mem_i_11;
  reg        [3:0]    code_mem_i_12;
  reg        [3:0]    code_mem_i_13;
  reg        [3:0]    code_mem_i_14;
  reg        [3:0]    code_mem_i_15;
  reg        [3:0]    code_mem_q_0;
  reg        [3:0]    code_mem_q_1;
  reg        [3:0]    code_mem_q_2;
  reg        [3:0]    code_mem_q_3;
  reg        [3:0]    code_mem_q_4;
  reg        [3:0]    code_mem_q_5;
  reg        [3:0]    code_mem_q_6;
  reg        [3:0]    code_mem_q_7;
  reg        [3:0]    code_mem_q_8;
  reg        [3:0]    code_mem_q_9;
  reg        [3:0]    code_mem_q_10;
  reg        [3:0]    code_mem_q_11;
  reg        [3:0]    code_mem_q_12;
  reg        [3:0]    code_mem_q_13;
  reg        [3:0]    code_mem_q_14;
  reg        [3:0]    code_mem_q_15;
  wire       [15:0]   _zz_1;
  wire       [31:0]   _zz_comp_mem_i_0;
  wire       [15:0]   _zz_2;
  wire       [31:0]   _zz_code_mem_i_0;
  wire       [15:0]   _zz_3;
  wire       [31:0]   _zz_comp_mem_q_0;
  wire       [15:0]   _zz_4;
  wire       [31:0]   _zz_code_mem_q_0;
  reg        [14:0]   comp_cmp_i;
  reg        [14:0]   comp_cmp_q;
  reg        [14:0]   compTable_i;
  reg        [14:0]   compTable_q;
  reg                 demod_valid;
  reg        [3:0]    unit_data_i;
  reg        [3:0]    unit_data_q;
  reg                 unit_valid;

  assign _zz_data_flow_unit_data_payload = (_zz_data_flow_unit_data_payload_1 | _zz_data_flow_unit_data_payload_2);
  assign _zz_data_flow_unit_data_payload_1 = ({3'd0,unit_data_i} <<< iq_shift);
  assign _zz_data_flow_unit_data_payload_2 = {3'd0, unit_data_q};
  assign _zz_1 = ({15'd0,1'b1} <<< w_addr);
  assign _zz_comp_mem_i_0 = w_data;
  assign _zz_2 = ({15'd0,1'b1} <<< w_addr);
  assign _zz_code_mem_i_0 = w_data;
  assign _zz_3 = ({15'd0,1'b1} <<< w_addr);
  assign _zz_comp_mem_q_0 = w_data;
  assign _zz_4 = ({15'd0,1'b1} <<< w_addr);
  assign _zz_code_mem_q_0 = w_data;
  always @(*) begin
    comp_cmp_i[0] = ($signed(comp_mem_i_0) < $signed(demod_data_i));
    comp_cmp_i[1] = ($signed(comp_mem_i_1) < $signed(demod_data_i));
    comp_cmp_i[2] = ($signed(comp_mem_i_2) < $signed(demod_data_i));
    comp_cmp_i[3] = ($signed(comp_mem_i_3) < $signed(demod_data_i));
    comp_cmp_i[4] = ($signed(comp_mem_i_4) < $signed(demod_data_i));
    comp_cmp_i[5] = ($signed(comp_mem_i_5) < $signed(demod_data_i));
    comp_cmp_i[6] = ($signed(comp_mem_i_6) < $signed(demod_data_i));
    comp_cmp_i[7] = ($signed(comp_mem_i_7) < $signed(demod_data_i));
    comp_cmp_i[8] = ($signed(comp_mem_i_8) < $signed(demod_data_i));
    comp_cmp_i[9] = ($signed(comp_mem_i_9) < $signed(demod_data_i));
    comp_cmp_i[10] = ($signed(comp_mem_i_10) < $signed(demod_data_i));
    comp_cmp_i[11] = ($signed(comp_mem_i_11) < $signed(demod_data_i));
    comp_cmp_i[12] = ($signed(comp_mem_i_12) < $signed(demod_data_i));
    comp_cmp_i[13] = ($signed(comp_mem_i_13) < $signed(demod_data_i));
    comp_cmp_i[14] = ($signed(comp_mem_i_14) < $signed(demod_data_i));
  end

  always @(*) begin
    comp_cmp_q[0] = ($signed(comp_mem_q_0) < $signed(demod_data_q));
    comp_cmp_q[1] = ($signed(comp_mem_q_1) < $signed(demod_data_q));
    comp_cmp_q[2] = ($signed(comp_mem_q_2) < $signed(demod_data_q));
    comp_cmp_q[3] = ($signed(comp_mem_q_3) < $signed(demod_data_q));
    comp_cmp_q[4] = ($signed(comp_mem_q_4) < $signed(demod_data_q));
    comp_cmp_q[5] = ($signed(comp_mem_q_5) < $signed(demod_data_q));
    comp_cmp_q[6] = ($signed(comp_mem_q_6) < $signed(demod_data_q));
    comp_cmp_q[7] = ($signed(comp_mem_q_7) < $signed(demod_data_q));
    comp_cmp_q[8] = ($signed(comp_mem_q_8) < $signed(demod_data_q));
    comp_cmp_q[9] = ($signed(comp_mem_q_9) < $signed(demod_data_q));
    comp_cmp_q[10] = ($signed(comp_mem_q_10) < $signed(demod_data_q));
    comp_cmp_q[11] = ($signed(comp_mem_q_11) < $signed(demod_data_q));
    comp_cmp_q[12] = ($signed(comp_mem_q_12) < $signed(demod_data_q));
    comp_cmp_q[13] = ($signed(comp_mem_q_13) < $signed(demod_data_q));
    comp_cmp_q[14] = ($signed(comp_mem_q_14) < $signed(demod_data_q));
  end

  assign data_flow_unit_data_payload = {1'd0, _zz_data_flow_unit_data_payload};
  assign data_flow_unit_data_valid = unit_valid;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      demod_data_i <= 16'h0;
      demod_data_q <= 16'h0;
      demod_valid_iq <= 1'b0;
      compTable_i <= 15'h0;
      compTable_q <= 15'h0;
      demod_valid <= 1'b0;
      unit_valid <= 1'b0;
    end else begin
      demod_data_i <= data_flow_mod_iq_payload_cha_i;
      demod_data_q <= data_flow_mod_iq_payload_cha_q;
      demod_valid_iq <= (data_flow_mod_iq_valid && (! w_en));
      compTable_i <= comp_cmp_i;
      compTable_q <= comp_cmp_q;
      demod_valid <= demod_valid_iq;
      if(demod_valid) begin
        unit_valid <= 1'b1;
      end else begin
        unit_valid <= 1'b0;
      end
    end
  end

  always @(posedge clk) begin
    if(w_en) begin
      case(w_sel)
        2'b00 : begin
          if(_zz_1[0]) begin
            comp_mem_i_0 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[1]) begin
            comp_mem_i_1 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[2]) begin
            comp_mem_i_2 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[3]) begin
            comp_mem_i_3 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[4]) begin
            comp_mem_i_4 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[5]) begin
            comp_mem_i_5 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[6]) begin
            comp_mem_i_6 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[7]) begin
            comp_mem_i_7 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[8]) begin
            comp_mem_i_8 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[9]) begin
            comp_mem_i_9 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[10]) begin
            comp_mem_i_10 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[11]) begin
            comp_mem_i_11 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[12]) begin
            comp_mem_i_12 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[13]) begin
            comp_mem_i_13 <= _zz_comp_mem_i_0[15:0];
          end
          if(_zz_1[14]) begin
            comp_mem_i_14 <= _zz_comp_mem_i_0[15:0];
          end
        end
        2'b01 : begin
          if(_zz_2[0]) begin
            code_mem_i_0 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[1]) begin
            code_mem_i_1 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[2]) begin
            code_mem_i_2 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[3]) begin
            code_mem_i_3 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[4]) begin
            code_mem_i_4 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[5]) begin
            code_mem_i_5 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[6]) begin
            code_mem_i_6 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[7]) begin
            code_mem_i_7 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[8]) begin
            code_mem_i_8 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[9]) begin
            code_mem_i_9 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[10]) begin
            code_mem_i_10 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[11]) begin
            code_mem_i_11 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[12]) begin
            code_mem_i_12 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[13]) begin
            code_mem_i_13 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[14]) begin
            code_mem_i_14 <= _zz_code_mem_i_0[3:0];
          end
          if(_zz_2[15]) begin
            code_mem_i_15 <= _zz_code_mem_i_0[3:0];
          end
        end
        2'b10 : begin
          if(_zz_3[0]) begin
            comp_mem_q_0 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[1]) begin
            comp_mem_q_1 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[2]) begin
            comp_mem_q_2 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[3]) begin
            comp_mem_q_3 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[4]) begin
            comp_mem_q_4 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[5]) begin
            comp_mem_q_5 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[6]) begin
            comp_mem_q_6 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[7]) begin
            comp_mem_q_7 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[8]) begin
            comp_mem_q_8 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[9]) begin
            comp_mem_q_9 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[10]) begin
            comp_mem_q_10 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[11]) begin
            comp_mem_q_11 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[12]) begin
            comp_mem_q_12 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[13]) begin
            comp_mem_q_13 <= _zz_comp_mem_q_0[15:0];
          end
          if(_zz_3[14]) begin
            comp_mem_q_14 <= _zz_comp_mem_q_0[15:0];
          end
        end
        default : begin
          if(_zz_4[0]) begin
            code_mem_q_0 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[1]) begin
            code_mem_q_1 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[2]) begin
            code_mem_q_2 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[3]) begin
            code_mem_q_3 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[4]) begin
            code_mem_q_4 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[5]) begin
            code_mem_q_5 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[6]) begin
            code_mem_q_6 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[7]) begin
            code_mem_q_7 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[8]) begin
            code_mem_q_8 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[9]) begin
            code_mem_q_9 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[10]) begin
            code_mem_q_10 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[11]) begin
            code_mem_q_11 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[12]) begin
            code_mem_q_12 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[13]) begin
            code_mem_q_13 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[14]) begin
            code_mem_q_14 <= _zz_code_mem_q_0[3:0];
          end
          if(_zz_4[15]) begin
            code_mem_q_15 <= _zz_code_mem_q_0[3:0];
          end
        end
      endcase
    end
    if(demod_valid) begin
      case(compTable_i)
        15'h0 : begin
          unit_data_i <= code_mem_i_0;
        end
        15'h0001 : begin
          unit_data_i <= code_mem_i_1;
        end
        15'h0003 : begin
          unit_data_i <= code_mem_i_2;
        end
        15'h0007 : begin
          unit_data_i <= code_mem_i_3;
        end
        15'h000f : begin
          unit_data_i <= code_mem_i_4;
        end
        15'h001f : begin
          unit_data_i <= code_mem_i_5;
        end
        15'h003f : begin
          unit_data_i <= code_mem_i_6;
        end
        15'h007f : begin
          unit_data_i <= code_mem_i_7;
        end
        15'h00ff : begin
          unit_data_i <= code_mem_i_8;
        end
        15'h01ff : begin
          unit_data_i <= code_mem_i_9;
        end
        15'h03ff : begin
          unit_data_i <= code_mem_i_10;
        end
        15'h07ff : begin
          unit_data_i <= code_mem_i_11;
        end
        15'h0fff : begin
          unit_data_i <= code_mem_i_12;
        end
        15'h1fff : begin
          unit_data_i <= code_mem_i_13;
        end
        15'h3fff : begin
          unit_data_i <= code_mem_i_14;
        end
        15'h7fff : begin
          unit_data_i <= code_mem_i_15;
        end
        default : begin
        end
      endcase
      case(compTable_q)
        15'h0 : begin
          unit_data_q <= code_mem_q_0;
        end
        15'h0001 : begin
          unit_data_q <= code_mem_q_1;
        end
        15'h0003 : begin
          unit_data_q <= code_mem_q_2;
        end
        15'h0007 : begin
          unit_data_q <= code_mem_q_3;
        end
        15'h000f : begin
          unit_data_q <= code_mem_q_4;
        end
        15'h001f : begin
          unit_data_q <= code_mem_q_5;
        end
        15'h003f : begin
          unit_data_q <= code_mem_q_6;
        end
        15'h007f : begin
          unit_data_q <= code_mem_q_7;
        end
        15'h00ff : begin
          unit_data_q <= code_mem_q_8;
        end
        15'h01ff : begin
          unit_data_q <= code_mem_q_9;
        end
        15'h03ff : begin
          unit_data_q <= code_mem_q_10;
        end
        15'h07ff : begin
          unit_data_q <= code_mem_q_11;
        end
        15'h0fff : begin
          unit_data_q <= code_mem_q_12;
        end
        15'h1fff : begin
          unit_data_q <= code_mem_q_13;
        end
        15'h3fff : begin
          unit_data_q <= code_mem_q_14;
        end
        15'h7fff : begin
          unit_data_q <= code_mem_q_15;
        end
        default : begin
        end
      endcase
    end else begin
      unit_data_i <= 4'b0000;
      unit_data_q <= 4'b0000;
    end
  end


endmodule
