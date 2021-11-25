// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__80(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__80\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1832[0U] = 1U;
            __Vtemp1832[1U] = 0U;
            __Vtemp1832[2U] = 0U;
            __Vtemp1832[3U] = 0U;
            __Vtemp1832[4U] = 0U;
            __Vtemp1832[5U] = 0U;
            __Vtemp1832[6U] = 0U;
            __Vtemp1832[7U] = 0U;
            __Vtemp1832[8U] = 0U;
            __Vtemp1832[9U] = 0U;
            __Vtemp1832[0xaU] = 0U;
            __Vtemp1832[0xbU] = 0U;
            __Vtemp1832[0xcU] = 0U;
            __Vtemp1832[0xdU] = 0U;
            __Vtemp1832[0xeU] = 0U;
            __Vtemp1832[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1833, __Vtemp1832, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1833[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_26 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1834[0U] = 1U;
            __Vtemp1834[1U] = 0U;
            __Vtemp1834[2U] = 0U;
            __Vtemp1834[3U] = 0U;
            __Vtemp1834[4U] = 0U;
            __Vtemp1834[5U] = 0U;
            __Vtemp1834[6U] = 0U;
            __Vtemp1834[7U] = 0U;
            __Vtemp1834[8U] = 0U;
            __Vtemp1834[9U] = 0U;
            __Vtemp1834[0xaU] = 0U;
            __Vtemp1834[0xbU] = 0U;
            __Vtemp1834[0xcU] = 0U;
            __Vtemp1834[0xdU] = 0U;
            __Vtemp1834[0xeU] = 0U;
            __Vtemp1834[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1835, __Vtemp1834, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1835[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_117 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1836[0U] = 1U;
            __Vtemp1836[1U] = 0U;
            __Vtemp1836[2U] = 0U;
            __Vtemp1836[3U] = 0U;
            __Vtemp1836[4U] = 0U;
            __Vtemp1836[5U] = 0U;
            __Vtemp1836[6U] = 0U;
            __Vtemp1836[7U] = 0U;
            __Vtemp1836[8U] = 0U;
            __Vtemp1836[9U] = 0U;
            __Vtemp1836[0xaU] = 0U;
            __Vtemp1836[0xbU] = 0U;
            __Vtemp1836[0xcU] = 0U;
            __Vtemp1836[0xdU] = 0U;
            __Vtemp1836[0xeU] = 0U;
            __Vtemp1836[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1837, __Vtemp1836, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1837[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_35 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1838[0U] = 1U;
            __Vtemp1838[1U] = 0U;
            __Vtemp1838[2U] = 0U;
            __Vtemp1838[3U] = 0U;
            __Vtemp1838[4U] = 0U;
            __Vtemp1838[5U] = 0U;
            __Vtemp1838[6U] = 0U;
            __Vtemp1838[7U] = 0U;
            __Vtemp1838[8U] = 0U;
            __Vtemp1838[9U] = 0U;
            __Vtemp1838[0xaU] = 0U;
            __Vtemp1838[0xbU] = 0U;
            __Vtemp1838[0xcU] = 0U;
            __Vtemp1838[0xdU] = 0U;
            __Vtemp1838[0xeU] = 0U;
            __Vtemp1838[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1839, __Vtemp1838, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1839[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_187 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1840[0U] = 1U;
            __Vtemp1840[1U] = 0U;
            __Vtemp1840[2U] = 0U;
            __Vtemp1840[3U] = 0U;
            __Vtemp1840[4U] = 0U;
            __Vtemp1840[5U] = 0U;
            __Vtemp1840[6U] = 0U;
            __Vtemp1840[7U] = 0U;
            __Vtemp1840[8U] = 0U;
            __Vtemp1840[9U] = 0U;
            __Vtemp1840[0xaU] = 0U;
            __Vtemp1840[0xbU] = 0U;
            __Vtemp1840[0xcU] = 0U;
            __Vtemp1840[0xdU] = 0U;
            __Vtemp1840[0xeU] = 0U;
            __Vtemp1840[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1841, __Vtemp1840, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1841[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_22 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1842[0U] = 1U;
            __Vtemp1842[1U] = 0U;
            __Vtemp1842[2U] = 0U;
            __Vtemp1842[3U] = 0U;
            __Vtemp1842[4U] = 0U;
            __Vtemp1842[5U] = 0U;
            __Vtemp1842[6U] = 0U;
            __Vtemp1842[7U] = 0U;
            __Vtemp1842[8U] = 0U;
            __Vtemp1842[9U] = 0U;
            __Vtemp1842[0xaU] = 0U;
            __Vtemp1842[0xbU] = 0U;
            __Vtemp1842[0xcU] = 0U;
            __Vtemp1842[0xdU] = 0U;
            __Vtemp1842[0xeU] = 0U;
            __Vtemp1842[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1843, __Vtemp1842, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1843[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_113 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1844[0U] = 1U;
            __Vtemp1844[1U] = 0U;
            __Vtemp1844[2U] = 0U;
            __Vtemp1844[3U] = 0U;
            __Vtemp1844[4U] = 0U;
            __Vtemp1844[5U] = 0U;
            __Vtemp1844[6U] = 0U;
            __Vtemp1844[7U] = 0U;
            __Vtemp1844[8U] = 0U;
            __Vtemp1844[9U] = 0U;
            __Vtemp1844[0xaU] = 0U;
            __Vtemp1844[0xbU] = 0U;
            __Vtemp1844[0xcU] = 0U;
            __Vtemp1844[0xdU] = 0U;
            __Vtemp1844[0xeU] = 0U;
            __Vtemp1844[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1845, __Vtemp1844, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1845[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_36 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1846[0U] = 1U;
            __Vtemp1846[1U] = 0U;
            __Vtemp1846[2U] = 0U;
            __Vtemp1846[3U] = 0U;
            __Vtemp1846[4U] = 0U;
            __Vtemp1846[5U] = 0U;
            __Vtemp1846[6U] = 0U;
            __Vtemp1846[7U] = 0U;
            __Vtemp1846[8U] = 0U;
            __Vtemp1846[9U] = 0U;
            __Vtemp1846[0xaU] = 0U;
            __Vtemp1846[0xbU] = 0U;
            __Vtemp1846[0xcU] = 0U;
            __Vtemp1846[0xdU] = 0U;
            __Vtemp1846[0xeU] = 0U;
            __Vtemp1846[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1847, __Vtemp1846, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1847[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_188 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1848[0U] = 1U;
            __Vtemp1848[1U] = 0U;
            __Vtemp1848[2U] = 0U;
            __Vtemp1848[3U] = 0U;
            __Vtemp1848[4U] = 0U;
            __Vtemp1848[5U] = 0U;
            __Vtemp1848[6U] = 0U;
            __Vtemp1848[7U] = 0U;
            __Vtemp1848[8U] = 0U;
            __Vtemp1848[9U] = 0U;
            __Vtemp1848[0xaU] = 0U;
            __Vtemp1848[0xbU] = 0U;
            __Vtemp1848[0xcU] = 0U;
            __Vtemp1848[0xdU] = 0U;
            __Vtemp1848[0xeU] = 0U;
            __Vtemp1848[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1849, __Vtemp1848, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1849[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_23 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1850[0U] = 1U;
            __Vtemp1850[1U] = 0U;
            __Vtemp1850[2U] = 0U;
            __Vtemp1850[3U] = 0U;
            __Vtemp1850[4U] = 0U;
            __Vtemp1850[5U] = 0U;
            __Vtemp1850[6U] = 0U;
            __Vtemp1850[7U] = 0U;
            __Vtemp1850[8U] = 0U;
            __Vtemp1850[9U] = 0U;
            __Vtemp1850[0xaU] = 0U;
            __Vtemp1850[0xbU] = 0U;
            __Vtemp1850[0xcU] = 0U;
            __Vtemp1850[0xdU] = 0U;
            __Vtemp1850[0xeU] = 0U;
            __Vtemp1850[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1851, __Vtemp1850, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1851[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_114 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1852[0U] = 1U;
            __Vtemp1852[1U] = 0U;
            __Vtemp1852[2U] = 0U;
            __Vtemp1852[3U] = 0U;
            __Vtemp1852[4U] = 0U;
            __Vtemp1852[5U] = 0U;
            __Vtemp1852[6U] = 0U;
            __Vtemp1852[7U] = 0U;
            __Vtemp1852[8U] = 0U;
            __Vtemp1852[9U] = 0U;
            __Vtemp1852[0xaU] = 0U;
            __Vtemp1852[0xbU] = 0U;
            __Vtemp1852[0xcU] = 0U;
            __Vtemp1852[0xdU] = 0U;
            __Vtemp1852[0xeU] = 0U;
            __Vtemp1852[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1853, __Vtemp1852, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1853[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_12 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1854[0U] = 1U;
            __Vtemp1854[1U] = 0U;
            __Vtemp1854[2U] = 0U;
            __Vtemp1854[3U] = 0U;
            __Vtemp1854[4U] = 0U;
            __Vtemp1854[5U] = 0U;
            __Vtemp1854[6U] = 0U;
            __Vtemp1854[7U] = 0U;
            __Vtemp1854[8U] = 0U;
            __Vtemp1854[9U] = 0U;
            __Vtemp1854[0xaU] = 0U;
            __Vtemp1854[0xbU] = 0U;
            __Vtemp1854[0xcU] = 0U;
            __Vtemp1854[0xdU] = 0U;
            __Vtemp1854[0xeU] = 0U;
            __Vtemp1854[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1855, __Vtemp1854, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1855[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_164 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1856[0U] = 1U;
            __Vtemp1856[1U] = 0U;
            __Vtemp1856[2U] = 0U;
            __Vtemp1856[3U] = 0U;
            __Vtemp1856[4U] = 0U;
            __Vtemp1856[5U] = 0U;
            __Vtemp1856[6U] = 0U;
            __Vtemp1856[7U] = 0U;
            __Vtemp1856[8U] = 0U;
            __Vtemp1856[9U] = 0U;
            __Vtemp1856[0xaU] = 0U;
            __Vtemp1856[0xbU] = 0U;
            __Vtemp1856[0xcU] = 0U;
            __Vtemp1856[0xdU] = 0U;
            __Vtemp1856[0xeU] = 0U;
            __Vtemp1856[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1857, __Vtemp1856, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1857[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_13 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1858[0U] = 1U;
            __Vtemp1858[1U] = 0U;
            __Vtemp1858[2U] = 0U;
            __Vtemp1858[3U] = 0U;
            __Vtemp1858[4U] = 0U;
            __Vtemp1858[5U] = 0U;
            __Vtemp1858[6U] = 0U;
            __Vtemp1858[7U] = 0U;
            __Vtemp1858[8U] = 0U;
            __Vtemp1858[9U] = 0U;
            __Vtemp1858[0xaU] = 0U;
            __Vtemp1858[0xbU] = 0U;
            __Vtemp1858[0xcU] = 0U;
            __Vtemp1858[0xdU] = 0U;
            __Vtemp1858[0xeU] = 0U;
            __Vtemp1858[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1859, __Vtemp1858, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1859[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_165 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1860[0U] = 1U;
            __Vtemp1860[1U] = 0U;
            __Vtemp1860[2U] = 0U;
            __Vtemp1860[3U] = 0U;
            __Vtemp1860[4U] = 0U;
            __Vtemp1860[5U] = 0U;
            __Vtemp1860[6U] = 0U;
            __Vtemp1860[7U] = 0U;
            __Vtemp1860[8U] = 0U;
            __Vtemp1860[9U] = 0U;
            __Vtemp1860[0xaU] = 0U;
            __Vtemp1860[0xbU] = 0U;
            __Vtemp1860[0xcU] = 0U;
            __Vtemp1860[0xdU] = 0U;
            __Vtemp1860[0xeU] = 0U;
            __Vtemp1860[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1861, __Vtemp1860, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1861[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_14 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1862[0U] = 1U;
            __Vtemp1862[1U] = 0U;
            __Vtemp1862[2U] = 0U;
            __Vtemp1862[3U] = 0U;
            __Vtemp1862[4U] = 0U;
            __Vtemp1862[5U] = 0U;
            __Vtemp1862[6U] = 0U;
            __Vtemp1862[7U] = 0U;
            __Vtemp1862[8U] = 0U;
            __Vtemp1862[9U] = 0U;
            __Vtemp1862[0xaU] = 0U;
            __Vtemp1862[0xbU] = 0U;
            __Vtemp1862[0xcU] = 0U;
            __Vtemp1862[0xdU] = 0U;
            __Vtemp1862[0xeU] = 0U;
            __Vtemp1862[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1863, __Vtemp1862, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1863[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_166 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1864[0U] = 1U;
            __Vtemp1864[1U] = 0U;
            __Vtemp1864[2U] = 0U;
            __Vtemp1864[3U] = 0U;
            __Vtemp1864[4U] = 0U;
            __Vtemp1864[5U] = 0U;
            __Vtemp1864[6U] = 0U;
            __Vtemp1864[7U] = 0U;
            __Vtemp1864[8U] = 0U;
            __Vtemp1864[9U] = 0U;
            __Vtemp1864[0xaU] = 0U;
            __Vtemp1864[0xbU] = 0U;
            __Vtemp1864[0xcU] = 0U;
            __Vtemp1864[0xdU] = 0U;
            __Vtemp1864[0xeU] = 0U;
            __Vtemp1864[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1865, __Vtemp1864, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1865[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_1 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1866[0U] = 1U;
            __Vtemp1866[1U] = 0U;
            __Vtemp1866[2U] = 0U;
            __Vtemp1866[3U] = 0U;
            __Vtemp1866[4U] = 0U;
            __Vtemp1866[5U] = 0U;
            __Vtemp1866[6U] = 0U;
            __Vtemp1866[7U] = 0U;
            __Vtemp1866[8U] = 0U;
            __Vtemp1866[9U] = 0U;
            __Vtemp1866[0xaU] = 0U;
            __Vtemp1866[0xbU] = 0U;
            __Vtemp1866[0xcU] = 0U;
            __Vtemp1866[0xdU] = 0U;
            __Vtemp1866[0xeU] = 0U;
            __Vtemp1866[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1867, __Vtemp1866, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1867[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_15 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1868[0U] = 1U;
            __Vtemp1868[1U] = 0U;
            __Vtemp1868[2U] = 0U;
            __Vtemp1868[3U] = 0U;
            __Vtemp1868[4U] = 0U;
            __Vtemp1868[5U] = 0U;
            __Vtemp1868[6U] = 0U;
            __Vtemp1868[7U] = 0U;
            __Vtemp1868[8U] = 0U;
            __Vtemp1868[9U] = 0U;
            __Vtemp1868[0xaU] = 0U;
            __Vtemp1868[0xbU] = 0U;
            __Vtemp1868[0xcU] = 0U;
            __Vtemp1868[0xdU] = 0U;
            __Vtemp1868[0xeU] = 0U;
            __Vtemp1868[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1869, __Vtemp1868, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1869[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_167 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1870[0U] = 1U;
            __Vtemp1870[1U] = 0U;
            __Vtemp1870[2U] = 0U;
            __Vtemp1870[3U] = 0U;
            __Vtemp1870[4U] = 0U;
            __Vtemp1870[5U] = 0U;
            __Vtemp1870[6U] = 0U;
            __Vtemp1870[7U] = 0U;
            __Vtemp1870[8U] = 0U;
            __Vtemp1870[9U] = 0U;
            __Vtemp1870[0xaU] = 0U;
            __Vtemp1870[0xbU] = 0U;
            __Vtemp1870[0xcU] = 0U;
            __Vtemp1870[0xdU] = 0U;
            __Vtemp1870[0xeU] = 0U;
            __Vtemp1870[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1871, __Vtemp1870, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1871[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_2 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1872[0U] = 1U;
            __Vtemp1872[1U] = 0U;
            __Vtemp1872[2U] = 0U;
            __Vtemp1872[3U] = 0U;
            __Vtemp1872[4U] = 0U;
            __Vtemp1872[5U] = 0U;
            __Vtemp1872[6U] = 0U;
            __Vtemp1872[7U] = 0U;
            __Vtemp1872[8U] = 0U;
            __Vtemp1872[9U] = 0U;
            __Vtemp1872[0xaU] = 0U;
            __Vtemp1872[0xbU] = 0U;
            __Vtemp1872[0xcU] = 0U;
            __Vtemp1872[0xdU] = 0U;
            __Vtemp1872[0xeU] = 0U;
            __Vtemp1872[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1873, __Vtemp1872, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1873[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_16 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1874[0U] = 1U;
            __Vtemp1874[1U] = 0U;
            __Vtemp1874[2U] = 0U;
            __Vtemp1874[3U] = 0U;
            __Vtemp1874[4U] = 0U;
            __Vtemp1874[5U] = 0U;
            __Vtemp1874[6U] = 0U;
            __Vtemp1874[7U] = 0U;
            __Vtemp1874[8U] = 0U;
            __Vtemp1874[9U] = 0U;
            __Vtemp1874[0xaU] = 0U;
            __Vtemp1874[0xbU] = 0U;
            __Vtemp1874[0xcU] = 0U;
            __Vtemp1874[0xdU] = 0U;
            __Vtemp1874[0xeU] = 0U;
            __Vtemp1874[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1875, __Vtemp1874, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1875[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_168 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1876[0U] = 1U;
            __Vtemp1876[1U] = 0U;
            __Vtemp1876[2U] = 0U;
            __Vtemp1876[3U] = 0U;
            __Vtemp1876[4U] = 0U;
            __Vtemp1876[5U] = 0U;
            __Vtemp1876[6U] = 0U;
            __Vtemp1876[7U] = 0U;
            __Vtemp1876[8U] = 0U;
            __Vtemp1876[9U] = 0U;
            __Vtemp1876[0xaU] = 0U;
            __Vtemp1876[0xbU] = 0U;
            __Vtemp1876[0xcU] = 0U;
            __Vtemp1876[0xdU] = 0U;
            __Vtemp1876[0xeU] = 0U;
            __Vtemp1876[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1877, __Vtemp1876, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1877[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_3 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1878[0U] = 1U;
            __Vtemp1878[1U] = 0U;
            __Vtemp1878[2U] = 0U;
            __Vtemp1878[3U] = 0U;
            __Vtemp1878[4U] = 0U;
            __Vtemp1878[5U] = 0U;
            __Vtemp1878[6U] = 0U;
            __Vtemp1878[7U] = 0U;
            __Vtemp1878[8U] = 0U;
            __Vtemp1878[9U] = 0U;
            __Vtemp1878[0xaU] = 0U;
            __Vtemp1878[0xbU] = 0U;
            __Vtemp1878[0xcU] = 0U;
            __Vtemp1878[0xdU] = 0U;
            __Vtemp1878[0xeU] = 0U;
            __Vtemp1878[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1879, __Vtemp1878, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1879[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_17 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1880[0U] = 1U;
            __Vtemp1880[1U] = 0U;
            __Vtemp1880[2U] = 0U;
            __Vtemp1880[3U] = 0U;
            __Vtemp1880[4U] = 0U;
            __Vtemp1880[5U] = 0U;
            __Vtemp1880[6U] = 0U;
            __Vtemp1880[7U] = 0U;
            __Vtemp1880[8U] = 0U;
            __Vtemp1880[9U] = 0U;
            __Vtemp1880[0xaU] = 0U;
            __Vtemp1880[0xbU] = 0U;
            __Vtemp1880[0xcU] = 0U;
            __Vtemp1880[0xdU] = 0U;
            __Vtemp1880[0xeU] = 0U;
            __Vtemp1880[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1881, __Vtemp1880, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1881[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_169 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1882[0U] = 1U;
            __Vtemp1882[1U] = 0U;
            __Vtemp1882[2U] = 0U;
            __Vtemp1882[3U] = 0U;
            __Vtemp1882[4U] = 0U;
            __Vtemp1882[5U] = 0U;
            __Vtemp1882[6U] = 0U;
            __Vtemp1882[7U] = 0U;
            __Vtemp1882[8U] = 0U;
            __Vtemp1882[9U] = 0U;
            __Vtemp1882[0xaU] = 0U;
            __Vtemp1882[0xbU] = 0U;
            __Vtemp1882[0xcU] = 0U;
            __Vtemp1882[0xdU] = 0U;
            __Vtemp1882[0xeU] = 0U;
            __Vtemp1882[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1883, __Vtemp1882, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1883[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_4 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1884[0U] = 1U;
            __Vtemp1884[1U] = 0U;
            __Vtemp1884[2U] = 0U;
            __Vtemp1884[3U] = 0U;
            __Vtemp1884[4U] = 0U;
            __Vtemp1884[5U] = 0U;
            __Vtemp1884[6U] = 0U;
            __Vtemp1884[7U] = 0U;
            __Vtemp1884[8U] = 0U;
            __Vtemp1884[9U] = 0U;
            __Vtemp1884[0xaU] = 0U;
            __Vtemp1884[0xbU] = 0U;
            __Vtemp1884[0xcU] = 0U;
            __Vtemp1884[0xdU] = 0U;
            __Vtemp1884[0xeU] = 0U;
            __Vtemp1884[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1885, __Vtemp1884, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1885[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_18 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__81(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__81\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1886[0U] = 1U;
            __Vtemp1886[1U] = 0U;
            __Vtemp1886[2U] = 0U;
            __Vtemp1886[3U] = 0U;
            __Vtemp1886[4U] = 0U;
            __Vtemp1886[5U] = 0U;
            __Vtemp1886[6U] = 0U;
            __Vtemp1886[7U] = 0U;
            __Vtemp1886[8U] = 0U;
            __Vtemp1886[9U] = 0U;
            __Vtemp1886[0xaU] = 0U;
            __Vtemp1886[0xbU] = 0U;
            __Vtemp1886[0xcU] = 0U;
            __Vtemp1886[0xdU] = 0U;
            __Vtemp1886[0xeU] = 0U;
            __Vtemp1886[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1887, __Vtemp1886, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1887[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_170 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1888[0U] = 1U;
            __Vtemp1888[1U] = 0U;
            __Vtemp1888[2U] = 0U;
            __Vtemp1888[3U] = 0U;
            __Vtemp1888[4U] = 0U;
            __Vtemp1888[5U] = 0U;
            __Vtemp1888[6U] = 0U;
            __Vtemp1888[7U] = 0U;
            __Vtemp1888[8U] = 0U;
            __Vtemp1888[9U] = 0U;
            __Vtemp1888[0xaU] = 0U;
            __Vtemp1888[0xbU] = 0U;
            __Vtemp1888[0xcU] = 0U;
            __Vtemp1888[0xdU] = 0U;
            __Vtemp1888[0xeU] = 0U;
            __Vtemp1888[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1889, __Vtemp1888, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1889[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_5 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1890[0U] = 1U;
            __Vtemp1890[1U] = 0U;
            __Vtemp1890[2U] = 0U;
            __Vtemp1890[3U] = 0U;
            __Vtemp1890[4U] = 0U;
            __Vtemp1890[5U] = 0U;
            __Vtemp1890[6U] = 0U;
            __Vtemp1890[7U] = 0U;
            __Vtemp1890[8U] = 0U;
            __Vtemp1890[9U] = 0U;
            __Vtemp1890[0xaU] = 0U;
            __Vtemp1890[0xbU] = 0U;
            __Vtemp1890[0xcU] = 0U;
            __Vtemp1890[0xdU] = 0U;
            __Vtemp1890[0xeU] = 0U;
            __Vtemp1890[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1891, __Vtemp1890, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1891[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_19 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1892[0U] = 1U;
            __Vtemp1892[1U] = 0U;
            __Vtemp1892[2U] = 0U;
            __Vtemp1892[3U] = 0U;
            __Vtemp1892[4U] = 0U;
            __Vtemp1892[5U] = 0U;
            __Vtemp1892[6U] = 0U;
            __Vtemp1892[7U] = 0U;
            __Vtemp1892[8U] = 0U;
            __Vtemp1892[9U] = 0U;
            __Vtemp1892[0xaU] = 0U;
            __Vtemp1892[0xbU] = 0U;
            __Vtemp1892[0xcU] = 0U;
            __Vtemp1892[0xdU] = 0U;
            __Vtemp1892[0xeU] = 0U;
            __Vtemp1892[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1893, __Vtemp1892, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1893[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_171 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1894[0U] = 1U;
            __Vtemp1894[1U] = 0U;
            __Vtemp1894[2U] = 0U;
            __Vtemp1894[3U] = 0U;
            __Vtemp1894[4U] = 0U;
            __Vtemp1894[5U] = 0U;
            __Vtemp1894[6U] = 0U;
            __Vtemp1894[7U] = 0U;
            __Vtemp1894[8U] = 0U;
            __Vtemp1894[9U] = 0U;
            __Vtemp1894[0xaU] = 0U;
            __Vtemp1894[0xbU] = 0U;
            __Vtemp1894[0xcU] = 0U;
            __Vtemp1894[0xdU] = 0U;
            __Vtemp1894[0xeU] = 0U;
            __Vtemp1894[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1895, __Vtemp1894, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1895[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_6 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1896[0U] = 1U;
            __Vtemp1896[1U] = 0U;
            __Vtemp1896[2U] = 0U;
            __Vtemp1896[3U] = 0U;
            __Vtemp1896[4U] = 0U;
            __Vtemp1896[5U] = 0U;
            __Vtemp1896[6U] = 0U;
            __Vtemp1896[7U] = 0U;
            __Vtemp1896[8U] = 0U;
            __Vtemp1896[9U] = 0U;
            __Vtemp1896[0xaU] = 0U;
            __Vtemp1896[0xbU] = 0U;
            __Vtemp1896[0xcU] = 0U;
            __Vtemp1896[0xdU] = 0U;
            __Vtemp1896[0xeU] = 0U;
            __Vtemp1896[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1897, __Vtemp1896, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1897[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_20 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1898[0U] = 1U;
            __Vtemp1898[1U] = 0U;
            __Vtemp1898[2U] = 0U;
            __Vtemp1898[3U] = 0U;
            __Vtemp1898[4U] = 0U;
            __Vtemp1898[5U] = 0U;
            __Vtemp1898[6U] = 0U;
            __Vtemp1898[7U] = 0U;
            __Vtemp1898[8U] = 0U;
            __Vtemp1898[9U] = 0U;
            __Vtemp1898[0xaU] = 0U;
            __Vtemp1898[0xbU] = 0U;
            __Vtemp1898[0xcU] = 0U;
            __Vtemp1898[0xdU] = 0U;
            __Vtemp1898[0xeU] = 0U;
            __Vtemp1898[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1899, __Vtemp1898, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1899[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_172 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1900[0U] = 1U;
            __Vtemp1900[1U] = 0U;
            __Vtemp1900[2U] = 0U;
            __Vtemp1900[3U] = 0U;
            __Vtemp1900[4U] = 0U;
            __Vtemp1900[5U] = 0U;
            __Vtemp1900[6U] = 0U;
            __Vtemp1900[7U] = 0U;
            __Vtemp1900[8U] = 0U;
            __Vtemp1900[9U] = 0U;
            __Vtemp1900[0xaU] = 0U;
            __Vtemp1900[0xbU] = 0U;
            __Vtemp1900[0xcU] = 0U;
            __Vtemp1900[0xdU] = 0U;
            __Vtemp1900[0xeU] = 0U;
            __Vtemp1900[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1901, __Vtemp1900, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1901[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_7 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1902[0U] = 1U;
            __Vtemp1902[1U] = 0U;
            __Vtemp1902[2U] = 0U;
            __Vtemp1902[3U] = 0U;
            __Vtemp1902[4U] = 0U;
            __Vtemp1902[5U] = 0U;
            __Vtemp1902[6U] = 0U;
            __Vtemp1902[7U] = 0U;
            __Vtemp1902[8U] = 0U;
            __Vtemp1902[9U] = 0U;
            __Vtemp1902[0xaU] = 0U;
            __Vtemp1902[0xbU] = 0U;
            __Vtemp1902[0xcU] = 0U;
            __Vtemp1902[0xdU] = 0U;
            __Vtemp1902[0xeU] = 0U;
            __Vtemp1902[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1903, __Vtemp1902, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1903[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_21 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1904[0U] = 1U;
            __Vtemp1904[1U] = 0U;
            __Vtemp1904[2U] = 0U;
            __Vtemp1904[3U] = 0U;
            __Vtemp1904[4U] = 0U;
            __Vtemp1904[5U] = 0U;
            __Vtemp1904[6U] = 0U;
            __Vtemp1904[7U] = 0U;
            __Vtemp1904[8U] = 0U;
            __Vtemp1904[9U] = 0U;
            __Vtemp1904[0xaU] = 0U;
            __Vtemp1904[0xbU] = 0U;
            __Vtemp1904[0xcU] = 0U;
            __Vtemp1904[0xdU] = 0U;
            __Vtemp1904[0xeU] = 0U;
            __Vtemp1904[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1905, __Vtemp1904, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1905[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_173 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1906[0U] = 1U;
            __Vtemp1906[1U] = 0U;
            __Vtemp1906[2U] = 0U;
            __Vtemp1906[3U] = 0U;
            __Vtemp1906[4U] = 0U;
            __Vtemp1906[5U] = 0U;
            __Vtemp1906[6U] = 0U;
            __Vtemp1906[7U] = 0U;
            __Vtemp1906[8U] = 0U;
            __Vtemp1906[9U] = 0U;
            __Vtemp1906[0xaU] = 0U;
            __Vtemp1906[0xbU] = 0U;
            __Vtemp1906[0xcU] = 0U;
            __Vtemp1906[0xdU] = 0U;
            __Vtemp1906[0xeU] = 0U;
            __Vtemp1906[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1907, __Vtemp1906, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1907[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_8 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1908[0U] = 1U;
            __Vtemp1908[1U] = 0U;
            __Vtemp1908[2U] = 0U;
            __Vtemp1908[3U] = 0U;
            __Vtemp1908[4U] = 0U;
            __Vtemp1908[5U] = 0U;
            __Vtemp1908[6U] = 0U;
            __Vtemp1908[7U] = 0U;
            __Vtemp1908[8U] = 0U;
            __Vtemp1908[9U] = 0U;
            __Vtemp1908[0xaU] = 0U;
            __Vtemp1908[0xbU] = 0U;
            __Vtemp1908[0xcU] = 0U;
            __Vtemp1908[0xdU] = 0U;
            __Vtemp1908[0xeU] = 0U;
            __Vtemp1908[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1909, __Vtemp1908, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1909[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_47 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1910[0U] = 1U;
            __Vtemp1910[1U] = 0U;
            __Vtemp1910[2U] = 0U;
            __Vtemp1910[3U] = 0U;
            __Vtemp1910[4U] = 0U;
            __Vtemp1910[5U] = 0U;
            __Vtemp1910[6U] = 0U;
            __Vtemp1910[7U] = 0U;
            __Vtemp1910[8U] = 0U;
            __Vtemp1910[9U] = 0U;
            __Vtemp1910[0xaU] = 0U;
            __Vtemp1910[0xbU] = 0U;
            __Vtemp1910[0xcU] = 0U;
            __Vtemp1910[0xdU] = 0U;
            __Vtemp1910[0xeU] = 0U;
            __Vtemp1910[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1911, __Vtemp1910, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1911[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_199 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1912[0U] = 1U;
            __Vtemp1912[1U] = 0U;
            __Vtemp1912[2U] = 0U;
            __Vtemp1912[3U] = 0U;
            __Vtemp1912[4U] = 0U;
            __Vtemp1912[5U] = 0U;
            __Vtemp1912[6U] = 0U;
            __Vtemp1912[7U] = 0U;
            __Vtemp1912[8U] = 0U;
            __Vtemp1912[9U] = 0U;
            __Vtemp1912[0xaU] = 0U;
            __Vtemp1912[0xbU] = 0U;
            __Vtemp1912[0xcU] = 0U;
            __Vtemp1912[0xdU] = 0U;
            __Vtemp1912[0xeU] = 0U;
            __Vtemp1912[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1913, __Vtemp1912, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1913[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_34 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1914[0U] = 1U;
            __Vtemp1914[1U] = 0U;
            __Vtemp1914[2U] = 0U;
            __Vtemp1914[3U] = 0U;
            __Vtemp1914[4U] = 0U;
            __Vtemp1914[5U] = 0U;
            __Vtemp1914[6U] = 0U;
            __Vtemp1914[7U] = 0U;
            __Vtemp1914[8U] = 0U;
            __Vtemp1914[9U] = 0U;
            __Vtemp1914[0xaU] = 0U;
            __Vtemp1914[0xbU] = 0U;
            __Vtemp1914[0xcU] = 0U;
            __Vtemp1914[0xdU] = 0U;
            __Vtemp1914[0xeU] = 0U;
            __Vtemp1914[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1915, __Vtemp1914, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1915[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_150 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1916[0U] = 1U;
            __Vtemp1916[1U] = 0U;
            __Vtemp1916[2U] = 0U;
            __Vtemp1916[3U] = 0U;
            __Vtemp1916[4U] = 0U;
            __Vtemp1916[5U] = 0U;
            __Vtemp1916[6U] = 0U;
            __Vtemp1916[7U] = 0U;
            __Vtemp1916[8U] = 0U;
            __Vtemp1916[9U] = 0U;
            __Vtemp1916[0xaU] = 0U;
            __Vtemp1916[0xbU] = 0U;
            __Vtemp1916[0xcU] = 0U;
            __Vtemp1916[0xdU] = 0U;
            __Vtemp1916[0xeU] = 0U;
            __Vtemp1916[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1917, __Vtemp1916, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1917[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_151 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1918[0U] = 1U;
            __Vtemp1918[1U] = 0U;
            __Vtemp1918[2U] = 0U;
            __Vtemp1918[3U] = 0U;
            __Vtemp1918[4U] = 0U;
            __Vtemp1918[5U] = 0U;
            __Vtemp1918[6U] = 0U;
            __Vtemp1918[7U] = 0U;
            __Vtemp1918[8U] = 0U;
            __Vtemp1918[9U] = 0U;
            __Vtemp1918[0xaU] = 0U;
            __Vtemp1918[0xbU] = 0U;
            __Vtemp1918[0xcU] = 0U;
            __Vtemp1918[0xdU] = 0U;
            __Vtemp1918[0xeU] = 0U;
            __Vtemp1918[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1919, __Vtemp1918, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1919[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_152 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1920[0U] = 1U;
            __Vtemp1920[1U] = 0U;
            __Vtemp1920[2U] = 0U;
            __Vtemp1920[3U] = 0U;
            __Vtemp1920[4U] = 0U;
            __Vtemp1920[5U] = 0U;
            __Vtemp1920[6U] = 0U;
            __Vtemp1920[7U] = 0U;
            __Vtemp1920[8U] = 0U;
            __Vtemp1920[9U] = 0U;
            __Vtemp1920[0xaU] = 0U;
            __Vtemp1920[0xbU] = 0U;
            __Vtemp1920[0xcU] = 0U;
            __Vtemp1920[0xdU] = 0U;
            __Vtemp1920[0xeU] = 0U;
            __Vtemp1920[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1921, __Vtemp1920, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1921[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_50 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1922[0U] = 1U;
            __Vtemp1922[1U] = 0U;
            __Vtemp1922[2U] = 0U;
            __Vtemp1922[3U] = 0U;
            __Vtemp1922[4U] = 0U;
            __Vtemp1922[5U] = 0U;
            __Vtemp1922[6U] = 0U;
            __Vtemp1922[7U] = 0U;
            __Vtemp1922[8U] = 0U;
            __Vtemp1922[9U] = 0U;
            __Vtemp1922[0xaU] = 0U;
            __Vtemp1922[0xbU] = 0U;
            __Vtemp1922[0xcU] = 0U;
            __Vtemp1922[0xdU] = 0U;
            __Vtemp1922[0xeU] = 0U;
            __Vtemp1922[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1923, __Vtemp1922, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1923[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_51 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1924[0U] = 1U;
            __Vtemp1924[1U] = 0U;
            __Vtemp1924[2U] = 0U;
            __Vtemp1924[3U] = 0U;
            __Vtemp1924[4U] = 0U;
            __Vtemp1924[5U] = 0U;
            __Vtemp1924[6U] = 0U;
            __Vtemp1924[7U] = 0U;
            __Vtemp1924[8U] = 0U;
            __Vtemp1924[9U] = 0U;
            __Vtemp1924[0xaU] = 0U;
            __Vtemp1924[0xbU] = 0U;
            __Vtemp1924[0xcU] = 0U;
            __Vtemp1924[0xdU] = 0U;
            __Vtemp1924[0xeU] = 0U;
            __Vtemp1924[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1925, __Vtemp1924, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1925[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_52 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1926[0U] = 1U;
            __Vtemp1926[1U] = 0U;
            __Vtemp1926[2U] = 0U;
            __Vtemp1926[3U] = 0U;
            __Vtemp1926[4U] = 0U;
            __Vtemp1926[5U] = 0U;
            __Vtemp1926[6U] = 0U;
            __Vtemp1926[7U] = 0U;
            __Vtemp1926[8U] = 0U;
            __Vtemp1926[9U] = 0U;
            __Vtemp1926[0xaU] = 0U;
            __Vtemp1926[0xbU] = 0U;
            __Vtemp1926[0xcU] = 0U;
            __Vtemp1926[0xdU] = 0U;
            __Vtemp1926[0xeU] = 0U;
            __Vtemp1926[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1927, __Vtemp1926, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1927[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_53 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1928[0U] = 1U;
            __Vtemp1928[1U] = 0U;
            __Vtemp1928[2U] = 0U;
            __Vtemp1928[3U] = 0U;
            __Vtemp1928[4U] = 0U;
            __Vtemp1928[5U] = 0U;
            __Vtemp1928[6U] = 0U;
            __Vtemp1928[7U] = 0U;
            __Vtemp1928[8U] = 0U;
            __Vtemp1928[9U] = 0U;
            __Vtemp1928[0xaU] = 0U;
            __Vtemp1928[0xbU] = 0U;
            __Vtemp1928[0xcU] = 0U;
            __Vtemp1928[0xdU] = 0U;
            __Vtemp1928[0xeU] = 0U;
            __Vtemp1928[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1929, __Vtemp1928, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1929[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_54 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1930[0U] = 1U;
            __Vtemp1930[1U] = 0U;
            __Vtemp1930[2U] = 0U;
            __Vtemp1930[3U] = 0U;
            __Vtemp1930[4U] = 0U;
            __Vtemp1930[5U] = 0U;
            __Vtemp1930[6U] = 0U;
            __Vtemp1930[7U] = 0U;
            __Vtemp1930[8U] = 0U;
            __Vtemp1930[9U] = 0U;
            __Vtemp1930[0xaU] = 0U;
            __Vtemp1930[0xbU] = 0U;
            __Vtemp1930[0xcU] = 0U;
            __Vtemp1930[0xdU] = 0U;
            __Vtemp1930[0xeU] = 0U;
            __Vtemp1930[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1931, __Vtemp1930, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1931[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_55 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1932[0U] = 1U;
            __Vtemp1932[1U] = 0U;
            __Vtemp1932[2U] = 0U;
            __Vtemp1932[3U] = 0U;
            __Vtemp1932[4U] = 0U;
            __Vtemp1932[5U] = 0U;
            __Vtemp1932[6U] = 0U;
            __Vtemp1932[7U] = 0U;
            __Vtemp1932[8U] = 0U;
            __Vtemp1932[9U] = 0U;
            __Vtemp1932[0xaU] = 0U;
            __Vtemp1932[0xbU] = 0U;
            __Vtemp1932[0xcU] = 0U;
            __Vtemp1932[0xdU] = 0U;
            __Vtemp1932[0xeU] = 0U;
            __Vtemp1932[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1933, __Vtemp1932, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1933[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_56 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1934[0U] = 1U;
            __Vtemp1934[1U] = 0U;
            __Vtemp1934[2U] = 0U;
            __Vtemp1934[3U] = 0U;
            __Vtemp1934[4U] = 0U;
            __Vtemp1934[5U] = 0U;
            __Vtemp1934[6U] = 0U;
            __Vtemp1934[7U] = 0U;
            __Vtemp1934[8U] = 0U;
            __Vtemp1934[9U] = 0U;
            __Vtemp1934[0xaU] = 0U;
            __Vtemp1934[0xbU] = 0U;
            __Vtemp1934[0xcU] = 0U;
            __Vtemp1934[0xdU] = 0U;
            __Vtemp1934[0xeU] = 0U;
            __Vtemp1934[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1935, __Vtemp1934, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1935[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_57 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1936[0U] = 1U;
            __Vtemp1936[1U] = 0U;
            __Vtemp1936[2U] = 0U;
            __Vtemp1936[3U] = 0U;
            __Vtemp1936[4U] = 0U;
            __Vtemp1936[5U] = 0U;
            __Vtemp1936[6U] = 0U;
            __Vtemp1936[7U] = 0U;
            __Vtemp1936[8U] = 0U;
            __Vtemp1936[9U] = 0U;
            __Vtemp1936[0xaU] = 0U;
            __Vtemp1936[0xbU] = 0U;
            __Vtemp1936[0xcU] = 0U;
            __Vtemp1936[0xdU] = 0U;
            __Vtemp1936[0xeU] = 0U;
            __Vtemp1936[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1937, __Vtemp1936, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1937[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_58 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1938[0U] = 1U;
            __Vtemp1938[1U] = 0U;
            __Vtemp1938[2U] = 0U;
            __Vtemp1938[3U] = 0U;
            __Vtemp1938[4U] = 0U;
            __Vtemp1938[5U] = 0U;
            __Vtemp1938[6U] = 0U;
            __Vtemp1938[7U] = 0U;
            __Vtemp1938[8U] = 0U;
            __Vtemp1938[9U] = 0U;
            __Vtemp1938[0xaU] = 0U;
            __Vtemp1938[0xbU] = 0U;
            __Vtemp1938[0xcU] = 0U;
            __Vtemp1938[0xdU] = 0U;
            __Vtemp1938[0xeU] = 0U;
            __Vtemp1938[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1939, __Vtemp1938, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1939[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_59 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
