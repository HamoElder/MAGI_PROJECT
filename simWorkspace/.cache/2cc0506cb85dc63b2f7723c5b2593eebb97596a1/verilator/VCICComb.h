// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCICCOMB_H_
#define _VCICCOMB_H_  // guard

#include "verilated.h"

//==========

class VCICComb__Syms;
class VCICComb_VerilatedVcd;


//----------

VL_MODULE(VCICComb) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(result_data_valid,0,0);
    VL_IN(raw_data_payload,20,0);
    VL_OUT(result_data_payload,16,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ CICComb__DOT__result_data_valid_1;
    IData/*16:0*/ CICComb__DOT__delay_data_vec_0;
    IData/*16:0*/ CICComb__DOT__delay_data_vec_1;
    IData/*16:0*/ CICComb__DOT__delay_data_vec_2;
    IData/*16:0*/ CICComb__DOT__pipe_data_vec_0;
    IData/*16:0*/ CICComb__DOT__pipe_data_vec_1;
    IData/*16:0*/ CICComb__DOT__pipe_data_vec_2;
    IData/*16:0*/ CICComb__DOT__result_data_payload_1;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VCICComb__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCICComb);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VCICComb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VCICComb();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VCICComb__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VCICComb__Syms* symsp, bool first);
  private:
    static QData _change_request(VCICComb__Syms* __restrict vlSymsp);
    static QData _change_request_1(VCICComb__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VCICComb__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VCICComb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VCICComb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VCICComb__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VCICComb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VCICComb__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
