// Generator : SpinalHDL v1.7.0    git head : eca519e78d4e6022e34911ec300a432ed9db8220
// Component : AsyncClkSwitch
// Git hash  : 67899194e2943426e013ff8893c37acadb8b8b7d

`timescale 1ns/1ps

module AsyncClkSwitch (
  input               clk_in_0,
  input               clk_in_1,
  input               clk_rstn,
  input               select_1,
  output              clk_out
);

  (* async_reg = "true" *) reg                 posClkArea1_clk_sel_1;
  (* async_reg = "true" *) reg                 posClkArea0_clk_sel_0;
  reg                 negClkArea0_clk_sel_0_buf;
  reg                 negClkArea1_clk_sel_1_buf;

  assign clk_out = ((clk_in_0 && negClkArea0_clk_sel_0_buf) || (clk_in_1 && negClkArea1_clk_sel_1_buf));
  always @(posedge clk_in_1 or negedge clk_rstn) begin
    if(!clk_rstn) begin
      posClkArea1_clk_sel_1 <= 1'b0;
    end else begin
      posClkArea1_clk_sel_1 <= ((select_1 == 1'b1) && (! posClkArea0_clk_sel_0));
    end
  end

  always @(posedge clk_in_0 or negedge clk_rstn) begin
    if(!clk_rstn) begin
      posClkArea0_clk_sel_0 <= 1'b0;
    end else begin
      posClkArea0_clk_sel_0 <= ((select_1 == 1'b0) && (! posClkArea1_clk_sel_1));
    end
  end

  always @(negedge clk_in_0 or negedge clk_rstn) begin
    if(!clk_rstn) begin
      negClkArea0_clk_sel_0_buf <= 1'b0;
    end else begin
      negClkArea0_clk_sel_0_buf <= posClkArea0_clk_sel_0;
    end
  end

  always @(negedge clk_in_1 or negedge clk_rstn) begin
    if(!clk_rstn) begin
      negClkArea1_clk_sel_1_buf <= 1'b0;
    end else begin
      negClkArea1_clk_sel_1_buf <= posClkArea1_clk_sel_1;
    end
  end


endmodule
