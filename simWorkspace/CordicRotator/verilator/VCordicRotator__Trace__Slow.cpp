// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCordicRotator__Syms.h"


//======================

void VCordicRotator::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VCordicRotator::traceInit, &VCordicRotator::traceFull, &VCordicRotator::traceChg, this);
}
void VCordicRotator::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCordicRotator* t = (VCordicRotator*)userthis;
    VCordicRotator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCordicRotator::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCordicRotator* t = (VCordicRotator*)userthis;
    VCordicRotator__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VCordicRotator::traceInitThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCordicRotator::traceFullThis(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCordicRotator::traceInitThis__1(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBus(c+9,"iter_limit", false,-1, 4,0);
        vcdp->declBit(c+17,"rotate_mode", false,-1);
        vcdp->declBus(c+25,"x_u", false,-1, 1,0);
        vcdp->declBit(c+33,"w_en", false,-1);
        vcdp->declBus(c+41,"w_addr", false,-1, 7,0);
        vcdp->declBus(c+49,"w_data", false,-1, 31,0);
        vcdp->declBit(c+57,"raw_data_valid", false,-1);
        vcdp->declBit(c+65,"raw_data_ready", false,-1);
        vcdp->declBus(c+73,"raw_data_payload_x", false,-1, 31,0);
        vcdp->declBus(c+81,"raw_data_payload_y", false,-1, 31,0);
        vcdp->declBus(c+89,"raw_data_payload_z", false,-1, 31,0);
        vcdp->declBit(c+97,"result_valid", false,-1);
        vcdp->declBus(c+105,"result_payload_x", false,-1, 31,0);
        vcdp->declBus(c+113,"result_payload_y", false,-1, 31,0);
        vcdp->declBus(c+121,"result_payload_z", false,-1, 31,0);
        vcdp->declBit(c+129,"clk", false,-1);
        vcdp->declBit(c+137,"reset", false,-1);
        vcdp->declBus(c+9,"CordicRotator iter_limit", false,-1, 4,0);
        vcdp->declBit(c+17,"CordicRotator rotate_mode", false,-1);
        vcdp->declBus(c+25,"CordicRotator x_u", false,-1, 1,0);
        vcdp->declBit(c+33,"CordicRotator w_en", false,-1);
        vcdp->declBus(c+41,"CordicRotator w_addr", false,-1, 7,0);
        vcdp->declBus(c+49,"CordicRotator w_data", false,-1, 31,0);
        vcdp->declBit(c+57,"CordicRotator raw_data_valid", false,-1);
        vcdp->declBit(c+65,"CordicRotator raw_data_ready", false,-1);
        vcdp->declBus(c+73,"CordicRotator raw_data_payload_x", false,-1, 31,0);
        vcdp->declBus(c+81,"CordicRotator raw_data_payload_y", false,-1, 31,0);
        vcdp->declBus(c+89,"CordicRotator raw_data_payload_z", false,-1, 31,0);
        vcdp->declBit(c+97,"CordicRotator result_valid", false,-1);
        vcdp->declBus(c+105,"CordicRotator result_payload_x", false,-1, 31,0);
        vcdp->declBus(c+113,"CordicRotator result_payload_y", false,-1, 31,0);
        vcdp->declBus(c+121,"CordicRotator result_payload_z", false,-1, 31,0);
        vcdp->declBit(c+129,"CordicRotator clk", false,-1);
        vcdp->declBit(c+137,"CordicRotator reset", false,-1);
        vcdp->declBus(c+153,"CordicRotator StateMachineEnum_e0", false,-1, 1,0);
        vcdp->declBus(c+161,"CordicRotator StateMachineEnum_e1", false,-1, 1,0);
        vcdp->declBus(c+169,"CordicRotator StateMachineEnum_e2", false,-1, 1,0);
        vcdp->declBus(c+177,"CordicRotator StateMachineEnum_e3", false,-1, 1,0);
        vcdp->declBit(c+1,"CordicRotator raw_data_fire", false,-1);
        vcdp->declBit(c+145,"CordicRotator when_CordicRotator_l222", false,-1);
    }
}

void VCordicRotator::traceFullThis__1(VCordicRotator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCordicRotator* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->CordicRotator__DOT__raw_data_fire));
        vcdp->fullBus(c+9,(vlTOPp->iter_limit),5);
        vcdp->fullBit(c+17,(vlTOPp->rotate_mode));
        vcdp->fullBus(c+25,(vlTOPp->x_u),2);
        vcdp->fullBit(c+33,(vlTOPp->w_en));
        vcdp->fullBus(c+41,(vlTOPp->w_addr),8);
        vcdp->fullBus(c+49,(vlTOPp->w_data),32);
        vcdp->fullBit(c+57,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+65,(vlTOPp->raw_data_ready));
        vcdp->fullBus(c+73,(vlTOPp->raw_data_payload_x),32);
        vcdp->fullBus(c+81,(vlTOPp->raw_data_payload_y),32);
        vcdp->fullBus(c+89,(vlTOPp->raw_data_payload_z),32);
        vcdp->fullBit(c+97,(vlTOPp->result_valid));
        vcdp->fullBus(c+105,(vlTOPp->result_payload_x),32);
        vcdp->fullBus(c+113,(vlTOPp->result_payload_y),32);
        vcdp->fullBus(c+121,(vlTOPp->result_payload_z),32);
        vcdp->fullBit(c+129,(vlTOPp->clk));
        vcdp->fullBit(c+137,(vlTOPp->reset));
        vcdp->fullBit(c+145,(((IData)(vlTOPp->iter_limit) 
                              <= (IData)(vlTOPp->CordicRotator__DOT___zz_result_payload_x))));
        vcdp->fullBus(c+153,(0U),2);
        vcdp->fullBus(c+161,(1U),2);
        vcdp->fullBus(c+169,(2U),2);
        vcdp->fullBus(c+177,(3U),2);
    }
}
