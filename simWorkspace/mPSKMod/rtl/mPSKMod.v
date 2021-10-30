// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : mPSKMod
// Git hash  : 8ea3836c6991c66e54ff283e1ce84688f7fe9417



module mPSKMod (
  input               unit_data_valid,
  input      [1:0]    unit_data_payload,
  output reg          mod_iq_valid,
  output reg [7:0]    mod_iq_payload_cha_i,
  output reg [7:0]    mod_iq_payload_cha_q,
  input               clk,
  input               reset
);
  reg        [15:0]   _zz__zz_mod_iq_0;
  wire       [15:0]   codeTable_0;
  wire       [15:0]   codeTable_1;
  wire       [15:0]   codeTable_2;
  wire       [15:0]   codeTable_3;
  reg        [1:0]    unit_data;
  reg                 unit_valid;
  wire       [15:0]   _zz_mod_iq_0;
  wire       [7:0]    mod_iq_0;
  wire       [7:0]    mod_iq_1;

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

  assign codeTable_0 = 16'ha7a7;
  assign codeTable_1 = 16'ha759;
  assign codeTable_2 = 16'h59a7;
  assign codeTable_3 = 16'h5959;
  assign _zz_mod_iq_0 = _zz__zz_mod_iq_0;
  assign mod_iq_0 = _zz_mod_iq_0[7 : 0];
  assign mod_iq_1 = _zz_mod_iq_0[15 : 8];
  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_i = mod_iq_1;
    end else begin
      mod_iq_payload_cha_i = 8'h0;
    end
  end

  always @(*) begin
    if(unit_valid) begin
      mod_iq_payload_cha_q = mod_iq_0;
    end else begin
      mod_iq_payload_cha_q = 8'h0;
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
