// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBDMAs2m__Syms.h"


//======================

void VBDMAs2m::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VBDMAs2m::traceInit, &VBDMAs2m::traceFull, &VBDMAs2m::traceChg, this);
}
void VBDMAs2m::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VBDMAs2m* t=(VBDMAs2m*)userthis;
    VBDMAs2m__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VBDMAs2m::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBDMAs2m* t=(VBDMAs2m*)userthis;
    VBDMAs2m__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VBDMAs2m::traceInitThis(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VBDMAs2m::traceFullThis(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
	vlTOPp->traceFullThis__13(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBDMAs2m::traceInitThis__1(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+149,"dma_aw_valid",-1);
	vcdp->declBit  (c+150,"dma_aw_ready",-1);
	vcdp->declBus  (c+151,"dma_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+152,"dma_aw_payload_id",-1,3,0);
	vcdp->declBus  (c+153,"dma_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+154,"dma_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+155,"dma_aw_payload_burst",-1,1,0);
	vcdp->declBit  (c+156,"dma_w_valid",-1);
	vcdp->declBit  (c+157,"dma_w_ready",-1);
	vcdp->declBus  (c+158,"dma_w_payload_data",-1,31,0);
	vcdp->declBus  (c+159,"dma_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+160,"dma_w_payload_last",-1);
	vcdp->declBit  (c+161,"dma_b_valid",-1);
	vcdp->declBit  (c+162,"dma_b_ready",-1);
	vcdp->declBus  (c+163,"dma_b_payload_id",-1,3,0);
	vcdp->declBus  (c+164,"dma_b_payload_resp",-1,1,0);
	vcdp->declBit  (c+165,"s2m_data_stream_valid",-1);
	vcdp->declBit  (c+166,"s2m_data_stream_ready",-1);
	vcdp->declBus  (c+167,"s2m_data_stream_payload_data",-1,31,0);
	vcdp->declBus  (c+168,"s2m_data_stream_payload_id",-1,3,0);
	vcdp->declBus  (c+169,"s2m_data_stream_payload_strb",-1,3,0);
	vcdp->declBus  (c+170,"s2m_data_stream_payload_keep_",-1,3,0);
	vcdp->declBit  (c+171,"s2m_data_stream_payload_last",-1);
	vcdp->declBit  (c+172,"s2m_reset",-1);
	vcdp->declBit  (c+173,"s2m_cch_valid",-1);
	vcdp->declBit  (c+174,"s2m_cch_ready",-1);
	vcdp->declBus  (c+175,"s2m_cch_payload_desc_start_addr",-1,31,0);
	vcdp->declBus  (c+176,"s2m_cch_payload_desc_total_bytes",-1,29,0);
	vcdp->declBus  (c+177,"s2m_cch_payload_desc_burst",-1,1,0);
	vcdp->declBus  (c+178,"s2m_cch_payload_desc_id",-1,3,0);
	vcdp->declBit  (c+179,"s2m_intr",-1);
	vcdp->declBit  (c+180,"clk",-1);
	vcdp->declBit  (c+181,"reset",-1);
	vcdp->declBit  (c+149,"BDMAs2m dma_aw_valid",-1);
	vcdp->declBit  (c+150,"BDMAs2m dma_aw_ready",-1);
	vcdp->declBus  (c+151,"BDMAs2m dma_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+152,"BDMAs2m dma_aw_payload_id",-1,3,0);
	vcdp->declBus  (c+153,"BDMAs2m dma_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+154,"BDMAs2m dma_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+155,"BDMAs2m dma_aw_payload_burst",-1,1,0);
	vcdp->declBit  (c+156,"BDMAs2m dma_w_valid",-1);
	vcdp->declBit  (c+157,"BDMAs2m dma_w_ready",-1);
	vcdp->declBus  (c+158,"BDMAs2m dma_w_payload_data",-1,31,0);
	vcdp->declBus  (c+159,"BDMAs2m dma_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+160,"BDMAs2m dma_w_payload_last",-1);
	vcdp->declBit  (c+161,"BDMAs2m dma_b_valid",-1);
	vcdp->declBit  (c+162,"BDMAs2m dma_b_ready",-1);
	vcdp->declBus  (c+163,"BDMAs2m dma_b_payload_id",-1,3,0);
	vcdp->declBus  (c+164,"BDMAs2m dma_b_payload_resp",-1,1,0);
	vcdp->declBit  (c+165,"BDMAs2m s2m_data_stream_valid",-1);
	vcdp->declBit  (c+166,"BDMAs2m s2m_data_stream_ready",-1);
	vcdp->declBus  (c+167,"BDMAs2m s2m_data_stream_payload_data",-1,31,0);
	vcdp->declBus  (c+168,"BDMAs2m s2m_data_stream_payload_id",-1,3,0);
	vcdp->declBus  (c+169,"BDMAs2m s2m_data_stream_payload_strb",-1,3,0);
	vcdp->declBus  (c+170,"BDMAs2m s2m_data_stream_payload_keep_",-1,3,0);
	vcdp->declBit  (c+171,"BDMAs2m s2m_data_stream_payload_last",-1);
	vcdp->declBit  (c+172,"BDMAs2m s2m_reset",-1);
	vcdp->declBit  (c+173,"BDMAs2m s2m_cch_valid",-1);
	vcdp->declBit  (c+174,"BDMAs2m s2m_cch_ready",-1);
	vcdp->declBus  (c+175,"BDMAs2m s2m_cch_payload_desc_start_addr",-1,31,0);
	vcdp->declBus  (c+176,"BDMAs2m s2m_cch_payload_desc_total_bytes",-1,29,0);
	vcdp->declBus  (c+177,"BDMAs2m s2m_cch_payload_desc_burst",-1,1,0);
	vcdp->declBus  (c+178,"BDMAs2m s2m_cch_payload_desc_id",-1,3,0);
	vcdp->declBit  (c+179,"BDMAs2m s2m_intr",-1);
	vcdp->declBit  (c+180,"BDMAs2m clk",-1);
	vcdp->declBit  (c+181,"BDMAs2m reset",-1);
	vcdp->declBit  (c+182,"BDMAs2m s2m_aw_fifo_io_pop_ready",-1);
	vcdp->declBus  (c+58,"BDMAs2m low_addr_fifo_io_push_payload",-1,1,0);
	vcdp->declBus  (c+59,"BDMAs2m low_bytes_fifo_io_push_payload",-1,1,0);
	vcdp->declBit  (c+42,"BDMAs2m s2m_aw_fifo_io_push_ready",-1);
	vcdp->declBit  (c+43,"BDMAs2m s2m_aw_fifo_io_pop_valid",-1);
	vcdp->declBus  (c+60,"BDMAs2m s2m_aw_fifo_io_pop_payload_addr",-1,31,0);
	vcdp->declBus  (c+61,"BDMAs2m s2m_aw_fifo_io_pop_payload_id",-1,3,0);
	vcdp->declBus  (c+62,"BDMAs2m s2m_aw_fifo_io_pop_payload_len",-1,7,0);
	vcdp->declBus  (c+63,"BDMAs2m s2m_aw_fifo_io_pop_payload_size",-1,2,0);
	vcdp->declBus  (c+64,"BDMAs2m s2m_aw_fifo_io_pop_payload_burst",-1,1,0);
	vcdp->declBus  (c+1,"BDMAs2m s2m_aw_fifo_io_occupancy",-1,3,0);
	vcdp->declBus  (c+2,"BDMAs2m s2m_aw_fifo_io_availability",-1,3,0);
	vcdp->declBit  (c+44,"BDMAs2m low_addr_fifo_io_push_ready",-1);
	vcdp->declBit  (c+19,"BDMAs2m low_addr_fifo_io_pop_valid",-1);
	vcdp->declBus  (c+65,"BDMAs2m low_addr_fifo_io_pop_payload",-1,1,0);
	vcdp->declBus  (c+3,"BDMAs2m low_addr_fifo_io_occupancy",-1,3,0);
	vcdp->declBus  (c+4,"BDMAs2m low_addr_fifo_io_availability",-1,3,0);
	vcdp->declBit  (c+45,"BDMAs2m low_bytes_fifo_io_push_ready",-1);
	vcdp->declBit  (c+20,"BDMAs2m low_bytes_fifo_io_pop_valid",-1);
	vcdp->declBus  (c+66,"BDMAs2m low_bytes_fifo_io_pop_payload",-1,1,0);
	vcdp->declBus  (c+5,"BDMAs2m low_bytes_fifo_io_occupancy",-1,3,0);
	vcdp->declBus  (c+6,"BDMAs2m low_bytes_fifo_io_availability",-1,3,0);
	// Tracing: BDMAs2m _zz_aligned_address // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:76
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l106 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:77
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l106_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:78
	// Tracing: BDMAs2m _zz_trans_bytes_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:79
	// Tracing: BDMAs2m _zz_s2m_aw_len // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:80
	// Tracing: BDMAs2m _zz_s2m_aw_len_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:81
	// Tracing: BDMAs2m _zz_s2m_aw_len_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:82
	// Tracing: BDMAs2m _zz_s2m_aw_len_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:83
	// Tracing: BDMAs2m _zz_cch_address // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:84
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l137 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:85
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l137_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:86
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l141 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:87
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l141_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:88
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l141_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:89
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l141_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:90
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l141_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:91
	// Tracing: BDMAs2m _zz_trans_bytes_cnt_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:92
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l153 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:93
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l153_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:94
	// Tracing: BDMAs2m _zz_trans_bytes_cnt_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:95
	// Tracing: BDMAs2m _zz_trans_bytes_cnt_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:96
	// Tracing: BDMAs2m _zz_trans_bytes_cnt_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:97
	// Tracing: BDMAs2m _zz_s2m_aw_len_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:98
	// Tracing: BDMAs2m _zz_s2m_aw_len_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:99
	// Tracing: BDMAs2m _zz_s2m_aw_len_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:100
	// Tracing: BDMAs2m _zz_s2m_aw_len_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:101
	// Tracing: BDMAs2m _zz_io_push_payload // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:102
	// Tracing: BDMAs2m _zz_strb_mask // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:103
	// Tracing: BDMAs2m _zz_s2m_w_strb // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:104
	// Tracing: BDMAs2m _zz_s2m_w_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:105
	vcdp->declBus  (c+114,"BDMAs2m s2m_cch_state",-1,1,0);
	vcdp->declBus  (c+115,"BDMAs2m s2m_w_state",-1,1,0);
	vcdp->declBit  (c+116,"BDMAs2m s2m_aw_valve",-1);
	vcdp->declBit  (c+117,"BDMAs2m s2m_data_valve",-1);
	vcdp->declBit  (c+118,"BDMAs2m cch_ready",-1);
	vcdp->declBus  (c+145,"BDMAs2m cch_total_bytes",-1,29,0);
	vcdp->declBus  (c+67,"BDMAs2m cch_address",-1,31,0);
	vcdp->declBus  (c+68,"BDMAs2m cch_burst_type",-1,1,0);
	vcdp->declBus  (c+69,"BDMAs2m cch_id",-1,3,0);
	vcdp->declBus  (c+70,"BDMAs2m trans_bytes_cnt",-1,29,0);
	vcdp->declBus  (c+71,"BDMAs2m s2m_aw_len",-1,7,0);
	vcdp->declBit  (c+119,"BDMAs2m s2m_aw_valid",-1);
	vcdp->declBit  (c+120,"BDMAs2m s2m_aw_halt_exec",-1);
	vcdp->declBus  (c+72,"BDMAs2m aligned_address",-1,31,0);
	vcdp->declBit  (c+121,"BDMAs2m cycle_finished",-1);
	vcdp->declBit  (c+26,"BDMAs2m s2m_cch_fire",-1);
	vcdp->declBit  (c+146,"BDMAs2m when_BDMAs2m_l90",-1);
	vcdp->declBit  (c+46,"BDMAs2m s2m_aw_fifo_io_push_fire",-1);
	vcdp->declBit  (c+21,"BDMAs2m s2m_aw_fifo_io_push_fire_1",-1);
	vcdp->declBit  (c+112,"BDMAs2m when_BDMAs2m_l106",-1);
	vcdp->declBit  (c+146,"BDMAs2m when_BDMAs2m_l120",-1);
	vcdp->declBit  (c+46,"BDMAs2m s2m_aw_fifo_io_push_fire_2",-1);
	vcdp->declBit  (c+21,"BDMAs2m s2m_aw_fifo_io_push_fire_3",-1);
	vcdp->declBit  (c+112,"BDMAs2m when_BDMAs2m_l137",-1);
	vcdp->declBit  (c+113,"BDMAs2m when_BDMAs2m_l141",-1);
	vcdp->declBit  (c+73,"BDMAs2m when_BDMAs2m_l153",-1);
	vcdp->declBit  (c+183,"BDMAs2m when_BDMAs2m_l165",-1);
	// Tracing: BDMAs2m _zz_dma_aw_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:133
	vcdp->declBit  (c+184,"BDMAs2m dma_aw_fire",-1);
	vcdp->declBit  (c+184,"BDMAs2m dma_aw_fire_1",-1);
	vcdp->declBus  (c+74,"BDMAs2m s2m_w_data",-1,31,0);
	vcdp->declBus  (c+75,"BDMAs2m s2m_w_strb",-1,3,0);
	vcdp->declBit  (c+122,"BDMAs2m s2m_w_valid",-1);
	vcdp->declBit  (c+123,"BDMAs2m s2m_b_ready",-1);
	vcdp->declBus  (c+76,"BDMAs2m w_residual_data",-1,31,0);
	vcdp->declBus  (c+77,"BDMAs2m w_residual_strb",-1,3,0);
	vcdp->declBus  (c+147,"BDMAs2m s2m_axis_len",-1,7,0);
	vcdp->declBus  (c+78,"BDMAs2m strb_mask",-1,3,0);
	vcdp->declBus  (c+79,"BDMAs2m bytes_shift",-1,1,0);
	vcdp->declBus  (c+189,"BDMAs2m strb_full",-1,3,0);
	vcdp->declBit  (c+27,"BDMAs2m dma_aw_fire_2",-1);
	vcdp->declBit  (c+28,"BDMAs2m dma_w_fire",-1);
	vcdp->declBit  (c+148,"BDMAs2m when_BDMAs2m_l230",-1);
	vcdp->declBit  (c+29,"BDMAs2m s2m_data_stream_fire",-1);
	vcdp->declBit  (c+185,"BDMAs2m when_BDMAs2m_l251",-1);
	vcdp->declBit  (c+148,"BDMAs2m when_BDMAs2m_l253",-1);
	vcdp->declBit  (c+186,"BDMAs2m dma_b_fire",-1);
	vcdp->declBit  (c+187,"BDMAs2m s2m_data_stream_fire_1",-1);
	vcdp->declBit  (c+188,"BDMAs2m when_BDMAs2m_l271",-1);
	vcdp->declBit  (c+124,"BDMAs2m when_BDMAs2m_l293",-1);
	vcdp->declBit  (c+22,"BDMAs2m when_BDMAs2m_l295",-1);
	vcdp->declArray(c+7,"BDMAs2m s2m_cch_state_string",-1,71,0);
	vcdp->declQuad (c+125,"BDMAs2m s2m_w_state_string",-1,39,0);
	vcdp->declBit  (c+119,"BDMAs2m s2m_aw_fifo io_push_valid",-1);
	vcdp->declBit  (c+42,"BDMAs2m s2m_aw_fifo io_push_ready",-1);
	vcdp->declBus  (c+72,"BDMAs2m s2m_aw_fifo io_push_payload_addr",-1,31,0);
	vcdp->declBus  (c+69,"BDMAs2m s2m_aw_fifo io_push_payload_id",-1,3,0);
	vcdp->declBus  (c+71,"BDMAs2m s2m_aw_fifo io_push_payload_len",-1,7,0);
	vcdp->declBus  (c+190,"BDMAs2m s2m_aw_fifo io_push_payload_size",-1,2,0);
	vcdp->declBus  (c+68,"BDMAs2m s2m_aw_fifo io_push_payload_burst",-1,1,0);
	vcdp->declBit  (c+43,"BDMAs2m s2m_aw_fifo io_pop_valid",-1);
	vcdp->declBit  (c+182,"BDMAs2m s2m_aw_fifo io_pop_ready",-1);
	vcdp->declBus  (c+60,"BDMAs2m s2m_aw_fifo io_pop_payload_addr",-1,31,0);
	vcdp->declBus  (c+61,"BDMAs2m s2m_aw_fifo io_pop_payload_id",-1,3,0);
	vcdp->declBus  (c+62,"BDMAs2m s2m_aw_fifo io_pop_payload_len",-1,7,0);
	vcdp->declBus  (c+63,"BDMAs2m s2m_aw_fifo io_pop_payload_size",-1,2,0);
	vcdp->declBus  (c+64,"BDMAs2m s2m_aw_fifo io_pop_payload_burst",-1,1,0);
	vcdp->declBit  (c+191,"BDMAs2m s2m_aw_fifo io_flush",-1);
	vcdp->declBus  (c+1,"BDMAs2m s2m_aw_fifo io_occupancy",-1,3,0);
	vcdp->declBus  (c+2,"BDMAs2m s2m_aw_fifo io_availability",-1,3,0);
	vcdp->declBit  (c+180,"BDMAs2m s2m_aw_fifo clk",-1);
	vcdp->declBit  (c+181,"BDMAs2m s2m_aw_fifo reset",-1);
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:688
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:689
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:690
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:691
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:692
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:693
	// Tracing: BDMAs2m s2m_aw_fifo _zz__zz_io_pop_payload_addr // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:694
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_ram_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:695
	// Tracing: BDMAs2m s2m_aw_fifo _zz_io_availability // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:696
	// Tracing: BDMAs2m s2m_aw_fifo _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:697
	vcdp->declBit  (c+47,"BDMAs2m s2m_aw_fifo logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+191,"BDMAs2m s2m_aw_fifo logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+48,"BDMAs2m s2m_aw_fifo logic_pushPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+127,"BDMAs2m s2m_aw_fifo logic_pushPtr_value",-1,2,0);
	vcdp->declBit  (c+128,"BDMAs2m s2m_aw_fifo logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+23,"BDMAs2m s2m_aw_fifo logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+30,"BDMAs2m s2m_aw_fifo logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+191,"BDMAs2m s2m_aw_fifo logic_popPtr_willClear",-1);
	vcdp->declBus  (c+31,"BDMAs2m s2m_aw_fifo logic_popPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+129,"BDMAs2m s2m_aw_fifo logic_popPtr_value",-1,2,0);
	vcdp->declBit  (c+130,"BDMAs2m s2m_aw_fifo logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+16,"BDMAs2m s2m_aw_fifo logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+10,"BDMAs2m s2m_aw_fifo logic_ptrMatch",-1);
	vcdp->declBit  (c+131,"BDMAs2m s2m_aw_fifo logic_risingOccupancy",-1);
	vcdp->declBit  (c+46,"BDMAs2m s2m_aw_fifo logic_pushing",-1);
	vcdp->declBit  (c+32,"BDMAs2m s2m_aw_fifo logic_popping",-1);
	vcdp->declBit  (c+11,"BDMAs2m s2m_aw_fifo logic_empty",-1);
	vcdp->declBit  (c+49,"BDMAs2m s2m_aw_fifo logic_full",-1);
	// Tracing: BDMAs2m s2m_aw_fifo _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:716
	// Tracing: BDMAs2m s2m_aw_fifo _zz_io_pop_payload_addr // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:717
	vcdp->declBit  (c+39,"BDMAs2m s2m_aw_fifo when_Stream_l933",-1);
	vcdp->declBus  (c+132,"BDMAs2m s2m_aw_fifo logic_ptrDif",-1,2,0);
	{int i; for (i=0; i<8; i++) {
		vcdp->declQuad (c+80+i*2,"BDMAs2m s2m_aw_fifo logic_ram",(i+0),48,0);}}
	vcdp->declBit  (c+119,"BDMAs2m low_addr_fifo io_push_valid",-1);
	vcdp->declBit  (c+44,"BDMAs2m low_addr_fifo io_push_ready",-1);
	vcdp->declBus  (c+58,"BDMAs2m low_addr_fifo io_push_payload",-1,1,0);
	vcdp->declBit  (c+19,"BDMAs2m low_addr_fifo io_pop_valid",-1);
	vcdp->declBit  (c+184,"BDMAs2m low_addr_fifo io_pop_ready",-1);
	vcdp->declBus  (c+65,"BDMAs2m low_addr_fifo io_pop_payload",-1,1,0);
	vcdp->declBit  (c+191,"BDMAs2m low_addr_fifo io_flush",-1);
	vcdp->declBus  (c+3,"BDMAs2m low_addr_fifo io_occupancy",-1,3,0);
	vcdp->declBus  (c+4,"BDMAs2m low_addr_fifo io_availability",-1,3,0);
	vcdp->declBit  (c+180,"BDMAs2m low_addr_fifo clk",-1);
	vcdp->declBit  (c+181,"BDMAs2m low_addr_fifo reset",-1);
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:528
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:529
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:530
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:531
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:532
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:533
	// Tracing: BDMAs2m low_addr_fifo _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:534
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_ram_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:535
	// Tracing: BDMAs2m low_addr_fifo _zz_io_availability // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:536
	// Tracing: BDMAs2m low_addr_fifo _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:537
	vcdp->declBit  (c+50,"BDMAs2m low_addr_fifo logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+191,"BDMAs2m low_addr_fifo logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+51,"BDMAs2m low_addr_fifo logic_pushPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+133,"BDMAs2m low_addr_fifo logic_pushPtr_value",-1,2,0);
	vcdp->declBit  (c+134,"BDMAs2m low_addr_fifo logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+24,"BDMAs2m low_addr_fifo logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+33,"BDMAs2m low_addr_fifo logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+191,"BDMAs2m low_addr_fifo logic_popPtr_willClear",-1);
	vcdp->declBus  (c+34,"BDMAs2m low_addr_fifo logic_popPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+135,"BDMAs2m low_addr_fifo logic_popPtr_value",-1,2,0);
	vcdp->declBit  (c+136,"BDMAs2m low_addr_fifo logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+17,"BDMAs2m low_addr_fifo logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+12,"BDMAs2m low_addr_fifo logic_ptrMatch",-1);
	vcdp->declBit  (c+137,"BDMAs2m low_addr_fifo logic_risingOccupancy",-1);
	vcdp->declBit  (c+52,"BDMAs2m low_addr_fifo logic_pushing",-1);
	vcdp->declBit  (c+35,"BDMAs2m low_addr_fifo logic_popping",-1);
	vcdp->declBit  (c+13,"BDMAs2m low_addr_fifo logic_empty",-1);
	vcdp->declBit  (c+53,"BDMAs2m low_addr_fifo logic_full",-1);
	// Tracing: BDMAs2m low_addr_fifo _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:556
	vcdp->declBit  (c+40,"BDMAs2m low_addr_fifo when_Stream_l933",-1);
	vcdp->declBus  (c+138,"BDMAs2m low_addr_fifo logic_ptrDif",-1,2,0);
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus  (c+96+i*1,"BDMAs2m low_addr_fifo logic_ram",(i+0),1,0);}}
	vcdp->declBit  (c+119,"BDMAs2m low_bytes_fifo io_push_valid",-1);
	vcdp->declBit  (c+45,"BDMAs2m low_bytes_fifo io_push_ready",-1);
	vcdp->declBus  (c+59,"BDMAs2m low_bytes_fifo io_push_payload",-1,1,0);
	vcdp->declBit  (c+20,"BDMAs2m low_bytes_fifo io_pop_valid",-1);
	vcdp->declBit  (c+184,"BDMAs2m low_bytes_fifo io_pop_ready",-1);
	vcdp->declBus  (c+66,"BDMAs2m low_bytes_fifo io_pop_payload",-1,1,0);
	vcdp->declBit  (c+191,"BDMAs2m low_bytes_fifo io_flush",-1);
	vcdp->declBus  (c+5,"BDMAs2m low_bytes_fifo io_occupancy",-1,3,0);
	vcdp->declBus  (c+6,"BDMAs2m low_bytes_fifo io_availability",-1,3,0);
	vcdp->declBit  (c+180,"BDMAs2m low_bytes_fifo clk",-1);
	vcdp->declBit  (c+181,"BDMAs2m low_bytes_fifo reset",-1);
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:528
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:529
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:530
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:531
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:532
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:533
	// Tracing: BDMAs2m low_bytes_fifo _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:534
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_ram_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:535
	// Tracing: BDMAs2m low_bytes_fifo _zz_io_availability // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:536
	// Tracing: BDMAs2m low_bytes_fifo _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:537
	vcdp->declBit  (c+54,"BDMAs2m low_bytes_fifo logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+191,"BDMAs2m low_bytes_fifo logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+55,"BDMAs2m low_bytes_fifo logic_pushPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+139,"BDMAs2m low_bytes_fifo logic_pushPtr_value",-1,2,0);
	vcdp->declBit  (c+140,"BDMAs2m low_bytes_fifo logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+25,"BDMAs2m low_bytes_fifo logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+36,"BDMAs2m low_bytes_fifo logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+191,"BDMAs2m low_bytes_fifo logic_popPtr_willClear",-1);
	vcdp->declBus  (c+37,"BDMAs2m low_bytes_fifo logic_popPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+141,"BDMAs2m low_bytes_fifo logic_popPtr_value",-1,2,0);
	vcdp->declBit  (c+142,"BDMAs2m low_bytes_fifo logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+18,"BDMAs2m low_bytes_fifo logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+14,"BDMAs2m low_bytes_fifo logic_ptrMatch",-1);
	vcdp->declBit  (c+143,"BDMAs2m low_bytes_fifo logic_risingOccupancy",-1);
	vcdp->declBit  (c+56,"BDMAs2m low_bytes_fifo logic_pushing",-1);
	vcdp->declBit  (c+38,"BDMAs2m low_bytes_fifo logic_popping",-1);
	vcdp->declBit  (c+15,"BDMAs2m low_bytes_fifo logic_empty",-1);
	vcdp->declBit  (c+57,"BDMAs2m low_bytes_fifo logic_full",-1);
	// Tracing: BDMAs2m low_bytes_fifo _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:556
	vcdp->declBit  (c+41,"BDMAs2m low_bytes_fifo when_Stream_l933",-1);
	vcdp->declBus  (c+144,"BDMAs2m low_bytes_fifo logic_ptrDif",-1,2,0);
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus  (c+104+i*1,"BDMAs2m low_bytes_fifo logic_ram",(i+0),1,0);}}
    }
}

void VBDMAs2m::traceFullThis__1(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(((((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy) 
				& (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch)) 
			       << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
					       - (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))))),4);
	vcdp->fullBus  (c+2,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch)) 
			       << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value) 
					       - (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))))),4);
	vcdp->fullBus  (c+3,(((((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy) 
				& (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
			       << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
					       - (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value))))),4);
	vcdp->fullBus  (c+4,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
			       << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
					       - (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value))))),4);
	vcdp->fullBus  (c+5,(((((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy) 
				& (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
			       << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
					       - (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value))))),4);
	vcdp->fullBus  (c+6,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
			       << 3U) | (7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
					       - (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))))),4);
	vcdp->fullArray(c+7,(vlTOPp->BDMAs2m__DOT__s2m_cch_state_string),72);
	vcdp->fullBit  (c+10,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+11,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+12,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+13,(((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+14,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+15,(((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+16,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+17,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+18,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+19,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
					 & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
				     & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
					   & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full))))))));
	vcdp->fullBit  (c+20,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
					 & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
				     & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
					   & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full))))))));
	vcdp->fullBit  (c+21,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
			       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+22,((((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)) 
				& (3U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) 
			       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid)))));
	vcdp->fullBit  (c+23,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+24,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+25,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+26,(vlTOPp->BDMAs2m__DOT__s2m_cch_fire));
	vcdp->fullBit  (c+27,(vlTOPp->BDMAs2m__DOT__dma_aw_fire_2));
	vcdp->fullBit  (c+28,(vlTOPp->BDMAs2m__DOT__dma_w_fire));
	vcdp->fullBit  (c+29,(vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire));
	vcdp->fullBit  (c+30,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+31,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->fullBit  (c+32,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping));
	vcdp->fullBit  (c+33,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+34,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->fullBit  (c+35,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping));
	vcdp->fullBit  (c+36,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+37,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->fullBit  (c+38,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping));
	vcdp->fullBit  (c+39,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1) 
			       != (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping))));
	vcdp->fullBit  (c+40,(((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) 
			       != (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping))));
	vcdp->fullBit  (c+41,(((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) 
			       != (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping))));
	vcdp->fullBit  (c+42,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+43,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid));
	vcdp->fullBit  (c+44,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+45,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+46,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1));
	vcdp->fullBit  (c+47,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+48,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->fullBit  (c+49,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full));
	vcdp->fullBit  (c+50,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+51,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->fullBit  (c+52,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing));
	vcdp->fullBit  (c+53,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full));
	vcdp->fullBit  (c+54,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+55,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->fullBit  (c+56,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing));
	vcdp->fullBit  (c+57,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full));
	vcdp->fullBus  (c+58,((3U & vlTOPp->BDMAs2m__DOT__cch_address)),2);
	vcdp->fullBus  (c+59,((3U & ((IData)(1U) + 
				     (~ (vlTOPp->BDMAs2m__DOT__trans_bytes_cnt 
					 + vlTOPp->BDMAs2m__DOT__cch_address))))),2);
	vcdp->fullBus  (c+60,((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0)),32);
	vcdp->fullBus  (c+61,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					       >> 0x20U)))),4);
	vcdp->fullBus  (c+62,((0xffU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
						>> 0x24U)))),8);
	vcdp->fullBus  (c+63,((7U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					     >> 0x2cU)))),3);
	vcdp->fullBus  (c+64,((3U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					     >> 0x2fU)))),2);
	vcdp->fullBus  (c+65,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
	vcdp->fullBus  (c+66,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
	vcdp->fullBus  (c+67,(vlTOPp->BDMAs2m__DOT__cch_address),32);
	vcdp->fullBus  (c+68,(vlTOPp->BDMAs2m__DOT__cch_burst_type),2);
	vcdp->fullBus  (c+69,(vlTOPp->BDMAs2m__DOT__cch_id),4);
	vcdp->fullBus  (c+70,(vlTOPp->BDMAs2m__DOT__trans_bytes_cnt),30);
	vcdp->fullBus  (c+71,(vlTOPp->BDMAs2m__DOT__s2m_aw_len),8);
	vcdp->fullBus  (c+72,((0xfffffffcU & vlTOPp->BDMAs2m__DOT__cch_address)),32);
	vcdp->fullBit  (c+73,((0U != (0xfffffU & (((IData)(0x40U) 
						   + 
						   (0xfffU 
						    & vlTOPp->BDMAs2m__DOT__cch_address)) 
						  >> 0xcU)))));
	vcdp->fullBus  (c+74,(vlTOPp->BDMAs2m__DOT__s2m_w_data),32);
	vcdp->fullBus  (c+75,(vlTOPp->BDMAs2m__DOT__s2m_w_strb),4);
	vcdp->fullBus  (c+76,(vlTOPp->BDMAs2m__DOT__w_residual_data),32);
	vcdp->fullBus  (c+77,(vlTOPp->BDMAs2m__DOT__w_residual_strb),4);
	vcdp->fullBus  (c+78,(vlTOPp->BDMAs2m__DOT__strb_mask),4);
	vcdp->fullBus  (c+79,(vlTOPp->BDMAs2m__DOT__bytes_shift),2);
	vcdp->fullQuad (c+80,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[0]),49);
	vcdp->fullQuad (c+82,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[1]),49);
	vcdp->fullQuad (c+84,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[2]),49);
	vcdp->fullQuad (c+86,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[3]),49);
	vcdp->fullQuad (c+88,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[4]),49);
	vcdp->fullQuad (c+90,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[5]),49);
	vcdp->fullQuad (c+92,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[6]),49);
	vcdp->fullQuad (c+94,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[7]),49);
	vcdp->fullBus  (c+96,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
	vcdp->fullBus  (c+97,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
	vcdp->fullBus  (c+98,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
	vcdp->fullBus  (c+99,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
	vcdp->fullBus  (c+100,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
	vcdp->fullBus  (c+101,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
	vcdp->fullBus  (c+102,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
	vcdp->fullBus  (c+103,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
	vcdp->fullBus  (c+104,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
	vcdp->fullBus  (c+105,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
	vcdp->fullBus  (c+106,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
	vcdp->fullBus  (c+107,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
	vcdp->fullBus  (c+108,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
	vcdp->fullBus  (c+109,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
	vcdp->fullBus  (c+110,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
	vcdp->fullBus  (c+111,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
	vcdp->fullBit  (c+112,((0x40U >= (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
					  + (3U & vlTOPp->BDMAs2m__DOT__cch_address)))));
	vcdp->fullBit  (c+113,((0U != (0xfffffU & (
						   ((0xfffU 
						     & vlTOPp->BDMAs2m__DOT__cch_address) 
						    + 
						    (0xfffU 
						     & vlTOPp->BDMAs2m__DOT__cch_total_bytes)) 
						   >> 0xcU)))));
	vcdp->fullBus  (c+114,(vlTOPp->BDMAs2m__DOT__s2m_cch_state),2);
	vcdp->fullBus  (c+115,(vlTOPp->BDMAs2m__DOT__s2m_w_state),2);
	vcdp->fullBit  (c+116,(vlTOPp->BDMAs2m__DOT__s2m_aw_valve));
	vcdp->fullBit  (c+117,(vlTOPp->BDMAs2m__DOT__s2m_data_valve));
	vcdp->fullBit  (c+118,(vlTOPp->BDMAs2m__DOT__cch_ready));
	vcdp->fullBit  (c+119,(vlTOPp->BDMAs2m__DOT__s2m_aw_valid));
	vcdp->fullBit  (c+120,(vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec));
	vcdp->fullBit  (c+121,(vlTOPp->BDMAs2m__DOT__cycle_finished));
	vcdp->fullBit  (c+122,(vlTOPp->BDMAs2m__DOT__s2m_w_valid));
	vcdp->fullBit  (c+123,(vlTOPp->BDMAs2m__DOT__s2m_b_ready));
	vcdp->fullBit  (c+124,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))));
	vcdp->fullQuad (c+125,(((2U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
				 ? ((1U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
				     ? VL_ULL(0x44524f5020)
				     : VL_ULL(0x5245535020))
				 : ((1U & (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
				     ? VL_ULL(0x4255525354)
				     : VL_ULL(0x49444c4520)))),40);
	vcdp->fullBus  (c+127,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value),3);
	vcdp->fullBit  (c+128,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+129,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value),3);
	vcdp->fullBit  (c+130,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+131,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+132,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
				      - (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->fullBus  (c+133,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
	vcdp->fullBit  (c+134,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+135,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
	vcdp->fullBit  (c+136,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+137,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+138,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
				      - (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->fullBus  (c+139,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
	vcdp->fullBit  (c+140,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+141,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
	vcdp->fullBit  (c+142,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+143,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+144,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
				      - (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->fullBus  (c+145,(vlTOPp->BDMAs2m__DOT__cch_total_bytes),30);
	vcdp->fullBit  (c+146,((0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes)));
	vcdp->fullBus  (c+147,(vlTOPp->BDMAs2m__DOT__s2m_axis_len),8);
	vcdp->fullBit  (c+148,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))));
	vcdp->fullBit  (c+149,(vlTOPp->dma_aw_valid));
	vcdp->fullBit  (c+150,(vlTOPp->dma_aw_ready));
	vcdp->fullBus  (c+151,(vlTOPp->dma_aw_payload_addr),32);
	vcdp->fullBus  (c+152,(vlTOPp->dma_aw_payload_id),4);
	vcdp->fullBus  (c+153,(vlTOPp->dma_aw_payload_len),8);
	vcdp->fullBus  (c+154,(vlTOPp->dma_aw_payload_size),3);
	vcdp->fullBus  (c+155,(vlTOPp->dma_aw_payload_burst),2);
	vcdp->fullBit  (c+156,(vlTOPp->dma_w_valid));
	vcdp->fullBit  (c+157,(vlTOPp->dma_w_ready));
	vcdp->fullBus  (c+158,(vlTOPp->dma_w_payload_data),32);
	vcdp->fullBus  (c+159,(vlTOPp->dma_w_payload_strb),4);
	vcdp->fullBit  (c+160,(vlTOPp->dma_w_payload_last));
	vcdp->fullBit  (c+161,(vlTOPp->dma_b_valid));
	vcdp->fullBit  (c+162,(vlTOPp->dma_b_ready));
	vcdp->fullBus  (c+163,(vlTOPp->dma_b_payload_id),4);
	vcdp->fullBus  (c+164,(vlTOPp->dma_b_payload_resp),2);
	vcdp->fullBit  (c+165,(vlTOPp->s2m_data_stream_valid));
	vcdp->fullBit  (c+166,(vlTOPp->s2m_data_stream_ready));
	vcdp->fullBus  (c+167,(vlTOPp->s2m_data_stream_payload_data),32);
	vcdp->fullBus  (c+168,(vlTOPp->s2m_data_stream_payload_id),4);
	vcdp->fullBus  (c+169,(vlTOPp->s2m_data_stream_payload_strb),4);
	vcdp->fullBus  (c+170,(vlTOPp->s2m_data_stream_payload_keep_),4);
	vcdp->fullBit  (c+171,(vlTOPp->s2m_data_stream_payload_last));
    }
}

void VBDMAs2m::traceFullThis__13(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+172,(vlTOPp->s2m_reset));
	vcdp->fullBit  (c+173,(vlTOPp->s2m_cch_valid));
	vcdp->fullBit  (c+174,(vlTOPp->s2m_cch_ready));
	vcdp->fullBus  (c+175,(vlTOPp->s2m_cch_payload_desc_start_addr),32);
	vcdp->fullBus  (c+176,(vlTOPp->s2m_cch_payload_desc_total_bytes),30);
	vcdp->fullBus  (c+177,(vlTOPp->s2m_cch_payload_desc_burst),2);
	vcdp->fullBus  (c+178,(vlTOPp->s2m_cch_payload_desc_id),4);
	vcdp->fullBit  (c+179,(vlTOPp->s2m_intr));
	vcdp->fullBit  (c+180,(vlTOPp->clk));
	vcdp->fullBit  (c+181,(vlTOPp->reset));
	vcdp->fullBit  (c+182,(((IData)(vlTOPp->dma_aw_ready) 
				& (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valve))));
	vcdp->fullBit  (c+183,(((IData)(vlTOPp->s2m_reset) 
				& (IData)(vlTOPp->BDMAs2m__DOT__cycle_finished))));
	vcdp->fullBit  (c+184,(((IData)(vlTOPp->dma_aw_valid) 
				& (IData)(vlTOPp->dma_aw_ready))));
	vcdp->fullBit  (c+185,(((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len)) 
				& (IData)(vlTOPp->s2m_data_stream_valid))));
	vcdp->fullBit  (c+186,(((IData)(vlTOPp->dma_b_valid) 
				& (IData)(vlTOPp->dma_b_ready))));
	vcdp->fullBit  (c+187,(((IData)(vlTOPp->s2m_data_stream_valid) 
				& (IData)(vlTOPp->s2m_data_stream_ready))));
	vcdp->fullBit  (c+188,((((IData)(vlTOPp->s2m_data_stream_valid) 
				 & (IData)(vlTOPp->s2m_data_stream_ready)) 
				& (IData)(vlTOPp->s2m_data_stream_payload_last))));
	vcdp->fullBus  (c+189,(0xfU),4);
	vcdp->fullBus  (c+190,(2U),3);
	vcdp->fullBit  (c+191,(0U));
    }
}
