// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__52(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__52\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp292[16];
    WData/*511:0*/ __Vtemp293[16];
    WData/*511:0*/ __Vtemp294[16];
    WData/*511:0*/ __Vtemp295[16];
    WData/*511:0*/ __Vtemp296[16];
    WData/*511:0*/ __Vtemp297[16];
    WData/*511:0*/ __Vtemp298[16];
    WData/*511:0*/ __Vtemp299[16];
    WData/*511:0*/ __Vtemp300[16];
    WData/*511:0*/ __Vtemp301[16];
    WData/*511:0*/ __Vtemp302[16];
    WData/*511:0*/ __Vtemp303[16];
    WData/*511:0*/ __Vtemp304[16];
    WData/*511:0*/ __Vtemp305[16];
    WData/*511:0*/ __Vtemp306[16];
    WData/*511:0*/ __Vtemp307[16];
    WData/*511:0*/ __Vtemp308[16];
    WData/*511:0*/ __Vtemp309[16];
    WData/*511:0*/ __Vtemp310[16];
    WData/*511:0*/ __Vtemp311[16];
    WData/*511:0*/ __Vtemp312[16];
    WData/*511:0*/ __Vtemp313[16];
    WData/*511:0*/ __Vtemp314[16];
    WData/*511:0*/ __Vtemp315[16];
    WData/*511:0*/ __Vtemp316[16];
    WData/*511:0*/ __Vtemp317[16];
    WData/*511:0*/ __Vtemp318[16];
    WData/*511:0*/ __Vtemp319[16];
    WData/*511:0*/ __Vtemp320[16];
    WData/*511:0*/ __Vtemp321[16];
    WData/*511:0*/ __Vtemp322[16];
    WData/*511:0*/ __Vtemp323[16];
    WData/*511:0*/ __Vtemp324[16];
    WData/*511:0*/ __Vtemp325[16];
    WData/*511:0*/ __Vtemp326[16];
    WData/*511:0*/ __Vtemp327[16];
    WData/*511:0*/ __Vtemp328[16];
    WData/*511:0*/ __Vtemp329[16];
    WData/*511:0*/ __Vtemp330[16];
    WData/*511:0*/ __Vtemp331[16];
    WData/*511:0*/ __Vtemp332[16];
    WData/*511:0*/ __Vtemp333[16];
    WData/*511:0*/ __Vtemp334[16];
    WData/*511:0*/ __Vtemp335[16];
    WData/*511:0*/ __Vtemp336[16];
    WData/*511:0*/ __Vtemp337[16];
    WData/*511:0*/ __Vtemp338[16];
    WData/*511:0*/ __Vtemp339[16];
    WData/*511:0*/ __Vtemp340[16];
    WData/*511:0*/ __Vtemp341[16];
    WData/*511:0*/ __Vtemp342[16];
    WData/*511:0*/ __Vtemp343[16];
    WData/*511:0*/ __Vtemp344[16];
    WData/*511:0*/ __Vtemp345[16];
    WData/*511:0*/ __Vtemp346[16];
    WData/*511:0*/ __Vtemp347[16];
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp292[0U] = 1U;
            __Vtemp292[1U] = 0U;
            __Vtemp292[2U] = 0U;
            __Vtemp292[3U] = 0U;
            __Vtemp292[4U] = 0U;
            __Vtemp292[5U] = 0U;
            __Vtemp292[6U] = 0U;
            __Vtemp292[7U] = 0U;
            __Vtemp292[8U] = 0U;
            __Vtemp292[9U] = 0U;
            __Vtemp292[0xaU] = 0U;
            __Vtemp292[0xbU] = 0U;
            __Vtemp292[0xcU] = 0U;
            __Vtemp292[0xdU] = 0U;
            __Vtemp292[0xeU] = 0U;
            __Vtemp292[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp293, __Vtemp292, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp293[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_118 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp294[0U] = 1U;
            __Vtemp294[1U] = 0U;
            __Vtemp294[2U] = 0U;
            __Vtemp294[3U] = 0U;
            __Vtemp294[4U] = 0U;
            __Vtemp294[5U] = 0U;
            __Vtemp294[6U] = 0U;
            __Vtemp294[7U] = 0U;
            __Vtemp294[8U] = 0U;
            __Vtemp294[9U] = 0U;
            __Vtemp294[0xaU] = 0U;
            __Vtemp294[0xbU] = 0U;
            __Vtemp294[0xcU] = 0U;
            __Vtemp294[0xdU] = 0U;
            __Vtemp294[0xeU] = 0U;
            __Vtemp294[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp295, __Vtemp294, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp295[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_117 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp296[0U] = 1U;
            __Vtemp296[1U] = 0U;
            __Vtemp296[2U] = 0U;
            __Vtemp296[3U] = 0U;
            __Vtemp296[4U] = 0U;
            __Vtemp296[5U] = 0U;
            __Vtemp296[6U] = 0U;
            __Vtemp296[7U] = 0U;
            __Vtemp296[8U] = 0U;
            __Vtemp296[9U] = 0U;
            __Vtemp296[0xaU] = 0U;
            __Vtemp296[0xbU] = 0U;
            __Vtemp296[0xcU] = 0U;
            __Vtemp296[0xdU] = 0U;
            __Vtemp296[0xeU] = 0U;
            __Vtemp296[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp297, __Vtemp296, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp297[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_116 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp298[0U] = 1U;
            __Vtemp298[1U] = 0U;
            __Vtemp298[2U] = 0U;
            __Vtemp298[3U] = 0U;
            __Vtemp298[4U] = 0U;
            __Vtemp298[5U] = 0U;
            __Vtemp298[6U] = 0U;
            __Vtemp298[7U] = 0U;
            __Vtemp298[8U] = 0U;
            __Vtemp298[9U] = 0U;
            __Vtemp298[0xaU] = 0U;
            __Vtemp298[0xbU] = 0U;
            __Vtemp298[0xcU] = 0U;
            __Vtemp298[0xdU] = 0U;
            __Vtemp298[0xeU] = 0U;
            __Vtemp298[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp299, __Vtemp298, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp299[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_115 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp300[0U] = 1U;
            __Vtemp300[1U] = 0U;
            __Vtemp300[2U] = 0U;
            __Vtemp300[3U] = 0U;
            __Vtemp300[4U] = 0U;
            __Vtemp300[5U] = 0U;
            __Vtemp300[6U] = 0U;
            __Vtemp300[7U] = 0U;
            __Vtemp300[8U] = 0U;
            __Vtemp300[9U] = 0U;
            __Vtemp300[0xaU] = 0U;
            __Vtemp300[0xbU] = 0U;
            __Vtemp300[0xcU] = 0U;
            __Vtemp300[0xdU] = 0U;
            __Vtemp300[0xeU] = 0U;
            __Vtemp300[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp301, __Vtemp300, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp301[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_114 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp302[0U] = 1U;
            __Vtemp302[1U] = 0U;
            __Vtemp302[2U] = 0U;
            __Vtemp302[3U] = 0U;
            __Vtemp302[4U] = 0U;
            __Vtemp302[5U] = 0U;
            __Vtemp302[6U] = 0U;
            __Vtemp302[7U] = 0U;
            __Vtemp302[8U] = 0U;
            __Vtemp302[9U] = 0U;
            __Vtemp302[0xaU] = 0U;
            __Vtemp302[0xbU] = 0U;
            __Vtemp302[0xcU] = 0U;
            __Vtemp302[0xdU] = 0U;
            __Vtemp302[0xeU] = 0U;
            __Vtemp302[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp303, __Vtemp302, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp303[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_113 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp304[0U] = 1U;
            __Vtemp304[1U] = 0U;
            __Vtemp304[2U] = 0U;
            __Vtemp304[3U] = 0U;
            __Vtemp304[4U] = 0U;
            __Vtemp304[5U] = 0U;
            __Vtemp304[6U] = 0U;
            __Vtemp304[7U] = 0U;
            __Vtemp304[8U] = 0U;
            __Vtemp304[9U] = 0U;
            __Vtemp304[0xaU] = 0U;
            __Vtemp304[0xbU] = 0U;
            __Vtemp304[0xcU] = 0U;
            __Vtemp304[0xdU] = 0U;
            __Vtemp304[0xeU] = 0U;
            __Vtemp304[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp305, __Vtemp304, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp305[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_112 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp306[0U] = 1U;
            __Vtemp306[1U] = 0U;
            __Vtemp306[2U] = 0U;
            __Vtemp306[3U] = 0U;
            __Vtemp306[4U] = 0U;
            __Vtemp306[5U] = 0U;
            __Vtemp306[6U] = 0U;
            __Vtemp306[7U] = 0U;
            __Vtemp306[8U] = 0U;
            __Vtemp306[9U] = 0U;
            __Vtemp306[0xaU] = 0U;
            __Vtemp306[0xbU] = 0U;
            __Vtemp306[0xcU] = 0U;
            __Vtemp306[0xdU] = 0U;
            __Vtemp306[0xeU] = 0U;
            __Vtemp306[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp307, __Vtemp306, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp307[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_111 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp308[0U] = 1U;
            __Vtemp308[1U] = 0U;
            __Vtemp308[2U] = 0U;
            __Vtemp308[3U] = 0U;
            __Vtemp308[4U] = 0U;
            __Vtemp308[5U] = 0U;
            __Vtemp308[6U] = 0U;
            __Vtemp308[7U] = 0U;
            __Vtemp308[8U] = 0U;
            __Vtemp308[9U] = 0U;
            __Vtemp308[0xaU] = 0U;
            __Vtemp308[0xbU] = 0U;
            __Vtemp308[0xcU] = 0U;
            __Vtemp308[0xdU] = 0U;
            __Vtemp308[0xeU] = 0U;
            __Vtemp308[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp309, __Vtemp308, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp309[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_110 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp310[0U] = 1U;
            __Vtemp310[1U] = 0U;
            __Vtemp310[2U] = 0U;
            __Vtemp310[3U] = 0U;
            __Vtemp310[4U] = 0U;
            __Vtemp310[5U] = 0U;
            __Vtemp310[6U] = 0U;
            __Vtemp310[7U] = 0U;
            __Vtemp310[8U] = 0U;
            __Vtemp310[9U] = 0U;
            __Vtemp310[0xaU] = 0U;
            __Vtemp310[0xbU] = 0U;
            __Vtemp310[0xcU] = 0U;
            __Vtemp310[0xdU] = 0U;
            __Vtemp310[0xeU] = 0U;
            __Vtemp310[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp311, __Vtemp310, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp311[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_109 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp312[0U] = 1U;
            __Vtemp312[1U] = 0U;
            __Vtemp312[2U] = 0U;
            __Vtemp312[3U] = 0U;
            __Vtemp312[4U] = 0U;
            __Vtemp312[5U] = 0U;
            __Vtemp312[6U] = 0U;
            __Vtemp312[7U] = 0U;
            __Vtemp312[8U] = 0U;
            __Vtemp312[9U] = 0U;
            __Vtemp312[0xaU] = 0U;
            __Vtemp312[0xbU] = 0U;
            __Vtemp312[0xcU] = 0U;
            __Vtemp312[0xdU] = 0U;
            __Vtemp312[0xeU] = 0U;
            __Vtemp312[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp313, __Vtemp312, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp313[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_108 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp314[0U] = 1U;
            __Vtemp314[1U] = 0U;
            __Vtemp314[2U] = 0U;
            __Vtemp314[3U] = 0U;
            __Vtemp314[4U] = 0U;
            __Vtemp314[5U] = 0U;
            __Vtemp314[6U] = 0U;
            __Vtemp314[7U] = 0U;
            __Vtemp314[8U] = 0U;
            __Vtemp314[9U] = 0U;
            __Vtemp314[0xaU] = 0U;
            __Vtemp314[0xbU] = 0U;
            __Vtemp314[0xcU] = 0U;
            __Vtemp314[0xdU] = 0U;
            __Vtemp314[0xeU] = 0U;
            __Vtemp314[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp315, __Vtemp314, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp315[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_107 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp316[0U] = 1U;
            __Vtemp316[1U] = 0U;
            __Vtemp316[2U] = 0U;
            __Vtemp316[3U] = 0U;
            __Vtemp316[4U] = 0U;
            __Vtemp316[5U] = 0U;
            __Vtemp316[6U] = 0U;
            __Vtemp316[7U] = 0U;
            __Vtemp316[8U] = 0U;
            __Vtemp316[9U] = 0U;
            __Vtemp316[0xaU] = 0U;
            __Vtemp316[0xbU] = 0U;
            __Vtemp316[0xcU] = 0U;
            __Vtemp316[0xdU] = 0U;
            __Vtemp316[0xeU] = 0U;
            __Vtemp316[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp317, __Vtemp316, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp317[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_106 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp318[0U] = 1U;
            __Vtemp318[1U] = 0U;
            __Vtemp318[2U] = 0U;
            __Vtemp318[3U] = 0U;
            __Vtemp318[4U] = 0U;
            __Vtemp318[5U] = 0U;
            __Vtemp318[6U] = 0U;
            __Vtemp318[7U] = 0U;
            __Vtemp318[8U] = 0U;
            __Vtemp318[9U] = 0U;
            __Vtemp318[0xaU] = 0U;
            __Vtemp318[0xbU] = 0U;
            __Vtemp318[0xcU] = 0U;
            __Vtemp318[0xdU] = 0U;
            __Vtemp318[0xeU] = 0U;
            __Vtemp318[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp319, __Vtemp318, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp319[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_105 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp320[0U] = 1U;
            __Vtemp320[1U] = 0U;
            __Vtemp320[2U] = 0U;
            __Vtemp320[3U] = 0U;
            __Vtemp320[4U] = 0U;
            __Vtemp320[5U] = 0U;
            __Vtemp320[6U] = 0U;
            __Vtemp320[7U] = 0U;
            __Vtemp320[8U] = 0U;
            __Vtemp320[9U] = 0U;
            __Vtemp320[0xaU] = 0U;
            __Vtemp320[0xbU] = 0U;
            __Vtemp320[0xcU] = 0U;
            __Vtemp320[0xdU] = 0U;
            __Vtemp320[0xeU] = 0U;
            __Vtemp320[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp321, __Vtemp320, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp321[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_104 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp322[0U] = 1U;
            __Vtemp322[1U] = 0U;
            __Vtemp322[2U] = 0U;
            __Vtemp322[3U] = 0U;
            __Vtemp322[4U] = 0U;
            __Vtemp322[5U] = 0U;
            __Vtemp322[6U] = 0U;
            __Vtemp322[7U] = 0U;
            __Vtemp322[8U] = 0U;
            __Vtemp322[9U] = 0U;
            __Vtemp322[0xaU] = 0U;
            __Vtemp322[0xbU] = 0U;
            __Vtemp322[0xcU] = 0U;
            __Vtemp322[0xdU] = 0U;
            __Vtemp322[0xeU] = 0U;
            __Vtemp322[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp323, __Vtemp322, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp323[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_103 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp324[0U] = 1U;
            __Vtemp324[1U] = 0U;
            __Vtemp324[2U] = 0U;
            __Vtemp324[3U] = 0U;
            __Vtemp324[4U] = 0U;
            __Vtemp324[5U] = 0U;
            __Vtemp324[6U] = 0U;
            __Vtemp324[7U] = 0U;
            __Vtemp324[8U] = 0U;
            __Vtemp324[9U] = 0U;
            __Vtemp324[0xaU] = 0U;
            __Vtemp324[0xbU] = 0U;
            __Vtemp324[0xcU] = 0U;
            __Vtemp324[0xdU] = 0U;
            __Vtemp324[0xeU] = 0U;
            __Vtemp324[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp325, __Vtemp324, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp325[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_102 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp326[0U] = 1U;
            __Vtemp326[1U] = 0U;
            __Vtemp326[2U] = 0U;
            __Vtemp326[3U] = 0U;
            __Vtemp326[4U] = 0U;
            __Vtemp326[5U] = 0U;
            __Vtemp326[6U] = 0U;
            __Vtemp326[7U] = 0U;
            __Vtemp326[8U] = 0U;
            __Vtemp326[9U] = 0U;
            __Vtemp326[0xaU] = 0U;
            __Vtemp326[0xbU] = 0U;
            __Vtemp326[0xcU] = 0U;
            __Vtemp326[0xdU] = 0U;
            __Vtemp326[0xeU] = 0U;
            __Vtemp326[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp327, __Vtemp326, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp327[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_101 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp328[0U] = 1U;
            __Vtemp328[1U] = 0U;
            __Vtemp328[2U] = 0U;
            __Vtemp328[3U] = 0U;
            __Vtemp328[4U] = 0U;
            __Vtemp328[5U] = 0U;
            __Vtemp328[6U] = 0U;
            __Vtemp328[7U] = 0U;
            __Vtemp328[8U] = 0U;
            __Vtemp328[9U] = 0U;
            __Vtemp328[0xaU] = 0U;
            __Vtemp328[0xbU] = 0U;
            __Vtemp328[0xcU] = 0U;
            __Vtemp328[0xdU] = 0U;
            __Vtemp328[0xeU] = 0U;
            __Vtemp328[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp329, __Vtemp328, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp329[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_100 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp330[0U] = 1U;
            __Vtemp330[1U] = 0U;
            __Vtemp330[2U] = 0U;
            __Vtemp330[3U] = 0U;
            __Vtemp330[4U] = 0U;
            __Vtemp330[5U] = 0U;
            __Vtemp330[6U] = 0U;
            __Vtemp330[7U] = 0U;
            __Vtemp330[8U] = 0U;
            __Vtemp330[9U] = 0U;
            __Vtemp330[0xaU] = 0U;
            __Vtemp330[0xbU] = 0U;
            __Vtemp330[0xcU] = 0U;
            __Vtemp330[0xdU] = 0U;
            __Vtemp330[0xeU] = 0U;
            __Vtemp330[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp331, __Vtemp330, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp331[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_99 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp332[0U] = 1U;
            __Vtemp332[1U] = 0U;
            __Vtemp332[2U] = 0U;
            __Vtemp332[3U] = 0U;
            __Vtemp332[4U] = 0U;
            __Vtemp332[5U] = 0U;
            __Vtemp332[6U] = 0U;
            __Vtemp332[7U] = 0U;
            __Vtemp332[8U] = 0U;
            __Vtemp332[9U] = 0U;
            __Vtemp332[0xaU] = 0U;
            __Vtemp332[0xbU] = 0U;
            __Vtemp332[0xcU] = 0U;
            __Vtemp332[0xdU] = 0U;
            __Vtemp332[0xeU] = 0U;
            __Vtemp332[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp333, __Vtemp332, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp333[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_98 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp334[0U] = 1U;
            __Vtemp334[1U] = 0U;
            __Vtemp334[2U] = 0U;
            __Vtemp334[3U] = 0U;
            __Vtemp334[4U] = 0U;
            __Vtemp334[5U] = 0U;
            __Vtemp334[6U] = 0U;
            __Vtemp334[7U] = 0U;
            __Vtemp334[8U] = 0U;
            __Vtemp334[9U] = 0U;
            __Vtemp334[0xaU] = 0U;
            __Vtemp334[0xbU] = 0U;
            __Vtemp334[0xcU] = 0U;
            __Vtemp334[0xdU] = 0U;
            __Vtemp334[0xeU] = 0U;
            __Vtemp334[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp335, __Vtemp334, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp335[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_97 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp336[0U] = 1U;
            __Vtemp336[1U] = 0U;
            __Vtemp336[2U] = 0U;
            __Vtemp336[3U] = 0U;
            __Vtemp336[4U] = 0U;
            __Vtemp336[5U] = 0U;
            __Vtemp336[6U] = 0U;
            __Vtemp336[7U] = 0U;
            __Vtemp336[8U] = 0U;
            __Vtemp336[9U] = 0U;
            __Vtemp336[0xaU] = 0U;
            __Vtemp336[0xbU] = 0U;
            __Vtemp336[0xcU] = 0U;
            __Vtemp336[0xdU] = 0U;
            __Vtemp336[0xeU] = 0U;
            __Vtemp336[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp337, __Vtemp336, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp337[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_96 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp338[0U] = 1U;
            __Vtemp338[1U] = 0U;
            __Vtemp338[2U] = 0U;
            __Vtemp338[3U] = 0U;
            __Vtemp338[4U] = 0U;
            __Vtemp338[5U] = 0U;
            __Vtemp338[6U] = 0U;
            __Vtemp338[7U] = 0U;
            __Vtemp338[8U] = 0U;
            __Vtemp338[9U] = 0U;
            __Vtemp338[0xaU] = 0U;
            __Vtemp338[0xbU] = 0U;
            __Vtemp338[0xcU] = 0U;
            __Vtemp338[0xdU] = 0U;
            __Vtemp338[0xeU] = 0U;
            __Vtemp338[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp339, __Vtemp338, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp339[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_95 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp340[0U] = 1U;
            __Vtemp340[1U] = 0U;
            __Vtemp340[2U] = 0U;
            __Vtemp340[3U] = 0U;
            __Vtemp340[4U] = 0U;
            __Vtemp340[5U] = 0U;
            __Vtemp340[6U] = 0U;
            __Vtemp340[7U] = 0U;
            __Vtemp340[8U] = 0U;
            __Vtemp340[9U] = 0U;
            __Vtemp340[0xaU] = 0U;
            __Vtemp340[0xbU] = 0U;
            __Vtemp340[0xcU] = 0U;
            __Vtemp340[0xdU] = 0U;
            __Vtemp340[0xeU] = 0U;
            __Vtemp340[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp341, __Vtemp340, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp341[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_94 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp342[0U] = 1U;
            __Vtemp342[1U] = 0U;
            __Vtemp342[2U] = 0U;
            __Vtemp342[3U] = 0U;
            __Vtemp342[4U] = 0U;
            __Vtemp342[5U] = 0U;
            __Vtemp342[6U] = 0U;
            __Vtemp342[7U] = 0U;
            __Vtemp342[8U] = 0U;
            __Vtemp342[9U] = 0U;
            __Vtemp342[0xaU] = 0U;
            __Vtemp342[0xbU] = 0U;
            __Vtemp342[0xcU] = 0U;
            __Vtemp342[0xdU] = 0U;
            __Vtemp342[0xeU] = 0U;
            __Vtemp342[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp343, __Vtemp342, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp343[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_93 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp344[0U] = 1U;
            __Vtemp344[1U] = 0U;
            __Vtemp344[2U] = 0U;
            __Vtemp344[3U] = 0U;
            __Vtemp344[4U] = 0U;
            __Vtemp344[5U] = 0U;
            __Vtemp344[6U] = 0U;
            __Vtemp344[7U] = 0U;
            __Vtemp344[8U] = 0U;
            __Vtemp344[9U] = 0U;
            __Vtemp344[0xaU] = 0U;
            __Vtemp344[0xbU] = 0U;
            __Vtemp344[0xcU] = 0U;
            __Vtemp344[0xdU] = 0U;
            __Vtemp344[0xeU] = 0U;
            __Vtemp344[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp345, __Vtemp344, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp345[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_92 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp346[0U] = 1U;
            __Vtemp346[1U] = 0U;
            __Vtemp346[2U] = 0U;
            __Vtemp346[3U] = 0U;
            __Vtemp346[4U] = 0U;
            __Vtemp346[5U] = 0U;
            __Vtemp346[6U] = 0U;
            __Vtemp346[7U] = 0U;
            __Vtemp346[8U] = 0U;
            __Vtemp346[9U] = 0U;
            __Vtemp346[0xaU] = 0U;
            __Vtemp346[0xbU] = 0U;
            __Vtemp346[0xcU] = 0U;
            __Vtemp346[0xdU] = 0U;
            __Vtemp346[0xeU] = 0U;
            __Vtemp346[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp347, __Vtemp346, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp347[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_91 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__53(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__53\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp348[16];
    WData/*511:0*/ __Vtemp349[16];
    WData/*511:0*/ __Vtemp350[16];
    WData/*511:0*/ __Vtemp351[16];
    WData/*511:0*/ __Vtemp352[16];
    WData/*511:0*/ __Vtemp353[16];
    WData/*511:0*/ __Vtemp354[16];
    WData/*511:0*/ __Vtemp355[16];
    WData/*511:0*/ __Vtemp356[16];
    WData/*511:0*/ __Vtemp357[16];
    WData/*511:0*/ __Vtemp358[16];
    WData/*511:0*/ __Vtemp359[16];
    WData/*511:0*/ __Vtemp360[16];
    WData/*511:0*/ __Vtemp361[16];
    WData/*511:0*/ __Vtemp362[16];
    WData/*511:0*/ __Vtemp363[16];
    WData/*511:0*/ __Vtemp364[16];
    WData/*511:0*/ __Vtemp365[16];
    WData/*511:0*/ __Vtemp366[16];
    WData/*511:0*/ __Vtemp367[16];
    WData/*511:0*/ __Vtemp368[16];
    WData/*511:0*/ __Vtemp369[16];
    WData/*511:0*/ __Vtemp370[16];
    WData/*511:0*/ __Vtemp371[16];
    WData/*511:0*/ __Vtemp372[16];
    WData/*511:0*/ __Vtemp373[16];
    WData/*511:0*/ __Vtemp374[16];
    WData/*511:0*/ __Vtemp375[16];
    WData/*511:0*/ __Vtemp376[16];
    WData/*511:0*/ __Vtemp377[16];
    WData/*511:0*/ __Vtemp378[16];
    WData/*511:0*/ __Vtemp379[16];
    WData/*511:0*/ __Vtemp380[16];
    WData/*511:0*/ __Vtemp381[16];
    WData/*511:0*/ __Vtemp382[16];
    WData/*511:0*/ __Vtemp383[16];
    WData/*511:0*/ __Vtemp384[16];
    WData/*511:0*/ __Vtemp385[16];
    WData/*511:0*/ __Vtemp386[16];
    WData/*511:0*/ __Vtemp387[16];
    WData/*511:0*/ __Vtemp388[16];
    WData/*511:0*/ __Vtemp389[16];
    WData/*511:0*/ __Vtemp390[16];
    WData/*511:0*/ __Vtemp391[16];
    WData/*511:0*/ __Vtemp392[16];
    WData/*511:0*/ __Vtemp393[16];
    WData/*511:0*/ __Vtemp394[16];
    WData/*511:0*/ __Vtemp395[16];
    WData/*511:0*/ __Vtemp396[16];
    WData/*511:0*/ __Vtemp397[16];
    WData/*511:0*/ __Vtemp398[16];
    WData/*511:0*/ __Vtemp399[16];
    WData/*511:0*/ __Vtemp400[16];
    WData/*511:0*/ __Vtemp401[16];
    WData/*511:0*/ __Vtemp402[16];
    WData/*511:0*/ __Vtemp403[16];
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp348[0U] = 1U;
            __Vtemp348[1U] = 0U;
            __Vtemp348[2U] = 0U;
            __Vtemp348[3U] = 0U;
            __Vtemp348[4U] = 0U;
            __Vtemp348[5U] = 0U;
            __Vtemp348[6U] = 0U;
            __Vtemp348[7U] = 0U;
            __Vtemp348[8U] = 0U;
            __Vtemp348[9U] = 0U;
            __Vtemp348[0xaU] = 0U;
            __Vtemp348[0xbU] = 0U;
            __Vtemp348[0xcU] = 0U;
            __Vtemp348[0xdU] = 0U;
            __Vtemp348[0xeU] = 0U;
            __Vtemp348[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp349, __Vtemp348, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp349[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_90 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp350[0U] = 1U;
            __Vtemp350[1U] = 0U;
            __Vtemp350[2U] = 0U;
            __Vtemp350[3U] = 0U;
            __Vtemp350[4U] = 0U;
            __Vtemp350[5U] = 0U;
            __Vtemp350[6U] = 0U;
            __Vtemp350[7U] = 0U;
            __Vtemp350[8U] = 0U;
            __Vtemp350[9U] = 0U;
            __Vtemp350[0xaU] = 0U;
            __Vtemp350[0xbU] = 0U;
            __Vtemp350[0xcU] = 0U;
            __Vtemp350[0xdU] = 0U;
            __Vtemp350[0xeU] = 0U;
            __Vtemp350[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp351, __Vtemp350, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp351[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_89 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp352[0U] = 1U;
            __Vtemp352[1U] = 0U;
            __Vtemp352[2U] = 0U;
            __Vtemp352[3U] = 0U;
            __Vtemp352[4U] = 0U;
            __Vtemp352[5U] = 0U;
            __Vtemp352[6U] = 0U;
            __Vtemp352[7U] = 0U;
            __Vtemp352[8U] = 0U;
            __Vtemp352[9U] = 0U;
            __Vtemp352[0xaU] = 0U;
            __Vtemp352[0xbU] = 0U;
            __Vtemp352[0xcU] = 0U;
            __Vtemp352[0xdU] = 0U;
            __Vtemp352[0xeU] = 0U;
            __Vtemp352[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp353, __Vtemp352, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp353[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_88 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp354[0U] = 1U;
            __Vtemp354[1U] = 0U;
            __Vtemp354[2U] = 0U;
            __Vtemp354[3U] = 0U;
            __Vtemp354[4U] = 0U;
            __Vtemp354[5U] = 0U;
            __Vtemp354[6U] = 0U;
            __Vtemp354[7U] = 0U;
            __Vtemp354[8U] = 0U;
            __Vtemp354[9U] = 0U;
            __Vtemp354[0xaU] = 0U;
            __Vtemp354[0xbU] = 0U;
            __Vtemp354[0xcU] = 0U;
            __Vtemp354[0xdU] = 0U;
            __Vtemp354[0xeU] = 0U;
            __Vtemp354[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp355, __Vtemp354, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp355[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_87 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp356[0U] = 1U;
            __Vtemp356[1U] = 0U;
            __Vtemp356[2U] = 0U;
            __Vtemp356[3U] = 0U;
            __Vtemp356[4U] = 0U;
            __Vtemp356[5U] = 0U;
            __Vtemp356[6U] = 0U;
            __Vtemp356[7U] = 0U;
            __Vtemp356[8U] = 0U;
            __Vtemp356[9U] = 0U;
            __Vtemp356[0xaU] = 0U;
            __Vtemp356[0xbU] = 0U;
            __Vtemp356[0xcU] = 0U;
            __Vtemp356[0xdU] = 0U;
            __Vtemp356[0xeU] = 0U;
            __Vtemp356[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp357, __Vtemp356, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp357[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_86 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp358[0U] = 1U;
            __Vtemp358[1U] = 0U;
            __Vtemp358[2U] = 0U;
            __Vtemp358[3U] = 0U;
            __Vtemp358[4U] = 0U;
            __Vtemp358[5U] = 0U;
            __Vtemp358[6U] = 0U;
            __Vtemp358[7U] = 0U;
            __Vtemp358[8U] = 0U;
            __Vtemp358[9U] = 0U;
            __Vtemp358[0xaU] = 0U;
            __Vtemp358[0xbU] = 0U;
            __Vtemp358[0xcU] = 0U;
            __Vtemp358[0xdU] = 0U;
            __Vtemp358[0xeU] = 0U;
            __Vtemp358[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp359, __Vtemp358, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp359[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_85 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp360[0U] = 1U;
            __Vtemp360[1U] = 0U;
            __Vtemp360[2U] = 0U;
            __Vtemp360[3U] = 0U;
            __Vtemp360[4U] = 0U;
            __Vtemp360[5U] = 0U;
            __Vtemp360[6U] = 0U;
            __Vtemp360[7U] = 0U;
            __Vtemp360[8U] = 0U;
            __Vtemp360[9U] = 0U;
            __Vtemp360[0xaU] = 0U;
            __Vtemp360[0xbU] = 0U;
            __Vtemp360[0xcU] = 0U;
            __Vtemp360[0xdU] = 0U;
            __Vtemp360[0xeU] = 0U;
            __Vtemp360[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp361, __Vtemp360, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp361[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_84 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp362[0U] = 1U;
            __Vtemp362[1U] = 0U;
            __Vtemp362[2U] = 0U;
            __Vtemp362[3U] = 0U;
            __Vtemp362[4U] = 0U;
            __Vtemp362[5U] = 0U;
            __Vtemp362[6U] = 0U;
            __Vtemp362[7U] = 0U;
            __Vtemp362[8U] = 0U;
            __Vtemp362[9U] = 0U;
            __Vtemp362[0xaU] = 0U;
            __Vtemp362[0xbU] = 0U;
            __Vtemp362[0xcU] = 0U;
            __Vtemp362[0xdU] = 0U;
            __Vtemp362[0xeU] = 0U;
            __Vtemp362[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp363, __Vtemp362, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp363[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_83 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp364[0U] = 1U;
            __Vtemp364[1U] = 0U;
            __Vtemp364[2U] = 0U;
            __Vtemp364[3U] = 0U;
            __Vtemp364[4U] = 0U;
            __Vtemp364[5U] = 0U;
            __Vtemp364[6U] = 0U;
            __Vtemp364[7U] = 0U;
            __Vtemp364[8U] = 0U;
            __Vtemp364[9U] = 0U;
            __Vtemp364[0xaU] = 0U;
            __Vtemp364[0xbU] = 0U;
            __Vtemp364[0xcU] = 0U;
            __Vtemp364[0xdU] = 0U;
            __Vtemp364[0xeU] = 0U;
            __Vtemp364[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp365, __Vtemp364, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp365[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_82 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp366[0U] = 1U;
            __Vtemp366[1U] = 0U;
            __Vtemp366[2U] = 0U;
            __Vtemp366[3U] = 0U;
            __Vtemp366[4U] = 0U;
            __Vtemp366[5U] = 0U;
            __Vtemp366[6U] = 0U;
            __Vtemp366[7U] = 0U;
            __Vtemp366[8U] = 0U;
            __Vtemp366[9U] = 0U;
            __Vtemp366[0xaU] = 0U;
            __Vtemp366[0xbU] = 0U;
            __Vtemp366[0xcU] = 0U;
            __Vtemp366[0xdU] = 0U;
            __Vtemp366[0xeU] = 0U;
            __Vtemp366[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp367, __Vtemp366, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp367[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_81 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp368[0U] = 1U;
            __Vtemp368[1U] = 0U;
            __Vtemp368[2U] = 0U;
            __Vtemp368[3U] = 0U;
            __Vtemp368[4U] = 0U;
            __Vtemp368[5U] = 0U;
            __Vtemp368[6U] = 0U;
            __Vtemp368[7U] = 0U;
            __Vtemp368[8U] = 0U;
            __Vtemp368[9U] = 0U;
            __Vtemp368[0xaU] = 0U;
            __Vtemp368[0xbU] = 0U;
            __Vtemp368[0xcU] = 0U;
            __Vtemp368[0xdU] = 0U;
            __Vtemp368[0xeU] = 0U;
            __Vtemp368[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp369, __Vtemp368, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp369[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_80 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp370[0U] = 1U;
            __Vtemp370[1U] = 0U;
            __Vtemp370[2U] = 0U;
            __Vtemp370[3U] = 0U;
            __Vtemp370[4U] = 0U;
            __Vtemp370[5U] = 0U;
            __Vtemp370[6U] = 0U;
            __Vtemp370[7U] = 0U;
            __Vtemp370[8U] = 0U;
            __Vtemp370[9U] = 0U;
            __Vtemp370[0xaU] = 0U;
            __Vtemp370[0xbU] = 0U;
            __Vtemp370[0xcU] = 0U;
            __Vtemp370[0xdU] = 0U;
            __Vtemp370[0xeU] = 0U;
            __Vtemp370[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp371, __Vtemp370, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp371[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_79 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp372[0U] = 1U;
            __Vtemp372[1U] = 0U;
            __Vtemp372[2U] = 0U;
            __Vtemp372[3U] = 0U;
            __Vtemp372[4U] = 0U;
            __Vtemp372[5U] = 0U;
            __Vtemp372[6U] = 0U;
            __Vtemp372[7U] = 0U;
            __Vtemp372[8U] = 0U;
            __Vtemp372[9U] = 0U;
            __Vtemp372[0xaU] = 0U;
            __Vtemp372[0xbU] = 0U;
            __Vtemp372[0xcU] = 0U;
            __Vtemp372[0xdU] = 0U;
            __Vtemp372[0xeU] = 0U;
            __Vtemp372[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp373, __Vtemp372, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp373[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_78 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp374[0U] = 1U;
            __Vtemp374[1U] = 0U;
            __Vtemp374[2U] = 0U;
            __Vtemp374[3U] = 0U;
            __Vtemp374[4U] = 0U;
            __Vtemp374[5U] = 0U;
            __Vtemp374[6U] = 0U;
            __Vtemp374[7U] = 0U;
            __Vtemp374[8U] = 0U;
            __Vtemp374[9U] = 0U;
            __Vtemp374[0xaU] = 0U;
            __Vtemp374[0xbU] = 0U;
            __Vtemp374[0xcU] = 0U;
            __Vtemp374[0xdU] = 0U;
            __Vtemp374[0xeU] = 0U;
            __Vtemp374[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp375, __Vtemp374, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp375[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_77 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp376[0U] = 1U;
            __Vtemp376[1U] = 0U;
            __Vtemp376[2U] = 0U;
            __Vtemp376[3U] = 0U;
            __Vtemp376[4U] = 0U;
            __Vtemp376[5U] = 0U;
            __Vtemp376[6U] = 0U;
            __Vtemp376[7U] = 0U;
            __Vtemp376[8U] = 0U;
            __Vtemp376[9U] = 0U;
            __Vtemp376[0xaU] = 0U;
            __Vtemp376[0xbU] = 0U;
            __Vtemp376[0xcU] = 0U;
            __Vtemp376[0xdU] = 0U;
            __Vtemp376[0xeU] = 0U;
            __Vtemp376[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp377, __Vtemp376, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp377[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_76 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp378[0U] = 1U;
            __Vtemp378[1U] = 0U;
            __Vtemp378[2U] = 0U;
            __Vtemp378[3U] = 0U;
            __Vtemp378[4U] = 0U;
            __Vtemp378[5U] = 0U;
            __Vtemp378[6U] = 0U;
            __Vtemp378[7U] = 0U;
            __Vtemp378[8U] = 0U;
            __Vtemp378[9U] = 0U;
            __Vtemp378[0xaU] = 0U;
            __Vtemp378[0xbU] = 0U;
            __Vtemp378[0xcU] = 0U;
            __Vtemp378[0xdU] = 0U;
            __Vtemp378[0xeU] = 0U;
            __Vtemp378[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp379, __Vtemp378, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp379[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_75 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp380[0U] = 1U;
            __Vtemp380[1U] = 0U;
            __Vtemp380[2U] = 0U;
            __Vtemp380[3U] = 0U;
            __Vtemp380[4U] = 0U;
            __Vtemp380[5U] = 0U;
            __Vtemp380[6U] = 0U;
            __Vtemp380[7U] = 0U;
            __Vtemp380[8U] = 0U;
            __Vtemp380[9U] = 0U;
            __Vtemp380[0xaU] = 0U;
            __Vtemp380[0xbU] = 0U;
            __Vtemp380[0xcU] = 0U;
            __Vtemp380[0xdU] = 0U;
            __Vtemp380[0xeU] = 0U;
            __Vtemp380[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp381, __Vtemp380, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp381[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_74 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp382[0U] = 1U;
            __Vtemp382[1U] = 0U;
            __Vtemp382[2U] = 0U;
            __Vtemp382[3U] = 0U;
            __Vtemp382[4U] = 0U;
            __Vtemp382[5U] = 0U;
            __Vtemp382[6U] = 0U;
            __Vtemp382[7U] = 0U;
            __Vtemp382[8U] = 0U;
            __Vtemp382[9U] = 0U;
            __Vtemp382[0xaU] = 0U;
            __Vtemp382[0xbU] = 0U;
            __Vtemp382[0xcU] = 0U;
            __Vtemp382[0xdU] = 0U;
            __Vtemp382[0xeU] = 0U;
            __Vtemp382[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp383, __Vtemp382, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp383[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_73 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp384[0U] = 1U;
            __Vtemp384[1U] = 0U;
            __Vtemp384[2U] = 0U;
            __Vtemp384[3U] = 0U;
            __Vtemp384[4U] = 0U;
            __Vtemp384[5U] = 0U;
            __Vtemp384[6U] = 0U;
            __Vtemp384[7U] = 0U;
            __Vtemp384[8U] = 0U;
            __Vtemp384[9U] = 0U;
            __Vtemp384[0xaU] = 0U;
            __Vtemp384[0xbU] = 0U;
            __Vtemp384[0xcU] = 0U;
            __Vtemp384[0xdU] = 0U;
            __Vtemp384[0xeU] = 0U;
            __Vtemp384[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp385, __Vtemp384, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp385[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_72 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp386[0U] = 1U;
            __Vtemp386[1U] = 0U;
            __Vtemp386[2U] = 0U;
            __Vtemp386[3U] = 0U;
            __Vtemp386[4U] = 0U;
            __Vtemp386[5U] = 0U;
            __Vtemp386[6U] = 0U;
            __Vtemp386[7U] = 0U;
            __Vtemp386[8U] = 0U;
            __Vtemp386[9U] = 0U;
            __Vtemp386[0xaU] = 0U;
            __Vtemp386[0xbU] = 0U;
            __Vtemp386[0xcU] = 0U;
            __Vtemp386[0xdU] = 0U;
            __Vtemp386[0xeU] = 0U;
            __Vtemp386[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp387, __Vtemp386, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp387[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_71 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp388[0U] = 1U;
            __Vtemp388[1U] = 0U;
            __Vtemp388[2U] = 0U;
            __Vtemp388[3U] = 0U;
            __Vtemp388[4U] = 0U;
            __Vtemp388[5U] = 0U;
            __Vtemp388[6U] = 0U;
            __Vtemp388[7U] = 0U;
            __Vtemp388[8U] = 0U;
            __Vtemp388[9U] = 0U;
            __Vtemp388[0xaU] = 0U;
            __Vtemp388[0xbU] = 0U;
            __Vtemp388[0xcU] = 0U;
            __Vtemp388[0xdU] = 0U;
            __Vtemp388[0xeU] = 0U;
            __Vtemp388[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp389, __Vtemp388, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp389[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_70 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp390[0U] = 1U;
            __Vtemp390[1U] = 0U;
            __Vtemp390[2U] = 0U;
            __Vtemp390[3U] = 0U;
            __Vtemp390[4U] = 0U;
            __Vtemp390[5U] = 0U;
            __Vtemp390[6U] = 0U;
            __Vtemp390[7U] = 0U;
            __Vtemp390[8U] = 0U;
            __Vtemp390[9U] = 0U;
            __Vtemp390[0xaU] = 0U;
            __Vtemp390[0xbU] = 0U;
            __Vtemp390[0xcU] = 0U;
            __Vtemp390[0xdU] = 0U;
            __Vtemp390[0xeU] = 0U;
            __Vtemp390[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp391, __Vtemp390, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp391[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_69 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp392[0U] = 1U;
            __Vtemp392[1U] = 0U;
            __Vtemp392[2U] = 0U;
            __Vtemp392[3U] = 0U;
            __Vtemp392[4U] = 0U;
            __Vtemp392[5U] = 0U;
            __Vtemp392[6U] = 0U;
            __Vtemp392[7U] = 0U;
            __Vtemp392[8U] = 0U;
            __Vtemp392[9U] = 0U;
            __Vtemp392[0xaU] = 0U;
            __Vtemp392[0xbU] = 0U;
            __Vtemp392[0xcU] = 0U;
            __Vtemp392[0xdU] = 0U;
            __Vtemp392[0xeU] = 0U;
            __Vtemp392[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp393, __Vtemp392, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp393[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_68 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp394[0U] = 1U;
            __Vtemp394[1U] = 0U;
            __Vtemp394[2U] = 0U;
            __Vtemp394[3U] = 0U;
            __Vtemp394[4U] = 0U;
            __Vtemp394[5U] = 0U;
            __Vtemp394[6U] = 0U;
            __Vtemp394[7U] = 0U;
            __Vtemp394[8U] = 0U;
            __Vtemp394[9U] = 0U;
            __Vtemp394[0xaU] = 0U;
            __Vtemp394[0xbU] = 0U;
            __Vtemp394[0xcU] = 0U;
            __Vtemp394[0xdU] = 0U;
            __Vtemp394[0xeU] = 0U;
            __Vtemp394[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp395, __Vtemp394, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp395[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_67 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp396[0U] = 1U;
            __Vtemp396[1U] = 0U;
            __Vtemp396[2U] = 0U;
            __Vtemp396[3U] = 0U;
            __Vtemp396[4U] = 0U;
            __Vtemp396[5U] = 0U;
            __Vtemp396[6U] = 0U;
            __Vtemp396[7U] = 0U;
            __Vtemp396[8U] = 0U;
            __Vtemp396[9U] = 0U;
            __Vtemp396[0xaU] = 0U;
            __Vtemp396[0xbU] = 0U;
            __Vtemp396[0xcU] = 0U;
            __Vtemp396[0xdU] = 0U;
            __Vtemp396[0xeU] = 0U;
            __Vtemp396[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp397, __Vtemp396, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp397[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_66 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp398[0U] = 1U;
            __Vtemp398[1U] = 0U;
            __Vtemp398[2U] = 0U;
            __Vtemp398[3U] = 0U;
            __Vtemp398[4U] = 0U;
            __Vtemp398[5U] = 0U;
            __Vtemp398[6U] = 0U;
            __Vtemp398[7U] = 0U;
            __Vtemp398[8U] = 0U;
            __Vtemp398[9U] = 0U;
            __Vtemp398[0xaU] = 0U;
            __Vtemp398[0xbU] = 0U;
            __Vtemp398[0xcU] = 0U;
            __Vtemp398[0xdU] = 0U;
            __Vtemp398[0xeU] = 0U;
            __Vtemp398[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp399, __Vtemp398, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp399[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_65 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp400[0U] = 1U;
            __Vtemp400[1U] = 0U;
            __Vtemp400[2U] = 0U;
            __Vtemp400[3U] = 0U;
            __Vtemp400[4U] = 0U;
            __Vtemp400[5U] = 0U;
            __Vtemp400[6U] = 0U;
            __Vtemp400[7U] = 0U;
            __Vtemp400[8U] = 0U;
            __Vtemp400[9U] = 0U;
            __Vtemp400[0xaU] = 0U;
            __Vtemp400[0xbU] = 0U;
            __Vtemp400[0xcU] = 0U;
            __Vtemp400[0xdU] = 0U;
            __Vtemp400[0xeU] = 0U;
            __Vtemp400[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp401, __Vtemp400, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp401[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_64 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp402[0U] = 1U;
            __Vtemp402[1U] = 0U;
            __Vtemp402[2U] = 0U;
            __Vtemp402[3U] = 0U;
            __Vtemp402[4U] = 0U;
            __Vtemp402[5U] = 0U;
            __Vtemp402[6U] = 0U;
            __Vtemp402[7U] = 0U;
            __Vtemp402[8U] = 0U;
            __Vtemp402[9U] = 0U;
            __Vtemp402[0xaU] = 0U;
            __Vtemp402[0xbU] = 0U;
            __Vtemp402[0xcU] = 0U;
            __Vtemp402[0xdU] = 0U;
            __Vtemp402[0xeU] = 0U;
            __Vtemp402[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp403, __Vtemp402, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp403[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_63 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}
