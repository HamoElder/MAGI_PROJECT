// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VDEPUNCTURING_H_
#define _VDEPUNCTURING_H_  // guard

#include "verilated.h"

//==========

class VDePuncturing__Syms;
class VDePuncturing_VerilatedVcd;


//----------

VL_MODULE(VDePuncturing) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(dummy_bits,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(raw_data_payload_last,0,0);
    VL_OUT8(de_punched_data_valid,0,0);
    VL_IN8(de_punched_data_ready,0,0);
    VL_OUT8(de_punched_data_payload_last,0,0);
    VL_OUT8(de_punched_data_payload_fragment,1,0);
    VL_IN16(raw_data_payload_fragment,15,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ DePuncturing__DOT___zz_mask_cnt;
    CData/*0:0*/ DePuncturing__DOT__mask_cnt;
    CData/*3:0*/ DePuncturing__DOT__cnt;
    CData/*0:0*/ DePuncturing__DOT__raw_data_last;
    CData/*0:0*/ DePuncturing__DOT__when_DePuncturing_l43;
    CData/*0:0*/ DePuncturing__DOT__raw_data_fire;
    CData/*0:0*/ DePuncturing__DOT__de_punched_data_fire;
    SData/*15:0*/ DePuncturing__DOT__raw_data_fragment;
    SData/*15:0*/ DePuncturing__DOT___zz_raw_data_fragment;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VDePuncturing__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VDePuncturing);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VDePuncturing(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VDePuncturing();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VDePuncturing__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VDePuncturing__Syms* symsp, bool first);
  private:
    static QData _change_request(VDePuncturing__Syms* __restrict vlSymsp);
    static QData _change_request_1(VDePuncturing__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VDePuncturing__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VDePuncturing__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VDePuncturing__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VDePuncturing__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VDePuncturing__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VDePuncturing__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VDePuncturing__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VDePuncturing__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
