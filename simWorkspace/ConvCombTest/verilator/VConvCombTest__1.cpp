// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_settle__TOP__5(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_settle__TOP__5\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_pop_payload_fragment 
        = ((0x100U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                      - (IData)(1U))) ? ((0x80U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                          ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_267)
                                          : ((0x40U 
                                              & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                 - (IData)(1U)))
                                              ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_267)
                                              : ((0x20U 
                                                  & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_267)
                                                  : 
                                                 ((0x10U 
                                                   & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_267)
                                                   : 
                                                  ((8U 
                                                    & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                       - (IData)(1U)))
                                                    ? 
                                                   ((4U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_267)
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_267)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_266))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_265)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_264))))
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
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_263)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_262))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_261)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_260)))
                                                     : 
                                                    ((2U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_259)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_258))
                                                      : 
                                                     ((1U 
                                                       & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                          - (IData)(1U)))
                                                       ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_257)
                                                       : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_256)))))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_255)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_254))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_253)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_252)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_251)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_250))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_249)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_248))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_247)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_246))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_245)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_244)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_243)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_242))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_241)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_240)))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_239)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_238))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_237)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_236)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_235)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_234))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_233)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_232))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_231)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_230))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_229)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_228)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_227)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_226))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_225)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_224))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_223)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_222))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_221)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_220)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_219)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_218))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_217)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_216))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_215)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_214))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_213)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_212)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_211)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_210))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_209)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_208)))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_207)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_206))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_205)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_204)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_203)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_202))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_201)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_200))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_199)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_198))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_197)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_196)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_195)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_194))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_193)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_192)))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_191)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_190))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_189)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_188)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_187)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_186))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_185)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_184))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_183)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_182))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_181)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_180)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_179)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_178))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_177)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_176)))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_175)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_174))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_173)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_172)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_171)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_170))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_169)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_168))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_167)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_166))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_165)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_164)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_163)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_162))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_161)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_160))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_159)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_158))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_157)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_156)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_155)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_154))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_153)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_152))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_151)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_150))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_149)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_148)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_147)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_146))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_145)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_144)))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_143)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_142))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_141)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_140)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_139)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_138))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_137)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_136))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_135)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_134))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_133)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_132)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_131)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_130))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_129)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_128))))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_127)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_126))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_125)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_124)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_123)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_122))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_121)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_120))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_119)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_118))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_117)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_116)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_115)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_114))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_113)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_112)))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_111)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_110))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_109)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_108)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_107)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_106))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_105)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_104))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_103)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_102))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_101)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_100)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_99)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_98))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_97)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_96))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_95)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_94))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_93)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_92)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_91)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_90))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_89)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_88))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_87)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_86))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_85)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_84)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_83)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_82))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_81)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_80)))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_79)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_78))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_77)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_76)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_75)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_74))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_73)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_72))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_71)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_70))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_69)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_68)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_67)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_66))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_65)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_64)))))))
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
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_63)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_62))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_61)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_60)))
                                                    : 
                                                   ((2U 
                                                     & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                        - (IData)(1U)))
                                                     ? 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_59)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_58))
                                                     : 
                                                    ((1U 
                                                      & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                         - (IData)(1U)))
                                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_57)
                                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_56))))
                          : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                    - (IData)(1U)))
                              ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_55)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_54))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_53)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_52)))
                              : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_51)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_50))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_49)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_48)))))
                         : ((8U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                   - (IData)(1U))) ? 
                            ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                    - (IData)(1U)))
                              ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_47)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_46))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_45)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_44)))
                              : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                        - (IData)(1U)))
                                  ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_43)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_42))
                                  : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                            - (IData)(1U)))
                                      ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_41)
                                      : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_40))))
                             : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                       - (IData)(1U)))
                                 ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                           - (IData)(1U)))
                                     ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_39)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_38))
                                     : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_37)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_36)))
                                 : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                           - (IData)(1U)))
                                     ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_35)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_34))
                                     : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                         ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_33)
                                         : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_32))))))
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
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_31)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_30))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_29)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_28)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_27)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_26))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_25)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_24))))
                                : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_23)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_22))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_21)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_20)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_19)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_18))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_17)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_16)))))
                            : ((8U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                      - (IData)(1U)))
                                ? ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_15)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_14))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_13)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_12)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_11)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_10))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_9)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_8))))
                                : ((4U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                          - (IData)(1U)))
                                    ? ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_7)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_6))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_5)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_4)))
                                    : ((2U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                              - (IData)(1U)))
                                        ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_3)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_2))
                                        : ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_1)
                                            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_0))))))))));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__30(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__30\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt;
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select;
    vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0 = 0U;
    vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0 = 0U;
    vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0 = 0U;
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last;
    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last 
        = vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last;
    vlTOPp->__Vdlyvset__ConvCombTest__DOT__streamFifo_4__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT__logic_ram__v0 = 0U;
    vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0 = 0U;
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__37(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__37\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__ConvCombTest__DOT__streamFifo_5__DOT__logic_ram__v0 = 0U;
    if ((1U & (~ ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt)));
            }
        } else {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt = 0U;
            }
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_2_port1 
        = ((0xa7U >= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
            ? vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2
           [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read]
            : vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vxrand6);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1 
        = ((0xa7U >= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
            ? vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1
           [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read]
            : vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vxrand4);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1 
        = ((0xa7U >= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))
            ? vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0
           [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read]
            : vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT____Vxrand2);
    vlTOPp->ConvCombTest__DOT__puncture_core__DOT__puncturing_3__DOT__raw_data_fragment 
        = vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data;
    vlTOPp->ConvCombTest__DOT__puncture_core__DOT__puncturing_2__DOT__raw_data_fragment 
        = vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data;
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                    = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                        ? 2U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2));
            }
        } else {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select = 1U;
            } else {
                if ((0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tail_repeat) {
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                            = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                                ? 2U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select));
                    }
                }
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__halt_cnt))) {
                    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__goto_tail) {
                        vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                            = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_select;
                    }
                }
            } else {
                if ((0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                        = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                            ? 2U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2));
                }
            }
        } else {
            if ((1U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
                if ((0xa7U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    vlTOPp->__Vdly__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select 
                        = ((0U == (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__decoded_ram_select))
                            ? 2U : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT___zz_decoded_ram_select_1));
                }
            }
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_126 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_124 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_122 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_120 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_118 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_116 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__38(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__38\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_114 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_112 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_110 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_108 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_106 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_104 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_102 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_100 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_98 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_96 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_94 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_92 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_90 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_88 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__39(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__39\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_86 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_84 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_82 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_127 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_80 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_125 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_105 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_103 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_101 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_99 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_97 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_95 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_93 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_23 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_89 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__40(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__40\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_21 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_87 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_19 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_9 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_29 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_27 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_37 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_83 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_36 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_15 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_38 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_17 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                               >> 2U)))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_25 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & (~ 
                                                  ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U))) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                   >> 1U)))
                      : 0U)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_113 
        = (7U & ((3U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                               >> 3U))) ? ((1U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 1U)) 
                                           + (1U & 
                                              (~ ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                  >> 2U))))
                  : ((1U == (3U & ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                   >> 3U))) ? (1U & 
                                               ((IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core_de_punched_data_fifo__DOT___zz_logic_ram_port0) 
                                                >> 1U))
                      : 0U)));
}
