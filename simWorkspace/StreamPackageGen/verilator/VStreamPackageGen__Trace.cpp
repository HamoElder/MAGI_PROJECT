// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStreamPackageGen__Syms.h"


//======================

void VStreamPackageGen::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStreamPackageGen* t = (VStreamPackageGen*)userthis;
    VStreamPackageGen__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VStreamPackageGen::traceChgThis(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VStreamPackageGen::traceChgThis__2(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->StreamPackageGen__DOT__split_core__DOT__raw_data_fire));
        vcdp->chgBit(c+9,(vlTOPp->StreamPackageGen__DOT__split_core__DOT__split_data_fire));
    }
}

void VStreamPackageGen::traceChgThis__3(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17,((0xffU & (vlTOPp->StreamPackageGen__DOT__split_core__DOT__data_buf 
                                     >> 0x18U))),8);
        vcdp->chgBus(c+25,(vlTOPp->StreamPackageGen__DOT__strb_buf),4);
        vcdp->chgBit(c+33,((1U & ((IData)(vlTOPp->StreamPackageGen__DOT__strb_buf) 
                                  >> 3U))));
        vcdp->chgBus(c+41,(vlTOPp->StreamPackageGen__DOT__split_core__DOT__data_buf),32);
    }
}

void VStreamPackageGen::traceChgThis__4(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+49,((0U == (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt))));
        vcdp->chgBit(c+57,((0U != (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt))));
        vcdp->chgBus(c+65,(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt),3);
    }
}

void VStreamPackageGen::traceChgThis__5(VStreamPackageGen__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStreamPackageGen* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+73,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+81,(vlTOPp->raw_data_ready));
        vcdp->chgBus(c+89,(vlTOPp->raw_data_payload_data),32);
        vcdp->chgBus(c+97,(vlTOPp->raw_data_payload_strb),4);
        vcdp->chgBit(c+105,(vlTOPp->pkg_data_valid));
        vcdp->chgBit(c+113,(vlTOPp->pkg_data_ready));
        vcdp->chgBus(c+121,(vlTOPp->pkg_data_payload),8);
        vcdp->chgBit(c+129,(vlTOPp->clk));
        vcdp->chgBit(c+137,(vlTOPp->reset));
        vcdp->chgBit(c+145,(((IData)(vlTOPp->raw_data_valid) 
                             & (IData)(vlTOPp->raw_data_ready))));
        vcdp->chgBit(c+153,(((0U != (IData)(vlTOPp->StreamPackageGen__DOT__split_core__DOT__cnt)) 
                             & (IData)(vlTOPp->pkg_data_ready))));
    }
}
