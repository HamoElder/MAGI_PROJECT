// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__74(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__74\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1925[16];
    WData/*511:0*/ __Vtemp1926[16];
    WData/*511:0*/ __Vtemp1927[16];
    WData/*511:0*/ __Vtemp1928[16];
    WData/*511:0*/ __Vtemp1929[16];
    WData/*511:0*/ __Vtemp1930[16];
    WData/*511:0*/ __Vtemp1931[16];
    WData/*511:0*/ __Vtemp1932[16];
    WData/*511:0*/ __Vtemp1933[16];
    WData/*511:0*/ __Vtemp1934[16];
    WData/*511:0*/ __Vtemp1935[16];
    WData/*511:0*/ __Vtemp1936[16];
    WData/*511:0*/ __Vtemp1937[16];
    WData/*511:0*/ __Vtemp1938[16];
    WData/*511:0*/ __Vtemp1939[16];
    WData/*511:0*/ __Vtemp1940[16];
    WData/*511:0*/ __Vtemp1941[16];
    WData/*511:0*/ __Vtemp1942[16];
    WData/*511:0*/ __Vtemp1943[16];
    WData/*511:0*/ __Vtemp1944[16];
    WData/*511:0*/ __Vtemp1945[16];
    WData/*511:0*/ __Vtemp1946[16];
    WData/*511:0*/ __Vtemp1947[16];
    WData/*511:0*/ __Vtemp1948[16];
    WData/*511:0*/ __Vtemp1949[16];
    WData/*511:0*/ __Vtemp1950[16];
    WData/*511:0*/ __Vtemp1951[16];
    WData/*511:0*/ __Vtemp1952[16];
    WData/*511:0*/ __Vtemp1953[16];
    WData/*511:0*/ __Vtemp1954[16];
    WData/*511:0*/ __Vtemp1955[16];
    WData/*511:0*/ __Vtemp1956[16];
    WData/*511:0*/ __Vtemp1957[16];
    WData/*511:0*/ __Vtemp1958[16];
    WData/*511:0*/ __Vtemp1959[16];
    WData/*511:0*/ __Vtemp1960[16];
    WData/*511:0*/ __Vtemp1961[16];
    WData/*511:0*/ __Vtemp1962[16];
    WData/*511:0*/ __Vtemp1963[16];
    WData/*511:0*/ __Vtemp1964[16];
    WData/*511:0*/ __Vtemp1965[16];
    WData/*511:0*/ __Vtemp1966[16];
    WData/*511:0*/ __Vtemp1967[16];
    WData/*511:0*/ __Vtemp1968[16];
    WData/*511:0*/ __Vtemp1969[16];
    WData/*511:0*/ __Vtemp1970[16];
    WData/*511:0*/ __Vtemp1971[16];
    WData/*511:0*/ __Vtemp1972[16];
    WData/*511:0*/ __Vtemp1973[16];
    WData/*511:0*/ __Vtemp1974[16];
    WData/*511:0*/ __Vtemp1975[16];
    WData/*511:0*/ __Vtemp1976[16];
    WData/*511:0*/ __Vtemp1977[16];
    WData/*511:0*/ __Vtemp1978[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1925[0U] = 1U;
            __Vtemp1925[1U] = 0U;
            __Vtemp1925[2U] = 0U;
            __Vtemp1925[3U] = 0U;
            __Vtemp1925[4U] = 0U;
            __Vtemp1925[5U] = 0U;
            __Vtemp1925[6U] = 0U;
            __Vtemp1925[7U] = 0U;
            __Vtemp1925[8U] = 0U;
            __Vtemp1925[9U] = 0U;
            __Vtemp1925[0xaU] = 0U;
            __Vtemp1925[0xbU] = 0U;
            __Vtemp1925[0xcU] = 0U;
            __Vtemp1925[0xdU] = 0U;
            __Vtemp1925[0xeU] = 0U;
            __Vtemp1925[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1926, __Vtemp1925, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1926[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_50 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1927[0U] = 1U;
            __Vtemp1927[1U] = 0U;
            __Vtemp1927[2U] = 0U;
            __Vtemp1927[3U] = 0U;
            __Vtemp1927[4U] = 0U;
            __Vtemp1927[5U] = 0U;
            __Vtemp1927[6U] = 0U;
            __Vtemp1927[7U] = 0U;
            __Vtemp1927[8U] = 0U;
            __Vtemp1927[9U] = 0U;
            __Vtemp1927[0xaU] = 0U;
            __Vtemp1927[0xbU] = 0U;
            __Vtemp1927[0xcU] = 0U;
            __Vtemp1927[0xdU] = 0U;
            __Vtemp1927[0xeU] = 0U;
            __Vtemp1927[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1928, __Vtemp1927, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1928[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_51 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1929[0U] = 1U;
            __Vtemp1929[1U] = 0U;
            __Vtemp1929[2U] = 0U;
            __Vtemp1929[3U] = 0U;
            __Vtemp1929[4U] = 0U;
            __Vtemp1929[5U] = 0U;
            __Vtemp1929[6U] = 0U;
            __Vtemp1929[7U] = 0U;
            __Vtemp1929[8U] = 0U;
            __Vtemp1929[9U] = 0U;
            __Vtemp1929[0xaU] = 0U;
            __Vtemp1929[0xbU] = 0U;
            __Vtemp1929[0xcU] = 0U;
            __Vtemp1929[0xdU] = 0U;
            __Vtemp1929[0xeU] = 0U;
            __Vtemp1929[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1930, __Vtemp1929, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1930[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_52 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1931[0U] = 1U;
            __Vtemp1931[1U] = 0U;
            __Vtemp1931[2U] = 0U;
            __Vtemp1931[3U] = 0U;
            __Vtemp1931[4U] = 0U;
            __Vtemp1931[5U] = 0U;
            __Vtemp1931[6U] = 0U;
            __Vtemp1931[7U] = 0U;
            __Vtemp1931[8U] = 0U;
            __Vtemp1931[9U] = 0U;
            __Vtemp1931[0xaU] = 0U;
            __Vtemp1931[0xbU] = 0U;
            __Vtemp1931[0xcU] = 0U;
            __Vtemp1931[0xdU] = 0U;
            __Vtemp1931[0xeU] = 0U;
            __Vtemp1931[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1932, __Vtemp1931, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1932[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_53 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1933[0U] = 1U;
            __Vtemp1933[1U] = 0U;
            __Vtemp1933[2U] = 0U;
            __Vtemp1933[3U] = 0U;
            __Vtemp1933[4U] = 0U;
            __Vtemp1933[5U] = 0U;
            __Vtemp1933[6U] = 0U;
            __Vtemp1933[7U] = 0U;
            __Vtemp1933[8U] = 0U;
            __Vtemp1933[9U] = 0U;
            __Vtemp1933[0xaU] = 0U;
            __Vtemp1933[0xbU] = 0U;
            __Vtemp1933[0xcU] = 0U;
            __Vtemp1933[0xdU] = 0U;
            __Vtemp1933[0xeU] = 0U;
            __Vtemp1933[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1934, __Vtemp1933, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1934[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_54 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1935[0U] = 1U;
            __Vtemp1935[1U] = 0U;
            __Vtemp1935[2U] = 0U;
            __Vtemp1935[3U] = 0U;
            __Vtemp1935[4U] = 0U;
            __Vtemp1935[5U] = 0U;
            __Vtemp1935[6U] = 0U;
            __Vtemp1935[7U] = 0U;
            __Vtemp1935[8U] = 0U;
            __Vtemp1935[9U] = 0U;
            __Vtemp1935[0xaU] = 0U;
            __Vtemp1935[0xbU] = 0U;
            __Vtemp1935[0xcU] = 0U;
            __Vtemp1935[0xdU] = 0U;
            __Vtemp1935[0xeU] = 0U;
            __Vtemp1935[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1936, __Vtemp1935, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1936[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_55 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1937[0U] = 1U;
            __Vtemp1937[1U] = 0U;
            __Vtemp1937[2U] = 0U;
            __Vtemp1937[3U] = 0U;
            __Vtemp1937[4U] = 0U;
            __Vtemp1937[5U] = 0U;
            __Vtemp1937[6U] = 0U;
            __Vtemp1937[7U] = 0U;
            __Vtemp1937[8U] = 0U;
            __Vtemp1937[9U] = 0U;
            __Vtemp1937[0xaU] = 0U;
            __Vtemp1937[0xbU] = 0U;
            __Vtemp1937[0xcU] = 0U;
            __Vtemp1937[0xdU] = 0U;
            __Vtemp1937[0xeU] = 0U;
            __Vtemp1937[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1938, __Vtemp1937, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1938[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_56 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1939[0U] = 1U;
            __Vtemp1939[1U] = 0U;
            __Vtemp1939[2U] = 0U;
            __Vtemp1939[3U] = 0U;
            __Vtemp1939[4U] = 0U;
            __Vtemp1939[5U] = 0U;
            __Vtemp1939[6U] = 0U;
            __Vtemp1939[7U] = 0U;
            __Vtemp1939[8U] = 0U;
            __Vtemp1939[9U] = 0U;
            __Vtemp1939[0xaU] = 0U;
            __Vtemp1939[0xbU] = 0U;
            __Vtemp1939[0xcU] = 0U;
            __Vtemp1939[0xdU] = 0U;
            __Vtemp1939[0xeU] = 0U;
            __Vtemp1939[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1940, __Vtemp1939, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1940[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_57 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1941[0U] = 1U;
            __Vtemp1941[1U] = 0U;
            __Vtemp1941[2U] = 0U;
            __Vtemp1941[3U] = 0U;
            __Vtemp1941[4U] = 0U;
            __Vtemp1941[5U] = 0U;
            __Vtemp1941[6U] = 0U;
            __Vtemp1941[7U] = 0U;
            __Vtemp1941[8U] = 0U;
            __Vtemp1941[9U] = 0U;
            __Vtemp1941[0xaU] = 0U;
            __Vtemp1941[0xbU] = 0U;
            __Vtemp1941[0xcU] = 0U;
            __Vtemp1941[0xdU] = 0U;
            __Vtemp1941[0xeU] = 0U;
            __Vtemp1941[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1942, __Vtemp1941, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1942[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_58 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1943[0U] = 1U;
            __Vtemp1943[1U] = 0U;
            __Vtemp1943[2U] = 0U;
            __Vtemp1943[3U] = 0U;
            __Vtemp1943[4U] = 0U;
            __Vtemp1943[5U] = 0U;
            __Vtemp1943[6U] = 0U;
            __Vtemp1943[7U] = 0U;
            __Vtemp1943[8U] = 0U;
            __Vtemp1943[9U] = 0U;
            __Vtemp1943[0xaU] = 0U;
            __Vtemp1943[0xbU] = 0U;
            __Vtemp1943[0xcU] = 0U;
            __Vtemp1943[0xdU] = 0U;
            __Vtemp1943[0xeU] = 0U;
            __Vtemp1943[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1944, __Vtemp1943, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1944[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_59 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1945[0U] = 1U;
            __Vtemp1945[1U] = 0U;
            __Vtemp1945[2U] = 0U;
            __Vtemp1945[3U] = 0U;
            __Vtemp1945[4U] = 0U;
            __Vtemp1945[5U] = 0U;
            __Vtemp1945[6U] = 0U;
            __Vtemp1945[7U] = 0U;
            __Vtemp1945[8U] = 0U;
            __Vtemp1945[9U] = 0U;
            __Vtemp1945[0xaU] = 0U;
            __Vtemp1945[0xbU] = 0U;
            __Vtemp1945[0xcU] = 0U;
            __Vtemp1945[0xdU] = 0U;
            __Vtemp1945[0xeU] = 0U;
            __Vtemp1945[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1946, __Vtemp1945, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1946[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_60 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1947[0U] = 1U;
            __Vtemp1947[1U] = 0U;
            __Vtemp1947[2U] = 0U;
            __Vtemp1947[3U] = 0U;
            __Vtemp1947[4U] = 0U;
            __Vtemp1947[5U] = 0U;
            __Vtemp1947[6U] = 0U;
            __Vtemp1947[7U] = 0U;
            __Vtemp1947[8U] = 0U;
            __Vtemp1947[9U] = 0U;
            __Vtemp1947[0xaU] = 0U;
            __Vtemp1947[0xbU] = 0U;
            __Vtemp1947[0xcU] = 0U;
            __Vtemp1947[0xdU] = 0U;
            __Vtemp1947[0xeU] = 0U;
            __Vtemp1947[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1948, __Vtemp1947, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1948[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_61 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1949[0U] = 1U;
            __Vtemp1949[1U] = 0U;
            __Vtemp1949[2U] = 0U;
            __Vtemp1949[3U] = 0U;
            __Vtemp1949[4U] = 0U;
            __Vtemp1949[5U] = 0U;
            __Vtemp1949[6U] = 0U;
            __Vtemp1949[7U] = 0U;
            __Vtemp1949[8U] = 0U;
            __Vtemp1949[9U] = 0U;
            __Vtemp1949[0xaU] = 0U;
            __Vtemp1949[0xbU] = 0U;
            __Vtemp1949[0xcU] = 0U;
            __Vtemp1949[0xdU] = 0U;
            __Vtemp1949[0xeU] = 0U;
            __Vtemp1949[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1950, __Vtemp1949, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1950[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_62 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1951[0U] = 1U;
            __Vtemp1951[1U] = 0U;
            __Vtemp1951[2U] = 0U;
            __Vtemp1951[3U] = 0U;
            __Vtemp1951[4U] = 0U;
            __Vtemp1951[5U] = 0U;
            __Vtemp1951[6U] = 0U;
            __Vtemp1951[7U] = 0U;
            __Vtemp1951[8U] = 0U;
            __Vtemp1951[9U] = 0U;
            __Vtemp1951[0xaU] = 0U;
            __Vtemp1951[0xbU] = 0U;
            __Vtemp1951[0xcU] = 0U;
            __Vtemp1951[0xdU] = 0U;
            __Vtemp1951[0xeU] = 0U;
            __Vtemp1951[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1952, __Vtemp1951, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1952[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_63 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1953[0U] = 1U;
            __Vtemp1953[1U] = 0U;
            __Vtemp1953[2U] = 0U;
            __Vtemp1953[3U] = 0U;
            __Vtemp1953[4U] = 0U;
            __Vtemp1953[5U] = 0U;
            __Vtemp1953[6U] = 0U;
            __Vtemp1953[7U] = 0U;
            __Vtemp1953[8U] = 0U;
            __Vtemp1953[9U] = 0U;
            __Vtemp1953[0xaU] = 0U;
            __Vtemp1953[0xbU] = 0U;
            __Vtemp1953[0xcU] = 0U;
            __Vtemp1953[0xdU] = 0U;
            __Vtemp1953[0xeU] = 0U;
            __Vtemp1953[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1954, __Vtemp1953, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1954[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_64 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1955[0U] = 1U;
            __Vtemp1955[1U] = 0U;
            __Vtemp1955[2U] = 0U;
            __Vtemp1955[3U] = 0U;
            __Vtemp1955[4U] = 0U;
            __Vtemp1955[5U] = 0U;
            __Vtemp1955[6U] = 0U;
            __Vtemp1955[7U] = 0U;
            __Vtemp1955[8U] = 0U;
            __Vtemp1955[9U] = 0U;
            __Vtemp1955[0xaU] = 0U;
            __Vtemp1955[0xbU] = 0U;
            __Vtemp1955[0xcU] = 0U;
            __Vtemp1955[0xdU] = 0U;
            __Vtemp1955[0xeU] = 0U;
            __Vtemp1955[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1956, __Vtemp1955, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1956[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_65 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1957[0U] = 1U;
            __Vtemp1957[1U] = 0U;
            __Vtemp1957[2U] = 0U;
            __Vtemp1957[3U] = 0U;
            __Vtemp1957[4U] = 0U;
            __Vtemp1957[5U] = 0U;
            __Vtemp1957[6U] = 0U;
            __Vtemp1957[7U] = 0U;
            __Vtemp1957[8U] = 0U;
            __Vtemp1957[9U] = 0U;
            __Vtemp1957[0xaU] = 0U;
            __Vtemp1957[0xbU] = 0U;
            __Vtemp1957[0xcU] = 0U;
            __Vtemp1957[0xdU] = 0U;
            __Vtemp1957[0xeU] = 0U;
            __Vtemp1957[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1958, __Vtemp1957, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1958[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_66 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1959[0U] = 1U;
            __Vtemp1959[1U] = 0U;
            __Vtemp1959[2U] = 0U;
            __Vtemp1959[3U] = 0U;
            __Vtemp1959[4U] = 0U;
            __Vtemp1959[5U] = 0U;
            __Vtemp1959[6U] = 0U;
            __Vtemp1959[7U] = 0U;
            __Vtemp1959[8U] = 0U;
            __Vtemp1959[9U] = 0U;
            __Vtemp1959[0xaU] = 0U;
            __Vtemp1959[0xbU] = 0U;
            __Vtemp1959[0xcU] = 0U;
            __Vtemp1959[0xdU] = 0U;
            __Vtemp1959[0xeU] = 0U;
            __Vtemp1959[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1960, __Vtemp1959, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1960[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_67 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1961[0U] = 1U;
            __Vtemp1961[1U] = 0U;
            __Vtemp1961[2U] = 0U;
            __Vtemp1961[3U] = 0U;
            __Vtemp1961[4U] = 0U;
            __Vtemp1961[5U] = 0U;
            __Vtemp1961[6U] = 0U;
            __Vtemp1961[7U] = 0U;
            __Vtemp1961[8U] = 0U;
            __Vtemp1961[9U] = 0U;
            __Vtemp1961[0xaU] = 0U;
            __Vtemp1961[0xbU] = 0U;
            __Vtemp1961[0xcU] = 0U;
            __Vtemp1961[0xdU] = 0U;
            __Vtemp1961[0xeU] = 0U;
            __Vtemp1961[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1962, __Vtemp1961, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1962[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_68 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1963[0U] = 1U;
            __Vtemp1963[1U] = 0U;
            __Vtemp1963[2U] = 0U;
            __Vtemp1963[3U] = 0U;
            __Vtemp1963[4U] = 0U;
            __Vtemp1963[5U] = 0U;
            __Vtemp1963[6U] = 0U;
            __Vtemp1963[7U] = 0U;
            __Vtemp1963[8U] = 0U;
            __Vtemp1963[9U] = 0U;
            __Vtemp1963[0xaU] = 0U;
            __Vtemp1963[0xbU] = 0U;
            __Vtemp1963[0xcU] = 0U;
            __Vtemp1963[0xdU] = 0U;
            __Vtemp1963[0xeU] = 0U;
            __Vtemp1963[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1964, __Vtemp1963, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1964[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_69 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1965[0U] = 1U;
            __Vtemp1965[1U] = 0U;
            __Vtemp1965[2U] = 0U;
            __Vtemp1965[3U] = 0U;
            __Vtemp1965[4U] = 0U;
            __Vtemp1965[5U] = 0U;
            __Vtemp1965[6U] = 0U;
            __Vtemp1965[7U] = 0U;
            __Vtemp1965[8U] = 0U;
            __Vtemp1965[9U] = 0U;
            __Vtemp1965[0xaU] = 0U;
            __Vtemp1965[0xbU] = 0U;
            __Vtemp1965[0xcU] = 0U;
            __Vtemp1965[0xdU] = 0U;
            __Vtemp1965[0xeU] = 0U;
            __Vtemp1965[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1966, __Vtemp1965, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1966[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_70 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1967[0U] = 1U;
            __Vtemp1967[1U] = 0U;
            __Vtemp1967[2U] = 0U;
            __Vtemp1967[3U] = 0U;
            __Vtemp1967[4U] = 0U;
            __Vtemp1967[5U] = 0U;
            __Vtemp1967[6U] = 0U;
            __Vtemp1967[7U] = 0U;
            __Vtemp1967[8U] = 0U;
            __Vtemp1967[9U] = 0U;
            __Vtemp1967[0xaU] = 0U;
            __Vtemp1967[0xbU] = 0U;
            __Vtemp1967[0xcU] = 0U;
            __Vtemp1967[0xdU] = 0U;
            __Vtemp1967[0xeU] = 0U;
            __Vtemp1967[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1968, __Vtemp1967, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1968[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_71 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1969[0U] = 1U;
            __Vtemp1969[1U] = 0U;
            __Vtemp1969[2U] = 0U;
            __Vtemp1969[3U] = 0U;
            __Vtemp1969[4U] = 0U;
            __Vtemp1969[5U] = 0U;
            __Vtemp1969[6U] = 0U;
            __Vtemp1969[7U] = 0U;
            __Vtemp1969[8U] = 0U;
            __Vtemp1969[9U] = 0U;
            __Vtemp1969[0xaU] = 0U;
            __Vtemp1969[0xbU] = 0U;
            __Vtemp1969[0xcU] = 0U;
            __Vtemp1969[0xdU] = 0U;
            __Vtemp1969[0xeU] = 0U;
            __Vtemp1969[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1970, __Vtemp1969, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1970[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_72 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1971[0U] = 1U;
            __Vtemp1971[1U] = 0U;
            __Vtemp1971[2U] = 0U;
            __Vtemp1971[3U] = 0U;
            __Vtemp1971[4U] = 0U;
            __Vtemp1971[5U] = 0U;
            __Vtemp1971[6U] = 0U;
            __Vtemp1971[7U] = 0U;
            __Vtemp1971[8U] = 0U;
            __Vtemp1971[9U] = 0U;
            __Vtemp1971[0xaU] = 0U;
            __Vtemp1971[0xbU] = 0U;
            __Vtemp1971[0xcU] = 0U;
            __Vtemp1971[0xdU] = 0U;
            __Vtemp1971[0xeU] = 0U;
            __Vtemp1971[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1972, __Vtemp1971, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1972[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_73 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1973[0U] = 1U;
            __Vtemp1973[1U] = 0U;
            __Vtemp1973[2U] = 0U;
            __Vtemp1973[3U] = 0U;
            __Vtemp1973[4U] = 0U;
            __Vtemp1973[5U] = 0U;
            __Vtemp1973[6U] = 0U;
            __Vtemp1973[7U] = 0U;
            __Vtemp1973[8U] = 0U;
            __Vtemp1973[9U] = 0U;
            __Vtemp1973[0xaU] = 0U;
            __Vtemp1973[0xbU] = 0U;
            __Vtemp1973[0xcU] = 0U;
            __Vtemp1973[0xdU] = 0U;
            __Vtemp1973[0xeU] = 0U;
            __Vtemp1973[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1974, __Vtemp1973, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1974[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_74 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1975[0U] = 1U;
            __Vtemp1975[1U] = 0U;
            __Vtemp1975[2U] = 0U;
            __Vtemp1975[3U] = 0U;
            __Vtemp1975[4U] = 0U;
            __Vtemp1975[5U] = 0U;
            __Vtemp1975[6U] = 0U;
            __Vtemp1975[7U] = 0U;
            __Vtemp1975[8U] = 0U;
            __Vtemp1975[9U] = 0U;
            __Vtemp1975[0xaU] = 0U;
            __Vtemp1975[0xbU] = 0U;
            __Vtemp1975[0xcU] = 0U;
            __Vtemp1975[0xdU] = 0U;
            __Vtemp1975[0xeU] = 0U;
            __Vtemp1975[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1976, __Vtemp1975, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1976[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_75 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1977[0U] = 1U;
            __Vtemp1977[1U] = 0U;
            __Vtemp1977[2U] = 0U;
            __Vtemp1977[3U] = 0U;
            __Vtemp1977[4U] = 0U;
            __Vtemp1977[5U] = 0U;
            __Vtemp1977[6U] = 0U;
            __Vtemp1977[7U] = 0U;
            __Vtemp1977[8U] = 0U;
            __Vtemp1977[9U] = 0U;
            __Vtemp1977[0xaU] = 0U;
            __Vtemp1977[0xbU] = 0U;
            __Vtemp1977[0xcU] = 0U;
            __Vtemp1977[0xdU] = 0U;
            __Vtemp1977[0xeU] = 0U;
            __Vtemp1977[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1978, __Vtemp1977, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1978[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_76 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__75(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__75\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1979[16];
    WData/*511:0*/ __Vtemp1980[16];
    WData/*511:0*/ __Vtemp1981[16];
    WData/*511:0*/ __Vtemp1982[16];
    WData/*511:0*/ __Vtemp1983[16];
    WData/*511:0*/ __Vtemp1984[16];
    WData/*511:0*/ __Vtemp1985[16];
    WData/*511:0*/ __Vtemp1986[16];
    WData/*511:0*/ __Vtemp1987[16];
    WData/*511:0*/ __Vtemp1988[16];
    WData/*511:0*/ __Vtemp1989[16];
    WData/*511:0*/ __Vtemp1990[16];
    WData/*511:0*/ __Vtemp1991[16];
    WData/*511:0*/ __Vtemp1992[16];
    WData/*511:0*/ __Vtemp1993[16];
    WData/*511:0*/ __Vtemp1994[16];
    WData/*511:0*/ __Vtemp1995[16];
    WData/*511:0*/ __Vtemp1996[16];
    WData/*511:0*/ __Vtemp1997[16];
    WData/*511:0*/ __Vtemp1998[16];
    WData/*511:0*/ __Vtemp1999[16];
    WData/*511:0*/ __Vtemp2000[16];
    WData/*511:0*/ __Vtemp2001[16];
    WData/*511:0*/ __Vtemp2002[16];
    WData/*511:0*/ __Vtemp2003[16];
    WData/*511:0*/ __Vtemp2004[16];
    WData/*511:0*/ __Vtemp2005[16];
    WData/*511:0*/ __Vtemp2006[16];
    WData/*511:0*/ __Vtemp2007[16];
    WData/*511:0*/ __Vtemp2008[16];
    WData/*511:0*/ __Vtemp2009[16];
    WData/*511:0*/ __Vtemp2010[16];
    WData/*511:0*/ __Vtemp2011[16];
    WData/*511:0*/ __Vtemp2012[16];
    WData/*511:0*/ __Vtemp2013[16];
    WData/*511:0*/ __Vtemp2014[16];
    WData/*511:0*/ __Vtemp2015[16];
    WData/*511:0*/ __Vtemp2016[16];
    WData/*511:0*/ __Vtemp2017[16];
    WData/*511:0*/ __Vtemp2018[16];
    WData/*511:0*/ __Vtemp2019[16];
    WData/*511:0*/ __Vtemp2020[16];
    WData/*511:0*/ __Vtemp2021[16];
    WData/*511:0*/ __Vtemp2022[16];
    WData/*511:0*/ __Vtemp2023[16];
    WData/*511:0*/ __Vtemp2024[16];
    WData/*511:0*/ __Vtemp2025[16];
    WData/*511:0*/ __Vtemp2026[16];
    WData/*511:0*/ __Vtemp2027[16];
    WData/*511:0*/ __Vtemp2028[16];
    WData/*511:0*/ __Vtemp2029[16];
    WData/*511:0*/ __Vtemp2030[16];
    WData/*511:0*/ __Vtemp2031[16];
    WData/*511:0*/ __Vtemp2032[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1979[0U] = 1U;
            __Vtemp1979[1U] = 0U;
            __Vtemp1979[2U] = 0U;
            __Vtemp1979[3U] = 0U;
            __Vtemp1979[4U] = 0U;
            __Vtemp1979[5U] = 0U;
            __Vtemp1979[6U] = 0U;
            __Vtemp1979[7U] = 0U;
            __Vtemp1979[8U] = 0U;
            __Vtemp1979[9U] = 0U;
            __Vtemp1979[0xaU] = 0U;
            __Vtemp1979[0xbU] = 0U;
            __Vtemp1979[0xcU] = 0U;
            __Vtemp1979[0xdU] = 0U;
            __Vtemp1979[0xeU] = 0U;
            __Vtemp1979[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1980, __Vtemp1979, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1980[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_77 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1981[0U] = 1U;
            __Vtemp1981[1U] = 0U;
            __Vtemp1981[2U] = 0U;
            __Vtemp1981[3U] = 0U;
            __Vtemp1981[4U] = 0U;
            __Vtemp1981[5U] = 0U;
            __Vtemp1981[6U] = 0U;
            __Vtemp1981[7U] = 0U;
            __Vtemp1981[8U] = 0U;
            __Vtemp1981[9U] = 0U;
            __Vtemp1981[0xaU] = 0U;
            __Vtemp1981[0xbU] = 0U;
            __Vtemp1981[0xcU] = 0U;
            __Vtemp1981[0xdU] = 0U;
            __Vtemp1981[0xeU] = 0U;
            __Vtemp1981[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1982, __Vtemp1981, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1982[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_78 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1983[0U] = 1U;
            __Vtemp1983[1U] = 0U;
            __Vtemp1983[2U] = 0U;
            __Vtemp1983[3U] = 0U;
            __Vtemp1983[4U] = 0U;
            __Vtemp1983[5U] = 0U;
            __Vtemp1983[6U] = 0U;
            __Vtemp1983[7U] = 0U;
            __Vtemp1983[8U] = 0U;
            __Vtemp1983[9U] = 0U;
            __Vtemp1983[0xaU] = 0U;
            __Vtemp1983[0xbU] = 0U;
            __Vtemp1983[0xcU] = 0U;
            __Vtemp1983[0xdU] = 0U;
            __Vtemp1983[0xeU] = 0U;
            __Vtemp1983[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1984, __Vtemp1983, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1984[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_79 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1985[0U] = 1U;
            __Vtemp1985[1U] = 0U;
            __Vtemp1985[2U] = 0U;
            __Vtemp1985[3U] = 0U;
            __Vtemp1985[4U] = 0U;
            __Vtemp1985[5U] = 0U;
            __Vtemp1985[6U] = 0U;
            __Vtemp1985[7U] = 0U;
            __Vtemp1985[8U] = 0U;
            __Vtemp1985[9U] = 0U;
            __Vtemp1985[0xaU] = 0U;
            __Vtemp1985[0xbU] = 0U;
            __Vtemp1985[0xcU] = 0U;
            __Vtemp1985[0xdU] = 0U;
            __Vtemp1985[0xeU] = 0U;
            __Vtemp1985[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1986, __Vtemp1985, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1986[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_80 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1987[0U] = 1U;
            __Vtemp1987[1U] = 0U;
            __Vtemp1987[2U] = 0U;
            __Vtemp1987[3U] = 0U;
            __Vtemp1987[4U] = 0U;
            __Vtemp1987[5U] = 0U;
            __Vtemp1987[6U] = 0U;
            __Vtemp1987[7U] = 0U;
            __Vtemp1987[8U] = 0U;
            __Vtemp1987[9U] = 0U;
            __Vtemp1987[0xaU] = 0U;
            __Vtemp1987[0xbU] = 0U;
            __Vtemp1987[0xcU] = 0U;
            __Vtemp1987[0xdU] = 0U;
            __Vtemp1987[0xeU] = 0U;
            __Vtemp1987[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1988, __Vtemp1987, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1988[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_81 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1989[0U] = 1U;
            __Vtemp1989[1U] = 0U;
            __Vtemp1989[2U] = 0U;
            __Vtemp1989[3U] = 0U;
            __Vtemp1989[4U] = 0U;
            __Vtemp1989[5U] = 0U;
            __Vtemp1989[6U] = 0U;
            __Vtemp1989[7U] = 0U;
            __Vtemp1989[8U] = 0U;
            __Vtemp1989[9U] = 0U;
            __Vtemp1989[0xaU] = 0U;
            __Vtemp1989[0xbU] = 0U;
            __Vtemp1989[0xcU] = 0U;
            __Vtemp1989[0xdU] = 0U;
            __Vtemp1989[0xeU] = 0U;
            __Vtemp1989[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1990, __Vtemp1989, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1990[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_82 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1991[0U] = 1U;
            __Vtemp1991[1U] = 0U;
            __Vtemp1991[2U] = 0U;
            __Vtemp1991[3U] = 0U;
            __Vtemp1991[4U] = 0U;
            __Vtemp1991[5U] = 0U;
            __Vtemp1991[6U] = 0U;
            __Vtemp1991[7U] = 0U;
            __Vtemp1991[8U] = 0U;
            __Vtemp1991[9U] = 0U;
            __Vtemp1991[0xaU] = 0U;
            __Vtemp1991[0xbU] = 0U;
            __Vtemp1991[0xcU] = 0U;
            __Vtemp1991[0xdU] = 0U;
            __Vtemp1991[0xeU] = 0U;
            __Vtemp1991[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1992, __Vtemp1991, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1992[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_83 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1993[0U] = 1U;
            __Vtemp1993[1U] = 0U;
            __Vtemp1993[2U] = 0U;
            __Vtemp1993[3U] = 0U;
            __Vtemp1993[4U] = 0U;
            __Vtemp1993[5U] = 0U;
            __Vtemp1993[6U] = 0U;
            __Vtemp1993[7U] = 0U;
            __Vtemp1993[8U] = 0U;
            __Vtemp1993[9U] = 0U;
            __Vtemp1993[0xaU] = 0U;
            __Vtemp1993[0xbU] = 0U;
            __Vtemp1993[0xcU] = 0U;
            __Vtemp1993[0xdU] = 0U;
            __Vtemp1993[0xeU] = 0U;
            __Vtemp1993[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1994, __Vtemp1993, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1994[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_84 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1995[0U] = 1U;
            __Vtemp1995[1U] = 0U;
            __Vtemp1995[2U] = 0U;
            __Vtemp1995[3U] = 0U;
            __Vtemp1995[4U] = 0U;
            __Vtemp1995[5U] = 0U;
            __Vtemp1995[6U] = 0U;
            __Vtemp1995[7U] = 0U;
            __Vtemp1995[8U] = 0U;
            __Vtemp1995[9U] = 0U;
            __Vtemp1995[0xaU] = 0U;
            __Vtemp1995[0xbU] = 0U;
            __Vtemp1995[0xcU] = 0U;
            __Vtemp1995[0xdU] = 0U;
            __Vtemp1995[0xeU] = 0U;
            __Vtemp1995[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1996, __Vtemp1995, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1996[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_85 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1997[0U] = 1U;
            __Vtemp1997[1U] = 0U;
            __Vtemp1997[2U] = 0U;
            __Vtemp1997[3U] = 0U;
            __Vtemp1997[4U] = 0U;
            __Vtemp1997[5U] = 0U;
            __Vtemp1997[6U] = 0U;
            __Vtemp1997[7U] = 0U;
            __Vtemp1997[8U] = 0U;
            __Vtemp1997[9U] = 0U;
            __Vtemp1997[0xaU] = 0U;
            __Vtemp1997[0xbU] = 0U;
            __Vtemp1997[0xcU] = 0U;
            __Vtemp1997[0xdU] = 0U;
            __Vtemp1997[0xeU] = 0U;
            __Vtemp1997[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1998, __Vtemp1997, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1998[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_86 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1999[0U] = 1U;
            __Vtemp1999[1U] = 0U;
            __Vtemp1999[2U] = 0U;
            __Vtemp1999[3U] = 0U;
            __Vtemp1999[4U] = 0U;
            __Vtemp1999[5U] = 0U;
            __Vtemp1999[6U] = 0U;
            __Vtemp1999[7U] = 0U;
            __Vtemp1999[8U] = 0U;
            __Vtemp1999[9U] = 0U;
            __Vtemp1999[0xaU] = 0U;
            __Vtemp1999[0xbU] = 0U;
            __Vtemp1999[0xcU] = 0U;
            __Vtemp1999[0xdU] = 0U;
            __Vtemp1999[0xeU] = 0U;
            __Vtemp1999[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2000, __Vtemp1999, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp2000[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_87 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2001[0U] = 1U;
            __Vtemp2001[1U] = 0U;
            __Vtemp2001[2U] = 0U;
            __Vtemp2001[3U] = 0U;
            __Vtemp2001[4U] = 0U;
            __Vtemp2001[5U] = 0U;
            __Vtemp2001[6U] = 0U;
            __Vtemp2001[7U] = 0U;
            __Vtemp2001[8U] = 0U;
            __Vtemp2001[9U] = 0U;
            __Vtemp2001[0xaU] = 0U;
            __Vtemp2001[0xbU] = 0U;
            __Vtemp2001[0xcU] = 0U;
            __Vtemp2001[0xdU] = 0U;
            __Vtemp2001[0xeU] = 0U;
            __Vtemp2001[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2002, __Vtemp2001, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp2002[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_88 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2003[0U] = 1U;
            __Vtemp2003[1U] = 0U;
            __Vtemp2003[2U] = 0U;
            __Vtemp2003[3U] = 0U;
            __Vtemp2003[4U] = 0U;
            __Vtemp2003[5U] = 0U;
            __Vtemp2003[6U] = 0U;
            __Vtemp2003[7U] = 0U;
            __Vtemp2003[8U] = 0U;
            __Vtemp2003[9U] = 0U;
            __Vtemp2003[0xaU] = 0U;
            __Vtemp2003[0xbU] = 0U;
            __Vtemp2003[0xcU] = 0U;
            __Vtemp2003[0xdU] = 0U;
            __Vtemp2003[0xeU] = 0U;
            __Vtemp2003[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2004, __Vtemp2003, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp2004[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_89 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2005[0U] = 1U;
            __Vtemp2005[1U] = 0U;
            __Vtemp2005[2U] = 0U;
            __Vtemp2005[3U] = 0U;
            __Vtemp2005[4U] = 0U;
            __Vtemp2005[5U] = 0U;
            __Vtemp2005[6U] = 0U;
            __Vtemp2005[7U] = 0U;
            __Vtemp2005[8U] = 0U;
            __Vtemp2005[9U] = 0U;
            __Vtemp2005[0xaU] = 0U;
            __Vtemp2005[0xbU] = 0U;
            __Vtemp2005[0xcU] = 0U;
            __Vtemp2005[0xdU] = 0U;
            __Vtemp2005[0xeU] = 0U;
            __Vtemp2005[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2006, __Vtemp2005, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp2006[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_90 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2007[0U] = 1U;
            __Vtemp2007[1U] = 0U;
            __Vtemp2007[2U] = 0U;
            __Vtemp2007[3U] = 0U;
            __Vtemp2007[4U] = 0U;
            __Vtemp2007[5U] = 0U;
            __Vtemp2007[6U] = 0U;
            __Vtemp2007[7U] = 0U;
            __Vtemp2007[8U] = 0U;
            __Vtemp2007[9U] = 0U;
            __Vtemp2007[0xaU] = 0U;
            __Vtemp2007[0xbU] = 0U;
            __Vtemp2007[0xcU] = 0U;
            __Vtemp2007[0xdU] = 0U;
            __Vtemp2007[0xeU] = 0U;
            __Vtemp2007[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2008, __Vtemp2007, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp2008[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_91 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2009[0U] = 1U;
            __Vtemp2009[1U] = 0U;
            __Vtemp2009[2U] = 0U;
            __Vtemp2009[3U] = 0U;
            __Vtemp2009[4U] = 0U;
            __Vtemp2009[5U] = 0U;
            __Vtemp2009[6U] = 0U;
            __Vtemp2009[7U] = 0U;
            __Vtemp2009[8U] = 0U;
            __Vtemp2009[9U] = 0U;
            __Vtemp2009[0xaU] = 0U;
            __Vtemp2009[0xbU] = 0U;
            __Vtemp2009[0xcU] = 0U;
            __Vtemp2009[0xdU] = 0U;
            __Vtemp2009[0xeU] = 0U;
            __Vtemp2009[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2010, __Vtemp2009, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp2010[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_92 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2011[0U] = 1U;
            __Vtemp2011[1U] = 0U;
            __Vtemp2011[2U] = 0U;
            __Vtemp2011[3U] = 0U;
            __Vtemp2011[4U] = 0U;
            __Vtemp2011[5U] = 0U;
            __Vtemp2011[6U] = 0U;
            __Vtemp2011[7U] = 0U;
            __Vtemp2011[8U] = 0U;
            __Vtemp2011[9U] = 0U;
            __Vtemp2011[0xaU] = 0U;
            __Vtemp2011[0xbU] = 0U;
            __Vtemp2011[0xcU] = 0U;
            __Vtemp2011[0xdU] = 0U;
            __Vtemp2011[0xeU] = 0U;
            __Vtemp2011[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2012, __Vtemp2011, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp2012[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_93 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2013[0U] = 1U;
            __Vtemp2013[1U] = 0U;
            __Vtemp2013[2U] = 0U;
            __Vtemp2013[3U] = 0U;
            __Vtemp2013[4U] = 0U;
            __Vtemp2013[5U] = 0U;
            __Vtemp2013[6U] = 0U;
            __Vtemp2013[7U] = 0U;
            __Vtemp2013[8U] = 0U;
            __Vtemp2013[9U] = 0U;
            __Vtemp2013[0xaU] = 0U;
            __Vtemp2013[0xbU] = 0U;
            __Vtemp2013[0xcU] = 0U;
            __Vtemp2013[0xdU] = 0U;
            __Vtemp2013[0xeU] = 0U;
            __Vtemp2013[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2014, __Vtemp2013, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp2014[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_94 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2015[0U] = 1U;
            __Vtemp2015[1U] = 0U;
            __Vtemp2015[2U] = 0U;
            __Vtemp2015[3U] = 0U;
            __Vtemp2015[4U] = 0U;
            __Vtemp2015[5U] = 0U;
            __Vtemp2015[6U] = 0U;
            __Vtemp2015[7U] = 0U;
            __Vtemp2015[8U] = 0U;
            __Vtemp2015[9U] = 0U;
            __Vtemp2015[0xaU] = 0U;
            __Vtemp2015[0xbU] = 0U;
            __Vtemp2015[0xcU] = 0U;
            __Vtemp2015[0xdU] = 0U;
            __Vtemp2015[0xeU] = 0U;
            __Vtemp2015[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2016, __Vtemp2015, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp2016[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_95 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2017[0U] = 1U;
            __Vtemp2017[1U] = 0U;
            __Vtemp2017[2U] = 0U;
            __Vtemp2017[3U] = 0U;
            __Vtemp2017[4U] = 0U;
            __Vtemp2017[5U] = 0U;
            __Vtemp2017[6U] = 0U;
            __Vtemp2017[7U] = 0U;
            __Vtemp2017[8U] = 0U;
            __Vtemp2017[9U] = 0U;
            __Vtemp2017[0xaU] = 0U;
            __Vtemp2017[0xbU] = 0U;
            __Vtemp2017[0xcU] = 0U;
            __Vtemp2017[0xdU] = 0U;
            __Vtemp2017[0xeU] = 0U;
            __Vtemp2017[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2018, __Vtemp2017, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp2018[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_96 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2019[0U] = 1U;
            __Vtemp2019[1U] = 0U;
            __Vtemp2019[2U] = 0U;
            __Vtemp2019[3U] = 0U;
            __Vtemp2019[4U] = 0U;
            __Vtemp2019[5U] = 0U;
            __Vtemp2019[6U] = 0U;
            __Vtemp2019[7U] = 0U;
            __Vtemp2019[8U] = 0U;
            __Vtemp2019[9U] = 0U;
            __Vtemp2019[0xaU] = 0U;
            __Vtemp2019[0xbU] = 0U;
            __Vtemp2019[0xcU] = 0U;
            __Vtemp2019[0xdU] = 0U;
            __Vtemp2019[0xeU] = 0U;
            __Vtemp2019[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2020, __Vtemp2019, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp2020[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_97 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2021[0U] = 1U;
            __Vtemp2021[1U] = 0U;
            __Vtemp2021[2U] = 0U;
            __Vtemp2021[3U] = 0U;
            __Vtemp2021[4U] = 0U;
            __Vtemp2021[5U] = 0U;
            __Vtemp2021[6U] = 0U;
            __Vtemp2021[7U] = 0U;
            __Vtemp2021[8U] = 0U;
            __Vtemp2021[9U] = 0U;
            __Vtemp2021[0xaU] = 0U;
            __Vtemp2021[0xbU] = 0U;
            __Vtemp2021[0xcU] = 0U;
            __Vtemp2021[0xdU] = 0U;
            __Vtemp2021[0xeU] = 0U;
            __Vtemp2021[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2022, __Vtemp2021, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp2022[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_203 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2023[0U] = 1U;
            __Vtemp2023[1U] = 0U;
            __Vtemp2023[2U] = 0U;
            __Vtemp2023[3U] = 0U;
            __Vtemp2023[4U] = 0U;
            __Vtemp2023[5U] = 0U;
            __Vtemp2023[6U] = 0U;
            __Vtemp2023[7U] = 0U;
            __Vtemp2023[8U] = 0U;
            __Vtemp2023[9U] = 0U;
            __Vtemp2023[0xaU] = 0U;
            __Vtemp2023[0xbU] = 0U;
            __Vtemp2023[0xcU] = 0U;
            __Vtemp2023[0xdU] = 0U;
            __Vtemp2023[0xeU] = 0U;
            __Vtemp2023[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2024, __Vtemp2023, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp2024[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_141 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2025[0U] = 1U;
            __Vtemp2025[1U] = 0U;
            __Vtemp2025[2U] = 0U;
            __Vtemp2025[3U] = 0U;
            __Vtemp2025[4U] = 0U;
            __Vtemp2025[5U] = 0U;
            __Vtemp2025[6U] = 0U;
            __Vtemp2025[7U] = 0U;
            __Vtemp2025[8U] = 0U;
            __Vtemp2025[9U] = 0U;
            __Vtemp2025[0xaU] = 0U;
            __Vtemp2025[0xbU] = 0U;
            __Vtemp2025[0xcU] = 0U;
            __Vtemp2025[0xdU] = 0U;
            __Vtemp2025[0xeU] = 0U;
            __Vtemp2025[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2026, __Vtemp2025, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp2026[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_206 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2027[0U] = 1U;
            __Vtemp2027[1U] = 0U;
            __Vtemp2027[2U] = 0U;
            __Vtemp2027[3U] = 0U;
            __Vtemp2027[4U] = 0U;
            __Vtemp2027[5U] = 0U;
            __Vtemp2027[6U] = 0U;
            __Vtemp2027[7U] = 0U;
            __Vtemp2027[8U] = 0U;
            __Vtemp2027[9U] = 0U;
            __Vtemp2027[0xaU] = 0U;
            __Vtemp2027[0xbU] = 0U;
            __Vtemp2027[0xcU] = 0U;
            __Vtemp2027[0xdU] = 0U;
            __Vtemp2027[0xeU] = 0U;
            __Vtemp2027[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2028, __Vtemp2027, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp2028[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_207 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2029[0U] = 1U;
            __Vtemp2029[1U] = 0U;
            __Vtemp2029[2U] = 0U;
            __Vtemp2029[3U] = 0U;
            __Vtemp2029[4U] = 0U;
            __Vtemp2029[5U] = 0U;
            __Vtemp2029[6U] = 0U;
            __Vtemp2029[7U] = 0U;
            __Vtemp2029[8U] = 0U;
            __Vtemp2029[9U] = 0U;
            __Vtemp2029[0xaU] = 0U;
            __Vtemp2029[0xbU] = 0U;
            __Vtemp2029[0xcU] = 0U;
            __Vtemp2029[0xdU] = 0U;
            __Vtemp2029[0xeU] = 0U;
            __Vtemp2029[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2030, __Vtemp2029, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp2030[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_208 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp2031[0U] = 1U;
            __Vtemp2031[1U] = 0U;
            __Vtemp2031[2U] = 0U;
            __Vtemp2031[3U] = 0U;
            __Vtemp2031[4U] = 0U;
            __Vtemp2031[5U] = 0U;
            __Vtemp2031[6U] = 0U;
            __Vtemp2031[7U] = 0U;
            __Vtemp2031[8U] = 0U;
            __Vtemp2031[9U] = 0U;
            __Vtemp2031[0xaU] = 0U;
            __Vtemp2031[0xbU] = 0U;
            __Vtemp2031[0xcU] = 0U;
            __Vtemp2031[0xdU] = 0U;
            __Vtemp2031[0xeU] = 0U;
            __Vtemp2031[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp2032, __Vtemp2031, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp2032[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_209 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
