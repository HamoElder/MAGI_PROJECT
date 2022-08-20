// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__72(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__72\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1817[16];
    WData/*511:0*/ __Vtemp1818[16];
    WData/*511:0*/ __Vtemp1819[16];
    WData/*511:0*/ __Vtemp1820[16];
    WData/*511:0*/ __Vtemp1821[16];
    WData/*511:0*/ __Vtemp1822[16];
    WData/*511:0*/ __Vtemp1823[16];
    WData/*511:0*/ __Vtemp1824[16];
    WData/*511:0*/ __Vtemp1825[16];
    WData/*511:0*/ __Vtemp1826[16];
    WData/*511:0*/ __Vtemp1827[16];
    WData/*511:0*/ __Vtemp1828[16];
    WData/*511:0*/ __Vtemp1829[16];
    WData/*511:0*/ __Vtemp1830[16];
    WData/*511:0*/ __Vtemp1831[16];
    WData/*511:0*/ __Vtemp1832[16];
    WData/*511:0*/ __Vtemp1833[16];
    WData/*511:0*/ __Vtemp1834[16];
    WData/*511:0*/ __Vtemp1835[16];
    WData/*511:0*/ __Vtemp1836[16];
    WData/*511:0*/ __Vtemp1837[16];
    WData/*511:0*/ __Vtemp1838[16];
    WData/*511:0*/ __Vtemp1839[16];
    WData/*511:0*/ __Vtemp1840[16];
    WData/*511:0*/ __Vtemp1841[16];
    WData/*511:0*/ __Vtemp1842[16];
    WData/*511:0*/ __Vtemp1843[16];
    WData/*511:0*/ __Vtemp1844[16];
    WData/*511:0*/ __Vtemp1845[16];
    WData/*511:0*/ __Vtemp1846[16];
    WData/*511:0*/ __Vtemp1847[16];
    WData/*511:0*/ __Vtemp1848[16];
    WData/*511:0*/ __Vtemp1849[16];
    WData/*511:0*/ __Vtemp1850[16];
    WData/*511:0*/ __Vtemp1851[16];
    WData/*511:0*/ __Vtemp1852[16];
    WData/*511:0*/ __Vtemp1853[16];
    WData/*511:0*/ __Vtemp1854[16];
    WData/*511:0*/ __Vtemp1855[16];
    WData/*511:0*/ __Vtemp1856[16];
    WData/*511:0*/ __Vtemp1857[16];
    WData/*511:0*/ __Vtemp1858[16];
    WData/*511:0*/ __Vtemp1859[16];
    WData/*511:0*/ __Vtemp1860[16];
    WData/*511:0*/ __Vtemp1861[16];
    WData/*511:0*/ __Vtemp1862[16];
    WData/*511:0*/ __Vtemp1863[16];
    WData/*511:0*/ __Vtemp1864[16];
    WData/*511:0*/ __Vtemp1865[16];
    WData/*511:0*/ __Vtemp1866[16];
    WData/*511:0*/ __Vtemp1867[16];
    WData/*511:0*/ __Vtemp1868[16];
    WData/*511:0*/ __Vtemp1869[16];
    WData/*511:0*/ __Vtemp1870[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1817[0U] = 1U;
            __Vtemp1817[1U] = 0U;
            __Vtemp1817[2U] = 0U;
            __Vtemp1817[3U] = 0U;
            __Vtemp1817[4U] = 0U;
            __Vtemp1817[5U] = 0U;
            __Vtemp1817[6U] = 0U;
            __Vtemp1817[7U] = 0U;
            __Vtemp1817[8U] = 0U;
            __Vtemp1817[9U] = 0U;
            __Vtemp1817[0xaU] = 0U;
            __Vtemp1817[0xbU] = 0U;
            __Vtemp1817[0xcU] = 0U;
            __Vtemp1817[0xdU] = 0U;
            __Vtemp1817[0xeU] = 0U;
            __Vtemp1817[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1818, __Vtemp1817, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1818[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_14 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1819[0U] = 1U;
            __Vtemp1819[1U] = 0U;
            __Vtemp1819[2U] = 0U;
            __Vtemp1819[3U] = 0U;
            __Vtemp1819[4U] = 0U;
            __Vtemp1819[5U] = 0U;
            __Vtemp1819[6U] = 0U;
            __Vtemp1819[7U] = 0U;
            __Vtemp1819[8U] = 0U;
            __Vtemp1819[9U] = 0U;
            __Vtemp1819[0xaU] = 0U;
            __Vtemp1819[0xbU] = 0U;
            __Vtemp1819[0xcU] = 0U;
            __Vtemp1819[0xdU] = 0U;
            __Vtemp1819[0xeU] = 0U;
            __Vtemp1819[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1820, __Vtemp1819, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1820[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_105 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1821[0U] = 1U;
            __Vtemp1821[1U] = 0U;
            __Vtemp1821[2U] = 0U;
            __Vtemp1821[3U] = 0U;
            __Vtemp1821[4U] = 0U;
            __Vtemp1821[5U] = 0U;
            __Vtemp1821[6U] = 0U;
            __Vtemp1821[7U] = 0U;
            __Vtemp1821[8U] = 0U;
            __Vtemp1821[9U] = 0U;
            __Vtemp1821[0xaU] = 0U;
            __Vtemp1821[0xbU] = 0U;
            __Vtemp1821[0xcU] = 0U;
            __Vtemp1821[0xdU] = 0U;
            __Vtemp1821[0xeU] = 0U;
            __Vtemp1821[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1822, __Vtemp1821, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1822[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_33 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1823[0U] = 1U;
            __Vtemp1823[1U] = 0U;
            __Vtemp1823[2U] = 0U;
            __Vtemp1823[3U] = 0U;
            __Vtemp1823[4U] = 0U;
            __Vtemp1823[5U] = 0U;
            __Vtemp1823[6U] = 0U;
            __Vtemp1823[7U] = 0U;
            __Vtemp1823[8U] = 0U;
            __Vtemp1823[9U] = 0U;
            __Vtemp1823[0xaU] = 0U;
            __Vtemp1823[0xbU] = 0U;
            __Vtemp1823[0xcU] = 0U;
            __Vtemp1823[0xdU] = 0U;
            __Vtemp1823[0xeU] = 0U;
            __Vtemp1823[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1824, __Vtemp1823, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1824[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_185 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1825[0U] = 1U;
            __Vtemp1825[1U] = 0U;
            __Vtemp1825[2U] = 0U;
            __Vtemp1825[3U] = 0U;
            __Vtemp1825[4U] = 0U;
            __Vtemp1825[5U] = 0U;
            __Vtemp1825[6U] = 0U;
            __Vtemp1825[7U] = 0U;
            __Vtemp1825[8U] = 0U;
            __Vtemp1825[9U] = 0U;
            __Vtemp1825[0xaU] = 0U;
            __Vtemp1825[0xbU] = 0U;
            __Vtemp1825[0xcU] = 0U;
            __Vtemp1825[0xdU] = 0U;
            __Vtemp1825[0xeU] = 0U;
            __Vtemp1825[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1826, __Vtemp1825, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1826[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_20 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1827[0U] = 1U;
            __Vtemp1827[1U] = 0U;
            __Vtemp1827[2U] = 0U;
            __Vtemp1827[3U] = 0U;
            __Vtemp1827[4U] = 0U;
            __Vtemp1827[5U] = 0U;
            __Vtemp1827[6U] = 0U;
            __Vtemp1827[7U] = 0U;
            __Vtemp1827[8U] = 0U;
            __Vtemp1827[9U] = 0U;
            __Vtemp1827[0xaU] = 0U;
            __Vtemp1827[0xbU] = 0U;
            __Vtemp1827[0xcU] = 0U;
            __Vtemp1827[0xdU] = 0U;
            __Vtemp1827[0xeU] = 0U;
            __Vtemp1827[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1828, __Vtemp1827, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1828[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_111 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1829[0U] = 1U;
            __Vtemp1829[1U] = 0U;
            __Vtemp1829[2U] = 0U;
            __Vtemp1829[3U] = 0U;
            __Vtemp1829[4U] = 0U;
            __Vtemp1829[5U] = 0U;
            __Vtemp1829[6U] = 0U;
            __Vtemp1829[7U] = 0U;
            __Vtemp1829[8U] = 0U;
            __Vtemp1829[9U] = 0U;
            __Vtemp1829[0xaU] = 0U;
            __Vtemp1829[0xbU] = 0U;
            __Vtemp1829[0xcU] = 0U;
            __Vtemp1829[0xdU] = 0U;
            __Vtemp1829[0xeU] = 0U;
            __Vtemp1829[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1830, __Vtemp1829, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1830[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_3 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1831[0U] = 1U;
            __Vtemp1831[1U] = 0U;
            __Vtemp1831[2U] = 0U;
            __Vtemp1831[3U] = 0U;
            __Vtemp1831[4U] = 0U;
            __Vtemp1831[5U] = 0U;
            __Vtemp1831[6U] = 0U;
            __Vtemp1831[7U] = 0U;
            __Vtemp1831[8U] = 0U;
            __Vtemp1831[9U] = 0U;
            __Vtemp1831[0xaU] = 0U;
            __Vtemp1831[0xbU] = 0U;
            __Vtemp1831[0xcU] = 0U;
            __Vtemp1831[0xdU] = 0U;
            __Vtemp1831[0xeU] = 0U;
            __Vtemp1831[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1832, __Vtemp1831, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1832[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_155 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1833[0U] = 1U;
            __Vtemp1833[1U] = 0U;
            __Vtemp1833[2U] = 0U;
            __Vtemp1833[3U] = 0U;
            __Vtemp1833[4U] = 0U;
            __Vtemp1833[5U] = 0U;
            __Vtemp1833[6U] = 0U;
            __Vtemp1833[7U] = 0U;
            __Vtemp1833[8U] = 0U;
            __Vtemp1833[9U] = 0U;
            __Vtemp1833[0xaU] = 0U;
            __Vtemp1833[0xbU] = 0U;
            __Vtemp1833[0xcU] = 0U;
            __Vtemp1833[0xdU] = 0U;
            __Vtemp1833[0xeU] = 0U;
            __Vtemp1833[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1834, __Vtemp1833, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1834[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_39 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1835[0U] = 1U;
            __Vtemp1835[1U] = 0U;
            __Vtemp1835[2U] = 0U;
            __Vtemp1835[3U] = 0U;
            __Vtemp1835[4U] = 0U;
            __Vtemp1835[5U] = 0U;
            __Vtemp1835[6U] = 0U;
            __Vtemp1835[7U] = 0U;
            __Vtemp1835[8U] = 0U;
            __Vtemp1835[9U] = 0U;
            __Vtemp1835[0xaU] = 0U;
            __Vtemp1835[0xbU] = 0U;
            __Vtemp1835[0xcU] = 0U;
            __Vtemp1835[0xdU] = 0U;
            __Vtemp1835[0xeU] = 0U;
            __Vtemp1835[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1836, __Vtemp1835, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1836[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_191 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1837[0U] = 1U;
            __Vtemp1837[1U] = 0U;
            __Vtemp1837[2U] = 0U;
            __Vtemp1837[3U] = 0U;
            __Vtemp1837[4U] = 0U;
            __Vtemp1837[5U] = 0U;
            __Vtemp1837[6U] = 0U;
            __Vtemp1837[7U] = 0U;
            __Vtemp1837[8U] = 0U;
            __Vtemp1837[9U] = 0U;
            __Vtemp1837[0xaU] = 0U;
            __Vtemp1837[0xbU] = 0U;
            __Vtemp1837[0xcU] = 0U;
            __Vtemp1837[0xdU] = 0U;
            __Vtemp1837[0xeU] = 0U;
            __Vtemp1837[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1838, __Vtemp1837, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1838[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_26 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1839[0U] = 1U;
            __Vtemp1839[1U] = 0U;
            __Vtemp1839[2U] = 0U;
            __Vtemp1839[3U] = 0U;
            __Vtemp1839[4U] = 0U;
            __Vtemp1839[5U] = 0U;
            __Vtemp1839[6U] = 0U;
            __Vtemp1839[7U] = 0U;
            __Vtemp1839[8U] = 0U;
            __Vtemp1839[9U] = 0U;
            __Vtemp1839[0xaU] = 0U;
            __Vtemp1839[0xbU] = 0U;
            __Vtemp1839[0xcU] = 0U;
            __Vtemp1839[0xdU] = 0U;
            __Vtemp1839[0xeU] = 0U;
            __Vtemp1839[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1840, __Vtemp1839, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1840[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_117 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1841[0U] = 1U;
            __Vtemp1841[1U] = 0U;
            __Vtemp1841[2U] = 0U;
            __Vtemp1841[3U] = 0U;
            __Vtemp1841[4U] = 0U;
            __Vtemp1841[5U] = 0U;
            __Vtemp1841[6U] = 0U;
            __Vtemp1841[7U] = 0U;
            __Vtemp1841[8U] = 0U;
            __Vtemp1841[9U] = 0U;
            __Vtemp1841[0xaU] = 0U;
            __Vtemp1841[0xbU] = 0U;
            __Vtemp1841[0xcU] = 0U;
            __Vtemp1841[0xdU] = 0U;
            __Vtemp1841[0xeU] = 0U;
            __Vtemp1841[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1842, __Vtemp1841, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1842[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_35 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1843[0U] = 1U;
            __Vtemp1843[1U] = 0U;
            __Vtemp1843[2U] = 0U;
            __Vtemp1843[3U] = 0U;
            __Vtemp1843[4U] = 0U;
            __Vtemp1843[5U] = 0U;
            __Vtemp1843[6U] = 0U;
            __Vtemp1843[7U] = 0U;
            __Vtemp1843[8U] = 0U;
            __Vtemp1843[9U] = 0U;
            __Vtemp1843[0xaU] = 0U;
            __Vtemp1843[0xbU] = 0U;
            __Vtemp1843[0xcU] = 0U;
            __Vtemp1843[0xdU] = 0U;
            __Vtemp1843[0xeU] = 0U;
            __Vtemp1843[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1844, __Vtemp1843, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1844[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_187 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1845[0U] = 1U;
            __Vtemp1845[1U] = 0U;
            __Vtemp1845[2U] = 0U;
            __Vtemp1845[3U] = 0U;
            __Vtemp1845[4U] = 0U;
            __Vtemp1845[5U] = 0U;
            __Vtemp1845[6U] = 0U;
            __Vtemp1845[7U] = 0U;
            __Vtemp1845[8U] = 0U;
            __Vtemp1845[9U] = 0U;
            __Vtemp1845[0xaU] = 0U;
            __Vtemp1845[0xbU] = 0U;
            __Vtemp1845[0xcU] = 0U;
            __Vtemp1845[0xdU] = 0U;
            __Vtemp1845[0xeU] = 0U;
            __Vtemp1845[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1846, __Vtemp1845, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1846[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_22 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1847[0U] = 1U;
            __Vtemp1847[1U] = 0U;
            __Vtemp1847[2U] = 0U;
            __Vtemp1847[3U] = 0U;
            __Vtemp1847[4U] = 0U;
            __Vtemp1847[5U] = 0U;
            __Vtemp1847[6U] = 0U;
            __Vtemp1847[7U] = 0U;
            __Vtemp1847[8U] = 0U;
            __Vtemp1847[9U] = 0U;
            __Vtemp1847[0xaU] = 0U;
            __Vtemp1847[0xbU] = 0U;
            __Vtemp1847[0xcU] = 0U;
            __Vtemp1847[0xdU] = 0U;
            __Vtemp1847[0xeU] = 0U;
            __Vtemp1847[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1848, __Vtemp1847, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1848[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_113 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1849[0U] = 1U;
            __Vtemp1849[1U] = 0U;
            __Vtemp1849[2U] = 0U;
            __Vtemp1849[3U] = 0U;
            __Vtemp1849[4U] = 0U;
            __Vtemp1849[5U] = 0U;
            __Vtemp1849[6U] = 0U;
            __Vtemp1849[7U] = 0U;
            __Vtemp1849[8U] = 0U;
            __Vtemp1849[9U] = 0U;
            __Vtemp1849[0xaU] = 0U;
            __Vtemp1849[0xbU] = 0U;
            __Vtemp1849[0xcU] = 0U;
            __Vtemp1849[0xdU] = 0U;
            __Vtemp1849[0xeU] = 0U;
            __Vtemp1849[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1850, __Vtemp1849, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1850[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_36 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1851[0U] = 1U;
            __Vtemp1851[1U] = 0U;
            __Vtemp1851[2U] = 0U;
            __Vtemp1851[3U] = 0U;
            __Vtemp1851[4U] = 0U;
            __Vtemp1851[5U] = 0U;
            __Vtemp1851[6U] = 0U;
            __Vtemp1851[7U] = 0U;
            __Vtemp1851[8U] = 0U;
            __Vtemp1851[9U] = 0U;
            __Vtemp1851[0xaU] = 0U;
            __Vtemp1851[0xbU] = 0U;
            __Vtemp1851[0xcU] = 0U;
            __Vtemp1851[0xdU] = 0U;
            __Vtemp1851[0xeU] = 0U;
            __Vtemp1851[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1852, __Vtemp1851, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1852[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_188 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1853[0U] = 1U;
            __Vtemp1853[1U] = 0U;
            __Vtemp1853[2U] = 0U;
            __Vtemp1853[3U] = 0U;
            __Vtemp1853[4U] = 0U;
            __Vtemp1853[5U] = 0U;
            __Vtemp1853[6U] = 0U;
            __Vtemp1853[7U] = 0U;
            __Vtemp1853[8U] = 0U;
            __Vtemp1853[9U] = 0U;
            __Vtemp1853[0xaU] = 0U;
            __Vtemp1853[0xbU] = 0U;
            __Vtemp1853[0xcU] = 0U;
            __Vtemp1853[0xdU] = 0U;
            __Vtemp1853[0xeU] = 0U;
            __Vtemp1853[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1854, __Vtemp1853, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1854[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_23 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1855[0U] = 1U;
            __Vtemp1855[1U] = 0U;
            __Vtemp1855[2U] = 0U;
            __Vtemp1855[3U] = 0U;
            __Vtemp1855[4U] = 0U;
            __Vtemp1855[5U] = 0U;
            __Vtemp1855[6U] = 0U;
            __Vtemp1855[7U] = 0U;
            __Vtemp1855[8U] = 0U;
            __Vtemp1855[9U] = 0U;
            __Vtemp1855[0xaU] = 0U;
            __Vtemp1855[0xbU] = 0U;
            __Vtemp1855[0xcU] = 0U;
            __Vtemp1855[0xdU] = 0U;
            __Vtemp1855[0xeU] = 0U;
            __Vtemp1855[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1856, __Vtemp1855, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1856[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_114 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1857[0U] = 1U;
            __Vtemp1857[1U] = 0U;
            __Vtemp1857[2U] = 0U;
            __Vtemp1857[3U] = 0U;
            __Vtemp1857[4U] = 0U;
            __Vtemp1857[5U] = 0U;
            __Vtemp1857[6U] = 0U;
            __Vtemp1857[7U] = 0U;
            __Vtemp1857[8U] = 0U;
            __Vtemp1857[9U] = 0U;
            __Vtemp1857[0xaU] = 0U;
            __Vtemp1857[0xbU] = 0U;
            __Vtemp1857[0xcU] = 0U;
            __Vtemp1857[0xdU] = 0U;
            __Vtemp1857[0xeU] = 0U;
            __Vtemp1857[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1858, __Vtemp1857, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1858[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_12 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1859[0U] = 1U;
            __Vtemp1859[1U] = 0U;
            __Vtemp1859[2U] = 0U;
            __Vtemp1859[3U] = 0U;
            __Vtemp1859[4U] = 0U;
            __Vtemp1859[5U] = 0U;
            __Vtemp1859[6U] = 0U;
            __Vtemp1859[7U] = 0U;
            __Vtemp1859[8U] = 0U;
            __Vtemp1859[9U] = 0U;
            __Vtemp1859[0xaU] = 0U;
            __Vtemp1859[0xbU] = 0U;
            __Vtemp1859[0xcU] = 0U;
            __Vtemp1859[0xdU] = 0U;
            __Vtemp1859[0xeU] = 0U;
            __Vtemp1859[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1860, __Vtemp1859, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1860[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_164 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1861[0U] = 1U;
            __Vtemp1861[1U] = 0U;
            __Vtemp1861[2U] = 0U;
            __Vtemp1861[3U] = 0U;
            __Vtemp1861[4U] = 0U;
            __Vtemp1861[5U] = 0U;
            __Vtemp1861[6U] = 0U;
            __Vtemp1861[7U] = 0U;
            __Vtemp1861[8U] = 0U;
            __Vtemp1861[9U] = 0U;
            __Vtemp1861[0xaU] = 0U;
            __Vtemp1861[0xbU] = 0U;
            __Vtemp1861[0xcU] = 0U;
            __Vtemp1861[0xdU] = 0U;
            __Vtemp1861[0xeU] = 0U;
            __Vtemp1861[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1862, __Vtemp1861, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1862[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_13 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1863[0U] = 1U;
            __Vtemp1863[1U] = 0U;
            __Vtemp1863[2U] = 0U;
            __Vtemp1863[3U] = 0U;
            __Vtemp1863[4U] = 0U;
            __Vtemp1863[5U] = 0U;
            __Vtemp1863[6U] = 0U;
            __Vtemp1863[7U] = 0U;
            __Vtemp1863[8U] = 0U;
            __Vtemp1863[9U] = 0U;
            __Vtemp1863[0xaU] = 0U;
            __Vtemp1863[0xbU] = 0U;
            __Vtemp1863[0xcU] = 0U;
            __Vtemp1863[0xdU] = 0U;
            __Vtemp1863[0xeU] = 0U;
            __Vtemp1863[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1864, __Vtemp1863, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1864[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_165 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1865[0U] = 1U;
            __Vtemp1865[1U] = 0U;
            __Vtemp1865[2U] = 0U;
            __Vtemp1865[3U] = 0U;
            __Vtemp1865[4U] = 0U;
            __Vtemp1865[5U] = 0U;
            __Vtemp1865[6U] = 0U;
            __Vtemp1865[7U] = 0U;
            __Vtemp1865[8U] = 0U;
            __Vtemp1865[9U] = 0U;
            __Vtemp1865[0xaU] = 0U;
            __Vtemp1865[0xbU] = 0U;
            __Vtemp1865[0xcU] = 0U;
            __Vtemp1865[0xdU] = 0U;
            __Vtemp1865[0xeU] = 0U;
            __Vtemp1865[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1866, __Vtemp1865, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1866[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_14 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1867[0U] = 1U;
            __Vtemp1867[1U] = 0U;
            __Vtemp1867[2U] = 0U;
            __Vtemp1867[3U] = 0U;
            __Vtemp1867[4U] = 0U;
            __Vtemp1867[5U] = 0U;
            __Vtemp1867[6U] = 0U;
            __Vtemp1867[7U] = 0U;
            __Vtemp1867[8U] = 0U;
            __Vtemp1867[9U] = 0U;
            __Vtemp1867[0xaU] = 0U;
            __Vtemp1867[0xbU] = 0U;
            __Vtemp1867[0xcU] = 0U;
            __Vtemp1867[0xdU] = 0U;
            __Vtemp1867[0xeU] = 0U;
            __Vtemp1867[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1868, __Vtemp1867, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1868[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_166 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1869[0U] = 1U;
            __Vtemp1869[1U] = 0U;
            __Vtemp1869[2U] = 0U;
            __Vtemp1869[3U] = 0U;
            __Vtemp1869[4U] = 0U;
            __Vtemp1869[5U] = 0U;
            __Vtemp1869[6U] = 0U;
            __Vtemp1869[7U] = 0U;
            __Vtemp1869[8U] = 0U;
            __Vtemp1869[9U] = 0U;
            __Vtemp1869[0xaU] = 0U;
            __Vtemp1869[0xbU] = 0U;
            __Vtemp1869[0xcU] = 0U;
            __Vtemp1869[0xdU] = 0U;
            __Vtemp1869[0xeU] = 0U;
            __Vtemp1869[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1870, __Vtemp1869, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1870[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_1 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__73(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__73\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1871[16];
    WData/*511:0*/ __Vtemp1872[16];
    WData/*511:0*/ __Vtemp1873[16];
    WData/*511:0*/ __Vtemp1874[16];
    WData/*511:0*/ __Vtemp1875[16];
    WData/*511:0*/ __Vtemp1876[16];
    WData/*511:0*/ __Vtemp1877[16];
    WData/*511:0*/ __Vtemp1878[16];
    WData/*511:0*/ __Vtemp1879[16];
    WData/*511:0*/ __Vtemp1880[16];
    WData/*511:0*/ __Vtemp1881[16];
    WData/*511:0*/ __Vtemp1882[16];
    WData/*511:0*/ __Vtemp1883[16];
    WData/*511:0*/ __Vtemp1884[16];
    WData/*511:0*/ __Vtemp1885[16];
    WData/*511:0*/ __Vtemp1886[16];
    WData/*511:0*/ __Vtemp1887[16];
    WData/*511:0*/ __Vtemp1888[16];
    WData/*511:0*/ __Vtemp1889[16];
    WData/*511:0*/ __Vtemp1890[16];
    WData/*511:0*/ __Vtemp1891[16];
    WData/*511:0*/ __Vtemp1892[16];
    WData/*511:0*/ __Vtemp1893[16];
    WData/*511:0*/ __Vtemp1894[16];
    WData/*511:0*/ __Vtemp1895[16];
    WData/*511:0*/ __Vtemp1896[16];
    WData/*511:0*/ __Vtemp1897[16];
    WData/*511:0*/ __Vtemp1898[16];
    WData/*511:0*/ __Vtemp1899[16];
    WData/*511:0*/ __Vtemp1900[16];
    WData/*511:0*/ __Vtemp1901[16];
    WData/*511:0*/ __Vtemp1902[16];
    WData/*511:0*/ __Vtemp1903[16];
    WData/*511:0*/ __Vtemp1904[16];
    WData/*511:0*/ __Vtemp1905[16];
    WData/*511:0*/ __Vtemp1906[16];
    WData/*511:0*/ __Vtemp1907[16];
    WData/*511:0*/ __Vtemp1908[16];
    WData/*511:0*/ __Vtemp1909[16];
    WData/*511:0*/ __Vtemp1910[16];
    WData/*511:0*/ __Vtemp1911[16];
    WData/*511:0*/ __Vtemp1912[16];
    WData/*511:0*/ __Vtemp1913[16];
    WData/*511:0*/ __Vtemp1914[16];
    WData/*511:0*/ __Vtemp1915[16];
    WData/*511:0*/ __Vtemp1916[16];
    WData/*511:0*/ __Vtemp1917[16];
    WData/*511:0*/ __Vtemp1918[16];
    WData/*511:0*/ __Vtemp1919[16];
    WData/*511:0*/ __Vtemp1920[16];
    WData/*511:0*/ __Vtemp1921[16];
    WData/*511:0*/ __Vtemp1922[16];
    WData/*511:0*/ __Vtemp1923[16];
    WData/*511:0*/ __Vtemp1924[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1871[0U] = 1U;
            __Vtemp1871[1U] = 0U;
            __Vtemp1871[2U] = 0U;
            __Vtemp1871[3U] = 0U;
            __Vtemp1871[4U] = 0U;
            __Vtemp1871[5U] = 0U;
            __Vtemp1871[6U] = 0U;
            __Vtemp1871[7U] = 0U;
            __Vtemp1871[8U] = 0U;
            __Vtemp1871[9U] = 0U;
            __Vtemp1871[0xaU] = 0U;
            __Vtemp1871[0xbU] = 0U;
            __Vtemp1871[0xcU] = 0U;
            __Vtemp1871[0xdU] = 0U;
            __Vtemp1871[0xeU] = 0U;
            __Vtemp1871[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1872, __Vtemp1871, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1872[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_15 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1873[0U] = 1U;
            __Vtemp1873[1U] = 0U;
            __Vtemp1873[2U] = 0U;
            __Vtemp1873[3U] = 0U;
            __Vtemp1873[4U] = 0U;
            __Vtemp1873[5U] = 0U;
            __Vtemp1873[6U] = 0U;
            __Vtemp1873[7U] = 0U;
            __Vtemp1873[8U] = 0U;
            __Vtemp1873[9U] = 0U;
            __Vtemp1873[0xaU] = 0U;
            __Vtemp1873[0xbU] = 0U;
            __Vtemp1873[0xcU] = 0U;
            __Vtemp1873[0xdU] = 0U;
            __Vtemp1873[0xeU] = 0U;
            __Vtemp1873[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1874, __Vtemp1873, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1874[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_167 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1875[0U] = 1U;
            __Vtemp1875[1U] = 0U;
            __Vtemp1875[2U] = 0U;
            __Vtemp1875[3U] = 0U;
            __Vtemp1875[4U] = 0U;
            __Vtemp1875[5U] = 0U;
            __Vtemp1875[6U] = 0U;
            __Vtemp1875[7U] = 0U;
            __Vtemp1875[8U] = 0U;
            __Vtemp1875[9U] = 0U;
            __Vtemp1875[0xaU] = 0U;
            __Vtemp1875[0xbU] = 0U;
            __Vtemp1875[0xcU] = 0U;
            __Vtemp1875[0xdU] = 0U;
            __Vtemp1875[0xeU] = 0U;
            __Vtemp1875[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1876, __Vtemp1875, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1876[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_2 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1877[0U] = 1U;
            __Vtemp1877[1U] = 0U;
            __Vtemp1877[2U] = 0U;
            __Vtemp1877[3U] = 0U;
            __Vtemp1877[4U] = 0U;
            __Vtemp1877[5U] = 0U;
            __Vtemp1877[6U] = 0U;
            __Vtemp1877[7U] = 0U;
            __Vtemp1877[8U] = 0U;
            __Vtemp1877[9U] = 0U;
            __Vtemp1877[0xaU] = 0U;
            __Vtemp1877[0xbU] = 0U;
            __Vtemp1877[0xcU] = 0U;
            __Vtemp1877[0xdU] = 0U;
            __Vtemp1877[0xeU] = 0U;
            __Vtemp1877[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1878, __Vtemp1877, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1878[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_16 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1879[0U] = 1U;
            __Vtemp1879[1U] = 0U;
            __Vtemp1879[2U] = 0U;
            __Vtemp1879[3U] = 0U;
            __Vtemp1879[4U] = 0U;
            __Vtemp1879[5U] = 0U;
            __Vtemp1879[6U] = 0U;
            __Vtemp1879[7U] = 0U;
            __Vtemp1879[8U] = 0U;
            __Vtemp1879[9U] = 0U;
            __Vtemp1879[0xaU] = 0U;
            __Vtemp1879[0xbU] = 0U;
            __Vtemp1879[0xcU] = 0U;
            __Vtemp1879[0xdU] = 0U;
            __Vtemp1879[0xeU] = 0U;
            __Vtemp1879[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1880, __Vtemp1879, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1880[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_168 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1881[0U] = 1U;
            __Vtemp1881[1U] = 0U;
            __Vtemp1881[2U] = 0U;
            __Vtemp1881[3U] = 0U;
            __Vtemp1881[4U] = 0U;
            __Vtemp1881[5U] = 0U;
            __Vtemp1881[6U] = 0U;
            __Vtemp1881[7U] = 0U;
            __Vtemp1881[8U] = 0U;
            __Vtemp1881[9U] = 0U;
            __Vtemp1881[0xaU] = 0U;
            __Vtemp1881[0xbU] = 0U;
            __Vtemp1881[0xcU] = 0U;
            __Vtemp1881[0xdU] = 0U;
            __Vtemp1881[0xeU] = 0U;
            __Vtemp1881[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1882, __Vtemp1881, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1882[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_3 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1883[0U] = 1U;
            __Vtemp1883[1U] = 0U;
            __Vtemp1883[2U] = 0U;
            __Vtemp1883[3U] = 0U;
            __Vtemp1883[4U] = 0U;
            __Vtemp1883[5U] = 0U;
            __Vtemp1883[6U] = 0U;
            __Vtemp1883[7U] = 0U;
            __Vtemp1883[8U] = 0U;
            __Vtemp1883[9U] = 0U;
            __Vtemp1883[0xaU] = 0U;
            __Vtemp1883[0xbU] = 0U;
            __Vtemp1883[0xcU] = 0U;
            __Vtemp1883[0xdU] = 0U;
            __Vtemp1883[0xeU] = 0U;
            __Vtemp1883[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1884, __Vtemp1883, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1884[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_17 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1885[0U] = 1U;
            __Vtemp1885[1U] = 0U;
            __Vtemp1885[2U] = 0U;
            __Vtemp1885[3U] = 0U;
            __Vtemp1885[4U] = 0U;
            __Vtemp1885[5U] = 0U;
            __Vtemp1885[6U] = 0U;
            __Vtemp1885[7U] = 0U;
            __Vtemp1885[8U] = 0U;
            __Vtemp1885[9U] = 0U;
            __Vtemp1885[0xaU] = 0U;
            __Vtemp1885[0xbU] = 0U;
            __Vtemp1885[0xcU] = 0U;
            __Vtemp1885[0xdU] = 0U;
            __Vtemp1885[0xeU] = 0U;
            __Vtemp1885[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1886, __Vtemp1885, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1886[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_169 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1887[0U] = 1U;
            __Vtemp1887[1U] = 0U;
            __Vtemp1887[2U] = 0U;
            __Vtemp1887[3U] = 0U;
            __Vtemp1887[4U] = 0U;
            __Vtemp1887[5U] = 0U;
            __Vtemp1887[6U] = 0U;
            __Vtemp1887[7U] = 0U;
            __Vtemp1887[8U] = 0U;
            __Vtemp1887[9U] = 0U;
            __Vtemp1887[0xaU] = 0U;
            __Vtemp1887[0xbU] = 0U;
            __Vtemp1887[0xcU] = 0U;
            __Vtemp1887[0xdU] = 0U;
            __Vtemp1887[0xeU] = 0U;
            __Vtemp1887[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1888, __Vtemp1887, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1888[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_4 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1889[0U] = 1U;
            __Vtemp1889[1U] = 0U;
            __Vtemp1889[2U] = 0U;
            __Vtemp1889[3U] = 0U;
            __Vtemp1889[4U] = 0U;
            __Vtemp1889[5U] = 0U;
            __Vtemp1889[6U] = 0U;
            __Vtemp1889[7U] = 0U;
            __Vtemp1889[8U] = 0U;
            __Vtemp1889[9U] = 0U;
            __Vtemp1889[0xaU] = 0U;
            __Vtemp1889[0xbU] = 0U;
            __Vtemp1889[0xcU] = 0U;
            __Vtemp1889[0xdU] = 0U;
            __Vtemp1889[0xeU] = 0U;
            __Vtemp1889[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1890, __Vtemp1889, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1890[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_18 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1891[0U] = 1U;
            __Vtemp1891[1U] = 0U;
            __Vtemp1891[2U] = 0U;
            __Vtemp1891[3U] = 0U;
            __Vtemp1891[4U] = 0U;
            __Vtemp1891[5U] = 0U;
            __Vtemp1891[6U] = 0U;
            __Vtemp1891[7U] = 0U;
            __Vtemp1891[8U] = 0U;
            __Vtemp1891[9U] = 0U;
            __Vtemp1891[0xaU] = 0U;
            __Vtemp1891[0xbU] = 0U;
            __Vtemp1891[0xcU] = 0U;
            __Vtemp1891[0xdU] = 0U;
            __Vtemp1891[0xeU] = 0U;
            __Vtemp1891[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1892, __Vtemp1891, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1892[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_170 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1893[0U] = 1U;
            __Vtemp1893[1U] = 0U;
            __Vtemp1893[2U] = 0U;
            __Vtemp1893[3U] = 0U;
            __Vtemp1893[4U] = 0U;
            __Vtemp1893[5U] = 0U;
            __Vtemp1893[6U] = 0U;
            __Vtemp1893[7U] = 0U;
            __Vtemp1893[8U] = 0U;
            __Vtemp1893[9U] = 0U;
            __Vtemp1893[0xaU] = 0U;
            __Vtemp1893[0xbU] = 0U;
            __Vtemp1893[0xcU] = 0U;
            __Vtemp1893[0xdU] = 0U;
            __Vtemp1893[0xeU] = 0U;
            __Vtemp1893[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1894, __Vtemp1893, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1894[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_5 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1895[0U] = 1U;
            __Vtemp1895[1U] = 0U;
            __Vtemp1895[2U] = 0U;
            __Vtemp1895[3U] = 0U;
            __Vtemp1895[4U] = 0U;
            __Vtemp1895[5U] = 0U;
            __Vtemp1895[6U] = 0U;
            __Vtemp1895[7U] = 0U;
            __Vtemp1895[8U] = 0U;
            __Vtemp1895[9U] = 0U;
            __Vtemp1895[0xaU] = 0U;
            __Vtemp1895[0xbU] = 0U;
            __Vtemp1895[0xcU] = 0U;
            __Vtemp1895[0xdU] = 0U;
            __Vtemp1895[0xeU] = 0U;
            __Vtemp1895[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1896, __Vtemp1895, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1896[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_19 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1897[0U] = 1U;
            __Vtemp1897[1U] = 0U;
            __Vtemp1897[2U] = 0U;
            __Vtemp1897[3U] = 0U;
            __Vtemp1897[4U] = 0U;
            __Vtemp1897[5U] = 0U;
            __Vtemp1897[6U] = 0U;
            __Vtemp1897[7U] = 0U;
            __Vtemp1897[8U] = 0U;
            __Vtemp1897[9U] = 0U;
            __Vtemp1897[0xaU] = 0U;
            __Vtemp1897[0xbU] = 0U;
            __Vtemp1897[0xcU] = 0U;
            __Vtemp1897[0xdU] = 0U;
            __Vtemp1897[0xeU] = 0U;
            __Vtemp1897[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1898, __Vtemp1897, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1898[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_171 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1899[0U] = 1U;
            __Vtemp1899[1U] = 0U;
            __Vtemp1899[2U] = 0U;
            __Vtemp1899[3U] = 0U;
            __Vtemp1899[4U] = 0U;
            __Vtemp1899[5U] = 0U;
            __Vtemp1899[6U] = 0U;
            __Vtemp1899[7U] = 0U;
            __Vtemp1899[8U] = 0U;
            __Vtemp1899[9U] = 0U;
            __Vtemp1899[0xaU] = 0U;
            __Vtemp1899[0xbU] = 0U;
            __Vtemp1899[0xcU] = 0U;
            __Vtemp1899[0xdU] = 0U;
            __Vtemp1899[0xeU] = 0U;
            __Vtemp1899[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1900, __Vtemp1899, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1900[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_6 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1901[0U] = 1U;
            __Vtemp1901[1U] = 0U;
            __Vtemp1901[2U] = 0U;
            __Vtemp1901[3U] = 0U;
            __Vtemp1901[4U] = 0U;
            __Vtemp1901[5U] = 0U;
            __Vtemp1901[6U] = 0U;
            __Vtemp1901[7U] = 0U;
            __Vtemp1901[8U] = 0U;
            __Vtemp1901[9U] = 0U;
            __Vtemp1901[0xaU] = 0U;
            __Vtemp1901[0xbU] = 0U;
            __Vtemp1901[0xcU] = 0U;
            __Vtemp1901[0xdU] = 0U;
            __Vtemp1901[0xeU] = 0U;
            __Vtemp1901[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1902, __Vtemp1901, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1902[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_20 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1903[0U] = 1U;
            __Vtemp1903[1U] = 0U;
            __Vtemp1903[2U] = 0U;
            __Vtemp1903[3U] = 0U;
            __Vtemp1903[4U] = 0U;
            __Vtemp1903[5U] = 0U;
            __Vtemp1903[6U] = 0U;
            __Vtemp1903[7U] = 0U;
            __Vtemp1903[8U] = 0U;
            __Vtemp1903[9U] = 0U;
            __Vtemp1903[0xaU] = 0U;
            __Vtemp1903[0xbU] = 0U;
            __Vtemp1903[0xcU] = 0U;
            __Vtemp1903[0xdU] = 0U;
            __Vtemp1903[0xeU] = 0U;
            __Vtemp1903[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1904, __Vtemp1903, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1904[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_172 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1905[0U] = 1U;
            __Vtemp1905[1U] = 0U;
            __Vtemp1905[2U] = 0U;
            __Vtemp1905[3U] = 0U;
            __Vtemp1905[4U] = 0U;
            __Vtemp1905[5U] = 0U;
            __Vtemp1905[6U] = 0U;
            __Vtemp1905[7U] = 0U;
            __Vtemp1905[8U] = 0U;
            __Vtemp1905[9U] = 0U;
            __Vtemp1905[0xaU] = 0U;
            __Vtemp1905[0xbU] = 0U;
            __Vtemp1905[0xcU] = 0U;
            __Vtemp1905[0xdU] = 0U;
            __Vtemp1905[0xeU] = 0U;
            __Vtemp1905[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1906, __Vtemp1905, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1906[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_7 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1907[0U] = 1U;
            __Vtemp1907[1U] = 0U;
            __Vtemp1907[2U] = 0U;
            __Vtemp1907[3U] = 0U;
            __Vtemp1907[4U] = 0U;
            __Vtemp1907[5U] = 0U;
            __Vtemp1907[6U] = 0U;
            __Vtemp1907[7U] = 0U;
            __Vtemp1907[8U] = 0U;
            __Vtemp1907[9U] = 0U;
            __Vtemp1907[0xaU] = 0U;
            __Vtemp1907[0xbU] = 0U;
            __Vtemp1907[0xcU] = 0U;
            __Vtemp1907[0xdU] = 0U;
            __Vtemp1907[0xeU] = 0U;
            __Vtemp1907[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1908, __Vtemp1907, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1908[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_21 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1909[0U] = 1U;
            __Vtemp1909[1U] = 0U;
            __Vtemp1909[2U] = 0U;
            __Vtemp1909[3U] = 0U;
            __Vtemp1909[4U] = 0U;
            __Vtemp1909[5U] = 0U;
            __Vtemp1909[6U] = 0U;
            __Vtemp1909[7U] = 0U;
            __Vtemp1909[8U] = 0U;
            __Vtemp1909[9U] = 0U;
            __Vtemp1909[0xaU] = 0U;
            __Vtemp1909[0xbU] = 0U;
            __Vtemp1909[0xcU] = 0U;
            __Vtemp1909[0xdU] = 0U;
            __Vtemp1909[0xeU] = 0U;
            __Vtemp1909[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1910, __Vtemp1909, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1910[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_173 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1911[0U] = 1U;
            __Vtemp1911[1U] = 0U;
            __Vtemp1911[2U] = 0U;
            __Vtemp1911[3U] = 0U;
            __Vtemp1911[4U] = 0U;
            __Vtemp1911[5U] = 0U;
            __Vtemp1911[6U] = 0U;
            __Vtemp1911[7U] = 0U;
            __Vtemp1911[8U] = 0U;
            __Vtemp1911[9U] = 0U;
            __Vtemp1911[0xaU] = 0U;
            __Vtemp1911[0xbU] = 0U;
            __Vtemp1911[0xcU] = 0U;
            __Vtemp1911[0xdU] = 0U;
            __Vtemp1911[0xeU] = 0U;
            __Vtemp1911[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1912, __Vtemp1911, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1912[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_8 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1913[0U] = 1U;
            __Vtemp1913[1U] = 0U;
            __Vtemp1913[2U] = 0U;
            __Vtemp1913[3U] = 0U;
            __Vtemp1913[4U] = 0U;
            __Vtemp1913[5U] = 0U;
            __Vtemp1913[6U] = 0U;
            __Vtemp1913[7U] = 0U;
            __Vtemp1913[8U] = 0U;
            __Vtemp1913[9U] = 0U;
            __Vtemp1913[0xaU] = 0U;
            __Vtemp1913[0xbU] = 0U;
            __Vtemp1913[0xcU] = 0U;
            __Vtemp1913[0xdU] = 0U;
            __Vtemp1913[0xeU] = 0U;
            __Vtemp1913[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1914, __Vtemp1913, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1914[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_47 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1915[0U] = 1U;
            __Vtemp1915[1U] = 0U;
            __Vtemp1915[2U] = 0U;
            __Vtemp1915[3U] = 0U;
            __Vtemp1915[4U] = 0U;
            __Vtemp1915[5U] = 0U;
            __Vtemp1915[6U] = 0U;
            __Vtemp1915[7U] = 0U;
            __Vtemp1915[8U] = 0U;
            __Vtemp1915[9U] = 0U;
            __Vtemp1915[0xaU] = 0U;
            __Vtemp1915[0xbU] = 0U;
            __Vtemp1915[0xcU] = 0U;
            __Vtemp1915[0xdU] = 0U;
            __Vtemp1915[0xeU] = 0U;
            __Vtemp1915[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1916, __Vtemp1915, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1916[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_199 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1917[0U] = 1U;
            __Vtemp1917[1U] = 0U;
            __Vtemp1917[2U] = 0U;
            __Vtemp1917[3U] = 0U;
            __Vtemp1917[4U] = 0U;
            __Vtemp1917[5U] = 0U;
            __Vtemp1917[6U] = 0U;
            __Vtemp1917[7U] = 0U;
            __Vtemp1917[8U] = 0U;
            __Vtemp1917[9U] = 0U;
            __Vtemp1917[0xaU] = 0U;
            __Vtemp1917[0xbU] = 0U;
            __Vtemp1917[0xcU] = 0U;
            __Vtemp1917[0xdU] = 0U;
            __Vtemp1917[0xeU] = 0U;
            __Vtemp1917[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1918, __Vtemp1917, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1918[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_34 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1919[0U] = 1U;
            __Vtemp1919[1U] = 0U;
            __Vtemp1919[2U] = 0U;
            __Vtemp1919[3U] = 0U;
            __Vtemp1919[4U] = 0U;
            __Vtemp1919[5U] = 0U;
            __Vtemp1919[6U] = 0U;
            __Vtemp1919[7U] = 0U;
            __Vtemp1919[8U] = 0U;
            __Vtemp1919[9U] = 0U;
            __Vtemp1919[0xaU] = 0U;
            __Vtemp1919[0xbU] = 0U;
            __Vtemp1919[0xcU] = 0U;
            __Vtemp1919[0xdU] = 0U;
            __Vtemp1919[0xeU] = 0U;
            __Vtemp1919[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1920, __Vtemp1919, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1920[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_150 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1921[0U] = 1U;
            __Vtemp1921[1U] = 0U;
            __Vtemp1921[2U] = 0U;
            __Vtemp1921[3U] = 0U;
            __Vtemp1921[4U] = 0U;
            __Vtemp1921[5U] = 0U;
            __Vtemp1921[6U] = 0U;
            __Vtemp1921[7U] = 0U;
            __Vtemp1921[8U] = 0U;
            __Vtemp1921[9U] = 0U;
            __Vtemp1921[0xaU] = 0U;
            __Vtemp1921[0xbU] = 0U;
            __Vtemp1921[0xcU] = 0U;
            __Vtemp1921[0xdU] = 0U;
            __Vtemp1921[0xeU] = 0U;
            __Vtemp1921[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1922, __Vtemp1921, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1922[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_151 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1923[0U] = 1U;
            __Vtemp1923[1U] = 0U;
            __Vtemp1923[2U] = 0U;
            __Vtemp1923[3U] = 0U;
            __Vtemp1923[4U] = 0U;
            __Vtemp1923[5U] = 0U;
            __Vtemp1923[6U] = 0U;
            __Vtemp1923[7U] = 0U;
            __Vtemp1923[8U] = 0U;
            __Vtemp1923[9U] = 0U;
            __Vtemp1923[0xaU] = 0U;
            __Vtemp1923[0xbU] = 0U;
            __Vtemp1923[0xcU] = 0U;
            __Vtemp1923[0xdU] = 0U;
            __Vtemp1923[0xeU] = 0U;
            __Vtemp1923[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1924, __Vtemp1923, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1924[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_152 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
