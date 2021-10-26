// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCyclicPrefix__Syms.h"


//======================

void VCyclicPrefix::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VCyclicPrefix* t = (VCyclicPrefix*)userthis;
    VCyclicPrefix__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VCyclicPrefix::traceChgThis(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VCyclicPrefix::traceChgThis__2(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,((1U & (~ (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_full)))));
        vcdp->chgBit(c+9,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_pop_valid));
        vcdp->chgBus(c+17,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_occupancy),4);
        vcdp->chgBus(c+25,(((((~ (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_risingOccupancy)) 
                              & (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ptrMatch)) 
                             << 3U) | (7U & ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value) 
                                             - (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value))))),4);
        vcdp->chgBit(c+33,((0U != (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_occupancy))));
        vcdp->chgBit(c+41,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+49,(((7U == (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value)) 
                            & (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+57,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+65,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popping));
        vcdp->chgBit(c+73,(((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ptrMatch) 
                            & (~ (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+81,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_full));
    }
}

void VCyclicPrefix::traceChgThis__3(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+89,(((7U == (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value)) 
                            & (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+97,(((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushing) 
                            != (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popping))));
    }
}

void VCyclicPrefix::traceChgThis__4(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+105,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+113,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_valueNext),3);
        vcdp->chgBit(c+121,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushing));
    }
}

void VCyclicPrefix::traceChgThis__5(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+129,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_valueNext),3);
    }
}

void VCyclicPrefix::traceChgThis__6(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+137,(vlTOPp->CyclicPrefix__DOT__cp_en));
        vcdp->chgBit(c+145,(vlTOPp->CyclicPrefix__DOT__fifo_pop_en));
        vcdp->chgBus(c+153,(vlTOPp->CyclicPrefix__DOT__cp_state),2);
        vcdp->chgQuad(c+161,(((2U & (IData)(vlTOPp->CyclicPrefix__DOT__cp_state))
                               ? ((1U & (IData)(vlTOPp->CyclicPrefix__DOT__cp_state))
                                   ? VL_ULL(0x44415441202020)
                                   : VL_ULL(0x43502020202020))
                               : ((1U & (IData)(vlTOPp->CyclicPrefix__DOT__cp_state))
                                   ? VL_ULL(0x43415054555245)
                                   : VL_ULL(0x49444c45202020)))),56);
        vcdp->chgBus(c+177,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value),3);
        vcdp->chgBit(c+185,((7U == (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+193,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value),3);
        vcdp->chgBit(c+201,((7U == (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+209,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+217,((7U & ((IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_pushPtr_value) 
                                   - (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_popPtr_value)))),3);
    }
}

void VCyclicPrefix::traceChgThis__7(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+225,((1U & vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[0U])));
        vcdp->chgBus(c+233,(((vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[1U] 
                              << 0x1fU) | (vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[0U] 
                                           >> 1U))),32);
        vcdp->chgBus(c+241,(((vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[2U] 
                              << 0x1fU) | (vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT___zz_logic_ram_port0[1U] 
                                           >> 1U))),32);
        vcdp->chgArray(c+249,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[0]),65);
        vcdp->chgArray(c+252,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[1]),65);
        vcdp->chgArray(c+255,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[2]),65);
        vcdp->chgArray(c+258,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[3]),65);
        vcdp->chgArray(c+261,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[4]),65);
        vcdp->chgArray(c+264,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[5]),65);
        vcdp->chgArray(c+267,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[6]),65);
        vcdp->chgArray(c+270,(vlTOPp->CyclicPrefix__DOT__raw_dataFifo__DOT__logic_ram[7]),65);
    }
}

void VCyclicPrefix::traceChgThis__8(VCyclicPrefix__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VCyclicPrefix* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+441,(vlTOPp->cp_len),2);
        vcdp->chgBus(c+449,(vlTOPp->data_len),4);
        vcdp->chgBit(c+457,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+465,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+473,(vlTOPp->raw_data_payload_last));
        vcdp->chgBus(c+481,(vlTOPp->raw_data_payload_fragment_cha_i),32);
        vcdp->chgBus(c+489,(vlTOPp->raw_data_payload_fragment_cha_q),32);
        vcdp->chgBit(c+497,(vlTOPp->result_valid));
        vcdp->chgBit(c+505,(vlTOPp->result_payload_last));
        vcdp->chgBus(c+513,(vlTOPp->result_payload_fragment_cha_i),32);
        vcdp->chgBus(c+521,(vlTOPp->result_payload_fragment_cha_q),32);
        vcdp->chgBit(c+529,(vlTOPp->clk));
        vcdp->chgBit(c+537,(vlTOPp->reset));
        vcdp->chgBit(c+545,(((IData)(vlTOPp->raw_data_valid) 
                             & (IData)(vlTOPp->raw_data_ready))));
        vcdp->chgBit(c+553,(((0xfU & (((IData)(vlTOPp->data_len) 
                                       - (IData)(vlTOPp->cp_len)) 
                                      - (IData)(1U))) 
                             <= (IData)(vlTOPp->CyclicPrefix__DOT__raw_dataFifo_io_occupancy))));
    }
}
