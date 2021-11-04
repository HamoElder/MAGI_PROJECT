// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCordicRotator__Syms.h"


//======================

void VCordicRotator::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCordicRotator* t = (VCordicRotator*)userthis;
    VCordicRotator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VCordicRotator::traceChgThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCordicRotator::traceChgThis__2(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->CordicRotator__DOT__raw_data_fire));
        vcdp->chgBit(c+9,(vlTOPp->CordicRotator__DOT__result_fire));
    }
}

void VCordicRotator::traceChgThis__3(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,(vlTOPp->iter_limit),5);
        vcdp->chgBit(c+25,(vlTOPp->rotate_mode));
        vcdp->chgBus(c+33,(vlTOPp->x_u),2);
        vcdp->chgBit(c+41,(vlTOPp->w_en));
        vcdp->chgBus(c+49,(vlTOPp->w_addr),8);
        vcdp->chgBus(c+57,(vlTOPp->w_data),32);
        vcdp->chgBit(c+65,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+73,(vlTOPp->raw_data_ready));
        vcdp->chgBus(c+81,(vlTOPp->raw_data_payload_x),32);
        vcdp->chgBus(c+89,(vlTOPp->raw_data_payload_y),32);
        vcdp->chgBus(c+97,(vlTOPp->raw_data_payload_z),32);
        vcdp->chgBit(c+105,(vlTOPp->result_valid));
        vcdp->chgBit(c+113,(vlTOPp->result_ready));
        vcdp->chgBus(c+121,(vlTOPp->result_payload_x),32);
        vcdp->chgBus(c+129,(vlTOPp->result_payload_y),32);
        vcdp->chgBus(c+137,(vlTOPp->result_payload_z),32);
        vcdp->chgBit(c+145,(vlTOPp->clk));
        vcdp->chgBit(c+153,(vlTOPp->reset));
        vcdp->chgBit(c+161,(((IData)(vlTOPp->iter_limit) 
                             <= (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x))));
    }
}
