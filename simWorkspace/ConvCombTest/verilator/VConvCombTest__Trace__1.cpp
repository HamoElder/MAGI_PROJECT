// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VConvCombTest__Syms.h"


void VConvCombTest::traceChgThis__26(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+16049,((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) 
                                << 1U) | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data))),2);
    }
}

void VConvCombTest::traceChgThis__27(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp2446[3];
    // Body
    {
        vcdp->chgBit(c+16057,(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1));
        vcdp->chgBit(c+16065,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_payload_last_regNext));
        vcdp->chgBit(c+16073,(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_valid_1));
        vcdp->chgBit(c+16081,(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_last));
        vcdp->chgBit(c+16089,((0U != (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__cnt))));
        vcdp->chgBit(c+16097,(((1U == (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__cnt)) 
                               & (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__raw_data_last))));
        vcdp->chgBit(c+16105,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_valid_regNext));
        vcdp->chgBit(c+16113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_last_regNext));
        vcdp->chgBus(c+16121,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+16129,((0xfU == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+16137,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+16145,((0xfU == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+16153,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+16161,((0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+16169,(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__mask_cnt),4);
        vcdp->chgBus(c+16177,(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__cnt),4);
        vcdp->chgBit(c+16185,(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__raw_data_last));
        vcdp->chgBus(c+16193,(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushPtr_value),9);
        vcdp->chgBit(c+16201,((0x1ffU == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+16209,(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popPtr_value),9);
        vcdp->chgBit(c+16217,((0x1ffU == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+16225,(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+16233,((0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushPtr_value) 
                                         - (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popPtr_value)))),9);
        vcdp->chgBit(c+16241,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1));
        vcdp->chgBit(c+16249,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid));
        vcdp->chgBit(c+16257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last));
        vcdp->chgBit(c+16265,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1));
        vcdp->chgBit(c+16273,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last));
        vcdp->chgBit(c+16281,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next));
        vcdp->chgBit(c+16289,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next));
        vcdp->chgBus(c+16297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select),2);
        vcdp->chgBus(c+16305,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write),8);
        vcdp->chgBit(c+16313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail));
        vcdp->chgBit(c+16321,((0xbfU <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write))));
        vcdp->chgBit(c+16329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail));
        vcdp->chgBit(c+16337,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))));
        vcdp->chgBit(c+16345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state));
        vcdp->chgBit(c+16353,((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+16361,((0x12fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+16369,((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+16377,((0x12fU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+16385,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_valve));
        vcdp->chgBit(c+16393,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_valve)))));
        __Vtemp2446[0U] = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                            ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                ? 0x55534831U : 0x3f3f3f3fU)
                            : 0x504f5031U);
        __Vtemp2446[1U] = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                            ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                ? 0x4f503050U : 0x3f3f3f3fU)
                            : 0x55534830U);
        __Vtemp2446[2U] = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                            ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                ? 0x50U : 0x3fU) : 0x50U);
        vcdp->chgArray(c+16401,(__Vtemp2446),72);
        vcdp->chgBus(c+16425,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+16433,((0xfU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+16441,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+16449,((0xfU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+16457,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+16465,((0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+16473,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor),9);
        vcdp->chgBus(c+16481,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor),9);
        vcdp->chgBus(c+16489,(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushPtr_value),9);
        vcdp->chgBit(c+16497,((0x1ffU == (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+16505,(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_value),9);
        vcdp->chgBit(c+16513,((0x1ffU == (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+16521,(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+16529,((0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushPtr_value) 
                                         - (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_value)))),9);
        vcdp->chgBus(c+16537,(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushPtr_value),9);
        vcdp->chgBit(c+16545,((0x1ffU == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+16553,(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popPtr_value),9);
        vcdp->chgBit(c+16561,((0x1ffU == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+16569,(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+16577,((0x1ffU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushPtr_value) 
                                         - (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popPtr_value)))),9);
    }
}

void VConvCombTest::traceChgThis__28(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+16585,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last) 
                               & (1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))));
        vcdp->chgBit(c+16593,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last) 
                               & (1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)))));
        vcdp->chgBit(c+16601,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last) 
                                   & (1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))
                                : ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last) 
                                   & (1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))))));
    }
}

void VConvCombTest::traceChgThis__29(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+16609,((1U & vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+16617,((0xffffU & (vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT___zz_logic_ram_port0 
                                          >> 1U))),16);
        vcdp->chgBit(c+16625,((1U & vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+16633,((0xffffU & (vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT___zz_logic_ram_port0 
                                          >> 1U))),16);
        vcdp->chgBit(c+16641,((1U & (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+16649,((3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))),2);
        vcdp->chgBus(c+16657,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[0]),17);
        vcdp->chgBus(c+16658,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[1]),17);
        vcdp->chgBus(c+16659,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[2]),17);
        vcdp->chgBus(c+16660,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[3]),17);
        vcdp->chgBus(c+16661,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[4]),17);
        vcdp->chgBus(c+16662,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[5]),17);
        vcdp->chgBus(c+16663,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[6]),17);
        vcdp->chgBus(c+16664,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[7]),17);
        vcdp->chgBus(c+16665,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[8]),17);
        vcdp->chgBus(c+16666,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[9]),17);
        vcdp->chgBus(c+16667,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[10]),17);
        vcdp->chgBus(c+16668,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[11]),17);
        vcdp->chgBus(c+16669,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[12]),17);
        vcdp->chgBus(c+16670,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[13]),17);
        vcdp->chgBus(c+16671,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[14]),17);
        vcdp->chgBus(c+16672,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_ram[15]),17);
        vcdp->chgBit(c+16785,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish));
        vcdp->chgBus(c+16793,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 2U)) 
                                     + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                              >> 1U))))),2);
        vcdp->chgBus(c+16801,((3U & ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U))) 
                                     + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 1U)))))),2);
        vcdp->chgBus(c+16809,((3U & ((1U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))) 
                                     + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                              >> 1U))))),2);
        vcdp->chgBus(c+16817,((3U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                            >> 2U)) 
                                     + (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 1U)))))),2);
        vcdp->chgBus(c+16825,((3U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                        >> 1U)))),2);
        vcdp->chgBus(c+16833,((3U & (2U ^ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U)))),2);
        vcdp->chgBus(c+16841,((3U & (1U ^ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U)))),2);
        vcdp->chgBus(c+16849,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select),2);
        vcdp->chgBus(c+16857,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt),3);
        vcdp->chgBit(c+16865,((7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))));
        vcdp->chgBit(c+16873,((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                     >> 2U))));
        vcdp->chgBit(c+16881,((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))));
        vcdp->chgBit(c+16889,((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+16897,((3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))),2);
        vcdp->chgBus(c+16905,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[0]),3);
        vcdp->chgBus(c+16906,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[1]),3);
        vcdp->chgBus(c+16907,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[2]),3);
        vcdp->chgBus(c+16908,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[3]),3);
        vcdp->chgBus(c+16909,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[4]),3);
        vcdp->chgBus(c+16910,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[5]),3);
        vcdp->chgBus(c+16911,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[6]),3);
        vcdp->chgBus(c+16912,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[7]),3);
        vcdp->chgBus(c+16913,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[8]),3);
        vcdp->chgBus(c+16914,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[9]),3);
        vcdp->chgBus(c+16915,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[10]),3);
        vcdp->chgBus(c+16916,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[11]),3);
        vcdp->chgBus(c+16917,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[12]),3);
        vcdp->chgBus(c+16918,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[13]),3);
        vcdp->chgBus(c+16919,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[14]),3);
        vcdp->chgBus(c+16920,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[15]),3);
        vcdp->chgBit(c+17033,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last));
        vcdp->chgBit(c+17041,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last));
    }
}

void VConvCombTest::traceChgThis__31(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+17049,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read),8);
        vcdp->chgBit(c+17057,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat));
        vcdp->chgBus(c+17065,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state),3);
        vcdp->chgBit(c+17073,((0xbfU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))));
    }
}

void VConvCombTest::traceChgThis__32(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+17081,(vlTOPp->tail_bits_valid));
        vcdp->chgBus(c+17089,(vlTOPp->tail_bits_payload),7);
        vcdp->chgBit(c+17097,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+17105,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+17113,(vlTOPp->raw_data_payload_last));
        vcdp->chgBus(c+17121,(vlTOPp->raw_data_payload_fragment),8);
        vcdp->chgBit(c+17129,(vlTOPp->decoded_data_valid));
        vcdp->chgBit(c+17137,(vlTOPp->decoded_data_ready));
        vcdp->chgBit(c+17145,(vlTOPp->decoded_data_payload_last));
        vcdp->chgBus(c+17153,(vlTOPp->decoded_data_payload_fragment),8);
        vcdp->chgBit(c+17161,(vlTOPp->clk));
        vcdp->chgBit(c+17169,(vlTOPp->reset));
        vcdp->chgBit(c+17177,((1U & (~ (IData)(vlTOPp->tail_bits_valid)))));
    }
}
