// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : mQAMMod
// Git hash  : 8ea3836c6991c66e54ff283e1ce84688f7fe9417



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

  assign codeTableI_0 = 16'hc34a;
  assign codeTableQ_0 = 16'hc34a;
  assign codeTableI_1 = 16'hd4a3;
  assign codeTableQ_1 = 16'hd4a3;
  assign codeTableI_2 = 16'hf754;
  assign codeTableQ_2 = 16'hf754;
  assign codeTableI_3 = 16'he5fb;
  assign codeTableQ_3 = 16'he5fb;
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
