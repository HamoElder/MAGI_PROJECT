// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__68(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__68\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1224[16];
    WData/*511:0*/ __Vtemp1225[16];
    WData/*511:0*/ __Vtemp1226[16];
    WData/*511:0*/ __Vtemp1227[16];
    WData/*511:0*/ __Vtemp1228[16];
    WData/*511:0*/ __Vtemp1229[16];
    WData/*511:0*/ __Vtemp1230[16];
    WData/*511:0*/ __Vtemp1231[16];
    WData/*511:0*/ __Vtemp1232[16];
    WData/*511:0*/ __Vtemp1233[16];
    WData/*511:0*/ __Vtemp1234[16];
    WData/*511:0*/ __Vtemp1235[16];
    WData/*511:0*/ __Vtemp1236[16];
    WData/*511:0*/ __Vtemp1237[16];
    WData/*511:0*/ __Vtemp1238[16];
    WData/*511:0*/ __Vtemp1239[16];
    WData/*511:0*/ __Vtemp1240[16];
    WData/*511:0*/ __Vtemp1241[16];
    WData/*511:0*/ __Vtemp1242[16];
    WData/*511:0*/ __Vtemp1243[16];
    WData/*511:0*/ __Vtemp1244[16];
    WData/*511:0*/ __Vtemp1245[16];
    WData/*511:0*/ __Vtemp1246[16];
    WData/*511:0*/ __Vtemp1247[16];
    WData/*511:0*/ __Vtemp1248[16];
    WData/*511:0*/ __Vtemp1249[16];
    WData/*511:0*/ __Vtemp1250[16];
    WData/*511:0*/ __Vtemp1251[16];
    WData/*511:0*/ __Vtemp1252[16];
    WData/*511:0*/ __Vtemp1253[16];
    WData/*511:0*/ __Vtemp1254[16];
    WData/*511:0*/ __Vtemp1255[16];
    WData/*511:0*/ __Vtemp1256[16];
    WData/*511:0*/ __Vtemp1257[16];
    WData/*511:0*/ __Vtemp1258[16];
    WData/*511:0*/ __Vtemp1259[16];
    WData/*511:0*/ __Vtemp1260[16];
    WData/*511:0*/ __Vtemp1261[16];
    WData/*511:0*/ __Vtemp1262[16];
    WData/*511:0*/ __Vtemp1263[16];
    WData/*511:0*/ __Vtemp1264[16];
    WData/*511:0*/ __Vtemp1265[16];
    WData/*511:0*/ __Vtemp1266[16];
    WData/*511:0*/ __Vtemp1267[16];
    WData/*511:0*/ __Vtemp1268[16];
    WData/*511:0*/ __Vtemp1269[16];
    WData/*511:0*/ __Vtemp1270[16];
    WData/*511:0*/ __Vtemp1271[16];
    WData/*511:0*/ __Vtemp1272[16];
    WData/*511:0*/ __Vtemp1273[16];
    WData/*511:0*/ __Vtemp1274[16];
    WData/*511:0*/ __Vtemp1275[16];
    WData/*511:0*/ __Vtemp1276[16];
    WData/*511:0*/ __Vtemp1277[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1224[0U] = 1U;
            __Vtemp1224[1U] = 0U;
            __Vtemp1224[2U] = 0U;
            __Vtemp1224[3U] = 0U;
            __Vtemp1224[4U] = 0U;
            __Vtemp1224[5U] = 0U;
            __Vtemp1224[6U] = 0U;
            __Vtemp1224[7U] = 0U;
            __Vtemp1224[8U] = 0U;
            __Vtemp1224[9U] = 0U;
            __Vtemp1224[0xaU] = 0U;
            __Vtemp1224[0xbU] = 0U;
            __Vtemp1224[0xcU] = 0U;
            __Vtemp1224[0xdU] = 0U;
            __Vtemp1224[0xeU] = 0U;
            __Vtemp1224[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1225, __Vtemp1224, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1225[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_192 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1226[0U] = 1U;
            __Vtemp1226[1U] = 0U;
            __Vtemp1226[2U] = 0U;
            __Vtemp1226[3U] = 0U;
            __Vtemp1226[4U] = 0U;
            __Vtemp1226[5U] = 0U;
            __Vtemp1226[6U] = 0U;
            __Vtemp1226[7U] = 0U;
            __Vtemp1226[8U] = 0U;
            __Vtemp1226[9U] = 0U;
            __Vtemp1226[0xaU] = 0U;
            __Vtemp1226[0xbU] = 0U;
            __Vtemp1226[0xcU] = 0U;
            __Vtemp1226[0xdU] = 0U;
            __Vtemp1226[0xeU] = 0U;
            __Vtemp1226[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1227, __Vtemp1226, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1227[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_191 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1228[0U] = 1U;
            __Vtemp1228[1U] = 0U;
            __Vtemp1228[2U] = 0U;
            __Vtemp1228[3U] = 0U;
            __Vtemp1228[4U] = 0U;
            __Vtemp1228[5U] = 0U;
            __Vtemp1228[6U] = 0U;
            __Vtemp1228[7U] = 0U;
            __Vtemp1228[8U] = 0U;
            __Vtemp1228[9U] = 0U;
            __Vtemp1228[0xaU] = 0U;
            __Vtemp1228[0xbU] = 0U;
            __Vtemp1228[0xcU] = 0U;
            __Vtemp1228[0xdU] = 0U;
            __Vtemp1228[0xeU] = 0U;
            __Vtemp1228[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1229, __Vtemp1228, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1229[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_190 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1230[0U] = 1U;
            __Vtemp1230[1U] = 0U;
            __Vtemp1230[2U] = 0U;
            __Vtemp1230[3U] = 0U;
            __Vtemp1230[4U] = 0U;
            __Vtemp1230[5U] = 0U;
            __Vtemp1230[6U] = 0U;
            __Vtemp1230[7U] = 0U;
            __Vtemp1230[8U] = 0U;
            __Vtemp1230[9U] = 0U;
            __Vtemp1230[0xaU] = 0U;
            __Vtemp1230[0xbU] = 0U;
            __Vtemp1230[0xcU] = 0U;
            __Vtemp1230[0xdU] = 0U;
            __Vtemp1230[0xeU] = 0U;
            __Vtemp1230[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1231, __Vtemp1230, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1231[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_189 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1232[0U] = 1U;
            __Vtemp1232[1U] = 0U;
            __Vtemp1232[2U] = 0U;
            __Vtemp1232[3U] = 0U;
            __Vtemp1232[4U] = 0U;
            __Vtemp1232[5U] = 0U;
            __Vtemp1232[6U] = 0U;
            __Vtemp1232[7U] = 0U;
            __Vtemp1232[8U] = 0U;
            __Vtemp1232[9U] = 0U;
            __Vtemp1232[0xaU] = 0U;
            __Vtemp1232[0xbU] = 0U;
            __Vtemp1232[0xcU] = 0U;
            __Vtemp1232[0xdU] = 0U;
            __Vtemp1232[0xeU] = 0U;
            __Vtemp1232[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1233, __Vtemp1232, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1233[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_188 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1234[0U] = 1U;
            __Vtemp1234[1U] = 0U;
            __Vtemp1234[2U] = 0U;
            __Vtemp1234[3U] = 0U;
            __Vtemp1234[4U] = 0U;
            __Vtemp1234[5U] = 0U;
            __Vtemp1234[6U] = 0U;
            __Vtemp1234[7U] = 0U;
            __Vtemp1234[8U] = 0U;
            __Vtemp1234[9U] = 0U;
            __Vtemp1234[0xaU] = 0U;
            __Vtemp1234[0xbU] = 0U;
            __Vtemp1234[0xcU] = 0U;
            __Vtemp1234[0xdU] = 0U;
            __Vtemp1234[0xeU] = 0U;
            __Vtemp1234[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1235, __Vtemp1234, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1235[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_187 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1236[0U] = 1U;
            __Vtemp1236[1U] = 0U;
            __Vtemp1236[2U] = 0U;
            __Vtemp1236[3U] = 0U;
            __Vtemp1236[4U] = 0U;
            __Vtemp1236[5U] = 0U;
            __Vtemp1236[6U] = 0U;
            __Vtemp1236[7U] = 0U;
            __Vtemp1236[8U] = 0U;
            __Vtemp1236[9U] = 0U;
            __Vtemp1236[0xaU] = 0U;
            __Vtemp1236[0xbU] = 0U;
            __Vtemp1236[0xcU] = 0U;
            __Vtemp1236[0xdU] = 0U;
            __Vtemp1236[0xeU] = 0U;
            __Vtemp1236[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1237, __Vtemp1236, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1237[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_186 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1238[0U] = 1U;
            __Vtemp1238[1U] = 0U;
            __Vtemp1238[2U] = 0U;
            __Vtemp1238[3U] = 0U;
            __Vtemp1238[4U] = 0U;
            __Vtemp1238[5U] = 0U;
            __Vtemp1238[6U] = 0U;
            __Vtemp1238[7U] = 0U;
            __Vtemp1238[8U] = 0U;
            __Vtemp1238[9U] = 0U;
            __Vtemp1238[0xaU] = 0U;
            __Vtemp1238[0xbU] = 0U;
            __Vtemp1238[0xcU] = 0U;
            __Vtemp1238[0xdU] = 0U;
            __Vtemp1238[0xeU] = 0U;
            __Vtemp1238[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1239, __Vtemp1238, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1239[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_185 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1240[0U] = 1U;
            __Vtemp1240[1U] = 0U;
            __Vtemp1240[2U] = 0U;
            __Vtemp1240[3U] = 0U;
            __Vtemp1240[4U] = 0U;
            __Vtemp1240[5U] = 0U;
            __Vtemp1240[6U] = 0U;
            __Vtemp1240[7U] = 0U;
            __Vtemp1240[8U] = 0U;
            __Vtemp1240[9U] = 0U;
            __Vtemp1240[0xaU] = 0U;
            __Vtemp1240[0xbU] = 0U;
            __Vtemp1240[0xcU] = 0U;
            __Vtemp1240[0xdU] = 0U;
            __Vtemp1240[0xeU] = 0U;
            __Vtemp1240[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1241, __Vtemp1240, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1241[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_184 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1242[0U] = 1U;
            __Vtemp1242[1U] = 0U;
            __Vtemp1242[2U] = 0U;
            __Vtemp1242[3U] = 0U;
            __Vtemp1242[4U] = 0U;
            __Vtemp1242[5U] = 0U;
            __Vtemp1242[6U] = 0U;
            __Vtemp1242[7U] = 0U;
            __Vtemp1242[8U] = 0U;
            __Vtemp1242[9U] = 0U;
            __Vtemp1242[0xaU] = 0U;
            __Vtemp1242[0xbU] = 0U;
            __Vtemp1242[0xcU] = 0U;
            __Vtemp1242[0xdU] = 0U;
            __Vtemp1242[0xeU] = 0U;
            __Vtemp1242[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1243, __Vtemp1242, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1243[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_183 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1244[0U] = 1U;
            __Vtemp1244[1U] = 0U;
            __Vtemp1244[2U] = 0U;
            __Vtemp1244[3U] = 0U;
            __Vtemp1244[4U] = 0U;
            __Vtemp1244[5U] = 0U;
            __Vtemp1244[6U] = 0U;
            __Vtemp1244[7U] = 0U;
            __Vtemp1244[8U] = 0U;
            __Vtemp1244[9U] = 0U;
            __Vtemp1244[0xaU] = 0U;
            __Vtemp1244[0xbU] = 0U;
            __Vtemp1244[0xcU] = 0U;
            __Vtemp1244[0xdU] = 0U;
            __Vtemp1244[0xeU] = 0U;
            __Vtemp1244[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1245, __Vtemp1244, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1245[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_182 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1246[0U] = 1U;
            __Vtemp1246[1U] = 0U;
            __Vtemp1246[2U] = 0U;
            __Vtemp1246[3U] = 0U;
            __Vtemp1246[4U] = 0U;
            __Vtemp1246[5U] = 0U;
            __Vtemp1246[6U] = 0U;
            __Vtemp1246[7U] = 0U;
            __Vtemp1246[8U] = 0U;
            __Vtemp1246[9U] = 0U;
            __Vtemp1246[0xaU] = 0U;
            __Vtemp1246[0xbU] = 0U;
            __Vtemp1246[0xcU] = 0U;
            __Vtemp1246[0xdU] = 0U;
            __Vtemp1246[0xeU] = 0U;
            __Vtemp1246[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1247, __Vtemp1246, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1247[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_181 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1248[0U] = 1U;
            __Vtemp1248[1U] = 0U;
            __Vtemp1248[2U] = 0U;
            __Vtemp1248[3U] = 0U;
            __Vtemp1248[4U] = 0U;
            __Vtemp1248[5U] = 0U;
            __Vtemp1248[6U] = 0U;
            __Vtemp1248[7U] = 0U;
            __Vtemp1248[8U] = 0U;
            __Vtemp1248[9U] = 0U;
            __Vtemp1248[0xaU] = 0U;
            __Vtemp1248[0xbU] = 0U;
            __Vtemp1248[0xcU] = 0U;
            __Vtemp1248[0xdU] = 0U;
            __Vtemp1248[0xeU] = 0U;
            __Vtemp1248[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1249, __Vtemp1248, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1249[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_180 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1250[0U] = 1U;
            __Vtemp1250[1U] = 0U;
            __Vtemp1250[2U] = 0U;
            __Vtemp1250[3U] = 0U;
            __Vtemp1250[4U] = 0U;
            __Vtemp1250[5U] = 0U;
            __Vtemp1250[6U] = 0U;
            __Vtemp1250[7U] = 0U;
            __Vtemp1250[8U] = 0U;
            __Vtemp1250[9U] = 0U;
            __Vtemp1250[0xaU] = 0U;
            __Vtemp1250[0xbU] = 0U;
            __Vtemp1250[0xcU] = 0U;
            __Vtemp1250[0xdU] = 0U;
            __Vtemp1250[0xeU] = 0U;
            __Vtemp1250[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1251, __Vtemp1250, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1251[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_179 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1252[0U] = 1U;
            __Vtemp1252[1U] = 0U;
            __Vtemp1252[2U] = 0U;
            __Vtemp1252[3U] = 0U;
            __Vtemp1252[4U] = 0U;
            __Vtemp1252[5U] = 0U;
            __Vtemp1252[6U] = 0U;
            __Vtemp1252[7U] = 0U;
            __Vtemp1252[8U] = 0U;
            __Vtemp1252[9U] = 0U;
            __Vtemp1252[0xaU] = 0U;
            __Vtemp1252[0xbU] = 0U;
            __Vtemp1252[0xcU] = 0U;
            __Vtemp1252[0xdU] = 0U;
            __Vtemp1252[0xeU] = 0U;
            __Vtemp1252[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1253, __Vtemp1252, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1253[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_178 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1254[0U] = 1U;
            __Vtemp1254[1U] = 0U;
            __Vtemp1254[2U] = 0U;
            __Vtemp1254[3U] = 0U;
            __Vtemp1254[4U] = 0U;
            __Vtemp1254[5U] = 0U;
            __Vtemp1254[6U] = 0U;
            __Vtemp1254[7U] = 0U;
            __Vtemp1254[8U] = 0U;
            __Vtemp1254[9U] = 0U;
            __Vtemp1254[0xaU] = 0U;
            __Vtemp1254[0xbU] = 0U;
            __Vtemp1254[0xcU] = 0U;
            __Vtemp1254[0xdU] = 0U;
            __Vtemp1254[0xeU] = 0U;
            __Vtemp1254[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1255, __Vtemp1254, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1255[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_177 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1256[0U] = 1U;
            __Vtemp1256[1U] = 0U;
            __Vtemp1256[2U] = 0U;
            __Vtemp1256[3U] = 0U;
            __Vtemp1256[4U] = 0U;
            __Vtemp1256[5U] = 0U;
            __Vtemp1256[6U] = 0U;
            __Vtemp1256[7U] = 0U;
            __Vtemp1256[8U] = 0U;
            __Vtemp1256[9U] = 0U;
            __Vtemp1256[0xaU] = 0U;
            __Vtemp1256[0xbU] = 0U;
            __Vtemp1256[0xcU] = 0U;
            __Vtemp1256[0xdU] = 0U;
            __Vtemp1256[0xeU] = 0U;
            __Vtemp1256[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1257, __Vtemp1256, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1257[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_176 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1258[0U] = 1U;
            __Vtemp1258[1U] = 0U;
            __Vtemp1258[2U] = 0U;
            __Vtemp1258[3U] = 0U;
            __Vtemp1258[4U] = 0U;
            __Vtemp1258[5U] = 0U;
            __Vtemp1258[6U] = 0U;
            __Vtemp1258[7U] = 0U;
            __Vtemp1258[8U] = 0U;
            __Vtemp1258[9U] = 0U;
            __Vtemp1258[0xaU] = 0U;
            __Vtemp1258[0xbU] = 0U;
            __Vtemp1258[0xcU] = 0U;
            __Vtemp1258[0xdU] = 0U;
            __Vtemp1258[0xeU] = 0U;
            __Vtemp1258[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1259, __Vtemp1258, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1259[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_175 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1260[0U] = 1U;
            __Vtemp1260[1U] = 0U;
            __Vtemp1260[2U] = 0U;
            __Vtemp1260[3U] = 0U;
            __Vtemp1260[4U] = 0U;
            __Vtemp1260[5U] = 0U;
            __Vtemp1260[6U] = 0U;
            __Vtemp1260[7U] = 0U;
            __Vtemp1260[8U] = 0U;
            __Vtemp1260[9U] = 0U;
            __Vtemp1260[0xaU] = 0U;
            __Vtemp1260[0xbU] = 0U;
            __Vtemp1260[0xcU] = 0U;
            __Vtemp1260[0xdU] = 0U;
            __Vtemp1260[0xeU] = 0U;
            __Vtemp1260[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1261, __Vtemp1260, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1261[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_174 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1262[0U] = 1U;
            __Vtemp1262[1U] = 0U;
            __Vtemp1262[2U] = 0U;
            __Vtemp1262[3U] = 0U;
            __Vtemp1262[4U] = 0U;
            __Vtemp1262[5U] = 0U;
            __Vtemp1262[6U] = 0U;
            __Vtemp1262[7U] = 0U;
            __Vtemp1262[8U] = 0U;
            __Vtemp1262[9U] = 0U;
            __Vtemp1262[0xaU] = 0U;
            __Vtemp1262[0xbU] = 0U;
            __Vtemp1262[0xcU] = 0U;
            __Vtemp1262[0xdU] = 0U;
            __Vtemp1262[0xeU] = 0U;
            __Vtemp1262[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1263, __Vtemp1262, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1263[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_173 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1264[0U] = 1U;
            __Vtemp1264[1U] = 0U;
            __Vtemp1264[2U] = 0U;
            __Vtemp1264[3U] = 0U;
            __Vtemp1264[4U] = 0U;
            __Vtemp1264[5U] = 0U;
            __Vtemp1264[6U] = 0U;
            __Vtemp1264[7U] = 0U;
            __Vtemp1264[8U] = 0U;
            __Vtemp1264[9U] = 0U;
            __Vtemp1264[0xaU] = 0U;
            __Vtemp1264[0xbU] = 0U;
            __Vtemp1264[0xcU] = 0U;
            __Vtemp1264[0xdU] = 0U;
            __Vtemp1264[0xeU] = 0U;
            __Vtemp1264[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1265, __Vtemp1264, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1265[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_172 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1266[0U] = 1U;
            __Vtemp1266[1U] = 0U;
            __Vtemp1266[2U] = 0U;
            __Vtemp1266[3U] = 0U;
            __Vtemp1266[4U] = 0U;
            __Vtemp1266[5U] = 0U;
            __Vtemp1266[6U] = 0U;
            __Vtemp1266[7U] = 0U;
            __Vtemp1266[8U] = 0U;
            __Vtemp1266[9U] = 0U;
            __Vtemp1266[0xaU] = 0U;
            __Vtemp1266[0xbU] = 0U;
            __Vtemp1266[0xcU] = 0U;
            __Vtemp1266[0xdU] = 0U;
            __Vtemp1266[0xeU] = 0U;
            __Vtemp1266[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1267, __Vtemp1266, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1267[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_171 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1268[0U] = 1U;
            __Vtemp1268[1U] = 0U;
            __Vtemp1268[2U] = 0U;
            __Vtemp1268[3U] = 0U;
            __Vtemp1268[4U] = 0U;
            __Vtemp1268[5U] = 0U;
            __Vtemp1268[6U] = 0U;
            __Vtemp1268[7U] = 0U;
            __Vtemp1268[8U] = 0U;
            __Vtemp1268[9U] = 0U;
            __Vtemp1268[0xaU] = 0U;
            __Vtemp1268[0xbU] = 0U;
            __Vtemp1268[0xcU] = 0U;
            __Vtemp1268[0xdU] = 0U;
            __Vtemp1268[0xeU] = 0U;
            __Vtemp1268[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1269, __Vtemp1268, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1269[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_170 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1270[0U] = 1U;
            __Vtemp1270[1U] = 0U;
            __Vtemp1270[2U] = 0U;
            __Vtemp1270[3U] = 0U;
            __Vtemp1270[4U] = 0U;
            __Vtemp1270[5U] = 0U;
            __Vtemp1270[6U] = 0U;
            __Vtemp1270[7U] = 0U;
            __Vtemp1270[8U] = 0U;
            __Vtemp1270[9U] = 0U;
            __Vtemp1270[0xaU] = 0U;
            __Vtemp1270[0xbU] = 0U;
            __Vtemp1270[0xcU] = 0U;
            __Vtemp1270[0xdU] = 0U;
            __Vtemp1270[0xeU] = 0U;
            __Vtemp1270[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1271, __Vtemp1270, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1271[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_169 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1272[0U] = 1U;
            __Vtemp1272[1U] = 0U;
            __Vtemp1272[2U] = 0U;
            __Vtemp1272[3U] = 0U;
            __Vtemp1272[4U] = 0U;
            __Vtemp1272[5U] = 0U;
            __Vtemp1272[6U] = 0U;
            __Vtemp1272[7U] = 0U;
            __Vtemp1272[8U] = 0U;
            __Vtemp1272[9U] = 0U;
            __Vtemp1272[0xaU] = 0U;
            __Vtemp1272[0xbU] = 0U;
            __Vtemp1272[0xcU] = 0U;
            __Vtemp1272[0xdU] = 0U;
            __Vtemp1272[0xeU] = 0U;
            __Vtemp1272[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1273, __Vtemp1272, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1273[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_168 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1274[0U] = 1U;
            __Vtemp1274[1U] = 0U;
            __Vtemp1274[2U] = 0U;
            __Vtemp1274[3U] = 0U;
            __Vtemp1274[4U] = 0U;
            __Vtemp1274[5U] = 0U;
            __Vtemp1274[6U] = 0U;
            __Vtemp1274[7U] = 0U;
            __Vtemp1274[8U] = 0U;
            __Vtemp1274[9U] = 0U;
            __Vtemp1274[0xaU] = 0U;
            __Vtemp1274[0xbU] = 0U;
            __Vtemp1274[0xcU] = 0U;
            __Vtemp1274[0xdU] = 0U;
            __Vtemp1274[0xeU] = 0U;
            __Vtemp1274[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1275, __Vtemp1274, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1275[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_167 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1276[0U] = 1U;
            __Vtemp1276[1U] = 0U;
            __Vtemp1276[2U] = 0U;
            __Vtemp1276[3U] = 0U;
            __Vtemp1276[4U] = 0U;
            __Vtemp1276[5U] = 0U;
            __Vtemp1276[6U] = 0U;
            __Vtemp1276[7U] = 0U;
            __Vtemp1276[8U] = 0U;
            __Vtemp1276[9U] = 0U;
            __Vtemp1276[0xaU] = 0U;
            __Vtemp1276[0xbU] = 0U;
            __Vtemp1276[0xcU] = 0U;
            __Vtemp1276[0xdU] = 0U;
            __Vtemp1276[0xeU] = 0U;
            __Vtemp1276[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1277, __Vtemp1276, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1277[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_164 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__69(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__69\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    WData/*511:0*/ __Vtemp1331[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1278[0U] = 1U;
            __Vtemp1278[1U] = 0U;
            __Vtemp1278[2U] = 0U;
            __Vtemp1278[3U] = 0U;
            __Vtemp1278[4U] = 0U;
            __Vtemp1278[5U] = 0U;
            __Vtemp1278[6U] = 0U;
            __Vtemp1278[7U] = 0U;
            __Vtemp1278[8U] = 0U;
            __Vtemp1278[9U] = 0U;
            __Vtemp1278[0xaU] = 0U;
            __Vtemp1278[0xbU] = 0U;
            __Vtemp1278[0xcU] = 0U;
            __Vtemp1278[0xdU] = 0U;
            __Vtemp1278[0xeU] = 0U;
            __Vtemp1278[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1279, __Vtemp1278, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1279[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_163 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1280[0U] = 1U;
            __Vtemp1280[1U] = 0U;
            __Vtemp1280[2U] = 0U;
            __Vtemp1280[3U] = 0U;
            __Vtemp1280[4U] = 0U;
            __Vtemp1280[5U] = 0U;
            __Vtemp1280[6U] = 0U;
            __Vtemp1280[7U] = 0U;
            __Vtemp1280[8U] = 0U;
            __Vtemp1280[9U] = 0U;
            __Vtemp1280[0xaU] = 0U;
            __Vtemp1280[0xbU] = 0U;
            __Vtemp1280[0xcU] = 0U;
            __Vtemp1280[0xdU] = 0U;
            __Vtemp1280[0xeU] = 0U;
            __Vtemp1280[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1281, __Vtemp1280, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1281[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_162 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1282[0U] = 1U;
            __Vtemp1282[1U] = 0U;
            __Vtemp1282[2U] = 0U;
            __Vtemp1282[3U] = 0U;
            __Vtemp1282[4U] = 0U;
            __Vtemp1282[5U] = 0U;
            __Vtemp1282[6U] = 0U;
            __Vtemp1282[7U] = 0U;
            __Vtemp1282[8U] = 0U;
            __Vtemp1282[9U] = 0U;
            __Vtemp1282[0xaU] = 0U;
            __Vtemp1282[0xbU] = 0U;
            __Vtemp1282[0xcU] = 0U;
            __Vtemp1282[0xdU] = 0U;
            __Vtemp1282[0xeU] = 0U;
            __Vtemp1282[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1283, __Vtemp1282, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1283[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_161 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1284[0U] = 1U;
            __Vtemp1284[1U] = 0U;
            __Vtemp1284[2U] = 0U;
            __Vtemp1284[3U] = 0U;
            __Vtemp1284[4U] = 0U;
            __Vtemp1284[5U] = 0U;
            __Vtemp1284[6U] = 0U;
            __Vtemp1284[7U] = 0U;
            __Vtemp1284[8U] = 0U;
            __Vtemp1284[9U] = 0U;
            __Vtemp1284[0xaU] = 0U;
            __Vtemp1284[0xbU] = 0U;
            __Vtemp1284[0xcU] = 0U;
            __Vtemp1284[0xdU] = 0U;
            __Vtemp1284[0xeU] = 0U;
            __Vtemp1284[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1285, __Vtemp1284, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1285[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_160 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1286[0U] = 1U;
            __Vtemp1286[1U] = 0U;
            __Vtemp1286[2U] = 0U;
            __Vtemp1286[3U] = 0U;
            __Vtemp1286[4U] = 0U;
            __Vtemp1286[5U] = 0U;
            __Vtemp1286[6U] = 0U;
            __Vtemp1286[7U] = 0U;
            __Vtemp1286[8U] = 0U;
            __Vtemp1286[9U] = 0U;
            __Vtemp1286[0xaU] = 0U;
            __Vtemp1286[0xbU] = 0U;
            __Vtemp1286[0xcU] = 0U;
            __Vtemp1286[0xdU] = 0U;
            __Vtemp1286[0xeU] = 0U;
            __Vtemp1286[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1287, __Vtemp1286, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1287[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_159 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1288[0U] = 1U;
            __Vtemp1288[1U] = 0U;
            __Vtemp1288[2U] = 0U;
            __Vtemp1288[3U] = 0U;
            __Vtemp1288[4U] = 0U;
            __Vtemp1288[5U] = 0U;
            __Vtemp1288[6U] = 0U;
            __Vtemp1288[7U] = 0U;
            __Vtemp1288[8U] = 0U;
            __Vtemp1288[9U] = 0U;
            __Vtemp1288[0xaU] = 0U;
            __Vtemp1288[0xbU] = 0U;
            __Vtemp1288[0xcU] = 0U;
            __Vtemp1288[0xdU] = 0U;
            __Vtemp1288[0xeU] = 0U;
            __Vtemp1288[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1289, __Vtemp1288, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1289[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_158 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1290[0U] = 1U;
            __Vtemp1290[1U] = 0U;
            __Vtemp1290[2U] = 0U;
            __Vtemp1290[3U] = 0U;
            __Vtemp1290[4U] = 0U;
            __Vtemp1290[5U] = 0U;
            __Vtemp1290[6U] = 0U;
            __Vtemp1290[7U] = 0U;
            __Vtemp1290[8U] = 0U;
            __Vtemp1290[9U] = 0U;
            __Vtemp1290[0xaU] = 0U;
            __Vtemp1290[0xbU] = 0U;
            __Vtemp1290[0xcU] = 0U;
            __Vtemp1290[0xdU] = 0U;
            __Vtemp1290[0xeU] = 0U;
            __Vtemp1290[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1291, __Vtemp1290, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1291[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_157 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
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
}
