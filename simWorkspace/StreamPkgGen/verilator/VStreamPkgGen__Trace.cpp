// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStreamPkgGen__Syms.h"


//======================

void VStreamPkgGen::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStreamPkgGen* t = (VStreamPkgGen*)userthis;
    VStreamPkgGen__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VStreamPkgGen::traceChgThis(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VStreamPkgGen::traceChgThis__2(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->StreamPkgGen__DOT__raw_data_stream_fire));
        vcdp->chgBit(c+9,(vlTOPp->StreamPkgGen__DOT__split_core__DOT__split_data_fire));
        vcdp->chgBit(c+17,(vlTOPp->StreamPkgGen__DOT__split_core__DOT__raw_data_fire));
    }
}

void VStreamPkgGen::traceChgThis__3(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+25,((0U == (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt))));
        vcdp->chgBit(c+33,((0U != (IData)(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt))));
        vcdp->chgBus(c+41,(vlTOPp->StreamPkgGen__DOT__pkg_slices_cnt),12);
        vcdp->chgBit(c+49,(vlTOPp->StreamPkgGen__DOT__raw_data_last));
        vcdp->chgBus(c+57,(vlTOPp->StreamPkgGen__DOT__split_core__DOT__cnt),3);
    }
}

void VStreamPkgGen::traceChgThis__4(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+65,((0xffU & vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf)),8);
        vcdp->chgBus(c+73,(vlTOPp->StreamPkgGen__DOT__strb_buf),4);
        vcdp->chgBit(c+81,((1U & (IData)(vlTOPp->StreamPkgGen__DOT__strb_buf))));
        vcdp->chgBus(c+89,(vlTOPp->StreamPkgGen__DOT__split_core__DOT__data_buf),32);
    }
}

void VStreamPkgGen::traceChgThis__5(VStreamPkgGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPkgGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+97,(vlTOPp->slices_limit),12);
        vcdp->chgBus(c+105,(vlTOPp->slices_cnt),12);
        vcdp->chgBit(c+113,(vlTOPp->raw_data_tvalid));
        vcdp->chgBit(c+121,(vlTOPp->raw_data_tready));
        vcdp->chgBus(c+129,(vlTOPp->raw_data_tdata),32);
        vcdp->chgBus(c+137,(vlTOPp->raw_data_tstrb),4);
        vcdp->chgBit(c+145,(vlTOPp->raw_data_tlast));
        vcdp->chgBit(c+153,(vlTOPp->pkg_data_valid));
        vcdp->chgBit(c+161,(vlTOPp->pkg_data_ready));
        vcdp->chgBit(c+169,(vlTOPp->pkg_data_payload_last));
        vcdp->chgBus(c+177,(vlTOPp->pkg_data_payload_fragment),8);
        vcdp->chgBit(c+185,(vlTOPp->clk));
        vcdp->chgBit(c+193,(vlTOPp->reset));
    }
}
