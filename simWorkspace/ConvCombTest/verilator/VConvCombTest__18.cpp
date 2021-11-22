// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__77(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__77\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1754[16];
    WData/*511:0*/ __Vtemp1755[16];
    WData/*511:0*/ __Vtemp1756[16];
    WData/*511:0*/ __Vtemp1757[16];
    WData/*511:0*/ __Vtemp1758[16];
    WData/*511:0*/ __Vtemp1759[16];
    WData/*511:0*/ __Vtemp1760[16];
    WData/*511:0*/ __Vtemp1761[16];
    WData/*511:0*/ __Vtemp1762[16];
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
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1754[0U] = 1U;
            __Vtemp1754[1U] = 0U;
            __Vtemp1754[2U] = 0U;
            __Vtemp1754[3U] = 0U;
            __Vtemp1754[4U] = 0U;
            __Vtemp1754[5U] = 0U;
            __Vtemp1754[6U] = 0U;
            __Vtemp1754[7U] = 0U;
            __Vtemp1754[8U] = 0U;
            __Vtemp1754[9U] = 0U;
            __Vtemp1754[0xaU] = 0U;
            __Vtemp1754[0xbU] = 0U;
            __Vtemp1754[0xcU] = 0U;
            __Vtemp1754[0xdU] = 0U;
            __Vtemp1754[0xeU] = 0U;
            __Vtemp1754[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1755, __Vtemp1754, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1755[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_31 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1756[0U] = 1U;
            __Vtemp1756[1U] = 0U;
            __Vtemp1756[2U] = 0U;
            __Vtemp1756[3U] = 0U;
            __Vtemp1756[4U] = 0U;
            __Vtemp1756[5U] = 0U;
            __Vtemp1756[6U] = 0U;
            __Vtemp1756[7U] = 0U;
            __Vtemp1756[8U] = 0U;
            __Vtemp1756[9U] = 0U;
            __Vtemp1756[0xaU] = 0U;
            __Vtemp1756[0xbU] = 0U;
            __Vtemp1756[0xcU] = 0U;
            __Vtemp1756[0xdU] = 0U;
            __Vtemp1756[0xeU] = 0U;
            __Vtemp1756[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1757, __Vtemp1756, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1757[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_30 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1758[0U] = 1U;
            __Vtemp1758[1U] = 0U;
            __Vtemp1758[2U] = 0U;
            __Vtemp1758[3U] = 0U;
            __Vtemp1758[4U] = 0U;
            __Vtemp1758[5U] = 0U;
            __Vtemp1758[6U] = 0U;
            __Vtemp1758[7U] = 0U;
            __Vtemp1758[8U] = 0U;
            __Vtemp1758[9U] = 0U;
            __Vtemp1758[0xaU] = 0U;
            __Vtemp1758[0xbU] = 0U;
            __Vtemp1758[0xcU] = 0U;
            __Vtemp1758[0xdU] = 0U;
            __Vtemp1758[0xeU] = 0U;
            __Vtemp1758[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1759, __Vtemp1758, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1759[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_29 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1760[0U] = 1U;
            __Vtemp1760[1U] = 0U;
            __Vtemp1760[2U] = 0U;
            __Vtemp1760[3U] = 0U;
            __Vtemp1760[4U] = 0U;
            __Vtemp1760[5U] = 0U;
            __Vtemp1760[6U] = 0U;
            __Vtemp1760[7U] = 0U;
            __Vtemp1760[8U] = 0U;
            __Vtemp1760[9U] = 0U;
            __Vtemp1760[0xaU] = 0U;
            __Vtemp1760[0xbU] = 0U;
            __Vtemp1760[0xcU] = 0U;
            __Vtemp1760[0xdU] = 0U;
            __Vtemp1760[0xeU] = 0U;
            __Vtemp1760[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1761, __Vtemp1760, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1761[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_28 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1762[0U] = 1U;
            __Vtemp1762[1U] = 0U;
            __Vtemp1762[2U] = 0U;
            __Vtemp1762[3U] = 0U;
            __Vtemp1762[4U] = 0U;
            __Vtemp1762[5U] = 0U;
            __Vtemp1762[6U] = 0U;
            __Vtemp1762[7U] = 0U;
            __Vtemp1762[8U] = 0U;
            __Vtemp1762[9U] = 0U;
            __Vtemp1762[0xaU] = 0U;
            __Vtemp1762[0xbU] = 0U;
            __Vtemp1762[0xcU] = 0U;
            __Vtemp1762[0xdU] = 0U;
            __Vtemp1762[0xeU] = 0U;
            __Vtemp1762[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1763, __Vtemp1762, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1763[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_27 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1764[0U] = 1U;
            __Vtemp1764[1U] = 0U;
            __Vtemp1764[2U] = 0U;
            __Vtemp1764[3U] = 0U;
            __Vtemp1764[4U] = 0U;
            __Vtemp1764[5U] = 0U;
            __Vtemp1764[6U] = 0U;
            __Vtemp1764[7U] = 0U;
            __Vtemp1764[8U] = 0U;
            __Vtemp1764[9U] = 0U;
            __Vtemp1764[0xaU] = 0U;
            __Vtemp1764[0xbU] = 0U;
            __Vtemp1764[0xcU] = 0U;
            __Vtemp1764[0xdU] = 0U;
            __Vtemp1764[0xeU] = 0U;
            __Vtemp1764[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1765, __Vtemp1764, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1765[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_26 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1766[0U] = 1U;
            __Vtemp1766[1U] = 0U;
            __Vtemp1766[2U] = 0U;
            __Vtemp1766[3U] = 0U;
            __Vtemp1766[4U] = 0U;
            __Vtemp1766[5U] = 0U;
            __Vtemp1766[6U] = 0U;
            __Vtemp1766[7U] = 0U;
            __Vtemp1766[8U] = 0U;
            __Vtemp1766[9U] = 0U;
            __Vtemp1766[0xaU] = 0U;
            __Vtemp1766[0xbU] = 0U;
            __Vtemp1766[0xcU] = 0U;
            __Vtemp1766[0xdU] = 0U;
            __Vtemp1766[0xeU] = 0U;
            __Vtemp1766[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1767, __Vtemp1766, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1767[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_25 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1768[0U] = 1U;
            __Vtemp1768[1U] = 0U;
            __Vtemp1768[2U] = 0U;
            __Vtemp1768[3U] = 0U;
            __Vtemp1768[4U] = 0U;
            __Vtemp1768[5U] = 0U;
            __Vtemp1768[6U] = 0U;
            __Vtemp1768[7U] = 0U;
            __Vtemp1768[8U] = 0U;
            __Vtemp1768[9U] = 0U;
            __Vtemp1768[0xaU] = 0U;
            __Vtemp1768[0xbU] = 0U;
            __Vtemp1768[0xcU] = 0U;
            __Vtemp1768[0xdU] = 0U;
            __Vtemp1768[0xeU] = 0U;
            __Vtemp1768[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1769, __Vtemp1768, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1769[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_24 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1770[0U] = 1U;
            __Vtemp1770[1U] = 0U;
            __Vtemp1770[2U] = 0U;
            __Vtemp1770[3U] = 0U;
            __Vtemp1770[4U] = 0U;
            __Vtemp1770[5U] = 0U;
            __Vtemp1770[6U] = 0U;
            __Vtemp1770[7U] = 0U;
            __Vtemp1770[8U] = 0U;
            __Vtemp1770[9U] = 0U;
            __Vtemp1770[0xaU] = 0U;
            __Vtemp1770[0xbU] = 0U;
            __Vtemp1770[0xcU] = 0U;
            __Vtemp1770[0xdU] = 0U;
            __Vtemp1770[0xeU] = 0U;
            __Vtemp1770[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1771, __Vtemp1770, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1771[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_23 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1772[0U] = 1U;
            __Vtemp1772[1U] = 0U;
            __Vtemp1772[2U] = 0U;
            __Vtemp1772[3U] = 0U;
            __Vtemp1772[4U] = 0U;
            __Vtemp1772[5U] = 0U;
            __Vtemp1772[6U] = 0U;
            __Vtemp1772[7U] = 0U;
            __Vtemp1772[8U] = 0U;
            __Vtemp1772[9U] = 0U;
            __Vtemp1772[0xaU] = 0U;
            __Vtemp1772[0xbU] = 0U;
            __Vtemp1772[0xcU] = 0U;
            __Vtemp1772[0xdU] = 0U;
            __Vtemp1772[0xeU] = 0U;
            __Vtemp1772[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1773, __Vtemp1772, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1773[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_22 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1774[0U] = 1U;
            __Vtemp1774[1U] = 0U;
            __Vtemp1774[2U] = 0U;
            __Vtemp1774[3U] = 0U;
            __Vtemp1774[4U] = 0U;
            __Vtemp1774[5U] = 0U;
            __Vtemp1774[6U] = 0U;
            __Vtemp1774[7U] = 0U;
            __Vtemp1774[8U] = 0U;
            __Vtemp1774[9U] = 0U;
            __Vtemp1774[0xaU] = 0U;
            __Vtemp1774[0xbU] = 0U;
            __Vtemp1774[0xcU] = 0U;
            __Vtemp1774[0xdU] = 0U;
            __Vtemp1774[0xeU] = 0U;
            __Vtemp1774[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1775, __Vtemp1774, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1775[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_21 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1776[0U] = 1U;
            __Vtemp1776[1U] = 0U;
            __Vtemp1776[2U] = 0U;
            __Vtemp1776[3U] = 0U;
            __Vtemp1776[4U] = 0U;
            __Vtemp1776[5U] = 0U;
            __Vtemp1776[6U] = 0U;
            __Vtemp1776[7U] = 0U;
            __Vtemp1776[8U] = 0U;
            __Vtemp1776[9U] = 0U;
            __Vtemp1776[0xaU] = 0U;
            __Vtemp1776[0xbU] = 0U;
            __Vtemp1776[0xcU] = 0U;
            __Vtemp1776[0xdU] = 0U;
            __Vtemp1776[0xeU] = 0U;
            __Vtemp1776[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1777, __Vtemp1776, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1777[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_20 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1778[0U] = 1U;
            __Vtemp1778[1U] = 0U;
            __Vtemp1778[2U] = 0U;
            __Vtemp1778[3U] = 0U;
            __Vtemp1778[4U] = 0U;
            __Vtemp1778[5U] = 0U;
            __Vtemp1778[6U] = 0U;
            __Vtemp1778[7U] = 0U;
            __Vtemp1778[8U] = 0U;
            __Vtemp1778[9U] = 0U;
            __Vtemp1778[0xaU] = 0U;
            __Vtemp1778[0xbU] = 0U;
            __Vtemp1778[0xcU] = 0U;
            __Vtemp1778[0xdU] = 0U;
            __Vtemp1778[0xeU] = 0U;
            __Vtemp1778[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1779, __Vtemp1778, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1779[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_19 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1780[0U] = 1U;
            __Vtemp1780[1U] = 0U;
            __Vtemp1780[2U] = 0U;
            __Vtemp1780[3U] = 0U;
            __Vtemp1780[4U] = 0U;
            __Vtemp1780[5U] = 0U;
            __Vtemp1780[6U] = 0U;
            __Vtemp1780[7U] = 0U;
            __Vtemp1780[8U] = 0U;
            __Vtemp1780[9U] = 0U;
            __Vtemp1780[0xaU] = 0U;
            __Vtemp1780[0xbU] = 0U;
            __Vtemp1780[0xcU] = 0U;
            __Vtemp1780[0xdU] = 0U;
            __Vtemp1780[0xeU] = 0U;
            __Vtemp1780[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1781, __Vtemp1780, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1781[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_18 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1782[0U] = 1U;
            __Vtemp1782[1U] = 0U;
            __Vtemp1782[2U] = 0U;
            __Vtemp1782[3U] = 0U;
            __Vtemp1782[4U] = 0U;
            __Vtemp1782[5U] = 0U;
            __Vtemp1782[6U] = 0U;
            __Vtemp1782[7U] = 0U;
            __Vtemp1782[8U] = 0U;
            __Vtemp1782[9U] = 0U;
            __Vtemp1782[0xaU] = 0U;
            __Vtemp1782[0xbU] = 0U;
            __Vtemp1782[0xcU] = 0U;
            __Vtemp1782[0xdU] = 0U;
            __Vtemp1782[0xeU] = 0U;
            __Vtemp1782[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1783, __Vtemp1782, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1783[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_17 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1784[0U] = 1U;
            __Vtemp1784[1U] = 0U;
            __Vtemp1784[2U] = 0U;
            __Vtemp1784[3U] = 0U;
            __Vtemp1784[4U] = 0U;
            __Vtemp1784[5U] = 0U;
            __Vtemp1784[6U] = 0U;
            __Vtemp1784[7U] = 0U;
            __Vtemp1784[8U] = 0U;
            __Vtemp1784[9U] = 0U;
            __Vtemp1784[0xaU] = 0U;
            __Vtemp1784[0xbU] = 0U;
            __Vtemp1784[0xcU] = 0U;
            __Vtemp1784[0xdU] = 0U;
            __Vtemp1784[0xeU] = 0U;
            __Vtemp1784[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1785, __Vtemp1784, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1785[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_16 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1786[0U] = 1U;
            __Vtemp1786[1U] = 0U;
            __Vtemp1786[2U] = 0U;
            __Vtemp1786[3U] = 0U;
            __Vtemp1786[4U] = 0U;
            __Vtemp1786[5U] = 0U;
            __Vtemp1786[6U] = 0U;
            __Vtemp1786[7U] = 0U;
            __Vtemp1786[8U] = 0U;
            __Vtemp1786[9U] = 0U;
            __Vtemp1786[0xaU] = 0U;
            __Vtemp1786[0xbU] = 0U;
            __Vtemp1786[0xcU] = 0U;
            __Vtemp1786[0xdU] = 0U;
            __Vtemp1786[0xeU] = 0U;
            __Vtemp1786[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1787, __Vtemp1786, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1787[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_15 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1788[0U] = 1U;
            __Vtemp1788[1U] = 0U;
            __Vtemp1788[2U] = 0U;
            __Vtemp1788[3U] = 0U;
            __Vtemp1788[4U] = 0U;
            __Vtemp1788[5U] = 0U;
            __Vtemp1788[6U] = 0U;
            __Vtemp1788[7U] = 0U;
            __Vtemp1788[8U] = 0U;
            __Vtemp1788[9U] = 0U;
            __Vtemp1788[0xaU] = 0U;
            __Vtemp1788[0xbU] = 0U;
            __Vtemp1788[0xcU] = 0U;
            __Vtemp1788[0xdU] = 0U;
            __Vtemp1788[0xeU] = 0U;
            __Vtemp1788[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1789, __Vtemp1788, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1789[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_14 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1790[0U] = 1U;
            __Vtemp1790[1U] = 0U;
            __Vtemp1790[2U] = 0U;
            __Vtemp1790[3U] = 0U;
            __Vtemp1790[4U] = 0U;
            __Vtemp1790[5U] = 0U;
            __Vtemp1790[6U] = 0U;
            __Vtemp1790[7U] = 0U;
            __Vtemp1790[8U] = 0U;
            __Vtemp1790[9U] = 0U;
            __Vtemp1790[0xaU] = 0U;
            __Vtemp1790[0xbU] = 0U;
            __Vtemp1790[0xcU] = 0U;
            __Vtemp1790[0xdU] = 0U;
            __Vtemp1790[0xeU] = 0U;
            __Vtemp1790[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1791, __Vtemp1790, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1791[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_13 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1792[0U] = 1U;
            __Vtemp1792[1U] = 0U;
            __Vtemp1792[2U] = 0U;
            __Vtemp1792[3U] = 0U;
            __Vtemp1792[4U] = 0U;
            __Vtemp1792[5U] = 0U;
            __Vtemp1792[6U] = 0U;
            __Vtemp1792[7U] = 0U;
            __Vtemp1792[8U] = 0U;
            __Vtemp1792[9U] = 0U;
            __Vtemp1792[0xaU] = 0U;
            __Vtemp1792[0xbU] = 0U;
            __Vtemp1792[0xcU] = 0U;
            __Vtemp1792[0xdU] = 0U;
            __Vtemp1792[0xeU] = 0U;
            __Vtemp1792[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1793, __Vtemp1792, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1793[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_12 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1794[0U] = 1U;
            __Vtemp1794[1U] = 0U;
            __Vtemp1794[2U] = 0U;
            __Vtemp1794[3U] = 0U;
            __Vtemp1794[4U] = 0U;
            __Vtemp1794[5U] = 0U;
            __Vtemp1794[6U] = 0U;
            __Vtemp1794[7U] = 0U;
            __Vtemp1794[8U] = 0U;
            __Vtemp1794[9U] = 0U;
            __Vtemp1794[0xaU] = 0U;
            __Vtemp1794[0xbU] = 0U;
            __Vtemp1794[0xcU] = 0U;
            __Vtemp1794[0xdU] = 0U;
            __Vtemp1794[0xeU] = 0U;
            __Vtemp1794[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1795, __Vtemp1794, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1795[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_11 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1796[0U] = 1U;
            __Vtemp1796[1U] = 0U;
            __Vtemp1796[2U] = 0U;
            __Vtemp1796[3U] = 0U;
            __Vtemp1796[4U] = 0U;
            __Vtemp1796[5U] = 0U;
            __Vtemp1796[6U] = 0U;
            __Vtemp1796[7U] = 0U;
            __Vtemp1796[8U] = 0U;
            __Vtemp1796[9U] = 0U;
            __Vtemp1796[0xaU] = 0U;
            __Vtemp1796[0xbU] = 0U;
            __Vtemp1796[0xcU] = 0U;
            __Vtemp1796[0xdU] = 0U;
            __Vtemp1796[0xeU] = 0U;
            __Vtemp1796[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1797, __Vtemp1796, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1797[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_10 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1798[0U] = 1U;
            __Vtemp1798[1U] = 0U;
            __Vtemp1798[2U] = 0U;
            __Vtemp1798[3U] = 0U;
            __Vtemp1798[4U] = 0U;
            __Vtemp1798[5U] = 0U;
            __Vtemp1798[6U] = 0U;
            __Vtemp1798[7U] = 0U;
            __Vtemp1798[8U] = 0U;
            __Vtemp1798[9U] = 0U;
            __Vtemp1798[0xaU] = 0U;
            __Vtemp1798[0xbU] = 0U;
            __Vtemp1798[0xcU] = 0U;
            __Vtemp1798[0xdU] = 0U;
            __Vtemp1798[0xeU] = 0U;
            __Vtemp1798[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1799, __Vtemp1798, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1799[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_9 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1800[0U] = 1U;
            __Vtemp1800[1U] = 0U;
            __Vtemp1800[2U] = 0U;
            __Vtemp1800[3U] = 0U;
            __Vtemp1800[4U] = 0U;
            __Vtemp1800[5U] = 0U;
            __Vtemp1800[6U] = 0U;
            __Vtemp1800[7U] = 0U;
            __Vtemp1800[8U] = 0U;
            __Vtemp1800[9U] = 0U;
            __Vtemp1800[0xaU] = 0U;
            __Vtemp1800[0xbU] = 0U;
            __Vtemp1800[0xcU] = 0U;
            __Vtemp1800[0xdU] = 0U;
            __Vtemp1800[0xeU] = 0U;
            __Vtemp1800[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1801, __Vtemp1800, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1801[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_8 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1802[0U] = 1U;
            __Vtemp1802[1U] = 0U;
            __Vtemp1802[2U] = 0U;
            __Vtemp1802[3U] = 0U;
            __Vtemp1802[4U] = 0U;
            __Vtemp1802[5U] = 0U;
            __Vtemp1802[6U] = 0U;
            __Vtemp1802[7U] = 0U;
            __Vtemp1802[8U] = 0U;
            __Vtemp1802[9U] = 0U;
            __Vtemp1802[0xaU] = 0U;
            __Vtemp1802[0xbU] = 0U;
            __Vtemp1802[0xcU] = 0U;
            __Vtemp1802[0xdU] = 0U;
            __Vtemp1802[0xeU] = 0U;
            __Vtemp1802[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1803, __Vtemp1802, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1803[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_7 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1804[0U] = 1U;
            __Vtemp1804[1U] = 0U;
            __Vtemp1804[2U] = 0U;
            __Vtemp1804[3U] = 0U;
            __Vtemp1804[4U] = 0U;
            __Vtemp1804[5U] = 0U;
            __Vtemp1804[6U] = 0U;
            __Vtemp1804[7U] = 0U;
            __Vtemp1804[8U] = 0U;
            __Vtemp1804[9U] = 0U;
            __Vtemp1804[0xaU] = 0U;
            __Vtemp1804[0xbU] = 0U;
            __Vtemp1804[0xcU] = 0U;
            __Vtemp1804[0xdU] = 0U;
            __Vtemp1804[0xeU] = 0U;
            __Vtemp1804[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1805, __Vtemp1804, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1805[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_6 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1806[0U] = 1U;
            __Vtemp1806[1U] = 0U;
            __Vtemp1806[2U] = 0U;
            __Vtemp1806[3U] = 0U;
            __Vtemp1806[4U] = 0U;
            __Vtemp1806[5U] = 0U;
            __Vtemp1806[6U] = 0U;
            __Vtemp1806[7U] = 0U;
            __Vtemp1806[8U] = 0U;
            __Vtemp1806[9U] = 0U;
            __Vtemp1806[0xaU] = 0U;
            __Vtemp1806[0xbU] = 0U;
            __Vtemp1806[0xcU] = 0U;
            __Vtemp1806[0xdU] = 0U;
            __Vtemp1806[0xeU] = 0U;
            __Vtemp1806[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1807, __Vtemp1806, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1807[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_5 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__78(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__78\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1808[16];
    WData/*511:0*/ __Vtemp1809[16];
    WData/*511:0*/ __Vtemp1810[16];
    WData/*511:0*/ __Vtemp1811[16];
    WData/*511:0*/ __Vtemp1812[16];
    WData/*511:0*/ __Vtemp1813[16];
    WData/*511:0*/ __Vtemp1814[16];
    WData/*511:0*/ __Vtemp1815[16];
    WData/*511:0*/ __Vtemp1816[16];
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
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1808[0U] = 1U;
            __Vtemp1808[1U] = 0U;
            __Vtemp1808[2U] = 0U;
            __Vtemp1808[3U] = 0U;
            __Vtemp1808[4U] = 0U;
            __Vtemp1808[5U] = 0U;
            __Vtemp1808[6U] = 0U;
            __Vtemp1808[7U] = 0U;
            __Vtemp1808[8U] = 0U;
            __Vtemp1808[9U] = 0U;
            __Vtemp1808[0xaU] = 0U;
            __Vtemp1808[0xbU] = 0U;
            __Vtemp1808[0xcU] = 0U;
            __Vtemp1808[0xdU] = 0U;
            __Vtemp1808[0xeU] = 0U;
            __Vtemp1808[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1809, __Vtemp1808, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1809[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_4 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1810[0U] = 1U;
            __Vtemp1810[1U] = 0U;
            __Vtemp1810[2U] = 0U;
            __Vtemp1810[3U] = 0U;
            __Vtemp1810[4U] = 0U;
            __Vtemp1810[5U] = 0U;
            __Vtemp1810[6U] = 0U;
            __Vtemp1810[7U] = 0U;
            __Vtemp1810[8U] = 0U;
            __Vtemp1810[9U] = 0U;
            __Vtemp1810[0xaU] = 0U;
            __Vtemp1810[0xbU] = 0U;
            __Vtemp1810[0xcU] = 0U;
            __Vtemp1810[0xdU] = 0U;
            __Vtemp1810[0xeU] = 0U;
            __Vtemp1810[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1811, __Vtemp1810, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1811[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_3 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1812[0U] = 1U;
            __Vtemp1812[1U] = 0U;
            __Vtemp1812[2U] = 0U;
            __Vtemp1812[3U] = 0U;
            __Vtemp1812[4U] = 0U;
            __Vtemp1812[5U] = 0U;
            __Vtemp1812[6U] = 0U;
            __Vtemp1812[7U] = 0U;
            __Vtemp1812[8U] = 0U;
            __Vtemp1812[9U] = 0U;
            __Vtemp1812[0xaU] = 0U;
            __Vtemp1812[0xbU] = 0U;
            __Vtemp1812[0xcU] = 0U;
            __Vtemp1812[0xdU] = 0U;
            __Vtemp1812[0xeU] = 0U;
            __Vtemp1812[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1813, __Vtemp1812, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1813[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_2 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1814[0U] = 1U;
            __Vtemp1814[1U] = 0U;
            __Vtemp1814[2U] = 0U;
            __Vtemp1814[3U] = 0U;
            __Vtemp1814[4U] = 0U;
            __Vtemp1814[5U] = 0U;
            __Vtemp1814[6U] = 0U;
            __Vtemp1814[7U] = 0U;
            __Vtemp1814[8U] = 0U;
            __Vtemp1814[9U] = 0U;
            __Vtemp1814[0xaU] = 0U;
            __Vtemp1814[0xbU] = 0U;
            __Vtemp1814[0xcU] = 0U;
            __Vtemp1814[0xdU] = 0U;
            __Vtemp1814[0xeU] = 0U;
            __Vtemp1814[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1815, __Vtemp1814, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1815[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_100 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1816[0U] = 1U;
            __Vtemp1816[1U] = 0U;
            __Vtemp1816[2U] = 0U;
            __Vtemp1816[3U] = 0U;
            __Vtemp1816[4U] = 0U;
            __Vtemp1816[5U] = 0U;
            __Vtemp1816[6U] = 0U;
            __Vtemp1816[7U] = 0U;
            __Vtemp1816[8U] = 0U;
            __Vtemp1816[9U] = 0U;
            __Vtemp1816[0xaU] = 0U;
            __Vtemp1816[0xbU] = 0U;
            __Vtemp1816[0xcU] = 0U;
            __Vtemp1816[0xdU] = 0U;
            __Vtemp1816[0xeU] = 0U;
            __Vtemp1816[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1817, __Vtemp1816, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1817[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_202 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1818[0U] = 1U;
            __Vtemp1818[1U] = 0U;
            __Vtemp1818[2U] = 0U;
            __Vtemp1818[3U] = 0U;
            __Vtemp1818[4U] = 0U;
            __Vtemp1818[5U] = 0U;
            __Vtemp1818[6U] = 0U;
            __Vtemp1818[7U] = 0U;
            __Vtemp1818[8U] = 0U;
            __Vtemp1818[9U] = 0U;
            __Vtemp1818[0xaU] = 0U;
            __Vtemp1818[0xbU] = 0U;
            __Vtemp1818[0xcU] = 0U;
            __Vtemp1818[0xdU] = 0U;
            __Vtemp1818[0xeU] = 0U;
            __Vtemp1818[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1819, __Vtemp1818, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1819[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_1 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1820[0U] = 1U;
            __Vtemp1820[1U] = 0U;
            __Vtemp1820[2U] = 0U;
            __Vtemp1820[3U] = 0U;
            __Vtemp1820[4U] = 0U;
            __Vtemp1820[5U] = 0U;
            __Vtemp1820[6U] = 0U;
            __Vtemp1820[7U] = 0U;
            __Vtemp1820[8U] = 0U;
            __Vtemp1820[9U] = 0U;
            __Vtemp1820[0xaU] = 0U;
            __Vtemp1820[0xbU] = 0U;
            __Vtemp1820[0xcU] = 0U;
            __Vtemp1820[0xdU] = 0U;
            __Vtemp1820[0xeU] = 0U;
            __Vtemp1820[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1821, __Vtemp1820, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1821[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_99 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1822[0U] = 1U;
            __Vtemp1822[1U] = 0U;
            __Vtemp1822[2U] = 0U;
            __Vtemp1822[3U] = 0U;
            __Vtemp1822[4U] = 0U;
            __Vtemp1822[5U] = 0U;
            __Vtemp1822[6U] = 0U;
            __Vtemp1822[7U] = 0U;
            __Vtemp1822[8U] = 0U;
            __Vtemp1822[9U] = 0U;
            __Vtemp1822[0xaU] = 0U;
            __Vtemp1822[0xbU] = 0U;
            __Vtemp1822[0xcU] = 0U;
            __Vtemp1822[0xdU] = 0U;
            __Vtemp1822[0xeU] = 0U;
            __Vtemp1822[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1823, __Vtemp1822, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1823[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_201 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1824[0U] = 1U;
            __Vtemp1824[1U] = 0U;
            __Vtemp1824[2U] = 0U;
            __Vtemp1824[3U] = 0U;
            __Vtemp1824[4U] = 0U;
            __Vtemp1824[5U] = 0U;
            __Vtemp1824[6U] = 0U;
            __Vtemp1824[7U] = 0U;
            __Vtemp1824[8U] = 0U;
            __Vtemp1824[9U] = 0U;
            __Vtemp1824[0xaU] = 0U;
            __Vtemp1824[0xbU] = 0U;
            __Vtemp1824[0xcU] = 0U;
            __Vtemp1824[0xdU] = 0U;
            __Vtemp1824[0xeU] = 0U;
            __Vtemp1824[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1825, __Vtemp1824, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1825[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_98 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1826[0U] = 1U;
            __Vtemp1826[1U] = 0U;
            __Vtemp1826[2U] = 0U;
            __Vtemp1826[3U] = 0U;
            __Vtemp1826[4U] = 0U;
            __Vtemp1826[5U] = 0U;
            __Vtemp1826[6U] = 0U;
            __Vtemp1826[7U] = 0U;
            __Vtemp1826[8U] = 0U;
            __Vtemp1826[9U] = 0U;
            __Vtemp1826[0xaU] = 0U;
            __Vtemp1826[0xbU] = 0U;
            __Vtemp1826[0xcU] = 0U;
            __Vtemp1826[0xdU] = 0U;
            __Vtemp1826[0xeU] = 0U;
            __Vtemp1826[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1827, __Vtemp1826, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1827[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_148 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1828[0U] = 1U;
            __Vtemp1828[1U] = 0U;
            __Vtemp1828[2U] = 0U;
            __Vtemp1828[3U] = 0U;
            __Vtemp1828[4U] = 0U;
            __Vtemp1828[5U] = 0U;
            __Vtemp1828[6U] = 0U;
            __Vtemp1828[7U] = 0U;
            __Vtemp1828[8U] = 0U;
            __Vtemp1828[9U] = 0U;
            __Vtemp1828[0xaU] = 0U;
            __Vtemp1828[0xbU] = 0U;
            __Vtemp1828[0xcU] = 0U;
            __Vtemp1828[0xdU] = 0U;
            __Vtemp1828[0xeU] = 0U;
            __Vtemp1828[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1829, __Vtemp1828, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1829[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_147 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1830[0U] = 1U;
            __Vtemp1830[1U] = 0U;
            __Vtemp1830[2U] = 0U;
            __Vtemp1830[3U] = 0U;
            __Vtemp1830[4U] = 0U;
            __Vtemp1830[5U] = 0U;
            __Vtemp1830[6U] = 0U;
            __Vtemp1830[7U] = 0U;
            __Vtemp1830[8U] = 0U;
            __Vtemp1830[9U] = 0U;
            __Vtemp1830[0xaU] = 0U;
            __Vtemp1830[0xbU] = 0U;
            __Vtemp1830[0xcU] = 0U;
            __Vtemp1830[0xdU] = 0U;
            __Vtemp1830[0xeU] = 0U;
            __Vtemp1830[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1831, __Vtemp1830, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1831[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_146 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
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
            if ((0x20000U & __Vtemp1833[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_145 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
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
            if ((0x10000U & __Vtemp1835[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_144 
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
            if ((0x8000U & __Vtemp1837[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_143 
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
            if ((0x4000U & __Vtemp1839[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_142 
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
            if ((0x2000U & __Vtemp1841[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_141 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
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
            if ((0x1000U & __Vtemp1843[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_140 
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
            if ((0x800U & __Vtemp1845[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_139 
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
            if ((0x400U & __Vtemp1847[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_138 
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
            if ((0x200U & __Vtemp1849[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_137 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
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
            if ((0x100U & __Vtemp1851[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_136 
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
            if ((0x80U & __Vtemp1853[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_135 
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
            if ((0x40U & __Vtemp1855[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_134 
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
            if ((0x20U & __Vtemp1857[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_133 
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
            if ((0x10U & __Vtemp1859[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_132 
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
            if ((8U & __Vtemp1861[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_131 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
