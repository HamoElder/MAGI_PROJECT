// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__76(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__76\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1656[16];
    WData/*511:0*/ __Vtemp1657[16];
    WData/*511:0*/ __Vtemp1658[16];
    WData/*511:0*/ __Vtemp1659[16];
    WData/*511:0*/ __Vtemp1660[16];
    WData/*511:0*/ __Vtemp1661[16];
    WData/*511:0*/ __Vtemp1662[16];
    WData/*511:0*/ __Vtemp1663[16];
    WData/*511:0*/ __Vtemp1664[16];
    WData/*511:0*/ __Vtemp1665[16];
    WData/*511:0*/ __Vtemp1666[16];
    WData/*511:0*/ __Vtemp1667[16];
    WData/*511:0*/ __Vtemp1668[16];
    WData/*511:0*/ __Vtemp1669[16];
    WData/*511:0*/ __Vtemp1670[16];
    WData/*511:0*/ __Vtemp1671[16];
    WData/*511:0*/ __Vtemp1672[16];
    WData/*511:0*/ __Vtemp1673[16];
    WData/*511:0*/ __Vtemp1674[16];
    WData/*511:0*/ __Vtemp1675[16];
    WData/*511:0*/ __Vtemp1676[16];
    WData/*511:0*/ __Vtemp1677[16];
    WData/*511:0*/ __Vtemp1678[16];
    WData/*511:0*/ __Vtemp1679[16];
    WData/*511:0*/ __Vtemp1680[16];
    WData/*511:0*/ __Vtemp1681[16];
    WData/*511:0*/ __Vtemp1682[16];
    WData/*511:0*/ __Vtemp1683[16];
    WData/*511:0*/ __Vtemp1684[16];
    WData/*511:0*/ __Vtemp1685[16];
    WData/*511:0*/ __Vtemp1686[16];
    WData/*511:0*/ __Vtemp1687[16];
    WData/*511:0*/ __Vtemp1688[16];
    WData/*511:0*/ __Vtemp1689[16];
    WData/*511:0*/ __Vtemp1690[16];
    WData/*511:0*/ __Vtemp1691[16];
    WData/*511:0*/ __Vtemp1692[16];
    WData/*511:0*/ __Vtemp1693[16];
    WData/*511:0*/ __Vtemp1694[16];
    WData/*511:0*/ __Vtemp1695[16];
    WData/*511:0*/ __Vtemp1696[16];
    WData/*511:0*/ __Vtemp1697[16];
    WData/*511:0*/ __Vtemp1698[16];
    WData/*511:0*/ __Vtemp1699[16];
    WData/*511:0*/ __Vtemp1700[16];
    WData/*511:0*/ __Vtemp1701[16];
    WData/*511:0*/ __Vtemp1702[16];
    WData/*511:0*/ __Vtemp1703[16];
    WData/*511:0*/ __Vtemp1704[16];
    WData/*511:0*/ __Vtemp1705[16];
    WData/*511:0*/ __Vtemp1706[16];
    WData/*511:0*/ __Vtemp1707[16];
    WData/*511:0*/ __Vtemp1708[16];
    WData/*511:0*/ __Vtemp1709[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1656[0U] = 1U;
            __Vtemp1656[1U] = 0U;
            __Vtemp1656[2U] = 0U;
            __Vtemp1656[3U] = 0U;
            __Vtemp1656[4U] = 0U;
            __Vtemp1656[5U] = 0U;
            __Vtemp1656[6U] = 0U;
            __Vtemp1656[7U] = 0U;
            __Vtemp1656[8U] = 0U;
            __Vtemp1656[9U] = 0U;
            __Vtemp1656[0xaU] = 0U;
            __Vtemp1656[0xbU] = 0U;
            __Vtemp1656[0xcU] = 0U;
            __Vtemp1656[0xdU] = 0U;
            __Vtemp1656[0xeU] = 0U;
            __Vtemp1656[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1657, __Vtemp1656, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1657[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_107 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1658[0U] = 1U;
            __Vtemp1658[1U] = 0U;
            __Vtemp1658[2U] = 0U;
            __Vtemp1658[3U] = 0U;
            __Vtemp1658[4U] = 0U;
            __Vtemp1658[5U] = 0U;
            __Vtemp1658[6U] = 0U;
            __Vtemp1658[7U] = 0U;
            __Vtemp1658[8U] = 0U;
            __Vtemp1658[9U] = 0U;
            __Vtemp1658[0xaU] = 0U;
            __Vtemp1658[0xbU] = 0U;
            __Vtemp1658[0xcU] = 0U;
            __Vtemp1658[0xdU] = 0U;
            __Vtemp1658[0xeU] = 0U;
            __Vtemp1658[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1659, __Vtemp1658, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1659[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_24 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1660[0U] = 1U;
            __Vtemp1660[1U] = 0U;
            __Vtemp1660[2U] = 0U;
            __Vtemp1660[3U] = 0U;
            __Vtemp1660[4U] = 0U;
            __Vtemp1660[5U] = 0U;
            __Vtemp1660[6U] = 0U;
            __Vtemp1660[7U] = 0U;
            __Vtemp1660[8U] = 0U;
            __Vtemp1660[9U] = 0U;
            __Vtemp1660[0xaU] = 0U;
            __Vtemp1660[0xbU] = 0U;
            __Vtemp1660[0xcU] = 0U;
            __Vtemp1660[0xdU] = 0U;
            __Vtemp1660[0xeU] = 0U;
            __Vtemp1660[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1661, __Vtemp1660, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1661[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_176 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1662[0U] = 1U;
            __Vtemp1662[1U] = 0U;
            __Vtemp1662[2U] = 0U;
            __Vtemp1662[3U] = 0U;
            __Vtemp1662[4U] = 0U;
            __Vtemp1662[5U] = 0U;
            __Vtemp1662[6U] = 0U;
            __Vtemp1662[7U] = 0U;
            __Vtemp1662[8U] = 0U;
            __Vtemp1662[9U] = 0U;
            __Vtemp1662[0xaU] = 0U;
            __Vtemp1662[0xbU] = 0U;
            __Vtemp1662[0xcU] = 0U;
            __Vtemp1662[0xdU] = 0U;
            __Vtemp1662[0xeU] = 0U;
            __Vtemp1662[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1663, __Vtemp1662, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1663[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_11 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1664[0U] = 1U;
            __Vtemp1664[1U] = 0U;
            __Vtemp1664[2U] = 0U;
            __Vtemp1664[3U] = 0U;
            __Vtemp1664[4U] = 0U;
            __Vtemp1664[5U] = 0U;
            __Vtemp1664[6U] = 0U;
            __Vtemp1664[7U] = 0U;
            __Vtemp1664[8U] = 0U;
            __Vtemp1664[9U] = 0U;
            __Vtemp1664[0xaU] = 0U;
            __Vtemp1664[0xbU] = 0U;
            __Vtemp1664[0xcU] = 0U;
            __Vtemp1664[0xdU] = 0U;
            __Vtemp1664[0xeU] = 0U;
            __Vtemp1664[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1665, __Vtemp1664, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1665[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_102 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1666[0U] = 1U;
            __Vtemp1666[1U] = 0U;
            __Vtemp1666[2U] = 0U;
            __Vtemp1666[3U] = 0U;
            __Vtemp1666[4U] = 0U;
            __Vtemp1666[5U] = 0U;
            __Vtemp1666[6U] = 0U;
            __Vtemp1666[7U] = 0U;
            __Vtemp1666[8U] = 0U;
            __Vtemp1666[9U] = 0U;
            __Vtemp1666[0xaU] = 0U;
            __Vtemp1666[0xbU] = 0U;
            __Vtemp1666[0xcU] = 0U;
            __Vtemp1666[0xdU] = 0U;
            __Vtemp1666[0xeU] = 0U;
            __Vtemp1666[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1667, __Vtemp1666, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1667[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_0 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1668[0U] = 1U;
            __Vtemp1668[1U] = 0U;
            __Vtemp1668[2U] = 0U;
            __Vtemp1668[3U] = 0U;
            __Vtemp1668[4U] = 0U;
            __Vtemp1668[5U] = 0U;
            __Vtemp1668[6U] = 0U;
            __Vtemp1668[7U] = 0U;
            __Vtemp1668[8U] = 0U;
            __Vtemp1668[9U] = 0U;
            __Vtemp1668[0xaU] = 0U;
            __Vtemp1668[0xbU] = 0U;
            __Vtemp1668[0xcU] = 0U;
            __Vtemp1668[0xdU] = 0U;
            __Vtemp1668[0xeU] = 0U;
            __Vtemp1668[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1669, __Vtemp1668, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1669[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_5 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1670[0U] = 1U;
            __Vtemp1670[1U] = 0U;
            __Vtemp1670[2U] = 0U;
            __Vtemp1670[3U] = 0U;
            __Vtemp1670[4U] = 0U;
            __Vtemp1670[5U] = 0U;
            __Vtemp1670[6U] = 0U;
            __Vtemp1670[7U] = 0U;
            __Vtemp1670[8U] = 0U;
            __Vtemp1670[9U] = 0U;
            __Vtemp1670[0xaU] = 0U;
            __Vtemp1670[0xbU] = 0U;
            __Vtemp1670[0xcU] = 0U;
            __Vtemp1670[0xdU] = 0U;
            __Vtemp1670[0xeU] = 0U;
            __Vtemp1670[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1671, __Vtemp1670, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1671[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_157 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1672[0U] = 1U;
            __Vtemp1672[1U] = 0U;
            __Vtemp1672[2U] = 0U;
            __Vtemp1672[3U] = 0U;
            __Vtemp1672[4U] = 0U;
            __Vtemp1672[5U] = 0U;
            __Vtemp1672[6U] = 0U;
            __Vtemp1672[7U] = 0U;
            __Vtemp1672[8U] = 0U;
            __Vtemp1672[9U] = 0U;
            __Vtemp1672[0xaU] = 0U;
            __Vtemp1672[0xbU] = 0U;
            __Vtemp1672[0xcU] = 0U;
            __Vtemp1672[0xdU] = 0U;
            __Vtemp1672[0xeU] = 0U;
            __Vtemp1672[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1673, __Vtemp1672, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1673[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_41 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1674[0U] = 1U;
            __Vtemp1674[1U] = 0U;
            __Vtemp1674[2U] = 0U;
            __Vtemp1674[3U] = 0U;
            __Vtemp1674[4U] = 0U;
            __Vtemp1674[5U] = 0U;
            __Vtemp1674[6U] = 0U;
            __Vtemp1674[7U] = 0U;
            __Vtemp1674[8U] = 0U;
            __Vtemp1674[9U] = 0U;
            __Vtemp1674[0xaU] = 0U;
            __Vtemp1674[0xbU] = 0U;
            __Vtemp1674[0xcU] = 0U;
            __Vtemp1674[0xdU] = 0U;
            __Vtemp1674[0xeU] = 0U;
            __Vtemp1674[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1675, __Vtemp1674, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1675[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_193 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1676[0U] = 1U;
            __Vtemp1676[1U] = 0U;
            __Vtemp1676[2U] = 0U;
            __Vtemp1676[3U] = 0U;
            __Vtemp1676[4U] = 0U;
            __Vtemp1676[5U] = 0U;
            __Vtemp1676[6U] = 0U;
            __Vtemp1676[7U] = 0U;
            __Vtemp1676[8U] = 0U;
            __Vtemp1676[9U] = 0U;
            __Vtemp1676[0xaU] = 0U;
            __Vtemp1676[0xbU] = 0U;
            __Vtemp1676[0xcU] = 0U;
            __Vtemp1676[0xdU] = 0U;
            __Vtemp1676[0xeU] = 0U;
            __Vtemp1676[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1677, __Vtemp1676, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1677[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_28 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1678[0U] = 1U;
            __Vtemp1678[1U] = 0U;
            __Vtemp1678[2U] = 0U;
            __Vtemp1678[3U] = 0U;
            __Vtemp1678[4U] = 0U;
            __Vtemp1678[5U] = 0U;
            __Vtemp1678[6U] = 0U;
            __Vtemp1678[7U] = 0U;
            __Vtemp1678[8U] = 0U;
            __Vtemp1678[9U] = 0U;
            __Vtemp1678[0xaU] = 0U;
            __Vtemp1678[0xbU] = 0U;
            __Vtemp1678[0xcU] = 0U;
            __Vtemp1678[0xdU] = 0U;
            __Vtemp1678[0xeU] = 0U;
            __Vtemp1678[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1679, __Vtemp1678, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1679[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_119 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1680[0U] = 1U;
            __Vtemp1680[1U] = 0U;
            __Vtemp1680[2U] = 0U;
            __Vtemp1680[3U] = 0U;
            __Vtemp1680[4U] = 0U;
            __Vtemp1680[5U] = 0U;
            __Vtemp1680[6U] = 0U;
            __Vtemp1680[7U] = 0U;
            __Vtemp1680[8U] = 0U;
            __Vtemp1680[9U] = 0U;
            __Vtemp1680[0xaU] = 0U;
            __Vtemp1680[0xbU] = 0U;
            __Vtemp1680[0xcU] = 0U;
            __Vtemp1680[0xdU] = 0U;
            __Vtemp1680[0xeU] = 0U;
            __Vtemp1680[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1681, __Vtemp1680, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1681[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_166 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1682[0U] = 1U;
            __Vtemp1682[1U] = 0U;
            __Vtemp1682[2U] = 0U;
            __Vtemp1682[3U] = 0U;
            __Vtemp1682[4U] = 0U;
            __Vtemp1682[5U] = 0U;
            __Vtemp1682[6U] = 0U;
            __Vtemp1682[7U] = 0U;
            __Vtemp1682[8U] = 0U;
            __Vtemp1682[9U] = 0U;
            __Vtemp1682[0xaU] = 0U;
            __Vtemp1682[0xbU] = 0U;
            __Vtemp1682[0xcU] = 0U;
            __Vtemp1682[0xdU] = 0U;
            __Vtemp1682[0xeU] = 0U;
            __Vtemp1682[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1683, __Vtemp1682, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1683[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_205 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1684[0U] = 1U;
            __Vtemp1684[1U] = 0U;
            __Vtemp1684[2U] = 0U;
            __Vtemp1684[3U] = 0U;
            __Vtemp1684[4U] = 0U;
            __Vtemp1684[5U] = 0U;
            __Vtemp1684[6U] = 0U;
            __Vtemp1684[7U] = 0U;
            __Vtemp1684[8U] = 0U;
            __Vtemp1684[9U] = 0U;
            __Vtemp1684[0xaU] = 0U;
            __Vtemp1684[0xbU] = 0U;
            __Vtemp1684[0xcU] = 0U;
            __Vtemp1684[0xdU] = 0U;
            __Vtemp1684[0xeU] = 0U;
            __Vtemp1684[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1685, __Vtemp1684, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1685[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_49 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1686[0U] = 1U;
            __Vtemp1686[1U] = 0U;
            __Vtemp1686[2U] = 0U;
            __Vtemp1686[3U] = 0U;
            __Vtemp1686[4U] = 0U;
            __Vtemp1686[5U] = 0U;
            __Vtemp1686[6U] = 0U;
            __Vtemp1686[7U] = 0U;
            __Vtemp1686[8U] = 0U;
            __Vtemp1686[9U] = 0U;
            __Vtemp1686[0xaU] = 0U;
            __Vtemp1686[0xbU] = 0U;
            __Vtemp1686[0xcU] = 0U;
            __Vtemp1686[0xdU] = 0U;
            __Vtemp1686[0xeU] = 0U;
            __Vtemp1686[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1687, __Vtemp1686, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1687[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_11 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1688[0U] = 1U;
            __Vtemp1688[1U] = 0U;
            __Vtemp1688[2U] = 0U;
            __Vtemp1688[3U] = 0U;
            __Vtemp1688[4U] = 0U;
            __Vtemp1688[5U] = 0U;
            __Vtemp1688[6U] = 0U;
            __Vtemp1688[7U] = 0U;
            __Vtemp1688[8U] = 0U;
            __Vtemp1688[9U] = 0U;
            __Vtemp1688[0xaU] = 0U;
            __Vtemp1688[0xbU] = 0U;
            __Vtemp1688[0xcU] = 0U;
            __Vtemp1688[0xdU] = 0U;
            __Vtemp1688[0xeU] = 0U;
            __Vtemp1688[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1689, __Vtemp1688, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1689[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_163 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1690[0U] = 1U;
            __Vtemp1690[1U] = 0U;
            __Vtemp1690[2U] = 0U;
            __Vtemp1690[3U] = 0U;
            __Vtemp1690[4U] = 0U;
            __Vtemp1690[5U] = 0U;
            __Vtemp1690[6U] = 0U;
            __Vtemp1690[7U] = 0U;
            __Vtemp1690[8U] = 0U;
            __Vtemp1690[9U] = 0U;
            __Vtemp1690[0xaU] = 0U;
            __Vtemp1690[0xbU] = 0U;
            __Vtemp1690[0xcU] = 0U;
            __Vtemp1690[0xdU] = 0U;
            __Vtemp1690[0xeU] = 0U;
            __Vtemp1690[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1691, __Vtemp1690, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1691[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_32 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1692[0U] = 1U;
            __Vtemp1692[1U] = 0U;
            __Vtemp1692[2U] = 0U;
            __Vtemp1692[3U] = 0U;
            __Vtemp1692[4U] = 0U;
            __Vtemp1692[5U] = 0U;
            __Vtemp1692[6U] = 0U;
            __Vtemp1692[7U] = 0U;
            __Vtemp1692[8U] = 0U;
            __Vtemp1692[9U] = 0U;
            __Vtemp1692[0xaU] = 0U;
            __Vtemp1692[0xbU] = 0U;
            __Vtemp1692[0xcU] = 0U;
            __Vtemp1692[0xdU] = 0U;
            __Vtemp1692[0xeU] = 0U;
            __Vtemp1692[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1693, __Vtemp1692, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1693[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_184 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1694[0U] = 1U;
            __Vtemp1694[1U] = 0U;
            __Vtemp1694[2U] = 0U;
            __Vtemp1694[3U] = 0U;
            __Vtemp1694[4U] = 0U;
            __Vtemp1694[5U] = 0U;
            __Vtemp1694[6U] = 0U;
            __Vtemp1694[7U] = 0U;
            __Vtemp1694[8U] = 0U;
            __Vtemp1694[9U] = 0U;
            __Vtemp1694[0xaU] = 0U;
            __Vtemp1694[0xbU] = 0U;
            __Vtemp1694[0xcU] = 0U;
            __Vtemp1694[0xdU] = 0U;
            __Vtemp1694[0xeU] = 0U;
            __Vtemp1694[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1695, __Vtemp1694, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1695[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_19 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1696[0U] = 1U;
            __Vtemp1696[1U] = 0U;
            __Vtemp1696[2U] = 0U;
            __Vtemp1696[3U] = 0U;
            __Vtemp1696[4U] = 0U;
            __Vtemp1696[5U] = 0U;
            __Vtemp1696[6U] = 0U;
            __Vtemp1696[7U] = 0U;
            __Vtemp1696[8U] = 0U;
            __Vtemp1696[9U] = 0U;
            __Vtemp1696[0xaU] = 0U;
            __Vtemp1696[0xbU] = 0U;
            __Vtemp1696[0xcU] = 0U;
            __Vtemp1696[0xdU] = 0U;
            __Vtemp1696[0xeU] = 0U;
            __Vtemp1696[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1697, __Vtemp1696, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1697[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_110 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1698[0U] = 1U;
            __Vtemp1698[1U] = 0U;
            __Vtemp1698[2U] = 0U;
            __Vtemp1698[3U] = 0U;
            __Vtemp1698[4U] = 0U;
            __Vtemp1698[5U] = 0U;
            __Vtemp1698[6U] = 0U;
            __Vtemp1698[7U] = 0U;
            __Vtemp1698[8U] = 0U;
            __Vtemp1698[9U] = 0U;
            __Vtemp1698[0xaU] = 0U;
            __Vtemp1698[0xbU] = 0U;
            __Vtemp1698[0xcU] = 0U;
            __Vtemp1698[0xdU] = 0U;
            __Vtemp1698[0xeU] = 0U;
            __Vtemp1698[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1699, __Vtemp1698, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1699[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_2 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1700[0U] = 1U;
            __Vtemp1700[1U] = 0U;
            __Vtemp1700[2U] = 0U;
            __Vtemp1700[3U] = 0U;
            __Vtemp1700[4U] = 0U;
            __Vtemp1700[5U] = 0U;
            __Vtemp1700[6U] = 0U;
            __Vtemp1700[7U] = 0U;
            __Vtemp1700[8U] = 0U;
            __Vtemp1700[9U] = 0U;
            __Vtemp1700[0xaU] = 0U;
            __Vtemp1700[0xbU] = 0U;
            __Vtemp1700[0xcU] = 0U;
            __Vtemp1700[0xdU] = 0U;
            __Vtemp1700[0xeU] = 0U;
            __Vtemp1700[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1701, __Vtemp1700, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1701[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_154 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1702[0U] = 1U;
            __Vtemp1702[1U] = 0U;
            __Vtemp1702[2U] = 0U;
            __Vtemp1702[3U] = 0U;
            __Vtemp1702[4U] = 0U;
            __Vtemp1702[5U] = 0U;
            __Vtemp1702[6U] = 0U;
            __Vtemp1702[7U] = 0U;
            __Vtemp1702[8U] = 0U;
            __Vtemp1702[9U] = 0U;
            __Vtemp1702[0xaU] = 0U;
            __Vtemp1702[0xbU] = 0U;
            __Vtemp1702[0xcU] = 0U;
            __Vtemp1702[0xdU] = 0U;
            __Vtemp1702[0xeU] = 0U;
            __Vtemp1702[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1703, __Vtemp1702, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1703[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_38 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1704[0U] = 1U;
            __Vtemp1704[1U] = 0U;
            __Vtemp1704[2U] = 0U;
            __Vtemp1704[3U] = 0U;
            __Vtemp1704[4U] = 0U;
            __Vtemp1704[5U] = 0U;
            __Vtemp1704[6U] = 0U;
            __Vtemp1704[7U] = 0U;
            __Vtemp1704[8U] = 0U;
            __Vtemp1704[9U] = 0U;
            __Vtemp1704[0xaU] = 0U;
            __Vtemp1704[0xbU] = 0U;
            __Vtemp1704[0xcU] = 0U;
            __Vtemp1704[0xdU] = 0U;
            __Vtemp1704[0xeU] = 0U;
            __Vtemp1704[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1705, __Vtemp1704, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1705[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_190 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1706[0U] = 1U;
            __Vtemp1706[1U] = 0U;
            __Vtemp1706[2U] = 0U;
            __Vtemp1706[3U] = 0U;
            __Vtemp1706[4U] = 0U;
            __Vtemp1706[5U] = 0U;
            __Vtemp1706[6U] = 0U;
            __Vtemp1706[7U] = 0U;
            __Vtemp1706[8U] = 0U;
            __Vtemp1706[9U] = 0U;
            __Vtemp1706[0xaU] = 0U;
            __Vtemp1706[0xbU] = 0U;
            __Vtemp1706[0xcU] = 0U;
            __Vtemp1706[0xdU] = 0U;
            __Vtemp1706[0xeU] = 0U;
            __Vtemp1706[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1707, __Vtemp1706, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1707[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_25 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1708[0U] = 1U;
            __Vtemp1708[1U] = 0U;
            __Vtemp1708[2U] = 0U;
            __Vtemp1708[3U] = 0U;
            __Vtemp1708[4U] = 0U;
            __Vtemp1708[5U] = 0U;
            __Vtemp1708[6U] = 0U;
            __Vtemp1708[7U] = 0U;
            __Vtemp1708[8U] = 0U;
            __Vtemp1708[9U] = 0U;
            __Vtemp1708[0xaU] = 0U;
            __Vtemp1708[0xbU] = 0U;
            __Vtemp1708[0xcU] = 0U;
            __Vtemp1708[0xdU] = 0U;
            __Vtemp1708[0xeU] = 0U;
            __Vtemp1708[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1709, __Vtemp1708, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1709[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_116 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__77(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__77\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    WData/*511:0*/ __Vtemp1763[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1710[0U] = 1U;
            __Vtemp1710[1U] = 0U;
            __Vtemp1710[2U] = 0U;
            __Vtemp1710[3U] = 0U;
            __Vtemp1710[4U] = 0U;
            __Vtemp1710[5U] = 0U;
            __Vtemp1710[6U] = 0U;
            __Vtemp1710[7U] = 0U;
            __Vtemp1710[8U] = 0U;
            __Vtemp1710[9U] = 0U;
            __Vtemp1710[0xaU] = 0U;
            __Vtemp1710[0xbU] = 0U;
            __Vtemp1710[0xcU] = 0U;
            __Vtemp1710[0xdU] = 0U;
            __Vtemp1710[0xeU] = 0U;
            __Vtemp1710[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1711, __Vtemp1710, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1711[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_25 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1712[0U] = 1U;
            __Vtemp1712[1U] = 0U;
            __Vtemp1712[2U] = 0U;
            __Vtemp1712[3U] = 0U;
            __Vtemp1712[4U] = 0U;
            __Vtemp1712[5U] = 0U;
            __Vtemp1712[6U] = 0U;
            __Vtemp1712[7U] = 0U;
            __Vtemp1712[8U] = 0U;
            __Vtemp1712[9U] = 0U;
            __Vtemp1712[0xaU] = 0U;
            __Vtemp1712[0xbU] = 0U;
            __Vtemp1712[0xcU] = 0U;
            __Vtemp1712[0xdU] = 0U;
            __Vtemp1712[0xeU] = 0U;
            __Vtemp1712[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1713, __Vtemp1712, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1713[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_177 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1714[0U] = 1U;
            __Vtemp1714[1U] = 0U;
            __Vtemp1714[2U] = 0U;
            __Vtemp1714[3U] = 0U;
            __Vtemp1714[4U] = 0U;
            __Vtemp1714[5U] = 0U;
            __Vtemp1714[6U] = 0U;
            __Vtemp1714[7U] = 0U;
            __Vtemp1714[8U] = 0U;
            __Vtemp1714[9U] = 0U;
            __Vtemp1714[0xaU] = 0U;
            __Vtemp1714[0xbU] = 0U;
            __Vtemp1714[0xcU] = 0U;
            __Vtemp1714[0xdU] = 0U;
            __Vtemp1714[0xeU] = 0U;
            __Vtemp1714[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1715, __Vtemp1714, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1715[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_12 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1716[0U] = 1U;
            __Vtemp1716[1U] = 0U;
            __Vtemp1716[2U] = 0U;
            __Vtemp1716[3U] = 0U;
            __Vtemp1716[4U] = 0U;
            __Vtemp1716[5U] = 0U;
            __Vtemp1716[6U] = 0U;
            __Vtemp1716[7U] = 0U;
            __Vtemp1716[8U] = 0U;
            __Vtemp1716[9U] = 0U;
            __Vtemp1716[0xaU] = 0U;
            __Vtemp1716[0xbU] = 0U;
            __Vtemp1716[0xcU] = 0U;
            __Vtemp1716[0xdU] = 0U;
            __Vtemp1716[0xeU] = 0U;
            __Vtemp1716[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1717, __Vtemp1716, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1717[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_103 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1718[0U] = 1U;
            __Vtemp1718[1U] = 0U;
            __Vtemp1718[2U] = 0U;
            __Vtemp1718[3U] = 0U;
            __Vtemp1718[4U] = 0U;
            __Vtemp1718[5U] = 0U;
            __Vtemp1718[6U] = 0U;
            __Vtemp1718[7U] = 0U;
            __Vtemp1718[8U] = 0U;
            __Vtemp1718[9U] = 0U;
            __Vtemp1718[0xaU] = 0U;
            __Vtemp1718[0xbU] = 0U;
            __Vtemp1718[0xcU] = 0U;
            __Vtemp1718[0xdU] = 0U;
            __Vtemp1718[0xeU] = 0U;
            __Vtemp1718[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1719, __Vtemp1718, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1719[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_34 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1720[0U] = 1U;
            __Vtemp1720[1U] = 0U;
            __Vtemp1720[2U] = 0U;
            __Vtemp1720[3U] = 0U;
            __Vtemp1720[4U] = 0U;
            __Vtemp1720[5U] = 0U;
            __Vtemp1720[6U] = 0U;
            __Vtemp1720[7U] = 0U;
            __Vtemp1720[8U] = 0U;
            __Vtemp1720[9U] = 0U;
            __Vtemp1720[0xaU] = 0U;
            __Vtemp1720[0xbU] = 0U;
            __Vtemp1720[0xcU] = 0U;
            __Vtemp1720[0xdU] = 0U;
            __Vtemp1720[0xeU] = 0U;
            __Vtemp1720[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1721, __Vtemp1720, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1721[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_186 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1722[0U] = 1U;
            __Vtemp1722[1U] = 0U;
            __Vtemp1722[2U] = 0U;
            __Vtemp1722[3U] = 0U;
            __Vtemp1722[4U] = 0U;
            __Vtemp1722[5U] = 0U;
            __Vtemp1722[6U] = 0U;
            __Vtemp1722[7U] = 0U;
            __Vtemp1722[8U] = 0U;
            __Vtemp1722[9U] = 0U;
            __Vtemp1722[0xaU] = 0U;
            __Vtemp1722[0xbU] = 0U;
            __Vtemp1722[0xcU] = 0U;
            __Vtemp1722[0xdU] = 0U;
            __Vtemp1722[0xeU] = 0U;
            __Vtemp1722[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1723, __Vtemp1722, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1723[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_21 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1724[0U] = 1U;
            __Vtemp1724[1U] = 0U;
            __Vtemp1724[2U] = 0U;
            __Vtemp1724[3U] = 0U;
            __Vtemp1724[4U] = 0U;
            __Vtemp1724[5U] = 0U;
            __Vtemp1724[6U] = 0U;
            __Vtemp1724[7U] = 0U;
            __Vtemp1724[8U] = 0U;
            __Vtemp1724[9U] = 0U;
            __Vtemp1724[0xaU] = 0U;
            __Vtemp1724[0xbU] = 0U;
            __Vtemp1724[0xcU] = 0U;
            __Vtemp1724[0xdU] = 0U;
            __Vtemp1724[0xeU] = 0U;
            __Vtemp1724[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1725, __Vtemp1724, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1725[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_112 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1726[0U] = 1U;
            __Vtemp1726[1U] = 0U;
            __Vtemp1726[2U] = 0U;
            __Vtemp1726[3U] = 0U;
            __Vtemp1726[4U] = 0U;
            __Vtemp1726[5U] = 0U;
            __Vtemp1726[6U] = 0U;
            __Vtemp1726[7U] = 0U;
            __Vtemp1726[8U] = 0U;
            __Vtemp1726[9U] = 0U;
            __Vtemp1726[0xaU] = 0U;
            __Vtemp1726[0xbU] = 0U;
            __Vtemp1726[0xcU] = 0U;
            __Vtemp1726[0xdU] = 0U;
            __Vtemp1726[0xeU] = 0U;
            __Vtemp1726[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1727, __Vtemp1726, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1727[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_4 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1728[0U] = 1U;
            __Vtemp1728[1U] = 0U;
            __Vtemp1728[2U] = 0U;
            __Vtemp1728[3U] = 0U;
            __Vtemp1728[4U] = 0U;
            __Vtemp1728[5U] = 0U;
            __Vtemp1728[6U] = 0U;
            __Vtemp1728[7U] = 0U;
            __Vtemp1728[8U] = 0U;
            __Vtemp1728[9U] = 0U;
            __Vtemp1728[0xaU] = 0U;
            __Vtemp1728[0xbU] = 0U;
            __Vtemp1728[0xcU] = 0U;
            __Vtemp1728[0xdU] = 0U;
            __Vtemp1728[0xeU] = 0U;
            __Vtemp1728[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1729, __Vtemp1728, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1729[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_156 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1730[0U] = 1U;
            __Vtemp1730[1U] = 0U;
            __Vtemp1730[2U] = 0U;
            __Vtemp1730[3U] = 0U;
            __Vtemp1730[4U] = 0U;
            __Vtemp1730[5U] = 0U;
            __Vtemp1730[6U] = 0U;
            __Vtemp1730[7U] = 0U;
            __Vtemp1730[8U] = 0U;
            __Vtemp1730[9U] = 0U;
            __Vtemp1730[0xaU] = 0U;
            __Vtemp1730[0xbU] = 0U;
            __Vtemp1730[0xcU] = 0U;
            __Vtemp1730[0xdU] = 0U;
            __Vtemp1730[0xeU] = 0U;
            __Vtemp1730[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1731, __Vtemp1730, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1731[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_40 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1732[0U] = 1U;
            __Vtemp1732[1U] = 0U;
            __Vtemp1732[2U] = 0U;
            __Vtemp1732[3U] = 0U;
            __Vtemp1732[4U] = 0U;
            __Vtemp1732[5U] = 0U;
            __Vtemp1732[6U] = 0U;
            __Vtemp1732[7U] = 0U;
            __Vtemp1732[8U] = 0U;
            __Vtemp1732[9U] = 0U;
            __Vtemp1732[0xaU] = 0U;
            __Vtemp1732[0xbU] = 0U;
            __Vtemp1732[0xcU] = 0U;
            __Vtemp1732[0xdU] = 0U;
            __Vtemp1732[0xeU] = 0U;
            __Vtemp1732[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1733, __Vtemp1732, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1733[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_192 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1734[0U] = 1U;
            __Vtemp1734[1U] = 0U;
            __Vtemp1734[2U] = 0U;
            __Vtemp1734[3U] = 0U;
            __Vtemp1734[4U] = 0U;
            __Vtemp1734[5U] = 0U;
            __Vtemp1734[6U] = 0U;
            __Vtemp1734[7U] = 0U;
            __Vtemp1734[8U] = 0U;
            __Vtemp1734[9U] = 0U;
            __Vtemp1734[0xaU] = 0U;
            __Vtemp1734[0xbU] = 0U;
            __Vtemp1734[0xcU] = 0U;
            __Vtemp1734[0xdU] = 0U;
            __Vtemp1734[0xeU] = 0U;
            __Vtemp1734[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1735, __Vtemp1734, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1735[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_27 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1736[0U] = 1U;
            __Vtemp1736[1U] = 0U;
            __Vtemp1736[2U] = 0U;
            __Vtemp1736[3U] = 0U;
            __Vtemp1736[4U] = 0U;
            __Vtemp1736[5U] = 0U;
            __Vtemp1736[6U] = 0U;
            __Vtemp1736[7U] = 0U;
            __Vtemp1736[8U] = 0U;
            __Vtemp1736[9U] = 0U;
            __Vtemp1736[0xaU] = 0U;
            __Vtemp1736[0xbU] = 0U;
            __Vtemp1736[0xcU] = 0U;
            __Vtemp1736[0xdU] = 0U;
            __Vtemp1736[0xeU] = 0U;
            __Vtemp1736[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1737, __Vtemp1736, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1737[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_118 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1738[0U] = 1U;
            __Vtemp1738[1U] = 0U;
            __Vtemp1738[2U] = 0U;
            __Vtemp1738[3U] = 0U;
            __Vtemp1738[4U] = 0U;
            __Vtemp1738[5U] = 0U;
            __Vtemp1738[6U] = 0U;
            __Vtemp1738[7U] = 0U;
            __Vtemp1738[8U] = 0U;
            __Vtemp1738[9U] = 0U;
            __Vtemp1738[0xaU] = 0U;
            __Vtemp1738[0xbU] = 0U;
            __Vtemp1738[0xcU] = 0U;
            __Vtemp1738[0xdU] = 0U;
            __Vtemp1738[0xeU] = 0U;
            __Vtemp1738[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1739, __Vtemp1738, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1739[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_149 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1740[0U] = 1U;
            __Vtemp1740[1U] = 0U;
            __Vtemp1740[2U] = 0U;
            __Vtemp1740[3U] = 0U;
            __Vtemp1740[4U] = 0U;
            __Vtemp1740[5U] = 0U;
            __Vtemp1740[6U] = 0U;
            __Vtemp1740[7U] = 0U;
            __Vtemp1740[8U] = 0U;
            __Vtemp1740[9U] = 0U;
            __Vtemp1740[0xaU] = 0U;
            __Vtemp1740[0xbU] = 0U;
            __Vtemp1740[0xcU] = 0U;
            __Vtemp1740[0xdU] = 0U;
            __Vtemp1740[0xeU] = 0U;
            __Vtemp1740[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1741, __Vtemp1740, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1741[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_140 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1742[0U] = 1U;
            __Vtemp1742[1U] = 0U;
            __Vtemp1742[2U] = 0U;
            __Vtemp1742[3U] = 0U;
            __Vtemp1742[4U] = 0U;
            __Vtemp1742[5U] = 0U;
            __Vtemp1742[6U] = 0U;
            __Vtemp1742[7U] = 0U;
            __Vtemp1742[8U] = 0U;
            __Vtemp1742[9U] = 0U;
            __Vtemp1742[0xaU] = 0U;
            __Vtemp1742[0xbU] = 0U;
            __Vtemp1742[0xcU] = 0U;
            __Vtemp1742[0xdU] = 0U;
            __Vtemp1742[0xeU] = 0U;
            __Vtemp1742[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1743, __Vtemp1742, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1743[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_165 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1744[0U] = 1U;
            __Vtemp1744[1U] = 0U;
            __Vtemp1744[2U] = 0U;
            __Vtemp1744[3U] = 0U;
            __Vtemp1744[4U] = 0U;
            __Vtemp1744[5U] = 0U;
            __Vtemp1744[6U] = 0U;
            __Vtemp1744[7U] = 0U;
            __Vtemp1744[8U] = 0U;
            __Vtemp1744[9U] = 0U;
            __Vtemp1744[0xaU] = 0U;
            __Vtemp1744[0xbU] = 0U;
            __Vtemp1744[0xcU] = 0U;
            __Vtemp1744[0xdU] = 0U;
            __Vtemp1744[0xeU] = 0U;
            __Vtemp1744[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1745, __Vtemp1744, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1745[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_204 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1746[0U] = 1U;
            __Vtemp1746[1U] = 0U;
            __Vtemp1746[2U] = 0U;
            __Vtemp1746[3U] = 0U;
            __Vtemp1746[4U] = 0U;
            __Vtemp1746[5U] = 0U;
            __Vtemp1746[6U] = 0U;
            __Vtemp1746[7U] = 0U;
            __Vtemp1746[8U] = 0U;
            __Vtemp1746[9U] = 0U;
            __Vtemp1746[0xaU] = 0U;
            __Vtemp1746[0xbU] = 0U;
            __Vtemp1746[0xcU] = 0U;
            __Vtemp1746[0xdU] = 0U;
            __Vtemp1746[0xeU] = 0U;
            __Vtemp1746[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1747, __Vtemp1746, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1747[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_48 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1748[0U] = 1U;
            __Vtemp1748[1U] = 0U;
            __Vtemp1748[2U] = 0U;
            __Vtemp1748[3U] = 0U;
            __Vtemp1748[4U] = 0U;
            __Vtemp1748[5U] = 0U;
            __Vtemp1748[6U] = 0U;
            __Vtemp1748[7U] = 0U;
            __Vtemp1748[8U] = 0U;
            __Vtemp1748[9U] = 0U;
            __Vtemp1748[0xaU] = 0U;
            __Vtemp1748[0xbU] = 0U;
            __Vtemp1748[0xcU] = 0U;
            __Vtemp1748[0xdU] = 0U;
            __Vtemp1748[0xeU] = 0U;
            __Vtemp1748[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1749, __Vtemp1748, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1749[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_200 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1750[0U] = 1U;
            __Vtemp1750[1U] = 0U;
            __Vtemp1750[2U] = 0U;
            __Vtemp1750[3U] = 0U;
            __Vtemp1750[4U] = 0U;
            __Vtemp1750[5U] = 0U;
            __Vtemp1750[6U] = 0U;
            __Vtemp1750[7U] = 0U;
            __Vtemp1750[8U] = 0U;
            __Vtemp1750[9U] = 0U;
            __Vtemp1750[0xaU] = 0U;
            __Vtemp1750[0xbU] = 0U;
            __Vtemp1750[0xcU] = 0U;
            __Vtemp1750[0xdU] = 0U;
            __Vtemp1750[0xeU] = 0U;
            __Vtemp1750[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1751, __Vtemp1750, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1751[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_35 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1752[0U] = 1U;
            __Vtemp1752[1U] = 0U;
            __Vtemp1752[2U] = 0U;
            __Vtemp1752[3U] = 0U;
            __Vtemp1752[4U] = 0U;
            __Vtemp1752[5U] = 0U;
            __Vtemp1752[6U] = 0U;
            __Vtemp1752[7U] = 0U;
            __Vtemp1752[8U] = 0U;
            __Vtemp1752[9U] = 0U;
            __Vtemp1752[0xaU] = 0U;
            __Vtemp1752[0xbU] = 0U;
            __Vtemp1752[0xcU] = 0U;
            __Vtemp1752[0xdU] = 0U;
            __Vtemp1752[0xeU] = 0U;
            __Vtemp1752[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1753, __Vtemp1752, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1753[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_10 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
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
            if ((4U & __Vtemp1755[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_162 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
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
            if ((0x4000U & __Vtemp1757[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_46 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
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
            if ((0x40U & __Vtemp1759[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_198 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
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
            if ((2U & __Vtemp1761[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_33 
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
            if ((0x10000000U & __Vtemp1763[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_124 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
