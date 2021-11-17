// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__43(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__43\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp277[16];
    WData/*511:0*/ __Vtemp278[16];
    WData/*511:0*/ __Vtemp279[16];
    WData/*511:0*/ __Vtemp280[16];
    WData/*511:0*/ __Vtemp281[16];
    WData/*511:0*/ __Vtemp282[16];
    WData/*511:0*/ __Vtemp283[16];
    WData/*511:0*/ __Vtemp284[16];
    WData/*511:0*/ __Vtemp285[16];
    WData/*511:0*/ __Vtemp286[16];
    WData/*511:0*/ __Vtemp287[16];
    WData/*511:0*/ __Vtemp288[16];
    WData/*511:0*/ __Vtemp289[16];
    WData/*511:0*/ __Vtemp290[16];
    WData/*511:0*/ __Vtemp291[16];
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
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp277[0U] = 1U;
            __Vtemp277[1U] = 0U;
            __Vtemp277[2U] = 0U;
            __Vtemp277[3U] = 0U;
            __Vtemp277[4U] = 0U;
            __Vtemp277[5U] = 0U;
            __Vtemp277[6U] = 0U;
            __Vtemp277[7U] = 0U;
            __Vtemp277[8U] = 0U;
            __Vtemp277[9U] = 0U;
            __Vtemp277[0xaU] = 0U;
            __Vtemp277[0xbU] = 0U;
            __Vtemp277[0xcU] = 0U;
            __Vtemp277[0xdU] = 0U;
            __Vtemp277[0xeU] = 0U;
            __Vtemp277[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp278, __Vtemp277, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp278[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_125 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp279[0U] = 1U;
            __Vtemp279[1U] = 0U;
            __Vtemp279[2U] = 0U;
            __Vtemp279[3U] = 0U;
            __Vtemp279[4U] = 0U;
            __Vtemp279[5U] = 0U;
            __Vtemp279[6U] = 0U;
            __Vtemp279[7U] = 0U;
            __Vtemp279[8U] = 0U;
            __Vtemp279[9U] = 0U;
            __Vtemp279[0xaU] = 0U;
            __Vtemp279[0xbU] = 0U;
            __Vtemp279[0xcU] = 0U;
            __Vtemp279[0xdU] = 0U;
            __Vtemp279[0xeU] = 0U;
            __Vtemp279[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp280, __Vtemp279, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp280[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_124 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp281[0U] = 1U;
            __Vtemp281[1U] = 0U;
            __Vtemp281[2U] = 0U;
            __Vtemp281[3U] = 0U;
            __Vtemp281[4U] = 0U;
            __Vtemp281[5U] = 0U;
            __Vtemp281[6U] = 0U;
            __Vtemp281[7U] = 0U;
            __Vtemp281[8U] = 0U;
            __Vtemp281[9U] = 0U;
            __Vtemp281[0xaU] = 0U;
            __Vtemp281[0xbU] = 0U;
            __Vtemp281[0xcU] = 0U;
            __Vtemp281[0xdU] = 0U;
            __Vtemp281[0xeU] = 0U;
            __Vtemp281[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp282, __Vtemp281, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp282[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_123 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp283[0U] = 1U;
            __Vtemp283[1U] = 0U;
            __Vtemp283[2U] = 0U;
            __Vtemp283[3U] = 0U;
            __Vtemp283[4U] = 0U;
            __Vtemp283[5U] = 0U;
            __Vtemp283[6U] = 0U;
            __Vtemp283[7U] = 0U;
            __Vtemp283[8U] = 0U;
            __Vtemp283[9U] = 0U;
            __Vtemp283[0xaU] = 0U;
            __Vtemp283[0xbU] = 0U;
            __Vtemp283[0xcU] = 0U;
            __Vtemp283[0xdU] = 0U;
            __Vtemp283[0xeU] = 0U;
            __Vtemp283[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp284, __Vtemp283, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp284[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_122 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp285[0U] = 1U;
            __Vtemp285[1U] = 0U;
            __Vtemp285[2U] = 0U;
            __Vtemp285[3U] = 0U;
            __Vtemp285[4U] = 0U;
            __Vtemp285[5U] = 0U;
            __Vtemp285[6U] = 0U;
            __Vtemp285[7U] = 0U;
            __Vtemp285[8U] = 0U;
            __Vtemp285[9U] = 0U;
            __Vtemp285[0xaU] = 0U;
            __Vtemp285[0xbU] = 0U;
            __Vtemp285[0xcU] = 0U;
            __Vtemp285[0xdU] = 0U;
            __Vtemp285[0xeU] = 0U;
            __Vtemp285[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp286, __Vtemp285, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp286[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_121 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp287[0U] = 1U;
            __Vtemp287[1U] = 0U;
            __Vtemp287[2U] = 0U;
            __Vtemp287[3U] = 0U;
            __Vtemp287[4U] = 0U;
            __Vtemp287[5U] = 0U;
            __Vtemp287[6U] = 0U;
            __Vtemp287[7U] = 0U;
            __Vtemp287[8U] = 0U;
            __Vtemp287[9U] = 0U;
            __Vtemp287[0xaU] = 0U;
            __Vtemp287[0xbU] = 0U;
            __Vtemp287[0xcU] = 0U;
            __Vtemp287[0xdU] = 0U;
            __Vtemp287[0xeU] = 0U;
            __Vtemp287[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp288, __Vtemp287, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp288[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_120 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp289[0U] = 1U;
            __Vtemp289[1U] = 0U;
            __Vtemp289[2U] = 0U;
            __Vtemp289[3U] = 0U;
            __Vtemp289[4U] = 0U;
            __Vtemp289[5U] = 0U;
            __Vtemp289[6U] = 0U;
            __Vtemp289[7U] = 0U;
            __Vtemp289[8U] = 0U;
            __Vtemp289[9U] = 0U;
            __Vtemp289[0xaU] = 0U;
            __Vtemp289[0xbU] = 0U;
            __Vtemp289[0xcU] = 0U;
            __Vtemp289[0xdU] = 0U;
            __Vtemp289[0xeU] = 0U;
            __Vtemp289[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp290, __Vtemp289, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp290[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_119 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp291[0U] = 1U;
            __Vtemp291[1U] = 0U;
            __Vtemp291[2U] = 0U;
            __Vtemp291[3U] = 0U;
            __Vtemp291[4U] = 0U;
            __Vtemp291[5U] = 0U;
            __Vtemp291[6U] = 0U;
            __Vtemp291[7U] = 0U;
            __Vtemp291[8U] = 0U;
            __Vtemp291[9U] = 0U;
            __Vtemp291[0xaU] = 0U;
            __Vtemp291[0xbU] = 0U;
            __Vtemp291[0xcU] = 0U;
            __Vtemp291[0xdU] = 0U;
            __Vtemp291[0xeU] = 0U;
            __Vtemp291[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp292, __Vtemp291, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp292[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_118 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp293[0U] = 1U;
            __Vtemp293[1U] = 0U;
            __Vtemp293[2U] = 0U;
            __Vtemp293[3U] = 0U;
            __Vtemp293[4U] = 0U;
            __Vtemp293[5U] = 0U;
            __Vtemp293[6U] = 0U;
            __Vtemp293[7U] = 0U;
            __Vtemp293[8U] = 0U;
            __Vtemp293[9U] = 0U;
            __Vtemp293[0xaU] = 0U;
            __Vtemp293[0xbU] = 0U;
            __Vtemp293[0xcU] = 0U;
            __Vtemp293[0xdU] = 0U;
            __Vtemp293[0xeU] = 0U;
            __Vtemp293[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp294, __Vtemp293, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp294[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_117 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp295[0U] = 1U;
            __Vtemp295[1U] = 0U;
            __Vtemp295[2U] = 0U;
            __Vtemp295[3U] = 0U;
            __Vtemp295[4U] = 0U;
            __Vtemp295[5U] = 0U;
            __Vtemp295[6U] = 0U;
            __Vtemp295[7U] = 0U;
            __Vtemp295[8U] = 0U;
            __Vtemp295[9U] = 0U;
            __Vtemp295[0xaU] = 0U;
            __Vtemp295[0xbU] = 0U;
            __Vtemp295[0xcU] = 0U;
            __Vtemp295[0xdU] = 0U;
            __Vtemp295[0xeU] = 0U;
            __Vtemp295[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp296, __Vtemp295, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp296[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_116 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp297[0U] = 1U;
            __Vtemp297[1U] = 0U;
            __Vtemp297[2U] = 0U;
            __Vtemp297[3U] = 0U;
            __Vtemp297[4U] = 0U;
            __Vtemp297[5U] = 0U;
            __Vtemp297[6U] = 0U;
            __Vtemp297[7U] = 0U;
            __Vtemp297[8U] = 0U;
            __Vtemp297[9U] = 0U;
            __Vtemp297[0xaU] = 0U;
            __Vtemp297[0xbU] = 0U;
            __Vtemp297[0xcU] = 0U;
            __Vtemp297[0xdU] = 0U;
            __Vtemp297[0xeU] = 0U;
            __Vtemp297[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp298, __Vtemp297, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp298[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_115 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp299[0U] = 1U;
            __Vtemp299[1U] = 0U;
            __Vtemp299[2U] = 0U;
            __Vtemp299[3U] = 0U;
            __Vtemp299[4U] = 0U;
            __Vtemp299[5U] = 0U;
            __Vtemp299[6U] = 0U;
            __Vtemp299[7U] = 0U;
            __Vtemp299[8U] = 0U;
            __Vtemp299[9U] = 0U;
            __Vtemp299[0xaU] = 0U;
            __Vtemp299[0xbU] = 0U;
            __Vtemp299[0xcU] = 0U;
            __Vtemp299[0xdU] = 0U;
            __Vtemp299[0xeU] = 0U;
            __Vtemp299[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp300, __Vtemp299, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp300[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_114 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp301[0U] = 1U;
            __Vtemp301[1U] = 0U;
            __Vtemp301[2U] = 0U;
            __Vtemp301[3U] = 0U;
            __Vtemp301[4U] = 0U;
            __Vtemp301[5U] = 0U;
            __Vtemp301[6U] = 0U;
            __Vtemp301[7U] = 0U;
            __Vtemp301[8U] = 0U;
            __Vtemp301[9U] = 0U;
            __Vtemp301[0xaU] = 0U;
            __Vtemp301[0xbU] = 0U;
            __Vtemp301[0xcU] = 0U;
            __Vtemp301[0xdU] = 0U;
            __Vtemp301[0xeU] = 0U;
            __Vtemp301[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp302, __Vtemp301, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp302[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_113 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp303[0U] = 1U;
            __Vtemp303[1U] = 0U;
            __Vtemp303[2U] = 0U;
            __Vtemp303[3U] = 0U;
            __Vtemp303[4U] = 0U;
            __Vtemp303[5U] = 0U;
            __Vtemp303[6U] = 0U;
            __Vtemp303[7U] = 0U;
            __Vtemp303[8U] = 0U;
            __Vtemp303[9U] = 0U;
            __Vtemp303[0xaU] = 0U;
            __Vtemp303[0xbU] = 0U;
            __Vtemp303[0xcU] = 0U;
            __Vtemp303[0xdU] = 0U;
            __Vtemp303[0xeU] = 0U;
            __Vtemp303[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp304, __Vtemp303, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp304[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_112 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp305[0U] = 1U;
            __Vtemp305[1U] = 0U;
            __Vtemp305[2U] = 0U;
            __Vtemp305[3U] = 0U;
            __Vtemp305[4U] = 0U;
            __Vtemp305[5U] = 0U;
            __Vtemp305[6U] = 0U;
            __Vtemp305[7U] = 0U;
            __Vtemp305[8U] = 0U;
            __Vtemp305[9U] = 0U;
            __Vtemp305[0xaU] = 0U;
            __Vtemp305[0xbU] = 0U;
            __Vtemp305[0xcU] = 0U;
            __Vtemp305[0xdU] = 0U;
            __Vtemp305[0xeU] = 0U;
            __Vtemp305[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp306, __Vtemp305, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp306[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_111 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp307[0U] = 1U;
            __Vtemp307[1U] = 0U;
            __Vtemp307[2U] = 0U;
            __Vtemp307[3U] = 0U;
            __Vtemp307[4U] = 0U;
            __Vtemp307[5U] = 0U;
            __Vtemp307[6U] = 0U;
            __Vtemp307[7U] = 0U;
            __Vtemp307[8U] = 0U;
            __Vtemp307[9U] = 0U;
            __Vtemp307[0xaU] = 0U;
            __Vtemp307[0xbU] = 0U;
            __Vtemp307[0xcU] = 0U;
            __Vtemp307[0xdU] = 0U;
            __Vtemp307[0xeU] = 0U;
            __Vtemp307[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp308, __Vtemp307, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp308[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_110 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp309[0U] = 1U;
            __Vtemp309[1U] = 0U;
            __Vtemp309[2U] = 0U;
            __Vtemp309[3U] = 0U;
            __Vtemp309[4U] = 0U;
            __Vtemp309[5U] = 0U;
            __Vtemp309[6U] = 0U;
            __Vtemp309[7U] = 0U;
            __Vtemp309[8U] = 0U;
            __Vtemp309[9U] = 0U;
            __Vtemp309[0xaU] = 0U;
            __Vtemp309[0xbU] = 0U;
            __Vtemp309[0xcU] = 0U;
            __Vtemp309[0xdU] = 0U;
            __Vtemp309[0xeU] = 0U;
            __Vtemp309[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp310, __Vtemp309, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp310[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_109 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp311[0U] = 1U;
            __Vtemp311[1U] = 0U;
            __Vtemp311[2U] = 0U;
            __Vtemp311[3U] = 0U;
            __Vtemp311[4U] = 0U;
            __Vtemp311[5U] = 0U;
            __Vtemp311[6U] = 0U;
            __Vtemp311[7U] = 0U;
            __Vtemp311[8U] = 0U;
            __Vtemp311[9U] = 0U;
            __Vtemp311[0xaU] = 0U;
            __Vtemp311[0xbU] = 0U;
            __Vtemp311[0xcU] = 0U;
            __Vtemp311[0xdU] = 0U;
            __Vtemp311[0xeU] = 0U;
            __Vtemp311[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp312, __Vtemp311, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp312[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_108 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp313[0U] = 1U;
            __Vtemp313[1U] = 0U;
            __Vtemp313[2U] = 0U;
            __Vtemp313[3U] = 0U;
            __Vtemp313[4U] = 0U;
            __Vtemp313[5U] = 0U;
            __Vtemp313[6U] = 0U;
            __Vtemp313[7U] = 0U;
            __Vtemp313[8U] = 0U;
            __Vtemp313[9U] = 0U;
            __Vtemp313[0xaU] = 0U;
            __Vtemp313[0xbU] = 0U;
            __Vtemp313[0xcU] = 0U;
            __Vtemp313[0xdU] = 0U;
            __Vtemp313[0xeU] = 0U;
            __Vtemp313[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp314, __Vtemp313, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp314[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_107 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp315[0U] = 1U;
            __Vtemp315[1U] = 0U;
            __Vtemp315[2U] = 0U;
            __Vtemp315[3U] = 0U;
            __Vtemp315[4U] = 0U;
            __Vtemp315[5U] = 0U;
            __Vtemp315[6U] = 0U;
            __Vtemp315[7U] = 0U;
            __Vtemp315[8U] = 0U;
            __Vtemp315[9U] = 0U;
            __Vtemp315[0xaU] = 0U;
            __Vtemp315[0xbU] = 0U;
            __Vtemp315[0xcU] = 0U;
            __Vtemp315[0xdU] = 0U;
            __Vtemp315[0xeU] = 0U;
            __Vtemp315[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp316, __Vtemp315, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp316[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_106 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp317[0U] = 1U;
            __Vtemp317[1U] = 0U;
            __Vtemp317[2U] = 0U;
            __Vtemp317[3U] = 0U;
            __Vtemp317[4U] = 0U;
            __Vtemp317[5U] = 0U;
            __Vtemp317[6U] = 0U;
            __Vtemp317[7U] = 0U;
            __Vtemp317[8U] = 0U;
            __Vtemp317[9U] = 0U;
            __Vtemp317[0xaU] = 0U;
            __Vtemp317[0xbU] = 0U;
            __Vtemp317[0xcU] = 0U;
            __Vtemp317[0xdU] = 0U;
            __Vtemp317[0xeU] = 0U;
            __Vtemp317[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp318, __Vtemp317, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp318[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_105 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp319[0U] = 1U;
            __Vtemp319[1U] = 0U;
            __Vtemp319[2U] = 0U;
            __Vtemp319[3U] = 0U;
            __Vtemp319[4U] = 0U;
            __Vtemp319[5U] = 0U;
            __Vtemp319[6U] = 0U;
            __Vtemp319[7U] = 0U;
            __Vtemp319[8U] = 0U;
            __Vtemp319[9U] = 0U;
            __Vtemp319[0xaU] = 0U;
            __Vtemp319[0xbU] = 0U;
            __Vtemp319[0xcU] = 0U;
            __Vtemp319[0xdU] = 0U;
            __Vtemp319[0xeU] = 0U;
            __Vtemp319[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp320, __Vtemp319, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp320[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_104 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp321[0U] = 1U;
            __Vtemp321[1U] = 0U;
            __Vtemp321[2U] = 0U;
            __Vtemp321[3U] = 0U;
            __Vtemp321[4U] = 0U;
            __Vtemp321[5U] = 0U;
            __Vtemp321[6U] = 0U;
            __Vtemp321[7U] = 0U;
            __Vtemp321[8U] = 0U;
            __Vtemp321[9U] = 0U;
            __Vtemp321[0xaU] = 0U;
            __Vtemp321[0xbU] = 0U;
            __Vtemp321[0xcU] = 0U;
            __Vtemp321[0xdU] = 0U;
            __Vtemp321[0xeU] = 0U;
            __Vtemp321[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp322, __Vtemp321, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp322[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_103 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp323[0U] = 1U;
            __Vtemp323[1U] = 0U;
            __Vtemp323[2U] = 0U;
            __Vtemp323[3U] = 0U;
            __Vtemp323[4U] = 0U;
            __Vtemp323[5U] = 0U;
            __Vtemp323[6U] = 0U;
            __Vtemp323[7U] = 0U;
            __Vtemp323[8U] = 0U;
            __Vtemp323[9U] = 0U;
            __Vtemp323[0xaU] = 0U;
            __Vtemp323[0xbU] = 0U;
            __Vtemp323[0xcU] = 0U;
            __Vtemp323[0xdU] = 0U;
            __Vtemp323[0xeU] = 0U;
            __Vtemp323[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp324, __Vtemp323, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp324[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_102 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp325[0U] = 1U;
            __Vtemp325[1U] = 0U;
            __Vtemp325[2U] = 0U;
            __Vtemp325[3U] = 0U;
            __Vtemp325[4U] = 0U;
            __Vtemp325[5U] = 0U;
            __Vtemp325[6U] = 0U;
            __Vtemp325[7U] = 0U;
            __Vtemp325[8U] = 0U;
            __Vtemp325[9U] = 0U;
            __Vtemp325[0xaU] = 0U;
            __Vtemp325[0xbU] = 0U;
            __Vtemp325[0xcU] = 0U;
            __Vtemp325[0xdU] = 0U;
            __Vtemp325[0xeU] = 0U;
            __Vtemp325[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp326, __Vtemp325, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp326[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_101 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp327[0U] = 1U;
            __Vtemp327[1U] = 0U;
            __Vtemp327[2U] = 0U;
            __Vtemp327[3U] = 0U;
            __Vtemp327[4U] = 0U;
            __Vtemp327[5U] = 0U;
            __Vtemp327[6U] = 0U;
            __Vtemp327[7U] = 0U;
            __Vtemp327[8U] = 0U;
            __Vtemp327[9U] = 0U;
            __Vtemp327[0xaU] = 0U;
            __Vtemp327[0xbU] = 0U;
            __Vtemp327[0xcU] = 0U;
            __Vtemp327[0xdU] = 0U;
            __Vtemp327[0xeU] = 0U;
            __Vtemp327[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp328, __Vtemp327, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp328[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_100 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp329[0U] = 1U;
            __Vtemp329[1U] = 0U;
            __Vtemp329[2U] = 0U;
            __Vtemp329[3U] = 0U;
            __Vtemp329[4U] = 0U;
            __Vtemp329[5U] = 0U;
            __Vtemp329[6U] = 0U;
            __Vtemp329[7U] = 0U;
            __Vtemp329[8U] = 0U;
            __Vtemp329[9U] = 0U;
            __Vtemp329[0xaU] = 0U;
            __Vtemp329[0xbU] = 0U;
            __Vtemp329[0xcU] = 0U;
            __Vtemp329[0xdU] = 0U;
            __Vtemp329[0xeU] = 0U;
            __Vtemp329[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp330, __Vtemp329, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp330[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_99 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp331[0U] = 1U;
            __Vtemp331[1U] = 0U;
            __Vtemp331[2U] = 0U;
            __Vtemp331[3U] = 0U;
            __Vtemp331[4U] = 0U;
            __Vtemp331[5U] = 0U;
            __Vtemp331[6U] = 0U;
            __Vtemp331[7U] = 0U;
            __Vtemp331[8U] = 0U;
            __Vtemp331[9U] = 0U;
            __Vtemp331[0xaU] = 0U;
            __Vtemp331[0xbU] = 0U;
            __Vtemp331[0xcU] = 0U;
            __Vtemp331[0xdU] = 0U;
            __Vtemp331[0xeU] = 0U;
            __Vtemp331[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp332, __Vtemp331, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp332[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_98 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__44(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__44\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
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
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp333[0U] = 1U;
            __Vtemp333[1U] = 0U;
            __Vtemp333[2U] = 0U;
            __Vtemp333[3U] = 0U;
            __Vtemp333[4U] = 0U;
            __Vtemp333[5U] = 0U;
            __Vtemp333[6U] = 0U;
            __Vtemp333[7U] = 0U;
            __Vtemp333[8U] = 0U;
            __Vtemp333[9U] = 0U;
            __Vtemp333[0xaU] = 0U;
            __Vtemp333[0xbU] = 0U;
            __Vtemp333[0xcU] = 0U;
            __Vtemp333[0xdU] = 0U;
            __Vtemp333[0xeU] = 0U;
            __Vtemp333[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp334, __Vtemp333, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp334[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_97 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp335[0U] = 1U;
            __Vtemp335[1U] = 0U;
            __Vtemp335[2U] = 0U;
            __Vtemp335[3U] = 0U;
            __Vtemp335[4U] = 0U;
            __Vtemp335[5U] = 0U;
            __Vtemp335[6U] = 0U;
            __Vtemp335[7U] = 0U;
            __Vtemp335[8U] = 0U;
            __Vtemp335[9U] = 0U;
            __Vtemp335[0xaU] = 0U;
            __Vtemp335[0xbU] = 0U;
            __Vtemp335[0xcU] = 0U;
            __Vtemp335[0xdU] = 0U;
            __Vtemp335[0xeU] = 0U;
            __Vtemp335[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp336, __Vtemp335, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp336[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_96 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp337[0U] = 1U;
            __Vtemp337[1U] = 0U;
            __Vtemp337[2U] = 0U;
            __Vtemp337[3U] = 0U;
            __Vtemp337[4U] = 0U;
            __Vtemp337[5U] = 0U;
            __Vtemp337[6U] = 0U;
            __Vtemp337[7U] = 0U;
            __Vtemp337[8U] = 0U;
            __Vtemp337[9U] = 0U;
            __Vtemp337[0xaU] = 0U;
            __Vtemp337[0xbU] = 0U;
            __Vtemp337[0xcU] = 0U;
            __Vtemp337[0xdU] = 0U;
            __Vtemp337[0xeU] = 0U;
            __Vtemp337[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp338, __Vtemp337, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp338[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_95 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp339[0U] = 1U;
            __Vtemp339[1U] = 0U;
            __Vtemp339[2U] = 0U;
            __Vtemp339[3U] = 0U;
            __Vtemp339[4U] = 0U;
            __Vtemp339[5U] = 0U;
            __Vtemp339[6U] = 0U;
            __Vtemp339[7U] = 0U;
            __Vtemp339[8U] = 0U;
            __Vtemp339[9U] = 0U;
            __Vtemp339[0xaU] = 0U;
            __Vtemp339[0xbU] = 0U;
            __Vtemp339[0xcU] = 0U;
            __Vtemp339[0xdU] = 0U;
            __Vtemp339[0xeU] = 0U;
            __Vtemp339[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp340, __Vtemp339, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp340[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_94 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp341[0U] = 1U;
            __Vtemp341[1U] = 0U;
            __Vtemp341[2U] = 0U;
            __Vtemp341[3U] = 0U;
            __Vtemp341[4U] = 0U;
            __Vtemp341[5U] = 0U;
            __Vtemp341[6U] = 0U;
            __Vtemp341[7U] = 0U;
            __Vtemp341[8U] = 0U;
            __Vtemp341[9U] = 0U;
            __Vtemp341[0xaU] = 0U;
            __Vtemp341[0xbU] = 0U;
            __Vtemp341[0xcU] = 0U;
            __Vtemp341[0xdU] = 0U;
            __Vtemp341[0xeU] = 0U;
            __Vtemp341[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp342, __Vtemp341, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp342[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_93 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp343[0U] = 1U;
            __Vtemp343[1U] = 0U;
            __Vtemp343[2U] = 0U;
            __Vtemp343[3U] = 0U;
            __Vtemp343[4U] = 0U;
            __Vtemp343[5U] = 0U;
            __Vtemp343[6U] = 0U;
            __Vtemp343[7U] = 0U;
            __Vtemp343[8U] = 0U;
            __Vtemp343[9U] = 0U;
            __Vtemp343[0xaU] = 0U;
            __Vtemp343[0xbU] = 0U;
            __Vtemp343[0xcU] = 0U;
            __Vtemp343[0xdU] = 0U;
            __Vtemp343[0xeU] = 0U;
            __Vtemp343[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp344, __Vtemp343, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp344[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_92 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp345[0U] = 1U;
            __Vtemp345[1U] = 0U;
            __Vtemp345[2U] = 0U;
            __Vtemp345[3U] = 0U;
            __Vtemp345[4U] = 0U;
            __Vtemp345[5U] = 0U;
            __Vtemp345[6U] = 0U;
            __Vtemp345[7U] = 0U;
            __Vtemp345[8U] = 0U;
            __Vtemp345[9U] = 0U;
            __Vtemp345[0xaU] = 0U;
            __Vtemp345[0xbU] = 0U;
            __Vtemp345[0xcU] = 0U;
            __Vtemp345[0xdU] = 0U;
            __Vtemp345[0xeU] = 0U;
            __Vtemp345[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp346, __Vtemp345, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp346[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_91 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp347[0U] = 1U;
            __Vtemp347[1U] = 0U;
            __Vtemp347[2U] = 0U;
            __Vtemp347[3U] = 0U;
            __Vtemp347[4U] = 0U;
            __Vtemp347[5U] = 0U;
            __Vtemp347[6U] = 0U;
            __Vtemp347[7U] = 0U;
            __Vtemp347[8U] = 0U;
            __Vtemp347[9U] = 0U;
            __Vtemp347[0xaU] = 0U;
            __Vtemp347[0xbU] = 0U;
            __Vtemp347[0xcU] = 0U;
            __Vtemp347[0xdU] = 0U;
            __Vtemp347[0xeU] = 0U;
            __Vtemp347[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp348, __Vtemp347, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp348[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_90 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp349[0U] = 1U;
            __Vtemp349[1U] = 0U;
            __Vtemp349[2U] = 0U;
            __Vtemp349[3U] = 0U;
            __Vtemp349[4U] = 0U;
            __Vtemp349[5U] = 0U;
            __Vtemp349[6U] = 0U;
            __Vtemp349[7U] = 0U;
            __Vtemp349[8U] = 0U;
            __Vtemp349[9U] = 0U;
            __Vtemp349[0xaU] = 0U;
            __Vtemp349[0xbU] = 0U;
            __Vtemp349[0xcU] = 0U;
            __Vtemp349[0xdU] = 0U;
            __Vtemp349[0xeU] = 0U;
            __Vtemp349[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp350, __Vtemp349, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp350[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_89 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp351[0U] = 1U;
            __Vtemp351[1U] = 0U;
            __Vtemp351[2U] = 0U;
            __Vtemp351[3U] = 0U;
            __Vtemp351[4U] = 0U;
            __Vtemp351[5U] = 0U;
            __Vtemp351[6U] = 0U;
            __Vtemp351[7U] = 0U;
            __Vtemp351[8U] = 0U;
            __Vtemp351[9U] = 0U;
            __Vtemp351[0xaU] = 0U;
            __Vtemp351[0xbU] = 0U;
            __Vtemp351[0xcU] = 0U;
            __Vtemp351[0xdU] = 0U;
            __Vtemp351[0xeU] = 0U;
            __Vtemp351[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp352, __Vtemp351, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp352[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_88 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp353[0U] = 1U;
            __Vtemp353[1U] = 0U;
            __Vtemp353[2U] = 0U;
            __Vtemp353[3U] = 0U;
            __Vtemp353[4U] = 0U;
            __Vtemp353[5U] = 0U;
            __Vtemp353[6U] = 0U;
            __Vtemp353[7U] = 0U;
            __Vtemp353[8U] = 0U;
            __Vtemp353[9U] = 0U;
            __Vtemp353[0xaU] = 0U;
            __Vtemp353[0xbU] = 0U;
            __Vtemp353[0xcU] = 0U;
            __Vtemp353[0xdU] = 0U;
            __Vtemp353[0xeU] = 0U;
            __Vtemp353[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp354, __Vtemp353, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp354[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_87 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp355[0U] = 1U;
            __Vtemp355[1U] = 0U;
            __Vtemp355[2U] = 0U;
            __Vtemp355[3U] = 0U;
            __Vtemp355[4U] = 0U;
            __Vtemp355[5U] = 0U;
            __Vtemp355[6U] = 0U;
            __Vtemp355[7U] = 0U;
            __Vtemp355[8U] = 0U;
            __Vtemp355[9U] = 0U;
            __Vtemp355[0xaU] = 0U;
            __Vtemp355[0xbU] = 0U;
            __Vtemp355[0xcU] = 0U;
            __Vtemp355[0xdU] = 0U;
            __Vtemp355[0xeU] = 0U;
            __Vtemp355[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp356, __Vtemp355, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp356[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_86 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp357[0U] = 1U;
            __Vtemp357[1U] = 0U;
            __Vtemp357[2U] = 0U;
            __Vtemp357[3U] = 0U;
            __Vtemp357[4U] = 0U;
            __Vtemp357[5U] = 0U;
            __Vtemp357[6U] = 0U;
            __Vtemp357[7U] = 0U;
            __Vtemp357[8U] = 0U;
            __Vtemp357[9U] = 0U;
            __Vtemp357[0xaU] = 0U;
            __Vtemp357[0xbU] = 0U;
            __Vtemp357[0xcU] = 0U;
            __Vtemp357[0xdU] = 0U;
            __Vtemp357[0xeU] = 0U;
            __Vtemp357[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp358, __Vtemp357, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp358[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_85 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp359[0U] = 1U;
            __Vtemp359[1U] = 0U;
            __Vtemp359[2U] = 0U;
            __Vtemp359[3U] = 0U;
            __Vtemp359[4U] = 0U;
            __Vtemp359[5U] = 0U;
            __Vtemp359[6U] = 0U;
            __Vtemp359[7U] = 0U;
            __Vtemp359[8U] = 0U;
            __Vtemp359[9U] = 0U;
            __Vtemp359[0xaU] = 0U;
            __Vtemp359[0xbU] = 0U;
            __Vtemp359[0xcU] = 0U;
            __Vtemp359[0xdU] = 0U;
            __Vtemp359[0xeU] = 0U;
            __Vtemp359[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp360, __Vtemp359, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100000U & __Vtemp360[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_84 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp361[0U] = 1U;
            __Vtemp361[1U] = 0U;
            __Vtemp361[2U] = 0U;
            __Vtemp361[3U] = 0U;
            __Vtemp361[4U] = 0U;
            __Vtemp361[5U] = 0U;
            __Vtemp361[6U] = 0U;
            __Vtemp361[7U] = 0U;
            __Vtemp361[8U] = 0U;
            __Vtemp361[9U] = 0U;
            __Vtemp361[0xaU] = 0U;
            __Vtemp361[0xbU] = 0U;
            __Vtemp361[0xcU] = 0U;
            __Vtemp361[0xdU] = 0U;
            __Vtemp361[0xeU] = 0U;
            __Vtemp361[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp362, __Vtemp361, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp362[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_83 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp363[0U] = 1U;
            __Vtemp363[1U] = 0U;
            __Vtemp363[2U] = 0U;
            __Vtemp363[3U] = 0U;
            __Vtemp363[4U] = 0U;
            __Vtemp363[5U] = 0U;
            __Vtemp363[6U] = 0U;
            __Vtemp363[7U] = 0U;
            __Vtemp363[8U] = 0U;
            __Vtemp363[9U] = 0U;
            __Vtemp363[0xaU] = 0U;
            __Vtemp363[0xbU] = 0U;
            __Vtemp363[0xcU] = 0U;
            __Vtemp363[0xdU] = 0U;
            __Vtemp363[0xeU] = 0U;
            __Vtemp363[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp364, __Vtemp363, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000U & __Vtemp364[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_82 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp365[0U] = 1U;
            __Vtemp365[1U] = 0U;
            __Vtemp365[2U] = 0U;
            __Vtemp365[3U] = 0U;
            __Vtemp365[4U] = 0U;
            __Vtemp365[5U] = 0U;
            __Vtemp365[6U] = 0U;
            __Vtemp365[7U] = 0U;
            __Vtemp365[8U] = 0U;
            __Vtemp365[9U] = 0U;
            __Vtemp365[0xaU] = 0U;
            __Vtemp365[0xbU] = 0U;
            __Vtemp365[0xcU] = 0U;
            __Vtemp365[0xdU] = 0U;
            __Vtemp365[0xeU] = 0U;
            __Vtemp365[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp366, __Vtemp365, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp366[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_81 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp367[0U] = 1U;
            __Vtemp367[1U] = 0U;
            __Vtemp367[2U] = 0U;
            __Vtemp367[3U] = 0U;
            __Vtemp367[4U] = 0U;
            __Vtemp367[5U] = 0U;
            __Vtemp367[6U] = 0U;
            __Vtemp367[7U] = 0U;
            __Vtemp367[8U] = 0U;
            __Vtemp367[9U] = 0U;
            __Vtemp367[0xaU] = 0U;
            __Vtemp367[0xbU] = 0U;
            __Vtemp367[0xcU] = 0U;
            __Vtemp367[0xdU] = 0U;
            __Vtemp367[0xeU] = 0U;
            __Vtemp367[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp368, __Vtemp367, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp368[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_80 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp369[0U] = 1U;
            __Vtemp369[1U] = 0U;
            __Vtemp369[2U] = 0U;
            __Vtemp369[3U] = 0U;
            __Vtemp369[4U] = 0U;
            __Vtemp369[5U] = 0U;
            __Vtemp369[6U] = 0U;
            __Vtemp369[7U] = 0U;
            __Vtemp369[8U] = 0U;
            __Vtemp369[9U] = 0U;
            __Vtemp369[0xaU] = 0U;
            __Vtemp369[0xbU] = 0U;
            __Vtemp369[0xcU] = 0U;
            __Vtemp369[0xdU] = 0U;
            __Vtemp369[0xeU] = 0U;
            __Vtemp369[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp370, __Vtemp369, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000U & __Vtemp370[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_79 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp371[0U] = 1U;
            __Vtemp371[1U] = 0U;
            __Vtemp371[2U] = 0U;
            __Vtemp371[3U] = 0U;
            __Vtemp371[4U] = 0U;
            __Vtemp371[5U] = 0U;
            __Vtemp371[6U] = 0U;
            __Vtemp371[7U] = 0U;
            __Vtemp371[8U] = 0U;
            __Vtemp371[9U] = 0U;
            __Vtemp371[0xaU] = 0U;
            __Vtemp371[0xbU] = 0U;
            __Vtemp371[0xcU] = 0U;
            __Vtemp371[0xdU] = 0U;
            __Vtemp371[0xeU] = 0U;
            __Vtemp371[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp372, __Vtemp371, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp372[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_78 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp373[0U] = 1U;
            __Vtemp373[1U] = 0U;
            __Vtemp373[2U] = 0U;
            __Vtemp373[3U] = 0U;
            __Vtemp373[4U] = 0U;
            __Vtemp373[5U] = 0U;
            __Vtemp373[6U] = 0U;
            __Vtemp373[7U] = 0U;
            __Vtemp373[8U] = 0U;
            __Vtemp373[9U] = 0U;
            __Vtemp373[0xaU] = 0U;
            __Vtemp373[0xbU] = 0U;
            __Vtemp373[0xcU] = 0U;
            __Vtemp373[0xdU] = 0U;
            __Vtemp373[0xeU] = 0U;
            __Vtemp373[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp374, __Vtemp373, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp374[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_77 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp375[0U] = 1U;
            __Vtemp375[1U] = 0U;
            __Vtemp375[2U] = 0U;
            __Vtemp375[3U] = 0U;
            __Vtemp375[4U] = 0U;
            __Vtemp375[5U] = 0U;
            __Vtemp375[6U] = 0U;
            __Vtemp375[7U] = 0U;
            __Vtemp375[8U] = 0U;
            __Vtemp375[9U] = 0U;
            __Vtemp375[0xaU] = 0U;
            __Vtemp375[0xbU] = 0U;
            __Vtemp375[0xcU] = 0U;
            __Vtemp375[0xdU] = 0U;
            __Vtemp375[0xeU] = 0U;
            __Vtemp375[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp376, __Vtemp375, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp376[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_76 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp377[0U] = 1U;
            __Vtemp377[1U] = 0U;
            __Vtemp377[2U] = 0U;
            __Vtemp377[3U] = 0U;
            __Vtemp377[4U] = 0U;
            __Vtemp377[5U] = 0U;
            __Vtemp377[6U] = 0U;
            __Vtemp377[7U] = 0U;
            __Vtemp377[8U] = 0U;
            __Vtemp377[9U] = 0U;
            __Vtemp377[0xaU] = 0U;
            __Vtemp377[0xbU] = 0U;
            __Vtemp377[0xcU] = 0U;
            __Vtemp377[0xdU] = 0U;
            __Vtemp377[0xeU] = 0U;
            __Vtemp377[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp378, __Vtemp377, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp378[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_75 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp379[0U] = 1U;
            __Vtemp379[1U] = 0U;
            __Vtemp379[2U] = 0U;
            __Vtemp379[3U] = 0U;
            __Vtemp379[4U] = 0U;
            __Vtemp379[5U] = 0U;
            __Vtemp379[6U] = 0U;
            __Vtemp379[7U] = 0U;
            __Vtemp379[8U] = 0U;
            __Vtemp379[9U] = 0U;
            __Vtemp379[0xaU] = 0U;
            __Vtemp379[0xbU] = 0U;
            __Vtemp379[0xcU] = 0U;
            __Vtemp379[0xdU] = 0U;
            __Vtemp379[0xeU] = 0U;
            __Vtemp379[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp380, __Vtemp379, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp380[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_74 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp381[0U] = 1U;
            __Vtemp381[1U] = 0U;
            __Vtemp381[2U] = 0U;
            __Vtemp381[3U] = 0U;
            __Vtemp381[4U] = 0U;
            __Vtemp381[5U] = 0U;
            __Vtemp381[6U] = 0U;
            __Vtemp381[7U] = 0U;
            __Vtemp381[8U] = 0U;
            __Vtemp381[9U] = 0U;
            __Vtemp381[0xaU] = 0U;
            __Vtemp381[0xbU] = 0U;
            __Vtemp381[0xcU] = 0U;
            __Vtemp381[0xdU] = 0U;
            __Vtemp381[0xeU] = 0U;
            __Vtemp381[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp382, __Vtemp381, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp382[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_73 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp383[0U] = 1U;
            __Vtemp383[1U] = 0U;
            __Vtemp383[2U] = 0U;
            __Vtemp383[3U] = 0U;
            __Vtemp383[4U] = 0U;
            __Vtemp383[5U] = 0U;
            __Vtemp383[6U] = 0U;
            __Vtemp383[7U] = 0U;
            __Vtemp383[8U] = 0U;
            __Vtemp383[9U] = 0U;
            __Vtemp383[0xaU] = 0U;
            __Vtemp383[0xbU] = 0U;
            __Vtemp383[0xcU] = 0U;
            __Vtemp383[0xdU] = 0U;
            __Vtemp383[0xeU] = 0U;
            __Vtemp383[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp384, __Vtemp383, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp384[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_72 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp385[0U] = 1U;
            __Vtemp385[1U] = 0U;
            __Vtemp385[2U] = 0U;
            __Vtemp385[3U] = 0U;
            __Vtemp385[4U] = 0U;
            __Vtemp385[5U] = 0U;
            __Vtemp385[6U] = 0U;
            __Vtemp385[7U] = 0U;
            __Vtemp385[8U] = 0U;
            __Vtemp385[9U] = 0U;
            __Vtemp385[0xaU] = 0U;
            __Vtemp385[0xbU] = 0U;
            __Vtemp385[0xcU] = 0U;
            __Vtemp385[0xdU] = 0U;
            __Vtemp385[0xeU] = 0U;
            __Vtemp385[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp386, __Vtemp385, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp386[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_71 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp387[0U] = 1U;
            __Vtemp387[1U] = 0U;
            __Vtemp387[2U] = 0U;
            __Vtemp387[3U] = 0U;
            __Vtemp387[4U] = 0U;
            __Vtemp387[5U] = 0U;
            __Vtemp387[6U] = 0U;
            __Vtemp387[7U] = 0U;
            __Vtemp387[8U] = 0U;
            __Vtemp387[9U] = 0U;
            __Vtemp387[0xaU] = 0U;
            __Vtemp387[0xbU] = 0U;
            __Vtemp387[0xcU] = 0U;
            __Vtemp387[0xdU] = 0U;
            __Vtemp387[0xeU] = 0U;
            __Vtemp387[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp388, __Vtemp387, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp388[2U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_70 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
}
