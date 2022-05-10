// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__62(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__62\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1277[16];
    WData/*511:0*/ __Vtemp1278[16];
    WData/*511:0*/ __Vtemp1279[16];
    WData/*511:0*/ __Vtemp1280[16];
    WData/*511:0*/ __Vtemp1281[16];
    WData/*511:0*/ __Vtemp1282[16];
    WData/*511:0*/ __Vtemp1283[16];
    WData/*511:0*/ __Vtemp1284[16];
    WData/*511:0*/ __Vtemp1285[16];
    WData/*511:0*/ __Vtemp1286[16];
    WData/*511:0*/ __Vtemp1287[16];
    WData/*511:0*/ __Vtemp1288[16];
    WData/*511:0*/ __Vtemp1289[16];
    WData/*511:0*/ __Vtemp1290[16];
    WData/*511:0*/ __Vtemp1291[16];
    WData/*511:0*/ __Vtemp1292[16];
    WData/*511:0*/ __Vtemp1293[16];
    WData/*511:0*/ __Vtemp1294[16];
    WData/*511:0*/ __Vtemp1295[16];
    WData/*511:0*/ __Vtemp1296[16];
    WData/*511:0*/ __Vtemp1297[16];
    WData/*511:0*/ __Vtemp1298[16];
    WData/*511:0*/ __Vtemp1299[16];
    WData/*511:0*/ __Vtemp1300[16];
    WData/*511:0*/ __Vtemp1301[16];
    WData/*511:0*/ __Vtemp1302[16];
    WData/*511:0*/ __Vtemp1303[16];
    WData/*511:0*/ __Vtemp1304[16];
    WData/*511:0*/ __Vtemp1305[16];
    WData/*511:0*/ __Vtemp1306[16];
    WData/*511:0*/ __Vtemp1307[16];
    WData/*511:0*/ __Vtemp1308[16];
    WData/*511:0*/ __Vtemp1309[16];
    WData/*511:0*/ __Vtemp1310[16];
    WData/*511:0*/ __Vtemp1311[16];
    WData/*511:0*/ __Vtemp1312[16];
    WData/*511:0*/ __Vtemp1313[16];
    WData/*511:0*/ __Vtemp1314[16];
    WData/*511:0*/ __Vtemp1315[16];
    WData/*511:0*/ __Vtemp1316[16];
    WData/*511:0*/ __Vtemp1317[16];
    WData/*511:0*/ __Vtemp1318[16];
    WData/*511:0*/ __Vtemp1319[16];
    WData/*511:0*/ __Vtemp1320[16];
    WData/*511:0*/ __Vtemp1321[16];
    WData/*511:0*/ __Vtemp1322[16];
    WData/*511:0*/ __Vtemp1323[16];
    WData/*511:0*/ __Vtemp1324[16];
    WData/*511:0*/ __Vtemp1325[16];
    WData/*511:0*/ __Vtemp1326[16];
    WData/*511:0*/ __Vtemp1327[16];
    WData/*511:0*/ __Vtemp1328[16];
    WData/*511:0*/ __Vtemp1329[16];
    WData/*511:0*/ __Vtemp1330[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1277[0U] = 1U;
            __Vtemp1277[1U] = 0U;
            __Vtemp1277[2U] = 0U;
            __Vtemp1277[3U] = 0U;
            __Vtemp1277[4U] = 0U;
            __Vtemp1277[5U] = 0U;
            __Vtemp1277[6U] = 0U;
            __Vtemp1277[7U] = 0U;
            __Vtemp1277[8U] = 0U;
            __Vtemp1277[9U] = 0U;
            __Vtemp1277[0xaU] = 0U;
            __Vtemp1277[0xbU] = 0U;
            __Vtemp1277[0xcU] = 0U;
            __Vtemp1277[0xdU] = 0U;
            __Vtemp1277[0xeU] = 0U;
            __Vtemp1277[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1278, __Vtemp1277, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1278[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_168 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1279[0U] = 1U;
            __Vtemp1279[1U] = 0U;
            __Vtemp1279[2U] = 0U;
            __Vtemp1279[3U] = 0U;
            __Vtemp1279[4U] = 0U;
            __Vtemp1279[5U] = 0U;
            __Vtemp1279[6U] = 0U;
            __Vtemp1279[7U] = 0U;
            __Vtemp1279[8U] = 0U;
            __Vtemp1279[9U] = 0U;
            __Vtemp1279[0xaU] = 0U;
            __Vtemp1279[0xbU] = 0U;
            __Vtemp1279[0xcU] = 0U;
            __Vtemp1279[0xdU] = 0U;
            __Vtemp1279[0xeU] = 0U;
            __Vtemp1279[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1280, __Vtemp1279, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1280[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_167 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1281[0U] = 1U;
            __Vtemp1281[1U] = 0U;
            __Vtemp1281[2U] = 0U;
            __Vtemp1281[3U] = 0U;
            __Vtemp1281[4U] = 0U;
            __Vtemp1281[5U] = 0U;
            __Vtemp1281[6U] = 0U;
            __Vtemp1281[7U] = 0U;
            __Vtemp1281[8U] = 0U;
            __Vtemp1281[9U] = 0U;
            __Vtemp1281[0xaU] = 0U;
            __Vtemp1281[0xbU] = 0U;
            __Vtemp1281[0xcU] = 0U;
            __Vtemp1281[0xdU] = 0U;
            __Vtemp1281[0xeU] = 0U;
            __Vtemp1281[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1282, __Vtemp1281, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1282[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_164 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1283[0U] = 1U;
            __Vtemp1283[1U] = 0U;
            __Vtemp1283[2U] = 0U;
            __Vtemp1283[3U] = 0U;
            __Vtemp1283[4U] = 0U;
            __Vtemp1283[5U] = 0U;
            __Vtemp1283[6U] = 0U;
            __Vtemp1283[7U] = 0U;
            __Vtemp1283[8U] = 0U;
            __Vtemp1283[9U] = 0U;
            __Vtemp1283[0xaU] = 0U;
            __Vtemp1283[0xbU] = 0U;
            __Vtemp1283[0xcU] = 0U;
            __Vtemp1283[0xdU] = 0U;
            __Vtemp1283[0xeU] = 0U;
            __Vtemp1283[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1284, __Vtemp1283, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1284[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_163 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1285[0U] = 1U;
            __Vtemp1285[1U] = 0U;
            __Vtemp1285[2U] = 0U;
            __Vtemp1285[3U] = 0U;
            __Vtemp1285[4U] = 0U;
            __Vtemp1285[5U] = 0U;
            __Vtemp1285[6U] = 0U;
            __Vtemp1285[7U] = 0U;
            __Vtemp1285[8U] = 0U;
            __Vtemp1285[9U] = 0U;
            __Vtemp1285[0xaU] = 0U;
            __Vtemp1285[0xbU] = 0U;
            __Vtemp1285[0xcU] = 0U;
            __Vtemp1285[0xdU] = 0U;
            __Vtemp1285[0xeU] = 0U;
            __Vtemp1285[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1286, __Vtemp1285, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1286[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_162 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1287[0U] = 1U;
            __Vtemp1287[1U] = 0U;
            __Vtemp1287[2U] = 0U;
            __Vtemp1287[3U] = 0U;
            __Vtemp1287[4U] = 0U;
            __Vtemp1287[5U] = 0U;
            __Vtemp1287[6U] = 0U;
            __Vtemp1287[7U] = 0U;
            __Vtemp1287[8U] = 0U;
            __Vtemp1287[9U] = 0U;
            __Vtemp1287[0xaU] = 0U;
            __Vtemp1287[0xbU] = 0U;
            __Vtemp1287[0xcU] = 0U;
            __Vtemp1287[0xdU] = 0U;
            __Vtemp1287[0xeU] = 0U;
            __Vtemp1287[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1288, __Vtemp1287, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1288[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_161 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1289[0U] = 1U;
            __Vtemp1289[1U] = 0U;
            __Vtemp1289[2U] = 0U;
            __Vtemp1289[3U] = 0U;
            __Vtemp1289[4U] = 0U;
            __Vtemp1289[5U] = 0U;
            __Vtemp1289[6U] = 0U;
            __Vtemp1289[7U] = 0U;
            __Vtemp1289[8U] = 0U;
            __Vtemp1289[9U] = 0U;
            __Vtemp1289[0xaU] = 0U;
            __Vtemp1289[0xbU] = 0U;
            __Vtemp1289[0xcU] = 0U;
            __Vtemp1289[0xdU] = 0U;
            __Vtemp1289[0xeU] = 0U;
            __Vtemp1289[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1290, __Vtemp1289, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1290[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_160 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1291[0U] = 1U;
            __Vtemp1291[1U] = 0U;
            __Vtemp1291[2U] = 0U;
            __Vtemp1291[3U] = 0U;
            __Vtemp1291[4U] = 0U;
            __Vtemp1291[5U] = 0U;
            __Vtemp1291[6U] = 0U;
            __Vtemp1291[7U] = 0U;
            __Vtemp1291[8U] = 0U;
            __Vtemp1291[9U] = 0U;
            __Vtemp1291[0xaU] = 0U;
            __Vtemp1291[0xbU] = 0U;
            __Vtemp1291[0xcU] = 0U;
            __Vtemp1291[0xdU] = 0U;
            __Vtemp1291[0xeU] = 0U;
            __Vtemp1291[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1292, __Vtemp1291, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1292[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_159 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1293[0U] = 1U;
            __Vtemp1293[1U] = 0U;
            __Vtemp1293[2U] = 0U;
            __Vtemp1293[3U] = 0U;
            __Vtemp1293[4U] = 0U;
            __Vtemp1293[5U] = 0U;
            __Vtemp1293[6U] = 0U;
            __Vtemp1293[7U] = 0U;
            __Vtemp1293[8U] = 0U;
            __Vtemp1293[9U] = 0U;
            __Vtemp1293[0xaU] = 0U;
            __Vtemp1293[0xbU] = 0U;
            __Vtemp1293[0xcU] = 0U;
            __Vtemp1293[0xdU] = 0U;
            __Vtemp1293[0xeU] = 0U;
            __Vtemp1293[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1294, __Vtemp1293, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1294[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_158 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1295[0U] = 1U;
            __Vtemp1295[1U] = 0U;
            __Vtemp1295[2U] = 0U;
            __Vtemp1295[3U] = 0U;
            __Vtemp1295[4U] = 0U;
            __Vtemp1295[5U] = 0U;
            __Vtemp1295[6U] = 0U;
            __Vtemp1295[7U] = 0U;
            __Vtemp1295[8U] = 0U;
            __Vtemp1295[9U] = 0U;
            __Vtemp1295[0xaU] = 0U;
            __Vtemp1295[0xbU] = 0U;
            __Vtemp1295[0xcU] = 0U;
            __Vtemp1295[0xdU] = 0U;
            __Vtemp1295[0xeU] = 0U;
            __Vtemp1295[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1296, __Vtemp1295, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1296[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_157 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1297[0U] = 1U;
            __Vtemp1297[1U] = 0U;
            __Vtemp1297[2U] = 0U;
            __Vtemp1297[3U] = 0U;
            __Vtemp1297[4U] = 0U;
            __Vtemp1297[5U] = 0U;
            __Vtemp1297[6U] = 0U;
            __Vtemp1297[7U] = 0U;
            __Vtemp1297[8U] = 0U;
            __Vtemp1297[9U] = 0U;
            __Vtemp1297[0xaU] = 0U;
            __Vtemp1297[0xbU] = 0U;
            __Vtemp1297[0xcU] = 0U;
            __Vtemp1297[0xdU] = 0U;
            __Vtemp1297[0xeU] = 0U;
            __Vtemp1297[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1298, __Vtemp1297, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1298[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_156 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1299[0U] = 1U;
            __Vtemp1299[1U] = 0U;
            __Vtemp1299[2U] = 0U;
            __Vtemp1299[3U] = 0U;
            __Vtemp1299[4U] = 0U;
            __Vtemp1299[5U] = 0U;
            __Vtemp1299[6U] = 0U;
            __Vtemp1299[7U] = 0U;
            __Vtemp1299[8U] = 0U;
            __Vtemp1299[9U] = 0U;
            __Vtemp1299[0xaU] = 0U;
            __Vtemp1299[0xbU] = 0U;
            __Vtemp1299[0xcU] = 0U;
            __Vtemp1299[0xdU] = 0U;
            __Vtemp1299[0xeU] = 0U;
            __Vtemp1299[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1300, __Vtemp1299, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1300[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_155 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1301[0U] = 1U;
            __Vtemp1301[1U] = 0U;
            __Vtemp1301[2U] = 0U;
            __Vtemp1301[3U] = 0U;
            __Vtemp1301[4U] = 0U;
            __Vtemp1301[5U] = 0U;
            __Vtemp1301[6U] = 0U;
            __Vtemp1301[7U] = 0U;
            __Vtemp1301[8U] = 0U;
            __Vtemp1301[9U] = 0U;
            __Vtemp1301[0xaU] = 0U;
            __Vtemp1301[0xbU] = 0U;
            __Vtemp1301[0xcU] = 0U;
            __Vtemp1301[0xdU] = 0U;
            __Vtemp1301[0xeU] = 0U;
            __Vtemp1301[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1302, __Vtemp1301, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1302[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_154 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1303[0U] = 1U;
            __Vtemp1303[1U] = 0U;
            __Vtemp1303[2U] = 0U;
            __Vtemp1303[3U] = 0U;
            __Vtemp1303[4U] = 0U;
            __Vtemp1303[5U] = 0U;
            __Vtemp1303[6U] = 0U;
            __Vtemp1303[7U] = 0U;
            __Vtemp1303[8U] = 0U;
            __Vtemp1303[9U] = 0U;
            __Vtemp1303[0xaU] = 0U;
            __Vtemp1303[0xbU] = 0U;
            __Vtemp1303[0xcU] = 0U;
            __Vtemp1303[0xdU] = 0U;
            __Vtemp1303[0xeU] = 0U;
            __Vtemp1303[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1304, __Vtemp1303, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1304[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_153 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1305[0U] = 1U;
            __Vtemp1305[1U] = 0U;
            __Vtemp1305[2U] = 0U;
            __Vtemp1305[3U] = 0U;
            __Vtemp1305[4U] = 0U;
            __Vtemp1305[5U] = 0U;
            __Vtemp1305[6U] = 0U;
            __Vtemp1305[7U] = 0U;
            __Vtemp1305[8U] = 0U;
            __Vtemp1305[9U] = 0U;
            __Vtemp1305[0xaU] = 0U;
            __Vtemp1305[0xbU] = 0U;
            __Vtemp1305[0xcU] = 0U;
            __Vtemp1305[0xdU] = 0U;
            __Vtemp1305[0xeU] = 0U;
            __Vtemp1305[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1306, __Vtemp1305, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1306[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_152 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1307[0U] = 1U;
            __Vtemp1307[1U] = 0U;
            __Vtemp1307[2U] = 0U;
            __Vtemp1307[3U] = 0U;
            __Vtemp1307[4U] = 0U;
            __Vtemp1307[5U] = 0U;
            __Vtemp1307[6U] = 0U;
            __Vtemp1307[7U] = 0U;
            __Vtemp1307[8U] = 0U;
            __Vtemp1307[9U] = 0U;
            __Vtemp1307[0xaU] = 0U;
            __Vtemp1307[0xbU] = 0U;
            __Vtemp1307[0xcU] = 0U;
            __Vtemp1307[0xdU] = 0U;
            __Vtemp1307[0xeU] = 0U;
            __Vtemp1307[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1308, __Vtemp1307, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1308[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_151 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1309[0U] = 1U;
            __Vtemp1309[1U] = 0U;
            __Vtemp1309[2U] = 0U;
            __Vtemp1309[3U] = 0U;
            __Vtemp1309[4U] = 0U;
            __Vtemp1309[5U] = 0U;
            __Vtemp1309[6U] = 0U;
            __Vtemp1309[7U] = 0U;
            __Vtemp1309[8U] = 0U;
            __Vtemp1309[9U] = 0U;
            __Vtemp1309[0xaU] = 0U;
            __Vtemp1309[0xbU] = 0U;
            __Vtemp1309[0xcU] = 0U;
            __Vtemp1309[0xdU] = 0U;
            __Vtemp1309[0xeU] = 0U;
            __Vtemp1309[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1310, __Vtemp1309, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1310[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_150 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1311[0U] = 1U;
            __Vtemp1311[1U] = 0U;
            __Vtemp1311[2U] = 0U;
            __Vtemp1311[3U] = 0U;
            __Vtemp1311[4U] = 0U;
            __Vtemp1311[5U] = 0U;
            __Vtemp1311[6U] = 0U;
            __Vtemp1311[7U] = 0U;
            __Vtemp1311[8U] = 0U;
            __Vtemp1311[9U] = 0U;
            __Vtemp1311[0xaU] = 0U;
            __Vtemp1311[0xbU] = 0U;
            __Vtemp1311[0xcU] = 0U;
            __Vtemp1311[0xdU] = 0U;
            __Vtemp1311[0xeU] = 0U;
            __Vtemp1311[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1312, __Vtemp1311, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1312[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_149 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1313[0U] = 1U;
            __Vtemp1313[1U] = 0U;
            __Vtemp1313[2U] = 0U;
            __Vtemp1313[3U] = 0U;
            __Vtemp1313[4U] = 0U;
            __Vtemp1313[5U] = 0U;
            __Vtemp1313[6U] = 0U;
            __Vtemp1313[7U] = 0U;
            __Vtemp1313[8U] = 0U;
            __Vtemp1313[9U] = 0U;
            __Vtemp1313[0xaU] = 0U;
            __Vtemp1313[0xbU] = 0U;
            __Vtemp1313[0xcU] = 0U;
            __Vtemp1313[0xdU] = 0U;
            __Vtemp1313[0xeU] = 0U;
            __Vtemp1313[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1314, __Vtemp1313, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1314[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_148 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1315[0U] = 1U;
            __Vtemp1315[1U] = 0U;
            __Vtemp1315[2U] = 0U;
            __Vtemp1315[3U] = 0U;
            __Vtemp1315[4U] = 0U;
            __Vtemp1315[5U] = 0U;
            __Vtemp1315[6U] = 0U;
            __Vtemp1315[7U] = 0U;
            __Vtemp1315[8U] = 0U;
            __Vtemp1315[9U] = 0U;
            __Vtemp1315[0xaU] = 0U;
            __Vtemp1315[0xbU] = 0U;
            __Vtemp1315[0xcU] = 0U;
            __Vtemp1315[0xdU] = 0U;
            __Vtemp1315[0xeU] = 0U;
            __Vtemp1315[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1316, __Vtemp1315, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1316[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_147 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1317[0U] = 1U;
            __Vtemp1317[1U] = 0U;
            __Vtemp1317[2U] = 0U;
            __Vtemp1317[3U] = 0U;
            __Vtemp1317[4U] = 0U;
            __Vtemp1317[5U] = 0U;
            __Vtemp1317[6U] = 0U;
            __Vtemp1317[7U] = 0U;
            __Vtemp1317[8U] = 0U;
            __Vtemp1317[9U] = 0U;
            __Vtemp1317[0xaU] = 0U;
            __Vtemp1317[0xbU] = 0U;
            __Vtemp1317[0xcU] = 0U;
            __Vtemp1317[0xdU] = 0U;
            __Vtemp1317[0xeU] = 0U;
            __Vtemp1317[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1318, __Vtemp1317, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1318[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_146 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1319[0U] = 1U;
            __Vtemp1319[1U] = 0U;
            __Vtemp1319[2U] = 0U;
            __Vtemp1319[3U] = 0U;
            __Vtemp1319[4U] = 0U;
            __Vtemp1319[5U] = 0U;
            __Vtemp1319[6U] = 0U;
            __Vtemp1319[7U] = 0U;
            __Vtemp1319[8U] = 0U;
            __Vtemp1319[9U] = 0U;
            __Vtemp1319[0xaU] = 0U;
            __Vtemp1319[0xbU] = 0U;
            __Vtemp1319[0xcU] = 0U;
            __Vtemp1319[0xdU] = 0U;
            __Vtemp1319[0xeU] = 0U;
            __Vtemp1319[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1320, __Vtemp1319, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1320[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_145 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1321[0U] = 1U;
            __Vtemp1321[1U] = 0U;
            __Vtemp1321[2U] = 0U;
            __Vtemp1321[3U] = 0U;
            __Vtemp1321[4U] = 0U;
            __Vtemp1321[5U] = 0U;
            __Vtemp1321[6U] = 0U;
            __Vtemp1321[7U] = 0U;
            __Vtemp1321[8U] = 0U;
            __Vtemp1321[9U] = 0U;
            __Vtemp1321[0xaU] = 0U;
            __Vtemp1321[0xbU] = 0U;
            __Vtemp1321[0xcU] = 0U;
            __Vtemp1321[0xdU] = 0U;
            __Vtemp1321[0xeU] = 0U;
            __Vtemp1321[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1322, __Vtemp1321, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1322[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_144 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1323[0U] = 1U;
            __Vtemp1323[1U] = 0U;
            __Vtemp1323[2U] = 0U;
            __Vtemp1323[3U] = 0U;
            __Vtemp1323[4U] = 0U;
            __Vtemp1323[5U] = 0U;
            __Vtemp1323[6U] = 0U;
            __Vtemp1323[7U] = 0U;
            __Vtemp1323[8U] = 0U;
            __Vtemp1323[9U] = 0U;
            __Vtemp1323[0xaU] = 0U;
            __Vtemp1323[0xbU] = 0U;
            __Vtemp1323[0xcU] = 0U;
            __Vtemp1323[0xdU] = 0U;
            __Vtemp1323[0xeU] = 0U;
            __Vtemp1323[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1324, __Vtemp1323, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1324[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_143 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1325[0U] = 1U;
            __Vtemp1325[1U] = 0U;
            __Vtemp1325[2U] = 0U;
            __Vtemp1325[3U] = 0U;
            __Vtemp1325[4U] = 0U;
            __Vtemp1325[5U] = 0U;
            __Vtemp1325[6U] = 0U;
            __Vtemp1325[7U] = 0U;
            __Vtemp1325[8U] = 0U;
            __Vtemp1325[9U] = 0U;
            __Vtemp1325[0xaU] = 0U;
            __Vtemp1325[0xbU] = 0U;
            __Vtemp1325[0xcU] = 0U;
            __Vtemp1325[0xdU] = 0U;
            __Vtemp1325[0xeU] = 0U;
            __Vtemp1325[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1326, __Vtemp1325, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1326[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_142 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1327[0U] = 1U;
            __Vtemp1327[1U] = 0U;
            __Vtemp1327[2U] = 0U;
            __Vtemp1327[3U] = 0U;
            __Vtemp1327[4U] = 0U;
            __Vtemp1327[5U] = 0U;
            __Vtemp1327[6U] = 0U;
            __Vtemp1327[7U] = 0U;
            __Vtemp1327[8U] = 0U;
            __Vtemp1327[9U] = 0U;
            __Vtemp1327[0xaU] = 0U;
            __Vtemp1327[0xbU] = 0U;
            __Vtemp1327[0xcU] = 0U;
            __Vtemp1327[0xdU] = 0U;
            __Vtemp1327[0xeU] = 0U;
            __Vtemp1327[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1328, __Vtemp1327, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1328[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_139 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1329[0U] = 1U;
            __Vtemp1329[1U] = 0U;
            __Vtemp1329[2U] = 0U;
            __Vtemp1329[3U] = 0U;
            __Vtemp1329[4U] = 0U;
            __Vtemp1329[5U] = 0U;
            __Vtemp1329[6U] = 0U;
            __Vtemp1329[7U] = 0U;
            __Vtemp1329[8U] = 0U;
            __Vtemp1329[9U] = 0U;
            __Vtemp1329[0xaU] = 0U;
            __Vtemp1329[0xbU] = 0U;
            __Vtemp1329[0xcU] = 0U;
            __Vtemp1329[0xdU] = 0U;
            __Vtemp1329[0xeU] = 0U;
            __Vtemp1329[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1330, __Vtemp1329, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1330[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_138 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__63(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__63\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1331[16];
    WData/*511:0*/ __Vtemp1332[16];
    WData/*511:0*/ __Vtemp1333[16];
    WData/*511:0*/ __Vtemp1334[16];
    WData/*511:0*/ __Vtemp1335[16];
    WData/*511:0*/ __Vtemp1336[16];
    WData/*511:0*/ __Vtemp1337[16];
    WData/*511:0*/ __Vtemp1338[16];
    WData/*511:0*/ __Vtemp1339[16];
    WData/*511:0*/ __Vtemp1340[16];
    WData/*511:0*/ __Vtemp1341[16];
    WData/*511:0*/ __Vtemp1342[16];
    WData/*511:0*/ __Vtemp1343[16];
    WData/*511:0*/ __Vtemp1344[16];
    WData/*511:0*/ __Vtemp1345[16];
    WData/*511:0*/ __Vtemp1346[16];
    WData/*511:0*/ __Vtemp1347[16];
    WData/*511:0*/ __Vtemp1348[16];
    WData/*511:0*/ __Vtemp1349[16];
    WData/*511:0*/ __Vtemp1350[16];
    WData/*511:0*/ __Vtemp1351[16];
    WData/*511:0*/ __Vtemp1352[16];
    WData/*511:0*/ __Vtemp1353[16];
    WData/*511:0*/ __Vtemp1354[16];
    WData/*511:0*/ __Vtemp1355[16];
    WData/*511:0*/ __Vtemp1356[16];
    WData/*511:0*/ __Vtemp1357[16];
    WData/*511:0*/ __Vtemp1358[16];
    WData/*511:0*/ __Vtemp1359[16];
    WData/*511:0*/ __Vtemp1360[16];
    WData/*511:0*/ __Vtemp1361[16];
    WData/*511:0*/ __Vtemp1362[16];
    WData/*511:0*/ __Vtemp1363[16];
    WData/*511:0*/ __Vtemp1364[16];
    WData/*511:0*/ __Vtemp1365[16];
    WData/*511:0*/ __Vtemp1366[16];
    WData/*511:0*/ __Vtemp1367[16];
    WData/*511:0*/ __Vtemp1368[16];
    WData/*511:0*/ __Vtemp1369[16];
    WData/*511:0*/ __Vtemp1370[16];
    WData/*511:0*/ __Vtemp1371[16];
    WData/*511:0*/ __Vtemp1372[16];
    WData/*511:0*/ __Vtemp1373[16];
    WData/*511:0*/ __Vtemp1374[16];
    WData/*511:0*/ __Vtemp1375[16];
    WData/*511:0*/ __Vtemp1376[16];
    WData/*511:0*/ __Vtemp1377[16];
    WData/*511:0*/ __Vtemp1378[16];
    WData/*511:0*/ __Vtemp1379[16];
    WData/*511:0*/ __Vtemp1380[16];
    WData/*511:0*/ __Vtemp1381[16];
    WData/*511:0*/ __Vtemp1382[16];
    WData/*511:0*/ __Vtemp1383[16];
    WData/*511:0*/ __Vtemp1384[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1331[0U] = 1U;
            __Vtemp1331[1U] = 0U;
            __Vtemp1331[2U] = 0U;
            __Vtemp1331[3U] = 0U;
            __Vtemp1331[4U] = 0U;
            __Vtemp1331[5U] = 0U;
            __Vtemp1331[6U] = 0U;
            __Vtemp1331[7U] = 0U;
            __Vtemp1331[8U] = 0U;
            __Vtemp1331[9U] = 0U;
            __Vtemp1331[0xaU] = 0U;
            __Vtemp1331[0xbU] = 0U;
            __Vtemp1331[0xcU] = 0U;
            __Vtemp1331[0xdU] = 0U;
            __Vtemp1331[0xeU] = 0U;
            __Vtemp1331[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1332, __Vtemp1331, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1332[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_137 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1333[0U] = 1U;
            __Vtemp1333[1U] = 0U;
            __Vtemp1333[2U] = 0U;
            __Vtemp1333[3U] = 0U;
            __Vtemp1333[4U] = 0U;
            __Vtemp1333[5U] = 0U;
            __Vtemp1333[6U] = 0U;
            __Vtemp1333[7U] = 0U;
            __Vtemp1333[8U] = 0U;
            __Vtemp1333[9U] = 0U;
            __Vtemp1333[0xaU] = 0U;
            __Vtemp1333[0xbU] = 0U;
            __Vtemp1333[0xcU] = 0U;
            __Vtemp1333[0xdU] = 0U;
            __Vtemp1333[0xeU] = 0U;
            __Vtemp1333[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1334, __Vtemp1333, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1334[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_136 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1335[0U] = 1U;
            __Vtemp1335[1U] = 0U;
            __Vtemp1335[2U] = 0U;
            __Vtemp1335[3U] = 0U;
            __Vtemp1335[4U] = 0U;
            __Vtemp1335[5U] = 0U;
            __Vtemp1335[6U] = 0U;
            __Vtemp1335[7U] = 0U;
            __Vtemp1335[8U] = 0U;
            __Vtemp1335[9U] = 0U;
            __Vtemp1335[0xaU] = 0U;
            __Vtemp1335[0xbU] = 0U;
            __Vtemp1335[0xcU] = 0U;
            __Vtemp1335[0xdU] = 0U;
            __Vtemp1335[0xeU] = 0U;
            __Vtemp1335[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1336, __Vtemp1335, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1336[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_135 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1337[0U] = 1U;
            __Vtemp1337[1U] = 0U;
            __Vtemp1337[2U] = 0U;
            __Vtemp1337[3U] = 0U;
            __Vtemp1337[4U] = 0U;
            __Vtemp1337[5U] = 0U;
            __Vtemp1337[6U] = 0U;
            __Vtemp1337[7U] = 0U;
            __Vtemp1337[8U] = 0U;
            __Vtemp1337[9U] = 0U;
            __Vtemp1337[0xaU] = 0U;
            __Vtemp1337[0xbU] = 0U;
            __Vtemp1337[0xcU] = 0U;
            __Vtemp1337[0xdU] = 0U;
            __Vtemp1337[0xeU] = 0U;
            __Vtemp1337[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1338, __Vtemp1337, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1338[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_134 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1339[0U] = 1U;
            __Vtemp1339[1U] = 0U;
            __Vtemp1339[2U] = 0U;
            __Vtemp1339[3U] = 0U;
            __Vtemp1339[4U] = 0U;
            __Vtemp1339[5U] = 0U;
            __Vtemp1339[6U] = 0U;
            __Vtemp1339[7U] = 0U;
            __Vtemp1339[8U] = 0U;
            __Vtemp1339[9U] = 0U;
            __Vtemp1339[0xaU] = 0U;
            __Vtemp1339[0xbU] = 0U;
            __Vtemp1339[0xcU] = 0U;
            __Vtemp1339[0xdU] = 0U;
            __Vtemp1339[0xeU] = 0U;
            __Vtemp1339[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1340, __Vtemp1339, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1340[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_133 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1341[0U] = 1U;
            __Vtemp1341[1U] = 0U;
            __Vtemp1341[2U] = 0U;
            __Vtemp1341[3U] = 0U;
            __Vtemp1341[4U] = 0U;
            __Vtemp1341[5U] = 0U;
            __Vtemp1341[6U] = 0U;
            __Vtemp1341[7U] = 0U;
            __Vtemp1341[8U] = 0U;
            __Vtemp1341[9U] = 0U;
            __Vtemp1341[0xaU] = 0U;
            __Vtemp1341[0xbU] = 0U;
            __Vtemp1341[0xcU] = 0U;
            __Vtemp1341[0xdU] = 0U;
            __Vtemp1341[0xeU] = 0U;
            __Vtemp1341[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1342, __Vtemp1341, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1342[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_132 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1343[0U] = 1U;
            __Vtemp1343[1U] = 0U;
            __Vtemp1343[2U] = 0U;
            __Vtemp1343[3U] = 0U;
            __Vtemp1343[4U] = 0U;
            __Vtemp1343[5U] = 0U;
            __Vtemp1343[6U] = 0U;
            __Vtemp1343[7U] = 0U;
            __Vtemp1343[8U] = 0U;
            __Vtemp1343[9U] = 0U;
            __Vtemp1343[0xaU] = 0U;
            __Vtemp1343[0xbU] = 0U;
            __Vtemp1343[0xcU] = 0U;
            __Vtemp1343[0xdU] = 0U;
            __Vtemp1343[0xeU] = 0U;
            __Vtemp1343[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1344, __Vtemp1343, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1344[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_131 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1345[0U] = 1U;
            __Vtemp1345[1U] = 0U;
            __Vtemp1345[2U] = 0U;
            __Vtemp1345[3U] = 0U;
            __Vtemp1345[4U] = 0U;
            __Vtemp1345[5U] = 0U;
            __Vtemp1345[6U] = 0U;
            __Vtemp1345[7U] = 0U;
            __Vtemp1345[8U] = 0U;
            __Vtemp1345[9U] = 0U;
            __Vtemp1345[0xaU] = 0U;
            __Vtemp1345[0xbU] = 0U;
            __Vtemp1345[0xcU] = 0U;
            __Vtemp1345[0xdU] = 0U;
            __Vtemp1345[0xeU] = 0U;
            __Vtemp1345[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1346, __Vtemp1345, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1346[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_130 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1347[0U] = 1U;
            __Vtemp1347[1U] = 0U;
            __Vtemp1347[2U] = 0U;
            __Vtemp1347[3U] = 0U;
            __Vtemp1347[4U] = 0U;
            __Vtemp1347[5U] = 0U;
            __Vtemp1347[6U] = 0U;
            __Vtemp1347[7U] = 0U;
            __Vtemp1347[8U] = 0U;
            __Vtemp1347[9U] = 0U;
            __Vtemp1347[0xaU] = 0U;
            __Vtemp1347[0xbU] = 0U;
            __Vtemp1347[0xcU] = 0U;
            __Vtemp1347[0xdU] = 0U;
            __Vtemp1347[0xeU] = 0U;
            __Vtemp1347[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1348, __Vtemp1347, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1348[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_129 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1349[0U] = 1U;
            __Vtemp1349[1U] = 0U;
            __Vtemp1349[2U] = 0U;
            __Vtemp1349[3U] = 0U;
            __Vtemp1349[4U] = 0U;
            __Vtemp1349[5U] = 0U;
            __Vtemp1349[6U] = 0U;
            __Vtemp1349[7U] = 0U;
            __Vtemp1349[8U] = 0U;
            __Vtemp1349[9U] = 0U;
            __Vtemp1349[0xaU] = 0U;
            __Vtemp1349[0xbU] = 0U;
            __Vtemp1349[0xcU] = 0U;
            __Vtemp1349[0xdU] = 0U;
            __Vtemp1349[0xeU] = 0U;
            __Vtemp1349[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1350, __Vtemp1349, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1350[4U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_128 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1351[0U] = 1U;
            __Vtemp1351[1U] = 0U;
            __Vtemp1351[2U] = 0U;
            __Vtemp1351[3U] = 0U;
            __Vtemp1351[4U] = 0U;
            __Vtemp1351[5U] = 0U;
            __Vtemp1351[6U] = 0U;
            __Vtemp1351[7U] = 0U;
            __Vtemp1351[8U] = 0U;
            __Vtemp1351[9U] = 0U;
            __Vtemp1351[0xaU] = 0U;
            __Vtemp1351[0xbU] = 0U;
            __Vtemp1351[0xcU] = 0U;
            __Vtemp1351[0xdU] = 0U;
            __Vtemp1351[0xeU] = 0U;
            __Vtemp1351[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1352, __Vtemp1351, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1352[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_127 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1353[0U] = 1U;
            __Vtemp1353[1U] = 0U;
            __Vtemp1353[2U] = 0U;
            __Vtemp1353[3U] = 0U;
            __Vtemp1353[4U] = 0U;
            __Vtemp1353[5U] = 0U;
            __Vtemp1353[6U] = 0U;
            __Vtemp1353[7U] = 0U;
            __Vtemp1353[8U] = 0U;
            __Vtemp1353[9U] = 0U;
            __Vtemp1353[0xaU] = 0U;
            __Vtemp1353[0xbU] = 0U;
            __Vtemp1353[0xcU] = 0U;
            __Vtemp1353[0xdU] = 0U;
            __Vtemp1353[0xeU] = 0U;
            __Vtemp1353[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1354, __Vtemp1353, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1354[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_126 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1355[0U] = 1U;
            __Vtemp1355[1U] = 0U;
            __Vtemp1355[2U] = 0U;
            __Vtemp1355[3U] = 0U;
            __Vtemp1355[4U] = 0U;
            __Vtemp1355[5U] = 0U;
            __Vtemp1355[6U] = 0U;
            __Vtemp1355[7U] = 0U;
            __Vtemp1355[8U] = 0U;
            __Vtemp1355[9U] = 0U;
            __Vtemp1355[0xaU] = 0U;
            __Vtemp1355[0xbU] = 0U;
            __Vtemp1355[0xcU] = 0U;
            __Vtemp1355[0xdU] = 0U;
            __Vtemp1355[0xeU] = 0U;
            __Vtemp1355[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1356, __Vtemp1355, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1356[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_125 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1357[0U] = 1U;
            __Vtemp1357[1U] = 0U;
            __Vtemp1357[2U] = 0U;
            __Vtemp1357[3U] = 0U;
            __Vtemp1357[4U] = 0U;
            __Vtemp1357[5U] = 0U;
            __Vtemp1357[6U] = 0U;
            __Vtemp1357[7U] = 0U;
            __Vtemp1357[8U] = 0U;
            __Vtemp1357[9U] = 0U;
            __Vtemp1357[0xaU] = 0U;
            __Vtemp1357[0xbU] = 0U;
            __Vtemp1357[0xcU] = 0U;
            __Vtemp1357[0xdU] = 0U;
            __Vtemp1357[0xeU] = 0U;
            __Vtemp1357[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1358, __Vtemp1357, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1358[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_124 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1359[0U] = 1U;
            __Vtemp1359[1U] = 0U;
            __Vtemp1359[2U] = 0U;
            __Vtemp1359[3U] = 0U;
            __Vtemp1359[4U] = 0U;
            __Vtemp1359[5U] = 0U;
            __Vtemp1359[6U] = 0U;
            __Vtemp1359[7U] = 0U;
            __Vtemp1359[8U] = 0U;
            __Vtemp1359[9U] = 0U;
            __Vtemp1359[0xaU] = 0U;
            __Vtemp1359[0xbU] = 0U;
            __Vtemp1359[0xcU] = 0U;
            __Vtemp1359[0xdU] = 0U;
            __Vtemp1359[0xeU] = 0U;
            __Vtemp1359[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1360, __Vtemp1359, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1360[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_123 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1361[0U] = 1U;
            __Vtemp1361[1U] = 0U;
            __Vtemp1361[2U] = 0U;
            __Vtemp1361[3U] = 0U;
            __Vtemp1361[4U] = 0U;
            __Vtemp1361[5U] = 0U;
            __Vtemp1361[6U] = 0U;
            __Vtemp1361[7U] = 0U;
            __Vtemp1361[8U] = 0U;
            __Vtemp1361[9U] = 0U;
            __Vtemp1361[0xaU] = 0U;
            __Vtemp1361[0xbU] = 0U;
            __Vtemp1361[0xcU] = 0U;
            __Vtemp1361[0xdU] = 0U;
            __Vtemp1361[0xeU] = 0U;
            __Vtemp1361[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1362, __Vtemp1361, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1362[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_122 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1363[0U] = 1U;
            __Vtemp1363[1U] = 0U;
            __Vtemp1363[2U] = 0U;
            __Vtemp1363[3U] = 0U;
            __Vtemp1363[4U] = 0U;
            __Vtemp1363[5U] = 0U;
            __Vtemp1363[6U] = 0U;
            __Vtemp1363[7U] = 0U;
            __Vtemp1363[8U] = 0U;
            __Vtemp1363[9U] = 0U;
            __Vtemp1363[0xaU] = 0U;
            __Vtemp1363[0xbU] = 0U;
            __Vtemp1363[0xcU] = 0U;
            __Vtemp1363[0xdU] = 0U;
            __Vtemp1363[0xeU] = 0U;
            __Vtemp1363[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1364, __Vtemp1363, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1364[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_121 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1365[0U] = 1U;
            __Vtemp1365[1U] = 0U;
            __Vtemp1365[2U] = 0U;
            __Vtemp1365[3U] = 0U;
            __Vtemp1365[4U] = 0U;
            __Vtemp1365[5U] = 0U;
            __Vtemp1365[6U] = 0U;
            __Vtemp1365[7U] = 0U;
            __Vtemp1365[8U] = 0U;
            __Vtemp1365[9U] = 0U;
            __Vtemp1365[0xaU] = 0U;
            __Vtemp1365[0xbU] = 0U;
            __Vtemp1365[0xcU] = 0U;
            __Vtemp1365[0xdU] = 0U;
            __Vtemp1365[0xeU] = 0U;
            __Vtemp1365[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1366, __Vtemp1365, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1366[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_120 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1367[0U] = 1U;
            __Vtemp1367[1U] = 0U;
            __Vtemp1367[2U] = 0U;
            __Vtemp1367[3U] = 0U;
            __Vtemp1367[4U] = 0U;
            __Vtemp1367[5U] = 0U;
            __Vtemp1367[6U] = 0U;
            __Vtemp1367[7U] = 0U;
            __Vtemp1367[8U] = 0U;
            __Vtemp1367[9U] = 0U;
            __Vtemp1367[0xaU] = 0U;
            __Vtemp1367[0xbU] = 0U;
            __Vtemp1367[0xcU] = 0U;
            __Vtemp1367[0xdU] = 0U;
            __Vtemp1367[0xeU] = 0U;
            __Vtemp1367[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1368, __Vtemp1367, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1368[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_119 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1369[0U] = 1U;
            __Vtemp1369[1U] = 0U;
            __Vtemp1369[2U] = 0U;
            __Vtemp1369[3U] = 0U;
            __Vtemp1369[4U] = 0U;
            __Vtemp1369[5U] = 0U;
            __Vtemp1369[6U] = 0U;
            __Vtemp1369[7U] = 0U;
            __Vtemp1369[8U] = 0U;
            __Vtemp1369[9U] = 0U;
            __Vtemp1369[0xaU] = 0U;
            __Vtemp1369[0xbU] = 0U;
            __Vtemp1369[0xcU] = 0U;
            __Vtemp1369[0xdU] = 0U;
            __Vtemp1369[0xeU] = 0U;
            __Vtemp1369[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1370, __Vtemp1369, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1370[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_118 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1371[0U] = 1U;
            __Vtemp1371[1U] = 0U;
            __Vtemp1371[2U] = 0U;
            __Vtemp1371[3U] = 0U;
            __Vtemp1371[4U] = 0U;
            __Vtemp1371[5U] = 0U;
            __Vtemp1371[6U] = 0U;
            __Vtemp1371[7U] = 0U;
            __Vtemp1371[8U] = 0U;
            __Vtemp1371[9U] = 0U;
            __Vtemp1371[0xaU] = 0U;
            __Vtemp1371[0xbU] = 0U;
            __Vtemp1371[0xcU] = 0U;
            __Vtemp1371[0xdU] = 0U;
            __Vtemp1371[0xeU] = 0U;
            __Vtemp1371[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1372, __Vtemp1371, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1372[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_117 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1373[0U] = 1U;
            __Vtemp1373[1U] = 0U;
            __Vtemp1373[2U] = 0U;
            __Vtemp1373[3U] = 0U;
            __Vtemp1373[4U] = 0U;
            __Vtemp1373[5U] = 0U;
            __Vtemp1373[6U] = 0U;
            __Vtemp1373[7U] = 0U;
            __Vtemp1373[8U] = 0U;
            __Vtemp1373[9U] = 0U;
            __Vtemp1373[0xaU] = 0U;
            __Vtemp1373[0xbU] = 0U;
            __Vtemp1373[0xcU] = 0U;
            __Vtemp1373[0xdU] = 0U;
            __Vtemp1373[0xeU] = 0U;
            __Vtemp1373[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1374, __Vtemp1373, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1374[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_116 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1375[0U] = 1U;
            __Vtemp1375[1U] = 0U;
            __Vtemp1375[2U] = 0U;
            __Vtemp1375[3U] = 0U;
            __Vtemp1375[4U] = 0U;
            __Vtemp1375[5U] = 0U;
            __Vtemp1375[6U] = 0U;
            __Vtemp1375[7U] = 0U;
            __Vtemp1375[8U] = 0U;
            __Vtemp1375[9U] = 0U;
            __Vtemp1375[0xaU] = 0U;
            __Vtemp1375[0xbU] = 0U;
            __Vtemp1375[0xcU] = 0U;
            __Vtemp1375[0xdU] = 0U;
            __Vtemp1375[0xeU] = 0U;
            __Vtemp1375[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1376, __Vtemp1375, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1376[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_115 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1377[0U] = 1U;
            __Vtemp1377[1U] = 0U;
            __Vtemp1377[2U] = 0U;
            __Vtemp1377[3U] = 0U;
            __Vtemp1377[4U] = 0U;
            __Vtemp1377[5U] = 0U;
            __Vtemp1377[6U] = 0U;
            __Vtemp1377[7U] = 0U;
            __Vtemp1377[8U] = 0U;
            __Vtemp1377[9U] = 0U;
            __Vtemp1377[0xaU] = 0U;
            __Vtemp1377[0xbU] = 0U;
            __Vtemp1377[0xcU] = 0U;
            __Vtemp1377[0xdU] = 0U;
            __Vtemp1377[0xeU] = 0U;
            __Vtemp1377[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1378, __Vtemp1377, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1378[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_114 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1379[0U] = 1U;
            __Vtemp1379[1U] = 0U;
            __Vtemp1379[2U] = 0U;
            __Vtemp1379[3U] = 0U;
            __Vtemp1379[4U] = 0U;
            __Vtemp1379[5U] = 0U;
            __Vtemp1379[6U] = 0U;
            __Vtemp1379[7U] = 0U;
            __Vtemp1379[8U] = 0U;
            __Vtemp1379[9U] = 0U;
            __Vtemp1379[0xaU] = 0U;
            __Vtemp1379[0xbU] = 0U;
            __Vtemp1379[0xcU] = 0U;
            __Vtemp1379[0xdU] = 0U;
            __Vtemp1379[0xeU] = 0U;
            __Vtemp1379[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1380, __Vtemp1379, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1380[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_113 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1381[0U] = 1U;
            __Vtemp1381[1U] = 0U;
            __Vtemp1381[2U] = 0U;
            __Vtemp1381[3U] = 0U;
            __Vtemp1381[4U] = 0U;
            __Vtemp1381[5U] = 0U;
            __Vtemp1381[6U] = 0U;
            __Vtemp1381[7U] = 0U;
            __Vtemp1381[8U] = 0U;
            __Vtemp1381[9U] = 0U;
            __Vtemp1381[0xaU] = 0U;
            __Vtemp1381[0xbU] = 0U;
            __Vtemp1381[0xcU] = 0U;
            __Vtemp1381[0xdU] = 0U;
            __Vtemp1381[0xeU] = 0U;
            __Vtemp1381[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1382, __Vtemp1381, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1382[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_112 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1383[0U] = 1U;
            __Vtemp1383[1U] = 0U;
            __Vtemp1383[2U] = 0U;
            __Vtemp1383[3U] = 0U;
            __Vtemp1383[4U] = 0U;
            __Vtemp1383[5U] = 0U;
            __Vtemp1383[6U] = 0U;
            __Vtemp1383[7U] = 0U;
            __Vtemp1383[8U] = 0U;
            __Vtemp1383[9U] = 0U;
            __Vtemp1383[0xaU] = 0U;
            __Vtemp1383[0xbU] = 0U;
            __Vtemp1383[0xcU] = 0U;
            __Vtemp1383[0xdU] = 0U;
            __Vtemp1383[0xeU] = 0U;
            __Vtemp1383[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1384, __Vtemp1383, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1384[3U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_111 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}
