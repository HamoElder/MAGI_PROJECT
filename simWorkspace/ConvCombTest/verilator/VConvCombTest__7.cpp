// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__56(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__56\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp516[16];
    WData/*511:0*/ __Vtemp517[16];
    WData/*511:0*/ __Vtemp518[16];
    WData/*511:0*/ __Vtemp519[16];
    WData/*511:0*/ __Vtemp520[16];
    WData/*511:0*/ __Vtemp521[16];
    WData/*511:0*/ __Vtemp522[16];
    WData/*511:0*/ __Vtemp523[16];
    WData/*511:0*/ __Vtemp524[16];
    WData/*511:0*/ __Vtemp525[16];
    WData/*511:0*/ __Vtemp526[16];
    WData/*511:0*/ __Vtemp527[16];
    WData/*511:0*/ __Vtemp528[16];
    WData/*511:0*/ __Vtemp529[16];
    WData/*511:0*/ __Vtemp530[16];
    WData/*511:0*/ __Vtemp531[16];
    WData/*511:0*/ __Vtemp532[16];
    WData/*511:0*/ __Vtemp533[16];
    WData/*511:0*/ __Vtemp534[16];
    WData/*511:0*/ __Vtemp535[16];
    WData/*511:0*/ __Vtemp536[16];
    WData/*511:0*/ __Vtemp537[16];
    WData/*511:0*/ __Vtemp538[16];
    WData/*511:0*/ __Vtemp539[16];
    WData/*511:0*/ __Vtemp540[16];
    WData/*511:0*/ __Vtemp541[16];
    WData/*511:0*/ __Vtemp542[16];
    WData/*511:0*/ __Vtemp543[16];
    WData/*511:0*/ __Vtemp544[16];
    WData/*511:0*/ __Vtemp545[16];
    WData/*511:0*/ __Vtemp546[16];
    WData/*511:0*/ __Vtemp547[16];
    WData/*511:0*/ __Vtemp548[16];
    WData/*511:0*/ __Vtemp549[16];
    WData/*511:0*/ __Vtemp550[16];
    WData/*511:0*/ __Vtemp551[16];
    WData/*511:0*/ __Vtemp552[16];
    WData/*511:0*/ __Vtemp553[16];
    WData/*511:0*/ __Vtemp554[16];
    WData/*511:0*/ __Vtemp555[16];
    WData/*511:0*/ __Vtemp556[16];
    WData/*511:0*/ __Vtemp557[16];
    WData/*511:0*/ __Vtemp558[16];
    WData/*511:0*/ __Vtemp559[16];
    WData/*511:0*/ __Vtemp560[16];
    WData/*511:0*/ __Vtemp561[16];
    WData/*511:0*/ __Vtemp562[16];
    WData/*511:0*/ __Vtemp563[16];
    WData/*511:0*/ __Vtemp564[16];
    WData/*511:0*/ __Vtemp565[16];
    WData/*511:0*/ __Vtemp566[16];
    WData/*511:0*/ __Vtemp567[16];
    WData/*511:0*/ __Vtemp568[16];
    WData/*511:0*/ __Vtemp569[16];
    WData/*511:0*/ __Vtemp570[16];
    WData/*511:0*/ __Vtemp571[16];
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp516[0U] = 1U;
            __Vtemp516[1U] = 0U;
            __Vtemp516[2U] = 0U;
            __Vtemp516[3U] = 0U;
            __Vtemp516[4U] = 0U;
            __Vtemp516[5U] = 0U;
            __Vtemp516[6U] = 0U;
            __Vtemp516[7U] = 0U;
            __Vtemp516[8U] = 0U;
            __Vtemp516[9U] = 0U;
            __Vtemp516[0xaU] = 0U;
            __Vtemp516[0xbU] = 0U;
            __Vtemp516[0xcU] = 0U;
            __Vtemp516[0xdU] = 0U;
            __Vtemp516[0xeU] = 0U;
            __Vtemp516[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp517, __Vtemp516, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp517[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_22 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp518[0U] = 1U;
            __Vtemp518[1U] = 0U;
            __Vtemp518[2U] = 0U;
            __Vtemp518[3U] = 0U;
            __Vtemp518[4U] = 0U;
            __Vtemp518[5U] = 0U;
            __Vtemp518[6U] = 0U;
            __Vtemp518[7U] = 0U;
            __Vtemp518[8U] = 0U;
            __Vtemp518[9U] = 0U;
            __Vtemp518[0xaU] = 0U;
            __Vtemp518[0xbU] = 0U;
            __Vtemp518[0xcU] = 0U;
            __Vtemp518[0xdU] = 0U;
            __Vtemp518[0xeU] = 0U;
            __Vtemp518[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp519, __Vtemp518, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp519[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_174 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp520[0U] = 1U;
            __Vtemp520[1U] = 0U;
            __Vtemp520[2U] = 0U;
            __Vtemp520[3U] = 0U;
            __Vtemp520[4U] = 0U;
            __Vtemp520[5U] = 0U;
            __Vtemp520[6U] = 0U;
            __Vtemp520[7U] = 0U;
            __Vtemp520[8U] = 0U;
            __Vtemp520[9U] = 0U;
            __Vtemp520[0xaU] = 0U;
            __Vtemp520[0xbU] = 0U;
            __Vtemp520[0xcU] = 0U;
            __Vtemp520[0xdU] = 0U;
            __Vtemp520[0xeU] = 0U;
            __Vtemp520[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp521, __Vtemp520, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp521[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_9 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp522[0U] = 1U;
            __Vtemp522[1U] = 0U;
            __Vtemp522[2U] = 0U;
            __Vtemp522[3U] = 0U;
            __Vtemp522[4U] = 0U;
            __Vtemp522[5U] = 0U;
            __Vtemp522[6U] = 0U;
            __Vtemp522[7U] = 0U;
            __Vtemp522[8U] = 0U;
            __Vtemp522[9U] = 0U;
            __Vtemp522[0xaU] = 0U;
            __Vtemp522[0xbU] = 0U;
            __Vtemp522[0xcU] = 0U;
            __Vtemp522[0xdU] = 0U;
            __Vtemp522[0xeU] = 0U;
            __Vtemp522[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp523, __Vtemp522, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp523[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_9 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp524[0U] = 1U;
            __Vtemp524[1U] = 0U;
            __Vtemp524[2U] = 0U;
            __Vtemp524[3U] = 0U;
            __Vtemp524[4U] = 0U;
            __Vtemp524[5U] = 0U;
            __Vtemp524[6U] = 0U;
            __Vtemp524[7U] = 0U;
            __Vtemp524[8U] = 0U;
            __Vtemp524[9U] = 0U;
            __Vtemp524[0xaU] = 0U;
            __Vtemp524[0xbU] = 0U;
            __Vtemp524[0xcU] = 0U;
            __Vtemp524[0xdU] = 0U;
            __Vtemp524[0xeU] = 0U;
            __Vtemp524[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp525, __Vtemp524, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp525[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_161 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp526[0U] = 1U;
            __Vtemp526[1U] = 0U;
            __Vtemp526[2U] = 0U;
            __Vtemp526[3U] = 0U;
            __Vtemp526[4U] = 0U;
            __Vtemp526[5U] = 0U;
            __Vtemp526[6U] = 0U;
            __Vtemp526[7U] = 0U;
            __Vtemp526[8U] = 0U;
            __Vtemp526[9U] = 0U;
            __Vtemp526[0xaU] = 0U;
            __Vtemp526[0xbU] = 0U;
            __Vtemp526[0xcU] = 0U;
            __Vtemp526[0xdU] = 0U;
            __Vtemp526[0xeU] = 0U;
            __Vtemp526[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp527, __Vtemp526, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp527[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_45 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp528[0U] = 1U;
            __Vtemp528[1U] = 0U;
            __Vtemp528[2U] = 0U;
            __Vtemp528[3U] = 0U;
            __Vtemp528[4U] = 0U;
            __Vtemp528[5U] = 0U;
            __Vtemp528[6U] = 0U;
            __Vtemp528[7U] = 0U;
            __Vtemp528[8U] = 0U;
            __Vtemp528[9U] = 0U;
            __Vtemp528[0xaU] = 0U;
            __Vtemp528[0xbU] = 0U;
            __Vtemp528[0xcU] = 0U;
            __Vtemp528[0xdU] = 0U;
            __Vtemp528[0xeU] = 0U;
            __Vtemp528[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp529, __Vtemp528, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp529[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_197 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp530[0U] = 1U;
            __Vtemp530[1U] = 0U;
            __Vtemp530[2U] = 0U;
            __Vtemp530[3U] = 0U;
            __Vtemp530[4U] = 0U;
            __Vtemp530[5U] = 0U;
            __Vtemp530[6U] = 0U;
            __Vtemp530[7U] = 0U;
            __Vtemp530[8U] = 0U;
            __Vtemp530[9U] = 0U;
            __Vtemp530[0xaU] = 0U;
            __Vtemp530[0xbU] = 0U;
            __Vtemp530[0xcU] = 0U;
            __Vtemp530[0xdU] = 0U;
            __Vtemp530[0xeU] = 0U;
            __Vtemp530[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp531, __Vtemp530, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp531[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_32 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp532[0U] = 1U;
            __Vtemp532[1U] = 0U;
            __Vtemp532[2U] = 0U;
            __Vtemp532[3U] = 0U;
            __Vtemp532[4U] = 0U;
            __Vtemp532[5U] = 0U;
            __Vtemp532[6U] = 0U;
            __Vtemp532[7U] = 0U;
            __Vtemp532[8U] = 0U;
            __Vtemp532[9U] = 0U;
            __Vtemp532[0xaU] = 0U;
            __Vtemp532[0xbU] = 0U;
            __Vtemp532[0xcU] = 0U;
            __Vtemp532[0xdU] = 0U;
            __Vtemp532[0xeU] = 0U;
            __Vtemp532[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp533, __Vtemp532, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x8000000U & __Vtemp533[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_123 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp534[0U] = 1U;
            __Vtemp534[1U] = 0U;
            __Vtemp534[2U] = 0U;
            __Vtemp534[3U] = 0U;
            __Vtemp534[4U] = 0U;
            __Vtemp534[5U] = 0U;
            __Vtemp534[6U] = 0U;
            __Vtemp534[7U] = 0U;
            __Vtemp534[8U] = 0U;
            __Vtemp534[9U] = 0U;
            __Vtemp534[0xaU] = 0U;
            __Vtemp534[0xbU] = 0U;
            __Vtemp534[0xcU] = 0U;
            __Vtemp534[0xdU] = 0U;
            __Vtemp534[0xeU] = 0U;
            __Vtemp534[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp535, __Vtemp534, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x100U & __Vtemp535[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_8 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp536[0U] = 1U;
            __Vtemp536[1U] = 0U;
            __Vtemp536[2U] = 0U;
            __Vtemp536[3U] = 0U;
            __Vtemp536[4U] = 0U;
            __Vtemp536[5U] = 0U;
            __Vtemp536[6U] = 0U;
            __Vtemp536[7U] = 0U;
            __Vtemp536[8U] = 0U;
            __Vtemp536[9U] = 0U;
            __Vtemp536[0xaU] = 0U;
            __Vtemp536[0xbU] = 0U;
            __Vtemp536[0xcU] = 0U;
            __Vtemp536[0xdU] = 0U;
            __Vtemp536[0xeU] = 0U;
            __Vtemp536[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp537, __Vtemp536, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp537[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_160 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp538[0U] = 1U;
            __Vtemp538[1U] = 0U;
            __Vtemp538[2U] = 0U;
            __Vtemp538[3U] = 0U;
            __Vtemp538[4U] = 0U;
            __Vtemp538[5U] = 0U;
            __Vtemp538[6U] = 0U;
            __Vtemp538[7U] = 0U;
            __Vtemp538[8U] = 0U;
            __Vtemp538[9U] = 0U;
            __Vtemp538[0xaU] = 0U;
            __Vtemp538[0xbU] = 0U;
            __Vtemp538[0xcU] = 0U;
            __Vtemp538[0xdU] = 0U;
            __Vtemp538[0xeU] = 0U;
            __Vtemp538[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp539, __Vtemp538, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp539[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_44 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp540[0U] = 1U;
            __Vtemp540[1U] = 0U;
            __Vtemp540[2U] = 0U;
            __Vtemp540[3U] = 0U;
            __Vtemp540[4U] = 0U;
            __Vtemp540[5U] = 0U;
            __Vtemp540[6U] = 0U;
            __Vtemp540[7U] = 0U;
            __Vtemp540[8U] = 0U;
            __Vtemp540[9U] = 0U;
            __Vtemp540[0xaU] = 0U;
            __Vtemp540[0xbU] = 0U;
            __Vtemp540[0xcU] = 0U;
            __Vtemp540[0xdU] = 0U;
            __Vtemp540[0xeU] = 0U;
            __Vtemp540[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp541, __Vtemp540, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10U & __Vtemp541[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_196 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp542[0U] = 1U;
            __Vtemp542[1U] = 0U;
            __Vtemp542[2U] = 0U;
            __Vtemp542[3U] = 0U;
            __Vtemp542[4U] = 0U;
            __Vtemp542[5U] = 0U;
            __Vtemp542[6U] = 0U;
            __Vtemp542[7U] = 0U;
            __Vtemp542[8U] = 0U;
            __Vtemp542[9U] = 0U;
            __Vtemp542[0xaU] = 0U;
            __Vtemp542[0xbU] = 0U;
            __Vtemp542[0xcU] = 0U;
            __Vtemp542[0xdU] = 0U;
            __Vtemp542[0xeU] = 0U;
            __Vtemp542[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp543, __Vtemp542, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp543[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_31 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp544[0U] = 1U;
            __Vtemp544[1U] = 0U;
            __Vtemp544[2U] = 0U;
            __Vtemp544[3U] = 0U;
            __Vtemp544[4U] = 0U;
            __Vtemp544[5U] = 0U;
            __Vtemp544[6U] = 0U;
            __Vtemp544[7U] = 0U;
            __Vtemp544[8U] = 0U;
            __Vtemp544[9U] = 0U;
            __Vtemp544[0xaU] = 0U;
            __Vtemp544[0xbU] = 0U;
            __Vtemp544[0xcU] = 0U;
            __Vtemp544[0xdU] = 0U;
            __Vtemp544[0xeU] = 0U;
            __Vtemp544[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp545, __Vtemp544, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000000U & __Vtemp545[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_122 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp546[0U] = 1U;
            __Vtemp546[1U] = 0U;
            __Vtemp546[2U] = 0U;
            __Vtemp546[3U] = 0U;
            __Vtemp546[4U] = 0U;
            __Vtemp546[5U] = 0U;
            __Vtemp546[6U] = 0U;
            __Vtemp546[7U] = 0U;
            __Vtemp546[8U] = 0U;
            __Vtemp546[9U] = 0U;
            __Vtemp546[0xaU] = 0U;
            __Vtemp546[0xbU] = 0U;
            __Vtemp546[0xcU] = 0U;
            __Vtemp546[0xdU] = 0U;
            __Vtemp546[0xeU] = 0U;
            __Vtemp546[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp547, __Vtemp546, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80U & __Vtemp547[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_7 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp548[0U] = 1U;
            __Vtemp548[1U] = 0U;
            __Vtemp548[2U] = 0U;
            __Vtemp548[3U] = 0U;
            __Vtemp548[4U] = 0U;
            __Vtemp548[5U] = 0U;
            __Vtemp548[6U] = 0U;
            __Vtemp548[7U] = 0U;
            __Vtemp548[8U] = 0U;
            __Vtemp548[9U] = 0U;
            __Vtemp548[0xaU] = 0U;
            __Vtemp548[0xbU] = 0U;
            __Vtemp548[0xcU] = 0U;
            __Vtemp548[0xdU] = 0U;
            __Vtemp548[0xeU] = 0U;
            __Vtemp548[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp549, __Vtemp548, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000000U & __Vtemp549[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_159 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp550[0U] = 1U;
            __Vtemp550[1U] = 0U;
            __Vtemp550[2U] = 0U;
            __Vtemp550[3U] = 0U;
            __Vtemp550[4U] = 0U;
            __Vtemp550[5U] = 0U;
            __Vtemp550[6U] = 0U;
            __Vtemp550[7U] = 0U;
            __Vtemp550[8U] = 0U;
            __Vtemp550[9U] = 0U;
            __Vtemp550[0xaU] = 0U;
            __Vtemp550[0xbU] = 0U;
            __Vtemp550[0xcU] = 0U;
            __Vtemp550[0xdU] = 0U;
            __Vtemp550[0xeU] = 0U;
            __Vtemp550[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp551, __Vtemp550, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp551[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_43 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp552[0U] = 1U;
            __Vtemp552[1U] = 0U;
            __Vtemp552[2U] = 0U;
            __Vtemp552[3U] = 0U;
            __Vtemp552[4U] = 0U;
            __Vtemp552[5U] = 0U;
            __Vtemp552[6U] = 0U;
            __Vtemp552[7U] = 0U;
            __Vtemp552[8U] = 0U;
            __Vtemp552[9U] = 0U;
            __Vtemp552[0xaU] = 0U;
            __Vtemp552[0xbU] = 0U;
            __Vtemp552[0xcU] = 0U;
            __Vtemp552[0xdU] = 0U;
            __Vtemp552[0xeU] = 0U;
            __Vtemp552[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp553, __Vtemp552, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp553[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_195 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp554[0U] = 1U;
            __Vtemp554[1U] = 0U;
            __Vtemp554[2U] = 0U;
            __Vtemp554[3U] = 0U;
            __Vtemp554[4U] = 0U;
            __Vtemp554[5U] = 0U;
            __Vtemp554[6U] = 0U;
            __Vtemp554[7U] = 0U;
            __Vtemp554[8U] = 0U;
            __Vtemp554[9U] = 0U;
            __Vtemp554[0xaU] = 0U;
            __Vtemp554[0xbU] = 0U;
            __Vtemp554[0xcU] = 0U;
            __Vtemp554[0xdU] = 0U;
            __Vtemp554[0xeU] = 0U;
            __Vtemp554[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp555, __Vtemp554, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp555[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_30 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp556[0U] = 1U;
            __Vtemp556[1U] = 0U;
            __Vtemp556[2U] = 0U;
            __Vtemp556[3U] = 0U;
            __Vtemp556[4U] = 0U;
            __Vtemp556[5U] = 0U;
            __Vtemp556[6U] = 0U;
            __Vtemp556[7U] = 0U;
            __Vtemp556[8U] = 0U;
            __Vtemp556[9U] = 0U;
            __Vtemp556[0xaU] = 0U;
            __Vtemp556[0xbU] = 0U;
            __Vtemp556[0xcU] = 0U;
            __Vtemp556[0xdU] = 0U;
            __Vtemp556[0xeU] = 0U;
            __Vtemp556[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp557, __Vtemp556, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000000U & __Vtemp557[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_121 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp558[0U] = 1U;
            __Vtemp558[1U] = 0U;
            __Vtemp558[2U] = 0U;
            __Vtemp558[3U] = 0U;
            __Vtemp558[4U] = 0U;
            __Vtemp558[5U] = 0U;
            __Vtemp558[6U] = 0U;
            __Vtemp558[7U] = 0U;
            __Vtemp558[8U] = 0U;
            __Vtemp558[9U] = 0U;
            __Vtemp558[0xaU] = 0U;
            __Vtemp558[0xbU] = 0U;
            __Vtemp558[0xcU] = 0U;
            __Vtemp558[0xdU] = 0U;
            __Vtemp558[0xeU] = 0U;
            __Vtemp558[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp559, __Vtemp558, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp559[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_6 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp560[0U] = 1U;
            __Vtemp560[1U] = 0U;
            __Vtemp560[2U] = 0U;
            __Vtemp560[3U] = 0U;
            __Vtemp560[4U] = 0U;
            __Vtemp560[5U] = 0U;
            __Vtemp560[6U] = 0U;
            __Vtemp560[7U] = 0U;
            __Vtemp560[8U] = 0U;
            __Vtemp560[9U] = 0U;
            __Vtemp560[0xaU] = 0U;
            __Vtemp560[0xbU] = 0U;
            __Vtemp560[0xcU] = 0U;
            __Vtemp560[0xdU] = 0U;
            __Vtemp560[0xeU] = 0U;
            __Vtemp560[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp561, __Vtemp560, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp561[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_158 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp562[0U] = 1U;
            __Vtemp562[1U] = 0U;
            __Vtemp562[2U] = 0U;
            __Vtemp562[3U] = 0U;
            __Vtemp562[4U] = 0U;
            __Vtemp562[5U] = 0U;
            __Vtemp562[6U] = 0U;
            __Vtemp562[7U] = 0U;
            __Vtemp562[8U] = 0U;
            __Vtemp562[9U] = 0U;
            __Vtemp562[0xaU] = 0U;
            __Vtemp562[0xbU] = 0U;
            __Vtemp562[0xcU] = 0U;
            __Vtemp562[0xdU] = 0U;
            __Vtemp562[0xeU] = 0U;
            __Vtemp562[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp563, __Vtemp562, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400U & __Vtemp563[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_42 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp564[0U] = 1U;
            __Vtemp564[1U] = 0U;
            __Vtemp564[2U] = 0U;
            __Vtemp564[3U] = 0U;
            __Vtemp564[4U] = 0U;
            __Vtemp564[5U] = 0U;
            __Vtemp564[6U] = 0U;
            __Vtemp564[7U] = 0U;
            __Vtemp564[8U] = 0U;
            __Vtemp564[9U] = 0U;
            __Vtemp564[0xaU] = 0U;
            __Vtemp564[0xbU] = 0U;
            __Vtemp564[0xcU] = 0U;
            __Vtemp564[0xdU] = 0U;
            __Vtemp564[0xeU] = 0U;
            __Vtemp564[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp565, __Vtemp564, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp565[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_194 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp566[0U] = 1U;
            __Vtemp566[1U] = 0U;
            __Vtemp566[2U] = 0U;
            __Vtemp566[3U] = 0U;
            __Vtemp566[4U] = 0U;
            __Vtemp566[5U] = 0U;
            __Vtemp566[6U] = 0U;
            __Vtemp566[7U] = 0U;
            __Vtemp566[8U] = 0U;
            __Vtemp566[9U] = 0U;
            __Vtemp566[0xaU] = 0U;
            __Vtemp566[0xbU] = 0U;
            __Vtemp566[0xcU] = 0U;
            __Vtemp566[0xdU] = 0U;
            __Vtemp566[0xeU] = 0U;
            __Vtemp566[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp567, __Vtemp566, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp567[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_29 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp568[0U] = 1U;
            __Vtemp568[1U] = 0U;
            __Vtemp568[2U] = 0U;
            __Vtemp568[3U] = 0U;
            __Vtemp568[4U] = 0U;
            __Vtemp568[5U] = 0U;
            __Vtemp568[6U] = 0U;
            __Vtemp568[7U] = 0U;
            __Vtemp568[8U] = 0U;
            __Vtemp568[9U] = 0U;
            __Vtemp568[0xaU] = 0U;
            __Vtemp568[0xbU] = 0U;
            __Vtemp568[0xcU] = 0U;
            __Vtemp568[0xdU] = 0U;
            __Vtemp568[0xeU] = 0U;
            __Vtemp568[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp569, __Vtemp568, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp569[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_120 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp570[0U] = 1U;
            __Vtemp570[1U] = 0U;
            __Vtemp570[2U] = 0U;
            __Vtemp570[3U] = 0U;
            __Vtemp570[4U] = 0U;
            __Vtemp570[5U] = 0U;
            __Vtemp570[6U] = 0U;
            __Vtemp570[7U] = 0U;
            __Vtemp570[8U] = 0U;
            __Vtemp570[9U] = 0U;
            __Vtemp570[0xaU] = 0U;
            __Vtemp570[0xbU] = 0U;
            __Vtemp570[0xcU] = 0U;
            __Vtemp570[0xdU] = 0U;
            __Vtemp570[0xeU] = 0U;
            __Vtemp570[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp571, __Vtemp570, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40000000U & __Vtemp571[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_30 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__57(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__57\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*511:0*/ __Vtemp572[16];
    WData/*511:0*/ __Vtemp573[16];
    WData/*511:0*/ __Vtemp574[16];
    WData/*511:0*/ __Vtemp575[16];
    WData/*511:0*/ __Vtemp576[16];
    WData/*511:0*/ __Vtemp577[16];
    WData/*511:0*/ __Vtemp578[16];
    WData/*511:0*/ __Vtemp579[16];
    WData/*511:0*/ __Vtemp580[16];
    WData/*511:0*/ __Vtemp581[16];
    WData/*511:0*/ __Vtemp582[16];
    WData/*511:0*/ __Vtemp583[16];
    WData/*511:0*/ __Vtemp584[16];
    WData/*511:0*/ __Vtemp585[16];
    WData/*511:0*/ __Vtemp586[16];
    WData/*511:0*/ __Vtemp587[16];
    WData/*511:0*/ __Vtemp588[16];
    WData/*511:0*/ __Vtemp589[16];
    WData/*511:0*/ __Vtemp590[16];
    WData/*511:0*/ __Vtemp591[16];
    WData/*511:0*/ __Vtemp592[16];
    WData/*511:0*/ __Vtemp593[16];
    WData/*511:0*/ __Vtemp594[16];
    WData/*511:0*/ __Vtemp595[16];
    WData/*511:0*/ __Vtemp596[16];
    WData/*511:0*/ __Vtemp597[16];
    WData/*511:0*/ __Vtemp598[16];
    WData/*511:0*/ __Vtemp599[16];
    WData/*511:0*/ __Vtemp600[16];
    WData/*511:0*/ __Vtemp601[16];
    WData/*511:0*/ __Vtemp602[16];
    WData/*511:0*/ __Vtemp603[16];
    WData/*511:0*/ __Vtemp604[16];
    WData/*511:0*/ __Vtemp605[16];
    WData/*511:0*/ __Vtemp606[16];
    WData/*511:0*/ __Vtemp607[16];
    WData/*511:0*/ __Vtemp608[16];
    WData/*511:0*/ __Vtemp609[16];
    WData/*511:0*/ __Vtemp610[16];
    WData/*511:0*/ __Vtemp611[16];
    WData/*511:0*/ __Vtemp612[16];
    WData/*511:0*/ __Vtemp613[16];
    WData/*511:0*/ __Vtemp614[16];
    WData/*511:0*/ __Vtemp615[16];
    WData/*511:0*/ __Vtemp616[16];
    WData/*511:0*/ __Vtemp617[16];
    WData/*511:0*/ __Vtemp618[16];
    WData/*511:0*/ __Vtemp619[16];
    WData/*511:0*/ __Vtemp620[16];
    WData/*511:0*/ __Vtemp621[16];
    WData/*511:0*/ __Vtemp622[16];
    WData/*511:0*/ __Vtemp623[16];
    WData/*511:0*/ __Vtemp624[16];
    WData/*511:0*/ __Vtemp625[16];
    WData/*511:0*/ __Vtemp626[16];
    WData/*511:0*/ __Vtemp627[16];
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp572[0U] = 1U;
            __Vtemp572[1U] = 0U;
            __Vtemp572[2U] = 0U;
            __Vtemp572[3U] = 0U;
            __Vtemp572[4U] = 0U;
            __Vtemp572[5U] = 0U;
            __Vtemp572[6U] = 0U;
            __Vtemp572[7U] = 0U;
            __Vtemp572[8U] = 0U;
            __Vtemp572[9U] = 0U;
            __Vtemp572[0xaU] = 0U;
            __Vtemp572[0xbU] = 0U;
            __Vtemp572[0xcU] = 0U;
            __Vtemp572[0xdU] = 0U;
            __Vtemp572[0xeU] = 0U;
            __Vtemp572[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp573, __Vtemp572, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x400000U & __Vtemp573[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_182 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp574[0U] = 1U;
            __Vtemp574[1U] = 0U;
            __Vtemp574[2U] = 0U;
            __Vtemp574[3U] = 0U;
            __Vtemp574[4U] = 0U;
            __Vtemp574[5U] = 0U;
            __Vtemp574[6U] = 0U;
            __Vtemp574[7U] = 0U;
            __Vtemp574[8U] = 0U;
            __Vtemp574[9U] = 0U;
            __Vtemp574[0xaU] = 0U;
            __Vtemp574[0xbU] = 0U;
            __Vtemp574[0xcU] = 0U;
            __Vtemp574[0xdU] = 0U;
            __Vtemp574[0xeU] = 0U;
            __Vtemp574[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp575, __Vtemp574, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp575[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_17 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp576[0U] = 1U;
            __Vtemp576[1U] = 0U;
            __Vtemp576[2U] = 0U;
            __Vtemp576[3U] = 0U;
            __Vtemp576[4U] = 0U;
            __Vtemp576[5U] = 0U;
            __Vtemp576[6U] = 0U;
            __Vtemp576[7U] = 0U;
            __Vtemp576[8U] = 0U;
            __Vtemp576[9U] = 0U;
            __Vtemp576[0xaU] = 0U;
            __Vtemp576[0xbU] = 0U;
            __Vtemp576[0xcU] = 0U;
            __Vtemp576[0xdU] = 0U;
            __Vtemp576[0xeU] = 0U;
            __Vtemp576[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp577, __Vtemp576, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000U & __Vtemp577[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_108 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp578[0U] = 1U;
            __Vtemp578[1U] = 0U;
            __Vtemp578[2U] = 0U;
            __Vtemp578[3U] = 0U;
            __Vtemp578[4U] = 0U;
            __Vtemp578[5U] = 0U;
            __Vtemp578[6U] = 0U;
            __Vtemp578[7U] = 0U;
            __Vtemp578[8U] = 0U;
            __Vtemp578[9U] = 0U;
            __Vtemp578[0xaU] = 0U;
            __Vtemp578[0xbU] = 0U;
            __Vtemp578[0xcU] = 0U;
            __Vtemp578[0xdU] = 0U;
            __Vtemp578[0xeU] = 0U;
            __Vtemp578[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp579, __Vtemp578, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp579[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_29 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp580[0U] = 1U;
            __Vtemp580[1U] = 0U;
            __Vtemp580[2U] = 0U;
            __Vtemp580[3U] = 0U;
            __Vtemp580[4U] = 0U;
            __Vtemp580[5U] = 0U;
            __Vtemp580[6U] = 0U;
            __Vtemp580[7U] = 0U;
            __Vtemp580[8U] = 0U;
            __Vtemp580[9U] = 0U;
            __Vtemp580[0xaU] = 0U;
            __Vtemp580[0xbU] = 0U;
            __Vtemp580[0xcU] = 0U;
            __Vtemp580[0xdU] = 0U;
            __Vtemp580[0xeU] = 0U;
            __Vtemp580[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp581, __Vtemp580, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200000U & __Vtemp581[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_181 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp582[0U] = 1U;
            __Vtemp582[1U] = 0U;
            __Vtemp582[2U] = 0U;
            __Vtemp582[3U] = 0U;
            __Vtemp582[4U] = 0U;
            __Vtemp582[5U] = 0U;
            __Vtemp582[6U] = 0U;
            __Vtemp582[7U] = 0U;
            __Vtemp582[8U] = 0U;
            __Vtemp582[9U] = 0U;
            __Vtemp582[0xaU] = 0U;
            __Vtemp582[0xbU] = 0U;
            __Vtemp582[0xcU] = 0U;
            __Vtemp582[0xdU] = 0U;
            __Vtemp582[0xeU] = 0U;
            __Vtemp582[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp583, __Vtemp582, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp583[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_16 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp584[0U] = 1U;
            __Vtemp584[1U] = 0U;
            __Vtemp584[2U] = 0U;
            __Vtemp584[3U] = 0U;
            __Vtemp584[4U] = 0U;
            __Vtemp584[5U] = 0U;
            __Vtemp584[6U] = 0U;
            __Vtemp584[7U] = 0U;
            __Vtemp584[8U] = 0U;
            __Vtemp584[9U] = 0U;
            __Vtemp584[0xaU] = 0U;
            __Vtemp584[0xbU] = 0U;
            __Vtemp584[0xcU] = 0U;
            __Vtemp584[0xdU] = 0U;
            __Vtemp584[0xeU] = 0U;
            __Vtemp584[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp585, __Vtemp584, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp585[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_107 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp586[0U] = 1U;
            __Vtemp586[1U] = 0U;
            __Vtemp586[2U] = 0U;
            __Vtemp586[3U] = 0U;
            __Vtemp586[4U] = 0U;
            __Vtemp586[5U] = 0U;
            __Vtemp586[6U] = 0U;
            __Vtemp586[7U] = 0U;
            __Vtemp586[8U] = 0U;
            __Vtemp586[9U] = 0U;
            __Vtemp586[0xaU] = 0U;
            __Vtemp586[0xbU] = 0U;
            __Vtemp586[0xcU] = 0U;
            __Vtemp586[0xdU] = 0U;
            __Vtemp586[0xeU] = 0U;
            __Vtemp586[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp587, __Vtemp586, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp587[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_24 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp588[0U] = 1U;
            __Vtemp588[1U] = 0U;
            __Vtemp588[2U] = 0U;
            __Vtemp588[3U] = 0U;
            __Vtemp588[4U] = 0U;
            __Vtemp588[5U] = 0U;
            __Vtemp588[6U] = 0U;
            __Vtemp588[7U] = 0U;
            __Vtemp588[8U] = 0U;
            __Vtemp588[9U] = 0U;
            __Vtemp588[0xaU] = 0U;
            __Vtemp588[0xbU] = 0U;
            __Vtemp588[0xcU] = 0U;
            __Vtemp588[0xdU] = 0U;
            __Vtemp588[0xeU] = 0U;
            __Vtemp588[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp589, __Vtemp588, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000U & __Vtemp589[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_176 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp590[0U] = 1U;
            __Vtemp590[1U] = 0U;
            __Vtemp590[2U] = 0U;
            __Vtemp590[3U] = 0U;
            __Vtemp590[4U] = 0U;
            __Vtemp590[5U] = 0U;
            __Vtemp590[6U] = 0U;
            __Vtemp590[7U] = 0U;
            __Vtemp590[8U] = 0U;
            __Vtemp590[9U] = 0U;
            __Vtemp590[0xaU] = 0U;
            __Vtemp590[0xbU] = 0U;
            __Vtemp590[0xcU] = 0U;
            __Vtemp590[0xdU] = 0U;
            __Vtemp590[0xeU] = 0U;
            __Vtemp590[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp591, __Vtemp590, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp591[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_11 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp592[0U] = 1U;
            __Vtemp592[1U] = 0U;
            __Vtemp592[2U] = 0U;
            __Vtemp592[3U] = 0U;
            __Vtemp592[4U] = 0U;
            __Vtemp592[5U] = 0U;
            __Vtemp592[6U] = 0U;
            __Vtemp592[7U] = 0U;
            __Vtemp592[8U] = 0U;
            __Vtemp592[9U] = 0U;
            __Vtemp592[0xaU] = 0U;
            __Vtemp592[0xbU] = 0U;
            __Vtemp592[0xcU] = 0U;
            __Vtemp592[0xdU] = 0U;
            __Vtemp592[0xeU] = 0U;
            __Vtemp592[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp593, __Vtemp592, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp593[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_102 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp594[0U] = 1U;
            __Vtemp594[1U] = 0U;
            __Vtemp594[2U] = 0U;
            __Vtemp594[3U] = 0U;
            __Vtemp594[4U] = 0U;
            __Vtemp594[5U] = 0U;
            __Vtemp594[6U] = 0U;
            __Vtemp594[7U] = 0U;
            __Vtemp594[8U] = 0U;
            __Vtemp594[9U] = 0U;
            __Vtemp594[0xaU] = 0U;
            __Vtemp594[0xbU] = 0U;
            __Vtemp594[0xcU] = 0U;
            __Vtemp594[0xdU] = 0U;
            __Vtemp594[0xeU] = 0U;
            __Vtemp594[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp595, __Vtemp594, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp595[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_0 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp596[0U] = 1U;
            __Vtemp596[1U] = 0U;
            __Vtemp596[2U] = 0U;
            __Vtemp596[3U] = 0U;
            __Vtemp596[4U] = 0U;
            __Vtemp596[5U] = 0U;
            __Vtemp596[6U] = 0U;
            __Vtemp596[7U] = 0U;
            __Vtemp596[8U] = 0U;
            __Vtemp596[9U] = 0U;
            __Vtemp596[0xaU] = 0U;
            __Vtemp596[0xbU] = 0U;
            __Vtemp596[0xcU] = 0U;
            __Vtemp596[0xdU] = 0U;
            __Vtemp596[0xeU] = 0U;
            __Vtemp596[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp597, __Vtemp596, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20U & __Vtemp597[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_5 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp598[0U] = 1U;
            __Vtemp598[1U] = 0U;
            __Vtemp598[2U] = 0U;
            __Vtemp598[3U] = 0U;
            __Vtemp598[4U] = 0U;
            __Vtemp598[5U] = 0U;
            __Vtemp598[6U] = 0U;
            __Vtemp598[7U] = 0U;
            __Vtemp598[8U] = 0U;
            __Vtemp598[9U] = 0U;
            __Vtemp598[0xaU] = 0U;
            __Vtemp598[0xbU] = 0U;
            __Vtemp598[0xcU] = 0U;
            __Vtemp598[0xdU] = 0U;
            __Vtemp598[0xeU] = 0U;
            __Vtemp598[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp599, __Vtemp598, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000000U & __Vtemp599[4U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_157 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp600[0U] = 1U;
            __Vtemp600[1U] = 0U;
            __Vtemp600[2U] = 0U;
            __Vtemp600[3U] = 0U;
            __Vtemp600[4U] = 0U;
            __Vtemp600[5U] = 0U;
            __Vtemp600[6U] = 0U;
            __Vtemp600[7U] = 0U;
            __Vtemp600[8U] = 0U;
            __Vtemp600[9U] = 0U;
            __Vtemp600[0xaU] = 0U;
            __Vtemp600[0xbU] = 0U;
            __Vtemp600[0xcU] = 0U;
            __Vtemp600[0xdU] = 0U;
            __Vtemp600[0xeU] = 0U;
            __Vtemp600[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp601, __Vtemp600, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x200U & __Vtemp601[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_41 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp602[0U] = 1U;
            __Vtemp602[1U] = 0U;
            __Vtemp602[2U] = 0U;
            __Vtemp602[3U] = 0U;
            __Vtemp602[4U] = 0U;
            __Vtemp602[5U] = 0U;
            __Vtemp602[6U] = 0U;
            __Vtemp602[7U] = 0U;
            __Vtemp602[8U] = 0U;
            __Vtemp602[9U] = 0U;
            __Vtemp602[0xaU] = 0U;
            __Vtemp602[0xbU] = 0U;
            __Vtemp602[0xcU] = 0U;
            __Vtemp602[0xdU] = 0U;
            __Vtemp602[0xeU] = 0U;
            __Vtemp602[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp603, __Vtemp602, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((2U & __Vtemp603[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_193 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp604[0U] = 1U;
            __Vtemp604[1U] = 0U;
            __Vtemp604[2U] = 0U;
            __Vtemp604[3U] = 0U;
            __Vtemp604[4U] = 0U;
            __Vtemp604[5U] = 0U;
            __Vtemp604[6U] = 0U;
            __Vtemp604[7U] = 0U;
            __Vtemp604[8U] = 0U;
            __Vtemp604[9U] = 0U;
            __Vtemp604[0xaU] = 0U;
            __Vtemp604[0xbU] = 0U;
            __Vtemp604[0xcU] = 0U;
            __Vtemp604[0xdU] = 0U;
            __Vtemp604[0xeU] = 0U;
            __Vtemp604[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp605, __Vtemp604, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x10000000U & __Vtemp605[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_28 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp606[0U] = 1U;
            __Vtemp606[1U] = 0U;
            __Vtemp606[2U] = 0U;
            __Vtemp606[3U] = 0U;
            __Vtemp606[4U] = 0U;
            __Vtemp606[5U] = 0U;
            __Vtemp606[6U] = 0U;
            __Vtemp606[7U] = 0U;
            __Vtemp606[8U] = 0U;
            __Vtemp606[9U] = 0U;
            __Vtemp606[0xaU] = 0U;
            __Vtemp606[0xbU] = 0U;
            __Vtemp606[0xcU] = 0U;
            __Vtemp606[0xdU] = 0U;
            __Vtemp606[0xeU] = 0U;
            __Vtemp606[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp607, __Vtemp606, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800000U & __Vtemp607[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_119 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp608[0U] = 1U;
            __Vtemp608[1U] = 0U;
            __Vtemp608[2U] = 0U;
            __Vtemp608[3U] = 0U;
            __Vtemp608[4U] = 0U;
            __Vtemp608[5U] = 0U;
            __Vtemp608[6U] = 0U;
            __Vtemp608[7U] = 0U;
            __Vtemp608[8U] = 0U;
            __Vtemp608[9U] = 0U;
            __Vtemp608[0xaU] = 0U;
            __Vtemp608[0xbU] = 0U;
            __Vtemp608[0xcU] = 0U;
            __Vtemp608[0xdU] = 0U;
            __Vtemp608[0xeU] = 0U;
            __Vtemp608[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp609, __Vtemp608, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x40U & __Vtemp609[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_166 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp610[0U] = 1U;
            __Vtemp610[1U] = 0U;
            __Vtemp610[2U] = 0U;
            __Vtemp610[3U] = 0U;
            __Vtemp610[4U] = 0U;
            __Vtemp610[5U] = 0U;
            __Vtemp610[6U] = 0U;
            __Vtemp610[7U] = 0U;
            __Vtemp610[8U] = 0U;
            __Vtemp610[9U] = 0U;
            __Vtemp610[0xaU] = 0U;
            __Vtemp610[0xbU] = 0U;
            __Vtemp610[0xcU] = 0U;
            __Vtemp610[0xdU] = 0U;
            __Vtemp610[0xeU] = 0U;
            __Vtemp610[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp611, __Vtemp610, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x2000U & __Vtemp611[6U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_205 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp612[0U] = 1U;
            __Vtemp612[1U] = 0U;
            __Vtemp612[2U] = 0U;
            __Vtemp612[3U] = 0U;
            __Vtemp612[4U] = 0U;
            __Vtemp612[5U] = 0U;
            __Vtemp612[6U] = 0U;
            __Vtemp612[7U] = 0U;
            __Vtemp612[8U] = 0U;
            __Vtemp612[9U] = 0U;
            __Vtemp612[0xaU] = 0U;
            __Vtemp612[0xbU] = 0U;
            __Vtemp612[0xcU] = 0U;
            __Vtemp612[0xdU] = 0U;
            __Vtemp612[0xeU] = 0U;
            __Vtemp612[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp613, __Vtemp612, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x20000U & __Vtemp613[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_49 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp614[0U] = 1U;
            __Vtemp614[1U] = 0U;
            __Vtemp614[2U] = 0U;
            __Vtemp614[3U] = 0U;
            __Vtemp614[4U] = 0U;
            __Vtemp614[5U] = 0U;
            __Vtemp614[6U] = 0U;
            __Vtemp614[7U] = 0U;
            __Vtemp614[8U] = 0U;
            __Vtemp614[9U] = 0U;
            __Vtemp614[0xaU] = 0U;
            __Vtemp614[0xbU] = 0U;
            __Vtemp614[0xcU] = 0U;
            __Vtemp614[0xdU] = 0U;
            __Vtemp614[0xeU] = 0U;
            __Vtemp614[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp615, __Vtemp614, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x800U & __Vtemp615[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_11 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp616[0U] = 1U;
            __Vtemp616[1U] = 0U;
            __Vtemp616[2U] = 0U;
            __Vtemp616[3U] = 0U;
            __Vtemp616[4U] = 0U;
            __Vtemp616[5U] = 0U;
            __Vtemp616[6U] = 0U;
            __Vtemp616[7U] = 0U;
            __Vtemp616[8U] = 0U;
            __Vtemp616[9U] = 0U;
            __Vtemp616[0xaU] = 0U;
            __Vtemp616[0xbU] = 0U;
            __Vtemp616[0xcU] = 0U;
            __Vtemp616[0xdU] = 0U;
            __Vtemp616[0xeU] = 0U;
            __Vtemp616[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp617, __Vtemp616, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((8U & __Vtemp617[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_163 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp618[0U] = 1U;
            __Vtemp618[1U] = 0U;
            __Vtemp618[2U] = 0U;
            __Vtemp618[3U] = 0U;
            __Vtemp618[4U] = 0U;
            __Vtemp618[5U] = 0U;
            __Vtemp618[6U] = 0U;
            __Vtemp618[7U] = 0U;
            __Vtemp618[8U] = 0U;
            __Vtemp618[9U] = 0U;
            __Vtemp618[0xaU] = 0U;
            __Vtemp618[0xbU] = 0U;
            __Vtemp618[0xcU] = 0U;
            __Vtemp618[0xdU] = 0U;
            __Vtemp618[0xeU] = 0U;
            __Vtemp618[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp619, __Vtemp618, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((1U & __Vtemp619[1U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_32 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp620[0U] = 1U;
            __Vtemp620[1U] = 0U;
            __Vtemp620[2U] = 0U;
            __Vtemp620[3U] = 0U;
            __Vtemp620[4U] = 0U;
            __Vtemp620[5U] = 0U;
            __Vtemp620[6U] = 0U;
            __Vtemp620[7U] = 0U;
            __Vtemp620[8U] = 0U;
            __Vtemp620[9U] = 0U;
            __Vtemp620[0xaU] = 0U;
            __Vtemp620[0xbU] = 0U;
            __Vtemp620[0xcU] = 0U;
            __Vtemp620[0xdU] = 0U;
            __Vtemp620[0xeU] = 0U;
            __Vtemp620[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp621, __Vtemp620, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x1000000U & __Vtemp621[5U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_184 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp622[0U] = 1U;
            __Vtemp622[1U] = 0U;
            __Vtemp622[2U] = 0U;
            __Vtemp622[3U] = 0U;
            __Vtemp622[4U] = 0U;
            __Vtemp622[5U] = 0U;
            __Vtemp622[6U] = 0U;
            __Vtemp622[7U] = 0U;
            __Vtemp622[8U] = 0U;
            __Vtemp622[9U] = 0U;
            __Vtemp622[0xaU] = 0U;
            __Vtemp622[0xbU] = 0U;
            __Vtemp622[0xcU] = 0U;
            __Vtemp622[0xdU] = 0U;
            __Vtemp622[0xeU] = 0U;
            __Vtemp622[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp623, __Vtemp622, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x80000U & __Vtemp623[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_19 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 2U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp624[0U] = 1U;
            __Vtemp624[1U] = 0U;
            __Vtemp624[2U] = 0U;
            __Vtemp624[3U] = 0U;
            __Vtemp624[4U] = 0U;
            __Vtemp624[5U] = 0U;
            __Vtemp624[6U] = 0U;
            __Vtemp624[7U] = 0U;
            __Vtemp624[8U] = 0U;
            __Vtemp624[9U] = 0U;
            __Vtemp624[0xaU] = 0U;
            __Vtemp624[0xbU] = 0U;
            __Vtemp624[0xcU] = 0U;
            __Vtemp624[0xdU] = 0U;
            __Vtemp624[0xeU] = 0U;
            __Vtemp624[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp625, __Vtemp624, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((0x4000U & __Vtemp625[3U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_110 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25) {
            __Vtemp626[0U] = 1U;
            __Vtemp626[1U] = 0U;
            __Vtemp626[2U] = 0U;
            __Vtemp626[3U] = 0U;
            __Vtemp626[4U] = 0U;
            __Vtemp626[5U] = 0U;
            __Vtemp626[6U] = 0U;
            __Vtemp626[7U] = 0U;
            __Vtemp626[8U] = 0U;
            __Vtemp626[9U] = 0U;
            __Vtemp626[0xaU] = 0U;
            __Vtemp626[0xbU] = 0U;
            __Vtemp626[0xcU] = 0U;
            __Vtemp626[0xdU] = 0U;
            __Vtemp626[0xeU] = 0U;
            __Vtemp626[0xfU] = 0U;
            VL_SHIFTL_WWI(512,512,9, __Vtemp627, __Vtemp626, (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor));
            if ((4U & __Vtemp627[0U])) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_2 
                    = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0) 
                             >> 1U));
            }
        }
    }
}
