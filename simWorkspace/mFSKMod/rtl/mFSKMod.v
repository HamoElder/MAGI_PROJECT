// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : mFSKMod
// Git hash  : 8ea3836c6991c66e54ff283e1ce84688f7fe9417



module mFSKMod (
  input               unit_data_valid,
  input      [1:0]    unit_data_payload,
  output reg          mod_iq_valid,
  output reg [10:0]   mod_iq_payload_cha_i,
  output     [10:0]   mod_iq_payload_cha_q,
  input               clk,
  input               reset
);
  reg        [10:0]   _zz_mod_iq_payload_cha_i;
  wire       [10:0]   codeTableI_0;
  wire       [10:0]   codeTableI_1;
  wire       [10:0]   codeTableI_2;
  wire       [10:0]   codeTableI_3;
  reg        [1:0]    unit_data;
  reg                 unit_valid;

  always @(*) begin
    case(unit_data)
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

  assign codeTableI_0 = 11'h001;
  assign codeTableI_1 = 11'h002;
  assign codeTableI_2 = 11'h004;
  assign codeTableI_3 = 11'h008;
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_i = _zz_mod_iq_payload_cha_i;
    end else begin
      mod_iq_payload_cha_i = 11'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_valid = 1'b1;
    end else begin
      mod_iq_valid = 1'b0;
    end
  end

  assign mod_iq_payload_cha_q = 11'h0;
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
