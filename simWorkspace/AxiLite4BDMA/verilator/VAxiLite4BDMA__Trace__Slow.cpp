// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4BDMA__Syms.h"


//======================

void VAxiLite4BDMA::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAxiLite4BDMA::traceInit, &VAxiLite4BDMA::traceFull, &VAxiLite4BDMA::traceChg, this);
}
void VAxiLite4BDMA::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAxiLite4BDMA* t = (VAxiLite4BDMA*)userthis;
    VAxiLite4BDMA__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAxiLite4BDMA::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4BDMA* t = (VAxiLite4BDMA*)userthis;
    VAxiLite4BDMA__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAxiLite4BDMA::traceInitThis(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceInitThis__2(vlSymsp, vcdp, code);
    }
}

void VAxiLite4BDMA::traceFullThis(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__6(vlSymsp, vcdp, code);
        vlTOPp->traceFullThis__11(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4BDMA::traceInitThis__1(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+3865,"axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+3873,"axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+3881,"axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+3889,"axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+3897,"axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+3905,"axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+3913,"axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+3921,"axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+3929,"axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+3937,"axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+3945,"axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+3953,"axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+3961,"axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+3969,"axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+3977,"axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+3985,"axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+3993,"axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+4001,"axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+4009,"axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+4017,"axi4S2M_awvalid", false,-1);
        vcdp->declBit(c+4025,"axi4S2M_awready", false,-1);
        vcdp->declBus(c+4033,"axi4S2M_awaddr", false,-1, 31,0);
        vcdp->declBus(c+4041,"axi4S2M_awid", false,-1, 3,0);
        vcdp->declBus(c+4049,"axi4S2M_awlen", false,-1, 7,0);
        vcdp->declBus(c+4057,"axi4S2M_awsize", false,-1, 2,0);
        vcdp->declBus(c+4065,"axi4S2M_awburst", false,-1, 1,0);
        vcdp->declBit(c+4073,"axi4S2M_wvalid", false,-1);
        vcdp->declBit(c+4081,"axi4S2M_wready", false,-1);
        vcdp->declBus(c+4089,"axi4S2M_wdata", false,-1, 31,0);
        vcdp->declBus(c+4097,"axi4S2M_wstrb", false,-1, 3,0);
        vcdp->declBit(c+4105,"axi4S2M_wlast", false,-1);
        vcdp->declBit(c+4113,"axi4S2M_bvalid", false,-1);
        vcdp->declBit(c+4121,"axi4S2M_bready", false,-1);
        vcdp->declBus(c+4129,"axi4S2M_bid", false,-1, 3,0);
        vcdp->declBus(c+4137,"axi4S2M_bresp", false,-1, 1,0);
        vcdp->declBit(c+4145,"axi4S2M_arvalid", false,-1);
        vcdp->declBit(c+4153,"axi4S2M_arready", false,-1);
        vcdp->declBus(c+4161,"axi4S2M_araddr", false,-1, 31,0);
        vcdp->declBus(c+4169,"axi4S2M_arid", false,-1, 3,0);
        vcdp->declBus(c+4177,"axi4S2M_arlen", false,-1, 7,0);
        vcdp->declBus(c+4185,"axi4S2M_arsize", false,-1, 2,0);
        vcdp->declBus(c+4193,"axi4S2M_arburst", false,-1, 1,0);
        vcdp->declBit(c+4201,"axi4S2M_rvalid", false,-1);
        vcdp->declBit(c+4209,"axi4S2M_rready", false,-1);
        vcdp->declBus(c+4217,"axi4S2M_rdata", false,-1, 31,0);
        vcdp->declBus(c+4225,"axi4S2M_rid", false,-1, 3,0);
        vcdp->declBus(c+4233,"axi4S2M_rresp", false,-1, 1,0);
        vcdp->declBit(c+4241,"axi4S2M_rlast", false,-1);
        vcdp->declBit(c+4249,"axi4M2S_awvalid", false,-1);
        vcdp->declBit(c+4257,"axi4M2S_awready", false,-1);
        vcdp->declBus(c+4265,"axi4M2S_awaddr", false,-1, 31,0);
        vcdp->declBus(c+4273,"axi4M2S_awid", false,-1, 3,0);
        vcdp->declBus(c+4281,"axi4M2S_awlen", false,-1, 7,0);
        vcdp->declBus(c+4289,"axi4M2S_awsize", false,-1, 2,0);
        vcdp->declBus(c+4297,"axi4M2S_awburst", false,-1, 1,0);
        vcdp->declBit(c+4305,"axi4M2S_wvalid", false,-1);
        vcdp->declBit(c+4313,"axi4M2S_wready", false,-1);
        vcdp->declBus(c+4321,"axi4M2S_wdata", false,-1, 31,0);
        vcdp->declBus(c+4329,"axi4M2S_wstrb", false,-1, 3,0);
        vcdp->declBit(c+4337,"axi4M2S_wlast", false,-1);
        vcdp->declBit(c+4345,"axi4M2S_bvalid", false,-1);
        vcdp->declBit(c+4353,"axi4M2S_bready", false,-1);
        vcdp->declBus(c+4361,"axi4M2S_bid", false,-1, 3,0);
        vcdp->declBus(c+4369,"axi4M2S_bresp", false,-1, 1,0);
        vcdp->declBit(c+4377,"axi4M2S_arvalid", false,-1);
        vcdp->declBit(c+4385,"axi4M2S_arready", false,-1);
        vcdp->declBus(c+4393,"axi4M2S_araddr", false,-1, 31,0);
        vcdp->declBus(c+4401,"axi4M2S_arid", false,-1, 3,0);
        vcdp->declBus(c+4409,"axi4M2S_arlen", false,-1, 7,0);
        vcdp->declBus(c+4417,"axi4M2S_arsize", false,-1, 2,0);
        vcdp->declBus(c+4425,"axi4M2S_arburst", false,-1, 1,0);
        vcdp->declBit(c+4433,"axi4M2S_rvalid", false,-1);
        vcdp->declBit(c+4441,"axi4M2S_rready", false,-1);
        vcdp->declBus(c+4449,"axi4M2S_rdata", false,-1, 31,0);
        vcdp->declBus(c+4457,"axi4M2S_rid", false,-1, 3,0);
        vcdp->declBus(c+4465,"axi4M2S_rresp", false,-1, 1,0);
        vcdp->declBit(c+4473,"axi4M2S_rlast", false,-1);
        vcdp->declBit(c+4481,"dataS2M_tvalid", false,-1);
        vcdp->declBit(c+4489,"dataS2M_tready", false,-1);
        vcdp->declBus(c+4497,"dataS2M_tdata", false,-1, 31,0);
        vcdp->declBus(c+4505,"dataS2M_tid", false,-1, 3,0);
        vcdp->declBus(c+4513,"dataS2M_tstrb", false,-1, 3,0);
        vcdp->declBus(c+4521,"dataS2M_tkeep", false,-1, 3,0);
        vcdp->declBit(c+4529,"dataS2M_tlast", false,-1);
        vcdp->declBit(c+4537,"dataM2S_tvalid", false,-1);
        vcdp->declBit(c+4545,"dataM2S_tready", false,-1);
        vcdp->declBus(c+4553,"dataM2S_tdata", false,-1, 31,0);
        vcdp->declBus(c+4561,"dataM2S_tid", false,-1, 3,0);
        vcdp->declBus(c+4569,"dataM2S_tstrb", false,-1, 3,0);
        vcdp->declBus(c+4577,"dataM2S_tkeep", false,-1, 3,0);
        vcdp->declBit(c+4585,"dataM2S_tlast", false,-1);
        vcdp->declBit(c+4593,"intrS2M", false,-1);
        vcdp->declBit(c+4601,"intrM2S", false,-1);
        vcdp->declBit(c+4609,"clk", false,-1);
        vcdp->declBit(c+4617,"reset", false,-1);
        vcdp->declBit(c+3865,"AxiLite4BDMA axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+3873,"AxiLite4BDMA axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+3881,"AxiLite4BDMA axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+3889,"AxiLite4BDMA axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+3897,"AxiLite4BDMA axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+3905,"AxiLite4BDMA axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+3913,"AxiLite4BDMA axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+3921,"AxiLite4BDMA axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+3929,"AxiLite4BDMA axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+3937,"AxiLite4BDMA axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+3945,"AxiLite4BDMA axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+3953,"AxiLite4BDMA axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+3961,"AxiLite4BDMA axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+3969,"AxiLite4BDMA axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+3977,"AxiLite4BDMA axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+3985,"AxiLite4BDMA axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+3993,"AxiLite4BDMA axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+4001,"AxiLite4BDMA axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+4009,"AxiLite4BDMA axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBit(c+4017,"AxiLite4BDMA axi4S2M_awvalid", false,-1);
        vcdp->declBit(c+4025,"AxiLite4BDMA axi4S2M_awready", false,-1);
        vcdp->declBus(c+4033,"AxiLite4BDMA axi4S2M_awaddr", false,-1, 31,0);
        vcdp->declBus(c+4041,"AxiLite4BDMA axi4S2M_awid", false,-1, 3,0);
        vcdp->declBus(c+4049,"AxiLite4BDMA axi4S2M_awlen", false,-1, 7,0);
        vcdp->declBus(c+4057,"AxiLite4BDMA axi4S2M_awsize", false,-1, 2,0);
        vcdp->declBus(c+4065,"AxiLite4BDMA axi4S2M_awburst", false,-1, 1,0);
        vcdp->declBit(c+4073,"AxiLite4BDMA axi4S2M_wvalid", false,-1);
        vcdp->declBit(c+4081,"AxiLite4BDMA axi4S2M_wready", false,-1);
        vcdp->declBus(c+4089,"AxiLite4BDMA axi4S2M_wdata", false,-1, 31,0);
        vcdp->declBus(c+4097,"AxiLite4BDMA axi4S2M_wstrb", false,-1, 3,0);
        vcdp->declBit(c+4105,"AxiLite4BDMA axi4S2M_wlast", false,-1);
        vcdp->declBit(c+4113,"AxiLite4BDMA axi4S2M_bvalid", false,-1);
        vcdp->declBit(c+4121,"AxiLite4BDMA axi4S2M_bready", false,-1);
        vcdp->declBus(c+4129,"AxiLite4BDMA axi4S2M_bid", false,-1, 3,0);
        vcdp->declBus(c+4137,"AxiLite4BDMA axi4S2M_bresp", false,-1, 1,0);
        vcdp->declBit(c+4145,"AxiLite4BDMA axi4S2M_arvalid", false,-1);
        vcdp->declBit(c+4153,"AxiLite4BDMA axi4S2M_arready", false,-1);
        vcdp->declBus(c+4161,"AxiLite4BDMA axi4S2M_araddr", false,-1, 31,0);
        vcdp->declBus(c+4169,"AxiLite4BDMA axi4S2M_arid", false,-1, 3,0);
        vcdp->declBus(c+4177,"AxiLite4BDMA axi4S2M_arlen", false,-1, 7,0);
        vcdp->declBus(c+4185,"AxiLite4BDMA axi4S2M_arsize", false,-1, 2,0);
        vcdp->declBus(c+4193,"AxiLite4BDMA axi4S2M_arburst", false,-1, 1,0);
        vcdp->declBit(c+4201,"AxiLite4BDMA axi4S2M_rvalid", false,-1);
        vcdp->declBit(c+4209,"AxiLite4BDMA axi4S2M_rready", false,-1);
        vcdp->declBus(c+4217,"AxiLite4BDMA axi4S2M_rdata", false,-1, 31,0);
        vcdp->declBus(c+4225,"AxiLite4BDMA axi4S2M_rid", false,-1, 3,0);
        vcdp->declBus(c+4233,"AxiLite4BDMA axi4S2M_rresp", false,-1, 1,0);
        vcdp->declBit(c+4241,"AxiLite4BDMA axi4S2M_rlast", false,-1);
        vcdp->declBit(c+4249,"AxiLite4BDMA axi4M2S_awvalid", false,-1);
        vcdp->declBit(c+4257,"AxiLite4BDMA axi4M2S_awready", false,-1);
        vcdp->declBus(c+4265,"AxiLite4BDMA axi4M2S_awaddr", false,-1, 31,0);
        vcdp->declBus(c+4273,"AxiLite4BDMA axi4M2S_awid", false,-1, 3,0);
        vcdp->declBus(c+4281,"AxiLite4BDMA axi4M2S_awlen", false,-1, 7,0);
        vcdp->declBus(c+4289,"AxiLite4BDMA axi4M2S_awsize", false,-1, 2,0);
        vcdp->declBus(c+4297,"AxiLite4BDMA axi4M2S_awburst", false,-1, 1,0);
        vcdp->declBit(c+4305,"AxiLite4BDMA axi4M2S_wvalid", false,-1);
        vcdp->declBit(c+4313,"AxiLite4BDMA axi4M2S_wready", false,-1);
        vcdp->declBus(c+4321,"AxiLite4BDMA axi4M2S_wdata", false,-1, 31,0);
        vcdp->declBus(c+4329,"AxiLite4BDMA axi4M2S_wstrb", false,-1, 3,0);
        vcdp->declBit(c+4337,"AxiLite4BDMA axi4M2S_wlast", false,-1);
        vcdp->declBit(c+4345,"AxiLite4BDMA axi4M2S_bvalid", false,-1);
        vcdp->declBit(c+4353,"AxiLite4BDMA axi4M2S_bready", false,-1);
        vcdp->declBus(c+4361,"AxiLite4BDMA axi4M2S_bid", false,-1, 3,0);
        vcdp->declBus(c+4369,"AxiLite4BDMA axi4M2S_bresp", false,-1, 1,0);
        vcdp->declBit(c+4377,"AxiLite4BDMA axi4M2S_arvalid", false,-1);
        vcdp->declBit(c+4385,"AxiLite4BDMA axi4M2S_arready", false,-1);
        vcdp->declBus(c+4393,"AxiLite4BDMA axi4M2S_araddr", false,-1, 31,0);
        vcdp->declBus(c+4401,"AxiLite4BDMA axi4M2S_arid", false,-1, 3,0);
        vcdp->declBus(c+4409,"AxiLite4BDMA axi4M2S_arlen", false,-1, 7,0);
        vcdp->declBus(c+4417,"AxiLite4BDMA axi4M2S_arsize", false,-1, 2,0);
        vcdp->declBus(c+4425,"AxiLite4BDMA axi4M2S_arburst", false,-1, 1,0);
        vcdp->declBit(c+4433,"AxiLite4BDMA axi4M2S_rvalid", false,-1);
        vcdp->declBit(c+4441,"AxiLite4BDMA axi4M2S_rready", false,-1);
        vcdp->declBus(c+4449,"AxiLite4BDMA axi4M2S_rdata", false,-1, 31,0);
        vcdp->declBus(c+4457,"AxiLite4BDMA axi4M2S_rid", false,-1, 3,0);
        vcdp->declBus(c+4465,"AxiLite4BDMA axi4M2S_rresp", false,-1, 1,0);
        vcdp->declBit(c+4473,"AxiLite4BDMA axi4M2S_rlast", false,-1);
        vcdp->declBit(c+4481,"AxiLite4BDMA dataS2M_tvalid", false,-1);
        vcdp->declBit(c+4489,"AxiLite4BDMA dataS2M_tready", false,-1);
        vcdp->declBus(c+4497,"AxiLite4BDMA dataS2M_tdata", false,-1, 31,0);
        vcdp->declBus(c+4505,"AxiLite4BDMA dataS2M_tid", false,-1, 3,0);
        vcdp->declBus(c+4513,"AxiLite4BDMA dataS2M_tstrb", false,-1, 3,0);
        vcdp->declBus(c+4521,"AxiLite4BDMA dataS2M_tkeep", false,-1, 3,0);
        vcdp->declBit(c+4529,"AxiLite4BDMA dataS2M_tlast", false,-1);
        vcdp->declBit(c+4537,"AxiLite4BDMA dataM2S_tvalid", false,-1);
        vcdp->declBit(c+4545,"AxiLite4BDMA dataM2S_tready", false,-1);
        vcdp->declBus(c+4553,"AxiLite4BDMA dataM2S_tdata", false,-1, 31,0);
        vcdp->declBus(c+4561,"AxiLite4BDMA dataM2S_tid", false,-1, 3,0);
        vcdp->declBus(c+4569,"AxiLite4BDMA dataM2S_tstrb", false,-1, 3,0);
        vcdp->declBus(c+4577,"AxiLite4BDMA dataM2S_tkeep", false,-1, 3,0);
        vcdp->declBit(c+4585,"AxiLite4BDMA dataM2S_tlast", false,-1);
        vcdp->declBit(c+4593,"AxiLite4BDMA intrS2M", false,-1);
        vcdp->declBit(c+4601,"AxiLite4BDMA intrM2S", false,-1);
        vcdp->declBit(c+4609,"AxiLite4BDMA clk", false,-1);
        vcdp->declBit(c+4617,"AxiLite4BDMA reset", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core_axi4S2M_arvalid", false,-1);
        vcdp->declBus(c+4713,"AxiLite4BDMA bdma_core_axi4S2M_araddr", false,-1, 31,0);
        vcdp->declBus(c+4721,"AxiLite4BDMA bdma_core_axi4S2M_arid", false,-1, 3,0);
        vcdp->declBus(c+4729,"AxiLite4BDMA bdma_core_axi4S2M_arlen", false,-1, 7,0);
        vcdp->declBus(c+4737,"AxiLite4BDMA bdma_core_axi4S2M_arsize", false,-1, 2,0);
        vcdp->declBus(c+4745,"AxiLite4BDMA bdma_core_axi4S2M_arburst", false,-1, 1,0);
        vcdp->declBit(c+1,"AxiLite4BDMA bdma_core_axi4S2M_awvalid", false,-1);
        vcdp->declBus(c+1297,"AxiLite4BDMA bdma_core_axi4S2M_awaddr", false,-1, 31,0);
        vcdp->declBus(c+1305,"AxiLite4BDMA bdma_core_axi4S2M_awid", false,-1, 3,0);
        vcdp->declBus(c+1313,"AxiLite4BDMA bdma_core_axi4S2M_awlen", false,-1, 7,0);
        vcdp->declBus(c+1321,"AxiLite4BDMA bdma_core_axi4S2M_awsize", false,-1, 2,0);
        vcdp->declBus(c+1329,"AxiLite4BDMA bdma_core_axi4S2M_awburst", false,-1, 1,0);
        vcdp->declBit(c+2217,"AxiLite4BDMA bdma_core_axi4S2M_wvalid", false,-1);
        vcdp->declBus(c+1337,"AxiLite4BDMA bdma_core_axi4S2M_wdata", false,-1, 31,0);
        vcdp->declBus(c+2161,"AxiLite4BDMA bdma_core_axi4S2M_wstrb", false,-1, 3,0);
        vcdp->declBit(c+2953,"AxiLite4BDMA bdma_core_axi4S2M_wlast", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core_axi4S2M_rready", false,-1);
        vcdp->declBit(c+2225,"AxiLite4BDMA bdma_core_axi4S2M_bready", false,-1);
        vcdp->declBit(c+9,"AxiLite4BDMA bdma_core_axi4M2S_arvalid", false,-1);
        vcdp->declBus(c+1345,"AxiLite4BDMA bdma_core_axi4M2S_araddr", false,-1, 31,0);
        vcdp->declBus(c+1353,"AxiLite4BDMA bdma_core_axi4M2S_arid", false,-1, 3,0);
        vcdp->declBus(c+1361,"AxiLite4BDMA bdma_core_axi4M2S_arlen", false,-1, 7,0);
        vcdp->declBus(c+1369,"AxiLite4BDMA bdma_core_axi4M2S_arsize", false,-1, 2,0);
        vcdp->declBus(c+1377,"AxiLite4BDMA bdma_core_axi4M2S_arburst", false,-1, 1,0);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core_axi4M2S_awvalid", false,-1);
        vcdp->declBus(c+4713,"AxiLite4BDMA bdma_core_axi4M2S_awaddr", false,-1, 31,0);
        vcdp->declBus(c+4721,"AxiLite4BDMA bdma_core_axi4M2S_awid", false,-1, 3,0);
        vcdp->declBus(c+4729,"AxiLite4BDMA bdma_core_axi4M2S_awlen", false,-1, 7,0);
        vcdp->declBus(c+4737,"AxiLite4BDMA bdma_core_axi4M2S_awsize", false,-1, 2,0);
        vcdp->declBus(c+4745,"AxiLite4BDMA bdma_core_axi4M2S_awburst", false,-1, 1,0);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core_axi4M2S_wvalid", false,-1);
        vcdp->declBus(c+4713,"AxiLite4BDMA bdma_core_axi4M2S_wdata", false,-1, 31,0);
        vcdp->declBus(c+4721,"AxiLite4BDMA bdma_core_axi4M2S_wstrb", false,-1, 3,0);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core_axi4M2S_wlast", false,-1);
        vcdp->declBit(c+17,"AxiLite4BDMA bdma_core_axi4M2S_rready", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core_axi4M2S_bready", false,-1);
        vcdp->declBit(c+25,"AxiLite4BDMA bdma_core_dataS2M_tready", false,-1);
        vcdp->declBit(c+33,"AxiLite4BDMA bdma_core_dataM2S_tvalid", false,-1);
        vcdp->declBus(c+2961,"AxiLite4BDMA bdma_core_dataM2S_tdata", false,-1, 31,0);
        vcdp->declBus(c+2969,"AxiLite4BDMA bdma_core_dataM2S_tid", false,-1, 3,0);
        vcdp->declBus(c+2977,"AxiLite4BDMA bdma_core_dataM2S_tstrb", false,-1, 3,0);
        vcdp->declBus(c+2985,"AxiLite4BDMA bdma_core_dataM2S_tkeep", false,-1, 3,0);
        vcdp->declBit(c+2993,"AxiLite4BDMA bdma_core_dataM2S_tlast", false,-1);
        vcdp->declBit(c+2233,"AxiLite4BDMA bdma_core_cchS2M_ready", false,-1);
        vcdp->declBit(c+2241,"AxiLite4BDMA bdma_core_cchM2S_ready", false,-1);
        vcdp->declBus(c+2249,"AxiLite4BDMA bdma_core_indicatorS2M", false,-1, 2,0);
        vcdp->declBus(c+2257,"AxiLite4BDMA bdma_core_indicatorM2S", false,-1, 0,0);
        vcdp->declBit(c+2265,"AxiLite4BDMA bdma_core_intrS2M", false,-1);
        vcdp->declBit(c+2273,"AxiLite4BDMA bdma_core_intrM2S", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA readHaltRequest", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA writeHaltRequest", false,-1);
        vcdp->declBit(c+977,"AxiLite4BDMA writeJoinEvent_valid", false,-1);
        vcdp->declBit(c+985,"AxiLite4BDMA writeJoinEvent_ready", false,-1);
        vcdp->declBit(c+993,"AxiLite4BDMA writeJoinEvent_fire", false,-1);
        vcdp->declBus(c+4745,"AxiLite4BDMA writeRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+977,"AxiLite4BDMA writeJoinEvent_translated_valid", false,-1);
        vcdp->declBit(c+985,"AxiLite4BDMA writeJoinEvent_translated_ready", false,-1);
        vcdp->declBus(c+4745,"AxiLite4BDMA writeJoinEvent_translated_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+2281,"AxiLite4BDMA when_Stream_l342", false,-1);
        vcdp->declBit(c+2289,"AxiLite4BDMA axil4Ctrl_ar_readDataStage_valid", false,-1);
        vcdp->declBit(c+3993,"AxiLite4BDMA axil4Ctrl_ar_readDataStage_ready", false,-1);
        vcdp->declBus(c+1385,"AxiLite4BDMA axil4Ctrl_ar_readDataStage_payload_addr", false,-1, 7,0);
        vcdp->declBus(c+1393,"AxiLite4BDMA axil4Ctrl_ar_readDataStage_payload_prot", false,-1, 2,0);
        vcdp->declBit(c+2289,"AxiLite4BDMA axil4Ctrl_ar_rValid", false,-1);
        vcdp->declBus(c+1385,"AxiLite4BDMA axil4Ctrl_ar_rData_addr", false,-1, 7,0);
        vcdp->declBus(c+1393,"AxiLite4BDMA axil4Ctrl_ar_rData_prot", false,-1, 2,0);
        vcdp->declBit(c+2297,"AxiLite4BDMA when_Stream_l342_1", false,-1);
        vcdp->declBus(c+41,"AxiLite4BDMA readRsp_data", false,-1, 31,0);
        vcdp->declBus(c+4745,"AxiLite4BDMA readRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+993,"AxiLite4BDMA writeOccur", false,-1);
        vcdp->declBit(c+4625,"AxiLite4BDMA readOccur", false,-1);
        vcdp->declBit(c+2305,"AxiLite4BDMA bdma_core_cchS2M_valid_driver", false,-1);
        vcdp->declBus(c+2313,"AxiLite4BDMA bdma_core_cchS2M_payload_desc_start_addr_driver", false,-1, 31,0);
        vcdp->declBus(c+2321,"AxiLite4BDMA bdma_core_cchS2M_payload_desc_total_bytes_driver", false,-1, 29,0);
        vcdp->declBus(c+2329,"AxiLite4BDMA bdma_core_cchS2M_payload_desc_burst_driver", false,-1, 1,0);
        vcdp->declBus(c+2337,"AxiLite4BDMA bdma_core_cchS2M_payload_desc_id_driver", false,-1, 3,0);
        vcdp->declBit(c+2345,"AxiLite4BDMA bdma_core_cchS2M_payload_desc_reset_driver", false,-1);
        vcdp->declBit(c+2353,"AxiLite4BDMA bdma_core_cchM2S_valid_driver", false,-1);
        vcdp->declBus(c+2361,"AxiLite4BDMA bdma_core_cchM2S_payload_desc_start_addr_driver", false,-1, 31,0);
        vcdp->declBus(c+2369,"AxiLite4BDMA bdma_core_cchM2S_payload_desc_total_bytes_driver", false,-1, 29,0);
        vcdp->declBus(c+2377,"AxiLite4BDMA bdma_core_cchM2S_payload_desc_burst_driver", false,-1, 1,0);
        vcdp->declBus(c+2385,"AxiLite4BDMA bdma_core_cchM2S_payload_desc_id_driver", false,-1, 3,0);
        vcdp->declBit(c+2393,"AxiLite4BDMA bdma_core_cchM2S_payload_desc_reset_driver", false,-1);
        vcdp->declBit(c+1,"AxiLite4BDMA bdma_core axi4S2M_awvalid", false,-1);
        vcdp->declBit(c+4025,"AxiLite4BDMA bdma_core axi4S2M_awready", false,-1);
        vcdp->declBus(c+1297,"AxiLite4BDMA bdma_core axi4S2M_awaddr", false,-1, 31,0);
        vcdp->declBus(c+1305,"AxiLite4BDMA bdma_core axi4S2M_awid", false,-1, 3,0);
        vcdp->declBus(c+1313,"AxiLite4BDMA bdma_core axi4S2M_awlen", false,-1, 7,0);
        vcdp->declBus(c+1321,"AxiLite4BDMA bdma_core axi4S2M_awsize", false,-1, 2,0);
        vcdp->declBus(c+1329,"AxiLite4BDMA bdma_core axi4S2M_awburst", false,-1, 1,0);
        vcdp->declBit(c+2217,"AxiLite4BDMA bdma_core axi4S2M_wvalid", false,-1);
        vcdp->declBit(c+4081,"AxiLite4BDMA bdma_core axi4S2M_wready", false,-1);
        vcdp->declBus(c+1337,"AxiLite4BDMA bdma_core axi4S2M_wdata", false,-1, 31,0);
        vcdp->declBus(c+2161,"AxiLite4BDMA bdma_core axi4S2M_wstrb", false,-1, 3,0);
        vcdp->declBit(c+2953,"AxiLite4BDMA bdma_core axi4S2M_wlast", false,-1);
        vcdp->declBit(c+4113,"AxiLite4BDMA bdma_core axi4S2M_bvalid", false,-1);
        vcdp->declBit(c+2225,"AxiLite4BDMA bdma_core axi4S2M_bready", false,-1);
        vcdp->declBus(c+4129,"AxiLite4BDMA bdma_core axi4S2M_bid", false,-1, 3,0);
        vcdp->declBus(c+4137,"AxiLite4BDMA bdma_core axi4S2M_bresp", false,-1, 1,0);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core axi4S2M_arvalid", false,-1);
        vcdp->declBit(c+4153,"AxiLite4BDMA bdma_core axi4S2M_arready", false,-1);
        vcdp->declBus(c+4713,"AxiLite4BDMA bdma_core axi4S2M_araddr", false,-1, 31,0);
        vcdp->declBus(c+4721,"AxiLite4BDMA bdma_core axi4S2M_arid", false,-1, 3,0);
        vcdp->declBus(c+4729,"AxiLite4BDMA bdma_core axi4S2M_arlen", false,-1, 7,0);
        vcdp->declBus(c+4737,"AxiLite4BDMA bdma_core axi4S2M_arsize", false,-1, 2,0);
        vcdp->declBus(c+4745,"AxiLite4BDMA bdma_core axi4S2M_arburst", false,-1, 1,0);
        vcdp->declBit(c+4201,"AxiLite4BDMA bdma_core axi4S2M_rvalid", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core axi4S2M_rready", false,-1);
        vcdp->declBus(c+4217,"AxiLite4BDMA bdma_core axi4S2M_rdata", false,-1, 31,0);
        vcdp->declBus(c+4225,"AxiLite4BDMA bdma_core axi4S2M_rid", false,-1, 3,0);
        vcdp->declBus(c+4233,"AxiLite4BDMA bdma_core axi4S2M_rresp", false,-1, 1,0);
        vcdp->declBit(c+4241,"AxiLite4BDMA bdma_core axi4S2M_rlast", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core axi4M2S_awvalid", false,-1);
        vcdp->declBit(c+4257,"AxiLite4BDMA bdma_core axi4M2S_awready", false,-1);
        vcdp->declBus(c+4713,"AxiLite4BDMA bdma_core axi4M2S_awaddr", false,-1, 31,0);
        vcdp->declBus(c+4721,"AxiLite4BDMA bdma_core axi4M2S_awid", false,-1, 3,0);
        vcdp->declBus(c+4729,"AxiLite4BDMA bdma_core axi4M2S_awlen", false,-1, 7,0);
        vcdp->declBus(c+4737,"AxiLite4BDMA bdma_core axi4M2S_awsize", false,-1, 2,0);
        vcdp->declBus(c+4745,"AxiLite4BDMA bdma_core axi4M2S_awburst", false,-1, 1,0);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core axi4M2S_wvalid", false,-1);
        vcdp->declBit(c+4313,"AxiLite4BDMA bdma_core axi4M2S_wready", false,-1);
        vcdp->declBus(c+4713,"AxiLite4BDMA bdma_core axi4M2S_wdata", false,-1, 31,0);
        vcdp->declBus(c+4721,"AxiLite4BDMA bdma_core axi4M2S_wstrb", false,-1, 3,0);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core axi4M2S_wlast", false,-1);
        vcdp->declBit(c+4345,"AxiLite4BDMA bdma_core axi4M2S_bvalid", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core axi4M2S_bready", false,-1);
        vcdp->declBus(c+4361,"AxiLite4BDMA bdma_core axi4M2S_bid", false,-1, 3,0);
        vcdp->declBus(c+4369,"AxiLite4BDMA bdma_core axi4M2S_bresp", false,-1, 1,0);
        vcdp->declBit(c+9,"AxiLite4BDMA bdma_core axi4M2S_arvalid", false,-1);
        vcdp->declBit(c+4385,"AxiLite4BDMA bdma_core axi4M2S_arready", false,-1);
        vcdp->declBus(c+1345,"AxiLite4BDMA bdma_core axi4M2S_araddr", false,-1, 31,0);
        vcdp->declBus(c+1353,"AxiLite4BDMA bdma_core axi4M2S_arid", false,-1, 3,0);
        vcdp->declBus(c+1361,"AxiLite4BDMA bdma_core axi4M2S_arlen", false,-1, 7,0);
        vcdp->declBus(c+1369,"AxiLite4BDMA bdma_core axi4M2S_arsize", false,-1, 2,0);
        vcdp->declBus(c+1377,"AxiLite4BDMA bdma_core axi4M2S_arburst", false,-1, 1,0);
        vcdp->declBit(c+4433,"AxiLite4BDMA bdma_core axi4M2S_rvalid", false,-1);
        vcdp->declBit(c+17,"AxiLite4BDMA bdma_core axi4M2S_rready", false,-1);
        vcdp->declBus(c+4449,"AxiLite4BDMA bdma_core axi4M2S_rdata", false,-1, 31,0);
        vcdp->declBus(c+4457,"AxiLite4BDMA bdma_core axi4M2S_rid", false,-1, 3,0);
        vcdp->declBus(c+4465,"AxiLite4BDMA bdma_core axi4M2S_rresp", false,-1, 1,0);
        vcdp->declBit(c+4473,"AxiLite4BDMA bdma_core axi4M2S_rlast", false,-1);
        vcdp->declBit(c+4481,"AxiLite4BDMA bdma_core dataS2M_tvalid", false,-1);
        vcdp->declBit(c+25,"AxiLite4BDMA bdma_core dataS2M_tready", false,-1);
        vcdp->declBus(c+4497,"AxiLite4BDMA bdma_core dataS2M_tdata", false,-1, 31,0);
        vcdp->declBus(c+4505,"AxiLite4BDMA bdma_core dataS2M_tid", false,-1, 3,0);
        vcdp->declBus(c+4513,"AxiLite4BDMA bdma_core dataS2M_tstrb", false,-1, 3,0);
        vcdp->declBus(c+4521,"AxiLite4BDMA bdma_core dataS2M_tkeep", false,-1, 3,0);
        vcdp->declBit(c+4529,"AxiLite4BDMA bdma_core dataS2M_tlast", false,-1);
        vcdp->declBit(c+33,"AxiLite4BDMA bdma_core dataM2S_tvalid", false,-1);
        vcdp->declBit(c+4545,"AxiLite4BDMA bdma_core dataM2S_tready", false,-1);
        vcdp->declBus(c+2961,"AxiLite4BDMA bdma_core dataM2S_tdata", false,-1, 31,0);
        vcdp->declBus(c+2969,"AxiLite4BDMA bdma_core dataM2S_tid", false,-1, 3,0);
        vcdp->declBus(c+2977,"AxiLite4BDMA bdma_core dataM2S_tstrb", false,-1, 3,0);
        vcdp->declBus(c+2985,"AxiLite4BDMA bdma_core dataM2S_tkeep", false,-1, 3,0);
        vcdp->declBit(c+2993,"AxiLite4BDMA bdma_core dataM2S_tlast", false,-1);
        vcdp->declBit(c+2305,"AxiLite4BDMA bdma_core cchS2M_valid", false,-1);
        vcdp->declBit(c+2233,"AxiLite4BDMA bdma_core cchS2M_ready", false,-1);
        vcdp->declBus(c+2313,"AxiLite4BDMA bdma_core cchS2M_payload_desc_start_addr", false,-1, 31,0);
        vcdp->declBus(c+2321,"AxiLite4BDMA bdma_core cchS2M_payload_desc_total_bytes", false,-1, 29,0);
        vcdp->declBus(c+2329,"AxiLite4BDMA bdma_core cchS2M_payload_desc_burst", false,-1, 1,0);
        vcdp->declBus(c+2337,"AxiLite4BDMA bdma_core cchS2M_payload_desc_id", false,-1, 3,0);
        vcdp->declBit(c+2345,"AxiLite4BDMA bdma_core cchS2M_payload_desc_reset", false,-1);
        vcdp->declBit(c+2353,"AxiLite4BDMA bdma_core cchM2S_valid", false,-1);
        vcdp->declBit(c+2241,"AxiLite4BDMA bdma_core cchM2S_ready", false,-1);
        vcdp->declBus(c+2361,"AxiLite4BDMA bdma_core cchM2S_payload_desc_start_addr", false,-1, 31,0);
        vcdp->declBus(c+2369,"AxiLite4BDMA bdma_core cchM2S_payload_desc_total_bytes", false,-1, 29,0);
        vcdp->declBus(c+2377,"AxiLite4BDMA bdma_core cchM2S_payload_desc_burst", false,-1, 1,0);
        vcdp->declBus(c+2385,"AxiLite4BDMA bdma_core cchM2S_payload_desc_id", false,-1, 3,0);
        vcdp->declBit(c+2393,"AxiLite4BDMA bdma_core cchM2S_payload_desc_reset", false,-1);
        vcdp->declBus(c+2249,"AxiLite4BDMA bdma_core indicatorS2M", false,-1, 2,0);
        vcdp->declBus(c+2257,"AxiLite4BDMA bdma_core indicatorM2S", false,-1, 0,0);
        vcdp->declBit(c+2265,"AxiLite4BDMA bdma_core intrS2M", false,-1);
        vcdp->declBit(c+2273,"AxiLite4BDMA bdma_core intrM2S", false,-1);
        vcdp->declBit(c+4609,"AxiLite4BDMA bdma_core clk", false,-1);
        vcdp->declBit(c+4617,"AxiLite4BDMA bdma_core reset", false,-1);
        vcdp->declBit(c+1,"AxiLite4BDMA bdma_core dma_s2m_core_dma_aw_valid", false,-1);
        vcdp->declBus(c+1297,"AxiLite4BDMA bdma_core dma_s2m_core_dma_aw_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+1305,"AxiLite4BDMA bdma_core dma_s2m_core_dma_aw_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1313,"AxiLite4BDMA bdma_core dma_s2m_core_dma_aw_payload_len", false,-1, 7,0);
        vcdp->declBus(c+1321,"AxiLite4BDMA bdma_core dma_s2m_core_dma_aw_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1329,"AxiLite4BDMA bdma_core dma_s2m_core_dma_aw_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+2217,"AxiLite4BDMA bdma_core dma_s2m_core_dma_w_valid", false,-1);
        vcdp->declBus(c+1337,"AxiLite4BDMA bdma_core dma_s2m_core_dma_w_payload_data", false,-1, 31,0);
        vcdp->declBus(c+2161,"AxiLite4BDMA bdma_core dma_s2m_core_dma_w_payload_strb", false,-1, 3,0);
        vcdp->declBit(c+2953,"AxiLite4BDMA bdma_core dma_s2m_core_dma_w_payload_last", false,-1);
        vcdp->declBit(c+2225,"AxiLite4BDMA bdma_core dma_s2m_core_dma_b_ready", false,-1);
        vcdp->declBit(c+25,"AxiLite4BDMA bdma_core dma_s2m_core_s2m_data_stream_ready", false,-1);
        vcdp->declBus(c+2249,"AxiLite4BDMA bdma_core dma_s2m_core_s2m_state", false,-1, 2,0);
        vcdp->declBit(c+2233,"AxiLite4BDMA bdma_core dma_s2m_core_s2m_cch_ready", false,-1);
        vcdp->declBit(c+2265,"AxiLite4BDMA bdma_core dma_s2m_core_s2m_intr", false,-1);
        vcdp->declBit(c+9,"AxiLite4BDMA bdma_core dma_m2s_core_dma_ar_valid", false,-1);
        vcdp->declBus(c+1345,"AxiLite4BDMA bdma_core dma_m2s_core_dma_ar_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+1353,"AxiLite4BDMA bdma_core dma_m2s_core_dma_ar_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1361,"AxiLite4BDMA bdma_core dma_m2s_core_dma_ar_payload_len", false,-1, 7,0);
        vcdp->declBus(c+1369,"AxiLite4BDMA bdma_core dma_m2s_core_dma_ar_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1377,"AxiLite4BDMA bdma_core dma_m2s_core_dma_ar_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+17,"AxiLite4BDMA bdma_core dma_m2s_core_dma_r_ready", false,-1);
        vcdp->declBit(c+33,"AxiLite4BDMA bdma_core dma_m2s_core_m2s_data_stream_valid", false,-1);
        vcdp->declBus(c+2961,"AxiLite4BDMA bdma_core dma_m2s_core_m2s_data_stream_payload_data", false,-1, 31,0);
        vcdp->declBus(c+2969,"AxiLite4BDMA bdma_core dma_m2s_core_m2s_data_stream_payload_id", false,-1, 3,0);
        vcdp->declBus(c+2977,"AxiLite4BDMA bdma_core dma_m2s_core_m2s_data_stream_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+2985,"AxiLite4BDMA bdma_core dma_m2s_core_m2s_data_stream_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+2993,"AxiLite4BDMA bdma_core dma_m2s_core_m2s_data_stream_payload_last", false,-1);
        vcdp->declBus(c+2257,"AxiLite4BDMA bdma_core dma_m2s_core_m2s_state", false,-1, 0,0);
        vcdp->declBit(c+2241,"AxiLite4BDMA bdma_core dma_m2s_core_m2s_cch_ready", false,-1);
        vcdp->declBit(c+2273,"AxiLite4BDMA bdma_core dma_m2s_core_m2s_intr", false,-1);
        vcdp->declQuad(c+49,"AxiLite4BDMA bdma_core indicatorS2M_string", false,-1, 55,0);
        vcdp->declQuad(c+2401,"AxiLite4BDMA bdma_core indicatorM2S_string", false,-1, 39,0);
        vcdp->declBit(c+1,"AxiLite4BDMA bdma_core dma_s2m_core dma_aw_valid", false,-1);
        vcdp->declBit(c+4025,"AxiLite4BDMA bdma_core dma_s2m_core dma_aw_ready", false,-1);
        vcdp->declBus(c+1297,"AxiLite4BDMA bdma_core dma_s2m_core dma_aw_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+1305,"AxiLite4BDMA bdma_core dma_s2m_core dma_aw_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1313,"AxiLite4BDMA bdma_core dma_s2m_core dma_aw_payload_len", false,-1, 7,0);
        vcdp->declBus(c+1321,"AxiLite4BDMA bdma_core dma_s2m_core dma_aw_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1329,"AxiLite4BDMA bdma_core dma_s2m_core dma_aw_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+2217,"AxiLite4BDMA bdma_core dma_s2m_core dma_w_valid", false,-1);
        vcdp->declBit(c+4081,"AxiLite4BDMA bdma_core dma_s2m_core dma_w_ready", false,-1);
        vcdp->declBus(c+1337,"AxiLite4BDMA bdma_core dma_s2m_core dma_w_payload_data", false,-1, 31,0);
        vcdp->declBus(c+2161,"AxiLite4BDMA bdma_core dma_s2m_core dma_w_payload_strb", false,-1, 3,0);
        vcdp->declBit(c+2953,"AxiLite4BDMA bdma_core dma_s2m_core dma_w_payload_last", false,-1);
        vcdp->declBit(c+4113,"AxiLite4BDMA bdma_core dma_s2m_core dma_b_valid", false,-1);
        vcdp->declBit(c+2225,"AxiLite4BDMA bdma_core dma_s2m_core dma_b_ready", false,-1);
        vcdp->declBus(c+4129,"AxiLite4BDMA bdma_core dma_s2m_core dma_b_payload_id", false,-1, 3,0);
        vcdp->declBus(c+4137,"AxiLite4BDMA bdma_core dma_s2m_core dma_b_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+4481,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_stream_valid", false,-1);
        vcdp->declBit(c+25,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_stream_ready", false,-1);
        vcdp->declBus(c+4497,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_stream_payload_data", false,-1, 31,0);
        vcdp->declBus(c+4505,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_stream_payload_id", false,-1, 3,0);
        vcdp->declBus(c+4513,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_stream_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+4521,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_stream_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+4529,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_stream_payload_last", false,-1);
        vcdp->declBus(c+2249,"AxiLite4BDMA bdma_core dma_s2m_core s2m_state", false,-1, 2,0);
        vcdp->declBit(c+2305,"AxiLite4BDMA bdma_core dma_s2m_core s2m_cch_valid", false,-1);
        vcdp->declBit(c+2233,"AxiLite4BDMA bdma_core dma_s2m_core s2m_cch_ready", false,-1);
        vcdp->declBus(c+2313,"AxiLite4BDMA bdma_core dma_s2m_core s2m_cch_payload_desc_start_addr", false,-1, 31,0);
        vcdp->declBus(c+2321,"AxiLite4BDMA bdma_core dma_s2m_core s2m_cch_payload_desc_total_bytes", false,-1, 29,0);
        vcdp->declBus(c+2329,"AxiLite4BDMA bdma_core dma_s2m_core s2m_cch_payload_desc_burst", false,-1, 1,0);
        vcdp->declBus(c+2337,"AxiLite4BDMA bdma_core dma_s2m_core s2m_cch_payload_desc_id", false,-1, 3,0);
        vcdp->declBit(c+2345,"AxiLite4BDMA bdma_core dma_s2m_core s2m_cch_payload_desc_reset", false,-1);
        vcdp->declBit(c+2265,"AxiLite4BDMA bdma_core dma_s2m_core s2m_intr", false,-1);
        vcdp->declBit(c+4609,"AxiLite4BDMA bdma_core dma_s2m_core clk", false,-1);
        vcdp->declBit(c+4617,"AxiLite4BDMA bdma_core dma_s2m_core reset", false,-1);
        vcdp->declBit(c+4633,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_pop_ready", false,-1);
        vcdp->declBus(c+1401,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo_io_push_payload", false,-1, 1,0);
        vcdp->declBus(c+1409,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo_io_push_payload", false,-1, 1,0);
        vcdp->declBit(c+1001,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo_io_pop_ready", false,-1);
        vcdp->declBit(c+65,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+73,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+1297,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_pop_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+1305,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_pop_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1313,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_pop_payload_len", false,-1, 7,0);
        vcdp->declBus(c+1321,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_pop_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1329,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_pop_payload_burst", false,-1, 1,0);
        vcdp->declBus(c+81,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+89,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_availability", false,-1, 3,0);
        vcdp->declBit(c+97,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+105,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+1417,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo_io_pop_payload", false,-1, 1,0);
        vcdp->declBus(c+113,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo_io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+121,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo_io_availability", false,-1, 3,0);
        vcdp->declBit(c+129,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+137,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+1425,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo_io_pop_payload", false,-1, 1,0);
        vcdp->declBus(c+145,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo_io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+153,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo_io_availability", false,-1, 3,0);
        vcdp->declBit(c+25,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+161,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+3001,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo_io_pop_payload_data", false,-1, 31,0);
        vcdp->declBus(c+3009,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo_io_pop_payload_id", false,-1, 3,0);
        vcdp->declBus(c+3017,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo_io_pop_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+3025,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo_io_pop_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+3033,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo_io_pop_payload_last", false,-1);
        vcdp->declBus(c+169,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo_io_occupancy", false,-1, 4,0);
        vcdp->declBus(c+177,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo_io_availability", false,-1, 4,0);
        vcdp->declBus(c+2417,"AxiLite4BDMA bdma_core dma_s2m_core s2m_cch_state", false,-1, 1,0);
        vcdp->declBus(c+2249,"AxiLite4BDMA bdma_core dma_s2m_core s2m_w_state", false,-1, 2,0);
        vcdp->declBit(c+2425,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_valve", false,-1);
        vcdp->declBit(c+2433,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_valve", false,-1);
        vcdp->declBit(c+2233,"AxiLite4BDMA bdma_core dma_s2m_core cch_ready", false,-1);
        vcdp->declBus(c+3041,"AxiLite4BDMA bdma_core dma_s2m_core cch_total_bytes", false,-1, 29,0);
        vcdp->declBus(c+1433,"AxiLite4BDMA bdma_core dma_s2m_core cch_address", false,-1, 31,0);
        vcdp->declBus(c+1441,"AxiLite4BDMA bdma_core dma_s2m_core cch_burst_type", false,-1, 1,0);
        vcdp->declBus(c+1449,"AxiLite4BDMA bdma_core dma_s2m_core cch_id", false,-1, 3,0);
        vcdp->declBus(c+1457,"AxiLite4BDMA bdma_core dma_s2m_core trans_bytes_cnt", false,-1, 29,0);
        vcdp->declBus(c+1465,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_len", false,-1, 7,0);
        vcdp->declBit(c+2441,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_valid", false,-1);
        vcdp->declBit(c+2449,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_halt_exec", false,-1);
        vcdp->declBus(c+1473,"AxiLite4BDMA bdma_core dma_s2m_core aligned_address", false,-1, 31,0);
        vcdp->declBit(c+2265,"AxiLite4BDMA bdma_core dma_s2m_core cycle_finished", false,-1);
        vcdp->declBit(c+185,"AxiLite4BDMA bdma_core dma_s2m_core s2m_cch_fire", false,-1);
        vcdp->declBit(c+3049,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l89", false,-1);
        vcdp->declBit(c+193,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_push_fire", false,-1);
        vcdp->declBit(c+201,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_push_fire_1", false,-1);
        vcdp->declBit(c+2169,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l105", false,-1);
        vcdp->declBit(c+3049,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l119", false,-1);
        vcdp->declBit(c+193,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_push_fire_2", false,-1);
        vcdp->declBit(c+201,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo_io_push_fire_3", false,-1);
        vcdp->declBit(c+2169,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l136", false,-1);
        vcdp->declBit(c+2177,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l140", false,-1);
        vcdp->declBit(c+1481,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l152", false,-1);
        vcdp->declBit(c+2457,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l164", false,-1);
        vcdp->declBit(c+4641,"AxiLite4BDMA bdma_core dma_s2m_core dma_aw_fire", false,-1);
        vcdp->declBit(c+4641,"AxiLite4BDMA bdma_core dma_s2m_core dma_aw_fire_1", false,-1);
        vcdp->declBus(c+1337,"AxiLite4BDMA bdma_core dma_s2m_core s2m_w_data", false,-1, 31,0);
        vcdp->declBus(c+1489,"AxiLite4BDMA bdma_core dma_s2m_core s2m_w_strb", false,-1, 3,0);
        vcdp->declBit(c+2217,"AxiLite4BDMA bdma_core dma_s2m_core s2m_w_valid", false,-1);
        vcdp->declBit(c+2225,"AxiLite4BDMA bdma_core dma_s2m_core s2m_b_ready", false,-1);
        vcdp->declBus(c+1497,"AxiLite4BDMA bdma_core dma_s2m_core w_residual_data", false,-1, 31,0);
        vcdp->declBus(c+2465,"AxiLite4BDMA bdma_core dma_s2m_core w_residual_strb", false,-1, 3,0);
        vcdp->declBit(c+2473,"AxiLite4BDMA bdma_core dma_s2m_core s2m_axis_last", false,-1);
        vcdp->declBit(c+2481,"AxiLite4BDMA bdma_core dma_s2m_core s2m_axis_leak", false,-1);
    }
}

void VAxiLite4BDMA::traceInitThis__2(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+209,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_finish", false,-1);
        vcdp->declBus(c+3057,"AxiLite4BDMA bdma_core dma_s2m_core s2m_axis_len", false,-1, 7,0);
        vcdp->declBus(c+1505,"AxiLite4BDMA bdma_core dma_s2m_core strb_mask", false,-1, 3,0);
        vcdp->declBus(c+1513,"AxiLite4BDMA bdma_core dma_s2m_core bytes_shift", false,-1, 1,0);
        vcdp->declBus(c+4753,"AxiLite4BDMA bdma_core dma_s2m_core strb_full", false,-1, 3,0);
        vcdp->declBit(c+1009,"AxiLite4BDMA bdma_core dma_s2m_core dma_aw_fire_2", false,-1);
        vcdp->declBit(c+961,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l222", false,-1);
        vcdp->declBit(c+961,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l241", false,-1);
        vcdp->declBit(c+1017,"AxiLite4BDMA bdma_core dma_s2m_core dma_w_fire", false,-1);
        vcdp->declBit(c+2953,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l249", false,-1);
        vcdp->declBit(c+1025,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo_io_pop_fire", false,-1);
        vcdp->declBit(c+1521,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l258", false,-1);
        vcdp->declBit(c+1521,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l268", false,-1);
        vcdp->declBit(c+4649,"AxiLite4BDMA bdma_core dma_s2m_core dma_w_fire_1", false,-1);
        vcdp->declBit(c+4657,"AxiLite4BDMA bdma_core dma_s2m_core dma_b_fire", false,-1);
        vcdp->declBit(c+817,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo_io_pop_fire_1", false,-1);
        vcdp->declBit(c+953,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l335", false,-1);
        vcdp->declBit(c+2489,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l371", false,-1);
        vcdp->declBit(c+217,"AxiLite4BDMA bdma_core dma_s2m_core when_BDMAs2m_l373", false,-1);
        vcdp->declQuad(c+225,"AxiLite4BDMA bdma_core dma_s2m_core s2m_state_string", false,-1, 55,0);
        vcdp->declArray(c+241,"AxiLite4BDMA bdma_core dma_s2m_core s2m_cch_state_string", false,-1, 71,0);
        vcdp->declQuad(c+265,"AxiLite4BDMA bdma_core dma_s2m_core s2m_w_state_string", false,-1, 55,0);
        vcdp->declBit(c+2441,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_push_valid", false,-1);
        vcdp->declBit(c+65,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_push_ready", false,-1);
        vcdp->declBus(c+1473,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_push_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+1449,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_push_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1465,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_push_payload_len", false,-1, 7,0);
        vcdp->declBus(c+4761,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_push_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1441,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_push_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+73,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+4633,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+1297,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_pop_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+1305,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_pop_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1313,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_pop_payload_len", false,-1, 7,0);
        vcdp->declBus(c+1321,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_pop_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1329,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_pop_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_flush", false,-1);
        vcdp->declBus(c+81,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+89,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo io_availability", false,-1, 3,0);
        vcdp->declBit(c+4609,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo clk", false,-1);
        vcdp->declBit(c+4617,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo reset", false,-1);
        vcdp->declBit(c+281,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+289,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_pushPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+2497,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_pushPtr_value", false,-1, 2,0);
        vcdp->declBit(c+2505,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+297,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+1033,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+1041,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_popPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+2513,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_popPtr_value", false,-1, 2,0);
        vcdp->declBit(c+2521,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+825,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+305,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+2529,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+193,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_pushing", false,-1);
        vcdp->declBit(c+1049,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_popping", false,-1);
        vcdp->declBit(c+313,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_empty", false,-1);
        vcdp->declBit(c+321,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_full", false,-1);
        vcdp->declBit(c+833,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+2537,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_ptrDif", false,-1, 2,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declQuad(c+1529+i*2,"AxiLite4BDMA bdma_core dma_s2m_core s2m_aw_fifo logic_ram", true,(i+0), 48,0);}}
        vcdp->declBit(c+2441,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo io_push_valid", false,-1);
        vcdp->declBit(c+97,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo io_push_ready", false,-1);
        vcdp->declBus(c+1401,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo io_push_payload", false,-1, 1,0);
        vcdp->declBit(c+105,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+4641,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+1417,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo io_pop_payload", false,-1, 1,0);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo io_flush", false,-1);
        vcdp->declBus(c+113,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+121,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo io_availability", false,-1, 3,0);
        vcdp->declBit(c+4609,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo clk", false,-1);
        vcdp->declBit(c+4617,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo reset", false,-1);
        vcdp->declBit(c+329,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+337,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_pushPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+2545,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_pushPtr_value", false,-1, 2,0);
        vcdp->declBit(c+2553,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+345,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+1057,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+1065,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_popPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+2561,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_popPtr_value", false,-1, 2,0);
        vcdp->declBit(c+2569,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+841,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+353,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+2577,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+361,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_pushing", false,-1);
        vcdp->declBit(c+1073,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_popping", false,-1);
        vcdp->declBit(c+369,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_empty", false,-1);
        vcdp->declBit(c+377,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_full", false,-1);
        vcdp->declBit(c+849,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+2585,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_ptrDif", false,-1, 2,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1657+i*1,"AxiLite4BDMA bdma_core dma_s2m_core low_addr_fifo logic_ram", true,(i+0), 1,0);}}
        vcdp->declBit(c+2441,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo io_push_valid", false,-1);
        vcdp->declBit(c+129,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo io_push_ready", false,-1);
        vcdp->declBus(c+1409,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo io_push_payload", false,-1, 1,0);
        vcdp->declBit(c+137,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+4641,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+1425,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo io_pop_payload", false,-1, 1,0);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo io_flush", false,-1);
        vcdp->declBus(c+145,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+153,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo io_availability", false,-1, 3,0);
        vcdp->declBit(c+4609,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo clk", false,-1);
        vcdp->declBit(c+4617,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo reset", false,-1);
        vcdp->declBit(c+385,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+393,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_pushPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+2593,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_pushPtr_value", false,-1, 2,0);
        vcdp->declBit(c+2601,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+401,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+1081,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+1089,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_popPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+2609,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_popPtr_value", false,-1, 2,0);
        vcdp->declBit(c+2617,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+857,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+409,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+2625,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+417,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_pushing", false,-1);
        vcdp->declBit(c+1097,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_popping", false,-1);
        vcdp->declBit(c+425,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_empty", false,-1);
        vcdp->declBit(c+433,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_full", false,-1);
        vcdp->declBit(c+865,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+2633,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_ptrDif", false,-1, 2,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+1721+i*1,"AxiLite4BDMA bdma_core dma_s2m_core low_bytes_fifo logic_ram", true,(i+0), 1,0);}}
        vcdp->declBit(c+4481,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_push_valid", false,-1);
        vcdp->declBit(c+25,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_push_ready", false,-1);
        vcdp->declBus(c+4497,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_push_payload_data", false,-1, 31,0);
        vcdp->declBus(c+4505,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_push_payload_id", false,-1, 3,0);
        vcdp->declBus(c+4513,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_push_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+4521,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_push_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+4529,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_push_payload_last", false,-1);
        vcdp->declBit(c+161,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+1001,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+3001,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_pop_payload_data", false,-1, 31,0);
        vcdp->declBus(c+3009,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_pop_payload_id", false,-1, 3,0);
        vcdp->declBus(c+3017,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_pop_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+3025,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_pop_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+3033,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_pop_payload_last", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_flush", false,-1);
        vcdp->declBus(c+169,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_occupancy", false,-1, 4,0);
        vcdp->declBus(c+177,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo io_availability", false,-1, 4,0);
        vcdp->declBit(c+4609,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo clk", false,-1);
        vcdp->declBit(c+4617,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo reset", false,-1);
        vcdp->declBit(c+1105,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+1113,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_pushPtr_valueNext", false,-1, 3,0);
        vcdp->declBus(c+2641,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_pushPtr_value", false,-1, 3,0);
        vcdp->declBit(c+2649,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+873,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+1121,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+1129,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_popPtr_valueNext", false,-1, 3,0);
        vcdp->declBus(c+2657,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_popPtr_value", false,-1, 3,0);
        vcdp->declBit(c+2665,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+881,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+441,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+2673,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+1137,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_pushing", false,-1);
        vcdp->declBit(c+1025,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_popping", false,-1);
        vcdp->declBit(c+449,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_empty", false,-1);
        vcdp->declBit(c+457,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_full", false,-1);
        vcdp->declBit(c+1145,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+2681,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_ptrDif", false,-1, 3,0);
        {int i; for (i=0; i<16; i++) {
                vcdp->declQuad(c+3065+i*2,"AxiLite4BDMA bdma_core dma_s2m_core s2m_data_fifo logic_ram", true,(i+0), 44,0);}}
        vcdp->declBit(c+9,"AxiLite4BDMA bdma_core dma_m2s_core dma_ar_valid", false,-1);
        vcdp->declBit(c+4385,"AxiLite4BDMA bdma_core dma_m2s_core dma_ar_ready", false,-1);
        vcdp->declBus(c+1345,"AxiLite4BDMA bdma_core dma_m2s_core dma_ar_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+1353,"AxiLite4BDMA bdma_core dma_m2s_core dma_ar_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1361,"AxiLite4BDMA bdma_core dma_m2s_core dma_ar_payload_len", false,-1, 7,0);
        vcdp->declBus(c+1369,"AxiLite4BDMA bdma_core dma_m2s_core dma_ar_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1377,"AxiLite4BDMA bdma_core dma_m2s_core dma_ar_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+4433,"AxiLite4BDMA bdma_core dma_m2s_core dma_r_valid", false,-1);
        vcdp->declBit(c+17,"AxiLite4BDMA bdma_core dma_m2s_core dma_r_ready", false,-1);
        vcdp->declBus(c+4449,"AxiLite4BDMA bdma_core dma_m2s_core dma_r_payload_data", false,-1, 31,0);
        vcdp->declBus(c+4457,"AxiLite4BDMA bdma_core dma_m2s_core dma_r_payload_id", false,-1, 3,0);
        vcdp->declBus(c+4465,"AxiLite4BDMA bdma_core dma_m2s_core dma_r_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+4473,"AxiLite4BDMA bdma_core dma_m2s_core dma_r_payload_last", false,-1);
        vcdp->declBit(c+33,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_stream_valid", false,-1);
        vcdp->declBit(c+4545,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_stream_ready", false,-1);
        vcdp->declBus(c+2961,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_stream_payload_data", false,-1, 31,0);
        vcdp->declBus(c+2969,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_stream_payload_id", false,-1, 3,0);
        vcdp->declBus(c+2977,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_stream_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+2985,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_stream_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+2993,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_stream_payload_last", false,-1);
        vcdp->declBus(c+2257,"AxiLite4BDMA bdma_core dma_m2s_core m2s_state", false,-1, 0,0);
        vcdp->declBit(c+2353,"AxiLite4BDMA bdma_core dma_m2s_core m2s_cch_valid", false,-1);
        vcdp->declBit(c+2241,"AxiLite4BDMA bdma_core dma_m2s_core m2s_cch_ready", false,-1);
        vcdp->declBus(c+2361,"AxiLite4BDMA bdma_core dma_m2s_core m2s_cch_payload_desc_start_addr", false,-1, 31,0);
        vcdp->declBus(c+2369,"AxiLite4BDMA bdma_core dma_m2s_core m2s_cch_payload_desc_total_bytes", false,-1, 29,0);
        vcdp->declBus(c+2377,"AxiLite4BDMA bdma_core dma_m2s_core m2s_cch_payload_desc_burst", false,-1, 1,0);
        vcdp->declBus(c+2385,"AxiLite4BDMA bdma_core dma_m2s_core m2s_cch_payload_desc_id", false,-1, 3,0);
        vcdp->declBit(c+2393,"AxiLite4BDMA bdma_core dma_m2s_core m2s_cch_payload_desc_reset", false,-1);
        vcdp->declBit(c+2273,"AxiLite4BDMA bdma_core dma_m2s_core m2s_intr", false,-1);
        vcdp->declBit(c+4609,"AxiLite4BDMA bdma_core dma_m2s_core clk", false,-1);
        vcdp->declBit(c+4617,"AxiLite4BDMA bdma_core dma_m2s_core reset", false,-1);
        vcdp->declBit(c+4665,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_pop_ready", false,-1);
        vcdp->declBus(c+1785,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo_io_push_payload", false,-1, 1,0);
        vcdp->declBus(c+1793,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo_io_push_payload", false,-1, 1,0);
        vcdp->declBit(c+4673,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_push_valid", false,-1);
        vcdp->declBus(c+2185,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_push_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+2193,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_push_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+969,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_push_payload_last", false,-1);
        vcdp->declBit(c+465,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+473,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+1345,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_pop_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+1353,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_pop_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1361,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_pop_payload_len", false,-1, 7,0);
        vcdp->declBus(c+1369,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_pop_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1377,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_pop_payload_burst", false,-1, 1,0);
        vcdp->declBus(c+481,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+489,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_availability", false,-1, 3,0);
        vcdp->declBit(c+497,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+505,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+1801,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo_io_pop_payload", false,-1, 1,0);
        vcdp->declBus(c+513,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo_io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+521,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo_io_availability", false,-1, 3,0);
        vcdp->declBit(c+529,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+537,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+1809,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo_io_pop_payload", false,-1, 1,0);
        vcdp->declBus(c+545,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo_io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+553,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo_io_availability", false,-1, 3,0);
        vcdp->declBit(c+561,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_push_ready", false,-1);
        vcdp->declBit(c+33,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_pop_valid", false,-1);
        vcdp->declBus(c+2961,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_pop_payload_data", false,-1, 31,0);
        vcdp->declBus(c+2969,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_pop_payload_id", false,-1, 3,0);
        vcdp->declBus(c+2977,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_pop_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+2985,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_pop_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+2993,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_pop_payload_last", false,-1);
        vcdp->declBus(c+569,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_occupancy", false,-1, 5,0);
        vcdp->declBus(c+577,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_availability", false,-1, 5,0);
        vcdp->declBus(c+2689,"AxiLite4BDMA bdma_core dma_m2s_core m2s_cch_state", false,-1, 1,0);
        vcdp->declBus(c+2257,"AxiLite4BDMA bdma_core dma_m2s_core m2s_r_state", false,-1, 0,0);
        vcdp->declBit(c+2697,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_valve", false,-1);
        vcdp->declBit(c+2241,"AxiLite4BDMA bdma_core dma_m2s_core cch_ready", false,-1);
        vcdp->declBus(c+3321,"AxiLite4BDMA bdma_core dma_m2s_core cch_total_bytes", false,-1, 29,0);
        vcdp->declBus(c+1817,"AxiLite4BDMA bdma_core dma_m2s_core cch_address", false,-1, 31,0);
        vcdp->declBus(c+1825,"AxiLite4BDMA bdma_core dma_m2s_core cch_burst_type", false,-1, 1,0);
        vcdp->declBus(c+1833,"AxiLite4BDMA bdma_core dma_m2s_core cch_id", false,-1, 3,0);
        vcdp->declBus(c+1841,"AxiLite4BDMA bdma_core dma_m2s_core trans_bytes_cnt", false,-1, 29,0);
        vcdp->declBus(c+1849,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_len", false,-1, 7,0);
        vcdp->declBit(c+2705,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_valid", false,-1);
        vcdp->declBit(c+2713,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_halt_exec", false,-1);
        vcdp->declBus(c+1857,"AxiLite4BDMA bdma_core dma_m2s_core aligned_address", false,-1, 31,0);
        vcdp->declBit(c+2273,"AxiLite4BDMA bdma_core dma_m2s_core cycle_finished", false,-1);
        vcdp->declBit(c+585,"AxiLite4BDMA bdma_core dma_m2s_core m2s_cch_fire", false,-1);
        vcdp->declBit(c+3329,"AxiLite4BDMA bdma_core dma_m2s_core when_BDMAm2s_l85", false,-1);
        vcdp->declBit(c+593,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_push_fire", false,-1);
        vcdp->declBit(c+601,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_push_fire_1", false,-1);
        vcdp->declBit(c+2201,"AxiLite4BDMA bdma_core dma_m2s_core when_BDMAm2s_l101", false,-1);
        vcdp->declBit(c+3329,"AxiLite4BDMA bdma_core dma_m2s_core when_BDMAm2s_l115", false,-1);
        vcdp->declBit(c+593,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_push_fire_2", false,-1);
        vcdp->declBit(c+601,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo_io_push_fire_3", false,-1);
        vcdp->declBit(c+2201,"AxiLite4BDMA bdma_core dma_m2s_core when_BDMAm2s_l132", false,-1);
        vcdp->declBit(c+2209,"AxiLite4BDMA bdma_core dma_m2s_core when_BDMAm2s_l136", false,-1);
        vcdp->declBit(c+1865,"AxiLite4BDMA bdma_core dma_m2s_core when_BDMAm2s_l148", false,-1);
        vcdp->declBit(c+2721,"AxiLite4BDMA bdma_core dma_m2s_core when_BDMAm2s_l160", false,-1);
        vcdp->declBit(c+4681,"AxiLite4BDMA bdma_core dma_m2s_core dma_ar_fire", false,-1);
        vcdp->declBit(c+4681,"AxiLite4BDMA bdma_core dma_m2s_core dma_ar_fire_1", false,-1);
        vcdp->declBit(c+2729,"AxiLite4BDMA bdma_core dma_m2s_core m2s_r_valve", false,-1);
        vcdp->declBus(c+3337,"AxiLite4BDMA bdma_core dma_m2s_core m2s_axis_len", false,-1, 7,0);
        vcdp->declBus(c+1873,"AxiLite4BDMA bdma_core dma_m2s_core m2s_axis_id", false,-1, 3,0);
        vcdp->declBus(c+1881,"AxiLite4BDMA bdma_core dma_m2s_core m2s_axis_strb", false,-1, 3,0);
        vcdp->declBus(c+1889,"AxiLite4BDMA bdma_core dma_m2s_core m2s_axis_keep", false,-1, 3,0);
        vcdp->declBus(c+1897,"AxiLite4BDMA bdma_core dma_m2s_core keep_strb_mask", false,-1, 3,0);
        vcdp->declBus(c+4753,"AxiLite4BDMA bdma_core dma_m2s_core keep_strb_full", false,-1, 3,0);
        vcdp->declBit(c+1153,"AxiLite4BDMA bdma_core dma_m2s_core dma_ar_fire_2", false,-1);
        vcdp->declBit(c+1161,"AxiLite4BDMA bdma_core dma_m2s_core dma_r_fire", false,-1);
        vcdp->declBit(c+3345,"AxiLite4BDMA bdma_core dma_m2s_core when_BDMAm2s_l241", false,-1);
        vcdp->declBit(c+2737,"AxiLite4BDMA bdma_core dma_m2s_core when_BDMAm2s_l258", false,-1);
        vcdp->declBit(c+4689,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo_io_pop_fire", false,-1);
        vcdp->declBit(c+4697,"AxiLite4BDMA bdma_core dma_m2s_core when_BDMAm2s_l260", false,-1);
        vcdp->declQuad(c+2401,"AxiLite4BDMA bdma_core dma_m2s_core m2s_state_string", false,-1, 39,0);
        vcdp->declArray(c+609,"AxiLite4BDMA bdma_core dma_m2s_core m2s_cch_state_string", false,-1, 71,0);
        vcdp->declQuad(c+2745,"AxiLite4BDMA bdma_core dma_m2s_core m2s_r_state_string", false,-1, 39,0);
        vcdp->declBit(c+2705,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_push_valid", false,-1);
        vcdp->declBit(c+465,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_push_ready", false,-1);
        vcdp->declBus(c+1857,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_push_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+1833,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_push_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1849,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_push_payload_len", false,-1, 7,0);
        vcdp->declBus(c+4761,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_push_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1825,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_push_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+473,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+4665,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+1345,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_pop_payload_addr", false,-1, 31,0);
        vcdp->declBus(c+1353,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_pop_payload_id", false,-1, 3,0);
        vcdp->declBus(c+1361,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_pop_payload_len", false,-1, 7,0);
        vcdp->declBus(c+1369,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_pop_payload_size", false,-1, 2,0);
        vcdp->declBus(c+1377,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_pop_payload_burst", false,-1, 1,0);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_flush", false,-1);
        vcdp->declBus(c+481,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+489,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo io_availability", false,-1, 3,0);
        vcdp->declBit(c+4609,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo clk", false,-1);
        vcdp->declBit(c+4617,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo reset", false,-1);
        vcdp->declBit(c+633,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+641,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_pushPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+2761,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_pushPtr_value", false,-1, 2,0);
        vcdp->declBit(c+2769,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+649,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+1169,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+1177,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_popPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+2777,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_popPtr_value", false,-1, 2,0);
        vcdp->declBit(c+2785,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+889,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+657,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+2793,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+593,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_pushing", false,-1);
        vcdp->declBit(c+1185,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_popping", false,-1);
        vcdp->declBit(c+665,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_empty", false,-1);
        vcdp->declBit(c+673,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_full", false,-1);
        vcdp->declBit(c+897,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+2801,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_ptrDif", false,-1, 2,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declQuad(c+1905+i*2,"AxiLite4BDMA bdma_core dma_m2s_core m2s_ar_fifo logic_ram", true,(i+0), 48,0);}}
        vcdp->declBit(c+2705,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo io_push_valid", false,-1);
        vcdp->declBit(c+497,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo io_push_ready", false,-1);
        vcdp->declBus(c+1785,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo io_push_payload", false,-1, 1,0);
        vcdp->declBit(c+505,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+4681,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+1801,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo io_pop_payload", false,-1, 1,0);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo io_flush", false,-1);
        vcdp->declBus(c+513,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+521,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo io_availability", false,-1, 3,0);
        vcdp->declBit(c+4609,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo clk", false,-1);
        vcdp->declBit(c+4617,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo reset", false,-1);
        vcdp->declBit(c+681,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+689,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_pushPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+2809,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_pushPtr_value", false,-1, 2,0);
        vcdp->declBit(c+2817,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+697,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+1193,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+1201,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_popPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+2825,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_popPtr_value", false,-1, 2,0);
        vcdp->declBit(c+2833,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+905,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+705,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+2841,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+713,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_pushing", false,-1);
        vcdp->declBit(c+1209,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_popping", false,-1);
        vcdp->declBit(c+721,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_empty", false,-1);
        vcdp->declBit(c+729,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_full", false,-1);
        vcdp->declBit(c+913,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+2849,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_ptrDif", false,-1, 2,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+2033+i*1,"AxiLite4BDMA bdma_core dma_m2s_core low_addr_fifo logic_ram", true,(i+0), 1,0);}}
        vcdp->declBit(c+2705,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo io_push_valid", false,-1);
        vcdp->declBit(c+529,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo io_push_ready", false,-1);
        vcdp->declBus(c+1793,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo io_push_payload", false,-1, 1,0);
        vcdp->declBit(c+537,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+4681,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+1809,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo io_pop_payload", false,-1, 1,0);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo io_flush", false,-1);
        vcdp->declBus(c+545,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo io_occupancy", false,-1, 3,0);
        vcdp->declBus(c+553,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo io_availability", false,-1, 3,0);
        vcdp->declBit(c+4609,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo clk", false,-1);
        vcdp->declBit(c+4617,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo reset", false,-1);
        vcdp->declBit(c+737,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+745,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_pushPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+2857,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_pushPtr_value", false,-1, 2,0);
        vcdp->declBit(c+2865,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+753,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+1217,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+1225,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_popPtr_valueNext", false,-1, 2,0);
        vcdp->declBus(c+2873,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_popPtr_value", false,-1, 2,0);
        vcdp->declBit(c+2881,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+921,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+761,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+2889,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+769,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_pushing", false,-1);
        vcdp->declBit(c+1233,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_popping", false,-1);
        vcdp->declBit(c+777,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_empty", false,-1);
        vcdp->declBit(c+785,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_full", false,-1);
        vcdp->declBit(c+929,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+2897,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_ptrDif", false,-1, 2,0);
        {int i; for (i=0; i<8; i++) {
                vcdp->declBus(c+2097+i*1,"AxiLite4BDMA bdma_core dma_m2s_core low_bytes_fifo logic_ram", true,(i+0), 1,0);}}
        vcdp->declBit(c+4673,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_push_valid", false,-1);
        vcdp->declBit(c+561,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_push_ready", false,-1);
        vcdp->declBus(c+4449,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_push_payload_data", false,-1, 31,0);
        vcdp->declBus(c+1873,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_push_payload_id", false,-1, 3,0);
        vcdp->declBus(c+2185,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_push_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+2193,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_push_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+969,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_push_payload_last", false,-1);
        vcdp->declBit(c+33,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_pop_valid", false,-1);
        vcdp->declBit(c+4545,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_pop_ready", false,-1);
        vcdp->declBus(c+2961,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_pop_payload_data", false,-1, 31,0);
        vcdp->declBus(c+2969,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_pop_payload_id", false,-1, 3,0);
        vcdp->declBus(c+2977,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_pop_payload_strb", false,-1, 3,0);
        vcdp->declBus(c+2985,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_pop_payload_keep_", false,-1, 3,0);
        vcdp->declBit(c+2993,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_pop_payload_last", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_flush", false,-1);
        vcdp->declBus(c+569,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_occupancy", false,-1, 5,0);
        vcdp->declBus(c+577,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo io_availability", false,-1, 5,0);
        vcdp->declBit(c+4609,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo clk", false,-1);
        vcdp->declBit(c+4617,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo reset", false,-1);
        vcdp->declBit(c+1241,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+1249,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_pushPtr_valueNext", false,-1, 4,0);
        vcdp->declBus(c+2905,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_pushPtr_value", false,-1, 4,0);
        vcdp->declBit(c+2913,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+937,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+1257,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+4705,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+1265,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_popPtr_valueNext", false,-1, 4,0);
        vcdp->declBus(c+2921,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_popPtr_value", false,-1, 4,0);
        vcdp->declBit(c+2929,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+945,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+793,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_ptrMatch", false,-1);
        vcdp->declBit(c+2937,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_risingOccupancy", false,-1);
        vcdp->declBit(c+1273,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_pushing", false,-1);
        vcdp->declBit(c+1281,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_popping", false,-1);
        vcdp->declBit(c+801,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_empty", false,-1);
        vcdp->declBit(c+809,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_full", false,-1);
        vcdp->declBit(c+1289,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo when_Stream_l933", false,-1);
        vcdp->declBus(c+2945,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_ptrDif", false,-1, 4,0);
        {int i; for (i=0; i<32; i++) {
                vcdp->declQuad(c+3353+i*2,"AxiLite4BDMA bdma_core dma_m2s_core m2s_data_fifo logic_ram", true,(i+0), 44,0);}}
    }
}

void VAxiLite4BDMA::traceFullThis__1(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid));
        vcdp->fullBit(c+9,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid));
        vcdp->fullBit(c+17,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_r_ready));
        vcdp->fullBit(c+25,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+33,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid));
        vcdp->fullBus(c+41,(vlTOPp->AxiLite4BDMA__DOT__readRsp_data),32);
        vcdp->fullQuad(c+49,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__indicatorS2M_string),56);
        vcdp->fullBit(c+65,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+73,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo_io_pop_valid));
        vcdp->fullBus(c+81,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
                                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->fullBus(c+89,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch)) 
                              << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value) 
                                              - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->fullBit(c+97,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+105,((1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                                        & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
                                    & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
                                          & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full))))))));
        vcdp->fullBus(c+113,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                               << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                               - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->fullBus(c+121,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                               << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                                               - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->fullBit(c+129,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+137,((1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                                        & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
                                    & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
                                          & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full))))))));
        vcdp->fullBus(c+145,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                               << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                               - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->fullBus(c+153,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                               << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                                               - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->fullBit(c+161,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid));
        vcdp->fullBus(c+169,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_occupancy),5);
        vcdp->fullBus(c+177,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch)) 
                               << 4U) | (0xfU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value))))),5);
        vcdp->fullBit(c+185,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_fire));
        vcdp->fullBit(c+193,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+201,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid) 
                              & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+209,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_finish));
        vcdp->fullBit(c+217,(((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_finish))));
        vcdp->fullQuad(c+225,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_state_string),56);
        vcdp->fullArray(c+241,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state_string),72);
        vcdp->fullQuad(c+265,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state_string),56);
        vcdp->fullBit(c+281,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+289,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->fullBit(c+297,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+305,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+313,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+321,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_full));
        vcdp->fullBit(c+329,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+337,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->fullBit(c+345,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+353,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+361,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+369,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+377,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_full));
        vcdp->fullBit(c+385,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+393,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->fullBit(c+401,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+409,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+417,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+425,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+433,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_full));
        vcdp->fullBit(c+441,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+449,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+457,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_full));
        vcdp->fullBit(c+465,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+473,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_pop_valid));
        vcdp->fullBus(c+481,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
                               << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                                               - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->fullBus(c+489,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
                               << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value) 
                                               - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->fullBit(c+497,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+505,((1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                                        & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
                                    & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
                                          & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full))))))));
        vcdp->fullBus(c+513,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                               << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                               - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->fullBus(c+521,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
                               << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
                                               - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->fullBit(c+529,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full)))));
        vcdp->fullBit(c+537,((1U & ((~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                                        & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
                                    & (~ ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
                                          & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full))))))));
        vcdp->fullBus(c+545,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                               << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                               - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value))))),4);
        vcdp->fullBus(c+553,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
                               << 3U) | (7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
                                               - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))))),4);
        vcdp->fullBit(c+561,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full)))));
        vcdp->fullBus(c+569,(((((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy) 
                                & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
                               << 5U) | (0x1fU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                                                  - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value))))),6);
        vcdp->fullBus(c+577,(((((~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)) 
                                & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
                               << 5U) | (0x1fU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value) 
                                                  - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))))),6);
        vcdp->fullBit(c+585,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_fire));
        vcdp->fullBit(c+593,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire));
        vcdp->fullBit(c+601,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid) 
                              & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full)))));
        vcdp->fullArray(c+609,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state_string),72);
        vcdp->fullBit(c+633,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+641,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->fullBit(c+649,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+657,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+665,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+673,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_full));
        vcdp->fullBit(c+681,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+689,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->fullBit(c+697,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+705,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+713,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+721,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+729,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_full));
        vcdp->fullBit(c+737,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+745,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->fullBit(c+753,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+761,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+769,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+777,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+785,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_full));
        vcdp->fullBit(c+793,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch));
        vcdp->fullBit(c+801,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+809,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_full));
        vcdp->fullBit(c+817,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready))));
        vcdp->fullBit(c+825,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+833,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+841,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+849,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+857,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+865,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+873,(((0xfU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+881,(((0xfU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+889,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+897,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_push_fire) 
                              != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+905,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+913,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+921,(((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+929,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushing) 
                              != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+937,(((0x1fU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+945,(((0x1fU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value)) 
                              & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+953,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_last) 
                              | (((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_valid) 
                                  & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready)) 
                                 & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                            >> 0x2cU))))));
        vcdp->fullBit(c+961,(((0xffU & ((IData)(1U) 
                                        + (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len))) 
                              <= (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_occupancy))));
        vcdp->fullBit(c+969,((((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len)) 
                               & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo_io_pop_valid))) 
                              & (3U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state)))));
    }
}

void VAxiLite4BDMA::traceFullThis__6(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+977,(vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_valid));
        vcdp->fullBit(c+985,(vlTOPp->AxiLite4BDMA__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->fullBit(c+993,(vlTOPp->AxiLite4BDMA__DOT__writeJoinEvent_fire));
        vcdp->fullBit(c+1001,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo_io_pop_ready));
        vcdp->fullBit(c+1009,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_aw_fire_2));
        vcdp->fullBit(c+1017,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__dma_w_fire_1));
        vcdp->fullBit(c+1025,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping));
        vcdp->fullBit(c+1033,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+1041,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->fullBit(c+1049,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popping));
        vcdp->fullBit(c+1057,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+1065,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->fullBit(c+1073,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popping));
        vcdp->fullBit(c+1081,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+1089,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->fullBit(c+1097,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popping));
        vcdp->fullBit(c+1105,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+1113,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->fullBit(c+1121,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+1129,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext),4);
        vcdp->fullBit(c+1137,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+1145,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushing) 
                               != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popping))));
        vcdp->fullBit(c+1153,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_ar_fire_2));
        vcdp->fullBit(c+1161,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__dma_r_fire));
        vcdp->fullBit(c+1169,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+1177,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->fullBit(c+1185,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popping));
        vcdp->fullBit(c+1193,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+1201,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->fullBit(c+1209,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popping));
        vcdp->fullBit(c+1217,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+1225,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
        vcdp->fullBit(c+1233,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popping));
        vcdp->fullBit(c+1241,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+1249,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext),5);
        vcdp->fullBit(c+1257,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+1265,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext),5);
        vcdp->fullBit(c+1273,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing));
        vcdp->fullBit(c+1281,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popping));
        vcdp->fullBit(c+1289,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushing) 
                               != (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popping))));
        vcdp->fullBus(c+1297,((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->fullBus(c+1305,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x20U)))),4);
        vcdp->fullBus(c+1313,((0xffU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                                >> 0x24U)))),8);
        vcdp->fullBus(c+1321,((7U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x2cU)))),3);
        vcdp->fullBus(c+1329,((3U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x2fU)))),2);
        vcdp->fullBus(c+1337,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_data),32);
        vcdp->fullBus(c+1345,((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->fullBus(c+1353,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x20U)))),4);
        vcdp->fullBus(c+1361,((0xffU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                                >> 0x24U)))),8);
        vcdp->fullBus(c+1369,((7U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x2cU)))),3);
        vcdp->fullBus(c+1377,((3U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x2fU)))),2);
        vcdp->fullBus(c+1385,(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->fullBus(c+1393,(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rData_prot),3);
        vcdp->fullBus(c+1401,((3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address)),2);
        vcdp->fullBus(c+1409,((3U & ((IData)(1U) + 
                                     (~ (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt 
                                         + vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address))))),2);
        vcdp->fullBus(c+1417,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->fullBus(c+1425,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->fullBus(c+1433,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address),32);
        vcdp->fullBus(c+1441,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_burst_type),2);
        vcdp->fullBus(c+1449,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_id),4);
        vcdp->fullBus(c+1457,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__trans_bytes_cnt),30);
        vcdp->fullBus(c+1465,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_len),8);
        vcdp->fullBus(c+1473,((0xfffffffcU & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address)),32);
        vcdp->fullBit(c+1481,((0U != (0xfffffU & (((IData)(0x40U) 
                                                   + 
                                                   (0xfffU 
                                                    & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address)) 
                                                  >> 0xcU)))));
        vcdp->fullBus(c+1489,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_strb),4);
        vcdp->fullBus(c+1497,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_data),32);
        vcdp->fullBus(c+1505,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__strb_mask),4);
        vcdp->fullBus(c+1513,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__bytes_shift),2);
        vcdp->fullBit(c+1521,((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__bytes_shift))));
        vcdp->fullQuad(c+1529,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[0]),49);
        vcdp->fullQuad(c+1531,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[1]),49);
        vcdp->fullQuad(c+1533,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[2]),49);
        vcdp->fullQuad(c+1535,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[3]),49);
        vcdp->fullQuad(c+1537,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[4]),49);
        vcdp->fullQuad(c+1539,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[5]),49);
        vcdp->fullQuad(c+1541,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[6]),49);
        vcdp->fullQuad(c+1543,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_ram[7]),49);
        vcdp->fullBus(c+1657,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
        vcdp->fullBus(c+1658,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
        vcdp->fullBus(c+1659,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
        vcdp->fullBus(c+1660,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
        vcdp->fullBus(c+1661,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
        vcdp->fullBus(c+1662,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
        vcdp->fullBus(c+1663,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
        vcdp->fullBus(c+1664,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
        vcdp->fullBus(c+1721,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
        vcdp->fullBus(c+1722,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
        vcdp->fullBus(c+1723,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
        vcdp->fullBus(c+1724,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
        vcdp->fullBus(c+1725,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
        vcdp->fullBus(c+1726,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
        vcdp->fullBus(c+1727,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
        vcdp->fullBus(c+1728,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
        vcdp->fullBus(c+1785,((3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address)),2);
        vcdp->fullBus(c+1793,((3U & ((IData)(1U) + 
                                     (~ (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt 
                                         + vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address))))),2);
        vcdp->fullBus(c+1801,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->fullBus(c+1809,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
        vcdp->fullBus(c+1817,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address),32);
        vcdp->fullBus(c+1825,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_burst_type),2);
        vcdp->fullBus(c+1833,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_id),4);
        vcdp->fullBus(c+1841,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__trans_bytes_cnt),30);
        vcdp->fullBus(c+1849,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_len),8);
        vcdp->fullBus(c+1857,((0xfffffffcU & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address)),32);
        vcdp->fullBit(c+1865,((0U != (0xfffffU & (((IData)(0x40U) 
                                                   + 
                                                   (0xfffU 
                                                    & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address)) 
                                                  >> 0xcU)))));
        vcdp->fullBus(c+1873,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_id),4);
        vcdp->fullBus(c+1881,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_strb),4);
        vcdp->fullBus(c+1889,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_keep),4);
        vcdp->fullBus(c+1897,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__keep_strb_mask),4);
        vcdp->fullQuad(c+1905,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[0]),49);
        vcdp->fullQuad(c+1907,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[1]),49);
        vcdp->fullQuad(c+1909,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[2]),49);
        vcdp->fullQuad(c+1911,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[3]),49);
        vcdp->fullQuad(c+1913,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[4]),49);
        vcdp->fullQuad(c+1915,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[5]),49);
        vcdp->fullQuad(c+1917,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[6]),49);
        vcdp->fullQuad(c+1919,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_ram[7]),49);
        vcdp->fullBus(c+2033,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
        vcdp->fullBus(c+2034,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
        vcdp->fullBus(c+2035,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
        vcdp->fullBus(c+2036,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
        vcdp->fullBus(c+2037,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
        vcdp->fullBus(c+2038,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
        vcdp->fullBus(c+2039,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
        vcdp->fullBus(c+2040,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
        vcdp->fullBus(c+2097,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
        vcdp->fullBus(c+2098,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
        vcdp->fullBus(c+2099,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
        vcdp->fullBus(c+2100,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
        vcdp->fullBus(c+2101,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
        vcdp->fullBus(c+2102,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
        vcdp->fullBus(c+2103,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
        vcdp->fullBus(c+2104,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
        vcdp->fullBus(c+2161,(((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len))
                                ? ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__strb_mask) 
                                   & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_strb))
                                : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_strb))),4);
        vcdp->fullBit(c+2169,((0x40U >= (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes 
                                         + (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address)))));
        vcdp->fullBit(c+2177,((0U != (0xfffffU & ((
                                                   (0xfffU 
                                                    & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_address) 
                                                   + 
                                                   (0xfffU 
                                                    & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes)) 
                                                  >> 0xcU)))));
        vcdp->fullBus(c+2185,(((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len))
                                ? ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__keep_strb_mask) 
                                   & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_strb))
                                : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_strb))),4);
        vcdp->fullBus(c+2193,(((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len))
                                ? ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__keep_strb_mask) 
                                   & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_keep))
                                : (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_keep))),4);
        vcdp->fullBit(c+2201,((0x40U >= (vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes 
                                         + (3U & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address)))));
        vcdp->fullBit(c+2209,((0U != (0xfffffU & ((
                                                   (0xfffU 
                                                    & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_address) 
                                                   + 
                                                   (0xfffU 
                                                    & vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes)) 
                                                  >> 0xcU)))));
        vcdp->fullBit(c+2217,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid));
        vcdp->fullBit(c+2225,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready));
        vcdp->fullBit(c+2233,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_ready));
        vcdp->fullBit(c+2241,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_ready));
        vcdp->fullBus(c+2249,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_state),3);
        vcdp->fullBit(c+2257,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state));
        vcdp->fullBit(c+2265,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished));
        vcdp->fullBit(c+2273,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished));
        vcdp->fullBit(c+2281,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->fullBit(c+2289,(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rValid));
        vcdp->fullBit(c+2297,((1U & (~ (IData)(vlTOPp->AxiLite4BDMA__DOT__axil4Ctrl_ar_rValid)))));
        vcdp->fullBit(c+2305,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_valid_driver));
        vcdp->fullBus(c+2313,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_start_addr_driver),32);
        vcdp->fullBus(c+2321,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_total_bytes_driver),30);
        vcdp->fullBus(c+2329,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_burst_driver),2);
        vcdp->fullBus(c+2337,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_id_driver),4);
        vcdp->fullBit(c+2345,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_reset_driver));
        vcdp->fullBit(c+2353,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_valid_driver));
        vcdp->fullBus(c+2361,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_start_addr_driver),32);
        vcdp->fullBus(c+2369,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_total_bytes_driver),30);
        vcdp->fullBus(c+2377,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_burst_driver),2);
        vcdp->fullBus(c+2385,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_id_driver),4);
        vcdp->fullBit(c+2393,(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_reset_driver));
        vcdp->fullQuad(c+2401,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state)
                                 ? ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state)
                                     ? VL_ULL(0x4255525354)
                                     : VL_ULL(0x3f3f3f3f3f))
                                 : VL_ULL(0x49444c4520))),40);
        vcdp->fullBus(c+2417,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state),2);
        vcdp->fullBit(c+2425,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve));
        vcdp->fullBit(c+2433,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_valve));
        vcdp->fullBit(c+2441,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valid));
        vcdp->fullBit(c+2449,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_halt_exec));
        vcdp->fullBit(c+2457,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchS2M_payload_desc_reset_driver) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cycle_finished))));
        vcdp->fullBus(c+2465,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__w_residual_strb),4);
        vcdp->fullBit(c+2473,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_last));
        vcdp->fullBit(c+2481,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_leak));
        vcdp->fullBit(c+2489,((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_cch_state))));
        vcdp->fullBus(c+2497,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value),3);
        vcdp->fullBit(c+2505,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+2513,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value),3);
        vcdp->fullBit(c+2521,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+2529,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+2537,((7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->fullBus(c+2545,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
        vcdp->fullBit(c+2553,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+2561,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
        vcdp->fullBit(c+2569,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+2577,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+2585,((7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->fullBus(c+2593,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
        vcdp->fullBit(c+2601,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+2609,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
        vcdp->fullBit(c+2617,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+2625,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+2633,((7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->fullBus(c+2641,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value),4);
        vcdp->fullBit(c+2649,((0xfU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+2657,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value),4);
        vcdp->fullBit(c+2665,((0xfU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+2673,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+2681,((0xfU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->fullBus(c+2689,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state),2);
        vcdp->fullBit(c+2697,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve));
    }
}

void VAxiLite4BDMA::traceFullThis__11(VAxiLite4BDMA__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4BDMA* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+2705,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valid));
        vcdp->fullBit(c+2713,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_halt_exec));
        vcdp->fullBit(c+2721,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core_cchM2S_payload_desc_reset_driver) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cycle_finished))));
        vcdp->fullBit(c+2729,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve));
        vcdp->fullBit(c+2737,((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_cch_state))));
        vcdp->fullQuad(c+2745,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state)
                                 ? ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_state)
                                     ? VL_ULL(0x4255525354)
                                     : VL_ULL(0x3f3f3f3f3f))
                                 : VL_ULL(0x49444c4520))),40);
        vcdp->fullBus(c+2761,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value),3);
        vcdp->fullBit(c+2769,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+2777,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value),3);
        vcdp->fullBit(c+2785,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+2793,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+2801,((7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->fullBus(c+2809,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
        vcdp->fullBit(c+2817,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+2825,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
        vcdp->fullBit(c+2833,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+2841,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+2849,((7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->fullBus(c+2857,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
        vcdp->fullBit(c+2865,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+2873,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
        vcdp->fullBit(c+2881,((7U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+2889,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+2897,((7U & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
                                     - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
        vcdp->fullBus(c+2905,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value),5);
        vcdp->fullBit(c+2913,((0x1fU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+2921,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value),5);
        vcdp->fullBit(c+2929,((0x1fU == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+2937,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+2945,((0x1fU & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
                                        - (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_popPtr_value)))),5);
        vcdp->fullBit(c+2953,((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len))));
        vcdp->fullBus(c+2961,((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->fullBus(c+2969,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x20U)))),4);
        vcdp->fullBus(c+2977,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x24U)))),4);
        vcdp->fullBus(c+2985,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x28U)))),4);
        vcdp->fullBit(c+2993,((1U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x2cU)))));
        vcdp->fullBus(c+3001,((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0)),32);
        vcdp->fullBus(c+3009,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x20U)))),4);
        vcdp->fullBus(c+3017,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x24U)))),4);
        vcdp->fullBus(c+3025,((0xfU & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                               >> 0x28U)))),4);
        vcdp->fullBit(c+3033,((1U & (IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
                                             >> 0x2cU)))));
        vcdp->fullBus(c+3041,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes),30);
        vcdp->fullBit(c+3049,((0U == vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__cch_total_bytes)));
        vcdp->fullBus(c+3057,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_axis_len),8);
        vcdp->fullQuad(c+3065,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[0]),45);
        vcdp->fullQuad(c+3067,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[1]),45);
        vcdp->fullQuad(c+3069,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[2]),45);
        vcdp->fullQuad(c+3071,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[3]),45);
        vcdp->fullQuad(c+3073,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[4]),45);
        vcdp->fullQuad(c+3075,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[5]),45);
        vcdp->fullQuad(c+3077,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[6]),45);
        vcdp->fullQuad(c+3079,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[7]),45);
        vcdp->fullQuad(c+3081,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[8]),45);
        vcdp->fullQuad(c+3083,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[9]),45);
        vcdp->fullQuad(c+3085,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[10]),45);
        vcdp->fullQuad(c+3087,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[11]),45);
        vcdp->fullQuad(c+3089,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[12]),45);
        vcdp->fullQuad(c+3091,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[13]),45);
        vcdp->fullQuad(c+3093,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[14]),45);
        vcdp->fullQuad(c+3095,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_data_fifo__DOT__logic_ram[15]),45);
        vcdp->fullBus(c+3321,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes),30);
        vcdp->fullBit(c+3329,((0U == vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__cch_total_bytes)));
        vcdp->fullBus(c+3337,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len),8);
        vcdp->fullBit(c+3345,((0U == (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_axis_len))));
        vcdp->fullQuad(c+3353,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[0]),45);
        vcdp->fullQuad(c+3355,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[1]),45);
        vcdp->fullQuad(c+3357,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[2]),45);
        vcdp->fullQuad(c+3359,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[3]),45);
        vcdp->fullQuad(c+3361,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[4]),45);
        vcdp->fullQuad(c+3363,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[5]),45);
        vcdp->fullQuad(c+3365,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[6]),45);
        vcdp->fullQuad(c+3367,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[7]),45);
        vcdp->fullQuad(c+3369,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[8]),45);
        vcdp->fullQuad(c+3371,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[9]),45);
        vcdp->fullQuad(c+3373,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[10]),45);
        vcdp->fullQuad(c+3375,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[11]),45);
        vcdp->fullQuad(c+3377,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[12]),45);
        vcdp->fullQuad(c+3379,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[13]),45);
        vcdp->fullQuad(c+3381,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[14]),45);
        vcdp->fullQuad(c+3383,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[15]),45);
        vcdp->fullQuad(c+3385,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[16]),45);
        vcdp->fullQuad(c+3387,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[17]),45);
        vcdp->fullQuad(c+3389,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[18]),45);
        vcdp->fullQuad(c+3391,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[19]),45);
        vcdp->fullQuad(c+3393,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[20]),45);
        vcdp->fullQuad(c+3395,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[21]),45);
        vcdp->fullQuad(c+3397,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[22]),45);
        vcdp->fullQuad(c+3399,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[23]),45);
        vcdp->fullQuad(c+3401,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[24]),45);
        vcdp->fullQuad(c+3403,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[25]),45);
        vcdp->fullQuad(c+3405,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[26]),45);
        vcdp->fullQuad(c+3407,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[27]),45);
        vcdp->fullQuad(c+3409,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[28]),45);
        vcdp->fullQuad(c+3411,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[29]),45);
        vcdp->fullQuad(c+3413,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[30]),45);
        vcdp->fullQuad(c+3415,(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT__logic_ram[31]),45);
        vcdp->fullBit(c+3865,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->fullBit(c+3873,(vlTOPp->axil4Ctrl_awready));
        vcdp->fullBus(c+3881,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->fullBus(c+3889,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->fullBit(c+3897,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->fullBit(c+3905,(vlTOPp->axil4Ctrl_wready));
        vcdp->fullBus(c+3913,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->fullBus(c+3921,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->fullBit(c+3929,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->fullBit(c+3937,(vlTOPp->axil4Ctrl_bready));
        vcdp->fullBus(c+3945,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->fullBit(c+3953,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->fullBit(c+3961,(vlTOPp->axil4Ctrl_arready));
        vcdp->fullBus(c+3969,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->fullBus(c+3977,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->fullBit(c+3985,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->fullBit(c+3993,(vlTOPp->axil4Ctrl_rready));
        vcdp->fullBus(c+4001,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->fullBus(c+4009,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->fullBit(c+4017,(vlTOPp->axi4S2M_awvalid));
        vcdp->fullBit(c+4025,(vlTOPp->axi4S2M_awready));
        vcdp->fullBus(c+4033,(vlTOPp->axi4S2M_awaddr),32);
        vcdp->fullBus(c+4041,(vlTOPp->axi4S2M_awid),4);
        vcdp->fullBus(c+4049,(vlTOPp->axi4S2M_awlen),8);
        vcdp->fullBus(c+4057,(vlTOPp->axi4S2M_awsize),3);
        vcdp->fullBus(c+4065,(vlTOPp->axi4S2M_awburst),2);
        vcdp->fullBit(c+4073,(vlTOPp->axi4S2M_wvalid));
        vcdp->fullBit(c+4081,(vlTOPp->axi4S2M_wready));
        vcdp->fullBus(c+4089,(vlTOPp->axi4S2M_wdata),32);
        vcdp->fullBus(c+4097,(vlTOPp->axi4S2M_wstrb),4);
        vcdp->fullBit(c+4105,(vlTOPp->axi4S2M_wlast));
        vcdp->fullBit(c+4113,(vlTOPp->axi4S2M_bvalid));
        vcdp->fullBit(c+4121,(vlTOPp->axi4S2M_bready));
        vcdp->fullBus(c+4129,(vlTOPp->axi4S2M_bid),4);
        vcdp->fullBus(c+4137,(vlTOPp->axi4S2M_bresp),2);
        vcdp->fullBit(c+4145,(vlTOPp->axi4S2M_arvalid));
        vcdp->fullBit(c+4153,(vlTOPp->axi4S2M_arready));
        vcdp->fullBus(c+4161,(vlTOPp->axi4S2M_araddr),32);
        vcdp->fullBus(c+4169,(vlTOPp->axi4S2M_arid),4);
        vcdp->fullBus(c+4177,(vlTOPp->axi4S2M_arlen),8);
        vcdp->fullBus(c+4185,(vlTOPp->axi4S2M_arsize),3);
        vcdp->fullBus(c+4193,(vlTOPp->axi4S2M_arburst),2);
        vcdp->fullBit(c+4201,(vlTOPp->axi4S2M_rvalid));
        vcdp->fullBit(c+4209,(vlTOPp->axi4S2M_rready));
        vcdp->fullBus(c+4217,(vlTOPp->axi4S2M_rdata),32);
        vcdp->fullBus(c+4225,(vlTOPp->axi4S2M_rid),4);
        vcdp->fullBus(c+4233,(vlTOPp->axi4S2M_rresp),2);
        vcdp->fullBit(c+4241,(vlTOPp->axi4S2M_rlast));
        vcdp->fullBit(c+4249,(vlTOPp->axi4M2S_awvalid));
        vcdp->fullBit(c+4257,(vlTOPp->axi4M2S_awready));
        vcdp->fullBus(c+4265,(vlTOPp->axi4M2S_awaddr),32);
        vcdp->fullBus(c+4273,(vlTOPp->axi4M2S_awid),4);
        vcdp->fullBus(c+4281,(vlTOPp->axi4M2S_awlen),8);
        vcdp->fullBus(c+4289,(vlTOPp->axi4M2S_awsize),3);
        vcdp->fullBus(c+4297,(vlTOPp->axi4M2S_awburst),2);
        vcdp->fullBit(c+4305,(vlTOPp->axi4M2S_wvalid));
        vcdp->fullBit(c+4313,(vlTOPp->axi4M2S_wready));
        vcdp->fullBus(c+4321,(vlTOPp->axi4M2S_wdata),32);
        vcdp->fullBus(c+4329,(vlTOPp->axi4M2S_wstrb),4);
        vcdp->fullBit(c+4337,(vlTOPp->axi4M2S_wlast));
        vcdp->fullBit(c+4345,(vlTOPp->axi4M2S_bvalid));
        vcdp->fullBit(c+4353,(vlTOPp->axi4M2S_bready));
        vcdp->fullBus(c+4361,(vlTOPp->axi4M2S_bid),4);
        vcdp->fullBus(c+4369,(vlTOPp->axi4M2S_bresp),2);
        vcdp->fullBit(c+4377,(vlTOPp->axi4M2S_arvalid));
        vcdp->fullBit(c+4385,(vlTOPp->axi4M2S_arready));
        vcdp->fullBus(c+4393,(vlTOPp->axi4M2S_araddr),32);
        vcdp->fullBus(c+4401,(vlTOPp->axi4M2S_arid),4);
        vcdp->fullBus(c+4409,(vlTOPp->axi4M2S_arlen),8);
        vcdp->fullBus(c+4417,(vlTOPp->axi4M2S_arsize),3);
        vcdp->fullBus(c+4425,(vlTOPp->axi4M2S_arburst),2);
        vcdp->fullBit(c+4433,(vlTOPp->axi4M2S_rvalid));
        vcdp->fullBit(c+4441,(vlTOPp->axi4M2S_rready));
        vcdp->fullBus(c+4449,(vlTOPp->axi4M2S_rdata),32);
        vcdp->fullBus(c+4457,(vlTOPp->axi4M2S_rid),4);
        vcdp->fullBus(c+4465,(vlTOPp->axi4M2S_rresp),2);
        vcdp->fullBit(c+4473,(vlTOPp->axi4M2S_rlast));
        vcdp->fullBit(c+4481,(vlTOPp->dataS2M_tvalid));
        vcdp->fullBit(c+4489,(vlTOPp->dataS2M_tready));
        vcdp->fullBus(c+4497,(vlTOPp->dataS2M_tdata),32);
        vcdp->fullBus(c+4505,(vlTOPp->dataS2M_tid),4);
        vcdp->fullBus(c+4513,(vlTOPp->dataS2M_tstrb),4);
        vcdp->fullBus(c+4521,(vlTOPp->dataS2M_tkeep),4);
        vcdp->fullBit(c+4529,(vlTOPp->dataS2M_tlast));
        vcdp->fullBit(c+4537,(vlTOPp->dataM2S_tvalid));
        vcdp->fullBit(c+4545,(vlTOPp->dataM2S_tready));
        vcdp->fullBus(c+4553,(vlTOPp->dataM2S_tdata),32);
        vcdp->fullBus(c+4561,(vlTOPp->dataM2S_tid),4);
        vcdp->fullBus(c+4569,(vlTOPp->dataM2S_tstrb),4);
        vcdp->fullBus(c+4577,(vlTOPp->dataM2S_tkeep),4);
        vcdp->fullBit(c+4585,(vlTOPp->dataM2S_tlast));
        vcdp->fullBit(c+4593,(vlTOPp->intrS2M));
        vcdp->fullBit(c+4601,(vlTOPp->intrM2S));
        vcdp->fullBit(c+4609,(vlTOPp->clk));
        vcdp->fullBit(c+4617,(vlTOPp->reset));
        vcdp->fullBit(c+4625,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                               & (IData)(vlTOPp->axil4Ctrl_rready))));
        vcdp->fullBit(c+4633,(((IData)(vlTOPp->axi4S2M_awready) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_aw_valve))));
        vcdp->fullBit(c+4641,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core_dma_aw_valid) 
                               & (IData)(vlTOPp->axi4S2M_awready))));
        vcdp->fullBit(c+4649,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_w_valid) 
                               & (IData)(vlTOPp->axi4S2M_wready))));
        vcdp->fullBit(c+4657,(((IData)(vlTOPp->axi4S2M_bvalid) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_s2m_core__DOT__s2m_b_ready))));
        vcdp->fullBit(c+4665,(((IData)(vlTOPp->axi4M2S_arready) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_ar_valve))));
        vcdp->fullBit(c+4673,(((IData)(vlTOPp->axi4M2S_rvalid) 
                               & (IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_r_valve))));
        vcdp->fullBit(c+4681,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core_dma_ar_valid) 
                               & (IData)(vlTOPp->axi4M2S_arready))));
        vcdp->fullBit(c+4689,(((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid) 
                               & (IData)(vlTOPp->dataM2S_tready))));
        vcdp->fullBit(c+4697,(((IData)((vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
                                        >> 0x2cU)) 
                               & ((IData)(vlTOPp->AxiLite4BDMA__DOT__bdma_core__DOT__dma_m2s_core__DOT__m2s_data_fifo_io_pop_valid) 
                                  & (IData)(vlTOPp->dataM2S_tready)))));
        vcdp->fullBit(c+4705,(0U));
        vcdp->fullBus(c+4713,(0U),32);
        vcdp->fullBus(c+4721,(0U),4);
        vcdp->fullBus(c+4729,(0U),8);
        vcdp->fullBus(c+4737,(0U),3);
        vcdp->fullBus(c+4745,(0U),2);
        vcdp->fullBus(c+4753,(0xfU),4);
        vcdp->fullBus(c+4761,(2U),3);
    }
}
