// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

//==========

void VConvCombTest::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VConvCombTest::eval\n"); );
    VConvCombTest__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ConvCombTest.v", 19, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VConvCombTest::_eval_initial_loop(VConvCombTest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/missdown/MAGI_PROJECT/tmp/job_1/ConvCombTest.v", 19, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VConvCombTest::_combo__TOP__1(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_combo__TOP__1\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->raw_data_ready = (1U & (~ (IData)(vlTOPp->tail_bits_valid)));
}

VL_INLINE_OPT void VConvCombTest::_settle__TOP__3(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_settle__TOP__3\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_pop_payload_fragment 
        = ((0x100U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                      - (IData)(1U))) ? ((0x80U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                          ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_303)
                                          : ((0x40U 
                                              & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                 - (IData)(1U)))
                                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_303)
                                              : ((0x20U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((0x10U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_303)
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
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_303)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_302))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_301)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_300)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_299)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_298))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_297)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_296))))
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
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_295)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_294))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_293)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_292)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_291)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_290))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_289)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_288))))))
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
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_287)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_286))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_285)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_284)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_283)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_282))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_281)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_280))))
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
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_279)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_278))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_277)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_276)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_275)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_274))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_273)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_272)))))
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
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_271)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_270))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_269)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_268)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_267)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_266))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_265)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_264))))
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
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_263)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_262))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_261)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_260)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_259)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_258))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_257)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_256)))))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_255)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_254))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_253)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_252)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_251)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_250))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_249)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_248))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_247)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_246))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_245)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_244)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_243)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_242))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_241)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_240)))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_239)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_238))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_237)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_236)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_235)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_234))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_233)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_232))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_231)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_230))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_229)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_228)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_227)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_226))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_225)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_224))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_223)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_222))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_221)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_220)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_219)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_218))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_217)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_216))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_215)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_214))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_213)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_212)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_211)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_210))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_209)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_208)))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_207)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_206))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_205)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_204)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_203)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_202))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_201)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_200))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_199)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_198))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_197)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_196)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_195)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_194))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_193)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_192)))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_191)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_190))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_189)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_188)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_187)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_186))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_185)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_184))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_183)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_182))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_181)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_180)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_179)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_178))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_177)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_176)))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_175)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_174))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_173)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_172)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_171)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_170))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_169)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_168))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_167)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_166))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_165)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_164)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_163)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_162))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_161)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_160))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_159)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_158))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_157)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_156)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_155)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_154))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_153)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_152))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_151)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_150))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_149)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_148)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_147)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_146))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_145)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_144)))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_143)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_142))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_141)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_140)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_139)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_138))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_137)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_136))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_135)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_134))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_133)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_132)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_131)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_130))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_129)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_128))))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_127)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_126))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_125)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_124)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_123)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_122))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_121)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_120))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_119)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_118))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_117)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_116)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_115)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_114))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_113)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_112)))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_111)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_110))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_109)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_108)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_107)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_106))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_105)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_104))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_103)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_102))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_101)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_100)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_99)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_98))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_97)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_96))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_95)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_94))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_93)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_92)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_91)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_90))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_89)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_88))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_87)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_86))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_85)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_84)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_83)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_82))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_81)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_80)))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_79)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_78))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_77)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_76)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_75)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_74))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_73)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_72))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_71)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_70))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_69)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_68)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_67)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_66))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_65)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_64)))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_63)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_62))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_61)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_60)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_59)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_58))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_57)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_56))))
                          : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                    - (IData)(1U)))
                              ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_55)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_54))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_53)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_52)))
                              : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_51)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_50))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_49)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_48)))))
                         : ((8U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                   - (IData)(1U))) ? 
                            ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                    - (IData)(1U)))
                              ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_47)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_46))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_45)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_44)))
                              : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_43)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_42))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_41)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_40))))
                             : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                       - (IData)(1U)))
                                 ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                           - (IData)(1U)))
                                     ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_39)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_38))
                                     : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_37)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_36)))
                                 : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                           - (IData)(1U)))
                                     ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_35)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_34))
                                     : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_33)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_32))))))
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
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_31)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_30))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_29)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_28)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_27)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_26))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_25)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_24))))
                                : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_23)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_22))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_21)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_20)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_19)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_18))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_17)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_16)))))
                            : ((8U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                      - (IData)(1U)))
                                ? ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_15)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_14))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_13)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_12)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_11)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_10))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_9)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_8))))
                                : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_7)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_6))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_5)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_4)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_3)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_2))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_1)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_data_0))))))))));
}

VL_INLINE_OPT void VConvCombTest::_settle__TOP__4(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_settle__TOP__4\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_lifo_last 
        = ((0x100U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                      - (IData)(1U))) ? ((0x80U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                          ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_303)
                                          : ((0x40U 
                                              & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                 - (IData)(1U)))
                                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_303)
                                              : ((0x20U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((0x10U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_303)
                                                   : 
                                                  ((8U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((4U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_303)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_302))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_301)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_300)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_299)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_298))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_297)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_296))))
                                                    : 
                                                   ((4U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_295)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_294))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_293)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_292)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_291)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_290))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_289)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_288))))))
                                                  : 
                                                 ((0x10U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((8U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((4U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_287)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_286))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_285)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_284)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_283)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_282))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_281)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_280))))
                                                    : 
                                                   ((4U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_279)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_278))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_277)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_276)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_275)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_274))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_273)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_272)))))
                                                   : 
                                                  ((8U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((4U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_271)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_270))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_269)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_268)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_267)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_266))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_265)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_264))))
                                                    : 
                                                   ((4U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_263)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_262))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_261)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_260)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_259)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_258))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_257)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_256)))))))))
            : ((0x80U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                         - (IData)(1U))) ? ((0x40U 
                                             & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                - (IData)(1U)))
                                             ? ((0x20U 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_255)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_254))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_253)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_252)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_251)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_250))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_249)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_248))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_247)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_246))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_245)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_244)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_243)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_242))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_241)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_240)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_239)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_238))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_237)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_236)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_235)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_234))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_233)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_232))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_231)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_230))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_229)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_228)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_227)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_226))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_225)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_224))))))
                                                 : 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_223)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_222))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_221)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_220)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_219)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_218))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_217)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_216))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_215)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_214))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_213)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_212)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_211)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_210))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_209)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_208)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_207)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_206))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_205)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_204)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_203)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_202))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_201)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_200))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_199)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_198))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_197)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_196)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_195)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_194))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_193)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_192)))))))
                                             : ((0x20U 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_191)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_190))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_189)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_188)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_187)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_186))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_185)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_184))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_183)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_182))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_181)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_180)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_179)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_178))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_177)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_176)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_175)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_174))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_173)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_172)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_171)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_170))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_169)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_168))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_167)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_166))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_165)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_164)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_163)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_162))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_161)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_160))))))
                                                 : 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_159)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_158))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_157)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_156)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_155)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_154))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_153)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_152))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_151)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_150))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_149)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_148)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_147)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_146))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_145)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_144)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_143)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_142))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_141)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_140)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_139)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_138))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_137)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_136))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_135)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_134))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_133)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_132)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_131)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_130))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_129)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_128))))))))
                : ((0x40U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                             - (IData)(1U))) ? ((0x20U 
                                                 & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_127)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_126))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_125)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_124)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_123)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_122))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_121)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_120))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_119)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_118))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_117)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_116)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_115)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_114))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_113)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_112)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_111)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_110))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_109)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_108)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_107)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_106))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_105)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_104))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_103)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_102))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_101)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_100)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_99)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_98))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_97)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_96))))))
                                                 : 
                                                ((0x10U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_95)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_94))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_93)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_92)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_91)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_90))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_89)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_88))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_87)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_86))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_85)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_84)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_83)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_82))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_81)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_80)))))
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_79)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_78))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_77)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_76)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_75)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_74))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_73)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_72))))
                                                   : 
                                                  ((4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_71)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_70))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_69)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_68)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_67)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_66))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_65)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_64)))))))
                    : ((0x20U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                 - (IData)(1U))) ? 
                       ((0x10U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                  - (IData)(1U))) ? 
                        ((8U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                - (IData)(1U))) ? (
                                                   (4U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_63)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_62))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_61)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_60)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_59)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_58))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_57)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_56))))
                          : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                    - (IData)(1U)))
                              ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_55)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_54))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_53)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_52)))
                              : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_51)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_50))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_49)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_48)))))
                         : ((8U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                   - (IData)(1U))) ? 
                            ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                    - (IData)(1U)))
                              ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_47)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_46))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_45)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_44)))
                              : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_43)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_42))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_41)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_40))))
                             : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                       - (IData)(1U)))
                                 ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                           - (IData)(1U)))
                                     ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_39)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_38))
                                     : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_37)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_36)))
                                 : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                           - (IData)(1U)))
                                     ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_35)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_34))
                                     : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_33)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_32))))))
                        : ((0x10U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                     - (IData)(1U)))
                            ? ((8U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                      - (IData)(1U)))
                                ? ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_31)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_30))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_29)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_28)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_27)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_26))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_25)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_24))))
                                : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_23)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_22))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_21)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_20)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_19)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_18))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_17)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_16)))))
                            : ((8U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                      - (IData)(1U)))
                                ? ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_15)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_14))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_13)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_12)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_11)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_10))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_9)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_8))))
                                : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_7)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_6))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_5)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_4)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_3)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_2))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_1)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_last_0))))))))));
}