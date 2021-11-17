// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VViterbiDecoder.h for the primary calling header

#include "VViterbiDecoder.h"
#include "VViterbiDecoder__Syms.h"

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__26(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__26\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_pop_payload_fragment 
        = ((0x20U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                     - (IData)(1U))) ? ((0x10U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                  - (IData)(1U)))
                                         ? ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                             ? ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_63)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_62))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_61)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_60)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_59)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_58))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_57)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_56))))
                                             : ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_55)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_54))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_53)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_52)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_51)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_50))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_49)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_48)))))
                                         : ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                             ? ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_47)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_46))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_45)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_44)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_43)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_42))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_41)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_40))))
                                             : ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_39)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_38))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_37)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_36)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_35)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_34))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_33)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_32))))))
            : ((0x10U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                         - (IData)(1U))) ? ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                   - (IData)(1U)))
                                             ? ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_31)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_30))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_29)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_28)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_27)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_26))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_25)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_24))))
                                             : ((4U 
                                                 & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                    - (IData)(1U)))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_23)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_22))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_21)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_20)))
                                                 : 
                                                ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_19)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_18))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_17)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_16)))))
                : ((8U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                          - (IData)(1U))) ? ((4U & 
                                              ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                               - (IData)(1U)))
                                              ? ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_15)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_14))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_13)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_12)))
                                              : ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_11)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_10))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_9)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_8))))
                    : ((4U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                              - (IData)(1U))) ? ((2U 
                                                  & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                     - (IData)(1U)))
                                                  ? 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_7)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_6))
                                                  : 
                                                 ((1U 
                                                   & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                                      - (IData)(1U)))
                                                   ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_5)
                                                   : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_4)))
                        : ((2U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                  - (IData)(1U))) ? 
                           ((1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                   - (IData)(1U))) ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_3)
                             : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_2))
                            : ((1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor) 
                                      - (IData)(1U)))
                                ? (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_1)
                                : (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_data_0)))))));
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__27(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__27\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx1;
    // Body
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid 
        = (1U & (~ ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
                    | (0U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)))));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid 
        = (1U & (~ ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) 
                    | (0U == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)))));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready 
        = ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
           & (0x3fU != (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) 
           & (0x3fU != (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l32 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_pop_valid) 
            & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
           & (0U != (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l32 
        = (((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_pop_valid) 
            & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state))) 
           & (0U != (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_ready = 0U;
    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)))) {
        vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_ready 
            = vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready;
    }
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) {
        vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_ready 
            = vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready;
    }
    __Vtableidx1 = (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next) 
                     << 6U) | (((IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next) 
                                << 5U) | ((((IData)(vlTOPp->raw_data_payload_last) 
                                            & (IData)(vlTOPp->ViterbiDecoder__DOT__raw_data_fire)) 
                                           << 4U) | 
                                          (((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish) 
                                            << 3U) 
                                           | (((IData)(vlTOPp->raw_data_payload_last) 
                                               << 2U) 
                                              | (((IData)(vlTOPp->ViterbiDecoder__DOT__raw_data_fire) 
                                                  << 1U) 
                                                 | (IData)(vlTOPp->reset)))))));
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next 
        = vlTOPp->__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_next
        [__Vtableidx1];
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next 
        = vlTOPp->__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_last_next
        [__Vtableidx1];
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid 
        = vlTOPp->__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_valid
        [__Vtableidx1];
    vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last 
        = vlTOPp->__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__survival_path_last
        [__Vtableidx1];
    if ((0x10U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1 
            = vlTOPp->__Vtable1_ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1
            [__Vtableidx1];
    }
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
           == (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_ready) 
           & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__fifo_pop_valve));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
           & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy));
    vlTOPp->raw_data_ready = ((~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pipe_halt)) 
                              & (IData)(vlTOPp->ViterbiDecoder__DOT__pmu_core__DOT__raw_data_ready_1));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_node_valid_1) 
           & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full)));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid 
        = (1U & ((~ ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_full))))));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1 = 0U;
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) {
        vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_1 = 1U;
    }
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushing) {
        vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__fifo_pop_valve));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping 
        = ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_valid) 
           & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo_io_pop_ready));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_value) 
                   + (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_pushPtr_willIncrement)));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__when_SISOLifo_l25 
        = ((((~ (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state)) 
             & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
            & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0_push_ready)) 
           & (0x3fU != (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_head_cursor)));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__when_SISOLifo_l25 
        = ((((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__reorder_state) 
             & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__lifo_demux_input_valid)) 
            & (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1_push_ready)) 
           & (0x3fU != (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_head_cursor)));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement = 0U;
    if (vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popping) {
        vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__34(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__34\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__halt_cnt;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select;
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT__lifo_last;
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT__lifo_last;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_decoded_ram_select_2 
        = (3U & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select) 
                 - (IData)(1U)));
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__cursor 
        = (7U & ((0U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select))
                  ? (((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor) 
                      << 1U) + (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_0_port1) 
                                      >> (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor))))
                  : ((1U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select))
                      ? (((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor) 
                          << 1U) + (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1) 
                                          >> (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor))))
                      : ((2U == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select))
                          ? (((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor) 
                              << 1U) + (1U & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_survival_path_ram_1_port1) 
                                              >> (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__min_cursor))))
                          : 0U))));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT___zz_logic_ram_port0 
        = vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram
        [vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext];
    if ((4U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((1U & (~ ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish = 1U;
            } else {
                if ((0x1fU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read))) {
                    if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat)))) {
                        vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish = 1U;
                    }
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tb_finish = 0U;
            }
        }
    }
    if (vlTOPp->__Vdlyvset__ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0) {
        vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VViterbiDecoder::_combo__TOP__35(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_combo__TOP__35\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ViterbiDecoder__DOT__raw_data_fire = ((IData)(vlTOPp->raw_data_valid) 
                                                  & (IData)(vlTOPp->raw_data_ready));
}

VL_INLINE_OPT void VViterbiDecoder::_sequent__TOP__36(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_sequent__TOP__36\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l104 
        = (((0xfU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_write)) 
            & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__decoded_ram_select) 
               == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_select))) 
           | (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__pkg_tail));
    vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_valueNext 
        = (0xfU & ((IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_value) 
                   + (IData)(vlTOPp->ViterbiDecoder__DOT__lifo_core__DOT__inverted_order_fifo__DOT__logic_popPtr_willIncrement)));
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__tail_repeat;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state 
        = vlTOPp->__Vdly__ViterbiDecoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT___zz_ram_addr_read_2 
        = (0x1fU & ((IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read) 
                    - (IData)(1U)));
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__when_Traceback_l126 
        = (0x1fU == (IData)(vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__ram_addr_read));
    vlTOPp->__Vtableidx2 = vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state;
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[0U] 
        = vlTOPp->__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx2][0U];
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[1U] 
        = vlTOPp->__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx2][1U];
    vlTOPp->ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string[2U] 
        = vlTOPp->__Vtable2_ViterbiDecoder__DOT__tbu_core__DOT__traceback_state_string
        [vlTOPp->__Vtableidx2][2U];
}

void VViterbiDecoder::_eval(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_eval\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
        vlTOPp->_sequent__TOP__9(vlSymsp);
        vlTOPp->_sequent__TOP__10(vlSymsp);
        vlTOPp->_sequent__TOP__11(vlSymsp);
        vlTOPp->_sequent__TOP__12(vlSymsp);
        vlTOPp->_sequent__TOP__13(vlSymsp);
        vlTOPp->_sequent__TOP__14(vlSymsp);
        vlTOPp->_sequent__TOP__15(vlSymsp);
        vlTOPp->_sequent__TOP__16(vlSymsp);
        vlTOPp->_sequent__TOP__17(vlSymsp);
        vlTOPp->_sequent__TOP__18(vlSymsp);
        vlTOPp->_sequent__TOP__19(vlSymsp);
        vlTOPp->_sequent__TOP__20(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__22(vlSymsp);
        vlTOPp->_sequent__TOP__23(vlSymsp);
        vlTOPp->_sequent__TOP__24(vlSymsp);
        vlTOPp->_sequent__TOP__25(vlSymsp);
        vlTOPp->_sequent__TOP__26(vlSymsp);
        vlTOPp->_sequent__TOP__27(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__34(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__35(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__36(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VViterbiDecoder::_change_request(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_change_request\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VViterbiDecoder::_change_request_1(VViterbiDecoder__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_change_request_1\n"); );
    VViterbiDecoder* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VViterbiDecoder::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VViterbiDecoder::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_last & 0xfeU))) {
        Verilated::overWidthError("raw_data_payload_last");}
    if (VL_UNLIKELY((_zz_in_b & 0xfcU))) {
        Verilated::overWidthError("_zz_in_b");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
