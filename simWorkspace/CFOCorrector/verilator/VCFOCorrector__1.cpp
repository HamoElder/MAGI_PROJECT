// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCFOCorrector.h for the primary calling header

#include "VCFOCorrector.h"
#include "VCFOCorrector__Syms.h"

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__19(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__19\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_8_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_7_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_6_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_5_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_4_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_3_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_2_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_valid 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_q = 0U;
        }
    }
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__20(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__20\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_1_payload_cha_i = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_valid = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_valid 
                    = vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_valid = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_q = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_q 
                    = vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_q = 0U;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_i = 0U;
    } else {
        if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
            if (vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid) {
                vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_i 
                    = vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i;
            }
        } else {
            vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_0_payload_cha_i = 0U;
        }
    }
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__23(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__23\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q 
        = (0xfffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11)
                      ? (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw)
                      : VL_NEGATE_I((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_y_raw))));
    vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i 
        = (0xfffU & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__shiftRegister_4__DOT__shift_reg_11)
                      ? (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw)
                      : VL_NEGATE_I((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__rotated_x_raw))));
    vlTOPp->rotated_data_payload_cha_q = vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q;
    vlTOPp->rotated_data_payload_cha_i = vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i;
}

VL_INLINE_OPT void VCFOCorrector::_combo__TOP__24(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_combo__TOP__24\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_takeWhen_valid 
        = ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator__DOT__cordic_pipeline_core__DOT___zz_result_valid_11) 
           & (IData)(vlTOPp->enable));
}

VL_INLINE_OPT void VCFOCorrector::_sequent__TOP__25(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_sequent__TOP__25\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1 
        = (0xffffffU & VL_MULS_III(24,24,24, (0xffffffU 
                                              & VL_EXTENDS_II(24,12, (IData)(vlTOPp->CFOCorrector__DOT__cfo_estimator__DOT__auto_corr_core__DOT__shiftRegister_4__DOT__shift_reg_31_payload_cha_i))), 
                                   (0xffffffU & VL_EXTENDS_II(24,12, 
                                                              (0xfffU 
                                                               & ((IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_i) 
                                                                  + (IData)(vlTOPp->CFOCorrector__DOT__phase_rotator_rotated_data_payload_cha_q)))))));
}

void VCFOCorrector::_eval(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_eval\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->_sequent__TOP__4(vlSymsp);
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->_sequent__TOP__6(vlSymsp);
        vlTOPp->_sequent__TOP__7(vlSymsp);
        vlTOPp->_sequent__TOP__8(vlSymsp);
    }
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
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
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__23(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__24(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((IData)(vlTOPp->reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__reset))))) {
        vlTOPp->_sequent__TOP__25(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

VL_INLINE_OPT QData VCFOCorrector::_change_request(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_change_request\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VCFOCorrector::_change_request_1(VCFOCorrector__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_change_request_1\n"); );
    VCFOCorrector* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCFOCorrector::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCFOCorrector::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((ref_data_valid & 0xfeU))) {
        Verilated::overWidthError("ref_data_valid");}
    if (VL_UNLIKELY((ref_data_payload_cha_i & 0xf000U))) {
        Verilated::overWidthError("ref_data_payload_cha_i");}
    if (VL_UNLIKELY((ref_data_payload_cha_q & 0xf000U))) {
        Verilated::overWidthError("ref_data_payload_cha_q");}
    if (VL_UNLIKELY((raw_data_valid & 0xfeU))) {
        Verilated::overWidthError("raw_data_valid");}
    if (VL_UNLIKELY((raw_data_payload_cha_i & 0xf000U))) {
        Verilated::overWidthError("raw_data_payload_cha_i");}
    if (VL_UNLIKELY((raw_data_payload_cha_q & 0xf000U))) {
        Verilated::overWidthError("raw_data_payload_cha_q");}
    if (VL_UNLIKELY((enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
