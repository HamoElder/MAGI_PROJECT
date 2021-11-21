// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__80(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__80\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    WData/*511:0*/ __Vtemp1925[16];
    // Body
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
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__81(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__81\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    WData/*511:0*/ __Vtemp1979[16];
    // Body
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
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1940[0U] = 1U;
            __Vtemp1940[1U] = 0U;
            __Vtemp1940[2U] = 0U;
            __Vtemp1940[3U] = 0U;
            __Vtemp1940[4U] = 0U;
            __Vtemp1940[5U] = 0U;
            __Vtemp1940[6U] = 0U;
            __Vtemp1940[7U] = 0U;
            __Vtemp1940[8U] = 0U;
            __Vtemp1940[9U] = 0U;
            __Vtemp1940[0xaU] = 0U;
            __Vtemp1940[0xbU] = 0U;
            __Vtemp1940[0xcU] = 0U;
            __Vtemp1940[0xdU] = 0U;
            __Vtemp1940[0xeU] = 0U;
            __Vtemp1940[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1941, __Vtemp1940, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1941[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_60 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1942[0U] = 1U;
            __Vtemp1942[1U] = 0U;
            __Vtemp1942[2U] = 0U;
            __Vtemp1942[3U] = 0U;
            __Vtemp1942[4U] = 0U;
            __Vtemp1942[5U] = 0U;
            __Vtemp1942[6U] = 0U;
            __Vtemp1942[7U] = 0U;
            __Vtemp1942[8U] = 0U;
            __Vtemp1942[9U] = 0U;
            __Vtemp1942[0xaU] = 0U;
            __Vtemp1942[0xbU] = 0U;
            __Vtemp1942[0xcU] = 0U;
            __Vtemp1942[0xdU] = 0U;
            __Vtemp1942[0xeU] = 0U;
            __Vtemp1942[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1943, __Vtemp1942, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1943[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_61 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1944[0U] = 1U;
            __Vtemp1944[1U] = 0U;
            __Vtemp1944[2U] = 0U;
            __Vtemp1944[3U] = 0U;
            __Vtemp1944[4U] = 0U;
            __Vtemp1944[5U] = 0U;
            __Vtemp1944[6U] = 0U;
            __Vtemp1944[7U] = 0U;
            __Vtemp1944[8U] = 0U;
            __Vtemp1944[9U] = 0U;
            __Vtemp1944[0xaU] = 0U;
            __Vtemp1944[0xbU] = 0U;
            __Vtemp1944[0xcU] = 0U;
            __Vtemp1944[0xdU] = 0U;
            __Vtemp1944[0xeU] = 0U;
            __Vtemp1944[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1945, __Vtemp1944, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1945[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_62 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1946[0U] = 1U;
            __Vtemp1946[1U] = 0U;
            __Vtemp1946[2U] = 0U;
            __Vtemp1946[3U] = 0U;
            __Vtemp1946[4U] = 0U;
            __Vtemp1946[5U] = 0U;
            __Vtemp1946[6U] = 0U;
            __Vtemp1946[7U] = 0U;
            __Vtemp1946[8U] = 0U;
            __Vtemp1946[9U] = 0U;
            __Vtemp1946[0xaU] = 0U;
            __Vtemp1946[0xbU] = 0U;
            __Vtemp1946[0xcU] = 0U;
            __Vtemp1946[0xdU] = 0U;
            __Vtemp1946[0xeU] = 0U;
            __Vtemp1946[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1947, __Vtemp1946, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1947[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_63 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1948[0U] = 1U;
            __Vtemp1948[1U] = 0U;
            __Vtemp1948[2U] = 0U;
            __Vtemp1948[3U] = 0U;
            __Vtemp1948[4U] = 0U;
            __Vtemp1948[5U] = 0U;
            __Vtemp1948[6U] = 0U;
            __Vtemp1948[7U] = 0U;
            __Vtemp1948[8U] = 0U;
            __Vtemp1948[9U] = 0U;
            __Vtemp1948[0xaU] = 0U;
            __Vtemp1948[0xbU] = 0U;
            __Vtemp1948[0xcU] = 0U;
            __Vtemp1948[0xdU] = 0U;
            __Vtemp1948[0xeU] = 0U;
            __Vtemp1948[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1949, __Vtemp1948, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1949[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_64 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1950[0U] = 1U;
            __Vtemp1950[1U] = 0U;
            __Vtemp1950[2U] = 0U;
            __Vtemp1950[3U] = 0U;
            __Vtemp1950[4U] = 0U;
            __Vtemp1950[5U] = 0U;
            __Vtemp1950[6U] = 0U;
            __Vtemp1950[7U] = 0U;
            __Vtemp1950[8U] = 0U;
            __Vtemp1950[9U] = 0U;
            __Vtemp1950[0xaU] = 0U;
            __Vtemp1950[0xbU] = 0U;
            __Vtemp1950[0xcU] = 0U;
            __Vtemp1950[0xdU] = 0U;
            __Vtemp1950[0xeU] = 0U;
            __Vtemp1950[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1951, __Vtemp1950, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1951[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_65 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1952[0U] = 1U;
            __Vtemp1952[1U] = 0U;
            __Vtemp1952[2U] = 0U;
            __Vtemp1952[3U] = 0U;
            __Vtemp1952[4U] = 0U;
            __Vtemp1952[5U] = 0U;
            __Vtemp1952[6U] = 0U;
            __Vtemp1952[7U] = 0U;
            __Vtemp1952[8U] = 0U;
            __Vtemp1952[9U] = 0U;
            __Vtemp1952[0xaU] = 0U;
            __Vtemp1952[0xbU] = 0U;
            __Vtemp1952[0xcU] = 0U;
            __Vtemp1952[0xdU] = 0U;
            __Vtemp1952[0xeU] = 0U;
            __Vtemp1952[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1953, __Vtemp1952, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1953[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_66 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1954[0U] = 1U;
            __Vtemp1954[1U] = 0U;
            __Vtemp1954[2U] = 0U;
            __Vtemp1954[3U] = 0U;
            __Vtemp1954[4U] = 0U;
            __Vtemp1954[5U] = 0U;
            __Vtemp1954[6U] = 0U;
            __Vtemp1954[7U] = 0U;
            __Vtemp1954[8U] = 0U;
            __Vtemp1954[9U] = 0U;
            __Vtemp1954[0xaU] = 0U;
            __Vtemp1954[0xbU] = 0U;
            __Vtemp1954[0xcU] = 0U;
            __Vtemp1954[0xdU] = 0U;
            __Vtemp1954[0xeU] = 0U;
            __Vtemp1954[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1955, __Vtemp1954, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1955[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_67 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1956[0U] = 1U;
            __Vtemp1956[1U] = 0U;
            __Vtemp1956[2U] = 0U;
            __Vtemp1956[3U] = 0U;
            __Vtemp1956[4U] = 0U;
            __Vtemp1956[5U] = 0U;
            __Vtemp1956[6U] = 0U;
            __Vtemp1956[7U] = 0U;
            __Vtemp1956[8U] = 0U;
            __Vtemp1956[9U] = 0U;
            __Vtemp1956[0xaU] = 0U;
            __Vtemp1956[0xbU] = 0U;
            __Vtemp1956[0xcU] = 0U;
            __Vtemp1956[0xdU] = 0U;
            __Vtemp1956[0xeU] = 0U;
            __Vtemp1956[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1957, __Vtemp1956, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1957[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_68 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1958[0U] = 1U;
            __Vtemp1958[1U] = 0U;
            __Vtemp1958[2U] = 0U;
            __Vtemp1958[3U] = 0U;
            __Vtemp1958[4U] = 0U;
            __Vtemp1958[5U] = 0U;
            __Vtemp1958[6U] = 0U;
            __Vtemp1958[7U] = 0U;
            __Vtemp1958[8U] = 0U;
            __Vtemp1958[9U] = 0U;
            __Vtemp1958[0xaU] = 0U;
            __Vtemp1958[0xbU] = 0U;
            __Vtemp1958[0xcU] = 0U;
            __Vtemp1958[0xdU] = 0U;
            __Vtemp1958[0xeU] = 0U;
            __Vtemp1958[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1959, __Vtemp1958, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1959[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_69 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1960[0U] = 1U;
            __Vtemp1960[1U] = 0U;
            __Vtemp1960[2U] = 0U;
            __Vtemp1960[3U] = 0U;
            __Vtemp1960[4U] = 0U;
            __Vtemp1960[5U] = 0U;
            __Vtemp1960[6U] = 0U;
            __Vtemp1960[7U] = 0U;
            __Vtemp1960[8U] = 0U;
            __Vtemp1960[9U] = 0U;
            __Vtemp1960[0xaU] = 0U;
            __Vtemp1960[0xbU] = 0U;
            __Vtemp1960[0xcU] = 0U;
            __Vtemp1960[0xdU] = 0U;
            __Vtemp1960[0xeU] = 0U;
            __Vtemp1960[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1961, __Vtemp1960, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1961[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_70 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1962[0U] = 1U;
            __Vtemp1962[1U] = 0U;
            __Vtemp1962[2U] = 0U;
            __Vtemp1962[3U] = 0U;
            __Vtemp1962[4U] = 0U;
            __Vtemp1962[5U] = 0U;
            __Vtemp1962[6U] = 0U;
            __Vtemp1962[7U] = 0U;
            __Vtemp1962[8U] = 0U;
            __Vtemp1962[9U] = 0U;
            __Vtemp1962[0xaU] = 0U;
            __Vtemp1962[0xbU] = 0U;
            __Vtemp1962[0xcU] = 0U;
            __Vtemp1962[0xdU] = 0U;
            __Vtemp1962[0xeU] = 0U;
            __Vtemp1962[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1963, __Vtemp1962, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1963[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_71 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1964[0U] = 1U;
            __Vtemp1964[1U] = 0U;
            __Vtemp1964[2U] = 0U;
            __Vtemp1964[3U] = 0U;
            __Vtemp1964[4U] = 0U;
            __Vtemp1964[5U] = 0U;
            __Vtemp1964[6U] = 0U;
            __Vtemp1964[7U] = 0U;
            __Vtemp1964[8U] = 0U;
            __Vtemp1964[9U] = 0U;
            __Vtemp1964[0xaU] = 0U;
            __Vtemp1964[0xbU] = 0U;
            __Vtemp1964[0xcU] = 0U;
            __Vtemp1964[0xdU] = 0U;
            __Vtemp1964[0xeU] = 0U;
            __Vtemp1964[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1965, __Vtemp1964, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1965[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_72 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1966[0U] = 1U;
            __Vtemp1966[1U] = 0U;
            __Vtemp1966[2U] = 0U;
            __Vtemp1966[3U] = 0U;
            __Vtemp1966[4U] = 0U;
            __Vtemp1966[5U] = 0U;
            __Vtemp1966[6U] = 0U;
            __Vtemp1966[7U] = 0U;
            __Vtemp1966[8U] = 0U;
            __Vtemp1966[9U] = 0U;
            __Vtemp1966[0xaU] = 0U;
            __Vtemp1966[0xbU] = 0U;
            __Vtemp1966[0xcU] = 0U;
            __Vtemp1966[0xdU] = 0U;
            __Vtemp1966[0xeU] = 0U;
            __Vtemp1966[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1967, __Vtemp1966, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1967[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_73 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1968[0U] = 1U;
            __Vtemp1968[1U] = 0U;
            __Vtemp1968[2U] = 0U;
            __Vtemp1968[3U] = 0U;
            __Vtemp1968[4U] = 0U;
            __Vtemp1968[5U] = 0U;
            __Vtemp1968[6U] = 0U;
            __Vtemp1968[7U] = 0U;
            __Vtemp1968[8U] = 0U;
            __Vtemp1968[9U] = 0U;
            __Vtemp1968[0xaU] = 0U;
            __Vtemp1968[0xbU] = 0U;
            __Vtemp1968[0xcU] = 0U;
            __Vtemp1968[0xdU] = 0U;
            __Vtemp1968[0xeU] = 0U;
            __Vtemp1968[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1969, __Vtemp1968, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1969[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_74 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1970[0U] = 1U;
            __Vtemp1970[1U] = 0U;
            __Vtemp1970[2U] = 0U;
            __Vtemp1970[3U] = 0U;
            __Vtemp1970[4U] = 0U;
            __Vtemp1970[5U] = 0U;
            __Vtemp1970[6U] = 0U;
            __Vtemp1970[7U] = 0U;
            __Vtemp1970[8U] = 0U;
            __Vtemp1970[9U] = 0U;
            __Vtemp1970[0xaU] = 0U;
            __Vtemp1970[0xbU] = 0U;
            __Vtemp1970[0xcU] = 0U;
            __Vtemp1970[0xdU] = 0U;
            __Vtemp1970[0xeU] = 0U;
            __Vtemp1970[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1971, __Vtemp1970, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1971[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_75 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1972[0U] = 1U;
            __Vtemp1972[1U] = 0U;
            __Vtemp1972[2U] = 0U;
            __Vtemp1972[3U] = 0U;
            __Vtemp1972[4U] = 0U;
            __Vtemp1972[5U] = 0U;
            __Vtemp1972[6U] = 0U;
            __Vtemp1972[7U] = 0U;
            __Vtemp1972[8U] = 0U;
            __Vtemp1972[9U] = 0U;
            __Vtemp1972[0xaU] = 0U;
            __Vtemp1972[0xbU] = 0U;
            __Vtemp1972[0xcU] = 0U;
            __Vtemp1972[0xdU] = 0U;
            __Vtemp1972[0xeU] = 0U;
            __Vtemp1972[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1973, __Vtemp1972, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1973[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_76 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1974[0U] = 1U;
            __Vtemp1974[1U] = 0U;
            __Vtemp1974[2U] = 0U;
            __Vtemp1974[3U] = 0U;
            __Vtemp1974[4U] = 0U;
            __Vtemp1974[5U] = 0U;
            __Vtemp1974[6U] = 0U;
            __Vtemp1974[7U] = 0U;
            __Vtemp1974[8U] = 0U;
            __Vtemp1974[9U] = 0U;
            __Vtemp1974[0xaU] = 0U;
            __Vtemp1974[0xbU] = 0U;
            __Vtemp1974[0xcU] = 0U;
            __Vtemp1974[0xdU] = 0U;
            __Vtemp1974[0xeU] = 0U;
            __Vtemp1974[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1975, __Vtemp1974, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1975[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_77 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1976[0U] = 1U;
            __Vtemp1976[1U] = 0U;
            __Vtemp1976[2U] = 0U;
            __Vtemp1976[3U] = 0U;
            __Vtemp1976[4U] = 0U;
            __Vtemp1976[5U] = 0U;
            __Vtemp1976[6U] = 0U;
            __Vtemp1976[7U] = 0U;
            __Vtemp1976[8U] = 0U;
            __Vtemp1976[9U] = 0U;
            __Vtemp1976[0xaU] = 0U;
            __Vtemp1976[0xbU] = 0U;
            __Vtemp1976[0xcU] = 0U;
            __Vtemp1976[0xdU] = 0U;
            __Vtemp1976[0xeU] = 0U;
            __Vtemp1976[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1977, __Vtemp1976, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1977[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_78 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1978[0U] = 1U;
            __Vtemp1978[1U] = 0U;
            __Vtemp1978[2U] = 0U;
            __Vtemp1978[3U] = 0U;
            __Vtemp1978[4U] = 0U;
            __Vtemp1978[5U] = 0U;
            __Vtemp1978[6U] = 0U;
            __Vtemp1978[7U] = 0U;
            __Vtemp1978[8U] = 0U;
            __Vtemp1978[9U] = 0U;
            __Vtemp1978[0xaU] = 0U;
            __Vtemp1978[0xbU] = 0U;
            __Vtemp1978[0xcU] = 0U;
            __Vtemp1978[0xdU] = 0U;
            __Vtemp1978[0xeU] = 0U;
            __Vtemp1978[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1979, __Vtemp1978, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1979[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_79 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
