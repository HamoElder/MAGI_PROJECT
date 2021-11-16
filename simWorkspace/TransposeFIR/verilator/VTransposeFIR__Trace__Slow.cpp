// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTransposeFIR__Syms.h"


//======================

void VTransposeFIR::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VTransposeFIR::traceInit, &VTransposeFIR::traceFull, &VTransposeFIR::traceChg, this);
}
void VTransposeFIR::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTransposeFIR* t = (VTransposeFIR*)userthis;
    VTransposeFIR__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTransposeFIR::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTransposeFIR* t = (VTransposeFIR*)userthis;
    VTransposeFIR__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VTransposeFIR::traceInitThis(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VTransposeFIR::traceFullThis(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTransposeFIR::traceInitThis__1(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+257,"raw_data_valid", false,-1);
        vcdp->declBit(c+265,"raw_data_ready", false,-1);
        vcdp->declBus(c+273,"raw_data_payload_0", false,-1, 15,0);
        vcdp->declBit(c+281,"filtered_data_valid", false,-1);
        vcdp->declBus(c+289,"filtered_data_payload_0", false,-1, 23,0);
        vcdp->declBit(c+297,"clk", false,-1);
        vcdp->declBit(c+305,"reset", false,-1);
        vcdp->declBit(c+257,"TransposeFIR raw_data_valid", false,-1);
        vcdp->declBit(c+265,"TransposeFIR raw_data_ready", false,-1);
        vcdp->declBus(c+273,"TransposeFIR raw_data_payload_0", false,-1, 15,0);
        vcdp->declBit(c+281,"TransposeFIR filtered_data_valid", false,-1);
        vcdp->declBus(c+289,"TransposeFIR filtered_data_payload_0", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR reset", false,-1);
        vcdp->declBus(c+313,"TransposeFIR transposeCore_21_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+321,"TransposeFIR transposeCore_22_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+329,"TransposeFIR transposeCore_23_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+337,"TransposeFIR transposeCore_24_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+345,"TransposeFIR transposeCore_25_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+353,"TransposeFIR transposeCore_26_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+361,"TransposeFIR transposeCore_27_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+369,"TransposeFIR transposeCore_28_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+377,"TransposeFIR transposeCore_29_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+385,"TransposeFIR transposeCore_30_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+393,"TransposeFIR transposeCore_31_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+401,"TransposeFIR transposeCore_32_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+409,"TransposeFIR transposeCore_33_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+417,"TransposeFIR transposeCore_34_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+425,"TransposeFIR transposeCore_35_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+433,"TransposeFIR transposeCore_36_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+441,"TransposeFIR transposeCore_37_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+449,"TransposeFIR transposeCore_38_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+457,"TransposeFIR transposeCore_39_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+465,"TransposeFIR transposeCore_40_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+473,"TransposeFIR transposeCore_41_next_adder_data", false,-1, 23,0);
        vcdp->declBus(c+169,"TransposeFIR coff_mem_0", false,-1, 7,0);
        vcdp->declBus(c+177,"TransposeFIR coff_mem_1", false,-1, 7,0);
        vcdp->declBus(c+185,"TransposeFIR coff_mem_2", false,-1, 7,0);
        vcdp->declBus(c+193,"TransposeFIR coff_mem_3", false,-1, 7,0);
        vcdp->declBus(c+201,"TransposeFIR coff_mem_4", false,-1, 7,0);
        vcdp->declBus(c+209,"TransposeFIR coff_mem_5", false,-1, 7,0);
        vcdp->declBus(c+217,"TransposeFIR coff_mem_6", false,-1, 7,0);
        vcdp->declBus(c+225,"TransposeFIR coff_mem_7", false,-1, 7,0);
        vcdp->declBus(c+233,"TransposeFIR coff_mem_8", false,-1, 7,0);
        vcdp->declBus(c+241,"TransposeFIR coff_mem_9", false,-1, 7,0);
        vcdp->declBus(c+249,"TransposeFIR coff_mem_10", false,-1, 7,0);
        vcdp->declBus(c+241,"TransposeFIR coff_mem_11", false,-1, 7,0);
        vcdp->declBus(c+233,"TransposeFIR coff_mem_12", false,-1, 7,0);
        vcdp->declBus(c+225,"TransposeFIR coff_mem_13", false,-1, 7,0);
        vcdp->declBus(c+217,"TransposeFIR coff_mem_14", false,-1, 7,0);
        vcdp->declBus(c+209,"TransposeFIR coff_mem_15", false,-1, 7,0);
        vcdp->declBus(c+201,"TransposeFIR coff_mem_16", false,-1, 7,0);
        vcdp->declBus(c+193,"TransposeFIR coff_mem_17", false,-1, 7,0);
        vcdp->declBus(c+185,"TransposeFIR coff_mem_18", false,-1, 7,0);
        vcdp->declBus(c+177,"TransposeFIR coff_mem_19", false,-1, 7,0);
        vcdp->declBus(c+209,"TransposeFIR coff_mem_20", false,-1, 7,0);
        vcdp->declBit(c+257,"TransposeFIR filtered_data_valid_vec_0", false,-1);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_21 input_data", false,-1, 15,0);
        vcdp->declBus(c+169,"TransposeFIR transposeCore_21 coff_data", false,-1, 7,0);
        vcdp->declBus(c+481,"TransposeFIR transposeCore_21 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_21 valid", false,-1);
        vcdp->declBus(c+313,"TransposeFIR transposeCore_21 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_21 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_21 reset", false,-1);
        vcdp->declBus(c+1,"TransposeFIR transposeCore_21 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_22 input_data", false,-1, 15,0);
        vcdp->declBus(c+177,"TransposeFIR transposeCore_22 coff_data", false,-1, 7,0);
        vcdp->declBus(c+313,"TransposeFIR transposeCore_22 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_22 valid", false,-1);
        vcdp->declBus(c+321,"TransposeFIR transposeCore_22 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_22 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_22 reset", false,-1);
        vcdp->declBus(c+9,"TransposeFIR transposeCore_22 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_23 input_data", false,-1, 15,0);
        vcdp->declBus(c+185,"TransposeFIR transposeCore_23 coff_data", false,-1, 7,0);
        vcdp->declBus(c+321,"TransposeFIR transposeCore_23 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_23 valid", false,-1);
        vcdp->declBus(c+329,"TransposeFIR transposeCore_23 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_23 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_23 reset", false,-1);
        vcdp->declBus(c+17,"TransposeFIR transposeCore_23 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_24 input_data", false,-1, 15,0);
        vcdp->declBus(c+193,"TransposeFIR transposeCore_24 coff_data", false,-1, 7,0);
        vcdp->declBus(c+329,"TransposeFIR transposeCore_24 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_24 valid", false,-1);
        vcdp->declBus(c+337,"TransposeFIR transposeCore_24 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_24 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_24 reset", false,-1);
        vcdp->declBus(c+25,"TransposeFIR transposeCore_24 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_25 input_data", false,-1, 15,0);
        vcdp->declBus(c+201,"TransposeFIR transposeCore_25 coff_data", false,-1, 7,0);
        vcdp->declBus(c+337,"TransposeFIR transposeCore_25 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_25 valid", false,-1);
        vcdp->declBus(c+345,"TransposeFIR transposeCore_25 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_25 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_25 reset", false,-1);
        vcdp->declBus(c+33,"TransposeFIR transposeCore_25 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_26 input_data", false,-1, 15,0);
        vcdp->declBus(c+209,"TransposeFIR transposeCore_26 coff_data", false,-1, 7,0);
        vcdp->declBus(c+345,"TransposeFIR transposeCore_26 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_26 valid", false,-1);
        vcdp->declBus(c+353,"TransposeFIR transposeCore_26 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_26 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_26 reset", false,-1);
        vcdp->declBus(c+41,"TransposeFIR transposeCore_26 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_27 input_data", false,-1, 15,0);
        vcdp->declBus(c+217,"TransposeFIR transposeCore_27 coff_data", false,-1, 7,0);
        vcdp->declBus(c+353,"TransposeFIR transposeCore_27 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_27 valid", false,-1);
        vcdp->declBus(c+361,"TransposeFIR transposeCore_27 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_27 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_27 reset", false,-1);
        vcdp->declBus(c+49,"TransposeFIR transposeCore_27 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_28 input_data", false,-1, 15,0);
        vcdp->declBus(c+225,"TransposeFIR transposeCore_28 coff_data", false,-1, 7,0);
        vcdp->declBus(c+361,"TransposeFIR transposeCore_28 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_28 valid", false,-1);
        vcdp->declBus(c+369,"TransposeFIR transposeCore_28 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_28 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_28 reset", false,-1);
        vcdp->declBus(c+57,"TransposeFIR transposeCore_28 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_29 input_data", false,-1, 15,0);
        vcdp->declBus(c+233,"TransposeFIR transposeCore_29 coff_data", false,-1, 7,0);
        vcdp->declBus(c+369,"TransposeFIR transposeCore_29 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_29 valid", false,-1);
        vcdp->declBus(c+377,"TransposeFIR transposeCore_29 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_29 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_29 reset", false,-1);
        vcdp->declBus(c+65,"TransposeFIR transposeCore_29 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_30 input_data", false,-1, 15,0);
        vcdp->declBus(c+241,"TransposeFIR transposeCore_30 coff_data", false,-1, 7,0);
        vcdp->declBus(c+377,"TransposeFIR transposeCore_30 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_30 valid", false,-1);
        vcdp->declBus(c+385,"TransposeFIR transposeCore_30 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_30 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_30 reset", false,-1);
        vcdp->declBus(c+73,"TransposeFIR transposeCore_30 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_31 input_data", false,-1, 15,0);
        vcdp->declBus(c+249,"TransposeFIR transposeCore_31 coff_data", false,-1, 7,0);
        vcdp->declBus(c+385,"TransposeFIR transposeCore_31 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_31 valid", false,-1);
        vcdp->declBus(c+393,"TransposeFIR transposeCore_31 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_31 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_31 reset", false,-1);
        vcdp->declBus(c+81,"TransposeFIR transposeCore_31 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_32 input_data", false,-1, 15,0);
        vcdp->declBus(c+241,"TransposeFIR transposeCore_32 coff_data", false,-1, 7,0);
        vcdp->declBus(c+393,"TransposeFIR transposeCore_32 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_32 valid", false,-1);
        vcdp->declBus(c+401,"TransposeFIR transposeCore_32 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_32 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_32 reset", false,-1);
        vcdp->declBus(c+89,"TransposeFIR transposeCore_32 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_33 input_data", false,-1, 15,0);
        vcdp->declBus(c+233,"TransposeFIR transposeCore_33 coff_data", false,-1, 7,0);
        vcdp->declBus(c+401,"TransposeFIR transposeCore_33 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_33 valid", false,-1);
        vcdp->declBus(c+409,"TransposeFIR transposeCore_33 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_33 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_33 reset", false,-1);
        vcdp->declBus(c+97,"TransposeFIR transposeCore_33 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_34 input_data", false,-1, 15,0);
        vcdp->declBus(c+225,"TransposeFIR transposeCore_34 coff_data", false,-1, 7,0);
        vcdp->declBus(c+409,"TransposeFIR transposeCore_34 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_34 valid", false,-1);
        vcdp->declBus(c+417,"TransposeFIR transposeCore_34 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_34 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_34 reset", false,-1);
        vcdp->declBus(c+105,"TransposeFIR transposeCore_34 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_35 input_data", false,-1, 15,0);
        vcdp->declBus(c+217,"TransposeFIR transposeCore_35 coff_data", false,-1, 7,0);
        vcdp->declBus(c+417,"TransposeFIR transposeCore_35 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_35 valid", false,-1);
        vcdp->declBus(c+425,"TransposeFIR transposeCore_35 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_35 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_35 reset", false,-1);
        vcdp->declBus(c+113,"TransposeFIR transposeCore_35 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_36 input_data", false,-1, 15,0);
        vcdp->declBus(c+209,"TransposeFIR transposeCore_36 coff_data", false,-1, 7,0);
        vcdp->declBus(c+425,"TransposeFIR transposeCore_36 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_36 valid", false,-1);
        vcdp->declBus(c+433,"TransposeFIR transposeCore_36 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_36 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_36 reset", false,-1);
        vcdp->declBus(c+121,"TransposeFIR transposeCore_36 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_37 input_data", false,-1, 15,0);
        vcdp->declBus(c+201,"TransposeFIR transposeCore_37 coff_data", false,-1, 7,0);
        vcdp->declBus(c+433,"TransposeFIR transposeCore_37 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_37 valid", false,-1);
        vcdp->declBus(c+441,"TransposeFIR transposeCore_37 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_37 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_37 reset", false,-1);
        vcdp->declBus(c+129,"TransposeFIR transposeCore_37 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_38 input_data", false,-1, 15,0);
        vcdp->declBus(c+193,"TransposeFIR transposeCore_38 coff_data", false,-1, 7,0);
        vcdp->declBus(c+441,"TransposeFIR transposeCore_38 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_38 valid", false,-1);
        vcdp->declBus(c+449,"TransposeFIR transposeCore_38 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_38 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_38 reset", false,-1);
        vcdp->declBus(c+137,"TransposeFIR transposeCore_38 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_39 input_data", false,-1, 15,0);
        vcdp->declBus(c+185,"TransposeFIR transposeCore_39 coff_data", false,-1, 7,0);
        vcdp->declBus(c+449,"TransposeFIR transposeCore_39 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_39 valid", false,-1);
        vcdp->declBus(c+457,"TransposeFIR transposeCore_39 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_39 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_39 reset", false,-1);
        vcdp->declBus(c+145,"TransposeFIR transposeCore_39 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_40 input_data", false,-1, 15,0);
        vcdp->declBus(c+177,"TransposeFIR transposeCore_40 coff_data", false,-1, 7,0);
        vcdp->declBus(c+457,"TransposeFIR transposeCore_40 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_40 valid", false,-1);
        vcdp->declBus(c+465,"TransposeFIR transposeCore_40 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_40 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_40 reset", false,-1);
        vcdp->declBus(c+153,"TransposeFIR transposeCore_40 previous_adder_data", false,-1, 23,0);
        vcdp->declBus(c+273,"TransposeFIR transposeCore_41 input_data", false,-1, 15,0);
        vcdp->declBus(c+209,"TransposeFIR transposeCore_41 coff_data", false,-1, 7,0);
        vcdp->declBus(c+465,"TransposeFIR transposeCore_41 adder_data", false,-1, 23,0);
        vcdp->declBit(c+257,"TransposeFIR transposeCore_41 valid", false,-1);
        vcdp->declBus(c+473,"TransposeFIR transposeCore_41 next_adder_data", false,-1, 23,0);
        vcdp->declBit(c+297,"TransposeFIR transposeCore_41 clk", false,-1);
        vcdp->declBit(c+305,"TransposeFIR transposeCore_41 reset", false,-1);
        vcdp->declBus(c+161,"TransposeFIR transposeCore_41 previous_adder_data", false,-1, 23,0);
    }
}

void VTransposeFIR::traceFullThis__1(VTransposeFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTransposeFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->TransposeFIR__DOT__transposeCore_21__DOT__previous_adder_data),24);
        vcdp->fullBus(c+9,(vlTOPp->TransposeFIR__DOT__transposeCore_22__DOT__previous_adder_data),24);
        vcdp->fullBus(c+17,(vlTOPp->TransposeFIR__DOT__transposeCore_23__DOT__previous_adder_data),24);
        vcdp->fullBus(c+25,(vlTOPp->TransposeFIR__DOT__transposeCore_24__DOT__previous_adder_data),24);
        vcdp->fullBus(c+33,(vlTOPp->TransposeFIR__DOT__transposeCore_25__DOT__previous_adder_data),24);
        vcdp->fullBus(c+41,(vlTOPp->TransposeFIR__DOT__transposeCore_26__DOT__previous_adder_data),24);
        vcdp->fullBus(c+49,(vlTOPp->TransposeFIR__DOT__transposeCore_27__DOT__previous_adder_data),24);
        vcdp->fullBus(c+57,(vlTOPp->TransposeFIR__DOT__transposeCore_28__DOT__previous_adder_data),24);
        vcdp->fullBus(c+65,(vlTOPp->TransposeFIR__DOT__transposeCore_29__DOT__previous_adder_data),24);
        vcdp->fullBus(c+73,(vlTOPp->TransposeFIR__DOT__transposeCore_30__DOT__previous_adder_data),24);
        vcdp->fullBus(c+81,(vlTOPp->TransposeFIR__DOT__transposeCore_31__DOT__previous_adder_data),24);
        vcdp->fullBus(c+89,(vlTOPp->TransposeFIR__DOT__transposeCore_32__DOT__previous_adder_data),24);
        vcdp->fullBus(c+97,(vlTOPp->TransposeFIR__DOT__transposeCore_33__DOT__previous_adder_data),24);
        vcdp->fullBus(c+105,(vlTOPp->TransposeFIR__DOT__transposeCore_34__DOT__previous_adder_data),24);
        vcdp->fullBus(c+113,(vlTOPp->TransposeFIR__DOT__transposeCore_35__DOT__previous_adder_data),24);
        vcdp->fullBus(c+121,(vlTOPp->TransposeFIR__DOT__transposeCore_36__DOT__previous_adder_data),24);
        vcdp->fullBus(c+129,(vlTOPp->TransposeFIR__DOT__transposeCore_37__DOT__previous_adder_data),24);
        vcdp->fullBus(c+137,(vlTOPp->TransposeFIR__DOT__transposeCore_38__DOT__previous_adder_data),24);
        vcdp->fullBus(c+145,(vlTOPp->TransposeFIR__DOT__transposeCore_39__DOT__previous_adder_data),24);
        vcdp->fullBus(c+153,(vlTOPp->TransposeFIR__DOT__transposeCore_40__DOT__previous_adder_data),24);
        vcdp->fullBus(c+161,(vlTOPp->TransposeFIR__DOT__transposeCore_41__DOT__previous_adder_data),24);
        vcdp->fullBus(c+169,(vlTOPp->TransposeFIR__DOT__coff_mem_0),8);
        vcdp->fullBus(c+177,(vlTOPp->TransposeFIR__DOT__coff_mem_1),8);
        vcdp->fullBus(c+185,(vlTOPp->TransposeFIR__DOT__coff_mem_2),8);
        vcdp->fullBus(c+193,(vlTOPp->TransposeFIR__DOT__coff_mem_3),8);
        vcdp->fullBus(c+201,(vlTOPp->TransposeFIR__DOT__coff_mem_4),8);
        vcdp->fullBus(c+209,(vlTOPp->TransposeFIR__DOT__coff_mem_5),8);
        vcdp->fullBus(c+217,(vlTOPp->TransposeFIR__DOT__coff_mem_6),8);
        vcdp->fullBus(c+225,(vlTOPp->TransposeFIR__DOT__coff_mem_7),8);
        vcdp->fullBus(c+233,(vlTOPp->TransposeFIR__DOT__coff_mem_8),8);
        vcdp->fullBus(c+241,(vlTOPp->TransposeFIR__DOT__coff_mem_9),8);
        vcdp->fullBus(c+249,(vlTOPp->TransposeFIR__DOT__coff_mem_10),8);
        vcdp->fullBit(c+257,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+265,(vlTOPp->raw_data_ready));
        vcdp->fullBus(c+273,(vlTOPp->raw_data_payload_0),16);
        vcdp->fullBit(c+281,(vlTOPp->filtered_data_valid));
        vcdp->fullBus(c+289,(vlTOPp->filtered_data_payload_0),24);
        vcdp->fullBit(c+297,(vlTOPp->clk));
        vcdp->fullBit(c+305,(vlTOPp->reset));
        vcdp->fullBus(c+313,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_0)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_21__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+321,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_1)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_22__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+329,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_2)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_23__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+337,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_3)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_24__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+345,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_4)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_25__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+353,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_26__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+361,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_6)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_27__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+369,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_7)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_28__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+377,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_8)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_29__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+385,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_9)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_30__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+393,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_10)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_31__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+401,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_9)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_32__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+409,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_8)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_33__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+417,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_7)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_34__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+425,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_6)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_35__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+433,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_36__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+441,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_4)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_37__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+449,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_3)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_38__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+457,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_2)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_39__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+465,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_1)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_40__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+473,((0xffffffU & (VL_MULS_III(24,24,24, 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,16, (IData)(vlTOPp->raw_data_payload_0))), 
                                                       (0xffffffU 
                                                        & VL_EXTENDS_II(24,8, (IData)(vlTOPp->TransposeFIR__DOT__coff_mem_5)))) 
                                           + vlTOPp->TransposeFIR__DOT__transposeCore_41__DOT__previous_adder_data))),24);
        vcdp->fullBus(c+481,(0U),24);
    }
}
