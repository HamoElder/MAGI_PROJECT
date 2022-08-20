// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__68(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__68\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1601[16];
    WData/*511:0*/ __Vtemp1602[16];
    WData/*511:0*/ __Vtemp1603[16];
    WData/*511:0*/ __Vtemp1604[16];
    WData/*511:0*/ __Vtemp1605[16];
    WData/*511:0*/ __Vtemp1606[16];
    WData/*511:0*/ __Vtemp1607[16];
    WData/*511:0*/ __Vtemp1608[16];
    WData/*511:0*/ __Vtemp1609[16];
    WData/*511:0*/ __Vtemp1610[16];
    WData/*511:0*/ __Vtemp1611[16];
    WData/*511:0*/ __Vtemp1612[16];
    WData/*511:0*/ __Vtemp1613[16];
    WData/*511:0*/ __Vtemp1614[16];
    WData/*511:0*/ __Vtemp1615[16];
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
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1601[0U] = 1U;
            __Vtemp1601[1U] = 0U;
            __Vtemp1601[2U] = 0U;
            __Vtemp1601[3U] = 0U;
            __Vtemp1601[4U] = 0U;
            __Vtemp1601[5U] = 0U;
            __Vtemp1601[6U] = 0U;
            __Vtemp1601[7U] = 0U;
            __Vtemp1601[8U] = 0U;
            __Vtemp1601[9U] = 0U;
            __Vtemp1601[0xaU] = 0U;
            __Vtemp1601[0xbU] = 0U;
            __Vtemp1601[0xcU] = 0U;
            __Vtemp1601[0xdU] = 0U;
            __Vtemp1601[0xeU] = 0U;
            __Vtemp1601[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1602, __Vtemp1601, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1602[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_161 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1603[0U] = 1U;
            __Vtemp1603[1U] = 0U;
            __Vtemp1603[2U] = 0U;
            __Vtemp1603[3U] = 0U;
            __Vtemp1603[4U] = 0U;
            __Vtemp1603[5U] = 0U;
            __Vtemp1603[6U] = 0U;
            __Vtemp1603[7U] = 0U;
            __Vtemp1603[8U] = 0U;
            __Vtemp1603[9U] = 0U;
            __Vtemp1603[0xaU] = 0U;
            __Vtemp1603[0xbU] = 0U;
            __Vtemp1603[0xcU] = 0U;
            __Vtemp1603[0xdU] = 0U;
            __Vtemp1603[0xeU] = 0U;
            __Vtemp1603[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1604, __Vtemp1603, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1604[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_45 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1605[0U] = 1U;
            __Vtemp1605[1U] = 0U;
            __Vtemp1605[2U] = 0U;
            __Vtemp1605[3U] = 0U;
            __Vtemp1605[4U] = 0U;
            __Vtemp1605[5U] = 0U;
            __Vtemp1605[6U] = 0U;
            __Vtemp1605[7U] = 0U;
            __Vtemp1605[8U] = 0U;
            __Vtemp1605[9U] = 0U;
            __Vtemp1605[0xaU] = 0U;
            __Vtemp1605[0xbU] = 0U;
            __Vtemp1605[0xcU] = 0U;
            __Vtemp1605[0xdU] = 0U;
            __Vtemp1605[0xeU] = 0U;
            __Vtemp1605[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1606, __Vtemp1605, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1606[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_197 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1607[0U] = 1U;
            __Vtemp1607[1U] = 0U;
            __Vtemp1607[2U] = 0U;
            __Vtemp1607[3U] = 0U;
            __Vtemp1607[4U] = 0U;
            __Vtemp1607[5U] = 0U;
            __Vtemp1607[6U] = 0U;
            __Vtemp1607[7U] = 0U;
            __Vtemp1607[8U] = 0U;
            __Vtemp1607[9U] = 0U;
            __Vtemp1607[0xaU] = 0U;
            __Vtemp1607[0xbU] = 0U;
            __Vtemp1607[0xcU] = 0U;
            __Vtemp1607[0xdU] = 0U;
            __Vtemp1607[0xeU] = 0U;
            __Vtemp1607[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1608, __Vtemp1607, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1608[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_32 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1609[0U] = 1U;
            __Vtemp1609[1U] = 0U;
            __Vtemp1609[2U] = 0U;
            __Vtemp1609[3U] = 0U;
            __Vtemp1609[4U] = 0U;
            __Vtemp1609[5U] = 0U;
            __Vtemp1609[6U] = 0U;
            __Vtemp1609[7U] = 0U;
            __Vtemp1609[8U] = 0U;
            __Vtemp1609[9U] = 0U;
            __Vtemp1609[0xaU] = 0U;
            __Vtemp1609[0xbU] = 0U;
            __Vtemp1609[0xcU] = 0U;
            __Vtemp1609[0xdU] = 0U;
            __Vtemp1609[0xeU] = 0U;
            __Vtemp1609[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1610, __Vtemp1609, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1610[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_123 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1611[0U] = 1U;
            __Vtemp1611[1U] = 0U;
            __Vtemp1611[2U] = 0U;
            __Vtemp1611[3U] = 0U;
            __Vtemp1611[4U] = 0U;
            __Vtemp1611[5U] = 0U;
            __Vtemp1611[6U] = 0U;
            __Vtemp1611[7U] = 0U;
            __Vtemp1611[8U] = 0U;
            __Vtemp1611[9U] = 0U;
            __Vtemp1611[0xaU] = 0U;
            __Vtemp1611[0xbU] = 0U;
            __Vtemp1611[0xcU] = 0U;
            __Vtemp1611[0xdU] = 0U;
            __Vtemp1611[0xeU] = 0U;
            __Vtemp1611[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1612, __Vtemp1611, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1612[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_8 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1613[0U] = 1U;
            __Vtemp1613[1U] = 0U;
            __Vtemp1613[2U] = 0U;
            __Vtemp1613[3U] = 0U;
            __Vtemp1613[4U] = 0U;
            __Vtemp1613[5U] = 0U;
            __Vtemp1613[6U] = 0U;
            __Vtemp1613[7U] = 0U;
            __Vtemp1613[8U] = 0U;
            __Vtemp1613[9U] = 0U;
            __Vtemp1613[0xaU] = 0U;
            __Vtemp1613[0xbU] = 0U;
            __Vtemp1613[0xcU] = 0U;
            __Vtemp1613[0xdU] = 0U;
            __Vtemp1613[0xeU] = 0U;
            __Vtemp1613[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1614, __Vtemp1613, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1614[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_160 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1615[0U] = 1U;
            __Vtemp1615[1U] = 0U;
            __Vtemp1615[2U] = 0U;
            __Vtemp1615[3U] = 0U;
            __Vtemp1615[4U] = 0U;
            __Vtemp1615[5U] = 0U;
            __Vtemp1615[6U] = 0U;
            __Vtemp1615[7U] = 0U;
            __Vtemp1615[8U] = 0U;
            __Vtemp1615[9U] = 0U;
            __Vtemp1615[0xaU] = 0U;
            __Vtemp1615[0xbU] = 0U;
            __Vtemp1615[0xcU] = 0U;
            __Vtemp1615[0xdU] = 0U;
            __Vtemp1615[0xeU] = 0U;
            __Vtemp1615[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1616, __Vtemp1615, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1616[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_44 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1617[0U] = 1U;
            __Vtemp1617[1U] = 0U;
            __Vtemp1617[2U] = 0U;
            __Vtemp1617[3U] = 0U;
            __Vtemp1617[4U] = 0U;
            __Vtemp1617[5U] = 0U;
            __Vtemp1617[6U] = 0U;
            __Vtemp1617[7U] = 0U;
            __Vtemp1617[8U] = 0U;
            __Vtemp1617[9U] = 0U;
            __Vtemp1617[0xaU] = 0U;
            __Vtemp1617[0xbU] = 0U;
            __Vtemp1617[0xcU] = 0U;
            __Vtemp1617[0xdU] = 0U;
            __Vtemp1617[0xeU] = 0U;
            __Vtemp1617[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1618, __Vtemp1617, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1618[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_196 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1619[0U] = 1U;
            __Vtemp1619[1U] = 0U;
            __Vtemp1619[2U] = 0U;
            __Vtemp1619[3U] = 0U;
            __Vtemp1619[4U] = 0U;
            __Vtemp1619[5U] = 0U;
            __Vtemp1619[6U] = 0U;
            __Vtemp1619[7U] = 0U;
            __Vtemp1619[8U] = 0U;
            __Vtemp1619[9U] = 0U;
            __Vtemp1619[0xaU] = 0U;
            __Vtemp1619[0xbU] = 0U;
            __Vtemp1619[0xcU] = 0U;
            __Vtemp1619[0xdU] = 0U;
            __Vtemp1619[0xeU] = 0U;
            __Vtemp1619[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1620, __Vtemp1619, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1620[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_31 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1621[0U] = 1U;
            __Vtemp1621[1U] = 0U;
            __Vtemp1621[2U] = 0U;
            __Vtemp1621[3U] = 0U;
            __Vtemp1621[4U] = 0U;
            __Vtemp1621[5U] = 0U;
            __Vtemp1621[6U] = 0U;
            __Vtemp1621[7U] = 0U;
            __Vtemp1621[8U] = 0U;
            __Vtemp1621[9U] = 0U;
            __Vtemp1621[0xaU] = 0U;
            __Vtemp1621[0xbU] = 0U;
            __Vtemp1621[0xcU] = 0U;
            __Vtemp1621[0xdU] = 0U;
            __Vtemp1621[0xeU] = 0U;
            __Vtemp1621[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1622, __Vtemp1621, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1622[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_122 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1623[0U] = 1U;
            __Vtemp1623[1U] = 0U;
            __Vtemp1623[2U] = 0U;
            __Vtemp1623[3U] = 0U;
            __Vtemp1623[4U] = 0U;
            __Vtemp1623[5U] = 0U;
            __Vtemp1623[6U] = 0U;
            __Vtemp1623[7U] = 0U;
            __Vtemp1623[8U] = 0U;
            __Vtemp1623[9U] = 0U;
            __Vtemp1623[0xaU] = 0U;
            __Vtemp1623[0xbU] = 0U;
            __Vtemp1623[0xcU] = 0U;
            __Vtemp1623[0xdU] = 0U;
            __Vtemp1623[0xeU] = 0U;
            __Vtemp1623[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1624, __Vtemp1623, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1624[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_7 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1625[0U] = 1U;
            __Vtemp1625[1U] = 0U;
            __Vtemp1625[2U] = 0U;
            __Vtemp1625[3U] = 0U;
            __Vtemp1625[4U] = 0U;
            __Vtemp1625[5U] = 0U;
            __Vtemp1625[6U] = 0U;
            __Vtemp1625[7U] = 0U;
            __Vtemp1625[8U] = 0U;
            __Vtemp1625[9U] = 0U;
            __Vtemp1625[0xaU] = 0U;
            __Vtemp1625[0xbU] = 0U;
            __Vtemp1625[0xcU] = 0U;
            __Vtemp1625[0xdU] = 0U;
            __Vtemp1625[0xeU] = 0U;
            __Vtemp1625[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1626, __Vtemp1625, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1626[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_159 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1627[0U] = 1U;
            __Vtemp1627[1U] = 0U;
            __Vtemp1627[2U] = 0U;
            __Vtemp1627[3U] = 0U;
            __Vtemp1627[4U] = 0U;
            __Vtemp1627[5U] = 0U;
            __Vtemp1627[6U] = 0U;
            __Vtemp1627[7U] = 0U;
            __Vtemp1627[8U] = 0U;
            __Vtemp1627[9U] = 0U;
            __Vtemp1627[0xaU] = 0U;
            __Vtemp1627[0xbU] = 0U;
            __Vtemp1627[0xcU] = 0U;
            __Vtemp1627[0xdU] = 0U;
            __Vtemp1627[0xeU] = 0U;
            __Vtemp1627[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1628, __Vtemp1627, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1628[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_43 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1629[0U] = 1U;
            __Vtemp1629[1U] = 0U;
            __Vtemp1629[2U] = 0U;
            __Vtemp1629[3U] = 0U;
            __Vtemp1629[4U] = 0U;
            __Vtemp1629[5U] = 0U;
            __Vtemp1629[6U] = 0U;
            __Vtemp1629[7U] = 0U;
            __Vtemp1629[8U] = 0U;
            __Vtemp1629[9U] = 0U;
            __Vtemp1629[0xaU] = 0U;
            __Vtemp1629[0xbU] = 0U;
            __Vtemp1629[0xcU] = 0U;
            __Vtemp1629[0xdU] = 0U;
            __Vtemp1629[0xeU] = 0U;
            __Vtemp1629[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1630, __Vtemp1629, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1630[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_195 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1631[0U] = 1U;
            __Vtemp1631[1U] = 0U;
            __Vtemp1631[2U] = 0U;
            __Vtemp1631[3U] = 0U;
            __Vtemp1631[4U] = 0U;
            __Vtemp1631[5U] = 0U;
            __Vtemp1631[6U] = 0U;
            __Vtemp1631[7U] = 0U;
            __Vtemp1631[8U] = 0U;
            __Vtemp1631[9U] = 0U;
            __Vtemp1631[0xaU] = 0U;
            __Vtemp1631[0xbU] = 0U;
            __Vtemp1631[0xcU] = 0U;
            __Vtemp1631[0xdU] = 0U;
            __Vtemp1631[0xeU] = 0U;
            __Vtemp1631[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1632, __Vtemp1631, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1632[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_30 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1633[0U] = 1U;
            __Vtemp1633[1U] = 0U;
            __Vtemp1633[2U] = 0U;
            __Vtemp1633[3U] = 0U;
            __Vtemp1633[4U] = 0U;
            __Vtemp1633[5U] = 0U;
            __Vtemp1633[6U] = 0U;
            __Vtemp1633[7U] = 0U;
            __Vtemp1633[8U] = 0U;
            __Vtemp1633[9U] = 0U;
            __Vtemp1633[0xaU] = 0U;
            __Vtemp1633[0xbU] = 0U;
            __Vtemp1633[0xcU] = 0U;
            __Vtemp1633[0xdU] = 0U;
            __Vtemp1633[0xeU] = 0U;
            __Vtemp1633[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1634, __Vtemp1633, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1634[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_121 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1635[0U] = 1U;
            __Vtemp1635[1U] = 0U;
            __Vtemp1635[2U] = 0U;
            __Vtemp1635[3U] = 0U;
            __Vtemp1635[4U] = 0U;
            __Vtemp1635[5U] = 0U;
            __Vtemp1635[6U] = 0U;
            __Vtemp1635[7U] = 0U;
            __Vtemp1635[8U] = 0U;
            __Vtemp1635[9U] = 0U;
            __Vtemp1635[0xaU] = 0U;
            __Vtemp1635[0xbU] = 0U;
            __Vtemp1635[0xcU] = 0U;
            __Vtemp1635[0xdU] = 0U;
            __Vtemp1635[0xeU] = 0U;
            __Vtemp1635[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1636, __Vtemp1635, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1636[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_6 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1637[0U] = 1U;
            __Vtemp1637[1U] = 0U;
            __Vtemp1637[2U] = 0U;
            __Vtemp1637[3U] = 0U;
            __Vtemp1637[4U] = 0U;
            __Vtemp1637[5U] = 0U;
            __Vtemp1637[6U] = 0U;
            __Vtemp1637[7U] = 0U;
            __Vtemp1637[8U] = 0U;
            __Vtemp1637[9U] = 0U;
            __Vtemp1637[0xaU] = 0U;
            __Vtemp1637[0xbU] = 0U;
            __Vtemp1637[0xcU] = 0U;
            __Vtemp1637[0xdU] = 0U;
            __Vtemp1637[0xeU] = 0U;
            __Vtemp1637[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1638, __Vtemp1637, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1638[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_158 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1639[0U] = 1U;
            __Vtemp1639[1U] = 0U;
            __Vtemp1639[2U] = 0U;
            __Vtemp1639[3U] = 0U;
            __Vtemp1639[4U] = 0U;
            __Vtemp1639[5U] = 0U;
            __Vtemp1639[6U] = 0U;
            __Vtemp1639[7U] = 0U;
            __Vtemp1639[8U] = 0U;
            __Vtemp1639[9U] = 0U;
            __Vtemp1639[0xaU] = 0U;
            __Vtemp1639[0xbU] = 0U;
            __Vtemp1639[0xcU] = 0U;
            __Vtemp1639[0xdU] = 0U;
            __Vtemp1639[0xeU] = 0U;
            __Vtemp1639[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1640, __Vtemp1639, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1640[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_42 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1641[0U] = 1U;
            __Vtemp1641[1U] = 0U;
            __Vtemp1641[2U] = 0U;
            __Vtemp1641[3U] = 0U;
            __Vtemp1641[4U] = 0U;
            __Vtemp1641[5U] = 0U;
            __Vtemp1641[6U] = 0U;
            __Vtemp1641[7U] = 0U;
            __Vtemp1641[8U] = 0U;
            __Vtemp1641[9U] = 0U;
            __Vtemp1641[0xaU] = 0U;
            __Vtemp1641[0xbU] = 0U;
            __Vtemp1641[0xcU] = 0U;
            __Vtemp1641[0xdU] = 0U;
            __Vtemp1641[0xeU] = 0U;
            __Vtemp1641[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1642, __Vtemp1641, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1642[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_194 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1643[0U] = 1U;
            __Vtemp1643[1U] = 0U;
            __Vtemp1643[2U] = 0U;
            __Vtemp1643[3U] = 0U;
            __Vtemp1643[4U] = 0U;
            __Vtemp1643[5U] = 0U;
            __Vtemp1643[6U] = 0U;
            __Vtemp1643[7U] = 0U;
            __Vtemp1643[8U] = 0U;
            __Vtemp1643[9U] = 0U;
            __Vtemp1643[0xaU] = 0U;
            __Vtemp1643[0xbU] = 0U;
            __Vtemp1643[0xcU] = 0U;
            __Vtemp1643[0xdU] = 0U;
            __Vtemp1643[0xeU] = 0U;
            __Vtemp1643[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1644, __Vtemp1643, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1644[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_29 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1645[0U] = 1U;
            __Vtemp1645[1U] = 0U;
            __Vtemp1645[2U] = 0U;
            __Vtemp1645[3U] = 0U;
            __Vtemp1645[4U] = 0U;
            __Vtemp1645[5U] = 0U;
            __Vtemp1645[6U] = 0U;
            __Vtemp1645[7U] = 0U;
            __Vtemp1645[8U] = 0U;
            __Vtemp1645[9U] = 0U;
            __Vtemp1645[0xaU] = 0U;
            __Vtemp1645[0xbU] = 0U;
            __Vtemp1645[0xcU] = 0U;
            __Vtemp1645[0xdU] = 0U;
            __Vtemp1645[0xeU] = 0U;
            __Vtemp1645[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1646, __Vtemp1645, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1646[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_120 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1647[0U] = 1U;
            __Vtemp1647[1U] = 0U;
            __Vtemp1647[2U] = 0U;
            __Vtemp1647[3U] = 0U;
            __Vtemp1647[4U] = 0U;
            __Vtemp1647[5U] = 0U;
            __Vtemp1647[6U] = 0U;
            __Vtemp1647[7U] = 0U;
            __Vtemp1647[8U] = 0U;
            __Vtemp1647[9U] = 0U;
            __Vtemp1647[0xaU] = 0U;
            __Vtemp1647[0xbU] = 0U;
            __Vtemp1647[0xcU] = 0U;
            __Vtemp1647[0xdU] = 0U;
            __Vtemp1647[0xeU] = 0U;
            __Vtemp1647[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1648, __Vtemp1647, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1648[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_30 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1649[0U] = 1U;
            __Vtemp1649[1U] = 0U;
            __Vtemp1649[2U] = 0U;
            __Vtemp1649[3U] = 0U;
            __Vtemp1649[4U] = 0U;
            __Vtemp1649[5U] = 0U;
            __Vtemp1649[6U] = 0U;
            __Vtemp1649[7U] = 0U;
            __Vtemp1649[8U] = 0U;
            __Vtemp1649[9U] = 0U;
            __Vtemp1649[0xaU] = 0U;
            __Vtemp1649[0xbU] = 0U;
            __Vtemp1649[0xcU] = 0U;
            __Vtemp1649[0xdU] = 0U;
            __Vtemp1649[0xeU] = 0U;
            __Vtemp1649[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1650, __Vtemp1649, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1650[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_182 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1651[0U] = 1U;
            __Vtemp1651[1U] = 0U;
            __Vtemp1651[2U] = 0U;
            __Vtemp1651[3U] = 0U;
            __Vtemp1651[4U] = 0U;
            __Vtemp1651[5U] = 0U;
            __Vtemp1651[6U] = 0U;
            __Vtemp1651[7U] = 0U;
            __Vtemp1651[8U] = 0U;
            __Vtemp1651[9U] = 0U;
            __Vtemp1651[0xaU] = 0U;
            __Vtemp1651[0xbU] = 0U;
            __Vtemp1651[0xcU] = 0U;
            __Vtemp1651[0xdU] = 0U;
            __Vtemp1651[0xeU] = 0U;
            __Vtemp1651[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1652, __Vtemp1651, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1652[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_17 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1653[0U] = 1U;
            __Vtemp1653[1U] = 0U;
            __Vtemp1653[2U] = 0U;
            __Vtemp1653[3U] = 0U;
            __Vtemp1653[4U] = 0U;
            __Vtemp1653[5U] = 0U;
            __Vtemp1653[6U] = 0U;
            __Vtemp1653[7U] = 0U;
            __Vtemp1653[8U] = 0U;
            __Vtemp1653[9U] = 0U;
            __Vtemp1653[0xaU] = 0U;
            __Vtemp1653[0xbU] = 0U;
            __Vtemp1653[0xcU] = 0U;
            __Vtemp1653[0xdU] = 0U;
            __Vtemp1653[0xeU] = 0U;
            __Vtemp1653[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1654, __Vtemp1653, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1654[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_108 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__69(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__69\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1655[0U] = 1U;
            __Vtemp1655[1U] = 0U;
            __Vtemp1655[2U] = 0U;
            __Vtemp1655[3U] = 0U;
            __Vtemp1655[4U] = 0U;
            __Vtemp1655[5U] = 0U;
            __Vtemp1655[6U] = 0U;
            __Vtemp1655[7U] = 0U;
            __Vtemp1655[8U] = 0U;
            __Vtemp1655[9U] = 0U;
            __Vtemp1655[0xaU] = 0U;
            __Vtemp1655[0xbU] = 0U;
            __Vtemp1655[0xcU] = 0U;
            __Vtemp1655[0xdU] = 0U;
            __Vtemp1655[0xeU] = 0U;
            __Vtemp1655[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1656, __Vtemp1655, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1656[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_29 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1657[0U] = 1U;
            __Vtemp1657[1U] = 0U;
            __Vtemp1657[2U] = 0U;
            __Vtemp1657[3U] = 0U;
            __Vtemp1657[4U] = 0U;
            __Vtemp1657[5U] = 0U;
            __Vtemp1657[6U] = 0U;
            __Vtemp1657[7U] = 0U;
            __Vtemp1657[8U] = 0U;
            __Vtemp1657[9U] = 0U;
            __Vtemp1657[0xaU] = 0U;
            __Vtemp1657[0xbU] = 0U;
            __Vtemp1657[0xcU] = 0U;
            __Vtemp1657[0xdU] = 0U;
            __Vtemp1657[0xeU] = 0U;
            __Vtemp1657[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1658, __Vtemp1657, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1658[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_181 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1659[0U] = 1U;
            __Vtemp1659[1U] = 0U;
            __Vtemp1659[2U] = 0U;
            __Vtemp1659[3U] = 0U;
            __Vtemp1659[4U] = 0U;
            __Vtemp1659[5U] = 0U;
            __Vtemp1659[6U] = 0U;
            __Vtemp1659[7U] = 0U;
            __Vtemp1659[8U] = 0U;
            __Vtemp1659[9U] = 0U;
            __Vtemp1659[0xaU] = 0U;
            __Vtemp1659[0xbU] = 0U;
            __Vtemp1659[0xcU] = 0U;
            __Vtemp1659[0xdU] = 0U;
            __Vtemp1659[0xeU] = 0U;
            __Vtemp1659[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1660, __Vtemp1659, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1660[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_16 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1661[0U] = 1U;
            __Vtemp1661[1U] = 0U;
            __Vtemp1661[2U] = 0U;
            __Vtemp1661[3U] = 0U;
            __Vtemp1661[4U] = 0U;
            __Vtemp1661[5U] = 0U;
            __Vtemp1661[6U] = 0U;
            __Vtemp1661[7U] = 0U;
            __Vtemp1661[8U] = 0U;
            __Vtemp1661[9U] = 0U;
            __Vtemp1661[0xaU] = 0U;
            __Vtemp1661[0xbU] = 0U;
            __Vtemp1661[0xcU] = 0U;
            __Vtemp1661[0xdU] = 0U;
            __Vtemp1661[0xeU] = 0U;
            __Vtemp1661[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1662, __Vtemp1661, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1662[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_107 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1663[0U] = 1U;
            __Vtemp1663[1U] = 0U;
            __Vtemp1663[2U] = 0U;
            __Vtemp1663[3U] = 0U;
            __Vtemp1663[4U] = 0U;
            __Vtemp1663[5U] = 0U;
            __Vtemp1663[6U] = 0U;
            __Vtemp1663[7U] = 0U;
            __Vtemp1663[8U] = 0U;
            __Vtemp1663[9U] = 0U;
            __Vtemp1663[0xaU] = 0U;
            __Vtemp1663[0xbU] = 0U;
            __Vtemp1663[0xcU] = 0U;
            __Vtemp1663[0xdU] = 0U;
            __Vtemp1663[0xeU] = 0U;
            __Vtemp1663[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1664, __Vtemp1663, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1664[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_24 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1665[0U] = 1U;
            __Vtemp1665[1U] = 0U;
            __Vtemp1665[2U] = 0U;
            __Vtemp1665[3U] = 0U;
            __Vtemp1665[4U] = 0U;
            __Vtemp1665[5U] = 0U;
            __Vtemp1665[6U] = 0U;
            __Vtemp1665[7U] = 0U;
            __Vtemp1665[8U] = 0U;
            __Vtemp1665[9U] = 0U;
            __Vtemp1665[0xaU] = 0U;
            __Vtemp1665[0xbU] = 0U;
            __Vtemp1665[0xcU] = 0U;
            __Vtemp1665[0xdU] = 0U;
            __Vtemp1665[0xeU] = 0U;
            __Vtemp1665[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1666, __Vtemp1665, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1666[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_176 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1667[0U] = 1U;
            __Vtemp1667[1U] = 0U;
            __Vtemp1667[2U] = 0U;
            __Vtemp1667[3U] = 0U;
            __Vtemp1667[4U] = 0U;
            __Vtemp1667[5U] = 0U;
            __Vtemp1667[6U] = 0U;
            __Vtemp1667[7U] = 0U;
            __Vtemp1667[8U] = 0U;
            __Vtemp1667[9U] = 0U;
            __Vtemp1667[0xaU] = 0U;
            __Vtemp1667[0xbU] = 0U;
            __Vtemp1667[0xcU] = 0U;
            __Vtemp1667[0xdU] = 0U;
            __Vtemp1667[0xeU] = 0U;
            __Vtemp1667[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1668, __Vtemp1667, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1668[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_11 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1669[0U] = 1U;
            __Vtemp1669[1U] = 0U;
            __Vtemp1669[2U] = 0U;
            __Vtemp1669[3U] = 0U;
            __Vtemp1669[4U] = 0U;
            __Vtemp1669[5U] = 0U;
            __Vtemp1669[6U] = 0U;
            __Vtemp1669[7U] = 0U;
            __Vtemp1669[8U] = 0U;
            __Vtemp1669[9U] = 0U;
            __Vtemp1669[0xaU] = 0U;
            __Vtemp1669[0xbU] = 0U;
            __Vtemp1669[0xcU] = 0U;
            __Vtemp1669[0xdU] = 0U;
            __Vtemp1669[0xeU] = 0U;
            __Vtemp1669[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1670, __Vtemp1669, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1670[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_102 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1671[0U] = 1U;
            __Vtemp1671[1U] = 0U;
            __Vtemp1671[2U] = 0U;
            __Vtemp1671[3U] = 0U;
            __Vtemp1671[4U] = 0U;
            __Vtemp1671[5U] = 0U;
            __Vtemp1671[6U] = 0U;
            __Vtemp1671[7U] = 0U;
            __Vtemp1671[8U] = 0U;
            __Vtemp1671[9U] = 0U;
            __Vtemp1671[0xaU] = 0U;
            __Vtemp1671[0xbU] = 0U;
            __Vtemp1671[0xcU] = 0U;
            __Vtemp1671[0xdU] = 0U;
            __Vtemp1671[0xeU] = 0U;
            __Vtemp1671[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1672, __Vtemp1671, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1672[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_0 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1673[0U] = 1U;
            __Vtemp1673[1U] = 0U;
            __Vtemp1673[2U] = 0U;
            __Vtemp1673[3U] = 0U;
            __Vtemp1673[4U] = 0U;
            __Vtemp1673[5U] = 0U;
            __Vtemp1673[6U] = 0U;
            __Vtemp1673[7U] = 0U;
            __Vtemp1673[8U] = 0U;
            __Vtemp1673[9U] = 0U;
            __Vtemp1673[0xaU] = 0U;
            __Vtemp1673[0xbU] = 0U;
            __Vtemp1673[0xcU] = 0U;
            __Vtemp1673[0xdU] = 0U;
            __Vtemp1673[0xeU] = 0U;
            __Vtemp1673[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1674, __Vtemp1673, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1674[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_5 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1675[0U] = 1U;
            __Vtemp1675[1U] = 0U;
            __Vtemp1675[2U] = 0U;
            __Vtemp1675[3U] = 0U;
            __Vtemp1675[4U] = 0U;
            __Vtemp1675[5U] = 0U;
            __Vtemp1675[6U] = 0U;
            __Vtemp1675[7U] = 0U;
            __Vtemp1675[8U] = 0U;
            __Vtemp1675[9U] = 0U;
            __Vtemp1675[0xaU] = 0U;
            __Vtemp1675[0xbU] = 0U;
            __Vtemp1675[0xcU] = 0U;
            __Vtemp1675[0xdU] = 0U;
            __Vtemp1675[0xeU] = 0U;
            __Vtemp1675[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1676, __Vtemp1675, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1676[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_157 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1677[0U] = 1U;
            __Vtemp1677[1U] = 0U;
            __Vtemp1677[2U] = 0U;
            __Vtemp1677[3U] = 0U;
            __Vtemp1677[4U] = 0U;
            __Vtemp1677[5U] = 0U;
            __Vtemp1677[6U] = 0U;
            __Vtemp1677[7U] = 0U;
            __Vtemp1677[8U] = 0U;
            __Vtemp1677[9U] = 0U;
            __Vtemp1677[0xaU] = 0U;
            __Vtemp1677[0xbU] = 0U;
            __Vtemp1677[0xcU] = 0U;
            __Vtemp1677[0xdU] = 0U;
            __Vtemp1677[0xeU] = 0U;
            __Vtemp1677[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1678, __Vtemp1677, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1678[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_41 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1679[0U] = 1U;
            __Vtemp1679[1U] = 0U;
            __Vtemp1679[2U] = 0U;
            __Vtemp1679[3U] = 0U;
            __Vtemp1679[4U] = 0U;
            __Vtemp1679[5U] = 0U;
            __Vtemp1679[6U] = 0U;
            __Vtemp1679[7U] = 0U;
            __Vtemp1679[8U] = 0U;
            __Vtemp1679[9U] = 0U;
            __Vtemp1679[0xaU] = 0U;
            __Vtemp1679[0xbU] = 0U;
            __Vtemp1679[0xcU] = 0U;
            __Vtemp1679[0xdU] = 0U;
            __Vtemp1679[0xeU] = 0U;
            __Vtemp1679[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1680, __Vtemp1679, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1680[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_193 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1681[0U] = 1U;
            __Vtemp1681[1U] = 0U;
            __Vtemp1681[2U] = 0U;
            __Vtemp1681[3U] = 0U;
            __Vtemp1681[4U] = 0U;
            __Vtemp1681[5U] = 0U;
            __Vtemp1681[6U] = 0U;
            __Vtemp1681[7U] = 0U;
            __Vtemp1681[8U] = 0U;
            __Vtemp1681[9U] = 0U;
            __Vtemp1681[0xaU] = 0U;
            __Vtemp1681[0xbU] = 0U;
            __Vtemp1681[0xcU] = 0U;
            __Vtemp1681[0xdU] = 0U;
            __Vtemp1681[0xeU] = 0U;
            __Vtemp1681[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1682, __Vtemp1681, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1682[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_28 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1683[0U] = 1U;
            __Vtemp1683[1U] = 0U;
            __Vtemp1683[2U] = 0U;
            __Vtemp1683[3U] = 0U;
            __Vtemp1683[4U] = 0U;
            __Vtemp1683[5U] = 0U;
            __Vtemp1683[6U] = 0U;
            __Vtemp1683[7U] = 0U;
            __Vtemp1683[8U] = 0U;
            __Vtemp1683[9U] = 0U;
            __Vtemp1683[0xaU] = 0U;
            __Vtemp1683[0xbU] = 0U;
            __Vtemp1683[0xcU] = 0U;
            __Vtemp1683[0xdU] = 0U;
            __Vtemp1683[0xeU] = 0U;
            __Vtemp1683[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1684, __Vtemp1683, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1684[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_119 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1685[0U] = 1U;
            __Vtemp1685[1U] = 0U;
            __Vtemp1685[2U] = 0U;
            __Vtemp1685[3U] = 0U;
            __Vtemp1685[4U] = 0U;
            __Vtemp1685[5U] = 0U;
            __Vtemp1685[6U] = 0U;
            __Vtemp1685[7U] = 0U;
            __Vtemp1685[8U] = 0U;
            __Vtemp1685[9U] = 0U;
            __Vtemp1685[0xaU] = 0U;
            __Vtemp1685[0xbU] = 0U;
            __Vtemp1685[0xcU] = 0U;
            __Vtemp1685[0xdU] = 0U;
            __Vtemp1685[0xeU] = 0U;
            __Vtemp1685[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1686, __Vtemp1685, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1686[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_166 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1687[0U] = 1U;
            __Vtemp1687[1U] = 0U;
            __Vtemp1687[2U] = 0U;
            __Vtemp1687[3U] = 0U;
            __Vtemp1687[4U] = 0U;
            __Vtemp1687[5U] = 0U;
            __Vtemp1687[6U] = 0U;
            __Vtemp1687[7U] = 0U;
            __Vtemp1687[8U] = 0U;
            __Vtemp1687[9U] = 0U;
            __Vtemp1687[0xaU] = 0U;
            __Vtemp1687[0xbU] = 0U;
            __Vtemp1687[0xcU] = 0U;
            __Vtemp1687[0xdU] = 0U;
            __Vtemp1687[0xeU] = 0U;
            __Vtemp1687[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1688, __Vtemp1687, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1688[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_205 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1689[0U] = 1U;
            __Vtemp1689[1U] = 0U;
            __Vtemp1689[2U] = 0U;
            __Vtemp1689[3U] = 0U;
            __Vtemp1689[4U] = 0U;
            __Vtemp1689[5U] = 0U;
            __Vtemp1689[6U] = 0U;
            __Vtemp1689[7U] = 0U;
            __Vtemp1689[8U] = 0U;
            __Vtemp1689[9U] = 0U;
            __Vtemp1689[0xaU] = 0U;
            __Vtemp1689[0xbU] = 0U;
            __Vtemp1689[0xcU] = 0U;
            __Vtemp1689[0xdU] = 0U;
            __Vtemp1689[0xeU] = 0U;
            __Vtemp1689[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1690, __Vtemp1689, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1690[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_49 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1691[0U] = 1U;
            __Vtemp1691[1U] = 0U;
            __Vtemp1691[2U] = 0U;
            __Vtemp1691[3U] = 0U;
            __Vtemp1691[4U] = 0U;
            __Vtemp1691[5U] = 0U;
            __Vtemp1691[6U] = 0U;
            __Vtemp1691[7U] = 0U;
            __Vtemp1691[8U] = 0U;
            __Vtemp1691[9U] = 0U;
            __Vtemp1691[0xaU] = 0U;
            __Vtemp1691[0xbU] = 0U;
            __Vtemp1691[0xcU] = 0U;
            __Vtemp1691[0xdU] = 0U;
            __Vtemp1691[0xeU] = 0U;
            __Vtemp1691[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1692, __Vtemp1691, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1692[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_11 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1693[0U] = 1U;
            __Vtemp1693[1U] = 0U;
            __Vtemp1693[2U] = 0U;
            __Vtemp1693[3U] = 0U;
            __Vtemp1693[4U] = 0U;
            __Vtemp1693[5U] = 0U;
            __Vtemp1693[6U] = 0U;
            __Vtemp1693[7U] = 0U;
            __Vtemp1693[8U] = 0U;
            __Vtemp1693[9U] = 0U;
            __Vtemp1693[0xaU] = 0U;
            __Vtemp1693[0xbU] = 0U;
            __Vtemp1693[0xcU] = 0U;
            __Vtemp1693[0xdU] = 0U;
            __Vtemp1693[0xeU] = 0U;
            __Vtemp1693[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1694, __Vtemp1693, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1694[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_163 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1695[0U] = 1U;
            __Vtemp1695[1U] = 0U;
            __Vtemp1695[2U] = 0U;
            __Vtemp1695[3U] = 0U;
            __Vtemp1695[4U] = 0U;
            __Vtemp1695[5U] = 0U;
            __Vtemp1695[6U] = 0U;
            __Vtemp1695[7U] = 0U;
            __Vtemp1695[8U] = 0U;
            __Vtemp1695[9U] = 0U;
            __Vtemp1695[0xaU] = 0U;
            __Vtemp1695[0xbU] = 0U;
            __Vtemp1695[0xcU] = 0U;
            __Vtemp1695[0xdU] = 0U;
            __Vtemp1695[0xeU] = 0U;
            __Vtemp1695[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1696, __Vtemp1695, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1696[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_32 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1697[0U] = 1U;
            __Vtemp1697[1U] = 0U;
            __Vtemp1697[2U] = 0U;
            __Vtemp1697[3U] = 0U;
            __Vtemp1697[4U] = 0U;
            __Vtemp1697[5U] = 0U;
            __Vtemp1697[6U] = 0U;
            __Vtemp1697[7U] = 0U;
            __Vtemp1697[8U] = 0U;
            __Vtemp1697[9U] = 0U;
            __Vtemp1697[0xaU] = 0U;
            __Vtemp1697[0xbU] = 0U;
            __Vtemp1697[0xcU] = 0U;
            __Vtemp1697[0xdU] = 0U;
            __Vtemp1697[0xeU] = 0U;
            __Vtemp1697[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1698, __Vtemp1697, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1698[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_184 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1699[0U] = 1U;
            __Vtemp1699[1U] = 0U;
            __Vtemp1699[2U] = 0U;
            __Vtemp1699[3U] = 0U;
            __Vtemp1699[4U] = 0U;
            __Vtemp1699[5U] = 0U;
            __Vtemp1699[6U] = 0U;
            __Vtemp1699[7U] = 0U;
            __Vtemp1699[8U] = 0U;
            __Vtemp1699[9U] = 0U;
            __Vtemp1699[0xaU] = 0U;
            __Vtemp1699[0xbU] = 0U;
            __Vtemp1699[0xcU] = 0U;
            __Vtemp1699[0xdU] = 0U;
            __Vtemp1699[0xeU] = 0U;
            __Vtemp1699[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1700, __Vtemp1699, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1700[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_19 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1701[0U] = 1U;
            __Vtemp1701[1U] = 0U;
            __Vtemp1701[2U] = 0U;
            __Vtemp1701[3U] = 0U;
            __Vtemp1701[4U] = 0U;
            __Vtemp1701[5U] = 0U;
            __Vtemp1701[6U] = 0U;
            __Vtemp1701[7U] = 0U;
            __Vtemp1701[8U] = 0U;
            __Vtemp1701[9U] = 0U;
            __Vtemp1701[0xaU] = 0U;
            __Vtemp1701[0xbU] = 0U;
            __Vtemp1701[0xcU] = 0U;
            __Vtemp1701[0xdU] = 0U;
            __Vtemp1701[0xeU] = 0U;
            __Vtemp1701[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1702, __Vtemp1701, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1702[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_110 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1703[0U] = 1U;
            __Vtemp1703[1U] = 0U;
            __Vtemp1703[2U] = 0U;
            __Vtemp1703[3U] = 0U;
            __Vtemp1703[4U] = 0U;
            __Vtemp1703[5U] = 0U;
            __Vtemp1703[6U] = 0U;
            __Vtemp1703[7U] = 0U;
            __Vtemp1703[8U] = 0U;
            __Vtemp1703[9U] = 0U;
            __Vtemp1703[0xaU] = 0U;
            __Vtemp1703[0xbU] = 0U;
            __Vtemp1703[0xcU] = 0U;
            __Vtemp1703[0xdU] = 0U;
            __Vtemp1703[0xeU] = 0U;
            __Vtemp1703[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1704, __Vtemp1703, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1704[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_2 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1705[0U] = 1U;
            __Vtemp1705[1U] = 0U;
            __Vtemp1705[2U] = 0U;
            __Vtemp1705[3U] = 0U;
            __Vtemp1705[4U] = 0U;
            __Vtemp1705[5U] = 0U;
            __Vtemp1705[6U] = 0U;
            __Vtemp1705[7U] = 0U;
            __Vtemp1705[8U] = 0U;
            __Vtemp1705[9U] = 0U;
            __Vtemp1705[0xaU] = 0U;
            __Vtemp1705[0xbU] = 0U;
            __Vtemp1705[0xcU] = 0U;
            __Vtemp1705[0xdU] = 0U;
            __Vtemp1705[0xeU] = 0U;
            __Vtemp1705[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1706, __Vtemp1705, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1706[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_154 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1707[0U] = 1U;
            __Vtemp1707[1U] = 0U;
            __Vtemp1707[2U] = 0U;
            __Vtemp1707[3U] = 0U;
            __Vtemp1707[4U] = 0U;
            __Vtemp1707[5U] = 0U;
            __Vtemp1707[6U] = 0U;
            __Vtemp1707[7U] = 0U;
            __Vtemp1707[8U] = 0U;
            __Vtemp1707[9U] = 0U;
            __Vtemp1707[0xaU] = 0U;
            __Vtemp1707[0xbU] = 0U;
            __Vtemp1707[0xcU] = 0U;
            __Vtemp1707[0xdU] = 0U;
            __Vtemp1707[0xeU] = 0U;
            __Vtemp1707[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1708, __Vtemp1707, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1708[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_38 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
