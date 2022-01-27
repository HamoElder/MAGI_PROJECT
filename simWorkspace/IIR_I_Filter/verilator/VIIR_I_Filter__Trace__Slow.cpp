// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VIIR_I_Filter__Syms.h"


//======================

void VIIR_I_Filter::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VIIR_I_Filter::traceInit, &VIIR_I_Filter::traceFull, &VIIR_I_Filter::traceChg, this);
}
void VIIR_I_Filter::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VIIR_I_Filter* t=(VIIR_I_Filter*)userthis;
    VIIR_I_Filter__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VIIR_I_Filter::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VIIR_I_Filter* t=(VIIR_I_Filter*)userthis;
    VIIR_I_Filter__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VIIR_I_Filter::traceInitThis(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VIIR_I_Filter::traceFullThis(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VIIR_I_Filter::traceInitThis__1(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+54,"raw_data_valid",-1);
	vcdp->declBus  (c+55,"raw_data_payload_0",-1,11,0);
	vcdp->declBit  (c+56,"filtered_data_valid",-1);
	vcdp->declBus  (c+57,"filtered_data_payload_0",-1,28,0);
	vcdp->declBit  (c+58,"clk",-1);
	vcdp->declBit  (c+59,"reset",-1);
	vcdp->declBit  (c+54,"IIR_I_Filter raw_data_valid",-1);
	vcdp->declBus  (c+55,"IIR_I_Filter raw_data_payload_0",-1,11,0);
	vcdp->declBit  (c+56,"IIR_I_Filter filtered_data_valid",-1);
	vcdp->declBus  (c+57,"IIR_I_Filter filtered_data_payload_0",-1,28,0);
	vcdp->declBit  (c+58,"IIR_I_Filter clk",-1);
	vcdp->declBit  (c+59,"IIR_I_Filter reset",-1);
	vcdp->declBit  (c+12,"IIR_I_Filter fir_zero_filtered_data_valid",-1);
	vcdp->declBus  (c+13,"IIR_I_Filter fir_zero_filtered_data_payload_0",-1,28,0);
	vcdp->declBit  (c+14,"IIR_I_Filter fir_pole_filtered_data_valid",-1);
	vcdp->declBus  (c+15,"IIR_I_Filter fir_pole_filtered_data_payload_0",-1,28,0);
	// Tracing: IIR_I_Filter _zz_filtered_data_vec_0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:19
	// Tracing: IIR_I_Filter _zz_filtered_data_vec_0_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:20
	vcdp->declBus  (c+16,"IIR_I_Filter filtered_data_vec_0",-1,28,0);
	vcdp->declBit  (c+17,"IIR_I_Filter filtered_valid_buf",-1);
	vcdp->declBit  (c+54,"IIR_I_Filter fir_zero raw_data_valid",-1);
	vcdp->declBus  (c+55,"IIR_I_Filter fir_zero raw_data_payload_0",-1,11,0);
	vcdp->declBit  (c+12,"IIR_I_Filter fir_zero filtered_data_valid",-1);
	vcdp->declBus  (c+13,"IIR_I_Filter fir_zero filtered_data_payload_0",-1,28,0);
	vcdp->declBit  (c+58,"IIR_I_Filter fir_zero clk",-1);
	vcdp->declBit  (c+59,"IIR_I_Filter fir_zero reset",-1);
	vcdp->declBit  (c+12,"IIR_I_Filter fir_zero directFIRCore_2_filtered_data_valid",-1);
	vcdp->declBus  (c+13,"IIR_I_Filter fir_zero directFIRCore_2_filtered_data_payload",-1,28,0);
	vcdp->declBus  (c+1,"IIR_I_Filter fir_zero coff_mem_0",-1,6,0);
	vcdp->declBus  (c+2,"IIR_I_Filter fir_zero coff_mem_1",-1,6,0);
	vcdp->declBus  (c+3,"IIR_I_Filter fir_zero coff_mem_2",-1,6,0);
	vcdp->declBus  (c+4,"IIR_I_Filter fir_zero coff_mem_3",-1,6,0);
	vcdp->declBus  (c+4,"IIR_I_Filter fir_zero coff_mem_4",-1,6,0);
	vcdp->declBus  (c+3,"IIR_I_Filter fir_zero coff_mem_5",-1,6,0);
	vcdp->declBus  (c+2,"IIR_I_Filter fir_zero coff_mem_6",-1,6,0);
	vcdp->declBus  (c+1,"IIR_I_Filter fir_zero coff_mem_7",-1,6,0);
	vcdp->declBit  (c+12,"IIR_I_Filter fir_zero filtered_valid_vec_0",-1);
	vcdp->declBit  (c+54,"IIR_I_Filter fir_zero directFIRCore_2 raw_data_valid",-1);
	vcdp->declBus  (c+55,"IIR_I_Filter fir_zero directFIRCore_2 raw_data_payload",-1,11,0);
	vcdp->declBus  (c+1,"IIR_I_Filter fir_zero directFIRCore_2 coff_data_0",-1,6,0);
	vcdp->declBus  (c+2,"IIR_I_Filter fir_zero directFIRCore_2 coff_data_1",-1,6,0);
	vcdp->declBus  (c+3,"IIR_I_Filter fir_zero directFIRCore_2 coff_data_2",-1,6,0);
	vcdp->declBus  (c+4,"IIR_I_Filter fir_zero directFIRCore_2 coff_data_3",-1,6,0);
	vcdp->declBus  (c+4,"IIR_I_Filter fir_zero directFIRCore_2 coff_data_4",-1,6,0);
	vcdp->declBus  (c+3,"IIR_I_Filter fir_zero directFIRCore_2 coff_data_5",-1,6,0);
	vcdp->declBus  (c+2,"IIR_I_Filter fir_zero directFIRCore_2 coff_data_6",-1,6,0);
	vcdp->declBus  (c+1,"IIR_I_Filter fir_zero directFIRCore_2 coff_data_7",-1,6,0);
	vcdp->declBit  (c+12,"IIR_I_Filter fir_zero directFIRCore_2 filtered_data_valid",-1);
	vcdp->declBus  (c+13,"IIR_I_Filter fir_zero directFIRCore_2 filtered_data_payload",-1,28,0);
	vcdp->declBit  (c+58,"IIR_I_Filter fir_zero directFIRCore_2 clk",-1);
	vcdp->declBit  (c+59,"IIR_I_Filter fir_zero directFIRCore_2 reset",-1);
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_internal_en // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:291
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_mult_data_vec_0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:292
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_mult_data_vec_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:293
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_mult_data_vec_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:294
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_mult_data_vec_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:295
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_mult_data_vec_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:296
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_mult_data_vec_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:297
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_mult_data_vec_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:298
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_mult_data_vec_7 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:299
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_sum_result // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:300
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_sum_result_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:301
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_sum_result_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:302
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_sum_result_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:303
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_sum_result_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:304
	// Tracing: IIR_I_Filter fir_zero directFIRCore_2 _zz_sum_result_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:305
	vcdp->declBus  (c+18,"IIR_I_Filter fir_zero directFIRCore_2 internal_en",-1,2,0);
	vcdp->declBus  (c+19,"IIR_I_Filter fir_zero directFIRCore_2 raw_data_vec_0",-1,11,0);
	vcdp->declBus  (c+20,"IIR_I_Filter fir_zero directFIRCore_2 raw_data_vec_1",-1,11,0);
	vcdp->declBus  (c+21,"IIR_I_Filter fir_zero directFIRCore_2 raw_data_vec_2",-1,11,0);
	vcdp->declBus  (c+22,"IIR_I_Filter fir_zero directFIRCore_2 raw_data_vec_3",-1,11,0);
	vcdp->declBus  (c+23,"IIR_I_Filter fir_zero directFIRCore_2 raw_data_vec_4",-1,11,0);
	vcdp->declBus  (c+24,"IIR_I_Filter fir_zero directFIRCore_2 raw_data_vec_5",-1,11,0);
	vcdp->declBus  (c+25,"IIR_I_Filter fir_zero directFIRCore_2 raw_data_vec_6",-1,11,0);
	vcdp->declBus  (c+26,"IIR_I_Filter fir_zero directFIRCore_2 raw_data_vec_7",-1,11,0);
	vcdp->declBus  (c+27,"IIR_I_Filter fir_zero directFIRCore_2 mult_data_vec_0",-1,28,0);
	vcdp->declBus  (c+28,"IIR_I_Filter fir_zero directFIRCore_2 mult_data_vec_1",-1,28,0);
	vcdp->declBus  (c+29,"IIR_I_Filter fir_zero directFIRCore_2 mult_data_vec_2",-1,28,0);
	vcdp->declBus  (c+30,"IIR_I_Filter fir_zero directFIRCore_2 mult_data_vec_3",-1,28,0);
	vcdp->declBus  (c+31,"IIR_I_Filter fir_zero directFIRCore_2 mult_data_vec_4",-1,28,0);
	vcdp->declBus  (c+32,"IIR_I_Filter fir_zero directFIRCore_2 mult_data_vec_5",-1,28,0);
	vcdp->declBus  (c+33,"IIR_I_Filter fir_zero directFIRCore_2 mult_data_vec_6",-1,28,0);
	vcdp->declBus  (c+34,"IIR_I_Filter fir_zero directFIRCore_2 mult_data_vec_7",-1,28,0);
	vcdp->declBit  (c+35,"IIR_I_Filter fir_zero directFIRCore_2 when_DirectFIR_l29",-1);
	vcdp->declBus  (c+13,"IIR_I_Filter fir_zero directFIRCore_2 sum_result",-1,28,0);
	vcdp->declBit  (c+36,"IIR_I_Filter fir_zero directFIRCore_2 when_DirectFIR_l35",-1);
	vcdp->declBit  (c+17,"IIR_I_Filter fir_pole raw_data_valid",-1);
	vcdp->declBus  (c+16,"IIR_I_Filter fir_pole raw_data_payload_0",-1,28,0);
	vcdp->declBit  (c+14,"IIR_I_Filter fir_pole filtered_data_valid",-1);
	vcdp->declBus  (c+15,"IIR_I_Filter fir_pole filtered_data_payload_0",-1,28,0);
	vcdp->declBit  (c+58,"IIR_I_Filter fir_pole clk",-1);
	vcdp->declBit  (c+59,"IIR_I_Filter fir_pole reset",-1);
	vcdp->declBit  (c+14,"IIR_I_Filter fir_pole directFIRCore_2_filtered_data_valid",-1);
	vcdp->declBus  (c+15,"IIR_I_Filter fir_pole directFIRCore_2_filtered_data_payload",-1,28,0);
	vcdp->declBus  (c+5,"IIR_I_Filter fir_pole coff_mem_0",-1,11,0);
	vcdp->declBus  (c+6,"IIR_I_Filter fir_pole coff_mem_1",-1,11,0);
	vcdp->declBus  (c+7,"IIR_I_Filter fir_pole coff_mem_2",-1,11,0);
	vcdp->declBus  (c+8,"IIR_I_Filter fir_pole coff_mem_3",-1,11,0);
	vcdp->declBus  (c+9,"IIR_I_Filter fir_pole coff_mem_4",-1,11,0);
	vcdp->declBus  (c+10,"IIR_I_Filter fir_pole coff_mem_5",-1,11,0);
	vcdp->declBus  (c+11,"IIR_I_Filter fir_pole coff_mem_6",-1,11,0);
	vcdp->declBit  (c+14,"IIR_I_Filter fir_pole filtered_valid_vec_0",-1);
	vcdp->declBit  (c+17,"IIR_I_Filter fir_pole directFIRCore_2 raw_data_valid",-1);
	vcdp->declBus  (c+16,"IIR_I_Filter fir_pole directFIRCore_2 raw_data_payload",-1,28,0);
	vcdp->declBus  (c+5,"IIR_I_Filter fir_pole directFIRCore_2 coff_data_0",-1,11,0);
	vcdp->declBus  (c+6,"IIR_I_Filter fir_pole directFIRCore_2 coff_data_1",-1,11,0);
	vcdp->declBus  (c+7,"IIR_I_Filter fir_pole directFIRCore_2 coff_data_2",-1,11,0);
	vcdp->declBus  (c+8,"IIR_I_Filter fir_pole directFIRCore_2 coff_data_3",-1,11,0);
	vcdp->declBus  (c+9,"IIR_I_Filter fir_pole directFIRCore_2 coff_data_4",-1,11,0);
	vcdp->declBus  (c+10,"IIR_I_Filter fir_pole directFIRCore_2 coff_data_5",-1,11,0);
	vcdp->declBus  (c+11,"IIR_I_Filter fir_pole directFIRCore_2 coff_data_6",-1,11,0);
	vcdp->declBit  (c+14,"IIR_I_Filter fir_pole directFIRCore_2 filtered_data_valid",-1);
	vcdp->declBus  (c+15,"IIR_I_Filter fir_pole directFIRCore_2 filtered_data_payload",-1,28,0);
	vcdp->declBit  (c+58,"IIR_I_Filter fir_pole directFIRCore_2 clk",-1);
	vcdp->declBit  (c+59,"IIR_I_Filter fir_pole directFIRCore_2 reset",-1);
	// Tracing: IIR_I_Filter fir_pole directFIRCore_2 _zz_internal_en // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:179
	// Tracing: IIR_I_Filter fir_pole directFIRCore_2 _zz_mult_data_vec_0 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:180
	// Tracing: IIR_I_Filter fir_pole directFIRCore_2 _zz_mult_data_vec_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:181
	// Tracing: IIR_I_Filter fir_pole directFIRCore_2 _zz_mult_data_vec_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:182
	// Tracing: IIR_I_Filter fir_pole directFIRCore_2 _zz_mult_data_vec_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:183
	// Tracing: IIR_I_Filter fir_pole directFIRCore_2 _zz_mult_data_vec_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:184
	// Tracing: IIR_I_Filter fir_pole directFIRCore_2 _zz_mult_data_vec_5 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:185
	// Tracing: IIR_I_Filter fir_pole directFIRCore_2 _zz_mult_data_vec_6 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:186
	// Tracing: IIR_I_Filter fir_pole directFIRCore_2 _zz_sum_result // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:187
	// Tracing: IIR_I_Filter fir_pole directFIRCore_2 _zz_sum_result_1 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:188
	// Tracing: IIR_I_Filter fir_pole directFIRCore_2 _zz_sum_result_2 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:189
	// Tracing: IIR_I_Filter fir_pole directFIRCore_2 _zz_sum_result_3 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:190
	// Tracing: IIR_I_Filter fir_pole directFIRCore_2 _zz_sum_result_4 // Ignored: Inlined leading underscore at /home/crystal/project/MAGI_PROJECT/tmp/job_1/IIR_I_Filter.v:191
	vcdp->declBus  (c+37,"IIR_I_Filter fir_pole directFIRCore_2 internal_en",-1,2,0);
	vcdp->declBus  (c+38,"IIR_I_Filter fir_pole directFIRCore_2 raw_data_vec_0",-1,28,0);
	vcdp->declBus  (c+39,"IIR_I_Filter fir_pole directFIRCore_2 raw_data_vec_1",-1,28,0);
	vcdp->declBus  (c+40,"IIR_I_Filter fir_pole directFIRCore_2 raw_data_vec_2",-1,28,0);
	vcdp->declBus  (c+41,"IIR_I_Filter fir_pole directFIRCore_2 raw_data_vec_3",-1,28,0);
	vcdp->declBus  (c+42,"IIR_I_Filter fir_pole directFIRCore_2 raw_data_vec_4",-1,28,0);
	vcdp->declBus  (c+43,"IIR_I_Filter fir_pole directFIRCore_2 raw_data_vec_5",-1,28,0);
	vcdp->declBus  (c+44,"IIR_I_Filter fir_pole directFIRCore_2 raw_data_vec_6",-1,28,0);
	vcdp->declBus  (c+45,"IIR_I_Filter fir_pole directFIRCore_2 mult_data_vec_0",-1,28,0);
	vcdp->declBus  (c+46,"IIR_I_Filter fir_pole directFIRCore_2 mult_data_vec_1",-1,28,0);
	vcdp->declBus  (c+47,"IIR_I_Filter fir_pole directFIRCore_2 mult_data_vec_2",-1,28,0);
	vcdp->declBus  (c+48,"IIR_I_Filter fir_pole directFIRCore_2 mult_data_vec_3",-1,28,0);
	vcdp->declBus  (c+49,"IIR_I_Filter fir_pole directFIRCore_2 mult_data_vec_4",-1,28,0);
	vcdp->declBus  (c+50,"IIR_I_Filter fir_pole directFIRCore_2 mult_data_vec_5",-1,28,0);
	vcdp->declBus  (c+51,"IIR_I_Filter fir_pole directFIRCore_2 mult_data_vec_6",-1,28,0);
	vcdp->declBit  (c+52,"IIR_I_Filter fir_pole directFIRCore_2 when_DirectFIR_l29",-1);
	vcdp->declBus  (c+15,"IIR_I_Filter fir_pole directFIRCore_2 sum_result",-1,28,0);
	vcdp->declBit  (c+53,"IIR_I_Filter fir_pole directFIRCore_2 when_DirectFIR_l35",-1);
    }
}

void VIIR_I_Filter::traceFullThis__1(VIIR_I_Filter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VIIR_I_Filter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_0),7);
	vcdp->fullBus  (c+2,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_1),7);
	vcdp->fullBus  (c+3,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_2),7);
	vcdp->fullBus  (c+4,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__coff_mem_3),7);
	vcdp->fullBus  (c+5,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_0),12);
	vcdp->fullBus  (c+6,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_1),12);
	vcdp->fullBus  (c+7,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_2),12);
	vcdp->fullBus  (c+8,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_3),12);
	vcdp->fullBus  (c+9,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_4),12);
	vcdp->fullBus  (c+10,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_5),12);
	vcdp->fullBus  (c+11,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__coff_mem_6),12);
	vcdp->fullBit  (c+12,((1U & ((IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en) 
				     >> 2U))));
	vcdp->fullBus  (c+13,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__sum_result),29);
	vcdp->fullBit  (c+14,((1U & ((IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en) 
				     >> 2U))));
	vcdp->fullBus  (c+15,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__sum_result),29);
	vcdp->fullBus  (c+16,(vlTOPp->IIR_I_Filter__DOT__filtered_data_vec_0),29);
	vcdp->fullBit  (c+17,(vlTOPp->IIR_I_Filter__DOT__filtered_valid_buf));
	vcdp->fullBus  (c+18,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en),3);
	vcdp->fullBus  (c+19,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_0),12);
	vcdp->fullBus  (c+20,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_1),12);
	vcdp->fullBus  (c+21,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_2),12);
	vcdp->fullBus  (c+22,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_3),12);
	vcdp->fullBus  (c+23,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_4),12);
	vcdp->fullBus  (c+24,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_5),12);
	vcdp->fullBus  (c+25,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_6),12);
	vcdp->fullBus  (c+26,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__raw_data_vec_7),12);
	vcdp->fullBus  (c+27,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_0),29);
	vcdp->fullBus  (c+28,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_1),29);
	vcdp->fullBus  (c+29,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_2),29);
	vcdp->fullBus  (c+30,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_3),29);
	vcdp->fullBus  (c+31,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_4),29);
	vcdp->fullBus  (c+32,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_5),29);
	vcdp->fullBus  (c+33,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_6),29);
	vcdp->fullBus  (c+34,(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__mult_data_vec_7),29);
	vcdp->fullBit  (c+35,((1U & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en))));
	vcdp->fullBit  (c+36,((1U & ((IData)(vlTOPp->IIR_I_Filter__DOT__fir_zero__DOT__directFIRCore_2__DOT__internal_en) 
				     >> 1U))));
	vcdp->fullBus  (c+37,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en),3);
	vcdp->fullBus  (c+38,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_0),29);
	vcdp->fullBus  (c+39,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_1),29);
	vcdp->fullBus  (c+40,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_2),29);
	vcdp->fullBus  (c+41,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_3),29);
	vcdp->fullBus  (c+42,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_4),29);
	vcdp->fullBus  (c+43,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_5),29);
	vcdp->fullBus  (c+44,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__raw_data_vec_6),29);
	vcdp->fullBus  (c+45,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_0),29);
	vcdp->fullBus  (c+46,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_1),29);
	vcdp->fullBus  (c+47,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_2),29);
	vcdp->fullBus  (c+48,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_3),29);
	vcdp->fullBus  (c+49,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_4),29);
	vcdp->fullBus  (c+50,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_5),29);
	vcdp->fullBus  (c+51,(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__mult_data_vec_6),29);
	vcdp->fullBit  (c+52,((1U & (IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en))));
	vcdp->fullBit  (c+53,((1U & ((IData)(vlTOPp->IIR_I_Filter__DOT__fir_pole__DOT__directFIRCore_2__DOT__internal_en) 
				     >> 1U))));
	vcdp->fullBit  (c+54,(vlTOPp->raw_data_valid));
	vcdp->fullBus  (c+55,(vlTOPp->raw_data_payload_0),12);
	vcdp->fullBit  (c+56,(vlTOPp->filtered_data_valid));
	vcdp->fullBus  (c+57,(vlTOPp->filtered_data_payload_0),29);
	vcdp->fullBit  (c+58,(vlTOPp->clk));
	vcdp->fullBit  (c+59,(vlTOPp->reset));
    }
}
