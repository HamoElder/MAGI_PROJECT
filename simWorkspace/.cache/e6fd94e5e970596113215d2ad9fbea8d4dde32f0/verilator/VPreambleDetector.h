// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPREAMBLEDETECTOR_H_
#define _VPREAMBLEDETECTOR_H_  // guard

#include "verilated_heavy.h"

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
    VL_IN16(raw_data_payload_cha_i,11,0);
    VL_IN16(raw_data_payload_cha_q,11,0);
    VL_OUT16(raw_data_out_payload_cha_i,11,0);
    VL_OUT16(raw_data_out_payload_cha_q,11,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ PreambleDetector__DOT__gate_pkg_det;
        CData/*7:0*/ PreambleDetector__DOT__plateau_cnt;
        CData/*0:0*/ PreambleDetector__DOT__powerMeter_1_power_result_valid_regNext;
        CData/*0:0*/ PreambleDetector__DOT__when_PreambleDetector_l67;
        CData/*0:0*/ PreambleDetector__DOT__powerMeter_1__DOT__power_cal_valid;
        CData/*0:0*/ PreambleDetector__DOT__powerMeter_1__DOT__power_result_valid_1;
        CData/*4:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT___zz_cnt;
        CData/*4:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__cnt;
        CData/*0:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_enable;
        CData/*0:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_result_valid;
        SData/*11:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT___zz_I_mem_port0;
        SData/*11:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT___zz_Q_mem_port0;
        IData/*23:0*/ PreambleDetector__DOT___zz_gate_pkg_det;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_i;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT___zz_power_val_q;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_i;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT__power_val_cha_q;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT__power_val_i;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT__power_val_q;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT__sq_i_regNext;
        IData/*23:0*/ PreambleDetector__DOT__powerMeter_1__DOT__sq_q_regNext;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_0;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_1;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_2;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_3;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_4;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_5;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_6;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_7;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_8;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_9;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_10;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_11;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_12;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_13;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_14;
        IData/*19:0*/ PreambleDetector__DOT__powerMeter_1__DOT__shiftRegister_4__DOT__shift_reg_15;
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
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_0;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_1;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_2;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_3;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_4;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_5;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_6;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_7;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_8;
    };
    struct {
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_9;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_10;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_11;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_12;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_13;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_14;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_15;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_4__DOT__shift_reg_16;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_0;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_1;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_2;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_3;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_4;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_5;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_6;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_7;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_8;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_9;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_10;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_11;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_12;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_13;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_14;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_15;
        IData/*23:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__shiftRegister_5__DOT__shift_reg_16;
        QData/*35:0*/ PreambleDetector__DOT__prod_avg_mag;
        QData/*35:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_i_1;
        QData/*35:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT___zz_corr_val_q_1;
        QData/*35:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_i;
        QData/*35:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__corr_core__DOT__corr_val_q;
        SData/*11:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__I_mem[16];
        SData/*11:0*/ PreambleDetector__DOT__crossCorrelator_1__DOT__Q_mem[16];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*4:0*/ __Vdly__PreambleDetector__DOT__crossCorrelator_1__DOT__cnt;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
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
    void eval();
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
    static void _combo__TOP__1(VPreambleDetector__Syms* __restrict vlSymsp);
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
    static void _initial__TOP__9(VPreambleDetector__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__11(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__12(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__13(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__7(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _sequent__TOP__8(VPreambleDetector__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VPreambleDetector__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VPreambleDetector__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
