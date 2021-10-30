// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VConvEncoder__Syms.h"


//======================

void VConvEncoder::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VConvEncoder* t = (VConvEncoder*)userthis;
    VConvEncoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VConvEncoder::traceChgThis(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VConvEncoder::traceChgThis__2(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_0) 
                                 >> 1U))),3);
        vcdp->chgBus(c+9,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_1) 
                                 >> 1U))),3);
        vcdp->chgBus(c+17,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_2) 
                                  >> 1U))),3);
        vcdp->chgBus(c+25,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_3) 
                                  >> 1U))),3);
        vcdp->chgBus(c+33,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_4) 
                                  >> 1U))),3);
        vcdp->chgBus(c+41,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_5) 
                                  >> 1U))),3);
        vcdp->chgBus(c+49,((7U & ((IData)(vlTOPp->ConvEncoder__DOT___zz_r_enc_6) 
                                  >> 1U))),3);
        vcdp->chgBus(c+57,(vlTOPp->ConvEncoder__DOT__code_vec_0),7);
        vcdp->chgBus(c+65,(vlTOPp->ConvEncoder__DOT__code_vec_1),7);
    }
}

void VConvEncoder::traceChgThis__3(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+73,(vlTOPp->ConvEncoder__DOT__coded_data_valid_1));
        vcdp->chgBit(c+81,(vlTOPp->ConvEncoder__DOT__raw_data_payload_last_regNext));
    }
}

void VConvEncoder::traceChgThis__4(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+89,(vlTOPp->ConvEncoder__DOT__raw_data_payload),7);
        vcdp->chgBus(c+97,(vlTOPp->ConvEncoder__DOT__coded_data),14);
        vcdp->chgBus(c+105,(vlTOPp->ConvEncoder__DOT__r_enc_buf),3);
    }
}

void VConvEncoder::traceChgThis__5(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+113,(vlTOPp->ConvEncoder__DOT__raw_data_valid_1));
    }
}

void VConvEncoder::traceChgThis__6(VConvEncoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvEncoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+121,(vlTOPp->tail_bits_valid));
        vcdp->chgBus(c+129,(vlTOPp->tail_bits_payload),3);
        vcdp->chgBit(c+137,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+145,(vlTOPp->raw_data_payload_last));
        vcdp->chgBus(c+153,(vlTOPp->raw_data_payload_fragment),7);
        vcdp->chgBit(c+161,(vlTOPp->coded_data_valid));
        vcdp->chgBit(c+169,(vlTOPp->coded_data_payload_last));
        vcdp->chgBus(c+177,(vlTOPp->coded_data_payload_fragment),14);
        vcdp->chgBit(c+185,(vlTOPp->clk));
        vcdp->chgBit(c+193,(vlTOPp->reset));
    }
}
