// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VLMSFilter__Syms.h"


//======================

void VLMSFilter::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VLMSFilter* t = (VLMSFilter*)userthis;
    VLMSFilter__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VLMSFilter::traceChgThis(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VLMSFilter::traceChgThis__2(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->LMSFilter__DOT__ref_mem[0]),20);
        vcdp->chgBus(c+2,(vlTOPp->LMSFilter__DOT__ref_mem[1]),20);
        vcdp->chgBus(c+3,(vlTOPp->LMSFilter__DOT__ref_mem[2]),20);
        vcdp->chgBus(c+4,(vlTOPp->LMSFilter__DOT__ref_mem[3]),20);
        vcdp->chgBus(c+5,(vlTOPp->LMSFilter__DOT__ref_mem[4]),20);
        vcdp->chgBus(c+6,(vlTOPp->LMSFilter__DOT__ref_mem[5]),20);
        vcdp->chgBus(c+7,(vlTOPp->LMSFilter__DOT__ref_mem[6]),20);
        vcdp->chgBus(c+8,(vlTOPp->LMSFilter__DOT__ref_mem[7]),20);
        vcdp->chgBus(c+9,(vlTOPp->LMSFilter__DOT__ref_mem[8]),20);
        vcdp->chgBus(c+10,(vlTOPp->LMSFilter__DOT__ref_mem[9]),20);
        vcdp->chgBus(c+11,(vlTOPp->LMSFilter__DOT__ref_mem[10]),20);
        vcdp->chgBus(c+12,(vlTOPp->LMSFilter__DOT__ref_mem[11]),20);
        vcdp->chgBus(c+13,(vlTOPp->LMSFilter__DOT__ref_mem[12]),20);
        vcdp->chgBus(c+14,(vlTOPp->LMSFilter__DOT__ref_mem[13]),20);
        vcdp->chgBus(c+15,(vlTOPp->LMSFilter__DOT__ref_mem[14]),20);
        vcdp->chgBus(c+16,(vlTOPp->LMSFilter__DOT__ref_mem[15]),20);
        vcdp->chgBus(c+17,(vlTOPp->LMSFilter__DOT__ref_mem[16]),20);
        vcdp->chgBus(c+18,(vlTOPp->LMSFilter__DOT__ref_mem[17]),20);
        vcdp->chgBus(c+19,(vlTOPp->LMSFilter__DOT__ref_mem[18]),20);
        vcdp->chgBus(c+20,(vlTOPp->LMSFilter__DOT__ref_mem[19]),20);
        vcdp->chgBus(c+21,(vlTOPp->LMSFilter__DOT__ref_mem[20]),20);
        vcdp->chgBus(c+22,(vlTOPp->LMSFilter__DOT__ref_mem[21]),20);
        vcdp->chgBus(c+23,(vlTOPp->LMSFilter__DOT__ref_mem[22]),20);
        vcdp->chgBus(c+24,(vlTOPp->LMSFilter__DOT__ref_mem[23]),20);
        vcdp->chgBus(c+25,(vlTOPp->LMSFilter__DOT__ref_mem[24]),20);
        vcdp->chgBus(c+26,(vlTOPp->LMSFilter__DOT__ref_mem[25]),20);
        vcdp->chgBus(c+27,(vlTOPp->LMSFilter__DOT__ref_mem[26]),20);
        vcdp->chgBus(c+28,(vlTOPp->LMSFilter__DOT__ref_mem[27]),20);
        vcdp->chgBus(c+29,(vlTOPp->LMSFilter__DOT__ref_mem[28]),20);
        vcdp->chgBus(c+30,(vlTOPp->LMSFilter__DOT__ref_mem[29]),20);
        vcdp->chgBus(c+31,(vlTOPp->LMSFilter__DOT__ref_mem[30]),20);
        vcdp->chgBus(c+32,(vlTOPp->LMSFilter__DOT__ref_mem[31]),20);
    }
}

void VLMSFilter::traceChgThis__3(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+257,(vlTOPp->LMSFilter__DOT__error_measured),20);
        vcdp->chgBit(c+265,(vlTOPp->LMSFilter__DOT__when_LMSFilter_l78));
    }
}

void VLMSFilter::traceChgThis__4(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+273,(vlTOPp->LMSFilter__DOT__raw_data_fire));
    }
}

void VLMSFilter::traceChgThis__5(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+281,(vlTOPp->LMSFilter__DOT___zz_ref_mem_port0),20);
    }
}

void VLMSFilter::traceChgThis__6(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+289,(vlTOPp->LMSFilter__DOT__raw_data_ready_1));
        vcdp->chgBus(c+297,(vlTOPp->LMSFilter__DOT__coff_mem_0),19);
        vcdp->chgBus(c+305,(vlTOPp->LMSFilter__DOT__coff_mem_1),19);
        vcdp->chgBus(c+313,(vlTOPp->LMSFilter__DOT__coff_mem_2),19);
        vcdp->chgBus(c+321,(vlTOPp->LMSFilter__DOT__coff_mem_3),19);
        vcdp->chgBus(c+329,(vlTOPp->LMSFilter__DOT__coff_mem_4),19);
        vcdp->chgBus(c+337,(vlTOPp->LMSFilter__DOT__coff_mem_5),19);
        vcdp->chgBus(c+345,(vlTOPp->LMSFilter__DOT__coff_mem_6),19);
        vcdp->chgBus(c+353,(vlTOPp->LMSFilter__DOT__coff_mem_7),19);
        vcdp->chgBus(c+361,(vlTOPp->LMSFilter__DOT__coff_mem_8),19);
        vcdp->chgBus(c+369,(vlTOPp->LMSFilter__DOT__coff_mem_9),19);
        vcdp->chgBus(c+377,(vlTOPp->LMSFilter__DOT__coff_mem_10),19);
        vcdp->chgBus(c+385,(vlTOPp->LMSFilter__DOT__coff_mem_11),19);
        vcdp->chgBus(c+393,(vlTOPp->LMSFilter__DOT__coff_mem_12),19);
        vcdp->chgBus(c+401,(vlTOPp->LMSFilter__DOT__coff_mem_13),19);
        vcdp->chgBus(c+409,(vlTOPp->LMSFilter__DOT__coff_mem_14),19);
        vcdp->chgBus(c+417,(vlTOPp->LMSFilter__DOT__coff_mem_15),19);
        vcdp->chgBus(c+425,(vlTOPp->LMSFilter__DOT__mult_data_vec_0),20);
        vcdp->chgBus(c+433,(vlTOPp->LMSFilter__DOT__mult_data_vec_1),20);
        vcdp->chgBus(c+441,(vlTOPp->LMSFilter__DOT__mult_data_vec_2),20);
        vcdp->chgBus(c+449,(vlTOPp->LMSFilter__DOT__mult_data_vec_3),20);
        vcdp->chgBus(c+457,(vlTOPp->LMSFilter__DOT__mult_data_vec_4),20);
        vcdp->chgBus(c+465,(vlTOPp->LMSFilter__DOT__mult_data_vec_5),20);
        vcdp->chgBus(c+473,(vlTOPp->LMSFilter__DOT__mult_data_vec_6),20);
        vcdp->chgBus(c+481,(vlTOPp->LMSFilter__DOT__mult_data_vec_7),20);
        vcdp->chgBus(c+489,(vlTOPp->LMSFilter__DOT__mult_data_vec_8),20);
        vcdp->chgBus(c+497,(vlTOPp->LMSFilter__DOT__mult_data_vec_9),20);
        vcdp->chgBus(c+505,(vlTOPp->LMSFilter__DOT__mult_data_vec_10),20);
        vcdp->chgBus(c+513,(vlTOPp->LMSFilter__DOT__mult_data_vec_11),20);
        vcdp->chgBus(c+521,(vlTOPp->LMSFilter__DOT__mult_data_vec_12),20);
        vcdp->chgBus(c+529,(vlTOPp->LMSFilter__DOT__mult_data_vec_13),20);
        vcdp->chgBus(c+537,(vlTOPp->LMSFilter__DOT__mult_data_vec_14),20);
        vcdp->chgBus(c+545,(vlTOPp->LMSFilter__DOT__mult_data_vec_15),20);
        vcdp->chgBus(c+553,(vlTOPp->LMSFilter__DOT__sum_result),20);
        vcdp->chgBit(c+561,(vlTOPp->LMSFilter__DOT__raw_data_fire_1_delay_1));
        vcdp->chgBit(c+569,(vlTOPp->LMSFilter__DOT__raw_data_fire_1_delay_2));
        vcdp->chgBit(c+577,(vlTOPp->LMSFilter__DOT__raw_data_fire_1_delay_3));
        vcdp->chgBit(c+585,(vlTOPp->LMSFilter__DOT__raw_data_payload_last_delay_1));
        vcdp->chgBit(c+593,(vlTOPp->LMSFilter__DOT__raw_data_payload_last_delay_2));
        vcdp->chgBit(c+601,(vlTOPp->LMSFilter__DOT__raw_data_payload_last_delay_3));
        vcdp->chgBus(c+609,(vlTOPp->LMSFilter__DOT__cnt),5);
    }
}

void VLMSFilter::traceChgThis__7(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+617,(vlTOPp->LMSFilter__DOT__raw_data_vec_0),9);
        vcdp->chgBus(c+625,(vlTOPp->LMSFilter__DOT__raw_data_vec_1),9);
        vcdp->chgBus(c+633,(vlTOPp->LMSFilter__DOT__raw_data_vec_2),9);
        vcdp->chgBus(c+641,(vlTOPp->LMSFilter__DOT__raw_data_vec_3),9);
        vcdp->chgBus(c+649,(vlTOPp->LMSFilter__DOT__raw_data_vec_4),9);
        vcdp->chgBus(c+657,(vlTOPp->LMSFilter__DOT__raw_data_vec_5),9);
        vcdp->chgBus(c+665,(vlTOPp->LMSFilter__DOT__raw_data_vec_6),9);
        vcdp->chgBus(c+673,(vlTOPp->LMSFilter__DOT__raw_data_vec_7),9);
        vcdp->chgBus(c+681,(vlTOPp->LMSFilter__DOT__raw_data_vec_8),9);
        vcdp->chgBus(c+689,(vlTOPp->LMSFilter__DOT__raw_data_vec_9),9);
        vcdp->chgBus(c+697,(vlTOPp->LMSFilter__DOT__raw_data_vec_10),9);
        vcdp->chgBus(c+705,(vlTOPp->LMSFilter__DOT__raw_data_vec_11),9);
        vcdp->chgBus(c+713,(vlTOPp->LMSFilter__DOT__raw_data_vec_12),9);
        vcdp->chgBus(c+721,(vlTOPp->LMSFilter__DOT__raw_data_vec_13),9);
        vcdp->chgBus(c+729,(vlTOPp->LMSFilter__DOT__raw_data_vec_14),9);
        vcdp->chgBus(c+737,(vlTOPp->LMSFilter__DOT__raw_data_vec_15),9);
    }
}

void VLMSFilter::traceChgThis__8(VLMSFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VLMSFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+745,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+753,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+761,(vlTOPp->raw_data_payload_last));
        vcdp->chgBus(c+769,(vlTOPp->raw_data_payload_fragment),9);
        vcdp->chgBit(c+777,(vlTOPp->filtered_data_valid));
        vcdp->chgBit(c+785,(vlTOPp->filtered_data_payload_last));
        vcdp->chgBus(c+793,(vlTOPp->filtered_data_payload_fragment),20);
        vcdp->chgBit(c+801,(vlTOPp->train_en));
        vcdp->chgBit(c+809,(vlTOPp->clk));
        vcdp->chgBit(c+817,(vlTOPp->reset));
        vcdp->chgBit(c+825,(((IData)(vlTOPp->raw_data_valid) 
                             & (IData)(vlTOPp->raw_data_ready))));
    }
}
