// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__76(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__76\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1616[16];
    WData/*511:0*/ __Vtemp1617[16];
    WData/*511:0*/ __Vtemp1618[16];
    WData/*511:0*/ __Vtemp1619[16];
    WData/*511:0*/ __Vtemp1620[16];
    WData/*511:0*/ __Vtemp1621[16];
    WData/*511:0*/ __Vtemp1622[16];
    WData/*511:0*/ __Vtemp1623[16];
    WData/*511:0*/ __Vtemp1624[16];
    WData/*511:0*/ __Vtemp1625[16];
    WData/*511:0*/ __Vtemp1626[16];
    WData/*511:0*/ __Vtemp1627[16];
    WData/*511:0*/ __Vtemp1628[16];
    WData/*511:0*/ __Vtemp1629[16];
    WData/*511:0*/ __Vtemp1630[16];
    WData/*511:0*/ __Vtemp1631[16];
    WData/*511:0*/ __Vtemp1632[16];
    WData/*511:0*/ __Vtemp1633[16];
    WData/*511:0*/ __Vtemp1634[16];
    WData/*511:0*/ __Vtemp1635[16];
    WData/*511:0*/ __Vtemp1636[16];
    WData/*511:0*/ __Vtemp1637[16];
    WData/*511:0*/ __Vtemp1638[16];
    WData/*511:0*/ __Vtemp1639[16];
    WData/*511:0*/ __Vtemp1640[16];
    WData/*511:0*/ __Vtemp1641[16];
    WData/*511:0*/ __Vtemp1642[16];
    WData/*511:0*/ __Vtemp1643[16];
    WData/*511:0*/ __Vtemp1644[16];
    WData/*511:0*/ __Vtemp1645[16];
    WData/*511:0*/ __Vtemp1646[16];
    WData/*511:0*/ __Vtemp1647[16];
    WData/*511:0*/ __Vtemp1648[16];
    WData/*511:0*/ __Vtemp1649[16];
    WData/*511:0*/ __Vtemp1650[16];
    WData/*511:0*/ __Vtemp1651[16];
    WData/*511:0*/ __Vtemp1652[16];
    WData/*511:0*/ __Vtemp1653[16];
    WData/*511:0*/ __Vtemp1654[16];
    WData/*511:0*/ __Vtemp1655[16];
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
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1616[0U] = 1U;
            __Vtemp1616[1U] = 0U;
            __Vtemp1616[2U] = 0U;
            __Vtemp1616[3U] = 0U;
            __Vtemp1616[4U] = 0U;
            __Vtemp1616[5U] = 0U;
            __Vtemp1616[6U] = 0U;
            __Vtemp1616[7U] = 0U;
            __Vtemp1616[8U] = 0U;
            __Vtemp1616[9U] = 0U;
            __Vtemp1616[0xaU] = 0U;
            __Vtemp1616[0xbU] = 0U;
            __Vtemp1616[0xcU] = 0U;
            __Vtemp1616[0xdU] = 0U;
            __Vtemp1616[0xeU] = 0U;
            __Vtemp1616[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1617, __Vtemp1616, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1617[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_122 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1618[0U] = 1U;
            __Vtemp1618[1U] = 0U;
            __Vtemp1618[2U] = 0U;
            __Vtemp1618[3U] = 0U;
            __Vtemp1618[4U] = 0U;
            __Vtemp1618[5U] = 0U;
            __Vtemp1618[6U] = 0U;
            __Vtemp1618[7U] = 0U;
            __Vtemp1618[8U] = 0U;
            __Vtemp1618[9U] = 0U;
            __Vtemp1618[0xaU] = 0U;
            __Vtemp1618[0xbU] = 0U;
            __Vtemp1618[0xcU] = 0U;
            __Vtemp1618[0xdU] = 0U;
            __Vtemp1618[0xeU] = 0U;
            __Vtemp1618[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1619, __Vtemp1618, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1619[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_7 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1620[0U] = 1U;
            __Vtemp1620[1U] = 0U;
            __Vtemp1620[2U] = 0U;
            __Vtemp1620[3U] = 0U;
            __Vtemp1620[4U] = 0U;
            __Vtemp1620[5U] = 0U;
            __Vtemp1620[6U] = 0U;
            __Vtemp1620[7U] = 0U;
            __Vtemp1620[8U] = 0U;
            __Vtemp1620[9U] = 0U;
            __Vtemp1620[0xaU] = 0U;
            __Vtemp1620[0xbU] = 0U;
            __Vtemp1620[0xcU] = 0U;
            __Vtemp1620[0xdU] = 0U;
            __Vtemp1620[0xeU] = 0U;
            __Vtemp1620[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1621, __Vtemp1620, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1621[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_159 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1622[0U] = 1U;
            __Vtemp1622[1U] = 0U;
            __Vtemp1622[2U] = 0U;
            __Vtemp1622[3U] = 0U;
            __Vtemp1622[4U] = 0U;
            __Vtemp1622[5U] = 0U;
            __Vtemp1622[6U] = 0U;
            __Vtemp1622[7U] = 0U;
            __Vtemp1622[8U] = 0U;
            __Vtemp1622[9U] = 0U;
            __Vtemp1622[0xaU] = 0U;
            __Vtemp1622[0xbU] = 0U;
            __Vtemp1622[0xcU] = 0U;
            __Vtemp1622[0xdU] = 0U;
            __Vtemp1622[0xeU] = 0U;
            __Vtemp1622[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1623, __Vtemp1622, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1623[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_43 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1624[0U] = 1U;
            __Vtemp1624[1U] = 0U;
            __Vtemp1624[2U] = 0U;
            __Vtemp1624[3U] = 0U;
            __Vtemp1624[4U] = 0U;
            __Vtemp1624[5U] = 0U;
            __Vtemp1624[6U] = 0U;
            __Vtemp1624[7U] = 0U;
            __Vtemp1624[8U] = 0U;
            __Vtemp1624[9U] = 0U;
            __Vtemp1624[0xaU] = 0U;
            __Vtemp1624[0xbU] = 0U;
            __Vtemp1624[0xcU] = 0U;
            __Vtemp1624[0xdU] = 0U;
            __Vtemp1624[0xeU] = 0U;
            __Vtemp1624[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1625, __Vtemp1624, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1625[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_195 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1626[0U] = 1U;
            __Vtemp1626[1U] = 0U;
            __Vtemp1626[2U] = 0U;
            __Vtemp1626[3U] = 0U;
            __Vtemp1626[4U] = 0U;
            __Vtemp1626[5U] = 0U;
            __Vtemp1626[6U] = 0U;
            __Vtemp1626[7U] = 0U;
            __Vtemp1626[8U] = 0U;
            __Vtemp1626[9U] = 0U;
            __Vtemp1626[0xaU] = 0U;
            __Vtemp1626[0xbU] = 0U;
            __Vtemp1626[0xcU] = 0U;
            __Vtemp1626[0xdU] = 0U;
            __Vtemp1626[0xeU] = 0U;
            __Vtemp1626[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1627, __Vtemp1626, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1627[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_30 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1628[0U] = 1U;
            __Vtemp1628[1U] = 0U;
            __Vtemp1628[2U] = 0U;
            __Vtemp1628[3U] = 0U;
            __Vtemp1628[4U] = 0U;
            __Vtemp1628[5U] = 0U;
            __Vtemp1628[6U] = 0U;
            __Vtemp1628[7U] = 0U;
            __Vtemp1628[8U] = 0U;
            __Vtemp1628[9U] = 0U;
            __Vtemp1628[0xaU] = 0U;
            __Vtemp1628[0xbU] = 0U;
            __Vtemp1628[0xcU] = 0U;
            __Vtemp1628[0xdU] = 0U;
            __Vtemp1628[0xeU] = 0U;
            __Vtemp1628[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1629, __Vtemp1628, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1629[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_121 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1630[0U] = 1U;
            __Vtemp1630[1U] = 0U;
            __Vtemp1630[2U] = 0U;
            __Vtemp1630[3U] = 0U;
            __Vtemp1630[4U] = 0U;
            __Vtemp1630[5U] = 0U;
            __Vtemp1630[6U] = 0U;
            __Vtemp1630[7U] = 0U;
            __Vtemp1630[8U] = 0U;
            __Vtemp1630[9U] = 0U;
            __Vtemp1630[0xaU] = 0U;
            __Vtemp1630[0xbU] = 0U;
            __Vtemp1630[0xcU] = 0U;
            __Vtemp1630[0xdU] = 0U;
            __Vtemp1630[0xeU] = 0U;
            __Vtemp1630[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1631, __Vtemp1630, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1631[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_6 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1632[0U] = 1U;
            __Vtemp1632[1U] = 0U;
            __Vtemp1632[2U] = 0U;
            __Vtemp1632[3U] = 0U;
            __Vtemp1632[4U] = 0U;
            __Vtemp1632[5U] = 0U;
            __Vtemp1632[6U] = 0U;
            __Vtemp1632[7U] = 0U;
            __Vtemp1632[8U] = 0U;
            __Vtemp1632[9U] = 0U;
            __Vtemp1632[0xaU] = 0U;
            __Vtemp1632[0xbU] = 0U;
            __Vtemp1632[0xcU] = 0U;
            __Vtemp1632[0xdU] = 0U;
            __Vtemp1632[0xeU] = 0U;
            __Vtemp1632[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1633, __Vtemp1632, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1633[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_158 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1634[0U] = 1U;
            __Vtemp1634[1U] = 0U;
            __Vtemp1634[2U] = 0U;
            __Vtemp1634[3U] = 0U;
            __Vtemp1634[4U] = 0U;
            __Vtemp1634[5U] = 0U;
            __Vtemp1634[6U] = 0U;
            __Vtemp1634[7U] = 0U;
            __Vtemp1634[8U] = 0U;
            __Vtemp1634[9U] = 0U;
            __Vtemp1634[0xaU] = 0U;
            __Vtemp1634[0xbU] = 0U;
            __Vtemp1634[0xcU] = 0U;
            __Vtemp1634[0xdU] = 0U;
            __Vtemp1634[0xeU] = 0U;
            __Vtemp1634[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1635, __Vtemp1634, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1635[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_42 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1636[0U] = 1U;
            __Vtemp1636[1U] = 0U;
            __Vtemp1636[2U] = 0U;
            __Vtemp1636[3U] = 0U;
            __Vtemp1636[4U] = 0U;
            __Vtemp1636[5U] = 0U;
            __Vtemp1636[6U] = 0U;
            __Vtemp1636[7U] = 0U;
            __Vtemp1636[8U] = 0U;
            __Vtemp1636[9U] = 0U;
            __Vtemp1636[0xaU] = 0U;
            __Vtemp1636[0xbU] = 0U;
            __Vtemp1636[0xcU] = 0U;
            __Vtemp1636[0xdU] = 0U;
            __Vtemp1636[0xeU] = 0U;
            __Vtemp1636[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1637, __Vtemp1636, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1637[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_194 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1638[0U] = 1U;
            __Vtemp1638[1U] = 0U;
            __Vtemp1638[2U] = 0U;
            __Vtemp1638[3U] = 0U;
            __Vtemp1638[4U] = 0U;
            __Vtemp1638[5U] = 0U;
            __Vtemp1638[6U] = 0U;
            __Vtemp1638[7U] = 0U;
            __Vtemp1638[8U] = 0U;
            __Vtemp1638[9U] = 0U;
            __Vtemp1638[0xaU] = 0U;
            __Vtemp1638[0xbU] = 0U;
            __Vtemp1638[0xcU] = 0U;
            __Vtemp1638[0xdU] = 0U;
            __Vtemp1638[0xeU] = 0U;
            __Vtemp1638[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1639, __Vtemp1638, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1639[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_29 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1640[0U] = 1U;
            __Vtemp1640[1U] = 0U;
            __Vtemp1640[2U] = 0U;
            __Vtemp1640[3U] = 0U;
            __Vtemp1640[4U] = 0U;
            __Vtemp1640[5U] = 0U;
            __Vtemp1640[6U] = 0U;
            __Vtemp1640[7U] = 0U;
            __Vtemp1640[8U] = 0U;
            __Vtemp1640[9U] = 0U;
            __Vtemp1640[0xaU] = 0U;
            __Vtemp1640[0xbU] = 0U;
            __Vtemp1640[0xcU] = 0U;
            __Vtemp1640[0xdU] = 0U;
            __Vtemp1640[0xeU] = 0U;
            __Vtemp1640[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1641, __Vtemp1640, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1641[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_120 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1642[0U] = 1U;
            __Vtemp1642[1U] = 0U;
            __Vtemp1642[2U] = 0U;
            __Vtemp1642[3U] = 0U;
            __Vtemp1642[4U] = 0U;
            __Vtemp1642[5U] = 0U;
            __Vtemp1642[6U] = 0U;
            __Vtemp1642[7U] = 0U;
            __Vtemp1642[8U] = 0U;
            __Vtemp1642[9U] = 0U;
            __Vtemp1642[0xaU] = 0U;
            __Vtemp1642[0xbU] = 0U;
            __Vtemp1642[0xcU] = 0U;
            __Vtemp1642[0xdU] = 0U;
            __Vtemp1642[0xeU] = 0U;
            __Vtemp1642[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1643, __Vtemp1642, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1643[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_30 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1644[0U] = 1U;
            __Vtemp1644[1U] = 0U;
            __Vtemp1644[2U] = 0U;
            __Vtemp1644[3U] = 0U;
            __Vtemp1644[4U] = 0U;
            __Vtemp1644[5U] = 0U;
            __Vtemp1644[6U] = 0U;
            __Vtemp1644[7U] = 0U;
            __Vtemp1644[8U] = 0U;
            __Vtemp1644[9U] = 0U;
            __Vtemp1644[0xaU] = 0U;
            __Vtemp1644[0xbU] = 0U;
            __Vtemp1644[0xcU] = 0U;
            __Vtemp1644[0xdU] = 0U;
            __Vtemp1644[0xeU] = 0U;
            __Vtemp1644[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1645, __Vtemp1644, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1645[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_182 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1646[0U] = 1U;
            __Vtemp1646[1U] = 0U;
            __Vtemp1646[2U] = 0U;
            __Vtemp1646[3U] = 0U;
            __Vtemp1646[4U] = 0U;
            __Vtemp1646[5U] = 0U;
            __Vtemp1646[6U] = 0U;
            __Vtemp1646[7U] = 0U;
            __Vtemp1646[8U] = 0U;
            __Vtemp1646[9U] = 0U;
            __Vtemp1646[0xaU] = 0U;
            __Vtemp1646[0xbU] = 0U;
            __Vtemp1646[0xcU] = 0U;
            __Vtemp1646[0xdU] = 0U;
            __Vtemp1646[0xeU] = 0U;
            __Vtemp1646[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1647, __Vtemp1646, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1647[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_17 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1648[0U] = 1U;
            __Vtemp1648[1U] = 0U;
            __Vtemp1648[2U] = 0U;
            __Vtemp1648[3U] = 0U;
            __Vtemp1648[4U] = 0U;
            __Vtemp1648[5U] = 0U;
            __Vtemp1648[6U] = 0U;
            __Vtemp1648[7U] = 0U;
            __Vtemp1648[8U] = 0U;
            __Vtemp1648[9U] = 0U;
            __Vtemp1648[0xaU] = 0U;
            __Vtemp1648[0xbU] = 0U;
            __Vtemp1648[0xcU] = 0U;
            __Vtemp1648[0xdU] = 0U;
            __Vtemp1648[0xeU] = 0U;
            __Vtemp1648[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1649, __Vtemp1648, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1649[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_108 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1650[0U] = 1U;
            __Vtemp1650[1U] = 0U;
            __Vtemp1650[2U] = 0U;
            __Vtemp1650[3U] = 0U;
            __Vtemp1650[4U] = 0U;
            __Vtemp1650[5U] = 0U;
            __Vtemp1650[6U] = 0U;
            __Vtemp1650[7U] = 0U;
            __Vtemp1650[8U] = 0U;
            __Vtemp1650[9U] = 0U;
            __Vtemp1650[0xaU] = 0U;
            __Vtemp1650[0xbU] = 0U;
            __Vtemp1650[0xcU] = 0U;
            __Vtemp1650[0xdU] = 0U;
            __Vtemp1650[0xeU] = 0U;
            __Vtemp1650[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1651, __Vtemp1650, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1651[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_29 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1652[0U] = 1U;
            __Vtemp1652[1U] = 0U;
            __Vtemp1652[2U] = 0U;
            __Vtemp1652[3U] = 0U;
            __Vtemp1652[4U] = 0U;
            __Vtemp1652[5U] = 0U;
            __Vtemp1652[6U] = 0U;
            __Vtemp1652[7U] = 0U;
            __Vtemp1652[8U] = 0U;
            __Vtemp1652[9U] = 0U;
            __Vtemp1652[0xaU] = 0U;
            __Vtemp1652[0xbU] = 0U;
            __Vtemp1652[0xcU] = 0U;
            __Vtemp1652[0xdU] = 0U;
            __Vtemp1652[0xeU] = 0U;
            __Vtemp1652[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1653, __Vtemp1652, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1653[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_181 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1654[0U] = 1U;
            __Vtemp1654[1U] = 0U;
            __Vtemp1654[2U] = 0U;
            __Vtemp1654[3U] = 0U;
            __Vtemp1654[4U] = 0U;
            __Vtemp1654[5U] = 0U;
            __Vtemp1654[6U] = 0U;
            __Vtemp1654[7U] = 0U;
            __Vtemp1654[8U] = 0U;
            __Vtemp1654[9U] = 0U;
            __Vtemp1654[0xaU] = 0U;
            __Vtemp1654[0xbU] = 0U;
            __Vtemp1654[0xcU] = 0U;
            __Vtemp1654[0xdU] = 0U;
            __Vtemp1654[0xeU] = 0U;
            __Vtemp1654[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1655, __Vtemp1654, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1655[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_16 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
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
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__77(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__77\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    // Body
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
}
