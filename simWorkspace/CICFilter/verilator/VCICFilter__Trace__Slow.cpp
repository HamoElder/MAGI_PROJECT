// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCICFilter__Syms.h"


//======================

void VCICFilter::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VCICFilter::traceInit, &VCICFilter::traceFull, &VCICFilter::traceChg, this);
}
void VCICFilter::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VCICFilter* t = (VCICFilter*)userthis;
    VCICFilter__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VCICFilter::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCICFilter* t = (VCICFilter*)userthis;
    VCICFilter__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VCICFilter::traceInitThis(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VCICFilter::traceFullThis(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCICFilter::traceInitThis__1(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+201,"raw_data_valid", false,-1);
        vcdp->declBus(c+209,"raw_data_payload", false,-1, 15,0);
        vcdp->declBit(c+217,"filtered_data_valid", false,-1);
        vcdp->declBus(c+225,"filtered_data_payload", false,-1, 16,0);
        vcdp->declBit(c+233,"clk", false,-1);
        vcdp->declBit(c+241,"reset", false,-1);
        vcdp->declBit(c+201,"CICFilter raw_data_valid", false,-1);
        vcdp->declBus(c+209,"CICFilter raw_data_payload", false,-1, 15,0);
        vcdp->declBit(c+217,"CICFilter filtered_data_valid", false,-1);
        vcdp->declBus(c+225,"CICFilter filtered_data_payload", false,-1, 16,0);
        vcdp->declBit(c+233,"CICFilter clk", false,-1);
        vcdp->declBit(c+241,"CICFilter reset", false,-1);
        vcdp->declBus(c+129,"CICFilter decimator_1_in_payload", false,-1, 20,0);
        vcdp->declBit(c+137,"CICFilter integrator_result_data_valid", false,-1);
        vcdp->declBus(c+145,"CICFilter integrator_result_data_payload", false,-1, 16,0);
        vcdp->declBit(c+1,"CICFilter decimator_1_out_valid", false,-1);
        vcdp->declBus(c+113,"CICFilter decimator_1_out_payload", false,-1, 20,0);
        vcdp->declBit(c+9,"CICFilter combor_result_data_valid", false,-1);
        vcdp->declBus(c+17,"CICFilter combor_result_data_payload", false,-1, 16,0);
        vcdp->declBit(c+201,"CICFilter integrator raw_data_valid", false,-1);
        vcdp->declBus(c+209,"CICFilter integrator raw_data_payload", false,-1, 15,0);
        vcdp->declBit(c+137,"CICFilter integrator result_data_valid", false,-1);
        vcdp->declBus(c+145,"CICFilter integrator result_data_payload", false,-1, 16,0);
        vcdp->declBit(c+233,"CICFilter integrator clk", false,-1);
        vcdp->declBit(c+241,"CICFilter integrator reset", false,-1);
        vcdp->declBus(c+121,"CICFilter integrator raw_data_buf", false,-1, 15,0);
        vcdp->declBus(c+25,"CICFilter integrator internal_data_vec_0", false,-1, 16,0);
        vcdp->declBus(c+33,"CICFilter integrator internal_data_vec_1", false,-1, 16,0);
        vcdp->declBus(c+145,"CICFilter integrator internal_data_vec_2", false,-1, 16,0);
        vcdp->declBus(c+153,"CICFilter integrator internal_en", false,-1, 3,0);
        vcdp->declBit(c+161,"CICFilter integrator when_CICIntegrator_l22", false,-1);
        vcdp->declBit(c+169,"CICFilter integrator when_CICIntegrator_l27", false,-1);
        vcdp->declBit(c+177,"CICFilter integrator when_CICIntegrator_l27_1", false,-1);
        vcdp->declBit(c+137,"CICFilter decimator_1 in_valid", false,-1);
        vcdp->declBus(c+129,"CICFilter decimator_1 in_payload", false,-1, 20,0);
        vcdp->declBit(c+1,"CICFilter decimator_1 out_valid", false,-1);
        vcdp->declBus(c+113,"CICFilter decimator_1 out_payload", false,-1, 20,0);
        vcdp->declBit(c+233,"CICFilter decimator_1 clk", false,-1);
        vcdp->declBit(c+241,"CICFilter decimator_1 reset", false,-1);
        vcdp->declBus(c+185,"CICFilter decimator_1 cnt", false,-1, 2,0);
        vcdp->declBus(c+113,"CICFilter decimator_1 out_data", false,-1, 20,0);
        vcdp->declBit(c+1,"CICFilter decimator_1 out_valid_1", false,-1);
        vcdp->declBit(c+193,"CICFilter decimator_1 when_Decimator_l22", false,-1);
        vcdp->declBit(c+1,"CICFilter combor raw_data_valid", false,-1);
        vcdp->declBus(c+113,"CICFilter combor raw_data_payload", false,-1, 20,0);
        vcdp->declBit(c+9,"CICFilter combor result_data_valid", false,-1);
        vcdp->declBus(c+17,"CICFilter combor result_data_payload", false,-1, 16,0);
        vcdp->declBit(c+233,"CICFilter combor clk", false,-1);
        vcdp->declBit(c+241,"CICFilter combor reset", false,-1);
        vcdp->declBus(c+41,"CICFilter combor internal_data_vec_0", false,-1, 16,0);
        vcdp->declBus(c+49,"CICFilter combor internal_data_vec_1", false,-1, 16,0);
        vcdp->declBus(c+57,"CICFilter combor internal_data_vec_2", false,-1, 16,0);
        vcdp->declBus(c+65,"CICFilter combor delay_data_vec_0", false,-1, 16,0);
        vcdp->declBus(c+73,"CICFilter combor delay_data_vec_1", false,-1, 16,0);
        vcdp->declBus(c+81,"CICFilter combor delay_data_vec_2", false,-1, 16,0);
        vcdp->declBus(c+89,"CICFilter combor pipe_data_vec_0", false,-1, 16,0);
        vcdp->declBus(c+97,"CICFilter combor pipe_data_vec_1", false,-1, 16,0);
        vcdp->declBus(c+105,"CICFilter combor pipe_data_vec_2", false,-1, 16,0);
        vcdp->declBus(c+17,"CICFilter combor result_data_payload_1", false,-1, 16,0);
        vcdp->declBit(c+9,"CICFilter combor result_data_valid_1", false,-1);
    }
}

void VCICFilter::traceFullThis__1(VCICFilter__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCICFilter* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->CICFilter__DOT__decimator_1__DOT__out_valid_1));
        vcdp->fullBit(c+9,(vlTOPp->CICFilter__DOT__combor__DOT__result_data_valid_1));
        vcdp->fullBus(c+17,(vlTOPp->CICFilter__DOT__combor__DOT__result_data_payload_1),17);
        vcdp->fullBus(c+25,(vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_0),17);
        vcdp->fullBus(c+33,(vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_1),17);
        vcdp->fullBus(c+41,((0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0 
                                         - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_0))),17);
        vcdp->fullBus(c+49,((0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1 
                                         - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_1))),17);
        vcdp->fullBus(c+57,((0x1ffffU & (vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2 
                                         - vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_2))),17);
        vcdp->fullBus(c+65,(vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_0),17);
        vcdp->fullBus(c+73,(vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_1),17);
        vcdp->fullBus(c+81,(vlTOPp->CICFilter__DOT__combor__DOT__delay_data_vec_2),17);
        vcdp->fullBus(c+89,(vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_0),17);
        vcdp->fullBus(c+97,(vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_1),17);
        vcdp->fullBus(c+105,(vlTOPp->CICFilter__DOT__combor__DOT__pipe_data_vec_2),17);
        vcdp->fullBus(c+113,(vlTOPp->CICFilter__DOT__decimator_1__DOT__out_data),21);
        vcdp->fullBus(c+121,(vlTOPp->CICFilter__DOT__integrator__DOT__raw_data_buf),16);
        vcdp->fullBus(c+129,(((0x1e0000U & (VL_NEGATE_I((IData)(
                                                                (1U 
                                                                 & (vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2 
                                                                    >> 0x10U)))) 
                                            << 0x11U)) 
                              | vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2)),21);
        vcdp->fullBit(c+137,((1U & ((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
                                    >> 3U))));
        vcdp->fullBus(c+145,(vlTOPp->CICFilter__DOT__integrator__DOT__internal_data_vec_2),17);
        vcdp->fullBus(c+153,(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en),4);
        vcdp->fullBit(c+161,((1U & (IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en))));
        vcdp->fullBit(c+169,((1U & ((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
                                    >> 1U))));
        vcdp->fullBit(c+177,((1U & ((IData)(vlTOPp->CICFilter__DOT__integrator__DOT__internal_en) 
                                    >> 2U))));
        vcdp->fullBus(c+185,(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt),3);
        vcdp->fullBit(c+193,((4U == (IData)(vlTOPp->CICFilter__DOT__decimator_1__DOT__cnt))));
        vcdp->fullBit(c+201,(vlTOPp->raw_data_valid));
        vcdp->fullBus(c+209,(vlTOPp->raw_data_payload),16);
        vcdp->fullBit(c+217,(vlTOPp->filtered_data_valid));
        vcdp->fullBus(c+225,(vlTOPp->filtered_data_payload),17);
        vcdp->fullBit(c+233,(vlTOPp->clk));
        vcdp->fullBit(c+241,(vlTOPp->reset));
    }
}
