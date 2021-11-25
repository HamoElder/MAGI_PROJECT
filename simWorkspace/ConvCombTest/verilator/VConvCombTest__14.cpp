// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__70(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__70\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1292[0U] = 1U;
            __Vtemp1292[1U] = 0U;
            __Vtemp1292[2U] = 0U;
            __Vtemp1292[3U] = 0U;
            __Vtemp1292[4U] = 0U;
            __Vtemp1292[5U] = 0U;
            __Vtemp1292[6U] = 0U;
            __Vtemp1292[7U] = 0U;
            __Vtemp1292[8U] = 0U;
            __Vtemp1292[9U] = 0U;
            __Vtemp1292[0xaU] = 0U;
            __Vtemp1292[0xbU] = 0U;
            __Vtemp1292[0xcU] = 0U;
            __Vtemp1292[0xdU] = 0U;
            __Vtemp1292[0xeU] = 0U;
            __Vtemp1292[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1293, __Vtemp1292, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1293[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_156 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1294[0U] = 1U;
            __Vtemp1294[1U] = 0U;
            __Vtemp1294[2U] = 0U;
            __Vtemp1294[3U] = 0U;
            __Vtemp1294[4U] = 0U;
            __Vtemp1294[5U] = 0U;
            __Vtemp1294[6U] = 0U;
            __Vtemp1294[7U] = 0U;
            __Vtemp1294[8U] = 0U;
            __Vtemp1294[9U] = 0U;
            __Vtemp1294[0xaU] = 0U;
            __Vtemp1294[0xbU] = 0U;
            __Vtemp1294[0xcU] = 0U;
            __Vtemp1294[0xdU] = 0U;
            __Vtemp1294[0xeU] = 0U;
            __Vtemp1294[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1295, __Vtemp1294, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1295[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_155 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1296[0U] = 1U;
            __Vtemp1296[1U] = 0U;
            __Vtemp1296[2U] = 0U;
            __Vtemp1296[3U] = 0U;
            __Vtemp1296[4U] = 0U;
            __Vtemp1296[5U] = 0U;
            __Vtemp1296[6U] = 0U;
            __Vtemp1296[7U] = 0U;
            __Vtemp1296[8U] = 0U;
            __Vtemp1296[9U] = 0U;
            __Vtemp1296[0xaU] = 0U;
            __Vtemp1296[0xbU] = 0U;
            __Vtemp1296[0xcU] = 0U;
            __Vtemp1296[0xdU] = 0U;
            __Vtemp1296[0xeU] = 0U;
            __Vtemp1296[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1297, __Vtemp1296, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1297[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_154 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1298[0U] = 1U;
            __Vtemp1298[1U] = 0U;
            __Vtemp1298[2U] = 0U;
            __Vtemp1298[3U] = 0U;
            __Vtemp1298[4U] = 0U;
            __Vtemp1298[5U] = 0U;
            __Vtemp1298[6U] = 0U;
            __Vtemp1298[7U] = 0U;
            __Vtemp1298[8U] = 0U;
            __Vtemp1298[9U] = 0U;
            __Vtemp1298[0xaU] = 0U;
            __Vtemp1298[0xbU] = 0U;
            __Vtemp1298[0xcU] = 0U;
            __Vtemp1298[0xdU] = 0U;
            __Vtemp1298[0xeU] = 0U;
            __Vtemp1298[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1299, __Vtemp1298, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1299[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_153 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1300[0U] = 1U;
            __Vtemp1300[1U] = 0U;
            __Vtemp1300[2U] = 0U;
            __Vtemp1300[3U] = 0U;
            __Vtemp1300[4U] = 0U;
            __Vtemp1300[5U] = 0U;
            __Vtemp1300[6U] = 0U;
            __Vtemp1300[7U] = 0U;
            __Vtemp1300[8U] = 0U;
            __Vtemp1300[9U] = 0U;
            __Vtemp1300[0xaU] = 0U;
            __Vtemp1300[0xbU] = 0U;
            __Vtemp1300[0xcU] = 0U;
            __Vtemp1300[0xdU] = 0U;
            __Vtemp1300[0xeU] = 0U;
            __Vtemp1300[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1301, __Vtemp1300, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1301[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_152 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1302[0U] = 1U;
            __Vtemp1302[1U] = 0U;
            __Vtemp1302[2U] = 0U;
            __Vtemp1302[3U] = 0U;
            __Vtemp1302[4U] = 0U;
            __Vtemp1302[5U] = 0U;
            __Vtemp1302[6U] = 0U;
            __Vtemp1302[7U] = 0U;
            __Vtemp1302[8U] = 0U;
            __Vtemp1302[9U] = 0U;
            __Vtemp1302[0xaU] = 0U;
            __Vtemp1302[0xbU] = 0U;
            __Vtemp1302[0xcU] = 0U;
            __Vtemp1302[0xdU] = 0U;
            __Vtemp1302[0xeU] = 0U;
            __Vtemp1302[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1303, __Vtemp1302, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1303[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_151 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1304[0U] = 1U;
            __Vtemp1304[1U] = 0U;
            __Vtemp1304[2U] = 0U;
            __Vtemp1304[3U] = 0U;
            __Vtemp1304[4U] = 0U;
            __Vtemp1304[5U] = 0U;
            __Vtemp1304[6U] = 0U;
            __Vtemp1304[7U] = 0U;
            __Vtemp1304[8U] = 0U;
            __Vtemp1304[9U] = 0U;
            __Vtemp1304[0xaU] = 0U;
            __Vtemp1304[0xbU] = 0U;
            __Vtemp1304[0xcU] = 0U;
            __Vtemp1304[0xdU] = 0U;
            __Vtemp1304[0xeU] = 0U;
            __Vtemp1304[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1305, __Vtemp1304, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1305[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_150 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1306[0U] = 1U;
            __Vtemp1306[1U] = 0U;
            __Vtemp1306[2U] = 0U;
            __Vtemp1306[3U] = 0U;
            __Vtemp1306[4U] = 0U;
            __Vtemp1306[5U] = 0U;
            __Vtemp1306[6U] = 0U;
            __Vtemp1306[7U] = 0U;
            __Vtemp1306[8U] = 0U;
            __Vtemp1306[9U] = 0U;
            __Vtemp1306[0xaU] = 0U;
            __Vtemp1306[0xbU] = 0U;
            __Vtemp1306[0xcU] = 0U;
            __Vtemp1306[0xdU] = 0U;
            __Vtemp1306[0xeU] = 0U;
            __Vtemp1306[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1307, __Vtemp1306, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1307[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_149 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1308[0U] = 1U;
            __Vtemp1308[1U] = 0U;
            __Vtemp1308[2U] = 0U;
            __Vtemp1308[3U] = 0U;
            __Vtemp1308[4U] = 0U;
            __Vtemp1308[5U] = 0U;
            __Vtemp1308[6U] = 0U;
            __Vtemp1308[7U] = 0U;
            __Vtemp1308[8U] = 0U;
            __Vtemp1308[9U] = 0U;
            __Vtemp1308[0xaU] = 0U;
            __Vtemp1308[0xbU] = 0U;
            __Vtemp1308[0xcU] = 0U;
            __Vtemp1308[0xdU] = 0U;
            __Vtemp1308[0xeU] = 0U;
            __Vtemp1308[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1309, __Vtemp1308, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1309[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_148 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1310[0U] = 1U;
            __Vtemp1310[1U] = 0U;
            __Vtemp1310[2U] = 0U;
            __Vtemp1310[3U] = 0U;
            __Vtemp1310[4U] = 0U;
            __Vtemp1310[5U] = 0U;
            __Vtemp1310[6U] = 0U;
            __Vtemp1310[7U] = 0U;
            __Vtemp1310[8U] = 0U;
            __Vtemp1310[9U] = 0U;
            __Vtemp1310[0xaU] = 0U;
            __Vtemp1310[0xbU] = 0U;
            __Vtemp1310[0xcU] = 0U;
            __Vtemp1310[0xdU] = 0U;
            __Vtemp1310[0xeU] = 0U;
            __Vtemp1310[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1311, __Vtemp1310, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1311[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_147 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1312[0U] = 1U;
            __Vtemp1312[1U] = 0U;
            __Vtemp1312[2U] = 0U;
            __Vtemp1312[3U] = 0U;
            __Vtemp1312[4U] = 0U;
            __Vtemp1312[5U] = 0U;
            __Vtemp1312[6U] = 0U;
            __Vtemp1312[7U] = 0U;
            __Vtemp1312[8U] = 0U;
            __Vtemp1312[9U] = 0U;
            __Vtemp1312[0xaU] = 0U;
            __Vtemp1312[0xbU] = 0U;
            __Vtemp1312[0xcU] = 0U;
            __Vtemp1312[0xdU] = 0U;
            __Vtemp1312[0xeU] = 0U;
            __Vtemp1312[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1313, __Vtemp1312, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1313[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_146 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1314[0U] = 1U;
            __Vtemp1314[1U] = 0U;
            __Vtemp1314[2U] = 0U;
            __Vtemp1314[3U] = 0U;
            __Vtemp1314[4U] = 0U;
            __Vtemp1314[5U] = 0U;
            __Vtemp1314[6U] = 0U;
            __Vtemp1314[7U] = 0U;
            __Vtemp1314[8U] = 0U;
            __Vtemp1314[9U] = 0U;
            __Vtemp1314[0xaU] = 0U;
            __Vtemp1314[0xbU] = 0U;
            __Vtemp1314[0xcU] = 0U;
            __Vtemp1314[0xdU] = 0U;
            __Vtemp1314[0xeU] = 0U;
            __Vtemp1314[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1315, __Vtemp1314, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1315[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_145 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1316[0U] = 1U;
            __Vtemp1316[1U] = 0U;
            __Vtemp1316[2U] = 0U;
            __Vtemp1316[3U] = 0U;
            __Vtemp1316[4U] = 0U;
            __Vtemp1316[5U] = 0U;
            __Vtemp1316[6U] = 0U;
            __Vtemp1316[7U] = 0U;
            __Vtemp1316[8U] = 0U;
            __Vtemp1316[9U] = 0U;
            __Vtemp1316[0xaU] = 0U;
            __Vtemp1316[0xbU] = 0U;
            __Vtemp1316[0xcU] = 0U;
            __Vtemp1316[0xdU] = 0U;
            __Vtemp1316[0xeU] = 0U;
            __Vtemp1316[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1317, __Vtemp1316, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1317[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_144 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1318[0U] = 1U;
            __Vtemp1318[1U] = 0U;
            __Vtemp1318[2U] = 0U;
            __Vtemp1318[3U] = 0U;
            __Vtemp1318[4U] = 0U;
            __Vtemp1318[5U] = 0U;
            __Vtemp1318[6U] = 0U;
            __Vtemp1318[7U] = 0U;
            __Vtemp1318[8U] = 0U;
            __Vtemp1318[9U] = 0U;
            __Vtemp1318[0xaU] = 0U;
            __Vtemp1318[0xbU] = 0U;
            __Vtemp1318[0xcU] = 0U;
            __Vtemp1318[0xdU] = 0U;
            __Vtemp1318[0xeU] = 0U;
            __Vtemp1318[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1319, __Vtemp1318, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1319[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_143 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1320[0U] = 1U;
            __Vtemp1320[1U] = 0U;
            __Vtemp1320[2U] = 0U;
            __Vtemp1320[3U] = 0U;
            __Vtemp1320[4U] = 0U;
            __Vtemp1320[5U] = 0U;
            __Vtemp1320[6U] = 0U;
            __Vtemp1320[7U] = 0U;
            __Vtemp1320[8U] = 0U;
            __Vtemp1320[9U] = 0U;
            __Vtemp1320[0xaU] = 0U;
            __Vtemp1320[0xbU] = 0U;
            __Vtemp1320[0xcU] = 0U;
            __Vtemp1320[0xdU] = 0U;
            __Vtemp1320[0xeU] = 0U;
            __Vtemp1320[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1321, __Vtemp1320, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1321[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_142 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1322[0U] = 1U;
            __Vtemp1322[1U] = 0U;
            __Vtemp1322[2U] = 0U;
            __Vtemp1322[3U] = 0U;
            __Vtemp1322[4U] = 0U;
            __Vtemp1322[5U] = 0U;
            __Vtemp1322[6U] = 0U;
            __Vtemp1322[7U] = 0U;
            __Vtemp1322[8U] = 0U;
            __Vtemp1322[9U] = 0U;
            __Vtemp1322[0xaU] = 0U;
            __Vtemp1322[0xbU] = 0U;
            __Vtemp1322[0xcU] = 0U;
            __Vtemp1322[0xdU] = 0U;
            __Vtemp1322[0xeU] = 0U;
            __Vtemp1322[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1323, __Vtemp1322, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1323[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_139 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1324[0U] = 1U;
            __Vtemp1324[1U] = 0U;
            __Vtemp1324[2U] = 0U;
            __Vtemp1324[3U] = 0U;
            __Vtemp1324[4U] = 0U;
            __Vtemp1324[5U] = 0U;
            __Vtemp1324[6U] = 0U;
            __Vtemp1324[7U] = 0U;
            __Vtemp1324[8U] = 0U;
            __Vtemp1324[9U] = 0U;
            __Vtemp1324[0xaU] = 0U;
            __Vtemp1324[0xbU] = 0U;
            __Vtemp1324[0xcU] = 0U;
            __Vtemp1324[0xdU] = 0U;
            __Vtemp1324[0xeU] = 0U;
            __Vtemp1324[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1325, __Vtemp1324, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1325[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_138 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1326[0U] = 1U;
            __Vtemp1326[1U] = 0U;
            __Vtemp1326[2U] = 0U;
            __Vtemp1326[3U] = 0U;
            __Vtemp1326[4U] = 0U;
            __Vtemp1326[5U] = 0U;
            __Vtemp1326[6U] = 0U;
            __Vtemp1326[7U] = 0U;
            __Vtemp1326[8U] = 0U;
            __Vtemp1326[9U] = 0U;
            __Vtemp1326[0xaU] = 0U;
            __Vtemp1326[0xbU] = 0U;
            __Vtemp1326[0xcU] = 0U;
            __Vtemp1326[0xdU] = 0U;
            __Vtemp1326[0xeU] = 0U;
            __Vtemp1326[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1327, __Vtemp1326, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1327[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_137 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1328[0U] = 1U;
            __Vtemp1328[1U] = 0U;
            __Vtemp1328[2U] = 0U;
            __Vtemp1328[3U] = 0U;
            __Vtemp1328[4U] = 0U;
            __Vtemp1328[5U] = 0U;
            __Vtemp1328[6U] = 0U;
            __Vtemp1328[7U] = 0U;
            __Vtemp1328[8U] = 0U;
            __Vtemp1328[9U] = 0U;
            __Vtemp1328[0xaU] = 0U;
            __Vtemp1328[0xbU] = 0U;
            __Vtemp1328[0xcU] = 0U;
            __Vtemp1328[0xdU] = 0U;
            __Vtemp1328[0xeU] = 0U;
            __Vtemp1328[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1329, __Vtemp1328, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1329[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_136 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1330[0U] = 1U;
            __Vtemp1330[1U] = 0U;
            __Vtemp1330[2U] = 0U;
            __Vtemp1330[3U] = 0U;
            __Vtemp1330[4U] = 0U;
            __Vtemp1330[5U] = 0U;
            __Vtemp1330[6U] = 0U;
            __Vtemp1330[7U] = 0U;
            __Vtemp1330[8U] = 0U;
            __Vtemp1330[9U] = 0U;
            __Vtemp1330[0xaU] = 0U;
            __Vtemp1330[0xbU] = 0U;
            __Vtemp1330[0xcU] = 0U;
            __Vtemp1330[0xdU] = 0U;
            __Vtemp1330[0xeU] = 0U;
            __Vtemp1330[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1331, __Vtemp1330, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1331[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_135 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1332[0U] = 1U;
            __Vtemp1332[1U] = 0U;
            __Vtemp1332[2U] = 0U;
            __Vtemp1332[3U] = 0U;
            __Vtemp1332[4U] = 0U;
            __Vtemp1332[5U] = 0U;
            __Vtemp1332[6U] = 0U;
            __Vtemp1332[7U] = 0U;
            __Vtemp1332[8U] = 0U;
            __Vtemp1332[9U] = 0U;
            __Vtemp1332[0xaU] = 0U;
            __Vtemp1332[0xbU] = 0U;
            __Vtemp1332[0xcU] = 0U;
            __Vtemp1332[0xdU] = 0U;
            __Vtemp1332[0xeU] = 0U;
            __Vtemp1332[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1333, __Vtemp1332, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1333[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_134 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1334[0U] = 1U;
            __Vtemp1334[1U] = 0U;
            __Vtemp1334[2U] = 0U;
            __Vtemp1334[3U] = 0U;
            __Vtemp1334[4U] = 0U;
            __Vtemp1334[5U] = 0U;
            __Vtemp1334[6U] = 0U;
            __Vtemp1334[7U] = 0U;
            __Vtemp1334[8U] = 0U;
            __Vtemp1334[9U] = 0U;
            __Vtemp1334[0xaU] = 0U;
            __Vtemp1334[0xbU] = 0U;
            __Vtemp1334[0xcU] = 0U;
            __Vtemp1334[0xdU] = 0U;
            __Vtemp1334[0xeU] = 0U;
            __Vtemp1334[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1335, __Vtemp1334, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1335[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_133 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1336[0U] = 1U;
            __Vtemp1336[1U] = 0U;
            __Vtemp1336[2U] = 0U;
            __Vtemp1336[3U] = 0U;
            __Vtemp1336[4U] = 0U;
            __Vtemp1336[5U] = 0U;
            __Vtemp1336[6U] = 0U;
            __Vtemp1336[7U] = 0U;
            __Vtemp1336[8U] = 0U;
            __Vtemp1336[9U] = 0U;
            __Vtemp1336[0xaU] = 0U;
            __Vtemp1336[0xbU] = 0U;
            __Vtemp1336[0xcU] = 0U;
            __Vtemp1336[0xdU] = 0U;
            __Vtemp1336[0xeU] = 0U;
            __Vtemp1336[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1337, __Vtemp1336, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1337[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_132 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1338[0U] = 1U;
            __Vtemp1338[1U] = 0U;
            __Vtemp1338[2U] = 0U;
            __Vtemp1338[3U] = 0U;
            __Vtemp1338[4U] = 0U;
            __Vtemp1338[5U] = 0U;
            __Vtemp1338[6U] = 0U;
            __Vtemp1338[7U] = 0U;
            __Vtemp1338[8U] = 0U;
            __Vtemp1338[9U] = 0U;
            __Vtemp1338[0xaU] = 0U;
            __Vtemp1338[0xbU] = 0U;
            __Vtemp1338[0xcU] = 0U;
            __Vtemp1338[0xdU] = 0U;
            __Vtemp1338[0xeU] = 0U;
            __Vtemp1338[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1339, __Vtemp1338, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1339[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_131 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1340[0U] = 1U;
            __Vtemp1340[1U] = 0U;
            __Vtemp1340[2U] = 0U;
            __Vtemp1340[3U] = 0U;
            __Vtemp1340[4U] = 0U;
            __Vtemp1340[5U] = 0U;
            __Vtemp1340[6U] = 0U;
            __Vtemp1340[7U] = 0U;
            __Vtemp1340[8U] = 0U;
            __Vtemp1340[9U] = 0U;
            __Vtemp1340[0xaU] = 0U;
            __Vtemp1340[0xbU] = 0U;
            __Vtemp1340[0xcU] = 0U;
            __Vtemp1340[0xdU] = 0U;
            __Vtemp1340[0xeU] = 0U;
            __Vtemp1340[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1341, __Vtemp1340, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1341[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_130 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1342[0U] = 1U;
            __Vtemp1342[1U] = 0U;
            __Vtemp1342[2U] = 0U;
            __Vtemp1342[3U] = 0U;
            __Vtemp1342[4U] = 0U;
            __Vtemp1342[5U] = 0U;
            __Vtemp1342[6U] = 0U;
            __Vtemp1342[7U] = 0U;
            __Vtemp1342[8U] = 0U;
            __Vtemp1342[9U] = 0U;
            __Vtemp1342[0xaU] = 0U;
            __Vtemp1342[0xbU] = 0U;
            __Vtemp1342[0xcU] = 0U;
            __Vtemp1342[0xdU] = 0U;
            __Vtemp1342[0xeU] = 0U;
            __Vtemp1342[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1343, __Vtemp1342, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1343[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_129 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1344[0U] = 1U;
            __Vtemp1344[1U] = 0U;
            __Vtemp1344[2U] = 0U;
            __Vtemp1344[3U] = 0U;
            __Vtemp1344[4U] = 0U;
            __Vtemp1344[5U] = 0U;
            __Vtemp1344[6U] = 0U;
            __Vtemp1344[7U] = 0U;
            __Vtemp1344[8U] = 0U;
            __Vtemp1344[9U] = 0U;
            __Vtemp1344[0xaU] = 0U;
            __Vtemp1344[0xbU] = 0U;
            __Vtemp1344[0xcU] = 0U;
            __Vtemp1344[0xdU] = 0U;
            __Vtemp1344[0xeU] = 0U;
            __Vtemp1344[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1345, __Vtemp1344, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1345[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_128 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__71(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__71\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1346[0U] = 1U;
            __Vtemp1346[1U] = 0U;
            __Vtemp1346[2U] = 0U;
            __Vtemp1346[3U] = 0U;
            __Vtemp1346[4U] = 0U;
            __Vtemp1346[5U] = 0U;
            __Vtemp1346[6U] = 0U;
            __Vtemp1346[7U] = 0U;
            __Vtemp1346[8U] = 0U;
            __Vtemp1346[9U] = 0U;
            __Vtemp1346[0xaU] = 0U;
            __Vtemp1346[0xbU] = 0U;
            __Vtemp1346[0xcU] = 0U;
            __Vtemp1346[0xdU] = 0U;
            __Vtemp1346[0xeU] = 0U;
            __Vtemp1346[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1347, __Vtemp1346, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1347[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_127 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1348[0U] = 1U;
            __Vtemp1348[1U] = 0U;
            __Vtemp1348[2U] = 0U;
            __Vtemp1348[3U] = 0U;
            __Vtemp1348[4U] = 0U;
            __Vtemp1348[5U] = 0U;
            __Vtemp1348[6U] = 0U;
            __Vtemp1348[7U] = 0U;
            __Vtemp1348[8U] = 0U;
            __Vtemp1348[9U] = 0U;
            __Vtemp1348[0xaU] = 0U;
            __Vtemp1348[0xbU] = 0U;
            __Vtemp1348[0xcU] = 0U;
            __Vtemp1348[0xdU] = 0U;
            __Vtemp1348[0xeU] = 0U;
            __Vtemp1348[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1349, __Vtemp1348, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1349[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_126 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1350[0U] = 1U;
            __Vtemp1350[1U] = 0U;
            __Vtemp1350[2U] = 0U;
            __Vtemp1350[3U] = 0U;
            __Vtemp1350[4U] = 0U;
            __Vtemp1350[5U] = 0U;
            __Vtemp1350[6U] = 0U;
            __Vtemp1350[7U] = 0U;
            __Vtemp1350[8U] = 0U;
            __Vtemp1350[9U] = 0U;
            __Vtemp1350[0xaU] = 0U;
            __Vtemp1350[0xbU] = 0U;
            __Vtemp1350[0xcU] = 0U;
            __Vtemp1350[0xdU] = 0U;
            __Vtemp1350[0xeU] = 0U;
            __Vtemp1350[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1351, __Vtemp1350, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1351[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_125 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1352[0U] = 1U;
            __Vtemp1352[1U] = 0U;
            __Vtemp1352[2U] = 0U;
            __Vtemp1352[3U] = 0U;
            __Vtemp1352[4U] = 0U;
            __Vtemp1352[5U] = 0U;
            __Vtemp1352[6U] = 0U;
            __Vtemp1352[7U] = 0U;
            __Vtemp1352[8U] = 0U;
            __Vtemp1352[9U] = 0U;
            __Vtemp1352[0xaU] = 0U;
            __Vtemp1352[0xbU] = 0U;
            __Vtemp1352[0xcU] = 0U;
            __Vtemp1352[0xdU] = 0U;
            __Vtemp1352[0xeU] = 0U;
            __Vtemp1352[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1353, __Vtemp1352, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1353[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_124 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1354[0U] = 1U;
            __Vtemp1354[1U] = 0U;
            __Vtemp1354[2U] = 0U;
            __Vtemp1354[3U] = 0U;
            __Vtemp1354[4U] = 0U;
            __Vtemp1354[5U] = 0U;
            __Vtemp1354[6U] = 0U;
            __Vtemp1354[7U] = 0U;
            __Vtemp1354[8U] = 0U;
            __Vtemp1354[9U] = 0U;
            __Vtemp1354[0xaU] = 0U;
            __Vtemp1354[0xbU] = 0U;
            __Vtemp1354[0xcU] = 0U;
            __Vtemp1354[0xdU] = 0U;
            __Vtemp1354[0xeU] = 0U;
            __Vtemp1354[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1355, __Vtemp1354, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1355[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_123 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1356[0U] = 1U;
            __Vtemp1356[1U] = 0U;
            __Vtemp1356[2U] = 0U;
            __Vtemp1356[3U] = 0U;
            __Vtemp1356[4U] = 0U;
            __Vtemp1356[5U] = 0U;
            __Vtemp1356[6U] = 0U;
            __Vtemp1356[7U] = 0U;
            __Vtemp1356[8U] = 0U;
            __Vtemp1356[9U] = 0U;
            __Vtemp1356[0xaU] = 0U;
            __Vtemp1356[0xbU] = 0U;
            __Vtemp1356[0xcU] = 0U;
            __Vtemp1356[0xdU] = 0U;
            __Vtemp1356[0xeU] = 0U;
            __Vtemp1356[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1357, __Vtemp1356, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1357[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_122 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1358[0U] = 1U;
            __Vtemp1358[1U] = 0U;
            __Vtemp1358[2U] = 0U;
            __Vtemp1358[3U] = 0U;
            __Vtemp1358[4U] = 0U;
            __Vtemp1358[5U] = 0U;
            __Vtemp1358[6U] = 0U;
            __Vtemp1358[7U] = 0U;
            __Vtemp1358[8U] = 0U;
            __Vtemp1358[9U] = 0U;
            __Vtemp1358[0xaU] = 0U;
            __Vtemp1358[0xbU] = 0U;
            __Vtemp1358[0xcU] = 0U;
            __Vtemp1358[0xdU] = 0U;
            __Vtemp1358[0xeU] = 0U;
            __Vtemp1358[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1359, __Vtemp1358, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1359[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_121 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1360[0U] = 1U;
            __Vtemp1360[1U] = 0U;
            __Vtemp1360[2U] = 0U;
            __Vtemp1360[3U] = 0U;
            __Vtemp1360[4U] = 0U;
            __Vtemp1360[5U] = 0U;
            __Vtemp1360[6U] = 0U;
            __Vtemp1360[7U] = 0U;
            __Vtemp1360[8U] = 0U;
            __Vtemp1360[9U] = 0U;
            __Vtemp1360[0xaU] = 0U;
            __Vtemp1360[0xbU] = 0U;
            __Vtemp1360[0xcU] = 0U;
            __Vtemp1360[0xdU] = 0U;
            __Vtemp1360[0xeU] = 0U;
            __Vtemp1360[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1361, __Vtemp1360, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1361[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_120 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1362[0U] = 1U;
            __Vtemp1362[1U] = 0U;
            __Vtemp1362[2U] = 0U;
            __Vtemp1362[3U] = 0U;
            __Vtemp1362[4U] = 0U;
            __Vtemp1362[5U] = 0U;
            __Vtemp1362[6U] = 0U;
            __Vtemp1362[7U] = 0U;
            __Vtemp1362[8U] = 0U;
            __Vtemp1362[9U] = 0U;
            __Vtemp1362[0xaU] = 0U;
            __Vtemp1362[0xbU] = 0U;
            __Vtemp1362[0xcU] = 0U;
            __Vtemp1362[0xdU] = 0U;
            __Vtemp1362[0xeU] = 0U;
            __Vtemp1362[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1363, __Vtemp1362, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1363[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_119 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1364[0U] = 1U;
            __Vtemp1364[1U] = 0U;
            __Vtemp1364[2U] = 0U;
            __Vtemp1364[3U] = 0U;
            __Vtemp1364[4U] = 0U;
            __Vtemp1364[5U] = 0U;
            __Vtemp1364[6U] = 0U;
            __Vtemp1364[7U] = 0U;
            __Vtemp1364[8U] = 0U;
            __Vtemp1364[9U] = 0U;
            __Vtemp1364[0xaU] = 0U;
            __Vtemp1364[0xbU] = 0U;
            __Vtemp1364[0xcU] = 0U;
            __Vtemp1364[0xdU] = 0U;
            __Vtemp1364[0xeU] = 0U;
            __Vtemp1364[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1365, __Vtemp1364, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1365[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_118 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1366[0U] = 1U;
            __Vtemp1366[1U] = 0U;
            __Vtemp1366[2U] = 0U;
            __Vtemp1366[3U] = 0U;
            __Vtemp1366[4U] = 0U;
            __Vtemp1366[5U] = 0U;
            __Vtemp1366[6U] = 0U;
            __Vtemp1366[7U] = 0U;
            __Vtemp1366[8U] = 0U;
            __Vtemp1366[9U] = 0U;
            __Vtemp1366[0xaU] = 0U;
            __Vtemp1366[0xbU] = 0U;
            __Vtemp1366[0xcU] = 0U;
            __Vtemp1366[0xdU] = 0U;
            __Vtemp1366[0xeU] = 0U;
            __Vtemp1366[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1367, __Vtemp1366, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1367[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_117 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1368[0U] = 1U;
            __Vtemp1368[1U] = 0U;
            __Vtemp1368[2U] = 0U;
            __Vtemp1368[3U] = 0U;
            __Vtemp1368[4U] = 0U;
            __Vtemp1368[5U] = 0U;
            __Vtemp1368[6U] = 0U;
            __Vtemp1368[7U] = 0U;
            __Vtemp1368[8U] = 0U;
            __Vtemp1368[9U] = 0U;
            __Vtemp1368[0xaU] = 0U;
            __Vtemp1368[0xbU] = 0U;
            __Vtemp1368[0xcU] = 0U;
            __Vtemp1368[0xdU] = 0U;
            __Vtemp1368[0xeU] = 0U;
            __Vtemp1368[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1369, __Vtemp1368, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1369[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_116 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1370[0U] = 1U;
            __Vtemp1370[1U] = 0U;
            __Vtemp1370[2U] = 0U;
            __Vtemp1370[3U] = 0U;
            __Vtemp1370[4U] = 0U;
            __Vtemp1370[5U] = 0U;
            __Vtemp1370[6U] = 0U;
            __Vtemp1370[7U] = 0U;
            __Vtemp1370[8U] = 0U;
            __Vtemp1370[9U] = 0U;
            __Vtemp1370[0xaU] = 0U;
            __Vtemp1370[0xbU] = 0U;
            __Vtemp1370[0xcU] = 0U;
            __Vtemp1370[0xdU] = 0U;
            __Vtemp1370[0xeU] = 0U;
            __Vtemp1370[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1371, __Vtemp1370, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1371[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_115 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1372[0U] = 1U;
            __Vtemp1372[1U] = 0U;
            __Vtemp1372[2U] = 0U;
            __Vtemp1372[3U] = 0U;
            __Vtemp1372[4U] = 0U;
            __Vtemp1372[5U] = 0U;
            __Vtemp1372[6U] = 0U;
            __Vtemp1372[7U] = 0U;
            __Vtemp1372[8U] = 0U;
            __Vtemp1372[9U] = 0U;
            __Vtemp1372[0xaU] = 0U;
            __Vtemp1372[0xbU] = 0U;
            __Vtemp1372[0xcU] = 0U;
            __Vtemp1372[0xdU] = 0U;
            __Vtemp1372[0xeU] = 0U;
            __Vtemp1372[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1373, __Vtemp1372, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1373[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_114 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1374[0U] = 1U;
            __Vtemp1374[1U] = 0U;
            __Vtemp1374[2U] = 0U;
            __Vtemp1374[3U] = 0U;
            __Vtemp1374[4U] = 0U;
            __Vtemp1374[5U] = 0U;
            __Vtemp1374[6U] = 0U;
            __Vtemp1374[7U] = 0U;
            __Vtemp1374[8U] = 0U;
            __Vtemp1374[9U] = 0U;
            __Vtemp1374[0xaU] = 0U;
            __Vtemp1374[0xbU] = 0U;
            __Vtemp1374[0xcU] = 0U;
            __Vtemp1374[0xdU] = 0U;
            __Vtemp1374[0xeU] = 0U;
            __Vtemp1374[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1375, __Vtemp1374, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1375[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_113 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1376[0U] = 1U;
            __Vtemp1376[1U] = 0U;
            __Vtemp1376[2U] = 0U;
            __Vtemp1376[3U] = 0U;
            __Vtemp1376[4U] = 0U;
            __Vtemp1376[5U] = 0U;
            __Vtemp1376[6U] = 0U;
            __Vtemp1376[7U] = 0U;
            __Vtemp1376[8U] = 0U;
            __Vtemp1376[9U] = 0U;
            __Vtemp1376[0xaU] = 0U;
            __Vtemp1376[0xbU] = 0U;
            __Vtemp1376[0xcU] = 0U;
            __Vtemp1376[0xdU] = 0U;
            __Vtemp1376[0xeU] = 0U;
            __Vtemp1376[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1377, __Vtemp1376, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1377[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_112 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1378[0U] = 1U;
            __Vtemp1378[1U] = 0U;
            __Vtemp1378[2U] = 0U;
            __Vtemp1378[3U] = 0U;
            __Vtemp1378[4U] = 0U;
            __Vtemp1378[5U] = 0U;
            __Vtemp1378[6U] = 0U;
            __Vtemp1378[7U] = 0U;
            __Vtemp1378[8U] = 0U;
            __Vtemp1378[9U] = 0U;
            __Vtemp1378[0xaU] = 0U;
            __Vtemp1378[0xbU] = 0U;
            __Vtemp1378[0xcU] = 0U;
            __Vtemp1378[0xdU] = 0U;
            __Vtemp1378[0xeU] = 0U;
            __Vtemp1378[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1379, __Vtemp1378, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1379[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_111 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1380[0U] = 1U;
            __Vtemp1380[1U] = 0U;
            __Vtemp1380[2U] = 0U;
            __Vtemp1380[3U] = 0U;
            __Vtemp1380[4U] = 0U;
            __Vtemp1380[5U] = 0U;
            __Vtemp1380[6U] = 0U;
            __Vtemp1380[7U] = 0U;
            __Vtemp1380[8U] = 0U;
            __Vtemp1380[9U] = 0U;
            __Vtemp1380[0xaU] = 0U;
            __Vtemp1380[0xbU] = 0U;
            __Vtemp1380[0xcU] = 0U;
            __Vtemp1380[0xdU] = 0U;
            __Vtemp1380[0xeU] = 0U;
            __Vtemp1380[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1381, __Vtemp1380, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1381[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_110 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1382[0U] = 1U;
            __Vtemp1382[1U] = 0U;
            __Vtemp1382[2U] = 0U;
            __Vtemp1382[3U] = 0U;
            __Vtemp1382[4U] = 0U;
            __Vtemp1382[5U] = 0U;
            __Vtemp1382[6U] = 0U;
            __Vtemp1382[7U] = 0U;
            __Vtemp1382[8U] = 0U;
            __Vtemp1382[9U] = 0U;
            __Vtemp1382[0xaU] = 0U;
            __Vtemp1382[0xbU] = 0U;
            __Vtemp1382[0xcU] = 0U;
            __Vtemp1382[0xdU] = 0U;
            __Vtemp1382[0xeU] = 0U;
            __Vtemp1382[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1383, __Vtemp1382, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1383[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_109 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1384[0U] = 1U;
            __Vtemp1384[1U] = 0U;
            __Vtemp1384[2U] = 0U;
            __Vtemp1384[3U] = 0U;
            __Vtemp1384[4U] = 0U;
            __Vtemp1384[5U] = 0U;
            __Vtemp1384[6U] = 0U;
            __Vtemp1384[7U] = 0U;
            __Vtemp1384[8U] = 0U;
            __Vtemp1384[9U] = 0U;
            __Vtemp1384[0xaU] = 0U;
            __Vtemp1384[0xbU] = 0U;
            __Vtemp1384[0xcU] = 0U;
            __Vtemp1384[0xdU] = 0U;
            __Vtemp1384[0xeU] = 0U;
            __Vtemp1384[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1385, __Vtemp1384, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1385[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_108 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1386[0U] = 1U;
            __Vtemp1386[1U] = 0U;
            __Vtemp1386[2U] = 0U;
            __Vtemp1386[3U] = 0U;
            __Vtemp1386[4U] = 0U;
            __Vtemp1386[5U] = 0U;
            __Vtemp1386[6U] = 0U;
            __Vtemp1386[7U] = 0U;
            __Vtemp1386[8U] = 0U;
            __Vtemp1386[9U] = 0U;
            __Vtemp1386[0xaU] = 0U;
            __Vtemp1386[0xbU] = 0U;
            __Vtemp1386[0xcU] = 0U;
            __Vtemp1386[0xdU] = 0U;
            __Vtemp1386[0xeU] = 0U;
            __Vtemp1386[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1387, __Vtemp1386, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1387[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_107 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1388[0U] = 1U;
            __Vtemp1388[1U] = 0U;
            __Vtemp1388[2U] = 0U;
            __Vtemp1388[3U] = 0U;
            __Vtemp1388[4U] = 0U;
            __Vtemp1388[5U] = 0U;
            __Vtemp1388[6U] = 0U;
            __Vtemp1388[7U] = 0U;
            __Vtemp1388[8U] = 0U;
            __Vtemp1388[9U] = 0U;
            __Vtemp1388[0xaU] = 0U;
            __Vtemp1388[0xbU] = 0U;
            __Vtemp1388[0xcU] = 0U;
            __Vtemp1388[0xdU] = 0U;
            __Vtemp1388[0xeU] = 0U;
            __Vtemp1388[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1389, __Vtemp1388, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1389[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_106 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1390[0U] = 1U;
            __Vtemp1390[1U] = 0U;
            __Vtemp1390[2U] = 0U;
            __Vtemp1390[3U] = 0U;
            __Vtemp1390[4U] = 0U;
            __Vtemp1390[5U] = 0U;
            __Vtemp1390[6U] = 0U;
            __Vtemp1390[7U] = 0U;
            __Vtemp1390[8U] = 0U;
            __Vtemp1390[9U] = 0U;
            __Vtemp1390[0xaU] = 0U;
            __Vtemp1390[0xbU] = 0U;
            __Vtemp1390[0xcU] = 0U;
            __Vtemp1390[0xdU] = 0U;
            __Vtemp1390[0xeU] = 0U;
            __Vtemp1390[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1391, __Vtemp1390, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1391[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_105 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1392[0U] = 1U;
            __Vtemp1392[1U] = 0U;
            __Vtemp1392[2U] = 0U;
            __Vtemp1392[3U] = 0U;
            __Vtemp1392[4U] = 0U;
            __Vtemp1392[5U] = 0U;
            __Vtemp1392[6U] = 0U;
            __Vtemp1392[7U] = 0U;
            __Vtemp1392[8U] = 0U;
            __Vtemp1392[9U] = 0U;
            __Vtemp1392[0xaU] = 0U;
            __Vtemp1392[0xbU] = 0U;
            __Vtemp1392[0xcU] = 0U;
            __Vtemp1392[0xdU] = 0U;
            __Vtemp1392[0xeU] = 0U;
            __Vtemp1392[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1393, __Vtemp1392, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1393[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_104 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1394[0U] = 1U;
            __Vtemp1394[1U] = 0U;
            __Vtemp1394[2U] = 0U;
            __Vtemp1394[3U] = 0U;
            __Vtemp1394[4U] = 0U;
            __Vtemp1394[5U] = 0U;
            __Vtemp1394[6U] = 0U;
            __Vtemp1394[7U] = 0U;
            __Vtemp1394[8U] = 0U;
            __Vtemp1394[9U] = 0U;
            __Vtemp1394[0xaU] = 0U;
            __Vtemp1394[0xbU] = 0U;
            __Vtemp1394[0xcU] = 0U;
            __Vtemp1394[0xdU] = 0U;
            __Vtemp1394[0xeU] = 0U;
            __Vtemp1394[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1395, __Vtemp1394, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1395[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_103 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1396[0U] = 1U;
            __Vtemp1396[1U] = 0U;
            __Vtemp1396[2U] = 0U;
            __Vtemp1396[3U] = 0U;
            __Vtemp1396[4U] = 0U;
            __Vtemp1396[5U] = 0U;
            __Vtemp1396[6U] = 0U;
            __Vtemp1396[7U] = 0U;
            __Vtemp1396[8U] = 0U;
            __Vtemp1396[9U] = 0U;
            __Vtemp1396[0xaU] = 0U;
            __Vtemp1396[0xbU] = 0U;
            __Vtemp1396[0xcU] = 0U;
            __Vtemp1396[0xdU] = 0U;
            __Vtemp1396[0xeU] = 0U;
            __Vtemp1396[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1397, __Vtemp1396, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1397[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_102 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1398[0U] = 1U;
            __Vtemp1398[1U] = 0U;
            __Vtemp1398[2U] = 0U;
            __Vtemp1398[3U] = 0U;
            __Vtemp1398[4U] = 0U;
            __Vtemp1398[5U] = 0U;
            __Vtemp1398[6U] = 0U;
            __Vtemp1398[7U] = 0U;
            __Vtemp1398[8U] = 0U;
            __Vtemp1398[9U] = 0U;
            __Vtemp1398[0xaU] = 0U;
            __Vtemp1398[0xbU] = 0U;
            __Vtemp1398[0xcU] = 0U;
            __Vtemp1398[0xdU] = 0U;
            __Vtemp1398[0xeU] = 0U;
            __Vtemp1398[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1399, __Vtemp1398, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1399[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_101 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}
