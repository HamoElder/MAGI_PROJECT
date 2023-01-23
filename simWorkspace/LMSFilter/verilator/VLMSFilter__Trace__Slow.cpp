// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLMSFilter__Syms.h"


//======================

void VLMSFilter::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VLMSFilter::traceInit, &VLMSFilter::traceFull, &VLMSFilter::traceChg, this);
}
void VLMSFilter::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VLMSFilter* t = (VLMSFilter*)userthis;
    VLMSFilter__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VLMSFilter::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VLMSFilter* t = (VLMSFilter*)userthis;
    VLMSFilter__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VLMSFilter::traceInitThis(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VLMSFilter::traceFullThis(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VLMSFilter::traceInitThis__1(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+745,"raw_data_valid", false,-1);
        vcdp->declBit(c+753,"raw_data_ready", false,-1);
        vcdp->declBit(c+761,"raw_data_payload_last", false,-1);
        vcdp->declBus(c+769,"raw_data_payload_fragment", false,-1, 8,0);
        vcdp->declBit(c+777,"filtered_data_valid", false,-1);
        vcdp->declBit(c+785,"filtered_data_payload_last", false,-1);
        vcdp->declBus(c+793,"filtered_data_payload_fragment", false,-1, 19,0);
        vcdp->declBit(c+801,"train_en", false,-1);
        vcdp->declBit(c+809,"clk", false,-1);
        vcdp->declBit(c+817,"reset", false,-1);
        vcdp->declBit(c+745,"LMSFilter raw_data_valid", false,-1);
        vcdp->declBit(c+753,"LMSFilter raw_data_ready", false,-1);
        vcdp->declBit(c+761,"LMSFilter raw_data_payload_last", false,-1);
        vcdp->declBus(c+769,"LMSFilter raw_data_payload_fragment", false,-1, 8,0);
        vcdp->declBit(c+777,"LMSFilter filtered_data_valid", false,-1);
        vcdp->declBit(c+785,"LMSFilter filtered_data_payload_last", false,-1);
        vcdp->declBus(c+793,"LMSFilter filtered_data_payload_fragment", false,-1, 19,0);
        vcdp->declBit(c+801,"LMSFilter train_en", false,-1);
        vcdp->declBit(c+809,"LMSFilter clk", false,-1);
        vcdp->declBit(c+817,"LMSFilter reset", false,-1);
        vcdp->declBit(c+289,"LMSFilter raw_data_ready_1", false,-1);
        vcdp->declBus(c+297,"LMSFilter coff_mem_0", false,-1, 18,0);
        vcdp->declBus(c+305,"LMSFilter coff_mem_1", false,-1, 18,0);
        vcdp->declBus(c+313,"LMSFilter coff_mem_2", false,-1, 18,0);
        vcdp->declBus(c+321,"LMSFilter coff_mem_3", false,-1, 18,0);
        vcdp->declBus(c+329,"LMSFilter coff_mem_4", false,-1, 18,0);
        vcdp->declBus(c+337,"LMSFilter coff_mem_5", false,-1, 18,0);
        vcdp->declBus(c+345,"LMSFilter coff_mem_6", false,-1, 18,0);
        vcdp->declBus(c+353,"LMSFilter coff_mem_7", false,-1, 18,0);
        vcdp->declBus(c+361,"LMSFilter coff_mem_8", false,-1, 18,0);
        vcdp->declBus(c+369,"LMSFilter coff_mem_9", false,-1, 18,0);
        vcdp->declBus(c+377,"LMSFilter coff_mem_10", false,-1, 18,0);
        vcdp->declBus(c+385,"LMSFilter coff_mem_11", false,-1, 18,0);
        vcdp->declBus(c+393,"LMSFilter coff_mem_12", false,-1, 18,0);
        vcdp->declBus(c+401,"LMSFilter coff_mem_13", false,-1, 18,0);
        vcdp->declBus(c+409,"LMSFilter coff_mem_14", false,-1, 18,0);
        vcdp->declBus(c+417,"LMSFilter coff_mem_15", false,-1, 18,0);
        vcdp->declBus(c+617,"LMSFilter raw_data_vec_0", false,-1, 8,0);
        vcdp->declBus(c+625,"LMSFilter raw_data_vec_1", false,-1, 8,0);
        vcdp->declBus(c+633,"LMSFilter raw_data_vec_2", false,-1, 8,0);
        vcdp->declBus(c+641,"LMSFilter raw_data_vec_3", false,-1, 8,0);
        vcdp->declBus(c+649,"LMSFilter raw_data_vec_4", false,-1, 8,0);
        vcdp->declBus(c+657,"LMSFilter raw_data_vec_5", false,-1, 8,0);
        vcdp->declBus(c+665,"LMSFilter raw_data_vec_6", false,-1, 8,0);
        vcdp->declBus(c+673,"LMSFilter raw_data_vec_7", false,-1, 8,0);
        vcdp->declBus(c+681,"LMSFilter raw_data_vec_8", false,-1, 8,0);
        vcdp->declBus(c+689,"LMSFilter raw_data_vec_9", false,-1, 8,0);
        vcdp->declBus(c+697,"LMSFilter raw_data_vec_10", false,-1, 8,0);
        vcdp->declBus(c+705,"LMSFilter raw_data_vec_11", false,-1, 8,0);
        vcdp->declBus(c+713,"LMSFilter raw_data_vec_12", false,-1, 8,0);
        vcdp->declBus(c+721,"LMSFilter raw_data_vec_13", false,-1, 8,0);
        vcdp->declBus(c+729,"LMSFilter raw_data_vec_14", false,-1, 8,0);
        vcdp->declBus(c+737,"LMSFilter raw_data_vec_15", false,-1, 8,0);
        vcdp->declBus(c+425,"LMSFilter mult_data_vec_0", false,-1, 19,0);
        vcdp->declBus(c+433,"LMSFilter mult_data_vec_1", false,-1, 19,0);
        vcdp->declBus(c+441,"LMSFilter mult_data_vec_2", false,-1, 19,0);
        vcdp->declBus(c+449,"LMSFilter mult_data_vec_3", false,-1, 19,0);
        vcdp->declBus(c+457,"LMSFilter mult_data_vec_4", false,-1, 19,0);
        vcdp->declBus(c+465,"LMSFilter mult_data_vec_5", false,-1, 19,0);
        vcdp->declBus(c+473,"LMSFilter mult_data_vec_6", false,-1, 19,0);
        vcdp->declBus(c+481,"LMSFilter mult_data_vec_7", false,-1, 19,0);
        vcdp->declBus(c+489,"LMSFilter mult_data_vec_8", false,-1, 19,0);
        vcdp->declBus(c+497,"LMSFilter mult_data_vec_9", false,-1, 19,0);
        vcdp->declBus(c+505,"LMSFilter mult_data_vec_10", false,-1, 19,0);
        vcdp->declBus(c+513,"LMSFilter mult_data_vec_11", false,-1, 19,0);
        vcdp->declBus(c+521,"LMSFilter mult_data_vec_12", false,-1, 19,0);
        vcdp->declBus(c+529,"LMSFilter mult_data_vec_13", false,-1, 19,0);
        vcdp->declBus(c+537,"LMSFilter mult_data_vec_14", false,-1, 19,0);
        vcdp->declBus(c+545,"LMSFilter mult_data_vec_15", false,-1, 19,0);
        vcdp->declBit(c+273,"LMSFilter raw_data_fire", false,-1);
        vcdp->declBus(c+553,"LMSFilter sum_result", false,-1, 19,0);
        vcdp->declBit(c+825,"LMSFilter raw_data_fire_1", false,-1);
        vcdp->declBit(c+561,"LMSFilter raw_data_fire_1_delay_1", false,-1);
        vcdp->declBit(c+569,"LMSFilter raw_data_fire_1_delay_2", false,-1);
        vcdp->declBit(c+577,"LMSFilter raw_data_fire_1_delay_3", false,-1);
        vcdp->declBit(c+585,"LMSFilter raw_data_payload_last_delay_1", false,-1);
        vcdp->declBit(c+593,"LMSFilter raw_data_payload_last_delay_2", false,-1);
        vcdp->declBit(c+601,"LMSFilter raw_data_payload_last_delay_3", false,-1);
        vcdp->declBus(c+609,"LMSFilter cnt", false,-1, 4,0);
        vcdp->declBus(c+281,"LMSFilter ref_data_indicator", false,-1, 19,0);
        vcdp->declBus(c+257,"LMSFilter error_measured", false,-1, 19,0);
        vcdp->declBit(c+825,"LMSFilter raw_data_fire_2", false,-1);
        vcdp->declBit(c+265,"LMSFilter when_LMSFilter_l78", false,-1);
        {int i; for (i=0; i<32; i++) {
                vcdp->declBus(c+1+i*1,"LMSFilter ref_mem", true,(i+0), 19,0);}}
    }
}

void VLMSFilter::traceFullThis__1(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->LMSFilter__DOT__ref_mem[0]),20);
        vcdp->fullBus(c+2,(vlTOPp->LMSFilter__DOT__ref_mem[1]),20);
        vcdp->fullBus(c+3,(vlTOPp->LMSFilter__DOT__ref_mem[2]),20);
        vcdp->fullBus(c+4,(vlTOPp->LMSFilter__DOT__ref_mem[3]),20);
        vcdp->fullBus(c+5,(vlTOPp->LMSFilter__DOT__ref_mem[4]),20);
        vcdp->fullBus(c+6,(vlTOPp->LMSFilter__DOT__ref_mem[5]),20);
        vcdp->fullBus(c+7,(vlTOPp->LMSFilter__DOT__ref_mem[6]),20);
        vcdp->fullBus(c+8,(vlTOPp->LMSFilter__DOT__ref_mem[7]),20);
        vcdp->fullBus(c+9,(vlTOPp->LMSFilter__DOT__ref_mem[8]),20);
        vcdp->fullBus(c+10,(vlTOPp->LMSFilter__DOT__ref_mem[9]),20);
        vcdp->fullBus(c+11,(vlTOPp->LMSFilter__DOT__ref_mem[10]),20);
        vcdp->fullBus(c+12,(vlTOPp->LMSFilter__DOT__ref_mem[11]),20);
        vcdp->fullBus(c+13,(vlTOPp->LMSFilter__DOT__ref_mem[12]),20);
        vcdp->fullBus(c+14,(vlTOPp->LMSFilter__DOT__ref_mem[13]),20);
        vcdp->fullBus(c+15,(vlTOPp->LMSFilter__DOT__ref_mem[14]),20);
        vcdp->fullBus(c+16,(vlTOPp->LMSFilter__DOT__ref_mem[15]),20);
        vcdp->fullBus(c+17,(vlTOPp->LMSFilter__DOT__ref_mem[16]),20);
        vcdp->fullBus(c+18,(vlTOPp->LMSFilter__DOT__ref_mem[17]),20);
        vcdp->fullBus(c+19,(vlTOPp->LMSFilter__DOT__ref_mem[18]),20);
        vcdp->fullBus(c+20,(vlTOPp->LMSFilter__DOT__ref_mem[19]),20);
        vcdp->fullBus(c+21,(vlTOPp->LMSFilter__DOT__ref_mem[20]),20);
        vcdp->fullBus(c+22,(vlTOPp->LMSFilter__DOT__ref_mem[21]),20);
        vcdp->fullBus(c+23,(vlTOPp->LMSFilter__DOT__ref_mem[22]),20);
        vcdp->fullBus(c+24,(vlTOPp->LMSFilter__DOT__ref_mem[23]),20);
        vcdp->fullBus(c+25,(vlTOPp->LMSFilter__DOT__ref_mem[24]),20);
        vcdp->fullBus(c+26,(vlTOPp->LMSFilter__DOT__ref_mem[25]),20);
        vcdp->fullBus(c+27,(vlTOPp->LMSFilter__DOT__ref_mem[26]),20);
        vcdp->fullBus(c+28,(vlTOPp->LMSFilter__DOT__ref_mem[27]),20);
        vcdp->fullBus(c+29,(vlTOPp->LMSFilter__DOT__ref_mem[28]),20);
        vcdp->fullBus(c+30,(vlTOPp->LMSFilter__DOT__ref_mem[29]),20);
        vcdp->fullBus(c+31,(vlTOPp->LMSFilter__DOT__ref_mem[30]),20);
        vcdp->fullBus(c+32,(vlTOPp->LMSFilter__DOT__ref_mem[31]),20);
        vcdp->fullBus(c+257,(vlTOPp->LMSFilter__DOT__error_measured),20);
        vcdp->fullBit(c+265,(vlTOPp->LMSFilter__DOT__when_LMSFilter_l78));
        vcdp->fullBit(c+273,(vlTOPp->LMSFilter__DOT__raw_data_fire));
        vcdp->fullBus(c+281,(vlTOPp->LMSFilter__DOT___zz_ref_mem_port0),20);
        vcdp->fullBit(c+289,(vlTOPp->LMSFilter__DOT__raw_data_ready_1));
        vcdp->fullBus(c+297,(vlTOPp->LMSFilter__DOT__coff_mem_0),19);
        vcdp->fullBus(c+305,(vlTOPp->LMSFilter__DOT__coff_mem_1),19);
        vcdp->fullBus(c+313,(vlTOPp->LMSFilter__DOT__coff_mem_2),19);
        vcdp->fullBus(c+321,(vlTOPp->LMSFilter__DOT__coff_mem_3),19);
        vcdp->fullBus(c+329,(vlTOPp->LMSFilter__DOT__coff_mem_4),19);
        vcdp->fullBus(c+337,(vlTOPp->LMSFilter__DOT__coff_mem_5),19);
        vcdp->fullBus(c+345,(vlTOPp->LMSFilter__DOT__coff_mem_6),19);
        vcdp->fullBus(c+353,(vlTOPp->LMSFilter__DOT__coff_mem_7),19);
        vcdp->fullBus(c+361,(vlTOPp->LMSFilter__DOT__coff_mem_8),19);
        vcdp->fullBus(c+369,(vlTOPp->LMSFilter__DOT__coff_mem_9),19);
        vcdp->fullBus(c+377,(vlTOPp->LMSFilter__DOT__coff_mem_10),19);
        vcdp->fullBus(c+385,(vlTOPp->LMSFilter__DOT__coff_mem_11),19);
        vcdp->fullBus(c+393,(vlTOPp->LMSFilter__DOT__coff_mem_12),19);
        vcdp->fullBus(c+401,(vlTOPp->LMSFilter__DOT__coff_mem_13),19);
        vcdp->fullBus(c+409,(vlTOPp->LMSFilter__DOT__coff_mem_14),19);
        vcdp->fullBus(c+417,(vlTOPp->LMSFilter__DOT__coff_mem_15),19);
        vcdp->fullBus(c+425,(vlTOPp->LMSFilter__DOT__mult_data_vec_0),20);
        vcdp->fullBus(c+433,(vlTOPp->LMSFilter__DOT__mult_data_vec_1),20);
        vcdp->fullBus(c+441,(vlTOPp->LMSFilter__DOT__mult_data_vec_2),20);
        vcdp->fullBus(c+449,(vlTOPp->LMSFilter__DOT__mult_data_vec_3),20);
        vcdp->fullBus(c+457,(vlTOPp->LMSFilter__DOT__mult_data_vec_4),20);
        vcdp->fullBus(c+465,(vlTOPp->LMSFilter__DOT__mult_data_vec_5),20);
        vcdp->fullBus(c+473,(vlTOPp->LMSFilter__DOT__mult_data_vec_6),20);
        vcdp->fullBus(c+481,(vlTOPp->LMSFilter__DOT__mult_data_vec_7),20);
        vcdp->fullBus(c+489,(vlTOPp->LMSFilter__DOT__mult_data_vec_8),20);
        vcdp->fullBus(c+497,(vlTOPp->LMSFilter__DOT__mult_data_vec_9),20);
        vcdp->fullBus(c+505,(vlTOPp->LMSFilter__DOT__mult_data_vec_10),20);
        vcdp->fullBus(c+513,(vlTOPp->LMSFilter__DOT__mult_data_vec_11),20);
        vcdp->fullBus(c+521,(vlTOPp->LMSFilter__DOT__mult_data_vec_12),20);
        vcdp->fullBus(c+529,(vlTOPp->LMSFilter__DOT__mult_data_vec_13),20);
        vcdp->fullBus(c+537,(vlTOPp->LMSFilter__DOT__mult_data_vec_14),20);
        vcdp->fullBus(c+545,(vlTOPp->LMSFilter__DOT__mult_data_vec_15),20);
        vcdp->fullBus(c+553,(vlTOPp->LMSFilter__DOT__sum_result),20);
        vcdp->fullBit(c+561,(vlTOPp->LMSFilter__DOT__raw_data_fire_1_delay_1));
        vcdp->fullBit(c+569,(vlTOPp->LMSFilter__DOT__raw_data_fire_1_delay_2));
        vcdp->fullBit(c+577,(vlTOPp->LMSFilter__DOT__raw_data_fire_1_delay_3));
        vcdp->fullBit(c+585,(vlTOPp->LMSFilter__DOT__raw_data_payload_last_delay_1));
        vcdp->fullBit(c+593,(vlTOPp->LMSFilter__DOT__raw_data_payload_last_delay_2));
        vcdp->fullBit(c+601,(vlTOPp->LMSFilter__DOT__raw_data_payload_last_delay_3));
        vcdp->fullBus(c+609,(vlTOPp->LMSFilter__DOT__cnt),5);
        vcdp->fullBus(c+617,(vlTOPp->LMSFilter__DOT__raw_data_vec_0),9);
        vcdp->fullBus(c+625,(vlTOPp->LMSFilter__DOT__raw_data_vec_1),9);
        vcdp->fullBus(c+633,(vlTOPp->LMSFilter__DOT__raw_data_vec_2),9);
        vcdp->fullBus(c+641,(vlTOPp->LMSFilter__DOT__raw_data_vec_3),9);
        vcdp->fullBus(c+649,(vlTOPp->LMSFilter__DOT__raw_data_vec_4),9);
        vcdp->fullBus(c+657,(vlTOPp->LMSFilter__DOT__raw_data_vec_5),9);
        vcdp->fullBus(c+665,(vlTOPp->LMSFilter__DOT__raw_data_vec_6),9);
        vcdp->fullBus(c+673,(vlTOPp->LMSFilter__DOT__raw_data_vec_7),9);
        vcdp->fullBus(c+681,(vlTOPp->LMSFilter__DOT__raw_data_vec_8),9);
        vcdp->fullBus(c+689,(vlTOPp->LMSFilter__DOT__raw_data_vec_9),9);
        vcdp->fullBus(c+697,(vlTOPp->LMSFilter__DOT__raw_data_vec_10),9);
        vcdp->fullBus(c+705,(vlTOPp->LMSFilter__DOT__raw_data_vec_11),9);
        vcdp->fullBus(c+713,(vlTOPp->LMSFilter__DOT__raw_data_vec_12),9);
        vcdp->fullBus(c+721,(vlTOPp->LMSFilter__DOT__raw_data_vec_13),9);
        vcdp->fullBus(c+729,(vlTOPp->LMSFilter__DOT__raw_data_vec_14),9);
        vcdp->fullBus(c+737,(vlTOPp->LMSFilter__DOT__raw_data_vec_15),9);
        vcdp->fullBit(c+745,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+753,(vlTOPp->raw_data_ready));
        vcdp->fullBit(c+761,(vlTOPp->raw_data_payload_last));
        vcdp->fullBus(c+769,(vlTOPp->raw_data_payload_fragment),9);
        vcdp->fullBit(c+777,(vlTOPp->filtered_data_valid));
        vcdp->fullBit(c+785,(vlTOPp->filtered_data_payload_last));
        vcdp->fullBus(c+793,(vlTOPp->filtered_data_payload_fragment),20);
        vcdp->fullBit(c+801,(vlTOPp->train_en));
        vcdp->fullBit(c+809,(vlTOPp->clk));
        vcdp->fullBit(c+817,(vlTOPp->reset));
        vcdp->fullBit(c+825,(((IData)(vlTOPp->raw_data_valid) 
                              & (IData)(vlTOPp->raw_data_ready))));
    }
}
