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
	vlTOPp->traceFullThis__11(vlSymsp, vcdp, code);
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
	vcdp->declBit  (c+245,"dma_aw_valid",-1);
	vcdp->declBit  (c+246,"dma_aw_ready",-1);
	vcdp->declBus  (c+247,"dma_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+248,"dma_aw_payload_id",-1,3,0);
	vcdp->declBus  (c+249,"dma_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+250,"dma_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+251,"dma_aw_payload_burst",-1,1,0);
	vcdp->declBit  (c+252,"dma_w_valid",-1);
	vcdp->declBit  (c+253,"dma_w_ready",-1);
	vcdp->declBus  (c+254,"dma_w_payload_data",-1,31,0);
	vcdp->declBus  (c+255,"dma_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+256,"dma_w_payload_last",-1);
	vcdp->declBit  (c+257,"dma_b_valid",-1);
	vcdp->declBit  (c+258,"dma_b_ready",-1);
	vcdp->declBus  (c+259,"dma_b_payload_id",-1,3,0);
	vcdp->declBus  (c+260,"dma_b_payload_resp",-1,1,0);
	vcdp->declBit  (c+261,"s2m_data_stream_valid",-1);
	vcdp->declBit  (c+262,"s2m_data_stream_ready",-1);
	vcdp->declBus  (c+263,"s2m_data_stream_payload_data",-1,31,0);
	vcdp->declBus  (c+264,"s2m_data_stream_payload_id",-1,3,0);
	vcdp->declBus  (c+265,"s2m_data_stream_payload_strb",-1,3,0);
	vcdp->declBus  (c+266,"s2m_data_stream_payload_keep_",-1,3,0);
	vcdp->declBit  (c+267,"s2m_data_stream_payload_last",-1);
	vcdp->declBit  (c+268,"s2m_reset",-1);
	vcdp->declBit  (c+269,"s2m_cch_valid",-1);
	vcdp->declBit  (c+270,"s2m_cch_ready",-1);
	vcdp->declBus  (c+271,"s2m_cch_payload_desc_start_addr",-1,31,0);
	vcdp->declBus  (c+272,"s2m_cch_payload_desc_total_bytes",-1,29,0);
	vcdp->declBus  (c+273,"s2m_cch_payload_desc_burst",-1,1,0);
	vcdp->declBus  (c+274,"s2m_cch_payload_desc_id",-1,3,0);
	vcdp->declBit  (c+275,"s2m_intr",-1);
	vcdp->declBit  (c+276,"clk",-1);
	vcdp->declBit  (c+277,"reset",-1);
	vcdp->declBit  (c+245,"BDMAs2m dma_aw_valid",-1);
	vcdp->declBit  (c+246,"BDMAs2m dma_aw_ready",-1);
	vcdp->declBus  (c+247,"BDMAs2m dma_aw_payload_addr",-1,31,0);
	vcdp->declBus  (c+248,"BDMAs2m dma_aw_payload_id",-1,3,0);
	vcdp->declBus  (c+249,"BDMAs2m dma_aw_payload_len",-1,7,0);
	vcdp->declBus  (c+250,"BDMAs2m dma_aw_payload_size",-1,2,0);
	vcdp->declBus  (c+251,"BDMAs2m dma_aw_payload_burst",-1,1,0);
	vcdp->declBit  (c+252,"BDMAs2m dma_w_valid",-1);
	vcdp->declBit  (c+253,"BDMAs2m dma_w_ready",-1);
	vcdp->declBus  (c+254,"BDMAs2m dma_w_payload_data",-1,31,0);
	vcdp->declBus  (c+255,"BDMAs2m dma_w_payload_strb",-1,3,0);
	vcdp->declBit  (c+256,"BDMAs2m dma_w_payload_last",-1);
	vcdp->declBit  (c+257,"BDMAs2m dma_b_valid",-1);
	vcdp->declBit  (c+258,"BDMAs2m dma_b_ready",-1);
	vcdp->declBus  (c+259,"BDMAs2m dma_b_payload_id",-1,3,0);
	vcdp->declBus  (c+260,"BDMAs2m dma_b_payload_resp",-1,1,0);
	vcdp->declBit  (c+261,"BDMAs2m s2m_data_stream_valid",-1);
	vcdp->declBit  (c+262,"BDMAs2m s2m_data_stream_ready",-1);
	vcdp->declBus  (c+263,"BDMAs2m s2m_data_stream_payload_data",-1,31,0);
	vcdp->declBus  (c+264,"BDMAs2m s2m_data_stream_payload_id",-1,3,0);
	vcdp->declBus  (c+265,"BDMAs2m s2m_data_stream_payload_strb",-1,3,0);
	vcdp->declBus  (c+266,"BDMAs2m s2m_data_stream_payload_keep_",-1,3,0);
	vcdp->declBit  (c+267,"BDMAs2m s2m_data_stream_payload_last",-1);
	vcdp->declBit  (c+268,"BDMAs2m s2m_reset",-1);
	vcdp->declBit  (c+269,"BDMAs2m s2m_cch_valid",-1);
	vcdp->declBit  (c+270,"BDMAs2m s2m_cch_ready",-1);
	vcdp->declBus  (c+271,"BDMAs2m s2m_cch_payload_desc_start_addr",-1,31,0);
	vcdp->declBus  (c+272,"BDMAs2m s2m_cch_payload_desc_total_bytes",-1,29,0);
	vcdp->declBus  (c+273,"BDMAs2m s2m_cch_payload_desc_burst",-1,1,0);
	vcdp->declBus  (c+274,"BDMAs2m s2m_cch_payload_desc_id",-1,3,0);
	vcdp->declBit  (c+275,"BDMAs2m s2m_intr",-1);
	vcdp->declBit  (c+276,"BDMAs2m clk",-1);
	vcdp->declBit  (c+277,"BDMAs2m reset",-1);
	vcdp->declBit  (c+278,"BDMAs2m s2m_aw_fifo_io_pop_ready",-1);
	vcdp->declBus  (c+74,"BDMAs2m low_addr_fifo_io_push_payload",-1,1,0);
	vcdp->declBus  (c+75,"BDMAs2m low_bytes_fifo_io_push_payload",-1,1,0);
	vcdp->declBit  (c+198,"BDMAs2m s2m_data_fifo_io_push_valid",-1);
	vcdp->declBus  (c+195,"BDMAs2m s2m_data_fifo_io_push_payload_strb",-1,3,0);
	vcdp->declBit  (c+279,"BDMAs2m s2m_data_fifo_io_pop_ready",-1);
	vcdp->declBit  (c+52,"BDMAs2m s2m_aw_fifo_io_push_ready",-1);
	vcdp->declBit  (c+53,"BDMAs2m s2m_aw_fifo_io_pop_valid",-1);
	vcdp->declBus  (c+76,"BDMAs2m s2m_aw_fifo_io_pop_payload_addr",-1,31,0);
	vcdp->declBus  (c+77,"BDMAs2m s2m_aw_fifo_io_pop_payload_id",-1,3,0);
	vcdp->declBus  (c+78,"BDMAs2m s2m_aw_fifo_io_pop_payload_len",-1,7,0);
	vcdp->declBus  (c+79,"BDMAs2m s2m_aw_fifo_io_pop_payload_size",-1,2,0);
	vcdp->declBus  (c+80,"BDMAs2m s2m_aw_fifo_io_pop_payload_burst",-1,1,0);
	vcdp->declBus  (c+1,"BDMAs2m s2m_aw_fifo_io_occupancy",-1,3,0);
	vcdp->declBus  (c+2,"BDMAs2m s2m_aw_fifo_io_availability",-1,3,0);
	vcdp->declBit  (c+54,"BDMAs2m low_addr_fifo_io_push_ready",-1);
	vcdp->declBit  (c+24,"BDMAs2m low_addr_fifo_io_pop_valid",-1);
	vcdp->declBus  (c+81,"BDMAs2m low_addr_fifo_io_pop_payload",-1,1,0);
	vcdp->declBus  (c+3,"BDMAs2m low_addr_fifo_io_occupancy",-1,3,0);
	vcdp->declBus  (c+4,"BDMAs2m low_addr_fifo_io_availability",-1,3,0);
	vcdp->declBit  (c+55,"BDMAs2m low_bytes_fifo_io_push_ready",-1);
	vcdp->declBit  (c+25,"BDMAs2m low_bytes_fifo_io_pop_valid",-1);
	vcdp->declBus  (c+82,"BDMAs2m low_bytes_fifo_io_pop_payload",-1,1,0);
	vcdp->declBus  (c+5,"BDMAs2m low_bytes_fifo_io_occupancy",-1,3,0);
	vcdp->declBus  (c+6,"BDMAs2m low_bytes_fifo_io_availability",-1,3,0);
	vcdp->declBit  (c+56,"BDMAs2m s2m_data_fifo_io_push_ready",-1);
	vcdp->declBit  (c+57,"BDMAs2m s2m_data_fifo_io_pop_valid",-1);
	vcdp->declBus  (c+83,"BDMAs2m s2m_data_fifo_io_pop_payload_data",-1,31,0);
	vcdp->declBus  (c+84,"BDMAs2m s2m_data_fifo_io_pop_payload_strb",-1,3,0);
	vcdp->declBit  (c+85,"BDMAs2m s2m_data_fifo_io_pop_payload_last",-1);
	vcdp->declBus  (c+7,"BDMAs2m s2m_data_fifo_io_occupancy",-1,5,0);
	vcdp->declBus  (c+8,"BDMAs2m s2m_data_fifo_io_availability",-1,5,0);
	// Tracing: BDMAs2m _zz_aligned_address // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:90
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l112 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:91
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l112_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:92
	// Tracing: BDMAs2m _zz_trans_bytes_cnt // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:93
	// Tracing: BDMAs2m _zz_s2m_aw_len // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:94
	// Tracing: BDMAs2m _zz_s2m_aw_len_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:95
	// Tracing: BDMAs2m _zz_s2m_aw_len_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:96
	// Tracing: BDMAs2m _zz_s2m_aw_len_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:97
	// Tracing: BDMAs2m _zz_cch_address // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:98
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l143 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:99
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l143_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:100
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l147 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:101
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l147_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:102
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l147_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:103
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l147_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:104
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l147_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:105
	// Tracing: BDMAs2m _zz_trans_bytes_cnt_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:106
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l159 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:107
	// Tracing: BDMAs2m _zz_when_BDMAs2m_l159_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:108
	// Tracing: BDMAs2m _zz_trans_bytes_cnt_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:109
	// Tracing: BDMAs2m _zz_trans_bytes_cnt_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:110
	// Tracing: BDMAs2m _zz_trans_bytes_cnt_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:111
	// Tracing: BDMAs2m _zz_s2m_aw_len_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:112
	// Tracing: BDMAs2m _zz_s2m_aw_len_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:113
	// Tracing: BDMAs2m _zz_s2m_aw_len_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:114
	// Tracing: BDMAs2m _zz_s2m_aw_len_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:115
	// Tracing: BDMAs2m _zz_io_push_payload // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:116
	// Tracing: BDMAs2m _zz_strb_mask // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:117
	// Tracing: BDMAs2m _zz_fifo_push_w_strb // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:118
	// Tracing: BDMAs2m _zz_fifo_push_w_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:119
	vcdp->declBus  (c+199,"BDMAs2m s2m_cch_state",-1,1,0);
	vcdp->declBus  (c+200,"BDMAs2m s2m_convert_state",-1,1,0);
	vcdp->declBus  (c+201,"BDMAs2m s2m_w_state",-1,1,0);
	vcdp->declBit  (c+202,"BDMAs2m s2m_aw_valve",-1);
	vcdp->declBit  (c+203,"BDMAs2m s2m_w_valve",-1);
	vcdp->declBit  (c+204,"BDMAs2m cch_ready",-1);
	vcdp->declBus  (c+241,"BDMAs2m cch_total_bytes",-1,29,0);
	vcdp->declBus  (c+86,"BDMAs2m cch_address",-1,31,0);
	vcdp->declBus  (c+87,"BDMAs2m cch_burst_type",-1,1,0);
	vcdp->declBus  (c+88,"BDMAs2m cch_id",-1,3,0);
	vcdp->declBus  (c+89,"BDMAs2m trans_bytes_cnt",-1,29,0);
	vcdp->declBus  (c+90,"BDMAs2m s2m_aw_len",-1,7,0);
	vcdp->declBit  (c+205,"BDMAs2m s2m_aw_valid",-1);
	vcdp->declBit  (c+206,"BDMAs2m s2m_aw_halt_exec",-1);
	vcdp->declBus  (c+91,"BDMAs2m aligned_address",-1,31,0);
	vcdp->declBit  (c+207,"BDMAs2m cycle_finished",-1);
	vcdp->declBit  (c+33,"BDMAs2m s2m_cch_fire",-1);
	vcdp->declBit  (c+242,"BDMAs2m when_BDMAs2m_l96",-1);
	vcdp->declBit  (c+58,"BDMAs2m s2m_aw_fifo_io_push_fire",-1);
	vcdp->declBit  (c+26,"BDMAs2m s2m_aw_fifo_io_push_fire_1",-1);
	vcdp->declBit  (c+196,"BDMAs2m when_BDMAs2m_l112",-1);
	vcdp->declBit  (c+242,"BDMAs2m when_BDMAs2m_l126",-1);
	vcdp->declBit  (c+58,"BDMAs2m s2m_aw_fifo_io_push_fire_2",-1);
	vcdp->declBit  (c+26,"BDMAs2m s2m_aw_fifo_io_push_fire_3",-1);
	vcdp->declBit  (c+196,"BDMAs2m when_BDMAs2m_l143",-1);
	vcdp->declBit  (c+197,"BDMAs2m when_BDMAs2m_l147",-1);
	vcdp->declBit  (c+92,"BDMAs2m when_BDMAs2m_l159",-1);
	vcdp->declBit  (c+280,"BDMAs2m when_BDMAs2m_l171",-1);
	// Tracing: BDMAs2m _zz_dma_aw_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:148
	vcdp->declBit  (c+281,"BDMAs2m dma_aw_fire",-1);
	vcdp->declBit  (c+281,"BDMAs2m dma_aw_fire_1",-1);
	vcdp->declBus  (c+93,"BDMAs2m fifo_push_w_data",-1,31,0);
	vcdp->declBus  (c+94,"BDMAs2m fifo_push_w_strb",-1,3,0);
	vcdp->declBit  (c+208,"BDMAs2m fifo_push_w_last",-1);
	vcdp->declBit  (c+209,"BDMAs2m fifo_push_w_valid",-1);
	vcdp->declBit  (c+210,"BDMAs2m fifo_push_w_valve",-1);
	vcdp->declBus  (c+95,"BDMAs2m w_residual_data",-1,31,0);
	vcdp->declBus  (c+96,"BDMAs2m w_residual_strb",-1,3,0);
	vcdp->declBus  (c+243,"BDMAs2m s2m_axis_len",-1,7,0);
	vcdp->declBus  (c+97,"BDMAs2m strb_mask",-1,3,0);
	vcdp->declBus  (c+98,"BDMAs2m bytes_shift",-1,1,0);
	vcdp->declBus  (c+287,"BDMAs2m strb_full",-1,3,0);
	vcdp->declBit  (c+34,"BDMAs2m dma_aw_fire_2",-1);
	vcdp->declBit  (c+35,"BDMAs2m s2m_data_stream_fire",-1);
	vcdp->declBit  (c+244,"BDMAs2m when_BDMAs2m_l246",-1);
	vcdp->declBit  (c+27,"BDMAs2m when_BDMAs2m_l249",-1);
	vcdp->declBit  (c+282,"BDMAs2m s2m_data_stream_fire_1",-1);
	vcdp->declBit  (c+283,"BDMAs2m when_BDMAs2m_l274",-1);
	vcdp->declBit  (c+211,"BDMAs2m b_ready",-1);
	vcdp->declBit  (c+284,"BDMAs2m dma_w_fire",-1);
	vcdp->declBit  (c+285,"BDMAs2m when_BDMAs2m_l304",-1);
	vcdp->declBit  (c+286,"BDMAs2m dma_b_fire",-1);
	// Tracing: BDMAs2m _zz_dma_w_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:172
	vcdp->declBit  (c+212,"BDMAs2m when_BDMAs2m_l323",-1);
	vcdp->declBit  (c+28,"BDMAs2m when_BDMAs2m_l325",-1);
	vcdp->declArray(c+9,"BDMAs2m s2m_cch_state_string",-1,71,0);
	vcdp->declQuad (c+213,"BDMAs2m s2m_convert_state_string",-1,55,0);
	vcdp->declQuad (c+215,"BDMAs2m s2m_w_state_string",-1,39,0);
	vcdp->declBit  (c+205,"BDMAs2m s2m_aw_fifo io_push_valid",-1);
	vcdp->declBit  (c+52,"BDMAs2m s2m_aw_fifo io_push_ready",-1);
	vcdp->declBus  (c+91,"BDMAs2m s2m_aw_fifo io_push_payload_addr",-1,31,0);
	vcdp->declBus  (c+88,"BDMAs2m s2m_aw_fifo io_push_payload_id",-1,3,0);
	vcdp->declBus  (c+90,"BDMAs2m s2m_aw_fifo io_push_payload_len",-1,7,0);
	vcdp->declBus  (c+288,"BDMAs2m s2m_aw_fifo io_push_payload_size",-1,2,0);
	vcdp->declBus  (c+87,"BDMAs2m s2m_aw_fifo io_push_payload_burst",-1,1,0);
	vcdp->declBit  (c+53,"BDMAs2m s2m_aw_fifo io_pop_valid",-1);
	vcdp->declBit  (c+278,"BDMAs2m s2m_aw_fifo io_pop_ready",-1);
	vcdp->declBus  (c+76,"BDMAs2m s2m_aw_fifo io_pop_payload_addr",-1,31,0);
	vcdp->declBus  (c+77,"BDMAs2m s2m_aw_fifo io_pop_payload_id",-1,3,0);
	vcdp->declBus  (c+78,"BDMAs2m s2m_aw_fifo io_pop_payload_len",-1,7,0);
	vcdp->declBus  (c+79,"BDMAs2m s2m_aw_fifo io_pop_payload_size",-1,2,0);
	vcdp->declBus  (c+80,"BDMAs2m s2m_aw_fifo io_pop_payload_burst",-1,1,0);
	vcdp->declBit  (c+289,"BDMAs2m s2m_aw_fifo io_flush",-1);
	vcdp->declBus  (c+1,"BDMAs2m s2m_aw_fifo io_occupancy",-1,3,0);
	vcdp->declBus  (c+2,"BDMAs2m s2m_aw_fifo io_availability",-1,3,0);
	vcdp->declBit  (c+276,"BDMAs2m s2m_aw_fifo clk",-1);
	vcdp->declBit  (c+277,"BDMAs2m s2m_aw_fifo reset",-1);
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:908
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:909
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:910
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:911
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:912
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:913
	// Tracing: BDMAs2m s2m_aw_fifo _zz__zz_io_pop_payload_addr // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:914
	// Tracing: BDMAs2m s2m_aw_fifo _zz_logic_ram_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:915
	// Tracing: BDMAs2m s2m_aw_fifo _zz_io_availability // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:916
	// Tracing: BDMAs2m s2m_aw_fifo _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:917
	vcdp->declBit  (c+59,"BDMAs2m s2m_aw_fifo logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+289,"BDMAs2m s2m_aw_fifo logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+60,"BDMAs2m s2m_aw_fifo logic_pushPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+217,"BDMAs2m s2m_aw_fifo logic_pushPtr_value",-1,2,0);
	vcdp->declBit  (c+218,"BDMAs2m s2m_aw_fifo logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+29,"BDMAs2m s2m_aw_fifo logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+36,"BDMAs2m s2m_aw_fifo logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+289,"BDMAs2m s2m_aw_fifo logic_popPtr_willClear",-1);
	vcdp->declBus  (c+37,"BDMAs2m s2m_aw_fifo logic_popPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+219,"BDMAs2m s2m_aw_fifo logic_popPtr_value",-1,2,0);
	vcdp->declBit  (c+220,"BDMAs2m s2m_aw_fifo logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+20,"BDMAs2m s2m_aw_fifo logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+12,"BDMAs2m s2m_aw_fifo logic_ptrMatch",-1);
	vcdp->declBit  (c+221,"BDMAs2m s2m_aw_fifo logic_risingOccupancy",-1);
	vcdp->declBit  (c+58,"BDMAs2m s2m_aw_fifo logic_pushing",-1);
	vcdp->declBit  (c+38,"BDMAs2m s2m_aw_fifo logic_popping",-1);
	vcdp->declBit  (c+13,"BDMAs2m s2m_aw_fifo logic_empty",-1);
	vcdp->declBit  (c+61,"BDMAs2m s2m_aw_fifo logic_full",-1);
	// Tracing: BDMAs2m s2m_aw_fifo _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:936
	// Tracing: BDMAs2m s2m_aw_fifo _zz_io_pop_payload_addr // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:937
	vcdp->declBit  (c+48,"BDMAs2m s2m_aw_fifo when_Stream_l933",-1);
	vcdp->declBus  (c+222,"BDMAs2m s2m_aw_fifo logic_ptrDif",-1,2,0);
	{int i; for (i=0; i<8; i++) {
		vcdp->declQuad (c+99+i*2,"BDMAs2m s2m_aw_fifo logic_ram",(i+0),48,0);}}
	vcdp->declBit  (c+205,"BDMAs2m low_addr_fifo io_push_valid",-1);
	vcdp->declBit  (c+54,"BDMAs2m low_addr_fifo io_push_ready",-1);
	vcdp->declBus  (c+74,"BDMAs2m low_addr_fifo io_push_payload",-1,1,0);
	vcdp->declBit  (c+24,"BDMAs2m low_addr_fifo io_pop_valid",-1);
	vcdp->declBit  (c+281,"BDMAs2m low_addr_fifo io_pop_ready",-1);
	vcdp->declBus  (c+81,"BDMAs2m low_addr_fifo io_pop_payload",-1,1,0);
	vcdp->declBit  (c+289,"BDMAs2m low_addr_fifo io_flush",-1);
	vcdp->declBus  (c+3,"BDMAs2m low_addr_fifo io_occupancy",-1,3,0);
	vcdp->declBus  (c+4,"BDMAs2m low_addr_fifo io_availability",-1,3,0);
	vcdp->declBit  (c+276,"BDMAs2m low_addr_fifo clk",-1);
	vcdp->declBit  (c+277,"BDMAs2m low_addr_fifo reset",-1);
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:748
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:749
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:750
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:751
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:752
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:753
	// Tracing: BDMAs2m low_addr_fifo _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:754
	// Tracing: BDMAs2m low_addr_fifo _zz_logic_ram_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:755
	// Tracing: BDMAs2m low_addr_fifo _zz_io_availability // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:756
	// Tracing: BDMAs2m low_addr_fifo _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:757
	vcdp->declBit  (c+62,"BDMAs2m low_addr_fifo logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+289,"BDMAs2m low_addr_fifo logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+63,"BDMAs2m low_addr_fifo logic_pushPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+223,"BDMAs2m low_addr_fifo logic_pushPtr_value",-1,2,0);
	vcdp->declBit  (c+224,"BDMAs2m low_addr_fifo logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+30,"BDMAs2m low_addr_fifo logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+39,"BDMAs2m low_addr_fifo logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+289,"BDMAs2m low_addr_fifo logic_popPtr_willClear",-1);
	vcdp->declBus  (c+40,"BDMAs2m low_addr_fifo logic_popPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+225,"BDMAs2m low_addr_fifo logic_popPtr_value",-1,2,0);
	vcdp->declBit  (c+226,"BDMAs2m low_addr_fifo logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+21,"BDMAs2m low_addr_fifo logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+14,"BDMAs2m low_addr_fifo logic_ptrMatch",-1);
	vcdp->declBit  (c+227,"BDMAs2m low_addr_fifo logic_risingOccupancy",-1);
	vcdp->declBit  (c+64,"BDMAs2m low_addr_fifo logic_pushing",-1);
	vcdp->declBit  (c+41,"BDMAs2m low_addr_fifo logic_popping",-1);
	vcdp->declBit  (c+15,"BDMAs2m low_addr_fifo logic_empty",-1);
	vcdp->declBit  (c+65,"BDMAs2m low_addr_fifo logic_full",-1);
	// Tracing: BDMAs2m low_addr_fifo _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:776
	vcdp->declBit  (c+49,"BDMAs2m low_addr_fifo when_Stream_l933",-1);
	vcdp->declBus  (c+228,"BDMAs2m low_addr_fifo logic_ptrDif",-1,2,0);
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus  (c+115+i*1,"BDMAs2m low_addr_fifo logic_ram",(i+0),1,0);}}
	vcdp->declBit  (c+205,"BDMAs2m low_bytes_fifo io_push_valid",-1);
	vcdp->declBit  (c+55,"BDMAs2m low_bytes_fifo io_push_ready",-1);
	vcdp->declBus  (c+75,"BDMAs2m low_bytes_fifo io_push_payload",-1,1,0);
	vcdp->declBit  (c+25,"BDMAs2m low_bytes_fifo io_pop_valid",-1);
	vcdp->declBit  (c+281,"BDMAs2m low_bytes_fifo io_pop_ready",-1);
	vcdp->declBus  (c+82,"BDMAs2m low_bytes_fifo io_pop_payload",-1,1,0);
	vcdp->declBit  (c+289,"BDMAs2m low_bytes_fifo io_flush",-1);
	vcdp->declBus  (c+5,"BDMAs2m low_bytes_fifo io_occupancy",-1,3,0);
	vcdp->declBus  (c+6,"BDMAs2m low_bytes_fifo io_availability",-1,3,0);
	vcdp->declBit  (c+276,"BDMAs2m low_bytes_fifo clk",-1);
	vcdp->declBit  (c+277,"BDMAs2m low_bytes_fifo reset",-1);
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:748
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:749
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:750
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:751
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:752
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:753
	// Tracing: BDMAs2m low_bytes_fifo _zz_io_pop_payload // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:754
	// Tracing: BDMAs2m low_bytes_fifo _zz_logic_ram_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:755
	// Tracing: BDMAs2m low_bytes_fifo _zz_io_availability // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:756
	// Tracing: BDMAs2m low_bytes_fifo _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:757
	vcdp->declBit  (c+66,"BDMAs2m low_bytes_fifo logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+289,"BDMAs2m low_bytes_fifo logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+67,"BDMAs2m low_bytes_fifo logic_pushPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+229,"BDMAs2m low_bytes_fifo logic_pushPtr_value",-1,2,0);
	vcdp->declBit  (c+230,"BDMAs2m low_bytes_fifo logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+31,"BDMAs2m low_bytes_fifo logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+42,"BDMAs2m low_bytes_fifo logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+289,"BDMAs2m low_bytes_fifo logic_popPtr_willClear",-1);
	vcdp->declBus  (c+43,"BDMAs2m low_bytes_fifo logic_popPtr_valueNext",-1,2,0);
	vcdp->declBus  (c+231,"BDMAs2m low_bytes_fifo logic_popPtr_value",-1,2,0);
	vcdp->declBit  (c+232,"BDMAs2m low_bytes_fifo logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+22,"BDMAs2m low_bytes_fifo logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+16,"BDMAs2m low_bytes_fifo logic_ptrMatch",-1);
	vcdp->declBit  (c+233,"BDMAs2m low_bytes_fifo logic_risingOccupancy",-1);
	vcdp->declBit  (c+68,"BDMAs2m low_bytes_fifo logic_pushing",-1);
	vcdp->declBit  (c+44,"BDMAs2m low_bytes_fifo logic_popping",-1);
	vcdp->declBit  (c+17,"BDMAs2m low_bytes_fifo logic_empty",-1);
	vcdp->declBit  (c+69,"BDMAs2m low_bytes_fifo logic_full",-1);
	// Tracing: BDMAs2m low_bytes_fifo _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:776
	vcdp->declBit  (c+50,"BDMAs2m low_bytes_fifo when_Stream_l933",-1);
	vcdp->declBus  (c+234,"BDMAs2m low_bytes_fifo logic_ptrDif",-1,2,0);
	{int i; for (i=0; i<8; i++) {
		vcdp->declBus  (c+123+i*1,"BDMAs2m low_bytes_fifo logic_ram",(i+0),1,0);}}
	vcdp->declBit  (c+198,"BDMAs2m s2m_data_fifo io_push_valid",-1);
	vcdp->declBit  (c+56,"BDMAs2m s2m_data_fifo io_push_ready",-1);
	vcdp->declBus  (c+93,"BDMAs2m s2m_data_fifo io_push_payload_data",-1,31,0);
	vcdp->declBus  (c+195,"BDMAs2m s2m_data_fifo io_push_payload_strb",-1,3,0);
	vcdp->declBit  (c+208,"BDMAs2m s2m_data_fifo io_push_payload_last",-1);
	vcdp->declBit  (c+57,"BDMAs2m s2m_data_fifo io_pop_valid",-1);
	vcdp->declBit  (c+279,"BDMAs2m s2m_data_fifo io_pop_ready",-1);
	vcdp->declBus  (c+83,"BDMAs2m s2m_data_fifo io_pop_payload_data",-1,31,0);
	vcdp->declBus  (c+84,"BDMAs2m s2m_data_fifo io_pop_payload_strb",-1,3,0);
	vcdp->declBit  (c+85,"BDMAs2m s2m_data_fifo io_pop_payload_last",-1);
	vcdp->declBit  (c+289,"BDMAs2m s2m_data_fifo io_flush",-1);
	vcdp->declBus  (c+7,"BDMAs2m s2m_data_fifo io_occupancy",-1,5,0);
	vcdp->declBus  (c+8,"BDMAs2m s2m_data_fifo io_availability",-1,5,0);
	vcdp->declBit  (c+276,"BDMAs2m s2m_data_fifo clk",-1);
	vcdp->declBit  (c+277,"BDMAs2m s2m_data_fifo reset",-1);
	// Tracing: BDMAs2m s2m_data_fifo _zz_logic_ram_port0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:590
	// Tracing: BDMAs2m s2m_data_fifo _zz_logic_pushPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:591
	// Tracing: BDMAs2m s2m_data_fifo _zz_logic_pushPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:592
	// Tracing: BDMAs2m s2m_data_fifo _zz_logic_popPtr_valueNext // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:593
	// Tracing: BDMAs2m s2m_data_fifo _zz_logic_popPtr_valueNext_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:594
	// Tracing: BDMAs2m s2m_data_fifo _zz_logic_ram_port // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:595
	// Tracing: BDMAs2m s2m_data_fifo _zz__zz_io_pop_payload_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:596
	// Tracing: BDMAs2m s2m_data_fifo _zz_logic_ram_port_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:597
	// Tracing: BDMAs2m s2m_data_fifo _zz_io_availability // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:598
	// Tracing: BDMAs2m s2m_data_fifo _zz_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:599
	vcdp->declBit  (c+70,"BDMAs2m s2m_data_fifo logic_pushPtr_willIncrement",-1);
	vcdp->declBit  (c+289,"BDMAs2m s2m_data_fifo logic_pushPtr_willClear",-1);
	vcdp->declBus  (c+71,"BDMAs2m s2m_data_fifo logic_pushPtr_valueNext",-1,4,0);
	vcdp->declBus  (c+235,"BDMAs2m s2m_data_fifo logic_pushPtr_value",-1,4,0);
	vcdp->declBit  (c+236,"BDMAs2m s2m_data_fifo logic_pushPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+32,"BDMAs2m s2m_data_fifo logic_pushPtr_willOverflow",-1);
	vcdp->declBit  (c+45,"BDMAs2m s2m_data_fifo logic_popPtr_willIncrement",-1);
	vcdp->declBit  (c+289,"BDMAs2m s2m_data_fifo logic_popPtr_willClear",-1);
	vcdp->declBus  (c+46,"BDMAs2m s2m_data_fifo logic_popPtr_valueNext",-1,4,0);
	vcdp->declBus  (c+237,"BDMAs2m s2m_data_fifo logic_popPtr_value",-1,4,0);
	vcdp->declBit  (c+238,"BDMAs2m s2m_data_fifo logic_popPtr_willOverflowIfInc",-1);
	vcdp->declBit  (c+23,"BDMAs2m s2m_data_fifo logic_popPtr_willOverflow",-1);
	vcdp->declBit  (c+18,"BDMAs2m s2m_data_fifo logic_ptrMatch",-1);
	vcdp->declBit  (c+239,"BDMAs2m s2m_data_fifo logic_risingOccupancy",-1);
	vcdp->declBit  (c+72,"BDMAs2m s2m_data_fifo logic_pushing",-1);
	vcdp->declBit  (c+47,"BDMAs2m s2m_data_fifo logic_popping",-1);
	vcdp->declBit  (c+19,"BDMAs2m s2m_data_fifo logic_empty",-1);
	vcdp->declBit  (c+73,"BDMAs2m s2m_data_fifo logic_full",-1);
	// Tracing: BDMAs2m s2m_data_fifo _zz_io_pop_valid // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:618
	// Tracing: BDMAs2m s2m_data_fifo _zz_io_pop_payload_data // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/BDMAs2m.v:619
	vcdp->declBit  (c+51,"BDMAs2m s2m_data_fifo when_Stream_l933",-1);
	vcdp->declBus  (c+240,"BDMAs2m s2m_data_fifo logic_ptrDif",-1,4,0);
	{int i; for (i=0; i<32; i++) {
		vcdp->declQuad (c+131+i*2,"BDMAs2m s2m_data_fifo logic_ram",(i+0),36,0);}}
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
	vcdp->fullBus  (c+7,(((((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy) 
				& (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch)) 
			       << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
						  - (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value))))),6);
	vcdp->fullBus  (c+8,(((((~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy)) 
				& (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch)) 
			       << 5U) | (0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value) 
						  - (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value))))),6);
	vcdp->fullArray(c+9,(vlTOPp->BDMAs2m__DOT__s2m_cch_state_string),72);
	vcdp->fullBit  (c+12,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+13,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+14,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+15,(((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+16,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+17,(((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+18,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch));
	vcdp->fullBit  (c+19,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ptrMatch) 
			       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy)))));
	vcdp->fullBit  (c+20,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+21,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+22,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+23,(((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement))));
	vcdp->fullBit  (c+24,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ptrMatch) 
					 & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy)))) 
				     & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_io_pop_valid) 
					   & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full))))))));
	vcdp->fullBit  (c+25,((1U & ((~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ptrMatch) 
					 & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy)))) 
				     & (~ ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_io_pop_valid) 
					   & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full))))))));
	vcdp->fullBit  (c+26,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valid) 
			       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+27,(((3U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state)) 
			       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid)))));
	vcdp->fullBit  (c+28,(((((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state)) 
				 & (3U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))) 
				& (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_valid))) 
			       & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid)))));
	vcdp->fullBit  (c+29,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+30,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+31,(((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+32,(((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value)) 
			       & (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement))));
	vcdp->fullBit  (c+33,(vlTOPp->BDMAs2m__DOT__s2m_cch_fire));
	vcdp->fullBit  (c+34,(vlTOPp->BDMAs2m__DOT__dma_aw_fire_2));
	vcdp->fullBit  (c+35,(vlTOPp->BDMAs2m__DOT__s2m_data_stream_fire));
	vcdp->fullBit  (c+36,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+37,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->fullBit  (c+38,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping));
	vcdp->fullBit  (c+39,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+40,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->fullBit  (c+41,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping));
	vcdp->fullBit  (c+42,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+43,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_valueNext),3);
	vcdp->fullBit  (c+44,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping));
	vcdp->fullBit  (c+45,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_willIncrement));
	vcdp->fullBus  (c+46,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_valueNext),5);
	vcdp->fullBit  (c+47,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popping));
	vcdp->fullBit  (c+48,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1) 
			       != (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popping))));
	vcdp->fullBit  (c+49,(((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing) 
			       != (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popping))));
	vcdp->fullBit  (c+50,(((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing) 
			       != (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popping))));
	vcdp->fullBit  (c+51,(((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushing) 
			       != (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popping))));
	vcdp->fullBit  (c+52,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+53,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_pop_valid));
	vcdp->fullBit  (c+54,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+55,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+56,((1U & (~ (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_full)))));
	vcdp->fullBit  (c+57,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo_io_pop_valid));
	vcdp->fullBit  (c+58,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo_io_push_fire_1));
	vcdp->fullBit  (c+59,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+60,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->fullBit  (c+61,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_full));
	vcdp->fullBit  (c+62,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+63,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->fullBit  (c+64,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushing));
	vcdp->fullBit  (c+65,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_full));
	vcdp->fullBit  (c+66,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+67,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_valueNext),3);
	vcdp->fullBit  (c+68,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushing));
	vcdp->fullBit  (c+69,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_full));
	vcdp->fullBit  (c+70,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_willIncrement));
	vcdp->fullBus  (c+71,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_valueNext),5);
	vcdp->fullBit  (c+72,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushing));
	vcdp->fullBit  (c+73,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_full));
	vcdp->fullBus  (c+74,((3U & vlTOPp->BDMAs2m__DOT__cch_address)),2);
	vcdp->fullBus  (c+75,((3U & ((IData)(1U) + 
				     (~ (vlTOPp->BDMAs2m__DOT__trans_bytes_cnt 
					 + vlTOPp->BDMAs2m__DOT__cch_address))))),2);
	vcdp->fullBus  (c+76,((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0)),32);
	vcdp->fullBus  (c+77,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					       >> 0x20U)))),4);
	vcdp->fullBus  (c+78,((0xffU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
						>> 0x24U)))),8);
	vcdp->fullBus  (c+79,((7U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					     >> 0x2cU)))),3);
	vcdp->fullBus  (c+80,((3U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT___zz_logic_ram_port0 
					     >> 0x2fU)))),2);
	vcdp->fullBus  (c+81,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT___zz_logic_ram_port0),2);
	vcdp->fullBus  (c+82,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT___zz_logic_ram_port0),2);
	vcdp->fullBus  (c+83,((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0)),32);
	vcdp->fullBus  (c+84,((0xfU & (IData)((vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
					       >> 0x20U)))),4);
	vcdp->fullBit  (c+85,((1U & (IData)((vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT___zz_logic_ram_port0 
					     >> 0x24U)))));
	vcdp->fullBus  (c+86,(vlTOPp->BDMAs2m__DOT__cch_address),32);
	vcdp->fullBus  (c+87,(vlTOPp->BDMAs2m__DOT__cch_burst_type),2);
	vcdp->fullBus  (c+88,(vlTOPp->BDMAs2m__DOT__cch_id),4);
	vcdp->fullBus  (c+89,(vlTOPp->BDMAs2m__DOT__trans_bytes_cnt),30);
	vcdp->fullBus  (c+90,(vlTOPp->BDMAs2m__DOT__s2m_aw_len),8);
	vcdp->fullBus  (c+91,((0xfffffffcU & vlTOPp->BDMAs2m__DOT__cch_address)),32);
	vcdp->fullBit  (c+92,((0U != (0xfffffU & (((IData)(0x40U) 
						   + 
						   (0xfffU 
						    & vlTOPp->BDMAs2m__DOT__cch_address)) 
						  >> 0xcU)))));
	vcdp->fullBus  (c+93,(vlTOPp->BDMAs2m__DOT__fifo_push_w_data),32);
	vcdp->fullBus  (c+94,(vlTOPp->BDMAs2m__DOT__fifo_push_w_strb),4);
	vcdp->fullBus  (c+95,(vlTOPp->BDMAs2m__DOT__w_residual_data),32);
	vcdp->fullBus  (c+96,(vlTOPp->BDMAs2m__DOT__w_residual_strb),4);
	vcdp->fullBus  (c+97,(vlTOPp->BDMAs2m__DOT__strb_mask),4);
	vcdp->fullBus  (c+98,(vlTOPp->BDMAs2m__DOT__bytes_shift),2);
	vcdp->fullQuad (c+99,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[0]),49);
	vcdp->fullQuad (c+101,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[1]),49);
	vcdp->fullQuad (c+103,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[2]),49);
	vcdp->fullQuad (c+105,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[3]),49);
	vcdp->fullQuad (c+107,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[4]),49);
	vcdp->fullQuad (c+109,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[5]),49);
	vcdp->fullQuad (c+111,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[6]),49);
	vcdp->fullQuad (c+113,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_ram[7]),49);
	vcdp->fullBus  (c+115,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[0]),2);
	vcdp->fullBus  (c+116,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[1]),2);
	vcdp->fullBus  (c+117,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[2]),2);
	vcdp->fullBus  (c+118,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[3]),2);
	vcdp->fullBus  (c+119,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[4]),2);
	vcdp->fullBus  (c+120,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[5]),2);
	vcdp->fullBus  (c+121,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[6]),2);
	vcdp->fullBus  (c+122,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_ram[7]),2);
	vcdp->fullBus  (c+123,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[0]),2);
	vcdp->fullBus  (c+124,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[1]),2);
	vcdp->fullBus  (c+125,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[2]),2);
	vcdp->fullBus  (c+126,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[3]),2);
	vcdp->fullBus  (c+127,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[4]),2);
	vcdp->fullBus  (c+128,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[5]),2);
	vcdp->fullBus  (c+129,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[6]),2);
	vcdp->fullBus  (c+130,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_ram[7]),2);
	vcdp->fullQuad (c+131,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[0]),37);
	vcdp->fullQuad (c+133,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[1]),37);
	vcdp->fullQuad (c+135,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[2]),37);
	vcdp->fullQuad (c+137,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[3]),37);
	vcdp->fullQuad (c+139,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[4]),37);
	vcdp->fullQuad (c+141,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[5]),37);
	vcdp->fullQuad (c+143,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[6]),37);
	vcdp->fullQuad (c+145,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[7]),37);
	vcdp->fullQuad (c+147,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[8]),37);
	vcdp->fullQuad (c+149,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[9]),37);
	vcdp->fullQuad (c+151,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[10]),37);
	vcdp->fullQuad (c+153,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[11]),37);
	vcdp->fullQuad (c+155,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[12]),37);
	vcdp->fullQuad (c+157,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[13]),37);
	vcdp->fullQuad (c+159,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[14]),37);
	vcdp->fullQuad (c+161,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[15]),37);
	vcdp->fullQuad (c+163,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[16]),37);
	vcdp->fullQuad (c+165,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[17]),37);
	vcdp->fullQuad (c+167,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[18]),37);
	vcdp->fullQuad (c+169,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[19]),37);
	vcdp->fullQuad (c+171,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[20]),37);
	vcdp->fullQuad (c+173,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[21]),37);
	vcdp->fullQuad (c+175,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[22]),37);
	vcdp->fullQuad (c+177,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[23]),37);
	vcdp->fullQuad (c+179,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[24]),37);
	vcdp->fullQuad (c+181,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[25]),37);
	vcdp->fullQuad (c+183,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[26]),37);
	vcdp->fullQuad (c+185,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[27]),37);
	vcdp->fullQuad (c+187,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[28]),37);
	vcdp->fullQuad (c+189,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[29]),37);
	vcdp->fullQuad (c+191,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[30]),37);
	vcdp->fullQuad (c+193,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_ram[31]),37);
	vcdp->fullBus  (c+195,(((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))
				 ? ((IData)(vlTOPp->BDMAs2m__DOT__strb_mask) 
				    & (IData)(vlTOPp->BDMAs2m__DOT__fifo_push_w_strb))
				 : (IData)(vlTOPp->BDMAs2m__DOT__fifo_push_w_strb))),4);
	vcdp->fullBit  (c+196,((0x40U >= (vlTOPp->BDMAs2m__DOT__cch_total_bytes 
					  + (3U & vlTOPp->BDMAs2m__DOT__cch_address)))));
	vcdp->fullBit  (c+197,((0U != (0xfffffU & (
						   ((0xfffU 
						     & vlTOPp->BDMAs2m__DOT__cch_address) 
						    + 
						    (0xfffU 
						     & vlTOPp->BDMAs2m__DOT__cch_total_bytes)) 
						   >> 0xcU)))));
	vcdp->fullBit  (c+198,(((IData)(vlTOPp->BDMAs2m__DOT__fifo_push_w_valid) 
				& (IData)(vlTOPp->BDMAs2m__DOT__fifo_push_w_valve))));
	vcdp->fullBus  (c+199,(vlTOPp->BDMAs2m__DOT__s2m_cch_state),2);
	vcdp->fullBus  (c+200,(vlTOPp->BDMAs2m__DOT__s2m_convert_state),2);
	vcdp->fullBus  (c+201,(vlTOPp->BDMAs2m__DOT__s2m_w_state),2);
	vcdp->fullBit  (c+202,(vlTOPp->BDMAs2m__DOT__s2m_aw_valve));
	vcdp->fullBit  (c+203,(vlTOPp->BDMAs2m__DOT__s2m_w_valve));
	vcdp->fullBit  (c+204,(vlTOPp->BDMAs2m__DOT__cch_ready));
	vcdp->fullBit  (c+205,(vlTOPp->BDMAs2m__DOT__s2m_aw_valid));
	vcdp->fullBit  (c+206,(vlTOPp->BDMAs2m__DOT__s2m_aw_halt_exec));
	vcdp->fullBit  (c+207,(vlTOPp->BDMAs2m__DOT__cycle_finished));
	vcdp->fullBit  (c+208,(vlTOPp->BDMAs2m__DOT__fifo_push_w_last));
	vcdp->fullBit  (c+209,(vlTOPp->BDMAs2m__DOT__fifo_push_w_valid));
	vcdp->fullBit  (c+210,(vlTOPp->BDMAs2m__DOT__fifo_push_w_valve));
	vcdp->fullBit  (c+211,(vlTOPp->BDMAs2m__DOT__b_ready));
	vcdp->fullBit  (c+212,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_cch_state))));
	vcdp->fullQuad (c+213,(((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_convert_state))
				 ? VL_ULL(0x49444c45202020)
				 : ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_convert_state))
				     ? VL_ULL(0x434f4e56455254)
				     : ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_convert_state))
					 ? VL_ULL(0x44524f50202020)
					 : VL_ULL(0x3f3f3f3f3f3f3f))))),56);
	vcdp->fullQuad (c+215,(((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
				 ? VL_ULL(0x49444c4520)
				 : ((1U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
				     ? VL_ULL(0x4255525354)
				     : ((2U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_state))
					 ? VL_ULL(0x5245535020)
					 : VL_ULL(0x3f3f3f3f3f))))),40);
    }
}

void VBDMAs2m::traceFullThis__11(VBDMAs2m__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VBDMAs2m* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+217,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value),3);
	vcdp->fullBit  (c+218,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+219,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value),3);
	vcdp->fullBit  (c+220,((7U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+221,(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+222,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_pushPtr_value) 
				      - (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->fullBus  (c+223,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value),3);
	vcdp->fullBit  (c+224,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+225,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value),3);
	vcdp->fullBit  (c+226,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+227,(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+228,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_pushPtr_value) 
				      - (IData)(vlTOPp->BDMAs2m__DOT__low_addr_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->fullBus  (c+229,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value),3);
	vcdp->fullBit  (c+230,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+231,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value),3);
	vcdp->fullBit  (c+232,((7U == (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+233,(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+234,((7U & ((IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_pushPtr_value) 
				      - (IData)(vlTOPp->BDMAs2m__DOT__low_bytes_fifo__DOT__logic_popPtr_value)))),3);
	vcdp->fullBus  (c+235,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value),5);
	vcdp->fullBit  (c+236,((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value))));
	vcdp->fullBus  (c+237,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value),5);
	vcdp->fullBit  (c+238,((0x1fU == (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value))));
	vcdp->fullBit  (c+239,(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_risingOccupancy));
	vcdp->fullBus  (c+240,((0x1fU & ((IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_pushPtr_value) 
					 - (IData)(vlTOPp->BDMAs2m__DOT__s2m_data_fifo__DOT__logic_popPtr_value)))),5);
	vcdp->fullBus  (c+241,(vlTOPp->BDMAs2m__DOT__cch_total_bytes),30);
	vcdp->fullBit  (c+242,((0U == vlTOPp->BDMAs2m__DOT__cch_total_bytes)));
	vcdp->fullBus  (c+243,(vlTOPp->BDMAs2m__DOT__s2m_axis_len),8);
	vcdp->fullBit  (c+244,((0U == (IData)(vlTOPp->BDMAs2m__DOT__s2m_axis_len))));
	vcdp->fullBit  (c+245,(vlTOPp->dma_aw_valid));
	vcdp->fullBit  (c+246,(vlTOPp->dma_aw_ready));
	vcdp->fullBus  (c+247,(vlTOPp->dma_aw_payload_addr),32);
	vcdp->fullBus  (c+248,(vlTOPp->dma_aw_payload_id),4);
	vcdp->fullBus  (c+249,(vlTOPp->dma_aw_payload_len),8);
	vcdp->fullBus  (c+250,(vlTOPp->dma_aw_payload_size),3);
	vcdp->fullBus  (c+251,(vlTOPp->dma_aw_payload_burst),2);
	vcdp->fullBit  (c+252,(vlTOPp->dma_w_valid));
	vcdp->fullBit  (c+253,(vlTOPp->dma_w_ready));
	vcdp->fullBus  (c+254,(vlTOPp->dma_w_payload_data),32);
	vcdp->fullBus  (c+255,(vlTOPp->dma_w_payload_strb),4);
	vcdp->fullBit  (c+256,(vlTOPp->dma_w_payload_last));
	vcdp->fullBit  (c+257,(vlTOPp->dma_b_valid));
	vcdp->fullBit  (c+258,(vlTOPp->dma_b_ready));
	vcdp->fullBus  (c+259,(vlTOPp->dma_b_payload_id),4);
	vcdp->fullBus  (c+260,(vlTOPp->dma_b_payload_resp),2);
	vcdp->fullBit  (c+261,(vlTOPp->s2m_data_stream_valid));
	vcdp->fullBit  (c+262,(vlTOPp->s2m_data_stream_ready));
	vcdp->fullBus  (c+263,(vlTOPp->s2m_data_stream_payload_data),32);
	vcdp->fullBus  (c+264,(vlTOPp->s2m_data_stream_payload_id),4);
	vcdp->fullBus  (c+265,(vlTOPp->s2m_data_stream_payload_strb),4);
	vcdp->fullBus  (c+266,(vlTOPp->s2m_data_stream_payload_keep_),4);
	vcdp->fullBit  (c+267,(vlTOPp->s2m_data_stream_payload_last));
	vcdp->fullBit  (c+268,(vlTOPp->s2m_reset));
	vcdp->fullBit  (c+269,(vlTOPp->s2m_cch_valid));
	vcdp->fullBit  (c+270,(vlTOPp->s2m_cch_ready));
	vcdp->fullBus  (c+271,(vlTOPp->s2m_cch_payload_desc_start_addr),32);
	vcdp->fullBus  (c+272,(vlTOPp->s2m_cch_payload_desc_total_bytes),30);
	vcdp->fullBus  (c+273,(vlTOPp->s2m_cch_payload_desc_burst),2);
	vcdp->fullBus  (c+274,(vlTOPp->s2m_cch_payload_desc_id),4);
	vcdp->fullBit  (c+275,(vlTOPp->s2m_intr));
	vcdp->fullBit  (c+276,(vlTOPp->clk));
	vcdp->fullBit  (c+277,(vlTOPp->reset));
	vcdp->fullBit  (c+278,(((IData)(vlTOPp->dma_aw_ready) 
				& (IData)(vlTOPp->BDMAs2m__DOT__s2m_aw_valve))));
	vcdp->fullBit  (c+279,(((IData)(vlTOPp->dma_w_ready) 
				& (IData)(vlTOPp->BDMAs2m__DOT__s2m_w_valve))));
	vcdp->fullBit  (c+280,(((IData)(vlTOPp->s2m_reset) 
				& (IData)(vlTOPp->BDMAs2m__DOT__cycle_finished))));
	vcdp->fullBit  (c+281,(((IData)(vlTOPp->dma_aw_valid) 
				& (IData)(vlTOPp->dma_aw_ready))));
	vcdp->fullBit  (c+282,(((IData)(vlTOPp->s2m_data_stream_valid) 
				& (IData)(vlTOPp->s2m_data_stream_ready))));
	vcdp->fullBit  (c+283,((((IData)(vlTOPp->s2m_data_stream_valid) 
				 & (IData)(vlTOPp->s2m_data_stream_ready)) 
				& (IData)(vlTOPp->s2m_data_stream_payload_last))));
	vcdp->fullBit  (c+284,(((IData)(vlTOPp->dma_w_valid) 
				& (IData)(vlTOPp->dma_w_ready))));
	vcdp->fullBit  (c+285,(((IData)(vlTOPp->dma_w_payload_last) 
				& ((IData)(vlTOPp->dma_w_valid) 
				   & (IData)(vlTOPp->dma_w_ready)))));
	vcdp->fullBit  (c+286,(((IData)(vlTOPp->dma_b_valid) 
				& (IData)(vlTOPp->dma_b_ready))));
	vcdp->fullBus  (c+287,(0xfU),4);
	vcdp->fullBus  (c+288,(2U),3);
	vcdp->fullBit  (c+289,(0U));
    }
}
