// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__70(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__70\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1709[16];
    WData/*511:0*/ __Vtemp1710[16];
    WData/*511:0*/ __Vtemp1711[16];
    WData/*511:0*/ __Vtemp1712[16];
    WData/*511:0*/ __Vtemp1713[16];
    WData/*511:0*/ __Vtemp1714[16];
    WData/*511:0*/ __Vtemp1715[16];
    WData/*511:0*/ __Vtemp1716[16];
    WData/*511:0*/ __Vtemp1717[16];
    WData/*511:0*/ __Vtemp1718[16];
    WData/*511:0*/ __Vtemp1719[16];
    WData/*511:0*/ __Vtemp1720[16];
    WData/*511:0*/ __Vtemp1721[16];
    WData/*511:0*/ __Vtemp1722[16];
    WData/*511:0*/ __Vtemp1723[16];
    WData/*511:0*/ __Vtemp1724[16];
    WData/*511:0*/ __Vtemp1725[16];
    WData/*511:0*/ __Vtemp1726[16];
    WData/*511:0*/ __Vtemp1727[16];
    WData/*511:0*/ __Vtemp1728[16];
    WData/*511:0*/ __Vtemp1729[16];
    WData/*511:0*/ __Vtemp1730[16];
    WData/*511:0*/ __Vtemp1731[16];
    WData/*511:0*/ __Vtemp1732[16];
    WData/*511:0*/ __Vtemp1733[16];
    WData/*511:0*/ __Vtemp1734[16];
    WData/*511:0*/ __Vtemp1735[16];
    WData/*511:0*/ __Vtemp1736[16];
    WData/*511:0*/ __Vtemp1737[16];
    WData/*511:0*/ __Vtemp1738[16];
    WData/*511:0*/ __Vtemp1739[16];
    WData/*511:0*/ __Vtemp1740[16];
    WData/*511:0*/ __Vtemp1741[16];
    WData/*511:0*/ __Vtemp1742[16];
    WData/*511:0*/ __Vtemp1743[16];
    WData/*511:0*/ __Vtemp1744[16];
    WData/*511:0*/ __Vtemp1745[16];
    WData/*511:0*/ __Vtemp1746[16];
    WData/*511:0*/ __Vtemp1747[16];
    WData/*511:0*/ __Vtemp1748[16];
    WData/*511:0*/ __Vtemp1749[16];
    WData/*511:0*/ __Vtemp1750[16];
    WData/*511:0*/ __Vtemp1751[16];
    WData/*511:0*/ __Vtemp1752[16];
    WData/*511:0*/ __Vtemp1753[16];
    WData/*511:0*/ __Vtemp1754[16];
    WData/*511:0*/ __Vtemp1755[16];
    WData/*511:0*/ __Vtemp1756[16];
    WData/*511:0*/ __Vtemp1757[16];
    WData/*511:0*/ __Vtemp1758[16];
    WData/*511:0*/ __Vtemp1759[16];
    WData/*511:0*/ __Vtemp1760[16];
    WData/*511:0*/ __Vtemp1761[16];
    WData/*511:0*/ __Vtemp1762[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1709[0U] = 1U;
            __Vtemp1709[1U] = 0U;
            __Vtemp1709[2U] = 0U;
            __Vtemp1709[3U] = 0U;
            __Vtemp1709[4U] = 0U;
            __Vtemp1709[5U] = 0U;
            __Vtemp1709[6U] = 0U;
            __Vtemp1709[7U] = 0U;
            __Vtemp1709[8U] = 0U;
            __Vtemp1709[9U] = 0U;
            __Vtemp1709[0xaU] = 0U;
            __Vtemp1709[0xbU] = 0U;
            __Vtemp1709[0xcU] = 0U;
            __Vtemp1709[0xdU] = 0U;
            __Vtemp1709[0xeU] = 0U;
            __Vtemp1709[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1710, __Vtemp1709, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1710[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_190 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1711[0U] = 1U;
            __Vtemp1711[1U] = 0U;
            __Vtemp1711[2U] = 0U;
            __Vtemp1711[3U] = 0U;
            __Vtemp1711[4U] = 0U;
            __Vtemp1711[5U] = 0U;
            __Vtemp1711[6U] = 0U;
            __Vtemp1711[7U] = 0U;
            __Vtemp1711[8U] = 0U;
            __Vtemp1711[9U] = 0U;
            __Vtemp1711[0xaU] = 0U;
            __Vtemp1711[0xbU] = 0U;
            __Vtemp1711[0xcU] = 0U;
            __Vtemp1711[0xdU] = 0U;
            __Vtemp1711[0xeU] = 0U;
            __Vtemp1711[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1712, __Vtemp1711, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1712[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_25 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1713[0U] = 1U;
            __Vtemp1713[1U] = 0U;
            __Vtemp1713[2U] = 0U;
            __Vtemp1713[3U] = 0U;
            __Vtemp1713[4U] = 0U;
            __Vtemp1713[5U] = 0U;
            __Vtemp1713[6U] = 0U;
            __Vtemp1713[7U] = 0U;
            __Vtemp1713[8U] = 0U;
            __Vtemp1713[9U] = 0U;
            __Vtemp1713[0xaU] = 0U;
            __Vtemp1713[0xbU] = 0U;
            __Vtemp1713[0xcU] = 0U;
            __Vtemp1713[0xdU] = 0U;
            __Vtemp1713[0xeU] = 0U;
            __Vtemp1713[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1714, __Vtemp1713, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1714[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_116 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1715[0U] = 1U;
            __Vtemp1715[1U] = 0U;
            __Vtemp1715[2U] = 0U;
            __Vtemp1715[3U] = 0U;
            __Vtemp1715[4U] = 0U;
            __Vtemp1715[5U] = 0U;
            __Vtemp1715[6U] = 0U;
            __Vtemp1715[7U] = 0U;
            __Vtemp1715[8U] = 0U;
            __Vtemp1715[9U] = 0U;
            __Vtemp1715[0xaU] = 0U;
            __Vtemp1715[0xbU] = 0U;
            __Vtemp1715[0xcU] = 0U;
            __Vtemp1715[0xdU] = 0U;
            __Vtemp1715[0xeU] = 0U;
            __Vtemp1715[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1716, __Vtemp1715, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1716[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_25 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1717[0U] = 1U;
            __Vtemp1717[1U] = 0U;
            __Vtemp1717[2U] = 0U;
            __Vtemp1717[3U] = 0U;
            __Vtemp1717[4U] = 0U;
            __Vtemp1717[5U] = 0U;
            __Vtemp1717[6U] = 0U;
            __Vtemp1717[7U] = 0U;
            __Vtemp1717[8U] = 0U;
            __Vtemp1717[9U] = 0U;
            __Vtemp1717[0xaU] = 0U;
            __Vtemp1717[0xbU] = 0U;
            __Vtemp1717[0xcU] = 0U;
            __Vtemp1717[0xdU] = 0U;
            __Vtemp1717[0xeU] = 0U;
            __Vtemp1717[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1718, __Vtemp1717, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1718[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_177 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1719[0U] = 1U;
            __Vtemp1719[1U] = 0U;
            __Vtemp1719[2U] = 0U;
            __Vtemp1719[3U] = 0U;
            __Vtemp1719[4U] = 0U;
            __Vtemp1719[5U] = 0U;
            __Vtemp1719[6U] = 0U;
            __Vtemp1719[7U] = 0U;
            __Vtemp1719[8U] = 0U;
            __Vtemp1719[9U] = 0U;
            __Vtemp1719[0xaU] = 0U;
            __Vtemp1719[0xbU] = 0U;
            __Vtemp1719[0xcU] = 0U;
            __Vtemp1719[0xdU] = 0U;
            __Vtemp1719[0xeU] = 0U;
            __Vtemp1719[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1720, __Vtemp1719, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1720[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_12 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1721[0U] = 1U;
            __Vtemp1721[1U] = 0U;
            __Vtemp1721[2U] = 0U;
            __Vtemp1721[3U] = 0U;
            __Vtemp1721[4U] = 0U;
            __Vtemp1721[5U] = 0U;
            __Vtemp1721[6U] = 0U;
            __Vtemp1721[7U] = 0U;
            __Vtemp1721[8U] = 0U;
            __Vtemp1721[9U] = 0U;
            __Vtemp1721[0xaU] = 0U;
            __Vtemp1721[0xbU] = 0U;
            __Vtemp1721[0xcU] = 0U;
            __Vtemp1721[0xdU] = 0U;
            __Vtemp1721[0xeU] = 0U;
            __Vtemp1721[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1722, __Vtemp1721, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1722[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_103 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1723[0U] = 1U;
            __Vtemp1723[1U] = 0U;
            __Vtemp1723[2U] = 0U;
            __Vtemp1723[3U] = 0U;
            __Vtemp1723[4U] = 0U;
            __Vtemp1723[5U] = 0U;
            __Vtemp1723[6U] = 0U;
            __Vtemp1723[7U] = 0U;
            __Vtemp1723[8U] = 0U;
            __Vtemp1723[9U] = 0U;
            __Vtemp1723[0xaU] = 0U;
            __Vtemp1723[0xbU] = 0U;
            __Vtemp1723[0xcU] = 0U;
            __Vtemp1723[0xdU] = 0U;
            __Vtemp1723[0xeU] = 0U;
            __Vtemp1723[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1724, __Vtemp1723, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1724[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_34 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1725[0U] = 1U;
            __Vtemp1725[1U] = 0U;
            __Vtemp1725[2U] = 0U;
            __Vtemp1725[3U] = 0U;
            __Vtemp1725[4U] = 0U;
            __Vtemp1725[5U] = 0U;
            __Vtemp1725[6U] = 0U;
            __Vtemp1725[7U] = 0U;
            __Vtemp1725[8U] = 0U;
            __Vtemp1725[9U] = 0U;
            __Vtemp1725[0xaU] = 0U;
            __Vtemp1725[0xbU] = 0U;
            __Vtemp1725[0xcU] = 0U;
            __Vtemp1725[0xdU] = 0U;
            __Vtemp1725[0xeU] = 0U;
            __Vtemp1725[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1726, __Vtemp1725, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1726[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_186 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1727[0U] = 1U;
            __Vtemp1727[1U] = 0U;
            __Vtemp1727[2U] = 0U;
            __Vtemp1727[3U] = 0U;
            __Vtemp1727[4U] = 0U;
            __Vtemp1727[5U] = 0U;
            __Vtemp1727[6U] = 0U;
            __Vtemp1727[7U] = 0U;
            __Vtemp1727[8U] = 0U;
            __Vtemp1727[9U] = 0U;
            __Vtemp1727[0xaU] = 0U;
            __Vtemp1727[0xbU] = 0U;
            __Vtemp1727[0xcU] = 0U;
            __Vtemp1727[0xdU] = 0U;
            __Vtemp1727[0xeU] = 0U;
            __Vtemp1727[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1728, __Vtemp1727, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1728[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_21 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1729[0U] = 1U;
            __Vtemp1729[1U] = 0U;
            __Vtemp1729[2U] = 0U;
            __Vtemp1729[3U] = 0U;
            __Vtemp1729[4U] = 0U;
            __Vtemp1729[5U] = 0U;
            __Vtemp1729[6U] = 0U;
            __Vtemp1729[7U] = 0U;
            __Vtemp1729[8U] = 0U;
            __Vtemp1729[9U] = 0U;
            __Vtemp1729[0xaU] = 0U;
            __Vtemp1729[0xbU] = 0U;
            __Vtemp1729[0xcU] = 0U;
            __Vtemp1729[0xdU] = 0U;
            __Vtemp1729[0xeU] = 0U;
            __Vtemp1729[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1730, __Vtemp1729, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1730[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_112 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1731[0U] = 1U;
            __Vtemp1731[1U] = 0U;
            __Vtemp1731[2U] = 0U;
            __Vtemp1731[3U] = 0U;
            __Vtemp1731[4U] = 0U;
            __Vtemp1731[5U] = 0U;
            __Vtemp1731[6U] = 0U;
            __Vtemp1731[7U] = 0U;
            __Vtemp1731[8U] = 0U;
            __Vtemp1731[9U] = 0U;
            __Vtemp1731[0xaU] = 0U;
            __Vtemp1731[0xbU] = 0U;
            __Vtemp1731[0xcU] = 0U;
            __Vtemp1731[0xdU] = 0U;
            __Vtemp1731[0xeU] = 0U;
            __Vtemp1731[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1732, __Vtemp1731, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1732[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_4 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1733[0U] = 1U;
            __Vtemp1733[1U] = 0U;
            __Vtemp1733[2U] = 0U;
            __Vtemp1733[3U] = 0U;
            __Vtemp1733[4U] = 0U;
            __Vtemp1733[5U] = 0U;
            __Vtemp1733[6U] = 0U;
            __Vtemp1733[7U] = 0U;
            __Vtemp1733[8U] = 0U;
            __Vtemp1733[9U] = 0U;
            __Vtemp1733[0xaU] = 0U;
            __Vtemp1733[0xbU] = 0U;
            __Vtemp1733[0xcU] = 0U;
            __Vtemp1733[0xdU] = 0U;
            __Vtemp1733[0xeU] = 0U;
            __Vtemp1733[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1734, __Vtemp1733, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1734[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_156 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1735[0U] = 1U;
            __Vtemp1735[1U] = 0U;
            __Vtemp1735[2U] = 0U;
            __Vtemp1735[3U] = 0U;
            __Vtemp1735[4U] = 0U;
            __Vtemp1735[5U] = 0U;
            __Vtemp1735[6U] = 0U;
            __Vtemp1735[7U] = 0U;
            __Vtemp1735[8U] = 0U;
            __Vtemp1735[9U] = 0U;
            __Vtemp1735[0xaU] = 0U;
            __Vtemp1735[0xbU] = 0U;
            __Vtemp1735[0xcU] = 0U;
            __Vtemp1735[0xdU] = 0U;
            __Vtemp1735[0xeU] = 0U;
            __Vtemp1735[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1736, __Vtemp1735, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1736[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_40 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1737[0U] = 1U;
            __Vtemp1737[1U] = 0U;
            __Vtemp1737[2U] = 0U;
            __Vtemp1737[3U] = 0U;
            __Vtemp1737[4U] = 0U;
            __Vtemp1737[5U] = 0U;
            __Vtemp1737[6U] = 0U;
            __Vtemp1737[7U] = 0U;
            __Vtemp1737[8U] = 0U;
            __Vtemp1737[9U] = 0U;
            __Vtemp1737[0xaU] = 0U;
            __Vtemp1737[0xbU] = 0U;
            __Vtemp1737[0xcU] = 0U;
            __Vtemp1737[0xdU] = 0U;
            __Vtemp1737[0xeU] = 0U;
            __Vtemp1737[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1738, __Vtemp1737, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1738[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_192 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1739[0U] = 1U;
            __Vtemp1739[1U] = 0U;
            __Vtemp1739[2U] = 0U;
            __Vtemp1739[3U] = 0U;
            __Vtemp1739[4U] = 0U;
            __Vtemp1739[5U] = 0U;
            __Vtemp1739[6U] = 0U;
            __Vtemp1739[7U] = 0U;
            __Vtemp1739[8U] = 0U;
            __Vtemp1739[9U] = 0U;
            __Vtemp1739[0xaU] = 0U;
            __Vtemp1739[0xbU] = 0U;
            __Vtemp1739[0xcU] = 0U;
            __Vtemp1739[0xdU] = 0U;
            __Vtemp1739[0xeU] = 0U;
            __Vtemp1739[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1740, __Vtemp1739, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1740[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_27 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1741[0U] = 1U;
            __Vtemp1741[1U] = 0U;
            __Vtemp1741[2U] = 0U;
            __Vtemp1741[3U] = 0U;
            __Vtemp1741[4U] = 0U;
            __Vtemp1741[5U] = 0U;
            __Vtemp1741[6U] = 0U;
            __Vtemp1741[7U] = 0U;
            __Vtemp1741[8U] = 0U;
            __Vtemp1741[9U] = 0U;
            __Vtemp1741[0xaU] = 0U;
            __Vtemp1741[0xbU] = 0U;
            __Vtemp1741[0xcU] = 0U;
            __Vtemp1741[0xdU] = 0U;
            __Vtemp1741[0xeU] = 0U;
            __Vtemp1741[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1742, __Vtemp1741, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1742[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_118 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1743[0U] = 1U;
            __Vtemp1743[1U] = 0U;
            __Vtemp1743[2U] = 0U;
            __Vtemp1743[3U] = 0U;
            __Vtemp1743[4U] = 0U;
            __Vtemp1743[5U] = 0U;
            __Vtemp1743[6U] = 0U;
            __Vtemp1743[7U] = 0U;
            __Vtemp1743[8U] = 0U;
            __Vtemp1743[9U] = 0U;
            __Vtemp1743[0xaU] = 0U;
            __Vtemp1743[0xbU] = 0U;
            __Vtemp1743[0xcU] = 0U;
            __Vtemp1743[0xdU] = 0U;
            __Vtemp1743[0xeU] = 0U;
            __Vtemp1743[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1744, __Vtemp1743, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1744[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_149 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1745[0U] = 1U;
            __Vtemp1745[1U] = 0U;
            __Vtemp1745[2U] = 0U;
            __Vtemp1745[3U] = 0U;
            __Vtemp1745[4U] = 0U;
            __Vtemp1745[5U] = 0U;
            __Vtemp1745[6U] = 0U;
            __Vtemp1745[7U] = 0U;
            __Vtemp1745[8U] = 0U;
            __Vtemp1745[9U] = 0U;
            __Vtemp1745[0xaU] = 0U;
            __Vtemp1745[0xbU] = 0U;
            __Vtemp1745[0xcU] = 0U;
            __Vtemp1745[0xdU] = 0U;
            __Vtemp1745[0xeU] = 0U;
            __Vtemp1745[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1746, __Vtemp1745, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1746[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_140 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1747[0U] = 1U;
            __Vtemp1747[1U] = 0U;
            __Vtemp1747[2U] = 0U;
            __Vtemp1747[3U] = 0U;
            __Vtemp1747[4U] = 0U;
            __Vtemp1747[5U] = 0U;
            __Vtemp1747[6U] = 0U;
            __Vtemp1747[7U] = 0U;
            __Vtemp1747[8U] = 0U;
            __Vtemp1747[9U] = 0U;
            __Vtemp1747[0xaU] = 0U;
            __Vtemp1747[0xbU] = 0U;
            __Vtemp1747[0xcU] = 0U;
            __Vtemp1747[0xdU] = 0U;
            __Vtemp1747[0xeU] = 0U;
            __Vtemp1747[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1748, __Vtemp1747, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1748[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_165 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1749[0U] = 1U;
            __Vtemp1749[1U] = 0U;
            __Vtemp1749[2U] = 0U;
            __Vtemp1749[3U] = 0U;
            __Vtemp1749[4U] = 0U;
            __Vtemp1749[5U] = 0U;
            __Vtemp1749[6U] = 0U;
            __Vtemp1749[7U] = 0U;
            __Vtemp1749[8U] = 0U;
            __Vtemp1749[9U] = 0U;
            __Vtemp1749[0xaU] = 0U;
            __Vtemp1749[0xbU] = 0U;
            __Vtemp1749[0xcU] = 0U;
            __Vtemp1749[0xdU] = 0U;
            __Vtemp1749[0xeU] = 0U;
            __Vtemp1749[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1750, __Vtemp1749, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1750[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_204 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1751[0U] = 1U;
            __Vtemp1751[1U] = 0U;
            __Vtemp1751[2U] = 0U;
            __Vtemp1751[3U] = 0U;
            __Vtemp1751[4U] = 0U;
            __Vtemp1751[5U] = 0U;
            __Vtemp1751[6U] = 0U;
            __Vtemp1751[7U] = 0U;
            __Vtemp1751[8U] = 0U;
            __Vtemp1751[9U] = 0U;
            __Vtemp1751[0xaU] = 0U;
            __Vtemp1751[0xbU] = 0U;
            __Vtemp1751[0xcU] = 0U;
            __Vtemp1751[0xdU] = 0U;
            __Vtemp1751[0xeU] = 0U;
            __Vtemp1751[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1752, __Vtemp1751, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1752[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_48 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1753[0U] = 1U;
            __Vtemp1753[1U] = 0U;
            __Vtemp1753[2U] = 0U;
            __Vtemp1753[3U] = 0U;
            __Vtemp1753[4U] = 0U;
            __Vtemp1753[5U] = 0U;
            __Vtemp1753[6U] = 0U;
            __Vtemp1753[7U] = 0U;
            __Vtemp1753[8U] = 0U;
            __Vtemp1753[9U] = 0U;
            __Vtemp1753[0xaU] = 0U;
            __Vtemp1753[0xbU] = 0U;
            __Vtemp1753[0xcU] = 0U;
            __Vtemp1753[0xdU] = 0U;
            __Vtemp1753[0xeU] = 0U;
            __Vtemp1753[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1754, __Vtemp1753, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1754[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_200 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1755[0U] = 1U;
            __Vtemp1755[1U] = 0U;
            __Vtemp1755[2U] = 0U;
            __Vtemp1755[3U] = 0U;
            __Vtemp1755[4U] = 0U;
            __Vtemp1755[5U] = 0U;
            __Vtemp1755[6U] = 0U;
            __Vtemp1755[7U] = 0U;
            __Vtemp1755[8U] = 0U;
            __Vtemp1755[9U] = 0U;
            __Vtemp1755[0xaU] = 0U;
            __Vtemp1755[0xbU] = 0U;
            __Vtemp1755[0xcU] = 0U;
            __Vtemp1755[0xdU] = 0U;
            __Vtemp1755[0xeU] = 0U;
            __Vtemp1755[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1756, __Vtemp1755, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1756[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_35 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1757[0U] = 1U;
            __Vtemp1757[1U] = 0U;
            __Vtemp1757[2U] = 0U;
            __Vtemp1757[3U] = 0U;
            __Vtemp1757[4U] = 0U;
            __Vtemp1757[5U] = 0U;
            __Vtemp1757[6U] = 0U;
            __Vtemp1757[7U] = 0U;
            __Vtemp1757[8U] = 0U;
            __Vtemp1757[9U] = 0U;
            __Vtemp1757[0xaU] = 0U;
            __Vtemp1757[0xbU] = 0U;
            __Vtemp1757[0xcU] = 0U;
            __Vtemp1757[0xdU] = 0U;
            __Vtemp1757[0xeU] = 0U;
            __Vtemp1757[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1758, __Vtemp1757, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1758[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_10 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1759[0U] = 1U;
            __Vtemp1759[1U] = 0U;
            __Vtemp1759[2U] = 0U;
            __Vtemp1759[3U] = 0U;
            __Vtemp1759[4U] = 0U;
            __Vtemp1759[5U] = 0U;
            __Vtemp1759[6U] = 0U;
            __Vtemp1759[7U] = 0U;
            __Vtemp1759[8U] = 0U;
            __Vtemp1759[9U] = 0U;
            __Vtemp1759[0xaU] = 0U;
            __Vtemp1759[0xbU] = 0U;
            __Vtemp1759[0xcU] = 0U;
            __Vtemp1759[0xdU] = 0U;
            __Vtemp1759[0xeU] = 0U;
            __Vtemp1759[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1760, __Vtemp1759, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1760[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_162 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1761[0U] = 1U;
            __Vtemp1761[1U] = 0U;
            __Vtemp1761[2U] = 0U;
            __Vtemp1761[3U] = 0U;
            __Vtemp1761[4U] = 0U;
            __Vtemp1761[5U] = 0U;
            __Vtemp1761[6U] = 0U;
            __Vtemp1761[7U] = 0U;
            __Vtemp1761[8U] = 0U;
            __Vtemp1761[9U] = 0U;
            __Vtemp1761[0xaU] = 0U;
            __Vtemp1761[0xbU] = 0U;
            __Vtemp1761[0xcU] = 0U;
            __Vtemp1761[0xdU] = 0U;
            __Vtemp1761[0xeU] = 0U;
            __Vtemp1761[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1762, __Vtemp1761, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1762[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_46 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__71(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__71\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1763[16];
    WData/*511:0*/ __Vtemp1764[16];
    WData/*511:0*/ __Vtemp1765[16];
    WData/*511:0*/ __Vtemp1766[16];
    WData/*511:0*/ __Vtemp1767[16];
    WData/*511:0*/ __Vtemp1768[16];
    WData/*511:0*/ __Vtemp1769[16];
    WData/*511:0*/ __Vtemp1770[16];
    WData/*511:0*/ __Vtemp1771[16];
    WData/*511:0*/ __Vtemp1772[16];
    WData/*511:0*/ __Vtemp1773[16];
    WData/*511:0*/ __Vtemp1774[16];
    WData/*511:0*/ __Vtemp1775[16];
    WData/*511:0*/ __Vtemp1776[16];
    WData/*511:0*/ __Vtemp1777[16];
    WData/*511:0*/ __Vtemp1778[16];
    WData/*511:0*/ __Vtemp1779[16];
    WData/*511:0*/ __Vtemp1780[16];
    WData/*511:0*/ __Vtemp1781[16];
    WData/*511:0*/ __Vtemp1782[16];
    WData/*511:0*/ __Vtemp1783[16];
    WData/*511:0*/ __Vtemp1784[16];
    WData/*511:0*/ __Vtemp1785[16];
    WData/*511:0*/ __Vtemp1786[16];
    WData/*511:0*/ __Vtemp1787[16];
    WData/*511:0*/ __Vtemp1788[16];
    WData/*511:0*/ __Vtemp1789[16];
    WData/*511:0*/ __Vtemp1790[16];
    WData/*511:0*/ __Vtemp1791[16];
    WData/*511:0*/ __Vtemp1792[16];
    WData/*511:0*/ __Vtemp1793[16];
    WData/*511:0*/ __Vtemp1794[16];
    WData/*511:0*/ __Vtemp1795[16];
    WData/*511:0*/ __Vtemp1796[16];
    WData/*511:0*/ __Vtemp1797[16];
    WData/*511:0*/ __Vtemp1798[16];
    WData/*511:0*/ __Vtemp1799[16];
    WData/*511:0*/ __Vtemp1800[16];
    WData/*511:0*/ __Vtemp1801[16];
    WData/*511:0*/ __Vtemp1802[16];
    WData/*511:0*/ __Vtemp1803[16];
    WData/*511:0*/ __Vtemp1804[16];
    WData/*511:0*/ __Vtemp1805[16];
    WData/*511:0*/ __Vtemp1806[16];
    WData/*511:0*/ __Vtemp1807[16];
    WData/*511:0*/ __Vtemp1808[16];
    WData/*511:0*/ __Vtemp1809[16];
    WData/*511:0*/ __Vtemp1810[16];
    WData/*511:0*/ __Vtemp1811[16];
    WData/*511:0*/ __Vtemp1812[16];
    WData/*511:0*/ __Vtemp1813[16];
    WData/*511:0*/ __Vtemp1814[16];
    WData/*511:0*/ __Vtemp1815[16];
    WData/*511:0*/ __Vtemp1816[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1763[0U] = 1U;
            __Vtemp1763[1U] = 0U;
            __Vtemp1763[2U] = 0U;
            __Vtemp1763[3U] = 0U;
            __Vtemp1763[4U] = 0U;
            __Vtemp1763[5U] = 0U;
            __Vtemp1763[6U] = 0U;
            __Vtemp1763[7U] = 0U;
            __Vtemp1763[8U] = 0U;
            __Vtemp1763[9U] = 0U;
            __Vtemp1763[0xaU] = 0U;
            __Vtemp1763[0xbU] = 0U;
            __Vtemp1763[0xcU] = 0U;
            __Vtemp1763[0xdU] = 0U;
            __Vtemp1763[0xeU] = 0U;
            __Vtemp1763[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1764, __Vtemp1763, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1764[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_198 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1765[0U] = 1U;
            __Vtemp1765[1U] = 0U;
            __Vtemp1765[2U] = 0U;
            __Vtemp1765[3U] = 0U;
            __Vtemp1765[4U] = 0U;
            __Vtemp1765[5U] = 0U;
            __Vtemp1765[6U] = 0U;
            __Vtemp1765[7U] = 0U;
            __Vtemp1765[8U] = 0U;
            __Vtemp1765[9U] = 0U;
            __Vtemp1765[0xaU] = 0U;
            __Vtemp1765[0xbU] = 0U;
            __Vtemp1765[0xcU] = 0U;
            __Vtemp1765[0xdU] = 0U;
            __Vtemp1765[0xeU] = 0U;
            __Vtemp1765[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1766, __Vtemp1765, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1766[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_33 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1767[0U] = 1U;
            __Vtemp1767[1U] = 0U;
            __Vtemp1767[2U] = 0U;
            __Vtemp1767[3U] = 0U;
            __Vtemp1767[4U] = 0U;
            __Vtemp1767[5U] = 0U;
            __Vtemp1767[6U] = 0U;
            __Vtemp1767[7U] = 0U;
            __Vtemp1767[8U] = 0U;
            __Vtemp1767[9U] = 0U;
            __Vtemp1767[0xaU] = 0U;
            __Vtemp1767[0xbU] = 0U;
            __Vtemp1767[0xcU] = 0U;
            __Vtemp1767[0xdU] = 0U;
            __Vtemp1767[0xeU] = 0U;
            __Vtemp1767[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1768, __Vtemp1767, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1768[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_124 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1769[0U] = 1U;
            __Vtemp1769[1U] = 0U;
            __Vtemp1769[2U] = 0U;
            __Vtemp1769[3U] = 0U;
            __Vtemp1769[4U] = 0U;
            __Vtemp1769[5U] = 0U;
            __Vtemp1769[6U] = 0U;
            __Vtemp1769[7U] = 0U;
            __Vtemp1769[8U] = 0U;
            __Vtemp1769[9U] = 0U;
            __Vtemp1769[0xaU] = 0U;
            __Vtemp1769[0xbU] = 0U;
            __Vtemp1769[0xcU] = 0U;
            __Vtemp1769[0xdU] = 0U;
            __Vtemp1769[0xeU] = 0U;
            __Vtemp1769[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1770, __Vtemp1769, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1770[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_31 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1771[0U] = 1U;
            __Vtemp1771[1U] = 0U;
            __Vtemp1771[2U] = 0U;
            __Vtemp1771[3U] = 0U;
            __Vtemp1771[4U] = 0U;
            __Vtemp1771[5U] = 0U;
            __Vtemp1771[6U] = 0U;
            __Vtemp1771[7U] = 0U;
            __Vtemp1771[8U] = 0U;
            __Vtemp1771[9U] = 0U;
            __Vtemp1771[0xaU] = 0U;
            __Vtemp1771[0xbU] = 0U;
            __Vtemp1771[0xcU] = 0U;
            __Vtemp1771[0xdU] = 0U;
            __Vtemp1771[0xeU] = 0U;
            __Vtemp1771[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1772, __Vtemp1771, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1772[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_183 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1773[0U] = 1U;
            __Vtemp1773[1U] = 0U;
            __Vtemp1773[2U] = 0U;
            __Vtemp1773[3U] = 0U;
            __Vtemp1773[4U] = 0U;
            __Vtemp1773[5U] = 0U;
            __Vtemp1773[6U] = 0U;
            __Vtemp1773[7U] = 0U;
            __Vtemp1773[8U] = 0U;
            __Vtemp1773[9U] = 0U;
            __Vtemp1773[0xaU] = 0U;
            __Vtemp1773[0xbU] = 0U;
            __Vtemp1773[0xcU] = 0U;
            __Vtemp1773[0xdU] = 0U;
            __Vtemp1773[0xeU] = 0U;
            __Vtemp1773[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1774, __Vtemp1773, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1774[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_18 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1775[0U] = 1U;
            __Vtemp1775[1U] = 0U;
            __Vtemp1775[2U] = 0U;
            __Vtemp1775[3U] = 0U;
            __Vtemp1775[4U] = 0U;
            __Vtemp1775[5U] = 0U;
            __Vtemp1775[6U] = 0U;
            __Vtemp1775[7U] = 0U;
            __Vtemp1775[8U] = 0U;
            __Vtemp1775[9U] = 0U;
            __Vtemp1775[0xaU] = 0U;
            __Vtemp1775[0xbU] = 0U;
            __Vtemp1775[0xcU] = 0U;
            __Vtemp1775[0xdU] = 0U;
            __Vtemp1775[0xeU] = 0U;
            __Vtemp1775[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1776, __Vtemp1775, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1776[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_109 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1777[0U] = 1U;
            __Vtemp1777[1U] = 0U;
            __Vtemp1777[2U] = 0U;
            __Vtemp1777[3U] = 0U;
            __Vtemp1777[4U] = 0U;
            __Vtemp1777[5U] = 0U;
            __Vtemp1777[6U] = 0U;
            __Vtemp1777[7U] = 0U;
            __Vtemp1777[8U] = 0U;
            __Vtemp1777[9U] = 0U;
            __Vtemp1777[0xaU] = 0U;
            __Vtemp1777[0xbU] = 0U;
            __Vtemp1777[0xcU] = 0U;
            __Vtemp1777[0xdU] = 0U;
            __Vtemp1777[0xeU] = 0U;
            __Vtemp1777[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1778, __Vtemp1777, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1778[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_1 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1779[0U] = 1U;
            __Vtemp1779[1U] = 0U;
            __Vtemp1779[2U] = 0U;
            __Vtemp1779[3U] = 0U;
            __Vtemp1779[4U] = 0U;
            __Vtemp1779[5U] = 0U;
            __Vtemp1779[6U] = 0U;
            __Vtemp1779[7U] = 0U;
            __Vtemp1779[8U] = 0U;
            __Vtemp1779[9U] = 0U;
            __Vtemp1779[0xaU] = 0U;
            __Vtemp1779[0xbU] = 0U;
            __Vtemp1779[0xcU] = 0U;
            __Vtemp1779[0xdU] = 0U;
            __Vtemp1779[0xeU] = 0U;
            __Vtemp1779[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1780, __Vtemp1779, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1780[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_153 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1781[0U] = 1U;
            __Vtemp1781[1U] = 0U;
            __Vtemp1781[2U] = 0U;
            __Vtemp1781[3U] = 0U;
            __Vtemp1781[4U] = 0U;
            __Vtemp1781[5U] = 0U;
            __Vtemp1781[6U] = 0U;
            __Vtemp1781[7U] = 0U;
            __Vtemp1781[8U] = 0U;
            __Vtemp1781[9U] = 0U;
            __Vtemp1781[0xaU] = 0U;
            __Vtemp1781[0xbU] = 0U;
            __Vtemp1781[0xcU] = 0U;
            __Vtemp1781[0xdU] = 0U;
            __Vtemp1781[0xeU] = 0U;
            __Vtemp1781[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1782, __Vtemp1781, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1782[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_37 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1783[0U] = 1U;
            __Vtemp1783[1U] = 0U;
            __Vtemp1783[2U] = 0U;
            __Vtemp1783[3U] = 0U;
            __Vtemp1783[4U] = 0U;
            __Vtemp1783[5U] = 0U;
            __Vtemp1783[6U] = 0U;
            __Vtemp1783[7U] = 0U;
            __Vtemp1783[8U] = 0U;
            __Vtemp1783[9U] = 0U;
            __Vtemp1783[0xaU] = 0U;
            __Vtemp1783[0xbU] = 0U;
            __Vtemp1783[0xcU] = 0U;
            __Vtemp1783[0xdU] = 0U;
            __Vtemp1783[0xeU] = 0U;
            __Vtemp1783[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1784, __Vtemp1783, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1784[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_189 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1785[0U] = 1U;
            __Vtemp1785[1U] = 0U;
            __Vtemp1785[2U] = 0U;
            __Vtemp1785[3U] = 0U;
            __Vtemp1785[4U] = 0U;
            __Vtemp1785[5U] = 0U;
            __Vtemp1785[6U] = 0U;
            __Vtemp1785[7U] = 0U;
            __Vtemp1785[8U] = 0U;
            __Vtemp1785[9U] = 0U;
            __Vtemp1785[0xaU] = 0U;
            __Vtemp1785[0xbU] = 0U;
            __Vtemp1785[0xcU] = 0U;
            __Vtemp1785[0xdU] = 0U;
            __Vtemp1785[0xeU] = 0U;
            __Vtemp1785[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1786, __Vtemp1785, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1786[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_24 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1787[0U] = 1U;
            __Vtemp1787[1U] = 0U;
            __Vtemp1787[2U] = 0U;
            __Vtemp1787[3U] = 0U;
            __Vtemp1787[4U] = 0U;
            __Vtemp1787[5U] = 0U;
            __Vtemp1787[6U] = 0U;
            __Vtemp1787[7U] = 0U;
            __Vtemp1787[8U] = 0U;
            __Vtemp1787[9U] = 0U;
            __Vtemp1787[0xaU] = 0U;
            __Vtemp1787[0xbU] = 0U;
            __Vtemp1787[0xcU] = 0U;
            __Vtemp1787[0xdU] = 0U;
            __Vtemp1787[0xeU] = 0U;
            __Vtemp1787[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1788, __Vtemp1787, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1788[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_115 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1789[0U] = 1U;
            __Vtemp1789[1U] = 0U;
            __Vtemp1789[2U] = 0U;
            __Vtemp1789[3U] = 0U;
            __Vtemp1789[4U] = 0U;
            __Vtemp1789[5U] = 0U;
            __Vtemp1789[6U] = 0U;
            __Vtemp1789[7U] = 0U;
            __Vtemp1789[8U] = 0U;
            __Vtemp1789[9U] = 0U;
            __Vtemp1789[0xaU] = 0U;
            __Vtemp1789[0xbU] = 0U;
            __Vtemp1789[0xcU] = 0U;
            __Vtemp1789[0xdU] = 0U;
            __Vtemp1789[0xeU] = 0U;
            __Vtemp1789[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1790, __Vtemp1789, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1790[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_28 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1791[0U] = 1U;
            __Vtemp1791[1U] = 0U;
            __Vtemp1791[2U] = 0U;
            __Vtemp1791[3U] = 0U;
            __Vtemp1791[4U] = 0U;
            __Vtemp1791[5U] = 0U;
            __Vtemp1791[6U] = 0U;
            __Vtemp1791[7U] = 0U;
            __Vtemp1791[8U] = 0U;
            __Vtemp1791[9U] = 0U;
            __Vtemp1791[0xaU] = 0U;
            __Vtemp1791[0xbU] = 0U;
            __Vtemp1791[0xcU] = 0U;
            __Vtemp1791[0xdU] = 0U;
            __Vtemp1791[0xeU] = 0U;
            __Vtemp1791[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1792, __Vtemp1791, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1792[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_180 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1793[0U] = 1U;
            __Vtemp1793[1U] = 0U;
            __Vtemp1793[2U] = 0U;
            __Vtemp1793[3U] = 0U;
            __Vtemp1793[4U] = 0U;
            __Vtemp1793[5U] = 0U;
            __Vtemp1793[6U] = 0U;
            __Vtemp1793[7U] = 0U;
            __Vtemp1793[8U] = 0U;
            __Vtemp1793[9U] = 0U;
            __Vtemp1793[0xaU] = 0U;
            __Vtemp1793[0xbU] = 0U;
            __Vtemp1793[0xcU] = 0U;
            __Vtemp1793[0xdU] = 0U;
            __Vtemp1793[0xeU] = 0U;
            __Vtemp1793[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1794, __Vtemp1793, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1794[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_15 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1795[0U] = 1U;
            __Vtemp1795[1U] = 0U;
            __Vtemp1795[2U] = 0U;
            __Vtemp1795[3U] = 0U;
            __Vtemp1795[4U] = 0U;
            __Vtemp1795[5U] = 0U;
            __Vtemp1795[6U] = 0U;
            __Vtemp1795[7U] = 0U;
            __Vtemp1795[8U] = 0U;
            __Vtemp1795[9U] = 0U;
            __Vtemp1795[0xaU] = 0U;
            __Vtemp1795[0xbU] = 0U;
            __Vtemp1795[0xcU] = 0U;
            __Vtemp1795[0xdU] = 0U;
            __Vtemp1795[0xeU] = 0U;
            __Vtemp1795[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1796, __Vtemp1795, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1796[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_106 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1797[0U] = 1U;
            __Vtemp1797[1U] = 0U;
            __Vtemp1797[2U] = 0U;
            __Vtemp1797[3U] = 0U;
            __Vtemp1797[4U] = 0U;
            __Vtemp1797[5U] = 0U;
            __Vtemp1797[6U] = 0U;
            __Vtemp1797[7U] = 0U;
            __Vtemp1797[8U] = 0U;
            __Vtemp1797[9U] = 0U;
            __Vtemp1797[0xaU] = 0U;
            __Vtemp1797[0xbU] = 0U;
            __Vtemp1797[0xcU] = 0U;
            __Vtemp1797[0xdU] = 0U;
            __Vtemp1797[0xeU] = 0U;
            __Vtemp1797[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1798, __Vtemp1797, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1798[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_23 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1799[0U] = 1U;
            __Vtemp1799[1U] = 0U;
            __Vtemp1799[2U] = 0U;
            __Vtemp1799[3U] = 0U;
            __Vtemp1799[4U] = 0U;
            __Vtemp1799[5U] = 0U;
            __Vtemp1799[6U] = 0U;
            __Vtemp1799[7U] = 0U;
            __Vtemp1799[8U] = 0U;
            __Vtemp1799[9U] = 0U;
            __Vtemp1799[0xaU] = 0U;
            __Vtemp1799[0xbU] = 0U;
            __Vtemp1799[0xcU] = 0U;
            __Vtemp1799[0xdU] = 0U;
            __Vtemp1799[0xeU] = 0U;
            __Vtemp1799[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1800, __Vtemp1799, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1800[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_175 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1801[0U] = 1U;
            __Vtemp1801[1U] = 0U;
            __Vtemp1801[2U] = 0U;
            __Vtemp1801[3U] = 0U;
            __Vtemp1801[4U] = 0U;
            __Vtemp1801[5U] = 0U;
            __Vtemp1801[6U] = 0U;
            __Vtemp1801[7U] = 0U;
            __Vtemp1801[8U] = 0U;
            __Vtemp1801[9U] = 0U;
            __Vtemp1801[0xaU] = 0U;
            __Vtemp1801[0xbU] = 0U;
            __Vtemp1801[0xcU] = 0U;
            __Vtemp1801[0xdU] = 0U;
            __Vtemp1801[0xeU] = 0U;
            __Vtemp1801[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1802, __Vtemp1801, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1802[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_10 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1803[0U] = 1U;
            __Vtemp1803[1U] = 0U;
            __Vtemp1803[2U] = 0U;
            __Vtemp1803[3U] = 0U;
            __Vtemp1803[4U] = 0U;
            __Vtemp1803[5U] = 0U;
            __Vtemp1803[6U] = 0U;
            __Vtemp1803[7U] = 0U;
            __Vtemp1803[8U] = 0U;
            __Vtemp1803[9U] = 0U;
            __Vtemp1803[0xaU] = 0U;
            __Vtemp1803[0xbU] = 0U;
            __Vtemp1803[0xcU] = 0U;
            __Vtemp1803[0xdU] = 0U;
            __Vtemp1803[0xeU] = 0U;
            __Vtemp1803[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1804, __Vtemp1803, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1804[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_101 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1805[0U] = 1U;
            __Vtemp1805[1U] = 0U;
            __Vtemp1805[2U] = 0U;
            __Vtemp1805[3U] = 0U;
            __Vtemp1805[4U] = 0U;
            __Vtemp1805[5U] = 0U;
            __Vtemp1805[6U] = 0U;
            __Vtemp1805[7U] = 0U;
            __Vtemp1805[8U] = 0U;
            __Vtemp1805[9U] = 0U;
            __Vtemp1805[0xaU] = 0U;
            __Vtemp1805[0xbU] = 0U;
            __Vtemp1805[0xcU] = 0U;
            __Vtemp1805[0xdU] = 0U;
            __Vtemp1805[0xeU] = 0U;
            __Vtemp1805[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1806, __Vtemp1805, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1806[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_26 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1807[0U] = 1U;
            __Vtemp1807[1U] = 0U;
            __Vtemp1807[2U] = 0U;
            __Vtemp1807[3U] = 0U;
            __Vtemp1807[4U] = 0U;
            __Vtemp1807[5U] = 0U;
            __Vtemp1807[6U] = 0U;
            __Vtemp1807[7U] = 0U;
            __Vtemp1807[8U] = 0U;
            __Vtemp1807[9U] = 0U;
            __Vtemp1807[0xaU] = 0U;
            __Vtemp1807[0xbU] = 0U;
            __Vtemp1807[0xcU] = 0U;
            __Vtemp1807[0xdU] = 0U;
            __Vtemp1807[0xeU] = 0U;
            __Vtemp1807[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1808, __Vtemp1807, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1808[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_178 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1809[0U] = 1U;
            __Vtemp1809[1U] = 0U;
            __Vtemp1809[2U] = 0U;
            __Vtemp1809[3U] = 0U;
            __Vtemp1809[4U] = 0U;
            __Vtemp1809[5U] = 0U;
            __Vtemp1809[6U] = 0U;
            __Vtemp1809[7U] = 0U;
            __Vtemp1809[8U] = 0U;
            __Vtemp1809[9U] = 0U;
            __Vtemp1809[0xaU] = 0U;
            __Vtemp1809[0xbU] = 0U;
            __Vtemp1809[0xcU] = 0U;
            __Vtemp1809[0xdU] = 0U;
            __Vtemp1809[0xeU] = 0U;
            __Vtemp1809[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1810, __Vtemp1809, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1810[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_13 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1811[0U] = 1U;
            __Vtemp1811[1U] = 0U;
            __Vtemp1811[2U] = 0U;
            __Vtemp1811[3U] = 0U;
            __Vtemp1811[4U] = 0U;
            __Vtemp1811[5U] = 0U;
            __Vtemp1811[6U] = 0U;
            __Vtemp1811[7U] = 0U;
            __Vtemp1811[8U] = 0U;
            __Vtemp1811[9U] = 0U;
            __Vtemp1811[0xaU] = 0U;
            __Vtemp1811[0xbU] = 0U;
            __Vtemp1811[0xcU] = 0U;
            __Vtemp1811[0xdU] = 0U;
            __Vtemp1811[0xeU] = 0U;
            __Vtemp1811[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1812, __Vtemp1811, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1812[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_104 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1813[0U] = 1U;
            __Vtemp1813[1U] = 0U;
            __Vtemp1813[2U] = 0U;
            __Vtemp1813[3U] = 0U;
            __Vtemp1813[4U] = 0U;
            __Vtemp1813[5U] = 0U;
            __Vtemp1813[6U] = 0U;
            __Vtemp1813[7U] = 0U;
            __Vtemp1813[8U] = 0U;
            __Vtemp1813[9U] = 0U;
            __Vtemp1813[0xaU] = 0U;
            __Vtemp1813[0xbU] = 0U;
            __Vtemp1813[0xcU] = 0U;
            __Vtemp1813[0xdU] = 0U;
            __Vtemp1813[0xeU] = 0U;
            __Vtemp1813[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1814, __Vtemp1813, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1814[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_27 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1815[0U] = 1U;
            __Vtemp1815[1U] = 0U;
            __Vtemp1815[2U] = 0U;
            __Vtemp1815[3U] = 0U;
            __Vtemp1815[4U] = 0U;
            __Vtemp1815[5U] = 0U;
            __Vtemp1815[6U] = 0U;
            __Vtemp1815[7U] = 0U;
            __Vtemp1815[8U] = 0U;
            __Vtemp1815[9U] = 0U;
            __Vtemp1815[0xaU] = 0U;
            __Vtemp1815[0xbU] = 0U;
            __Vtemp1815[0xcU] = 0U;
            __Vtemp1815[0xdU] = 0U;
            __Vtemp1815[0xeU] = 0U;
            __Vtemp1815[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1816, __Vtemp1815, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1816[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_179 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
