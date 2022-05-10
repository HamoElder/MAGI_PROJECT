// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__64(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__64\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1385[16];
    WData/*511:0*/ __Vtemp1386[16];
    WData/*511:0*/ __Vtemp1387[16];
    WData/*511:0*/ __Vtemp1388[16];
    WData/*511:0*/ __Vtemp1389[16];
    WData/*511:0*/ __Vtemp1390[16];
    WData/*511:0*/ __Vtemp1391[16];
    WData/*511:0*/ __Vtemp1392[16];
    WData/*511:0*/ __Vtemp1393[16];
    WData/*511:0*/ __Vtemp1394[16];
    WData/*511:0*/ __Vtemp1395[16];
    WData/*511:0*/ __Vtemp1396[16];
    WData/*511:0*/ __Vtemp1397[16];
    WData/*511:0*/ __Vtemp1398[16];
    WData/*511:0*/ __Vtemp1399[16];
    WData/*511:0*/ __Vtemp1400[16];
    WData/*511:0*/ __Vtemp1401[16];
    WData/*511:0*/ __Vtemp1402[16];
    WData/*511:0*/ __Vtemp1403[16];
    WData/*511:0*/ __Vtemp1404[16];
    WData/*511:0*/ __Vtemp1405[16];
    WData/*511:0*/ __Vtemp1406[16];
    WData/*511:0*/ __Vtemp1407[16];
    WData/*511:0*/ __Vtemp1408[16];
    WData/*511:0*/ __Vtemp1409[16];
    WData/*511:0*/ __Vtemp1410[16];
    WData/*511:0*/ __Vtemp1411[16];
    WData/*511:0*/ __Vtemp1412[16];
    WData/*511:0*/ __Vtemp1413[16];
    WData/*511:0*/ __Vtemp1414[16];
    WData/*511:0*/ __Vtemp1415[16];
    WData/*511:0*/ __Vtemp1416[16];
    WData/*511:0*/ __Vtemp1417[16];
    WData/*511:0*/ __Vtemp1418[16];
    WData/*511:0*/ __Vtemp1419[16];
    WData/*511:0*/ __Vtemp1420[16];
    WData/*511:0*/ __Vtemp1421[16];
    WData/*511:0*/ __Vtemp1422[16];
    WData/*511:0*/ __Vtemp1423[16];
    WData/*511:0*/ __Vtemp1424[16];
    WData/*511:0*/ __Vtemp1425[16];
    WData/*511:0*/ __Vtemp1426[16];
    WData/*511:0*/ __Vtemp1427[16];
    WData/*511:0*/ __Vtemp1428[16];
    WData/*511:0*/ __Vtemp1429[16];
    WData/*511:0*/ __Vtemp1430[16];
    WData/*511:0*/ __Vtemp1431[16];
    WData/*511:0*/ __Vtemp1432[16];
    WData/*511:0*/ __Vtemp1433[16];
    WData/*511:0*/ __Vtemp1434[16];
    WData/*511:0*/ __Vtemp1435[16];
    WData/*511:0*/ __Vtemp1436[16];
    WData/*511:0*/ __Vtemp1437[16];
    WData/*511:0*/ __Vtemp1438[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1385[0U] = 1U;
            __Vtemp1385[1U] = 0U;
            __Vtemp1385[2U] = 0U;
            __Vtemp1385[3U] = 0U;
            __Vtemp1385[4U] = 0U;
            __Vtemp1385[5U] = 0U;
            __Vtemp1385[6U] = 0U;
            __Vtemp1385[7U] = 0U;
            __Vtemp1385[8U] = 0U;
            __Vtemp1385[9U] = 0U;
            __Vtemp1385[0xaU] = 0U;
            __Vtemp1385[0xbU] = 0U;
            __Vtemp1385[0xcU] = 0U;
            __Vtemp1385[0xdU] = 0U;
            __Vtemp1385[0xeU] = 0U;
            __Vtemp1385[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1386, __Vtemp1385, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1386[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_110 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1387[0U] = 1U;
            __Vtemp1387[1U] = 0U;
            __Vtemp1387[2U] = 0U;
            __Vtemp1387[3U] = 0U;
            __Vtemp1387[4U] = 0U;
            __Vtemp1387[5U] = 0U;
            __Vtemp1387[6U] = 0U;
            __Vtemp1387[7U] = 0U;
            __Vtemp1387[8U] = 0U;
            __Vtemp1387[9U] = 0U;
            __Vtemp1387[0xaU] = 0U;
            __Vtemp1387[0xbU] = 0U;
            __Vtemp1387[0xcU] = 0U;
            __Vtemp1387[0xdU] = 0U;
            __Vtemp1387[0xeU] = 0U;
            __Vtemp1387[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1388, __Vtemp1387, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1388[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_109 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1389[0U] = 1U;
            __Vtemp1389[1U] = 0U;
            __Vtemp1389[2U] = 0U;
            __Vtemp1389[3U] = 0U;
            __Vtemp1389[4U] = 0U;
            __Vtemp1389[5U] = 0U;
            __Vtemp1389[6U] = 0U;
            __Vtemp1389[7U] = 0U;
            __Vtemp1389[8U] = 0U;
            __Vtemp1389[9U] = 0U;
            __Vtemp1389[0xaU] = 0U;
            __Vtemp1389[0xbU] = 0U;
            __Vtemp1389[0xcU] = 0U;
            __Vtemp1389[0xdU] = 0U;
            __Vtemp1389[0xeU] = 0U;
            __Vtemp1389[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1390, __Vtemp1389, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1390[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_108 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1391[0U] = 1U;
            __Vtemp1391[1U] = 0U;
            __Vtemp1391[2U] = 0U;
            __Vtemp1391[3U] = 0U;
            __Vtemp1391[4U] = 0U;
            __Vtemp1391[5U] = 0U;
            __Vtemp1391[6U] = 0U;
            __Vtemp1391[7U] = 0U;
            __Vtemp1391[8U] = 0U;
            __Vtemp1391[9U] = 0U;
            __Vtemp1391[0xaU] = 0U;
            __Vtemp1391[0xbU] = 0U;
            __Vtemp1391[0xcU] = 0U;
            __Vtemp1391[0xdU] = 0U;
            __Vtemp1391[0xeU] = 0U;
            __Vtemp1391[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1392, __Vtemp1391, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1392[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_107 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1393[0U] = 1U;
            __Vtemp1393[1U] = 0U;
            __Vtemp1393[2U] = 0U;
            __Vtemp1393[3U] = 0U;
            __Vtemp1393[4U] = 0U;
            __Vtemp1393[5U] = 0U;
            __Vtemp1393[6U] = 0U;
            __Vtemp1393[7U] = 0U;
            __Vtemp1393[8U] = 0U;
            __Vtemp1393[9U] = 0U;
            __Vtemp1393[0xaU] = 0U;
            __Vtemp1393[0xbU] = 0U;
            __Vtemp1393[0xcU] = 0U;
            __Vtemp1393[0xdU] = 0U;
            __Vtemp1393[0xeU] = 0U;
            __Vtemp1393[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1394, __Vtemp1393, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1394[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_106 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1395[0U] = 1U;
            __Vtemp1395[1U] = 0U;
            __Vtemp1395[2U] = 0U;
            __Vtemp1395[3U] = 0U;
            __Vtemp1395[4U] = 0U;
            __Vtemp1395[5U] = 0U;
            __Vtemp1395[6U] = 0U;
            __Vtemp1395[7U] = 0U;
            __Vtemp1395[8U] = 0U;
            __Vtemp1395[9U] = 0U;
            __Vtemp1395[0xaU] = 0U;
            __Vtemp1395[0xbU] = 0U;
            __Vtemp1395[0xcU] = 0U;
            __Vtemp1395[0xdU] = 0U;
            __Vtemp1395[0xeU] = 0U;
            __Vtemp1395[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1396, __Vtemp1395, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1396[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_105 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1397[0U] = 1U;
            __Vtemp1397[1U] = 0U;
            __Vtemp1397[2U] = 0U;
            __Vtemp1397[3U] = 0U;
            __Vtemp1397[4U] = 0U;
            __Vtemp1397[5U] = 0U;
            __Vtemp1397[6U] = 0U;
            __Vtemp1397[7U] = 0U;
            __Vtemp1397[8U] = 0U;
            __Vtemp1397[9U] = 0U;
            __Vtemp1397[0xaU] = 0U;
            __Vtemp1397[0xbU] = 0U;
            __Vtemp1397[0xcU] = 0U;
            __Vtemp1397[0xdU] = 0U;
            __Vtemp1397[0xeU] = 0U;
            __Vtemp1397[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1398, __Vtemp1397, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1398[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_104 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1399[0U] = 1U;
            __Vtemp1399[1U] = 0U;
            __Vtemp1399[2U] = 0U;
            __Vtemp1399[3U] = 0U;
            __Vtemp1399[4U] = 0U;
            __Vtemp1399[5U] = 0U;
            __Vtemp1399[6U] = 0U;
            __Vtemp1399[7U] = 0U;
            __Vtemp1399[8U] = 0U;
            __Vtemp1399[9U] = 0U;
            __Vtemp1399[0xaU] = 0U;
            __Vtemp1399[0xbU] = 0U;
            __Vtemp1399[0xcU] = 0U;
            __Vtemp1399[0xdU] = 0U;
            __Vtemp1399[0xeU] = 0U;
            __Vtemp1399[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1400, __Vtemp1399, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1400[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_103 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1401[0U] = 1U;
            __Vtemp1401[1U] = 0U;
            __Vtemp1401[2U] = 0U;
            __Vtemp1401[3U] = 0U;
            __Vtemp1401[4U] = 0U;
            __Vtemp1401[5U] = 0U;
            __Vtemp1401[6U] = 0U;
            __Vtemp1401[7U] = 0U;
            __Vtemp1401[8U] = 0U;
            __Vtemp1401[9U] = 0U;
            __Vtemp1401[0xaU] = 0U;
            __Vtemp1401[0xbU] = 0U;
            __Vtemp1401[0xcU] = 0U;
            __Vtemp1401[0xdU] = 0U;
            __Vtemp1401[0xeU] = 0U;
            __Vtemp1401[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1402, __Vtemp1401, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1402[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_102 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1403[0U] = 1U;
            __Vtemp1403[1U] = 0U;
            __Vtemp1403[2U] = 0U;
            __Vtemp1403[3U] = 0U;
            __Vtemp1403[4U] = 0U;
            __Vtemp1403[5U] = 0U;
            __Vtemp1403[6U] = 0U;
            __Vtemp1403[7U] = 0U;
            __Vtemp1403[8U] = 0U;
            __Vtemp1403[9U] = 0U;
            __Vtemp1403[0xaU] = 0U;
            __Vtemp1403[0xbU] = 0U;
            __Vtemp1403[0xcU] = 0U;
            __Vtemp1403[0xdU] = 0U;
            __Vtemp1403[0xeU] = 0U;
            __Vtemp1403[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1404, __Vtemp1403, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1404[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_101 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1405[0U] = 1U;
            __Vtemp1405[1U] = 0U;
            __Vtemp1405[2U] = 0U;
            __Vtemp1405[3U] = 0U;
            __Vtemp1405[4U] = 0U;
            __Vtemp1405[5U] = 0U;
            __Vtemp1405[6U] = 0U;
            __Vtemp1405[7U] = 0U;
            __Vtemp1405[8U] = 0U;
            __Vtemp1405[9U] = 0U;
            __Vtemp1405[0xaU] = 0U;
            __Vtemp1405[0xbU] = 0U;
            __Vtemp1405[0xcU] = 0U;
            __Vtemp1405[0xdU] = 0U;
            __Vtemp1405[0xeU] = 0U;
            __Vtemp1405[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1406, __Vtemp1405, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1406[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_100 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1407[0U] = 1U;
            __Vtemp1407[1U] = 0U;
            __Vtemp1407[2U] = 0U;
            __Vtemp1407[3U] = 0U;
            __Vtemp1407[4U] = 0U;
            __Vtemp1407[5U] = 0U;
            __Vtemp1407[6U] = 0U;
            __Vtemp1407[7U] = 0U;
            __Vtemp1407[8U] = 0U;
            __Vtemp1407[9U] = 0U;
            __Vtemp1407[0xaU] = 0U;
            __Vtemp1407[0xbU] = 0U;
            __Vtemp1407[0xcU] = 0U;
            __Vtemp1407[0xdU] = 0U;
            __Vtemp1407[0xeU] = 0U;
            __Vtemp1407[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1408, __Vtemp1407, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1408[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_99 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1409[0U] = 1U;
            __Vtemp1409[1U] = 0U;
            __Vtemp1409[2U] = 0U;
            __Vtemp1409[3U] = 0U;
            __Vtemp1409[4U] = 0U;
            __Vtemp1409[5U] = 0U;
            __Vtemp1409[6U] = 0U;
            __Vtemp1409[7U] = 0U;
            __Vtemp1409[8U] = 0U;
            __Vtemp1409[9U] = 0U;
            __Vtemp1409[0xaU] = 0U;
            __Vtemp1409[0xbU] = 0U;
            __Vtemp1409[0xcU] = 0U;
            __Vtemp1409[0xdU] = 0U;
            __Vtemp1409[0xeU] = 0U;
            __Vtemp1409[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1410, __Vtemp1409, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1410[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_98 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1411[0U] = 1U;
            __Vtemp1411[1U] = 0U;
            __Vtemp1411[2U] = 0U;
            __Vtemp1411[3U] = 0U;
            __Vtemp1411[4U] = 0U;
            __Vtemp1411[5U] = 0U;
            __Vtemp1411[6U] = 0U;
            __Vtemp1411[7U] = 0U;
            __Vtemp1411[8U] = 0U;
            __Vtemp1411[9U] = 0U;
            __Vtemp1411[0xaU] = 0U;
            __Vtemp1411[0xbU] = 0U;
            __Vtemp1411[0xcU] = 0U;
            __Vtemp1411[0xdU] = 0U;
            __Vtemp1411[0xeU] = 0U;
            __Vtemp1411[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1412, __Vtemp1411, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1412[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_97 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1413[0U] = 1U;
            __Vtemp1413[1U] = 0U;
            __Vtemp1413[2U] = 0U;
            __Vtemp1413[3U] = 0U;
            __Vtemp1413[4U] = 0U;
            __Vtemp1413[5U] = 0U;
            __Vtemp1413[6U] = 0U;
            __Vtemp1413[7U] = 0U;
            __Vtemp1413[8U] = 0U;
            __Vtemp1413[9U] = 0U;
            __Vtemp1413[0xaU] = 0U;
            __Vtemp1413[0xbU] = 0U;
            __Vtemp1413[0xcU] = 0U;
            __Vtemp1413[0xdU] = 0U;
            __Vtemp1413[0xeU] = 0U;
            __Vtemp1413[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1414, __Vtemp1413, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1414[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_96 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1415[0U] = 1U;
            __Vtemp1415[1U] = 0U;
            __Vtemp1415[2U] = 0U;
            __Vtemp1415[3U] = 0U;
            __Vtemp1415[4U] = 0U;
            __Vtemp1415[5U] = 0U;
            __Vtemp1415[6U] = 0U;
            __Vtemp1415[7U] = 0U;
            __Vtemp1415[8U] = 0U;
            __Vtemp1415[9U] = 0U;
            __Vtemp1415[0xaU] = 0U;
            __Vtemp1415[0xbU] = 0U;
            __Vtemp1415[0xcU] = 0U;
            __Vtemp1415[0xdU] = 0U;
            __Vtemp1415[0xeU] = 0U;
            __Vtemp1415[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1416, __Vtemp1415, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1416[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_95 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1417[0U] = 1U;
            __Vtemp1417[1U] = 0U;
            __Vtemp1417[2U] = 0U;
            __Vtemp1417[3U] = 0U;
            __Vtemp1417[4U] = 0U;
            __Vtemp1417[5U] = 0U;
            __Vtemp1417[6U] = 0U;
            __Vtemp1417[7U] = 0U;
            __Vtemp1417[8U] = 0U;
            __Vtemp1417[9U] = 0U;
            __Vtemp1417[0xaU] = 0U;
            __Vtemp1417[0xbU] = 0U;
            __Vtemp1417[0xcU] = 0U;
            __Vtemp1417[0xdU] = 0U;
            __Vtemp1417[0xeU] = 0U;
            __Vtemp1417[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1418, __Vtemp1417, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1418[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_94 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1419[0U] = 1U;
            __Vtemp1419[1U] = 0U;
            __Vtemp1419[2U] = 0U;
            __Vtemp1419[3U] = 0U;
            __Vtemp1419[4U] = 0U;
            __Vtemp1419[5U] = 0U;
            __Vtemp1419[6U] = 0U;
            __Vtemp1419[7U] = 0U;
            __Vtemp1419[8U] = 0U;
            __Vtemp1419[9U] = 0U;
            __Vtemp1419[0xaU] = 0U;
            __Vtemp1419[0xbU] = 0U;
            __Vtemp1419[0xcU] = 0U;
            __Vtemp1419[0xdU] = 0U;
            __Vtemp1419[0xeU] = 0U;
            __Vtemp1419[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1420, __Vtemp1419, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1420[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_93 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1421[0U] = 1U;
            __Vtemp1421[1U] = 0U;
            __Vtemp1421[2U] = 0U;
            __Vtemp1421[3U] = 0U;
            __Vtemp1421[4U] = 0U;
            __Vtemp1421[5U] = 0U;
            __Vtemp1421[6U] = 0U;
            __Vtemp1421[7U] = 0U;
            __Vtemp1421[8U] = 0U;
            __Vtemp1421[9U] = 0U;
            __Vtemp1421[0xaU] = 0U;
            __Vtemp1421[0xbU] = 0U;
            __Vtemp1421[0xcU] = 0U;
            __Vtemp1421[0xdU] = 0U;
            __Vtemp1421[0xeU] = 0U;
            __Vtemp1421[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1422, __Vtemp1421, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1422[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_92 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1423[0U] = 1U;
            __Vtemp1423[1U] = 0U;
            __Vtemp1423[2U] = 0U;
            __Vtemp1423[3U] = 0U;
            __Vtemp1423[4U] = 0U;
            __Vtemp1423[5U] = 0U;
            __Vtemp1423[6U] = 0U;
            __Vtemp1423[7U] = 0U;
            __Vtemp1423[8U] = 0U;
            __Vtemp1423[9U] = 0U;
            __Vtemp1423[0xaU] = 0U;
            __Vtemp1423[0xbU] = 0U;
            __Vtemp1423[0xcU] = 0U;
            __Vtemp1423[0xdU] = 0U;
            __Vtemp1423[0xeU] = 0U;
            __Vtemp1423[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1424, __Vtemp1423, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1424[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_91 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1425[0U] = 1U;
            __Vtemp1425[1U] = 0U;
            __Vtemp1425[2U] = 0U;
            __Vtemp1425[3U] = 0U;
            __Vtemp1425[4U] = 0U;
            __Vtemp1425[5U] = 0U;
            __Vtemp1425[6U] = 0U;
            __Vtemp1425[7U] = 0U;
            __Vtemp1425[8U] = 0U;
            __Vtemp1425[9U] = 0U;
            __Vtemp1425[0xaU] = 0U;
            __Vtemp1425[0xbU] = 0U;
            __Vtemp1425[0xcU] = 0U;
            __Vtemp1425[0xdU] = 0U;
            __Vtemp1425[0xeU] = 0U;
            __Vtemp1425[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1426, __Vtemp1425, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1426[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_90 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1427[0U] = 1U;
            __Vtemp1427[1U] = 0U;
            __Vtemp1427[2U] = 0U;
            __Vtemp1427[3U] = 0U;
            __Vtemp1427[4U] = 0U;
            __Vtemp1427[5U] = 0U;
            __Vtemp1427[6U] = 0U;
            __Vtemp1427[7U] = 0U;
            __Vtemp1427[8U] = 0U;
            __Vtemp1427[9U] = 0U;
            __Vtemp1427[0xaU] = 0U;
            __Vtemp1427[0xbU] = 0U;
            __Vtemp1427[0xcU] = 0U;
            __Vtemp1427[0xdU] = 0U;
            __Vtemp1427[0xeU] = 0U;
            __Vtemp1427[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1428, __Vtemp1427, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1428[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_89 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1429[0U] = 1U;
            __Vtemp1429[1U] = 0U;
            __Vtemp1429[2U] = 0U;
            __Vtemp1429[3U] = 0U;
            __Vtemp1429[4U] = 0U;
            __Vtemp1429[5U] = 0U;
            __Vtemp1429[6U] = 0U;
            __Vtemp1429[7U] = 0U;
            __Vtemp1429[8U] = 0U;
            __Vtemp1429[9U] = 0U;
            __Vtemp1429[0xaU] = 0U;
            __Vtemp1429[0xbU] = 0U;
            __Vtemp1429[0xcU] = 0U;
            __Vtemp1429[0xdU] = 0U;
            __Vtemp1429[0xeU] = 0U;
            __Vtemp1429[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1430, __Vtemp1429, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1430[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_88 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1431[0U] = 1U;
            __Vtemp1431[1U] = 0U;
            __Vtemp1431[2U] = 0U;
            __Vtemp1431[3U] = 0U;
            __Vtemp1431[4U] = 0U;
            __Vtemp1431[5U] = 0U;
            __Vtemp1431[6U] = 0U;
            __Vtemp1431[7U] = 0U;
            __Vtemp1431[8U] = 0U;
            __Vtemp1431[9U] = 0U;
            __Vtemp1431[0xaU] = 0U;
            __Vtemp1431[0xbU] = 0U;
            __Vtemp1431[0xcU] = 0U;
            __Vtemp1431[0xdU] = 0U;
            __Vtemp1431[0xeU] = 0U;
            __Vtemp1431[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1432, __Vtemp1431, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1432[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_87 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1433[0U] = 1U;
            __Vtemp1433[1U] = 0U;
            __Vtemp1433[2U] = 0U;
            __Vtemp1433[3U] = 0U;
            __Vtemp1433[4U] = 0U;
            __Vtemp1433[5U] = 0U;
            __Vtemp1433[6U] = 0U;
            __Vtemp1433[7U] = 0U;
            __Vtemp1433[8U] = 0U;
            __Vtemp1433[9U] = 0U;
            __Vtemp1433[0xaU] = 0U;
            __Vtemp1433[0xbU] = 0U;
            __Vtemp1433[0xcU] = 0U;
            __Vtemp1433[0xdU] = 0U;
            __Vtemp1433[0xeU] = 0U;
            __Vtemp1433[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1434, __Vtemp1433, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1434[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_86 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1435[0U] = 1U;
            __Vtemp1435[1U] = 0U;
            __Vtemp1435[2U] = 0U;
            __Vtemp1435[3U] = 0U;
            __Vtemp1435[4U] = 0U;
            __Vtemp1435[5U] = 0U;
            __Vtemp1435[6U] = 0U;
            __Vtemp1435[7U] = 0U;
            __Vtemp1435[8U] = 0U;
            __Vtemp1435[9U] = 0U;
            __Vtemp1435[0xaU] = 0U;
            __Vtemp1435[0xbU] = 0U;
            __Vtemp1435[0xcU] = 0U;
            __Vtemp1435[0xdU] = 0U;
            __Vtemp1435[0xeU] = 0U;
            __Vtemp1435[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1436, __Vtemp1435, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1436[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_85 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1437[0U] = 1U;
            __Vtemp1437[1U] = 0U;
            __Vtemp1437[2U] = 0U;
            __Vtemp1437[3U] = 0U;
            __Vtemp1437[4U] = 0U;
            __Vtemp1437[5U] = 0U;
            __Vtemp1437[6U] = 0U;
            __Vtemp1437[7U] = 0U;
            __Vtemp1437[8U] = 0U;
            __Vtemp1437[9U] = 0U;
            __Vtemp1437[0xaU] = 0U;
            __Vtemp1437[0xbU] = 0U;
            __Vtemp1437[0xcU] = 0U;
            __Vtemp1437[0xdU] = 0U;
            __Vtemp1437[0xeU] = 0U;
            __Vtemp1437[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1438, __Vtemp1437, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1438[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_84 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__65(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__65\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1439[16];
    WData/*511:0*/ __Vtemp1440[16];
    WData/*511:0*/ __Vtemp1441[16];
    WData/*511:0*/ __Vtemp1442[16];
    WData/*511:0*/ __Vtemp1443[16];
    WData/*511:0*/ __Vtemp1444[16];
    WData/*511:0*/ __Vtemp1445[16];
    WData/*511:0*/ __Vtemp1446[16];
    WData/*511:0*/ __Vtemp1447[16];
    WData/*511:0*/ __Vtemp1448[16];
    WData/*511:0*/ __Vtemp1449[16];
    WData/*511:0*/ __Vtemp1450[16];
    WData/*511:0*/ __Vtemp1451[16];
    WData/*511:0*/ __Vtemp1452[16];
    WData/*511:0*/ __Vtemp1453[16];
    WData/*511:0*/ __Vtemp1454[16];
    WData/*511:0*/ __Vtemp1455[16];
    WData/*511:0*/ __Vtemp1456[16];
    WData/*511:0*/ __Vtemp1457[16];
    WData/*511:0*/ __Vtemp1458[16];
    WData/*511:0*/ __Vtemp1459[16];
    WData/*511:0*/ __Vtemp1460[16];
    WData/*511:0*/ __Vtemp1461[16];
    WData/*511:0*/ __Vtemp1462[16];
    WData/*511:0*/ __Vtemp1463[16];
    WData/*511:0*/ __Vtemp1464[16];
    WData/*511:0*/ __Vtemp1465[16];
    WData/*511:0*/ __Vtemp1466[16];
    WData/*511:0*/ __Vtemp1467[16];
    WData/*511:0*/ __Vtemp1468[16];
    WData/*511:0*/ __Vtemp1469[16];
    WData/*511:0*/ __Vtemp1470[16];
    WData/*511:0*/ __Vtemp1471[16];
    WData/*511:0*/ __Vtemp1472[16];
    WData/*511:0*/ __Vtemp1473[16];
    WData/*511:0*/ __Vtemp1474[16];
    WData/*511:0*/ __Vtemp1475[16];
    WData/*511:0*/ __Vtemp1476[16];
    WData/*511:0*/ __Vtemp1477[16];
    WData/*511:0*/ __Vtemp1478[16];
    WData/*511:0*/ __Vtemp1479[16];
    WData/*511:0*/ __Vtemp1480[16];
    WData/*511:0*/ __Vtemp1481[16];
    WData/*511:0*/ __Vtemp1482[16];
    WData/*511:0*/ __Vtemp1483[16];
    WData/*511:0*/ __Vtemp1484[16];
    WData/*511:0*/ __Vtemp1485[16];
    WData/*511:0*/ __Vtemp1486[16];
    WData/*511:0*/ __Vtemp1487[16];
    WData/*511:0*/ __Vtemp1488[16];
    WData/*511:0*/ __Vtemp1489[16];
    WData/*511:0*/ __Vtemp1490[16];
    WData/*511:0*/ __Vtemp1491[16];
    WData/*511:0*/ __Vtemp1492[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1439[0U] = 1U;
            __Vtemp1439[1U] = 0U;
            __Vtemp1439[2U] = 0U;
            __Vtemp1439[3U] = 0U;
            __Vtemp1439[4U] = 0U;
            __Vtemp1439[5U] = 0U;
            __Vtemp1439[6U] = 0U;
            __Vtemp1439[7U] = 0U;
            __Vtemp1439[8U] = 0U;
            __Vtemp1439[9U] = 0U;
            __Vtemp1439[0xaU] = 0U;
            __Vtemp1439[0xbU] = 0U;
            __Vtemp1439[0xcU] = 0U;
            __Vtemp1439[0xdU] = 0U;
            __Vtemp1439[0xeU] = 0U;
            __Vtemp1439[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1440, __Vtemp1439, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1440[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_83 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1441[0U] = 1U;
            __Vtemp1441[1U] = 0U;
            __Vtemp1441[2U] = 0U;
            __Vtemp1441[3U] = 0U;
            __Vtemp1441[4U] = 0U;
            __Vtemp1441[5U] = 0U;
            __Vtemp1441[6U] = 0U;
            __Vtemp1441[7U] = 0U;
            __Vtemp1441[8U] = 0U;
            __Vtemp1441[9U] = 0U;
            __Vtemp1441[0xaU] = 0U;
            __Vtemp1441[0xbU] = 0U;
            __Vtemp1441[0xcU] = 0U;
            __Vtemp1441[0xdU] = 0U;
            __Vtemp1441[0xeU] = 0U;
            __Vtemp1441[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1442, __Vtemp1441, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1442[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_82 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1443[0U] = 1U;
            __Vtemp1443[1U] = 0U;
            __Vtemp1443[2U] = 0U;
            __Vtemp1443[3U] = 0U;
            __Vtemp1443[4U] = 0U;
            __Vtemp1443[5U] = 0U;
            __Vtemp1443[6U] = 0U;
            __Vtemp1443[7U] = 0U;
            __Vtemp1443[8U] = 0U;
            __Vtemp1443[9U] = 0U;
            __Vtemp1443[0xaU] = 0U;
            __Vtemp1443[0xbU] = 0U;
            __Vtemp1443[0xcU] = 0U;
            __Vtemp1443[0xdU] = 0U;
            __Vtemp1443[0xeU] = 0U;
            __Vtemp1443[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1444, __Vtemp1443, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1444[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_81 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1445[0U] = 1U;
            __Vtemp1445[1U] = 0U;
            __Vtemp1445[2U] = 0U;
            __Vtemp1445[3U] = 0U;
            __Vtemp1445[4U] = 0U;
            __Vtemp1445[5U] = 0U;
            __Vtemp1445[6U] = 0U;
            __Vtemp1445[7U] = 0U;
            __Vtemp1445[8U] = 0U;
            __Vtemp1445[9U] = 0U;
            __Vtemp1445[0xaU] = 0U;
            __Vtemp1445[0xbU] = 0U;
            __Vtemp1445[0xcU] = 0U;
            __Vtemp1445[0xdU] = 0U;
            __Vtemp1445[0xeU] = 0U;
            __Vtemp1445[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1446, __Vtemp1445, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1446[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_80 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1447[0U] = 1U;
            __Vtemp1447[1U] = 0U;
            __Vtemp1447[2U] = 0U;
            __Vtemp1447[3U] = 0U;
            __Vtemp1447[4U] = 0U;
            __Vtemp1447[5U] = 0U;
            __Vtemp1447[6U] = 0U;
            __Vtemp1447[7U] = 0U;
            __Vtemp1447[8U] = 0U;
            __Vtemp1447[9U] = 0U;
            __Vtemp1447[0xaU] = 0U;
            __Vtemp1447[0xbU] = 0U;
            __Vtemp1447[0xcU] = 0U;
            __Vtemp1447[0xdU] = 0U;
            __Vtemp1447[0xeU] = 0U;
            __Vtemp1447[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1448, __Vtemp1447, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1448[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_79 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1449[0U] = 1U;
            __Vtemp1449[1U] = 0U;
            __Vtemp1449[2U] = 0U;
            __Vtemp1449[3U] = 0U;
            __Vtemp1449[4U] = 0U;
            __Vtemp1449[5U] = 0U;
            __Vtemp1449[6U] = 0U;
            __Vtemp1449[7U] = 0U;
            __Vtemp1449[8U] = 0U;
            __Vtemp1449[9U] = 0U;
            __Vtemp1449[0xaU] = 0U;
            __Vtemp1449[0xbU] = 0U;
            __Vtemp1449[0xcU] = 0U;
            __Vtemp1449[0xdU] = 0U;
            __Vtemp1449[0xeU] = 0U;
            __Vtemp1449[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1450, __Vtemp1449, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1450[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_78 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1451[0U] = 1U;
            __Vtemp1451[1U] = 0U;
            __Vtemp1451[2U] = 0U;
            __Vtemp1451[3U] = 0U;
            __Vtemp1451[4U] = 0U;
            __Vtemp1451[5U] = 0U;
            __Vtemp1451[6U] = 0U;
            __Vtemp1451[7U] = 0U;
            __Vtemp1451[8U] = 0U;
            __Vtemp1451[9U] = 0U;
            __Vtemp1451[0xaU] = 0U;
            __Vtemp1451[0xbU] = 0U;
            __Vtemp1451[0xcU] = 0U;
            __Vtemp1451[0xdU] = 0U;
            __Vtemp1451[0xeU] = 0U;
            __Vtemp1451[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1452, __Vtemp1451, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1452[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_77 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1453[0U] = 1U;
            __Vtemp1453[1U] = 0U;
            __Vtemp1453[2U] = 0U;
            __Vtemp1453[3U] = 0U;
            __Vtemp1453[4U] = 0U;
            __Vtemp1453[5U] = 0U;
            __Vtemp1453[6U] = 0U;
            __Vtemp1453[7U] = 0U;
            __Vtemp1453[8U] = 0U;
            __Vtemp1453[9U] = 0U;
            __Vtemp1453[0xaU] = 0U;
            __Vtemp1453[0xbU] = 0U;
            __Vtemp1453[0xcU] = 0U;
            __Vtemp1453[0xdU] = 0U;
            __Vtemp1453[0xeU] = 0U;
            __Vtemp1453[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1454, __Vtemp1453, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1454[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_76 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1455[0U] = 1U;
            __Vtemp1455[1U] = 0U;
            __Vtemp1455[2U] = 0U;
            __Vtemp1455[3U] = 0U;
            __Vtemp1455[4U] = 0U;
            __Vtemp1455[5U] = 0U;
            __Vtemp1455[6U] = 0U;
            __Vtemp1455[7U] = 0U;
            __Vtemp1455[8U] = 0U;
            __Vtemp1455[9U] = 0U;
            __Vtemp1455[0xaU] = 0U;
            __Vtemp1455[0xbU] = 0U;
            __Vtemp1455[0xcU] = 0U;
            __Vtemp1455[0xdU] = 0U;
            __Vtemp1455[0xeU] = 0U;
            __Vtemp1455[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1456, __Vtemp1455, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1456[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_75 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1457[0U] = 1U;
            __Vtemp1457[1U] = 0U;
            __Vtemp1457[2U] = 0U;
            __Vtemp1457[3U] = 0U;
            __Vtemp1457[4U] = 0U;
            __Vtemp1457[5U] = 0U;
            __Vtemp1457[6U] = 0U;
            __Vtemp1457[7U] = 0U;
            __Vtemp1457[8U] = 0U;
            __Vtemp1457[9U] = 0U;
            __Vtemp1457[0xaU] = 0U;
            __Vtemp1457[0xbU] = 0U;
            __Vtemp1457[0xcU] = 0U;
            __Vtemp1457[0xdU] = 0U;
            __Vtemp1457[0xeU] = 0U;
            __Vtemp1457[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1458, __Vtemp1457, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1458[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_74 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1459[0U] = 1U;
            __Vtemp1459[1U] = 0U;
            __Vtemp1459[2U] = 0U;
            __Vtemp1459[3U] = 0U;
            __Vtemp1459[4U] = 0U;
            __Vtemp1459[5U] = 0U;
            __Vtemp1459[6U] = 0U;
            __Vtemp1459[7U] = 0U;
            __Vtemp1459[8U] = 0U;
            __Vtemp1459[9U] = 0U;
            __Vtemp1459[0xaU] = 0U;
            __Vtemp1459[0xbU] = 0U;
            __Vtemp1459[0xcU] = 0U;
            __Vtemp1459[0xdU] = 0U;
            __Vtemp1459[0xeU] = 0U;
            __Vtemp1459[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1460, __Vtemp1459, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1460[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_73 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1461[0U] = 1U;
            __Vtemp1461[1U] = 0U;
            __Vtemp1461[2U] = 0U;
            __Vtemp1461[3U] = 0U;
            __Vtemp1461[4U] = 0U;
            __Vtemp1461[5U] = 0U;
            __Vtemp1461[6U] = 0U;
            __Vtemp1461[7U] = 0U;
            __Vtemp1461[8U] = 0U;
            __Vtemp1461[9U] = 0U;
            __Vtemp1461[0xaU] = 0U;
            __Vtemp1461[0xbU] = 0U;
            __Vtemp1461[0xcU] = 0U;
            __Vtemp1461[0xdU] = 0U;
            __Vtemp1461[0xeU] = 0U;
            __Vtemp1461[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1462, __Vtemp1461, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1462[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_72 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1463[0U] = 1U;
            __Vtemp1463[1U] = 0U;
            __Vtemp1463[2U] = 0U;
            __Vtemp1463[3U] = 0U;
            __Vtemp1463[4U] = 0U;
            __Vtemp1463[5U] = 0U;
            __Vtemp1463[6U] = 0U;
            __Vtemp1463[7U] = 0U;
            __Vtemp1463[8U] = 0U;
            __Vtemp1463[9U] = 0U;
            __Vtemp1463[0xaU] = 0U;
            __Vtemp1463[0xbU] = 0U;
            __Vtemp1463[0xcU] = 0U;
            __Vtemp1463[0xdU] = 0U;
            __Vtemp1463[0xeU] = 0U;
            __Vtemp1463[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1464, __Vtemp1463, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1464[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_71 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1465[0U] = 1U;
            __Vtemp1465[1U] = 0U;
            __Vtemp1465[2U] = 0U;
            __Vtemp1465[3U] = 0U;
            __Vtemp1465[4U] = 0U;
            __Vtemp1465[5U] = 0U;
            __Vtemp1465[6U] = 0U;
            __Vtemp1465[7U] = 0U;
            __Vtemp1465[8U] = 0U;
            __Vtemp1465[9U] = 0U;
            __Vtemp1465[0xaU] = 0U;
            __Vtemp1465[0xbU] = 0U;
            __Vtemp1465[0xcU] = 0U;
            __Vtemp1465[0xdU] = 0U;
            __Vtemp1465[0xeU] = 0U;
            __Vtemp1465[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1466, __Vtemp1465, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1466[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_70 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1467[0U] = 1U;
            __Vtemp1467[1U] = 0U;
            __Vtemp1467[2U] = 0U;
            __Vtemp1467[3U] = 0U;
            __Vtemp1467[4U] = 0U;
            __Vtemp1467[5U] = 0U;
            __Vtemp1467[6U] = 0U;
            __Vtemp1467[7U] = 0U;
            __Vtemp1467[8U] = 0U;
            __Vtemp1467[9U] = 0U;
            __Vtemp1467[0xaU] = 0U;
            __Vtemp1467[0xbU] = 0U;
            __Vtemp1467[0xcU] = 0U;
            __Vtemp1467[0xdU] = 0U;
            __Vtemp1467[0xeU] = 0U;
            __Vtemp1467[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1468, __Vtemp1467, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1468[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_69 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1469[0U] = 1U;
            __Vtemp1469[1U] = 0U;
            __Vtemp1469[2U] = 0U;
            __Vtemp1469[3U] = 0U;
            __Vtemp1469[4U] = 0U;
            __Vtemp1469[5U] = 0U;
            __Vtemp1469[6U] = 0U;
            __Vtemp1469[7U] = 0U;
            __Vtemp1469[8U] = 0U;
            __Vtemp1469[9U] = 0U;
            __Vtemp1469[0xaU] = 0U;
            __Vtemp1469[0xbU] = 0U;
            __Vtemp1469[0xcU] = 0U;
            __Vtemp1469[0xdU] = 0U;
            __Vtemp1469[0xeU] = 0U;
            __Vtemp1469[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1470, __Vtemp1469, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1470[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_68 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1471[0U] = 1U;
            __Vtemp1471[1U] = 0U;
            __Vtemp1471[2U] = 0U;
            __Vtemp1471[3U] = 0U;
            __Vtemp1471[4U] = 0U;
            __Vtemp1471[5U] = 0U;
            __Vtemp1471[6U] = 0U;
            __Vtemp1471[7U] = 0U;
            __Vtemp1471[8U] = 0U;
            __Vtemp1471[9U] = 0U;
            __Vtemp1471[0xaU] = 0U;
            __Vtemp1471[0xbU] = 0U;
            __Vtemp1471[0xcU] = 0U;
            __Vtemp1471[0xdU] = 0U;
            __Vtemp1471[0xeU] = 0U;
            __Vtemp1471[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1472, __Vtemp1471, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1472[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_67 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1473[0U] = 1U;
            __Vtemp1473[1U] = 0U;
            __Vtemp1473[2U] = 0U;
            __Vtemp1473[3U] = 0U;
            __Vtemp1473[4U] = 0U;
            __Vtemp1473[5U] = 0U;
            __Vtemp1473[6U] = 0U;
            __Vtemp1473[7U] = 0U;
            __Vtemp1473[8U] = 0U;
            __Vtemp1473[9U] = 0U;
            __Vtemp1473[0xaU] = 0U;
            __Vtemp1473[0xbU] = 0U;
            __Vtemp1473[0xcU] = 0U;
            __Vtemp1473[0xdU] = 0U;
            __Vtemp1473[0xeU] = 0U;
            __Vtemp1473[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1474, __Vtemp1473, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1474[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_66 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1475[0U] = 1U;
            __Vtemp1475[1U] = 0U;
            __Vtemp1475[2U] = 0U;
            __Vtemp1475[3U] = 0U;
            __Vtemp1475[4U] = 0U;
            __Vtemp1475[5U] = 0U;
            __Vtemp1475[6U] = 0U;
            __Vtemp1475[7U] = 0U;
            __Vtemp1475[8U] = 0U;
            __Vtemp1475[9U] = 0U;
            __Vtemp1475[0xaU] = 0U;
            __Vtemp1475[0xbU] = 0U;
            __Vtemp1475[0xcU] = 0U;
            __Vtemp1475[0xdU] = 0U;
            __Vtemp1475[0xeU] = 0U;
            __Vtemp1475[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1476, __Vtemp1475, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1476[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_65 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1477[0U] = 1U;
            __Vtemp1477[1U] = 0U;
            __Vtemp1477[2U] = 0U;
            __Vtemp1477[3U] = 0U;
            __Vtemp1477[4U] = 0U;
            __Vtemp1477[5U] = 0U;
            __Vtemp1477[6U] = 0U;
            __Vtemp1477[7U] = 0U;
            __Vtemp1477[8U] = 0U;
            __Vtemp1477[9U] = 0U;
            __Vtemp1477[0xaU] = 0U;
            __Vtemp1477[0xbU] = 0U;
            __Vtemp1477[0xcU] = 0U;
            __Vtemp1477[0xdU] = 0U;
            __Vtemp1477[0xeU] = 0U;
            __Vtemp1477[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1478, __Vtemp1477, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1478[2U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_64 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1479[0U] = 1U;
            __Vtemp1479[1U] = 0U;
            __Vtemp1479[2U] = 0U;
            __Vtemp1479[3U] = 0U;
            __Vtemp1479[4U] = 0U;
            __Vtemp1479[5U] = 0U;
            __Vtemp1479[6U] = 0U;
            __Vtemp1479[7U] = 0U;
            __Vtemp1479[8U] = 0U;
            __Vtemp1479[9U] = 0U;
            __Vtemp1479[0xaU] = 0U;
            __Vtemp1479[0xbU] = 0U;
            __Vtemp1479[0xcU] = 0U;
            __Vtemp1479[0xdU] = 0U;
            __Vtemp1479[0xeU] = 0U;
            __Vtemp1479[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1480, __Vtemp1479, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1480[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_63 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1481[0U] = 1U;
            __Vtemp1481[1U] = 0U;
            __Vtemp1481[2U] = 0U;
            __Vtemp1481[3U] = 0U;
            __Vtemp1481[4U] = 0U;
            __Vtemp1481[5U] = 0U;
            __Vtemp1481[6U] = 0U;
            __Vtemp1481[7U] = 0U;
            __Vtemp1481[8U] = 0U;
            __Vtemp1481[9U] = 0U;
            __Vtemp1481[0xaU] = 0U;
            __Vtemp1481[0xbU] = 0U;
            __Vtemp1481[0xcU] = 0U;
            __Vtemp1481[0xdU] = 0U;
            __Vtemp1481[0xeU] = 0U;
            __Vtemp1481[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1482, __Vtemp1481, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1482[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_62 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1483[0U] = 1U;
            __Vtemp1483[1U] = 0U;
            __Vtemp1483[2U] = 0U;
            __Vtemp1483[3U] = 0U;
            __Vtemp1483[4U] = 0U;
            __Vtemp1483[5U] = 0U;
            __Vtemp1483[6U] = 0U;
            __Vtemp1483[7U] = 0U;
            __Vtemp1483[8U] = 0U;
            __Vtemp1483[9U] = 0U;
            __Vtemp1483[0xaU] = 0U;
            __Vtemp1483[0xbU] = 0U;
            __Vtemp1483[0xcU] = 0U;
            __Vtemp1483[0xdU] = 0U;
            __Vtemp1483[0xeU] = 0U;
            __Vtemp1483[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1484, __Vtemp1483, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1484[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_61 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1485[0U] = 1U;
            __Vtemp1485[1U] = 0U;
            __Vtemp1485[2U] = 0U;
            __Vtemp1485[3U] = 0U;
            __Vtemp1485[4U] = 0U;
            __Vtemp1485[5U] = 0U;
            __Vtemp1485[6U] = 0U;
            __Vtemp1485[7U] = 0U;
            __Vtemp1485[8U] = 0U;
            __Vtemp1485[9U] = 0U;
            __Vtemp1485[0xaU] = 0U;
            __Vtemp1485[0xbU] = 0U;
            __Vtemp1485[0xcU] = 0U;
            __Vtemp1485[0xdU] = 0U;
            __Vtemp1485[0xeU] = 0U;
            __Vtemp1485[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1486, __Vtemp1485, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1486[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_60 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1487[0U] = 1U;
            __Vtemp1487[1U] = 0U;
            __Vtemp1487[2U] = 0U;
            __Vtemp1487[3U] = 0U;
            __Vtemp1487[4U] = 0U;
            __Vtemp1487[5U] = 0U;
            __Vtemp1487[6U] = 0U;
            __Vtemp1487[7U] = 0U;
            __Vtemp1487[8U] = 0U;
            __Vtemp1487[9U] = 0U;
            __Vtemp1487[0xaU] = 0U;
            __Vtemp1487[0xbU] = 0U;
            __Vtemp1487[0xcU] = 0U;
            __Vtemp1487[0xdU] = 0U;
            __Vtemp1487[0xeU] = 0U;
            __Vtemp1487[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1488, __Vtemp1487, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1488[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_59 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1489[0U] = 1U;
            __Vtemp1489[1U] = 0U;
            __Vtemp1489[2U] = 0U;
            __Vtemp1489[3U] = 0U;
            __Vtemp1489[4U] = 0U;
            __Vtemp1489[5U] = 0U;
            __Vtemp1489[6U] = 0U;
            __Vtemp1489[7U] = 0U;
            __Vtemp1489[8U] = 0U;
            __Vtemp1489[9U] = 0U;
            __Vtemp1489[0xaU] = 0U;
            __Vtemp1489[0xbU] = 0U;
            __Vtemp1489[0xcU] = 0U;
            __Vtemp1489[0xdU] = 0U;
            __Vtemp1489[0xeU] = 0U;
            __Vtemp1489[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1490, __Vtemp1489, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1490[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_58 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1491[0U] = 1U;
            __Vtemp1491[1U] = 0U;
            __Vtemp1491[2U] = 0U;
            __Vtemp1491[3U] = 0U;
            __Vtemp1491[4U] = 0U;
            __Vtemp1491[5U] = 0U;
            __Vtemp1491[6U] = 0U;
            __Vtemp1491[7U] = 0U;
            __Vtemp1491[8U] = 0U;
            __Vtemp1491[9U] = 0U;
            __Vtemp1491[0xaU] = 0U;
            __Vtemp1491[0xbU] = 0U;
            __Vtemp1491[0xcU] = 0U;
            __Vtemp1491[0xdU] = 0U;
            __Vtemp1491[0xeU] = 0U;
            __Vtemp1491[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1492, __Vtemp1491, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1492[1U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_57 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}
