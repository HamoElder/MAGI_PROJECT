// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VViterbiDecoder__Syms.h"


//======================

void VViterbiDecoder::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VViterbiDecoder* t = (VViterbiDecoder*)userthis;
    VViterbiDecoder__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VViterbiDecoder::traceChgThis(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 2U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__13(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x20U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__16(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VViterbiDecoder::traceChgThis__2(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[0]),2);
        vcdp->chgBus(c+2,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[1]),2);
        vcdp->chgBus(c+3,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[2]),2);
        vcdp->chgBus(c+4,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[3]),2);
        vcdp->chgBus(c+5,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[4]),2);
        vcdp->chgBus(c+6,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[5]),2);
        vcdp->chgBus(c+7,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[6]),2);
        vcdp->chgBus(c+8,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom[7]),2);
        vcdp->chgBit(c+65,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[0]));
        vcdp->chgBit(c+66,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[1]));
        vcdp->chgBit(c+67,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[2]));
        vcdp->chgBit(c+68,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[3]));
        vcdp->chgBit(c+69,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[4]));
        vcdp->chgBit(c+70,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[5]));
        vcdp->chgBit(c+71,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[6]));
        vcdp->chgBit(c+72,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom[7]));
    }
}

void VViterbiDecoder::traceChgThis__3(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+129,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+137,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+145,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+153,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+161,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+169,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+177,(((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1))),8);
        vcdp->chgBit(c+185,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+193,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0),8);
        vcdp->chgBus(c+201,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1),8);
        vcdp->chgBit(c+209,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+217,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0),8);
        vcdp->chgBus(c+225,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1),8);
        vcdp->chgBit(c+233,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+241,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0),8);
        vcdp->chgBus(c+249,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1),8);
        vcdp->chgBit(c+257,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+265,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0),8);
        vcdp->chgBus(c+273,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1),8);
        vcdp->chgBit(c+281,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17));
    }
}

void VViterbiDecoder::traceChgThis__4(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+289,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready));
        vcdp->chgBit(c+297,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid));
        vcdp->chgBit(c+305,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+313,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid));
        vcdp->chgBus(c+321,(((((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch)) 
                              << 4U) | (0xfU & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                                - (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))))),5);
        vcdp->chgBus(c+329,(((((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch)) 
                              << 4U) | (0xfU & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value) 
                                                - (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))))),5);
        vcdp->chgBit(c+337,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready));
        vcdp->chgBit(c+345,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid));
        vcdp->chgBit(c+353,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) 
                             & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_pop_payload_fragment))));
        vcdp->chgBit(c+361,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready));
        vcdp->chgBit(c+369,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid));
        vcdp->chgBit(c+377,(((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
                             & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_pop_payload_fragment))));
        vcdp->chgBit(c+385,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_ready));
        vcdp->chgBit(c+393,(((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
                             & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid))));
        vcdp->chgBit(c+401,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) 
                             & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid))));
        vcdp->chgBit(c+409,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                              ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid)
                              : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid))));
        vcdp->chgBit(c+417,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                              ? ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) 
                                 & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_pop_payload_fragment))
                              : ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
                                 & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_pop_payload_fragment)))));
        vcdp->chgBit(c+425,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid) 
                             & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready))));
        vcdp->chgBit(c+433,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+441,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext),4);
        vcdp->chgBit(c+449,(((0xfU == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+457,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+465,(((0xfU == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+473,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+481,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+489,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping));
        vcdp->chgBit(c+497,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+505,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full));
        vcdp->chgBit(c+513,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+521,((((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
                             & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready))));
        vcdp->chgBit(c+529,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25));
        vcdp->chgBit(c+537,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid) 
                             & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state))));
        vcdp->chgBit(c+545,((((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
                             & (0U != (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))));
        vcdp->chgBit(c+553,((((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
                             & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready))));
        vcdp->chgBit(c+561,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25));
        vcdp->chgBit(c+569,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid) 
                             & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))));
        vcdp->chgBit(c+577,((((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid) 
                              & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state))) 
                             & (0U != (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)))));
    }
}

void VViterbiDecoder::traceChgThis__5(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+585,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor),3);
        vcdp->chgBus(c+593,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__states_shift_rom
                            [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor]),2);
        vcdp->chgBit(c+601,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__in_data_rom
                            [vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor]));
    }
}

void VViterbiDecoder::traceChgThis__6(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+609,(vlTOPp->ViterbiDecoder__DOT__raw_data_fire));
    }
}

void VViterbiDecoder::traceChgThis__7(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+617,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l104));
        vcdp->chgArray(c+625,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string),88);
        vcdp->chgBus(c+649,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext),4);
    }
}

void VViterbiDecoder::traceChgThis__8(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+657,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2),2);
        vcdp->chgBus(c+665,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path),4);
        vcdp->chgBit(c+673,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt));
        vcdp->chgBit(c+681,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_fragment_regNext));
        vcdp->chgBus(c+689,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0),8);
        vcdp->chgBus(c+697,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1),8);
        vcdp->chgBus(c+705,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2),8);
        vcdp->chgBus(c+713,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3),8);
        vcdp->chgBus(c+721,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4),8);
        vcdp->chgBus(c+729,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5),8);
        vcdp->chgBus(c+737,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6),8);
        vcdp->chgBus(c+745,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7),8);
        vcdp->chgBus(c+753,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2),8);
        vcdp->chgBus(c+761,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_0),8);
        vcdp->chgBus(c+769,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_1),8);
        vcdp->chgBus(c+777,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_2),8);
        vcdp->chgBus(c+785,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__node_weight_3),8);
        vcdp->chgBus(c+793,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_0),2);
        vcdp->chgBus(c+801,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_1),2);
        vcdp->chgBus(c+809,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_2),2);
        vcdp->chgBus(c+817,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_3),2);
        vcdp->chgBus(c+825,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_4),2);
        vcdp->chgBus(c+833,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_5),2);
        vcdp->chgBus(c+841,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_6),2);
        vcdp->chgBus(c+849,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__candidate_branches_7),2);
        vcdp->chgBus(c+857,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1),4);
        vcdp->chgBus(c+865,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1),4);
        vcdp->chgBus(c+873,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor),2);
        vcdp->chgBit(c+881,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data));
        vcdp->chgBus(c+889,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[0]),4);
        vcdp->chgBus(c+890,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[1]),4);
        vcdp->chgBus(c+891,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[2]),4);
        vcdp->chgBus(c+892,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[3]),4);
        vcdp->chgBus(c+893,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[4]),4);
        vcdp->chgBus(c+894,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[5]),4);
        vcdp->chgBus(c+895,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[6]),4);
        vcdp->chgBus(c+896,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[7]),4);
        vcdp->chgBus(c+897,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[8]),4);
        vcdp->chgBus(c+898,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[9]),4);
        vcdp->chgBus(c+899,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[10]),4);
        vcdp->chgBus(c+900,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[11]),4);
        vcdp->chgBus(c+901,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[12]),4);
        vcdp->chgBus(c+902,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[13]),4);
        vcdp->chgBus(c+903,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[14]),4);
        vcdp->chgBus(c+904,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[15]),4);
        vcdp->chgBus(c+905,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[16]),4);
        vcdp->chgBus(c+906,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[17]),4);
        vcdp->chgBus(c+907,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[18]),4);
        vcdp->chgBus(c+908,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[19]),4);
        vcdp->chgBus(c+909,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[20]),4);
        vcdp->chgBus(c+910,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[21]),4);
        vcdp->chgBus(c+911,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[22]),4);
        vcdp->chgBus(c+912,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[23]),4);
        vcdp->chgBus(c+913,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[24]),4);
        vcdp->chgBus(c+914,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[25]),4);
        vcdp->chgBus(c+915,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[26]),4);
        vcdp->chgBus(c+916,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[27]),4);
        vcdp->chgBus(c+917,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[28]),4);
        vcdp->chgBus(c+918,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[29]),4);
        vcdp->chgBus(c+919,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[30]),4);
        vcdp->chgBus(c+920,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_0[31]),4);
        vcdp->chgBus(c+1145,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[0]),4);
        vcdp->chgBus(c+1146,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[1]),4);
        vcdp->chgBus(c+1147,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[2]),4);
        vcdp->chgBus(c+1148,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[3]),4);
        vcdp->chgBus(c+1149,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[4]),4);
        vcdp->chgBus(c+1150,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[5]),4);
        vcdp->chgBus(c+1151,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[6]),4);
        vcdp->chgBus(c+1152,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[7]),4);
        vcdp->chgBus(c+1153,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[8]),4);
        vcdp->chgBus(c+1154,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[9]),4);
        vcdp->chgBus(c+1155,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[10]),4);
        vcdp->chgBus(c+1156,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[11]),4);
        vcdp->chgBus(c+1157,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[12]),4);
        vcdp->chgBus(c+1158,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[13]),4);
        vcdp->chgBus(c+1159,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[14]),4);
        vcdp->chgBus(c+1160,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[15]),4);
        vcdp->chgBus(c+1161,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[16]),4);
        vcdp->chgBus(c+1162,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[17]),4);
        vcdp->chgBus(c+1163,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[18]),4);
        vcdp->chgBus(c+1164,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[19]),4);
        vcdp->chgBus(c+1165,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[20]),4);
        vcdp->chgBus(c+1166,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[21]),4);
        vcdp->chgBus(c+1167,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[22]),4);
        vcdp->chgBus(c+1168,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[23]),4);
        vcdp->chgBus(c+1169,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[24]),4);
        vcdp->chgBus(c+1170,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[25]),4);
        vcdp->chgBus(c+1171,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[26]),4);
        vcdp->chgBus(c+1172,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[27]),4);
        vcdp->chgBus(c+1173,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[28]),4);
        vcdp->chgBus(c+1174,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[29]),4);
        vcdp->chgBus(c+1175,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[30]),4);
        vcdp->chgBus(c+1176,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_1[31]),4);
        vcdp->chgBus(c+1401,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[0]),4);
        vcdp->chgBus(c+1402,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[1]),4);
        vcdp->chgBus(c+1403,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[2]),4);
        vcdp->chgBus(c+1404,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[3]),4);
        vcdp->chgBus(c+1405,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[4]),4);
        vcdp->chgBus(c+1406,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[5]),4);
        vcdp->chgBus(c+1407,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[6]),4);
        vcdp->chgBus(c+1408,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[7]),4);
        vcdp->chgBus(c+1409,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[8]),4);
        vcdp->chgBus(c+1410,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[9]),4);
        vcdp->chgBus(c+1411,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[10]),4);
        vcdp->chgBus(c+1412,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[11]),4);
        vcdp->chgBus(c+1413,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[12]),4);
        vcdp->chgBus(c+1414,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[13]),4);
        vcdp->chgBus(c+1415,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[14]),4);
        vcdp->chgBus(c+1416,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[15]),4);
        vcdp->chgBus(c+1417,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[16]),4);
        vcdp->chgBus(c+1418,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[17]),4);
        vcdp->chgBus(c+1419,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[18]),4);
        vcdp->chgBus(c+1420,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[19]),4);
        vcdp->chgBus(c+1421,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[20]),4);
        vcdp->chgBus(c+1422,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[21]),4);
        vcdp->chgBus(c+1423,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[22]),4);
        vcdp->chgBus(c+1424,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[23]),4);
        vcdp->chgBus(c+1425,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[24]),4);
        vcdp->chgBus(c+1426,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[25]),4);
        vcdp->chgBus(c+1427,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[26]),4);
        vcdp->chgBus(c+1428,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[27]),4);
        vcdp->chgBus(c+1429,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[28]),4);
        vcdp->chgBus(c+1430,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[29]),4);
        vcdp->chgBus(c+1431,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[30]),4);
        vcdp->chgBus(c+1432,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__survival_path_ram_2[31]),4);
        vcdp->chgBit(c+1657,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_0));
        vcdp->chgBit(c+1665,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_1));
        vcdp->chgBit(c+1673,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_2));
        vcdp->chgBit(c+1681,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_3));
        vcdp->chgBit(c+1689,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_4));
        vcdp->chgBit(c+1697,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_5));
        vcdp->chgBit(c+1705,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_6));
        vcdp->chgBit(c+1713,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_7));
        vcdp->chgBit(c+1721,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_8));
        vcdp->chgBit(c+1729,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_9));
        vcdp->chgBit(c+1737,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_10));
        vcdp->chgBit(c+1745,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_11));
        vcdp->chgBit(c+1753,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_12));
        vcdp->chgBit(c+1761,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_13));
        vcdp->chgBit(c+1769,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_14));
        vcdp->chgBit(c+1777,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_15));
        vcdp->chgBit(c+1785,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_16));
        vcdp->chgBit(c+1793,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_17));
        vcdp->chgBit(c+1801,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_18));
        vcdp->chgBit(c+1809,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_19));
        vcdp->chgBit(c+1817,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_20));
        vcdp->chgBit(c+1825,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_21));
        vcdp->chgBit(c+1833,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_22));
        vcdp->chgBit(c+1841,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_23));
        vcdp->chgBit(c+1849,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_24));
        vcdp->chgBit(c+1857,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_25));
        vcdp->chgBit(c+1865,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_26));
        vcdp->chgBit(c+1873,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_27));
        vcdp->chgBit(c+1881,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_28));
        vcdp->chgBit(c+1889,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_29));
        vcdp->chgBit(c+1897,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_30));
        vcdp->chgBit(c+1905,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_31));
        vcdp->chgBit(c+1913,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_32));
        vcdp->chgBit(c+1921,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_33));
        vcdp->chgBit(c+1929,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_34));
        vcdp->chgBit(c+1937,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_35));
        vcdp->chgBit(c+1945,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_36));
        vcdp->chgBit(c+1953,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_37));
        vcdp->chgBit(c+1961,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_38));
        vcdp->chgBit(c+1969,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_39));
        vcdp->chgBit(c+1977,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_40));
        vcdp->chgBit(c+1985,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_41));
        vcdp->chgBit(c+1993,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_42));
        vcdp->chgBit(c+2001,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_43));
        vcdp->chgBit(c+2009,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_44));
        vcdp->chgBit(c+2017,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_45));
        vcdp->chgBit(c+2025,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_46));
        vcdp->chgBit(c+2033,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_47));
        vcdp->chgBit(c+2041,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_48));
        vcdp->chgBit(c+2049,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_49));
        vcdp->chgBit(c+2057,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_50));
        vcdp->chgBit(c+2065,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_51));
        vcdp->chgBit(c+2073,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_52));
        vcdp->chgBit(c+2081,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_53));
        vcdp->chgBit(c+2089,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_54));
        vcdp->chgBit(c+2097,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_55));
        vcdp->chgBit(c+2105,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_56));
        vcdp->chgBit(c+2113,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_57));
        vcdp->chgBit(c+2121,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_58));
        vcdp->chgBit(c+2129,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_59));
        vcdp->chgBit(c+2137,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_60));
        vcdp->chgBit(c+2145,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_61));
        vcdp->chgBit(c+2153,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_62));
        vcdp->chgBit(c+2161,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_63));
        vcdp->chgBit(c+2169,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_0));
        vcdp->chgBit(c+2177,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_1));
        vcdp->chgBit(c+2185,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_2));
        vcdp->chgBit(c+2193,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_3));
        vcdp->chgBit(c+2201,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_4));
        vcdp->chgBit(c+2209,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_5));
        vcdp->chgBit(c+2217,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_6));
        vcdp->chgBit(c+2225,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_7));
        vcdp->chgBit(c+2233,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_8));
        vcdp->chgBit(c+2241,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_9));
        vcdp->chgBit(c+2249,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_10));
        vcdp->chgBit(c+2257,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_11));
        vcdp->chgBit(c+2265,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_12));
        vcdp->chgBit(c+2273,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_13));
        vcdp->chgBit(c+2281,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_14));
        vcdp->chgBit(c+2289,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_15));
        vcdp->chgBit(c+2297,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_16));
        vcdp->chgBit(c+2305,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_17));
        vcdp->chgBit(c+2313,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_18));
        vcdp->chgBit(c+2321,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_19));
        vcdp->chgBit(c+2329,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_20));
        vcdp->chgBit(c+2337,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_21));
        vcdp->chgBit(c+2345,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_22));
        vcdp->chgBit(c+2353,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_23));
        vcdp->chgBit(c+2361,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_24));
        vcdp->chgBit(c+2369,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_25));
        vcdp->chgBit(c+2377,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_26));
        vcdp->chgBit(c+2385,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_27));
        vcdp->chgBit(c+2393,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_28));
        vcdp->chgBit(c+2401,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_29));
        vcdp->chgBit(c+2409,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_30));
        vcdp->chgBit(c+2417,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_31));
        vcdp->chgBit(c+2425,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_32));
        vcdp->chgBit(c+2433,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_33));
        vcdp->chgBit(c+2441,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_34));
        vcdp->chgBit(c+2449,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_35));
        vcdp->chgBit(c+2457,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_36));
        vcdp->chgBit(c+2465,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_37));
        vcdp->chgBit(c+2473,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_38));
        vcdp->chgBit(c+2481,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_39));
        vcdp->chgBit(c+2489,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_40));
        vcdp->chgBit(c+2497,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_41));
        vcdp->chgBit(c+2505,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_42));
        vcdp->chgBit(c+2513,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_43));
        vcdp->chgBit(c+2521,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_44));
        vcdp->chgBit(c+2529,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_45));
        vcdp->chgBit(c+2537,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_46));
        vcdp->chgBit(c+2545,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_47));
        vcdp->chgBit(c+2553,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_48));
        vcdp->chgBit(c+2561,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_49));
        vcdp->chgBit(c+2569,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_50));
        vcdp->chgBit(c+2577,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_51));
        vcdp->chgBit(c+2585,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_52));
        vcdp->chgBit(c+2593,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_53));
        vcdp->chgBit(c+2601,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_54));
        vcdp->chgBit(c+2609,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_55));
        vcdp->chgBit(c+2617,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_56));
        vcdp->chgBit(c+2625,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_57));
        vcdp->chgBit(c+2633,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_58));
        vcdp->chgBit(c+2641,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_59));
        vcdp->chgBit(c+2649,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_60));
        vcdp->chgBit(c+2657,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_61));
        vcdp->chgBit(c+2665,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_62));
        vcdp->chgBit(c+2673,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_63));
        vcdp->chgBit(c+2681,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_0));
        vcdp->chgBit(c+2689,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_1));
        vcdp->chgBit(c+2697,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_2));
        vcdp->chgBit(c+2705,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_3));
        vcdp->chgBit(c+2713,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_4));
        vcdp->chgBit(c+2721,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_5));
        vcdp->chgBit(c+2729,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_6));
        vcdp->chgBit(c+2737,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_7));
        vcdp->chgBit(c+2745,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_8));
        vcdp->chgBit(c+2753,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_9));
        vcdp->chgBit(c+2761,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_10));
        vcdp->chgBit(c+2769,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_11));
        vcdp->chgBit(c+2777,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_12));
        vcdp->chgBit(c+2785,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_13));
        vcdp->chgBit(c+2793,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_14));
        vcdp->chgBit(c+2801,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_15));
        vcdp->chgBit(c+2809,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_16));
        vcdp->chgBit(c+2817,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_17));
        vcdp->chgBit(c+2825,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_18));
        vcdp->chgBit(c+2833,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_19));
        vcdp->chgBit(c+2841,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_20));
        vcdp->chgBit(c+2849,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_21));
        vcdp->chgBit(c+2857,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_22));
        vcdp->chgBit(c+2865,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_23));
        vcdp->chgBit(c+2873,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_24));
        vcdp->chgBit(c+2881,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_25));
        vcdp->chgBit(c+2889,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_26));
        vcdp->chgBit(c+2897,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_27));
        vcdp->chgBit(c+2905,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_28));
        vcdp->chgBit(c+2913,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_29));
        vcdp->chgBit(c+2921,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_30));
        vcdp->chgBit(c+2929,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_31));
        vcdp->chgBit(c+2937,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_32));
        vcdp->chgBit(c+2945,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_33));
        vcdp->chgBit(c+2953,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_34));
        vcdp->chgBit(c+2961,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_35));
        vcdp->chgBit(c+2969,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_36));
        vcdp->chgBit(c+2977,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_37));
        vcdp->chgBit(c+2985,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_38));
        vcdp->chgBit(c+2993,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_39));
        vcdp->chgBit(c+3001,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_40));
        vcdp->chgBit(c+3009,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_41));
        vcdp->chgBit(c+3017,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_42));
        vcdp->chgBit(c+3025,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_43));
        vcdp->chgBit(c+3033,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_44));
        vcdp->chgBit(c+3041,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_45));
        vcdp->chgBit(c+3049,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_46));
        vcdp->chgBit(c+3057,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_47));
        vcdp->chgBit(c+3065,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_48));
        vcdp->chgBit(c+3073,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_49));
        vcdp->chgBit(c+3081,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_50));
        vcdp->chgBit(c+3089,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_51));
        vcdp->chgBit(c+3097,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_52));
        vcdp->chgBit(c+3105,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_53));
        vcdp->chgBit(c+3113,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_54));
        vcdp->chgBit(c+3121,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_55));
        vcdp->chgBit(c+3129,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_56));
        vcdp->chgBit(c+3137,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_57));
        vcdp->chgBit(c+3145,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_58));
        vcdp->chgBit(c+3153,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_59));
        vcdp->chgBit(c+3161,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_60));
        vcdp->chgBit(c+3169,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_61));
        vcdp->chgBit(c+3177,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_62));
        vcdp->chgBit(c+3185,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_63));
        vcdp->chgBit(c+3193,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_0));
        vcdp->chgBit(c+3201,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_1));
        vcdp->chgBit(c+3209,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_2));
        vcdp->chgBit(c+3217,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_3));
        vcdp->chgBit(c+3225,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_4));
        vcdp->chgBit(c+3233,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_5));
        vcdp->chgBit(c+3241,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_6));
        vcdp->chgBit(c+3249,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_7));
        vcdp->chgBit(c+3257,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_8));
        vcdp->chgBit(c+3265,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_9));
        vcdp->chgBit(c+3273,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_10));
        vcdp->chgBit(c+3281,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_11));
        vcdp->chgBit(c+3289,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_12));
        vcdp->chgBit(c+3297,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_13));
        vcdp->chgBit(c+3305,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_14));
        vcdp->chgBit(c+3313,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_15));
        vcdp->chgBit(c+3321,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_16));
        vcdp->chgBit(c+3329,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_17));
        vcdp->chgBit(c+3337,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_18));
        vcdp->chgBit(c+3345,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_19));
        vcdp->chgBit(c+3353,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_20));
        vcdp->chgBit(c+3361,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_21));
        vcdp->chgBit(c+3369,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_22));
    }
}

void VViterbiDecoder::traceChgThis__10(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3377,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_23));
        vcdp->chgBit(c+3385,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_24));
        vcdp->chgBit(c+3393,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_25));
        vcdp->chgBit(c+3401,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_26));
        vcdp->chgBit(c+3409,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_27));
        vcdp->chgBit(c+3417,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_28));
        vcdp->chgBit(c+3425,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_29));
        vcdp->chgBit(c+3433,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_30));
        vcdp->chgBit(c+3441,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_31));
        vcdp->chgBit(c+3449,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_32));
        vcdp->chgBit(c+3457,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_33));
        vcdp->chgBit(c+3465,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_34));
        vcdp->chgBit(c+3473,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_35));
        vcdp->chgBit(c+3481,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_36));
        vcdp->chgBit(c+3489,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_37));
        vcdp->chgBit(c+3497,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_38));
        vcdp->chgBit(c+3505,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_39));
        vcdp->chgBit(c+3513,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_40));
        vcdp->chgBit(c+3521,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_41));
        vcdp->chgBit(c+3529,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_42));
        vcdp->chgBit(c+3537,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_43));
        vcdp->chgBit(c+3545,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_44));
        vcdp->chgBit(c+3553,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_45));
        vcdp->chgBit(c+3561,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_46));
        vcdp->chgBit(c+3569,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_47));
        vcdp->chgBit(c+3577,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_48));
        vcdp->chgBit(c+3585,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_49));
        vcdp->chgBit(c+3593,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_50));
        vcdp->chgBit(c+3601,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_51));
        vcdp->chgBit(c+3609,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_52));
        vcdp->chgBit(c+3617,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_53));
        vcdp->chgBit(c+3625,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_54));
        vcdp->chgBit(c+3633,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_55));
        vcdp->chgBit(c+3641,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_56));
        vcdp->chgBit(c+3649,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_57));
        vcdp->chgBit(c+3657,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_58));
        vcdp->chgBit(c+3665,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_59));
        vcdp->chgBit(c+3673,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_60));
        vcdp->chgBit(c+3681,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_61));
        vcdp->chgBit(c+3689,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_62));
        vcdp->chgBit(c+3697,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_63));
    }
}

void VViterbiDecoder::traceChgThis__11(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+3705,((((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) 
                               << 1U) | (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_data))),2);
    }
}

void VViterbiDecoder::traceChgThis__12(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp14[3];
    // Body
    {
        vcdp->chgBit(c+3713,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1));
        vcdp->chgBit(c+3721,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid));
        vcdp->chgBit(c+3729,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last));
        vcdp->chgBit(c+3737,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1));
        vcdp->chgBit(c+3745,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_last));
        vcdp->chgBit(c+3753,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_valid_regNext));
        vcdp->chgBit(c+3761,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_last_regNext));
        vcdp->chgBit(c+3769,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next));
        vcdp->chgBit(c+3777,(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next));
        vcdp->chgBus(c+3785,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select),2);
        vcdp->chgBus(c+3793,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write),5);
        vcdp->chgBit(c+3801,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail));
        vcdp->chgBit(c+3809,((0x1fU <= (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write))));
        vcdp->chgBit(c+3817,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__goto_tail));
        vcdp->chgBit(c+3825,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))));
        vcdp->chgBit(c+3833,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state));
        vcdp->chgBit(c+3841,((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+3849,((0x3fU == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+3857,((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+3865,((0x3fU == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+3873,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__fifo_pop_valve));
        vcdp->chgBit(c+3881,((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__fifo_pop_valve)))));
        __Vtemp14[0U] = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                          ? ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                              ? 0x55534831U : 0x3f3f3f3fU)
                          : 0x504f5031U);
        __Vtemp14[1U] = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                          ? ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                              ? 0x4f503050U : 0x3f3f3f3fU)
                          : 0x55534830U);
        __Vtemp14[2U] = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                          ? ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                              ? 0x50U : 0x3fU) : 0x50U);
        vcdp->chgArray(c+3889,(__Vtemp14),72);
        vcdp->chgBus(c+3913,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+3921,((0xfU == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+3929,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+3937,((0xfU == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+3945,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+3953,((0xfU & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                      - (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+3961,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor),6);
        vcdp->chgBus(c+3969,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor),6);
    }
}

void VViterbiDecoder::traceChgThis__13(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3977,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last) 
                              & (1U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))));
        vcdp->chgBit(c+3985,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last) 
                              & (1U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)))));
        vcdp->chgBit(c+3993,(((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)
                               ? ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last) 
                                  & (1U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))
                               : ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last) 
                                  & (1U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))))));
    }
}

void VViterbiDecoder::traceChgThis__14(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+4001,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish));
        vcdp->chgBus(c+4009,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select),2);
        vcdp->chgBus(c+4017,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt),2);
        vcdp->chgBit(c+4025,((3U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt))));
        vcdp->chgBit(c+4033,((1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                    >> 2U))));
        vcdp->chgBit(c+4041,((1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                    >> 1U))));
        vcdp->chgBit(c+4049,((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+4057,((3U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                    >> 1U))),2);
        vcdp->chgBus(c+4065,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[0]),3);
        vcdp->chgBus(c+4066,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[1]),3);
        vcdp->chgBus(c+4067,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[2]),3);
        vcdp->chgBus(c+4068,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[3]),3);
        vcdp->chgBus(c+4069,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[4]),3);
        vcdp->chgBus(c+4070,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[5]),3);
        vcdp->chgBus(c+4071,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[6]),3);
        vcdp->chgBus(c+4072,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[7]),3);
        vcdp->chgBus(c+4073,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[8]),3);
        vcdp->chgBus(c+4074,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[9]),3);
        vcdp->chgBus(c+4075,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[10]),3);
        vcdp->chgBus(c+4076,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[11]),3);
        vcdp->chgBus(c+4077,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[12]),3);
        vcdp->chgBus(c+4078,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[13]),3);
        vcdp->chgBus(c+4079,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[14]),3);
        vcdp->chgBus(c+4080,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[15]),3);
        vcdp->chgBit(c+4193,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last));
        vcdp->chgBit(c+4201,(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last));
    }
}

void VViterbiDecoder::traceChgThis__15(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+4209,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read),5);
        vcdp->chgBit(c+4217,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat));
        vcdp->chgBus(c+4225,(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state),3);
        vcdp->chgBit(c+4233,((0x1fU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))));
    }
}

void VViterbiDecoder::traceChgThis__16(VViterbiDecoder__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+4241,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+4249,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+4257,(vlTOPp->raw_data_payload_last));
        vcdp->chgBit(c+4265,(vlTOPp->decoded_data_valid));
        vcdp->chgBit(c+4273,(vlTOPp->decoded_data_payload_last));
        vcdp->chgBit(c+4281,(vlTOPp->decoded_data_payload_fragment));
        vcdp->chgBit(c+4289,(vlTOPp->clk));
        vcdp->chgBit(c+4297,(vlTOPp->reset));
        vcdp->chgBus(c+4305,((3U & ((1U & ((IData)(vlTOPp->_zz_in_b) 
                                           >> 1U)) 
                                    + (1U & (IData)(vlTOPp->_zz_in_b))))),2);
        vcdp->chgBus(c+4313,((3U & ((1U & (~ ((IData)(vlTOPp->_zz_in_b) 
                                              >> 1U))) 
                                    + (1U & (~ (IData)(vlTOPp->_zz_in_b)))))),2);
        vcdp->chgBus(c+4321,((3U & ((1U & (1U ^ ((IData)(vlTOPp->_zz_in_b) 
                                                 >> 1U))) 
                                    + (1U & (IData)(vlTOPp->_zz_in_b))))),2);
        vcdp->chgBus(c+4329,((3U & ((1U & ((IData)(vlTOPp->_zz_in_b) 
                                           >> 1U)) 
                                    + (1U & (~ (IData)(vlTOPp->_zz_in_b)))))),2);
        vcdp->chgBit(c+4337,(((IData)(vlTOPp->raw_data_payload_last) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__raw_data_fire))));
        vcdp->chgBus(c+4345,(vlTOPp->_zz_in_b),2);
        vcdp->chgBus(c+4353,((3U & (~ (IData)(vlTOPp->_zz_in_b)))),2);
        vcdp->chgBus(c+4361,((2U ^ (IData)(vlTOPp->_zz_in_b))),2);
        vcdp->chgBus(c+4369,((1U ^ (IData)(vlTOPp->_zz_in_b))),2);
    }
}
