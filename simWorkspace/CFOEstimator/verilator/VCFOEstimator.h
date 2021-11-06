// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCFOESTIMATOR_H_
#define _VCFOESTIMATOR_H_  // guard

#include "verilated.h"

//==========

class VCFOEstimator__Syms;
class VCFOEstimator_VerilatedVcd;


//----------

VL_MODULE(VCFOEstimator) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(rotated_data_valid,0,0);
    VL_OUT8(delta_phi_valid,0,0);
    VL_IN16(rotated_data_payload_cha_i,15,0);
    VL_IN16(rotated_data_payload_cha_q,15,0);
    VL_OUT16(delta_phi_payload,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_data_valid;
        CData/*0:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_result_valid_1;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_1;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_2;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_3;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_4;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_5;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_6;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_7;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_8;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_9;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_10;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_11;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_12;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_13;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_14;
        CData/*0:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_valid_15;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14_payload_cha_q;
    };
    struct {
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_i;
        SData/*15:0*/ CFOEstimator__DOT__auto_corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15_payload_cha_q;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_1;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_2;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_3;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_4;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_5;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_6;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_7;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_8;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_9;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_10;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_11;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_12;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_13;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_14;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_15;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_16;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_17;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_18;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_19;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_20;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_21;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_22;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_23;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_24;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_25;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_26;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_27;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_28;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_29;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_30;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_y;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_31;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_32;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_33;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_34;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_35;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_36;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_37;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_38;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_39;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_40;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_41;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_42;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_43;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_44;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_45;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_z;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_46;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_47;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_48;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_49;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_50;
        SData/*15:0*/ CFOEstimator__DOT__cordic_core__DOT___zz_result_payload_x_51;
        IData/*16:0*/ CFOEstimator__DOT___zz_when_SInt_l125;
        IData/*16:0*/ CFOEstimator__DOT___zz_when_SInt_l125_4;
        IData/*16:0*/ CFOEstimator__DOT___zz_delta_phi_payload_1;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_i;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT___zz_corr_val_q;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_i;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__corr_val_q;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__k1;
    };
    struct {
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_i;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__mul_q;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_0;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_1;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_2;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_3;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_4;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_5;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_6;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_7;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_8;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_9;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_10;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_11;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_12;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_13;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_14;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_3__DOT__shift_reg_15;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_0;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_1;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_2;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_3;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_4;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_5;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_6;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_7;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_8;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_9;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_10;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_11;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_12;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_13;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_14;
        IData/*31:0*/ CFOEstimator__DOT__auto_corr_core__DOT__corr_core__DOT__shiftRegisterE_4__DOT__shift_reg_15;
        QData/*32:0*/ CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_2;
        QData/*32:0*/ CFOEstimator__DOT___zz___05Fzz_when_SInt_l332_5;
        QData/*32:0*/ CFOEstimator__DOT___zz___05Fzz_delta_phi_payload_5;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCFOEstimator__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCFOEstimator);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCFOEstimator(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCFOEstimator();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCFOEstimator__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCFOEstimator__Syms* symsp, bool first);
  private:
    static QData _change_request(VCFOEstimator__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCFOEstimator__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__12(VCFOEstimator__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCFOEstimator__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCFOEstimator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCFOEstimator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__10(VCFOEstimator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VCFOEstimator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VCFOEstimator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VCFOEstimator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VCFOEstimator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VCFOEstimator__Syms* __restrict vlSymsp);
    static void _sequent__TOP__9(VCFOEstimator__Syms* __restrict vlSymsp);
    static void _settle__TOP__11(VCFOEstimator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VCFOEstimator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
