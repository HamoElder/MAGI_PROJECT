// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VLoopBackTest.h for the primary calling header

#include "VLoopBackTest.h"
#include "VLoopBackTest__Syms.h"

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__60(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__60\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1169[16];
    WData/*511:0*/ __Vtemp1170[16];
    WData/*511:0*/ __Vtemp1171[16];
    WData/*511:0*/ __Vtemp1172[16];
    WData/*511:0*/ __Vtemp1173[16];
    WData/*511:0*/ __Vtemp1174[16];
    WData/*511:0*/ __Vtemp1175[16];
    WData/*511:0*/ __Vtemp1176[16];
    WData/*511:0*/ __Vtemp1177[16];
    WData/*511:0*/ __Vtemp1178[16];
    WData/*511:0*/ __Vtemp1179[16];
    WData/*511:0*/ __Vtemp1180[16];
    WData/*511:0*/ __Vtemp1181[16];
    WData/*511:0*/ __Vtemp1182[16];
    WData/*511:0*/ __Vtemp1183[16];
    WData/*511:0*/ __Vtemp1184[16];
    WData/*511:0*/ __Vtemp1185[16];
    WData/*511:0*/ __Vtemp1186[16];
    WData/*511:0*/ __Vtemp1187[16];
    WData/*511:0*/ __Vtemp1188[16];
    WData/*511:0*/ __Vtemp1189[16];
    WData/*511:0*/ __Vtemp1190[16];
    WData/*511:0*/ __Vtemp1191[16];
    WData/*511:0*/ __Vtemp1192[16];
    WData/*511:0*/ __Vtemp1193[16];
    WData/*511:0*/ __Vtemp1194[16];
    WData/*511:0*/ __Vtemp1195[16];
    WData/*511:0*/ __Vtemp1196[16];
    WData/*511:0*/ __Vtemp1197[16];
    WData/*511:0*/ __Vtemp1198[16];
    WData/*511:0*/ __Vtemp1199[16];
    WData/*511:0*/ __Vtemp1200[16];
    WData/*511:0*/ __Vtemp1201[16];
    WData/*511:0*/ __Vtemp1202[16];
    WData/*511:0*/ __Vtemp1203[16];
    WData/*511:0*/ __Vtemp1204[16];
    WData/*511:0*/ __Vtemp1205[16];
    WData/*511:0*/ __Vtemp1206[16];
    WData/*511:0*/ __Vtemp1207[16];
    WData/*511:0*/ __Vtemp1208[16];
    WData/*511:0*/ __Vtemp1209[16];
    WData/*511:0*/ __Vtemp1210[16];
    WData/*511:0*/ __Vtemp1211[16];
    WData/*511:0*/ __Vtemp1212[16];
    WData/*511:0*/ __Vtemp1213[16];
    WData/*511:0*/ __Vtemp1214[16];
    WData/*511:0*/ __Vtemp1215[16];
    WData/*511:0*/ __Vtemp1216[16];
    WData/*511:0*/ __Vtemp1217[16];
    WData/*511:0*/ __Vtemp1218[16];
    WData/*511:0*/ __Vtemp1219[16];
    WData/*511:0*/ __Vtemp1220[16];
    WData/*511:0*/ __Vtemp1221[16];
    WData/*511:0*/ __Vtemp1222[16];
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1169[0U] = 1U;
            __Vtemp1169[1U] = 0U;
            __Vtemp1169[2U] = 0U;
            __Vtemp1169[3U] = 0U;
            __Vtemp1169[4U] = 0U;
            __Vtemp1169[5U] = 0U;
            __Vtemp1169[6U] = 0U;
            __Vtemp1169[7U] = 0U;
            __Vtemp1169[8U] = 0U;
            __Vtemp1169[9U] = 0U;
            __Vtemp1169[0xaU] = 0U;
            __Vtemp1169[0xbU] = 0U;
            __Vtemp1169[0xcU] = 0U;
            __Vtemp1169[0xdU] = 0U;
            __Vtemp1169[0xeU] = 0U;
            __Vtemp1169[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1170, __Vtemp1169, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1170[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_222 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1171[0U] = 1U;
            __Vtemp1171[1U] = 0U;
            __Vtemp1171[2U] = 0U;
            __Vtemp1171[3U] = 0U;
            __Vtemp1171[4U] = 0U;
            __Vtemp1171[5U] = 0U;
            __Vtemp1171[6U] = 0U;
            __Vtemp1171[7U] = 0U;
            __Vtemp1171[8U] = 0U;
            __Vtemp1171[9U] = 0U;
            __Vtemp1171[0xaU] = 0U;
            __Vtemp1171[0xbU] = 0U;
            __Vtemp1171[0xcU] = 0U;
            __Vtemp1171[0xdU] = 0U;
            __Vtemp1171[0xeU] = 0U;
            __Vtemp1171[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1172, __Vtemp1171, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1172[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_221 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1173[0U] = 1U;
            __Vtemp1173[1U] = 0U;
            __Vtemp1173[2U] = 0U;
            __Vtemp1173[3U] = 0U;
            __Vtemp1173[4U] = 0U;
            __Vtemp1173[5U] = 0U;
            __Vtemp1173[6U] = 0U;
            __Vtemp1173[7U] = 0U;
            __Vtemp1173[8U] = 0U;
            __Vtemp1173[9U] = 0U;
            __Vtemp1173[0xaU] = 0U;
            __Vtemp1173[0xbU] = 0U;
            __Vtemp1173[0xcU] = 0U;
            __Vtemp1173[0xdU] = 0U;
            __Vtemp1173[0xeU] = 0U;
            __Vtemp1173[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1174, __Vtemp1173, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1174[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_220 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1175[0U] = 1U;
            __Vtemp1175[1U] = 0U;
            __Vtemp1175[2U] = 0U;
            __Vtemp1175[3U] = 0U;
            __Vtemp1175[4U] = 0U;
            __Vtemp1175[5U] = 0U;
            __Vtemp1175[6U] = 0U;
            __Vtemp1175[7U] = 0U;
            __Vtemp1175[8U] = 0U;
            __Vtemp1175[9U] = 0U;
            __Vtemp1175[0xaU] = 0U;
            __Vtemp1175[0xbU] = 0U;
            __Vtemp1175[0xcU] = 0U;
            __Vtemp1175[0xdU] = 0U;
            __Vtemp1175[0xeU] = 0U;
            __Vtemp1175[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1176, __Vtemp1175, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1176[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_219 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1177[0U] = 1U;
            __Vtemp1177[1U] = 0U;
            __Vtemp1177[2U] = 0U;
            __Vtemp1177[3U] = 0U;
            __Vtemp1177[4U] = 0U;
            __Vtemp1177[5U] = 0U;
            __Vtemp1177[6U] = 0U;
            __Vtemp1177[7U] = 0U;
            __Vtemp1177[8U] = 0U;
            __Vtemp1177[9U] = 0U;
            __Vtemp1177[0xaU] = 0U;
            __Vtemp1177[0xbU] = 0U;
            __Vtemp1177[0xcU] = 0U;
            __Vtemp1177[0xdU] = 0U;
            __Vtemp1177[0xeU] = 0U;
            __Vtemp1177[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1178, __Vtemp1177, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1178[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_218 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1179[0U] = 1U;
            __Vtemp1179[1U] = 0U;
            __Vtemp1179[2U] = 0U;
            __Vtemp1179[3U] = 0U;
            __Vtemp1179[4U] = 0U;
            __Vtemp1179[5U] = 0U;
            __Vtemp1179[6U] = 0U;
            __Vtemp1179[7U] = 0U;
            __Vtemp1179[8U] = 0U;
            __Vtemp1179[9U] = 0U;
            __Vtemp1179[0xaU] = 0U;
            __Vtemp1179[0xbU] = 0U;
            __Vtemp1179[0xcU] = 0U;
            __Vtemp1179[0xdU] = 0U;
            __Vtemp1179[0xeU] = 0U;
            __Vtemp1179[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1180, __Vtemp1179, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1180[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_217 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1181[0U] = 1U;
            __Vtemp1181[1U] = 0U;
            __Vtemp1181[2U] = 0U;
            __Vtemp1181[3U] = 0U;
            __Vtemp1181[4U] = 0U;
            __Vtemp1181[5U] = 0U;
            __Vtemp1181[6U] = 0U;
            __Vtemp1181[7U] = 0U;
            __Vtemp1181[8U] = 0U;
            __Vtemp1181[9U] = 0U;
            __Vtemp1181[0xaU] = 0U;
            __Vtemp1181[0xbU] = 0U;
            __Vtemp1181[0xcU] = 0U;
            __Vtemp1181[0xdU] = 0U;
            __Vtemp1181[0xeU] = 0U;
            __Vtemp1181[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1182, __Vtemp1181, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1182[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_216 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1183[0U] = 1U;
            __Vtemp1183[1U] = 0U;
            __Vtemp1183[2U] = 0U;
            __Vtemp1183[3U] = 0U;
            __Vtemp1183[4U] = 0U;
            __Vtemp1183[5U] = 0U;
            __Vtemp1183[6U] = 0U;
            __Vtemp1183[7U] = 0U;
            __Vtemp1183[8U] = 0U;
            __Vtemp1183[9U] = 0U;
            __Vtemp1183[0xaU] = 0U;
            __Vtemp1183[0xbU] = 0U;
            __Vtemp1183[0xcU] = 0U;
            __Vtemp1183[0xdU] = 0U;
            __Vtemp1183[0xeU] = 0U;
            __Vtemp1183[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1184, __Vtemp1183, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1184[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_215 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1185[0U] = 1U;
            __Vtemp1185[1U] = 0U;
            __Vtemp1185[2U] = 0U;
            __Vtemp1185[3U] = 0U;
            __Vtemp1185[4U] = 0U;
            __Vtemp1185[5U] = 0U;
            __Vtemp1185[6U] = 0U;
            __Vtemp1185[7U] = 0U;
            __Vtemp1185[8U] = 0U;
            __Vtemp1185[9U] = 0U;
            __Vtemp1185[0xaU] = 0U;
            __Vtemp1185[0xbU] = 0U;
            __Vtemp1185[0xcU] = 0U;
            __Vtemp1185[0xdU] = 0U;
            __Vtemp1185[0xeU] = 0U;
            __Vtemp1185[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1186, __Vtemp1185, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1186[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_214 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1187[0U] = 1U;
            __Vtemp1187[1U] = 0U;
            __Vtemp1187[2U] = 0U;
            __Vtemp1187[3U] = 0U;
            __Vtemp1187[4U] = 0U;
            __Vtemp1187[5U] = 0U;
            __Vtemp1187[6U] = 0U;
            __Vtemp1187[7U] = 0U;
            __Vtemp1187[8U] = 0U;
            __Vtemp1187[9U] = 0U;
            __Vtemp1187[0xaU] = 0U;
            __Vtemp1187[0xbU] = 0U;
            __Vtemp1187[0xcU] = 0U;
            __Vtemp1187[0xdU] = 0U;
            __Vtemp1187[0xeU] = 0U;
            __Vtemp1187[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1188, __Vtemp1187, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1188[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_213 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1189[0U] = 1U;
            __Vtemp1189[1U] = 0U;
            __Vtemp1189[2U] = 0U;
            __Vtemp1189[3U] = 0U;
            __Vtemp1189[4U] = 0U;
            __Vtemp1189[5U] = 0U;
            __Vtemp1189[6U] = 0U;
            __Vtemp1189[7U] = 0U;
            __Vtemp1189[8U] = 0U;
            __Vtemp1189[9U] = 0U;
            __Vtemp1189[0xaU] = 0U;
            __Vtemp1189[0xbU] = 0U;
            __Vtemp1189[0xcU] = 0U;
            __Vtemp1189[0xdU] = 0U;
            __Vtemp1189[0xeU] = 0U;
            __Vtemp1189[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1190, __Vtemp1189, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1190[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_212 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1191[0U] = 1U;
            __Vtemp1191[1U] = 0U;
            __Vtemp1191[2U] = 0U;
            __Vtemp1191[3U] = 0U;
            __Vtemp1191[4U] = 0U;
            __Vtemp1191[5U] = 0U;
            __Vtemp1191[6U] = 0U;
            __Vtemp1191[7U] = 0U;
            __Vtemp1191[8U] = 0U;
            __Vtemp1191[9U] = 0U;
            __Vtemp1191[0xaU] = 0U;
            __Vtemp1191[0xbU] = 0U;
            __Vtemp1191[0xcU] = 0U;
            __Vtemp1191[0xdU] = 0U;
            __Vtemp1191[0xeU] = 0U;
            __Vtemp1191[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1192, __Vtemp1191, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1192[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_211 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1193[0U] = 1U;
            __Vtemp1193[1U] = 0U;
            __Vtemp1193[2U] = 0U;
            __Vtemp1193[3U] = 0U;
            __Vtemp1193[4U] = 0U;
            __Vtemp1193[5U] = 0U;
            __Vtemp1193[6U] = 0U;
            __Vtemp1193[7U] = 0U;
            __Vtemp1193[8U] = 0U;
            __Vtemp1193[9U] = 0U;
            __Vtemp1193[0xaU] = 0U;
            __Vtemp1193[0xbU] = 0U;
            __Vtemp1193[0xcU] = 0U;
            __Vtemp1193[0xdU] = 0U;
            __Vtemp1193[0xeU] = 0U;
            __Vtemp1193[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1194, __Vtemp1193, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1194[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_210 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1195[0U] = 1U;
            __Vtemp1195[1U] = 0U;
            __Vtemp1195[2U] = 0U;
            __Vtemp1195[3U] = 0U;
            __Vtemp1195[4U] = 0U;
            __Vtemp1195[5U] = 0U;
            __Vtemp1195[6U] = 0U;
            __Vtemp1195[7U] = 0U;
            __Vtemp1195[8U] = 0U;
            __Vtemp1195[9U] = 0U;
            __Vtemp1195[0xaU] = 0U;
            __Vtemp1195[0xbU] = 0U;
            __Vtemp1195[0xcU] = 0U;
            __Vtemp1195[0xdU] = 0U;
            __Vtemp1195[0xeU] = 0U;
            __Vtemp1195[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1196, __Vtemp1195, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1196[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_209 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1197[0U] = 1U;
            __Vtemp1197[1U] = 0U;
            __Vtemp1197[2U] = 0U;
            __Vtemp1197[3U] = 0U;
            __Vtemp1197[4U] = 0U;
            __Vtemp1197[5U] = 0U;
            __Vtemp1197[6U] = 0U;
            __Vtemp1197[7U] = 0U;
            __Vtemp1197[8U] = 0U;
            __Vtemp1197[9U] = 0U;
            __Vtemp1197[0xaU] = 0U;
            __Vtemp1197[0xbU] = 0U;
            __Vtemp1197[0xcU] = 0U;
            __Vtemp1197[0xdU] = 0U;
            __Vtemp1197[0xeU] = 0U;
            __Vtemp1197[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1198, __Vtemp1197, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1198[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_208 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1199[0U] = 1U;
            __Vtemp1199[1U] = 0U;
            __Vtemp1199[2U] = 0U;
            __Vtemp1199[3U] = 0U;
            __Vtemp1199[4U] = 0U;
            __Vtemp1199[5U] = 0U;
            __Vtemp1199[6U] = 0U;
            __Vtemp1199[7U] = 0U;
            __Vtemp1199[8U] = 0U;
            __Vtemp1199[9U] = 0U;
            __Vtemp1199[0xaU] = 0U;
            __Vtemp1199[0xbU] = 0U;
            __Vtemp1199[0xcU] = 0U;
            __Vtemp1199[0xdU] = 0U;
            __Vtemp1199[0xeU] = 0U;
            __Vtemp1199[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1200, __Vtemp1199, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1200[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_207 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1201[0U] = 1U;
            __Vtemp1201[1U] = 0U;
            __Vtemp1201[2U] = 0U;
            __Vtemp1201[3U] = 0U;
            __Vtemp1201[4U] = 0U;
            __Vtemp1201[5U] = 0U;
            __Vtemp1201[6U] = 0U;
            __Vtemp1201[7U] = 0U;
            __Vtemp1201[8U] = 0U;
            __Vtemp1201[9U] = 0U;
            __Vtemp1201[0xaU] = 0U;
            __Vtemp1201[0xbU] = 0U;
            __Vtemp1201[0xcU] = 0U;
            __Vtemp1201[0xdU] = 0U;
            __Vtemp1201[0xeU] = 0U;
            __Vtemp1201[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1202, __Vtemp1201, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1202[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_206 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1203[0U] = 1U;
            __Vtemp1203[1U] = 0U;
            __Vtemp1203[2U] = 0U;
            __Vtemp1203[3U] = 0U;
            __Vtemp1203[4U] = 0U;
            __Vtemp1203[5U] = 0U;
            __Vtemp1203[6U] = 0U;
            __Vtemp1203[7U] = 0U;
            __Vtemp1203[8U] = 0U;
            __Vtemp1203[9U] = 0U;
            __Vtemp1203[0xaU] = 0U;
            __Vtemp1203[0xbU] = 0U;
            __Vtemp1203[0xcU] = 0U;
            __Vtemp1203[0xdU] = 0U;
            __Vtemp1203[0xeU] = 0U;
            __Vtemp1203[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1204, __Vtemp1203, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1204[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_205 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1205[0U] = 1U;
            __Vtemp1205[1U] = 0U;
            __Vtemp1205[2U] = 0U;
            __Vtemp1205[3U] = 0U;
            __Vtemp1205[4U] = 0U;
            __Vtemp1205[5U] = 0U;
            __Vtemp1205[6U] = 0U;
            __Vtemp1205[7U] = 0U;
            __Vtemp1205[8U] = 0U;
            __Vtemp1205[9U] = 0U;
            __Vtemp1205[0xaU] = 0U;
            __Vtemp1205[0xbU] = 0U;
            __Vtemp1205[0xcU] = 0U;
            __Vtemp1205[0xdU] = 0U;
            __Vtemp1205[0xeU] = 0U;
            __Vtemp1205[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1206, __Vtemp1205, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1206[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_204 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1207[0U] = 1U;
            __Vtemp1207[1U] = 0U;
            __Vtemp1207[2U] = 0U;
            __Vtemp1207[3U] = 0U;
            __Vtemp1207[4U] = 0U;
            __Vtemp1207[5U] = 0U;
            __Vtemp1207[6U] = 0U;
            __Vtemp1207[7U] = 0U;
            __Vtemp1207[8U] = 0U;
            __Vtemp1207[9U] = 0U;
            __Vtemp1207[0xaU] = 0U;
            __Vtemp1207[0xbU] = 0U;
            __Vtemp1207[0xcU] = 0U;
            __Vtemp1207[0xdU] = 0U;
            __Vtemp1207[0xeU] = 0U;
            __Vtemp1207[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1208, __Vtemp1207, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1208[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_203 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1209[0U] = 1U;
            __Vtemp1209[1U] = 0U;
            __Vtemp1209[2U] = 0U;
            __Vtemp1209[3U] = 0U;
            __Vtemp1209[4U] = 0U;
            __Vtemp1209[5U] = 0U;
            __Vtemp1209[6U] = 0U;
            __Vtemp1209[7U] = 0U;
            __Vtemp1209[8U] = 0U;
            __Vtemp1209[9U] = 0U;
            __Vtemp1209[0xaU] = 0U;
            __Vtemp1209[0xbU] = 0U;
            __Vtemp1209[0xcU] = 0U;
            __Vtemp1209[0xdU] = 0U;
            __Vtemp1209[0xeU] = 0U;
            __Vtemp1209[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1210, __Vtemp1209, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1210[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_202 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1211[0U] = 1U;
            __Vtemp1211[1U] = 0U;
            __Vtemp1211[2U] = 0U;
            __Vtemp1211[3U] = 0U;
            __Vtemp1211[4U] = 0U;
            __Vtemp1211[5U] = 0U;
            __Vtemp1211[6U] = 0U;
            __Vtemp1211[7U] = 0U;
            __Vtemp1211[8U] = 0U;
            __Vtemp1211[9U] = 0U;
            __Vtemp1211[0xaU] = 0U;
            __Vtemp1211[0xbU] = 0U;
            __Vtemp1211[0xcU] = 0U;
            __Vtemp1211[0xdU] = 0U;
            __Vtemp1211[0xeU] = 0U;
            __Vtemp1211[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1212, __Vtemp1211, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1212[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_201 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1213[0U] = 1U;
            __Vtemp1213[1U] = 0U;
            __Vtemp1213[2U] = 0U;
            __Vtemp1213[3U] = 0U;
            __Vtemp1213[4U] = 0U;
            __Vtemp1213[5U] = 0U;
            __Vtemp1213[6U] = 0U;
            __Vtemp1213[7U] = 0U;
            __Vtemp1213[8U] = 0U;
            __Vtemp1213[9U] = 0U;
            __Vtemp1213[0xaU] = 0U;
            __Vtemp1213[0xbU] = 0U;
            __Vtemp1213[0xcU] = 0U;
            __Vtemp1213[0xdU] = 0U;
            __Vtemp1213[0xeU] = 0U;
            __Vtemp1213[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1214, __Vtemp1213, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1214[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_200 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1215[0U] = 1U;
            __Vtemp1215[1U] = 0U;
            __Vtemp1215[2U] = 0U;
            __Vtemp1215[3U] = 0U;
            __Vtemp1215[4U] = 0U;
            __Vtemp1215[5U] = 0U;
            __Vtemp1215[6U] = 0U;
            __Vtemp1215[7U] = 0U;
            __Vtemp1215[8U] = 0U;
            __Vtemp1215[9U] = 0U;
            __Vtemp1215[0xaU] = 0U;
            __Vtemp1215[0xbU] = 0U;
            __Vtemp1215[0xcU] = 0U;
            __Vtemp1215[0xdU] = 0U;
            __Vtemp1215[0xeU] = 0U;
            __Vtemp1215[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1216, __Vtemp1215, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1216[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_199 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1217[0U] = 1U;
            __Vtemp1217[1U] = 0U;
            __Vtemp1217[2U] = 0U;
            __Vtemp1217[3U] = 0U;
            __Vtemp1217[4U] = 0U;
            __Vtemp1217[5U] = 0U;
            __Vtemp1217[6U] = 0U;
            __Vtemp1217[7U] = 0U;
            __Vtemp1217[8U] = 0U;
            __Vtemp1217[9U] = 0U;
            __Vtemp1217[0xaU] = 0U;
            __Vtemp1217[0xbU] = 0U;
            __Vtemp1217[0xcU] = 0U;
            __Vtemp1217[0xdU] = 0U;
            __Vtemp1217[0xeU] = 0U;
            __Vtemp1217[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1218, __Vtemp1217, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1218[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_198 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1219[0U] = 1U;
            __Vtemp1219[1U] = 0U;
            __Vtemp1219[2U] = 0U;
            __Vtemp1219[3U] = 0U;
            __Vtemp1219[4U] = 0U;
            __Vtemp1219[5U] = 0U;
            __Vtemp1219[6U] = 0U;
            __Vtemp1219[7U] = 0U;
            __Vtemp1219[8U] = 0U;
            __Vtemp1219[9U] = 0U;
            __Vtemp1219[0xaU] = 0U;
            __Vtemp1219[0xbU] = 0U;
            __Vtemp1219[0xcU] = 0U;
            __Vtemp1219[0xdU] = 0U;
            __Vtemp1219[0xeU] = 0U;
            __Vtemp1219[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1220, __Vtemp1219, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1220[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_197 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1221[0U] = 1U;
            __Vtemp1221[1U] = 0U;
            __Vtemp1221[2U] = 0U;
            __Vtemp1221[3U] = 0U;
            __Vtemp1221[4U] = 0U;
            __Vtemp1221[5U] = 0U;
            __Vtemp1221[6U] = 0U;
            __Vtemp1221[7U] = 0U;
            __Vtemp1221[8U] = 0U;
            __Vtemp1221[9U] = 0U;
            __Vtemp1221[0xaU] = 0U;
            __Vtemp1221[0xbU] = 0U;
            __Vtemp1221[0xcU] = 0U;
            __Vtemp1221[0xdU] = 0U;
            __Vtemp1221[0xeU] = 0U;
            __Vtemp1221[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1222, __Vtemp1221, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1222[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_196 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VLoopBackTest::_sequent__TOP__61(VLoopBackTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VLoopBackTest::_sequent__TOP__61\n"); );
    VLoopBackTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp1223[16];
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
    // Body
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1223[0U] = 1U;
            __Vtemp1223[1U] = 0U;
            __Vtemp1223[2U] = 0U;
            __Vtemp1223[3U] = 0U;
            __Vtemp1223[4U] = 0U;
            __Vtemp1223[5U] = 0U;
            __Vtemp1223[6U] = 0U;
            __Vtemp1223[7U] = 0U;
            __Vtemp1223[8U] = 0U;
            __Vtemp1223[9U] = 0U;
            __Vtemp1223[0xaU] = 0U;
            __Vtemp1223[0xbU] = 0U;
            __Vtemp1223[0xcU] = 0U;
            __Vtemp1223[0xdU] = 0U;
            __Vtemp1223[0xeU] = 0U;
            __Vtemp1223[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1224, __Vtemp1223, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1224[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_195 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1225[0U] = 1U;
            __Vtemp1225[1U] = 0U;
            __Vtemp1225[2U] = 0U;
            __Vtemp1225[3U] = 0U;
            __Vtemp1225[4U] = 0U;
            __Vtemp1225[5U] = 0U;
            __Vtemp1225[6U] = 0U;
            __Vtemp1225[7U] = 0U;
            __Vtemp1225[8U] = 0U;
            __Vtemp1225[9U] = 0U;
            __Vtemp1225[0xaU] = 0U;
            __Vtemp1225[0xbU] = 0U;
            __Vtemp1225[0xcU] = 0U;
            __Vtemp1225[0xdU] = 0U;
            __Vtemp1225[0xeU] = 0U;
            __Vtemp1225[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1226, __Vtemp1225, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1226[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_194 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1227[0U] = 1U;
            __Vtemp1227[1U] = 0U;
            __Vtemp1227[2U] = 0U;
            __Vtemp1227[3U] = 0U;
            __Vtemp1227[4U] = 0U;
            __Vtemp1227[5U] = 0U;
            __Vtemp1227[6U] = 0U;
            __Vtemp1227[7U] = 0U;
            __Vtemp1227[8U] = 0U;
            __Vtemp1227[9U] = 0U;
            __Vtemp1227[0xaU] = 0U;
            __Vtemp1227[0xbU] = 0U;
            __Vtemp1227[0xcU] = 0U;
            __Vtemp1227[0xdU] = 0U;
            __Vtemp1227[0xeU] = 0U;
            __Vtemp1227[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1228, __Vtemp1227, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1228[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_193 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1229[0U] = 1U;
            __Vtemp1229[1U] = 0U;
            __Vtemp1229[2U] = 0U;
            __Vtemp1229[3U] = 0U;
            __Vtemp1229[4U] = 0U;
            __Vtemp1229[5U] = 0U;
            __Vtemp1229[6U] = 0U;
            __Vtemp1229[7U] = 0U;
            __Vtemp1229[8U] = 0U;
            __Vtemp1229[9U] = 0U;
            __Vtemp1229[0xaU] = 0U;
            __Vtemp1229[0xbU] = 0U;
            __Vtemp1229[0xcU] = 0U;
            __Vtemp1229[0xdU] = 0U;
            __Vtemp1229[0xeU] = 0U;
            __Vtemp1229[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1230, __Vtemp1229, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((1U & __Vtemp1230[6U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_192 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1231[0U] = 1U;
            __Vtemp1231[1U] = 0U;
            __Vtemp1231[2U] = 0U;
            __Vtemp1231[3U] = 0U;
            __Vtemp1231[4U] = 0U;
            __Vtemp1231[5U] = 0U;
            __Vtemp1231[6U] = 0U;
            __Vtemp1231[7U] = 0U;
            __Vtemp1231[8U] = 0U;
            __Vtemp1231[9U] = 0U;
            __Vtemp1231[0xaU] = 0U;
            __Vtemp1231[0xbU] = 0U;
            __Vtemp1231[0xcU] = 0U;
            __Vtemp1231[0xdU] = 0U;
            __Vtemp1231[0xeU] = 0U;
            __Vtemp1231[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1232, __Vtemp1231, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp1232[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_191 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1233[0U] = 1U;
            __Vtemp1233[1U] = 0U;
            __Vtemp1233[2U] = 0U;
            __Vtemp1233[3U] = 0U;
            __Vtemp1233[4U] = 0U;
            __Vtemp1233[5U] = 0U;
            __Vtemp1233[6U] = 0U;
            __Vtemp1233[7U] = 0U;
            __Vtemp1233[8U] = 0U;
            __Vtemp1233[9U] = 0U;
            __Vtemp1233[0xaU] = 0U;
            __Vtemp1233[0xbU] = 0U;
            __Vtemp1233[0xcU] = 0U;
            __Vtemp1233[0xdU] = 0U;
            __Vtemp1233[0xeU] = 0U;
            __Vtemp1233[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1234, __Vtemp1233, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp1234[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_190 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1235[0U] = 1U;
            __Vtemp1235[1U] = 0U;
            __Vtemp1235[2U] = 0U;
            __Vtemp1235[3U] = 0U;
            __Vtemp1235[4U] = 0U;
            __Vtemp1235[5U] = 0U;
            __Vtemp1235[6U] = 0U;
            __Vtemp1235[7U] = 0U;
            __Vtemp1235[8U] = 0U;
            __Vtemp1235[9U] = 0U;
            __Vtemp1235[0xaU] = 0U;
            __Vtemp1235[0xbU] = 0U;
            __Vtemp1235[0xcU] = 0U;
            __Vtemp1235[0xdU] = 0U;
            __Vtemp1235[0xeU] = 0U;
            __Vtemp1235[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1236, __Vtemp1235, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp1236[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_189 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1237[0U] = 1U;
            __Vtemp1237[1U] = 0U;
            __Vtemp1237[2U] = 0U;
            __Vtemp1237[3U] = 0U;
            __Vtemp1237[4U] = 0U;
            __Vtemp1237[5U] = 0U;
            __Vtemp1237[6U] = 0U;
            __Vtemp1237[7U] = 0U;
            __Vtemp1237[8U] = 0U;
            __Vtemp1237[9U] = 0U;
            __Vtemp1237[0xaU] = 0U;
            __Vtemp1237[0xbU] = 0U;
            __Vtemp1237[0xcU] = 0U;
            __Vtemp1237[0xdU] = 0U;
            __Vtemp1237[0xeU] = 0U;
            __Vtemp1237[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1238, __Vtemp1237, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp1238[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_188 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1239[0U] = 1U;
            __Vtemp1239[1U] = 0U;
            __Vtemp1239[2U] = 0U;
            __Vtemp1239[3U] = 0U;
            __Vtemp1239[4U] = 0U;
            __Vtemp1239[5U] = 0U;
            __Vtemp1239[6U] = 0U;
            __Vtemp1239[7U] = 0U;
            __Vtemp1239[8U] = 0U;
            __Vtemp1239[9U] = 0U;
            __Vtemp1239[0xaU] = 0U;
            __Vtemp1239[0xbU] = 0U;
            __Vtemp1239[0xcU] = 0U;
            __Vtemp1239[0xdU] = 0U;
            __Vtemp1239[0xeU] = 0U;
            __Vtemp1239[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1240, __Vtemp1239, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp1240[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_187 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1241[0U] = 1U;
            __Vtemp1241[1U] = 0U;
            __Vtemp1241[2U] = 0U;
            __Vtemp1241[3U] = 0U;
            __Vtemp1241[4U] = 0U;
            __Vtemp1241[5U] = 0U;
            __Vtemp1241[6U] = 0U;
            __Vtemp1241[7U] = 0U;
            __Vtemp1241[8U] = 0U;
            __Vtemp1241[9U] = 0U;
            __Vtemp1241[0xaU] = 0U;
            __Vtemp1241[0xbU] = 0U;
            __Vtemp1241[0xcU] = 0U;
            __Vtemp1241[0xdU] = 0U;
            __Vtemp1241[0xeU] = 0U;
            __Vtemp1241[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1242, __Vtemp1241, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp1242[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_186 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1243[0U] = 1U;
            __Vtemp1243[1U] = 0U;
            __Vtemp1243[2U] = 0U;
            __Vtemp1243[3U] = 0U;
            __Vtemp1243[4U] = 0U;
            __Vtemp1243[5U] = 0U;
            __Vtemp1243[6U] = 0U;
            __Vtemp1243[7U] = 0U;
            __Vtemp1243[8U] = 0U;
            __Vtemp1243[9U] = 0U;
            __Vtemp1243[0xaU] = 0U;
            __Vtemp1243[0xbU] = 0U;
            __Vtemp1243[0xcU] = 0U;
            __Vtemp1243[0xdU] = 0U;
            __Vtemp1243[0xeU] = 0U;
            __Vtemp1243[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1244, __Vtemp1243, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp1244[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_185 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1245[0U] = 1U;
            __Vtemp1245[1U] = 0U;
            __Vtemp1245[2U] = 0U;
            __Vtemp1245[3U] = 0U;
            __Vtemp1245[4U] = 0U;
            __Vtemp1245[5U] = 0U;
            __Vtemp1245[6U] = 0U;
            __Vtemp1245[7U] = 0U;
            __Vtemp1245[8U] = 0U;
            __Vtemp1245[9U] = 0U;
            __Vtemp1245[0xaU] = 0U;
            __Vtemp1245[0xbU] = 0U;
            __Vtemp1245[0xcU] = 0U;
            __Vtemp1245[0xdU] = 0U;
            __Vtemp1245[0xeU] = 0U;
            __Vtemp1245[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1246, __Vtemp1245, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp1246[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_184 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1247[0U] = 1U;
            __Vtemp1247[1U] = 0U;
            __Vtemp1247[2U] = 0U;
            __Vtemp1247[3U] = 0U;
            __Vtemp1247[4U] = 0U;
            __Vtemp1247[5U] = 0U;
            __Vtemp1247[6U] = 0U;
            __Vtemp1247[7U] = 0U;
            __Vtemp1247[8U] = 0U;
            __Vtemp1247[9U] = 0U;
            __Vtemp1247[0xaU] = 0U;
            __Vtemp1247[0xbU] = 0U;
            __Vtemp1247[0xcU] = 0U;
            __Vtemp1247[0xdU] = 0U;
            __Vtemp1247[0xeU] = 0U;
            __Vtemp1247[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1248, __Vtemp1247, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp1248[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_183 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1249[0U] = 1U;
            __Vtemp1249[1U] = 0U;
            __Vtemp1249[2U] = 0U;
            __Vtemp1249[3U] = 0U;
            __Vtemp1249[4U] = 0U;
            __Vtemp1249[5U] = 0U;
            __Vtemp1249[6U] = 0U;
            __Vtemp1249[7U] = 0U;
            __Vtemp1249[8U] = 0U;
            __Vtemp1249[9U] = 0U;
            __Vtemp1249[0xaU] = 0U;
            __Vtemp1249[0xbU] = 0U;
            __Vtemp1249[0xcU] = 0U;
            __Vtemp1249[0xdU] = 0U;
            __Vtemp1249[0xeU] = 0U;
            __Vtemp1249[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1250, __Vtemp1249, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp1250[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_182 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1251[0U] = 1U;
            __Vtemp1251[1U] = 0U;
            __Vtemp1251[2U] = 0U;
            __Vtemp1251[3U] = 0U;
            __Vtemp1251[4U] = 0U;
            __Vtemp1251[5U] = 0U;
            __Vtemp1251[6U] = 0U;
            __Vtemp1251[7U] = 0U;
            __Vtemp1251[8U] = 0U;
            __Vtemp1251[9U] = 0U;
            __Vtemp1251[0xaU] = 0U;
            __Vtemp1251[0xbU] = 0U;
            __Vtemp1251[0xcU] = 0U;
            __Vtemp1251[0xdU] = 0U;
            __Vtemp1251[0xeU] = 0U;
            __Vtemp1251[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1252, __Vtemp1251, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp1252[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_181 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1253[0U] = 1U;
            __Vtemp1253[1U] = 0U;
            __Vtemp1253[2U] = 0U;
            __Vtemp1253[3U] = 0U;
            __Vtemp1253[4U] = 0U;
            __Vtemp1253[5U] = 0U;
            __Vtemp1253[6U] = 0U;
            __Vtemp1253[7U] = 0U;
            __Vtemp1253[8U] = 0U;
            __Vtemp1253[9U] = 0U;
            __Vtemp1253[0xaU] = 0U;
            __Vtemp1253[0xbU] = 0U;
            __Vtemp1253[0xcU] = 0U;
            __Vtemp1253[0xdU] = 0U;
            __Vtemp1253[0xeU] = 0U;
            __Vtemp1253[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1254, __Vtemp1253, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1254[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_180 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1255[0U] = 1U;
            __Vtemp1255[1U] = 0U;
            __Vtemp1255[2U] = 0U;
            __Vtemp1255[3U] = 0U;
            __Vtemp1255[4U] = 0U;
            __Vtemp1255[5U] = 0U;
            __Vtemp1255[6U] = 0U;
            __Vtemp1255[7U] = 0U;
            __Vtemp1255[8U] = 0U;
            __Vtemp1255[9U] = 0U;
            __Vtemp1255[0xaU] = 0U;
            __Vtemp1255[0xbU] = 0U;
            __Vtemp1255[0xcU] = 0U;
            __Vtemp1255[0xdU] = 0U;
            __Vtemp1255[0xeU] = 0U;
            __Vtemp1255[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1256, __Vtemp1255, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1256[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_179 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1257[0U] = 1U;
            __Vtemp1257[1U] = 0U;
            __Vtemp1257[2U] = 0U;
            __Vtemp1257[3U] = 0U;
            __Vtemp1257[4U] = 0U;
            __Vtemp1257[5U] = 0U;
            __Vtemp1257[6U] = 0U;
            __Vtemp1257[7U] = 0U;
            __Vtemp1257[8U] = 0U;
            __Vtemp1257[9U] = 0U;
            __Vtemp1257[0xaU] = 0U;
            __Vtemp1257[0xbU] = 0U;
            __Vtemp1257[0xcU] = 0U;
            __Vtemp1257[0xdU] = 0U;
            __Vtemp1257[0xeU] = 0U;
            __Vtemp1257[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1258, __Vtemp1257, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1258[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_178 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1259[0U] = 1U;
            __Vtemp1259[1U] = 0U;
            __Vtemp1259[2U] = 0U;
            __Vtemp1259[3U] = 0U;
            __Vtemp1259[4U] = 0U;
            __Vtemp1259[5U] = 0U;
            __Vtemp1259[6U] = 0U;
            __Vtemp1259[7U] = 0U;
            __Vtemp1259[8U] = 0U;
            __Vtemp1259[9U] = 0U;
            __Vtemp1259[0xaU] = 0U;
            __Vtemp1259[0xbU] = 0U;
            __Vtemp1259[0xcU] = 0U;
            __Vtemp1259[0xdU] = 0U;
            __Vtemp1259[0xeU] = 0U;
            __Vtemp1259[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1260, __Vtemp1259, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1260[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_177 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1261[0U] = 1U;
            __Vtemp1261[1U] = 0U;
            __Vtemp1261[2U] = 0U;
            __Vtemp1261[3U] = 0U;
            __Vtemp1261[4U] = 0U;
            __Vtemp1261[5U] = 0U;
            __Vtemp1261[6U] = 0U;
            __Vtemp1261[7U] = 0U;
            __Vtemp1261[8U] = 0U;
            __Vtemp1261[9U] = 0U;
            __Vtemp1261[0xaU] = 0U;
            __Vtemp1261[0xbU] = 0U;
            __Vtemp1261[0xcU] = 0U;
            __Vtemp1261[0xdU] = 0U;
            __Vtemp1261[0xeU] = 0U;
            __Vtemp1261[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1262, __Vtemp1261, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1262[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_176 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1263[0U] = 1U;
            __Vtemp1263[1U] = 0U;
            __Vtemp1263[2U] = 0U;
            __Vtemp1263[3U] = 0U;
            __Vtemp1263[4U] = 0U;
            __Vtemp1263[5U] = 0U;
            __Vtemp1263[6U] = 0U;
            __Vtemp1263[7U] = 0U;
            __Vtemp1263[8U] = 0U;
            __Vtemp1263[9U] = 0U;
            __Vtemp1263[0xaU] = 0U;
            __Vtemp1263[0xbU] = 0U;
            __Vtemp1263[0xcU] = 0U;
            __Vtemp1263[0xdU] = 0U;
            __Vtemp1263[0xeU] = 0U;
            __Vtemp1263[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1264, __Vtemp1263, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1264[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_175 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1265[0U] = 1U;
            __Vtemp1265[1U] = 0U;
            __Vtemp1265[2U] = 0U;
            __Vtemp1265[3U] = 0U;
            __Vtemp1265[4U] = 0U;
            __Vtemp1265[5U] = 0U;
            __Vtemp1265[6U] = 0U;
            __Vtemp1265[7U] = 0U;
            __Vtemp1265[8U] = 0U;
            __Vtemp1265[9U] = 0U;
            __Vtemp1265[0xaU] = 0U;
            __Vtemp1265[0xbU] = 0U;
            __Vtemp1265[0xcU] = 0U;
            __Vtemp1265[0xdU] = 0U;
            __Vtemp1265[0xeU] = 0U;
            __Vtemp1265[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1266, __Vtemp1265, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1266[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_174 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1267[0U] = 1U;
            __Vtemp1267[1U] = 0U;
            __Vtemp1267[2U] = 0U;
            __Vtemp1267[3U] = 0U;
            __Vtemp1267[4U] = 0U;
            __Vtemp1267[5U] = 0U;
            __Vtemp1267[6U] = 0U;
            __Vtemp1267[7U] = 0U;
            __Vtemp1267[8U] = 0U;
            __Vtemp1267[9U] = 0U;
            __Vtemp1267[0xaU] = 0U;
            __Vtemp1267[0xbU] = 0U;
            __Vtemp1267[0xcU] = 0U;
            __Vtemp1267[0xdU] = 0U;
            __Vtemp1267[0xeU] = 0U;
            __Vtemp1267[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1268, __Vtemp1267, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1268[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_173 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1269[0U] = 1U;
            __Vtemp1269[1U] = 0U;
            __Vtemp1269[2U] = 0U;
            __Vtemp1269[3U] = 0U;
            __Vtemp1269[4U] = 0U;
            __Vtemp1269[5U] = 0U;
            __Vtemp1269[6U] = 0U;
            __Vtemp1269[7U] = 0U;
            __Vtemp1269[8U] = 0U;
            __Vtemp1269[9U] = 0U;
            __Vtemp1269[0xaU] = 0U;
            __Vtemp1269[0xbU] = 0U;
            __Vtemp1269[0xcU] = 0U;
            __Vtemp1269[0xdU] = 0U;
            __Vtemp1269[0xeU] = 0U;
            __Vtemp1269[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1270, __Vtemp1269, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1270[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_172 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1271[0U] = 1U;
            __Vtemp1271[1U] = 0U;
            __Vtemp1271[2U] = 0U;
            __Vtemp1271[3U] = 0U;
            __Vtemp1271[4U] = 0U;
            __Vtemp1271[5U] = 0U;
            __Vtemp1271[6U] = 0U;
            __Vtemp1271[7U] = 0U;
            __Vtemp1271[8U] = 0U;
            __Vtemp1271[9U] = 0U;
            __Vtemp1271[0xaU] = 0U;
            __Vtemp1271[0xbU] = 0U;
            __Vtemp1271[0xcU] = 0U;
            __Vtemp1271[0xdU] = 0U;
            __Vtemp1271[0xeU] = 0U;
            __Vtemp1271[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1272, __Vtemp1271, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1272[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_171 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1273[0U] = 1U;
            __Vtemp1273[1U] = 0U;
            __Vtemp1273[2U] = 0U;
            __Vtemp1273[3U] = 0U;
            __Vtemp1273[4U] = 0U;
            __Vtemp1273[5U] = 0U;
            __Vtemp1273[6U] = 0U;
            __Vtemp1273[7U] = 0U;
            __Vtemp1273[8U] = 0U;
            __Vtemp1273[9U] = 0U;
            __Vtemp1273[0xaU] = 0U;
            __Vtemp1273[0xbU] = 0U;
            __Vtemp1273[0xcU] = 0U;
            __Vtemp1273[0xdU] = 0U;
            __Vtemp1273[0xeU] = 0U;
            __Vtemp1273[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1274, __Vtemp1273, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1274[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_170 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1275[0U] = 1U;
            __Vtemp1275[1U] = 0U;
            __Vtemp1275[2U] = 0U;
            __Vtemp1275[3U] = 0U;
            __Vtemp1275[4U] = 0U;
            __Vtemp1275[5U] = 0U;
            __Vtemp1275[6U] = 0U;
            __Vtemp1275[7U] = 0U;
            __Vtemp1275[8U] = 0U;
            __Vtemp1275[9U] = 0U;
            __Vtemp1275[0xaU] = 0U;
            __Vtemp1275[0xbU] = 0U;
            __Vtemp1275[0xcU] = 0U;
            __Vtemp1275[0xdU] = 0U;
            __Vtemp1275[0xeU] = 0U;
            __Vtemp1275[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1276, __Vtemp1275, (IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1276[5U])) {
                vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_169 
                    = (1U & ((IData)(vlTOPp->LoopBackTest__DOT__receiver__DOT__phy_rx_decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}
