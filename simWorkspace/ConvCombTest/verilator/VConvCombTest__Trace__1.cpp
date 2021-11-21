// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VConvCombTest__Syms.h"


void VConvCombTest::traceChgThis__28(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+15105,((7U & ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                            >> 3U)) 
                                     + ((1U & (1U ^ 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                >> 2U))) 
                                        + (1U & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                                 >> 1U)))))),3);
        vcdp->chgBus(c+15113,((7U & (5U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U)))),3);
        vcdp->chgBus(c+15121,((7U & (2U ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_logic_ram_port0) 
                                           >> 1U)))),3);
        vcdp->chgBus(c+15129,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select),2);
        vcdp->chgBus(c+15137,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt),3);
        vcdp->chgBit(c+15145,((7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))));
        vcdp->chgBit(c+15153,((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                     >> 2U))));
        vcdp->chgBit(c+15161,((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))));
        vcdp->chgBit(c+15169,((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0))));
        vcdp->chgBus(c+15177,((3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                                     >> 1U))),2);
        vcdp->chgBus(c+15185,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[0]),3);
        vcdp->chgBus(c+15186,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[1]),3);
        vcdp->chgBus(c+15187,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[2]),3);
        vcdp->chgBus(c+15188,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[3]),3);
        vcdp->chgBus(c+15189,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[4]),3);
        vcdp->chgBus(c+15190,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[5]),3);
        vcdp->chgBus(c+15191,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[6]),3);
        vcdp->chgBus(c+15192,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[7]),3);
        vcdp->chgBus(c+15193,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[8]),3);
        vcdp->chgBus(c+15194,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[9]),3);
        vcdp->chgBus(c+15195,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[10]),3);
        vcdp->chgBus(c+15196,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[11]),3);
        vcdp->chgBus(c+15197,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[12]),3);
        vcdp->chgBus(c+15198,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[13]),3);
        vcdp->chgBus(c+15199,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[14]),3);
        vcdp->chgBus(c+15200,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[15]),3);
        vcdp->chgBit(c+15313,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last));
        vcdp->chgBit(c+15321,(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last));
    }
}

void VConvCombTest::traceChgThis__29(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+15329,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read),8);
        vcdp->chgBit(c+15337,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat));
        vcdp->chgBus(c+15345,(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state),3);
        vcdp->chgBit(c+15353,((0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))));
    }
}

void VConvCombTest::traceChgThis__30(VConvCombTest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+15361,(vlTOPp->tail_bits_valid));
        vcdp->chgBus(c+15369,(vlTOPp->tail_bits_payload),7);
        vcdp->chgBit(c+15377,(vlTOPp->raw_data_valid));
        vcdp->chgBit(c+15385,(vlTOPp->raw_data_ready));
        vcdp->chgBit(c+15393,(vlTOPp->raw_data_payload_last));
        vcdp->chgBit(c+15401,(vlTOPp->raw_data_payload_fragment));
        vcdp->chgBit(c+15409,(vlTOPp->decoded_data_valid));
        vcdp->chgBit(c+15417,(vlTOPp->decoded_data_payload_last));
        vcdp->chgBit(c+15425,(vlTOPp->decoded_data_payload_fragment));
        vcdp->chgBit(c+15433,(vlTOPp->clk));
        vcdp->chgBit(c+15441,(vlTOPp->reset));
        vcdp->chgBit(c+15449,((1U & (~ (IData)(vlTOPp->tail_bits_valid)))));
    }
}
