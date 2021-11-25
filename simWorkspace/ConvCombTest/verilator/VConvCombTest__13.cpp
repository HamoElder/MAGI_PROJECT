// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__68(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__68\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    // Body
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1184[0U] = 1U;
            __Vtemp1184[1U] = 0U;
            __Vtemp1184[2U] = 0U;
            __Vtemp1184[3U] = 0U;
            __Vtemp1184[4U] = 0U;
            __Vtemp1184[5U] = 0U;
            __Vtemp1184[6U] = 0U;
            __Vtemp1184[7U] = 0U;
            __Vtemp1184[8U] = 0U;
            __Vtemp1184[9U] = 0U;
            __Vtemp1184[0xaU] = 0U;
            __Vtemp1184[0xbU] = 0U;
            __Vtemp1184[0xcU] = 0U;
            __Vtemp1184[0xdU] = 0U;
            __Vtemp1184[0xeU] = 0U;
            __Vtemp1184[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1185, __Vtemp1184, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp1185[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_212 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1186[0U] = 1U;
            __Vtemp1186[1U] = 0U;
            __Vtemp1186[2U] = 0U;
            __Vtemp1186[3U] = 0U;
            __Vtemp1186[4U] = 0U;
            __Vtemp1186[5U] = 0U;
            __Vtemp1186[6U] = 0U;
            __Vtemp1186[7U] = 0U;
            __Vtemp1186[8U] = 0U;
            __Vtemp1186[9U] = 0U;
            __Vtemp1186[0xaU] = 0U;
            __Vtemp1186[0xbU] = 0U;
            __Vtemp1186[0xcU] = 0U;
            __Vtemp1186[0xdU] = 0U;
            __Vtemp1186[0xeU] = 0U;
            __Vtemp1186[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1187, __Vtemp1186, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp1187[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_211 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1188[0U] = 1U;
            __Vtemp1188[1U] = 0U;
            __Vtemp1188[2U] = 0U;
            __Vtemp1188[3U] = 0U;
            __Vtemp1188[4U] = 0U;
            __Vtemp1188[5U] = 0U;
            __Vtemp1188[6U] = 0U;
            __Vtemp1188[7U] = 0U;
            __Vtemp1188[8U] = 0U;
            __Vtemp1188[9U] = 0U;
            __Vtemp1188[0xaU] = 0U;
            __Vtemp1188[0xbU] = 0U;
            __Vtemp1188[0xcU] = 0U;
            __Vtemp1188[0xdU] = 0U;
            __Vtemp1188[0xeU] = 0U;
            __Vtemp1188[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1189, __Vtemp1188, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp1189[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_210 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1190[0U] = 1U;
            __Vtemp1190[1U] = 0U;
            __Vtemp1190[2U] = 0U;
            __Vtemp1190[3U] = 0U;
            __Vtemp1190[4U] = 0U;
            __Vtemp1190[5U] = 0U;
            __Vtemp1190[6U] = 0U;
            __Vtemp1190[7U] = 0U;
            __Vtemp1190[8U] = 0U;
            __Vtemp1190[9U] = 0U;
            __Vtemp1190[0xaU] = 0U;
            __Vtemp1190[0xbU] = 0U;
            __Vtemp1190[0xcU] = 0U;
            __Vtemp1190[0xdU] = 0U;
            __Vtemp1190[0xeU] = 0U;
            __Vtemp1190[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1191, __Vtemp1190, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp1191[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_209 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1192[0U] = 1U;
            __Vtemp1192[1U] = 0U;
            __Vtemp1192[2U] = 0U;
            __Vtemp1192[3U] = 0U;
            __Vtemp1192[4U] = 0U;
            __Vtemp1192[5U] = 0U;
            __Vtemp1192[6U] = 0U;
            __Vtemp1192[7U] = 0U;
            __Vtemp1192[8U] = 0U;
            __Vtemp1192[9U] = 0U;
            __Vtemp1192[0xaU] = 0U;
            __Vtemp1192[0xbU] = 0U;
            __Vtemp1192[0xcU] = 0U;
            __Vtemp1192[0xdU] = 0U;
            __Vtemp1192[0xeU] = 0U;
            __Vtemp1192[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1193, __Vtemp1192, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp1193[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_208 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1194[0U] = 1U;
            __Vtemp1194[1U] = 0U;
            __Vtemp1194[2U] = 0U;
            __Vtemp1194[3U] = 0U;
            __Vtemp1194[4U] = 0U;
            __Vtemp1194[5U] = 0U;
            __Vtemp1194[6U] = 0U;
            __Vtemp1194[7U] = 0U;
            __Vtemp1194[8U] = 0U;
            __Vtemp1194[9U] = 0U;
            __Vtemp1194[0xaU] = 0U;
            __Vtemp1194[0xbU] = 0U;
            __Vtemp1194[0xcU] = 0U;
            __Vtemp1194[0xdU] = 0U;
            __Vtemp1194[0xeU] = 0U;
            __Vtemp1194[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1195, __Vtemp1194, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp1195[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_207 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1196[0U] = 1U;
            __Vtemp1196[1U] = 0U;
            __Vtemp1196[2U] = 0U;
            __Vtemp1196[3U] = 0U;
            __Vtemp1196[4U] = 0U;
            __Vtemp1196[5U] = 0U;
            __Vtemp1196[6U] = 0U;
            __Vtemp1196[7U] = 0U;
            __Vtemp1196[8U] = 0U;
            __Vtemp1196[9U] = 0U;
            __Vtemp1196[0xaU] = 0U;
            __Vtemp1196[0xbU] = 0U;
            __Vtemp1196[0xcU] = 0U;
            __Vtemp1196[0xdU] = 0U;
            __Vtemp1196[0xeU] = 0U;
            __Vtemp1196[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1197, __Vtemp1196, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp1197[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_206 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1198[0U] = 1U;
            __Vtemp1198[1U] = 0U;
            __Vtemp1198[2U] = 0U;
            __Vtemp1198[3U] = 0U;
            __Vtemp1198[4U] = 0U;
            __Vtemp1198[5U] = 0U;
            __Vtemp1198[6U] = 0U;
            __Vtemp1198[7U] = 0U;
            __Vtemp1198[8U] = 0U;
            __Vtemp1198[9U] = 0U;
            __Vtemp1198[0xaU] = 0U;
            __Vtemp1198[0xbU] = 0U;
            __Vtemp1198[0xcU] = 0U;
            __Vtemp1198[0xdU] = 0U;
            __Vtemp1198[0xeU] = 0U;
            __Vtemp1198[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1199, __Vtemp1198, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp1199[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_205 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1200[0U] = 1U;
            __Vtemp1200[1U] = 0U;
            __Vtemp1200[2U] = 0U;
            __Vtemp1200[3U] = 0U;
            __Vtemp1200[4U] = 0U;
            __Vtemp1200[5U] = 0U;
            __Vtemp1200[6U] = 0U;
            __Vtemp1200[7U] = 0U;
            __Vtemp1200[8U] = 0U;
            __Vtemp1200[9U] = 0U;
            __Vtemp1200[0xaU] = 0U;
            __Vtemp1200[0xbU] = 0U;
            __Vtemp1200[0xcU] = 0U;
            __Vtemp1200[0xdU] = 0U;
            __Vtemp1200[0xeU] = 0U;
            __Vtemp1200[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1201, __Vtemp1200, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp1201[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_204 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1202[0U] = 1U;
            __Vtemp1202[1U] = 0U;
            __Vtemp1202[2U] = 0U;
            __Vtemp1202[3U] = 0U;
            __Vtemp1202[4U] = 0U;
            __Vtemp1202[5U] = 0U;
            __Vtemp1202[6U] = 0U;
            __Vtemp1202[7U] = 0U;
            __Vtemp1202[8U] = 0U;
            __Vtemp1202[9U] = 0U;
            __Vtemp1202[0xaU] = 0U;
            __Vtemp1202[0xbU] = 0U;
            __Vtemp1202[0xcU] = 0U;
            __Vtemp1202[0xdU] = 0U;
            __Vtemp1202[0xeU] = 0U;
            __Vtemp1202[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1203, __Vtemp1202, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp1203[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_203 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1204[0U] = 1U;
            __Vtemp1204[1U] = 0U;
            __Vtemp1204[2U] = 0U;
            __Vtemp1204[3U] = 0U;
            __Vtemp1204[4U] = 0U;
            __Vtemp1204[5U] = 0U;
            __Vtemp1204[6U] = 0U;
            __Vtemp1204[7U] = 0U;
            __Vtemp1204[8U] = 0U;
            __Vtemp1204[9U] = 0U;
            __Vtemp1204[0xaU] = 0U;
            __Vtemp1204[0xbU] = 0U;
            __Vtemp1204[0xcU] = 0U;
            __Vtemp1204[0xdU] = 0U;
            __Vtemp1204[0xeU] = 0U;
            __Vtemp1204[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1205, __Vtemp1204, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp1205[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_202 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1206[0U] = 1U;
            __Vtemp1206[1U] = 0U;
            __Vtemp1206[2U] = 0U;
            __Vtemp1206[3U] = 0U;
            __Vtemp1206[4U] = 0U;
            __Vtemp1206[5U] = 0U;
            __Vtemp1206[6U] = 0U;
            __Vtemp1206[7U] = 0U;
            __Vtemp1206[8U] = 0U;
            __Vtemp1206[9U] = 0U;
            __Vtemp1206[0xaU] = 0U;
            __Vtemp1206[0xbU] = 0U;
            __Vtemp1206[0xcU] = 0U;
            __Vtemp1206[0xdU] = 0U;
            __Vtemp1206[0xeU] = 0U;
            __Vtemp1206[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1207, __Vtemp1206, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp1207[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_201 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1208[0U] = 1U;
            __Vtemp1208[1U] = 0U;
            __Vtemp1208[2U] = 0U;
            __Vtemp1208[3U] = 0U;
            __Vtemp1208[4U] = 0U;
            __Vtemp1208[5U] = 0U;
            __Vtemp1208[6U] = 0U;
            __Vtemp1208[7U] = 0U;
            __Vtemp1208[8U] = 0U;
            __Vtemp1208[9U] = 0U;
            __Vtemp1208[0xaU] = 0U;
            __Vtemp1208[0xbU] = 0U;
            __Vtemp1208[0xcU] = 0U;
            __Vtemp1208[0xdU] = 0U;
            __Vtemp1208[0xeU] = 0U;
            __Vtemp1208[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1209, __Vtemp1208, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp1209[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_200 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1210[0U] = 1U;
            __Vtemp1210[1U] = 0U;
            __Vtemp1210[2U] = 0U;
            __Vtemp1210[3U] = 0U;
            __Vtemp1210[4U] = 0U;
            __Vtemp1210[5U] = 0U;
            __Vtemp1210[6U] = 0U;
            __Vtemp1210[7U] = 0U;
            __Vtemp1210[8U] = 0U;
            __Vtemp1210[9U] = 0U;
            __Vtemp1210[0xaU] = 0U;
            __Vtemp1210[0xbU] = 0U;
            __Vtemp1210[0xcU] = 0U;
            __Vtemp1210[0xdU] = 0U;
            __Vtemp1210[0xeU] = 0U;
            __Vtemp1210[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1211, __Vtemp1210, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp1211[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_199 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1212[0U] = 1U;
            __Vtemp1212[1U] = 0U;
            __Vtemp1212[2U] = 0U;
            __Vtemp1212[3U] = 0U;
            __Vtemp1212[4U] = 0U;
            __Vtemp1212[5U] = 0U;
            __Vtemp1212[6U] = 0U;
            __Vtemp1212[7U] = 0U;
            __Vtemp1212[8U] = 0U;
            __Vtemp1212[9U] = 0U;
            __Vtemp1212[0xaU] = 0U;
            __Vtemp1212[0xbU] = 0U;
            __Vtemp1212[0xcU] = 0U;
            __Vtemp1212[0xdU] = 0U;
            __Vtemp1212[0xeU] = 0U;
            __Vtemp1212[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1213, __Vtemp1212, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp1213[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_198 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1214[0U] = 1U;
            __Vtemp1214[1U] = 0U;
            __Vtemp1214[2U] = 0U;
            __Vtemp1214[3U] = 0U;
            __Vtemp1214[4U] = 0U;
            __Vtemp1214[5U] = 0U;
            __Vtemp1214[6U] = 0U;
            __Vtemp1214[7U] = 0U;
            __Vtemp1214[8U] = 0U;
            __Vtemp1214[9U] = 0U;
            __Vtemp1214[0xaU] = 0U;
            __Vtemp1214[0xbU] = 0U;
            __Vtemp1214[0xcU] = 0U;
            __Vtemp1214[0xdU] = 0U;
            __Vtemp1214[0xeU] = 0U;
            __Vtemp1214[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1215, __Vtemp1214, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp1215[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_197 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1216[0U] = 1U;
            __Vtemp1216[1U] = 0U;
            __Vtemp1216[2U] = 0U;
            __Vtemp1216[3U] = 0U;
            __Vtemp1216[4U] = 0U;
            __Vtemp1216[5U] = 0U;
            __Vtemp1216[6U] = 0U;
            __Vtemp1216[7U] = 0U;
            __Vtemp1216[8U] = 0U;
            __Vtemp1216[9U] = 0U;
            __Vtemp1216[0xaU] = 0U;
            __Vtemp1216[0xbU] = 0U;
            __Vtemp1216[0xcU] = 0U;
            __Vtemp1216[0xdU] = 0U;
            __Vtemp1216[0xeU] = 0U;
            __Vtemp1216[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1217, __Vtemp1216, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp1217[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_196 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1218[0U] = 1U;
            __Vtemp1218[1U] = 0U;
            __Vtemp1218[2U] = 0U;
            __Vtemp1218[3U] = 0U;
            __Vtemp1218[4U] = 0U;
            __Vtemp1218[5U] = 0U;
            __Vtemp1218[6U] = 0U;
            __Vtemp1218[7U] = 0U;
            __Vtemp1218[8U] = 0U;
            __Vtemp1218[9U] = 0U;
            __Vtemp1218[0xaU] = 0U;
            __Vtemp1218[0xbU] = 0U;
            __Vtemp1218[0xcU] = 0U;
            __Vtemp1218[0xdU] = 0U;
            __Vtemp1218[0xeU] = 0U;
            __Vtemp1218[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1219, __Vtemp1218, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((8U & __Vtemp1219[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_195 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1220[0U] = 1U;
            __Vtemp1220[1U] = 0U;
            __Vtemp1220[2U] = 0U;
            __Vtemp1220[3U] = 0U;
            __Vtemp1220[4U] = 0U;
            __Vtemp1220[5U] = 0U;
            __Vtemp1220[6U] = 0U;
            __Vtemp1220[7U] = 0U;
            __Vtemp1220[8U] = 0U;
            __Vtemp1220[9U] = 0U;
            __Vtemp1220[0xaU] = 0U;
            __Vtemp1220[0xbU] = 0U;
            __Vtemp1220[0xcU] = 0U;
            __Vtemp1220[0xdU] = 0U;
            __Vtemp1220[0xeU] = 0U;
            __Vtemp1220[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1221, __Vtemp1220, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((4U & __Vtemp1221[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_194 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25) {
            __Vtemp1222[0U] = 1U;
            __Vtemp1222[1U] = 0U;
            __Vtemp1222[2U] = 0U;
            __Vtemp1222[3U] = 0U;
            __Vtemp1222[4U] = 0U;
            __Vtemp1222[5U] = 0U;
            __Vtemp1222[6U] = 0U;
            __Vtemp1222[7U] = 0U;
            __Vtemp1222[8U] = 0U;
            __Vtemp1222[9U] = 0U;
            __Vtemp1222[0xaU] = 0U;
            __Vtemp1222[0xbU] = 0U;
            __Vtemp1222[0xcU] = 0U;
            __Vtemp1222[0xdU] = 0U;
            __Vtemp1222[0xeU] = 0U;
            __Vtemp1222[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp1223, __Vtemp1222, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor));
            if ((2U & __Vtemp1223[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_193 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
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
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__69(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__69\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    // Body
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
}
