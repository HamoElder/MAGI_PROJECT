// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCORRELATOR_H_
#define _VCORRELATOR_H_  // guard

#include "verilated.h"

//==========

class VCorrelator__Syms;
class VCorrelator_VerilatedVcd;


//----------

VL_MODULE(VCorrelator) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_0_valid,0,0);
    VL_IN8(raw_data_1_valid,0,0);
    VL_OUT8(corr_result_valid,0,0);
    VL_IN16(raw_data_0_payload_cha_i,15,0);
    VL_IN16(raw_data_0_payload_cha_q,15,0);
    VL_IN16(raw_data_1_payload_cha_i,15,0);
    VL_IN16(raw_data_1_payload_cha_q,15,0);
    VL_OUT(corr_result_payload_cha_i,31,0);
    VL_OUT(corr_result_payload_cha_q,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ Correlator__DOT___zz_enable;
    CData/*0:0*/ Correlator__DOT___zz_corr_result_valid;
    IData/*31:0*/ Correlator__DOT___zz_corr_val_i_1;
    IData/*31:0*/ Correlator__DOT___zz_corr_val_q_1;
    IData/*31:0*/ Correlator__DOT__corr_val_i;
    IData/*31:0*/ Correlator__DOT__corr_val_q;
    IData/*31:0*/ Correlator__DOT___zz_corr_val_i;
    IData/*31:0*/ Correlator__DOT___zz_corr_val_q;
    IData/*31:0*/ Correlator__DOT__shiftRegister_2__DOT__shift_reg_0;
    IData/*31:0*/ Correlator__DOT__shiftRegister_2__DOT__shift_reg_1;
    IData/*31:0*/ Correlator__DOT__shiftRegister_2__DOT__shift_reg_2;
    IData/*31:0*/ Correlator__DOT__shiftRegister_2__DOT__shift_reg_3;
    IData/*31:0*/ Correlator__DOT__shiftRegister_3__DOT__shift_reg_0;
    IData/*31:0*/ Correlator__DOT__shiftRegister_3__DOT__shift_reg_1;
    IData/*31:0*/ Correlator__DOT__shiftRegister_3__DOT__shift_reg_2;
    IData/*31:0*/ Correlator__DOT__shiftRegister_3__DOT__shift_reg_3;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCorrelator__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCorrelator);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCorrelator(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCorrelator();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCorrelator__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCorrelator__Syms* symsp, bool first);
  private:
    static QData _change_request(VCorrelator__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCorrelator__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCorrelator__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCorrelator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCorrelator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VCorrelator__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VCorrelator__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VCorrelator__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
