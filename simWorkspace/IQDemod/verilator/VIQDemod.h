// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VIQDEMOD_H_
#define _VIQDEMOD_H_  // guard

#include "verilated.h"

//==========

class VIQDemod__Syms;
class VIQDemod_VerilatedVcd;


//----------

VL_MODULE(VIQDemod) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(unit_data_valid,0,0);
    VL_OUT8(unit_data_payload,7,0);
    VL_IN8(mod_iq_valid,0,0);
    VL_IN16(mod_iq_payload_cha_i,15,0);
    VL_IN16(mod_iq_payload_cha_q,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ IQDemod__DOT__demod_valid_i;
    CData/*0:0*/ IQDemod__DOT__demod_valid_q;
    CData/*0:0*/ IQDemod__DOT__compTable_i;
    CData/*0:0*/ IQDemod__DOT__codeTable_q;
    CData/*0:0*/ IQDemod__DOT__demod_valid;
    CData/*0:0*/ IQDemod__DOT__unit_data_i;
    CData/*0:0*/ IQDemod__DOT__unit_data_q;
    CData/*0:0*/ IQDemod__DOT__unit_valid;
    SData/*15:0*/ IQDemod__DOT__demod_data_i;
    SData/*15:0*/ IQDemod__DOT__demod_data_q;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VIQDemod__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VIQDemod);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VIQDemod(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VIQDemod();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VIQDemod__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VIQDemod__Syms* symsp, bool first);
  private:
    static QData _change_request(VIQDemod__Syms* __restrict vlSymsp);
    static QData _change_request_1(VIQDemod__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VIQDemod__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VIQDemod__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VIQDemod__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VIQDemod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VIQDemod__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(VIQDemod__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VIQDemod__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VIQDemod__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
