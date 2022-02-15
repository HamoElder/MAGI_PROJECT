// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBDMAm2s__Syms.h"


//======================

void VBDMAm2s::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VBDMAm2s::traceInit, &VBDMAm2s::traceFull, &VBDMAm2s::traceChg, this);
}
void VBDMAm2s::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VBDMAm2s* t=(VBDMAm2s*)userthis;
    VBDMAm2s__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VBDMAm2s::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VBDMAm2s* t=(VBDMAm2s*)userthis;
    VBDMAm2s__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VBDMAm2s::traceInitThis(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VBDMAm2s::traceFullThis(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
	vlTOPp->traceFullThis__14(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VBDMAm2s::traceInitThis__1(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+236,"dma_ar_valid",-1);
	vcdp->declBit  (c+237,"dma_ar_ready",-1);
	vcdp->declBus  (c+238,"dma_ar_payload_addr",-1,31,0);
	vcdp->declBus  (c+239,"dma_ar_payload_id",-1,3,0);
	vcdp->declBus  (c+240,"dma_ar_payload_len",-1,7,0);
	vcdp->declBus  (c+241,"dma_ar_payload_size",-1,2,0);
	vcdp->declBus  (c+242,"dma_ar_payload_burst",-1,1,0);
	vcdp->declBit  (c+243,"dma_r_valid",-1);
	vcdp->declBit  (c+244,"dma_r_ready",-1);
	vcdp->declBus  (c+245,"dma_r_payload_data",-1,31,0);
	vcdp->declBus  (c+246,"dma_r_payload_id",-1,3,0);
	vcdp->declBus  (c+247,"dma_r_payload_resp",-1,1,0);
	vcdp->declBit  (c+248,"dma_r_payload_last",-1);
	vcdp->declBit  (c+249,"m2s_data_stream_valid",-1);
	vcdp->declBit  (c+250,"m2s_data_stream_ready",-1);
	vcdp->declBus  (c+251,"m2s_data_stream_payload_data",-1,31,0);
	vcdp->declBus  (c+252,"m2s_data_stream_payload_id",-1,3,0);
	vcdp->declBus  (c+253,"m2s_data_stream_payload_strb",-1,3,0);
	vcdp->declBus  (c+254,"m2s_data_stream_payload_keep_",-1,3,0);
	vcdp->declBit  (c+255,"m2s_data_stream_payload_last",-1);
	vcdp->declBit  (c+256,"m2s_reset",-1);
	vcdp->declBit  (c+257,"m2s_cch_valid",-1);
	vcdp->declBit  (c+258,"m2s_cch_ready",-1);
	vcdp->declBus  (c+259,"m2s_cch_payload_desc_start_addr",-1,31,0);
	vcdp->declBus  (c+260,"m2s_cch_payload_desc_total_bytes",-1,29,0);
	vcdp->declBus  (c+261,"m2s_cch_payload_desc_burst",-1,1,0);
	vcdp->declBus  (c+262,"m2s_cch_payload_desc_id",-1,3,0);
	vcdp->declBit  (c+263,"m2s_intr",-1);
	vcdp->declBit  (c+264,"clk",-1);
	vcdp->declBit  (c+265,"reset",-1);
	vcdp->declBit  (c+236,"BDMAm2s dma_ar_valid",-1);
	vcdp->declBit  (c+237,"BDMAm2s dma_ar_ready",-1);
	vcdp->declBus  (c+238,"BDMAm2s dma_ar_payload_addr",-1,31,0);
	vcdp->declBus  (c+239,"BDMAm2s dma_ar_payload_id",-1,3,0);
	vcdp->declBus  (c+240,"BDMAm2s dma_ar_payload_len",-1,7,0);
	vcdp->declBus  (c+241,"BDMAm2s dma_ar_payload_size",-1,2,0);
	vcdp->declBus  (c+242,"BDMAm2s dma_ar_payload_burst",-1,1,0);
	vcdp->declBit  (c+243,"BDMAm2s dma_r_valid",-1);
	vcdp->declBit  (c+244,"BDMAm2s dma_r_ready",-1);
	vcdp->declBus  (c+245,"BDMAm2s dma_r_payload_data",-1,31,0);
	vcdp->declBus  (c+246,"BDMAm2s dma_r_payload_id",-1,3,0);
	vcdp->declBus  (c+247,"BDMAm2s dma_r_payload_resp",-1,1,0);
	vcdp->declBit  (c+248,"BDMAm2s dma_r_payload_last",-1);
	vcdp->declBit  (c+249,"BDMAm2s m2s_data_stream_valid",-1);
	vcdp->declBit  (c+250,"BDMAm2s m2s_data_stream_ready",-1);
	vcdp->declBus  (c+251,"BDMAm2s m2s_data_stream_payload_data",-1,31,0);
	vcdp->declBus  (c+252,"BDMAm2s m2s_data_stream_payload_id",-1,3,0);
	vcdp->declBus  (c+253,"BDMAm2s m2s_data_stream_payload_strb",-1,3,0);
	vcdp->declBus  (c+254,"BDMAm2s m2s_data_stream_payload_keep_",-1,3,0);
	vcdp->declBit  (c+255,"BDMAm2s m2s_data_stream_payload_last",-1);
	vcdp->declBit  (c+256,"BDMAm2s m2s_reset",-1);
	vcdp->declBit  (c+257,"BDMAm2s m2s_cch_valid",-1);
	vcdp->declBit  (c+258,"BDMAm2s m2s_cch_ready",-1);
	vcdp->declBus  (c+259,"BDMAm2s m2s_cch_payload_desc_start_addr",-1,31,0);
	vcdp->declBus  (c+260,"BDMAm2s m2s_cch_payload_desc_total_bytes",-1,29,0);
	vcdp->declBus  (c+261,"BDMAm2s m2s_cch_payload_desc_burst",-1,1,0);
	vcdp->declBus  (c+262,"BDMAm2s m2s_cch_payload_desc_id",-1,3,0);
	vcdp->declBit  (c+263,"BDMAm2s m2s_intr",-1);
	vcdp->declBit  (c+264,"BDMAm2s clk",-1);
	vcdp->declBit  (c+265,"BDMAm2s reset",-1);
	vcdp->declBit  (c+266,"BDMAm2s m2s_ar_fifo_io_pop_ready",-1);
	vcdp->declBus  (c+73,"BDMAm2s low_addr_fifo_io_push_payload",-1,1,0);
	vcdp->declBus  (c+74,"BDMAm2s low_bytes_fifo_io_push_payload",-1,1,0);
	vcdp->declBit  (c+267,"BDMAm2s m2s_data_fifo_io_push_valid",-1);
	vcdp->declBus  (c+125,"BDMAm2s m2s_data_fifo_io_push_payload_strb",-1,3,0);
	vcdp->declBus  (c+125,"BDMAm2s m2s_data_fifo_io_push_payload_keep_",-1,3,0);
	vcdp->declBit  (c+20,"BDMAm2s m2s_data_fifo_io_push_payload_last",-1);
	vcdp->declBit  (c+54,"BDMAm2s m2s_ar_fifo_io_push_ready",-1);
	vcdp->declBit  (c+55,"BDMAm2s m2s_ar_fifo_io_pop_valid",-1);
	vcdp->declBus  (c+75,"BDMAm2s m2s_ar_fifo_io_pop_payload_addr",-1,31,0);
	vcdp->declBus  (c+76,"BDMAm2s m2s_ar_fifo_io_pop_payload_id",-1,3,0);
	vcdp->declBus  (c+77,"BDMAm2s m2s_ar_fifo_io_pop_payload_len",-1,7,0);
	vcdp->declBus  (c+78,"BDMAm2s m2s_ar_fifo_io_pop_payload_size",-1,2,0);
	vcdp->declBus  (c+79,"BDMAm2s m2s_ar_fifo_io_pop_payload_burst",-1,1,0);
	vcdp->declBus  (c+1,"BDMAm2s m2s_ar_fifo_io_occupancy",-1,3,0);
	vcdp->declBus  (c+2,"BDMAm2s m2s_ar_fifo_io_availability",-1,3,0);
	vcdp->declBit  (c+56,"BDMAm2s low_addr_fifo_io_push_ready",-1);
	vcdp->declBit  (c+26,"BDMAm2s low_addr_fifo_io_pop_valid",-1);
	vcdp->declBus  (c+80,"BDMAm2s low_addr_fifo_io_pop_payload",-1,1,0);
	vcdp->declBus  (c+3,"BDMAm2s low_addr_fifo_io_occupancy",-1,3,0);
	vcdp->declBus  (c+4,"BDMAm2s low_addr_fifo_io_availability",-1,3,0);
	vcdp->declBit  (c+57,"BDMAm2s low_bytes_fifo_io_push_ready",-1);
	vcdp->declBit  (c+27,"BDMAm2s low_bytes_fifo_io_pop_valid",-1);
	vcdp->declBus  (c+81,"BDMAm2s low_bytes_fifo_io_pop_payload",-1,1,0);
	vcdp->declBus  (c+5,"BDMAm2s low_bytes_fifo_io_occupancy",-1,3,0);
	vcdp->declBus  (c+6,"BDMAm2s low_bytes_fifo_io_availability",-1,3,0);
	vcdp->declBit  (c+58,"BDMAm2s m2s_data_fifo_io_push_ready",-1);
	vcdp->declBit  (c+59,"BDMAm2s m2s_data_fifo_io_pop_valid",-1);
	vcdp->declBus  (c+163,"BDMAm2s m2s_data_fifo_io_pop_payload_data",-1,31,0);
	vcdp->declBus  (c+164,"BDMAm2s m2s_data_fifo_io_pop_payload_id",-1,3,0);
	vcdp->declBus  (c+165,"BDMAm2s m2s_data_fifo_io_pop_payload_strb",-1,3,0);
	vcdp->declBus  (c+166,"BDMAm2s m2s_data_fifo_io_pop_payload_keep_",-1,3,0);
	vcdp->declBit  (c+167,"BDMAm2s m2s_data_fifo_io_pop_payload_last",-1);
	vcdp->declBus  (c+7,"BDMAm2s m2s_data_fifo_io_occupancy",-1,5,0);
	vcdp->declBus  (c+8,"BDMAm2s m2s_data_fifo_io_availability",-1,5,0);
	// Tracing: BDMAm2s _zz_aligned_address // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:84
	// Tracing: BDMAm2s _zz_when_BDMAm2s_l102 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:85
	// Tracing: BDMAm2s _zz_when_BDMAm2s_l102_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:86
	// Tracing: BDMAm2s _zz_trans_bytes_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:87
	// Tracing: BDMAm2s _zz_m2s_ar_len // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:88
	// Tracing: BDMAm2s _zz_m2s_ar_len_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:89
	// Tracing: BDMAm2s _zz_m2s_ar_len_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:90
	// Tracing: BDMAm2s _zz_m2s_ar_len_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:91
	// Tracing: BDMAm2s _zz_cch_address // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:92
	// Tracing: BDMAm2s _zz_when_BDMAm2s_l133 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:93
	// Tracing: BDMAm2s _zz_when_BDMAm2s_l133_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:94
	// Tracing: BDMAm2s _zz_when_BDMAm2s_l137 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:95
	// Tracing: BDMAm2s _zz_when_BDMAm2s_l137_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:96
	// Tracing: BDMAm2s _zz_when_BDMAm2s_l137_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:97
	// Tracing: BDMAm2s _zz_when_BDMAm2s_l137_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:98
	// Tracing: BDMAm2s _zz_when_BDMAm2s_l137_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:99
	// Tracing: BDMAm2s _zz_trans_bytes_cnt_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:100
	// Tracing: BDMAm2s _zz_when_BDMAm2s_l149 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:101
	// Tracing: BDMAm2s _zz_when_BDMAm2s_l149_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:102
	// Tracing: BDMAm2s _zz_trans_bytes_cnt_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:103
	// Tracing: BDMAm2s _zz_trans_bytes_cnt_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:104
	// Tracing: BDMAm2s _zz_trans_bytes_cnt_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:105
	// Tracing: BDMAm2s _zz_m2s_ar_len_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:106
	// Tracing: BDMAm2s _zz_m2s_ar_len_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:107
	// Tracing: BDMAm2s _zz_m2s_ar_len_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:108
	// Tracing: BDMAm2s _zz_m2s_ar_len_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:109
	// Tracing: BDMAm2s _zz_io_push_payload // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:110
	// Tracing: BDMAm2s _zz_keep_strb_mask // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:111
	vcdp->declBus  (c+128,"BDMAm2s m2s_cch_state",-1,1,0);
	vcdp->declBus  (c+129,"BDMAm2s m2s_r_state",-1,0,0);
	vcdp->declBit  (c+130,"BDMAm2s m2s_ar_valve",-1);
	vcdp->declBit  (c+131,"BDMAm2s cch_ready",-1);
	vcdp->declBus  (c+168,"BDMAm2s cch_total_bytes",-1,29,0);
	vcdp->declBus  (c+82,"BDMAm2s cch_address",-1,31,0);
	vcdp->declBus  (c+83,"BDMAm2s cch_burst_type",-1,1,0);
	vcdp->declBus  (c+84,"BDMAm2s cch_id",-1,3,0);
	vcdp->declBus  (c+85,"BDMAm2s trans_bytes_cnt",-1,29,0);
	vcdp->declBus  (c+86,"BDMAm2s m2s_ar_len",-1,7,0);
	vcdp->declBit  (c+132,"BDMAm2s m2s_ar_valid",-1);
	vcdp->declBit  (c+133,"BDMAm2s m2s_ar_halt_exec",-1);
	vcdp->declBus  (c+87,"BDMAm2s aligned_address",-1,31,0);
	vcdp->declBit  (c+134,"BDMAm2s cycle_finished",-1);
	vcdp->declBit  (c+32,"BDMAm2s m2s_cch_fire",-1);
	vcdp->declBit  (c+169,"BDMAm2s when_BDMAm2s_l86",-1);
	vcdp->declBit  (c+60,"BDMAm2s m2s_ar_fifo_io_push_fire",-1);
	vcdp->declBit  (c+28,"BDMAm2s m2s_ar_fifo_io_push_fire_1",-1);
	vcdp->declBit  (c+126,"BDMAm2s when_BDMAm2s_l102",-1);
	vcdp->declBit  (c+169,"BDMAm2s when_BDMAm2s_l116",-1);
	vcdp->declBit  (c+60,"BDMAm2s m2s_ar_fifo_io_push_fire_2",-1);
	vcdp->declBit  (c+28,"BDMAm2s m2s_ar_fifo_io_push_fire_3",-1);
	vcdp->declBit  (c+126,"BDMAm2s when_BDMAm2s_l133",-1);
	vcdp->declBit  (c+127,"BDMAm2s when_BDMAm2s_l137",-1);
	vcdp->declBit  (c+88,"BDMAm2s when_BDMAm2s_l149",-1);
	vcdp->declBit  (c+268,"BDMAm2s when_BDMAm2s_l161",-1);
	// Tracing: BDMAm2s _zz_dma_ar_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:138
	vcdp->declBit  (c+269,"BDMAm2s dma_ar_fire",-1);
	vcdp->declBit  (c+269,"BDMAm2s dma_ar_fire_1",-1);
	vcdp->declBit  (c+135,"BDMAm2s m2s_r_valve",-1);
	vcdp->declBus  (c+170,"BDMAm2s m2s_axis_len",-1,7,0);
	vcdp->declBus  (c+89,"BDMAm2s m2s_axis_id",-1,3,0);
	vcdp->declBus  (c+90,"BDMAm2s m2s_axis_strb",-1,3,0);
	vcdp->declBus  (c+91,"BDMAm2s m2s_axis_keep",-1,3,0);
	vcdp->declBus  (c+92,"BDMAm2s keep_strb_mask",-1,3,0);
	vcdp->declBus  (c+272,"BDMAm2s keep_strb_full",-1,3,0);
	vcdp->declBit  (c+33,"BDMAm2s dma_ar_fire_2",-1);
	vcdp->declBit  (c+34,"BDMAm2s dma_r_fire",-1);
	vcdp->declBit  (c+171,"BDMAm2s when_BDMAm2s_l232",-1);
	vcdp->declBit  (c+136,"BDMAm2s when_BDMAm2s_l249",-1);
	vcdp->declBit  (c+270,"BDMAm2s m2s_data_fifo_io_pop_fire",-1);
	vcdp->declBit  (c+271,"BDMAm2s when_BDMAm2s_l251",-1);
	vcdp->declArray(c+9,"BDMAm2s m2s_cch_state_string",-1,71,0);
	vcdp->declQuad (c+137,"BDMAm2s m2s_r_state_string",-1,39,0);
	vcdp->declBit  (c+132,"BDMAm2s m2s_ar_fifo io_push_valid",-1);
	vcdp->declBit  (c+54,"BDMAm2s m2s_ar_fifo io_push_ready",-1);
	vcdp->declBus  (c+87,"BDMAm2s m2s_ar_fifo io_push_payload_addr",-1,31,0);
	vcdp->declBus  (c+84,"BDMAm2s m2s_ar_fifo io_push_payload_id",-1,3,0);
	vcdp->declBus  (c+86,"BDMAm2s m2s_ar_fifo io_push_payload_len",-1,7,0);
	vcdp->declBus  (c+273,"BDMAm2s m2s_ar_fifo io_push_payload_size",-1,2,0);
	vcdp->declBus  (c+83,"BDMAm2s m2s_ar_fifo io_push_payload_burst",-1,1,0);
	vcdp->declBit  (c+55,"BDMAm2s m2s_ar_fifo io_pop_valid",-1);
	vcdp->declBit  (c+266,"BDMAm2s m2s_ar_fifo io_pop_ready",-1);
	vcdp->declBus  (c+75,"BDMAm2s m2s_ar_fifo io_pop_payload_addr",-1,31,0);
	vcdp->declBus  (c+76,"BDMAm2s m2s_ar_fifo io_pop_payload_id",-1,3,0);
	vcdp->declBus  (c+77,"BDMAm2s m2s_ar_fifo io_pop_payload_len",-1,7,0);
	vcdp->declBus  (c+78,"BDMAm2s m2s_ar_fifo io_pop_payload_size",-1,2,0);
	vcdp->declBus  (c+79,"BDMAm2s m2s_ar_fifo io_pop_payload_burst",-1,1,0);
	vcdp->declBit  (c+274,"BDMAm2s m2s_ar_fifo io_flush",-1);
	vcdp->declBus  (c+1,"BDMAm2s m2s_ar_fifo io_occupancy",-1,3,0);
	vcdp->declBus  (c+2,"BDMAm2s m2s_ar_fifo io_availability",-1,3,0);
	vcdp->declBit  (c+264,"BDMAm2s m2s_ar_fifo clk",-1);
	vcdp->declBit  (c+265,"BDMAm2s m2s_ar_fifo reset",-1);
	// Tracing: BDMAm2s m2s_ar_fifo _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:832
	// Tracing: BDMAm2s m2s_ar_fifo _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:833
	// Tracing: BDMAm2s m2s_ar_fifo _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:834
	// Tracing: BDMAm2s m2s_ar_fifo _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:835
	// Tracing: BDMAm2s m2s_ar_fifo _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:836
	// Tracing: BDMAm2s m2s_ar_fifo _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:837
	// Tracing: BDMAm2s m2s_ar_fifo _zz__zz_io_pop_payload_addr // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:838
	// Tracing: BDMAm2s m2s_ar_fifo _zz_logic_ram_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:839
	// Tracing: BDMAm2s m2s_ar_fifo _zz_io_availability // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:840
	// Tracing: BDMAm2s m2s_ar_fifo _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:841
	vcdp->declBit  (c+67,"BDMAm2s m2s_ar_fifo logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+274,"BDMAm2s m2s_ar_fifo logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+68,"BDMAm2s m2s_ar_fifo logic_pushPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+139,"BDMAm2s m2s_ar_fifo logic_pushPtr_value",-1,2,0);
	vcdp->declBit  (c+140,"BDMAm2s m2s_ar_fifo logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+29,"BDMAm2s m2s_ar_fifo logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+35,"BDMAm2s m2s_ar_fifo logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+274,"BDMAm2s m2s_ar_fifo logic_popPtr_willClear",-1);
	vcdp->declBus  (c+36,"BDMAm2s m2s_ar_fifo logic_popPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+141,"BDMAm2s m2s_ar_fifo logic_popPtr_value",-1,2,0);
	vcdp->declBit  (c+142,"BDMAm2s m2s_ar_fifo logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+21,"BDMAm2s m2s_ar_fifo logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+12,"BDMAm2s m2s_ar_fifo logic_ptrMatch",-1);
	vcdp->declBit  (c+143,"BDMAm2s m2s_ar_fifo logic_risingOccupancy",-1);
	vcdp->declBit  (c+60,"BDMAm2s m2s_ar_fifo logic_pushing",-1);
	vcdp->declBit  (c+37,"BDMAm2s m2s_ar_fifo logic_popping",-1);
	vcdp->declBit  (c+13,"BDMAm2s m2s_ar_fifo logic_empty",-1);
	vcdp->declBit  (c+61,"BDMAm2s m2s_ar_fifo logic_full",-1);
	// Tracing: BDMAm2s m2s_ar_fifo _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:860
	// Tracing: BDMAm2s m2s_ar_fifo _zz_io_pop_payload_addr // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:861
	vcdp->declBit  (c+51,"BDMAm2s m2s_ar_fifo when_Stream_l933",-1);
	vcdp->declBus  (c+144,"BDMAm2s m2s_ar_fifo logic_ptrDif",-1,2,0);
	{int i; for (i=0; i<8; i++) {
		vcdp->declQuad (c+93+i*2,"BDMAm2s m2s_ar_fifo logic_ram",(i+0),48,0);}}
	vcdp->declBit  (c+132,"BDMAm2s low_addr_fifo io_push_valid",-1);
	vcdp->declBit  (c+56,"BDMAm2s low_addr_fifo io_push_ready",-1);
	vcdp->declBus  (c+73,"BDMAm2s low_addr_fifo io_push_payload",-1,1,0);
	vcdp->declBit  (c+26,"BDMAm2s low_addr_fifo io_pop_valid",-1);
	vcdp->declBit  (c+269,"BDMAm2s low_addr_fifo io_pop_ready",-1);
	vcdp->declBus  (c+80,"BDMAm2s low_addr_fifo io_pop_payload",-1,1,0);
	vcdp->declBit  (c+274,"BDMAm2s low_addr_fifo io_flush",-1);
	vcdp->declBus  (c+3,"BDMAm2s low_addr_fifo io_occupancy",-1,3,0);
	vcdp->declBus  (c+4,"BDMAm2s low_addr_fifo io_availability",-1,3,0);
	vcdp->declBit  (c+264,"BDMAm2s low_addr_fifo clk",-1);
	vcdp->declBit  (c+265,"BDMAm2s low_addr_fifo reset",-1);
	// Tracing: BDMAm2s low_addr_fifo _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:672
	// Tracing: BDMAm2s low_addr_fifo _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:673
	// Tracing: BDMAm2s low_addr_fifo _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:674
	// Tracing: BDMAm2s low_addr_fifo _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:675
	// Tracing: BDMAm2s low_addr_fifo _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:676
	// Tracing: BDMAm2s low_addr_fifo _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:677
	// Tracing: BDMAm2s low_addr_fifo _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:678
	// Tracing: BDMAm2s low_addr_fifo _zz_logic_ram_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:679
	// Tracing: BDMAm2s low_addr_fifo _zz_io_availability // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:680
	// Tracing: BDMAm2s low_addr_fifo _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:681
	vcdp->declBit  (c+69,"BDMAm2s low_addr_fifo logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+274,"BDMAm2s low_addr_fifo logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+70,"BDMAm2s low_addr_fifo logic_pushPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+145,"BDMAm2s low_addr_fifo logic_pushPtr_value",-1,2,0);
	vcdp->declBit  (c+146,"BDMAm2s low_addr_fifo logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+30,"BDMAm2s low_addr_fifo logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+38,"BDMAm2s low_addr_fifo logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+274,"BDMAm2s low_addr_fifo logic_popPtr_willClear",-1);
	vcdp->declBus  (c+39,"BDMAm2s low_addr_fifo logic_popPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+147,"BDMAm2s low_addr_fifo logic_popPtr_value",-1,2,0);
	vcdp->declBit  (c+148,"BDMAm2s low_addr_fifo logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+22,"BDMAm2s low_addr_fifo logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+14,"BDMAm2s low_addr_fifo logic_ptrMatch",-1);
	vcdp->declBit  (c+149,"BDMAm2s low_addr_fifo logic_risingOccupancy",-1);
	vcdp->declBit  (c+62,"BDMAm2s low_addr_fifo logic_pushing",-1);
	vcdp->declBit  (c+40,"BDMAm2s low_addr_fifo logic_popping",-1);
	vcdp->declBit  (c+15,"BDMAm2s low_addr_fifo logic_empty",-1);
	vcdp->declBit  (c+63,"BDMAm2s low_addr_fifo logic_full",-1);
	// Tracing: BDMAm2s low_addr_fifo _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:700
	vcdp->declBit  (c+52,"BDMAm2s low_addr_fifo when_Stream_l933",-1);
	vcdp->declBus  (c+150,"BDMAm2s low_addr_fifo logic_ptrDif",-1,2,0);
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus  (c+109+i*1,"BDMAm2s low_addr_fifo logic_ram",(i+0),1,0);}}
	vcdp->declBit  (c+132,"BDMAm2s low_bytes_fifo io_push_valid",-1);
	vcdp->declBit  (c+57,"BDMAm2s low_bytes_fifo io_push_ready",-1);
	vcdp->declBus  (c+74,"BDMAm2s low_bytes_fifo io_push_payload",-1,1,0);
	vcdp->declBit  (c+27,"BDMAm2s low_bytes_fifo io_pop_valid",-1);
	vcdp->declBit  (c+269,"BDMAm2s low_bytes_fifo io_pop_ready",-1);
	vcdp->declBus  (c+81,"BDMAm2s low_bytes_fifo io_pop_payload",-1,1,0);
	vcdp->declBit  (c+274,"BDMAm2s low_bytes_fifo io_flush",-1);
	vcdp->declBus  (c+5,"BDMAm2s low_bytes_fifo io_occupancy",-1,3,0);
	vcdp->declBus  (c+6,"BDMAm2s low_bytes_fifo io_availability",-1,3,0);
	vcdp->declBit  (c+264,"BDMAm2s low_bytes_fifo clk",-1);
	vcdp->declBit  (c+265,"BDMAm2s low_bytes_fifo reset",-1);
	// Tracing: BDMAm2s low_bytes_fifo _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:672
	// Tracing: BDMAm2s low_bytes_fifo _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:673
	// Tracing: BDMAm2s low_bytes_fifo _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:674
	// Tracing: BDMAm2s low_bytes_fifo _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:675
	// Tracing: BDMAm2s low_bytes_fifo _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:676
	// Tracing: BDMAm2s low_bytes_fifo _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:677
	// Tracing: BDMAm2s low_bytes_fifo _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:678
	// Tracing: BDMAm2s low_bytes_fifo _zz_logic_ram_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:679
	// Tracing: BDMAm2s low_bytes_fifo _zz_io_availability // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:680
	// Tracing: BDMAm2s low_bytes_fifo _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:681
	vcdp->declBit  (c+71,"BDMAm2s low_bytes_fifo logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+274,"BDMAm2s low_bytes_fifo logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+72,"BDMAm2s low_bytes_fifo logic_pushPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+151,"BDMAm2s low_bytes_fifo logic_pushPtr_value",-1,2,0);
	vcdp->declBit  (c+152,"BDMAm2s low_bytes_fifo logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+31,"BDMAm2s low_bytes_fifo logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+41,"BDMAm2s low_bytes_fifo logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+274,"BDMAm2s low_bytes_fifo logic_popPtr_willClear",-1);
	vcdp->declBus  (c+42,"BDMAm2s low_bytes_fifo logic_popPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+153,"BDMAm2s low_bytes_fifo logic_popPtr_value",-1,2,0);
	vcdp->declBit  (c+154,"BDMAm2s low_bytes_fifo logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+23,"BDMAm2s low_bytes_fifo logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+16,"BDMAm2s low_bytes_fifo logic_ptrMatch",-1);
	vcdp->declBit  (c+155,"BDMAm2s low_bytes_fifo logic_risingOccupancy",-1);
	vcdp->declBit  (c+64,"BDMAm2s low_bytes_fifo logic_pushing",-1);
	vcdp->declBit  (c+43,"BDMAm2s low_bytes_fifo logic_popping",-1);
	vcdp->declBit  (c+17,"BDMAm2s low_bytes_fifo logic_empty",-1);
	vcdp->declBit  (c+65,"BDMAm2s low_bytes_fifo logic_full",-1);
	// Tracing: BDMAm2s low_bytes_fifo _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:700
	vcdp->declBit  (c+53,"BDMAm2s low_bytes_fifo when_Stream_l933",-1);
	vcdp->declBus  (c+156,"BDMAm2s low_bytes_fifo logic_ptrDif",-1,2,0);
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus  (c+117+i*1,"BDMAm2s low_bytes_fifo logic_ram",(i+0),1,0);}}
	vcdp->declBit  (c+267,"BDMAm2s m2s_data_fifo io_push_valid",-1);
	vcdp->declBit  (c+58,"BDMAm2s m2s_data_fifo io_push_ready",-1);
	vcdp->declBus  (c+245,"BDMAm2s m2s_data_fifo io_push_payload_data",-1,31,0);
	vcdp->declBus  (c+89,"BDMAm2s m2s_data_fifo io_push_payload_id",-1,3,0);
	vcdp->declBus  (c+125,"BDMAm2s m2s_data_fifo io_push_payload_strb",-1,3,0);
	vcdp->declBus  (c+125,"BDMAm2s m2s_data_fifo io_push_payload_keep_",-1,3,0);
	vcdp->declBit  (c+20,"BDMAm2s m2s_data_fifo io_push_payload_last",-1);
	vcdp->declBit  (c+59,"BDMAm2s m2s_data_fifo io_pop_valid",-1);
	vcdp->declBit  (c+250,"BDMAm2s m2s_data_fifo io_pop_ready",-1);
	vcdp->declBus  (c+163,"BDMAm2s m2s_data_fifo io_pop_payload_data",-1,31,0);
	vcdp->declBus  (c+164,"BDMAm2s m2s_data_fifo io_pop_payload_id",-1,3,0);
	vcdp->declBus  (c+165,"BDMAm2s m2s_data_fifo io_pop_payload_strb",-1,3,0);
	vcdp->declBus  (c+166,"BDMAm2s m2s_data_fifo io_pop_payload_keep_",-1,3,0);
	vcdp->declBit  (c+167,"BDMAm2s m2s_data_fifo io_pop_payload_last",-1);
	vcdp->declBit  (c+274,"BDMAm2s m2s_data_fifo io_flush",-1);
	vcdp->declBus  (c+7,"BDMAm2s m2s_data_fifo io_occupancy",-1,5,0);
	vcdp->declBus  (c+8,"BDMAm2s m2s_data_fifo io_availability",-1,5,0);
	vcdp->declBit  (c+264,"BDMAm2s m2s_data_fifo clk",-1);
	vcdp->declBit  (c+265,"BDMAm2s m2s_data_fifo reset",-1);
	// Tracing: BDMAm2s m2s_data_fifo _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:512
	// Tracing: BDMAm2s m2s_data_fifo _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:513
	// Tracing: BDMAm2s m2s_data_fifo _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:514
	// Tracing: BDMAm2s m2s_data_fifo _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:515
	// Tracing: BDMAm2s m2s_data_fifo _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:516
	// Tracing: BDMAm2s m2s_data_fifo _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:517
	// Tracing: BDMAm2s m2s_data_fifo _zz__zz_io_pop_payload_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:518
	// Tracing: BDMAm2s m2s_data_fifo _zz_logic_ram_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:519
	// Tracing: BDMAm2s m2s_data_fifo _zz_io_availability // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:520
	// Tracing: BDMAm2s m2s_data_fifo _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:521
	vcdp->declBit  (c+44,"BDMAm2s m2s_data_fifo logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+274,"BDMAm2s m2s_data_fifo logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+45,"BDMAm2s m2s_data_fifo logic_pushPtr_valueNext",-1,4,0);
	vcdp->declBus  (c+157,"BDMAm2s m2s_data_fifo logic_pushPtr_value",-1,4,0);
	vcdp->declBit  (c+158,"BDMAm2s m2s_data_fifo logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+24,"BDMAm2s m2s_data_fifo logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+46,"BDMAm2s m2s_data_fifo logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+274,"BDMAm2s m2s_data_fifo logic_popPtr_willClear",-1);
	vcdp->declBus  (c+47,"BDMAm2s m2s_data_fifo logic_popPtr_valueNext",-1,4,0);
	vcdp->declBus  (c+159,"BDMAm2s m2s_data_fifo logic_popPtr_value",-1,4,0);
	vcdp->declBit  (c+160,"BDMAm2s m2s_data_fifo logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+25,"BDMAm2s m2s_data_fifo logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+18,"BDMAm2s m2s_data_fifo logic_ptrMatch",-1);
	vcdp->declBit  (c+161,"BDMAm2s m2s_data_fifo logic_risingOccupancy",-1);
	vcdp->declBit  (c+48,"BDMAm2s m2s_data_fifo logic_pushing",-1);
	vcdp->declBit  (c+49,"BDMAm2s m2s_data_fifo logic_popping",-1);
	vcdp->declBit  (c+19,"BDMAm2s m2s_data_fifo logic_empty",-1);
	vcdp->declBit  (c+66,"BDMAm2s m2s_data_fifo logic_full",-1);
	// Tracing: BDMAm2s m2s_data_fifo _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:540
	// Tracing: BDMAm2s m2s_data_fifo _zz_io_pop_payload_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAm2s.v:541
	vcdp->declBit  (c+50,"BDMAm2s m2s_data_fifo when_Stream_l933",-1);
	vcdp->declBus  (c+162,"BDMAm2s m2s_data_fifo logic_ptrDif",-1,4,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declQuad (c+172+i*2,"BDMAm2s m2s_data_fifo logic_ram",(i+0),44,0);}}
    }
}

void VBDMAm2s::traceFullThis__1(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(((((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy) 
				& (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
			       << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
					       - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))))),4);
	vcdp->fullBus  (c+2,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
			       << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value) 
					       - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))))),4);
	vcdp->fullBus  (c+3,(((((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy) 
				& (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
			       << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
					       - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value))))),4);
	vcdp->fullBus  (c+4,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch)) 
			       << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value) 
					       - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value))))),4);
	vcdp->fullBus  (c+5,(((((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy) 
				& (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
			       << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
					       - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value))))),4);
	vcdp->fullBus  (c+6,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch)) 
			       << 3U) | (7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value) 
					       - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))))),4);
	vcdp->fullBus  (c+7,(((((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy) 
				& (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
			       << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
						  - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value))))),6);
	vcdp->fullBus  (c+8,(((((~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch)) 
			       << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value) 
						  - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))))),6);
	vcdp->fullArray(c+9,(vlTOPp->BDMAm2s__DOT__m2s_cch_state_string),72);
	vcdp->fullBit  (c+12,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+13,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+14,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+15,(((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+16,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+17,(((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+18,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+19,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+20,((((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len)) 
				& (0U == ((((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy) 
					    & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ptrMatch)) 
					   << 3U) | 
					  (7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
						 - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)))))) 
			       & (3U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state)))));
	vcdp->fullBit  (c+21,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+22,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+23,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+24,(((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+25,(((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+26,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
					 & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
				     & (~ ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
					   & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full))))))));
	vcdp->fullBit  (c+27,((1U & ((~ ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
					 & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
				     & (~ ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
					   & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full))))))));
	vcdp->fullBit  (c+28,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valid) 
			       & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+29,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+30,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+31,(((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+32,(vlTOPp->BDMAm2s__DOT__m2s_cch_fire));
	vcdp->fullBit  (c+33,(vlTOPp->BDMAm2s__DOT__dma_ar_fire_2));
	vcdp->fullBit  (c+34,(vlTOPp->BDMAm2s__DOT__dma_r_fire));
	vcdp->fullBit  (c+35,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+36,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->fullBit  (c+37,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping));
	vcdp->fullBit  (c+38,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+39,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->fullBit  (c+40,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping));
	vcdp->fullBit  (c+41,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+42,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->fullBit  (c+43,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping));
	vcdp->fullBit  (c+44,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+45,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_valueNext),5);
	vcdp->fullBit  (c+46,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+47,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_valueNext),5);
	vcdp->fullBit  (c+48,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing));
	vcdp->fullBit  (c+49,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping));
	vcdp->fullBit  (c+50,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushing) 
			       != (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popping))));
	vcdp->fullBit  (c+51,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1) 
			       != (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popping))));
	vcdp->fullBit  (c+52,(((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing) 
			       != (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popping))));
	vcdp->fullBit  (c+53,(((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing) 
			       != (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popping))));
	vcdp->fullBit  (c+54,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+55,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_pop_valid));
	vcdp->fullBit  (c+56,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+57,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+58,((1U & (~ (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+59,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid));
	vcdp->fullBit  (c+60,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo_io_push_fire_1));
	vcdp->fullBit  (c+61,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_full));
	vcdp->fullBit  (c+62,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushing));
	vcdp->fullBit  (c+63,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_full));
	vcdp->fullBit  (c+64,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushing));
	vcdp->fullBit  (c+65,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_full));
	vcdp->fullBit  (c+66,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_full));
	vcdp->fullBit  (c+67,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+68,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->fullBit  (c+69,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+70,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->fullBit  (c+71,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+72,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->fullBus  (c+73,((3U & vlTOPp->BDMAm2s__DOT__cch_address)),2);
	vcdp->fullBus  (c+74,((3U & ((IData)(1U) + 
				     (~ (vlTOPp->BDMAm2s__DOT__trans_bytes_cnt 
					 + vlTOPp->BDMAm2s__DOT__cch_address))))),2);
	vcdp->fullBus  (c+75,((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0)),32);
	vcdp->fullBus  (c+76,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
					       >> 0x20U)))),4);
	vcdp->fullBus  (c+77,((0xffU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
						>> 0x24U)))),8);
	vcdp->fullBus  (c+78,((7U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
					     >> 0x2cU)))),3);
	vcdp->fullBus  (c+79,((3U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT___zz_logic_ram_port0 
					     >> 0x2fU)))),2);
	vcdp->fullBus  (c+80,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
	vcdp->fullBus  (c+81,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
	vcdp->fullBus  (c+82,(vlTOPp->BDMAm2s__DOT__cch_address),32);
	vcdp->fullBus  (c+83,(vlTOPp->BDMAm2s__DOT__cch_burst_type),2);
	vcdp->fullBus  (c+84,(vlTOPp->BDMAm2s__DOT__cch_id),4);
	vcdp->fullBus  (c+85,(vlTOPp->BDMAm2s__DOT__trans_bytes_cnt),30);
	vcdp->fullBus  (c+86,(vlTOPp->BDMAm2s__DOT__m2s_ar_len),8);
	vcdp->fullBus  (c+87,((0xfffffffcU & vlTOPp->BDMAm2s__DOT__cch_address)),32);
	vcdp->fullBit  (c+88,((0U != (0xfffffU & (((IData)(0x40U) 
						   + 
						   (0xfffU 
						    & vlTOPp->BDMAm2s__DOT__cch_address)) 
						  >> 0xcU)))));
	vcdp->fullBus  (c+89,(vlTOPp->BDMAm2s__DOT__m2s_axis_id),4);
	vcdp->fullBus  (c+90,(vlTOPp->BDMAm2s__DOT__m2s_axis_strb),4);
	vcdp->fullBus  (c+91,(vlTOPp->BDMAm2s__DOT__m2s_axis_keep),4);
	vcdp->fullBus  (c+92,(vlTOPp->BDMAm2s__DOT__keep_strb_mask),4);
	vcdp->fullQuad (c+93,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[0]),49);
	vcdp->fullQuad (c+95,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[1]),49);
	vcdp->fullQuad (c+97,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[2]),49);
	vcdp->fullQuad (c+99,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[3]),49);
	vcdp->fullQuad (c+101,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[4]),49);
	vcdp->fullQuad (c+103,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[5]),49);
	vcdp->fullQuad (c+105,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[6]),49);
	vcdp->fullQuad (c+107,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_ram[7]),49);
	vcdp->fullBus  (c+109,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
	vcdp->fullBus  (c+110,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
	vcdp->fullBus  (c+111,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
	vcdp->fullBus  (c+112,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
	vcdp->fullBus  (c+113,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
	vcdp->fullBus  (c+114,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
	vcdp->fullBus  (c+115,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
	vcdp->fullBus  (c+116,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
	vcdp->fullBus  (c+117,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
	vcdp->fullBus  (c+118,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
	vcdp->fullBus  (c+119,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
	vcdp->fullBus  (c+120,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
	vcdp->fullBus  (c+121,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
	vcdp->fullBus  (c+122,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
	vcdp->fullBus  (c+123,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
	vcdp->fullBus  (c+124,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
	vcdp->fullBus  (c+125,(((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))
				 ? ((IData)(vlTOPp->BDMAm2s__DOT__keep_strb_mask) 
				    & (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb))
				 : (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_strb))),4);
	vcdp->fullBit  (c+126,((0x40U >= (vlTOPp->BDMAm2s__DOT__cch_total_bytes 
					  + (3U & vlTOPp->BDMAm2s__DOT__cch_address)))));
	vcdp->fullBit  (c+127,((0U != (0xfffffU & (
						   ((0xfffU 
						     & vlTOPp->BDMAm2s__DOT__cch_address) 
						    + 
						    (0xfffU 
						     & vlTOPp->BDMAm2s__DOT__cch_total_bytes)) 
						   >> 0xcU)))));
	vcdp->fullBus  (c+128,(vlTOPp->BDMAm2s__DOT__m2s_cch_state),2);
	vcdp->fullBus  (c+129,(vlTOPp->BDMAm2s__DOT__m2s_r_state),1);
	vcdp->fullBit  (c+130,(vlTOPp->BDMAm2s__DOT__m2s_ar_valve));
	vcdp->fullBit  (c+131,(vlTOPp->BDMAm2s__DOT__cch_ready));
	vcdp->fullBit  (c+132,(vlTOPp->BDMAm2s__DOT__m2s_ar_valid));
	vcdp->fullBit  (c+133,(vlTOPp->BDMAm2s__DOT__m2s_ar_halt_exec));
	vcdp->fullBit  (c+134,(vlTOPp->BDMAm2s__DOT__cycle_finished));
	vcdp->fullBit  (c+135,(vlTOPp->BDMAm2s__DOT__m2s_r_valve));
	vcdp->fullBit  (c+136,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_cch_state))));
	vcdp->fullQuad (c+137,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)
				 ? ((IData)(vlTOPp->BDMAm2s__DOT__m2s_r_state)
				     ? VL_ULL(0x4255525354)
				     : VL_ULL(0x3f3f3f3f3f))
				 : VL_ULL(0x49444c4520))),40);
	vcdp->fullBus  (c+139,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value),3);
	vcdp->fullBit  (c+140,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+141,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value),3);
	vcdp->fullBit  (c+142,((7U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+143,(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+144,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_pushPtr_value) 
				      - (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->fullBus  (c+145,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
	vcdp->fullBit  (c+146,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+147,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
	vcdp->fullBit  (c+148,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+149,(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+150,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
				      - (IData)(vlTOPp->BDMAm2s__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->fullBus  (c+151,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
	vcdp->fullBit  (c+152,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+153,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
	vcdp->fullBit  (c+154,((7U == (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+155,(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+156,((7U & ((IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
				      - (IData)(vlTOPp->BDMAm2s__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->fullBus  (c+157,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value),5);
	vcdp->fullBit  (c+158,((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value))));
    }
}

void VBDMAm2s::traceFullThis__14(VBDMAm2s__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAm2s* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+159,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value),5);
	vcdp->fullBit  (c+160,((0x1fU == (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+161,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+162,((0x1fU & ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_pushPtr_value) 
					 - (IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_popPtr_value)))),5);
	vcdp->fullBus  (c+163,((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0)),32);
	vcdp->fullBus  (c+164,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
						>> 0x20U)))),4);
	vcdp->fullBus  (c+165,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
						>> 0x24U)))),4);
	vcdp->fullBus  (c+166,((0xfU & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
						>> 0x28U)))),4);
	vcdp->fullBit  (c+167,((1U & (IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
					      >> 0x2cU)))));
	vcdp->fullBus  (c+168,(vlTOPp->BDMAm2s__DOT__cch_total_bytes),30);
	vcdp->fullBit  (c+169,((0U == vlTOPp->BDMAm2s__DOT__cch_total_bytes)));
	vcdp->fullBus  (c+170,(vlTOPp->BDMAm2s__DOT__m2s_axis_len),8);
	vcdp->fullBit  (c+171,((0U == (IData)(vlTOPp->BDMAm2s__DOT__m2s_axis_len))));
	vcdp->fullQuad (c+172,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[0]),45);
	vcdp->fullQuad (c+174,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[1]),45);
	vcdp->fullQuad (c+176,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[2]),45);
	vcdp->fullQuad (c+178,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[3]),45);
	vcdp->fullQuad (c+180,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[4]),45);
	vcdp->fullQuad (c+182,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[5]),45);
	vcdp->fullQuad (c+184,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[6]),45);
	vcdp->fullQuad (c+186,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[7]),45);
	vcdp->fullQuad (c+188,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[8]),45);
	vcdp->fullQuad (c+190,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[9]),45);
	vcdp->fullQuad (c+192,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[10]),45);
	vcdp->fullQuad (c+194,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[11]),45);
	vcdp->fullQuad (c+196,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[12]),45);
	vcdp->fullQuad (c+198,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[13]),45);
	vcdp->fullQuad (c+200,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[14]),45);
	vcdp->fullQuad (c+202,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[15]),45);
	vcdp->fullQuad (c+204,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[16]),45);
	vcdp->fullQuad (c+206,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[17]),45);
	vcdp->fullQuad (c+208,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[18]),45);
	vcdp->fullQuad (c+210,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[19]),45);
	vcdp->fullQuad (c+212,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[20]),45);
	vcdp->fullQuad (c+214,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[21]),45);
	vcdp->fullQuad (c+216,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[22]),45);
	vcdp->fullQuad (c+218,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[23]),45);
	vcdp->fullQuad (c+220,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[24]),45);
	vcdp->fullQuad (c+222,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[25]),45);
	vcdp->fullQuad (c+224,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[26]),45);
	vcdp->fullQuad (c+226,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[27]),45);
	vcdp->fullQuad (c+228,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[28]),45);
	vcdp->fullQuad (c+230,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[29]),45);
	vcdp->fullQuad (c+232,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[30]),45);
	vcdp->fullQuad (c+234,(vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT__logic_ram[31]),45);
	vcdp->fullBit  (c+236,(vlTOPp->dma_ar_valid));
	vcdp->fullBit  (c+237,(vlTOPp->dma_ar_ready));
	vcdp->fullBus  (c+238,(vlTOPp->dma_ar_payload_addr),32);
	vcdp->fullBus  (c+239,(vlTOPp->dma_ar_payload_id),4);
	vcdp->fullBus  (c+240,(vlTOPp->dma_ar_payload_len),8);
	vcdp->fullBus  (c+241,(vlTOPp->dma_ar_payload_size),3);
	vcdp->fullBus  (c+242,(vlTOPp->dma_ar_payload_burst),2);
	vcdp->fullBit  (c+243,(vlTOPp->dma_r_valid));
	vcdp->fullBit  (c+244,(vlTOPp->dma_r_ready));
	vcdp->fullBus  (c+245,(vlTOPp->dma_r_payload_data),32);
	vcdp->fullBus  (c+246,(vlTOPp->dma_r_payload_id),4);
	vcdp->fullBus  (c+247,(vlTOPp->dma_r_payload_resp),2);
	vcdp->fullBit  (c+248,(vlTOPp->dma_r_payload_last));
	vcdp->fullBit  (c+249,(vlTOPp->m2s_data_stream_valid));
	vcdp->fullBit  (c+250,(vlTOPp->m2s_data_stream_ready));
	vcdp->fullBus  (c+251,(vlTOPp->m2s_data_stream_payload_data),32);
	vcdp->fullBus  (c+252,(vlTOPp->m2s_data_stream_payload_id),4);
	vcdp->fullBus  (c+253,(vlTOPp->m2s_data_stream_payload_strb),4);
	vcdp->fullBus  (c+254,(vlTOPp->m2s_data_stream_payload_keep_),4);
	vcdp->fullBit  (c+255,(vlTOPp->m2s_data_stream_payload_last));
	vcdp->fullBit  (c+256,(vlTOPp->m2s_reset));
	vcdp->fullBit  (c+257,(vlTOPp->m2s_cch_valid));
	vcdp->fullBit  (c+258,(vlTOPp->m2s_cch_ready));
	vcdp->fullBus  (c+259,(vlTOPp->m2s_cch_payload_desc_start_addr),32);
	vcdp->fullBus  (c+260,(vlTOPp->m2s_cch_payload_desc_total_bytes),30);
	vcdp->fullBus  (c+261,(vlTOPp->m2s_cch_payload_desc_burst),2);
	vcdp->fullBus  (c+262,(vlTOPp->m2s_cch_payload_desc_id),4);
	vcdp->fullBit  (c+263,(vlTOPp->m2s_intr));
	vcdp->fullBit  (c+264,(vlTOPp->clk));
	vcdp->fullBit  (c+265,(vlTOPp->reset));
	vcdp->fullBit  (c+266,(((IData)(vlTOPp->dma_ar_ready) 
				& (IData)(vlTOPp->BDMAm2s__DOT__m2s_ar_valve))));
	vcdp->fullBit  (c+267,(((IData)(vlTOPp->dma_r_valid) 
				& (IData)(vlTOPp->BDMAm2s__DOT__m2s_r_valve))));
	vcdp->fullBit  (c+268,(((IData)(vlTOPp->m2s_reset) 
				& (IData)(vlTOPp->BDMAm2s__DOT__cycle_finished))));
	vcdp->fullBit  (c+269,(((IData)(vlTOPp->dma_ar_valid) 
				& (IData)(vlTOPp->dma_ar_ready))));
	vcdp->fullBit  (c+270,(((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
				& (IData)(vlTOPp->m2s_data_stream_ready))));
	vcdp->fullBit  (c+271,(((IData)((vlTOPp->BDMAm2s__DOT__m2s_data_fifo__DOT___zz_logic_ram_port0 
					 >> 0x2cU)) 
				& ((IData)(vlTOPp->BDMAm2s__DOT__m2s_data_fifo_io_pop_valid) 
				   & (IData)(vlTOPp->m2s_data_stream_ready)))));
	vcdp->fullBus  (c+272,(0xfU),4);
	vcdp->fullBus  (c+273,(2U),3);
	vcdp->fullBit  (c+274,(0U));
    }
}
