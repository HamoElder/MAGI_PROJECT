// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPUNCTURING_H_
#define _VPUNCTURING_H_  // guard

#include "verilated.h"

//==========

class VPuncturing__Syms;
class VPuncturing_VerilatedVcd;


//----------

VL_MODULE(VPuncturing) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(raw_data_payload_last,0,0);
    VL_OUT8(punched_data_valid,0,0);
    VL_OUT8(punched_data_payload_last,0,0);
    VL_IN16(raw_data_payload_fragment,15,0);
    VL_OUT16(punched_data_payload_fragment,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ Puncturing__DOT__raw_data_valid_1;
    CData/*0:0*/ Puncturing__DOT__raw_data_last;
    SData/*15:0*/ Puncturing__DOT__raw_data_fragment;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VPuncturing__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPuncturing);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VPuncturing(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VPuncturing();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VPuncturing__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VPuncturing__Syms* symsp, bool first);
  private:
    static QData _change_request(VPuncturing__Syms* __restrict vlSymsp);
    static QData _change_request_1(VPuncturing__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VPuncturing__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VPuncturing__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VPuncturing__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VPuncturing__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(VPuncturing__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VPuncturing__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VPuncturing__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VPuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
