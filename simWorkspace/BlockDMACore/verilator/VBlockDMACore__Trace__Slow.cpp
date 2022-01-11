// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBlockDMACore__Syms.h"


//======================

void VBlockDMACore::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VBlockDMACore::traceInit, &VBlockDMACore::traceFull, &VBlockDMACore::traceChg, this);
}
void VBlockDMACore::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VBlockDMACore* t=(VBlockDMACore*)userthis;
    VBlockDMACore__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VBlockDMACore::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBlockDMACore* t=(VBlockDMACore*)userthis;
    VBlockDMACore__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VBlockDMACore::traceInitThis(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VBlockDMACore::traceFullThis(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBlockDMACore::traceInitThis__1(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+50,"axi4Data_ar_valid",-1);
	vcdp->declBit  (c+51,"axi4Data_ar_ready",-1);
	vcdp->declBus  (c+52,"axi4Data_ar_payload_addr",-1,15,0);
	vcdp->declBus  (c+53,"axi4Data_ar_payload_id",-1,3,0);
	vcdp->declBus  (c+54,"axi4Data_ar_payload_len",-1,7,0);
	vcdp->declBus  (c+55,"axi4Data_ar_payload_size",-1,2,0);
	vcdp->declBus  (c+56,"axi4Data_ar_payload_burst",-1,1,0);
	vcdp->declBit  (c+57,"axi4Data_r_valid",-1);
	vcdp->declBit  (c+58,"axi4Data_r_ready",-1);
	vcdp->declBus  (c+59,"axi4Data_r_payload_data",-1,31,0);
	vcdp->declBus  (c+60,"axi4Data_r_payload_id",-1,3,0);
	vcdp->declBus  (c+61,"axi4Data_r_payload_resp",-1,1,0);
	vcdp->declBit  (c+62,"axi4Data_r_payload_last",-1);
	vcdp->declBit  (c+63,"m2s_desc_valid",-1);
	vcdp->declBit  (c+64,"m2s_desc_ready",-1);
	vcdp->declBus  (c+65,"m2s_desc_addr",-1,15,0);
	vcdp->declBus  (c+66,"m2s_desc_total_bytes",-1,29,0);
	vcdp->declBus  (c+67,"m2s_desc_burst",-1,1,0);
	vcdp->declBus  (c+68,"m2s_desc_id",-1,3,0);
	vcdp->declBit  (c+69,"m2s_intr_en",-1);
	vcdp->declBit  (c+70,"intr_m2s",-1);
	vcdp->declBit  (c+71,"clk",-1);
	vcdp->declBit  (c+72,"reset",-1);
	vcdp->declBit  (c+50,"BlockDMACore axi4Data_ar_valid",-1);
	vcdp->declBit  (c+51,"BlockDMACore axi4Data_ar_ready",-1);
	vcdp->declBus  (c+52,"BlockDMACore axi4Data_ar_payload_addr",-1,15,0);
	vcdp->declBus  (c+53,"BlockDMACore axi4Data_ar_payload_id",-1,3,0);
	vcdp->declBus  (c+54,"BlockDMACore axi4Data_ar_payload_len",-1,7,0);
	vcdp->declBus  (c+55,"BlockDMACore axi4Data_ar_payload_size",-1,2,0);
	vcdp->declBus  (c+56,"BlockDMACore axi4Data_ar_payload_burst",-1,1,0);
	vcdp->declBit  (c+57,"BlockDMACore axi4Data_r_valid",-1);
	vcdp->declBit  (c+58,"BlockDMACore axi4Data_r_ready",-1);
	vcdp->declBus  (c+59,"BlockDMACore axi4Data_r_payload_data",-1,31,0);
	vcdp->declBus  (c+60,"BlockDMACore axi4Data_r_payload_id",-1,3,0);
	vcdp->declBus  (c+61,"BlockDMACore axi4Data_r_payload_resp",-1,1,0);
	vcdp->declBit  (c+62,"BlockDMACore axi4Data_r_payload_last",-1);
	vcdp->declBit  (c+63,"BlockDMACore m2s_desc_valid",-1);
	vcdp->declBit  (c+64,"BlockDMACore m2s_desc_ready",-1);
	vcdp->declBus  (c+65,"BlockDMACore m2s_desc_addr",-1,15,0);
	vcdp->declBus  (c+66,"BlockDMACore m2s_desc_total_bytes",-1,29,0);
	vcdp->declBus  (c+67,"BlockDMACore m2s_desc_burst",-1,1,0);
	vcdp->declBus  (c+68,"BlockDMACore m2s_desc_id",-1,3,0);
	vcdp->declBit  (c+69,"BlockDMACore m2s_intr_en",-1);
	vcdp->declBit  (c+70,"BlockDMACore intr_m2s",-1);
	vcdp->declBit  (c+71,"BlockDMACore clk",-1);
	vcdp->declBit  (c+72,"BlockDMACore reset",-1);
	vcdp->declBit  (c+74,"BlockDMACore m2s_inst_dma_ar_valid",-1);
	vcdp->declBus  (c+15,"BlockDMACore m2s_inst_dma_ar_payload_addr",-1,15,0);
	vcdp->declBus  (c+16,"BlockDMACore m2s_inst_dma_ar_payload_id",-1,3,0);
	vcdp->declBus  (c+17,"BlockDMACore m2s_inst_dma_ar_payload_len",-1,7,0);
	vcdp->declBus  (c+18,"BlockDMACore m2s_inst_dma_ar_payload_size",-1,2,0);
	vcdp->declBus  (c+19,"BlockDMACore m2s_inst_dma_ar_payload_burst",-1,1,0);
	vcdp->declBit  (c+75,"BlockDMACore m2s_inst_dma_r_ready",-1);
	vcdp->declBit  (c+35,"BlockDMACore m2s_inst_dma_cch_ready",-1);
	vcdp->declBit  (c+75,"BlockDMACore m2s_inst_intr_m2s",-1);
	vcdp->declBit  (c+74,"BlockDMACore m2s_inst dma_ar_valid",-1);
	vcdp->declBit  (c+51,"BlockDMACore m2s_inst dma_ar_ready",-1);
	vcdp->declBus  (c+15,"BlockDMACore m2s_inst dma_ar_payload_addr",-1,15,0);
	vcdp->declBus  (c+16,"BlockDMACore m2s_inst dma_ar_payload_id",-1,3,0);
	vcdp->declBus  (c+17,"BlockDMACore m2s_inst dma_ar_payload_len",-1,7,0);
	vcdp->declBus  (c+18,"BlockDMACore m2s_inst dma_ar_payload_size",-1,2,0);
	vcdp->declBus  (c+19,"BlockDMACore m2s_inst dma_ar_payload_burst",-1,1,0);
	vcdp->declBit  (c+57,"BlockDMACore m2s_inst dma_r_valid",-1);
	vcdp->declBit  (c+75,"BlockDMACore m2s_inst dma_r_ready",-1);
	vcdp->declBus  (c+59,"BlockDMACore m2s_inst dma_r_payload_data",-1,31,0);
	vcdp->declBus  (c+60,"BlockDMACore m2s_inst dma_r_payload_id",-1,3,0);
	vcdp->declBus  (c+61,"BlockDMACore m2s_inst dma_r_payload_resp",-1,1,0);
	vcdp->declBit  (c+62,"BlockDMACore m2s_inst dma_r_payload_last",-1);
	vcdp->declBit  (c+63,"BlockDMACore m2s_inst dma_cch_valid",-1);
	vcdp->declBit  (c+35,"BlockDMACore m2s_inst dma_cch_ready",-1);
	vcdp->declBus  (c+65,"BlockDMACore m2s_inst dma_cch_payload_desc_addr",-1,15,0);
	vcdp->declBus  (c+66,"BlockDMACore m2s_inst dma_cch_payload_desc_total_bytes",-1,29,0);
	vcdp->declBus  (c+67,"BlockDMACore m2s_inst dma_cch_payload_desc_burst",-1,1,0);
	vcdp->declBus  (c+68,"BlockDMACore m2s_inst dma_cch_payload_desc_id",-1,3,0);
	vcdp->declBit  (c+75,"BlockDMACore m2s_inst intr_m2s",-1);
	vcdp->declBit  (c+71,"BlockDMACore m2s_inst clk",-1);
	vcdp->declBit  (c+72,"BlockDMACore m2s_inst reset",-1);
	vcdp->declBit  (c+74,"BlockDMACore m2s_inst dma_rd_req_fifo_io_pop_ready",-1);
	vcdp->declBit  (c+10,"BlockDMACore m2s_inst dma_rd_req_fifo_io_push_ready",-1);
	vcdp->declBit  (c+7,"BlockDMACore m2s_inst dma_rd_req_fifo_io_pop_valid",-1);
	vcdp->declBus  (c+15,"BlockDMACore m2s_inst dma_rd_req_fifo_io_pop_payload_addr",-1,15,0);
	vcdp->declBus  (c+16,"BlockDMACore m2s_inst dma_rd_req_fifo_io_pop_payload_id",-1,3,0);
	vcdp->declBus  (c+17,"BlockDMACore m2s_inst dma_rd_req_fifo_io_pop_payload_len",-1,7,0);
	vcdp->declBus  (c+18,"BlockDMACore m2s_inst dma_rd_req_fifo_io_pop_payload_size",-1,2,0);
	vcdp->declBus  (c+19,"BlockDMACore m2s_inst dma_rd_req_fifo_io_pop_payload_burst",-1,1,0);
	vcdp->declBus  (c+1,"BlockDMACore m2s_inst dma_rd_req_fifo_io_occupancy",-1,2,0);
	vcdp->declBus  (c+2,"BlockDMACore m2s_inst dma_rd_req_fifo_io_availability",-1,2,0);
	// Tracing: BlockDMACore m2s_inst _zz_fifo_in_addr // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:123
	// Tracing: BlockDMACore m2s_inst _zz_when_BlockDMARead_l67 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:124
	// Tracing: BlockDMACore m2s_inst _zz_when_BlockDMARead_l67_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:125
	// Tracing: BlockDMACore m2s_inst _zz_when_BlockDMARead_l67_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:126
	// Tracing: BlockDMACore m2s_inst _zz_when_BlockDMARead_l67_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:127
	// Tracing: BlockDMACore m2s_inst _zz_fifo_in_len // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:128
	// Tracing: BlockDMACore m2s_inst _zz_fifo_in_len_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:129
	// Tracing: BlockDMACore m2s_inst _zz_fifo_in_len_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:130
	// Tracing: BlockDMACore m2s_inst _zz_when_BlockDMARead_l75 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:131
	// Tracing: BlockDMACore m2s_inst _zz_when_BlockDMARead_l75_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:132
	// Tracing: BlockDMACore m2s_inst _zz_when_BlockDMARead_l75_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:133
	// Tracing: BlockDMACore m2s_inst _zz_fifo_in_len_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:134
	// Tracing: BlockDMACore m2s_inst _zz_fifo_in_len_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:135
	// Tracing: BlockDMACore m2s_inst _zz_m2s_strb // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:136
	// Tracing: BlockDMACore m2s_inst _zz_m2s_strb_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:137
	// Tracing: BlockDMACore m2s_inst _zz_m2s_strb_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:138
	vcdp->declBus  (c+36,"BlockDMACore m2s_inst dma_rd_cch_state",-1,1,0);
	vcdp->declBit  (c+35,"BlockDMACore m2s_inst cch_ready",-1);
	vcdp->declBus  (c+37,"BlockDMACore m2s_inst cch_total_bytes",-1,29,0);
	vcdp->declBus  (c+20,"BlockDMACore m2s_inst fifo_in_id",-1,3,0);
	vcdp->declBus  (c+21,"BlockDMACore m2s_inst fifo_in_addr",-1,15,0);
	vcdp->declBus  (c+22,"BlockDMACore m2s_inst fifo_in_len",-1,7,0);
	vcdp->declBus  (c+76,"BlockDMACore m2s_inst fifo_in_size",-1,2,0);
	vcdp->declBus  (c+23,"BlockDMACore m2s_inst fifo_in_burst",-1,1,0);
	vcdp->declBit  (c+38,"BlockDMACore m2s_inst fifo_in_valid",-1);
	vcdp->declBit  (c+73,"BlockDMACore m2s_inst dma_cch_fire",-1);
	vcdp->declBit  (c+39,"BlockDMACore m2s_inst when_BlockDMARead_l65",-1);
	vcdp->declBit  (c+34,"BlockDMACore m2s_inst when_BlockDMARead_l67",-1);
	vcdp->declBit  (c+24,"BlockDMACore m2s_inst when_BlockDMARead_l75",-1);
	vcdp->declBit  (c+8,"BlockDMACore m2s_inst dma_rd_req_fifo_io_push_fire",-1);
	vcdp->declBit  (c+3,"BlockDMACore m2s_inst when_BlockDMARead_l92",-1);
	vcdp->declBus  (c+40,"BlockDMACore m2s_inst dma_rd_axi_state",-1,1,0);
	vcdp->declBit  (c+74,"BlockDMACore m2s_inst fifo_pop_valve",-1);
	vcdp->declBit  (c+74,"BlockDMACore m2s_inst r_valve",-1);
	vcdp->declBus  (c+77,"BlockDMACore m2s_inst addr_to_strb_0",-1,3,0);
	vcdp->declBus  (c+78,"BlockDMACore m2s_inst addr_to_strb_1",-1,3,0);
	vcdp->declBus  (c+79,"BlockDMACore m2s_inst addr_to_strb_2",-1,3,0);
	vcdp->declBus  (c+80,"BlockDMACore m2s_inst addr_to_strb_3",-1,3,0);
	vcdp->declBus  (c+25,"BlockDMACore m2s_inst m2s_strb",-1,3,0);
	vcdp->declBit  (c+74,"BlockDMACore m2s_inst dma_rd_req_fifo_io_pop_fire",-1);
	vcdp->declBus  (c+41,"BlockDMACore m2s_inst dma_rd_cch_state_string",-1,31,0);
	vcdp->declQuad (c+42,"BlockDMACore m2s_inst dma_rd_axi_state_string",-1,47,0);
	vcdp->declBit  (c+38,"BlockDMACore m2s_inst dma_rd_req_fifo io_push_valid",-1);
	vcdp->declBit  (c+10,"BlockDMACore m2s_inst dma_rd_req_fifo io_push_ready",-1);
	vcdp->declBus  (c+21,"BlockDMACore m2s_inst dma_rd_req_fifo io_push_payload_addr",-1,15,0);
	vcdp->declBus  (c+20,"BlockDMACore m2s_inst dma_rd_req_fifo io_push_payload_id",-1,3,0);
	vcdp->declBus  (c+22,"BlockDMACore m2s_inst dma_rd_req_fifo io_push_payload_len",-1,7,0);
	vcdp->declBus  (c+76,"BlockDMACore m2s_inst dma_rd_req_fifo io_push_payload_size",-1,2,0);
	vcdp->declBus  (c+23,"BlockDMACore m2s_inst dma_rd_req_fifo io_push_payload_burst",-1,1,0);
	vcdp->declBit  (c+7,"BlockDMACore m2s_inst dma_rd_req_fifo io_pop_valid",-1);
	vcdp->declBit  (c+74,"BlockDMACore m2s_inst dma_rd_req_fifo io_pop_ready",-1);
	vcdp->declBus  (c+15,"BlockDMACore m2s_inst dma_rd_req_fifo io_pop_payload_addr",-1,15,0);
	vcdp->declBus  (c+16,"BlockDMACore m2s_inst dma_rd_req_fifo io_pop_payload_id",-1,3,0);
	vcdp->declBus  (c+17,"BlockDMACore m2s_inst dma_rd_req_fifo io_pop_payload_len",-1,7,0);
	vcdp->declBus  (c+18,"BlockDMACore m2s_inst dma_rd_req_fifo io_pop_payload_size",-1,2,0);
	vcdp->declBus  (c+19,"BlockDMACore m2s_inst dma_rd_req_fifo io_pop_payload_burst",-1,1,0);
	vcdp->declBit  (c+74,"BlockDMACore m2s_inst dma_rd_req_fifo io_flush",-1);
	vcdp->declBus  (c+1,"BlockDMACore m2s_inst dma_rd_req_fifo io_occupancy",-1,2,0);
	vcdp->declBus  (c+2,"BlockDMACore m2s_inst dma_rd_req_fifo io_availability",-1,2,0);
	vcdp->declBit  (c+71,"BlockDMACore m2s_inst dma_rd_req_fifo clk",-1);
	vcdp->declBit  (c+72,"BlockDMACore m2s_inst dma_rd_req_fifo reset",-1);
	// Tracing: BlockDMACore m2s_inst dma_rd_req_fifo _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:378
	// Tracing: BlockDMACore m2s_inst dma_rd_req_fifo _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:379
	// Tracing: BlockDMACore m2s_inst dma_rd_req_fifo _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:380
	// Tracing: BlockDMACore m2s_inst dma_rd_req_fifo _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:381
	// Tracing: BlockDMACore m2s_inst dma_rd_req_fifo _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:382
	// Tracing: BlockDMACore m2s_inst dma_rd_req_fifo _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:383
	// Tracing: BlockDMACore m2s_inst dma_rd_req_fifo _zz__zz_io_pop_payload_addr // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:384
	// Tracing: BlockDMACore m2s_inst dma_rd_req_fifo _zz_logic_ram_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:385
	// Tracing: BlockDMACore m2s_inst dma_rd_req_fifo _zz_io_availability // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:386
	// Tracing: BlockDMACore m2s_inst dma_rd_req_fifo _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:387
	vcdp->declBit  (c+11,"BlockDMACore m2s_inst dma_rd_req_fifo logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+74,"BlockDMACore m2s_inst dma_rd_req_fifo logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+12,"BlockDMACore m2s_inst dma_rd_req_fifo logic_pushPtr_valueNext",-1,1,0);
	vcdp->declBus  (c+44,"BlockDMACore m2s_inst dma_rd_req_fifo logic_pushPtr_value",-1,1,0);
	vcdp->declBit  (c+45,"BlockDMACore m2s_inst dma_rd_req_fifo logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+9,"BlockDMACore m2s_inst dma_rd_req_fifo logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+74,"BlockDMACore m2s_inst dma_rd_req_fifo logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+74,"BlockDMACore m2s_inst dma_rd_req_fifo logic_popPtr_willClear",-1);
	vcdp->declBus  (c+4,"BlockDMACore m2s_inst dma_rd_req_fifo logic_popPtr_valueNext",-1,1,0);
	vcdp->declBus  (c+46,"BlockDMACore m2s_inst dma_rd_req_fifo logic_popPtr_value",-1,1,0);
	vcdp->declBit  (c+47,"BlockDMACore m2s_inst dma_rd_req_fifo logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+74,"BlockDMACore m2s_inst dma_rd_req_fifo logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+5,"BlockDMACore m2s_inst dma_rd_req_fifo logic_ptrMatch",-1);
	vcdp->declBit  (c+48,"BlockDMACore m2s_inst dma_rd_req_fifo logic_risingOccupancy",-1);
	vcdp->declBit  (c+13,"BlockDMACore m2s_inst dma_rd_req_fifo logic_pushing",-1);
	vcdp->declBit  (c+74,"BlockDMACore m2s_inst dma_rd_req_fifo logic_popping",-1);
	vcdp->declBit  (c+6,"BlockDMACore m2s_inst dma_rd_req_fifo logic_empty",-1);
	vcdp->declBit  (c+14,"BlockDMACore m2s_inst dma_rd_req_fifo logic_full",-1);
	// Tracing: BlockDMACore m2s_inst dma_rd_req_fifo _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:406
	// Tracing: BlockDMACore m2s_inst dma_rd_req_fifo _zz_io_pop_payload_addr // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BlockDMACore.v:407
	vcdp->declBit  (c+13,"BlockDMACore m2s_inst dma_rd_req_fifo when_Stream_l933",-1);
	vcdp->declBus  (c+49,"BlockDMACore m2s_inst dma_rd_req_fifo logic_ptrDif",-1,1,0);
	{int i; for (i=0; i<4; i++) {
		vcdp->declQuad (c+26+i*2,"BlockDMACore m2s_inst dma_rd_req_fifo logic_ram",(i+0),32,0);}}
    }
}

void VBlockDMACore::traceFullThis__1(VBlockDMACore__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBlockDMACore* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(((((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy) 
				& (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch)) 
			       << 2U) | (3U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value) 
					       - (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value))))),3);
	vcdp->fullBus  (c+2,(((((~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch)) 
			       << 2U) | (3U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value) 
					       - (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value))))),3);
	vcdp->fullBit  (c+3,(((0U != vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes) 
			      & (0U != ((((~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy)) 
					  & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch)) 
					 << 2U) | (3U 
						   & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value) 
						      - (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value))))))));
	vcdp->fullBus  (c+4,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_valueNext),2);
	vcdp->fullBit  (c+5,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+6,(((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch) 
			      & (~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+7,((1U & ((~ ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ptrMatch) 
					& (~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy)))) 
				    & (~ ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_io_pop_valid) 
					  & (~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full))))))));
	vcdp->fullBit  (c+8,(((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_valid) 
			      & (~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+9,(((3U == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value)) 
			      & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+10,((1U & (~ (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+11,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+12,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_valueNext),2);
	vcdp->fullBit  (c+13,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo_io_push_fire));
	vcdp->fullBit  (c+14,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_full));
	vcdp->fullBus  (c+15,((0xffffU & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0))),16);
	vcdp->fullBus  (c+16,((0xfU & (IData)((vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 
					       >> 0x10U)))),4);
	vcdp->fullBus  (c+17,((0xffU & (IData)((vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 
						>> 0x14U)))),8);
	vcdp->fullBus  (c+18,((7U & (IData)((vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 
					     >> 0x1cU)))),3);
	vcdp->fullBus  (c+19,((3U & (IData)((vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT___zz_logic_ram_port0 
					     >> 0x1fU)))),2);
	vcdp->fullBus  (c+20,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_id),4);
	vcdp->fullBus  (c+21,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr),16);
	vcdp->fullBus  (c+22,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_len),8);
	vcdp->fullBus  (c+23,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_burst),2);
	vcdp->fullBit  (c+24,(((1U & (((IData)(0x40U) 
				       + (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr)) 
				      >> 0xcU)) != 
			       (1U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr) 
				      >> 0xcU)))));
	vcdp->fullBus  (c+25,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__m2s_strb),4);
	vcdp->fullQuad (c+26,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram[0]),33);
	vcdp->fullQuad (c+28,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram[1]),33);
	vcdp->fullQuad (c+30,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram[2]),33);
	vcdp->fullQuad (c+32,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_ram[3]),33);
	vcdp->fullBit  (c+34,(((1U & (((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr) 
				       + vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes) 
				      >> 0xcU)) != 
			       (1U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_addr) 
				      >> 0xcU)))));
	vcdp->fullBit  (c+35,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_ready));
	vcdp->fullBus  (c+36,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state),2);
	vcdp->fullBus  (c+37,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes),30);
	vcdp->fullBit  (c+38,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__fifo_in_valid));
	vcdp->fullBit  (c+39,((0x40U >= vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_total_bytes)));
	vcdp->fullBus  (c+40,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_axi_state),2);
	vcdp->fullBus  (c+41,(((0U == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state))
			        ? 0x49444c45U : ((1U 
						  == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state))
						  ? 0x52455120U
						  : 
						 ((2U 
						   == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_cch_state))
						   ? 0x48414c54U
						   : 0x3f3f3f3fU)))),32);
	vcdp->fullQuad (c+42,(((2U & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_axi_state))
			        ? ((1U & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_axi_state))
				    ? VL_ULL(0x46494e495348)
				    : VL_ULL(0x425552535420))
			        : ((1U & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_axi_state))
				    ? VL_ULL(0x524551202020)
				    : VL_ULL(0x49444c452020)))),48);
	vcdp->fullBus  (c+44,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value),2);
	vcdp->fullBit  (c+45,((3U == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+46,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value),2);
	vcdp->fullBit  (c+47,((3U == (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+48,(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+49,((3U & ((IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_pushPtr_value) 
				     - (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__dma_rd_req_fifo__DOT__logic_popPtr_value)))),2);
	vcdp->fullBit  (c+50,(vlTOPp->axi4Data_ar_valid));
	vcdp->fullBit  (c+51,(vlTOPp->axi4Data_ar_ready));
	vcdp->fullBus  (c+52,(vlTOPp->axi4Data_ar_payload_addr),16);
	vcdp->fullBus  (c+53,(vlTOPp->axi4Data_ar_payload_id),4);
	vcdp->fullBus  (c+54,(vlTOPp->axi4Data_ar_payload_len),8);
	vcdp->fullBus  (c+55,(vlTOPp->axi4Data_ar_payload_size),3);
	vcdp->fullBus  (c+56,(vlTOPp->axi4Data_ar_payload_burst),2);
	vcdp->fullBit  (c+57,(vlTOPp->axi4Data_r_valid));
	vcdp->fullBit  (c+58,(vlTOPp->axi4Data_r_ready));
	vcdp->fullBus  (c+59,(vlTOPp->axi4Data_r_payload_data),32);
	vcdp->fullBus  (c+60,(vlTOPp->axi4Data_r_payload_id),4);
	vcdp->fullBus  (c+61,(vlTOPp->axi4Data_r_payload_resp),2);
	vcdp->fullBit  (c+62,(vlTOPp->axi4Data_r_payload_last));
	vcdp->fullBit  (c+63,(vlTOPp->m2s_desc_valid));
	vcdp->fullBit  (c+64,(vlTOPp->m2s_desc_ready));
	vcdp->fullBus  (c+65,(vlTOPp->m2s_desc_addr),16);
	vcdp->fullBus  (c+66,(vlTOPp->m2s_desc_total_bytes),30);
	vcdp->fullBus  (c+67,(vlTOPp->m2s_desc_burst),2);
	vcdp->fullBus  (c+68,(vlTOPp->m2s_desc_id),4);
	vcdp->fullBit  (c+69,(vlTOPp->m2s_intr_en));
	vcdp->fullBit  (c+70,(vlTOPp->intr_m2s));
	vcdp->fullBit  (c+71,(vlTOPp->clk));
	vcdp->fullBit  (c+72,(vlTOPp->reset));
	vcdp->fullBit  (c+73,(((IData)(vlTOPp->m2s_desc_valid) 
			       & (IData)(vlTOPp->BlockDMACore__DOT__m2s_inst__DOT__cch_ready))));
	vcdp->fullBit  (c+74,(0U));
	vcdp->fullBit  (c+75,(1U));
	vcdp->fullBus  (c+76,(2U),3);
	vcdp->fullBus  (c+77,(0xfU),4);
	vcdp->fullBus  (c+78,(0xeU),4);
	vcdp->fullBus  (c+79,(0xcU),4);
	vcdp->fullBus  (c+80,(8U),4);
    }
}
