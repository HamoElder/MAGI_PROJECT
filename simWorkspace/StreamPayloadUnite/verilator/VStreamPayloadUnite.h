// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSTREAMPAYLOADUNITE_H_
#define _VSTREAMPAYLOADUNITE_H_  // guard

#include "verilated.h"

//==========

class VStreamPayloadUnite__Syms;
class VStreamPayloadUnite_VerilatedVcd;


//----------

VL_MODULE(VStreamPayloadUnite) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(raw_data_valid,0,0);
    VL_OUT8(raw_data_ready,0,0);
    VL_IN8(raw_data_payload,7,0);
    VL_OUT8(unite_data_valid,0,0);
    VL_IN8(unite_data_ready,0,0);
    VL_OUT(unite_data_payload,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*2:0*/ StreamPayloadUnite__DOT__cnt;
    CData/*0:0*/ StreamPayloadUnite__DOT__raw_data_fire;
    IData/*31:0*/ StreamPayloadUnite__DOT__data_buf;
    QData/*39:0*/ StreamPayloadUnite__DOT___zz_data_buf;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VStreamPayloadUnite__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VStreamPayloadUnite);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VStreamPayloadUnite(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VStreamPayloadUnite();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VStreamPayloadUnite__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VStreamPayloadUnite__Syms* symsp, bool first);
  private:
    static QData _change_request(VStreamPayloadUnite__Syms* __restrict vlSymsp);
    static QData _change_request_1(VStreamPayloadUnite__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VStreamPayloadUnite__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VStreamPayloadUnite__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VStreamPayloadUnite__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VStreamPayloadUnite__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VStreamPayloadUnite__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VStreamPayloadUnite__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VStreamPayloadUnite__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VStreamPayloadUnite__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
