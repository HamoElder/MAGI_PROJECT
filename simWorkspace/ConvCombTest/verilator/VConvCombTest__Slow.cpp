// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

//==========
CData/*0:0*/ VConvCombTest::__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next[128];
CData/*0:0*/ VConvCombTest::__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_last_next[128];
CData/*0:0*/ VConvCombTest::__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_valid[128];
CData/*0:0*/ VConvCombTest::__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path_last[128];
CData/*0:0*/ VConvCombTest::__Vtable1_ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1[128];
WData/*87:0*/ VConvCombTest::__Vtable2_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[8][3];

VL_CTOR_IMP(VConvCombTest) {
    VConvCombTest__Syms* __restrict vlSymsp = __VlSymsp = new VConvCombTest__Syms(this, name());
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VConvCombTest::__Vconfigure(VConvCombTest__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VConvCombTest::~VConvCombTest() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VConvCombTest::_settle__TOP__2(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_settle__TOP__2\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->raw_data_ready = (1U & (~ (IData)(vlTOPp->tail_bits_valid)));
    vlTOPp->decoded_data_payload_last = (1U & (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT___zz_logic_ram_port0));
    vlTOPp->decoded_data_payload_fragment = (1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__when_ReorderLifo_l40 
        = (1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_valve)));
    vlTOPp->ConvCombTest__DOT__encoder__DOT___zz_r_enc_0 
        = (((IData)(vlTOPp->raw_data_payload_fragment) 
            << 7U) | (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__r_enc_buf));
    vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_fire 
        = ((IData)(vlTOPp->raw_data_valid) & (~ (IData)(vlTOPp->tail_bits_valid)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_select 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select 
        = (3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                 - (IData)(1U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_1 
        = (3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                 - (IData)(1U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2 
        = (3U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
                 - (IData)(1U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l48 
        = (0xa7U <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor 
        = (0x7fU & ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                     ? (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor) 
                         << 1U) + (1U & (IData)((vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1 
                                                 >> (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor)))))
                     : ((1U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                         ? (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor) 
                             << 1U) + (1U & (IData)(
                                                    (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1 
                                                     >> (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor)))))
                         : ((2U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                             ? (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor) 
                                 << 1U) + (1U & (IData)(
                                                        (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port2 
                                                         >> (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__min_cursor)))))
                             : 0U))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid 
        = (1U & (~ ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
                    | (0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid 
        = (1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
                    | (0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_lifo_last 
        = ((0x100U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                      - (IData)(1U))) ? ((0x80U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                          ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267)
                                          : ((0x40U 
                                              & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                 - (IData)(1U)))
                                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267)
                                              : ((0x20U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267)
                                                  : 
                                                 ((0x10U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267)
                                                   : 
                                                  ((8U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((4U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267)
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_267)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_266))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_265)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_264))))
                                                    : 
                                                   ((4U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_263)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_262))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_261)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_260)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_259)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_258))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_257)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_256)))))))))
            : ((0x80U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                         - (IData)(1U))) ? ((0x40U 
                                             & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                - (IData)(1U)))
                                             ? ((0x20U 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_255)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_254))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_253)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_252)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_251)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_250))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_249)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_248))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_247)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_246))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_245)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_244)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_243)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_242))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_241)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_240)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_239)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_238))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_237)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_236)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_235)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_234))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_233)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_232))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_231)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_230))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_229)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_228)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_227)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_226))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_225)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_224))))))
                                                 : 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_223)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_222))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_221)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_220)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_219)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_218))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_217)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_216))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_215)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_214))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_213)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_212)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_211)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_210))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_209)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_208)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_207)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_206))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_205)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_204)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_203)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_202))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_201)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_200))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_199)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_198))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_197)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_196)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_195)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_194))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_193)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_192)))))))
                                             : ((0x20U 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_191)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_190))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_189)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_188)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_187)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_186))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_185)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_184))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_183)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_182))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_181)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_180)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_179)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_178))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_177)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_176)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_175)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_174))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_173)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_172)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_171)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_170))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_169)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_168))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_167)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_166))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_165)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_164)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_163)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_162))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_161)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_160))))))
                                                 : 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_159)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_158))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_157)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_156)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_155)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_154))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_153)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_152))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_151)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_150))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_149)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_148)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_147)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_146))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_145)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_144)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_143)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_142))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_141)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_140)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_139)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_138))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_137)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_136))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_135)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_134))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_133)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_132)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_131)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_130))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_129)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_128))))))))
                : ((0x40U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                             - (IData)(1U))) ? ((0x20U 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_127)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_126))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_125)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_124)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_123)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_122))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_121)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_120))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_119)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_118))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_117)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_116)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_115)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_114))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_113)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_112)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_111)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_110))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_109)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_108)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_107)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_106))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_105)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_104))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_103)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_102))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_101)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_100)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_99)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_98))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_97)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_96))))))
                                                 : 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_95)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_94))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_93)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_92)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_91)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_90))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_89)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_88))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_87)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_86))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_85)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_84)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_83)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_82))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_81)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_80)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_79)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_78))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_77)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_76)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_75)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_74))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_73)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_72))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_71)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_70))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_69)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_68)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_67)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_66))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_65)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_64)))))))
                    : ((0x20U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                 - (IData)(1U))) ? 
                       ((0x10U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                  - (IData)(1U))) ? 
                        ((8U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                - (IData)(1U))) ? (
                                                   (4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_63)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_62))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_61)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_60)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_59)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_58))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_57)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_56))))
                          : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                    - (IData)(1U)))
                              ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_55)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_54))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_53)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_52)))
                              : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_51)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_50))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_49)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_48)))))
                         : ((8U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                   - (IData)(1U))) ? 
                            ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                    - (IData)(1U)))
                              ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_47)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_46))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_45)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_44)))
                              : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_43)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_42))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_41)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_40))))
                             : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                       - (IData)(1U)))
                                 ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                           - (IData)(1U)))
                                     ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_39)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_38))
                                     : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_37)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_36)))
                                 : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                           - (IData)(1U)))
                                     ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_35)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_34))
                                     : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_33)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_32))))))
                        : ((0x10U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                     - (IData)(1U)))
                            ? ((8U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                      - (IData)(1U)))
                                ? ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_31)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_30))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_29)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_28)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_27)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_26))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_25)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_24))))
                                : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_23)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_22))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_21)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_20)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_19)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_18))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_17)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_16)))))
                            : ((8U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                      - (IData)(1U)))
                                ? ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_15)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_14))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_13)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_12)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_11)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_10))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_9)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_8))))
                                : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_7)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_6))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_5)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_4)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_3)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_2))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_1)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_last_0))))))))));
}

void VConvCombTest::_settle__TOP__6(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_settle__TOP__6\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready 
        = ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
           & (0x10bU != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
           & (0x10bU != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_value));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l104 
        = (((0x53U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_write)) 
            & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select) 
               == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select))) 
           | (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pkg_tail));
    vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready 
        = ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__pipe_halt)) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_ready_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_8)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_9)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_10)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_11)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_12)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_13)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_14)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_15)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_16)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_17)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_18)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_19)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_20)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_21)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_22)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_23)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_24)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_25)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_26)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_27)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_28)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_29)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_30)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_31)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_32)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_33)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_34)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_35)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_36)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_37)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_38)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_39)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_40)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_41)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_42)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_43)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_44)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_45)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_46)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_47)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_48)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_49)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_50)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_51)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_52)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_53)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_54)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_55)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_56)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_57)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_58)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_59)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_60)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_61)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_62)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_63)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_64)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_65)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_66)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_67)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_68)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_69)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_70)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_71)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_72)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_73)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_74)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_75)));
}

void VConvCombTest::_settle__TOP__7(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_settle__TOP__7\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_76)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_77)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_78)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_79)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_80)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_81)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_82)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_83)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_84)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_85)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_86)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_87)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_88)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_89)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_90)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_91)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_92)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_93)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_94)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_95)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_96)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_97)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_98)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_99)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_100)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_101)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_102)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_103)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_104)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_105)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_106)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_107)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_108)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_109)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_110)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_111)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_112)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_113)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_114)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_115)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_116)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_117)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_118)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_119)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_120)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_121)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_122)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_123)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_124)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_125)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_126)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63) 
                    + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_127)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_ram_addr_read_2 
        = (0xffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read) 
                    - (IData)(1U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__when_Traceback_l153 
        = (0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read));
    vlTOPp->__Vtableidx2 = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[0U] 
        = vlTOPp->__Vtable2_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx2][0U];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[1U] 
        = vlTOPp->__Vtable2_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx2][1U];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string[2U] 
        = vlTOPp->__Vtable2_ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx2][2U];
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l32 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid) 
            & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
           & (0U != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l32 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid) 
            & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state))) 
           & (0U != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_ready = 0U;
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)))) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_ready 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready;
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_ready 
            = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready;
    }
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1));
}

void VConvCombTest::_settle__TOP__8(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_settle__TOP__8\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_ready) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_valve));
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_valid_regNext) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__decoded_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data_valid_1) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_valid_1) 
           & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full))))));
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->decoded_data_valid = vlTOPp->ConvCombTest__DOT__decoded_fifo_io_pop_valid;
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoded_fifo_io_pop_valid) {
        vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__raw_data_fire 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder_raw_data_ready));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_valid 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__fifo_pop_valve));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready));
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_valueNext 
        = (0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_valueNext 
        = (0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__decoded_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_valueNext 
        = (0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popping) {
        vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25 
        = ((((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
             & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
            & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready)) 
           & (0x10bU != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25 
        = ((((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
             & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
            & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready)) 
           & (0x10bU != (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_valueNext 
        = (0x7ffU & ((IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_value) 
                     + (IData)(vlTOPp->ConvCombTest__DOT__encoded_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement)));
}
