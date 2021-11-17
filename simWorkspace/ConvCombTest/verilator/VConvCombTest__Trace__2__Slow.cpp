// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VConvCombTest__Syms.h"


void VConvCombTest::traceFullThis__29(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+15137,((7U & (2U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 1U)))),3);
        vcdp->fullBus(c+15145,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select),2);
        vcdp->fullBus(c+15153,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt),3);
        vcdp->fullBit(c+15161,((7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))));
        vcdp->fullBit(c+15169,((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                      >> 2U))));
        vcdp->fullBit(c+15177,((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                      >> 1U))));
        vcdp->fullBit(c+15185,((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0))));
        vcdp->fullBus(c+15193,((3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                      >> 1U))),2);
        vcdp->fullBus(c+15201,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[0]),3);
        vcdp->fullBus(c+15202,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[1]),3);
        vcdp->fullBus(c+15203,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[2]),3);
        vcdp->fullBus(c+15204,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[3]),3);
        vcdp->fullBus(c+15205,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[4]),3);
        vcdp->fullBus(c+15206,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[5]),3);
        vcdp->fullBus(c+15207,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[6]),3);
        vcdp->fullBus(c+15208,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[7]),3);
        vcdp->fullBus(c+15209,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[8]),3);
        vcdp->fullBus(c+15210,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[9]),3);
        vcdp->fullBus(c+15211,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[10]),3);
        vcdp->fullBus(c+15212,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[11]),3);
        vcdp->fullBus(c+15213,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[12]),3);
        vcdp->fullBus(c+15214,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[13]),3);
        vcdp->fullBus(c+15215,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[14]),3);
        vcdp->fullBus(c+15216,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[15]),3);
        vcdp->fullBit(c+15329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last));
        vcdp->fullBit(c+15337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last));
        vcdp->fullBus(c+15345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read),8);
        vcdp->fullBit(c+15353,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat));
        vcdp->fullBus(c+15361,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state),3);
        vcdp->fullBit(c+15369,((0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))));
        vcdp->fullBit(c+15377,(vlTOPp->tail_bits_valid));
        vcdp->fullBus(c+15385,(vlTOPp->tail_bits_payload),7);
        vcdp->fullBit(c+15393,(vlTOPp->raw_data_valid));
        vcdp->fullBit(c+15401,(vlTOPp->raw_data_payload_last));
        vcdp->fullBit(c+15409,(vlTOPp->raw_data_payload_fragment));
        vcdp->fullBit(c+15417,(vlTOPp->decoded_data_valid));
        vcdp->fullBit(c+15425,(vlTOPp->decoded_data_payload_last));
        vcdp->fullBit(c+15433,(vlTOPp->decoded_data_payload_fragment));
        vcdp->fullBit(c+15441,(vlTOPp->clk));
        vcdp->fullBit(c+15449,(vlTOPp->reset));
        vcdp->fullBit(c+15457,(0U));
        vcdp->fullBus(c+15465,(0U),3);
        vcdp->fullBus(c+15473,(7U),3);
        vcdp->fullBus(c+15481,(4U),3);
        vcdp->fullBus(c+15489,(3U),3);
        vcdp->fullBus(c+15497,(1U),3);
        vcdp->fullBus(c+15505,(6U),3);
        vcdp->fullBus(c+15513,(5U),3);
        vcdp->fullBus(c+15521,(2U),3);
        vcdp->fullBit(c+15529,(1U));
    }
}
