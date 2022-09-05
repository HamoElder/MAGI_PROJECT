// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPREAMBLEDETECTOR_H_
#define _VPREAMBLEDETECTOR_H_  // guard

#include "verilated.h"

//==========

class VPreambleDetector__Syms;
class VPreambleDetector_VerilatedVcd;


//----------

VL_MODULE(VPreambleDetector) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(min_plateau,7,0);
    VL_OUT8(pkg_detected,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_out_valid,0,0);
    VL_OUT8(corr_result_valid,0,0);
    VL_IN16(raw_data_payload_cha_i,11,0);
    VL_IN16(raw_data_payload_cha_q,11,0);
    VL_OUT16(raw_data_out_payload_cha_i,11,0);
    VL_OUT16(raw_data_out_payload_cha_q,11,0);
    VL_OUT64(corr_result_payload_cha_i,35,0);
    VL_OUT64(corr_result_payload_cha_q,35,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ PreambleDetector__DOT__gate_pkg_det;
        CData/*7:0*/ PreambleDetector__DOT__plateau_cnt;
        CData/*0:0*/ PreambleDetector__DOT__powerMeter_1_power_result_valid_regNext;
        CData/*0:0*/ PreambleDetector__DOT__when_PreambleDetector_l66;
        CData/*0:0*/ PreambleDetector__DOT__raw_data_regNext_valid;
        CData/*0:0*/ PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid;
        CData/*0:0*/ PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_0_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_1_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_2_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_3_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_4_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_5_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_6_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_7_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_8_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_9_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_10_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_11_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_12_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_13_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_14_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_15_valid;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_enable;
        CData/*0:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_result_valid;
        SData/*11:0*/ PreambleDetector__DOT__raw_data_regNext_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__raw_data_regNext_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_0_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_0_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_1_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_1_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_2_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_2_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_3_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_3_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_4_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_4_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_5_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_5_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_6_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_6_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_7_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_7_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_8_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_8_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_9_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_9_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_10_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_10_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_11_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_11_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_12_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_12_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_13_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_13_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_14_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_14_payload_cha_q;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_15_payload_cha_i;
        SData/*11:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__shiftRegister_5__DOT__shift_reg_15_payload_cha_q;
        IData/*23:0*/ PreambleDetector__DOT___zz_gate_pkg_det;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_i;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_q;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q;
    };
    struct {
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT__power_val_i;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT__power_val_q;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_0;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_1;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_2;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_3;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_4;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_5;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_6;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_7;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_8;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_9;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_10;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_11;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_12;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_13;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_14;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_5__DOT__shift_reg_15;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_0;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_1;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_2;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_3;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_4;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_5;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_6;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_7;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_8;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_9;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_10;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_11;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_12;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_13;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_14;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_6__DOT__shift_reg_15;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_0;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_1;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_2;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_3;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_4;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_5;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_6;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_7;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_8;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_9;
    };
    struct {
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_10;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_11;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_12;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_13;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_14;
        IData/*23:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__shiftRegister_6__DOT__shift_reg_15;
        QData/*35:0*/ PreambleDetector__DOT__prod_avg_mag;
        QData/*35:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i_1;
        QData/*35:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q_1;
        QData/*35:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_i;
        QData/*35:0*/ PreambleDetector__DOT__autoCorrelator_1__DOT__corr_core__DOT__corr_val_q;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    CData/*0:0*/ __Vm_traceActivity[4];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPreambleDetector__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPreambleDetector);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VPreambleDetector(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VPreambleDetector();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VPreambleDetector__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VPreambleDetector__Syms* symsp, bool first);
  private:
    static QData _change_request(VPreambleDetector__Syms* __restrict vlSymsp);
    static QData _change_request_1(VPreambleDetector__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__10(VPreambleDetector__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VPreambleDetector__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VPreambleDetector__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VPreambleDetector__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__11(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _settle__TOP__9(VPreambleDetector__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
