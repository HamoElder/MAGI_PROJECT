// Generator : SpinalHDL v1.6.0    git head : 73c8d8e2b86b45646e9d0b2e729291f2b65e6be3
// Component : AxiLite4Ram
// Git hash  : ab2b24081b4de71e46a2e0f8160b40af136b5f44



module AxiLite4Ram (
  input               axil4Data_awvalid,
  output              axil4Data_awready,
  input      [12:0]   axil4Data_awaddr,
  input      [2:0]    axil4Data_awprot,
  input               axil4Data_wvalid,
  output              axil4Data_wready,
  input      [31:0]   axil4Data_wdata,
  input      [3:0]    axil4Data_wstrb,
  output              axil4Data_bvalid,
  input               axil4Data_bready,
  output     [1:0]    axil4Data_bresp,
  input               axil4Data_arvalid,
  output              axil4Data_arready,
  input      [12:0]   axil4Data_araddr,
  input      [2:0]    axil4Data_arprot,
  output              axil4Data_rvalid,
  input               axil4Data_rready,
  output     [31:0]   axil4Data_rdata,
  output     [1:0]    axil4Data_rresp,
  input               clk,
  input               resetn
);
  reg        [31:0]   _zz_ram_port0;
  wire       [10:0]   _zz_ram_port;
  reg        [12:0]   ram_w_address;
  wire       [10:0]   _zz_axil4Data_rdata;
  wire                axil4Data_ar_fire;
  wire                axil4Data_w_fire;
  reg                 axil4_ar_ready;
  reg                 axil4_aw_ready;
  reg                 axil4_w_ready;
  reg                 axil4_r_valid;
  reg                 axil4_b_valid;
  wire                axil4Data_ar_fire_1;
  wire                when_AxiLite4Ram_l61;
  wire                axil4Data_r_fire;
  wire                axil4Data_aw_fire;
  wire                when_AxiLite4Ram_l69;
  wire                axil4Data_w_fire_1;
  wire                axil4Data_b_fire;
  reg [7:0] ram_symbol0 [0:2047];
  reg [7:0] ram_symbol1 [0:2047];
  reg [7:0] ram_symbol2 [0:2047];
  reg [7:0] ram_symbol3 [0:2047];
  reg [7:0] _zz_ramsymbol_read;
  reg [7:0] _zz_ramsymbol_read_1;
  reg [7:0] _zz_ramsymbol_read_2;
  reg [7:0] _zz_ramsymbol_read_3;

  assign _zz_ram_port = ram_w_address[12 : 2];
  always @(*) begin
    _zz_ram_port0 = {_zz_ramsymbol_read_3, _zz_ramsymbol_read_2, _zz_ramsymbol_read_1, _zz_ramsymbol_read};
  end
  always @(posedge clk) begin
    if(axil4Data_ar_fire) begin
      _zz_ramsymbol_read <= ram_symbol0[_zz_axil4Data_rdata];
      _zz_ramsymbol_read_1 <= ram_symbol1[_zz_axil4Data_rdata];
      _zz_ramsymbol_read_2 <= ram_symbol2[_zz_axil4Data_rdata];
      _zz_ramsymbol_read_3 <= ram_symbol3[_zz_axil4Data_rdata];
    end
  end

  always @(posedge clk) begin
    if(axil4Data_wstrb[0] && axil4Data_w_fire) begin
      ram_symbol0[_zz_ram_port] <= axil4Data_wdata[7 : 0];
    end
    if(axil4Data_wstrb[1] && axil4Data_w_fire) begin
      ram_symbol1[_zz_ram_port] <= axil4Data_wdata[15 : 8];
    end
    if(axil4Data_wstrb[2] && axil4Data_w_fire) begin
      ram_symbol2[_zz_ram_port] <= axil4Data_wdata[23 : 16];
    end
    if(axil4Data_wstrb[3] && axil4Data_w_fire) begin
      ram_symbol3[_zz_ram_port] <= axil4Data_wdata[31 : 24];
    end
  end

  assign _zz_axil4Data_rdata = axil4Data_araddr[12 : 2];
  assign axil4Data_ar_fire = (axil4Data_arvalid && axil4Data_arready);
  assign axil4Data_rdata = _zz_ram_port0;
  assign axil4Data_w_fire = (axil4Data_wvalid && axil4Data_wready);
  assign axil4Data_rresp = 2'b00;
  assign axil4Data_bresp = 2'b00;
  assign axil4Data_bvalid = axil4_b_valid;
  assign axil4Data_arready = axil4_ar_ready;
  assign axil4Data_awready = axil4_aw_ready;
  assign axil4Data_wready = axil4_w_ready;
  assign axil4Data_rvalid = axil4_r_valid;
  assign axil4Data_ar_fire_1 = (axil4Data_arvalid && axil4Data_arready);
  assign when_AxiLite4Ram_l61 = (axil4Data_ar_fire_1 && axil4_ar_ready);
  assign axil4Data_r_fire = (axil4Data_rvalid && axil4Data_rready);
  assign axil4Data_aw_fire = (axil4Data_awvalid && axil4Data_awready);
  assign when_AxiLite4Ram_l69 = (axil4Data_aw_fire && axil4_aw_ready);
  assign axil4Data_w_fire_1 = (axil4Data_wvalid && axil4Data_wready);
  assign axil4Data_b_fire = (axil4Data_bvalid && axil4Data_bready);
  always @(posedge clk) begin
    if(!resetn) begin
      axil4_ar_ready <= 1'b1;
      axil4_aw_ready <= 1'b1;
      axil4_w_ready <= 1'b0;
      axil4_r_valid <= 1'b0;
      axil4_b_valid <= 1'b0;
    end else begin
      if(when_AxiLite4Ram_l61) begin
        axil4_ar_ready <= 1'b0;
        axil4_r_valid <= 1'b1;
      end else begin
        if(axil4Data_r_fire) begin
          axil4_ar_ready <= 1'b1;
          axil4_r_valid <= 1'b0;
        end
      end
      if(when_AxiLite4Ram_l69) begin
        axil4_aw_ready <= 1'b0;
        axil4_w_ready <= 1'b1;
      end else begin
        if(axil4Data_w_fire_1) begin
          axil4_w_ready <= 1'b0;
          axil4_b_valid <= 1'b1;
        end else begin
          if(axil4Data_b_fire) begin
            axil4_b_valid <= 1'b0;
            axil4_aw_ready <= 1'b1;
          end
        end
      end
    end
  end

  always @(posedge clk) begin
    if(when_AxiLite4Ram_l69) begin
      ram_w_address <= axil4Data_awaddr;
    end
  end


endmodule
