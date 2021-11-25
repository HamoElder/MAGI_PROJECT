// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VConvCombTest__Syms.h"


void VConvCombTest::traceChgThis__25(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+14921,((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) 
                                << 1U) | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data))),2);
    }
}

void VConvCombTest::traceChgThis__26(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Variables
    WData/*95:0*/ __Vtemp2158[3];
    // Body
    {
        vcdp->chgBit(c+14929,(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1));
        vcdp->chgBit(c+14937,(vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_payload_last_regNext));
        vcdp->chgBit(c+14945,(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_valid_1));
        vcdp->chgBit(c+14953,(vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_last));
        vcdp->chgBit(c+14961,((0U != (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__cnt))));
        vcdp->chgBit(c+14969,(((1U == (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__cnt)) 
                               & (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__raw_data_last))));
        vcdp->chgBit(c+14977,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_valid_regNext));
        vcdp->chgBit(c+14985,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_last_regNext));
        vcdp->chgBus(c+14993,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushPtr_value),11);
        vcdp->chgBit(c+15001,((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+15009,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_popPtr_value),11);
        vcdp->chgBit(c+15017,((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+15025,(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+15033,((0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_pushPtr_value) 
                                         - (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT__logic_popPtr_value)))),11);
        vcdp->chgBus(c+15041,(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__mask_cnt),4);
        vcdp->chgBus(c+15049,(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__cnt),4);
        vcdp->chgBit(c+15057,(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__raw_data_last));
        vcdp->chgBus(c+15065,(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushPtr_value),11);
        vcdp->chgBit(c+15073,((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+15081,(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popPtr_value),11);
        vcdp->chgBit(c+15089,((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+15097,(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+15105,((0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_pushPtr_value) 
                                         - (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT__logic_popPtr_value)))),11);
        vcdp->chgBit(c+15113,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1));
        vcdp->chgBit(c+15121,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid));
        vcdp->chgBit(c+15129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last));
        vcdp->chgBit(c+15137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1));
        vcdp->chgBit(c+15145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_last));
        vcdp->chgBit(c+15153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next));
        vcdp->chgBit(c+15161,(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next));
        vcdp->chgBus(c+15169,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select),2);
        vcdp->chgBus(c+15177,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write),8);
        vcdp->chgBit(c+15185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail));
        vcdp->chgBit(c+15193,((0xa7U <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write))));
        vcdp->chgBit(c+15201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail));
        vcdp->chgBit(c+15209,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))));
        vcdp->chgBit(c+15217,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state));
        vcdp->chgBit(c+15225,((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+15233,((0x10bU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+15241,((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+15249,((0x10bU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor))));
        vcdp->chgBit(c+15257,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_valve));
        vcdp->chgBit(c+15265,((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_valve)))));
        __Vtemp2158[0U] = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                            ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                ? 0x55534831U : 0x3f3f3f3fU)
                            : 0x504f5031U);
        __Vtemp2158[1U] = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                            ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                ? 0x4f503050U : 0x3f3f3f3fU)
                            : 0x55534830U);
        __Vtemp2158[2U] = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                            ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
                                ? 0x50U : 0x3fU) : 0x50U);
        vcdp->chgArray(c+15273,(__Vtemp2158),72);
        vcdp->chgBus(c+15297,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value),4);
        vcdp->chgBit(c+15305,((0xfU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+15313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value),4);
        vcdp->chgBit(c+15321,((0xfU == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+15329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+15337,((0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                                       - (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value)))),4);
        vcdp->chgBus(c+15345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor),9);
        vcdp->chgBus(c+15353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor),9);
        vcdp->chgBus(c+15361,(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushPtr_value),11);
        vcdp->chgBit(c+15369,((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+15377,(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_value),11);
        vcdp->chgBit(c+15385,((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+15393,(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+15401,((0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_pushPtr_value) 
                                         - (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_popPtr_value)))),11);
        vcdp->chgBus(c+15409,(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushPtr_value),11);
        vcdp->chgBit(c+15417,((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+15425,(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popPtr_value),11);
        vcdp->chgBit(c+15433,((0x7ffU == (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+15441,(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+15449,((0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_pushPtr_value) 
                                         - (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popPtr_value)))),11);
    }
}

void VConvCombTest::traceChgThis__28(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+15457,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last) 
                               & (1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))));
        vcdp->chgBit(c+15465,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last) 
                               & (1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)))));
        vcdp->chgBit(c+15473,(((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
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
        vcdp->chgBit(c+15481,((1U & vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT___zz_logic_ram_port0)));
        vcdp->chgBus(c+15489,((0xffffU & (vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT___zz_logic_ram_port0 
                                          >> 1U))),16);
        vcdp->chgBit(c+15497,((1U & (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+15505,((0xfffU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT___zz_logic_ram_port0) 
                                         >> 1U))),12);
        vcdp->chgBit(c+15513,((1U & (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+15521,((3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))),2);
        vcdp->chgBus(c+15529,((3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                     >> 3U))),2);
        vcdp->chgBit(c+15537,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish));
        vcdp->chgBus(c+15545,((7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 3U)))
                                      ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)) 
                                         + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U)))
                                      : ((1U == (3U 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 3U)))
                                          ? (1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))
                                          : 0U)))),3);
        vcdp->chgBus(c+15553,((7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 3U)))
                                      ? ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                         + (1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 2U))))
                                      : ((1U == (3U 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 3U)))
                                          ? (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U)))
                                          : 0U)))),3);
        vcdp->chgBus(c+15561,((7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 3U)))
                                      ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U)) 
                                         + (1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 2U))))
                                      : ((1U == (3U 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 3U)))
                                          ? (1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))
                                          : 0U)))),3);
        vcdp->chgBus(c+15569,((7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 3U)))
                                      ? ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                         + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U)))
                                      : ((1U == (3U 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 3U)))
                                          ? (1U & (~ 
                                                   ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                    >> 1U)))
                                          : 0U)))),3);
        vcdp->chgBit(c+15577,((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))));
        vcdp->chgBit(c+15585,((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                     >> 2U))));
        vcdp->chgBit(c+15593,((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                        >> 1U)))));
        vcdp->chgBit(c+15601,((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                        >> 2U)))));
        vcdp->chgBus(c+15609,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select),2);
        vcdp->chgBus(c+15617,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt),3);
        vcdp->chgBit(c+15625,((7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))));
        vcdp->chgBit(c+15633,((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                     >> 2U))));
        vcdp->chgBit(c+15641,((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))));
        vcdp->chgBit(c+15649,((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+15657,((3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))),2);
        vcdp->chgBus(c+15665,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[0]),3);
        vcdp->chgBus(c+15666,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[1]),3);
        vcdp->chgBus(c+15667,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[2]),3);
        vcdp->chgBus(c+15668,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[3]),3);
        vcdp->chgBus(c+15669,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[4]),3);
        vcdp->chgBus(c+15670,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[5]),3);
        vcdp->chgBus(c+15671,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[6]),3);
        vcdp->chgBus(c+15672,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[7]),3);
        vcdp->chgBus(c+15673,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[8]),3);
        vcdp->chgBus(c+15674,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[9]),3);
        vcdp->chgBus(c+15675,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[10]),3);
        vcdp->chgBus(c+15676,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[11]),3);
        vcdp->chgBus(c+15677,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[12]),3);
        vcdp->chgBus(c+15678,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[13]),3);
        vcdp->chgBus(c+15679,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[14]),3);
        vcdp->chgBus(c+15680,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[15]),3);
        vcdp->chgBit(c+15793,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last));
        vcdp->chgBit(c+15801,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last));
    }
}

void VConvCombTest::traceChgThis__30(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+15809,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read),8);
        vcdp->chgBit(c+15817,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat));
        vcdp->chgBus(c+15825,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state),3);
        vcdp->chgBit(c+15833,((0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))));
    }
}

void VConvCombTest::traceChgThis__31(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+15841,(vlTOPp->tail_bits_valid));
        vcdp->chgBus(c+15849,(vlTOPp->tail_bits_payload),7);
        vcdp->chgBit(c+15857,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+15865,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+15873,(vlTOPp->raw_data_payload_last));
        vcdp->chgBus(c+15881,(vlTOPp->raw_data_payload_fragment),8);
        vcdp->chgBit(c+15889,(vlTOPp->decoded_data_valid));
        vcdp->chgBit(c+15897,(vlTOPp->decoded_data_ready));
        vcdp->chgBit(c+15905,(vlTOPp->decoded_data_payload_last));
        vcdp->chgBus(c+15913,(vlTOPp->decoded_data_payload_fragment),8);
        vcdp->chgBit(c+15921,(vlTOPp->clk));
        vcdp->chgBit(c+15929,(vlTOPp->reset));
        vcdp->chgBit(c+15937,((1U & (~ (IData)(vlTOPp->tail_bits_valid)))));
    }
}
