// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__84(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__84\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp2088[16];
    WData/*511:0*/ __Vtemp2089[16];
    WData/*511:0*/ __Vtemp2090[16];
    WData/*511:0*/ __Vtemp2091[16];
    WData/*511:0*/ __Vtemp2092[16];
    WData/*511:0*/ __Vtemp2093[16];
    WData/*511:0*/ __Vtemp2094[16];
    WData/*511:0*/ __Vtemp2095[16];
    WData/*511:0*/ __Vtemp2096[16];
    WData/*511:0*/ __Vtemp2097[16];
    WData/*511:0*/ __Vtemp2098[16];
    WData/*511:0*/ __Vtemp2099[16];
    WData/*511:0*/ __Vtemp2100[16];
    WData/*511:0*/ __Vtemp2101[16];
    WData/*511:0*/ __Vtemp2102[16];
    WData/*511:0*/ __Vtemp2103[16];
    WData/*511:0*/ __Vtemp2104[16];
    WData/*511:0*/ __Vtemp2105[16];
    WData/*511:0*/ __Vtemp2106[16];
    WData/*511:0*/ __Vtemp2107[16];
    WData/*511:0*/ __Vtemp2108[16];
    WData/*511:0*/ __Vtemp2109[16];
    WData/*511:0*/ __Vtemp2110[16];
    WData/*511:0*/ __Vtemp2111[16];
    WData/*511:0*/ __Vtemp2112[16];
    WData/*511:0*/ __Vtemp2113[16];
    WData/*511:0*/ __Vtemp2114[16];
    WData/*511:0*/ __Vtemp2115[16];
    WData/*511:0*/ __Vtemp2116[16];
    WData/*511:0*/ __Vtemp2117[16];
    WData/*511:0*/ __Vtemp2118[16];
    WData/*511:0*/ __Vtemp2119[16];
    WData/*511:0*/ __Vtemp2120[16];
    WData/*511:0*/ __Vtemp2121[16];
    WData/*511:0*/ __Vtemp2122[16];
    WData/*511:0*/ __Vtemp2123[16];
    WData/*511:0*/ __Vtemp2124[16];
    WData/*511:0*/ __Vtemp2125[16];
    WData/*511:0*/ __Vtemp2126[16];
    WData/*511:0*/ __Vtemp2127[16];
    WData/*511:0*/ __Vtemp2128[16];
    WData/*511:0*/ __Vtemp2129[16];
    WData/*511:0*/ __Vtemp2130[16];
    WData/*511:0*/ __Vtemp2131[16];
    WData/*511:0*/ __Vtemp2132[16];
    WData/*511:0*/ __Vtemp2133[16];
    WData/*511:0*/ __Vtemp2134[16];
    WData/*511:0*/ __Vtemp2135[16];
    WData/*511:0*/ __Vtemp2136[16];
    WData/*511:0*/ __Vtemp2137[16];
    WData/*511:0*/ __Vtemp2138[16];
    WData/*511:0*/ __Vtemp2139[16];
    WData/*511:0*/ __Vtemp2140[16];
    WData/*511:0*/ __Vtemp2141[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2088[0U] = 1U;
            __Vtemp2088[1U] = 0U;
            __Vtemp2088[2U] = 0U;
            __Vtemp2088[3U] = 0U;
            __Vtemp2088[4U] = 0U;
            __Vtemp2088[5U] = 0U;
            __Vtemp2088[6U] = 0U;
            __Vtemp2088[7U] = 0U;
            __Vtemp2088[8U] = 0U;
            __Vtemp2088[9U] = 0U;
            __Vtemp2088[0xaU] = 0U;
            __Vtemp2088[0xbU] = 0U;
            __Vtemp2088[0xcU] = 0U;
            __Vtemp2088[0xdU] = 0U;
            __Vtemp2088[0xeU] = 0U;
            __Vtemp2088[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2089, __Vtemp2088, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp2089[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_240 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2090[0U] = 1U;
            __Vtemp2090[1U] = 0U;
            __Vtemp2090[2U] = 0U;
            __Vtemp2090[3U] = 0U;
            __Vtemp2090[4U] = 0U;
            __Vtemp2090[5U] = 0U;
            __Vtemp2090[6U] = 0U;
            __Vtemp2090[7U] = 0U;
            __Vtemp2090[8U] = 0U;
            __Vtemp2090[9U] = 0U;
            __Vtemp2090[0xaU] = 0U;
            __Vtemp2090[0xbU] = 0U;
            __Vtemp2090[0xcU] = 0U;
            __Vtemp2090[0xdU] = 0U;
            __Vtemp2090[0xeU] = 0U;
            __Vtemp2090[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2091, __Vtemp2090, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp2091[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_241 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2092[0U] = 1U;
            __Vtemp2092[1U] = 0U;
            __Vtemp2092[2U] = 0U;
            __Vtemp2092[3U] = 0U;
            __Vtemp2092[4U] = 0U;
            __Vtemp2092[5U] = 0U;
            __Vtemp2092[6U] = 0U;
            __Vtemp2092[7U] = 0U;
            __Vtemp2092[8U] = 0U;
            __Vtemp2092[9U] = 0U;
            __Vtemp2092[0xaU] = 0U;
            __Vtemp2092[0xbU] = 0U;
            __Vtemp2092[0xcU] = 0U;
            __Vtemp2092[0xdU] = 0U;
            __Vtemp2092[0xeU] = 0U;
            __Vtemp2092[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2093, __Vtemp2092, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp2093[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_242 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2094[0U] = 1U;
            __Vtemp2094[1U] = 0U;
            __Vtemp2094[2U] = 0U;
            __Vtemp2094[3U] = 0U;
            __Vtemp2094[4U] = 0U;
            __Vtemp2094[5U] = 0U;
            __Vtemp2094[6U] = 0U;
            __Vtemp2094[7U] = 0U;
            __Vtemp2094[8U] = 0U;
            __Vtemp2094[9U] = 0U;
            __Vtemp2094[0xaU] = 0U;
            __Vtemp2094[0xbU] = 0U;
            __Vtemp2094[0xcU] = 0U;
            __Vtemp2094[0xdU] = 0U;
            __Vtemp2094[0xeU] = 0U;
            __Vtemp2094[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2095, __Vtemp2094, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp2095[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_243 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2096[0U] = 1U;
            __Vtemp2096[1U] = 0U;
            __Vtemp2096[2U] = 0U;
            __Vtemp2096[3U] = 0U;
            __Vtemp2096[4U] = 0U;
            __Vtemp2096[5U] = 0U;
            __Vtemp2096[6U] = 0U;
            __Vtemp2096[7U] = 0U;
            __Vtemp2096[8U] = 0U;
            __Vtemp2096[9U] = 0U;
            __Vtemp2096[0xaU] = 0U;
            __Vtemp2096[0xbU] = 0U;
            __Vtemp2096[0xcU] = 0U;
            __Vtemp2096[0xdU] = 0U;
            __Vtemp2096[0xeU] = 0U;
            __Vtemp2096[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2097, __Vtemp2096, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp2097[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_244 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2098[0U] = 1U;
            __Vtemp2098[1U] = 0U;
            __Vtemp2098[2U] = 0U;
            __Vtemp2098[3U] = 0U;
            __Vtemp2098[4U] = 0U;
            __Vtemp2098[5U] = 0U;
            __Vtemp2098[6U] = 0U;
            __Vtemp2098[7U] = 0U;
            __Vtemp2098[8U] = 0U;
            __Vtemp2098[9U] = 0U;
            __Vtemp2098[0xaU] = 0U;
            __Vtemp2098[0xbU] = 0U;
            __Vtemp2098[0xcU] = 0U;
            __Vtemp2098[0xdU] = 0U;
            __Vtemp2098[0xeU] = 0U;
            __Vtemp2098[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2099, __Vtemp2098, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp2099[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_245 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2100[0U] = 1U;
            __Vtemp2100[1U] = 0U;
            __Vtemp2100[2U] = 0U;
            __Vtemp2100[3U] = 0U;
            __Vtemp2100[4U] = 0U;
            __Vtemp2100[5U] = 0U;
            __Vtemp2100[6U] = 0U;
            __Vtemp2100[7U] = 0U;
            __Vtemp2100[8U] = 0U;
            __Vtemp2100[9U] = 0U;
            __Vtemp2100[0xaU] = 0U;
            __Vtemp2100[0xbU] = 0U;
            __Vtemp2100[0xcU] = 0U;
            __Vtemp2100[0xdU] = 0U;
            __Vtemp2100[0xeU] = 0U;
            __Vtemp2100[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2101, __Vtemp2100, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp2101[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_246 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2102[0U] = 1U;
            __Vtemp2102[1U] = 0U;
            __Vtemp2102[2U] = 0U;
            __Vtemp2102[3U] = 0U;
            __Vtemp2102[4U] = 0U;
            __Vtemp2102[5U] = 0U;
            __Vtemp2102[6U] = 0U;
            __Vtemp2102[7U] = 0U;
            __Vtemp2102[8U] = 0U;
            __Vtemp2102[9U] = 0U;
            __Vtemp2102[0xaU] = 0U;
            __Vtemp2102[0xbU] = 0U;
            __Vtemp2102[0xcU] = 0U;
            __Vtemp2102[0xdU] = 0U;
            __Vtemp2102[0xeU] = 0U;
            __Vtemp2102[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2103, __Vtemp2102, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp2103[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_247 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2104[0U] = 1U;
            __Vtemp2104[1U] = 0U;
            __Vtemp2104[2U] = 0U;
            __Vtemp2104[3U] = 0U;
            __Vtemp2104[4U] = 0U;
            __Vtemp2104[5U] = 0U;
            __Vtemp2104[6U] = 0U;
            __Vtemp2104[7U] = 0U;
            __Vtemp2104[8U] = 0U;
            __Vtemp2104[9U] = 0U;
            __Vtemp2104[0xaU] = 0U;
            __Vtemp2104[0xbU] = 0U;
            __Vtemp2104[0xcU] = 0U;
            __Vtemp2104[0xdU] = 0U;
            __Vtemp2104[0xeU] = 0U;
            __Vtemp2104[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2105, __Vtemp2104, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp2105[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_248 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2106[0U] = 1U;
            __Vtemp2106[1U] = 0U;
            __Vtemp2106[2U] = 0U;
            __Vtemp2106[3U] = 0U;
            __Vtemp2106[4U] = 0U;
            __Vtemp2106[5U] = 0U;
            __Vtemp2106[6U] = 0U;
            __Vtemp2106[7U] = 0U;
            __Vtemp2106[8U] = 0U;
            __Vtemp2106[9U] = 0U;
            __Vtemp2106[0xaU] = 0U;
            __Vtemp2106[0xbU] = 0U;
            __Vtemp2106[0xcU] = 0U;
            __Vtemp2106[0xdU] = 0U;
            __Vtemp2106[0xeU] = 0U;
            __Vtemp2106[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2107, __Vtemp2106, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp2107[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_249 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2108[0U] = 1U;
            __Vtemp2108[1U] = 0U;
            __Vtemp2108[2U] = 0U;
            __Vtemp2108[3U] = 0U;
            __Vtemp2108[4U] = 0U;
            __Vtemp2108[5U] = 0U;
            __Vtemp2108[6U] = 0U;
            __Vtemp2108[7U] = 0U;
            __Vtemp2108[8U] = 0U;
            __Vtemp2108[9U] = 0U;
            __Vtemp2108[0xaU] = 0U;
            __Vtemp2108[0xbU] = 0U;
            __Vtemp2108[0xcU] = 0U;
            __Vtemp2108[0xdU] = 0U;
            __Vtemp2108[0xeU] = 0U;
            __Vtemp2108[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2109, __Vtemp2108, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp2109[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_250 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2110[0U] = 1U;
            __Vtemp2110[1U] = 0U;
            __Vtemp2110[2U] = 0U;
            __Vtemp2110[3U] = 0U;
            __Vtemp2110[4U] = 0U;
            __Vtemp2110[5U] = 0U;
            __Vtemp2110[6U] = 0U;
            __Vtemp2110[7U] = 0U;
            __Vtemp2110[8U] = 0U;
            __Vtemp2110[9U] = 0U;
            __Vtemp2110[0xaU] = 0U;
            __Vtemp2110[0xbU] = 0U;
            __Vtemp2110[0xcU] = 0U;
            __Vtemp2110[0xdU] = 0U;
            __Vtemp2110[0xeU] = 0U;
            __Vtemp2110[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2111, __Vtemp2110, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp2111[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_251 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2112[0U] = 1U;
            __Vtemp2112[1U] = 0U;
            __Vtemp2112[2U] = 0U;
            __Vtemp2112[3U] = 0U;
            __Vtemp2112[4U] = 0U;
            __Vtemp2112[5U] = 0U;
            __Vtemp2112[6U] = 0U;
            __Vtemp2112[7U] = 0U;
            __Vtemp2112[8U] = 0U;
            __Vtemp2112[9U] = 0U;
            __Vtemp2112[0xaU] = 0U;
            __Vtemp2112[0xbU] = 0U;
            __Vtemp2112[0xcU] = 0U;
            __Vtemp2112[0xdU] = 0U;
            __Vtemp2112[0xeU] = 0U;
            __Vtemp2112[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2113, __Vtemp2112, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp2113[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_252 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2114[0U] = 1U;
            __Vtemp2114[1U] = 0U;
            __Vtemp2114[2U] = 0U;
            __Vtemp2114[3U] = 0U;
            __Vtemp2114[4U] = 0U;
            __Vtemp2114[5U] = 0U;
            __Vtemp2114[6U] = 0U;
            __Vtemp2114[7U] = 0U;
            __Vtemp2114[8U] = 0U;
            __Vtemp2114[9U] = 0U;
            __Vtemp2114[0xaU] = 0U;
            __Vtemp2114[0xbU] = 0U;
            __Vtemp2114[0xcU] = 0U;
            __Vtemp2114[0xdU] = 0U;
            __Vtemp2114[0xeU] = 0U;
            __Vtemp2114[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2115, __Vtemp2114, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp2115[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_253 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2116[0U] = 1U;
            __Vtemp2116[1U] = 0U;
            __Vtemp2116[2U] = 0U;
            __Vtemp2116[3U] = 0U;
            __Vtemp2116[4U] = 0U;
            __Vtemp2116[5U] = 0U;
            __Vtemp2116[6U] = 0U;
            __Vtemp2116[7U] = 0U;
            __Vtemp2116[8U] = 0U;
            __Vtemp2116[9U] = 0U;
            __Vtemp2116[0xaU] = 0U;
            __Vtemp2116[0xbU] = 0U;
            __Vtemp2116[0xcU] = 0U;
            __Vtemp2116[0xdU] = 0U;
            __Vtemp2116[0xeU] = 0U;
            __Vtemp2116[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2117, __Vtemp2116, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp2117[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_254 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2118[0U] = 1U;
            __Vtemp2118[1U] = 0U;
            __Vtemp2118[2U] = 0U;
            __Vtemp2118[3U] = 0U;
            __Vtemp2118[4U] = 0U;
            __Vtemp2118[5U] = 0U;
            __Vtemp2118[6U] = 0U;
            __Vtemp2118[7U] = 0U;
            __Vtemp2118[8U] = 0U;
            __Vtemp2118[9U] = 0U;
            __Vtemp2118[0xaU] = 0U;
            __Vtemp2118[0xbU] = 0U;
            __Vtemp2118[0xcU] = 0U;
            __Vtemp2118[0xdU] = 0U;
            __Vtemp2118[0xeU] = 0U;
            __Vtemp2118[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2119, __Vtemp2118, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp2119[7U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_255 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2120[0U] = 1U;
            __Vtemp2120[1U] = 0U;
            __Vtemp2120[2U] = 0U;
            __Vtemp2120[3U] = 0U;
            __Vtemp2120[4U] = 0U;
            __Vtemp2120[5U] = 0U;
            __Vtemp2120[6U] = 0U;
            __Vtemp2120[7U] = 0U;
            __Vtemp2120[8U] = 0U;
            __Vtemp2120[9U] = 0U;
            __Vtemp2120[0xaU] = 0U;
            __Vtemp2120[0xbU] = 0U;
            __Vtemp2120[0xcU] = 0U;
            __Vtemp2120[0xdU] = 0U;
            __Vtemp2120[0xeU] = 0U;
            __Vtemp2120[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2121, __Vtemp2120, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp2121[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_256 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2122[0U] = 1U;
            __Vtemp2122[1U] = 0U;
            __Vtemp2122[2U] = 0U;
            __Vtemp2122[3U] = 0U;
            __Vtemp2122[4U] = 0U;
            __Vtemp2122[5U] = 0U;
            __Vtemp2122[6U] = 0U;
            __Vtemp2122[7U] = 0U;
            __Vtemp2122[8U] = 0U;
            __Vtemp2122[9U] = 0U;
            __Vtemp2122[0xaU] = 0U;
            __Vtemp2122[0xbU] = 0U;
            __Vtemp2122[0xcU] = 0U;
            __Vtemp2122[0xdU] = 0U;
            __Vtemp2122[0xeU] = 0U;
            __Vtemp2122[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2123, __Vtemp2122, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp2123[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_257 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2124[0U] = 1U;
            __Vtemp2124[1U] = 0U;
            __Vtemp2124[2U] = 0U;
            __Vtemp2124[3U] = 0U;
            __Vtemp2124[4U] = 0U;
            __Vtemp2124[5U] = 0U;
            __Vtemp2124[6U] = 0U;
            __Vtemp2124[7U] = 0U;
            __Vtemp2124[8U] = 0U;
            __Vtemp2124[9U] = 0U;
            __Vtemp2124[0xaU] = 0U;
            __Vtemp2124[0xbU] = 0U;
            __Vtemp2124[0xcU] = 0U;
            __Vtemp2124[0xdU] = 0U;
            __Vtemp2124[0xeU] = 0U;
            __Vtemp2124[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2125, __Vtemp2124, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp2125[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_258 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2126[0U] = 1U;
            __Vtemp2126[1U] = 0U;
            __Vtemp2126[2U] = 0U;
            __Vtemp2126[3U] = 0U;
            __Vtemp2126[4U] = 0U;
            __Vtemp2126[5U] = 0U;
            __Vtemp2126[6U] = 0U;
            __Vtemp2126[7U] = 0U;
            __Vtemp2126[8U] = 0U;
            __Vtemp2126[9U] = 0U;
            __Vtemp2126[0xaU] = 0U;
            __Vtemp2126[0xbU] = 0U;
            __Vtemp2126[0xcU] = 0U;
            __Vtemp2126[0xdU] = 0U;
            __Vtemp2126[0xeU] = 0U;
            __Vtemp2126[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2127, __Vtemp2126, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp2127[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_259 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2128[0U] = 1U;
            __Vtemp2128[1U] = 0U;
            __Vtemp2128[2U] = 0U;
            __Vtemp2128[3U] = 0U;
            __Vtemp2128[4U] = 0U;
            __Vtemp2128[5U] = 0U;
            __Vtemp2128[6U] = 0U;
            __Vtemp2128[7U] = 0U;
            __Vtemp2128[8U] = 0U;
            __Vtemp2128[9U] = 0U;
            __Vtemp2128[0xaU] = 0U;
            __Vtemp2128[0xbU] = 0U;
            __Vtemp2128[0xcU] = 0U;
            __Vtemp2128[0xdU] = 0U;
            __Vtemp2128[0xeU] = 0U;
            __Vtemp2128[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2129, __Vtemp2128, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp2129[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_260 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2130[0U] = 1U;
            __Vtemp2130[1U] = 0U;
            __Vtemp2130[2U] = 0U;
            __Vtemp2130[3U] = 0U;
            __Vtemp2130[4U] = 0U;
            __Vtemp2130[5U] = 0U;
            __Vtemp2130[6U] = 0U;
            __Vtemp2130[7U] = 0U;
            __Vtemp2130[8U] = 0U;
            __Vtemp2130[9U] = 0U;
            __Vtemp2130[0xaU] = 0U;
            __Vtemp2130[0xbU] = 0U;
            __Vtemp2130[0xcU] = 0U;
            __Vtemp2130[0xdU] = 0U;
            __Vtemp2130[0xeU] = 0U;
            __Vtemp2130[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2131, __Vtemp2130, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp2131[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_261 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2132[0U] = 1U;
            __Vtemp2132[1U] = 0U;
            __Vtemp2132[2U] = 0U;
            __Vtemp2132[3U] = 0U;
            __Vtemp2132[4U] = 0U;
            __Vtemp2132[5U] = 0U;
            __Vtemp2132[6U] = 0U;
            __Vtemp2132[7U] = 0U;
            __Vtemp2132[8U] = 0U;
            __Vtemp2132[9U] = 0U;
            __Vtemp2132[0xaU] = 0U;
            __Vtemp2132[0xbU] = 0U;
            __Vtemp2132[0xcU] = 0U;
            __Vtemp2132[0xdU] = 0U;
            __Vtemp2132[0xeU] = 0U;
            __Vtemp2132[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2133, __Vtemp2132, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp2133[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_262 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2134[0U] = 1U;
            __Vtemp2134[1U] = 0U;
            __Vtemp2134[2U] = 0U;
            __Vtemp2134[3U] = 0U;
            __Vtemp2134[4U] = 0U;
            __Vtemp2134[5U] = 0U;
            __Vtemp2134[6U] = 0U;
            __Vtemp2134[7U] = 0U;
            __Vtemp2134[8U] = 0U;
            __Vtemp2134[9U] = 0U;
            __Vtemp2134[0xaU] = 0U;
            __Vtemp2134[0xbU] = 0U;
            __Vtemp2134[0xcU] = 0U;
            __Vtemp2134[0xdU] = 0U;
            __Vtemp2134[0xeU] = 0U;
            __Vtemp2134[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2135, __Vtemp2134, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp2135[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_263 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2136[0U] = 1U;
            __Vtemp2136[1U] = 0U;
            __Vtemp2136[2U] = 0U;
            __Vtemp2136[3U] = 0U;
            __Vtemp2136[4U] = 0U;
            __Vtemp2136[5U] = 0U;
            __Vtemp2136[6U] = 0U;
            __Vtemp2136[7U] = 0U;
            __Vtemp2136[8U] = 0U;
            __Vtemp2136[9U] = 0U;
            __Vtemp2136[0xaU] = 0U;
            __Vtemp2136[0xbU] = 0U;
            __Vtemp2136[0xcU] = 0U;
            __Vtemp2136[0xdU] = 0U;
            __Vtemp2136[0xeU] = 0U;
            __Vtemp2136[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2137, __Vtemp2136, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp2137[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_264 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2138[0U] = 1U;
            __Vtemp2138[1U] = 0U;
            __Vtemp2138[2U] = 0U;
            __Vtemp2138[3U] = 0U;
            __Vtemp2138[4U] = 0U;
            __Vtemp2138[5U] = 0U;
            __Vtemp2138[6U] = 0U;
            __Vtemp2138[7U] = 0U;
            __Vtemp2138[8U] = 0U;
            __Vtemp2138[9U] = 0U;
            __Vtemp2138[0xaU] = 0U;
            __Vtemp2138[0xbU] = 0U;
            __Vtemp2138[0xcU] = 0U;
            __Vtemp2138[0xdU] = 0U;
            __Vtemp2138[0xeU] = 0U;
            __Vtemp2138[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2139, __Vtemp2138, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp2139[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_265 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2140[0U] = 1U;
            __Vtemp2140[1U] = 0U;
            __Vtemp2140[2U] = 0U;
            __Vtemp2140[3U] = 0U;
            __Vtemp2140[4U] = 0U;
            __Vtemp2140[5U] = 0U;
            __Vtemp2140[6U] = 0U;
            __Vtemp2140[7U] = 0U;
            __Vtemp2140[8U] = 0U;
            __Vtemp2140[9U] = 0U;
            __Vtemp2140[0xaU] = 0U;
            __Vtemp2140[0xbU] = 0U;
            __Vtemp2140[0xcU] = 0U;
            __Vtemp2140[0xdU] = 0U;
            __Vtemp2140[0xeU] = 0U;
            __Vtemp2140[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2141, __Vtemp2140, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp2141[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_266 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__85(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__85\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp2142[16];
    WData/*511:0*/ __Vtemp2143[16];
    WData/*511:0*/ __Vtemp2144[16];
    WData/*511:0*/ __Vtemp2145[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2142[0U] = 1U;
            __Vtemp2142[1U] = 0U;
            __Vtemp2142[2U] = 0U;
            __Vtemp2142[3U] = 0U;
            __Vtemp2142[4U] = 0U;
            __Vtemp2142[5U] = 0U;
            __Vtemp2142[6U] = 0U;
            __Vtemp2142[7U] = 0U;
            __Vtemp2142[8U] = 0U;
            __Vtemp2142[9U] = 0U;
            __Vtemp2142[0xaU] = 0U;
            __Vtemp2142[0xbU] = 0U;
            __Vtemp2142[0xcU] = 0U;
            __Vtemp2142[0xdU] = 0U;
            __Vtemp2142[0xeU] = 0U;
            __Vtemp2142[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2143, __Vtemp2142, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp2143[8U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_267 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2144[0U] = 1U;
            __Vtemp2144[1U] = 0U;
            __Vtemp2144[2U] = 0U;
            __Vtemp2144[3U] = 0U;
            __Vtemp2144[4U] = 0U;
            __Vtemp2144[5U] = 0U;
            __Vtemp2144[6U] = 0U;
            __Vtemp2144[7U] = 0U;
            __Vtemp2144[8U] = 0U;
            __Vtemp2144[9U] = 0U;
            __Vtemp2144[0xaU] = 0U;
            __Vtemp2144[0xbU] = 0U;
            __Vtemp2144[0xcU] = 0U;
            __Vtemp2144[0xdU] = 0U;
            __Vtemp2144[0xeU] = 0U;
            __Vtemp2144[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2145, __Vtemp2144, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp2145[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_0 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT___zz_1) {
        vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoded_fifo__DOT__logic_ram__v0 
            = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_fragment_regNext) 
                << 1U) | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_last_regNext));
        vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoded_fifo__DOT__logic_ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoded_fifo__DOT__logic_ram__v0 
            = vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_value;
    }
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom
                [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
        } else {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))) {
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail) {
                        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor 
                            = vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_62;
                    }
                }
            } else {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        } else {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__states_shift_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__86(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__86\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    }
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__92(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__92\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoded_fifo__DOT__logic_ram__v0) {
        vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoded_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoded_fifo__DOT__logic_ram__v0;
    }
    vlTOPp->decoded_data_payload_last = (1U & (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT___zz_logic_ram_port0));
    vlTOPp->decoded_data_payload_fragment = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U));
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffffe) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | (IData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17))))));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffffd) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17))))) 
                      << 1U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffffb) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17))))) 
                      << 2U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffff7) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17))))) 
                      << 3U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffffef) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17))))) 
                      << 4U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffffdf) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17))))) 
                      << 5U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffffbf) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17))))) 
                      << 6U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffff7f) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17))))) 
                      << 7U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffeff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17))))) 
                      << 8U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffdff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17))))) 
                      << 9U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffbff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17))))) 
                      << 0xaU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffff7ff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17))))) 
                      << 0xbU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffefff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17))))) 
                      << 0xcU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffdfff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17))))) 
                      << 0xdU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffbfff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17))))) 
                      << 0xeU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffff7fff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17))))) 
                      << 0xfU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffeffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17))))) 
                      << 0x10U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffdffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17))))) 
                      << 0x11U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffbffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17))))) 
                      << 0x12U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffff7ffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17))))) 
                      << 0x13U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffefffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17))))) 
                      << 0x14U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffdfffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17))))) 
                      << 0x15U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffbfffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17))))) 
                      << 0x16U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffff7fffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17))))) 
                      << 0x17U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffeffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17))))) 
                      << 0x18U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffdffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17))))) 
                      << 0x19U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffbffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1aU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffff7ffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1bU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffefffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1cU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffdfffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1dU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffbfffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1eU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffff7fffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1fU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffeffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17))))) 
                      << 0x20U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffdffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17))))) 
                      << 0x21U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffbffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17))))) 
                      << 0x22U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffff7ffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17))))) 
                      << 0x23U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffefffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17))))) 
                      << 0x24U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffdfffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17))))) 
                      << 0x25U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffbfffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17))))) 
                      << 0x26U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffff7fffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17))))) 
                      << 0x27U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffeffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17))))) 
                      << 0x28U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffdffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17))))) 
                      << 0x29U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffbffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2aU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffff7ffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2bU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffefffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2cU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffdfffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2dU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffbfffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2eU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffff7fffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2fU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffeffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17))))) 
                      << 0x30U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffdffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17))))) 
                      << 0x31U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffbffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17))))) 
                      << 0x32U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfff7ffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17))))) 
                      << 0x33U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffefffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17))))) 
                      << 0x34U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffdfffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17))))) 
                      << 0x35U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffbfffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17))))) 
                      << 0x36U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xff7fffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17))))) 
                      << 0x37U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfeffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17))))) 
                      << 0x38U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfdffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17))))) 
                      << 0x39U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfbffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3aU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xf7ffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3bU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xefffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3cU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xdfffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3dU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xbfffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3eU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0x7fffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3fU));
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__93(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__93\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->tail_bits_valid)))) {
        if (vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_fire) {
            vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data 
                = ((4U & (((((0xfffffffcU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                             << 1U)) 
                             ^ (0xfffffffcU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0))) 
                            ^ (0x3ffffffcU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                              >> 2U))) 
                           ^ (0x1ffffffcU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                             >> 3U))) 
                          ^ (0x7fffffcU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                           >> 5U)))) 
                   | ((2U & (((((0xfffffffeU & (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0)) 
                                ^ (0x1ffffffeU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                  >> 3U))) 
                               ^ (0xffffffeU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                                >> 4U))) 
                              ^ (0x7fffffeU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                               >> 5U))) 
                             ^ (0x3fffffeU & ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                              >> 6U)))) 
                      | (1U & ((((((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                   >> 1U) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                             >> 3U)) 
                                 ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                    >> 5U)) ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                               >> 6U)) 
                               ^ ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0) 
                                  >> 7U)))));
        }
    }
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
        } else {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_fragment_regNext 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
            ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
               & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_pop_payload_fragment))
            : ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
               & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_pop_payload_fragment)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_62 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_62 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_60)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_61));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_60 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_56)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_57));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_61 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_58)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_59));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_56 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_48)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_49));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_57 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_50)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_51));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_58 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_52)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_53));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_59 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_54)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_55));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_48 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_32)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_33));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_49 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_34)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_35));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_50 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_36)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_37));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_51 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_38)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_39));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_52 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_40)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_41));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_53 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_42)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_43));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_54 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_44)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_45));
}
