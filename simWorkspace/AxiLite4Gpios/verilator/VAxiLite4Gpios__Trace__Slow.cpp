// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VAxiLite4Gpios__Syms.h"


//======================

void VAxiLite4Gpios::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VAxiLite4Gpios::traceInit, &VAxiLite4Gpios::traceFull, &VAxiLite4Gpios::traceChg, this);
}
void VAxiLite4Gpios::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VAxiLite4Gpios* t = (VAxiLite4Gpios*)userthis;
    VAxiLite4Gpios__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VAxiLite4Gpios::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VAxiLite4Gpios* t = (VAxiLite4Gpios*)userthis;
    VAxiLite4Gpios__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VAxiLite4Gpios::traceInitThis(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VAxiLite4Gpios::traceFullThis(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VAxiLite4Gpios::traceInitThis__1(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+569,"axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+577,"axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+585,"axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+593,"axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+601,"axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+609,"axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+617,"axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+625,"axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+633,"axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+641,"axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+649,"axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+657,"axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+665,"axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+673,"axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+681,"axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+689,"axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+697,"axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+705,"axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+713,"axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBus(c+721,"gpio_0", false,-1, 15,0);
        vcdp->declBus(c+729,"gpio_1", false,-1, 15,0);
        vcdp->declBit(c+737,"interrupt_0", false,-1);
        vcdp->declBit(c+745,"interrupt_1", false,-1);
        vcdp->declBit(c+753,"clk", false,-1);
        vcdp->declBit(c+761,"reset", false,-1);
        vcdp->declBit(c+569,"AxiLite4Gpios axil4Ctrl_awvalid", false,-1);
        vcdp->declBit(c+577,"AxiLite4Gpios axil4Ctrl_awready", false,-1);
        vcdp->declBus(c+585,"AxiLite4Gpios axil4Ctrl_awaddr", false,-1, 7,0);
        vcdp->declBus(c+593,"AxiLite4Gpios axil4Ctrl_awprot", false,-1, 2,0);
        vcdp->declBit(c+601,"AxiLite4Gpios axil4Ctrl_wvalid", false,-1);
        vcdp->declBit(c+609,"AxiLite4Gpios axil4Ctrl_wready", false,-1);
        vcdp->declBus(c+617,"AxiLite4Gpios axil4Ctrl_wdata", false,-1, 31,0);
        vcdp->declBus(c+625,"AxiLite4Gpios axil4Ctrl_wstrb", false,-1, 3,0);
        vcdp->declBit(c+633,"AxiLite4Gpios axil4Ctrl_bvalid", false,-1);
        vcdp->declBit(c+641,"AxiLite4Gpios axil4Ctrl_bready", false,-1);
        vcdp->declBus(c+649,"AxiLite4Gpios axil4Ctrl_bresp", false,-1, 1,0);
        vcdp->declBit(c+657,"AxiLite4Gpios axil4Ctrl_arvalid", false,-1);
        vcdp->declBit(c+665,"AxiLite4Gpios axil4Ctrl_arready", false,-1);
        vcdp->declBus(c+673,"AxiLite4Gpios axil4Ctrl_araddr", false,-1, 7,0);
        vcdp->declBus(c+681,"AxiLite4Gpios axil4Ctrl_arprot", false,-1, 2,0);
        vcdp->declBit(c+689,"AxiLite4Gpios axil4Ctrl_rvalid", false,-1);
        vcdp->declBit(c+697,"AxiLite4Gpios axil4Ctrl_rready", false,-1);
        vcdp->declBus(c+705,"AxiLite4Gpios axil4Ctrl_rdata", false,-1, 31,0);
        vcdp->declBus(c+713,"AxiLite4Gpios axil4Ctrl_rresp", false,-1, 1,0);
        vcdp->declBus(c+721,"AxiLite4Gpios gpio_0", false,-1, 15,0);
        vcdp->declBus(c+729,"AxiLite4Gpios gpio_1", false,-1, 15,0);
        vcdp->declBit(c+737,"AxiLite4Gpios interrupt_0", false,-1);
        vcdp->declBit(c+745,"AxiLite4Gpios interrupt_1", false,-1);
        vcdp->declBit(c+753,"AxiLite4Gpios clk", false,-1);
        vcdp->declBit(c+761,"AxiLite4Gpios reset", false,-1);
        vcdp->declBus(c+337,"AxiLite4Gpios gpios_2_gpios_read", false,-1, 15,0);
        vcdp->declBus(c+345,"AxiLite4Gpios gpios_3_gpios_read", false,-1, 15,0);
        vcdp->declBus(c+25,"AxiLite4Gpios gpios_2_gpios_write", false,-1, 15,0);
        vcdp->declBus(c+33,"AxiLite4Gpios gpios_2_gpios_writeEnable", false,-1, 15,0);
        vcdp->declBus(c+9,"AxiLite4Gpios gpios_2_gpios_read_1", false,-1, 15,0);
        vcdp->declBus(c+41,"AxiLite4Gpios gpios_2_interrupt", false,-1, 15,0);
        vcdp->declBus(c+49,"AxiLite4Gpios gpios_3_gpios_write", false,-1, 15,0);
        vcdp->declBus(c+57,"AxiLite4Gpios gpios_3_gpios_writeEnable", false,-1, 15,0);
        vcdp->declBus(c+17,"AxiLite4Gpios gpios_3_gpios_read_1", false,-1, 15,0);
        vcdp->declBus(c+1,"AxiLite4Gpios gpios_3_interrupt", false,-1, 15,0);
        vcdp->declBit(c+777,"AxiLite4Gpios readHaltRequest", false,-1);
        vcdp->declBit(c+777,"AxiLite4Gpios writeHaltRequest", false,-1);
        vcdp->declBit(c+353,"AxiLite4Gpios writeJoinEvent_valid", false,-1);
        vcdp->declBit(c+361,"AxiLite4Gpios writeJoinEvent_ready", false,-1);
        vcdp->declBit(c+369,"AxiLite4Gpios writeJoinEvent_fire", false,-1);
        vcdp->declBus(c+785,"AxiLite4Gpios writeRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+353,"AxiLite4Gpios writeJoinEvent_translated_valid", false,-1);
        vcdp->declBit(c+361,"AxiLite4Gpios writeJoinEvent_translated_ready", false,-1);
        vcdp->declBus(c+785,"AxiLite4Gpios writeJoinEvent_translated_payload_resp", false,-1, 1,0);
        vcdp->declBit(c+449,"AxiLite4Gpios when_Stream_l342", false,-1);
        vcdp->declBit(c+457,"AxiLite4Gpios axil4Ctrl_ar_readDataStage_valid", false,-1);
        vcdp->declBit(c+697,"AxiLite4Gpios axil4Ctrl_ar_readDataStage_ready", false,-1);
        vcdp->declBus(c+377,"AxiLite4Gpios axil4Ctrl_ar_readDataStage_payload_addr", false,-1, 7,0);
        vcdp->declBus(c+385,"AxiLite4Gpios axil4Ctrl_ar_readDataStage_payload_prot", false,-1, 2,0);
        vcdp->declBit(c+457,"AxiLite4Gpios axil4Ctrl_ar_rValid", false,-1);
        vcdp->declBus(c+377,"AxiLite4Gpios axil4Ctrl_ar_rData_addr", false,-1, 7,0);
        vcdp->declBus(c+385,"AxiLite4Gpios axil4Ctrl_ar_rData_prot", false,-1, 2,0);
        vcdp->declBit(c+465,"AxiLite4Gpios when_Stream_l342_1", false,-1);
        vcdp->declBus(c+65,"AxiLite4Gpios readRsp_data", false,-1, 31,0);
        vcdp->declBus(c+785,"AxiLite4Gpios readRsp_resp", false,-1, 1,0);
        vcdp->declBit(c+369,"AxiLite4Gpios writeOccur", false,-1);
        vcdp->declBit(c+769,"AxiLite4Gpios readOccur", false,-1);
        vcdp->declBus(c+473,"AxiLite4Gpios gpios_2_gpios_writeEnable_1_driver", false,-1, 15,0);
        vcdp->declBus(c+481,"AxiLite4Gpios gpios_2_gpios_write_1_driver", false,-1, 15,0);
        vcdp->declBus(c+489,"AxiLite4Gpios gpios_2_ir_high_driver", false,-1, 15,0);
        vcdp->declBus(c+497,"AxiLite4Gpios gpios_2_ir_low_driver", false,-1, 15,0);
        vcdp->declBus(c+505,"AxiLite4Gpios gpios_2_ir_rise_driver", false,-1, 15,0);
        vcdp->declBus(c+513,"AxiLite4Gpios gpios_2_ir_fall_driver", false,-1, 15,0);
        vcdp->declBit(c+73,"AxiLite4Gpios when_AxiLite4Gpios_l37", false,-1);
        vcdp->declBit(c+81,"AxiLite4Gpios when_AxiLite4Gpios_l37_1", false,-1);
        vcdp->declBit(c+89,"AxiLite4Gpios when_AxiLite4Gpios_l37_2", false,-1);
        vcdp->declBit(c+97,"AxiLite4Gpios when_AxiLite4Gpios_l37_3", false,-1);
        vcdp->declBit(c+105,"AxiLite4Gpios when_AxiLite4Gpios_l37_4", false,-1);
        vcdp->declBit(c+113,"AxiLite4Gpios when_AxiLite4Gpios_l37_5", false,-1);
        vcdp->declBit(c+121,"AxiLite4Gpios when_AxiLite4Gpios_l37_6", false,-1);
        vcdp->declBit(c+129,"AxiLite4Gpios when_AxiLite4Gpios_l37_7", false,-1);
        vcdp->declBit(c+137,"AxiLite4Gpios when_AxiLite4Gpios_l37_8", false,-1);
        vcdp->declBit(c+145,"AxiLite4Gpios when_AxiLite4Gpios_l37_9", false,-1);
        vcdp->declBit(c+153,"AxiLite4Gpios when_AxiLite4Gpios_l37_10", false,-1);
        vcdp->declBit(c+161,"AxiLite4Gpios when_AxiLite4Gpios_l37_11", false,-1);
        vcdp->declBit(c+169,"AxiLite4Gpios when_AxiLite4Gpios_l37_12", false,-1);
        vcdp->declBit(c+177,"AxiLite4Gpios when_AxiLite4Gpios_l37_13", false,-1);
        vcdp->declBit(c+185,"AxiLite4Gpios when_AxiLite4Gpios_l37_14", false,-1);
        vcdp->declBit(c+193,"AxiLite4Gpios when_AxiLite4Gpios_l37_15", false,-1);
        vcdp->declBus(c+521,"AxiLite4Gpios gpios_3_gpios_writeEnable_1_driver", false,-1, 15,0);
        vcdp->declBus(c+529,"AxiLite4Gpios gpios_3_gpios_write_1_driver", false,-1, 15,0);
        vcdp->declBus(c+537,"AxiLite4Gpios gpios_3_ir_high_driver", false,-1, 15,0);
        vcdp->declBus(c+545,"AxiLite4Gpios gpios_3_ir_low_driver", false,-1, 15,0);
        vcdp->declBus(c+553,"AxiLite4Gpios gpios_3_ir_rise_driver", false,-1, 15,0);
        vcdp->declBus(c+561,"AxiLite4Gpios gpios_3_ir_fall_driver", false,-1, 15,0);
        vcdp->declBit(c+201,"AxiLite4Gpios when_AxiLite4Gpios_l37_16", false,-1);
        vcdp->declBit(c+209,"AxiLite4Gpios when_AxiLite4Gpios_l37_17", false,-1);
        vcdp->declBit(c+217,"AxiLite4Gpios when_AxiLite4Gpios_l37_18", false,-1);
        vcdp->declBit(c+225,"AxiLite4Gpios when_AxiLite4Gpios_l37_19", false,-1);
        vcdp->declBit(c+233,"AxiLite4Gpios when_AxiLite4Gpios_l37_20", false,-1);
        vcdp->declBit(c+241,"AxiLite4Gpios when_AxiLite4Gpios_l37_21", false,-1);
        vcdp->declBit(c+249,"AxiLite4Gpios when_AxiLite4Gpios_l37_22", false,-1);
        vcdp->declBit(c+257,"AxiLite4Gpios when_AxiLite4Gpios_l37_23", false,-1);
        vcdp->declBit(c+265,"AxiLite4Gpios when_AxiLite4Gpios_l37_24", false,-1);
        vcdp->declBit(c+273,"AxiLite4Gpios when_AxiLite4Gpios_l37_25", false,-1);
        vcdp->declBit(c+281,"AxiLite4Gpios when_AxiLite4Gpios_l37_26", false,-1);
        vcdp->declBit(c+289,"AxiLite4Gpios when_AxiLite4Gpios_l37_27", false,-1);
        vcdp->declBit(c+297,"AxiLite4Gpios when_AxiLite4Gpios_l37_28", false,-1);
        vcdp->declBit(c+305,"AxiLite4Gpios when_AxiLite4Gpios_l37_29", false,-1);
        vcdp->declBit(c+313,"AxiLite4Gpios when_AxiLite4Gpios_l37_30", false,-1);
        vcdp->declBit(c+321,"AxiLite4Gpios when_AxiLite4Gpios_l37_31", false,-1);
        vcdp->declBus(c+337,"AxiLite4Gpios gpios_2 gpios_read", false,-1, 15,0);
        vcdp->declBus(c+25,"AxiLite4Gpios gpios_2 gpios_write", false,-1, 15,0);
        vcdp->declBus(c+33,"AxiLite4Gpios gpios_2 gpios_writeEnable", false,-1, 15,0);
        vcdp->declBus(c+481,"AxiLite4Gpios gpios_2 gpios_write_1", false,-1, 15,0);
        vcdp->declBus(c+9,"AxiLite4Gpios gpios_2 gpios_read_1", false,-1, 15,0);
        vcdp->declBus(c+473,"AxiLite4Gpios gpios_2 gpios_writeEnable_1", false,-1, 15,0);
        vcdp->declBus(c+41,"AxiLite4Gpios gpios_2 interrupt", false,-1, 15,0);
        vcdp->declBus(c+489,"AxiLite4Gpios gpios_2 ir_high", false,-1, 15,0);
        vcdp->declBus(c+497,"AxiLite4Gpios gpios_2 ir_low", false,-1, 15,0);
        vcdp->declBus(c+505,"AxiLite4Gpios gpios_2 ir_rise", false,-1, 15,0);
        vcdp->declBus(c+513,"AxiLite4Gpios gpios_2 ir_fall", false,-1, 15,0);
        vcdp->declBit(c+753,"AxiLite4Gpios gpios_2 clk", false,-1);
        vcdp->declBit(c+761,"AxiLite4Gpios gpios_2 reset", false,-1);
        vcdp->declBus(c+393,"AxiLite4Gpios gpios_2 gpios_read_buffercc_io_dataOut", false,-1, 15,0);
        vcdp->declBus(c+393,"AxiLite4Gpios gpios_2 syncronized", false,-1, 15,0);
        vcdp->declBus(c+401,"AxiLite4Gpios gpios_2 last", false,-1, 15,0);
        vcdp->declBus(c+329,"AxiLite4Gpios gpios_2 interrupt_valid", false,-1, 15,0);
        vcdp->declBus(c+337,"AxiLite4Gpios gpios_2 gpios_read_buffercc io_dataIn", false,-1, 15,0);
        vcdp->declBus(c+393,"AxiLite4Gpios gpios_2 gpios_read_buffercc io_dataOut", false,-1, 15,0);
        vcdp->declBit(c+753,"AxiLite4Gpios gpios_2 gpios_read_buffercc clk", false,-1);
        vcdp->declBit(c+761,"AxiLite4Gpios gpios_2 gpios_read_buffercc reset", false,-1);
        vcdp->declBus(c+409,"AxiLite4Gpios gpios_2 gpios_read_buffercc buffers_0", false,-1, 15,0);
        vcdp->declBus(c+393,"AxiLite4Gpios gpios_2 gpios_read_buffercc buffers_1", false,-1, 15,0);
        vcdp->declBus(c+345,"AxiLite4Gpios gpios_3 gpios_read", false,-1, 15,0);
        vcdp->declBus(c+49,"AxiLite4Gpios gpios_3 gpios_write", false,-1, 15,0);
        vcdp->declBus(c+57,"AxiLite4Gpios gpios_3 gpios_writeEnable", false,-1, 15,0);
        vcdp->declBus(c+529,"AxiLite4Gpios gpios_3 gpios_write_1", false,-1, 15,0);
        vcdp->declBus(c+17,"AxiLite4Gpios gpios_3 gpios_read_1", false,-1, 15,0);
        vcdp->declBus(c+521,"AxiLite4Gpios gpios_3 gpios_writeEnable_1", false,-1, 15,0);
        vcdp->declBus(c+1,"AxiLite4Gpios gpios_3 interrupt", false,-1, 15,0);
        vcdp->declBus(c+537,"AxiLite4Gpios gpios_3 ir_high", false,-1, 15,0);
        vcdp->declBus(c+545,"AxiLite4Gpios gpios_3 ir_low", false,-1, 15,0);
        vcdp->declBus(c+553,"AxiLite4Gpios gpios_3 ir_rise", false,-1, 15,0);
        vcdp->declBus(c+561,"AxiLite4Gpios gpios_3 ir_fall", false,-1, 15,0);
        vcdp->declBit(c+753,"AxiLite4Gpios gpios_3 clk", false,-1);
        vcdp->declBit(c+761,"AxiLite4Gpios gpios_3 reset", false,-1);
        vcdp->declBus(c+417,"AxiLite4Gpios gpios_3 gpios_read_buffercc_io_dataOut", false,-1, 15,0);
        vcdp->declBus(c+417,"AxiLite4Gpios gpios_3 syncronized", false,-1, 15,0);
        vcdp->declBus(c+425,"AxiLite4Gpios gpios_3 last", false,-1, 15,0);
        vcdp->declBus(c+441,"AxiLite4Gpios gpios_3 interrupt_valid", false,-1, 15,0);
        vcdp->declBus(c+345,"AxiLite4Gpios gpios_3 gpios_read_buffercc io_dataIn", false,-1, 15,0);
        vcdp->declBus(c+417,"AxiLite4Gpios gpios_3 gpios_read_buffercc io_dataOut", false,-1, 15,0);
        vcdp->declBit(c+753,"AxiLite4Gpios gpios_3 gpios_read_buffercc clk", false,-1);
        vcdp->declBit(c+761,"AxiLite4Gpios gpios_3 gpios_read_buffercc reset", false,-1);
        vcdp->declBus(c+433,"AxiLite4Gpios gpios_3 gpios_read_buffercc buffers_0", false,-1, 15,0);
        vcdp->declBus(c+417,"AxiLite4Gpios gpios_3 gpios_read_buffercc buffers_1", false,-1, 15,0);
    }
}

void VAxiLite4Gpios::traceFullThis__1(VAxiLite4Gpios__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VAxiLite4Gpios* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT___zz_1),16);
        vcdp->fullBus(c+9,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read_1),16);
        vcdp->fullBus(c+17,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read_1),16);
        vcdp->fullBus(c+25,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write),16);
        vcdp->fullBus(c+33,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable),16);
        vcdp->fullBus(c+41,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_interrupt),16);
        vcdp->fullBus(c+49,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write),16);
        vcdp->fullBus(c+57,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable),16);
        vcdp->fullBus(c+65,(vlTOPp->AxiLite4Gpios__DOT__readRsp_data),32);
        vcdp->fullBit(c+73,((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable))));
        vcdp->fullBit(c+81,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 1U))));
        vcdp->fullBit(c+89,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 2U))));
        vcdp->fullBit(c+97,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                   >> 3U))));
        vcdp->fullBit(c+105,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                    >> 4U))));
        vcdp->fullBit(c+113,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                    >> 5U))));
        vcdp->fullBit(c+121,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                    >> 6U))));
        vcdp->fullBit(c+129,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                    >> 7U))));
        vcdp->fullBit(c+137,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                    >> 8U))));
        vcdp->fullBit(c+145,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                    >> 9U))));
        vcdp->fullBit(c+153,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                    >> 0xaU))));
        vcdp->fullBit(c+161,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                    >> 0xbU))));
        vcdp->fullBit(c+169,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                    >> 0xcU))));
        vcdp->fullBit(c+177,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                    >> 0xdU))));
        vcdp->fullBit(c+185,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                    >> 0xeU))));
        vcdp->fullBit(c+193,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable) 
                                    >> 0xfU))));
        vcdp->fullBit(c+201,((1U & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable))));
        vcdp->fullBit(c+209,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 1U))));
        vcdp->fullBit(c+217,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 2U))));
        vcdp->fullBit(c+225,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 3U))));
        vcdp->fullBit(c+233,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 4U))));
        vcdp->fullBit(c+241,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 5U))));
        vcdp->fullBit(c+249,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 6U))));
        vcdp->fullBit(c+257,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 7U))));
        vcdp->fullBit(c+265,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 8U))));
        vcdp->fullBit(c+273,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 9U))));
        vcdp->fullBit(c+281,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 0xaU))));
        vcdp->fullBit(c+289,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 0xbU))));
        vcdp->fullBit(c+297,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 0xcU))));
        vcdp->fullBit(c+305,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 0xdU))));
        vcdp->fullBit(c+313,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 0xeU))));
        vcdp->fullBit(c+321,((1U & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable) 
                                    >> 0xfU))));
        vcdp->fullBus(c+329,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__interrupt_valid),16);
        vcdp->fullBus(c+337,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_read),16);
        vcdp->fullBus(c+345,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_read),16);
        vcdp->fullBit(c+353,(vlTOPp->AxiLite4Gpios__DOT__writeJoinEvent_valid));
        vcdp->fullBit(c+361,(vlTOPp->AxiLite4Gpios__DOT___zz_writeJoinEvent_translated_ready));
        vcdp->fullBit(c+369,(vlTOPp->AxiLite4Gpios__DOT__writeOccur));
        vcdp->fullBus(c+377,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_addr),8);
        vcdp->fullBus(c+385,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rData_prot),3);
        vcdp->fullBus(c+393,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_1),16);
        vcdp->fullBus(c+401,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__last),16);
        vcdp->fullBus(c+409,(vlTOPp->AxiLite4Gpios__DOT__gpios_2__DOT__gpios_read_buffercc__DOT__buffers_0),16);
        vcdp->fullBus(c+417,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1),16);
        vcdp->fullBus(c+425,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__last),16);
        vcdp->fullBus(c+433,(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_0),16);
        vcdp->fullBus(c+441,((((((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_high_driver) 
                                 & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)) 
                                | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_low_driver) 
                                   & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)))) 
                               | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_rise_driver) 
                                  & ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1) 
                                     & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__last))))) 
                              | ((IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_fall_driver) 
                                 & ((~ (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__gpios_read_buffercc__DOT__buffers_1)) 
                                    & (IData)(vlTOPp->AxiLite4Gpios__DOT__gpios_3__DOT__last))))),16);
        vcdp->fullBit(c+449,((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT___zz_axil4Ctrl_bvalid_2)))));
        vcdp->fullBit(c+457,(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid));
        vcdp->fullBit(c+465,((1U & (~ (IData)(vlTOPp->AxiLite4Gpios__DOT__axil4Ctrl_ar_rValid)))));
        vcdp->fullBus(c+473,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_writeEnable_1_driver),16);
        vcdp->fullBus(c+481,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_gpios_write_1_driver),16);
        vcdp->fullBus(c+489,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_high_driver),16);
        vcdp->fullBus(c+497,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_low_driver),16);
        vcdp->fullBus(c+505,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_rise_driver),16);
        vcdp->fullBus(c+513,(vlTOPp->AxiLite4Gpios__DOT__gpios_2_ir_fall_driver),16);
        vcdp->fullBus(c+521,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_writeEnable_1_driver),16);
        vcdp->fullBus(c+529,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_gpios_write_1_driver),16);
        vcdp->fullBus(c+537,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_high_driver),16);
        vcdp->fullBus(c+545,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_low_driver),16);
        vcdp->fullBus(c+553,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_rise_driver),16);
        vcdp->fullBus(c+561,(vlTOPp->AxiLite4Gpios__DOT__gpios_3_ir_fall_driver),16);
        vcdp->fullBit(c+569,(vlTOPp->axil4Ctrl_awvalid));
        vcdp->fullBit(c+577,(vlTOPp->axil4Ctrl_awready));
        vcdp->fullBus(c+585,(vlTOPp->axil4Ctrl_awaddr),8);
        vcdp->fullBus(c+593,(vlTOPp->axil4Ctrl_awprot),3);
        vcdp->fullBit(c+601,(vlTOPp->axil4Ctrl_wvalid));
        vcdp->fullBit(c+609,(vlTOPp->axil4Ctrl_wready));
        vcdp->fullBus(c+617,(vlTOPp->axil4Ctrl_wdata),32);
        vcdp->fullBus(c+625,(vlTOPp->axil4Ctrl_wstrb),4);
        vcdp->fullBit(c+633,(vlTOPp->axil4Ctrl_bvalid));
        vcdp->fullBit(c+641,(vlTOPp->axil4Ctrl_bready));
        vcdp->fullBus(c+649,(vlTOPp->axil4Ctrl_bresp),2);
        vcdp->fullBit(c+657,(vlTOPp->axil4Ctrl_arvalid));
        vcdp->fullBit(c+665,(vlTOPp->axil4Ctrl_arready));
        vcdp->fullBus(c+673,(vlTOPp->axil4Ctrl_araddr),8);
        vcdp->fullBus(c+681,(vlTOPp->axil4Ctrl_arprot),3);
        vcdp->fullBit(c+689,(vlTOPp->axil4Ctrl_rvalid));
        vcdp->fullBit(c+697,(vlTOPp->axil4Ctrl_rready));
        vcdp->fullBus(c+705,(vlTOPp->axil4Ctrl_rdata),32);
        vcdp->fullBus(c+713,(vlTOPp->axil4Ctrl_rresp),2);
        vcdp->fullBus(c+721,(vlTOPp->gpio_0),16);
        vcdp->fullBus(c+729,(vlTOPp->gpio_1),16);
        vcdp->fullBit(c+737,(vlTOPp->interrupt_0));
        vcdp->fullBit(c+745,(vlTOPp->interrupt_1));
        vcdp->fullBit(c+753,(vlTOPp->clk));
        vcdp->fullBit(c+761,(vlTOPp->reset));
        vcdp->fullBit(c+769,(((IData)(vlTOPp->axil4Ctrl_rvalid) 
                              & (IData)(vlTOPp->axil4Ctrl_rready))));
        vcdp->fullBit(c+777,(0U));
        vcdp->fullBus(c+785,(0U),2);
    }
}
