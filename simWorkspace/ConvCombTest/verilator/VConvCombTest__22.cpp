// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VConvCombTest.h for the primary calling header

#include "VConvCombTest.h"
#include "VConvCombTest__Syms.h"

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__86(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__86\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_2__v0;
    }
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_1__v0;
    }
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__survival_path_ram_0__v0;
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__93(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__93\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT___zz___05Fzz_decoded_data_payload_fragment 
        = (0x3fU & ((IData)(vlTOPp->ConvCombTest__DOT___zz_decoded_data_payload_fragment) 
                    >> 1U));
    vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT___zz_logic_ram_port0 
        = vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_ram
        [vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_popPtr_valueNext];
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffffe) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | (IData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17))))));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffffd) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17))))) 
                      << 1U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffffb) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17))))) 
                      << 2U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffff7) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17))))) 
                      << 3U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffffef) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17))))) 
                      << 4U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffffdf) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17))))) 
                      << 5U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffffbf) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17))))) 
                      << 6U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffff7f) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17))))) 
                      << 7U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffeff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17))))) 
                      << 8U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffdff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17))))) 
                      << 9U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffffbff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17))))) 
                      << 0xaU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffff7ff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17))))) 
                      << 0xbU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffefff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17))))) 
                      << 0xcU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffdfff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17))))) 
                      << 0xdU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffffbfff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17))))) 
                      << 0xeU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffff7fff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17))))) 
                      << 0xfU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffeffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17))))) 
                      << 0x10U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffdffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17))))) 
                      << 0x11U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffffbffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17))))) 
                      << 0x12U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffff7ffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17))))) 
                      << 0x13U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffefffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17))))) 
                      << 0x14U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffdfffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17))))) 
                      << 0x15U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffffbfffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17))))) 
                      << 0x16U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffff7fffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17))))) 
                      << 0x17U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffeffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17))))) 
                      << 0x18U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffdffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17))))) 
                      << 0x19U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffffbffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1aU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffff7ffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1bU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffefffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1cU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffdfffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1dU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffffbfffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1eU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffff7fffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17))))) 
                      << 0x1fU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffeffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17))))) 
                      << 0x20U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffdffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17))))) 
                      << 0x21U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffffbffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17))))) 
                      << 0x22U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffff7ffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17))))) 
                      << 0x23U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffefffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17))))) 
                      << 0x24U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffdfffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17))))) 
                      << 0x25U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffffbfffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17))))) 
                      << 0x26U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffff7fffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17))))) 
                      << 0x27U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffeffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17))))) 
                      << 0x28U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffdffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17))))) 
                      << 0x29U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffffbffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2aU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffff7ffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2bU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffefffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2cU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffdfffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2dU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffffbfffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2eU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffff7fffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17))))) 
                      << 0x2fU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffeffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17))))) 
                      << 0x30U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffdffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17))))) 
                      << 0x31U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfffbffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17))))) 
                      << 0x32U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfff7ffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17))))) 
                      << 0x33U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffefffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17))))) 
                      << 0x34U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffdfffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17))))) 
                      << 0x35U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xffbfffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17))))) 
                      << 0x36U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xff7fffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17))))) 
                      << 0x37U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfeffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17))))) 
                      << 0x38U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfdffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17))))) 
                      << 0x39U));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xfbffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3aU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xf7ffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3bU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xefffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3cU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xdfffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3dU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0xbfffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3eU));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path = VL_ULL(0);
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path 
                = ((VL_ULL(0x7fffffffffffffff) & vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__survival_path) 
                   | ((QData)((IData)((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17))))) 
                      << 0x3fU));
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__94(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__94\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((1U & (~ (IData)(vlTOPp->tail_bits_valid)))) {
        if (vlTOPp->ConvCombTest__DOT__encoder__DOT__raw_data_fire) {
            vlTOPp->ConvCombTest__DOT__encoder__DOT__coded_data 
                = (((IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_0) 
                    << 8U) | (IData)(vlTOPp->ConvCombTest__DOT__encoder__DOT__code_vec_1));
        }
    }
    vlTOPp->ConvCombTest__DOT__puncture_core__DOT__raw_data_fragment 
        = (0xffffU & (vlTOPp->ConvCombTest__DOT__streamFifo_5__DOT___zz_logic_ram_port0 
                      >> 1U));
    if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__when_DePuncturing_l54)))) {
        if (vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__raw_data_fire) {
            vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__raw_data_fragment 
                = (0xfffU & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_6__DOT___zz_logic_ram_port0) 
                             >> 1U));
        } else {
            if (vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__de_punched_data_fire) {
                vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT__raw_data_fragment 
                    = vlTOPp->ConvCombTest__DOT__de_puncture_core__DOT___zz_raw_data_fragment;
            }
        }
    }
    if ((4U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data 
                = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
        } else {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    } else {
        if ((2U & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state))) {
            if ((1U & (~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__traceback_state)))) {
                vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_node_data 
                    = vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__in_data_rom
                    [vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__cursor];
            }
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__lifo_mux_io_output_payload_fragment_regNext 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)
            ? ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state) 
               & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_0__DOT___zz_pop_payload_fragment))
            : ((~ (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__reorder_state)) 
               & (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__lifo_core__DOT__decoded_lifo_1__DOT___zz_pop_payload_fragment)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_62 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_62 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_60)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_61));
    if (vlTOPp->__Vdlyvset__ConvCombTest__DOT__streamFifo_7__DOT__logic_ram__v0) {
        vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT__logic_ram[vlTOPp->__Vdlyvdim0__ConvCombTest__DOT__streamFifo_7__DOT__logic_ram__v0] 
            = vlTOPp->__Vdlyvval__ConvCombTest__DOT__streamFifo_7__DOT__logic_ram__v0;
    }
    vlTOPp->decoded_data_payload_last = (1U & (IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT___zz_logic_ram_port0));
    vlTOPp->decoded_data_payload_fragment = ((0x80U 
                                              & ((IData)(vlTOPp->ConvCombTest__DOT__streamFifo_7__DOT___zz_logic_ram_port0) 
                                                 << 6U)) 
                                             | (IData)(vlTOPp->ConvCombTest__DOT___zz_decoded_data_payload_fragment));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_60 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_60 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_56)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_57));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_61 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_61 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_58)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_59));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_56 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_56 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_48)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_49));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_57 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_57 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_50)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_51));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_58 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_58 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_52)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_53));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_59 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_59 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_54)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_55));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_48 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_48 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_32)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_33));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_49 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_49 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_34)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_35));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_50 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_50 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_36)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_37));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_51 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_51 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_38)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_39));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_52 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_52 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_40)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_41));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_53 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_53 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_42)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_43));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_54 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_54 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_44)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_45));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_55 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_46) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_47))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_46)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_47));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_55 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_46) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_47))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_46)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_47));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__95(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__95\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_32 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_32 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_33 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_3))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_3));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_33 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_3))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_3));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_34 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_4) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_5))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_4)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_5));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_34 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_4) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_5))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_4)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_5));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_35 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_6) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_7))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_6)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_7));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_35 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_6) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_7))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_6)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_7));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_36 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_8) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_9))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_8)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_9));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_36 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_8) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_9))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_8)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_9));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_37 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_10) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_11))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_10)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_11));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_37 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_10) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_11))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_10)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_11));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_38 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_12) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_13))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_12)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_13));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_38 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_12) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_13))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_12)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_13));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_39 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_14) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_15))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_14)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_15));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_39 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_14) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_15))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_14)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_15));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_40 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_16) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_17))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_16)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_17));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_40 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_16) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_17))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_16)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_17));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_41 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_18) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_19))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_18)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_19));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_41 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_18) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_19))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_18)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_19));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_42 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_20) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_21))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_20)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_21));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_42 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_20) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_21))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_20)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_21));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_43 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_22) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_23))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_22)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_23));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_43 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_22) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_23))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_22)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_23));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_44 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_24) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_25))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_24)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_25));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_44 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_24) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_25))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_24)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_25));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_45 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_26) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_27))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_26)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_27));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_45 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_26) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_27))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_26)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_27));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_46 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_28) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_29))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_28)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_29));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_46 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_28) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_29))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_28)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_29));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_47 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_30) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_31))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_30)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_31));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_47 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_30) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_31))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_30)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_31));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__96(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__96\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_1 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1))
            ? 0U : 1U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_1 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3))
            ? 2U : 3U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_2 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_3 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_2 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5))
            ? 4U : 5U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_3 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7))
            ? 6U : 7U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_4 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_5 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_4 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9))
            ? 8U : 9U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_5 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11))
            ? 0xaU : 0xbU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_6 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_7 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_6 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13))
            ? 0xcU : 0xdU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_7 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15))
            ? 0xeU : 0xfU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_8 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_9 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_8 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17))
            ? 0x10U : 0x11U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_9 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19))
            ? 0x12U : 0x13U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_10 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_11 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_10 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21))
            ? 0x14U : 0x15U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_11 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23))
            ? 0x16U : 0x17U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_12 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_13 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_12 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25))
            ? 0x18U : 0x19U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_13 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27))
            ? 0x1aU : 0x1bU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_14 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_15 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_14 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29))
            ? 0x1cU : 0x1dU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_15 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31))
            ? 0x1eU : 0x1fU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_16 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_17 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__97(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__97\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_16 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33))
            ? 0x20U : 0x21U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_17 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35))
            ? 0x22U : 0x23U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_18 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_19 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_18 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37))
            ? 0x24U : 0x25U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_19 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39))
            ? 0x26U : 0x27U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_20 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_21 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_20 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41))
            ? 0x28U : 0x29U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_21 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43))
            ? 0x2aU : 0x2bU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_22 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_23 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_22 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45))
            ? 0x2cU : 0x2dU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_23 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47))
            ? 0x2eU : 0x2fU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_24 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_25 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_24 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49))
            ? 0x30U : 0x31U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_25 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51))
            ? 0x32U : 0x33U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_26 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_27 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_26 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53))
            ? 0x34U : 0x35U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_27 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55))
            ? 0x36U : 0x37U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_28 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_29 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_28 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57))
            ? 0x38U : 0x39U);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_29 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59))
            ? 0x3aU : 0x3bU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_30 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_val_31 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63))
            ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62)
            : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_30 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61))
            ? 0x3cU : 0x3dU);
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__minVal_1__DOT___zz_min_idx_31 
        = (((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62) 
            <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63))
            ? 0x3eU : 0x3fU);
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__98(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__98\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1));
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__99(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__99\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1));
        }
    }
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__100(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__100\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1));
        }
    }
    if (vlTOPp->ConvCombTest__DOT__decoder__DOT__tbu_core__DOT__tb_finish) {
        vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63 = 0U;
    } else {
        if (vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__raw_data_next) {
            vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63 
                = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__when_AddCompareSelect_l17)
                    ? (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0)
                    : (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1));
        }
    }
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_0)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_0) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_64)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_1)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_96__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_1) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_65)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_2)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_2) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_66)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_65__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_3)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_97__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_3) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_67)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_4)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_4) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_68)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_66__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_5)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_98__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_5) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_69)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_6)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_6) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_70)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_67__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_7)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_99__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_7) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_71)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_8)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_8) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_72)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_68__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_9)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_100__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_9) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_73)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_10)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_10) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_74)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_69__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_11)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_101__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_11) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_75)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_12)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_12) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_76)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_70__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_13)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_102__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_13) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_77)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_14)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_14) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_78)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_71__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_15)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_103__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_15) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_79)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_16)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_16) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_80)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_72__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_17)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_104__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_17) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_81)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_18)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_18) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_82)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_73__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_19)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_105__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_19) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_83)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_20)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_20) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_84)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_74__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_21)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_106__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_21) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_85)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_22)));
}

VL_INLINE_OPT void VConvCombTest::_sequent__TOP__101(VConvCombTest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VConvCombTest::_sequent__TOP__101\n"); );
    VConvCombTest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_22) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_86)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_75__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_23)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_107__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_23) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_87)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_24)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_24) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_88)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_76__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_25)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_108__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_25) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_89)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_26)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_26) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_90)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_77__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_27)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_109__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_27) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_91)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_28)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_28) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_92)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_78__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_29)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_110__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_29) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_93)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_30)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_30) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_94)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_79__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_31)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_111__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_31) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_95)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_32)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_32) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_96)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_80__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_33)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_112__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_33) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_97)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_34)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_34) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_98)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_81__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_35)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_113__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_35) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_99)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_36)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_36) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_100)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_82__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_37)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_114__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_37) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_101)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_38)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_38) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_102)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_83__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_39)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_115__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_39) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_103)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_40)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_40) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_104)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_84__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_41)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_116__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_41) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_105)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_42)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_42) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_106)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_85__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_43)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_117__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_43) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_107)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_44)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_44) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_108)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_86__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_45)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_118__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_45) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_109)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_46)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_46) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_110)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_87__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_47)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_119__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_47) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_111)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_48)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_48) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_112)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_88__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_49)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_120__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_49) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_113)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_50)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_50) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_114)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_89__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_51)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_121__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_51) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_115)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_52)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_52) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_116)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_90__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_53)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_122__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_53) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_117)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_54)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_54) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_118)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_91__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_55)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_123__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_55) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_119)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_56)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_56) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_120)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_92__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_57)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_124__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_57) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_121)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_58)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_58) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_122)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_93__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_59)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_125__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_59) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_123)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_60)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_60) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_124)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_94__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_61)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_126__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_61) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_125)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_62)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_0 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_62) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_126)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_95__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_63)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_127__DOT__branch_weight_1 
        = (0xffffU & ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__node_weight_63) 
                      + (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__candidate_branches_127)));
    vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__when_AddCompareSelect_l17 
        = ((IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_0) 
           <= (IData)(vlTOPp->ConvCombTest__DOT__decoder__DOT__pmu_core__DOT__addCompareSelect_64__DOT__branch_weight_1));
}
