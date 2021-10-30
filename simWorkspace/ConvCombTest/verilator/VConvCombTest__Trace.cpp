// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VConvCombTest__Syms.h"


//======================

void VConvCombTest::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VConvCombTest* t = (VConvCombTest*)userthis;
    VConvCombTest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VConvCombTest::traceChgThis(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                >> 1U) | (vlTOPp->__Vm_traceActivity 
                                          >> 3U))))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__14(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__15(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VConvCombTest::traceChgThis__2(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[0]),2);
        vcdp->chgBus(c+2,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[1]),2);
        vcdp->chgBus(c+3,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[2]),2);
        vcdp->chgBus(c+4,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[3]),2);
        vcdp->chgBus(c+5,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[4]),2);
        vcdp->chgBus(c+6,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[5]),2);
        vcdp->chgBus(c+7,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[6]),2);
        vcdp->chgBus(c+8,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom[7]),2);
        vcdp->chgBit(c+65,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[0]));
        vcdp->chgBit(c+66,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[1]));
        vcdp->chgBit(c+67,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[2]));
        vcdp->chgBit(c+68,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[3]));
        vcdp->chgBit(c+69,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[4]));
        vcdp->chgBit(c+70,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[5]));
        vcdp->chgBit(c+71,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[6]));
        vcdp->chgBit(c+72,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom[7]));
    }
}

void VConvCombTest::traceChgThis__3(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+129,((7U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                   >> 1U))),3);
        vcdp->chgBit(c+137,((1U & ((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                     >> 1U) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                               >> 2U)) 
                                   ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                      >> 3U)))));
        vcdp->chgBit(c+145,((1U & ((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                     >> 1U) ^ (2U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                >> 2U))) 
                                   ^ (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                            >> 3U))))));
        vcdp->chgBus(c+153,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1))),16);
        vcdp->chgBit(c+161,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+169,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1))),16);
        vcdp->chgBit(c+177,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+185,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1))),16);
        vcdp->chgBit(c+193,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+201,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)
                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0)
                              : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1))),16);
        vcdp->chgBit(c+209,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17)))));
        vcdp->chgBus(c+217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_0),16);
        vcdp->chgBus(c+225,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__branch_weight_1),16);
        vcdp->chgBit(c+233,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_4__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_0),16);
        vcdp->chgBus(c+249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__branch_weight_1),16);
        vcdp->chgBit(c+257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_5__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_0),16);
        vcdp->chgBus(c+273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__branch_weight_1),16);
        vcdp->chgBit(c+281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_6__DOT__when_AddCompareSelect_l17));
        vcdp->chgBus(c+289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_0),16);
        vcdp->chgBus(c+297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__branch_weight_1),16);
        vcdp->chgBit(c+305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_7__DOT__when_AddCompareSelect_l17));
    }
}

void VConvCombTest::traceChgThis__4(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+313,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+321,(vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid));
        vcdp->chgBus(c+329,(((((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch)) 
                              << 0xaU) | (0x3ffU & 
                                          ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
                                           - (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value))))),11);
        vcdp->chgBus(c+337,(((((~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch)) 
                              << 0xaU) | (0x3ffU & 
                                          ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value) 
                                           - (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value))))),11);
        vcdp->chgBit(c+345,(vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready));
        vcdp->chgBit(c+353,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+361,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_valueNext),10);
        vcdp->chgBit(c+369,(((0x3ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+377,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBit(c+385,(((0x3ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+393,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+401,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+409,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping));
        vcdp->chgBit(c+417,(((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+425,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full));
        vcdp->chgBit(c+433,(((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping))));
        vcdp->chgBit(c+441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire));
        vcdp->chgBit(c+449,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full)))));
        vcdp->chgBit(c+457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid));
        vcdp->chgBus(c+465,(((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy) 
                               & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch)) 
                              << 6U) | (0x3fU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))))),7);
        vcdp->chgBus(c+473,(((((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)) 
                               & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch)) 
                              << 6U) | (0x3fU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value) 
                                                 - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))))),7);
        vcdp->chgBit(c+481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+489,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext),6);
        vcdp->chgBit(c+497,(((0x3fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value)) 
                             & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+505,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch));
        vcdp->chgBit(c+513,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing));
        vcdp->chgBit(c+521,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+529,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full));
    }
}

void VConvCombTest::traceChgThis__5(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+537,(((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                             & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire))));
    }
}

void VConvCombTest::traceChgThis__6(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+545,(((0x3fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)) 
                             & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+553,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) 
                             != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping))));
    }
}

void VConvCombTest::traceChgThis__7(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+561,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor),3);
        vcdp->chgBus(c+569,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom
                            [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor]),2);
        vcdp->chgBit(c+577,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                            [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor]));
    }
}

void VConvCombTest::traceChgThis__8(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+585,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext),10);
        vcdp->chgBit(c+593,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104));
        vcdp->chgArray(c+601,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string),88);
        vcdp->chgBit(c+625,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping));
        vcdp->chgBit(c+633,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+641,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext),6);
    }
}

void VConvCombTest::traceChgThis__9(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+649,(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data),2);
        vcdp->chgBit(c+657,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data));
        vcdp->chgBit(c+665,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_payload));
        vcdp->chgBus(c+673,(vlTOPp->ConvCombTest__DOT__encoder__DOT__r_enc_buf),3);
        vcdp->chgBus(c+681,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2),2);
        vcdp->chgBus(c+689,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path),4);
        vcdp->chgBit(c+697,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt));
        vcdp->chgBus(c+705,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0),16);
        vcdp->chgBus(c+713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1),16);
        vcdp->chgBus(c+721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2),16);
        vcdp->chgBus(c+729,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3),16);
        vcdp->chgBus(c+737,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4),16);
        vcdp->chgBus(c+745,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5),16);
        vcdp->chgBus(c+753,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6),16);
        vcdp->chgBus(c+761,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7),16);
        vcdp->chgBus(c+769,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2),16);
        vcdp->chgBus(c+777,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0),16);
        vcdp->chgBus(c+785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1),16);
        vcdp->chgBus(c+793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2),16);
        vcdp->chgBus(c+801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3),16);
        vcdp->chgBus(c+809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0),2);
        vcdp->chgBus(c+817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1),2);
        vcdp->chgBus(c+825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2),2);
        vcdp->chgBus(c+833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3),2);
        vcdp->chgBus(c+841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4),2);
        vcdp->chgBus(c+849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5),2);
        vcdp->chgBus(c+857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6),2);
        vcdp->chgBus(c+865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7),2);
        vcdp->chgBus(c+873,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1),4);
        vcdp->chgBus(c+881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1),4);
        vcdp->chgBus(c+889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor),2);
        vcdp->chgBit(c+897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data));
        vcdp->chgBus(c+905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[0]),4);
        vcdp->chgBus(c+906,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[1]),4);
        vcdp->chgBus(c+907,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[2]),4);
        vcdp->chgBus(c+908,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[3]),4);
        vcdp->chgBus(c+909,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[4]),4);
        vcdp->chgBus(c+910,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[5]),4);
        vcdp->chgBus(c+911,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[6]),4);
        vcdp->chgBus(c+912,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[7]),4);
        vcdp->chgBus(c+913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[8]),4);
        vcdp->chgBus(c+914,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[9]),4);
        vcdp->chgBus(c+915,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[10]),4);
        vcdp->chgBus(c+916,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[11]),4);
        vcdp->chgBus(c+917,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[12]),4);
        vcdp->chgBus(c+918,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[13]),4);
        vcdp->chgBus(c+919,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[14]),4);
        vcdp->chgBus(c+920,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[15]),4);
        vcdp->chgBus(c+921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[16]),4);
        vcdp->chgBus(c+922,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[17]),4);
        vcdp->chgBus(c+923,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[18]),4);
        vcdp->chgBus(c+924,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[19]),4);
        vcdp->chgBus(c+925,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[20]),4);
        vcdp->chgBus(c+926,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[21]),4);
        vcdp->chgBus(c+927,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[22]),4);
        vcdp->chgBus(c+928,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[23]),4);
        vcdp->chgBus(c+929,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[24]),4);
        vcdp->chgBus(c+930,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[25]),4);
        vcdp->chgBus(c+931,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[26]),4);
        vcdp->chgBus(c+932,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[27]),4);
        vcdp->chgBus(c+933,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[28]),4);
        vcdp->chgBus(c+934,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[29]),4);
        vcdp->chgBus(c+935,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[30]),4);
        vcdp->chgBus(c+936,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[31]),4);
        vcdp->chgBus(c+1161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[0]),4);
        vcdp->chgBus(c+1162,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[1]),4);
        vcdp->chgBus(c+1163,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[2]),4);
        vcdp->chgBus(c+1164,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[3]),4);
        vcdp->chgBus(c+1165,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[4]),4);
        vcdp->chgBus(c+1166,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[5]),4);
        vcdp->chgBus(c+1167,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[6]),4);
        vcdp->chgBus(c+1168,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[7]),4);
        vcdp->chgBus(c+1169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[8]),4);
        vcdp->chgBus(c+1170,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[9]),4);
        vcdp->chgBus(c+1171,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[10]),4);
        vcdp->chgBus(c+1172,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[11]),4);
        vcdp->chgBus(c+1173,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[12]),4);
        vcdp->chgBus(c+1174,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[13]),4);
        vcdp->chgBus(c+1175,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[14]),4);
        vcdp->chgBus(c+1176,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[15]),4);
        vcdp->chgBus(c+1177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[16]),4);
        vcdp->chgBus(c+1178,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[17]),4);
        vcdp->chgBus(c+1179,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[18]),4);
        vcdp->chgBus(c+1180,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[19]),4);
        vcdp->chgBus(c+1181,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[20]),4);
        vcdp->chgBus(c+1182,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[21]),4);
        vcdp->chgBus(c+1183,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[22]),4);
        vcdp->chgBus(c+1184,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[23]),4);
        vcdp->chgBus(c+1185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[24]),4);
        vcdp->chgBus(c+1186,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[25]),4);
        vcdp->chgBus(c+1187,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[26]),4);
        vcdp->chgBus(c+1188,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[27]),4);
        vcdp->chgBus(c+1189,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[28]),4);
        vcdp->chgBus(c+1190,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[29]),4);
        vcdp->chgBus(c+1191,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[30]),4);
        vcdp->chgBus(c+1192,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[31]),4);
        vcdp->chgBus(c+1417,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[0]),4);
        vcdp->chgBus(c+1418,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[1]),4);
        vcdp->chgBus(c+1419,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[2]),4);
        vcdp->chgBus(c+1420,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[3]),4);
        vcdp->chgBus(c+1421,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[4]),4);
        vcdp->chgBus(c+1422,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[5]),4);
        vcdp->chgBus(c+1423,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[6]),4);
        vcdp->chgBus(c+1424,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[7]),4);
        vcdp->chgBus(c+1425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[8]),4);
        vcdp->chgBus(c+1426,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[9]),4);
        vcdp->chgBus(c+1427,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[10]),4);
        vcdp->chgBus(c+1428,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[11]),4);
        vcdp->chgBus(c+1429,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[12]),4);
        vcdp->chgBus(c+1430,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[13]),4);
        vcdp->chgBus(c+1431,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[14]),4);
        vcdp->chgBus(c+1432,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[15]),4);
        vcdp->chgBus(c+1433,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[16]),4);
        vcdp->chgBus(c+1434,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[17]),4);
        vcdp->chgBus(c+1435,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[18]),4);
        vcdp->chgBus(c+1436,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[19]),4);
        vcdp->chgBus(c+1437,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[20]),4);
        vcdp->chgBus(c+1438,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[21]),4);
        vcdp->chgBus(c+1439,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[22]),4);
        vcdp->chgBus(c+1440,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[23]),4);
        vcdp->chgBus(c+1441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[24]),4);
        vcdp->chgBus(c+1442,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[25]),4);
        vcdp->chgBus(c+1443,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[26]),4);
        vcdp->chgBus(c+1444,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[27]),4);
        vcdp->chgBus(c+1445,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[28]),4);
        vcdp->chgBus(c+1446,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[29]),4);
        vcdp->chgBus(c+1447,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[30]),4);
        vcdp->chgBus(c+1448,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[31]),4);
        vcdp->chgQuad(c+1673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo),64);
    }
}

void VConvCombTest::traceChgThis__10(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1689,((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) 
                               << 1U) | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data))),2);
    }
}

void VConvCombTest::traceChgThis__11(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1697,(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1));
        vcdp->chgBit(c+1705,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_last_regNext));
        vcdp->chgBit(c+1713,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_valid_1));
        vcdp->chgBit(c+1721,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_data_last));
        vcdp->chgBit(c+1729,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_valid_1));
        vcdp->chgBit(c+1737,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_last));
        vcdp->chgBus(c+1745,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value),10);
        vcdp->chgBit(c+1753,((0x3ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1761,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value),10);
        vcdp->chgBit(c+1769,((0x3ffU == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1777,(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1785,((0x3ffU & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
                                        - (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value)))),10);
        vcdp->chgBit(c+1793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1));
        vcdp->chgBit(c+1801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid));
        vcdp->chgBit(c+1809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last));
        vcdp->chgBit(c+1817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1));
        vcdp->chgBit(c+1825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last));
        vcdp->chgBit(c+1833,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next));
        vcdp->chgBit(c+1841,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next));
        vcdp->chgBus(c+1849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select),2);
        vcdp->chgBus(c+1857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write),5);
        vcdp->chgBit(c+1865,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail));
        vcdp->chgBit(c+1873,((0x1fU <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write))));
        vcdp->chgBit(c+1881,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail));
        vcdp->chgBit(c+1889,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_ready));
        vcdp->chgBit(c+1897,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__data_last));
        vcdp->chgBus(c+1905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value),6);
        vcdp->chgBit(c+1913,((0x3fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+1921,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value),6);
        vcdp->chgBit(c+1929,((0x3fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+1937,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+1945,((0x3fU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)))),6);
    }
}

void VConvCombTest::traceChgThis__12(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1953,((1U & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+1961,((3U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                    >> 1U))),2);
        vcdp->chgBit(c+1969,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish));
        vcdp->chgBus(c+1977,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 2U)) 
                                    + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))),2);
        vcdp->chgBus(c+1985,((3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                              >> 2U))) 
                                    + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))))),2);
        vcdp->chgBus(c+1993,((3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 2U))) 
                                    + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                             >> 1U))))),2);
        vcdp->chgBus(c+2001,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 2U)) 
                                    + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)))))),2);
        vcdp->chgBus(c+2009,((3U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                       >> 1U)))),2);
        vcdp->chgBus(c+2017,((3U & (2U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))),2);
        vcdp->chgBus(c+2025,((3U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                          >> 1U)))),2);
        vcdp->chgBus(c+2033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select),2);
        vcdp->chgBus(c+2041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt),2);
        vcdp->chgBit(c+2049,((3U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))));
        vcdp->chgBit(c+2057,((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+2065,((3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                    >> 1U))),2);
        vcdp->chgQuad(c+2073,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_last_lifo),64);
    }
}

void VConvCombTest::traceChgThis__14(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+2089,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read),5);
        vcdp->chgBit(c+2097,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat));
        vcdp->chgBus(c+2105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state),3);
        vcdp->chgBit(c+2113,((0x1fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))));
        vcdp->chgBus(c+2121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor),6);
        vcdp->chgBit(c+2129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state));
        vcdp->chgBit(c+2137,((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_head_cursor))));
        vcdp->chgBus(c+2145,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                               ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                   ? 0x504f5020U : 0x3f3f3f3fU)
                               : 0x50555348U)),32);
    }
}

void VConvCombTest::traceChgThis__15(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2153,(vlTOPp->tail_bits_valid));
        vcdp->chgBus(c+2161,(vlTOPp->tail_bits_payload),3);
        vcdp->chgBit(c+2169,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+2177,(vlTOPp->raw_data_payload_last));
        vcdp->chgBit(c+2185,(vlTOPp->raw_data_payload_fragment));
        vcdp->chgBit(c+2193,(vlTOPp->decoded_data_valid));
        vcdp->chgBit(c+2201,(vlTOPp->decoded_data_payload_last));
        vcdp->chgBit(c+2209,(vlTOPp->decoded_data_payload_fragment));
        vcdp->chgBit(c+2217,(vlTOPp->clk));
        vcdp->chgBit(c+2225,(vlTOPp->reset));
    }
}
