// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDirectFIR__Syms.h"


//======================

void VDirectFIR::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VDirectFIR* t = (VDirectFIR*)userthis;
    VDirectFIR__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VDirectFIR::traceChgThis(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VDirectFIR::traceChgThis__2(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->DirectFIR__DOT__coff_mem_15),9);
        vcdp->chgBus(c+9,(vlTOPp->DirectFIR__DOT__coff_mem_14),9);
        vcdp->chgBus(c+17,(vlTOPp->DirectFIR__DOT__coff_mem_13),9);
        vcdp->chgBus(c+25,(vlTOPp->DirectFIR__DOT__coff_mem_12),9);
        vcdp->chgBus(c+33,(vlTOPp->DirectFIR__DOT__coff_mem_11),9);
        vcdp->chgBus(c+41,(vlTOPp->DirectFIR__DOT__coff_mem_10),9);
        vcdp->chgBus(c+49,(vlTOPp->DirectFIR__DOT__coff_mem_9),9);
        vcdp->chgBus(c+57,(vlTOPp->DirectFIR__DOT__coff_mem_8),9);
    }
}

void VDirectFIR::traceChgThis__3(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+65,((1U & ((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
                                  >> 2U))));
        vcdp->chgBus(c+73,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__sum_result),29);
        vcdp->chgBus(c+81,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en),3);
        vcdp->chgBus(c+89,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_0),12);
        vcdp->chgBus(c+97,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_1),12);
        vcdp->chgBus(c+105,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_2),12);
        vcdp->chgBus(c+113,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_3),12);
        vcdp->chgBus(c+121,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_4),12);
        vcdp->chgBus(c+129,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_5),12);
        vcdp->chgBus(c+137,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_6),12);
        vcdp->chgBus(c+145,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_7),12);
        vcdp->chgBus(c+153,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_8),12);
        vcdp->chgBus(c+161,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_9),12);
        vcdp->chgBus(c+169,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_10),12);
        vcdp->chgBus(c+177,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_11),12);
        vcdp->chgBus(c+185,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_12),12);
        vcdp->chgBus(c+193,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_13),12);
        vcdp->chgBus(c+201,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_14),12);
        vcdp->chgBus(c+209,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__raw_data_vec_15),12);
        vcdp->chgBus(c+217,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_0),29);
        vcdp->chgBus(c+225,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_1),29);
        vcdp->chgBus(c+233,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_2),29);
        vcdp->chgBus(c+241,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_3),29);
        vcdp->chgBus(c+249,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_4),29);
        vcdp->chgBus(c+257,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_5),29);
        vcdp->chgBus(c+265,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_6),29);
        vcdp->chgBus(c+273,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_7),29);
        vcdp->chgBus(c+281,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_8),29);
        vcdp->chgBus(c+289,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_9),29);
        vcdp->chgBus(c+297,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_10),29);
        vcdp->chgBus(c+305,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_11),29);
        vcdp->chgBus(c+313,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_12),29);
        vcdp->chgBus(c+321,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_13),29);
        vcdp->chgBus(c+329,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_14),29);
        vcdp->chgBus(c+337,(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__mult_data_vec_15),29);
        vcdp->chgBit(c+345,((1U & (IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en))));
        vcdp->chgBit(c+353,((1U & ((IData)(vlTOPp->DirectFIR__DOT__directFIRCore_1__DOT__internal_en) 
                                   >> 1U))));
    }
}

void VDirectFIR::traceChgThis__4(VDirectFIR__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VDirectFIR* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+361,(vlTOPp->raw_data_valid));
        vcdp->chgBus(c+369,(vlTOPp->raw_data_payload_0),12);
        vcdp->chgBit(c+377,(vlTOPp->filtered_data_valid));
        vcdp->chgBus(c+385,(vlTOPp->filtered_data_payload_0),29);
        vcdp->chgBit(c+393,(vlTOPp->clk));
        vcdp->chgBit(c+401,(vlTOPp->reset));
    }
}
