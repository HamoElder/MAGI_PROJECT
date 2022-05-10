// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__66(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__66\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1493[16];
    WData/*511:0*/ __Vtemp1494[16];
    WData/*511:0*/ __Vtemp1495[16];
    WData/*511:0*/ __Vtemp1496[16];
    WData/*511:0*/ __Vtemp1497[16];
    WData/*511:0*/ __Vtemp1498[16];
    WData/*511:0*/ __Vtemp1499[16];
    WData/*511:0*/ __Vtemp1500[16];
    WData/*511:0*/ __Vtemp1501[16];
    WData/*511:0*/ __Vtemp1502[16];
    WData/*511:0*/ __Vtemp1503[16];
    WData/*511:0*/ __Vtemp1504[16];
    WData/*511:0*/ __Vtemp1505[16];
    WData/*511:0*/ __Vtemp1506[16];
    WData/*511:0*/ __Vtemp1507[16];
    WData/*511:0*/ __Vtemp1508[16];
    WData/*511:0*/ __Vtemp1509[16];
    WData/*511:0*/ __Vtemp1510[16];
    WData/*511:0*/ __Vtemp1511[16];
    WData/*511:0*/ __Vtemp1512[16];
    WData/*511:0*/ __Vtemp1513[16];
    WData/*511:0*/ __Vtemp1514[16];
    WData/*511:0*/ __Vtemp1515[16];
    WData/*511:0*/ __Vtemp1516[16];
    WData/*511:0*/ __Vtemp1517[16];
    WData/*511:0*/ __Vtemp1518[16];
    WData/*511:0*/ __Vtemp1519[16];
    WData/*511:0*/ __Vtemp1520[16];
    WData/*511:0*/ __Vtemp1521[16];
    WData/*511:0*/ __Vtemp1522[16];
    WData/*511:0*/ __Vtemp1523[16];
    WData/*511:0*/ __Vtemp1524[16];
    WData/*511:0*/ __Vtemp1525[16];
    WData/*511:0*/ __Vtemp1526[16];
    WData/*511:0*/ __Vtemp1527[16];
    WData/*511:0*/ __Vtemp1528[16];
    WData/*511:0*/ __Vtemp1529[16];
    WData/*511:0*/ __Vtemp1530[16];
    WData/*511:0*/ __Vtemp1531[16];
    WData/*511:0*/ __Vtemp1532[16];
    WData/*511:0*/ __Vtemp1533[16];
    WData/*511:0*/ __Vtemp1534[16];
    WData/*511:0*/ __Vtemp1535[16];
    WData/*511:0*/ __Vtemp1536[16];
    WData/*511:0*/ __Vtemp1537[16];
    WData/*511:0*/ __Vtemp1538[16];
    WData/*511:0*/ __Vtemp1539[16];
    WData/*511:0*/ __Vtemp1540[16];
    WData/*511:0*/ __Vtemp1541[16];
    WData/*511:0*/ __Vtemp1542[16];
    WData/*511:0*/ __Vtemp1543[16];
    WData/*511:0*/ __Vtemp1544[16];
    WData/*511:0*/ __Vtemp1545[16];
    WData/*511:0*/ __Vtemp1546[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1493[0U] = 1U;
            __Vtemp1493[1U] = 0U;
            __Vtemp1493[2U] = 0U;
            __Vtemp1493[3U] = 0U;
            __Vtemp1493[4U] = 0U;
            __Vtemp1493[5U] = 0U;
            __Vtemp1493[6U] = 0U;
            __Vtemp1493[7U] = 0U;
            __Vtemp1493[8U] = 0U;
            __Vtemp1493[9U] = 0U;
            __Vtemp1493[0xaU] = 0U;
            __Vtemp1493[0xbU] = 0U;
            __Vtemp1493[0xcU] = 0U;
            __Vtemp1493[0xdU] = 0U;
            __Vtemp1493[0xeU] = 0U;
            __Vtemp1493[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1494, __Vtemp1493, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1494[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_56 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1495[0U] = 1U;
            __Vtemp1495[1U] = 0U;
            __Vtemp1495[2U] = 0U;
            __Vtemp1495[3U] = 0U;
            __Vtemp1495[4U] = 0U;
            __Vtemp1495[5U] = 0U;
            __Vtemp1495[6U] = 0U;
            __Vtemp1495[7U] = 0U;
            __Vtemp1495[8U] = 0U;
            __Vtemp1495[9U] = 0U;
            __Vtemp1495[0xaU] = 0U;
            __Vtemp1495[0xbU] = 0U;
            __Vtemp1495[0xcU] = 0U;
            __Vtemp1495[0xdU] = 0U;
            __Vtemp1495[0xeU] = 0U;
            __Vtemp1495[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1496, __Vtemp1495, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1496[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_55 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1497[0U] = 1U;
            __Vtemp1497[1U] = 0U;
            __Vtemp1497[2U] = 0U;
            __Vtemp1497[3U] = 0U;
            __Vtemp1497[4U] = 0U;
            __Vtemp1497[5U] = 0U;
            __Vtemp1497[6U] = 0U;
            __Vtemp1497[7U] = 0U;
            __Vtemp1497[8U] = 0U;
            __Vtemp1497[9U] = 0U;
            __Vtemp1497[0xaU] = 0U;
            __Vtemp1497[0xbU] = 0U;
            __Vtemp1497[0xcU] = 0U;
            __Vtemp1497[0xdU] = 0U;
            __Vtemp1497[0xeU] = 0U;
            __Vtemp1497[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1498, __Vtemp1497, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1498[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_54 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1499[0U] = 1U;
            __Vtemp1499[1U] = 0U;
            __Vtemp1499[2U] = 0U;
            __Vtemp1499[3U] = 0U;
            __Vtemp1499[4U] = 0U;
            __Vtemp1499[5U] = 0U;
            __Vtemp1499[6U] = 0U;
            __Vtemp1499[7U] = 0U;
            __Vtemp1499[8U] = 0U;
            __Vtemp1499[9U] = 0U;
            __Vtemp1499[0xaU] = 0U;
            __Vtemp1499[0xbU] = 0U;
            __Vtemp1499[0xcU] = 0U;
            __Vtemp1499[0xdU] = 0U;
            __Vtemp1499[0xeU] = 0U;
            __Vtemp1499[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1500, __Vtemp1499, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1500[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_53 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1501[0U] = 1U;
            __Vtemp1501[1U] = 0U;
            __Vtemp1501[2U] = 0U;
            __Vtemp1501[3U] = 0U;
            __Vtemp1501[4U] = 0U;
            __Vtemp1501[5U] = 0U;
            __Vtemp1501[6U] = 0U;
            __Vtemp1501[7U] = 0U;
            __Vtemp1501[8U] = 0U;
            __Vtemp1501[9U] = 0U;
            __Vtemp1501[0xaU] = 0U;
            __Vtemp1501[0xbU] = 0U;
            __Vtemp1501[0xcU] = 0U;
            __Vtemp1501[0xdU] = 0U;
            __Vtemp1501[0xeU] = 0U;
            __Vtemp1501[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1502, __Vtemp1501, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1502[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_52 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1503[0U] = 1U;
            __Vtemp1503[1U] = 0U;
            __Vtemp1503[2U] = 0U;
            __Vtemp1503[3U] = 0U;
            __Vtemp1503[4U] = 0U;
            __Vtemp1503[5U] = 0U;
            __Vtemp1503[6U] = 0U;
            __Vtemp1503[7U] = 0U;
            __Vtemp1503[8U] = 0U;
            __Vtemp1503[9U] = 0U;
            __Vtemp1503[0xaU] = 0U;
            __Vtemp1503[0xbU] = 0U;
            __Vtemp1503[0xcU] = 0U;
            __Vtemp1503[0xdU] = 0U;
            __Vtemp1503[0xeU] = 0U;
            __Vtemp1503[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1504, __Vtemp1503, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1504[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_51 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1505[0U] = 1U;
            __Vtemp1505[1U] = 0U;
            __Vtemp1505[2U] = 0U;
            __Vtemp1505[3U] = 0U;
            __Vtemp1505[4U] = 0U;
            __Vtemp1505[5U] = 0U;
            __Vtemp1505[6U] = 0U;
            __Vtemp1505[7U] = 0U;
            __Vtemp1505[8U] = 0U;
            __Vtemp1505[9U] = 0U;
            __Vtemp1505[0xaU] = 0U;
            __Vtemp1505[0xbU] = 0U;
            __Vtemp1505[0xcU] = 0U;
            __Vtemp1505[0xdU] = 0U;
            __Vtemp1505[0xeU] = 0U;
            __Vtemp1505[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1506, __Vtemp1505, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1506[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_50 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1507[0U] = 1U;
            __Vtemp1507[1U] = 0U;
            __Vtemp1507[2U] = 0U;
            __Vtemp1507[3U] = 0U;
            __Vtemp1507[4U] = 0U;
            __Vtemp1507[5U] = 0U;
            __Vtemp1507[6U] = 0U;
            __Vtemp1507[7U] = 0U;
            __Vtemp1507[8U] = 0U;
            __Vtemp1507[9U] = 0U;
            __Vtemp1507[0xaU] = 0U;
            __Vtemp1507[0xbU] = 0U;
            __Vtemp1507[0xcU] = 0U;
            __Vtemp1507[0xdU] = 0U;
            __Vtemp1507[0xeU] = 0U;
            __Vtemp1507[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1508, __Vtemp1507, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1508[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_49 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1509[0U] = 1U;
            __Vtemp1509[1U] = 0U;
            __Vtemp1509[2U] = 0U;
            __Vtemp1509[3U] = 0U;
            __Vtemp1509[4U] = 0U;
            __Vtemp1509[5U] = 0U;
            __Vtemp1509[6U] = 0U;
            __Vtemp1509[7U] = 0U;
            __Vtemp1509[8U] = 0U;
            __Vtemp1509[9U] = 0U;
            __Vtemp1509[0xaU] = 0U;
            __Vtemp1509[0xbU] = 0U;
            __Vtemp1509[0xcU] = 0U;
            __Vtemp1509[0xdU] = 0U;
            __Vtemp1509[0xeU] = 0U;
            __Vtemp1509[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1510, __Vtemp1509, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1510[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_48 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1511[0U] = 1U;
            __Vtemp1511[1U] = 0U;
            __Vtemp1511[2U] = 0U;
            __Vtemp1511[3U] = 0U;
            __Vtemp1511[4U] = 0U;
            __Vtemp1511[5U] = 0U;
            __Vtemp1511[6U] = 0U;
            __Vtemp1511[7U] = 0U;
            __Vtemp1511[8U] = 0U;
            __Vtemp1511[9U] = 0U;
            __Vtemp1511[0xaU] = 0U;
            __Vtemp1511[0xbU] = 0U;
            __Vtemp1511[0xcU] = 0U;
            __Vtemp1511[0xdU] = 0U;
            __Vtemp1511[0xeU] = 0U;
            __Vtemp1511[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1512, __Vtemp1511, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1512[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_47 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1513[0U] = 1U;
            __Vtemp1513[1U] = 0U;
            __Vtemp1513[2U] = 0U;
            __Vtemp1513[3U] = 0U;
            __Vtemp1513[4U] = 0U;
            __Vtemp1513[5U] = 0U;
            __Vtemp1513[6U] = 0U;
            __Vtemp1513[7U] = 0U;
            __Vtemp1513[8U] = 0U;
            __Vtemp1513[9U] = 0U;
            __Vtemp1513[0xaU] = 0U;
            __Vtemp1513[0xbU] = 0U;
            __Vtemp1513[0xcU] = 0U;
            __Vtemp1513[0xdU] = 0U;
            __Vtemp1513[0xeU] = 0U;
            __Vtemp1513[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1514, __Vtemp1513, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1514[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_46 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1515[0U] = 1U;
            __Vtemp1515[1U] = 0U;
            __Vtemp1515[2U] = 0U;
            __Vtemp1515[3U] = 0U;
            __Vtemp1515[4U] = 0U;
            __Vtemp1515[5U] = 0U;
            __Vtemp1515[6U] = 0U;
            __Vtemp1515[7U] = 0U;
            __Vtemp1515[8U] = 0U;
            __Vtemp1515[9U] = 0U;
            __Vtemp1515[0xaU] = 0U;
            __Vtemp1515[0xbU] = 0U;
            __Vtemp1515[0xcU] = 0U;
            __Vtemp1515[0xdU] = 0U;
            __Vtemp1515[0xeU] = 0U;
            __Vtemp1515[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1516, __Vtemp1515, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1516[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_45 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1517[0U] = 1U;
            __Vtemp1517[1U] = 0U;
            __Vtemp1517[2U] = 0U;
            __Vtemp1517[3U] = 0U;
            __Vtemp1517[4U] = 0U;
            __Vtemp1517[5U] = 0U;
            __Vtemp1517[6U] = 0U;
            __Vtemp1517[7U] = 0U;
            __Vtemp1517[8U] = 0U;
            __Vtemp1517[9U] = 0U;
            __Vtemp1517[0xaU] = 0U;
            __Vtemp1517[0xbU] = 0U;
            __Vtemp1517[0xcU] = 0U;
            __Vtemp1517[0xdU] = 0U;
            __Vtemp1517[0xeU] = 0U;
            __Vtemp1517[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1518, __Vtemp1517, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1518[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_44 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1519[0U] = 1U;
            __Vtemp1519[1U] = 0U;
            __Vtemp1519[2U] = 0U;
            __Vtemp1519[3U] = 0U;
            __Vtemp1519[4U] = 0U;
            __Vtemp1519[5U] = 0U;
            __Vtemp1519[6U] = 0U;
            __Vtemp1519[7U] = 0U;
            __Vtemp1519[8U] = 0U;
            __Vtemp1519[9U] = 0U;
            __Vtemp1519[0xaU] = 0U;
            __Vtemp1519[0xbU] = 0U;
            __Vtemp1519[0xcU] = 0U;
            __Vtemp1519[0xdU] = 0U;
            __Vtemp1519[0xeU] = 0U;
            __Vtemp1519[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1520, __Vtemp1519, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1520[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_43 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1521[0U] = 1U;
            __Vtemp1521[1U] = 0U;
            __Vtemp1521[2U] = 0U;
            __Vtemp1521[3U] = 0U;
            __Vtemp1521[4U] = 0U;
            __Vtemp1521[5U] = 0U;
            __Vtemp1521[6U] = 0U;
            __Vtemp1521[7U] = 0U;
            __Vtemp1521[8U] = 0U;
            __Vtemp1521[9U] = 0U;
            __Vtemp1521[0xaU] = 0U;
            __Vtemp1521[0xbU] = 0U;
            __Vtemp1521[0xcU] = 0U;
            __Vtemp1521[0xdU] = 0U;
            __Vtemp1521[0xeU] = 0U;
            __Vtemp1521[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1522, __Vtemp1521, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1522[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_42 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1523[0U] = 1U;
            __Vtemp1523[1U] = 0U;
            __Vtemp1523[2U] = 0U;
            __Vtemp1523[3U] = 0U;
            __Vtemp1523[4U] = 0U;
            __Vtemp1523[5U] = 0U;
            __Vtemp1523[6U] = 0U;
            __Vtemp1523[7U] = 0U;
            __Vtemp1523[8U] = 0U;
            __Vtemp1523[9U] = 0U;
            __Vtemp1523[0xaU] = 0U;
            __Vtemp1523[0xbU] = 0U;
            __Vtemp1523[0xcU] = 0U;
            __Vtemp1523[0xdU] = 0U;
            __Vtemp1523[0xeU] = 0U;
            __Vtemp1523[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1524, __Vtemp1523, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1524[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_41 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1525[0U] = 1U;
            __Vtemp1525[1U] = 0U;
            __Vtemp1525[2U] = 0U;
            __Vtemp1525[3U] = 0U;
            __Vtemp1525[4U] = 0U;
            __Vtemp1525[5U] = 0U;
            __Vtemp1525[6U] = 0U;
            __Vtemp1525[7U] = 0U;
            __Vtemp1525[8U] = 0U;
            __Vtemp1525[9U] = 0U;
            __Vtemp1525[0xaU] = 0U;
            __Vtemp1525[0xbU] = 0U;
            __Vtemp1525[0xcU] = 0U;
            __Vtemp1525[0xdU] = 0U;
            __Vtemp1525[0xeU] = 0U;
            __Vtemp1525[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1526, __Vtemp1525, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1526[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_40 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1527[0U] = 1U;
            __Vtemp1527[1U] = 0U;
            __Vtemp1527[2U] = 0U;
            __Vtemp1527[3U] = 0U;
            __Vtemp1527[4U] = 0U;
            __Vtemp1527[5U] = 0U;
            __Vtemp1527[6U] = 0U;
            __Vtemp1527[7U] = 0U;
            __Vtemp1527[8U] = 0U;
            __Vtemp1527[9U] = 0U;
            __Vtemp1527[0xaU] = 0U;
            __Vtemp1527[0xbU] = 0U;
            __Vtemp1527[0xcU] = 0U;
            __Vtemp1527[0xdU] = 0U;
            __Vtemp1527[0xeU] = 0U;
            __Vtemp1527[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1528, __Vtemp1527, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1528[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_39 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1529[0U] = 1U;
            __Vtemp1529[1U] = 0U;
            __Vtemp1529[2U] = 0U;
            __Vtemp1529[3U] = 0U;
            __Vtemp1529[4U] = 0U;
            __Vtemp1529[5U] = 0U;
            __Vtemp1529[6U] = 0U;
            __Vtemp1529[7U] = 0U;
            __Vtemp1529[8U] = 0U;
            __Vtemp1529[9U] = 0U;
            __Vtemp1529[0xaU] = 0U;
            __Vtemp1529[0xbU] = 0U;
            __Vtemp1529[0xcU] = 0U;
            __Vtemp1529[0xdU] = 0U;
            __Vtemp1529[0xeU] = 0U;
            __Vtemp1529[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1530, __Vtemp1529, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1530[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_38 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1531[0U] = 1U;
            __Vtemp1531[1U] = 0U;
            __Vtemp1531[2U] = 0U;
            __Vtemp1531[3U] = 0U;
            __Vtemp1531[4U] = 0U;
            __Vtemp1531[5U] = 0U;
            __Vtemp1531[6U] = 0U;
            __Vtemp1531[7U] = 0U;
            __Vtemp1531[8U] = 0U;
            __Vtemp1531[9U] = 0U;
            __Vtemp1531[0xaU] = 0U;
            __Vtemp1531[0xbU] = 0U;
            __Vtemp1531[0xcU] = 0U;
            __Vtemp1531[0xdU] = 0U;
            __Vtemp1531[0xeU] = 0U;
            __Vtemp1531[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1532, __Vtemp1531, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1532[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_100 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1533[0U] = 1U;
            __Vtemp1533[1U] = 0U;
            __Vtemp1533[2U] = 0U;
            __Vtemp1533[3U] = 0U;
            __Vtemp1533[4U] = 0U;
            __Vtemp1533[5U] = 0U;
            __Vtemp1533[6U] = 0U;
            __Vtemp1533[7U] = 0U;
            __Vtemp1533[8U] = 0U;
            __Vtemp1533[9U] = 0U;
            __Vtemp1533[0xaU] = 0U;
            __Vtemp1533[0xbU] = 0U;
            __Vtemp1533[0xcU] = 0U;
            __Vtemp1533[0xdU] = 0U;
            __Vtemp1533[0xeU] = 0U;
            __Vtemp1533[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1534, __Vtemp1533, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1534[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_202 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1535[0U] = 1U;
            __Vtemp1535[1U] = 0U;
            __Vtemp1535[2U] = 0U;
            __Vtemp1535[3U] = 0U;
            __Vtemp1535[4U] = 0U;
            __Vtemp1535[5U] = 0U;
            __Vtemp1535[6U] = 0U;
            __Vtemp1535[7U] = 0U;
            __Vtemp1535[8U] = 0U;
            __Vtemp1535[9U] = 0U;
            __Vtemp1535[0xaU] = 0U;
            __Vtemp1535[0xbU] = 0U;
            __Vtemp1535[0xcU] = 0U;
            __Vtemp1535[0xdU] = 0U;
            __Vtemp1535[0xeU] = 0U;
            __Vtemp1535[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1536, __Vtemp1535, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1536[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_37 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1537[0U] = 1U;
            __Vtemp1537[1U] = 0U;
            __Vtemp1537[2U] = 0U;
            __Vtemp1537[3U] = 0U;
            __Vtemp1537[4U] = 0U;
            __Vtemp1537[5U] = 0U;
            __Vtemp1537[6U] = 0U;
            __Vtemp1537[7U] = 0U;
            __Vtemp1537[8U] = 0U;
            __Vtemp1537[9U] = 0U;
            __Vtemp1537[0xaU] = 0U;
            __Vtemp1537[0xbU] = 0U;
            __Vtemp1537[0xcU] = 0U;
            __Vtemp1537[0xdU] = 0U;
            __Vtemp1537[0xeU] = 0U;
            __Vtemp1537[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1538, __Vtemp1537, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1538[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_99 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1539[0U] = 1U;
            __Vtemp1539[1U] = 0U;
            __Vtemp1539[2U] = 0U;
            __Vtemp1539[3U] = 0U;
            __Vtemp1539[4U] = 0U;
            __Vtemp1539[5U] = 0U;
            __Vtemp1539[6U] = 0U;
            __Vtemp1539[7U] = 0U;
            __Vtemp1539[8U] = 0U;
            __Vtemp1539[9U] = 0U;
            __Vtemp1539[0xaU] = 0U;
            __Vtemp1539[0xbU] = 0U;
            __Vtemp1539[0xcU] = 0U;
            __Vtemp1539[0xdU] = 0U;
            __Vtemp1539[0xeU] = 0U;
            __Vtemp1539[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1540, __Vtemp1539, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1540[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_201 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1541[0U] = 1U;
            __Vtemp1541[1U] = 0U;
            __Vtemp1541[2U] = 0U;
            __Vtemp1541[3U] = 0U;
            __Vtemp1541[4U] = 0U;
            __Vtemp1541[5U] = 0U;
            __Vtemp1541[6U] = 0U;
            __Vtemp1541[7U] = 0U;
            __Vtemp1541[8U] = 0U;
            __Vtemp1541[9U] = 0U;
            __Vtemp1541[0xaU] = 0U;
            __Vtemp1541[0xbU] = 0U;
            __Vtemp1541[0xcU] = 0U;
            __Vtemp1541[0xdU] = 0U;
            __Vtemp1541[0xeU] = 0U;
            __Vtemp1541[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1542, __Vtemp1541, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1542[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_36 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1543[0U] = 1U;
            __Vtemp1543[1U] = 0U;
            __Vtemp1543[2U] = 0U;
            __Vtemp1543[3U] = 0U;
            __Vtemp1543[4U] = 0U;
            __Vtemp1543[5U] = 0U;
            __Vtemp1543[6U] = 0U;
            __Vtemp1543[7U] = 0U;
            __Vtemp1543[8U] = 0U;
            __Vtemp1543[9U] = 0U;
            __Vtemp1543[0xaU] = 0U;
            __Vtemp1543[0xbU] = 0U;
            __Vtemp1543[0xcU] = 0U;
            __Vtemp1543[0xdU] = 0U;
            __Vtemp1543[0xeU] = 0U;
            __Vtemp1543[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1544, __Vtemp1543, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1544[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_98 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1545[0U] = 1U;
            __Vtemp1545[1U] = 0U;
            __Vtemp1545[2U] = 0U;
            __Vtemp1545[3U] = 0U;
            __Vtemp1545[4U] = 0U;
            __Vtemp1545[5U] = 0U;
            __Vtemp1545[6U] = 0U;
            __Vtemp1545[7U] = 0U;
            __Vtemp1545[8U] = 0U;
            __Vtemp1545[9U] = 0U;
            __Vtemp1545[0xaU] = 0U;
            __Vtemp1545[0xbU] = 0U;
            __Vtemp1545[0xcU] = 0U;
            __Vtemp1545[0xdU] = 0U;
            __Vtemp1545[0xeU] = 0U;
            __Vtemp1545[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1546, __Vtemp1545, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1546[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_148 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__67(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__67\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1547[16];
    WData/*511:0*/ __Vtemp1548[16];
    WData/*511:0*/ __Vtemp1549[16];
    WData/*511:0*/ __Vtemp1550[16];
    WData/*511:0*/ __Vtemp1551[16];
    WData/*511:0*/ __Vtemp1552[16];
    WData/*511:0*/ __Vtemp1553[16];
    WData/*511:0*/ __Vtemp1554[16];
    WData/*511:0*/ __Vtemp1555[16];
    WData/*511:0*/ __Vtemp1556[16];
    WData/*511:0*/ __Vtemp1557[16];
    WData/*511:0*/ __Vtemp1558[16];
    WData/*511:0*/ __Vtemp1559[16];
    WData/*511:0*/ __Vtemp1560[16];
    WData/*511:0*/ __Vtemp1561[16];
    WData/*511:0*/ __Vtemp1562[16];
    WData/*511:0*/ __Vtemp1563[16];
    WData/*511:0*/ __Vtemp1564[16];
    WData/*511:0*/ __Vtemp1565[16];
    WData/*511:0*/ __Vtemp1566[16];
    WData/*511:0*/ __Vtemp1567[16];
    WData/*511:0*/ __Vtemp1568[16];
    WData/*511:0*/ __Vtemp1569[16];
    WData/*511:0*/ __Vtemp1570[16];
    WData/*511:0*/ __Vtemp1571[16];
    WData/*511:0*/ __Vtemp1572[16];
    WData/*511:0*/ __Vtemp1573[16];
    WData/*511:0*/ __Vtemp1574[16];
    WData/*511:0*/ __Vtemp1575[16];
    WData/*511:0*/ __Vtemp1576[16];
    WData/*511:0*/ __Vtemp1577[16];
    WData/*511:0*/ __Vtemp1578[16];
    WData/*511:0*/ __Vtemp1579[16];
    WData/*511:0*/ __Vtemp1580[16];
    WData/*511:0*/ __Vtemp1581[16];
    WData/*511:0*/ __Vtemp1582[16];
    WData/*511:0*/ __Vtemp1583[16];
    WData/*511:0*/ __Vtemp1584[16];
    WData/*511:0*/ __Vtemp1585[16];
    WData/*511:0*/ __Vtemp1586[16];
    WData/*511:0*/ __Vtemp1587[16];
    WData/*511:0*/ __Vtemp1588[16];
    WData/*511:0*/ __Vtemp1589[16];
    WData/*511:0*/ __Vtemp1590[16];
    WData/*511:0*/ __Vtemp1591[16];
    WData/*511:0*/ __Vtemp1592[16];
    WData/*511:0*/ __Vtemp1593[16];
    WData/*511:0*/ __Vtemp1594[16];
    WData/*511:0*/ __Vtemp1595[16];
    WData/*511:0*/ __Vtemp1596[16];
    WData/*511:0*/ __Vtemp1597[16];
    WData/*511:0*/ __Vtemp1598[16];
    WData/*511:0*/ __Vtemp1599[16];
    WData/*511:0*/ __Vtemp1600[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1547[0U] = 1U;
            __Vtemp1547[1U] = 0U;
            __Vtemp1547[2U] = 0U;
            __Vtemp1547[3U] = 0U;
            __Vtemp1547[4U] = 0U;
            __Vtemp1547[5U] = 0U;
            __Vtemp1547[6U] = 0U;
            __Vtemp1547[7U] = 0U;
            __Vtemp1547[8U] = 0U;
            __Vtemp1547[9U] = 0U;
            __Vtemp1547[0xaU] = 0U;
            __Vtemp1547[0xbU] = 0U;
            __Vtemp1547[0xcU] = 0U;
            __Vtemp1547[0xdU] = 0U;
            __Vtemp1547[0xeU] = 0U;
            __Vtemp1547[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1548, __Vtemp1547, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1548[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_147 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1549[0U] = 1U;
            __Vtemp1549[1U] = 0U;
            __Vtemp1549[2U] = 0U;
            __Vtemp1549[3U] = 0U;
            __Vtemp1549[4U] = 0U;
            __Vtemp1549[5U] = 0U;
            __Vtemp1549[6U] = 0U;
            __Vtemp1549[7U] = 0U;
            __Vtemp1549[8U] = 0U;
            __Vtemp1549[9U] = 0U;
            __Vtemp1549[0xaU] = 0U;
            __Vtemp1549[0xbU] = 0U;
            __Vtemp1549[0xcU] = 0U;
            __Vtemp1549[0xdU] = 0U;
            __Vtemp1549[0xeU] = 0U;
            __Vtemp1549[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1550, __Vtemp1549, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1550[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_146 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1551[0U] = 1U;
            __Vtemp1551[1U] = 0U;
            __Vtemp1551[2U] = 0U;
            __Vtemp1551[3U] = 0U;
            __Vtemp1551[4U] = 0U;
            __Vtemp1551[5U] = 0U;
            __Vtemp1551[6U] = 0U;
            __Vtemp1551[7U] = 0U;
            __Vtemp1551[8U] = 0U;
            __Vtemp1551[9U] = 0U;
            __Vtemp1551[0xaU] = 0U;
            __Vtemp1551[0xbU] = 0U;
            __Vtemp1551[0xcU] = 0U;
            __Vtemp1551[0xdU] = 0U;
            __Vtemp1551[0xeU] = 0U;
            __Vtemp1551[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1552, __Vtemp1551, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1552[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_145 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1553[0U] = 1U;
            __Vtemp1553[1U] = 0U;
            __Vtemp1553[2U] = 0U;
            __Vtemp1553[3U] = 0U;
            __Vtemp1553[4U] = 0U;
            __Vtemp1553[5U] = 0U;
            __Vtemp1553[6U] = 0U;
            __Vtemp1553[7U] = 0U;
            __Vtemp1553[8U] = 0U;
            __Vtemp1553[9U] = 0U;
            __Vtemp1553[0xaU] = 0U;
            __Vtemp1553[0xbU] = 0U;
            __Vtemp1553[0xcU] = 0U;
            __Vtemp1553[0xdU] = 0U;
            __Vtemp1553[0xeU] = 0U;
            __Vtemp1553[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1554, __Vtemp1553, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1554[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_144 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1555[0U] = 1U;
            __Vtemp1555[1U] = 0U;
            __Vtemp1555[2U] = 0U;
            __Vtemp1555[3U] = 0U;
            __Vtemp1555[4U] = 0U;
            __Vtemp1555[5U] = 0U;
            __Vtemp1555[6U] = 0U;
            __Vtemp1555[7U] = 0U;
            __Vtemp1555[8U] = 0U;
            __Vtemp1555[9U] = 0U;
            __Vtemp1555[0xaU] = 0U;
            __Vtemp1555[0xbU] = 0U;
            __Vtemp1555[0xcU] = 0U;
            __Vtemp1555[0xdU] = 0U;
            __Vtemp1555[0xeU] = 0U;
            __Vtemp1555[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1556, __Vtemp1555, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1556[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_143 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1557[0U] = 1U;
            __Vtemp1557[1U] = 0U;
            __Vtemp1557[2U] = 0U;
            __Vtemp1557[3U] = 0U;
            __Vtemp1557[4U] = 0U;
            __Vtemp1557[5U] = 0U;
            __Vtemp1557[6U] = 0U;
            __Vtemp1557[7U] = 0U;
            __Vtemp1557[8U] = 0U;
            __Vtemp1557[9U] = 0U;
            __Vtemp1557[0xaU] = 0U;
            __Vtemp1557[0xbU] = 0U;
            __Vtemp1557[0xcU] = 0U;
            __Vtemp1557[0xdU] = 0U;
            __Vtemp1557[0xeU] = 0U;
            __Vtemp1557[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1558, __Vtemp1557, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1558[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_142 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1559[0U] = 1U;
            __Vtemp1559[1U] = 0U;
            __Vtemp1559[2U] = 0U;
            __Vtemp1559[3U] = 0U;
            __Vtemp1559[4U] = 0U;
            __Vtemp1559[5U] = 0U;
            __Vtemp1559[6U] = 0U;
            __Vtemp1559[7U] = 0U;
            __Vtemp1559[8U] = 0U;
            __Vtemp1559[9U] = 0U;
            __Vtemp1559[0xaU] = 0U;
            __Vtemp1559[0xbU] = 0U;
            __Vtemp1559[0xcU] = 0U;
            __Vtemp1559[0xdU] = 0U;
            __Vtemp1559[0xeU] = 0U;
            __Vtemp1559[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1560, __Vtemp1559, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1560[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_141 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1561[0U] = 1U;
            __Vtemp1561[1U] = 0U;
            __Vtemp1561[2U] = 0U;
            __Vtemp1561[3U] = 0U;
            __Vtemp1561[4U] = 0U;
            __Vtemp1561[5U] = 0U;
            __Vtemp1561[6U] = 0U;
            __Vtemp1561[7U] = 0U;
            __Vtemp1561[8U] = 0U;
            __Vtemp1561[9U] = 0U;
            __Vtemp1561[0xaU] = 0U;
            __Vtemp1561[0xbU] = 0U;
            __Vtemp1561[0xcU] = 0U;
            __Vtemp1561[0xdU] = 0U;
            __Vtemp1561[0xeU] = 0U;
            __Vtemp1561[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1562, __Vtemp1561, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1562[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_140 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1563[0U] = 1U;
            __Vtemp1563[1U] = 0U;
            __Vtemp1563[2U] = 0U;
            __Vtemp1563[3U] = 0U;
            __Vtemp1563[4U] = 0U;
            __Vtemp1563[5U] = 0U;
            __Vtemp1563[6U] = 0U;
            __Vtemp1563[7U] = 0U;
            __Vtemp1563[8U] = 0U;
            __Vtemp1563[9U] = 0U;
            __Vtemp1563[0xaU] = 0U;
            __Vtemp1563[0xbU] = 0U;
            __Vtemp1563[0xcU] = 0U;
            __Vtemp1563[0xdU] = 0U;
            __Vtemp1563[0xeU] = 0U;
            __Vtemp1563[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1564, __Vtemp1563, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1564[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_139 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1565[0U] = 1U;
            __Vtemp1565[1U] = 0U;
            __Vtemp1565[2U] = 0U;
            __Vtemp1565[3U] = 0U;
            __Vtemp1565[4U] = 0U;
            __Vtemp1565[5U] = 0U;
            __Vtemp1565[6U] = 0U;
            __Vtemp1565[7U] = 0U;
            __Vtemp1565[8U] = 0U;
            __Vtemp1565[9U] = 0U;
            __Vtemp1565[0xaU] = 0U;
            __Vtemp1565[0xbU] = 0U;
            __Vtemp1565[0xcU] = 0U;
            __Vtemp1565[0xdU] = 0U;
            __Vtemp1565[0xeU] = 0U;
            __Vtemp1565[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1566, __Vtemp1565, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1566[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_138 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1567[0U] = 1U;
            __Vtemp1567[1U] = 0U;
            __Vtemp1567[2U] = 0U;
            __Vtemp1567[3U] = 0U;
            __Vtemp1567[4U] = 0U;
            __Vtemp1567[5U] = 0U;
            __Vtemp1567[6U] = 0U;
            __Vtemp1567[7U] = 0U;
            __Vtemp1567[8U] = 0U;
            __Vtemp1567[9U] = 0U;
            __Vtemp1567[0xaU] = 0U;
            __Vtemp1567[0xbU] = 0U;
            __Vtemp1567[0xcU] = 0U;
            __Vtemp1567[0xdU] = 0U;
            __Vtemp1567[0xeU] = 0U;
            __Vtemp1567[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1568, __Vtemp1567, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1568[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_137 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1569[0U] = 1U;
            __Vtemp1569[1U] = 0U;
            __Vtemp1569[2U] = 0U;
            __Vtemp1569[3U] = 0U;
            __Vtemp1569[4U] = 0U;
            __Vtemp1569[5U] = 0U;
            __Vtemp1569[6U] = 0U;
            __Vtemp1569[7U] = 0U;
            __Vtemp1569[8U] = 0U;
            __Vtemp1569[9U] = 0U;
            __Vtemp1569[0xaU] = 0U;
            __Vtemp1569[0xbU] = 0U;
            __Vtemp1569[0xcU] = 0U;
            __Vtemp1569[0xdU] = 0U;
            __Vtemp1569[0xeU] = 0U;
            __Vtemp1569[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1570, __Vtemp1569, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1570[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_136 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1571[0U] = 1U;
            __Vtemp1571[1U] = 0U;
            __Vtemp1571[2U] = 0U;
            __Vtemp1571[3U] = 0U;
            __Vtemp1571[4U] = 0U;
            __Vtemp1571[5U] = 0U;
            __Vtemp1571[6U] = 0U;
            __Vtemp1571[7U] = 0U;
            __Vtemp1571[8U] = 0U;
            __Vtemp1571[9U] = 0U;
            __Vtemp1571[0xaU] = 0U;
            __Vtemp1571[0xbU] = 0U;
            __Vtemp1571[0xcU] = 0U;
            __Vtemp1571[0xdU] = 0U;
            __Vtemp1571[0xeU] = 0U;
            __Vtemp1571[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1572, __Vtemp1571, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1572[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_135 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1573[0U] = 1U;
            __Vtemp1573[1U] = 0U;
            __Vtemp1573[2U] = 0U;
            __Vtemp1573[3U] = 0U;
            __Vtemp1573[4U] = 0U;
            __Vtemp1573[5U] = 0U;
            __Vtemp1573[6U] = 0U;
            __Vtemp1573[7U] = 0U;
            __Vtemp1573[8U] = 0U;
            __Vtemp1573[9U] = 0U;
            __Vtemp1573[0xaU] = 0U;
            __Vtemp1573[0xbU] = 0U;
            __Vtemp1573[0xcU] = 0U;
            __Vtemp1573[0xdU] = 0U;
            __Vtemp1573[0xeU] = 0U;
            __Vtemp1573[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1574, __Vtemp1573, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1574[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_134 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1575[0U] = 1U;
            __Vtemp1575[1U] = 0U;
            __Vtemp1575[2U] = 0U;
            __Vtemp1575[3U] = 0U;
            __Vtemp1575[4U] = 0U;
            __Vtemp1575[5U] = 0U;
            __Vtemp1575[6U] = 0U;
            __Vtemp1575[7U] = 0U;
            __Vtemp1575[8U] = 0U;
            __Vtemp1575[9U] = 0U;
            __Vtemp1575[0xaU] = 0U;
            __Vtemp1575[0xbU] = 0U;
            __Vtemp1575[0xcU] = 0U;
            __Vtemp1575[0xdU] = 0U;
            __Vtemp1575[0xeU] = 0U;
            __Vtemp1575[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1576, __Vtemp1575, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1576[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_133 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1577[0U] = 1U;
            __Vtemp1577[1U] = 0U;
            __Vtemp1577[2U] = 0U;
            __Vtemp1577[3U] = 0U;
            __Vtemp1577[4U] = 0U;
            __Vtemp1577[5U] = 0U;
            __Vtemp1577[6U] = 0U;
            __Vtemp1577[7U] = 0U;
            __Vtemp1577[8U] = 0U;
            __Vtemp1577[9U] = 0U;
            __Vtemp1577[0xaU] = 0U;
            __Vtemp1577[0xbU] = 0U;
            __Vtemp1577[0xcU] = 0U;
            __Vtemp1577[0xdU] = 0U;
            __Vtemp1577[0xeU] = 0U;
            __Vtemp1577[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1578, __Vtemp1577, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1578[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_132 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1579[0U] = 1U;
            __Vtemp1579[1U] = 0U;
            __Vtemp1579[2U] = 0U;
            __Vtemp1579[3U] = 0U;
            __Vtemp1579[4U] = 0U;
            __Vtemp1579[5U] = 0U;
            __Vtemp1579[6U] = 0U;
            __Vtemp1579[7U] = 0U;
            __Vtemp1579[8U] = 0U;
            __Vtemp1579[9U] = 0U;
            __Vtemp1579[0xaU] = 0U;
            __Vtemp1579[0xbU] = 0U;
            __Vtemp1579[0xcU] = 0U;
            __Vtemp1579[0xdU] = 0U;
            __Vtemp1579[0xeU] = 0U;
            __Vtemp1579[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1580, __Vtemp1579, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1580[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_131 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1581[0U] = 1U;
            __Vtemp1581[1U] = 0U;
            __Vtemp1581[2U] = 0U;
            __Vtemp1581[3U] = 0U;
            __Vtemp1581[4U] = 0U;
            __Vtemp1581[5U] = 0U;
            __Vtemp1581[6U] = 0U;
            __Vtemp1581[7U] = 0U;
            __Vtemp1581[8U] = 0U;
            __Vtemp1581[9U] = 0U;
            __Vtemp1581[0xaU] = 0U;
            __Vtemp1581[0xbU] = 0U;
            __Vtemp1581[0xcU] = 0U;
            __Vtemp1581[0xdU] = 0U;
            __Vtemp1581[0xeU] = 0U;
            __Vtemp1581[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1582, __Vtemp1581, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1582[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_130 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1583[0U] = 1U;
            __Vtemp1583[1U] = 0U;
            __Vtemp1583[2U] = 0U;
            __Vtemp1583[3U] = 0U;
            __Vtemp1583[4U] = 0U;
            __Vtemp1583[5U] = 0U;
            __Vtemp1583[6U] = 0U;
            __Vtemp1583[7U] = 0U;
            __Vtemp1583[8U] = 0U;
            __Vtemp1583[9U] = 0U;
            __Vtemp1583[0xaU] = 0U;
            __Vtemp1583[0xbU] = 0U;
            __Vtemp1583[0xcU] = 0U;
            __Vtemp1583[0xdU] = 0U;
            __Vtemp1583[0xeU] = 0U;
            __Vtemp1583[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1584, __Vtemp1583, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1584[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_129 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1585[0U] = 1U;
            __Vtemp1585[1U] = 0U;
            __Vtemp1585[2U] = 0U;
            __Vtemp1585[3U] = 0U;
            __Vtemp1585[4U] = 0U;
            __Vtemp1585[5U] = 0U;
            __Vtemp1585[6U] = 0U;
            __Vtemp1585[7U] = 0U;
            __Vtemp1585[8U] = 0U;
            __Vtemp1585[9U] = 0U;
            __Vtemp1585[0xaU] = 0U;
            __Vtemp1585[0xbU] = 0U;
            __Vtemp1585[0xcU] = 0U;
            __Vtemp1585[0xdU] = 0U;
            __Vtemp1585[0xeU] = 0U;
            __Vtemp1585[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1586, __Vtemp1585, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1586[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_128 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1587[0U] = 1U;
            __Vtemp1587[1U] = 0U;
            __Vtemp1587[2U] = 0U;
            __Vtemp1587[3U] = 0U;
            __Vtemp1587[4U] = 0U;
            __Vtemp1587[5U] = 0U;
            __Vtemp1587[6U] = 0U;
            __Vtemp1587[7U] = 0U;
            __Vtemp1587[8U] = 0U;
            __Vtemp1587[9U] = 0U;
            __Vtemp1587[0xaU] = 0U;
            __Vtemp1587[0xbU] = 0U;
            __Vtemp1587[0xcU] = 0U;
            __Vtemp1587[0xdU] = 0U;
            __Vtemp1587[0xeU] = 0U;
            __Vtemp1587[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1588, __Vtemp1587, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1588[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_127 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1589[0U] = 1U;
            __Vtemp1589[1U] = 0U;
            __Vtemp1589[2U] = 0U;
            __Vtemp1589[3U] = 0U;
            __Vtemp1589[4U] = 0U;
            __Vtemp1589[5U] = 0U;
            __Vtemp1589[6U] = 0U;
            __Vtemp1589[7U] = 0U;
            __Vtemp1589[8U] = 0U;
            __Vtemp1589[9U] = 0U;
            __Vtemp1589[0xaU] = 0U;
            __Vtemp1589[0xbU] = 0U;
            __Vtemp1589[0xcU] = 0U;
            __Vtemp1589[0xdU] = 0U;
            __Vtemp1589[0xeU] = 0U;
            __Vtemp1589[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1590, __Vtemp1589, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1590[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_126 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1591[0U] = 1U;
            __Vtemp1591[1U] = 0U;
            __Vtemp1591[2U] = 0U;
            __Vtemp1591[3U] = 0U;
            __Vtemp1591[4U] = 0U;
            __Vtemp1591[5U] = 0U;
            __Vtemp1591[6U] = 0U;
            __Vtemp1591[7U] = 0U;
            __Vtemp1591[8U] = 0U;
            __Vtemp1591[9U] = 0U;
            __Vtemp1591[0xaU] = 0U;
            __Vtemp1591[0xbU] = 0U;
            __Vtemp1591[0xcU] = 0U;
            __Vtemp1591[0xdU] = 0U;
            __Vtemp1591[0xeU] = 0U;
            __Vtemp1591[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1592, __Vtemp1591, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1592[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_125 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1593[0U] = 1U;
            __Vtemp1593[1U] = 0U;
            __Vtemp1593[2U] = 0U;
            __Vtemp1593[3U] = 0U;
            __Vtemp1593[4U] = 0U;
            __Vtemp1593[5U] = 0U;
            __Vtemp1593[6U] = 0U;
            __Vtemp1593[7U] = 0U;
            __Vtemp1593[8U] = 0U;
            __Vtemp1593[9U] = 0U;
            __Vtemp1593[0xaU] = 0U;
            __Vtemp1593[0xbU] = 0U;
            __Vtemp1593[0xcU] = 0U;
            __Vtemp1593[0xdU] = 0U;
            __Vtemp1593[0xeU] = 0U;
            __Vtemp1593[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1594, __Vtemp1593, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1594[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_22 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1595[0U] = 1U;
            __Vtemp1595[1U] = 0U;
            __Vtemp1595[2U] = 0U;
            __Vtemp1595[3U] = 0U;
            __Vtemp1595[4U] = 0U;
            __Vtemp1595[5U] = 0U;
            __Vtemp1595[6U] = 0U;
            __Vtemp1595[7U] = 0U;
            __Vtemp1595[8U] = 0U;
            __Vtemp1595[9U] = 0U;
            __Vtemp1595[0xaU] = 0U;
            __Vtemp1595[0xbU] = 0U;
            __Vtemp1595[0xcU] = 0U;
            __Vtemp1595[0xdU] = 0U;
            __Vtemp1595[0xeU] = 0U;
            __Vtemp1595[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1596, __Vtemp1595, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1596[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_174 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1597[0U] = 1U;
            __Vtemp1597[1U] = 0U;
            __Vtemp1597[2U] = 0U;
            __Vtemp1597[3U] = 0U;
            __Vtemp1597[4U] = 0U;
            __Vtemp1597[5U] = 0U;
            __Vtemp1597[6U] = 0U;
            __Vtemp1597[7U] = 0U;
            __Vtemp1597[8U] = 0U;
            __Vtemp1597[9U] = 0U;
            __Vtemp1597[0xaU] = 0U;
            __Vtemp1597[0xbU] = 0U;
            __Vtemp1597[0xcU] = 0U;
            __Vtemp1597[0xdU] = 0U;
            __Vtemp1597[0xeU] = 0U;
            __Vtemp1597[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1598, __Vtemp1597, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1598[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_9 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1599[0U] = 1U;
            __Vtemp1599[1U] = 0U;
            __Vtemp1599[2U] = 0U;
            __Vtemp1599[3U] = 0U;
            __Vtemp1599[4U] = 0U;
            __Vtemp1599[5U] = 0U;
            __Vtemp1599[6U] = 0U;
            __Vtemp1599[7U] = 0U;
            __Vtemp1599[8U] = 0U;
            __Vtemp1599[9U] = 0U;
            __Vtemp1599[0xaU] = 0U;
            __Vtemp1599[0xbU] = 0U;
            __Vtemp1599[0xcU] = 0U;
            __Vtemp1599[0xdU] = 0U;
            __Vtemp1599[0xeU] = 0U;
            __Vtemp1599[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1600, __Vtemp1599, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1600[0U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_9 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
